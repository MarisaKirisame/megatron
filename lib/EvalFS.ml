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
  mutable parent: node option;
  mutable next: node option;
  mutable prev: node option;
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
  parent = None;
  prev = None;
  next = None;
}

let rec set_children_relation (n: node): unit = 
  List.iter (List.zip_exn (Option.value (List.drop_last n.children) ~default:[]) (Option.value (List.tl n.children) ~default:[]))
  ~f:(fun (x, y) -> x.parent <- Some n; x.next <- Some y; y.prev <- Some x; set_children_relation x);
  match List.last n.children with
  | Some x -> x.parent <- Some n; set_children_relation x
  | None -> ()


let set_relation (n: node) = 
  n.parent <- None;
  n.prev <- None;
  n.next <- None;
  set_children_relation n

let add_children (x: node) (y: node) =
  x.children <- y :: x.children;
  y.parent <- Some(x);
  ()

let rec show_node (n: node): string =
  let htbl_str =
    "{" ^ List.fold_left (Hashtbl.to_alist n.dict) ~init:"" ~f:(fun lhs (name, value) -> lhs ^ name ^ " = " ^ show_value value ^ ", ") ^ "}"
  in
    List.fold_left n.children ~init:(htbl_str ^ "[") ~f:(fun lhs n -> lhs ^ show_node n ^ ", ") ^ "]"
and
  show_value (x: value): string =
  match x with
  | VInt i -> string_of_int i
  | VBool b -> string_of_bool b
  | _ -> raise (EXN (show_value x))
  
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

let eval_path_opt (n: node) (p: path) = 
  match p with
  | Self -> Some n
  | Parent -> n.parent
  | First -> List.hd n.children
  | Next -> n.next
  | Prev -> n.prev
  | Last -> List.last n.children
  | _ -> raise (EXN (show_path p))

let eval_path n p = Option.value_exn (eval_path_opt n p)

let rec eval_expr (n: node) (e: expr): value =
  let recurse e = eval_expr n e in
  match e with
  | Int i -> VInt i
  | IfExpr(c, t, e) -> if bool_of_value (recurse c) then recurse t else recurse e
  | Binop(lhs, op, rhs) -> eval_binop op (recurse lhs) (recurse rhs)
  | HasPath(p) -> VBool (Option.is_some (eval_path_opt n p))
  | Read(p, prop_name) -> Hashtbl.find_exn (eval_path n p).dict prop_name
  | _ -> raise (EXN (show_expr e))

let rec eval_stmt (p: prog) (n: node) (s: stmt) = 
  let recurse s = eval_stmt p n s in
  match s with
  | TailCall(path, proc_name) -> eval_stmt p (eval_path n path) (stmt_of_proc_decl (Hashtbl.find_exn p.procs proc_name))
  | Seq(x, y) -> recurse x; recurse y
  | Write(path, prop_name, expr) -> 
      Hashtbl.add_exn (eval_path n path).dict ~key:prop_name ~data:(eval_expr n expr) 
      (*we use add_exn to make sure the same element isnt touched twice.
        however, this mean we have to reset the hashtable to rerun.*)
  | IfStmt(i, t, e) -> if bool_of_value (eval_expr n i) then recurse t else recurse e
  | Skip -> ()
  | _ -> raise (EXN (show_stmt s))

let eval (p: prog) (n: node) = eval_stmt p n (stmt_of_proc_decl (Hashtbl.find_exn p.procs "main"))
