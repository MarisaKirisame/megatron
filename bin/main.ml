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
open Megatron.SD
module EvalFSS = Megatron.EvalFS.EVAL (S)

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
  if not (EvalFSS.bool_of_value (Hashtbl.find_exn n.var "visible")) then ()
  else
    let content =
      match n.name with
      | x when Option.is_some (Hashtbl.find default_tag x) -> n.name
      | "#text" -> "some text"
      | _ -> panic ("content: " ^ n.name)
    in
    let float_to_int v = int_of_float (Float.round ~dir:`Nearest (EvalFSS.float_of_value v)) in
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

module Main (EVAL : Eval) = struct
  include EVAL
  module FS = Megatron.EvalFS.EVAL (EVAL.SD)

  let json_to_node_aux : Yojson.Basic.t sd -> meta node sd =
    app (fix (fun recurse j ->
        EVAL.make_node
          (list_map (j |> json_member (string "children") |> json_to_list) (fun x -> recurse x))
          ~name:(j |> json_member (string "name") |> json_to_string)
          ~attr:(j |> json_member (string "attributes") |> json_to_dict)
          ~prop:(j |> json_member (string "properties") |> json_to_dict)
          ~extern_id:(j |> json_member (string "id") |> json_to_int)))

  let set_relation (n : 'a node sd) : unit sd =
    let set_children_relation =
      app (fix (fun recurse (n : 'a node sd) ->
          seq
            (list_iter
               (list_zip (list_drop_last (node_get_children n)) (list_tl (node_get_children n)))
               (fun p ->
                 let_ (zro p) (fun x ->
                     let_ (fst p) (fun y ->
                         seqs
                           [
                             (fun _ -> node_set_parent x (n |> some));
                             (fun _ -> node_set_next x (y |> some));
                             (fun _ -> node_set_prev y (x |> some));
                             (fun _ -> recurse x);
                           ]))))
            (fun _ ->
              option_iter
                (n |> node_get_children |> list_last)
                (fun x -> seq (node_set_parent x (some n)) (fun _ -> recurse x)))))
    in
    seqs
      [
        (fun _ -> node_set_parent n (none ()));
        (fun _ -> node_set_prev n (none ()));
        (fun _ -> node_set_next n (none ()));
        (fun _ -> set_children_relation n);
      ]

  let json_to_node j : _ node sd = let_ (json_to_node_aux j) (fun v -> seq (set_relation v) (fun _ -> v))

  let rec node_to_fs_node_aux n : FS.meta node =
    FS.make_node
      (List.map n.children ~f:node_to_fs_node_aux |> static)
      ~name:(n.name |> static) ~attr:(n.attr |> static) ~prop:(n.prop |> static) ~extern_id:(n.extern_id |> static)
    |> unstatic

  let node_to_fs_node n =
    if is_static then (
      let v = node_to_fs_node_aux n in
      set_relation (v |> static) |> unstatic;
      v)
    else todo "convert"

  let json_to_layout_node : Yojson.Basic.t sd -> layout_node sd =
    app (fix (fun recurse j -> make_layout_node (list_map (j |> json_member (string "children") |> json_to_list) recurse)))

  let get_command (j : Basic.t sd) : string sd = j |> json_member (string "name") |> json_to_string

  let get_path j : int list =
    List.map (j |> unstatic |> Yojson.Basic.Util.member "path" |> Yojson.Basic.Util.to_list) ~f:Yojson.Basic.Util.to_int

  let get_type j : string sd = j |> json_member (string "type") |> json_to_string
  let get_key j : string sd = j |> json_member (string "key") |> json_to_string
  let get_value j : value sd = j |> json_member (string "value") |> json_to_value
  let get_node j : _ node sd = json_to_node (j |> json_member (string "node"))
  let get_layout_node j : layout_node sd = json_to_layout_node (j |> json_member (string "node"))

  let layout_size : layout_node sd -> int sd =
    app (fix (fun recurse n -> int_add (int 1) (list_int_sum (layout_node_get_children n) recurse)))

  let rec node_size : _ node sd -> int sd =
    app (fix (fun recurse n -> int_add (int 1) (list_int_sum (node_get_children n) recurse)))

  let rec add_node (path : int list) (x : _ node) (y : _ node) (m : metric sd) : unit sd =
    match path with
    | [] -> panic (string "bad path!")
    | [ i ] ->
        input_change_metric m (node_size (y |> static)) |> unstatic;
        EVAL.add_children prog (x |> static) (y |> static) (i |> static) m
    | p_hd :: p_tl -> add_node p_tl (List.nth_exn x.children p_hd) y m

  let rec add_layout_node (path : int list) (x : layout_node) (y : layout_node sd) (m : metric sd) : unit sd =
    match path with
    | [] -> panic (string "bad path!")
    | [ i ] ->
        output_change_metric m (layout_size y) |> unstatic;
        let lhs, rhs = List.split_n x.children i in
        (x.children <- List.append lhs ((y |> unstatic) :: rhs)) |> static
    | p_hd :: p_tl -> add_layout_node p_tl (List.nth_exn x.children p_hd) y m

  let rec remove_node (path : int list) (x : _ node) (m : metric sd) : unit sd =
    match path with
    | [] -> panic (string "bad path!")
    | [ i ] ->
        input_change_metric m (node_size (List.nth_exn x.children i |> static)) |> unstatic;
        EVAL.remove_children prog (x |> static) (i |> static) m
    | p_hd :: p_tl -> remove_node p_tl (List.nth_exn x.children p_hd) m

  let rec remove_layout_node (path : int list) (x : layout_node) m : unit sd =
    match path with
    | [] -> panic (string "bad path!")
    | [ i ] ->
        let lhs, removed :: rhs = List.split_n x.children i in
        output_change_metric m (layout_size (List.nth_exn x.children i |> static)) |> unstatic;
        (x.children <- List.append lhs rhs) |> static
    | p_hd :: p_tl -> remove_layout_node p_tl (List.nth_exn x.children p_hd) m

  let rec replace_node (path : int list) (x : _ node) (y : _ node) (m : metric sd) : unit sd =
    match path with
    | [] -> panic (string "bad path!")
    | [ i ] ->
        EVAL.remove_children prog (x |> static) (i |> static) m |> unstatic;
        EVAL.add_children prog (x |> static) (y |> static) (i |> static) m
    | p_hd :: p_tl -> replace_node p_tl (List.nth_exn x.children p_hd) y m

  let rec replace_layout_node (path : int list) (x : layout_node) (y : layout_node) (m : metric sd) : unit sd =
    match path with
    | [] -> panic (string "bad path!")
    | [ i ] ->
        let lhs, removed :: rhs = List.split_n x.children i in
        output_change_metric m (int_add (layout_size (removed |> static)) (layout_size (y |> static))) |> unstatic;
        (x.children <- List.append lhs (y :: rhs)) |> static
    | p_hd :: p_tl -> replace_layout_node p_tl (List.nth_exn x.children p_hd) y m

  let rec replace_value (path : int list) (x : _ node) (type_ : string) (key : string) (value : value) (m : metric sd) :
      unit sd =
    match path with
    | [] -> (
        input_change_metric m (int 1) |> unstatic;
        match type_ with
        | "attributes" ->
            EVAL.remove_attr prog (x |> static) key m |> unstatic;
            EVAL.add_attr prog (x |> static) key (value |> static) m
        | "properties" ->
            EVAL.remove_prop prog (x |> static) key m |> unstatic;
            EVAL.add_prop prog (x |> static) key (value |> static) m
        | _ -> panic ("type: " ^ type_ |> string))
    | p_hd :: p_tl -> replace_value p_tl (List.nth_exn x.children p_hd) type_ key value m

  let rec delete_value (path : int list) (x : _ node) (type_ : string) (key : string) (m : metric sd) : unit sd =
    match path with
    | [] -> (
        input_change_metric m (int 1) |> unstatic;
        match type_ with
        | "attributes" -> EVAL.remove_attr prog (x |> static) key m
        | "properties" -> EVAL.remove_prop prog (x |> static) key m
        | _ -> panic ("type: " ^ type_ |> string))
    | p_hd :: p_tl -> delete_value p_tl (List.nth_exn x.children p_hd) type_ key m

  let rec insert_value (path : int list) (x : _ node) (type_ : string) (key : string) (value : value) (m : metric sd) :
      unit sd =
    match path with
    | [] -> (
        input_change_metric m (int 1) |> unstatic;
        match type_ with
        | "attributes" -> EVAL.add_attr prog (x |> static) key (value |> static) m
        | "properties" -> EVAL.add_prop prog (x |> static) key (value |> static) m
        | _ -> panic ("type: " ^ type_ |> string))
    | p_hd :: p_tl -> insert_value p_tl (List.nth_exn x.children p_hd) type_ key value m

  let main : unit sd =
    seq
      (print_endline (string ("RUNNING " ^ EVAL.name)))
      (fun _ ->
        with_file "command.json" (fun chan ->
            let_
              (make_ref (int 0))
              (fun diff_num ->
                let_ (fresh_metric ()) (fun m ->
                    let_
                      (json_of_string (input_line chan))
                      (fun json_init ->
                        let_
                          (json_of_string (input_line chan))
                          (fun json_layout_init ->
                            let_ (make_stack ()) (fun command ->
                                seqs
                                  [
                                    (fun _ -> push_stack command json_init);
                                    (fun _ -> push_stack command json_layout_init);
                                    (fun _ -> assert_ (string_equal (get_command json_init) (string "init")));
                                    (fun _ ->
                                      assert_ (string_equal (get_command json_layout_init) (string "layout_init")));
                                    (fun _ ->
                                      let_ (get_node json_init) (fun n ->
                                          let_ (get_layout_node json_layout_init) (fun layout_n ->
                                              let diff_evaluated () : unit sd =
                                                let open Yojson.Basic in
                                                seqs
                                                  [
                                                    (fun _ ->
                                                      to_channel out_file
                                                        (`Assoc
                                                          [
                                                            ("name", `String EVAL.name);
                                                            ("diff_num", `Int !(diff_num |> unstatic));
                                                            ("read_count", `Int (m |> unstatic).read_count);
                                                            ("meta_read_count", `Int (m |> unstatic).meta_read_count);
                                                            ("write_count", `Int (m |> unstatic).write_count);
                                                            ("meta_write_count", `Int (m |> unstatic).meta_write_count);
                                                            ("queue_size_acc", `Int (m |> unstatic).queue_size_acc);
                                                            ( "input_change_count",
                                                              `Int (m |> unstatic).input_change_count );
                                                            ( "output_change_count",
                                                              `Int (m |> unstatic).output_change_count );
                                                            ("html", `String (node_to_html (n |> unstatic)));
                                                            ("command", `List !(command |> unstatic));
                                                          ])
                                                      |> static);
                                                    (fun _ -> Out_channel.output_string out_file "\n" |> static);
                                                    (fun _ -> reset_metric m);
                                                    (fun _ -> (command |> unstatic := []) |> static);
                                                    (fun _ ->
                                                      (diff_num |> unstatic := !(diff_num |> unstatic) + 1) |> static);
                                                    (fun _ ->
                                                      let fsn = node_to_fs_node (n |> unstatic) in
                                                      seq
                                                        (FS.eval prog (static fsn) (fresh_metric ()))
                                                        (fun _ -> assert_node_value_equal n (fsn |> static)));
                                                  ]
                                              in
                                              let work () : unit sd =
                                                iter_lines chan (fun line_ ->
                                                    let line = line_ in
                                                    let j = Yojson.Basic.from_string (unstatic line) |> static in
                                                    push_stack command j |> unstatic;
                                                    match unstatic (get_command j) with
                                                    | "add" ->
                                                        (*print_endline ("add_node: " ^ List.to_string string_of_int (get_path j));*)
                                                        add_node (get_path j) (n |> unstatic) (get_node j |> unstatic) m
                                                    | "recalculate" ->
                                                        (*print_endline "recalculate!";*)
                                                        EVAL.recalculate prog n m |> unstatic;
                                                        diff_evaluated ()
                                                    | "remove" ->
                                                        (*print_endline ("remove_node:");*)
                                                        remove_node (get_path j) (n |> unstatic) m
                                                    | "replace" ->
                                                        replace_node (get_path j) (n |> unstatic)
                                                          (get_node j |> unstatic)
                                                          m
                                                    | "replace_value" ->
                                                        replace_value (get_path j) (n |> unstatic)
                                                          (get_type j |> unstatic)
                                                          (get_key j |> unstatic)
                                                          (get_value j |> unstatic)
                                                          m
                                                    | "delete_value" ->
                                                        delete_value (get_path j) (n |> unstatic)
                                                          (get_type j |> unstatic)
                                                          (get_key j |> unstatic)
                                                          m
                                                    | "insert_value" ->
                                                        insert_value (get_path j) (n |> unstatic)
                                                          (get_type j |> unstatic)
                                                          (get_key j |> unstatic)
                                                          (get_value j |> unstatic)
                                                          m
                                                    | "layout_remove" ->
                                                        remove_layout_node (get_path j) (layout_n |> unstatic) m
                                                    | "layout_add" ->
                                                        add_layout_node (get_path j) (layout_n |> unstatic)
                                                          (get_layout_node j) m
                                                    | "layout_replace" ->
                                                        replace_layout_node (get_path j) (layout_n |> unstatic)
                                                          (get_layout_node j |> unstatic)
                                                          m
                                                    | "layout_info_changed" -> output_change_metric m (int 1)
                                                    | x -> panic (x |> string))
                                              in
                                              seqs
                                                [
                                                  (fun _ -> output_change_metric m (layout_size layout_n));
                                                  (fun _ -> input_change_metric m (node_size n));
                                                  (fun _ -> EVAL.eval prog n m);
                                                  (fun _ -> diff_evaluated ());
                                                  (fun _ -> print_endline (string "EVAL OK!"));
                                                  (fun _ -> work ());
                                                  (fun _ -> print_endline (string "INCREMENTAL EVAL OK!"));
                                                ])));
                                  ])))))))
end

module MainFSI = Main (Megatron.EvalFS.EVAL (S))
module MainFSC = Main (Megatron.EvalFS.EVAL (D))
module MainDBI = Main (Megatron.EvalDB.EVAL (S))
module MainDBC = Main (Megatron.EvalDB.EVAL (D))
module MainPQI = Main (Megatron.EvalPQ.EVAL (S))
module MainPQC = Main (Megatron.EvalPQ.EVAL (D))
