open Ast
open Core
open Eval
open Metric
open Common
open SD

module EVAL (SD : SD) = MakeEval (struct
  include SD
  module SD = SD

  let name = "FS"

  type meta = unit

  let meta_defs _ = ""
  let fresh_meta u = tt
  let remove_meta x = x
  let bracket_call_bb _ _ f _ = f ()
  let bracket_call_proc _ _ f _ = f ()
  let bb_dirtied_internal _ _ ~proc_name ~bb_name _ = tt
  let bb_dirtied_external = bb_dirtied_internal
  let register_todo_proc _ _ _ _ = tt

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) eval_stmts : unit sd =
    seqs (List.map p.order ~f:(fun pass_name _ -> eval_stmts n (stmts_of_processed_proc p pass_name)))
end)
