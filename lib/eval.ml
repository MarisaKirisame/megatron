open Ast
open Core
open EXN

let simplify_expr (e: expr) = e

let rec simplify_stmt (s: stmt) = 
  match s with
  | Seq(x, y) ->
    (match (simplify_stmt x, simplify_stmt y) with
    | (Skip, y') -> y'
    | (x', Skip) -> x'
    | (x', y') -> Seq(x', y'))
  | Skip | ChildrenCall(_) | TailCall(_, _) | Write(_) | LocalDef(_, _) -> s
  | IfStmt(x, y, z) -> IfStmt(x, simplify_stmt y, simplify_stmt z)
  | _ -> raise (EXN (show_stmt s))

let simplify_proc_decl (p: proc_decl): proc_decl = 
  let ProcDecl(name, stmt) = p in ProcDecl(name, simplify_stmt stmt)

let simplify (p: prog_decl): prog_decl = { prop_decls = p.prop_decls; proc_decls = List.map p.proc_decls ~f:simplify_proc_decl }

type node = { 
  dict: (string, value) Hashtbl.t;
  mutable children: node list;
  parent: node option ref;
}

and value = 
  | VInt of int
  | VBool of bool
  | VNode of node
  | VList of value list

let make_node (children: node list) (p: prog): node = 
  ignore p; {
  dict = Hashtbl.create (module String);
  children = children; 
  parent = ref None
}
let rec set_children_parent (n: node) = 
  List.iter n.children ~f:(fun child -> child.parent := Some (n); set_children_parent child)

let add_children (x: node) (y: node) =
  x.children <- y :: x.children;
  y.parent := Some(x);
  ()

let rec show_node (n: node): string =
  let htbl_str =
    "{" ^ List.fold_left (Hashtbl.to_alist n.dict) ~init:"" ~f:(fun lhs (name, value) -> lhs ^ name ^ " = " ^ show_value value ^ ", ") ^ "}"
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
let bool_of_value x = 
  match x with
  | VBool b -> b
  | _ -> raise (EXN (show_value x))
let node_of_value (VNode x) = x
let list_of_value (VList x) = x

let eval_binop (b: bop) (lhs: value) (rhs: value) =
  match b with
  | Lt -> VBool (int_of_value lhs < int_of_value rhs)
  | Gt -> VBool (int_of_value lhs > int_of_value rhs)
  | Add -> VInt (int_of_value lhs + int_of_value rhs)
  | _ -> raise (EXN (show_bop b))

let rec eval_expr (n: node) (env: (string, value) Hashtbl.t) (e: expr): value =
  let recurse e = eval_expr n env e in
  match e with
  | Int i -> VInt i
  | IfExpr(c, t, e) -> if bool_of_value (recurse c) then recurse t else recurse e
  | Binop(lhs, op, rhs) -> eval_binop op (recurse lhs) (recurse rhs)
  | Children -> VList (List.map n.children ~f:(fun c -> VNode c))
  | Index(x, y) -> List.nth_exn (list_of_value (recurse x)) (int_of_value (recurse y))
  | Var n -> (Hashtbl.find_exn env n)
  | _ -> raise (EXN (show_expr e))
