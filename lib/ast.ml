open Core
open EXN

(** The type of binary operators. *)
type bop = Plus | Minus | Mult | Div | Leq | Lt | Geq | Gt | Eq | Iff | Neq | Max [@@deriving show]

type path = Self | Parent | First | Next | Last | Prev [@@deriving show]

(** The type of the abstract syntax tree (AST). *)
type expr =
  | Var of string
  | Int of int
  | Bool of bool
  | String of string
  | Binop of expr * bop * expr
  | Let of string * expr * expr
  | HasPath of path
  | Children
  | Read of path * string
  | Index of expr * expr
  | IfExpr of expr * expr * expr
  | HasProperty of string
  | GetProperty of string
  | HasAttribute of string
  | GetAttribute of string
  | GetName
  | AsInt of expr
  | PxToInt of expr * expr
  | CalcIntrinsicSize of expr * expr
  | CalcSize of expr * expr
  | And of expr * expr
  | Or of expr * expr
  | Not of expr
  | Panic of expr list
  | HasPrefix of expr * expr
  | HasSuffix of expr * expr
  | StripPrefix of expr * expr
  | StripSuffix of expr * expr
  | StringToInt of expr
[@@deriving show]

type stmt = BBCall of string | ChildrenCall of string | Write of path * string * expr [@@deriving show]
type stmts = stmt list [@@deriving show]
type var_decl = VarDecl of string [@@deriving show]

let var_decl_name (VarDecl n) = n

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
[@@deriving show]

type 'rest prog = {
  vars : var_decl list;
  bbs : (string, basic_block) Hashtbl.t;
  procs : (string, processed_proc) Hashtbl.t;
  order : string list;
}

let show_prog (p : unit prog) : string =
  Hashtbl.fold p.procs ~init:"" ~f:(fun ~key ~data:(ProcessedProc (_, stmts)) acc ->
      acc ^ key ^ " -> " ^ show_stmts stmts ^ "\n")
  ^ Hashtbl.fold p.bbs ~init:"" ~f:(fun ~key ~data:(BasicBlock (_, stmts)) acc ->
        acc ^ key ^ " -> " ^ show_stmts stmts ^ "\n")

let stmts_of_processed_proc (p : _ prog) (s : string) : stmts =
  let (ProcessedProc (_, stmts)) = Hashtbl.find_exn p.procs s in
  stmts

let stmts_of_basic_block (p : _ prog) (s : string) : stmts =
  let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs s in
  stmts

let prog_of_prog_def (p : prog_def) : unit prog =
  let bb = Hashtbl.create (module String) in
  let rec split seen_children_call stmts acc =
    match stmts with
    | [] -> [ List.rev acc ]
    | ChildrenCall n :: rest ->
        assert (not seen_children_call);
        List.rev acc :: [ ChildrenCall n ] :: split true rest []
    | x :: rest -> split seen_children_call rest (x :: acc)
  in
  let transform (ProcDef (name, stmts)) =
    let transformed_stmts =
      List.fold_right (split false stmts []) ~init:[] ~f:(fun stmts acc ->
          match stmts with
          | [] -> acc
          | [ ChildrenCall n ] -> ChildrenCall n :: acc
          | _ ->
              let bb_name = "bb_" ^ string_of_int (Hashtbl.length bb) in
              Hashtbl.add_exn bb ~key:bb_name ~data:(BasicBlock (bb_name, stmts));
              BBCall bb_name :: acc)
    in
    (name, ProcessedProc (name, transformed_stmts))
  in
  {
    vars = p.var_decls;
    bbs = bb;
    procs = Hashtbl.of_alist_exn (module String) (List.map p.proc_defs ~f:transform);
    order = p.order_decls;
  }

type read = ReadVar of path * string | ReadHasPath of path | ReadAttr of string | ReadProp of string [@@deriving show]

let string_of_reads (reads : read list) : string = List.to_string reads ~f:show_read

let rec reads_of_expr (e : expr) : read list =
  let recurse e = reads_of_expr e in
  match e with
  | HasPath p -> [ ReadHasPath p ]
  | Int _ | String _ | GetName | Bool _ -> []
  | IfExpr (x, y, z) -> List.append (recurse x) (List.append (recurse y) (recurse z))
  | Binop (x, _, y)
  | PxToInt (x, y)
  | And (x, y)
  | Or (x, y)
  | HasPrefix (x, y)
  | HasSuffix (x, y)
  | StripPrefix (x, y)
  | StripSuffix (x, y) ->
      List.append (recurse x) (recurse y)
  | Read (p, n) -> [ ReadVar (p, n) ]
  | GetProperty x | HasProperty x -> [ ReadProp x ]
  | GetAttribute x | HasAttribute x -> [ ReadAttr x ]
  | Not x | StringToInt x -> recurse x
  | Panic _ ->
      []
      (*on zeroth glance it look like we should recurse into the children,
        but semantic of panic technically does not depend on the child - it is just bottom.*)
  | _ -> raise (EXN (show_expr e))

let exprs_of_stmt (s : stmt) : expr list =
  match s with ChildrenCall _ -> [] | Write (_, _, x) -> [ x ] | _ -> panic "todo"

let reads_of_stmt (s : stmt) : read list = List.( >>= ) (exprs_of_stmt s) (fun e -> reads_of_expr e)
let reads_of_stmts (s : stmts) : read list = List.( >>= ) s reads_of_stmt

let get_bb_from_proc (p : _ prog) (n : string) : string option * string option =
  match stmts_of_processed_proc p n with
  | [ BBCall x; ChildrenCall _; BBCall y ] -> (Some x, Some y)
  | [ BBCall x; ChildrenCall _ ] -> (Some x, None)
  | stmts -> panic (show_stmts stmts)
