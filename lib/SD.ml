open Core
open Common
open Metric

type _ code =
  | Expr of string (*anything passed around must be atomic; return of a function, however, can be non-atomic*)
  | Stmt of string (*statement that return*)
  | Proc of string
(*statement that does not return*) [@@deriving show]

let unexpr = function Expr s -> bracket s
let unstmt = function Stmt s -> s

module type SD = sig
  type _ sd

  val is_static : bool

  (*escape hatch*)
  val static : 'a -> 'a sd
  val unstatic : 'a sd -> 'a
  val tt : unit sd
  val make_ref : 'a sd -> 'a ref sd
  val read_ref : 'a ref sd -> 'a sd
  val write_ref : 'a ref sd -> 'a sd -> unit sd
  val int : int -> int sd
  val seq : unit sd -> (unit -> 'a sd) -> 'a sd
  val let_ : 'a sd -> ('a sd -> 'b sd) -> 'b sd
  val lam : ('a sd -> 'b sd) -> ('a -> 'b) sd
  val app : ('a -> 'b) sd -> 'a sd -> 'b sd
  val json_of_string : string sd -> Yojson.Basic.t sd
  val with_file : string -> (Stdio.In_channel.t sd -> 'a sd) -> 'a sd
  val input_line : Stdio.In_channel.t sd -> string sd
  val iter_lines : Stdio.In_channel.t sd -> (string sd -> unit sd) -> unit sd
  val print_endline : string -> unit sd
  val fresh_metric : unit -> metric sd
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

  val list_map : 'a list sd -> f:('a sd -> 'b sd) -> 'b list sd
end

module S : SD with type 'x sd = 'x = struct
  type 'x sd = 'x

  let is_static = true
  let static x = x
  let unstatic x = x
  let tt = ()

  let seq lhs rhs =
    lhs;
    rhs ()

  let json_of_string x = Yojson.Basic.from_string x
  let let_ x f = f x
  let lam f = f
  let app f x = f x
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
end

module D : SD with type 'x sd = 'x code = struct
  type 'x sd = 'x code

  let is_static = false
  let static x = panic "static"
  let unstatic x = panic "unstatic"
  let seq lhs rhs = Stmt (unstmt lhs ^ unstmt (rhs ()))

  let let_ (x : 'a code) (f : 'a code -> 'b code) : 'b code =
    let v = fresh () in
    seq (Stmt ("auto " ^ v ^ "= " ^ bracket (unexpr x) ^ ";")) (fun _ -> f (Expr v))

  let lam f =
    let v = fresh () in
    Expr ("[&](const auto &" ^ v ^ ") { " ^ unstmt (f (Expr v)) ^ " }")

  let tt = Expr "make_unit()"
  let app f x = Expr (unexpr f ^ bracket (unexpr x))
  let json_of_string x = Expr ("json_of_string" ^ bracket (unexpr x))
  let with_file name f = Expr (("with_file" ^ bracket name) ^ bracket (unexpr (lam f)))
  let input_line c = Expr ("input_line" ^ bracket (unexpr c))
  let iter_lines c f = todo "iter_lines"
  let print_endline str = Stmt ("std::cout << " ^ quoted str ^ " << std::endl;")
  let int x = Expr ("static_cast<int>" ^ bracket (string_of_int x))
  let make_ref x = Expr ("make_ref" ^ unexpr x)
  let read_ref x = Expr (unexpr x ^ ".read_ref()")
  let write_ref r x = Expr (unexpr r ^ ".write_ref" ^ bracket (unexpr x))
  let fresh_metric () = Expr "metric()"
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
  let list_map _ ~f = todo "map"
end

(*
let ite_ (i : bool code) (t : unit -> 'a code) (e : unit -> 'a code) : 'a code =
  Expr (unexpr i ^ "?" ^ unexpr (t ()) ^ ":" ^ unexpr (e ()))

let hashtbl_find_staged (h : ('a, 'b) Hashtbl.t code) (k : 'a code) (found : 'b code -> 'c code)
    (missing : unit -> 'c code) : 'c code =
  let if_expr = Expr (unexpr h ^ ".count(" ^ unexpr k ^ ") > 0") in
  let then_stmt _ = let_staged (Expr (unexpr h ^ square_bracket (unexpr k))) found in
  ite_ if_expr then_stmt missing

let ignore_ (x : 'a sd) : unit sd =
  match x with Static _ -> () |> static | Dyn x -> let_staged x (fun _ -> unit_staged) |> dyn

let list_iter_ (l : 'a list sd) ~(f : 'a sd -> unit sd) : unit sd =
  match l with Static l -> List.iter l ~f:(fun a -> static a |> f |> unstatic) |> static
*)

(*let read_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".read();")
  let read_ (m : metric sd) : unit sd = match m with Static m -> Static (read m) | Dyn m -> Dyn (read_staged m)
  let meta_read_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".meta_read();")
  let meta_read_ (m : metric sd) : unit sd =
    match m with Static m -> Static (meta_read m) | Dyn m -> Dyn (meta_read_staged m)
  let write_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".write();")
  let write_ (m : metric sd) : unit sd = match m with Static m -> Static (write m) | Dyn m -> Dyn (write_staged m)
  let meta_write_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".meta_write();")

  let meta_write_ (m : metric sd) : unit sd =
    match m with Static m -> Static (meta_write m) | Dyn m -> Dyn (meta_write_staged m)*)
