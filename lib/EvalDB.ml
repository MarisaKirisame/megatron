open Ast
open Core
open EXN
open Eval
open Metric

module EVAL : Eval = struct
  let name = "DB"
  let counter : int ref = ref 0

  let count () =
    let ret = !counter in
    counter := !counter + 1;
    ret

  type meta = { bb_dirtied : (string, bool) Hashtbl.t; recursive_bb_dirtied : (string, bool) Hashtbl.t }

  let make_node (p : _ prog) (children : meta node list) : meta node =
    ignore p;
    {
      id = count ();
      m = { bb_dirtied = Hashtbl.create (module String); recursive_bb_dirtied = Hashtbl.create (module String) };
      dict = Hashtbl.create (module String);
      children;
      parent = None;
      prev = None;
      next = None;
    }

  let rec set_recursive_bb_dirtied (n : meta node) (bb_name : string) (m : metric) : unit =
    meta_write m n.id;
    if Hashtbl.find_exn n.m.recursive_bb_dirtied bb_name then ()
    else (
      Hashtbl.set n.m.recursive_bb_dirtied ~key:bb_name ~data:true;
      match n.parent with Some p -> set_recursive_bb_dirtied p bb_name m | None -> ())

  let bb_dirtied (n : meta node) (bb_name : string) (m : metric) : unit =
    meta_write m n.id;
    Hashtbl.set n.m.bb_dirtied ~key:bb_name ~data:true;
    set_recursive_bb_dirtied n bb_name m

  let rec initialize_bb_dirtied_aux (n : meta node) (bb_name : string) (m : metric) : unit =
    meta_write m n.id;
    Hashtbl.set n.m.bb_dirtied ~key:bb_name ~data:true;
    Hashtbl.set n.m.recursive_bb_dirtied ~key:bb_name ~data:true;
    List.iter n.children ~f:(fun n -> initialize_bb_dirtied_aux n bb_name m)

  let initialize_bb_dirtied (n : meta node) (bb_name : string) (m : metric) : unit =
    initialize_bb_dirtied_aux n bb_name m;
    set_recursive_bb_dirtied n bb_name m;
    m.meta_write_count <- m.meta_write_count - 1

  let prop_modified (p : _ prog) (n : meta node) (prop_name : string) (m : metric) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadProp (path, read_prop_name) ->
              if String.equal prop_name read_prop_name then
                List.iter (reversed_path path n) ~f:(fun dirtied_node -> bb_dirtied dirtied_node bb_name m)
              else ()
          | ReadHasPath _ -> () (*property being changed cannot change haspath status*)
        in
        List.iter reads ~f:dirty)

  let rec eval_stmt (p : _ prog) (n : meta node) (s : stmt) (m : metric) : unit =
    match s with
    | ChildrenCall proc_name ->
        List.iter n.children ~f:(fun new_node -> eval_stmts p new_node (stmts_of_processed_proc p proc_name) m)
    | Write (path, prop_name, expr) ->
        write m n.id;
        let new_node = eval_path n path in
        if Option.is_some (Hashtbl.find new_node.dict prop_name) then prop_modified p new_node prop_name m else ();
        Hashtbl.set new_node.dict ~key:prop_name ~data:(eval_expr n expr m)
    | BBCall bb_name ->
        Hashtbl.add_exn n.m.bb_dirtied ~key:bb_name ~data:false;
        Hashtbl.add_exn n.m.recursive_bb_dirtied ~key:bb_name ~data:false;
        eval_stmts p n (stmts_of_basic_block p bb_name) m

  and eval_stmts (p : _ prog) (n : meta node) (s : stmts) (m : metric) : unit =
    List.iter s ~f:(fun stmt -> eval_stmt p n stmt m)

  let eval (p : _ prog) (n : meta node) (m : metric) : unit =
    List.iter p.order ~f:(fun pass_name -> eval_stmts p n (stmts_of_processed_proc p pass_name) m)

  let remove_children (p : _ prog) (x : meta node) (n : int) (m : metric) : unit =
    match List.split_n x.children n with
    | lhs, removed :: rhs ->
        x.children <- List.tl_exn x.children;
        (match removed.prev with Some prev -> prev.next <- removed.next | None -> ());
        (match removed.next with Some next -> next.prev <- removed.prev | None -> ());
        x.children <- List.append lhs rhs;
        Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
            let reads = reads_of_stmts stmts in
            let dirty read =
              match read with
              | ReadProp (Self, _) | ReadHasPath Parent | ReadProp (Parent, _) -> ()
              | ReadHasPath First | ReadHasPath Last -> if List.is_empty x.children then bb_dirtied x bb_name m else ()
              | ReadProp (First, _) -> if List.is_empty lhs then bb_dirtied x bb_name m else ()
              | ReadProp (Last, _) -> if List.is_empty rhs then bb_dirtied x bb_name m else ()
              | ReadHasPath Prev | ReadProp (Prev, _) -> (
                  match removed.next with Some x -> bb_dirtied x bb_name m | None -> ())
              | ReadHasPath Next | ReadProp (Next, _) -> (
                  match removed.prev with Some x -> bb_dirtied x bb_name m | None -> ())
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
    | None -> y.prev <- None);
    y.parent <- Some x;
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb_name, stmts)) ->
        initialize_bb_dirtied y bb_name m;
        let reads = reads_of_stmts stmts in
        let dirty read =
          match read with
          | ReadHasPath Parent | ReadProp (Parent, _) -> ()
          | ReadHasPath First | ReadHasPath Last ->
              if phys_equal (List.length x.children) 1 then bb_dirtied x bb_name m else ()
          | ReadProp (First, _) -> if List.is_empty lhs then bb_dirtied x bb_name m else ()
          | ReadProp (Last, _) -> if List.is_empty rhs then bb_dirtied x bb_name m else ()
          | ReadHasPath Prev | ReadProp (Prev, _) -> (
              match y.next with Some x -> bb_dirtied x bb_name m | None -> ())
          | ReadHasPath Next | ReadProp (Next, _) -> (
              match y.prev with Some x -> bb_dirtied x bb_name m | None -> ())
          | ReadProp (Self, _) -> ()
          | _ -> raise (EXN (show_read read))
        in
        List.iter reads ~f:dirty)

  let rec recalculate_aux (p : _ prog) (n : meta node) (down_name : string option) (up_name : string option)
      (m : metric) =
    meta_read m n.id;
    let rerun_if_dirty name =
      if Hashtbl.find_exn n.m.bb_dirtied name then (
        eval_stmts p n (stmts_of_basic_block p name) m;
        Hashtbl.set n.m.bb_dirtied ~key:name ~data:false)
      else ()
    in
    let optional_recursive_dirtied name =
      match name with None -> false | Some name -> Hashtbl.find_exn n.m.recursive_bb_dirtied name
    in
    if optional_recursive_dirtied down_name || optional_recursive_dirtied up_name then (
      (match down_name with None -> () | Some dn -> rerun_if_dirty dn);
      List.iter n.children ~f:(fun n -> recalculate_aux p n down_name up_name m);
      match up_name with None -> () | Some un -> rerun_if_dirty un)
    else ();
    let clean oname =
      match oname with None -> () | Some name -> Hashtbl.set n.m.recursive_bb_dirtied ~key:name ~data:false
    in
    clean down_name;
    clean up_name

  let recalculate (p : _ prog) (n : meta node) (m : metric) : unit =
    List.iter p.order ~f:(fun name ->
        let down, up = get_bb_from_proc p name in
        recalculate_aux p n down up m)
end
