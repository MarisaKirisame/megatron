open Megatron.Parse
open Megatron.Ast
open Megatron.Eval
open Megatron.TypeCheck
open Megatron.Compile
open Megatron.Common
open Sys
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

let json_to_string j : string =
  let open Yojson.Basic.Util in
  to_string j

let json_to_int j : int =
  let open Yojson.Basic.Util in
  to_int j

let json_to_dict (j : Yojson.Basic.t) : (string, value) Hashtbl.t =
  let open Yojson.Basic.Util in
  Hashtbl.map (Hashtbl.of_alist_exn (module String) (to_assoc j)) ~f:json_to_value

let out_file_path = Sys.argv.(1)
let out_file = Stdio.Out_channel.create out_file_path
let prog_def = parse "./layout.mt";;

Out_channel.newline stdout

(*print_endline (show_prog_def prog_def)*)

let prog = prog_of_prog_def prog_def

let shell cmd =
  let in_channel = Core_unix.open_process_in cmd in
  In_channel.iter_lines in_channel ~f:(fun str -> print_endline str);
  let res = Core_unix.close_process_in in_channel in
  match res with Ok () -> () | _ -> panic "shell failed"
;;

Out_channel.write_all "layout.cpp" ~data:(compile prog);;
shell "clang-format --style=file -i layout.cpp";;
shell "cat layout.cpp";;
shell "clang++ -std=c++23 layout.cpp"

(*print_endline (show_prog prog)*)

let tag t str = "<" ^ t ^ ">" ^ str ^ "</" ^ t ^ ">"

let default_tag : (string, unit) Hashtbl.t =
  Hashtbl.of_alist_exn
    (module String)
    (List.map
       ~f:(fun x -> (x, ()))
       [
         "#document";
         "#doctype";
         "#shadow-root";
         "HTML";
         "BODY";
         "DIV";
         "SECTION";
         "BUTTON";
         "UL";
         "HEADER";
         "H2";
         "A";
         "LI";
         "INPUT";
         "NAV";
         "ARTICLE";
         "IMG";
         "SPAN";
         "FOOTER";
         "P";
         "FIGURE";
         "PICTURE";
         "SOURCE";
         "H3";
         "FIGCAPTION";
         "IFRAME";
         "HEAD";
         "MAIN";
         "SUP";
         "svg";
         "defs";
         "symbol";
         "path";
         "rect";
         "OL";
         "CENTER";
         "BR";
         "FORM";
         "TABLE";
         "TBODY";
         "TR";
         "TD";
         "B";
         "NOSCRIPT";
         "ACCORDION-ENTRY-SEARCH-ICON";
         "REACT-PARTIAL";
         "GLOBAL-BANNER";
         "ACTIVE-GLOBAL-BANNERS";
         "QBSEARCH-INPUT";
         "MODAL-DIALOG";
         "DIALOG-HELPER";
         "CUSTOM-SCOPES";
         "INCLUDE-FRAGMENT";
         "H1";
         "H4";
         "DL";
         "DT";
         "LABEL";
         "DD";
         "EM";
         "CARD-SKEW";
         "filter";
         "feFlood";
         "feBlend";
         "feColorMatrix";
         "feOffset";
         "feGaussianBlur";
         "feComposite";
         "radialGradient";
         "linearGradient";
         "stop";
         "circle";
         "g";
         "TIME";
         "COOKIE-CONSENT-LINK";
         "FULLSTORY-CAPTURE";
         "GHCC-CONSENT";
         "SLOT";
         "VIDEO";
         "I";
         "ABBR";
         "SMALL";
         "clipPath";
         "image";
         "polyline";
         "TEXTAREA";
         "FONT";
         "U";
         "ASIDE";
         "AUDIO";
       ])

let rec node_to_html_buffer (b : Buffer.t) (parent_x : int) (parent_y : int) (n : _ node) : unit =
  if not (bool_of_value (Hashtbl.find_exn n.var "visible")) then ()
  else
    let content =
      match n.name with
      | x when Option.is_some (Hashtbl.find default_tag x) -> n.name
      | "#text" -> "some text"
      | _ -> panic n.name
    in
    let float_to_int v = int_of_float (Float.round ~dir:`Nearest (float_of_value v)) in
    let x = float_to_int (Hashtbl.find_exn n.var "x") in
    let y = float_to_int (Hashtbl.find_exn n.var "y") in
    let width = float_to_int (Hashtbl.find_exn n.var "width_internal") in
    let height = float_to_int (Hashtbl.find_exn n.var "height_internal") in
    let recurse () = List.iter n.children ~f:(node_to_html_buffer b x y) in
    if Int.equal width 0 || Int.equal height 0 then recurse ()
    else (
      Buffer.add_string b "<div style=\"";
      Buffer.add_string b ("left: " ^ string_of_int (x - parent_x) ^ ";");
      Buffer.add_string b ("top: " ^ string_of_int (y - parent_y) ^ ";");
      Buffer.add_string b ("width: " ^ string_of_int width ^ ";");
      Buffer.add_string b ("height: " ^ string_of_int height ^ ";");
      Buffer.add_string b "position: absolute; outline:1px solid black;\">";
      Buffer.add_string b content;
      recurse ();
      Buffer.add_string b "</div>")

let node_to_html (n : _ node) : string =
  let b = Buffer.create 0 in
  node_to_html_buffer b 0 0 n;
  Buffer.contents b

module Main
    (EVAL : Eval)
    (LINES : sig
      val lines : string list sd
    end) =
struct
  include LINES

  let counter : int ref = ref 0

  let count () =
    let ret = !counter in
    counter := !counter + 1;
    ret

  let rec json_to_node_aux j : _ node sd =
    let open Yojson.Basic.Util in
    EVAL.make_node
      (Static (List.map (j |> member "children" |> to_list) ~f:(fun x -> unstatic (json_to_node_aux x))))
      ~name:(j |> member "name" |> json_to_string |> static)
      ~attr:(j |> member "attributes" |> json_to_dict |> static)
      ~prop:(j |> member "properties" |> json_to_dict |> static)
      ~extern_id:(j |> member "id" |> json_to_int |> static)

  let json_to_node j : _ node sd = let_ (json_to_node_aux j) (fun v -> seq_ (set_relation v) (const v))

  let rec node_to_fs_node_aux n : Megatron.EvalFS.EVAL.meta node =
    unstatic
      (Megatron.EvalFS.EVAL.make_node
         (static (List.map n.children ~f:node_to_fs_node_aux))
         ~name:(static n.name) ~attr:(static n.attr) ~prop:(static n.prop) ~extern_id:(static n.extern_id))

  let node_to_fs_node n = let_ (static (node_to_fs_node_aux n)) (fun v -> seq_ (set_relation v) (const v))

  let rec json_to_layout_node j : layout_node =
    let open Yojson.Basic.Util in
    { children = List.map (j |> member "children" |> to_list) ~f:json_to_layout_node }

  let diff_num = ref 0
  let m = fresh_metric ();;

  print_endline ("RUNNING " ^ EVAL.name);
  ()

  let get_command j : string = j |> Yojson.Basic.Util.member "name" |> Yojson.Basic.Util.to_string

  let get_path j : int list =
    List.map (j |> Yojson.Basic.Util.member "path" |> Yojson.Basic.Util.to_list) ~f:Yojson.Basic.Util.to_int

  let get_type j : string = j |> Yojson.Basic.Util.member "type" |> Yojson.Basic.Util.to_string
  let get_key j : string = j |> Yojson.Basic.Util.member "key" |> Yojson.Basic.Util.to_string
  let get_value j : value = j |> Yojson.Basic.Util.member "value" |> json_to_value
  let get_node j : _ node = json_to_node (j |> Yojson.Basic.Util.member "node") |> unstatic
  let get_layout_node j : layout_node = json_to_layout_node (j |> Yojson.Basic.Util.member "node")

  let rec add_node (path : int list) (x : _ node) (y : _ node) : unit sd =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        m.input_change_count <- m.input_change_count + node_size y;
        EVAL.add_children prog x y i m |> static
    | p_hd :: p_tl -> add_node p_tl (List.nth_exn x.children p_hd) y

  let rec add_layout_node (path : int list) (x : layout_node) (y : layout_node) : unit sd =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        m.output_change_count <- m.output_change_count + layout_size y;
        let lhs, rhs = List.split_n x.children i in
        (x.children <- List.append lhs (y :: rhs)) |> static
    | p_hd :: p_tl -> add_layout_node p_tl (List.nth_exn x.children p_hd) y

  let rec remove_node (path : int list) (x : _ node) : unit sd =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        m.input_change_count <- m.input_change_count + node_size (List.nth_exn x.children i);
        EVAL.remove_children prog x i m |> static
    | p_hd :: p_tl -> remove_node p_tl (List.nth_exn x.children p_hd)

  let rec remove_layout_node (path : int list) (x : layout_node) : unit sd =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        let lhs, removed :: rhs = List.split_n x.children i in
        m.output_change_count <- m.output_change_count + layout_size (List.nth_exn x.children i);
        (x.children <- List.append lhs rhs) |> static
    | p_hd :: p_tl -> remove_layout_node p_tl (List.nth_exn x.children p_hd)

  let rec replace_node (path : int list) (x : _ node) (y : _ node) : unit sd =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        EVAL.remove_children prog x i m;
        EVAL.add_children prog x y i m |> static
    | p_hd :: p_tl -> replace_node p_tl (List.nth_exn x.children p_hd) y

  let rec replace_layout_node (path : int list) (x : layout_node) (y : layout_node) : unit sd =
    match path with
    | [] -> panic "bad path!"
    | [ i ] ->
        let lhs, removed :: rhs = List.split_n x.children i in
        m.output_change_count <- m.output_change_count + layout_size removed + layout_size y;
        (x.children <- List.append lhs (y :: rhs)) |> static
    | p_hd :: p_tl -> replace_layout_node p_tl (List.nth_exn x.children p_hd) y

  let rec replace_value (path : int list) (x : _ node) (type_ : string) (key : string) (value : value) : unit sd =
    match path with
    | [] -> (
        m.input_change_count <- m.input_change_count + 1;
        match type_ with
        | "attributes" ->
            EVAL.remove_attr prog x key m;
            EVAL.add_attr prog x key value m |> static
        | "properties" ->
            EVAL.remove_prop prog x key m;
            EVAL.add_prop prog x key value m |> static
        | _ -> panic type_)
    | p_hd :: p_tl -> replace_value p_tl (List.nth_exn x.children p_hd) type_ key value

  let rec delete_value (path : int list) (x : _ node) (type_ : string) (key : string) : unit sd =
    match path with
    | [] -> (
        m.input_change_count <- m.input_change_count + 1;
        match type_ with
        | "attributes" -> EVAL.remove_attr prog x key m |> static
        | "properties" -> EVAL.remove_prop prog x key m |> static
        | _ -> panic type_)
    | p_hd :: p_tl -> delete_value p_tl (List.nth_exn x.children p_hd) type_ key

  let rec insert_value (path : int list) (x : _ node) (type_ : string) (key : string) (value : value) : unit sd =
    match path with
    | [] -> (
        m.input_change_count <- m.input_change_count + 1;
        match type_ with
        | "attributes" -> EVAL.add_attr prog x key value m |> static
        | "properties" -> EVAL.add_prop prog x key value m |> static
        | _ -> panic type_)
    | p_hd :: p_tl -> insert_value p_tl (List.nth_exn x.children p_hd) type_ key value

  let line_init, line_temp = drop_head_ lines
  let line_layout_init, line_rest = drop_head_ line_temp
  let json_init = json_of_string_ line_init
  let json_layout_init = json_of_string_ line_layout_init
  let command = ref [ json_init |> unstatic; json_layout_init |> unstatic ];;

  assert (String.equal (get_command (json_init |> unstatic)) "init");
  assert (String.equal (get_command (json_layout_init |> unstatic)) "layout_init")

  let n = get_node (json_init |> unstatic)
  let layout_n = get_layout_node (json_layout_init |> unstatic)

  let diff_evaluated () : unit sd =
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
          ("html", `String (node_to_html n));
          ("command", `List !command);
        ]);
    output_string out_file "\n";
    reset_metric m;
    command := [];
    diff_num := !diff_num + 1;
    let fsn = node_to_fs_node n |> unstatic in
    Megatron.EvalFS.EVAL.eval prog fsn (fresh_metric ());
    assert_node_value_equal n fsn |> static

  let work () : unit sd =
    list_iter_ line_rest ~f:(fun line_ ->
        let line = unstatic line_ in
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
        | "layout_info_changed" -> (m.output_change_count <- m.output_change_count + 1) |> static
        | x -> panic x)
  ;;

  m.input_change_count <- m.input_change_count + node_size n;
  m.output_change_count <- m.output_change_count + layout_size layout_n;

  EVAL.eval prog n m;

  let main =
    seq_ (diff_evaluated ()) (fun _ ->
        seq_
          ("EVAL OK!" |> static |> print_endline_)
          (fun _ -> seq_ (work ()) (fun _ -> "INCREMENTAL EVAL OK!" |> static |> print_endline_)))
  in
  ()
end

module LINES_STATIC = struct
  let lines : string list sd = Stdio.In_channel.read_lines "command.json" |> static
end

module LINES_DYN = struct
  let lines : string list sd = Expr "lines" |> dyn
end

module MainFSI = Main (Megatron.EvalFS.EVAL) (LINES_STATIC)
module MainFSC = Main (Megatron.EvalFS.EVAL) (LINES_DYN)
module MainDBI = Main (Megatron.EvalDB.EVAL) (LINES_STATIC)
module MainDBC = Main (Megatron.EvalDB.EVAL) (LINES_DYN)
module MainPQI = Main (Megatron.EvalPQ.EVAL) (LINES_STATIC)
module MainPQC = Main (Megatron.EvalPQ.EVAL) (LINES_DYN)
