open Core
open EXN

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

type path =
  | Self
  | Parent
  | First
  | Next
  | Last
  | Prev
[@@deriving show]

(** The type of the abstract syntax tree (AST). *)
type expr =
  | Var of string
  | Int of int
  | Bool of bool  
  | Binop of expr * bop * expr
  | Let of string * expr * expr
  | HasPath of path
  | Children
  | Len
  | Map
  | Sum
  | Read of path * string
  | Index of expr * expr
  | IfExpr of expr * expr * expr
[@@deriving show]

type stmt = 
  | LocalDef of string * expr
  | Seq of stmt * stmt
  | Skip
  | ChildrenCall of string
  | TailCall of path * string
  | IfStmt of expr * stmt * stmt
  | Write of path * string * expr
[@@deriving show]

type prop_decl = PropDecl of string
[@@deriving show]
let prop_decl_name (PropDecl(n)) = n
type proc_decl = ProcDecl of string * stmt
[@@deriving show]

let stmt_of_proc_decl (ProcDecl(_, x)) = x

type prog_decl = { prop_decls: prop_decl list; proc_decls: proc_decl list }
[@@deriving show]

type 'rest prog = {
  props: prop_decl list; 
  procs: (string, proc_decl) Hashtbl.t
}

let prog_of_prog_decl (p: prog_decl): unit prog = { 
  props = p.prop_decls;
  procs = Hashtbl.of_alist_exn (module String) (List.map p.proc_decls ~f:(fun (ProcDecl(name, stmt)as p) -> (name, p)))
}

let simplify_expr (e: expr) = e

let rec simplify_stmt (s: stmt) = 
  match s with
  | Seq(x, y) ->
    (match (simplify_stmt x, simplify_stmt y) with
    | (Skip, y') -> y'
    | (x', Skip) -> x'
    | (x', y') -> Seq(x', y'))
  | Skip | ChildrenCall(_) | TailCall(_, _) | Write(_) | LocalDef(_, _) -> s
  | IfStmt(x, y, z) -> 
    (match (simplify_stmt y, simplify_stmt z) with
    | (Skip, Skip) -> Skip
    | (y', z') -> IfStmt(x, y', z'))
  | _ -> raise (EXN (show_stmt s))

let simplify_proc_decl (p: proc_decl): proc_decl = 
  let ProcDecl(name, stmt) = p in ProcDecl(name, simplify_stmt stmt)

type read = ReadProp of path * string | ReadHasPath of path
[@@deriving show]

let string_of_reads (reads: read list): string = List.to_string reads ~f:show_read

let rec reads_of_expr (e: expr): read list = 
  let recurse e = reads_of_expr e in
  match e with
  | HasPath(p) -> [ReadHasPath(p)]
  | Int(_) -> []
  | IfExpr(x, y, z) -> List.append (recurse x) (List.append (recurse y) (recurse z))
  | Read(p, n) -> [ReadProp(p, n)]
  | Binop(x, op, y) -> List.append (recurse x) (recurse y)
  | _ -> raise (EXN (show_expr e))
      
let rec exprs_of_stmt (s: stmt): expr list = 
  match s with
  | IfStmt(x, y, z) -> x :: (List.append (exprs_of_stmt y) (exprs_of_stmt z))
  | Seq(x, y) -> List.append (exprs_of_stmt x) (exprs_of_stmt y)
  | Skip | TailCall(_) -> []
  | Write(_, _, x) -> [x]
  | _ -> raise (EXN (show_stmt s))

let reads_of_stmt (s: stmt): read list = 
  List.(>>=) (exprs_of_stmt s) (fun e -> reads_of_expr e)

let rec strip_tailcall s = 
  match s with
  | Seq(x, y) -> Seq(strip_tailcall x, strip_tailcall y)
  | IfStmt(i, t, e) -> IfStmt(i, strip_tailcall t, strip_tailcall e)
  | Skip | Write(_) -> s
  | TailCall(_) -> Skip
  | _ -> raise (EXN (show_stmt s))

let rec get_tailcall (s: stmt): (path * string) list = 
  match s with
  | IfStmt(_, x, y) | Seq(x, y) -> List.append (get_tailcall x) (get_tailcall y)
  | TailCall(p, name) -> [(p, name)]
  | Write(_) | Skip -> []
  | _ -> raise (EXN (show_stmt s))

let simplify (p: prog_decl): prog_decl = { prop_decls = p.prop_decls; proc_decls = List.map p.proc_decls ~f:simplify_proc_decl }
