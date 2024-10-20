open Ast
open Core
open Eval
open Metric
open Common
open SD

module EVAL (SD : SD) = MakeEval (struct
  include SD
  module SD = SD

  let name = "NE"

  type meta = { bb_dirtied : (string, bool) Hashtbl.t; proc_inited : (string, unit) Hashtbl.t }

  let meta_get_bb_dirtied (n : meta sd) =
    if is_static then (n |> unstatic).bb_dirtied |> static else CGetMember (n |> undyn, "BBDirtied") |> dyn

  let meta_get_proc_inited (n : meta sd) =
    if is_static then (n |> unstatic).proc_inited |> static else CGetMember (n |> undyn, "ProcInited") |> dyn

  let meta_defs p =
    String.concat
      (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (bb, _) ->
           "bool " ^ bb ^ "_has_bb_dirtied = false;" ^ "bool " ^ bb ^ "_bb_dirtied;"))
      ~sep:""
    ^ String.concat
        (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc, _) -> "bool " ^ proc ^ "_proc_inited = false;"))
        ~sep:""

  let fresh_meta _ =
    { bb_dirtied = Hashtbl.create (module String); proc_inited = Hashtbl.create (module String) } |> static

  let remove_meta _ = tt

  let bb_dirtied_internal p (n : meta node sd) ~(proc_name : string) ~(bb_name : string) (m : metric sd) : unit sd =
    ite
      (is_some (hashtbl_find (meta_get_proc_inited (node_get_meta n)) (string proc_name)))
      (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool true))
      (fun _ -> meta_write_metric m)

  let bb_dirtied_external = bb_dirtied_internal
  let register_todo_proc (_ : prog) (y : meta node sd) (proc_name : string) (m : metric sd) : unit sd = tt

  let bracket_call_bb (n : meta node sd) bb_name f m =
    seqs
      [
        (fun _ ->
          record_overhead m (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string bb_name) (bool false)));
        (fun _ -> f ());
      ]

  let bracket_call_proc (n : meta node sd) proc_name f m =
    seqs
      [
        (fun _ ->
          record_overhead m (fun _ -> hashtbl_add_exn (meta_get_proc_inited (node_get_meta n)) (string proc_name) tt));
        (fun _ -> f ());
      ]

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
                       (fun _ -> stop_record_overhead m);
                       (fun _ -> eval_stmts n (stmts_of_basic_block p name));
                       (fun _ -> start_record_overhead m);
                       (fun _ -> hashtbl_set (meta_get_bb_dirtied (node_get_meta n)) (string name) (bool false));
                     ])
                 (fun _ -> tt)
             in
             seqs
               [
                 (fun _ -> meta_read_metric m);
                 (fun _ ->
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
                             (fun _ -> hashtbl_add_exn (meta_get_proc_inited (node_get_meta n)) (string proc_name) tt);
                             (fun _ -> stop_record_overhead m);
                             (fun _ -> eval_stmts n (stmts_of_processed_proc p proc_name));
                             (fun _ -> start_record_overhead m);
                           ])) (fun _ -> tt));
               ])))

  let recalculate_internal_aux_hash : (string, (meta node -> unit) sd) Hashtbl.t = Hashtbl.create (module String)

  let recalculate_internal_aux (p : prog) (n : meta node sd) (proc_name : string) (down_name : string)
      (up_name : string) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd) : unit sd =
    if Option.is_none (Hashtbl.find recalculate_internal_aux_hash proc_name) then
      Hashtbl.add_exn recalculate_internal_aux_hash ~key:proc_name
        ~data:(recalculate_internal_aux_code p proc_name down_name up_name eval_stmts m);
    app (Hashtbl.find_exn recalculate_internal_aux_hash proc_name) n

  let rec check (p : prog) (n : meta node) : unit =
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc, _)) -> Hashtbl.find_exn n.m.proc_inited proc);
    Hashtbl.iter p.bbs ~f:(fun (BasicBlock (bb, _)) -> assert (not (Hashtbl.find_exn n.m.bb_dirtied bb)));
    List.iter p.vars ~f:(fun (VarDecl (p, _)) -> Core.ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check p)

  let recalculate_internal (p : prog) (n : meta node sd) (m : metric sd) (eval_stmts : meta node sd -> stmts -> unit sd)
      : unit sd =
    seqs
      [
        (fun _ -> start_record_overhead m);
        (fun _ ->
          seq
            (seqs
               (List.map p.order ~f:(fun proc_name _ ->
                    let down, up = get_bb_from_proc p proc_name in
                    recalculate_internal_aux p n proc_name down up m eval_stmts)))
            (fun _ -> if is_static then check p (n |> unstatic) |> static else tt));
        (fun _ -> stop_record_overhead m);
      ]
end)
