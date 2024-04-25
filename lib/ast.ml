open Core
(** The type of binary operators. *)
type bop = 
  | Add
  | Mult
  | Leq
  | Lt
  | Geq
  | Gt
  | IEq
  | Iff
[@@deriving show]

(** The type of the abstract syntax tree (AST). *)
type expr =
  | Var of string
  | Int of int
  | Bool of bool  
  | Binop of expr * bop * expr
  | Let of string * expr * expr
  | HasParent
  | Parent
  | Children
  | Len
  | Map
  | Sum
  | Self
  | SelfPos
  | ReadRef of expr
  | Access of expr * string
  | Call of expr * (expr list)
  | Index of expr * expr
  | Func of string * expr
[@@deriving show]

type stmt = 
  | WriteRef of expr * expr
  | If of expr * stmt * stmt
  | Seq of stmt * stmt
  | Skip
  | TailCallProc of expr * string * (expr list)
[@@deriving show]

type prop_decl = PropDecl of string
[@@deriving show]
let prop_decl_name (PropDecl(n)) = n
type proc_decl = ProcDecl of string * (string list) * stmt
[@@deriving show]

type prog_decl = { prop_decls: prop_decl list; proc_decls: proc_decl list }
[@@deriving show]

type prog = { props: prop_decl list; procs: (string, proc_decl) Hashtbl.t }

let prog_of_prog_decl (p: prog_decl): prog = { 
  props = p.prop_decls;
  procs = Hashtbl.of_alist_exn (module String) (List.map p.proc_decls ~f:(fun (ProcDecl(name, args, stmt)as p) -> (name, p)))
}