open Core

type _ code =
  | Expr of string (*anything passed around must be atomic; return of a function, however, can be non-atomic*)
  | Stmt of string (*statement that return*)
  | Proc of string
(*statement that does not return*) [@@deriving show]

type 'x sd = Static of 'x | Dyn of 'x code

let static x = Static x
let dyn x = Dyn x
let unstatic = function Static x -> x
let undyn = function Dyn x -> x
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
let seq_staged (lhs : unit code) (rhs : 'a code) : 'a code = Stmt (unstmt lhs ^ unstmt rhs)

let seq_ (lhs : unit sd) (rhs : 'a sd) : 'a sd =
  match (lhs, rhs) with Static lhs, Static rhs -> Static rhs | Dyn lhs, Dyn rhs -> Dyn (seq_staged lhs rhs)

let member_staged record field : _ code = Expr (unexpr record ^ "." ^ field)

let let_staged (x : 'a code) (f : 'a code -> 'b code) : 'b code =
  let v = fresh () in
  seq_staged (Stmt ("auto " ^ v ^ "= " ^ bracket (unexpr x) ^ ";")) (f (Expr v))

let let_ (x : 'a sd) (f : 'a sd -> 'b sd) : 'b sd =
  match x with Static x -> f (Static x) | Dyn x -> Dyn (let_staged x (fun x -> x |> dyn |> f |> undyn))

let ite_ (i : bool code) (t : unit -> 'a code) (e : unit -> 'a code) : 'a code =
  Expr (unexpr i ^ "?" ^ unexpr (t ()) ^ ":" ^ unexpr (e ()))

let hashtbl_find_staged (h : ('a, 'b) Hashtbl.t code) (k : 'a code) (found : 'b code -> 'c code)
    (missing : unit -> 'c code) : 'c code =
  let if_expr = Expr (unexpr h ^ ".count(" ^ unexpr k ^ ") > 0") in
  let then_stmt _ = let_staged (Expr (unexpr h ^ square_bracket (unexpr k))) found in
  ite_ if_expr then_stmt missing

let null_proc = Proc ""
