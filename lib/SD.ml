open Core
open Common
open Metric
open Ast

(*to avoid code duplication, can only be used once. whoever that need reuse need to duplicate.*)
type code =
  | CInt of int
  | CBool of bool
  | CFloat of float
  | CString of string
  | CSeq of code list
  | CLet of string * code * code
  | CVar of string
  | CFun of string list * code
  | CApp of code * code list
  | CIf of code * code * code
  | CPF of string
  | CFix of string * string list * code
  | CGetMember of code * string
  | CSetMember of code * string * code
  | CPanic of code
  | CStringMatch of code * (string * code) list * code
  | CAnd of code * code
  | COr of code * code
  | CNot of code
  | CAssert of (*assertion*) code * (*error message*) code * (*return*) code
[@@deriving show, equal]

module type SDIN = sig
  type _ sd

  val is_static : bool

  (*escape hatch*)
  val static : 'a -> 'a sd
  val unstatic : 'a sd -> 'a
  val dyn : code -> 'a sd
  val undyn : 'a sd -> code
  val defs : unit -> (string * string * code) list

  (*for dynamic value, lift a definition to global definition, returning the var that represent it.
    accept a lazy value so meta-recursiveness is allowed.*)
  val lift : string -> string -> 'a sd Lazy.t -> 'a sd
  val fix : (('a sd -> 'b sd) -> 'a sd -> 'b sd) -> ('a -> 'b) sd
  val let_ : 'a sd -> ('a sd -> 'b sd) -> 'b sd
  val lam : ('a sd -> 'b sd) -> ('a -> 'b) sd
  val app : ('a -> 'b) sd -> 'a sd -> 'b sd

  (*note that we are compiling lamx/appx different then repeated application of lam/app.
    this is because cpp's function have multi-arity, different from tuple-packing/currying.
    specifically, this mean lamx can only be consumed via appx, instead of repeated application.
    sadly this is not trackable by the type system.*)
  val lam2 : ('a sd -> 'b sd -> 'c sd) -> ('a -> 'b -> 'c) sd
  val fix2 : (('a sd -> 'b sd -> 'c sd) -> 'a sd -> 'b sd -> 'c sd) -> ('a -> 'b -> 'c) sd
  val app2 : ('a -> 'b -> 'c) sd -> 'a sd -> 'b sd -> 'c sd
  val lam3 : ('a sd -> 'b sd -> 'c sd -> 'd sd) -> ('a -> 'b -> 'c -> 'd sd) sd
  val fix3 : (('a sd -> 'b sd -> 'c sd -> 'd sd) -> 'a sd -> 'b sd -> 'c sd -> 'd sd) -> ('a -> 'b -> 'c -> 'd) sd
  val app3 : ('a -> 'b -> 'c -> 'd) sd -> 'a sd -> 'b sd -> 'c sd -> 'd sd
  val ignore : 'a sd -> unit sd
  val tt : unit sd
  val make_ref : 'a sd -> 'a ref sd
  val read_ref : 'a ref sd -> 'a sd
  val write_ref : 'a ref sd -> 'a sd -> unit sd
  val int : int -> int sd
  val bool : bool -> bool sd
  val float : float -> float sd
  val seq : unit sd -> (unit -> 'a sd) -> 'a sd
  val ite : bool sd -> (unit -> 'a sd) -> (unit -> 'a sd) -> 'a sd
  val with_in_file : string sd -> (Stdio.In_channel.t sd -> 'a sd) -> 'a sd
  val with_out_file : string sd -> (Stdio.Out_channel.t sd -> 'a sd) -> 'a sd
  val output_string : Stdio.Out_channel.t sd -> string sd -> unit sd
  val input_line : Stdio.In_channel.t sd -> string sd
  val iter_lines : Stdio.In_channel.t sd -> (string sd -> unit sd) -> unit sd
  val print_endline : string sd -> unit sd
  val make_stack : unit -> 'a Stack.t sd
  val push_stack : 'a Stack.t sd -> 'a sd -> unit sd
  val clear_stack : 'a Stack.t sd -> unit sd
  val stack_to_list : 'a Stack.t sd -> 'a list sd
  val assert_ : bool sd -> unit sd
  val string_equal : string sd -> string sd -> bool sd
  val string : string -> string sd
  val assoc_to_json : (string * Yojson.Basic.t) list sd -> Yojson.Basic.t sd
  val string_to_json : string sd -> Yojson.Basic.t sd
  val int_to_json : int sd -> Yojson.Basic.t sd
  val list_to_json : Yojson.Basic.t list sd -> Yojson.Basic.t sd
  val json_of_string : string sd -> Yojson.Basic.t sd
  val json_to_string : Yojson.Basic.t sd -> string sd
  val json_member : string sd -> Yojson.Basic.t sd -> Yojson.Basic.t sd
  val json_to_value : Yojson.Basic.t sd -> value sd
  val json_to_dict : Yojson.Basic.t sd -> (string, value) Hashtbl.t sd
  val json_to_int : Yojson.Basic.t sd -> int sd
  val json_to_list : Yojson.Basic.t sd -> Yojson.Basic.t list sd
  val json_to_channel : Stdio.Out_channel.t sd -> Yojson.Basic.t sd -> unit sd
  val node_get_parent : 'a node sd -> 'a node option sd
  val node_set_parent : 'a node sd -> 'a node option sd -> unit sd
  val node_get_prev : 'a node sd -> 'a node option sd
  val node_set_prev : 'a node sd -> 'a node option sd -> unit sd
  val node_get_next : 'a node sd -> 'a node option sd
  val node_set_next : 'a node sd -> 'a node option sd -> unit sd
  val node_get_first : 'a node sd -> 'a node option sd
  val node_set_first : 'a node sd -> 'a node option sd -> unit sd
  val node_get_last : 'a node sd -> 'a node option sd
  val node_set_last : 'a node sd -> 'a node option sd -> unit sd
  val node_get_children : 'a node sd -> 'a node list sd
  val node_set_children : 'a node sd -> 'a node list sd -> unit sd
  val node_get_prop : 'a node sd -> (string, value) Hashtbl.t sd
  val node_get_var : 'a node sd -> (string, value) Hashtbl.t sd
  val node_get_attr : 'a node sd -> (string, value) Hashtbl.t sd
  val node_get_extern_id : 'a node sd -> int sd
  val node_get_name : 'a node sd -> string sd
  val node_get_meta : 'a node sd -> 'a sd
  val hashtbl_force_remove : (string, 'a) Hashtbl.t sd -> string sd -> unit sd
  val hashtbl_contain : (string, 'a) Hashtbl.t sd -> string sd -> bool sd
  val hashtbl_find : (string, 'a) Hashtbl.t sd -> string sd -> 'a option sd
  val hashtbl_find_exn : (string, 'a) Hashtbl.t sd -> string sd -> 'a sd
  val hashtbl_set : (string, 'a) Hashtbl.t sd -> string sd -> 'a sd -> unit sd
  val hashtbl_add_exn : (string, 'a) Hashtbl.t sd -> string sd -> 'a sd -> unit sd
  val none : unit -> 'a option sd
  val some : 'a sd -> 'a option sd
  val is_none : 'a option sd -> bool sd
  val is_some : 'a option sd -> bool sd
  val option_iter : 'a option sd -> ('a sd -> unit sd) -> unit sd
  val option_match : 'a option sd -> (unit -> 'b sd) -> ('a sd -> 'b sd) -> 'b sd
  val list_iter : 'a list sd -> ('a sd -> unit sd) -> unit sd
  val list_iter_2 : 'a list sd -> ('a sd -> 'a sd -> unit sd) -> unit sd
  val list_tl : 'a list sd -> 'a list sd
  val list_drop_last : 'a list sd -> 'a list sd
  val list_last : 'a list sd -> 'a option sd
  val list_zip : 'a list sd -> 'b list sd -> ('a * 'b) list sd
  val list_map : 'a list sd -> ('a sd -> 'b sd) -> 'b list sd
  val list_nth_exn : 'a list sd -> int sd -> 'a sd
  val make_pair : 'a sd -> 'b sd -> ('a * 'b) sd
  val zro : ('a * 'b) sd -> 'a sd
  val fst : ('a * 'b) sd -> 'b sd
  val make_layout_node : layout_node list sd -> layout_node sd
  val layout_node_get_children : layout_node sd -> layout_node list sd
  val layout_node_set_children : layout_node sd -> layout_node list sd -> unit sd
  val int_add : int sd -> int sd -> int sd
  val int_equal : int sd -> int sd -> bool sd
  val fresh_metric : unit -> metric sd
  val reset_metric : metric sd -> unit sd
  val read_metric : metric sd -> unit sd
  val meta_read_metric : metric sd -> unit sd
  val write_metric : metric sd -> unit sd
  val meta_write_metric : metric sd -> unit sd
  val input_change_metric : metric sd -> int sd -> unit sd
  val output_change_metric : metric sd -> int sd -> unit sd
  val metric_read_count : metric sd -> int sd
  val metric_meta_read_count : metric sd -> int sd
  val metric_write_count : metric sd -> int sd
  val metric_meta_write_count : metric sd -> int sd
  val metric_input_change_count : metric sd -> int sd
  val metric_output_change_count : metric sd -> int sd
  val queue_size_metric : metric sd -> int sd -> unit sd
  val metric_queue_size_acc : metric sd -> int sd
  val vbool : bool sd -> value sd
  val vint : int sd -> value sd
  val vfloat : float sd -> value sd
  val vstring : string sd -> value sd
  val bool_of_value : value sd -> bool sd
  val int_of_value : value sd -> int sd
  val float_of_value : value sd -> float sd
  val string_of_value : value sd -> string sd
  val equal_value : value sd -> value sd -> bool sd
  val panic : string sd -> 'a sd
  val string_of_int : int sd -> string sd
  val string_append : string sd -> string sd -> string sd
  val string_concat : string sd -> string list sd -> string sd
  val eval_func : func -> value sd list -> value sd
  val nil : unit -> 'a list sd
  val cons : 'a sd -> 'a list sd -> 'a list sd
  val show_node : 'a node sd -> string sd
  val show_value : value sd -> string sd
  val string_match : string sd -> (string * (unit -> 'a sd)) list -> (unit -> 'a sd) -> 'a sd
  val list_match : 'a list sd -> (unit -> 'b sd) -> ('a sd -> 'a list sd -> 'b sd) -> 'b sd
  val list_split_n : 'a list sd -> int sd -> ('a list * 'a list) sd
  val list_int_sum : 'a list sd -> ('a sd -> int sd) -> int sd
  val list_append : 'a list sd -> 'a list sd -> 'a list sd
  val list_tail_exn : 'a list sd -> 'a list sd
  val list_hd : 'a list sd -> 'a option sd
  val list_hd_exn : 'a list sd -> 'a sd
  val list_is_empty : 'a list sd -> bool sd
  val list_is_singleton : 'a list sd -> bool sd
  val list_length : 'a list sd -> int sd
  val unsome : 'a option sd -> 'a sd
  val and_ : bool sd -> (unit -> bool sd) -> bool sd
  val or_ : bool sd -> (unit -> bool sd) -> bool sd
end

module type SD = sig
  include SDIN

  val seqs : (unit -> unit sd) list -> unit sd
  val list : 'a sd list -> 'a list sd
  val option_to_list : 'a option sd -> 'a list sd
  val eval_path_opt : 'a node sd -> path -> 'a node option sd
  val eval_path : 'a node sd -> path -> 'a node sd
end

module MakeSD (SDIN : SDIN) : SD with type 'a sd = 'a SDIN.sd = struct
  include SDIN

  let rec seqs x = match x with [] -> tt | hd :: tl -> seq (hd ()) (fun _ -> seqs tl)
  let rec list x = match x with [] -> nil () | hd :: tl -> cons hd (list tl)
  let option_to_list o = option_match o (fun _ -> nil ()) (fun x -> list [ x ])
  let unsome o = option_match o (fun _ -> panic (string "none")) (fun x -> x)

  let eval_path_opt (n : 'a node sd) (p : path) : 'a node option sd =
    match p with
    | Self -> some n
    | Parent -> node_get_parent n
    | First -> node_get_first n
    | Next -> node_get_next n
    | Prev -> node_get_prev n
    | Last -> node_get_last n

  let eval_path n p = unsome (eval_path_opt n p)
end

module S : SD with type 'x sd = 'x = MakeSD (struct
  type 'x sd = 'x

  let is_static = true
  let static x = x
  let unstatic x = x
  let defs _ = []
  let dyn _ = panic "dyn"
  let undyn _ = panic "undyn"
  let lift _ _ x = Lazy.force x
  let tt = ()

  let seq lhs rhs =
    lhs;
    rhs ()

  let let_ x f = f x
  let lam f = f
  let app f = f
  let rec fix (f : ('a -> 'b) -> 'a -> 'b) (x : 'a) : 'b = f (fun x -> fix f x) x
  let lam2 f = f
  let app2 f = f
  let rec fix2 (f : ('a -> 'b -> 'c) -> 'a -> 'b -> 'c) (x0 : 'a) (x1 : 'b) : 'c = f (fun x0 x1 -> fix2 f x0 x1) x0 x1
  let lam3 f = f
  let app3 f = f

  let rec fix3 (f : ('a -> 'b -> 'c -> 'd) -> 'a -> 'b -> 'c -> 'd) (x0 : 'a) (x1 : 'b) (x2 : 'c) : 'd =
    f (fun x0 x1 x2 -> fix3 f x0 x1 x2) x0 x1 x2

  let ite i t e = if i then t () else e ()
  let json_of_string x = Yojson.Basic.from_string x
  let with_in_file name f = Stdio.In_channel.with_file name ~f

  let with_out_file name f = Stdio.Out_channel.with_file name ~f ~append:true

  let ignore x = Core.ignore x
  let output_string c s = Stdio.Out_channel.output_string c s
  let input_line c = Stdio.In_channel.input_line_exn c
  let iter_lines c f = Stdio.In_channel.iter_lines c ~f
  let print_endline str = Stdio.print_endline str
  let make_ref a = ref a
  let read_ref a = !a
  let write_ref a v = a := v
  let int x = x

  let fresh_metric () =
    {
      read_count = 0;
      meta_read_count = 0;
      write_count = 0;
      meta_write_count = 0;
      queue_size_acc = 0;
      input_change_count = 0;
      output_change_count = 0;
    }

  let make_stack = Stack.make
  let push_stack = Stack.push
  let clear_stack = Stack.clear
  let stack_to_list = Stack.to_list
  let assert_ b = assert b
  let string_equal x y = String.equal x y
  let string x = x
  let bool x = x
  let float x = x

  let assoc_to_json x : Yojson.Basic.t =
    let open Yojson.Basic in
    `Assoc x

  let string_to_json x : Yojson.Basic.t =
    let open Yojson.Basic in
    `String x

  let int_to_json x : Yojson.Basic.t =
    let open Yojson.Basic in
    `Int x

  let list_to_json x : Yojson.Basic.t =
    let open Yojson.Basic in
    `List x

  let unsome o = Option.value_exn o
  let json_to_string (j : Yojson.Basic.t sd) = Yojson.Basic.Util.to_string j
  let json_member = Yojson.Basic.Util.member

  let json_to_value (j : Yojson.Basic.t) : value =
    let open Yojson.Basic.Util in
    match j with
    | `String s -> VString s
    | `Int i -> VInt i
    | _ -> panic ("unknown value in json_to_value: " ^ Yojson.Basic.pretty_to_string j)

  let json_to_dict (j : Yojson.Basic.t) : (string, value) Hashtbl.t =
    let open Yojson.Basic.Util in
    Hashtbl.map (Hashtbl.of_alist_exn (module String) (to_assoc j)) ~f:json_to_value

  let json_to_int j : int =
    let open Yojson.Basic.Util in
    to_int j

  let json_to_list = Yojson.Basic.Util.to_list
  let json_to_channel c j = Yojson.Basic.to_channel c j
  let list_map l f = List.map l ~f
  let node_get_parent n = n.parent
  let node_set_parent n v = n.parent <- v
  let node_get_prev n = n.prev
  let node_set_prev n v = n.prev <- v
  let node_get_next n = n.next
  let node_set_next n v = n.next <- v
  let node_get_last n = n.last
  let node_set_last n v = n.last <- v
  let node_get_first n = n.first
  let node_set_first n v = n.first <- v
  let node_get_prop n = n.prop
  let node_get_var n = n.var
  let node_get_attr n = n.attr
  let node_get_children (n : _ node) = n.children
  let node_set_children (n : _ node) v = n.children <- v
  let node_get_extern_id x = x.extern_id
  let node_get_name x = x.name
  let node_get_meta x = x.m
  let hashtbl_find h k = Hashtbl.find h k
  let hashtbl_contain h k = Option.is_some (Hashtbl.find h k)
  let hashtbl_find_exn h k = Hashtbl.find_exn h k
  let hashtbl_set h key data = Hashtbl.set h ~key ~data
  let hashtbl_add_exn h key data = Hashtbl.add_exn h ~key ~data

  let hashtbl_force_remove h key =
    ignore (Hashtbl.find_exn h key);
    Hashtbl.remove h key

  let none () = None
  let some x = Some x
  let is_none o = Option.is_none o
  let is_some o = Option.is_some o
  let make_pair a b = (a, b)
  let zro (a, b) = a
  let fst (a, b) = b
  let option_iter o f = Option.iter o ~f
  let option_match o n s = match o with Some x -> s x | None -> n ()
  let list_nth_exn l i = List.nth_exn l i
  let list_tl l = Option.value (List.tl l) ~default:[]
  let list_drop_last l = Option.value (List.drop_last l) ~default:[]
  let list_zip x y = List.zip_exn x y
  let list_last l = List.last l
  let list_int_sum l f = List.sum (module Int) l ~f
  let list_length l = List.length l
  let list_append l r = List.append l r
  let list_iter (l : 'a list) (f : 'a -> unit) = List.iter l ~f

  let list_iter_2 l (f : 'a -> 'a -> unit) =
    list_iter (list_zip (list_drop_last l) (list_tl l)) (fun p -> f (zro p) (fst p))

  let make_layout_node l = { children = l }
  let layout_node_get_children (l : layout_node) = l.children
  let layout_node_set_children (l : layout_node) c = l.children <- c
  let int_add x y = x + y
  let int_equal x y = Int.equal x y

  let reset_metric m =
    m.read_count <- 0;
    m.meta_read_count <- 0;
    m.write_count <- 0;
    m.meta_write_count <- 0;
    m.queue_size_acc <- 0;
    m.input_change_count <- 0;
    m.output_change_count <- 0

  let read_metric (m : metric) : unit = m.read_count <- m.read_count + 1
  let meta_read_metric (m : metric) : unit = m.meta_read_count <- m.meta_read_count + 1
  let write_metric (m : metric) : unit = m.write_count <- m.write_count + 1
  let meta_write_metric (m : metric) : unit = m.meta_write_count <- m.meta_write_count + 1
  let input_change_metric (m : metric) (c : int) = m.input_change_count <- m.input_change_count + c
  let output_change_metric (m : metric) (c : int) = m.output_change_count <- m.output_change_count + c
  let metric_read_count m = m.read_count
  let metric_meta_read_count m = m.meta_read_count
  let metric_write_count m = m.write_count
  let metric_meta_write_count m = m.meta_write_count
  let metric_input_change_count m = m.input_change_count
  let metric_output_change_count m = m.output_change_count
  let queue_size_metric m i = m.queue_size_acc <- m.queue_size_acc + i
  let metric_queue_size_acc m = m.queue_size_acc
  let vbool b = VBool b
  let vint i = VInt i
  let vstring x = VString x
  let vfloat x = VFloat x

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

  let bool_of_value x = match x with VBool b -> b | _ -> panic (show_value x)
  let int_of_value x = match x with VInt i -> i | _ -> panic (show_value x)
  let string_of_value x = match x with VString x -> x | _ -> panic (show_value x)
  let float_of_value x = match x with VFloat x -> x | _ -> panic (show_value x)
  let panic x = Common.panic x
  let string_of_int i = Core.string_of_int i
  let string_append l r = l ^ r
  let string_concat sep list = String.concat ~sep list

  let equal_value x y : bool =
    match (x, y) with
    | VString x, VString y -> String.equal x y
    | VInt x, VInt y -> Int.equal x y
    | VBool x, VBool y -> Bool.equal x y
    | VFloat x, VFloat y -> (Float.is_nan x && Float.is_nan y) || Float.equal x y
    | _ -> panic ("unhandled case in equal_value: " ^ show_value x ^ " " ^ show_value y)

  let eval_func (f : func) (xs : value list) =
    match (f, xs) with
    | Lt, [ VInt lhs; VInt rhs ] -> VBool (lhs < rhs)
    | Gt, [ VInt lhs; VInt rhs ] -> VBool (lhs > rhs)
    | Eq, [ lhs; rhs ] -> VBool (equal_value lhs rhs)
    | Neq, [ lhs; rhs ] -> VBool (not (equal_value lhs rhs))
    | Plus, [ VInt lhs; VInt rhs ] -> VInt (lhs + rhs)
    | Plus, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs +. rhs)
    | Mult, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs *. rhs)
    | Minus, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs -. rhs)
    | Gt, [ VFloat lhs; VFloat rhs ] -> VBool (Float.( >. ) lhs rhs)
    | Div, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs /. rhs)
    | Max, [ VFloat lhs; VFloat rhs ] -> VFloat (Float.max lhs rhs)
    | HasSuffix, [ VString s; VString sfx ] -> VBool (has_suffix s sfx)
    | HasPrefix, [ VString s; VString sfx ] -> VBool (has_prefix s sfx)
    | StripSuffix, [ VString s; VString sfx ] -> VString (strip_suffix s sfx)
    | StripPrefix, [ VString s; VString sfx ] -> VString (strip_prefix s sfx)
    | Not, [ VBool x ] -> VBool (not x)
    | StringToFloat, [ VString str ] -> (
        match float_of_string_opt str with Some x -> VFloat x | None -> panic ("StringToFloat failed: " ^ str))
    | StringToInt, [ VString str ] -> (
        match int_of_string_opt str with Some x -> VInt x | None -> panic ("StringToInt failed: " ^ str))
    | StringIsFloat, [ VString str ] -> VBool (Option.is_some (float_of_string_opt str))
    | IntToFloat, [ VInt x ] -> VFloat (float_of_int x)
    | NthBySep, [ VString s; VString sep; VInt nth ] ->
        assert (Int.equal (String.length sep) 1);
        VString (List.nth_exn (String.split s ~on:(String.get sep 0)) nth)
    | _ -> panic (show_func f ^ List.to_string ~f:show_value xs)

  let nil () = []
  let cons hd tl = hd :: tl
  let list_match l n c = match l with [] -> n () | h :: t -> c h t

  let rec string_match s cases default =
    match cases with
    | (chs, chc) :: ct -> if String.equal chs s then chc () else string_match s ct default
    | [] -> default ()

  let list_split_n l i = List.split_n l i
  let list_tail_exn l = match l with _ :: t -> t
  let list_hd x = match x with [] -> None | x :: _ -> Some x
  let list_hd_exn x = match x with x :: _ -> x
  let list_is_empty l = List.is_empty l
  let list_is_singleton x = match x with [] -> false | _ :: y -> list_is_empty y
  let and_ l r = if l then r () else false
  let or_ l r = if l then true else r ()
end)

module D : SD with type 'x sd = code = MakeSD (struct
  type 'x sd = code

  let is_static = false
  let static x = Common.panic "static"
  let unstatic x = Common.panic "unstatic"
  let dyn x = x
  let undyn x = x
  let global_defs : (string * string * code Lazy.t) list ref = ref []

  let rec defs _ =
    let ret =
      List.map !global_defs (fun (ret_type, s, cl) ->
          (ret_type, s, Lazy.force cl))
    in
    if Int.equal (List.length ret) (List.length !global_defs) then (
      global_defs := [];
      ret)
    else defs ()

  let lift ret_type name x : code =
    let v = name ^ "_" ^ fresh () in
    global_defs := (ret_type, v, x) :: !global_defs;
    CVar v

  let seq lhs rhs = CSeq [ lhs; rhs () ]

  let let_ (x : code) (f : code -> code) : code =
    let v = fresh () in
    CLet (v, x, f (CVar v))

  let lam (f : code -> code) : code =
    let v = fresh () in
    CFun ([ v ], f (CVar v))

  let fix (f : ('a sd -> 'b sd) -> 'a sd -> 'b sd) : ('a -> 'b) sd =
    let fname = fresh () in
    let xname = fresh () in
    CFix (fname, [ xname ], f (fun x -> CApp (CVar fname, [ x ])) (CVar xname))

  let app f x = CApp (f, [ x ])

  let lam2 (f : code -> code -> code) : code =
    let v0 = fresh () in
    let v1 = fresh () in
    CFun ([ v0; v1 ], f (CVar v0) (CVar v1))

  let fix2 (f : ('a sd -> 'b sd -> 'c sd) -> 'a sd -> 'b sd -> 'c sd) : ('a -> 'b -> 'c) sd =
    let fname = fresh () in
    let xname0 = fresh () in
    let xname1 = fresh () in
    CFix (fname, [ xname0; xname1 ], f (fun x0 x1 -> CApp (CVar fname, [ x0; x1 ])) (CVar xname0) (CVar xname1))

  let app2 (f : code) x0 x1 = CApp (f, [ x0; x1 ])

  let lam3 (f : code -> code -> code -> code) : code =
    let v0 = fresh () in
    let v1 = fresh () in
    let v2 = fresh () in
    CFun ([ v0; v1; v2 ], f (CVar v0) (CVar v1) (CVar v2))

  let fix3 (f : ('a sd -> 'b sd -> 'c sd -> 'd sd) -> 'a sd -> 'b sd -> 'c sd -> 'd sd) : ('a -> 'b -> 'c -> 'd) sd =
    let fname = fresh () in
    let xname0 = fresh () in
    let xname1 = fresh () in
    let xname2 = fresh () in
    CFix
      ( fname,
        [ xname0; xname1; xname2 ],
        f (fun x0 x1 x2 -> CApp (CVar fname, [ x0; x1; x2 ])) (CVar xname0) (CVar xname1) (CVar xname2) )

  let app3 (f : code) x0 x1 x2 = CApp (f, [ x0; x1; x2 ])
  let ignore x = x
  let int x = CInt x
  let bool x = CBool x
  let float x = CFloat x
  let string x = CString x
  let tt = CApp (CPF "MakeUnit", [])
  let ite (i : code) (t : unit -> code) (e : unit -> code) : code = CIf (i, t (), e ())
  let with_in_file name f = CApp (CPF "WithInFile", [ name; lam f ])
  let with_out_file name f = CApp (CPF "WithOutFile", [ name; lam f ])
  let output_string c s = CApp (CPF "OutputString", [ c; s ])
  let input_line c = CApp (CPF "InputLine", [ c ])
  let iter_lines c f = CApp (CPF "IterLines", [ c; lam f ])
  let print_endline str = CApp (CPF "PrintEndline", [ str ])
  let make_ref x = CApp (CPF "MakeRef", [ x ])
  let read_ref r = CApp (CPF "ReadRef", [ r ])
  let write_ref r x = CApp (CPF "WriteRef", [ r; x ])
  let make_stack () = CApp (CPF "MakeStack", [])
  let push_stack s v = CApp (CPF "PushStack", [ s; v ])
  let clear_stack s = CApp (CPF "ClearStack", [ s ])
  let stack_to_list s = CApp (CPF "StackToList", [ s ])
  let assert_ b = CApp (CPF "Assert", [ b ])
  let string_equal x y = CApp (CPF "StringEqual", [ x; y ])
  let assoc_to_json x = CApp (CPF "AssocToJson", [ x ])
  let int_to_json x = CApp (CPF "IntToJson", [ x ])
  let string_to_json x = CApp (CPF "StringToJson", [ x ])
  let list_to_json x = CApp (CPF "ListToJson", [ x ])
  let json_of_string x = CApp (CPF "JsonOfString", [ x ])
  let json_member str j = CApp (CPF "JsonMember", [ str; j ])
  let json_to_string j = CApp (CPF "JsonToString", [ j ])
  let json_to_value j = CApp (CPF "JsonToValue", [ j ])
  let json_to_dict j = CApp (CPF "JsonToDict", [ j ])
  let json_to_int j = CApp (CPF "JsonToInt", [ j ])
  let json_to_list j = CApp (CPF "JsonToList", [ j ])
  let json_to_channel c j = CApp (CPF "JsonToChannel", [ c; j ])
  let unsome o = CApp (CPF "UnSome", [ o ])
  let node_get_parent n = CGetMember (n, "parent")
  let node_set_parent n v = CSetMember (n, "parent", v)
  let node_get_prev n = CGetMember (n, "prev")
  let node_set_prev n v = CSetMember (n, "prev", v)
  let node_get_next n = CGetMember (n, "next")
  let node_set_next n v = CSetMember (n, "next", v)
  let node_get_last n = CGetMember (n, "last")
  let node_set_last n v = CSetMember (n, "last", v)
  let node_get_first n = CGetMember (n, "first")
  let node_set_first n v = CSetMember (n, "first", v)
  let node_get_children n = CGetMember (n, "children")
  let node_set_children n v = CSetMember (n, "children", v)
  let node_get_prop n = CGetMember (n, "prop")
  let node_get_var n = CGetMember (n, "var")
  let node_get_attr n = CGetMember (n, "attr")
  let node_get_name n = CGetMember (n, "name")
  let node_get_meta n = CGetMember (n, "meta")
  let hashtbl_contain h k = CApp (CPF "HashtblContain", [ h; k ])
  let hashtbl_find h k = CApp (CPF "HashtblFind", [ h; k ])
  let hashtbl_find_exn h k = CApp (CPF "HashtblFindExn", [ h; k ])
  let hashtbl_set h k v = CApp (CPF "HashtblSet", [ h; k; v ])
  let hashtbl_add_exn h k v = CApp (CPF "HashtblAddExn", [ h; k; v ])
  let hashtbl_force_remove h k = CApp (CPF "HashtblForceRemove", [ h; k ])
  let none () = CApp (CPF "None", [])
  let some x = CApp (CPF "Some", [ x ])
  let is_none x = CApp (CPF "IsNone", [ x ])
  let is_some x = CApp (CPF "IsSome", [ x ])

  let option_match (o : 'a option sd) (n : unit -> 'b sd) (s : 'a sd -> 'b sd) =
    CApp (CPF "OptionMatch", [ o; lam (fun _ -> n ()); lam s ])

  let string_match (s : string sd) (cases : (string * (unit -> 'a sd)) list) (default : unit -> 'a sd) : 'a sd =
    CStringMatch (s, List.map cases ~f:(fun (l, r) -> (l, r ())), default ())

  let list_match (l : 'a list sd) (n : unit -> 'b sd) (c : 'a sd -> 'a list sd -> 'b sd) : 'b sd =
    CApp (CPF "ListMatch", [ l; lam (fun _ -> n ()); lam2 (fun h t -> c h t) ])

  let option_iter (o : 'a option sd) (f : 'a sd -> unit sd) : unit sd = CApp (CPF "OptionIter", [ o; lam f ])
  let list_nth_exn l i = CApp (CPF "ListNthExn", [ l; i ])
  let list_map l f = CApp (CPF "ListMap", [ l; lam f ])
  let list_iter (l : 'a list sd) (f : 'a sd -> unit sd) : unit sd = CApp (CPF "ListIter", [ l; lam f ])
  let list_iter_2 l f = CApp (CPF "ListIter2", [ l; lam2 f ])
  let list_tl l = CApp (CPF "ListTl", [ l ])
  let list_last l = CApp (CPF "ListLast", [ l ])
  let list_drop_last l = CApp (CPF "ListDropLast", [ l ])
  let list_zip x y = CApp (CPF "ListZip", [ x; y ])
  let list_int_sum x f = CApp (CPF "ListIntSum", [ x; lam f ])
  let list_length l = CApp (CPF "ListLength", [ l ])
  let make_pair a b = CApp (CPF "MakePair", [ a; b ])
  let zro p = CApp (CPF "Zro", [ p ])
  let fst p = CApp (CPF "Fst", [ p ])
  let make_layout_node l = CApp (CPF "MakeLayoutNode", [ l ])
  let layout_node_get_children l = CGetMember (l, "children")
  let layout_node_set_children l c = CSetMember (l, "children", c)
  let int_add x y = CApp (CPF "IntAdd", [ x; y ])
  let int_equal x y = CApp (CPF "IntEqual", [ x; y ])
  let panic x = CPanic x
  let node_get_extern_id x = CGetMember (x, "extern_id")
  let string_of_int i = CApp (CPF "StringOfInt", [ i ])
  let string_append x y = CApp (CPF "StringAppend", [ x; y ])
  let show_node n = CApp (CPF "ShowNode", [ n ])
  let show_value v = CApp (CPF "ShowValue", [ v ])
  let fresh_metric () = CApp (CPF "FreshMetric", [])
  let reset_metric m = CApp (CPF "ResetMetric", [ m ])
  let read_metric m = CApp (CPF "ReadMetric", [ m ])
  let meta_read_metric m = CApp (CPF "MetaReadMetric", [ m ])
  let write_metric m = CApp (CPF "WriteMetric", [ m ])
  let meta_write_metric m = CApp (CPF "MetaWriteMetric", [ m ])
  let input_change_metric m i = CApp (CPF "InputChangeMetric", [ m; i ])
  let output_change_metric m i = CApp (CPF "OutputChangeMetric", [ m; i ])
  let metric_read_count m = CApp (CPF "MetricReadCount", [ m ])
  let metric_meta_read_count m = CApp (CPF "MetricMetaReadCount", [ m ])
  let metric_write_count m = CApp (CPF "MetricWriteCount", [ m ])
  let metric_meta_write_count m = CApp (CPF "MetricMetaWriteCount", [ m ])
  let metric_input_change_count m = CApp (CPF "MetricInputChangeCount", [ m ])
  let metric_output_change_count m = CApp (CPF "MetricOutputChangeCount", [ m ])
  let queue_size_metric m i = CApp (CPF "MetricQueueSize", [ m; i ])
  let metric_queue_size_acc m = CApp (CPF "MetricQueueSizeAcc", [ m ])
  let vbool b = CApp (CPF "VBool", [ b ])
  let vint i = CApp (CPF "VInt", [ i ])
  let vstring s = CApp (CPF "VString", [ s ])
  let vfloat f = CApp (CPF "VFloat", [ f ])
  let bool_of_value x = CApp (CPF "BoolOfValue", [ x ])
  let int_of_value x = CApp (CPF "IntOfValue", [ x ])
  let string_of_value x = CApp (CPF "StringOfValue", [ x ])
  let float_of_value x = CApp (CPF "FloatOfValue", [ x ])
  let equal_value x y : bool sd = CApp (CPF "EqualValue", [ x; y ])
  let eval_func f xs = CApp (CPF (func_name_compiled f), xs)
  let nil () = CApp (CPF "Nil", [])
  let cons hd tl = CApp (CPF "Cons", [ hd; tl ])
  let string_concat sep list = CApp (CPF "StringConcat", [ sep; list ])
  let list_split_n l i = CApp (CPF "ListSplitN", [ l; i ])
  let list_append l r = CApp (CPF "ListAppend", [ l; r ])
  let list_tail_exn l = CApp (CPF "ListTailExn", [ l ])
  let list_hd_exn l = CApp (CPF "ListHeadExn", [ l ])
  let list_hd l = CApp (CPF "ListHead", [ l ])
  let list_is_empty l = CApp (CPF "ListIsEmpty", [ l ])
  let list_is_singleton l = CApp (CPF "ListIsSingleton", [ l ])
  let and_ l r = CAnd (l, r ())
  let or_ l r = COr (l, r ())
end)
