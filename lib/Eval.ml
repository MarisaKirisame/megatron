open Ast
open Core
open Metric
open Common

type 'meta node = {
  name : string;
  attr : (string, value) Hashtbl.t;
  prop : (string, value) Hashtbl.t;
  var : (string, value) Hashtbl.t;
  id : int;
  extern_id : int;
  mutable children : 'meta node list;
  mutable parent : 'meta node option;
  mutable next : 'meta node option;
  mutable prev : 'meta node option;
  m : 'meta;
}

and value = VInt of int | VBool of bool | VString of string | VFloat of float

let rec node_size (n : _ node) : int = 1 + List.sum (module Int) n.children ~f:node_size

let rec set_children_relation (n : 'meta node) : unit =
  List.iter
    (List.zip_exn
       (Option.value (List.drop_last n.children) ~default:[])
       (Option.value (List.tl n.children) ~default:[]))
    ~f:(fun (x, y) ->
      x.parent <- Some n;
      x.next <- Some y;
      y.prev <- Some x;
      set_children_relation x);
  match List.last n.children with
  | Some x ->
      x.parent <- Some n;
      set_children_relation x
  | None -> ()

let set_relation (n : 'meta node sd) : unit sd =
  match n with
  | Static n ->
      Static
        (n.parent <- None;
         n.prev <- None;
         n.next <- None;
         set_children_relation n)
  | Dyn _ -> panic "todo"

let rec rightmost (x : _ node) : _ node = match List.last x.children with Some x -> rightmost x | None -> x

let rec show_node (n : 'meta node) : string =
  let htbl_str =
    "{"
    ^ List.fold_left (Hashtbl.to_alist n.var)
        ~init:("id = " ^ string_of_int n.id ^ ", ")
        ~f:(fun lhs (name, value) -> lhs ^ name ^ " = " ^ show_value value ^ ", ")
    ^ "}"
  in
  List.fold_left n.children ~init:(htbl_str ^ "[") ~f:(fun lhs n -> lhs ^ show_node n ^ ", ") ^ "]"

and show_value (x : value) : string =
  match x with
  | VInt i -> string_of_int i
  | VBool b -> string_of_bool b
  | VString s -> String.escaped s
  | VFloat f -> string_of_float f

let int_of_value x = match x with VInt i -> i | _ -> panic (show_value x)
let bool_of_value x = match x with VBool b -> b | _ -> panic (show_value x)
let string_of_value x = match x with VString x -> x | _ -> panic (show_value x)
let float_of_value x = match x with VFloat x -> x | _ -> panic (show_value x)

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

let rec eval_expr (n : 'meta node) (e : expr) (m : metric) : value =
  let recurse e = eval_expr n e m in
  try
    match e with
    | Panic (_, x) -> panic ("External: " ^ String.concat ~sep:" " (List.map x ~f:(fun x -> show_value (recurse x))))
    | HasProperty p -> VBool (Option.is_some (Hashtbl.find n.prop p))
    | GetProperty p -> (
        read m;
        match Hashtbl.find n.prop p with
        | Some x -> x
        | None -> panic ("cannot find property " ^ p ^ " in " ^ string_of_int n.extern_id))
    | HasAttribute p -> VBool (Option.is_some (Hashtbl.find n.attr p))
    | GetAttribute p -> (
        read m;
        match Hashtbl.find n.attr p with
        | Some x -> x
        | None -> panic ("cannot find attribute " ^ p ^ " in " ^ string_of_int n.extern_id))
    | String s -> VString s
    | Int i -> VInt i
    | Float f -> VFloat f
    | IfExpr (c, t, e) -> if bool_of_value (recurse c) then recurse t else recurse e
    | HasPath p -> VBool (Option.is_some (eval_path_opt n p))
    | Read (p, var_name) ->
        read m;
        Hashtbl.find_exn (eval_path n p).var var_name
    | And (x, y) -> if bool_of_value (recurse x) then recurse y else VBool false
    | Or (x, y) -> if bool_of_value (recurse x) then VBool true else recurse y
    | GetName -> VString n.name
    | Bool x -> VBool x
    | Call (f, xs) -> eval_func f (List.map ~f:recurse xs)
    (*| _ -> panic ("unhandled case in eval_expr:" ^ show_expr e)*)
  with
  | ReRaise exn -> raise (ReRaise exn)
  | exn ->
      print_endline (show_expr e);
      raise (ReRaise (Exn.to_string exn))

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

let reversed_path (p : path) (n : 'a node) : 'a node list =
  match p with
  | Parent -> n.children
  | Self -> [ n ]
  | Prev -> Option.to_list n.next
  | Next -> Option.to_list n.prev
  | First -> (
      match n.parent with None -> [] | Some np -> if phys_equal (List.hd_exn np.children).id n.id then [ np ] else [])
  | Last -> (
      match n.parent with
      | None -> []
      | Some np -> if phys_equal (List.last_exn np.children).id n.id then [ np ] else [])

let rec recursive_print_id_up (n : _ node) : unit =
  print_endline (string_of_int n.id ^ List.to_string n.children ~f:(fun n -> string_of_int n.id));
  match n.parent with None -> () | Some p -> recursive_print_id_up p

module type EvalIn = sig
  val name : string

  type meta

  val fresh_meta : unit sd -> meta sd
  val remove_meta : meta -> unit
  val register_todo_proc : prog -> meta node -> string -> metric -> unit
  val bracket_call_bb : meta node -> string -> (unit -> unit) -> unit
  val bracket_call_proc : meta node -> string -> (unit -> unit) -> unit
  val bb_dirtied : meta node -> proc_name:string -> bb_name:string -> metric -> unit
  val recalculate_internal : prog -> meta node -> metric -> (meta node -> stmt list -> unit) -> unit
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

  val eval : prog -> meta node -> metric -> unit
  val add_children : prog -> meta node -> meta node -> int -> metric -> unit
  val remove_children : prog -> meta node -> int -> metric -> unit
  val add_prop : prog -> meta node -> string -> value -> metric -> unit
  val remove_prop : prog -> meta node -> string -> metric -> unit
  val add_attr : prog -> meta node -> string -> value -> metric -> unit
  val remove_attr : prog -> meta node -> string -> metric -> unit
  val recalculate : prog -> meta node -> metric -> unit
end

module MakeEval (EI : EvalIn) : Eval = struct
  include EI

  let make_node ~(name : string sd) ~(attr : (string, value) Hashtbl.t sd) ~(prop : (string, value) Hashtbl.t sd)
      ~(extern_id : int sd) (children : EI.meta node list sd) : EI.meta node sd =
    match (name, attr, prop, extern_id, children) with
    | Static name, Static attr, Static prop, Static extern_id, Static children ->
        Static
          {
            id = count ();
            name;
            attr;
            prop;
            extern_id;
            children;
            var = Hashtbl.create (module String);
            parent = None;
            next = None;
            prev = None;
            m = unstatic (EI.fresh_meta (Static ()));
          }
    | _ -> panic "make_node todo"

  let var_modified (p : prog) (n : meta node) (var_name : string) (m : metric) : unit =
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let down, up = get_bb_from_proc p proc_name in
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadVar (path, read_var_name) ->
                if String.equal var_name read_var_name then
                  List.iter (reversed_path path n) ~f:(fun dirtied_node ->
                      bb_dirtied dirtied_node ~proc_name ~bb_name m)
                else ()
            | ReadHasPath _ -> () (*property being changed cannot change haspath status*)
            | ReadProp _ | ReadAttr _ -> ()
          in
          List.iter reads ~f:dirty
        in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let rec eval_stmt (p : prog) (n : meta node) (s : stmt) (m : metric) : unit =
    match s with
    | Write (prop_name, expr) ->
        write m;
        let new_value = eval_expr n expr m in
        (match Hashtbl.find n.var prop_name with
        | None -> ()
        | Some value -> if equal_value value new_value then () else var_modified p n prop_name m);
        Hashtbl.set n.var ~key:prop_name ~data:new_value
    | BBCall bb_name -> bracket_call_bb n bb_name (fun _ -> eval_stmts p n (stmts_of_basic_block p bb_name) m)
    | ChildrenCall proc_name ->
        List.iter n.children ~f:(fun new_node ->
            bracket_call_proc new_node proc_name (fun _ ->
                eval_stmts p new_node (stmts_of_processed_proc p proc_name) m))

  and eval_stmts (p : prog) (n : meta node) (s : stmts) (m : metric) : unit =
    List.iter s ~f:(fun stmt -> eval_stmt p n stmt m)

  let eval (p : prog) (n : meta node) (m : metric) : unit =
    List.iter p.order ~f:(fun proc_name ->
        bracket_call_proc n proc_name (fun _ -> eval_stmts p n (stmts_of_processed_proc p proc_name) m))

  let remove_children (p : prog) (x : meta node) (n : int) (m : metric) : unit =
    match List.split_n x.children n with
    | lhs, removed :: rhs ->
        (match removed.prev with Some prev -> prev.next <- removed.next | None -> ());
        (match removed.next with Some next -> next.prev <- removed.prev | None -> ());
        remove_meta removed.m;
        x.children <- List.append lhs rhs;
        Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
            let work bb_name =
              let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
              let reads = reads_of_stmts stmts in
              let dirty read =
                match read with
                | ReadVar (Self, _) | ReadHasPath Parent | ReadVar (Parent, _) -> ()
                | ReadHasPath First | ReadHasPath Last ->
                    if List.is_empty x.children then bb_dirtied x ~proc_name ~bb_name m else ()
                | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x ~proc_name ~bb_name m else ()
                | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x ~proc_name ~bb_name m else ()
                | ReadHasPath Prev | ReadVar (Prev, _) -> (
                    match removed.next with Some x -> bb_dirtied x ~proc_name ~bb_name m | None -> ())
                | ReadHasPath Next | ReadVar (Next, _) -> (
                    match removed.prev with Some x -> bb_dirtied x ~proc_name ~bb_name m | None -> ())
                | ReadProp _ | ReadAttr _ -> ()
                | _ -> raise (EXN (show_read read))
              in
              List.iter reads ~f:dirty
            in
            let down, up = get_bb_from_proc p proc_name in
            Option.iter down ~f:work;
            Option.iter up ~f:work)
    | _ -> panic "bad argument"

  let add_children (p : prog) (x : meta node) (y : meta node) (n : int) (m : metric) : unit =
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
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath Parent | ReadVar (Parent, _) -> ()
            | ReadHasPath First | ReadHasPath Last ->
                if phys_equal (List.length x.children) 1 then bb_dirtied x ~proc_name ~bb_name m else ()
            | ReadVar (First, _) -> if List.is_empty lhs then bb_dirtied x ~proc_name ~bb_name m else ()
            | ReadVar (Last, _) -> if List.is_empty rhs then bb_dirtied x ~proc_name ~bb_name m else ()
            | ReadHasPath Prev | ReadVar (Prev, _) -> (
                match y.next with Some x -> bb_dirtied x ~proc_name ~bb_name m | None -> ())
            | ReadHasPath Next | ReadVar (Next, _) -> (
                match y.prev with Some x -> bb_dirtied x ~proc_name ~bb_name m | None -> ())
            | ReadVar (Self, _) | ReadProp _ | ReadAttr _ -> ()
            | _ -> panic (show_read read)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        register_todo_proc p y proc_name m;
        Option.iter down ~f:work;
        Option.iter up ~f:work)
  (*print_endline ("add: " ^ string_of_int y.id);*)

  let add_prop (p : prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m;
    Hashtbl.add_exn n.prop ~key:name ~data:v;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in

          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
            | ReadProp read_name -> if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let remove_prop (p : prog) (n : meta node) (name : string) (m : metric) : unit =
    write m;
    ignore (Hashtbl.find_exn n.prop name);
    Hashtbl.remove n.prop name;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in

          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadAttr _ -> ()
            | ReadProp read_name -> if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let add_attr (p : prog) (n : meta node) (name : string) (v : value) (m : metric) : unit =
    write m;
    Hashtbl.add_exn n.attr ~key:name ~data:v;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
            | ReadAttr read_name -> if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let remove_attr (p : prog) (n : meta node) (name : string) (m : metric) : unit =
    write m;
    ignore (Hashtbl.find_exn n.attr name);
    Hashtbl.remove n.attr name;
    Hashtbl.iter p.procs ~f:(fun (ProcessedProc (proc_name, _)) ->
        let work bb_name =
          let (BasicBlock (_, stmts)) = Hashtbl.find_exn p.bbs bb_name in
          let reads = reads_of_stmts stmts in
          let dirty read =
            match read with
            | ReadHasPath _ | ReadVar _ | ReadProp _ -> ()
            | ReadAttr read_name -> if String.equal name read_name then bb_dirtied n ~proc_name ~bb_name m else ()
            (*| _ -> panic (show_read read)*)
          in
          List.iter reads ~f:dirty
        in
        let down, up = get_bb_from_proc p proc_name in
        Option.iter down ~f:work;
        Option.iter up ~f:work)

  let recalculate (p : prog) (n : meta node) (m : metric) : unit =
    recalculate_internal p n m (fun n stmts -> eval_stmts p n stmts m)
end

let rec assert_node_value_equal l r =
  assert (Int.equal (Hashtbl.length l.var) (Hashtbl.length r.var));
  assert (Int.equal (List.length l.children) (List.length r.children));
  List.iter2_exn l.children r.children ~f:(fun l r -> assert_node_value_equal l r);
  if Hashtbl.equal equal_value l.var r.var then ()
  else (
    Hashtbl.iter_keys l.var ~f:(fun name ->
        let lv = Hashtbl.find_exn l.var name in
        let rv = Hashtbl.find_exn r.var name in
        if equal_value lv rv then () else print_endline (name ^ string_of_value lv ^ string_of_value rv));
    print_endline (string_of_int l.id ^ " bad!");
    recursive_print_id_up l);
  assert (Hashtbl.equal equal_value l.var r.var)
