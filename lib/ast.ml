open Core
open Common

type func =
  | HasPrefix
  | HasSuffix
  | StripPrefix
  | StripSuffix
  | StringToInt
  | StringToFloat
  | StringIsInt
  | StringIsFloat
  | IntToFloat
  | NthBySep
  | Not
  | Plus
  | Minus
  | Mult
  | Div
  | Leq
  | Lt
  | Geq
  | Gt
  | Eq
  | Iff
  | Neq
  | Max
[@@deriving show, hash, compare, sexp]

let func_name_compiled f =
  match f with
  | StringToFloat -> "string_to_float"
  | Plus -> "plus"
  | Eq -> "eq"
  | HasSuffix -> "has_suffix"
  | StripSuffix -> "strip_suffix"
  | StringIsFloat -> "string_is_float"
  | Not -> "not"
  | Neq -> "neq"
  | HasPrefix -> "has_prefix"
  | IntToFloat -> "int_to_float"
  | Div -> "divide"
  | Mult -> "mult"
  | NthBySep -> "nth_by_sep"
  | Max -> "max"
  | Minus -> "minus"
  | Gt -> "gt"
  | _ -> panic (show_func f)

type path = Self | Parent | First | Next | Last | Prev [@@deriving show, hash, compare, sexp]
type type_expr = TInt | TString | TFloat | TBool | TVar of type_expr option ref [@@deriving show]

(** The type of the abstract syntax tree (AST). *)
type expr =
  | Int of int
  | Float of float
  | Bool of bool
  | String of string
  | HasPath of path
  | Read of path * string
  | IfExpr of expr * expr * expr
  | HasProperty of string
  | GetProperty of string
  | HasAttribute of string
  | GetAttribute of string
  | GetName
  | And of expr * expr
  | Or of expr * expr
  | Panic of (type_expr[@hash.ignore] [@compare.ignore] [@sexp.opaque]) * expr list
  | Call of func * expr list
[@@deriving show, hash, compare, sexp_of]

let new_tvar () = TVar (ref None)

type stmt = BBCall of string | ChildrenCall of string | Write of string * expr
[@@deriving show, hash, compare, sexp_of]

type stmts = stmt list [@@deriving show, hash, compare, sexp_of]

let rec resolve (x : type_expr) : type_expr =
  match x with
  | TVar x_ -> (
      match !x_ with
      | None -> x
      | Some x__ ->
          let ret = resolve x__ in
          x_ := Some ret;
          ret)
  | _ -> x

let show_type_expr x : string =
  match resolve x with TInt -> "Int" | TBool -> "Bool" | TFloat -> "Float" | TString -> "String" | TVar _ -> "Var"

type var_decl = VarDecl of string * type_expr

let var_decl_name (VarDecl (n, _)) = n

type proc_def = ProcDef of string * stmts [@@deriving show]

(*procedure that does not call other procedure*)
type basic_block = BasicBlock of string * stmts

(*all proc should only call bb or more procs.*)
type processed_proc = ProcessedProc of string * stmts

let stmts_of_proc_def (ProcDef (_, x)) = x

type prog_def = {
  var_decls : var_decl list;
  proc_defs : proc_def list;
  order_decls : string list; (*the order to execute the procs*)
}

type tyck_env = {
  var_type : (string, type_expr) Hashtbl.t;
  attr_type : (string, type_expr) Hashtbl.t;
  prop_type : (string, type_expr) Hashtbl.t;
}

type prog = {
  vars : var_decl list;
  bbs : (string, basic_block) Hashtbl.t;
  procs : (string, processed_proc) Hashtbl.t;
  order : string list;
  tyck_env : tyck_env;
}

let show_prog (p : prog) : string =
  Hashtbl.fold p.procs ~init:"" ~f:(fun ~key ~data:(ProcessedProc (_, stmts)) acc ->
      acc ^ key ^ " -> " ^ show_stmts stmts ^ "\n")
  ^ Hashtbl.fold p.bbs ~init:"" ~f:(fun ~key ~data:(BasicBlock (_, stmts)) acc ->
        acc ^ key ^ " -> " ^ show_stmts stmts ^ "\n")

let stmts_of_processed_proc (p : prog) (s : string) : stmts =
  let (ProcessedProc (_, stmts)) = Hashtbl.find_exn p.procs s in
  stmts

let stmts_of_basic_block (p : prog) (s : string) : stmts =
  let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs s in
  stmts

let new_tyck_env () =
  {
    var_type = Hashtbl.create (module String);
    attr_type = Hashtbl.create (module String);
    prop_type = Hashtbl.create (module String);
  }

type read = ReadVar of path * string | ReadHasPath of path | ReadAttr of string | ReadProp of string [@@deriving show]

let string_of_reads (reads : read list) : string = List.to_string reads ~f:show_read

let rec reads_of_expr (e : expr) : read list =
  let recurse e = reads_of_expr e in
  match e with
  | HasPath p -> [ ReadHasPath p ]
  | Int _ | String _ | GetName | Bool _ | Float _ -> []
  | IfExpr (x, y, z) -> List.append (recurse x) (List.append (recurse y) (recurse z))
  | And (x, y) | Or (x, y) -> List.append (recurse x) (recurse y)
  | Read (p, n) -> [ ReadVar (p, n) ]
  | GetProperty x | HasProperty x -> [ ReadProp x ]
  | GetAttribute x | HasAttribute x -> [ ReadAttr x ]
  | Call (_, xs) -> List.concat (List.map ~f:recurse xs)
  | Panic _ -> []
(*on zeroth glance it look like we should recurse into the children,
  but semantic of panic technically does not depend on the child - it is just bottom.*)
(*| _ -> raise (EXN (show_expr e))*)

let exprs_of_stmt (s : stmt) : expr list =
  match s with ChildrenCall _ -> [] | Write (_, x) -> [ x ] | _ -> panic "todo"

let reads_of_stmt (s : stmt) : read list = List.( >>= ) (exprs_of_stmt s) (fun e -> reads_of_expr e)
let reads_of_stmts (s : stmts) : read list = List.( >>= ) s reads_of_stmt

let get_bb_from_proc (p : prog) (n : string) : string option * string option =
  match stmts_of_processed_proc p n with
  | [ BBCall x; ChildrenCall _; BBCall y ] -> (Some x, Some y)
  | [ BBCall x; ChildrenCall _ ] -> (Some x, None)
  | stmts -> panic (show_stmts stmts)
