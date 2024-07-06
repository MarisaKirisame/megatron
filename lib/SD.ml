open Core
open Common
open Metric
open Ast

(*to avoid code duplication, can only be used once. whoever that need reuse need to duplicate.*)
type _ code =
  | Expr of string
  (*statement that return*)
  | Stmt of string
  (*statement that does not return*)
  | Proc of string
[@@deriving show]

let code_cast (x : 'a code) : 'b code = match x with Expr x -> Expr x | Stmt x -> Stmt x | Proc x -> Proc x
let unexpr = function Expr s -> bracket s | Proc x | Stmt x -> "[&]()" ^ square_bracket x ^ "()"
let unstmt = function Stmt s -> s | Expr x -> "return " ^ x ^ ";" | x -> panic ("unstmt: " ^ show_code x)
let unproc = function Proc p -> p | Expr x -> x ^ ";" | Stmt x -> "[&]()" ^ square_bracket x ^ "();"
let canonicalize (x : _ code) : _ code = x

module type SDIN = sig
  type _ sd

  val is_static : bool

  (*escape hatch*)
  val static : 'a -> 'a sd
  val unstatic : 'a sd -> 'a
  val dyn : 'a code -> 'a sd
  val undyn : 'a sd -> 'a code
  val tt : unit sd
  val make_ref : 'a sd -> 'a ref sd
  val read_ref : 'a ref sd -> 'a sd
  val write_ref : 'a ref sd -> 'a sd -> unit sd
  val int : int -> int sd
  val bool : bool -> bool sd
  val float : float -> float sd
  val seq : unit sd -> (unit -> 'a sd) -> 'a sd
  val let_ : 'a sd -> ('a sd -> 'b sd) -> 'b sd
  val lam : ('a sd -> 'b sd) -> ('a -> 'b) sd
  val app : ('a -> 'b) sd -> 'a sd -> 'b sd
  val ite : bool sd -> (unit -> 'a sd) -> (unit -> 'a sd) -> 'a sd
  val json_of_string : string sd -> Yojson.Basic.t sd
  val with_file : string -> (Stdio.In_channel.t sd -> 'a sd) -> 'a sd
  val input_line : Stdio.In_channel.t sd -> string sd
  val iter_lines : Stdio.In_channel.t sd -> (string sd -> unit sd) -> unit sd
  val print_endline : string -> unit sd
  val make_stack : unit -> 'a Stack.t sd
  val push_stack : 'a Stack.t sd -> 'a sd -> unit sd
  val clear_stack : 'a Stack.t sd -> unit sd
  val assert_ : bool sd -> unit sd
  val string_equal : string sd -> string sd -> bool sd
  val string : string -> string sd
  val json_to_string : Yojson.Basic.t sd -> string sd
  val json_member : string sd -> Yojson.Basic.t sd -> Yojson.Basic.t sd
  val json_to_value : Yojson.Basic.t sd -> value sd
  val json_to_dict : Yojson.Basic.t sd -> (string, value) Hashtbl.t sd
  val json_to_int : Yojson.Basic.t sd -> int sd
  val json_to_list : Yojson.Basic.t sd -> Yojson.Basic.t list sd
  val fix : (('a sd -> 'b sd) -> 'a sd -> 'b sd) -> 'a sd -> 'b sd
  val node_get_parent : 'a node sd -> 'a node option sd
  val node_set_parent : 'a node sd -> 'a node option sd -> unit sd
  val node_get_prev : 'a node sd -> 'a node option sd
  val node_set_prev : 'a node sd -> 'a node option sd -> unit sd
  val node_get_next : 'a node sd -> 'a node option sd
  val node_set_next : 'a node sd -> 'a node option sd -> unit sd
  val node_get_children : 'a node sd -> 'a node list sd
  val node_set_children : 'a node sd -> 'a node list sd -> unit sd
  val node_get_prop : 'a node sd -> (string, value) Hashtbl.t sd
  val node_get_var : 'a node sd -> (string, value) Hashtbl.t sd
  val node_get_attr : 'a node sd -> (string, value) Hashtbl.t sd
  val hashtbl_find : (string, 'a) Hashtbl.t sd -> string sd -> 'a option sd
  val hashtbl_set : (string, 'a) Hashtbl.t sd -> string sd -> 'a sd -> unit sd
  val none : unit -> 'a option sd
  val some : 'a sd -> 'a option sd
  val is_none : 'a option sd -> bool sd
  val is_some : 'a option sd -> bool sd
  val option_iter : 'a option sd -> f:('a sd -> unit sd) -> unit sd
  val option_match : 'a option sd -> ('a sd -> 'b sd) -> (unit -> 'b sd) -> 'b sd
  val list_iter : 'a list sd -> f:('a sd -> unit sd) -> unit sd
  val list_tl : 'a list sd -> 'a list sd
  val list_drop_last : 'a list sd -> 'a list sd
  val list_last : 'a list sd -> 'a option sd
  val list_zip : 'a list sd -> 'b list sd -> ('a * 'b) list sd
  val list_map : 'a list sd -> f:('a sd -> 'b sd) -> 'b list sd
  val zro : ('a * 'b) sd -> 'a sd
  val fst : ('a * 'b) sd -> 'b sd
  val make_layout_node : layout_node list sd -> layout_node sd
  val layout_node_get_children : layout_node sd -> layout_node list sd
  val int_add : int sd -> int sd -> int sd
  val list_int_sum : 'a list sd -> ('a sd -> int sd) -> int sd
  val fresh_metric : unit -> metric sd
  val reset_metric : metric sd -> unit sd
  val read_metric : metric sd -> unit sd
  val meta_read_metric : metric sd -> unit sd
  val write_metric : metric sd -> unit sd
  val meta_write_metric : metric sd -> unit sd
  val input_change_metric : metric sd -> int sd -> unit sd
  val output_change_metric : metric sd -> int sd -> unit sd
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
  val node_get_extern_id : _ node sd -> int sd
  val string_of_int : int sd -> string sd
  val string_append : string sd -> string sd -> string sd
  val eval_func : func -> value sd list -> value sd
  val nil : unit -> 'a list sd
  val cons : 'a sd -> 'a list sd -> 'a list sd
end

module type SD = sig
  include SDIN

  val seqs : (unit -> unit sd) list -> unit sd
  val list : 'a sd list -> 'a list sd
  val option_to_list : 'a option sd -> 'a list sd
end

module MakeSD (SDIN : SDIN) : SD with type 'a sd = 'a SDIN.sd = struct
  include SDIN

  let rec seqs x = match x with [] -> tt | hd :: tl -> seq (hd ()) (fun _ -> seqs tl)
  let rec list x = match x with [] -> nil () | hd :: tl -> cons hd (list tl)
  let option_to_list o = option_match o (fun x -> list [ x ]) (fun _ -> nil ())
end

module S : SD with type 'x sd = 'x = MakeSD (struct
  type 'x sd = 'x

  let is_static = true
  let static x = x
  let unstatic x = x
  let dyn x = panic "dyn"
  let undyn x = panic "undyn"
  let tt = ()

  let seq lhs rhs =
    lhs;
    rhs ()

  let let_ x f = f x
  let lam f = f
  let app f x = f x
  let ite i t e = if i then t () else e ()
  let json_of_string x = Yojson.Basic.from_string x
  let with_file name f = Stdio.In_channel.with_file name ~f
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
  let assert_ b = assert b
  let string_equal x y = String.equal x y
  let string x = x
  let bool x = x
  let float x = x
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
  let list_map = List.map
  let rec fix (f : ('a -> 'b) -> 'a -> 'b) (x : 'a) : 'b = f (fun x -> fix f x) x
  let node_get_parent n = n.parent
  let node_set_parent n v = n.parent <- v
  let node_get_prev n = n.prev
  let node_set_prev n v = n.prev <- v
  let node_get_next n = n.next
  let node_set_next n v = n.next <- v
  let node_get_prop n = n.prop
  let node_get_var n = n.var
  let node_get_attr n = n.attr
  let node_get_children (n : _ node) = n.children
  let node_set_children (n : _ node) v = n.children <- v
  let hashtbl_find h k = Hashtbl.find h k
  let hashtbl_set h key data = Hashtbl.set h ~key ~data
  let none () = None
  let some x = Some x
  let is_none o = Option.is_none o
  let is_some o = Option.is_some o
  let option_iter o ~f = Option.iter o ~f
  let option_match o s n = match o with Some x -> s x | None -> n ()
  let list_iter (l : 'a list) ~(f : 'a -> unit) = List.iter l ~f
  let list_tl l = Option.value (List.tl l) ~default:[]
  let list_drop_last l = Option.value (List.drop_last l) ~default:[]
  let list_zip x y = List.zip_exn x y
  let list_last l = List.last l
  let list_int_sum l f = List.sum (module Int) l ~f
  let zro (a, b) = a
  let fst (a, b) = b
  let make_layout_node l = { children = l }
  let layout_node_get_children (l : layout_node) = l.children
  let int_add x y = x + y

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
  let vbool b = VBool b
  let vint i = VInt i
  let vstring x = VString x
  let vfloat x = VFloat x
  let bool_of_value x = match x with VBool b -> b | _ -> panic (show_value x)
  let int_of_value x = match x with VInt i -> i | _ -> panic (show_value x)
  let string_of_value x = match x with VString x -> x | _ -> panic (show_value x)
  let float_of_value x = match x with VFloat x -> x | _ -> panic (show_value x)
  let panic x = Common.panic x
  let node_get_extern_id x = x.extern_id
  let string_of_int i = Core.string_of_int i
  let string_append l r = l ^ r

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
end)

module D : SD with type 'x sd = 'x code = MakeSD (struct
  type 'x sd = 'x code

  let is_static = false
  let static x = panic "static"
  let unstatic x = panic "unstatic"
  let dyn x = x
  let undyn x = x

  let seq lhs rhs =
    match canonicalize (rhs ()) with
    | Stmt rhs -> Stmt (unproc lhs ^ rhs)
    | Proc rhs | Expr rhs -> Proc (unproc lhs ^ rhs)
    | rhs -> panic ("canonicalize: " ^ show_code rhs)

  let let_ (x : 'a code) (f : 'a code -> 'b code) : 'b code =
    let v = fresh () in
    seq (Proc ("auto " ^ v ^ "= " ^ bracket (unexpr x) ^ ";")) (fun _ -> f (Expr v))

  let lam (f : 'a code -> 'b code) : ('a -> 'b) code =
    let v = fresh () in
    Expr ("[&](const auto &" ^ v ^ ") { " ^ unstmt (f (Expr v)) ^ " }")

  let lam2 (f : 'a code -> 'b code -> 'c code) : ('a -> 'b -> 'c) code = lam (fun a -> lam (fun b -> f a b))
  let tt = Expr "make_unit()"
  let app f x = Expr (unexpr f ^ bracket (unexpr x))

  let ite (i : bool code) (t : unit -> 'a code) (e : unit -> 'a code) : 'a code =
    Expr (unexpr i ^ "?" ^ unexpr (t ()) ^ ":" ^ unexpr (e ()))

  let json_of_string x = Expr ("json_of_string" ^ bracket (unexpr x))
  let with_file name f = Expr (("with_file" ^ bracket name) ^ bracket (unexpr (lam f)))
  let input_line c = Expr ("input_line" ^ bracket (unexpr c))
  let iter_lines c f = todo "iter_lines"
  let print_endline str = Proc ("std::cout << " ^ quoted str ^ " << std::endl;")
  let int x = Expr ("static_cast<int>" ^ bracket (string_of_int x))
  let bool x = Expr ("static_cast<bool>" ^ bracket (string_of_bool x))
  let float x = Expr ("static_cast<double>" ^ bracket (string_of_float x))
  let make_ref x = Expr ("make_ref" ^ unexpr x)
  let read_ref x = Expr (unexpr x ^ ".read_ref()")
  let write_ref r x = Expr (unexpr r ^ ".write_ref" ^ bracket (unexpr x))
  let make_stack () = Expr "make_stack()"
  let push_stack s v = Expr ("push_stack" ^ bracket (unexpr s ^ "," ^ unexpr v))
  let clear_stack s = Expr ("clear_stack" ^ bracket (unexpr s))
  let assert_ b = Expr ("assert" ^ bracket (unexpr b))
  let string_equal x y = Expr (unexpr x ^ "==" ^ unexpr y)
  let string x = Expr (quoted x)
  let json_to_string x = Expr ("json_to_string" ^ bracket (unexpr x))
  let json_member str j = Expr ("json_member" ^ bracket (unexpr j ^ ", " ^ unexpr str))
  let json_to_value j = Expr ("json_to_value" ^ bracket (unexpr j))
  let json_to_dict j = Expr ("json_to_dict" ^ bracket (unexpr j))
  let json_to_int j = Expr ("json_to_int" ^ bracket (unexpr j))
  let json_to_list j = Expr ("json_to_list" ^ bracket (unexpr j))

  let fix (f : ('a code -> 'b code) -> 'a code -> 'b code) (x : 'a code) : 'b code =
    let fname = fresh () in
    let xname = fresh () in
    Expr
      ("fix " ^ fname ^ ", " ^ xname
      ^ bracket (unexpr (f (fun x -> Expr (fname ^ bracket (unexpr x))) (Expr xname)))
      ^ unexpr x)

  let node_get_parent n = Expr (unexpr n ^ ".parent")
  let node_set_parent n v = Proc (unexpr n ^ ".parent" ^ "=" ^ unexpr v)
  let node_get_prev n = Expr (unexpr n ^ ".prev")
  let node_set_prev n v = Proc (unexpr n ^ ".prev" ^ "=" ^ unexpr v)
  let node_get_next n = Expr (unexpr n ^ ".next")
  let node_set_next n v = Proc (unexpr n ^ ".next" ^ "=" ^ unexpr v)
  let node_get_children n = Expr (unexpr n ^ ".children")
  let node_set_children n v = Proc (unexpr n ^ ".children" ^ "=" ^ unexpr v)
  let node_get_prop n = Expr (unexpr n ^ ".prop")
  let node_get_var n = Expr (unexpr n ^ ".var")
  let node_get_attr n = Expr (unexpr n ^ ".attr")
  let hashtbl_find h k = Expr ("hashtbl_find" ^ bracket (unexpr h ^ ", " ^ unexpr k))
  let hashtbl_set h k v = Expr ("hashtbl_set" ^ bracket (unexpr h ^ ", " ^ unexpr k ^ ", " ^ unexpr v))
  let none () = Expr "none"
  let some x = Expr ("some" ^ bracket (unexpr x))
  let is_none x = Expr ("is_none" ^ bracket (unexpr x))
  let is_some x = Expr ("is_some" ^ bracket (unexpr x))

  let option_match (o : 'a option code) (s : 'a code -> 'b code) (n : unit -> 'b code) =
    let_ o (fun o ->
        Stmt
          ("if (is_some "
          ^ bracket (unexpr o)
          ^ ")"
          ^ square_bracket (s (Expr ("from_some" ^ bracket (unexpr o))) |> unstmt)
          ^ square_bracket (n () |> unstmt)))

  let option_iter (o : 'a option code) ~(f : 'a code -> unit code) : unit code =
    let_ o (fun o ->
        Proc
          ("if (is_some "
          ^ bracket (unexpr o)
          ^ ")"
          ^ square_bracket (unproc (f (Expr ("from_some" ^ bracket (unexpr o)))))))

  let list_map l ~f = Expr ("list_map" ^ bracket (unexpr l ^ ", " ^ unexpr (lam f)))

  let list_iter (l : 'a list code) ~(f : 'a code -> unit code) : unit code =
    let v = fresh () in
    Proc ("for (auto& " ^ v ^ ":" ^ unexpr l ^ ")" ^ square_bracket (unproc (f (Expr v))))

  let list_tl l = Expr ("list_tl" ^ bracket (unexpr l))
  let list_last l = Expr ("list_last" ^ bracket (unexpr l))
  let list_drop_last l = Expr ("list_drop_last" ^ bracket (unexpr l))
  let list_zip x y = Expr ("list_zip" ^ bracket (unexpr x ^ unexpr y))
  let zro p = Expr ("zro" ^ bracket (unexpr p))
  let fst p = Expr ("fst" ^ bracket (unexpr p))
  let make_layout_node l = Expr ("make_layout_node" ^ bracket (unexpr l))
  let layout_node_get_children l = Expr (unexpr l ^ ".children")
  let int_add x y = Expr (unexpr x ^ "+" ^ unexpr y)
  let panic x = Stmt ("panic" ^ bracket (unexpr x))
  let node_get_extern_id x = Expr (unexpr x ^ ".extern_id")
  let string_of_int i = Expr ("string_of_int" ^ bracket (unexpr i))
  let string_append x y = Expr (unexpr x ^ "+" ^ unexpr y)

  let list_int_sum x f =
    let v = fresh () in
    let_ (int 0) (fun i ->
        Stmt
          ("for (auto& " ^ v ^ ":" ^ unexpr x ^ ")"
          ^ square_bracket (unexpr i ^ "+=" ^ unexpr (f (Expr v)) ^ "; return" ^ unexpr i ^ ";")))

  let fresh_metric () = Expr "metric()"
  let reset_metric m = Proc (unexpr m ^ ".reset();")
  let read_metric m = Proc (unexpr m ^ ".read();")
  let meta_read_metric m = Proc (unexpr m ^ ".meta_read();")
  let write_metric m = Proc (unexpr m ^ ".write();")
  let meta_write_metric m = Proc (unexpr m ^ ".meta_write();")
  let input_change_metric m i = Proc (unexpr m ^ ".input_change" ^ bracket (unexpr i) ^ ";")
  let output_change_metric m i = Proc (unexpr m ^ ".output_change" ^ bracket (unexpr i) ^ ";")
  let vbool b = code_cast b
  let vint i = code_cast i
  let vstring s = code_cast s
  let vfloat f = code_cast f
  let bool_of_value x = code_cast x
  let int_of_value x = code_cast x
  let string_of_value x = code_cast x
  let float_of_value x = code_cast x
  let equal_value x y : bool sd = Expr ("equal_value" ^ bracket (unexpr x ^ ", " ^ unexpr y))
  let eval_func f xs = Expr (func_name_compiled f ^ bracket (String.concat (List.map xs ~f:unexpr) ~sep:","))
  let nil () = Expr "nil()"
  let cons hd tl = Expr ("cons" ^ bracket (unexpr hd ^ ", " ^ unexpr tl))
end)
