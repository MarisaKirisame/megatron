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
let prog_def = parse "./layout.mt";;

Out_channel.newline stdout

(*print_endline (show_prog_def prog_def)*)

let prog = prog_of_prog_def prog_def

let shell cmd =
  let in_channel = Core_unix.open_process_in cmd in
  In_channel.iter_lines in_channel ~f:(fun str -> print_endline str);
  let res = Core_unix.close_process_in in_channel in
  match res with Ok () -> () | _ -> panic "shell failed"

(*Out_channel.write_all "layout.cpp" ~data:(compile prog);;
  shell "clang-format --style=file -i layout.cpp";;
  shell "cat layout.cpp";;
  shell "clang++ -std=c++23 layout.cpp"*)

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

module Main (EVAL : Eval) = struct
  include EVAL
  module FS = Megatron.EvalFS.EVAL (EVAL.SD)

  let node_to_html (n : _ node sd) : string sd =
    if is_static then (
      let b = Buffer.create 0 in
      node_to_html_buffer b 0 0 (n |> unstatic);
      Buffer.contents b |> static)
    else string ""

  let mapp (f : ('a -> 'b) sd) : 'a sd -> 'b sd =
    if is_static then fun a -> static ((unstatic f) (unstatic a))
    else
      let v = fresh () in
      fun a -> dyn (CApp (CVar v, [ undyn a ]))

  let json_to_node_aux : Yojson.Basic.t sd -> meta node sd =
    app
      (fix (fun recurse j ->
           EVAL.make_node
             (list_map (j |> json_member (string "children") |> json_to_list) (fun x -> recurse x))
             ~name:(j |> json_member (string "name") |> json_to_string)
             ~attr:(j |> json_member (string "attributes") |> json_to_dict)
             ~prop:(j |> json_member (string "properties") |> json_to_dict)
             ~extern_id:(j |> json_member (string "id") |> json_to_int)))

  let set_relation (n : 'a node sd) : unit sd =
    let set_children_relation =
      app
        (fix (fun recurse (n : 'a node sd) ->
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

  let node_to_fs_node_aux : (meta node -> FS.meta node) sd =
    lift
      (lazy
        (fix (fun recurse n ->
             FS.make_node
               (list_map (node_get_children n) recurse)
               ~name:(node_get_name n) ~attr:(node_get_attr n) ~prop:(node_get_prop n) ~extern_id:(node_get_extern_id n))))

  let node_to_fs_node n : FS.meta node sd = app node_to_fs_node_aux n

  let json_to_layout_node : Yojson.Basic.t sd -> layout_node sd =
    app
      (fix (fun recurse j -> make_layout_node (list_map (j |> json_member (string "children") |> json_to_list) recurse)))

  let get_command (j : Basic.t sd) : string sd = j |> json_member (string "name") |> json_to_string

  let get_path j : int list sd =
    List.map (j |> unstatic |> Yojson.Basic.Util.member "path" |> Yojson.Basic.Util.to_list) ~f:Yojson.Basic.Util.to_int
    |> static

  let get_type j : string sd = j |> json_member (string "type") |> json_to_string
  let get_key j : string sd = j |> json_member (string "key") |> json_to_string
  let get_value j : value sd = j |> json_member (string "value") |> json_to_value
  let get_node j : _ node sd = json_to_node (j |> json_member (string "node"))
  let get_layout_node j : layout_node sd = json_to_layout_node (j |> json_member (string "node"))

  let layout_size : layout_node sd -> int sd =
    app (fix (fun recurse n -> int_add (int 1) (list_int_sum (layout_node_get_children n) recurse)))

  let node_size : _ node sd -> int sd =
    app (fix (fun recurse n -> int_add (int 1) (list_int_sum (node_get_children n) recurse)))

  let follow_layout_path_last (f : int sd -> layout_node sd -> 'a sd -> unit sd) :
      ((int list * layout_node) * 'a -> unit) sd =
    lift
      (lazy
        (fix (fun recurse v ->
             let_ (zro v) (fun l ->
                 let_ (fst v) (fun r ->
                     let_ (zro l) (fun path ->
                         let_ (fst l) (fun x ->
                             list_match path
                               (fun _ -> panic (string "bad path!"))
                               (fun h t ->
                                 list_match t
                                   (fun _ -> f h x r)
                                   (fun _ _ ->
                                     recurse (make_pair (make_pair t (list_nth_exn (layout_node_get_children x) h)) r))))))))))

  let follow_path_last (f : int sd -> 'a node sd -> 'b sd -> unit sd) : ((int list * 'a node) * 'b -> unit) sd =
    lift
      (lazy
        (fix (fun recurse v ->
             let_ (zro v) (fun l ->
                 let_ (fst v) (fun r ->
                     let_ (zro l) (fun path ->
                         let_ (fst l) (fun x ->
                             list_match path
                               (fun _ -> panic (string "bad path!"))
                               (fun h t ->
                                 list_match t
                                   (fun _ -> f h x r)
                                   (fun _ _ ->
                                     recurse (make_pair (make_pair t (list_nth_exn (node_get_children x) h)) r))))))))))

  let add_node_aux =
    follow_path_last (fun i x r ->
        let_ (zro r) (fun y ->
            let_ (fst r) (fun m -> seq (input_change_metric m (node_size y)) (fun _ -> EVAL.add_children prog x y i m))))

  let add_node (path : int list sd) (x : _ node sd) (y : _ node sd) (m : metric sd) : unit sd =
    app add_node_aux (make_pair (make_pair path x) (make_pair y m))

  let add_layout_node_aux =
    follow_layout_path_last (fun i x r ->
        let_ (zro r) (fun y ->
            let_ (fst r) (fun m ->
                seq
                  (output_change_metric m (layout_size y))
                  (fun _ ->
                    let_
                      (list_split_n (layout_node_get_children x) i)
                      (fun splitted -> layout_node_set_children x (list_append (zro splitted) (cons y (fst splitted))))))))

  let add_layout_node (path : int list sd) (x : layout_node sd) (y : layout_node sd) (m : metric sd) : unit sd =
    app add_layout_node_aux (make_pair (make_pair path x) (make_pair y m))

  let remove_node_aux =
    follow_path_last (fun i x m ->
        seq
          (input_change_metric m (node_size (list_nth_exn (node_get_children x) i)))
          (fun _ -> EVAL.remove_children prog x i m))

  let remove_node (path : int list sd) (x : _ node sd) (m : metric sd) : unit sd =
    app remove_node_aux (make_pair (make_pair path x) m)

  let remove_layout_node_aux =
    follow_layout_path_last (fun i x m ->
        seq
          (output_change_metric m (layout_size (list_nth_exn (layout_node_get_children x) i)))
          (fun _ ->
            let_
              (list_split_n (layout_node_get_children x) i)
              (fun splitted -> layout_node_set_children x (list_append (zro splitted) (list_tail (fst splitted))))))

  let remove_layout_node (path : int list sd) (x : layout_node sd) (m : metric sd) : unit sd =
    app remove_layout_node_aux (make_pair (make_pair path x) m)

  let replace_node_aux =
    follow_path_last (fun i x r ->
        let_ (zro r) (fun y ->
            let_ (fst r) (fun m ->
                seqs
                  [
                    (fun _ ->
                      input_change_metric m (int_add (node_size (list_nth_exn (node_get_children x) i)) (node_size y)));
                    (fun _ -> EVAL.remove_children prog x i m);
                    (fun _ -> EVAL.add_children prog x y i m);
                  ])))

  let replace_node (path : int list sd) (x : _ node sd) (y : _ node sd) (m : metric sd) : unit sd =
    app replace_node_aux (make_pair (make_pair path x) (make_pair y m))

  let replace_layout_node_aux =
    follow_layout_path_last (fun i x r ->
        let_ (zro r) (fun y ->
            let_ (fst r) (fun m ->
                let_
                  (list_split_n (layout_node_get_children x) i)
                  (fun splitted ->
                    seqs
                      [
                        (fun _ ->
                          output_change_metric m
                            (int_add (layout_size (list_nth_exn (layout_node_get_children x) i)) (layout_size y)));
                        (fun _ ->
                          layout_node_set_children x (list_append (zro splitted) (cons y (fst splitted |> list_tail))));
                      ]))))

  let replace_layout_node (path : int list sd) (x : layout_node sd) (y : layout_node sd) (m : metric sd) : unit sd =
    app replace_layout_node_aux (make_pair (make_pair path x) (make_pair y m))

  let follow_path (f : 'a node sd -> 'b sd -> unit sd) : ((int list * 'a node) * 'b -> unit) sd =
    lift
      (lazy
        (fix (fun recurse v ->
             let_ (zro v) (fun l ->
                 let_ (fst v) (fun r ->
                     let_ (zro l) (fun path ->
                         let_ (fst l) (fun x ->
                             list_match path
                               (fun _ -> f x r)
                               (fun h t -> recurse (make_pair (make_pair t (list_nth_exn (node_get_children x) h)) r)))))))))

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
    with_out_file (string out_file_path) (fun out_file ->
        seq
          (print_endline (string ("RUNNING " ^ EVAL.name)))
          (fun _ ->
            with_in_file (string "command.json") (fun chan ->
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
                                                          json_to_channel out_file
                                                            (assoc_to_json
                                                               (list
                                                                  [
                                                                    make_pair (string "name")
                                                                      (string_to_json (string EVAL.name));
                                                                    make_pair (string "diff_num")
                                                                      (int_to_json (read_ref diff_num));
                                                                    make_pair (string "read_count")
                                                                      (int_to_json (metric_read_count m));
                                                                    make_pair (string "meta_read_count")
                                                                      (int_to_json (metric_meta_read_count m));
                                                                    make_pair (string "write_count")
                                                                      (int_to_json (metric_write_count m));
                                                                    make_pair (string "meta_write_count")
                                                                      (int_to_json (metric_meta_write_count m));
                                                                    make_pair (string "queue_size_acc")
                                                                      (int_to_json (metric_queue_size_acc m));
                                                                    make_pair (string "input_change_count")
                                                                      (int_to_json (metric_input_change_count m));
                                                                    make_pair (string "output_change_count")
                                                                      (int_to_json (metric_output_change_count m));
                                                                    make_pair (string "html")
                                                                      (string_to_json (node_to_html n));
                                                                    make_pair (string "command")
                                                                      (list_to_json (stack_to_list command));
                                                                  ])));
                                                        (fun _ -> output_string out_file (string "\n"));
                                                        (fun _ -> reset_metric m);
                                                        (fun _ -> clear_stack command);
                                                        (fun _ ->
                                                          write_ref diff_num (int_add (read_ref diff_num) (int 1)));
                                                        (fun _ ->
                                                          let_ (node_to_fs_node n) (fun fsn ->
                                                              seq
                                                                (FS.eval prog fsn (fresh_metric ()))
                                                                (fun _ -> assert_node_value_equal n fsn)));
                                                      ]
                                                  in
                                                  let work () : unit sd =
                                                    iter_lines chan (fun line ->
                                                        let_ (string_to_json line) (fun j ->
                                                            seq (push_stack command j) (fun _ ->
                                                                string_match (get_command j)
                                                                  [
                                                                    ( "add",
                                                                      fun _ -> add_node (get_path j) n (get_node j) m );
                                                                    ( "recalculate",
                                                                      fun _ ->
                                                                        EVAL.recalculate prog n m |> unstatic;
                                                                        diff_evaluated () );
                                                                    ("remove", fun _ -> remove_node (get_path j) n m);
                                                                    ( "replace",
                                                                      fun _ ->
                                                                        replace_node (get_path j) n (get_node j) m );
                                                                    ( "replace_value",
                                                                      fun _ ->
                                                                        replace_value
                                                                          (get_path j |> unstatic)
                                                                          (n |> unstatic)
                                                                          (get_type j |> unstatic)
                                                                          (get_key j |> unstatic)
                                                                          (get_value j |> unstatic)
                                                                          m );
                                                                    ( "delete_value",
                                                                      fun _ ->
                                                                        delete_value
                                                                          (get_path j |> unstatic)
                                                                          (n |> unstatic)
                                                                          (get_type j |> unstatic)
                                                                          (get_key j |> unstatic)
                                                                          m );
                                                                    ( "insert_value",
                                                                      fun _ ->
                                                                        insert_value
                                                                          (get_path j |> unstatic)
                                                                          (n |> unstatic)
                                                                          (get_type j |> unstatic)
                                                                          (get_key j |> unstatic)
                                                                          (get_value j |> unstatic)
                                                                          m );
                                                                    ( "layout_remove",
                                                                      fun _ ->
                                                                        remove_layout_node (get_path j) layout_n m );
                                                                    ( "layout_add",
                                                                      fun _ ->
                                                                        add_layout_node (get_path j) layout_n
                                                                          (get_layout_node j) m );
                                                                    ( "layout_replace",
                                                                      fun _ ->
                                                                        replace_layout_node (get_path j) layout_n
                                                                          (get_layout_node j) m );
                                                                    ( "layout_info_changed",
                                                                      fun _ -> output_change_metric m (int 1) );
                                                                  ])))
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
                                      ]))))))))
end

(*module MainFSI = Main (Megatron.EvalFS.EVAL (S))*)
module MainFSC = Main (Megatron.EvalFS.EVAL (D))
module MainDBI = Main (Megatron.EvalDB.EVAL (S))
module MainDBC = Main (Megatron.EvalDB.EVAL (D))
module MainPQI = Main (Megatron.EvalPQ.EVAL (S))
module MainPQC = Main (Megatron.EvalPQ.EVAL (D))
