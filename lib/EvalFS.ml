open Ast
open Core
open EXN
open Eval

let make_node (children: unit node list) (p: _ prog): unit node = 
  ignore p; {
  id = count();
  dict = Hashtbl.create (module String);
  children = children; 
  parent = None;
  prev = None;
  next = None;
  m = ();
}

let rec eval_stmt (p: _ prog) (n: unit node) (s: stmt): unit = 
  match s with
  | ChildrenCall(proc_name) -> List.iter n.children ~f:(fun n -> eval_stmts p n (stmts_of_processed_proc p proc_name))
  | Write(path, prop_name, expr) -> 
      Hashtbl.add_exn (eval_path n path).dict ~key:prop_name ~data:(eval_expr n expr)
      (*we use add_exn to make sure the same element isnt touched twice.
        however, this mean we have to reset the hashtable to rerun.*)
  | BBCall(bb_name) -> eval_stmts p n (stmts_of_basic_block p bb_name)
and eval_stmts (p: _ prog) (n: unit node) (s: stmts): unit = List.iter s (eval_stmt p n)

let eval (p: _ prog) (n: unit node) = 
  List.iter p.order ~f:(fun pass_name -> eval_stmts p n (stmts_of_processed_proc p pass_name))
