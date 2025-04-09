open Ast
open Core
open Eval
open Metric
open Common
open SD

module EVAL (SD : SD) = MakeEval (struct
  include SD
  module SD = SD

  let comp_size = if is_static then make_ref (int 0) else CVar "comp_size" |> dyn
  let make_total_order () = if is_static then TotalOrder.create () |> static else CApp (CPF "MakeTotalOrder", []) |> dyn

  let next_total_order o =
    if is_static then TotalOrder.add_next (o |> unstatic) |> static
    else CApp (CPF "NextTotalOrder", [ o |> undyn ]) |> dyn

  let name = "PQ"
  let current_time = if is_static then make_ref (make_total_order ()) else CVar "current_time" |> dyn
  let in_pq_mode = if is_static then make_ref (bool true) else CVar "in_pq_mode" |> dyn

  type meta = {
    bb_dirtied : (string, bool) Hashtbl.t;
    bb_time_table : (string, TotalOrder.t) Hashtbl.t;
    mutable alive : bool;
    recursive_proc_dirtied : (string, bool) Hashtbl.t;
    proc_inited : (string, unit) Hashtbl.t;
  }

  let meta_get_bb_dirtied (n : meta sd) =
    if is_static then (n |> unstatic).bb_dirtied |> static else CGetMember (n |> undyn, "BBDirtied") |> dyn

  let meta_get_alive m = if is_static then (m |> unstatic).alive |> static else CGetMember (m |> undyn, "alive") |> dyn

  let meta_get_proc_inited (n : meta sd) =
    if is_static then (n |> unstatic).proc_inited |> static else CGetMember (n |> undyn, "ProcInited") |> dyn

  let meta_get_recursive_proc_dirtied (n : meta sd) =
    if is_static then (n |> unstatic).recursive_proc_dirtied |> static
    else CGetMember (n |> undyn, "RecursiveProcDirtied") |> dyn

  let meta_get_bb_time_table m =
    if is_static then (m |> unstatic).bb_time_table |> static else CGetMember (m |> undyn, "BBTimeTable") |> dyn

  let meta_defs (p : prog) =
    String.concat
      (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (bb, _) ->
           "bool " ^ bb ^ "_has_bb_dirtied = false;" ^ "bool " ^ bb ^ "_bb_dirtied;" ^ "bool " ^ bb
           ^ "_has_bb_time_table = false;"))
      ~sep:""
    ^ String.concat
        (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (bb, _) -> "TotalOrder " ^ bb ^ "_bb_time_table;"))
        ~sep:""
    ^ "bool alive=true;"
    ^ String.concat
        (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc, _) ->
             "bool " ^ proc ^ "_proc_inited = false;" ^ "bool " ^ proc ^ "_has_recursive_proc_dirtied = false;"
             ^ "bool " ^ proc ^ "_recursive_proc_dirtied;"))
        ~sep:""

  let fresh_meta _ =
    {
      bb_dirtied = Hashtbl.create (module String);
      bb_time_table = Hashtbl.create (module String);
      alive = true;
      proc_inited = Hashtbl.create (module String);
      recursive_proc_dirtied = Hashtbl.create (module String);
    }
    |> static

  let remove_meta m =
    if is_static then ((m |> unstatic).alive <- false) |> static
    else CSetMember (m |> undyn, "alive", CBool false) |> dyn

  let bb_intern_hash : (string, int) Hashtbl.t = Hashtbl.create (module String)
  let proc_intern_hash : (string, int) Hashtbl.t = Hashtbl.create (module String)

  let bb_intern (s : string) : int =
    match Hashtbl.find bb_intern_hash s with
    | Some i -> i
    | None ->
        let i = Hashtbl.length bb_intern_hash + Hashtbl.length proc_intern_hash in
        Hashtbl.add_exn bb_intern_hash s i;
        i

  let proc_intern (s : string) : int =
    match Hashtbl.find proc_intern_hash s with
    | Some i -> i
    | None ->
        let i = Hashtbl.length bb_intern_hash + Hashtbl.length proc_intern_hash in
        Hashtbl.add_exn proc_intern_hash s i;
        i

  type key = { n : meta node; rf : int }

  let key_get_node k = if is_static then (k |> unstatic).n |> static else CGetMember (k |> undyn, "n") |> dyn
  let key_get_rf k = if is_static then (k |> unstatic).rf |> static else CGetMember (k |> undyn, "rf") |> dyn

  module PriorityQueue = PrioritySet.Make (struct
    type t = TotalOrder.t * key

    let compare (l, _) (r, _) = TotalOrder.compare l r
  end)

  let queue = PriorityQueue.create ()

  let queue_isempty () : bool sd =
    if is_static then PriorityQueue.is_empty queue |> static else CApp (CPF "QueueIsEmpty", []) |> dyn

  let queue_pop () = if is_static then PriorityQueue.pop queue |> static else CApp (CPF "QueuePop", []) |> dyn
  let queue_peek () = if is_static then PriorityQueue.peek queue |> static else CApp (CPF "QueuePeek", []) |> dyn
  let queue_size () = if is_static then PriorityQueue.size queue |> static else CApp (CPF "QueueSize", []) |> dyn
  let queue_reset () = if is_static then panic (string "reset") else CApp (CPF "QueueReset", []) |> dyn

  let queue_forall (f : (TotalOrder.t * key) sd -> unit sd) =
    if is_static then panic (string "forall") else CApp (CPF "QueueForall", [ lam f |> undyn ]) |> dyn

  let set_recursive_proc_dirtied_inner (proc_name : string) (m : metric sd) : (meta node -> unit) sd =
    fix (fun recurse n ->
        seq (meta_write_metric m) (fun _ ->
            ite
              (hashtbl_find_exn (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name))
              (fun _ -> tt)
              (fun _ ->
                seq
                  (hashtbl_set (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name) (bool true))
                  (fun _ -> option_match (node_get_parent n) (fun _ -> tt) (fun p -> recurse p)))))

  let set_recursive_proc_dirtied_hash : (string, (meta node -> unit) sd) Hashtbl.t = Hashtbl.create (module String)

  let set_recursive_proc_dirtied (n : meta node sd) (proc_name : string) (m : metric sd) : unit sd =
    if Option.is_none (Hashtbl.find set_recursive_proc_dirtied_hash proc_name) then
      Hashtbl.add_exn set_recursive_proc_dirtied_hash ~key:proc_name
        ~data:(lift "Unit" "set_recursive_proc_dirtied" (lazy (set_recursive_proc_dirtied_inner proc_name m)));
    app (Hashtbl.find_exn set_recursive_proc_dirtied_hash proc_name) n

  let bailout_aux (p : prog) (m : metric sd) : unit sd =
    let bb_cases k =
      List.map (Hashtbl.to_alist p.bbs) ~f:(fun (bb_name, BasicBlock (_, stmts)) ->
          let proc_name = get_proc_from_bb p bb_name in
          ( bb_intern bb_name,
            fun _ ->
              seqs
                [
                  (fun _ ->
                    ite
                      (is_some
                         (hashtbl_find (meta_get_proc_inited (node_get_meta (key_get_node k))) (string proc_name)))
                      (fun _ ->
                        seq
                          (hashtbl_set
                             (meta_get_bb_dirtied (node_get_meta (key_get_node k)))
                             (string bb_name) (bool true))
                          (fun _ -> set_recursive_proc_dirtied (key_get_node k) proc_name m))
                      (fun _ -> meta_write_metric m));
                ] ))
    in
    let proc_cases k =
      List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, ProcessedProc (_, stmts)) ->
          ( proc_intern proc_name,
            fun _ ->
              seqs
                [
                  (fun _ ->
                    hashtbl_set
                      (meta_get_recursive_proc_dirtied (node_get_meta (key_get_node k)))
                      (string proc_name) (bool false));
                  (fun _ -> set_recursive_proc_dirtied (key_get_node k) proc_name m);
                ] ))
    in
    seqs
      [
        (fun _ ->
          queue_forall (fun qe ->
              let_ (fst qe) (fun k ->
                  ite
                    (k |> key_get_node |> node_get_meta |> meta_get_alive)
                    (fun _ ->
                      int_match (k |> key_get_rf)
                        (List.append (bb_cases k) (proc_cases k))
                        (fun _ -> panic (string "unknown bb/proc")))
                    (fun _ -> tt))));
        (fun _ -> queue_reset ());
      ]

  let bailout_store : (unit -> unit) sd option ref = ref None

  let bailout p m =
    if Option.is_none !bailout_store then
      bailout_store := Some (lift "Unit" "bailout" (lazy (lam (fun _ -> bailout_aux p m))));
    app (Option.value_exn !bailout_store) tt

  let queue_force_push p (x : TotalOrder.t sd) (y : meta node sd) (z : int sd) (m : metric sd) : unit sd =
    seqs
      [
        (fun _ -> meta_write_metric m);
        (fun _ ->
          if is_static then
            if PriorityQueue.add queue (x |> unstatic, { n = y |> unstatic; rf = z |> unstatic }) then tt
            else panic (string "push false")
          else CApp (CPF "QueueForcePush", [ x |> undyn; y |> undyn; z |> undyn; m |> undyn ]) |> dyn);
        (fun _ ->
          let_ (queue_size ()) (fun qsize ->
              ite (int_lt (read_ref comp_size) (int_mult qsize (bit_width qsize))) (fun _ -> bailout p m) (fun _ -> tt)));
      ]

  let bb_dirtied_internal_db p (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    ite
      (is_some (hashtbl_find (meta_get_proc_inited (node_get_meta n)) (string proc_name)))
      (fun _ ->
        seq
          (hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool true))
          (fun _ -> set_recursive_proc_dirtied n proc_name m))
      (fun _ -> meta_write_metric m)

  let bb_dirtied_internal_pq p (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    Core.ignore proc_name;
    seqs
      [
        (fun _ ->
          option_match
            (hashtbl_find (meta_get_bb_time_table (node_get_meta n)) (string bb_name))
            (fun _ -> tt)
            (fun order ->
              ite
                (not_
                   (and_
                      (is_some (hashtbl_find (meta_get_bb_dirtied (node_get_meta n)) (string bb_name)))
                      (fun _ -> hashtbl_find_exn (meta_get_bb_dirtied (node_get_meta n)) (string bb_name))))
                (fun _ ->
                  seqs
                    [
                      (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool true));
                      (fun _ -> queue_force_push p order n (int (bb_intern bb_name)) m);
                    ])
                (fun _ -> tt)));
      ]

  let bb_dirtied_internal p (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    ite (read_ref in_pq_mode)
      (fun _ -> bb_dirtied_internal_pq p n ~proc_name ~bb_name m)
      (fun _ -> bb_dirtied_internal_db p n ~proc_name ~bb_name m)

  let bb_dirtied_external = bb_dirtied_internal

  let register_todo_proc p (y : meta node sd) proc_name (m : metric sd) : unit sd =
    let down, up = get_bb_from_proc p proc_name in
    option_match (node_get_parent y)
      (fun _ -> panic (string "dangling node"))
      (fun x ->
        ite
          (*a node can have down but not up, only if it was initially enqueued. otherwise up and down must both be value or none.*)
          (is_some (hashtbl_find (meta_get_bb_time_table (node_get_meta x)) (string up)))
          (fun _ ->
            let_
              (option_match (node_get_prev y)
                 (fun _ -> next_total_order (hashtbl_find_exn (meta_get_bb_time_table (node_get_meta x)) (string down)))
                 (fun x ->
                   (option_match (hashtbl_find (meta_get_bb_time_table (node_get_meta x)) (string up)))
                     (fun _ ->
                       next_total_order (hashtbl_find_exn (meta_get_bb_time_table (node_get_meta x)) (string down)))
                     (fun time -> next_total_order time)))
              (fun time ->
                seqs
                  [
                    (fun _ -> hashtbl_add_exn (meta_get_bb_dirtied (node_get_meta y)) (string down) (bool true));
                    (fun _ -> hashtbl_add_exn (meta_get_bb_time_table (node_get_meta y)) (string down) time);
                    (fun _ ->
                      hashtbl_add_exn
                        (meta_get_recursive_proc_dirtied (node_get_meta y))
                        (string proc_name) (bool false));
                    (fun _ ->
                      ite (read_ref in_pq_mode)
                        (fun _ -> queue_force_push p time y (int (proc_intern proc_name)) m)
                        (fun _ -> set_recursive_proc_dirtied y proc_name m));
                  ]))
          (fun _ -> (*otherwise this proc is already in the queue with y's ancestor.*) tt))

  let bracket_call_bb (n : meta node sd) bb_name (f : unit -> unit sd) m : unit sd =
    seqs
      [
        (fun _ ->
          record_overhead m (fun _ ->
              hashtbl_set (meta_get_bb_time_table (node_get_meta n)) (string bb_name) (read_ref current_time)));
        (fun _ -> record_overhead m (fun _ -> write_ref current_time (next_total_order (read_ref current_time))));
        (fun _ -> f ());
        (fun _ ->
          record_overhead m (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool false)));
      ]

  let bracket_call_proc (n : meta node sd) proc_name (f : unit -> unit sd) m : unit sd =
    seqs
      [
        (fun _ ->
          record_overhead m (fun _ -> hashtbl_add_exn (meta_get_proc_inited (node_get_meta n)) (string proc_name) tt));
        (fun _ ->
          record_overhead m (fun _ ->
              hashtbl_add_exn (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name) (bool false)));
        (fun _ -> f ());
      ]

  let rec db_check (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc, _)) ->
        Hashtbl.find_exn n.m.proc_inited proc;
        assert (not (Hashtbl.find_exn n.m.recursive_proc_dirtied proc)));
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> assert (not (Hashtbl.find_exn n.m.bb_dirtied bb)));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> Core.ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(db_check p)

  let rec pq_check_aux (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) ->
        assert (not (Hashtbl.find_exn n.m.bb_dirtied bb));
        Core.ignore (Hashtbl.find_exn n.m.bb_time_table bb));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> Core.ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(pq_check_aux p)

  let pq_check (p : prog) (n : meta node sd) : unit sd =
    if is_static then pq_check_aux p (n |> unstatic) |> static else tt

  (*assuming a global metric to avoid passing around*)
  let db_recalculate_internal_aux_code (p : prog) (proc_name : string) (down_name : string) (up_name : string)
      (eval_stmts : meta node sd -> stmts -> unit sd) (m : metric sd) : (meta node -> unit) sd =
    lift "Unit" "recalculate_internal"
      (lazy
        (fix (fun recurse n ->
             (*inlined*)
             let rerun_if_dirty name : unit sd =
               ite
                 (hashtbl_find_exn (meta_get_bb_dirtied (node_get_meta n)) (string name))
                 (fun _ ->
                   seqs
                     [
                       (fun _ -> stop_record_overhead m);
                       (fun _ -> eval_stmts n (stmts_of_basic_block p name));
                       (fun _ -> start_record_overhead m);
                       (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string name) (bool false));
                     ])
                 (fun _ -> tt)
             in
             seqs
               [
                 (fun _ -> meta_read_metric m);
                 (fun _ ->
                   ite
                     (hashtbl_find_exn (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name))
                     (fun _ ->
                       ite
                         (is_some (hashtbl_find (meta_get_proc_inited (node_get_meta n)) (string proc_name)))
                         (fun _ ->
                           seqs
                             [
                               (fun _ -> rerun_if_dirty down_name);
                               (fun _ -> list_iter (node_get_children n) recurse);
                               (fun _ -> rerun_if_dirty up_name);
                             ])
                         (fun _ ->
                           seqs
                             [
                               (fun _ -> hashtbl_add_exn (meta_get_proc_inited (node_get_meta n)) (string proc_name) tt);
                               (fun _ -> stop_record_overhead m);
                               (fun _ -> eval_stmts n (stmts_of_processed_proc p proc_name));
                               (fun _ -> start_record_overhead m);
                             ]))
                     (fun _ -> tt));
                 (fun _ ->
                   hashtbl_set (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name) (bool false));
               ])))

  let db_recalculate_internal_aux_hash : (string, (meta node -> unit) sd) Hashtbl.t = Hashtbl.create (module String)

  let db_recalculate_internal_aux (p : prog) (n : meta node sd) (proc_name : string) (down_name : string)
      (up_name : string) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd =
    if Option.is_none (Hashtbl.find db_recalculate_internal_aux_hash proc_name) then
      Hashtbl.add_exn db_recalculate_internal_aux_hash ~key:proc_name
        ~data:(db_recalculate_internal_aux_code p proc_name down_name up_name eval_stmts m);
    app (Hashtbl.find_exn db_recalculate_internal_aux_hash proc_name) n

  let db_recalculate_internal (p : prog) (n : meta node sd) (m : metric sd)
      (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd =
    seqs
      [
        (fun _ -> start_record_overhead m);
        (fun _ ->
          seq
            (seqs
               (List.map p.order ~f:(fun proc_name _ ->
                    let down, up = get_bb_from_proc p proc_name in
                    db_recalculate_internal_aux p n proc_name down up m eval_stmts)))
            (fun _ -> if is_static then db_check p (n |> unstatic) |> static else tt));
        (fun _ -> stop_record_overhead m);
      ]

  let pq_recalculate_internal (p : prog) (n : meta node sd) (m : metric sd)
      (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd =
    let bb_cases x k =
      List.map (Hashtbl.to_alist p.bbs) ~f:(fun (bb_name, BasicBlock (_, stmts)) ->
          ( bb_intern bb_name,
            fun _ ->
              seqs
                [
                  (fun _ -> stop_record_overhead m);
                  (fun _ -> eval_stmts (key_get_node k) stmts);
                  (fun _ -> start_record_overhead m);
                  (fun _ ->
                    hashtbl_set (meta_get_bb_dirtied (node_get_meta (key_get_node k))) (string bb_name) (bool false));
                ] ))
    in
    let proc_cases x k =
      List.map (Hashtbl.to_alist p.procs) ~f:(fun (str, ProcessedProc (_, stmts)) ->
          ( proc_intern str,
            fun _ ->
              let_ (read_ref current_time) (fun old_time ->
                  seqs
                    [
                      (fun _ -> write_ref current_time x);
                      (fun _ -> stop_record_overhead m);
                      (fun _ -> eval_stmts (key_get_node k) stmts);
                      (fun _ -> start_record_overhead m);
                      (fun _ -> write_ref current_time old_time);
                    ]) ))
    in
    let loop_body () =
      let_ (queue_pop ()) (fun qp ->
          let_ (zro qp) (fun x ->
              let_ (fst qp) (fun k ->
                  seqs
                    [
                      (fun _ -> meta_read_metric m);
                      (fun _ -> queue_size_metric m (queue_size ()));
                      (fun _ ->
                        ite
                          (k |> key_get_node |> node_get_meta |> meta_get_alive)
                          (fun _ ->
                            int_match (k |> key_get_rf)
                              (List.append (bb_cases x k) (proc_cases x k))
                              (fun _ -> panic (string "unknown bb/proc")))
                          (fun _ -> tt));
                    ])))
    in
    record_overhead m (fun _ ->
        seqs [ (fun _ -> while_ (fun _ -> not_ (queue_isempty ())) (fun _ -> loop_body ())); (fun _ -> pq_check p n) ])

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd)
      : unit sd =
    seqs
      [
        (fun _ -> pq_recalculate_internal p n m eval_stmts);
        (fun _ -> ite (read_ref in_pq_mode) (fun _ -> db_recalculate_internal p n m eval_stmts) (fun _ -> tt));
        (fun _ -> write_ref in_pq_mode (bool true));
      ]
end)
