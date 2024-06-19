open Ast
open Core
open EXN
open Metric

let counter : int ref = ref 0

let count () =
  let ret = !counter in
  counter := !counter + 1;
  ret

type 'meta node = {
  name : string;
  attr : (string, value) Hashtbl.t;
  prop : (string, value) Hashtbl.t;
  var : (string, value) Hashtbl.t;
  id : int;
  extern_id : int;
  mutable children : 'meta node list;
  mutable parent : 'meta node option;
  mutable next : 'meta node option;
  mutable prev : 'meta node option;
  m : 'meta;
}

and value = VInt of int | VBool of bool | VString of string | VFloat of float

let rec node_size (n : _ node) : int = 1 + List.sum (module Int) n.children ~f:node_size

let rec set_children_relation (n : 'meta node) : unit =
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

let set_relation (n : 'meta node) =
  n.parent <- None;
  n.prev <- None;
  n.next <- None;
  set_children_relation n

let rec rightmost (x : _ node) : _ node = match List.last x.children with Some x -> rightmost x | None -> x

let rec show_node (n : 'meta node) : string =
  let htbl_str =
    "{"
    ^ List.fold_left (Hashtbl.to_alist n.var)
        ~init:("id = " ^ string_of_int n.id ^ ", ")
        ~f:(fun lhs (name, value) -> lhs ^ name ^ " = " ^ show_value value ^ ", ")
    ^ "}"
  in
  List.fold_left n.children ~init:(htbl_str ^ "[") ~f:(fun lhs n -> lhs ^ show_node n ^ ", ") ^ "]"

and show_value (x : value) : string =
  match x with
  | VInt i -> string_of_int i
  | VBool b -> string_of_bool b
  | VString s -> String.escaped s
  | VFloat f -> string_of_float f

let int_of_value x = match x with VInt i -> i | _ -> panic (show_value x)
let bool_of_value x = match x with VBool b -> b | _ -> panic (show_value x)
let string_of_value x = match x with VString x -> x | _ -> panic (show_value x)
let float_of_value x = match x with VFloat x -> x | _ -> panic (show_value x)

let equal_value x y : bool =
  match (x, y) with
  | VString x, VString y -> String.equal x y
  | VInt x, VInt y -> Int.equal x y
  | VBool x, VBool y -> Bool.equal x y
  | VFloat x, VFloat y -> Float.equal x y
  | _ -> panic ("unhandled case in equal_value: " ^ show_value x ^ " " ^ show_value y)

let eval_binop (b : bop) (lhs : value) (rhs : value) =
  match b with
  | Lt -> VBool (int_of_value lhs < int_of_value rhs)
  | Gt -> VBool (int_of_value lhs > int_of_value rhs)
  | Plus -> (
      match (lhs, rhs) with
      | VInt lhs, VInt rhs -> VInt (lhs + rhs)
      | VFloat lhs, VFloat rhs -> VFloat (lhs +. rhs)
      | _ -> panic ("add: " ^ show_value lhs ^ ", " ^ show_value rhs))
  | Minus -> VInt (int_of_value lhs - int_of_value rhs)
  | Mult -> (
      match (lhs, rhs) with
      | VInt lhs, VInt rhs -> VInt (lhs * rhs)
      | VFloat lhs, VFloat rhs -> VFloat (lhs *. rhs)
      | _ -> panic ("add: " ^ show_value lhs ^ ", " ^ show_value rhs))
  | Div -> (
      match (lhs, rhs) with
      | VInt lhs, VInt rhs -> VInt (lhs / rhs)
      | VFloat lhs, VFloat rhs -> VFloat (lhs /. rhs)
      | _ -> panic ("add: " ^ show_value lhs ^ ", " ^ show_value rhs))
  | Eq -> VBool (equal_value lhs rhs)
  | Neq -> VBool (not (equal_value lhs rhs))
  | Max -> (
      match (lhs, rhs) with
      | VInt lhs, VInt rhs -> VInt (max lhs rhs)
      | VFloat lhs, VFloat rhs -> VFloat (Float.max lhs rhs)
      | _ -> panic ("max: " ^ show_value lhs ^ ", " ^ show_value rhs))
  | _ -> raise (EXN (show_bop b))

let eval_path_opt (n : 'meta node) (p : path) =
  match p with
  | Self -> Some n
  | Parent -> n.parent
  | First -> List.hd n.children
  | Next -> n.next
  | Prev -> n.prev
  | Last -> List.last n.children

let eval_path n p = Option.value_exn (eval_path_opt n p)

let has_suffix s sfx =
  String.length s >= String.length sfx
  && String.equal sfx (String.sub s (String.length s - String.length sfx) (String.length sfx))

let has_prefix s pfx = String.length s >= String.length pfx && String.equal pfx (String.sub s 0 (String.length pfx))

let strip_prefix s pfx =
  if has_prefix s pfx then String.sub s (String.length pfx) (String.length s - String.length pfx) else panic s

let strip_suffix s sfx =
  assert (has_suffix s sfx);
  String.sub s 0 (String.length s - String.length sfx)

let rec eval_expr (n : 'meta node) (e : expr) (m : metric) : value =
  (*print_endline (show_expr e);*)
  let recurse e = eval_expr n e m in
  match e with
  | Panic x -> panic ("External: " ^ String.concat ~sep:" " (List.map x ~f:(fun x -> show_value (recurse x))))
  | HasProperty p -> VBool (Option.is_some (Hashtbl.find n.prop p))
  | GetProperty p -> (
      read m n.id;
      match Hashtbl.find n.prop p with
      | Some x -> x
      | None -> panic ("cannot find property " ^ p ^ " in " ^ string_of_int n.extern_id))
  | HasAttribute p -> VBool (Option.is_some (Hashtbl.find n.attr p))
  | GetAttribute p -> (
      read m n.id;
      match Hashtbl.find n.attr p with
      | Some x -> x
      | None -> panic ("cannot find attribute " ^ p ^ " in " ^ string_of_int n.extern_id))
  | String s -> VString s
  | Int i -> VInt i
  | Float f -> VFloat f
  | IfExpr (c, t, e) -> if bool_of_value (recurse c) then recurse t else recurse e
  | Binop (lhs, op, rhs) -> eval_binop op (recurse lhs) (recurse rhs)
  | HasPath p -> VBool (Option.is_some (eval_path_opt n p))
  | Read (p, prop_name) ->
      read m n.id;
      Hashtbl.find_exn (eval_path n p).var prop_name
  | And (x, y) -> if bool_of_value (recurse x) then recurse y else VBool false
  | Or (x, y) -> if bool_of_value (recurse x) then VBool true else recurse y
  | Not x -> VBool (not (bool_of_value (recurse x)))
  | GetName -> VString n.name
  | Bool x -> VBool x
  | HasSuffix (s, sfx) -> VBool (has_suffix (string_of_value (recurse s)) (string_of_value (recurse sfx)))
  | HasPrefix (s, sfx) -> VBool (has_prefix (string_of_value (recurse s)) (string_of_value (recurse sfx)))
  | StripSuffix (s, sfx) -> VString (strip_suffix (string_of_value (recurse s)) (string_of_value (recurse sfx)))
  | StripPrefix (s, sfx) -> VString (strip_prefix (string_of_value (recurse s)) (string_of_value (recurse sfx)))
  | StringToInt x -> (
      let str = string_of_value (recurse x) in
      match int_of_string_opt str with Some x -> VInt x | None -> panic str)
  | StringToFloat x -> (
      let str = string_of_value (recurse x) in
      match float_of_string_opt str with Some x -> VFloat x | None -> panic str)
  | NthBySep (s_, sep_, nth_) ->
      let s = string_of_value (recurse s_) in
      let sep = string_of_value (recurse sep_) in
      let nth = int_of_value (recurse nth_) in
      assert (String.length sep == 1);
      VString (List.nth_exn (String.split s ~on:(String.get sep 0)) nth)
      | IntToFloat x -> VFloat (float_of_int (int_of_value (recurse x)))
  | _ -> panic ("unhandled case in eval_expr:" ^ show_expr e)

let reversed_path (p : path) (n : 'a node) : 'a node list =
  match p with
  | Parent -> n.children
  | Self -> [ n ]
  | Prev -> Option.to_list n.next
  | Next -> Option.to_list n.prev
  | First -> (
      match n.parent with None -> [] | Some np -> if phys_equal (List.hd_exn np.children).id n.id then [ np ] else [])
  | Last -> (
      match n.parent with
      | None -> []
      | Some np -> if phys_equal (List.last_exn np.children).id n.id then [ np ] else [])

let rec recursive_print_id_up (n : _ node) : unit =
  print_endline (string_of_int n.id ^ List.to_string n.children ~f:(fun n -> string_of_int n.id));
  match n.parent with None -> () | Some p -> recursive_print_id_up p

module type Eval = sig
  val name : string

  type meta

  val make_node :
    _ prog ->
    name:string ->
    attr:(string, value) Hashtbl.t ->
    prop:(string, value) Hashtbl.t ->
    extern_id:int ->
    meta node list ->
    meta node

  val eval : _ prog -> meta node -> metric -> unit
  val add_children : _ prog -> meta node -> meta node -> int -> metric -> unit
  val remove_children : _ prog -> meta node -> int -> metric -> unit
  val add_prop : _ prog -> meta node -> string -> value -> metric -> unit
  val remove_prop : _ prog -> meta node -> string -> metric -> unit
  val add_attr : _ prog -> meta node -> string -> value -> metric -> unit
  val remove_attr : _ prog -> meta node -> string -> metric -> unit
  val recalculate : _ prog -> meta node -> metric -> unit
end

let rec assert_node_value_equal l r =
  assert (Hashtbl.length l.var == Hashtbl.length r.var);
  assert (List.length l.children == List.length r.children);
  List.iter2_exn l.children r.children ~f:(fun l r -> assert_node_value_equal l r);
  if Hashtbl.equal equal_value l.var r.var then ()
  else (
    print_endline (string_of_int l.id ^ " bad!");
    recursive_print_id_up l);
  assert (Hashtbl.equal equal_value l.var r.var)
