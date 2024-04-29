open Ast
open Core
open Svar

exception EXN of string

let simplify_expr (e: expr) = e

let rec simplify_stmt (s: stmt) = 
  match s with
  | Seq(x, y) ->
    (match (simplify_stmt x, simplify_stmt y) with
    | (Skip, y') -> y'
    | (x', Skip) -> x'
    | (x', y') -> Seq(x', y'))
  | If(c, t, e) -> If(simplify_expr c, simplify_stmt t, simplify_stmt e)
  | WriteRef(lhs, rhs) -> WriteRef(simplify_expr lhs, simplify_expr rhs)
  | Skip | ChildrenCall(_) | SelfCall(_) | SelfWrite(_) -> s
  | _ -> raise (EXN (show_stmt s))

let simplify_proc_decl (p: proc_decl): proc_decl = 
  let ProcDecl(name, stmt) = p in ProcDecl(name, simplify_stmt stmt)

let simplify (p: prog_decl): prog_decl = { prop_decls = p.prop_decls; proc_decls = List.map p.proc_decls ~f:simplify_proc_decl }

type node = { dict: (string, value svar) Hashtbl.t; children: node list; parent: (node * int) option ref }
and value = 
  | VInt of int
  | VBool of bool
  | VNode of node
  | VList of value list

let make_node (children: node list) (p: prog): node = {
  dict = Hashtbl.create (module String);
  children = children; 
  parent = ref None
}
let rec set_children_parent (n: node) = 
  List.iteri n.children ~f:(fun i child -> child.parent := Some (n, i); set_children_parent child)

let rec show_node (n: node): string =
  let htbl_str =
    "{" ^ List.fold_left (Hashtbl.to_alist n.dict) ~init:"" ~f:(fun lhs (name, value) -> lhs ^ name ^ " = " ^ show_value value.value ^ ", ") ^ "}"
  in
    "[" ^ List.fold_left n.children ~init:htbl_str ~f:(fun lhs n -> lhs ^ show_node n ^ ", ") ^ "]"
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
  | Int _ | ParentAccess _ -> true
  | Call(Sum, _) -> false
  | _ -> raise (EXN (show_expr e))

let rec eval_expr (n: node) (e: expr): value =
  let recurse e = eval_expr n e in
  match e with
  | Int i -> VInt i
  | Call(Parent, []) -> VNode (fst (Option.value_exn !(n.parent)))
  | Call(SelfPos, []) -> VInt (snd (Option.value_exn !(n.parent)))
  | Call(HasParent, []) -> VBool (Option.is_some !(n.parent))
  | Call(Len, [x]) -> VInt (List.length (list_of_value (recurse x)))
  | Call(Sum, [x]) -> VInt (List.sum (module Int) (list_of_value (recurse x)) ~f:int_of_value)
  | Self -> VNode n
  | Binop(lhs, op, rhs) -> eval_binop op (recurse lhs) (recurse rhs)
  | Children -> VList (List.map n.children ~f:(fun c -> VNode c))
  | Index(x, y) -> List.nth_exn (list_of_value (recurse x)) (int_of_value (recurse y))
  | ParentAccess(name) -> (Hashtbl.find_exn (fst (Option.value_exn !(n.parent))).dict name).value
  | ChildrenAccess(name) -> VList (List.map n.children ~f:(fun n -> (Hashtbl.find_exn n.dict name).value))
  | _ -> raise (EXN (show_expr e))

let rec eval_expr_s (n: node) (e: expr): value svar =
  match e with
  | _ -> raise (EXN (show_expr e))

let rec simple_expr_meta (n: node) (e: expr): meta list =
  match e with
  | Int _ -> []
  | ParentAccess(name) -> [(Hashtbl.find_exn (fst (Option.value_exn (!(n.parent)))).dict name).meta]
  | _ -> raise (EXN (show_expr e))

let rec eval_stmt (n: node) (p: prog) (stmt: stmt) = 
  match stmt with
  | SelfWrite(prop, value) -> 
    if is_simple value then 
      let sv = ignore_diff (fun x x' -> IntChange(int_of_value x, int_of_value x')) (fun _ -> eval_expr n value) (simple_expr_meta n value) in
      Hashtbl.add_exn n.dict prop sv 
    else 
      Hashtbl.add_exn n.dict prop (eval_expr_s n value)
  | If(c, t, e) -> if (bool_of_value (eval_expr n c)) then eval_stmt n p t else eval_stmt n p e
  | Seq(x, y) -> eval_stmt n p x; eval_stmt n p y
  | Skip -> ()
  | ChildrenCall(name) ->
    List.iter n.children ~f:(fun n -> let ProcDecl(_, stmt) = Hashtbl.find_exn p.procs name in eval_stmt n p stmt)
  | SelfCall(name) ->
    let ProcDecl(_, stmt) = Hashtbl.find_exn p.procs name in eval_stmt n p stmt
  | _ -> raise (EXN (show_stmt stmt))

let eval (n: node) (p : prog) = 
  let ProcDecl(_, stmt) = Hashtbl.find_exn p.procs "main" in
  eval_stmt n p stmt
