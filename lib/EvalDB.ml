open Ast
open Core
open Eval
open Metric

module EVAL : Eval = MakeEval (struct
  let name = "DB"

  type meta = {
    bb_dirtied : (string, bool) Hashtbl.t;
    proc_inited : (string, unit) Hashtbl.t;
    recursive_proc_dirtied : (string, bool) Hashtbl.t;
  }

  let fresh_meta () =
    {
      bb_dirtied = Hashtbl.create (module String);
      proc_inited = Hashtbl.create (module String);
      recursive_proc_dirtied = Hashtbl.create (module String);
    }

  let remove_meta _ = ()

  let rec set_recursive_proc_dirtied (n : meta node) (proc_name : string) (m : metric) : unit =
    meta_write m n.id;
    if Hashtbl.find_exn n.m.recursive_proc_dirtied proc_name then ()
    else (
      Hashtbl.set n.m.recursive_proc_dirtied ~key:proc_name ~data:true;
      match n.parent with Some p -> set_recursive_proc_dirtied p proc_name m | None -> ())

  let bb_dirtied (n : meta node) ~(proc_name : string) ~(bb_name : string) (m : metric) : unit =
    if Option.is_some (Hashtbl.find n.m.proc_inited proc_name) then (
      Hashtbl.set n.m.bb_dirtied ~key:bb_name ~data:true;
      set_recursive_proc_dirtied n proc_name m)
    else meta_write m n.id

  let register_todo_proc _ y proc_name m =
    Hashtbl.add_exn y.m.recursive_proc_dirtied ~key:proc_name ~data:false;
    set_recursive_proc_dirtied y proc_name m

  let bracket_call_bb n bb_name f =
    Hashtbl.add_exn n.m.bb_dirtied ~key:bb_name ~data:false;
    f ()

  let bracket_call_proc n proc_name f =
    Hashtbl.add_exn n.m.proc_inited ~key:proc_name ~data:();
    Hashtbl.add_exn n.m.recursive_proc_dirtied ~key:proc_name ~data:false;
    f ()

  let rec recalculate_internal_aux (p : _ prog) (n : meta node) (proc_name : string) (down_name : string option)
      (up_name : string option) (m : metric) eval_stmts =
    (*print_endline "enter";*)
    meta_read m n.id;
    let rerun_if_dirty name =
      if Hashtbl.find_exn n.m.bb_dirtied name then (
        eval_stmts n (stmts_of_basic_block p name);
        Hashtbl.set n.m.bb_dirtied ~key:name ~data:false)
      else ()
    in
    if Hashtbl.find_exn n.m.recursive_proc_dirtied proc_name then
      if Option.is_none (Hashtbl.find n.m.proc_inited proc_name) then (
        Hashtbl.add_exn n.m.proc_inited ~key:proc_name ~data:();
        eval_stmts n (stmts_of_processed_proc p proc_name))
      else (
        (match down_name with None -> () | Some dn -> rerun_if_dirty dn);
        List.iter n.children ~f:(fun n -> recalculate_internal_aux p n proc_name down_name up_name m eval_stmts);
        match up_name with None -> () | Some un -> rerun_if_dirty un)
    else ();
    Hashtbl.set n.m.recursive_proc_dirtied ~key:proc_name ~data:false;
    (*print_endline "exit";*)
    ()

  let rec check (p : _ prog) (n : meta node) : unit =
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc, _)) ->
        Hashtbl.find_exn n.m.proc_inited proc;
        assert (not (Hashtbl.find_exn n.m.recursive_proc_dirtied proc)));
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> assert (not (Hashtbl.find_exn n.m.bb_dirtied bb)));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check p)

  let recalculate_internal (p : _ prog) (n : meta node) (m : metric) eval_stmts : unit =
    List.iter p.order ~f:(fun proc_name ->
        let down, up = get_bb_from_proc p proc_name in
        recalculate_internal_aux p n proc_name down up m eval_stmts);
    check p n
end)
