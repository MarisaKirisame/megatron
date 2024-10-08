open Ast
open Core
open Common

let new_tvar_or_get htbl name =
  match Hashtbl.find htbl name with
  | Some x -> x
  | None ->
      let x = new_tvar () in
      Hashtbl.add_exn htbl ~key:name ~data:x;
      x

let var_from_tyck_env env var = new_tvar_or_get env.var_type var
let prop_from_tyck_env env var = new_tvar_or_get env.prop_type var
let attr_from_tyck_env env var = new_tvar_or_get env.attr_type var

let unify (x : type_expr) (y : type_expr) : unit =
  match (resolve x, resolve y) with
  | TVar x_, TVar y_ ->
      if phys_equal x_ y_ then () else assert (Option.is_none !x_);
      x_ := Some y
  | TVar x_, y_ ->
      assert (Option.is_none !x_);
      x_ := Some y_
  | x_, TVar y_ ->
      assert (Option.is_none !y_);
      y_ := Some x_
  | TBool, TBool -> ()
  | TFloat, TFloat -> ()
  | TString, TString -> ()
  | TInt, TInt -> ()
  | _, _ -> panic ("unify: " ^ show_type_expr x ^ " " ^ show_type_expr y)

let tyck_func (f : func) (xs : type_expr list) : type_expr =
  match (f, List.map ~f:resolve xs) with
  | Plus, [ x; TFloat ] ->
      unify x TFloat;
      TFloat
  | Plus, [ TFloat; y ] ->
      unify TFloat y;
      TFloat
  | Minus, [ TFloat; y ] ->
      unify TFloat y;
      TFloat
  | Mult, [ x; TFloat ] ->
      unify x TFloat;
      TFloat
  | Mult, [ TFloat; y ] ->
      unify TFloat y;
      TFloat
  | Div, [ x; TFloat ] ->
      unify x TFloat;
      TFloat
  | Div, [ TFloat; y ] ->
      unify TFloat y;
      TFloat
  | Eq, [ x; y ] ->
      unify x y;
      TBool
  | Neq, [ x; y ] ->
      unify x y;
      TBool
  | Gt, [ TFloat; y ] ->
      unify TFloat y;
      TBool
  | Not, [ x ] ->
      unify x TBool;
      TBool
  | Max, [ x; TFloat ] ->
      unify x TFloat;
      TFloat
  | Max, [ TFloat; y ] ->
      unify TFloat y;
      TFloat
  | HasPrefix, [ x; y ] ->
      unify x TString;
      unify y TString;
      TBool
  | HasSuffix, [ x; y ] ->
      unify x TString;
      unify y TString;
      TBool
  | StripPrefix, [ x; y ] ->
      unify x TString;
      unify y TString;
      TString
  | StripSuffix, [ x; y ] ->
      unify x TString;
      unify y TString;
      TString
  | StringToFloat, [ x ] ->
      unify x TString;
      TFloat
  | StringToInt, [ x ] ->
      unify x TString;
      TInt
  | StringIsFloat, [ x ] ->
      unify x TString;
      TBool
  | IntToFloat, [ x ] ->
      unify x TInt;
      TFloat
  | NthBySep, [ str; sep; nth ] ->
      unify str TString;
      unify sep TString;
      unify nth TInt;
      TString
  | _ -> panic ("tyck_func: " ^ show_func f ^ List.to_string ~f:show_type_expr xs)

let rec tyck_expr (env : tyck_env) (x : expr) : type_expr =
  let recurse x = tyck_expr env x in
  match x with
  | IfExpr (i, t, e) ->
      unify (recurse i) TBool;
      let tt = recurse t in
      let te = recurse e in
      unify tt te;
      tt
  | Or (x, y) ->
      unify (recurse x) TBool;
      unify (recurse y) TBool;
      TBool
  | And (x, y) ->
      unify (recurse x) TBool;
      unify (recurse y) TBool;
      TBool
  | HasProperty _ | HasAttribute _ | HasPath _ -> TBool
  | GetProperty prop -> prop_from_tyck_env env prop
  | GetAttribute attr -> attr_from_tyck_env env attr
  | String _ -> TString
  | Float _ -> TFloat
  | Bool _ -> TBool
  | Int _ -> TInt
  | GetName -> TString
  | Panic (t, xs) ->
      ignore (List.map xs ~f:recurse);
      t
  | Read (_, var) -> var_from_tyck_env env var
  | Call (f, xs) ->
      (*print_endline (show_expr x);*)
      tyck_func f (List.map xs ~f:recurse)
(*| _ -> panic ("tyck_expr: " ^ show_expr x)*)

let tyck_stmt (env : tyck_env) (x : stmt) : unit =
  match x with
  | Write (var, expr) -> unify (var_from_tyck_env env var) (tyck_expr env expr)
  | _ -> panic ("tyck_stmt: " ^ show_stmt x)

let tyck (p : prog) : unit =
  List.iter p.vars ~f:(fun (VarDecl (name, type_expr)) -> unify (var_from_tyck_env p.tyck_env name) type_expr);
  Hashtbl.iter p.bbs ~f:(fun (BasicBlock (_, stmts)) -> List.iter ~f:(tyck_stmt p.tyck_env) stmts);
  Hashtbl.iteri p.tyck_env.var_type ~f:(fun ~key ~data ->
      match resolve data with TVar _ -> panic ("cannot deduct type for: " ^ key) | _ -> ())

let prog_of_prog_def (p : prog_def) : prog =
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
          | [ ChildrenCall n ] -> ChildrenCall n :: acc
          | _ ->
              let bb_name = "bb_" ^ string_of_int (Hashtbl.length bb) in
              Hashtbl.add_exn bb ~key:bb_name ~data:(BasicBlock (bb_name, stmts));
              BBCall bb_name :: acc)
    in
    (name, ProcessedProc (name, transformed_stmts))
  in
  let ret =
    {
      vars = p.var_decls;
      bbs = bb;
      procs = Hashtbl.of_alist_exn (module String) (List.map p.proc_defs ~f:transform);
      order = p.order_decls;
      tyck_env = new_tyck_env ();
    }
  in
  tyck ret;
  ret
