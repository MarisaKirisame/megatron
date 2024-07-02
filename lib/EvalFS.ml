open Ast
open Core
open EXN
open Eval
open Metric

module EVAL : Eval = MakeEval (struct
  let name = "FS"

  type meta = unit

  let fresh_meta () = ()
  let bracket_call_bb _ _ f = f ()
  let bracket_call_proc _ _ f = f ()
  let bb_dirtied _ ~proc_name ~bb_name _ = ()
  let remove_meta () = ()
  let register_todo_proc _ _ _ _ = ()

  let recalculate_internal (p : prog) (n : meta node) (m : metric) eval_stmts : unit =
    List.iter p.order ~f:(fun pass_name -> eval_stmts n (stmts_of_processed_proc p pass_name))
end)
