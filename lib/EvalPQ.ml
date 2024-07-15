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
  let current_time = lift "TotalOrder" "current_time" (lazy (make_ref (make_total_order ())))

  type meta = {
    (*time of bbs*)
    bb_time_table : (string, TotalOrder.t) Hashtbl.t;
    proc_time_table : (string, TotalOrder.t) Hashtbl.t;
    mutable alive : bool;
  }

  let meta_staged = "???"

  let meta_get_bb_time_table m =
    if is_static then (m |> unstatic).bb_time_table |> static else CGetMember (m |> undyn, "BBTimeTable") |> dyn

  let meta_get_proc_time_table m =
    if is_static then (m |> unstatic).proc_time_table |> static else CGetMember (m |> undyn, "ProcTimeTable") |> dyn

  let fresh_meta _ =
    { bb_time_table = Hashtbl.create (module String); proc_time_table = Hashtbl.create (module String); alive = true }
    |> static

  let remove_meta m =
    if is_static then ((m |> unstatic).alive <- false) |> static else CApp (CPF "RemoveMeta", [ m |> undyn ]) |> dyn

  type recompute_func = RecomputeBB of string | RecomputeProc of string

  let make_recompute_bb str =
    if is_static then RecomputeBB (str |> unstatic) |> static else CApp (CPF "MakeRecomputeBB", [ str |> undyn ]) |> dyn

  let make_recompute_proc str =
    if is_static then RecomputeProc (str |> unstatic) |> static
    else CApp (CPF "MakeRecomputeProc", [ str |> undyn ]) |> dyn

  let recompute_to_string = function RecomputeBB x -> x | RecomputeProc x -> x

  module PriorityQueue = PrioritySet.Make (struct
    type t = TotalOrder.t * meta node * recompute_func

    let compare (l, _, _) (r, _, _) = TotalOrder.compare l r
  end)

  let queue = PriorityQueue.create ()
  let queue_isempty () = PriorityQueue.is_empty queue
  let queue_pop () = PriorityQueue.pop queue
  let queue_peek () = PriorityQueue.peek queue
  let queue_size () = PriorityQueue.size queue

  let queue_push (x : TotalOrder.t sd) (y : meta node sd) (z : recompute_func sd) (m : metric sd) : unit sd =
    seq (meta_write_metric m) (fun _ ->
        if is_static then
          let result = PriorityQueue.add queue (x |> unstatic, y |> unstatic, z |> unstatic) in
          Core.ignore result |> static
        else CApp (CPF "QueuePush", [ x |> undyn; y |> undyn; z |> undyn; m |> undyn ]) |> dyn)

  let queue_force_push (x : TotalOrder.t sd) (y : meta node sd) (z : recompute_func sd) (m : metric sd) : unit sd =
    seq (meta_write_metric m) (fun _ ->
        if is_static then
          if PriorityQueue.add queue (x |> unstatic, y |> unstatic, z |> unstatic) then tt
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
                  (fun _ -> queue_force_push time y (make_recompute_proc (string proc_name)) m)))
          (fun _ -> (*otherwise this proc is already in the queue with y's ancestor.*) tt))

  let bb_dirtied (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    Core.ignore proc_name;
    option_match
      (hashtbl_find (meta_get_bb_time_table (node_get_meta n)) (string bb_name))
      (fun _ -> tt)
      (fun order -> queue_push order n (make_recompute_bb (string bb_name)) m)

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

  let rec recalculate_internal_aux (p : prog) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd
      =
    if queue_isempty () then tt
    else
      let x, y, z = queue_peek () in
      meta_read_metric m |> unstatic;
      (m |> unstatic).queue_size_acc <- (m |> unstatic).queue_size_acc + queue_size ();
      (*(match z with RecomputeProc z | RecomputeBB z -> print_endline ("popped " ^ string_of_int y.id ^ "." ^ z); recursive_print_id_up y);*)
      (if y.m.alive then
       match z with
       | RecomputeBB z -> eval_stmts (y |> static) (stmts_of_basic_block p z)
       | RecomputeProc z ->
           let_ (read_ref current_time) (fun old_time ->
               seqs
                 [
                   (fun _ -> write_ref current_time (x |> static));
                   (fun _ -> eval_stmts (y |> static) (stmts_of_processed_proc p z));
                   (fun _ ->
                     hashtbl_set
                       (meta_get_proc_time_table (node_get_meta (y |> static)))
                       (z |> static) (read_ref current_time));
                   (fun _ -> write_ref current_time old_time);
                 ])
      else tt)
      |> unstatic;
      let x', y', z' = queue_pop () in
      Core.ignore (y', z');
      if not (phys_equal (TotalOrder.compare x x') 0) then (
        print_endline (static ("peek " ^ Core.string_of_int y.id ^ "." ^ recompute_to_string z)) |> unstatic;
        print_endline (static ("pop  " ^ Core.string_of_int y'.id ^ "." ^ recompute_to_string z')) |> unstatic;
        recursive_print_id_up y;
        recursive_print_id_up y')
      else ();
      assert (phys_equal (TotalOrder.compare x x') 0);
      recalculate_internal_aux p m eval_stmts

  let rec check_aux (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> Core.ignore (Hashtbl.find_exn n.m.bb_time_table bb));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> Core.ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check_aux p)

  let check (p : prog) (n : meta node sd) : unit sd = if is_static then check_aux p (n |> unstatic) |> static else tt

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd)
      : unit sd =
    seq (recalculate_internal_aux p m eval_stmts) (fun _ -> check p n)
end)
