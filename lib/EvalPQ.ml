open Ast
open Core
open Eval
open Metric
open Common
open SD

module EVAL (SD : SD) = MakeEval (struct
  include SD
  module SD = SD

  let make_total_order () = if is_static then TotalOrder.create () |> static else CApp (CPF "MakeTotalOrder", []) |> dyn

  let next_total_order o =
    if is_static then TotalOrder.add_next (o |> unstatic) |> static
    else CApp (CPF "NextTotalOrder", [ o |> undyn ]) |> dyn

  let name = "PQ"
  let current_time = if is_static then make_ref (make_total_order ()) else CVar "current_time" |> dyn

  type meta = {
    (*time of bbs*)
    bb_time_table : (string, TotalOrder.t) Hashtbl.t;
    proc_time_table : (string, TotalOrder.t) Hashtbl.t;
    mutable alive : bool;
  }

  let meta_get_alive m = if is_static then (m |> unstatic).alive |> static else CGetMember (m |> undyn, "alive") |> dyn

  let meta_defs (p : prog) =
    String.concat
      (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (bb, _) -> "std::optional<TotalOrder> " ^ bb ^ "_bb_time_table;"))
      ~sep:""
    ^ String.concat
        (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc, _) ->
             "std::optional<TotalOrder> " ^ proc ^ "_proc_time_table;"))
        ~sep:""
    ^ "bool alive=true;"

  let meta_get_bb_time_table m =
    if is_static then (m |> unstatic).bb_time_table |> static else CGetMember (m |> undyn, "BBTimeTable") |> dyn

  let meta_get_proc_time_table m =
    if is_static then (m |> unstatic).proc_time_table |> static else CGetMember (m |> undyn, "ProcTimeTable") |> dyn

  let fresh_meta _ =
    { bb_time_table = Hashtbl.create (module String); proc_time_table = Hashtbl.create (module String); alive = true }
    |> static

  let remove_meta m =
    if is_static then ((m |> unstatic).alive <- false) |> static
    else CSetMember (m |> undyn, "alive", CBool false) |> dyn

  type recompute_func = RecomputeBB of int | RecomputeProc of int

  let bb_intern_hash : (string, int) Hashtbl.t = Hashtbl.create (module String)

  let bb_intern (s : string) : int =
    match Hashtbl.find bb_intern_hash s with
    | Some i -> i
    | None ->
        let i = Hashtbl.length bb_intern_hash in
        Hashtbl.add_exn bb_intern_hash s i;
        i

  let proc_intern_hash : (string, int) Hashtbl.t = Hashtbl.create (module String)

  let proc_intern (s : string) : int =
    match Hashtbl.find proc_intern_hash s with
    | Some i -> i
    | None ->
        let i = Hashtbl.length proc_intern_hash in
        Hashtbl.add_exn proc_intern_hash s i;
        i

  let make_recompute_bb str =
    if is_static then RecomputeBB (str |> unstatic) |> static else CApp (CPF "MakeRecomputeBB", [ str |> undyn ]) |> dyn

  let make_recompute_proc str =
    if is_static then RecomputeProc (str |> unstatic) |> static
    else CApp (CPF "MakeRecomputeProc", [ str |> undyn ]) |> dyn

  let recompute_to_string = function RecomputeBB x -> x | RecomputeProc x -> x

  type key = { n : meta node; rf : recompute_func }

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

  let queue_push (x : TotalOrder.t sd) (y : meta node sd) (z : recompute_func sd) (m : metric sd) : unit sd =
    seq (meta_write_metric m) (fun _ ->
        if is_static then
          let result = PriorityQueue.add queue (x |> unstatic, { n = y |> unstatic; rf = z |> unstatic }) in
          Core.ignore result |> static
        else CApp (CPF "QueuePush", [ x |> undyn; y |> undyn; z |> undyn; m |> undyn ]) |> dyn)

  let queue_force_push (x : TotalOrder.t sd) (y : meta node sd) (z : recompute_func sd) (m : metric sd) : unit sd =
    seq (meta_write_metric m) (fun _ ->
        if is_static then
          if PriorityQueue.add queue (x |> unstatic, { n = y |> unstatic; rf = z |> unstatic }) then tt
          else panic (string "push false")
        else CApp (CPF "QueueForcePush", [ x |> undyn; y |> undyn; z |> undyn; m |> undyn ]) |> dyn)

  let register_todo_proc p (y : meta node sd) proc_name (m : metric sd) : unit sd =
    option_match (node_get_parent y)
      (fun _ -> panic (string "dangling node"))
      (fun x ->
        ite
          (is_some (hashtbl_find (meta_get_proc_time_table (node_get_meta x)) (string proc_name)))
          (fun _ ->
            let down, up = get_bb_from_proc p proc_name in
            Core.ignore up;
            let_
              (option_match (node_get_prev y)
                 (fun _ ->
                   next_total_order
                     (hashtbl_find_exn (meta_get_bb_time_table (node_get_meta x)) (Option.value_exn down |> string)))
                 (fun x ->
                   next_total_order (hashtbl_find_exn (meta_get_proc_time_table (node_get_meta x)) (string proc_name))))
              (fun time ->
                seq
                  (hashtbl_add_exn (meta_get_proc_time_table (node_get_meta y)) (string proc_name) time)
                  (fun _ -> queue_force_push time y (make_recompute_proc (int (proc_intern proc_name))) m)))
          (fun _ -> (*otherwise this proc is already in the queue with y's ancestor.*) tt))

  let bb_dirtied (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    Core.ignore proc_name;
    metric_record_overhead m
      (zro
         (timed (fun _ ->
              option_match
                (hashtbl_find (meta_get_bb_time_table (node_get_meta n)) (string bb_name))
                (fun _ -> tt)
                (fun order -> queue_push order n (make_recompute_bb (int (bb_intern bb_name))) m))))

  let bracket_call_bb (n : meta node sd) bb_name (f : unit -> unit sd) : unit sd =
    seqs
      [
        (fun _ -> write_ref current_time (next_total_order (read_ref current_time)));
        (fun _ -> hashtbl_add_exn (meta_get_bb_time_table (node_get_meta n)) (string bb_name) (read_ref current_time));
        (fun _ -> f ());
      ]

  let bracket_call_proc (n : meta node sd) proc_name (f : unit -> unit sd) : unit sd =
    seq
      (write_ref current_time (next_total_order (read_ref current_time)))
      (fun _ ->
        seq (f ()) (fun _ ->
            hashtbl_add_exn (meta_get_proc_time_table (node_get_meta n)) (string proc_name) (read_ref current_time)))

  let to_equal l r =
    if is_static then phys_equal (TotalOrder.compare (l |> unstatic) (r |> unstatic)) 0 |> static
    else CApp (CPF "TotalOrderEqual", [ l |> undyn; r |> undyn ]) |> dyn

  let rf_match (rf : recompute_func sd) (bb : int sd -> 'a sd) (proc : int sd -> 'a sd) : 'a sd =
    if is_static then
      match rf |> unstatic with RecomputeBB s -> bb (s |> static) | RecomputeProc s -> proc (s |> static)
    else CApp (CPF "RFMatch", [ rf |> undyn; bb |> lam |> undyn; proc |> lam |> undyn ]) |> dyn

  let rec recalculate_internal_aux (p : prog) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd) :
      (unit -> unit) sd =
    lift "Unit" "recalculate_internal"
      (lazy
        (fix (fun recurse _ ->
             ite (queue_isempty ())
               (fun _ -> tt)
               (fun _ ->
                 let_ (queue_peek ()) (fun qp ->
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
                                       rf_match (k |> key_get_rf)
                                         (fun bb ->
                                           int_match bb
                                             (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (str, BasicBlock (_, stmts)) ->
                                                  (bb_intern str, fun _ -> eval_stmts (key_get_node k) stmts)))
                                             (fun _ -> panic (string "unknown bb")))
                                         (fun proc ->
                                           let_ (read_ref current_time) (fun old_time ->
                                               seqs
                                                 [
                                                   (fun _ -> write_ref current_time x);
                                                   (fun _ ->
                                                     int_match proc
                                                       (List.map (Hashtbl.to_alist p.procs)
                                                          ~f:(fun (str, ProcessedProc (_, stmts)) ->
                                                            ( proc_intern str,
                                                              fun _ ->
                                                                seq
                                                                  (eval_stmts (key_get_node k) stmts)
                                                                  (fun _ ->
                                                                    hashtbl_set
                                                                      (meta_get_proc_time_table
                                                                         (node_get_meta (key_get_node k)))
                                                                      (string str) (read_ref current_time)) )))
                                                       (fun _ -> panic (string "unknown proc")));
                                                   (fun _ -> write_ref current_time old_time);
                                                 ])))
                                     (fun _ -> tt));
                                 (fun _ ->
                                   let_
                                     (queue_pop () |> zro)
                                     (fun x' ->
                                       seq
                                         (ite (to_equal x x') (fun _ -> tt) (fun _ -> panic (string "unequal")))
                                         (fun _ -> recurse tt)));
                               ])))))))

  let rec check_aux (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> Core.ignore (Hashtbl.find_exn n.m.bb_time_table bb));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> Core.ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check_aux p)

  let check (p : prog) (n : meta node sd) : unit sd = if is_static then check_aux p (n |> unstatic) |> static else tt

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd)
      : unit sd =
    seq (app (recalculate_internal_aux p m eval_stmts) tt) (fun _ -> check p n)
end)
