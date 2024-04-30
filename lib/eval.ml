open Ast
open Core
open Svar
open EXN

let simplify_expr (e: expr) = e

let rec simplify_stmt (s: stmt) = 
  match s with
  | Seq(x, y) ->
    (match (simplify_stmt x, simplify_stmt y) with
    | (Skip, y') -> y'
    | (x', Skip) -> x'
    | (x', y') -> Seq(x', y'))
  | Skip | ChildrenCall(_) | SelfCall(_) | SelfWrite(_) | LocalDef(_, _) -> s
  | _ -> raise (EXN (show_stmt s))

let simplify_proc_decl (p: proc_decl): proc_decl = 
  let ProcDecl(name, stmt) = p in ProcDecl(name, simplify_stmt stmt)

let simplify (p: prog_decl): prog_decl = { prop_decls = p.prop_decls; proc_decls = List.map p.proc_decls ~f:simplify_proc_decl }

type node = { 
  dict: (string, value svar) Hashtbl.t;
  children: node list svar;
  parent: node option ref;
}

and value = 
  | VInt of int
  | VBool of bool
  | VNode of node
  | VList of value list

let make_node (children: node list) (p: prog): node = {
  dict = Hashtbl.create (module String);
  children = const_svar children; 
  parent = ref None
}
let rec set_children_parent (n: node) = 
  List.iteri n.children.value ~f:(fun i child -> child.parent := Some (n); set_children_parent child)

let add_children (x: node) (y: node) =
  x.children.value <- y :: x.children.value;
  y.parent := Some(x);
  propagate_diff (Inserted(0)) x.children.meta;
  ()

let dequeue () = PriorityQueue.pop eager_queue

let recalculate () =
  let last_now = !current_time in
  try
    let rec recalculate () =
      let meta = dequeue () in
      current_time := meta.start_timestamp;
      (*eager_finger := meta.end_timestamp;*)
      meta.refresh();
      (*TotalOrder.splice !eager_now meta.end_timestamp;*)
      recalculate ()
    in
    recalculate ()
  with PriorityQueue.Empty ->
      current_time := last_now; ()
      (*todo figure out: eager_finger := eager_start*)


let rec show_node (n: node): string =
  let htbl_str =
    "{" ^ List.fold_left (Hashtbl.to_alist n.dict) ~init:"" ~f:(fun lhs (name, value) -> lhs ^ name ^ " = " ^ show_value value.value ^ ", ") ^ "}"
  in
    "[" ^ List.fold_left n.children.value ~init:htbl_str ~f:(fun lhs n -> lhs ^ show_node n ^ ", ") ^ "]"
and
  show_value (v: value): string =
  match v with
  | VInt i -> string_of_int i
  | VBool b -> string_of_bool b
  
let int_of_value x =
  match x with
  | VInt i -> i
  | _ -> raise (EXN (show_value x))
let bool_of_value (VBool x) = x
let node_of_value (VNode x) = x
let list_of_value (VList x) = x

let eval_binop (b: bop) (lhs: value) (rhs: value) =
  match b with
  | Lt -> VBool (int_of_value lhs < int_of_value rhs)
  | Gt -> VBool (int_of_value lhs > int_of_value rhs)
  | Add -> VInt (int_of_value lhs + int_of_value rhs)
  | _ -> raise (EXN (show_bop b))

let rec is_simple (e: expr): bool = 
  match e with
  (*todo: len children is not simple!*)
  | Int _ | ParentAccess _ | Call(HasParent, []) | Call(Len, [Children]) | Var _ -> true
  | Call(Sum, _) -> false
  | If(c, t, e) -> is_simple c && is_simple t && is_simple e
  | Binop(lhs, _, rhs) -> is_simple lhs && is_simple rhs
  | _ -> raise (EXN (show_expr e))

let rec eval_expr (n: node) (env: (string, value svar) Hashtbl.t) (e: expr): value =
  let recurse e = eval_expr n env e in
  match e with
  | Int i -> VInt i
  | Call(Parent, []) -> VNode (Option.value_exn !(n.parent))
  | Call(HasParent, []) -> VBool (Option.is_some !(n.parent))
  | Call(Len, [x]) -> VInt (List.length (list_of_value (recurse x)))
  | Call(Sum, [x]) -> VInt (List.sum (module Int) (list_of_value (recurse x)) ~f:int_of_value)
  | If(c, t, e) -> if bool_of_value (recurse c) then recurse t else recurse e
  | Self -> VNode n
  | Binop(lhs, op, rhs) -> eval_binop op (recurse lhs) (recurse rhs)
  | Children -> VList (List.map n.children.value ~f:(fun c -> VNode c))
  | Index(x, y) -> List.nth_exn (list_of_value (recurse x)) (int_of_value (recurse y))
  | ParentAccess(name) -> (Hashtbl.find_exn (Option.value_exn !(n.parent)).dict name).value
  | ChildrenAccess(name) -> VList (List.map n.children.value ~f:(fun n -> (Hashtbl.find_exn n.dict name).value))
  | Var n -> (Hashtbl.find_exn env n).value
  | _ -> raise (EXN (show_expr e))

let rec eval_expr_s (n: node) (env: (string, value svar) Hashtbl.t) (e: expr): value svar =
  let recurse e = eval_expr_s n env e in
  match e with
  | Call(Sum, [ChildrenAccess(name)]) -> (
    let delta = ref 0 in
    let fresh: int option ref = ref None in
    let rec sv: 'a svar = {
      value = VInt (List.sum (module Int) ~f:(fun c -> int_of_value (Hashtbl.find_exn c.dict name).value) n.children.value);
      chan = [{ pass = fun diff -> 
        (match diff with
        | IntChange(old_value, new_value) -> delta := !delta + new_value - old_value);
        enqueue sv.meta }; { (*todo: make this response to removal*)
          pass = fun diff -> 
            (match diff with
            | Inserted(pos) -> assert (Option.is_none (!fresh)); fresh := Some pos);
            enqueue sv.meta
        }];
      meta = {
        refresh = (fun _ -> 
          (match !fresh with 
          | None -> ()
          | Some i -> 
              let inserted_node = (List.nth_exn n.children.value i) in
              let svar = Hashtbl.find_exn inserted_node.dict name in
              delta := !delta + int_of_value svar.value;
              svar.meta.dependents <- (List.nth_exn sv.chan 0) :: svar.meta.dependents;
          );
          let new_value = (int_of_value sv.value) + !delta in
          let diff = IntChange((int_of_value sv.value), new_value) in
          sv.value <- VInt new_value;
          delta := 0;
          fresh := None;
          (*todo: does not propagate on equal value*)
          propagate_diff diff sv.meta);
        start_timestamp = add_timestamp();
        dependents = []
      }
    } in
    (*todo: make sv weak below*)
    List.iter ~f:(fun x -> (Hashtbl.find_exn x.dict name).meta.dependents <- (List.nth_exn sv.chan 0) :: (Hashtbl.find_exn x.dict name).meta.dependents) n.children.value;
    n.children.meta.dependents <- (List.nth_exn sv.chan 1) :: n.children.meta.dependents;
    sv
  )
  | Var n -> Hashtbl.find_exn env n
  | _ -> raise (EXN (show_expr e))

let rec simple_expr_meta (n: node) (env: (string, value svar) Hashtbl.t) (e: expr): meta list =
  let recurse e = simple_expr_meta n env e in
  match e with
  | Int _ | Call(HasParent, []) -> []
  | ParentAccess(name) ->
    (match !(n.parent) with 
    | Some x -> [(Hashtbl.find_exn x.dict name).meta]
    | None -> [])
  | If(c, t, e) -> List.append (recurse c) (List.append (recurse t) (recurse e))
  | Var n -> [(Hashtbl.find_exn env n).meta]
  | Binop(lhs, _, rhs) -> List.append (recurse lhs) (recurse rhs)
  | Call(Len, [x]) -> recurse(x)
  | Children -> [n.children.meta]
  | _ -> raise (EXN (show_expr e))

let rec eval_stmt (n: node) (env: (string, value svar) Hashtbl.t) (p: prog) (stmt: stmt) = 
  let recurse stmt = eval_stmt n env p stmt in
  match stmt with
  | SelfWrite(prop, value) -> 
    if is_simple value then 
      let sv = ignore_diff (fun x x' -> IntChange(int_of_value x, int_of_value x')) 
                           (fun _ -> eval_expr n env value)
                           (simple_expr_meta n env value) in
      Hashtbl.add_exn n.dict prop sv 
    else 
      (print_endline (show_expr value);
      Hashtbl.add_exn n.dict prop (eval_expr_s n env value))
  | Seq(x, y) -> recurse x; recurse y
  | Skip -> ()
  | ChildrenCall(name) ->
    let ProcDecl(_, stmt) = Hashtbl.find_exn p.procs name in 
    List.iter n.children.value
      ~f:(fun n -> eval_stmt n (Hashtbl.create (module String)) p stmt);
      let fresh: int option ref = ref None in
      let rec sv: 'a svar = { 
        value = ();
        chan = [{ (*todo: make this response to removal*)
        pass = fun diff -> 
          (match diff with
          | Inserted(pos) -> assert (Option.is_none (!fresh)); fresh := Some pos);
          enqueue sv.meta
      }];
        meta = {
          refresh = (fun () -> 
            eval_stmt (List.nth_exn n.children.value (Option.value_exn (!fresh))) (Hashtbl.create (module String)) p stmt; 
            fresh := None);
          start_timestamp = add_timestamp();
          dependents = [];
        }
      } in n.children.meta.dependents <- (List.nth_exn sv.chan 0) :: n.children.meta.dependents
  | SelfCall(name) ->
    let ProcDecl(_, stmt) = Hashtbl.find_exn p.procs name in recurse stmt
  | LocalDef(name, value) -> Hashtbl.add_exn env name (eval_expr_s n env value)
  | _ -> raise (EXN (show_stmt stmt))

let eval (n: node) (p : prog) = 
  let ProcDecl(_, stmt) = Hashtbl.find_exn p.procs "main" in
  eval_stmt n (Hashtbl.create (module String)) p stmt
