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
    bb_dirtied : (string, bool) Hashtbl.t;
    bb_time_table : (string, TotalOrder.t) Hashtbl.t;
    mutable alive : bool;
  }

  let meta_get_bb_dirtied (n : meta sd) =
    if is_static then (n |> unstatic).bb_dirtied |> static else CGetMember (n |> undyn, "BBDirtied") |> dyn

  let meta_get_alive m = if is_static then (m |> unstatic).alive |> static else CGetMember (m |> undyn, "alive") |> dyn

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

  let meta_get_bb_time_table m =
    if is_static then (m |> unstatic).bb_time_table |> static else CGetMember (m |> undyn, "BBTimeTable") |> dyn

  let fresh_meta _ =
    { bb_dirtied = Hashtbl.create (module String); bb_time_table = Hashtbl.create (module String); alive = true }
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

  let queue_push (x : TotalOrder.t sd) (y : meta node sd) (z : int sd) (m : metric sd) : unit sd =
    seq (meta_write_metric m) (fun _ ->
        if is_static then
          let result = PriorityQueue.add queue (x |> unstatic, { n = y |> unstatic; rf = z |> unstatic }) in
          Core.ignore result |> static
        else CApp (CPF "QueuePush", [ x |> undyn; y |> undyn; z |> undyn; m |> undyn ]) |> dyn)

  let queue_force_push (x : TotalOrder.t sd) (y : meta node sd) (z : int sd) (m : metric sd) : unit sd =
    seq (meta_write_metric m) (fun _ ->
        if is_static then
          if PriorityQueue.add queue (x |> unstatic, { n = y |> unstatic; rf = z |> unstatic }) then tt
          else panic (string "push false")
        else CApp (CPF "QueueForcePush", [ x |> undyn; y |> undyn; z |> undyn; m |> undyn ]) |> dyn)

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
                    (fun _ -> queue_force_push time y (int (proc_intern proc_name)) m);
                  ]))
          (fun _ -> (*otherwise this proc is already in the queue with y's ancestor.*) tt))

  let bb_dirtied_internal p (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    Core.ignore proc_name;

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
                (fun _ -> queue_force_push order n (int (bb_intern bb_name)) m);
              ])
          (fun _ -> tt))

  let bb_dirtied_external = bb_dirtied_internal

  let bracket_call_bb (n : meta node sd) bb_name (f : unit -> unit sd) m : unit sd =
    seqs
      [
        (fun _ ->
          record_overhead m (fun _ ->
              hashtbl_set (meta_get_bb_time_table (node_get_meta n)) (string bb_name) (read_ref current_time)));
        (fun _ -> record_om m (fun _ -> write_ref current_time (next_total_order (read_ref current_time))));
        (fun _ -> f ());
        (fun _ ->
          record_overhead m (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool false)));
      ]

  let bracket_call_proc (n : meta node sd) proc_name (f : unit -> unit sd) m : unit sd =
    Core.ignore proc_name;
    f ()

  let rec check_aux (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) ->
        assert (not (Hashtbl.find_exn n.m.bb_dirtied bb));
        Core.ignore (Hashtbl.find_exn n.m.bb_time_table bb));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> Core.ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check_aux p)

  let check (p : prog) (n : meta node sd) : unit sd = if is_static then check_aux p (n |> unstatic) |> static else tt

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd)
      : unit sd =
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
      seq (start_record_queue m) (fun _ ->
          let_ (queue_pop ()) (fun qp ->
              let_ (zro qp) (fun x ->
                  let_ (fst qp) (fun k ->
                      seqs
                        [
                          (fun _ -> stop_record_queue m);
                          (fun _ -> meta_read_metric m);
                          (fun _ -> queue_size_metric m (queue_size ()));
                          (fun _ -> start_record_overhead m);
                          (fun _ ->
                            ite
                              (k |> key_get_node |> node_get_meta |> meta_get_alive)
                              (fun _ ->
                                int_match (k |> key_get_rf)
                                  (List.append (bb_cases x k) (proc_cases x k))
                                  (fun _ -> panic (string "unknown bb/proc")))
                              (fun _ -> tt));
                          (fun _ -> stop_record_overhead m);
                        ]))))
    in
    seqs [ (fun _ -> while_ (fun _ -> not_ (queue_isempty ())) (fun _ -> loop_body ())); (fun _ -> check p n) ]
end)
