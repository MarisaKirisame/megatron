open Ast
open Core
open Metric
open Common
open SD

exception ReRaise of string

let compile_type_expr ty =
  match resolve ty with
  | TInt -> "int"
  | TBool -> "bool"
  | TString -> "std::string"
  | TFloat -> "double"
  | _ -> panic (show_type_expr ty)

let rec recursive_print_id_up (n : _ node) : unit =
  print_endline (string_of_int n.id ^ List.to_string n.children ~f:(fun n -> string_of_int n.id));
  match n.parent with None -> () | Some p -> recursive_print_id_up p

module type EvalIn = sig
  include SD
  module SD : SD with type 'a sd = 'a sd

  val name : string

  type meta

  val meta_staged : string
  val fresh_meta : unit sd -> meta sd
  val remove_meta : meta sd -> unit sd
  val register_todo_proc : prog -> meta node sd -> string -> metric sd -> unit sd
  val bracket_call_bb : meta node sd -> string -> (unit -> unit sd) -> unit sd
  val bracket_call_proc : meta node sd -> string -> (unit -> unit sd) -> unit sd
  val bb_dirtied : meta node sd -> proc_name:string -> bb_name:string -> metric sd -> unit sd
  val recalculate_internal : prog -> meta node sd -> metric sd -> (meta node sd -> stmt list -> unit sd) -> unit sd
end

module type Eval = sig
  include EvalIn

  val make_node :
    name:string sd ->
    attr:(string, value) Hashtbl.t sd ->
    prop:(string, value) Hashtbl.t sd ->
    extern_id:int sd ->
    meta node list sd ->
    meta node sd

  val seqs : (unit -> unit sd) list -> unit sd
  val eval : prog -> meta node sd -> metric sd -> unit sd
  val add_children : prog -> meta node sd -> meta node sd -> int sd -> metric sd -> unit sd
  val remove_children : prog -> meta node sd -> int sd -> metric sd -> unit sd
  val add_prop : prog -> meta node sd -> string -> value sd -> metric sd -> unit sd
  val remove_prop : prog -> meta node sd -> string -> metric sd -> unit sd
  val add_attr : prog -> meta node sd -> string -> value sd -> metric sd -> unit sd
  val remove_attr : prog -> meta node sd -> string -> metric sd -> unit sd
  val recalculate : prog -> meta node sd -> metric sd -> unit sd
  val assert_node_value_equal : _ node sd -> _ node sd -> unit sd
end

module MakeEval (EI : EvalIn) : Eval with type 'a sd = 'a EI.sd = struct
  include EI

  let make_node ~(name : string sd) ~(attr : (string, value) Hashtbl.t sd) ~(prop : (string, value) Hashtbl.t sd)
      ~(extern_id : int sd) (children : EI.meta node list sd) : EI.meta node sd =
    if is_static then
      {
        id = count ();
        name = name |> unstatic;
        attr = attr |> unstatic;
        prop = prop |> unstatic;
        extern_id = extern_id |> unstatic;
        children = children |> unstatic;
        var = Hashtbl.create (module String);
        parent = None;
        next = None;
        prev = None;
        m = unstatic (EI.fresh_meta tt);
      }
      |> static
    else CApp (CPF "MakeNode", [ undyn name; undyn attr; undyn prop; undyn extern_id; undyn children ]) |> dyn

  let reversed_path (p : path) (n : 'a node sd) : 'a node list sd =
    match p with
    | Parent -> node_get_children n
    | Self -> list [ n ]
    | Prev -> node_get_next n |> option_to_list
    | Next -> node_get_prev n |> option_to_list
    | First -> ite (is_none (node_get_prev n)) (fun _ -> option_to_list (node_get_parent n)) (fun _ -> nil ())
    | Last -> ite (is_none (node_get_next n)) (fun _ -> option_to_list (node_get_parent n)) (fun _ -> nil ())

  let var_modified_hash : (string, (meta node -> unit) sd) Hashtbl.t = Hashtbl.create (module String)

  let var_modified_aux (p : prog) (var_name : string) m : (meta node -> unit) sd =
    lam (fun n ->
        seqs
          (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
               let down, up = get_bb_from_proc p proc_name in
               let work bb_name : unit sd =
                 let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                 let reads = reads_of_stmts stmts in
                 let dirty read =
                   match read with
                   | ReadVar (path, read_var_name) ->
                       if String.equal var_name read_var_name then
                         list_iter (reversed_path path n) (fun dirtied_node ->
                             bb_dirtied dirtied_node ~proc_name ~bb_name m)
                       else tt
                   | ReadHasPath _ -> tt (*property being changed cannot change haspath status*)
                   | ReadProp _ | ReadAttr _ -> tt
                 in
                 seqs (List.map reads ~f:(fun r () -> dirty r))
               in
               seqs (List.map (List.append (Option.to_list down) (Option.to_list up)) ~f:(fun n () -> work n)))))

  let var_modified (p : prog) (n : meta node sd) (var_name : string) (m : metric sd) : unit sd =
    if Option.is_none (Hashtbl.find var_modified_hash var_name) then
      Hashtbl.add_exn var_modified_hash ~key:var_name ~data:(lift "var_modified" (lazy (var_modified_aux p var_name m)));
    app (Hashtbl.find_exn var_modified_hash var_name) n

  let rec eval_expr_aux (n : 'meta node sd) (e : expr) (m : metric sd) : value sd =
    let recurse e = eval_expr_aux n e m in
    match e with
    | Panic (_, x) ->
        panic
          (string_append (string "External: ")
             (string_concat (string " ") (List.map x ~f:(fun x -> show_value (recurse x)) |> list)))
    | HasProperty p -> is_some (hashtbl_find (node_get_prop n) (string p)) |> vbool
    | GetProperty p ->
        seq (read_metric m) (fun _ ->
            option_match
              (hashtbl_find (node_get_prop n) (string p))
              (fun _ ->
                panic
                  (string_append (string "cannot find property ")
                     (string_append (string p) (string_append (string " in ") (string_of_int (node_get_extern_id n))))))
              (fun x -> x))
    | HasAttribute p -> vbool (is_some (hashtbl_find (node_get_attr n) (string p)))
    | GetAttribute p ->
        seq (read_metric m) (fun _ ->
            option_match
              (hashtbl_find (node_get_attr n) (string p))
              (fun _ ->
                panic
                  (string_append (string "cannot find property ")
                     (string_append (string p) (string_append (string " in ") (string_of_int (node_get_extern_id n))))))
              (fun x -> x))
    | String s -> vstring (string s)
    | Int i -> vint (int i)
    | Float f -> vfloat (float f)
    | IfExpr (c, t, e) -> ite (bool_of_value (recurse c)) (fun _ -> recurse t) (fun _ -> recurse e)
    | HasPath p -> vbool (is_some (eval_path_opt n p))
    | Read (p, var_name) ->
        seq (read_metric m) (fun _ -> hashtbl_find (eval_path n p |> node_get_var) (string var_name) |> unsome)
    | And (x, y) -> vbool (and_ (bool_of_value (recurse x)) (fun _ -> bool_of_value (recurse y)))
    | Or (x, y) -> vbool (or_ (bool_of_value (recurse x)) (fun _ -> bool_of_value (recurse y)))
    | GetName -> vstring (node_get_name n)
    | Bool x -> vbool (bool x)
    | Call (f, xs) -> eval_func f (List.map ~f:(fun v -> recurse v) xs)
  (*| _ -> panic ("unhandled case in eval_expr:" ^ show_expr e)*)

  module EXPR = struct
    type t = expr [@@deriving hash, compare, sexp_of]
  end

  let eval_expr_hash : (expr, (meta node -> value) sd) Hashtbl.t = Hashtbl.create (module EXPR)

  let eval_expr (n : meta node sd) (e : expr) (m : metric sd) : value sd =
    if Option.is_none (Hashtbl.find eval_expr_hash e) then
      Hashtbl.add_exn eval_expr_hash ~key:e ~data:(lift "eval_expr" (lazy (lam (fun n -> eval_expr_aux n e m))));
    app (Hashtbl.find_exn eval_expr_hash e) n

  module STMTS = struct
    type t = stmts [@@deriving hash, compare, sexp_of]
  end

  let rec eval_stmt_aux (p : prog) (n : meta node sd) (s : stmt) (m : metric sd) : unit sd =
    match s with
    | Write (var_name, expr) ->
        seq (write_metric m) (fun _ ->
            let_ (eval_expr n expr m) (fun new_value ->
                seq
                  (option_match
                     (hashtbl_find (node_get_var n) (string var_name))
                     (fun () -> tt)
                     (fun value ->
                       ite (equal_value value new_value) (fun _ -> tt) (fun _ -> var_modified p n var_name m)))
                  (fun _ -> hashtbl_set (node_get_var n) (string var_name) new_value)))
    | BBCall bb_name -> bracket_call_bb n bb_name (fun _ -> eval_stmts p n (stmts_of_basic_block p bb_name) m)
    | ChildrenCall proc_name ->
        list_iter (node_get_children n) (fun new_node ->
            bracket_call_proc new_node proc_name (fun _ ->
                eval_stmts p new_node (stmts_of_processed_proc p proc_name) m))

  and eval_stmts_aux (p : prog) (n : meta node sd) (s : stmts) (m : metric sd) : unit sd =
    seqs (List.map s ~f:(fun stmt _ -> eval_stmt_aux p n stmt m))

  and eval_stmts_hash : (stmts, (meta node -> metric -> unit) sd) Hashtbl.t = Hashtbl.create (module STMTS)

  and eval_stmts (p : prog) (n : meta node sd) (s : stmts) (m : metric sd) : unit sd =
    if Option.is_none (Hashtbl.find eval_stmts_hash s) then
      Hashtbl.add_exn eval_stmts_hash ~key:s
        ~data:(lift "eval_stmts" (lazy (lam (fun n -> lam (fun m -> eval_stmts_aux p n s m)))));
    app (app (Hashtbl.find_exn eval_stmts_hash s) n) m

  let eval (p : prog) (n : meta node sd) (m : metric sd) : unit sd =
    seqs
      (List.map p.order (fun proc_name _ ->
           bracket_call_proc n proc_name (fun _ -> eval_stmts p n (stmts_of_processed_proc p proc_name) m)))

  let remove_children (p : prog) (x : meta node sd) (n : int sd) (m : metric sd) : unit sd =
    let_
      (list_split_n (node_get_children x) n)
      (fun v ->
        let_ (zro v) (fun lhs ->
            let_ (fst v) (fun rhs_ ->
                list_match rhs_
                  (fun _ -> panic (string "bad argument"))
                  (fun removed rhs ->
                    seqs
                      [
                        (fun _ ->
                          option_match (node_get_prev removed)
                            (fun _ -> tt)
                            (fun prev -> node_set_next prev (node_get_next removed)));
                        (fun _ ->
                          option_match (node_get_next removed)
                            (fun _ -> tt)
                            (fun next -> node_set_prev next (node_get_prev removed)));
                        (fun _ -> remove_meta (node_get_meta removed));
                        (fun _ -> node_set_children x (list_append lhs rhs));
                        (fun _ ->
                          seqs
                            (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
                                 let work bb_name =
                                   let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                                   let reads = reads_of_stmts stmts in
                                   let dirty read : unit sd =
                                     match read with
                                     | ReadVar (Self, _) | ReadHasPath Parent | ReadVar (Parent, _) -> tt
                                     | ReadHasPath First | ReadHasPath Last ->
                                         ite
                                           (list_is_empty (node_get_children x))
                                           (fun _ -> bb_dirtied x ~proc_name ~bb_name m)
                                           (fun _ -> tt)
                                     | ReadVar (First, _) ->
                                         ite (list_is_empty lhs)
                                           (fun _ -> bb_dirtied x ~proc_name ~bb_name m)
                                           (fun _ -> tt)
                                     | ReadVar (Last, _) ->
                                         ite (list_is_empty rhs)
                                           (fun _ -> bb_dirtied x ~proc_name ~bb_name m)
                                           (fun _ -> tt)
                                     | ReadHasPath Prev | ReadVar (Prev, _) ->
                                         option_match (node_get_next removed)
                                           (fun _ -> tt)
                                           (fun x -> bb_dirtied x ~proc_name ~bb_name m)
                                     | ReadHasPath Next | ReadVar (Next, _) ->
                                         option_match (node_get_prev removed)
                                           (fun _ -> tt)
                                           (fun x -> bb_dirtied x ~proc_name ~bb_name m)
                                     | ReadProp _ | ReadAttr _ -> tt
                                     | _ -> Common.panic (show_read read)
                                   in
                                   seqs (List.map reads ~f:(fun r () -> dirty r))
                                 in
                                 let down, up = get_bb_from_proc p proc_name in
                                 seqs
                                   [
                                     (fun _ -> match down with Some down -> work down | None -> tt);
                                     (fun _ -> match up with Some up -> work up | None -> tt);
                                   ])));
                      ]))))

  let add_children (p : prog) (x : meta node sd) (y : meta node sd) (n : int sd) (m : metric sd) : unit sd =
    let_
      (list_split_n (node_get_children x) n)
      (fun v ->
        let_ (zro v) (fun lhs ->
            let_ (fst v) (fun rhs ->
                seqs
                  [
                    (fun _ -> node_set_children x (list_append lhs (cons y rhs)));
                    (fun _ ->
                      option_match (list_last lhs)
                        (fun _ -> node_set_prev y (none ()))
                        (fun tl -> seq (node_set_prev y (some tl)) (fun _ -> node_set_next tl (some y))));
                    (fun _ ->
                      option_match (list_hd rhs)
                        (fun _ -> node_set_next y (none ()))
                        (fun hd -> seq (node_set_next y (some hd)) (fun _ -> node_set_prev hd (some y))));
                    (fun _ -> node_set_parent y (some x));
                    (fun _ ->
                      seqs
                        (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
                             let work bb_name =
                               let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                               let reads = reads_of_stmts stmts in
                               let dirty read : unit sd =
                                 match read with
                                 | ReadHasPath Parent | ReadVar (Parent, _) -> tt
                                 | ReadHasPath First | ReadHasPath Last ->
                                     ite
                                       (int_equal (list_length (node_get_children x)) (int 1))
                                       (fun _ -> bb_dirtied x ~proc_name ~bb_name m)
                                       (fun _ -> tt)
                                 | ReadVar (First, _) ->
                                     ite (list_is_empty lhs) (fun _ -> bb_dirtied x ~proc_name ~bb_name m) (fun _ -> tt)
                                 | ReadVar (Last, _) ->
                                     ite (list_is_empty rhs) (fun _ -> bb_dirtied x ~proc_name ~bb_name m) (fun _ -> tt)
                                 | ReadHasPath Prev | ReadVar (Prev, _) ->
                                     option_match (node_get_next y)
                                       (fun _ -> tt)
                                       (fun x -> bb_dirtied x ~proc_name ~bb_name m)
                                 | ReadHasPath Next | ReadVar (Next, _) -> (
                                     match (y |> unstatic).prev with
                                     | Some x -> bb_dirtied (x |> static) ~proc_name ~bb_name m
                                     | None -> tt)
                                 | ReadVar (Self, _) | ReadProp _ | ReadAttr _ -> tt
                                 | _ -> Common.panic (show_read read)
                               in
                               seqs (List.map reads ~f:(fun r _ -> dirty r))
                             in
                             let down, up = get_bb_from_proc p proc_name in
                             seqs
                               [
                                 (fun _ -> register_todo_proc p y proc_name m);
                                 (fun _ -> match down with Some down -> work down | None -> tt);
                                 (fun _ -> match up with Some up -> work up | None -> tt);
                               ])));
                  ])))

  let add_prop (p : prog) (n : meta node sd) (name : string) (v : value sd) (m : metric sd) : unit sd =
    seqs
      [
        (fun _ -> write_metric m);
        (fun _ -> hashtbl_add_exn (node_get_prop n) (string name) v);
        (fun _ ->
          seqs
            (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
                 let work bb_name : unit sd =
                   let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                   let reads = reads_of_stmts stmts in
                   let dirty read : unit sd =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadAttr _ -> tt
                     | ReadProp read_name ->
                         if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else tt
                     (*| _ -> panic (show_read read)*)
                   in
                   seqs (List.map reads ~f:(fun r _ -> dirty r))
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs
                   [
                     (fun _ -> match down with Some down -> work down | None -> tt);
                     (fun _ -> match up with Some up -> work up | None -> tt);
                   ])));
      ]

  let remove_prop (p : prog) (n : meta node sd) (name : string) (m : metric sd) : unit sd =
    seqs
      [
        (fun _ -> write_metric m);
        (fun _ -> hashtbl_force_remove (node_get_prop n) (string name));
        (fun _ ->
          seqs
            (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
                 let work bb_name : unit sd =
                   let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                   let reads = reads_of_stmts stmts in
                   let dirty read : unit sd =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadAttr _ -> tt
                     | ReadProp read_name ->
                         if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else tt
                     (*| _ -> panic (show_read read)*)
                   in
                   seqs (List.map reads ~f:(fun r _ -> dirty r))
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs
                   [
                     (fun _ -> match down with Some down -> work down | None -> tt);
                     (fun _ -> match up with Some up -> work up | None -> tt);
                   ])));
      ]

  let add_attr (p : prog) (n : meta node sd) (name : string) (v : value sd) (m : metric sd) : unit sd =
    seqs
      [
        (fun _ -> write_metric m);
        (fun _ -> hashtbl_add_exn (node_get_attr n) (string name) v);
        (fun _ ->
          seqs
            (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
                 let work bb_name : unit sd =
                   let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                   let reads = reads_of_stmts stmts in
                   let dirty read : unit sd =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadProp _ -> tt
                     | ReadAttr read_name ->
                         if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else tt
                     (*| _ -> panic (show_read read)*)
                   in
                   seqs (List.map reads ~f:(fun r _ -> dirty r))
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs
                   [
                     (fun _ -> match down with Some down -> work down | None -> tt);
                     (fun _ -> match up with Some up -> work up | None -> tt);
                   ])));
      ]

  let remove_attr (p : prog) (n : meta node sd) (name : string) (m : metric sd) : unit sd =
    seqs
      [
        (fun _ -> write_metric m);
        (fun _ -> hashtbl_force_remove (node_get_attr n) (string name));
        (fun _ ->
          seqs
            (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
                 let work bb_name : unit sd =
                   let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                   let reads = reads_of_stmts stmts in
                   let dirty read : unit sd =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadProp _ -> tt
                     | ReadAttr read_name ->
                         if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else tt
                     (*| _ -> panic (show_read read)*)
                   in
                   seqs (List.map reads ~f:(fun r _ -> dirty r))
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs
                   [
                     (fun _ -> match down with Some down -> work down | None -> tt);
                     (fun _ -> match up with Some up -> work up | None -> tt);
                   ])));
      ]

  let recalculate (p : prog) (n : meta node sd) (m : metric sd) : unit sd =
    recalculate_internal p n m (fun n stmts -> eval_stmts p n stmts m)

  let rec assert_node_value_equal (l : _ node sd) (r : _ node sd) : unit sd =
    if is_static then (
      assert (Int.equal (Hashtbl.length (node_get_var l |> unstatic)) (Hashtbl.length (node_get_var r |> unstatic)));
      assert (Int.equal (List.length (node_get_children l |> unstatic)) (List.length (node_get_children l |> unstatic)));
      List.iter2_exn
        (node_get_children l |> unstatic)
        (node_get_children r |> unstatic)
        ~f:(fun l r -> assert_node_value_equal (l |> static) (r |> static) |> unstatic);
      if
        Hashtbl.equal
          (fun x y -> equal_value (x |> static) (y |> static) |> unstatic)
          (node_get_var l |> unstatic)
          (node_get_var r |> unstatic)
      then ()
      else (
        Hashtbl.iter_keys
          (node_get_var l |> unstatic)
          ~f:(fun name ->
            let lv = Hashtbl.find_exn (node_get_var l |> unstatic) name |> static in
            let rv = Hashtbl.find_exn (node_get_var r |> unstatic) name |> static in
            ite (bool false (*equal_value lv rv*))
              (fun _ -> tt)
              (fun _ ->
                print_endline
                  (string_append
                     (string (name ^ " "))
                     (string_append (show_value lv) (string_append (string " ") (show_value rv)))))
            |> unstatic);
        print_endline (string_append (string_of_int (node_get_extern_id l)) (string " bad!")) |> unstatic;
        recursive_print_id_up (l |> unstatic));
      assert (
        Hashtbl.equal
          (fun x y -> equal_value (x |> static) (y |> static) |> unstatic)
          (node_get_var l |> unstatic)
          (node_get_var r |> unstatic))
      |> static)
    else dyn (CApp (CPF "AssertNodeValueEqual", [ undyn l; undyn r ]))
end
