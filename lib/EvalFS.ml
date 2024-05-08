open Ast
open Core
open EXN
open Eval

let make_node (children: unit node list) (p: prog): unit node = 
  ignore p; {
  dict = Hashtbl.create (module String);
  children = children; 
  parent = None;
  prev = None;
  next = None;
  m = ();
}

let rec eval_stmt (p: prog) (n: unit node) (s: stmt) = 
  let recurse s = eval_stmt p n s in
  match s with
  | TailCall(path, proc_name) -> eval_stmt p (eval_path n path) (stmt_of_proc_decl (Hashtbl.find_exn p.procs proc_name))
  | Seq(x, y) -> recurse x; recurse y
  | Write(path, prop_name, expr) -> 
      Hashtbl.add_exn (eval_path n path).dict ~key:prop_name ~data:(eval_expr n expr) 
      (*we use add_exn to make sure the same element isnt touched twice.
        however, this mean we have to reset the hashtable to rerun.*)
  | IfStmt(i, t, e) -> if bool_of_value (eval_expr n i) then recurse t else recurse e
  | Skip -> ()
  | _ -> raise (EXN (show_stmt s))

let eval (p: prog) (n: unit node) = eval_stmt p n (stmt_of_proc_decl (Hashtbl.find_exn p.procs "main"))
