open Ast
open Core
open EXN
open Eval
open Metric

module EVAL : Eval = struct
  let name = "FS"

  type meta = unit

  let make_node (p : _ prog) ~name ~attr ~prop ~extern_id (children : meta node list) : meta node =
    ignore p;
    {
      id = count ();
      name;
      attr;
      prop;
      extern_id;
      var = Hashtbl.create (module String);
      children;
      parent = None;
      prev = None;
      next = None;
      m = ();
    }

  let rec eval_stmt (p : _ prog) (n : meta node) (s : stmt) (m : metric) : unit =
    match s with
    | ChildrenCall proc_name ->
        List.iter n.children ~f:(fun n -> eval_stmts p n (stmts_of_processed_proc p proc_name) m)
    | Write (path, prop_name, expr) ->
        write m n.id;
        Hashtbl.add_exn (eval_path n path).var ~key:prop_name ~data:(eval_expr n expr m)
        (*we use add_exn to make sure the same element isnt touched twice.
          however, this mean we have to reset the hashtable to rerun.*)
    | BBCall bb_name -> eval_stmts p n (stmts_of_basic_block p bb_name) m

  and eval_stmts (p : _ prog) (n : meta node) (s : stmts) (m : metric) : unit =
    List.iter s ~f:(fun stmt -> eval_stmt p n stmt m)

  let eval (p : _ prog) (n : meta node) (m : metric) =
    List.iter p.order ~f:(fun pass_name -> eval_stmts p n (stmts_of_processed_proc p pass_name) m)

  let remove_children (p : _ prog) (x : meta node) (n : int) (m : metric) : unit =
    match List.split_n x.children n with
    | lhs, removed :: rhs ->
        x.children <- List.tl_exn x.children;
        (match removed.prev with Some prev -> prev.next <- removed.next | None -> ());
        (match removed.next with Some next -> next.prev <- removed.prev | None -> ());
        x.children <- List.append lhs rhs
    | _ -> panic "bad argument"

  let add_children (_ : _ prog) (x : meta node) (y : meta node) (n : int) (m : metric) : unit =
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
    y.parent <- Some x

  let rec remove_var (n : meta node) : unit =
    Hashtbl.clear n.var;
    List.iter n.children ~f:remove_var

  let recalculate (p : _ prog) (n : meta node) (m : metric) : unit =
    remove_var n;
    eval p n m

  let add_prop (_ : _ prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m n.id;
    Hashtbl.add_exn n.prop name v

  let remove_prop (_ : _ prog) (n : meta node) (name : string) (m : metric) : unit =
    write m n.id;
    ignore (Hashtbl.find_exn n.prop name);
    Hashtbl.remove n.prop name

  let add_attr (_ : _ prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m n.id;
    Hashtbl.add_exn n.attr name v

  let remove_attr (_ : _ prog) (n : meta node) (name : string) (m : metric) : unit =
    write m n.id;
    ignore (Hashtbl.find_exn n.attr name);
    Hashtbl.remove n.attr name
end
