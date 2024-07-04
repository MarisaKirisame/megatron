open Ast
open Core
open Eval
open Metric
open Common
open SD

module EVAL (SD : SD) = MakeEval (struct
  include SD
  module SD = SD

  let name = "DB"

  type meta = {
    bb_dirtied : (string, bool) Hashtbl.t;
    proc_inited : (string, unit) Hashtbl.t;
    recursive_proc_dirtied : (string, bool) Hashtbl.t;
  }

  let meta_staged = "???"

  let fresh_meta u =
    {
      bb_dirtied = Hashtbl.create (module String);
      proc_inited = Hashtbl.create (module String);
      recursive_proc_dirtied = Hashtbl.create (module String);
    } |> static

  let remove_meta _ = tt

  let rec set_recursive_proc_dirtied (n : meta node) (proc_name : string) (m : metric) : unit =
    meta_write m;
    if Hashtbl.find_exn n.m.recursive_proc_dirtied proc_name then ()
    else (
      Hashtbl.set n.m.recursive_proc_dirtied ~key:proc_name ~data:true;
      match n.parent with Some p -> set_recursive_proc_dirtied p proc_name m | None -> ())

  let bb_dirtied (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    if Option.is_some (Hashtbl.find (n |> unstatic).m.proc_inited proc_name) then (
      Hashtbl.set (n |> unstatic).m.bb_dirtied ~key:bb_name ~data:true;
      set_recursive_proc_dirtied (n |> unstatic) proc_name (m |> unstatic)) |> static
    else meta_write (m |> unstatic) |> static

  let register_todo_proc (p : prog) (y : meta node sd) (proc_name : string) (m : metric sd) : unit sd =
    Hashtbl.add_exn (y |> unstatic).m.recursive_proc_dirtied ~key:proc_name ~data:false;
    set_recursive_proc_dirtied (y |> unstatic) proc_name (m |> unstatic) |> static

  let bracket_call_bb (n : meta node sd) bb_name f =
    Hashtbl.add_exn (n |> unstatic).m.bb_dirtied ~key:bb_name ~data:false;
    f ()

  let bracket_call_proc (n : meta node sd) proc_name f =
    Hashtbl.add_exn (n |> unstatic).m.proc_inited ~key:proc_name ~data:();
    Hashtbl.add_exn (n |> unstatic).m.recursive_proc_dirtied ~key:proc_name ~data:false;
    f ()

  let rec recalculate_internal_aux (p : prog) (n : meta node sd) (proc_name : string) (down_name : string option)
      (up_name : string option) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd =
    (*print_endline "enter";*)
    meta_read (m |> unstatic);
    let rerun_if_dirty name =
      if Hashtbl.find_exn (n |> unstatic).m.bb_dirtied name then (
        eval_stmts n (stmts_of_basic_block p name) |> unstatic;
        Hashtbl.set (n |> unstatic).m.bb_dirtied ~key:name ~data:false)
      else ()
    in
    if Hashtbl.find_exn (n |> unstatic).m.recursive_proc_dirtied proc_name then
      if Option.is_none (Hashtbl.find (n |> unstatic).m.proc_inited proc_name) then (
        Hashtbl.add_exn (n |> unstatic).m.proc_inited ~key:proc_name ~data:();
        eval_stmts n (stmts_of_processed_proc p proc_name) |> unstatic)
      else (
        (match down_name with None -> () | Some dn -> rerun_if_dirty dn);
        List.iter (n |> unstatic).children ~f:(fun n -> recalculate_internal_aux p (n |> static) proc_name down_name up_name m eval_stmts |> unstatic);
        match up_name with None -> () | Some un -> rerun_if_dirty un)
    else ();
    Hashtbl.set (n |> unstatic).m.recursive_proc_dirtied ~key:proc_name ~data:false;
    tt

  let rec check (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc, _)) ->
        Hashtbl.find_exn n.m.proc_inited proc;
        assert (not (Hashtbl.find_exn n.m.recursive_proc_dirtied proc)));
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> assert (not (Hashtbl.find_exn n.m.bb_dirtied bb)));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check p)

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd =
    List.iter p.order ~f:(fun proc_name ->
        let down, up = get_bb_from_proc p proc_name in
        recalculate_internal_aux p n proc_name down up m eval_stmts |> unstatic);
    check p (n |> unstatic) |> static
end)
