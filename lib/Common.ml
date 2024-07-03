open Core

(*anything passed around must be atomic; return of a function, however, can be non-atomic*)
type _ code = Expr of string | Stmt of string [@@deriving show]

let bracket str = "(" ^ str ^ ")"
let curly_bracket str = "{" ^ str ^ "}"
let square_bracket str = "[" ^ str ^ "]"
let quoted str = "\"" ^ String.escaped str ^ "\""
let unexpr = function Expr s -> bracket s
let unstmt = function Stmt s -> s

let make_counter () : unit -> int =
  let counter : int ref = ref 0 in
  fun _ ->
    let ret = !counter in
    counter := !counter + 1;
    ret

let count = make_counter ()

let fresh =
  let c = make_counter () in
  fun _ -> "x_" ^ string_of_int (c ())

exception EXN of string

let panic msg = raise (EXN msg)
let seq_staged (lhs : 'a code) (rhs : 'b code) : 'b code = panic "todo"
let member_staged record field : _ code = Expr (unexpr record ^ "." ^ field)

let let_ (x : 'a code) (f : 'a code -> 'b code) =
  let v = fresh () in
  seq_staged (Stmt ("auto " ^ v ^ "= " ^ bracket (unexpr x) ^ ";")) (f (Expr v))

let ite_ (i : bool code) (t : unit -> 'a code) (e : unit -> 'a code) : 'a code =
  Expr (unexpr i ^ "?" ^ unexpr (t ()) ^ ":" ^ unexpr (e ()))

let hashtbl_find_staged (h : ('a, 'b) Hashtbl.t code) (k : 'a code) (found : 'b code -> 'c code)
    (missing : unit -> 'c code) : 'c code =
  let if_expr = Expr (unexpr h ^ ".count(" ^ unexpr k ^ ") > 0") in
  let then_stmt _ = let_ (Expr (unexpr h ^ square_bracket (unexpr k))) found in
  ite_ if_expr then_stmt missing

let call_ (f : _ code) (xs : _ code list) : _ code = Expr (unexpr f ^ String.concat (List.map xs ~f:unexpr))
let null_stmt_ = Stmt ""
