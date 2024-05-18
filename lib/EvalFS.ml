open Ast
open Core
open EXN
open Eval
open Metric

module EVAL : Eval = struct
  type meta = unit

  let make_node (p : _ prog) (children : meta node list) : meta node =
    ignore p;
    { id = count (); dict = Hashtbl.create (module String); children; parent = None; prev = None; next = None; m = () }

  let rec eval_stmt (p : _ prog) (n : meta node) (s : stmt) (m : metric) : unit =
    match s with
    | ChildrenCall proc_name ->
        List.iter n.children ~f:(fun n -> eval_stmts p n (stmts_of_processed_proc p proc_name) m)
    | Write (path, prop_name, expr) ->
        write m n.id;
        Hashtbl.add_exn (eval_path n path).dict ~key:prop_name ~data:(eval_expr n expr m)
        (*we use add_exn to make sure the same element isnt touched twice.
          however, this mean we have to reset the hashtable to rerun.*)
    | BBCall bb_name -> eval_stmts p n (stmts_of_basic_block p bb_name) m

  and eval_stmts (p : _ prog) (n : meta node) (s : stmts) (m : metric) : unit =
    List.iter s ~f:(fun stmt -> eval_stmt p n stmt m)

  let eval (p : _ prog) (n : meta node) (m : metric) =
    List.iter p.order ~f:(fun pass_name -> eval_stmts p n (stmts_of_processed_proc p pass_name) m)
end
