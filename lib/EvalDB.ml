open Ast
open Core
open EXN
open Eval
open Metric

module EVAL : Eval = struct
  let name = "DB"
  let counter : int ref = ref 0

  let count () =
    let ret = !counter in
    counter := !counter + 1;
    ret

  type meta = {
    bb_dirtied : (string, bool) Hashtbl.t;
    proc_inited : (string, unit) Hashtbl.t;
    recursive_proc_dirtied : (string, bool) Hashtbl.t;
  }

  let make_node (p : _ prog) ~name ~attr ~prop (children : meta node list) : meta node =
    ignore p;
    {
      id = count ();
      m =
        {
          bb_dirtied = Hashtbl.create (module String);
          proc_inited = Hashtbl.create (module String);
          recursive_proc_dirtied = Hashtbl.create (module String);
        };
      name;
      attr;
      prop;
      var = Hashtbl.create (module String);
      children;
      parent = None;
      prev = None;
      next = None;
    }

  let rec set_recursive_proc_dirtied (n : meta node) (proc_name : string) (m : metric) : unit =
    meta_write m n.id;
    if Hashtbl.find_exn n.m.recursive_proc_dirtied proc_name then ()
    else (
      Hashtbl.set n.m.recursive_proc_dirtied ~key:proc_name ~data:true;
      match n.parent with Some p -> set_recursive_proc_dirtied p proc_name m | None -> ())

  let bb_dirtied (n : meta node) (proc_name : string) (bb_name : string) (m : metric) : unit =
    if Option.is_some (Hashtbl.find n.m.proc_inited proc_name) then (
      Hashtbl.set n.m.bb_dirtied ~key:bb_name ~data:true;
      set_recursive_proc_dirtied n proc_name m)
    else meta_write m n.id

  let var_modified (p : _ prog) (n : meta node) (var_name : string) (m : metric) : unit =
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let down, up = get_bb_from_proc p proc_name in
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadVar (path, read_var_name) ->
                if String.equal var_name read_var_name then
                  List.iter (reversed_path path n) ~f:(fun dirtied_node -> bb_dirtied dirtied_node proc_name bb_name m)
                else ()
            | ReadHasPath _ -> () (*property being changed cannot change haspath status*)
            | ReadProp _ | ReadAttr _ -> ()
          in
          List.iter reads ~f:dirty
        in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let rec eval_stmt (p : _ prog) (n : meta node) (s : stmt) (m : metric) : unit =
    match s with
    | ChildrenCall proc_name ->
        List.iter n.children ~f:(fun new_node ->
            Hashtbl.add_exn new_node.m.proc_inited ~key:proc_name ~data:();
            Hashtbl.add_exn new_node.m.recursive_proc_dirtied ~key:proc_name ~data:false;
            eval_stmts p new_node (stmts_of_processed_proc p proc_name) m)
    | Write (path, prop_name, expr) ->
        write m n.id;
        let new_node = eval_path n path in
        let new_value = eval_expr n expr m in
        (match Hashtbl.find new_node.var prop_name with
        | None -> ()
        | Some value -> if equal_value value new_value then () else var_modified p new_node prop_name m);
        Hashtbl.set new_node.var ~key:prop_name ~data:new_value
    | BBCall bb_name ->
        Hashtbl.add_exn n.m.bb_dirtied ~key:bb_name ~data:false;
        eval_stmts p n (stmts_of_basic_block p bb_name) m

  and eval_stmts (p : _ prog) (n : meta node) (s : stmts) (m : metric) : unit =
    List.iter s ~f:(fun stmt -> eval_stmt p n stmt m)

  let eval (p : _ prog) (n : meta node) (m : metric) : unit =
    List.iter p.order ~f:(fun proc_name ->
        Hashtbl.add_exn n.m.recursive_proc_dirtied ~key:proc_name ~data:false;
        Hashtbl.add_exn n.m.proc_inited ~key:proc_name ~data:();
        eval_stmts p n (stmts_of_processed_proc p proc_name) m)

  let remove_children (p : _ prog) (x : meta node) (n : int) (m : metric) : unit =
    match List.split_n x.children n with
    | lhs, removed :: rhs ->
        x.children <- List.tl_exn x.children;
        (match removed.prev with Some prev -> prev.next <- removed.next | None -> ());
        (match removed.next with Some next -> next.prev <- removed.prev | None -> ());
        x.children <- List.append lhs rhs;
        Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
            let work bb_name =
              let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
              let reads = reads_of_stmts stmts in
              let dirty read =
                match read with
                | ReadVar (Self, _) | ReadHasPath Parent | ReadVar (Parent, _) -> ()
                | ReadHasPath First | ReadHasPath Last ->
                    if List.is_empty x.children then bb_dirtied x proc_name bb_name m else ()
                | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x proc_name bb_name m else ()
                | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x proc_name bb_name m else ()
                | ReadHasPath Prev | ReadVar (Prev, _) -> (
                    match removed.next with Some x -> bb_dirtied x proc_name bb_name m | None -> ())
                | ReadHasPath Next | ReadVar (Next, _) -> (
                    match removed.prev with Some x -> bb_dirtied x proc_name bb_name m | None -> ())
                | ReadProp _ | ReadAttr _ -> ()
                | _ -> raise (EXN (show_read read))
              in
              List.iter reads ~f:dirty
            in
            let down, up = get_bb_from_proc p proc_name in
            Option.iter down ~f:work;
            Option.iter up ~f:work)
    | _ -> panic "bad argument"

  let add_children (p : _ prog) (x : meta node) (y : meta node) (n : int) (m : metric) : unit =
    let lhs, rhs = List.split_n x.children n in
    x.children <- List.append lhs (y :: rhs);
    (match List.last lhs with
    | Some tl ->
        y.prev <- Some tl;
        tl.next <- Some y
    | None -> y.prev <- None);
    (match List.hd rhs with
    | Some hd ->
        y.next <- Some hd;
        hd.prev <- Some y
    | None -> y.next <- None);
    y.parent <- Some x;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        Hashtbl.add_exn y.m.recursive_proc_dirtied proc_name false;
        set_recursive_proc_dirtied y proc_name m;
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath Parent | ReadVar (Parent, _) -> ()
            | ReadHasPath First | ReadHasPath Last ->
                if phys_equal (List.length x.children) 1 then bb_dirtied x proc_name bb_name m else ()
            | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x proc_name bb_name m else ()
            | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x proc_name bb_name m else ()
            | ReadHasPath Prev | ReadVar (Prev, _) -> (
                match y.next with Some x -> bb_dirtied x proc_name bb_name m | None -> ())
            | ReadHasPath Next | ReadVar (Next, _) -> (
                match y.prev with Some x -> bb_dirtied x proc_name bb_name m | None -> ())
            | ReadVar (Self, _) | ReadProp _ | ReadAttr _ -> ()
            | _ -> raise (EXN (show_read read))
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let rec recalculate_aux (p : _ prog) (n : meta node) (proc_name : string) (down_name : string option)
      (up_name : string option) (m : metric) =
    (*print_endline "enter";*)
    meta_read m n.id;
    let rerun_if_dirty name =
      if Hashtbl.find_exn n.m.bb_dirtied name then (
        eval_stmts p n (stmts_of_basic_block p name) m;
        Hashtbl.set n.m.bb_dirtied ~key:name ~data:false)
      else ()
    in
    if Hashtbl.find_exn n.m.recursive_proc_dirtied proc_name then
      if Option.is_none (Hashtbl.find n.m.proc_inited proc_name) then (
        Hashtbl.add_exn n.m.proc_inited proc_name ();
        eval_stmts p n (stmts_of_processed_proc p proc_name) m)
      else (
        (match down_name with None -> () | Some dn -> rerun_if_dirty dn);
        List.iter n.children ~f:(fun n -> recalculate_aux p n proc_name down_name up_name m);
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
    List.iter p.vars ~f:(fun (VarDecl p) -> ignore (Hashtbl.find_exn n.var p));
    List.iter n.children ~f:(check p)

  let recalculate (p : _ prog) (n : meta node) (m : metric) : unit =
    List.iter p.order ~f:(fun proc_name ->
        let down, up = get_bb_from_proc p proc_name in
        recalculate_aux p n proc_name down up m);
    check p n

  let add_prop (p : _ prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m n.id;
    Hashtbl.add_exn n.prop name v;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in

          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
            | ReadProp read_name -> if String.equal name read_name then bb_dirtied n proc_name bb_name m else ()
            | _ -> raise (EXN (show_read read))
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let remove_prop (p : _ prog) (n : meta node) (name : string) (m : metric) : unit =
    write m n.id;
    ignore (Hashtbl.find_exn n.prop name);
    Hashtbl.remove n.prop name;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in

          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
            | ReadProp read_name -> if String.equal name read_name then bb_dirtied n proc_name bb_name m else ()
            | _ -> raise (EXN (show_read read))
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let add_attr (p : _ prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m n.id;
    Hashtbl.add_exn n.attr name v;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
            | ReadAttr read_name -> if String.equal name read_name then bb_dirtied n proc_name bb_name m else ()
            | _ -> raise (EXN (show_read read))
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let remove_attr (p : _ prog) (n : meta node) (name : string) (m : metric) : unit =
    write m n.id;
    ignore (Hashtbl.find_exn n.attr name);
    Hashtbl.remove n.attr name;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
            | ReadAttr read_name -> if String.equal name read_name then bb_dirtied n proc_name bb_name m else ()
            | _ -> raise (EXN (show_read read))
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)
end
