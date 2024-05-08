open Ast
open Core
open EXN

type 'meta node = { 
  dict: (string, 'meta value) Hashtbl.t;
  mutable children: 'meta node list;
  mutable parent: 'meta node option;
  mutable next: 'meta node option;
  mutable prev: 'meta node option;
  m: 'meta;
}

and 'meta value = 
  | VInt of int
  | VBool of bool
  | VNode of 'meta node
  | VList of 'meta value list

let rec set_children_relation (n: 'meta node): unit = 
  List.iter (List.zip_exn (Option.value (List.drop_last n.children) ~default:[]) (Option.value (List.tl n.children) ~default:[]))
  ~f:(fun (x, y) -> x.parent <- Some n; x.next <- Some y; y.prev <- Some x; set_children_relation x);
  match List.last n.children with
  | Some x -> x.parent <- Some n; set_children_relation x
  | None -> ()


let set_relation (n: 'meta node) = 
  n.parent <- None;
  n.prev <- None;
  n.next <- None;
  set_children_relation n

let rec show_node (n: 'meta node): string =
  let htbl_str =
    "{" ^ List.fold_left (Hashtbl.to_alist n.dict) ~init:"" ~f:(fun lhs (name, value) -> lhs ^ name ^ " = " ^ show_value value ^ ", ") ^ "}"
  in
    List.fold_left n.children ~init:(htbl_str ^ "[") ~f:(fun lhs n -> lhs ^ show_node n ^ ", ") ^ "]"
and
  show_value (x: 'meta value): string =
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

let eval_binop (b: bop) (lhs: 'meta value) (rhs: 'meta value) =
  match b with
  | Lt -> VBool (int_of_value lhs < int_of_value rhs)
  | Gt -> VBool (int_of_value lhs > int_of_value rhs)
  | Add -> VInt (int_of_value lhs + int_of_value rhs)
  | _ -> raise (EXN (show_bop b))

let eval_path_opt (n: 'meta node) (p: path) = 
  match p with
  | Self -> Some n
  | Parent -> n.parent
  | First -> List.hd n.children
  | Next -> n.next
  | Prev -> n.prev
  | Last -> List.last n.children
  | _ -> raise (EXN (show_path p))

let eval_path n p = Option.value_exn (eval_path_opt n p)

let rec eval_expr (n: 'meta node) (e: expr): 'meta value =
  let recurse e = eval_expr n e in
  match e with
  | Int i -> VInt i
  | IfExpr(c, t, e) -> if bool_of_value (recurse c) then recurse t else recurse e
  | Binop(lhs, op, rhs) -> eval_binop op (recurse lhs) (recurse rhs)
  | HasPath(p) -> VBool (Option.is_some (eval_path_opt n p))
  | Read(p, prop_name) -> Hashtbl.find_exn (eval_path n p).dict prop_name
  | _ -> raise (EXN (show_expr e))
