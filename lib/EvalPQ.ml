open Ast
open Core
open EXN
open Eval

let current_time = ref (TotalOrder.create ())

type meta = {
  to_dict: (string, TotalOrder.t) Hashtbl.t;
}

let make_node (children: meta node list) (p: _ prog): meta node = 
  ignore p; {
  m = {
    to_dict = Hashtbl.create (module String);
  };
  id = count();
  dict = Hashtbl.create (module String);
  children = children; 
  parent = None;
  prev = None;
  next = None;
}

module PriorityQueue = PrioritySet.Make (struct
  type t = TotalOrder.t * meta node * string
  let compare (l, _, _) (r, _, _) = TotalOrder.compare l r
end)

let queue = PriorityQueue.create ()

let queue_isempty () = PriorityQueue.is_empty queue

let queue_pop () = PriorityQueue.pop queue

let queue_peek () = PriorityQueue.peek queue

let queue_push x y z: unit = 
  if PriorityQueue.add queue (x, y, z) 
  then
    print_endline (string_of_int (y.id) ^ "." ^ z ^ " enqueued!")
  else ()

let proc_dirtied (n: meta node) (proc_name: string): unit = 
  match Hashtbl.find n.m.to_dict proc_name with
  | Some order -> queue_push order n proc_name
  | None -> ()

let prop_modified (p: _ prog) (n: meta node) (prop_name: string): unit = 
  Hashtbl.iter p.procs ~f:(fun (ProcDecl(proc_name, stmt)) -> 
    let reads = reads_of_stmt stmt in
    let dirty read = 
      (match read with
      | ReadProp(path, read_prop_name) -> 
          if String.equal prop_name read_prop_name then 
          List.iter (reversed_path path n) ~f:(fun dirtied_node -> proc_dirtied dirtied_node proc_name)
          else ()
      | ReadHasPath _ -> () (*property being changed cannot change haspath status*)) in
    List.iter reads ~f:dirty)

let rec eval_stmt (p: _ prog) (n: meta node) (s: stmt) = 
  let recurse s = eval_stmt p n s in
  match s with
  | TailCall(path, proc_name) -> 
      let new_node = eval_path n path in
      if Option.is_none (Hashtbl.find new_node.m.to_dict proc_name) 
      then (
        print_endline "tailcalling!";
        current_time := TotalOrder.add_next (!current_time);
        Hashtbl.add_exn new_node.m.to_dict ~key:proc_name ~data:(!current_time);
        eval_stmt p new_node (stmt_of_proc_decl (Hashtbl.find_exn p.procs proc_name))
      )
      else ()
  | Seq(x, y) -> recurse x; recurse y
  | Write(path, prop_name, expr) -> 
      let new_node = eval_path n path in
      if Option.is_some (Hashtbl.find new_node.dict prop_name) then prop_modified p new_node prop_name else ();
      Hashtbl.set new_node.dict ~key:prop_name ~data:(eval_expr n expr) 
  | IfStmt(i, t, e) -> if bool_of_value (eval_expr n i) then recurse t else recurse e
  | Skip -> ()
  | _ -> raise (EXN (show_stmt s))
    
let eval (p: _ prog) (n: meta node) = eval_stmt p n (stmt_of_proc_decl (Hashtbl.find_exn p.procs "main"))

(*lets try to get add/remove from head of list working then generalize*)

let remove_children (x: meta node) (n: int) (p: _ prog): unit =
  let (lhs, removed :: rhs) = List.split_n x.children n in
  x.children <- List.tl_exn x.children;
  (match removed.prev with
  | Some prev -> prev.next <- removed.next
  | None -> ());
  (match removed.next with
  | Some next -> next.prev <- removed.prev
  | None -> ());
  x.children <- List.append lhs rhs;
  Hashtbl.iter p.procs ~f:(fun (ProcDecl(proc_name, stmt)) -> 
    let reads = reads_of_stmt stmt in
    let dirty read = (
      match read with
      | ReadHasPath(Parent) | ReadProp(Parent, _) -> ()
      | ReadHasPath(First) -> if List.is_empty x.children then proc_dirtied x proc_name else ()
      | ReadProp(First, _) -> if List.is_empty lhs then proc_dirtied x proc_name else ()
      | ReadHasPath(Last) -> if List.is_empty x.children then proc_dirtied x proc_name else ()
      | ReadProp(Last, _) -> if List.is_empty rhs then proc_dirtied x proc_name else ()
      | ReadHasPath(Prev) | ReadProp(Prev, _) -> (match removed.next with Some x -> proc_dirtied x proc_name | None -> ())
      | ReadHasPath(Next) | ReadProp(Next, _) -> (match removed.prev with Some x -> proc_dirtied x proc_name | None -> ())
      | ReadProp(Self, _) -> ()
      | _ -> raise (EXN (show_read read))) in
    List.iter reads ~f:dirty)

let add_children (x: meta node) (y: meta node) (n: int) (p: _ prog): unit =
  let (lhs, rhs) = List.split_n x.children n in
  x.children <- List.append lhs (y :: rhs);
  (match List.last lhs with
  | Some tl -> y.prev <- Some tl; tl.next <- Some y
  | None -> y.prev <- None);
  (match List.hd rhs with
  | Some hd -> y.next <- Some hd; hd.prev <- Some y
  | None -> y.prev <- None);
  y.parent <- Some x;
  Hashtbl.iter p.procs ~f:(fun (ProcDecl(proc_name, stmt)) -> 
    let reads = reads_of_stmt stmt in
    let dirty read = (
      match read with
      | ReadHasPath(Parent) | ReadProp(Parent, _) -> ()
      | ReadHasPath(First) -> if phys_equal (List.length x.children) 1 then proc_dirtied x proc_name else ()
      | ReadProp(First, _) -> if List.is_empty lhs then proc_dirtied x proc_name else ()
      | ReadHasPath(Last) -> if phys_equal (List.length x.children) 1 then proc_dirtied x proc_name else ()
      | ReadProp(Last, _) -> if List.is_empty rhs then proc_dirtied x proc_name else ()
      | ReadHasPath(Prev) | ReadProp(Prev, _) -> (match y.next with Some x -> proc_dirtied x proc_name | None -> ())
      | ReadHasPath(Next) | ReadProp(Next, _) -> (match y.prev with Some x -> proc_dirtied x proc_name | None -> ())
      | ReadProp(Self, _) -> ()
      | _ -> raise (EXN (show_read read))) in
    List.iter reads ~f:dirty;
    let tailcalls = get_tailcall stmt in 
    let dirty_tc (path, _) = (
      match path with
      | Self | Next | Parent -> ()
      | First -> proc_dirtied x proc_name
      | _ -> raise (EXN (show_path path))
    ) in
    List.iter tailcalls ~f:dirty_tc)

let rec recalculate_aux (p: _ prog) =
  if queue_isempty () then () else 
    let (x, y, z) = queue_peek () in
    print_endline ("peek " ^ (string_of_int y.id) ^ "." ^ z);
    (* have to set current_time back as evaluating fresh nodes will rely on current_time. 
       after everything is recalculated, recalculate will rest current_time *)
    current_time := x;
    eval_stmt p y (stmt_of_proc_decl (Hashtbl.find_exn p.procs z));
    let (x', y', z') = queue_pop () in
    print_endline ("pop  " ^ (string_of_int y'.id) ^ "." ^ z');
    assert (phys_equal (TotalOrder.compare x x') 0);
    recalculate_aux p

let recalculate (p: _ prog) = 
  let x = !current_time in
  recalculate_aux p;
  current_time := x
  