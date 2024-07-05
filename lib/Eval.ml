open Ast
open Core
open Metric
open Common
open SD

let rec rightmost (x : _ node) : _ node = match List.last x.children with Some x -> rightmost x | None -> x

let equal_value x y : bool =
  match (x, y) with
  | VString x, VString y -> String.equal x y
  | VInt x, VInt y -> Int.equal x y
  | VBool x, VBool y -> Bool.equal x y
  | VFloat x, VFloat y -> (Float.is_nan x && Float.is_nan y) || Float.equal x y
  | _ -> panic ("unhandled case in equal_value: " ^ show_value x ^ " " ^ show_value y)

let has_suffix s sfx =
  String.length s >= String.length sfx
  && String.equal sfx (String.sub s ~pos:(String.length s - String.length sfx) ~len:(String.length sfx))

let has_prefix s pfx =
  String.length s >= String.length pfx && String.equal pfx (String.sub s ~pos:0 ~len:(String.length pfx))

let strip_prefix s pfx =
  if has_prefix s pfx then String.sub s ~pos:(String.length pfx) ~len:(String.length s - String.length pfx) else panic s

let strip_suffix s sfx =
  assert (has_suffix s sfx);
  String.sub s ~pos:0 ~len:(String.length s - String.length sfx)

let eval_func (f : func) (xs : value list) =
  match (f, xs) with
  | Lt, [ VInt lhs; VInt rhs ] -> VBool (lhs < rhs)
  | Gt, [ VInt lhs; VInt rhs ] -> VBool (lhs > rhs)
  | Eq, [ lhs; rhs ] -> VBool (equal_value lhs rhs)
  | Neq, [ lhs; rhs ] -> VBool (not (equal_value lhs rhs))
  | Plus, [ VInt lhs; VInt rhs ] -> VInt (lhs + rhs)
  | Plus, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs +. rhs)
  | Mult, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs *. rhs)
  | Minus, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs -. rhs)
  | Gt, [ VFloat lhs; VFloat rhs ] -> VBool (Float.( >. ) lhs rhs)
  | Div, [ VFloat lhs; VFloat rhs ] -> VFloat (lhs /. rhs)
  | Max, [ VFloat lhs; VFloat rhs ] -> VFloat (Float.max lhs rhs)
  | HasSuffix, [ VString s; VString sfx ] -> VBool (has_suffix s sfx)
  | HasPrefix, [ VString s; VString sfx ] -> VBool (has_prefix s sfx)
  | StripSuffix, [ VString s; VString sfx ] -> VString (strip_suffix s sfx)
  | StripPrefix, [ VString s; VString sfx ] -> VString (strip_prefix s sfx)
  | Not, [ VBool x ] -> VBool (not x)
  | StringToFloat, [ VString str ] -> (
      match float_of_string_opt str with Some x -> VFloat x | None -> panic ("StringToFloat failed: " ^ str))
  | StringToInt, [ VString str ] -> (
      match int_of_string_opt str with Some x -> VInt x | None -> panic ("StringToInt failed: " ^ str))
  | StringIsFloat, [ VString str ] -> VBool (Option.is_some (float_of_string_opt str))
  | IntToFloat, [ VInt x ] -> VFloat (float_of_int x)
  | NthBySep, [ VString s; VString sep; VInt nth ] ->
      assert (Int.equal (String.length sep) 1);
      VString (List.nth_exn (String.split s ~on:(String.get sep 0)) nth)
  | _ -> panic (show_func f ^ List.to_string ~f:show_value xs)

let func_name_compiled f =
  match f with
  | StringToFloat -> "string_to_float"
  | Plus -> "plus"
  | Eq -> "eq"
  | HasSuffix -> "has_suffix"
  | StripSuffix -> "strip_suffix"
  | StringIsFloat -> "string_is_float"
  | Not -> "not"
  | Neq -> "neq"
  | HasPrefix -> "has_prefix"
  | IntToFloat -> "int_to_float"
  | Div -> "divide"
  | Mult -> "mult"
  | NthBySep -> "nth_by_sep"
  | Max -> "max"
  | Minus -> "minus"
  | Gt -> "gt"
  | _ -> panic (show_func f)

let eval_path_opt (n : 'meta node) (p : path) =
  match p with
  | Self -> Some n
  | Parent -> n.parent
  | First -> List.hd n.children
  | Next -> n.next
  | Prev -> n.prev
  | Last -> List.last n.children

let eval_path n p = Option.value_exn (eval_path_opt n p)

exception ReRaise of string

let compile_type_expr ty =
  match resolve ty with
  | TInt -> "int"
  | TBool -> "bool"
  | TString -> "std::string"
  | TFloat -> "double"
  | _ -> panic (show_type_expr ty)

let eval_path_staged path : 'meta node code =
  Expr
    (match path with
    | Prev -> "self.prev"
    | Self -> "(&self)"
    | Parent -> "self.parent"
    | Last -> "self.last"
    | First -> "self.first"
    | _ -> panic (show_path path))

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
    else Expr "node" |> dyn

  let reversed_path (p : path) (n : 'a node sd) : 'a node list sd =
    match p with
    | Parent -> (n |> unstatic).children |> static
    | Self -> [ n |> unstatic ] |> static
    | Prev -> Option.to_list (n |> unstatic).next |> static
    | Next -> Option.to_list (n |> unstatic).prev |> static
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
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let down, up = get_bb_from_proc p proc_name in
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadVar (path, read_var_name) ->
                if String.equal var_name read_var_name then
                  List.iter
                    (reversed_path path n |> unstatic)
                    ~f:(fun dirtied_node -> bb_dirtied (dirtied_node |> static) ~proc_name ~bb_name m |> unstatic)
                else ()
            | ReadHasPath _ -> () (*property being changed cannot change haspath status*)
            | ReadProp _ | ReadAttr _ -> ()
          in
          List.iter reads ~f:dirty
        in
        Option.iter down ~f:work;
        Option.iter up ~f:work);
    tt

  let rec eval_expr (n : 'meta node sd) (e : expr) (m : metric sd) : value sd =
    let recurse e = eval_expr n e m in
    match e with
    | Panic (_, x) ->
        panic ("External: " ^ String.concat ~sep:" " (List.map x ~f:(fun x -> show_value (recurse x |> unstatic))))
    | HasProperty p -> is_some (hashtbl_find (node_get_prop n) (string p)) |> vbool
    | GetProperty p ->
        seq (read_metric m) (fun _ ->
            match hashtbl_find (node_get_prop n) (string p) |> unstatic with
            | Some x -> x |> static
            | None -> panic ("cannot find property " ^ p ^ " in " ^ string_of_int (n |> unstatic).extern_id))
    | HasAttribute p -> VBool (Option.is_some (hashtbl_find (node_get_attr n) (string p) |> unstatic)) |> static
    | GetAttribute p -> (
        read_metric m |> unstatic;
        match hashtbl_find (node_get_attr n) (string p) |> unstatic with
        | Some x -> x |> static
        | None -> panic ("cannot find attribute " ^ p ^ " in " ^ string_of_int (n |> unstatic).extern_id))
    | String s -> vstring (string s)
    | Int i -> vint (int i)
    | Float f -> vfloat (float f)
    | IfExpr (c, t, e) -> ite (bool_of_value (recurse c)) (fun _ -> recurse t) (fun _ -> recurse e)
    | HasPath p -> VBool (Option.is_some (eval_path_opt (n |> unstatic) p)) |> static
    | Read (p, var_name) ->
        read_metric m |> unstatic;
        Hashtbl.find_exn (eval_path (n |> unstatic) p |> static |> node_get_var |> unstatic) var_name |> static
    | And (x, y) -> if bool_of_value (recurse x) |> unstatic then recurse y else VBool false |> static
    | Or (x, y) -> if bool_of_value (recurse x) |> unstatic then VBool true |> static else recurse y
    | GetName -> VString (n |> unstatic).name |> static
    | Bool x -> vbool (bool x)
    | Call (f, xs) -> eval_func f (List.map ~f:(fun v -> recurse v |> unstatic) xs) |> static
  (*| _ -> panic ("unhandled case in eval_expr:" ^ show_expr e)*)

  let rec eval_stmt (p : prog) (n : meta node sd) (s : stmt) (m : metric sd) : unit sd =
    match s with
    | Write (prop_name, expr) ->
        seq (write_metric m) (fun _ ->
            let new_value = eval_expr n expr m in
            (match hashtbl_find (node_get_var n) (string prop_name) |> unstatic with
            | None -> ()
            | Some value ->
                if equal_value value (new_value |> unstatic) then () else var_modified p n prop_name m |> unstatic);
            Hashtbl.set (n |> unstatic).var ~key:prop_name ~data:(new_value |> unstatic) |> static)
    | BBCall bb_name -> bracket_call_bb n bb_name (fun _ -> eval_stmts p n (stmts_of_basic_block p bb_name) m)
    | ChildrenCall proc_name ->
        List.iter (n |> unstatic).children ~f:(fun new_node ->
            bracket_call_proc (new_node |> static) proc_name (fun _ ->
                eval_stmts p (new_node |> static) (stmts_of_processed_proc p proc_name) m)
            |> unstatic)
        |> static

  and eval_stmts (p : prog) (n : meta node sd) (s : stmts) (m : metric sd) : unit sd =
    List.iter s ~f:(fun stmt -> eval_stmt p n stmt m |> unstatic) |> static

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
    | _ -> panic "bad argument"

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
            | _ -> panic (show_read read)
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

  let rec seqs x = match x with [] -> tt | hd :: tl -> seq (hd ()) (fun _ -> seqs tl)

  let rec assert_node_value_equal (l : _ node sd) (r : _ node sd) : unit sd =
    assert (Int.equal (Hashtbl.length (node_get_var l |> unstatic)) (Hashtbl.length (node_get_var r |> unstatic)));
    assert (Int.equal (List.length (node_get_children l |> unstatic)) (List.length (node_get_children l |> unstatic)));
    List.iter2_exn
      (node_get_children l |> unstatic)
      (node_get_children r |> unstatic)
      ~f:(fun l r -> assert_node_value_equal (l |> static) (r |> static) |> unstatic);
    if Hashtbl.equal equal_value (node_get_var l |> unstatic) (node_get_var r |> unstatic) then ()
    else (
      Hashtbl.iter_keys
        (node_get_var l |> unstatic)
        ~f:(fun name ->
          let lv = Hashtbl.find_exn (node_get_var l |> unstatic) name |> static in
          let rv = Hashtbl.find_exn (node_get_var r |> unstatic) name |> static in
          if equal_value (lv |> unstatic) (rv |> unstatic) then ()
          else print_endline (name ^ unstatic (string_of_value lv) ^ unstatic (string_of_value rv)) |> unstatic);
      print_endline (string_of_int (l |> unstatic).id ^ " bad!") |> unstatic;
      recursive_print_id_up (l |> unstatic));
    assert (Hashtbl.equal equal_value (node_get_var l |> unstatic) (node_get_var r |> unstatic)) |> static
end
