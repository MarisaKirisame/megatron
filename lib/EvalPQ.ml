open Ast
open Core
open Eval
open Metric
open Common
open SD

module EVAL (SD : SD) = MakeEval (struct
  include SD
  module SD = SD

  let name = "PQ"
  let current_time = ref (TotalOrder.create ())

  type proc_time = Open of TotalOrder.t | Close of TotalOrder.t * TotalOrder.t

  type meta = {
    (*time of bbs*)
    bb_time_table : (string, TotalOrder.t) Hashtbl.t;
    proc_time_table : (string, proc_time) Hashtbl.t;
    mutable alive : bool;
  }

  let meta_staged = "???"

  let fresh_meta u =
    { bb_time_table = Hashtbl.create (module String); proc_time_table = Hashtbl.create (module String); alive = true }

  let remove_meta m = m.alive <- false

  type recompute_func = RecomputeBB of string | RecomputeProc of string

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

  let queue_push x y z m : unit =
    let result = PriorityQueue.add queue (x, y, z) in
    ignore result;
    (*print_endline ("pushed " ^ (string_of_int y.id) ^ " " ^ string_of_bool result);*)
    meta_write m

  let queue_force_push x y z m : unit =
    meta_write m;
    if PriorityQueue.add queue (x, y, z) then () else panic "push false"

  let register_todo_proc p y proc_name m =
    match y.parent with
    | Some x ->
        if Option.is_some (Hashtbl.find x.m.proc_time_table proc_name) then (
          let down, up = get_bb_from_proc p proc_name in
          ignore up;
          let time : TotalOrder.t =
            match y.prev with
            | None -> TotalOrder.add_next (Hashtbl.find_exn x.m.bb_time_table (Option.value_exn down))
            | Some x -> (
                match Hashtbl.find_exn x.m.proc_time_table proc_name with
                | Open t -> TotalOrder.add_next t
                | Close (_, t) -> TotalOrder.add_next t)
          in
          (*print_endline ("pushed " ^ string_of_int y.id ^ "." ^ proc);*)
          Hashtbl.add_exn y.m.proc_time_table ~key:proc_name ~data:(Open time);
          queue_force_push time y (RecomputeProc proc_name) m)
        else () (*otherwise this proc is already in the queue with y's ancestor.*)
    | None -> panic "dangling node"

  let bb_dirtied (n : meta node) ~(proc_name : string) ~(bb_name : string) (m : metric) : unit =
    ignore proc_name;
    match Hashtbl.find n.m.bb_time_table bb_name with
    | Some order -> queue_push order n (RecomputeBB bb_name) m
    | None -> ()

  let bracket_call_bb n bb_name f =
    current_time := TotalOrder.add_next !current_time;
    Hashtbl.add_exn n.m.bb_time_table ~key:bb_name ~data:!current_time;
    f ()

  let bracket_call_proc n proc_name f =
    current_time := TotalOrder.add_next !current_time;
    let open_time = !current_time in
    f ();
    Hashtbl.add_exn n.m.proc_time_table ~key:proc_name ~data:(Close (open_time, !current_time))

  let rec recalculate_internal_aux (p : prog) (m : metric) eval_stmts =
    if queue_isempty () then ()
    else
      let x, y, z = queue_peek () in
      meta_read m;
      m.queue_size_acc <- m.queue_size_acc + queue_size ();
      (*(match z with RecomputeProc z | RecomputeBB z -> print_endline ("popped " ^ string_of_int y.id ^ "." ^ z); recursive_print_id_up y);*)
      if y.m.alive then (
        match z with
        | RecomputeBB z -> eval_stmts y (stmts_of_basic_block p z)
        | RecomputeProc z ->
            let old_time = !current_time in
            current_time := x;
            eval_stmts y (stmts_of_processed_proc p z);
            Hashtbl.set y.m.proc_time_table ~key:z ~data:(Close (x, !current_time));
            current_time := old_time)
      else ();
      let x', y', z' = queue_pop () in
      ignore (y', z');
      if not (phys_equal (TotalOrder.compare x x') 0) then (
        print_endline ("peek " ^ string_of_int y.id ^ "." ^ recompute_to_string z) |> unstatic;
        print_endline ("pop  " ^ string_of_int y'.id ^ "." ^ recompute_to_string z') |> unstatic;
        recursive_print_id_up y;
        recursive_print_id_up y')
      else ();
      assert (phys_equal (TotalOrder.compare x x') 0);
      recalculate_internal_aux p m eval_stmts

  let rec check (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> ignore (Hashtbl.find_exn n.m.bb_time_table bb));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check p)

  let recalculate_internal (p : prog) (n : meta node) (m : metric) eval_stmts =
    recalculate_internal_aux p m eval_stmts;
    check p n
end)
