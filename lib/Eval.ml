open Ast
open Core
open EXN
open Metric

let counter : int ref = ref 0

let count () =
  let ret = !counter in
  counter := !counter + 1;
  ret

type 'rest node = {
  dict : (string, 'rest value) Hashtbl.t;
  mutable id : int;
  mutable children : 'rest node list;
  mutable parent : 'rest node option;
  mutable next : 'rest node option;
  mutable prev : 'rest node option;
  m : 'rest;
}

and 'rest value =
  | VInt of int
  | VBool of bool
  | VNode of 'rest node
  | VList of 'rest value list

let rec size (n : _ node) : int = 1 + List.sum (module Int) n.children ~f:size

let rec set_children_relation (n : 'rest node) : unit =
  List.iter
    (List.zip_exn
       (Option.value (List.drop_last n.children) ~default:[])
       (Option.value (List.tl n.children) ~default:[]))
    ~f:(fun (x, y) ->
      x.parent <- Some n;
      x.next <- Some y;
      y.prev <- Some x;
      set_children_relation x);
  match List.last n.children with
  | Some x ->
      x.parent <- Some n;
      set_children_relation x
  | None -> ()

let set_relation (n : 'rest node) =
  n.parent <- None;
  n.prev <- None;
  n.next <- None;
  set_children_relation n

let rec show_node (n : 'rest node) : string =
  let htbl_str =
    "{"
    ^ List.fold_left (Hashtbl.to_alist n.dict)
        ~init:("id = " ^ string_of_int n.id ^ ", ")
        ~f:(fun lhs (name, value) ->
          lhs ^ name ^ " = " ^ show_value value ^ ", ")
    ^ "}"
  in
  List.fold_left n.children ~init:(htbl_str ^ "[") ~f:(fun lhs n ->
      lhs ^ show_node n ^ ", ")
  ^ "]"

and show_value (x : 'rest value) : string =
  match x with
  | VInt i -> string_of_int i
  | VBool b -> string_of_bool b
  | _ -> raise (EXN (show_value x))

let int_of_value x =
  match x with VInt i -> i | _ -> raise (EXN (show_value x))

let bool_of_value x =
  match x with VBool b -> b | _ -> raise (EXN (show_value x))

let node_of_value (VNode x) = x
let list_of_value (VList x) = x

let eval_binop (b : bop) (lhs : 'rest value) (rhs : 'rest value) =
  match b with
  | Lt -> VBool (int_of_value lhs < int_of_value rhs)
  | Gt -> VBool (int_of_value lhs > int_of_value rhs)
  | Add -> VInt (int_of_value lhs + int_of_value rhs)
  | _ -> raise (EXN (show_bop b))

let eval_path_opt (n : 'rest node) (p : path) =
  match p with
  | Self -> Some n
  | Parent -> n.parent
  | First -> List.hd n.children
  | Next -> n.next
  | Prev -> n.prev
  | Last -> List.last n.children

let eval_path n p = Option.value_exn (eval_path_opt n p)

let rec eval_expr (n : 'rest node) (e : expr) (m : metric) : 'rest value =
  let recurse e = eval_expr n e m in
  match e with
  | Int i -> VInt i
  | IfExpr (c, t, e) ->
      if bool_of_value (recurse c) then recurse t else recurse e
  | Binop (lhs, op, rhs) -> eval_binop op (recurse lhs) (recurse rhs)
  | HasPath p -> VBool (Option.is_some (eval_path_opt n p))
  | Read (p, prop_name) ->
      read m n.id;
      Hashtbl.find_exn (eval_path n p).dict prop_name
  | _ -> raise (EXN (show_expr e))

let reversed_path (p : path) (n : 'a node) : 'a node list =
  match p with
  | Parent -> n.children
  | Self -> [ n ]
  | Prev -> Option.to_list n.next
  | Next -> Option.to_list n.prev
  | First -> (
      match n.parent with
      | None -> []
      | Some np ->
          if phys_equal (List.hd_exn np.children).id n.id then [ np ] else [])
  | Last -> (
      match n.parent with
      | None -> []
      | Some np ->
          if phys_equal (List.last_exn np.children).id n.id then [ np ] else [])

module type Eval = sig
  type meta

  val make_node : _ prog -> meta node list -> meta node
  val eval : _ prog -> meta node -> metric -> unit
  val add_children : _ prog -> meta node -> meta node -> int -> metric -> unit
  val remove_children : _ prog -> meta node -> int -> metric -> unit
  val recalculate : _ prog -> meta node -> metric -> unit
end
