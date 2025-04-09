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

  let name = "HB"

  (*we need to store both proc init time and finish time*)
  type meta = {
    bb_time_table : (string, TotalOrder.t) Hashtbl.t;
    mutable alive : bool;
    bb_dirtied : (string, bool) Hashtbl.t;
    proc_inited : (string, unit) Hashtbl.t;
    recursive_proc_dirtied : (string, bool) Hashtbl.t;
    mutable is_current_node : bool;
    mutable is_root_candidate : bool;
  }

  let meta_get_alive m = if is_static then (m |> unstatic).alive |> static else CGetMember (m |> undyn, "alive") |> dyn

  let meta_get_is_current_node m =
    if is_static then (m |> unstatic).is_current_node |> static else CGetMember (m |> undyn, "is_current_node") |> dyn

  let meta_set_is_current_node m b =
    if is_static then ((m |> unstatic).is_current_node <- b |> unstatic) |> static
    else CSetMember (m |> undyn, "is_current_node", b |> undyn) |> dyn

  let meta_get_is_root_candidate m =
    if is_static then (m |> unstatic).is_root_candidate |> static
    else CGetMember (m |> undyn, "is_root_candidate") |> dyn

  let meta_set_is_root_candidate m b =
    if is_static then ((m |> unstatic).is_root_candidate <- b |> unstatic) |> static
    else CSetMember (m |> undyn, "is_root_candidate", b |> undyn) |> dyn

  let meta_defs (p : prog) =
    String.concat
      (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (bb, _) ->
           "bool " ^ bb ^ "_has_bb_time_table=false;TotalOrder " ^ bb ^ "_bb_time_table;"))
      ~sep:""
    ^ String.concat
        (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc, _) ->
             "bool " ^ proc ^ "_has_proc_time_table=false;TotalOrder " ^ proc ^ "_proc_time_table;"))
        ~sep:""
    ^ "bool alive=true; bool is_current_node=true;bool is_root_candidate=true;"

  let meta_get_bb_time_table m =
    if is_static then (m |> unstatic).bb_time_table |> static else CGetMember (m |> undyn, "BBTimeTable") |> dyn

  let meta_get_bb_dirtied (n : meta sd) =
    if is_static then (n |> unstatic).bb_dirtied |> static else CGetMember (n |> undyn, "BBDirtied") |> dyn

  let meta_get_proc_inited (n : meta sd) =
    if is_static then (n |> unstatic).proc_inited |> static else CGetMember (n |> undyn, "ProcInited") |> dyn

  let meta_get_recursive_proc_dirtied (n : meta sd) =
    if is_static then (n |> unstatic).recursive_proc_dirtied |> static
    else CGetMember (n |> undyn, "RecursiveProcDirtied") |> dyn

  let fresh_meta _ =
    {
      bb_time_table = Hashtbl.create (module String);
      alive = true;
      bb_dirtied = Hashtbl.create (module String);
      proc_inited = Hashtbl.create (module String);
      recursive_proc_dirtied = Hashtbl.create (module String);
      is_current_node = false;
      is_root_candidate = false;
    }
    |> static

  let remove_meta m =
    if is_static then ((m |> unstatic).alive <- false) |> static
    else CSetMember (m |> undyn, "alive", CBool false) |> dyn

  let proc_intern_hash : (string, int) Hashtbl.t = Hashtbl.create (module String)

  let proc_intern (s : string) : int =
    match Hashtbl.find proc_intern_hash s with
    | Some i -> i
    | None ->
        let i = Hashtbl.length proc_intern_hash in
        Hashtbl.add_exn proc_intern_hash ~key:s ~data:i;
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
    let down_name, up_name = get_bb_from_proc p proc_name in
    seqs
      [
        (fun _ -> hashtbl_add_exn (meta_get_recursive_proc_dirtied (node_get_meta y)) (string proc_name) (bool true));
        (fun _ ->
          option_match (node_get_parent y)
            (fun _ -> panic (string "dangling node"))
            (fun x ->
              ite
                (*a node can have down but not up, only if it was initially enqueued. otherwise up and down must both be value or none.*)
                (is_some (hashtbl_find (meta_get_bb_time_table (node_get_meta x)) (string up_name)))
                (fun _ ->
                  let_
                    (option_match (node_get_prev y)
                       (fun _ ->
                         seq
                           (print_endline (string "no_prev"))
                           (fun _ ->
                             next_total_order
                               (hashtbl_find_exn (meta_get_bb_time_table (node_get_meta x)) (string down_name))))
                       (*todo: if the node is newly insert it will not have up only down.
                          so at the code below we have to check up-ness and fallback to down.
                         also have to fix for raw pq.*)
                         (fun x ->
                         seq
                           (print_endline (string "have_prev"))
                           (fun _ ->
                             next_total_order
                               (hashtbl_find_exn (meta_get_bb_time_table (node_get_meta x)) (string up_name)))))
                    (fun time ->
                      seqs
                        [
                          (fun _ ->
                            print_endline
                              (to_compare time
                                 (hashtbl_find_exn (meta_get_bb_time_table (node_get_meta x)) (string up_name))
                              |> string_of_int));
                          (fun _ -> print_endline (string ("insert init:" ^ proc_name ^ "(" ^ down_name ^ ")")));
                          (fun _ -> hashtbl_add_exn (meta_get_bb_time_table (node_get_meta y)) (string down_name) time);
                          (fun _ -> queue_force_push time y (int (proc_intern proc_name)) m);
                        ]))
                (fun _ -> panic (string up_name) (*otherwise this proc is already in the queue with y's ancestor.*))));
      ]

  let set_recursive_proc_dirtied_inner (proc_name : string) (m : metric sd) : (meta node -> unit) sd =
    fix (fun recurse n ->
        seq (meta_write_metric m) (fun _ ->
            ite
              (hashtbl_find_exn (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name))
              (fun _ -> tt)
              (fun _ ->
                seq
                  (hashtbl_set (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name) (bool true))
                  (fun _ ->
                    option_match (node_get_parent n)
                      (fun _ -> tt)
                      (fun p -> ite (meta_get_is_root_candidate (node_get_meta n)) (fun _ -> recurse p) (fun _ -> tt))))))

  let set_recursive_proc_dirtied_hash : (string, (meta node -> unit) sd) Hashtbl.t = Hashtbl.create (module String)

  let set_recursive_proc_dirtied (n : meta node sd) (proc_name : string) (m : metric sd) : unit sd =
    if Option.is_none (Hashtbl.find set_recursive_proc_dirtied_hash proc_name) then
      Hashtbl.add_exn set_recursive_proc_dirtied_hash ~key:proc_name
        ~data:(lift "Unit" "set_recursive_proc_dirtied" (lazy (set_recursive_proc_dirtied_inner proc_name m)));
    app (Hashtbl.find_exn set_recursive_proc_dirtied_hash proc_name) n

  let bb_dirtied_internal prog (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    record_overhead m (fun _ ->
        ite
          (is_some (hashtbl_find (meta_get_proc_inited (node_get_meta n)) (string proc_name)))
          (fun _ ->
            seq
              (hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool true))
              (fun _ -> set_recursive_proc_dirtied n proc_name m))
          (fun _ -> meta_write_metric m))

  (*todo: it use two different method of determining initness. unify them both.*)
  let bb_dirtied_external (p : prog) (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) :
      unit sd =
    let down, up = get_bb_from_proc p proc_name in
    record_overhead m (fun _ ->
        seqs
          [
            (fun _ ->
              ite
                (is_some (hashtbl_find (meta_get_proc_inited (node_get_meta n)) (string proc_name)))
                (fun _ ->
                  seqs
                    [
                      (fun _ ->
                        hashtbl_set (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name) (bool true));
                      (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool true));
                    ])
                (fun _ -> meta_write_metric m));
            (fun _ ->
              option_match
                (hashtbl_find (meta_get_bb_time_table (node_get_meta n)) (string down))
                (fun _ -> tt)
                (fun order ->
                  seqs
                    [
                      (fun _ -> print_endline (string ("queue_push: " ^ bb_name)));
                      (fun _ -> queue_push order n (int (proc_intern proc_name)) m);
                    ]));
          ])

  let bracket_call_bb (n : meta node sd) bb_name f m =
    seqs
      [
        (fun _ ->
          record_overhead m (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool false)));
        (fun _ ->
          record_overhead m (fun _ ->
              hashtbl_set (meta_get_bb_time_table (node_get_meta n)) (string bb_name) (read_ref current_time)));
        (fun _ -> record_overhead m (fun _ -> write_ref current_time (next_total_order (read_ref current_time))));
        (fun _ -> f ());
      ]

  let bracket_call_proc (n : meta node sd) proc_name f m =
    seqs
      [
        (fun _ ->
          record_overhead m (fun _ -> hashtbl_add_exn (meta_get_proc_inited (node_get_meta n)) (string proc_name) tt));
        (fun _ ->
          record_overhead m (fun _ ->
              hashtbl_add_exn (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name) (bool false)));
        (fun _ -> f ());
      ]

  let to_equal l r =
    if is_static then phys_equal (TotalOrder.compare (l |> unstatic) (r |> unstatic)) 0 |> static
    else CApp (CPF "TotalOrderEqual", [ l |> undyn; r |> undyn ]) |> dyn

  let rec check_aux (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc, _)) ->
        assert (not (Hashtbl.find_exn n.m.recursive_proc_dirtied proc)));
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) ->
        assert (not (Hashtbl.find_exn n.m.bb_dirtied bb));
        Core.ignore (Hashtbl.find_exn n.m.bb_time_table bb));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> Core.ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check_aux p)

  let check (p : prog) (n : meta node sd) : unit sd =
    seqs
      [
        (fun _ -> if is_static then check_aux p (n |> unstatic) |> static else tt);
        (fun _ -> print_endline (string "checkok"));
      ]

  (*todo: remove this code replacing it with a single chase down.
      todo: chase does not fix recursive_proc*)
  (*assuming a global metric to avoid passing around*)
  let recalculate_internal_aux_code (p : prog) (proc_name : string) (down_name : string) (up_name : string)
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
                       (fun _ -> print_endline (string ("rerunning " ^ name)));
                       (fun _ -> eval_stmts n (stmts_of_basic_block p name));
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
                               (fun _ -> print_endline (string "inserted init popped:"));
                               (fun _ -> hashtbl_add_exn (meta_get_proc_inited (node_get_meta n)) (string proc_name) tt);
                               (fun _ -> eval_stmts n (stmts_of_processed_proc p proc_name));
                             ]))
                     (fun _ -> tt));
                 (fun _ ->
                   hashtbl_set (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name) (bool false));
               ])))

  (*
  there are two problem: converting from pq to db, and converting from db to pq.
  
  from pq to db: db is a recursive function, so the spine is recorded on the call stack.
  however pq work with only a node instead of the spine.
  to fight this we note that a full traversal only need one node:
  try to go to first, otherwise next, otherwise parent.
  we may skip descending when there is no work: clean db and next queue item is not downward.

  from db to pq: we dont want the recursive dbs to reach the root - that would be traversing the spine.
  we want to find a node to latter insert into the pq, as the start of next taba.
  such node is the least common ancestor of all affect, and must be maintained instead of precomputed.
  we call this node root candidate. recursive db need no propagate further.
  when root candidate move upward, recursive db have to propagate one level up as well.

  note that when the db is clean and next queue item is downard, very special care have to be taken.
  we have to go back to pq mode, popping from the queue and recursing base on that.
  that recursion might traverse upward until it reach the caller, and take over cleaning as well.
  when that happen there is no need for caller to do anymore work.
  this is tracked by setting a 'current node' bit. when that bit it gone work is stolen.
  *)
  let rec fix_key (p : prog) (x : TotalOrder.t sd) (k : key sd) (m : metric sd)
      (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd =
    let proc_cases =
      List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, ProcessedProc (_, stmts)) ->
          let down, up = get_bb_from_proc p proc_name in
          ( proc_intern proc_name,
            fun _ ->
              let_ (read_ref current_time) (fun old_time ->
                  seqs
                    [
                      (fun _ -> write_ref current_time x);
                      (fun _ ->
                        ite
                          (is_some (node_get_parent (key_get_node k)))
                          (fun _ -> print_endline (string "is not root"))
                          (fun _ -> print_endline (string "is root")));
                      (fun _ -> app (recalculate_internal_aux_code p proc_name down up eval_stmts m) (key_get_node k));
                      (fun _ -> chase_dirty p true proc_name down up (key_get_node k) eval_stmts m);
                      (fun _ -> write_ref current_time old_time);
                    ]) ))
    in
    seqs
      [
        (fun _ ->
          option_match
            (k |> key_get_node |> node_get_parent)
            (fun _ -> meta_set_is_root_candidate (k |> key_get_node |> node_get_meta) (bool true))
            (fun x -> meta_set_is_root_candidate (x |> node_get_meta) (bool true)));
        (fun _ -> int_match (k |> key_get_rf) proc_cases (fun _ -> panic (string "unknown bb/proc")));
      ]

  (*all other code consume pq, except here - this handle all db.
    this code will start fixing db, from n. (note that n need not be fixed prior to calling this function.)
  *)
  and chase_dirty (program : prog) (down_up : bool) (proc_name : string) (down_name : string) (up_name : string)
      (n : meta node sd) (eval_stmts : meta node sd -> stmts -> unit sd) (m : metric sd) : unit sd =
    let current_bb_name = if down_up then down_name else up_name in
    let move_root_candidate_up () =
      option_match (node_get_parent n)
        (fun _ -> tt)
        (fun p ->
          seqs
            [
              (fun _ -> meta_set_is_root_candidate (node_get_meta p) (bool true));
              (fun _ -> meta_set_is_root_candidate (node_get_meta n) (bool false));
              (fun _ ->
                seqs
                  (List.map (Hashtbl.to_alist program.procs) ~f:(fun (proc_name, _) _ ->
                       hashtbl_set
                         (meta_get_recursive_proc_dirtied (node_get_meta p))
                         (string proc_name)
                         (or_
                            (hashtbl_find_exn (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name))
                            (fun _ ->
                              hashtbl_find_exn (meta_get_recursive_proc_dirtied (node_get_meta p)) (string proc_name))))));
            ])
    in
    (*todo: wrong. there is no bb in queue anymore. only proc*)
    (*call this before exiting.*)
    let enqueue_subsequent () =
      seqs
        (List.map (Hashtbl.to_alist program.procs) ~f:(fun (proc_name, _) _ ->
             ite
               (hashtbl_find_exn (meta_get_recursive_proc_dirtied (node_get_meta n)) (string proc_name))
               (fun _ ->
                 queue_push
                   (hashtbl_find_exn (meta_get_bb_time_table (node_get_meta n)) (string down_name))
                   n
                   (proc_intern proc_name |> int)
                   m)
               (fun _ -> tt)))
    in
    let rec move new_down_up node =
      let goto () =
        seqs
          [
            (fun _ ->
              ite
                (hashtbl_find_exn (meta_get_bb_dirtied (node_get_meta n)) (string current_bb_name))
                (fun _ ->
                  seqs
                    [
                      (fun _ -> eval_stmts n (stmts_of_basic_block program current_bb_name));
                      (fun _ ->
                        hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string current_bb_name) (bool false));
                      (fun _ ->
                        if down_up then tt
                        else
                          hashtbl_set
                            (meta_get_recursive_proc_dirtied (node_get_meta n))
                            (string proc_name) (bool false));
                    ])
                (fun _ -> tt));
            (fun _ -> meta_set_is_current_node (n |> node_get_meta) (bool false));
            (fun _ -> meta_set_is_current_node (node |> node_get_meta) (bool true));
            (fun _ -> chase_dirty program new_down_up proc_name down_name up_name node eval_stmts m);
          ]
      in
      seqs
        [
          (fun _ -> print_endline (string ("chase " ^ if down_up then "down" else "up")));
          (fun _ -> ite (meta_get_is_root_candidate (node_get_meta n)) move_root_candidate_up (fun _ -> tt));
          (fun _ ->
            ite
              (not_ (queue_isempty ()))
              (fun _ ->
                let_
                  (to_compare
                     (zro (queue_peek ()))
                     (hashtbl_find_exn
                        (meta_get_bb_time_table (node_get_meta node))
                        (string (if down_up then down_name else up_name))))
                  (fun cmp_result ->
                    ite
                      (int_equal cmp_result (int 0))
                      (fun _ ->
                        seqs
                          [
                            (fun _ -> ignore (queue_pop ()));
                            (fun _ ->
                              (*the rest of the queue item must be larger, no need to check*)
                              goto ());
                          ])
                      (fun _ ->
                        ite
                          (int_lt cmp_result (int 0))
                          (fun _ ->
                            let_ (queue_pop ()) (fun qp ->
                                let_ (zro qp) (fun x ->
                                    let_ (fst qp) (fun k ->
                                        seqs
                                          [
                                            (fun _ ->
                                              chase_dirty program down_up proc_name down_name up_name (key_get_node k)
                                                eval_stmts m);
                                            (fun _ ->
                                              ite
                                                (meta_get_is_current_node (n |> node_get_meta))
                                                enqueue_subsequent
                                                (fun _ -> move down_up node));
                                          ]))))
                          (fun _ -> goto ()))))
              (fun _ -> tt));
        ]
    in
    let try_move_right () =
      option_match (node_get_next n)
        (fun _ -> seqs [ (fun _ -> print_endline (string "move right")); (fun _ -> move (*down_up=*) false n) ])
        (fun d -> move (*down_up=*) true d)
    in
    let try_move_down () = option_match (node_get_first n) try_move_right (fun d -> move (*down_up=*) true d) in
    seqs
      [
        (fun _ ->
          if down_up then
            ite
              (hashtbl_find_exn (meta_get_recursive_proc_dirtied (n |> node_get_meta)) (string proc_name))
              try_move_down try_move_right
          else
            ite
              (meta_get_is_root_candidate (node_get_meta n))
              (fun _ ->
                ite
                  (hashtbl_find_exn (meta_get_bb_dirtied (node_get_meta n)) (string up_name))
                  move_root_candidate_up
                  (fun _ -> enqueue_subsequent ()))
              (fun _ ->
                option_match (node_get_parent n)
                  (fun _ -> panic (string "no parent but all work done"))
                  (fun p -> seqs [ (fun _ -> print_endline (string "move up")); (fun _ -> move (*down_up=*) false p) ])));
      ]

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd)
      : unit sd =
    lift "Unit" "recalculate"
      (lazy
        (record_overhead m (fun _ ->
             seq
               (while_
                  (fun _ -> not_ (queue_isempty ()))
                  (fun _ ->
                    let_ (queue_pop ()) (fun qp ->
                        let_ (zro qp) (fun x ->
                            let_ (fst qp) (fun k ->
                                seqs
                                  [
                                    (fun _ ->
                                      print_endline
                                        (string_append (string "queue_size: ") (queue_size () |> string_of_int)));
                                    (fun _ -> meta_read_metric m);
                                    (fun _ -> queue_size_metric m (queue_size ()));
                                    (fun _ ->
                                      ite
                                        (k |> key_get_node |> node_get_meta |> meta_get_alive)
                                        (fun _ -> fix_key p x k m eval_stmts)
                                        (fun _ -> tt));
                                  ])))))
               (fun _ -> check p n))))
end)
