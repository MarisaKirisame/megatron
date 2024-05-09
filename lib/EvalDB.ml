open Ast
open Core
open EXN
open Eval

let current_time = ref (TotalOrder.create ())

let counter: int ref = ref 0

let count () = 
  let ret = !counter in
  counter := !counter + 1;
  ret

type meta = {
  mutable id: int;
  (* unran proc is not inside *)
  dirtied_set: (string, bool) Hashtbl.t;
  mutable dirty_bit: bool;
}

let make_node (children: meta node list) (p: prog): meta node = 
  ignore p; {
  m = {
    id = count();
    dirtied_set = Hashtbl.create (module String);
    dirty_bit = false;
  };
  dict = Hashtbl.create (module String);
  children = children; 
  parent = None;
  prev = None;
  next = None;
}

let reversed_path (p: path) (n: meta node): meta node list = 
  match p with
  | Parent -> n.children
  | Self -> [n]
  | Prev -> Option.to_list n.next
  | Next -> Option.to_list n.prev
  | First -> (match n.parent with None -> [] | Some np -> if phys_equal (List.hd_exn np.children).m.id n.m.id then [np] else [])
  | Last -> (match n.parent with None -> [] | Some np -> if phys_equal (List.last_exn np.children).m.id n.m.id then [np] else [])
  | _ -> raise (EXN (show_path p))

let rec set_dirtybit (n: meta node): unit =
  if n.m.dirty_bit then () else
  n.m.dirty_bit <- true;
  match n.parent with
  | Some p -> set_dirtybit p
  | None -> ()

let proc_dirtied (n: meta node) (proc_name: string): unit = 
  Hashtbl.set n.m.dirtied_set proc_name true;
  set_dirtybit n

let prop_modified (p: prog) (n: meta node) (prop_name: string): unit = 
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

let rec eval_stmt (p: prog) (n: meta node) (s: stmt) = 
  let recurse s = eval_stmt p n s in
  match s with
  | TailCall(path, proc_name) -> 
      let new_node = eval_path n path in
      if Option.is_none (Hashtbl.find new_node.m.dirtied_set proc_name) 
      then (
        print_endline "tailcalling!";
        current_time := TotalOrder.add_next (!current_time);
        Hashtbl.add_exn new_node.m.dirtied_set ~key:proc_name ~data:false;
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
    
let eval (p: prog) (n: meta node) = eval_stmt p n (stmt_of_proc_decl (Hashtbl.find_exn p.procs "main"))

(*lets try to get add/remove from head of list working then generalize*)

let remove_children (x: meta node) (n: int) (p: prog): unit =
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

let add_children (x: meta node) (y: meta node) (n: int) (p: prog): unit =
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

let rec recalculate (n: meta node) (p: prog): unit = 
  if n.m.dirty_bit then
    (List.iter n.children (fun n -> recalculate n p);
    (if Hashtbl.find_exn n.m.dirtied_set "compute_width" then eval_stmt p n (stmt_of_proc_decl (Hashtbl.find_exn p.procs "compute_width")) else ());
    (if Hashtbl.find_exn n.m.dirtied_set "compute_height" then eval_stmt p n (stmt_of_proc_decl (Hashtbl.find_exn p.procs "compute_height")) else ());
    n.m.dirty_bit <- false)
  else ()
  