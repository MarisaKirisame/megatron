open Ast
open Core
open Metric
open Common
open SD

let rec rightmost (x : _ node) : _ node = match List.last x.children with Some x -> rightmost x | None -> x

exception ReRaise of string

let compile_type_expr ty =
  match resolve ty with
  | TInt -> "int"
  | TBool -> "bool"
  | TString -> "std::string"
  | TFloat -> "double"
  | _ -> panic (show_type_expr ty)

let rec recursive_print_id_up (n : _ node) : unit =
  print_endline (string_of_int n.id ^ List.to_string n.children ~f:(fun n -> string_of_int n.id));
  match n.parent with None -> () | Some p -> recursive_print_id_up p

module type EvalIn = sig
  include SD
  module SD : SD with type 'a sd = 'a sd

  val name : string

  type meta

  val meta_staged : string
  val fresh_meta : unit sd -> meta sd
  val remove_meta : meta sd -> unit sd
  val register_todo_proc : prog -> meta node sd -> string -> metric sd -> unit sd
  val bracket_call_bb : meta node sd -> string -> (unit -> unit sd) -> unit sd
  val bracket_call_proc : meta node sd -> string -> (unit -> unit sd) -> unit sd
  val bb_dirtied : meta node sd -> proc_name:string -> bb_name:string -> metric sd -> unit sd
  val recalculate_internal : prog -> meta node sd -> metric sd -> (meta node sd -> stmt list -> unit sd) -> unit sd
end

module type Eval = sig
  include EvalIn

  val make_node :
    name:string sd ->
    attr:(string, value) Hashtbl.t sd ->
    prop:(string, value) Hashtbl.t sd ->
    extern_id:int sd ->
    meta node list sd ->
    meta node sd

  val seqs : (unit -> unit sd) list -> unit sd
  val eval : prog -> meta node sd -> metric sd -> unit sd
  val add_children : prog -> meta node sd -> meta node sd -> int sd -> metric sd -> unit sd
  val remove_children : prog -> meta node sd -> int sd -> metric sd -> unit sd
  val add_prop : prog -> meta node sd -> string -> value sd -> metric sd -> unit sd
  val remove_prop : prog -> meta node sd -> string -> metric sd -> unit sd
  val add_attr : prog -> meta node sd -> string -> value sd -> metric sd -> unit sd
  val remove_attr : prog -> meta node sd -> string -> metric sd -> unit sd
  val recalculate : prog -> meta node sd -> metric sd -> unit sd
  val assert_node_value_equal : _ node sd -> _ node sd -> unit sd
end

module MakeEval (EI : EvalIn) : Eval with type 'a sd = 'a EI.sd = struct
  include EI

  let make_node ~(name : string sd) ~(attr : (string, value) Hashtbl.t sd) ~(prop : (string, value) Hashtbl.t sd)
      ~(extern_id : int sd) (children : EI.meta node list sd) : EI.meta node sd =
    if is_static then
      {
        id = count ();
        name = name |> unstatic;
        attr = attr |> unstatic;
        prop = prop |> unstatic;
        extern_id = extern_id |> unstatic;
        children = children |> unstatic;
        var = Hashtbl.create (module String);
        parent = None;
        next = None;
        prev = None;
        m = unstatic (EI.fresh_meta tt);
      }
      |> static
    else CApp (CPF "MakeNode", [undyn name; undyn attr; undyn prop; undyn extern_id; undyn children]) |> dyn

  let reversed_path (p : path) (n : 'a node sd) : 'a node list sd =
    match p with
    | Parent -> node_get_children n
    | Self -> list [ n ]
    | Prev -> node_get_next n |> option_to_list
    | Next -> node_get_prev n |> option_to_list
    | First -> (
        match (n |> unstatic).parent with
        | None -> [] |> static
        | Some np ->
            if phys_equal (List.hd_exn np.children).id (n |> unstatic).id then [ np ] |> static else [] |> static)
    | Last -> (
        match (n |> unstatic).parent with
        | None -> [] |> static
        | Some np ->
            if phys_equal (List.last_exn np.children).id (n |> unstatic).id then [ np ] |> static else [] |> static)

  let var_modified (p : prog) (n : meta node sd) (var_name : string) (m : metric sd) : unit sd =
    seqs
      (List.map (Hashtbl.to_alist p.procs) ~f:(fun (proc_name, _) _ ->
           let down, up = get_bb_from_proc p proc_name in
           let work bb_name : unit sd =
             let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
             let reads = reads_of_stmts stmts in
             let dirty read =
               match read with
               | ReadVar (path, read_var_name) ->
                   if String.equal var_name read_var_name then
                     list_iter (reversed_path path n) (fun dirtied_node ->
                         bb_dirtied dirtied_node ~proc_name ~bb_name m)
                   else tt
               | ReadHasPath _ -> tt (*property being changed cannot change haspath status*)
               | ReadProp _ | ReadAttr _ -> tt
             in
             seqs (List.map reads ~f:(fun r () -> dirty r))
           in
           seqs (List.map (List.append (Option.to_list down) (Option.to_list up)) ~f:(fun n () -> work n))))

  let rec eval_expr (n : 'meta node sd) (e : expr) (m : metric sd) : value sd =
    let recurse e = eval_expr n e m in
    match e with
    | Panic (_, x) ->
        panic
          (string_append (string "External: ")
             (string_concat (string " ") (List.map x ~f:(fun x -> show_value (recurse x)) |> list)))
    | HasProperty p -> is_some (hashtbl_find (node_get_prop n) (string p)) |> vbool
    | GetProperty p ->
        seq (read_metric m) (fun _ ->
            option_match
              (hashtbl_find (node_get_prop n) (string p))
              (fun x -> x)
              (fun _ ->
                panic
                  (string_append (string "cannot find property ")
                     (string_append (string p) (string_append (string " in ") (string_of_int (node_get_extern_id n)))))))
    | HasAttribute p -> vbool (is_some (hashtbl_find (node_get_attr n) (string p)))
    | GetAttribute p ->
        seq (read_metric m) (fun _ ->
            option_match
              (hashtbl_find (node_get_attr n) (string p))
              (fun x -> x)
              (fun _ ->
                panic
                  (string_append (string "cannot find property ")
                     (string_append (string p) (string_append (string " in ") (string_of_int (node_get_extern_id n)))))))
    | String s -> vstring (string s)
    | Int i -> vint (int i)
    | Float f -> vfloat (float f)
    | IfExpr (c, t, e) -> ite (bool_of_value (recurse c)) (fun _ -> recurse t) (fun _ -> recurse e)
    | HasPath p -> vbool (is_some (eval_path_opt n p))
    | Read (p, var_name) ->
        seq (read_metric m) (fun _ -> hashtbl_find (eval_path n p |> node_get_var) (string var_name) |> unsome)
    | And (x, y) -> ite (bool_of_value (recurse x)) (fun _ -> recurse y) (fun _ -> vbool (bool false))
    | Or (x, y) -> ite (bool_of_value (recurse x)) (fun _ -> vbool (bool true)) (fun _ -> recurse y)
    | GetName -> vstring (node_get_name n)
    | Bool x -> vbool (bool x)
    | Call (f, xs) -> eval_func f (List.map ~f:(fun v -> recurse v) xs)
  (*| _ -> panic ("unhandled case in eval_expr:" ^ show_expr e)*)

  let rec eval_stmt (p : prog) (n : meta node sd) (s : stmt) (m : metric sd) : unit sd =
    match s with
    | Write (prop_name, expr) ->
        seq (write_metric m) (fun _ ->
            let_ (eval_expr n expr m) (fun new_value ->
                seq
                  (option_match
                     (hashtbl_find (node_get_var n) (string prop_name))
                     (fun value ->
                       ite (equal_value value new_value) (fun _ -> tt) (fun _ -> var_modified p n prop_name m))
                     (fun () -> tt))
                  (fun _ -> hashtbl_set (node_get_var n) (string prop_name) new_value)))
    | BBCall bb_name -> bracket_call_bb n bb_name (fun _ -> eval_stmts p n (stmts_of_basic_block p bb_name) m)
    | ChildrenCall proc_name ->
        list_iter (node_get_children n) (fun new_node ->
            bracket_call_proc new_node proc_name (fun _ ->
                eval_stmts p new_node (stmts_of_processed_proc p proc_name) m))

  and eval_stmts (p : prog) (n : meta node sd) (s : stmts) (m : metric sd) : unit sd =
    seqs (List.map s ~f:(fun stmt _ -> eval_stmt p n stmt m))

  let eval (p : prog) (n : meta node sd) (m : metric sd) : unit sd =
    static
      (List.iter p.order ~f:(fun proc_name ->
           bracket_call_proc n proc_name (fun _ -> eval_stmts p n (stmts_of_processed_proc p proc_name) m) |> unstatic))

  let remove_children (p : prog) (x : meta node sd) (n : int sd) (m : metric sd) : unit sd =
    match List.split_n (x |> unstatic).children (n |> unstatic) with
    | lhs, removed :: rhs ->
        (match removed.prev with Some prev -> prev.next <- removed.next | None -> ());
        (match removed.next with Some next -> next.prev <- removed.prev | None -> ());
        remove_meta (removed.m |> static) |> unstatic;
        (x |> unstatic).children <- List.append lhs rhs;
        Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
            let work bb_name =
              let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
              let reads = reads_of_stmts stmts in
              let dirty read =
                match read with
                | ReadVar (Self, _) | ReadHasPath Parent | ReadVar (Parent, _) -> ()
                | ReadHasPath First | ReadHasPath Last ->
                    if List.is_empty (x |> unstatic).children then bb_dirtied x ~proc_name ~bb_name m |> unstatic
                    else ()
                | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x ~proc_name ~bb_name m |> unstatic else ()
                | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x ~proc_name ~bb_name m |> unstatic else ()
                | ReadHasPath Prev | ReadVar (Prev, _) -> (
                    match removed.next with
                    | Some x -> bb_dirtied (x |> static) ~proc_name ~bb_name m |> unstatic
                    | None -> ())
                | ReadHasPath Next | ReadVar (Next, _) -> (
                    match removed.prev with
                    | Some x -> bb_dirtied (x |> static) ~proc_name ~bb_name m |> unstatic
                    | None -> ())
                | ReadProp _ | ReadAttr _ -> ()
                | _ -> raise (EXN (show_read read))
              in
              List.iter reads ~f:dirty
            in
            let down, up = get_bb_from_proc p proc_name in
            Option.iter down ~f:work;
            Option.iter up ~f:work);
        tt
    | _ -> panic (string "bad argument")

  let add_children (p : prog) (x : meta node sd) (y : meta node sd) (n : int sd) (m : metric sd) : unit sd =
    let lhs, rhs = List.split_n (x |> unstatic).children (n |> unstatic) in
    (x |> unstatic).children <- List.append lhs (unstatic y :: rhs);
    (match List.last lhs with
    | Some tl ->
        (y |> unstatic).prev <- Some tl;
        tl.next <- Some (y |> unstatic)
    | None -> (y |> unstatic).prev <- None);
    (match List.hd rhs with
    | Some hd ->
        (y |> unstatic).next <- Some hd;
        hd.prev <- Some (y |> unstatic)
    | None -> (y |> unstatic).next <- None);
    (y |> unstatic).parent <- Some (x |> unstatic);
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath Parent | ReadVar (Parent, _) -> ()
            | ReadHasPath First | ReadHasPath Last ->
                if phys_equal (List.length (x |> unstatic).children) 1 then
                  bb_dirtied x ~proc_name ~bb_name m |> unstatic
                else ()
            | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x ~proc_name ~bb_name m |> unstatic else ()
            | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x ~proc_name ~bb_name m |> unstatic else ()
            | ReadHasPath Prev | ReadVar (Prev, _) -> (
                match (y |> unstatic).next with
                | Some x -> bb_dirtied (x |> static) ~proc_name ~bb_name m |> unstatic
                | None -> ())
            | ReadHasPath Next | ReadVar (Next, _) -> (
                match (y |> unstatic).prev with
                | Some x -> bb_dirtied (x |> static) ~proc_name ~bb_name m |> unstatic
                | None -> ())
            | ReadVar (Self, _) | ReadProp _ | ReadAttr _ -> ()
            | _ -> panic (string (show_read read)) |> unstatic
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        register_todo_proc p y proc_name m |> unstatic;
        Option.iter down ~f:work;
        Option.iter up ~f:work)
    |> static
  (*print_endline ("add: " ^ string_of_int y.id);*)

  let add_prop (p : prog) (n : meta node sd) (name : string) (v : value sd) (m : metric sd) : unit sd =
    write_metric m |> unstatic;
    Hashtbl.add_exn (n |> unstatic).prop ~key:name ~data:(v |> unstatic);
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in

          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
            | ReadProp read_name ->
                if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m |> unstatic else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)
    |> static

  let remove_prop (p : prog) (n : meta node sd) (name : string) (m : metric sd) : unit sd =
    write_metric m |> unstatic;
    ignore (Hashtbl.find_exn (n |> unstatic).prop name);
    Hashtbl.remove (n |> unstatic).prop name;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in

          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
            | ReadProp read_name ->
                if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m |> unstatic else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)
    |> static

  let add_attr (p : prog) (n : meta node sd) (name : string) (v : value sd) (m : metric sd) : unit sd =
    write_metric m |> unstatic;
    Hashtbl.add_exn (n |> unstatic).attr ~key:name ~data:(v |> unstatic);
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
            | ReadAttr read_name ->
                if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m |> unstatic else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)
    |> static

  let remove_attr (p : prog) (n : meta node sd) (name : string) (m : metric sd) : unit sd =
    write_metric m |> unstatic;
    ignore (Hashtbl.find_exn (n |> unstatic).attr name);
    Hashtbl.remove (n |> unstatic).attr name;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
            | ReadAttr read_name ->
                if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m |> unstatic else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)
    |> static

  let recalculate (p : prog) (n : meta node sd) (m : metric sd) : unit sd =
    recalculate_internal p n m (fun n stmts -> eval_stmts p n stmts m)

  let rec assert_node_value_equal (l : _ node sd) (r : _ node sd) : unit sd =
    assert (Int.equal (Hashtbl.length (node_get_var l |> unstatic)) (Hashtbl.length (node_get_var r |> unstatic)));
    assert (Int.equal (List.length (node_get_children l |> unstatic)) (List.length (node_get_children l |> unstatic)));
    List.iter2_exn
      (node_get_children l |> unstatic)
      (node_get_children r |> unstatic)
      ~f:(fun l r -> assert_node_value_equal (l |> static) (r |> static) |> unstatic);
    if
      Hashtbl.equal
        (fun x y -> equal_value (x |> static) (y |> static) |> unstatic)
        (node_get_var l |> unstatic)
        (node_get_var r |> unstatic)
    then ()
    else (
      Hashtbl.iter_keys
        (node_get_var l |> unstatic)
        ~f:(fun name ->
          let lv = Hashtbl.find_exn (node_get_var l |> unstatic) name |> static in
          let rv = Hashtbl.find_exn (node_get_var r |> unstatic) name |> static in
          ite (equal_value lv rv)
            (fun _ -> tt)
            (fun _ -> print_endline (string_append (string name) (string_append (string_of_value lv) (string_of_value rv))))
          |> unstatic);
      print_endline (string_append (string_of_int (node_get_extern_id l)) (string " bad!")) |> unstatic;
      recursive_print_id_up (l |> unstatic));
    assert (
      Hashtbl.equal
        (fun x y -> equal_value (x |> static) (y |> static) |> unstatic)
        (node_get_var l |> unstatic)
        (node_get_var r |> unstatic))
    |> static
end
