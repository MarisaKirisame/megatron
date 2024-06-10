open Megatron.Parse
open Megatron.Ast
open Megatron.Eval
open Megatron.EXN
open Core
open Yojson
open Megatron.Metric

type layout_node = { mutable children : layout_node list }

let rec layout_size n = 1 + List.sum (module Int) n.children ~f:layout_size

let json_to_value (j : Yojson.Basic.t) : value =
  let open Yojson.Basic.Util in
  match j with
  | `String s -> VString s
  | `Int i -> VInt i
  | _ -> panic ("unknown value in json_to_value: " ^ Yojson.Basic.pretty_to_string j)

let json_to_dict (j : Yojson.Basic.t) : (string, value) Hashtbl.t =
  let open Yojson.Basic.Util in
  Hashtbl.map (Hashtbl.of_alist_exn (module String) (to_assoc j)) ~f:json_to_value

let out_file_path = Sys.argv.(1)
let out_file = Stdio.Out_channel.create out_file_path
let prog_def = parse "./layout.mt";;

Out_channel.newline stdout;;
print_endline (show_prog_def prog_def)

let prog = prog_of_prog_def prog_def;;

print_endline (show_prog prog)

let lines : string list = Stdio.In_channel.read_lines "command.json"
let (line_init :: line_layout_init :: line_rest) = lines
let json_init = Yojson.Basic.from_string line_init
let json_layout_init = Yojson.Basic.from_string line_layout_init

module Main (EVAL : Eval) = struct
  let rec json_to_node_aux j : _ node =
    let open Yojson.Basic.Util in
    EVAL.make_node prog
      (List.map (j |> member "children" |> to_list) ~f:json_to_node_aux)
      ~attr:(j |> member "attributes" |> json_to_dict)
      ~prop:(j |> member "properties" |> json_to_dict)

  let json_to_node j : _ node =
    let v = json_to_node_aux j in
    set_relation v;
    v

  let rec node_to_fs_node_aux n : Megatron.EvalFS.EVAL.meta node =
    Megatron.EvalFS.EVAL.make_node prog (List.map n.children ~f:node_to_fs_node_aux) ~attr:n.attr ~prop:n.prop

  let node_to_fs_node n =
    let v = node_to_fs_node_aux n in
    set_relation v;
    v

  let rec json_to_layout_node j : layout_node =
    let open Yojson.Basic.Util in
    { children = List.map (j |> member "children" |> to_list) ~f:json_to_layout_node }

  let diff_num = ref 0
  let m = fresh_metric ()
  let command = ref [ json_init; json_layout_init ];;

  print_endline ("RUNNING " ^ EVAL.name);
  ()

  let get_command j : string = j |> Yojson.Basic.Util.member "name" |> Yojson.Basic.Util.to_string

  let get_path j : int list =
    List.map (j |> Yojson.Basic.Util.member "path" |> Yojson.Basic.Util.to_list) ~f:Yojson.Basic.Util.to_int

  let get_type j : string = j |> Yojson.Basic.Util.member "type" |> Yojson.Basic.Util.to_string
  let get_key j : string = j |> Yojson.Basic.Util.member "key" |> Yojson.Basic.Util.to_string
  let get_value j : value = j |> Yojson.Basic.Util.member "value" |> json_to_value
  let get_node j : _ node = json_to_node (j |> Yojson.Basic.Util.member "node")
  let get_layout_node j : layout_node = json_to_layout_node (j |> Yojson.Basic.Util.member "node");;

  assert (String.equal (get_command json_init) "init");
  assert (String.equal (get_command json_layout_init) "layout_init")

  let n = get_node json_init
  let layout_n = get_layout_node json_layout_init

  let diff_evaluated () : unit =
    let open Yojson.Basic in
    to_channel out_file
      (`Assoc
        [
          ("name", `String EVAL.name);
          ("diff_num", `Int !diff_num);
          ("read_count", `Int m.read_count);
          ("meta_read_count", `Int m.meta_read_count);
          ("write_count", `Int m.write_count);
          ("meta_write_count", `Int m.meta_write_count);
          ("queue_size_acc", `Int m.queue_size_acc);
          ("input_change_count", `Int m.input_change_count);
          ("output_change_count", `Int m.output_change_count);
          ("command", `List !command);
        ]);
    output_string out_file "\n";
    reset_metric m;
    command := [];
    diff_num := !diff_num + 1;
    let fsn = node_to_fs_node n in
    Megatron.EvalFS.EVAL.eval prog fsn (fresh_metric ());
    assert_node_value_equal n fsn
  ;;

  m.input_change_count <- m.input_change_count + node_size n;
  m.output_change_count <- m.output_change_count + layout_size layout_n;

  EVAL.eval prog n m;
  diff_evaluated ();
  print_endline "EVAL OK!";
  ()

  let rec add_node (path : int list) (x : _ node) (y : _ node) : unit =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        m.input_change_count <- m.input_change_count + node_size y;
        EVAL.add_children prog x y i m
    | p_hd :: p_tl -> add_node p_tl (List.nth_exn x.children p_hd) y

  let rec add_layout_node (path : int list) (x : layout_node) (y : layout_node) : unit =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        m.output_change_count <- m.output_change_count + layout_size y;
        let lhs, rhs = List.split_n x.children i in
        x.children <- List.append lhs (y :: rhs)
    | p_hd :: p_tl -> add_layout_node p_tl (List.nth_exn x.children p_hd) y

  let rec remove_node (path : int list) (x : _ node) : unit =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        m.input_change_count <- m.input_change_count + node_size (List.nth_exn x.children i);
        EVAL.remove_children prog x i m
    | p_hd :: p_tl -> remove_node p_tl (List.nth_exn x.children p_hd)

  let rec remove_layout_node (path : int list) (x : layout_node) : unit =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        let lhs, removed :: rhs = List.split_n x.children i in
        m.output_change_count <- m.output_change_count + layout_size (List.nth_exn x.children i);
        x.children <- List.append lhs rhs
    | p_hd :: p_tl -> remove_layout_node p_tl (List.nth_exn x.children p_hd)

  let rec replace_node (path : int list) (x : _ node) (y : _ node) : unit =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        EVAL.remove_children prog x i m;
        EVAL.add_children prog x y i m
    | p_hd :: p_tl -> replace_node p_tl (List.nth_exn x.children p_hd) y

  let rec replace_layout_node (path : int list) (x : layout_node) (y : layout_node) : unit =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        let lhs, removed :: rhs = List.split_n x.children i in
        m.output_change_count <- m.output_change_count + layout_size removed + layout_size y;
        x.children <- List.append lhs (y :: rhs)
    | p_hd :: p_tl -> replace_layout_node p_tl (List.nth_exn x.children p_hd) y

  let rec replace_value (path : int list) (x : _ node) (type_ : string) (key : string) (value : value) : unit =
    match path with
    | [] -> (
        m.input_change_count <- m.input_change_count + 1;
        match type_ with
        | "attributes" ->
            EVAL.remove_attr prog x key m;
            EVAL.add_attr prog x key value m
        | "properties" ->
            EVAL.remove_prop prog x key m;
            EVAL.add_prop prog x key value m
        | _ -> panic type_)
    | p_hd :: p_tl -> replace_value p_tl (List.nth_exn x.children p_hd) type_ key value

  let rec delete_value (path : int list) (x : _ node) (type_ : string) (key : string) : unit =
    match path with
    | [] -> (
        m.input_change_count <- m.input_change_count + 1;
        match type_ with
        | "attributes" -> EVAL.remove_attr prog x key m
        | "properties" -> EVAL.remove_prop prog x key m
        | _ -> panic type_)
    | p_hd :: p_tl -> delete_value p_tl (List.nth_exn x.children p_hd) type_ key

  let rec insert_value (path : int list) (x : _ node) (type_ : string) (key : string) (value : value) : unit =
    match path with
    | [] -> (
        m.input_change_count <- m.input_change_count + 1;
        match type_ with
        | "attributes" -> EVAL.add_attr prog x key value m
        | "properties" -> EVAL.add_prop prog x key value m
        | _ -> panic type_)
    | p_hd :: p_tl -> insert_value p_tl (List.nth_exn x.children p_hd) type_ key value

  let work () =
    List.iter line_rest ~f:(fun line ->
        let j = Yojson.Basic.from_string line in
        command := List.append !command [ j ];
        match get_command j with
        | "add" ->
            (*print_endline ("add_node: " ^ List.to_string string_of_int (get_path j));*)
            add_node (get_path j) n (get_node j)
        | "recalculate" ->
            (*print_endline "recalculate!";*)
            EVAL.recalculate prog n m;
            diff_evaluated ()
        | "remove" -> 
          (*print_endline ("remove_node:");*)
          remove_node (get_path j) n
        | "replace" -> replace_node (get_path j) n (get_node j)
        | "replace_value" -> replace_value (get_path j) n (get_type j) (get_key j) (get_value j)
        | "delete_value" -> delete_value (get_path j) n (get_type j) (get_key j)
        | "insert_value" -> insert_value (get_path j) n (get_type j) (get_key j) (get_value j)
        | "layout_remove" -> remove_layout_node (get_path j) layout_n
        | "layout_add" -> add_layout_node (get_path j) layout_n (get_layout_node j)
        | "layout_replace" -> replace_layout_node (get_path j) layout_n (get_layout_node j)
        | "layout_info_changed" -> m.output_change_count <- m.output_change_count + 1
        | x -> panic x)
  ;;

  work ();;
  print_endline "INCREMENTAL EVAL OK!"
end

module MainFS = Main (Megatron.EvalFS.EVAL)
module MainDB = Main (Megatron.EvalDB.EVAL)
module MainPQ = Main (Megatron.EvalPQ.EVAL)
