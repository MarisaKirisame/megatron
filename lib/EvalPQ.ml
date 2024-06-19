open Ast
open Core
open EXN
open Eval
open Metric

module EVAL : Eval = struct
  let name = "PQ"
  let current_time = ref (TotalOrder.create ())

  type proc_time = Open of TotalOrder.t | Close of TotalOrder.t * TotalOrder.t

  type meta = {
    (*time of bbs*)
    bb_time_table : (string, TotalOrder.t) Hashtbl.t;
    proc_time_table : (string, proc_time) Hashtbl.t;
    mutable alive : bool;
  }

  let make_node (p : _ prog) ~name ~attr ~prop ~extern_id (children : meta node list) : meta node =
    ignore p;
    {
      m =
        {
          bb_time_table = Hashtbl.create (module String);
          proc_time_table = Hashtbl.create (module String);
          alive = true;
        };
      id = count ();
      name;
      attr;
      prop;
      extern_id;
      var = Hashtbl.create (module String);
      children;
      parent = None;
      prev = None;
      next = None;
    }

  type recompute_func = RecomputeBB of string | RecomputeProc of string

  let recompute_to_string = function RecomputeBB x -> x | RecomputeProc x -> x

  module PriorityQueue = PrioritySet.Make (struct
    type t = TotalOrder.t * meta node * recompute_func

    let compare (l, _, _) (r, _, _) = TotalOrder.compare l r
  end)

  let queue = PriorityQueue.create ()
  let queue_isempty () = PriorityQueue.is_empty queue
  let queue_pop () = PriorityQueue.pop queue
  let queue_peek () = PriorityQueue.peek queue
  let queue_size () = PriorityQueue.size queue

  let queue_push x y z m : unit =
    let result = PriorityQueue.add queue (x, y, z) in
    ignore result;
    (*print_endline ("pushed " ^ (string_of_int y.id) ^ " " ^ string_of_bool result);*)
    meta_write m y.id

  let queue_force_push x y z m : unit =
    meta_write m y.id;
    if PriorityQueue.add queue (x, y, z) then () else panic "push false"

  let bb_dirtied (n : meta node) (bb_name : string) (m : metric) : unit =
    match Hashtbl.find n.m.bb_time_table bb_name with
    | Some order -> queue_push order n (RecomputeBB bb_name) m
    | None -> ()

  let var_modified (p : _ prog) (n : meta node) (prop_name : string) (m : metric) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadVar (path, read_prop_name) ->
              if String.equal prop_name read_prop_name then
                List.iter (reversed_path path n) ~f:(fun dirtied_node -> bb_dirtied dirtied_node bb_name m)
              else ()
          | ReadHasPath _ -> () (*property being changed cannot change haspath status*)
          | ReadProp _ | ReadAttr _ -> ()
        in
        List.iter reads ~f:dirty)

  let rec eval_stmt (p : _ prog) (n : meta node) (s : stmt) (m : metric) =
    match s with
    | Write (path, prop_name, expr) ->
        write m n.id;
        let new_value = eval_expr n expr m in
        let new_node = eval_path n path in
        (match Hashtbl.find new_node.var prop_name with
        | None -> ()
        | Some value -> if equal_value value new_value then () else var_modified p new_node prop_name m);
        Hashtbl.set new_node.var ~key:prop_name ~data:new_value
    | BBCall bb_name ->
        current_time := TotalOrder.add_next !current_time;
        Hashtbl.add_exn n.m.bb_time_table ~key:bb_name ~data:!current_time;
        eval_stmts p n (stmts_of_basic_block p bb_name) m
    | ChildrenCall proc_name ->
        List.iter n.children ~f:(fun new_node ->
            current_time := TotalOrder.add_next !current_time;
            let open_time = !current_time in
            eval_stmts p new_node (stmts_of_processed_proc p proc_name) m;
            Hashtbl.add_exn new_node.m.proc_time_table ~key:proc_name ~data:(Close (open_time, !current_time)))

  and eval_stmts (p : _ prog) (n : meta node) (s : stmts) (m : metric) : unit =
    List.iter s ~f:(fun stmt -> eval_stmt p n stmt m)

  let eval (p : _ prog) (n : meta node) (m : metric) =
    List.iter p.order ~f:(fun pass_name ->
        current_time := TotalOrder.add_next !current_time;
        let open_time = !current_time in
        eval_stmts p n (stmts_of_processed_proc p pass_name) m;
        Hashtbl.add_exn n.m.proc_time_table ~key:pass_name ~data:(Close (open_time, !current_time)))

  let remove_children (p : _ prog) (x : meta node) (n : int) (m : metric) : unit =
    match List.split_n x.children n with
    | lhs, removed :: rhs ->
        x.children <- List.tl_exn x.children;
        (match removed.prev with Some prev -> prev.next <- removed.next | None -> ());
        (match removed.next with Some next -> next.prev <- removed.prev | None -> ());
        removed.m.alive <- false;
        x.children <- List.append lhs rhs;
        Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
            let reads = reads_of_stmts stmts in
            let dirty read =
              match read with
              | ReadVar (Self, _) | ReadHasPath Parent | ReadVar (Parent, _) -> ()
              | ReadHasPath First | ReadHasPath Last -> if List.is_empty x.children then bb_dirtied x bb_name m else ()
              | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x bb_name m else ()
              | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x bb_name m else ()
              | ReadHasPath Prev | ReadVar (Prev, _) -> (
                  match removed.next with Some x -> bb_dirtied x bb_name m | None -> ())
              | ReadHasPath Next | ReadVar (Next, _) -> (
                  match removed.prev with Some x -> bb_dirtied x bb_name m | None -> ())
              | ReadProp _ | ReadAttr _ -> ()
              | _ -> raise (EXN (show_read read))
            in
            List.iter reads ~f:dirty)
    | _ -> panic "bad argument"

  let add_children (p : _ prog) (x : meta node) (y : meta node) (n : int) (m : metric) : unit =
    let lhs, rhs = List.split_n x.children n in
    x.children <- List.append lhs (y :: rhs);
    (match List.last lhs with
    | Some tl ->
        y.prev <- Some tl;
        tl.next <- Some y
    | None -> y.prev <- None);
    (match List.hd rhs with
    | Some hd ->
        y.next <- Some hd;
        hd.prev <- Some y
    | None -> y.next <- None);
    y.parent <- Some x;
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadHasPath Parent | ReadVar (Parent, _) -> ()
          | ReadHasPath First | ReadHasPath Last ->
              if phys_equal (List.length x.children) 1 then bb_dirtied x bb_name m else ()
          | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x bb_name m else ()
          | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x bb_name m else ()
          | ReadHasPath Prev | ReadVar (Prev, _) -> ( match y.next with Some x -> bb_dirtied x bb_name m | None -> ())
          | ReadHasPath Next | ReadVar (Next, _) -> ( match y.prev with Some x -> bb_dirtied x bb_name m | None -> ())
          | ReadVar (Self, _) | ReadProp _ | ReadAttr _ -> ()
          | _ -> raise (EXN (show_read read))
        in
        List.iter reads ~f:dirty);
    (*print_endline ("add: " ^ string_of_int y.id);*)
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc, _)) ->
        if Option.is_some (Hashtbl.find x.m.proc_time_table proc) then (
          let down, up = get_bb_from_proc p proc in
          let time : TotalOrder.t =
            match y.prev with
            | None -> TotalOrder.add_next (Hashtbl.find_exn x.m.bb_time_table (Option.value_exn down))
            | Some x -> (
                match Hashtbl.find_exn x.m.proc_time_table proc with
                | Open t -> TotalOrder.add_next t
                | Close (_, t) -> TotalOrder.add_next t)
          in
          (*print_endline ("pushed " ^ string_of_int y.id ^ "." ^ proc);*)
          Hashtbl.add_exn y.m.proc_time_table proc (Open time);
          queue_force_push time y (RecomputeProc proc) m)
        else () (*otherwise this proc is already in the queue with y's ancestor.*))

  let rec recalculate_aux (p : _ prog) (m : metric) =
    if queue_isempty () then ()
    else
      let x, y, z = queue_peek () in
      meta_read m y.id;
      m.queue_size_acc <- m.queue_size_acc + queue_size ();
      (*(match z with RecomputeProc z | RecomputeBB z -> print_endline ("popped " ^ string_of_int y.id ^ "." ^ z); recursive_print_id_up y);*)
      if y.m.alive then (
        match z with
        | RecomputeBB z -> eval_stmts p y (stmts_of_basic_block p z) m
        | RecomputeProc z ->
            let old_time = !current_time in
            current_time := x;
            eval_stmts p y (stmts_of_processed_proc p z) m;
            Hashtbl.set y.m.proc_time_table ~key:z ~data:(Close (x, !current_time));
            current_time := old_time)
      else ();
      let x', y', z' = queue_pop () in
      ignore (y', z');
      if not (phys_equal (TotalOrder.compare x x') 0) then (
        print_endline ("peek " ^ string_of_int y.id ^ "." ^ recompute_to_string z);
        print_endline ("pop  " ^ string_of_int y'.id ^ "." ^ recompute_to_string z');
        recursive_print_id_up y;
        recursive_print_id_up y')
      else ();
      assert (phys_equal (TotalOrder.compare x x') 0);
      recalculate_aux p m

  let rec check (p : _ prog) (n : meta node) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> ignore (Hashtbl.find_exn n.m.bb_time_table bb));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check p)

  let recalculate (p : _ prog) (n : meta node) (m : metric) =
    recalculate_aux p m;
    check p n

  let add_prop (p : _ prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m n.id;
    Hashtbl.add_exn n.prop ~key:name ~data:v;
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
          | ReadProp read_name -> if String.equal name read_name then bb_dirtied n bb_name m else ()
        in
        List.iter reads ~f:dirty)

  let remove_prop (p : _ prog) (n : meta node) (name : string) (m : metric) : unit =
    write m n.id;
    ignore (Hashtbl.find_exn n.prop name);
    Hashtbl.remove n.prop name;
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
          | ReadProp read_name -> if String.equal name read_name then bb_dirtied n bb_name m else ()
        in
        List.iter reads ~f:dirty)

  let add_attr (p : _ prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m n.id;
    Hashtbl.add_exn n.attr name v;
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        ignore bb_name;
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
          | ReadAttr read_name -> if String.equal name read_name then bb_dirtied n bb_name m else ()
          | _ -> raise (EXN (show_read read))
        in
        List.iter reads ~f:dirty)

  let remove_attr (p : _ prog) (n : meta node) (name : string) (m : metric) : unit =
    write m n.id;
    ignore (Hashtbl.find_exn n.attr name);
    Hashtbl.remove n.attr name;
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        ignore bb_name;
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
          | ReadAttr read_name -> if String.equal name read_name then bb_dirtied n bb_name m else ()
          | _ -> raise (EXN (show_read read))
        in
        List.iter reads ~f:dirty)
end
