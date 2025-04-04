open Ast
open Core
open Metric
open Common
open SD

exception ReRaise of string

let compile_type_expr ty =
  match resolve ty with
  | TInt -> "int64_t"
  | TBool -> "bool"
  | TString -> "DEString"
  | TFloat -> "double"
  | _ -> panic (show_type_expr ty)

let rec recursive_print_id_up (n : _ node) : unit =
  print_endline (string_of_int n.id ^ List.to_string n.children ~f:(fun n -> string_of_int n.id));
  match n.parent with None -> () | Some p -> recursive_print_id_up p

module type EvalIn = sig
  include SD
  module SD : SD with type 'a sd = 'a sd

  val name : string

  type meta (*extra information at each node*)

  val meta_defs : prog -> string
  val fresh_meta : unit sd -> meta sd
  val remove_meta : meta sd -> unit sd
  val register_todo_proc : prog -> meta node sd -> string -> metric sd -> unit sd
  val bracket_call_bb : meta node sd -> string -> (unit -> unit sd) -> metric sd -> unit sd
  val bracket_call_proc : meta node sd -> string -> (unit -> unit sd) -> metric sd -> unit sd
  val bb_dirtied_internal : prog -> meta node sd -> proc_name:string -> bb_name:string -> metric sd -> unit sd
  val bb_dirtied_external : prog -> meta node sd -> proc_name:string -> bb_name:string -> metric sd -> unit sd
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
        first = None;
        last = None;
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
    let f n (proc_name, _) _ =
      let down, up = get_bb_from_proc p proc_name in
      let work bb_name : unit sd =
        let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
        let reads = reads_of_stmts stmts in
        let dirty read : path Option.t =
          match read with
          | ReadVar (path, read_var_name) -> if String.equal var_name read_var_name then Some path else None
          | ReadHasPath _ -> None (*property being changed cannot change haspath status*)
          | ReadProp _ | ReadAttr _ -> None
        in
        seqs
          (List.map
             (List.dedup_and_sort (List.filter_map reads ~f:dirty) ~compare:compare_path)
             ~f:(fun path _ ->
               list_iter (reversed_path path n) (fun dirtied_node ->
                   bb_dirtied_internal p dirtied_node ~proc_name ~bb_name m)))
      in

      seqs (List.map [ down; up ] ~f:(fun n () -> work n))
    in
    lam (fun n ->
        seqs
          [
            (fun _ -> start_record_overhead m);
            (fun _ -> seqs (List.map (Hashtbl.to_alist p.procs) ~f:(f n)));
            (fun _ -> stop_record_overhead m);
          ])

  let var_modified (p : prog) (var_name : string) (n : meta node sd) (m : metric sd) : unit sd =
    if Option.is_none (Hashtbl.find var_modified_hash var_name) then
      Hashtbl.add_exn var_modified_hash ~key:var_name
        ~data:(lift "Unit" "var_modified" (lazy (var_modified_aux p var_name m)));
    app (Hashtbl.find_exn var_modified_hash var_name) n

  let truncate s = if String.length s >= 100 then String.sub s 0 100 else s

  let rec eval_expr_aux (n : 'meta node sd) (e : expr) (m : metric sd) : value sd =
    let recurse e = eval_expr_aux n e m in
    match e with
    | Panic (_, x) ->
        panic
          (string_append (string "External: ")
             (string_concat (string " ") (List.map x ~f:(fun x -> show_value (recurse x)) |> list)))
    | HasProperty p -> hashtbl_contain (node_get_prop n) (string p) |> vbool
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
                  (string_append (string "cannot find attribute ")
                     (string_append (string p) (string_append (string " in ") (string_of_int (node_get_extern_id n))))))
              (fun x -> x))
    | String s -> vstring (string s)
    | Int i -> vint (int i)
    | Float f -> vfloat (float f)
    | IfExpr (c, t, e) -> ite (bool_of_value (recurse c)) (fun _ -> recurse t) (fun _ -> recurse e)
    | HasPath p -> vbool (is_some (eval_path_opt n p))
    | Read (p, var_name) ->
        seq (*(print_endline (string (show_path p ^ "." ^ var_name)))*) tt (fun _ ->
            seq (read_metric m) (fun _ -> hashtbl_find_exn (eval_path n p |> node_get_var) (string var_name)))
    | And (x, y) -> vbool (and_ (bool_of_value (recurse x)) (fun _ -> bool_of_value (recurse y)))
    | Or (x, y) -> vbool (or_ (bool_of_value (recurse x)) (fun _ -> bool_of_value (recurse y)))
    | GetName -> vstring (node_get_name n)
    | Bool x -> vbool (bool x)
    | Call (f, xs) ->
        (*Stdio.print_endline (truncate (show_expr e));*) eval_func f (List.map ~f:(fun v -> recurse v) xs)
  (*| _ -> panic ("unhandled case in eval_expr:" ^ show_expr e)*)

  module EXPR = struct
    type t = expr [@@deriving hash, compare, sexp_of]
  end

  let eval_expr_hash : (expr, (meta node -> value) sd) Hashtbl.t = Hashtbl.create (module EXPR)

  let eval_expr (n : meta node sd) (e : expr) (m : metric sd) : value sd =
    if Option.is_none (Hashtbl.find eval_expr_hash e) then
      Hashtbl.add_exn eval_expr_hash ~key:e
        ~data:(lift "auto" "eval_expr" (lazy (lam (fun n -> record_eval m (fun _ -> eval_expr_aux n e m)))));
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
                       ite (equal_value value new_value) (fun _ -> tt) (fun _ -> var_modified p var_name n m)))
                  (fun _ -> hashtbl_set (node_get_var n) (string var_name) new_value)))
    | BBCall bb_name -> bracket_call_bb n bb_name (fun _ -> eval_stmts p n (stmts_of_basic_block p bb_name) m) m
    | ChildrenCall proc_name ->
        list_iter (node_get_children n) (fun new_node ->
            bracket_call_proc new_node proc_name
              (fun _ -> eval_stmts p new_node (stmts_of_processed_proc p proc_name) m)
              m)

  and eval_stmts_aux (p : prog) (n : meta node sd) (s : stmts) (m : metric sd) : unit sd =
    seqs (List.map s ~f:(fun stmt _ -> eval_stmt_aux p n stmt m))

  and eval_stmts_hash : (stmts, (meta node -> unit) sd) Hashtbl.t = Hashtbl.create (module STMTS)

  and eval_stmts (p : prog) (n : meta node sd) (s : stmts) (m : metric sd) : unit sd =
    if Option.is_none (Hashtbl.find eval_stmts_hash s) then
      Hashtbl.add_exn eval_stmts_hash ~key:s
        ~data:(lift "Unit" "eval_stmts" (lazy (lam (fun n -> eval_stmts_aux p n s m))));
    app (Hashtbl.find_exn eval_stmts_hash s) n

  let eval (p : prog) (n : meta node sd) (m : metric sd) : unit sd =
    seqs
      (List.map p.order (fun proc_name _ ->
           bracket_call_proc n proc_name (fun _ -> eval_stmts p n (stmts_of_processed_proc p proc_name) m) m))

  let remove_children (p : prog) (x : meta node sd) (n : int sd) (m : metric sd) : unit sd =
    let_
      (list_split_n (node_get_children x) n)
      (fun v ->
        let_ (zro v) (fun lhs ->
            let_ (fst v) (fun rhs_ ->
                let_ (list_hd_exn rhs_) (fun removed ->
                    let_ (list_tail_exn rhs_) (fun rhs ->
                        seqs
                          [
                            (fun _ -> node_set_children x (list_append lhs rhs));
                            (fun _ -> remove_meta (node_get_meta removed));
                            (fun _ ->
                              option_match (node_get_prev removed)
                                (fun _ -> tt)
                                (fun prev -> node_set_next prev (node_get_next removed)));
                            (fun _ ->
                              option_match (node_get_next removed)
                                (fun _ -> tt)
                                (fun next -> node_set_prev next (node_get_prev removed)));
                            (fun _ -> ite (list_is_empty lhs) (fun _ -> node_set_first x (list_hd rhs)) (fun _ -> tt));
                            (fun _ -> ite (list_is_empty rhs) (fun _ -> node_set_last x (list_last lhs)) (fun _ -> tt));
                            (fun _ ->
                              seqs
                                (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
                                     let work bb_name =
                                       let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
                                       let reads = reads_of_stmts stmts in
                                       let once_hashtbl : (string, unit) Hashtbl.t = Hashtbl.create (module String) in
                                       let once str (fu : unit -> unit sd) =
                                         match Hashtbl.add once_hashtbl ~key:str ~data:() with
                                         | `Ok -> fu ()
                                         | `Duplicate -> tt
                                       in
                                       let dirty read : unit sd =
                                         match read with
                                         | ReadVar (Self, _) | ReadHasPath Parent | ReadVar (Parent, _) -> tt
                                         | ReadHasPath First | ReadHasPath Last ->
                                             once "HasPathFirstLast" (fun _ ->
                                                 ite
                                                   (list_is_empty (node_get_children x))
                                                   (fun _ -> bb_dirtied_external p x ~proc_name ~bb_name m)
                                                   (fun _ -> tt))
                                         | ReadVar (First, _) ->
                                             once "VarFirst" (fun _ ->
                                                 ite (list_is_empty lhs)
                                                   (fun _ -> bb_dirtied_external p x ~proc_name ~bb_name m)
                                                   (fun _ -> tt))
                                         | ReadVar (Last, _) ->
                                             once "VarLast" (fun _ ->
                                                 ite (list_is_empty rhs)
                                                   (fun _ -> bb_dirtied_external p x ~proc_name ~bb_name m)
                                                   (fun _ -> tt))
                                         | ReadHasPath Prev | ReadVar (Prev, _) ->
                                             once "VarPrev" (fun _ ->
                                                 option_match (node_get_next removed)
                                                   (fun _ -> tt)
                                                   (fun x -> bb_dirtied_external p x ~proc_name ~bb_name m))
                                         | ReadHasPath Next | ReadVar (Next, _) ->
                                             once "VarNext" (fun _ ->
                                                 option_match (node_get_prev removed)
                                                   (fun _ -> tt)
                                                   (fun x -> bb_dirtied_external p x ~proc_name ~bb_name m))
                                         | ReadProp _ | ReadAttr _ -> tt
                                         | _ -> Common.panic (show_read read)
                                       in
                                       seqs (List.map reads ~f:(fun r () -> dirty r))
                                     in
                                     let down, up = get_bb_from_proc p proc_name in
                                     seqs [ (fun _ -> work down); (fun _ -> work up) ])));
                          ])))))

  let add_children (p : prog) (x : meta node sd) (y : meta node sd) (n : int sd) (m : metric sd) : unit sd =
    let_
      (list_split_n (node_get_children x) n)
      (fun v ->
        let_ (zro v) (fun lhs ->
            let_ (fst v) (fun rhs ->
                seqs
                  [
                    (fun _ -> node_set_children x (list_append lhs (cons y rhs)));
                    (fun _ -> ite (list_is_empty lhs) (fun _ -> node_set_first x (some y)) (fun _ -> tt));
                    (fun _ -> ite (list_is_empty rhs) (fun _ -> node_set_last x (some y)) (fun _ -> tt));
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
                               let once_hashtbl : (string, unit) Hashtbl.t = Hashtbl.create (module String) in
                               let once str (fu : unit -> unit sd) =
                                 match Hashtbl.add once_hashtbl ~key:str ~data:() with `Ok -> fu () | `Duplicate -> tt
                               in
                               let dirty read : unit sd =
                                 match read with
                                 | ReadHasPath Parent | ReadVar (Parent, _) -> tt
                                 | ReadHasPath First | ReadHasPath Last ->
                                     once "HasPathFirstLast" (fun _ ->
                                         ite
                                           (list_is_singleton (node_get_children x))
                                           (fun _ -> bb_dirtied_external p x ~proc_name ~bb_name m)
                                           (fun _ -> tt))
                                 | ReadVar (First, _) ->
                                     once "VarFirst" (fun _ ->
                                         ite (list_is_empty lhs)
                                           (fun _ -> bb_dirtied_external p x ~proc_name ~bb_name m)
                                           (fun _ -> tt))
                                 | ReadVar (Last, _) ->
                                     once "VarLast" (fun _ ->
                                         ite (list_is_empty rhs)
                                           (fun _ -> bb_dirtied_external p x ~proc_name ~bb_name m)
                                           (fun _ -> tt))
                                 | ReadHasPath Prev | ReadVar (Prev, _) ->
                                     once "VarPrev" (fun _ ->
                                         option_match (node_get_next y)
                                           (fun _ -> tt)
                                           (fun x -> bb_dirtied_external p x ~proc_name ~bb_name m))
                                 | ReadHasPath Next | ReadVar (Next, _) ->
                                     once "VarNext" (fun _ ->
                                         option_match (node_get_prev y)
                                           (fun _ -> tt)
                                           (fun x -> bb_dirtied_external p x ~proc_name ~bb_name m))
                                 | ReadVar (Self, _) | ReadProp _ | ReadAttr _ -> tt
                                 | _ -> Common.panic (show_read read)
                               in
                               seqs (List.map reads ~f:(fun r _ -> dirty r))
                             in
                             let down, up = get_bb_from_proc p proc_name in
                             seqs
                               [
                                 (fun _ -> record_overhead m (fun _ -> register_todo_proc p y proc_name m));
                                 (fun _ -> work down);
                                 (fun _ -> work up);
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
                   let dirty read : bool =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadAttr _ -> false
                     | ReadProp read_name -> String.equal name read_name
                     (*| _ -> panic (show_read read)*)
                   in
                   if List.exists reads ~f:dirty then bb_dirtied_external p n ~proc_name ~bb_name m else tt
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs [ (fun _ -> work down); (fun _ -> work up) ])));
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
                   let dirty read : bool =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadAttr _ -> false
                     | ReadProp read_name -> String.equal name read_name
                     (*| _ -> panic (show_read read)*)
                   in
                   if List.exists reads ~f:dirty then bb_dirtied_external p n ~proc_name ~bb_name m else tt
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs [ (fun _ -> work down); (fun _ -> work up) ])));
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
                   let dirty read : bool =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadProp _ -> false
                     | ReadAttr read_name -> String.equal name read_name
                     (*| _ -> panic (show_read read)*)
                   in
                   if List.exists reads ~f:dirty then bb_dirtied_external p n ~proc_name ~bb_name m else tt
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs [ (fun _ -> work down); (fun _ -> work up) ])));
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
                   let dirty read : bool =
                     match read with
                     | ReadHasPath _ | ReadVar _ | ReadProp _ -> false
                     | ReadAttr read_name -> String.equal name read_name
                     (*| _ -> panic (show_read read)*)
                   in
                   if List.exists reads ~f:dirty then bb_dirtied_external p n ~proc_name ~bb_name m else tt
                 in
                 let down, up = get_bb_from_proc p proc_name in
                 seqs [ (fun _ -> work down); (fun _ -> work up) ])));
      ]

  let recalculate_aux p (m : metric sd) : (meta node -> unit) sd =
    lam (fun n -> recalculate_internal p n m (fun n stmts -> eval_stmts p n stmts m))

  let recalculate_aux_code : (meta node -> unit) sd option ref = ref None

  let recalculate (p : prog) (n : meta node sd) (m : metric sd) : unit sd =
    match !recalculate_aux_code with
    | Some f -> app f n
    | None ->
        let f = lift "Unit" "recalculate" (lazy (recalculate_aux p m)) in
        recalculate_aux_code := Some f;
        app f n

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
