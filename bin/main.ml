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
let prog_def = parse "./layout.mt"

let prog = prog_of_prog_def prog_def

let _ = Out_channel.newline stdout
let _ = print_endline (show_prog prog)

let rec destring_expr e : destringed list =
  match e with
  | String x -> [ DString x ]
  | Call (HasSuffix, [ x; String y ]) -> DHasSuffix y :: destring_expr x
  | Call (HasPrefix, [ x; String y ]) -> DHasPrefix y :: destring_expr x
  | Call (StringIsFloat, [ x ]) -> DStringIsFloat :: destring_expr x
  | Call (StringToFloat, [ Call (NthBySep, [ x; String y; z ]) ]) ->
      DFloatBySep y :: List.append (destring_expr x) (destring_expr z)
  | Call (StringToFloat, [ x ]) -> DStringToFloat :: destring_expr x
  | Call (StripSuffix, [ x; String y ]) -> DStripSuffix y :: destring_expr x
  | GetProperty _ | HasProperty _ | Float _ | Read _ | HasPath _ | Bool _ | GetAttribute _ | HasAttribute _ | GetName
  | Int _ | Panic _ ->
      (*we do not compile panic in C++*)
      []
  | Call ((IntToFloat | Plus | Eq | Not | Neq | Mult | Div | Max | Minus | Gt), xs) ->
      List.concat_map xs ~f:destring_expr
  | Or (x, y) | And (x, y) -> List.append (destring_expr x) (destring_expr y)
  | IfExpr (i, t, e) -> List.append (destring_expr i) (List.append (destring_expr t) (destring_expr e))
  | _ -> Megatron.Common.panic (show_expr e)

let destring_stmt s : destringed list =
  match s with Write (_, e) -> destring_expr e | _ -> Megatron.Common.panic (show_stmt s)

let ds =
  List.dedup_and_sort
    (List.concat_map (Hashtbl.to_alist prog.bbs) ~f:(fun (_, BasicBlock (_, stmts)) ->
         List.concat_map stmts ~f:destring_stmt))
    ~compare:compare_destringed

let shell cmd =
  let in_channel = Core_unix.open_process_in cmd in
  In_channel.iter_lines in_channel ~f:(fun str -> print_endline str);
  let res = Core_unix.close_process_in in_channel in
  match res with Ok () -> () | _ -> panic "shell failed"

let shell_check_bin cmd cmd2 =
  let in_channel = Core_unix.open_process_in ("command -v " ^ cmd) in
  (* This iter_lines is required for res to be returned correctly somehow. *)
  In_channel.iter_lines in_channel ~f:(fun str -> ());
  let res = Core_unix.close_process_in in_channel in
  match res with Ok () -> cmd | _ -> cmd2

let () = shell "mkdir -p build"
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

  let json_to_node_aux_code : (Yojson.Basic.t -> meta node) sd =
    lift "Node" "json_to_node_aux"
      (lazy
        (fix (fun recurse j ->
             EVAL.make_node
               (list_map (j |> json_member (string "children") |> json_to_list) (fun x -> recurse x))
               ~name:(j |> json_member (string "name") |> json_to_string)
               ~attr:(j |> json_member (string "attributes") |> json_to_dict)
               ~prop:(j |> json_member (string "properties") |> json_to_dict)
               ~extern_id:(j |> json_member (string "id") |> json_to_int))))

  let json_to_node_aux : Yojson.Basic.t sd -> meta node sd = app json_to_node_aux_code

  let set_relation (n : 'a node sd) : unit sd =
    let set_children_relation =
      app
        (lift "Unit" "set_children_relation"
           (lazy
             (fix (fun recurse (n : 'a node sd) ->
                  seqs
                    [
                      (fun _ ->
                        list_iter_2 (node_get_children n) (fun x y ->
                            seqs
                              [
                                (fun _ -> node_set_parent x (n |> some));
                                (fun _ -> node_set_parent y (n |> some));
                                (fun _ -> node_set_next x (y |> some));
                                (fun _ -> node_set_prev y (x |> some));
                                (fun _ -> recurse x);
                              ]));
                      (fun _ ->
                        option_match
                          (list_hd (node_get_children n))
                          (fun _ -> node_set_first n (none ()))
                          (fun x -> seq (node_set_first n (some x)) (fun _ -> node_set_parent x (some n))));
                      (fun _ ->
                        option_match
                          (list_last (node_get_children n))
                          (fun _ -> node_set_last n (none ()))
                          (fun x ->
                            seqs
                              [
                                (fun _ -> node_set_last n (some x));
                                (fun _ -> node_set_parent x (some n));
                                (fun _ -> recurse x);
                              ]));
                    ]))))
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
    lift "Node" "node_to_fs_node"
      (lazy
        (fix (fun recurse n ->
             FS.make_node
               (list_map (node_get_children n) recurse)
               ~name:(node_get_name n) ~attr:(node_get_attr n) ~prop:(node_get_prop n) ~extern_id:(node_get_extern_id n))))

  let node_to_fs_node n : FS.meta node sd =
    let_ (app node_to_fs_node_aux n) (fun v -> seq (set_relation v) (fun _ -> v))

  let json_to_layout_node : Yojson.Basic.t sd -> layout_node sd =
    app
      (lift "LayoutNode" "json_to_layout_node"
         (lazy
           (fix (fun recurse j ->
                make_layout_node (list_map (j |> json_member (string "children") |> json_to_list) recurse)))))

  let get_command (j : Basic.t sd) : string sd = j |> json_member (string "name") |> json_to_string

  let get_path (j : Yojson.Basic.t sd) : int list sd =
    list_map (j |> json_member (string "path") |> json_to_list) json_to_int

  let get_type j : string sd = j |> json_member (string "type") |> json_to_string
  let get_key j : string sd = j |> json_member (string "key") |> json_to_string
  let get_value j : value sd = j |> json_member (string "value") |> json_to_value
  let get_node j : _ node sd = json_to_node (j |> json_member (string "node"))
  let get_layout_node j : layout_node sd = json_to_layout_node (j |> json_member (string "node"))

  let layout_size : layout_node sd -> int sd =
    app
      (lift "int64_t" "layout_size"
         (lazy (fix (fun recurse n -> int_add (int 1) (list_int_sum (layout_node_get_children n) recurse)))))

  let node_size : _ node sd -> int sd =
    app
      (lift "int64_t" "node_size"
         (lazy (fix (fun recurse n -> int_add (int 1) (list_int_sum (node_get_children n) recurse)))))

  let follow_layout_path_last str (f : int sd -> layout_node sd -> 'a sd -> unit sd) :
      (int list -> layout_node -> 'a -> unit) sd =
    lift "Unit" str
      (lazy
        (fix3 (fun recurse path x r ->
             let_ (list_hd_exn path) (fun h ->
                 let_ (list_tail_exn path) (fun t ->
                     ite (list_is_empty t)
                       (fun _ -> f h x r)
                       (fun _ -> recurse t (list_nth_exn (layout_node_get_children x) h) r))))))

  let follow_path_last str (f : int sd -> 'a node sd -> 'b sd -> unit sd) : (int list -> 'a node -> 'b -> unit) sd =
    lift "Unit" str
      (lazy
        (fix3 (fun recurse path x r ->
             let_ (list_hd_exn path) (fun h ->
                 let_ (list_tail_exn path) (fun t ->
                     ite (list_is_empty t)
                       (fun _ -> f h x r)
                       (fun _ -> recurse t (list_nth_exn (node_get_children x) h) r))))))

  let add_node_aux m =
    follow_path_last "add_node" (fun i x y ->
        seq (input_change_metric m (node_size y)) (fun _ -> EVAL.add_children prog x y i m))

  let add_node (path : int list sd) (x : _ node sd) (y : _ node sd) (m : metric sd) : unit sd =
    app3 (add_node_aux m) path x y

  let add_layout_node_aux m =
    follow_layout_path_last "add_layout_node" (fun i x y ->
        seq
          (output_change_metric m (layout_size y))
          (fun _ ->
            let_
              (list_split_n (layout_node_get_children x) i)
              (fun splitted -> layout_node_set_children x (list_append (zro splitted) (cons y (fst splitted))))))

  let add_layout_node (path : int list sd) (x : layout_node sd) (y : layout_node sd) (m : metric sd) : unit sd =
    app3 (add_layout_node_aux m) path x y

  let remove_node_aux m =
    follow_path_last "remove_node" (fun i x _ ->
        seq
          (input_change_metric m (node_size (list_nth_exn (node_get_children x) i)))
          (fun _ -> EVAL.remove_children prog x i m))

  let remove_node (path : int list sd) (x : _ node sd) (m : metric sd) : unit sd = app3 (remove_node_aux m) path x tt

  let remove_layout_node_aux m =
    follow_layout_path_last "remove_layout_node" (fun i x _ ->
        seq
          (output_change_metric m (layout_size (list_nth_exn (layout_node_get_children x) i)))
          (fun _ ->
            let_
              (list_split_n (layout_node_get_children x) i)
              (fun splitted -> layout_node_set_children x (list_append (zro splitted) (list_tail_exn (fst splitted))))))

  let remove_layout_node (path : int list sd) (x : layout_node sd) (m : metric sd) : unit sd =
    app3 (remove_layout_node_aux m) path x tt

  let replace_node_aux m =
    follow_path_last "replace_node" (fun i x y ->
        seqs
          [
            (fun _ -> input_change_metric m (int_add (node_size (list_nth_exn (node_get_children x) i)) (node_size y)));
            (fun _ -> EVAL.remove_children prog x i m);
            (fun _ -> EVAL.add_children prog x y i m);
          ])

  let replace_node (path : int list sd) (x : _ node sd) (y : _ node sd) (m : metric sd) : unit sd =
    app3 (replace_node_aux m) path x y

  let replace_layout_node_aux m =
    follow_layout_path_last "replace_layout_node" (fun i x y ->
        let_
          (list_split_n (layout_node_get_children x) i)
          (fun splitted ->
            seqs
              [
                (fun _ ->
                  output_change_metric m
                    (int_add (layout_size (list_nth_exn (layout_node_get_children x) i)) (layout_size y)));
                (fun _ ->
                  layout_node_set_children x (list_append (zro splitted) (cons y (fst splitted |> list_tail_exn))));
              ]))

  let replace_layout_node (path : int list sd) (x : layout_node sd) (y : layout_node sd) (m : metric sd) : unit sd =
    app3 (replace_layout_node_aux m) path x y

  let follow_path str (f : 'a node sd -> 'b sd -> unit sd) : (int list -> 'a node -> 'b -> unit) sd =
    lift "Unit" str
      (lazy
        (fix3 (fun recurse path x r ->
             list_match path (fun _ -> f x r) (fun h t -> recurse t (list_nth_exn (node_get_children x) h) r))))

  let replace_value_aux m : (int list -> _ node -> (string * string) * value -> unit) sd =
    follow_path "replace_value" (fun x v ->
        let_ (zro v) (fun l ->
            let_ (zro l) (fun type_ ->
                let_ (fst l) (fun key ->
                    let_ (fst v) (fun value ->
                        seq
                          (input_change_metric m (int 1))
                          (fun _ ->
                            string_match type_
                              [
                                ( "attributes",
                                  fun _ ->
                                    string_match key
                                      (List.map (Hashtbl.to_alist prog.tyck_env.attr_type) ~f:(fun (s, _) ->
                                           ( s,
                                             fun _ ->
                                               seq (EVAL.remove_attr prog x s m) (fun _ ->
                                                   EVAL.add_attr prog x s value m) )))
                                      (fun _ -> tt) );
                                ( "properties",
                                  fun _ ->
                                    string_match key
                                      (List.map (Hashtbl.to_alist prog.tyck_env.prop_type) ~f:(fun (s, _) ->
                                           ( s,
                                             fun _ ->
                                               seq (EVAL.remove_prop prog x s m) (fun _ ->
                                                   EVAL.add_prop prog x s value m) )))
                                      (fun _ -> tt) );
                              ]
                              (fun _ -> panic (string_append (string "bad type:") type_))))))))

  let replace_value (path : int list sd) (x : _ node sd) (type_ : string sd) (key : string sd) (value : value sd)
      (m : metric sd) : unit sd =
    app3 (replace_value_aux m) path x (make_pair (make_pair type_ key) value)

  let delete_value_aux m : (int list -> _ node -> string * string -> unit) sd =
    follow_path "delete_value" (fun x v ->
        let_ (zro v) (fun type_ ->
            let_ (fst v) (fun key ->
                seq
                  (input_change_metric m (int 1))
                  (fun _ ->
                    string_match type_
                      [
                        ( "attributes",
                          fun _ ->
                            string_match key
                              (List.map (Hashtbl.to_alist prog.tyck_env.attr_type) ~f:(fun (s, _) ->
                                   (s, fun _ -> EVAL.remove_attr prog x s m)))
                              (fun _ -> tt) );
                        ( "properties",
                          fun _ ->
                            string_match key
                              (List.map (Hashtbl.to_alist prog.tyck_env.prop_type) ~f:(fun (s, _) ->
                                   (s, fun _ -> EVAL.remove_prop prog x s m)))
                              (fun _ -> tt) );
                      ]
                      (fun _ -> panic (string_append (string "bad type:") type_))))))

  let delete_value (path : int list sd) (x : _ node sd) (type_ : string sd) (key : string sd) (m : metric sd) : unit sd
      =
    app3 (delete_value_aux m) path x (make_pair type_ key)

  let insert_value_aux m : (int list -> _ node -> (string * string) * value -> unit) sd =
    follow_path "insert_value" (fun x v ->
        let_ (zro v) (fun l ->
            let_ (zro l) (fun type_ ->
                let_ (fst l) (fun key ->
                    let_ (fst v) (fun value ->
                        seq
                          (input_change_metric m (int 1))
                          (fun _ ->
                            string_match type_
                              [
                                ( "attributes",
                                  fun _ ->
                                    string_match key
                                      (List.map (Hashtbl.to_alist prog.tyck_env.attr_type) ~f:(fun (s, _) ->
                                           (s, fun _ -> EVAL.add_attr prog x s value m)))
                                      (fun _ -> tt) );
                                ( "properties",
                                  fun _ ->
                                    string_match key
                                      (List.map (Hashtbl.to_alist prog.tyck_env.prop_type) ~f:(fun (s, _) ->
                                           (s, fun _ -> EVAL.add_prop prog x s value m)))
                                      (fun _ -> tt) );
                              ]
                              (fun _ -> panic (string_append (string "bad type:") type_))))))))

  let insert_value (path : int list sd) (x : _ node sd) (type_ : string sd) (key : string sd) (value : value sd)
      (m : metric sd) : unit sd =
    app3 (insert_value_aux m) path x (make_pair (make_pair type_ key) value)

  let name : string = if is_static then EVAL.name ^ "_S" else EVAL.name ^ "_D"

  let main : unit sd =
    with_out_file (string out_file_path) (fun out_file ->
        seq
          (print_endline (string ("RUNNING " ^ name)))
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
                                                    seqs
                                                      [
                                                        (fun _ ->
                                                          json_to_channel out_file
                                                            (assoc_to_json
                                                               (list
                                                                  [
                                                                    make_pair (string "name")
                                                                      (string_to_json (string name));
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
                                                                    make_pair (string "overhead_time")
                                                                      (int_to_json (metric_overhead_count m));
                                                                    make_pair (string "eval_time")
                                                                      (int_to_json (metric_eval_count m));
                                                                    make_pair (string "html")
                                                                      (string_to_json (node_to_html n));
                                                                    make_pair (string "command")
                                                                      (list_to_json (stack_to_list command));
                                                                  ])));
                                                        (fun _ -> output_string out_file (string "\n"));
                                                        (fun _ -> clear_stack command);
                                                        (fun _ ->
                                                          write_ref diff_num (int_add (read_ref diff_num) (int 1)));
                                                        (fun _ ->
                                                          if is_static then
                                                            let_ (node_to_fs_node n) (fun fsn ->
                                                                seq (FS.eval prog fsn m) (fun _ ->
                                                                    assert_node_value_equal n fsn))
                                                          else tt);
                                                        (fun _ -> reset_metric m);
                                                      ]
                                                  in
                                                  let work () : unit sd =
                                                    iter_lines chan (fun line ->
                                                        let_ (json_of_string line) (fun j ->
                                                            seq (push_stack command j) (fun _ ->
                                                                string_match (get_command j)
                                                                  [
                                                                    ( "add",
                                                                      fun _ -> add_node (get_path j) n (get_node j) m );
                                                                    ( "recalculate",
                                                                      fun _ ->
                                                                        seq (EVAL.recalculate prog n m) (fun _ ->
                                                                            diff_evaluated ()) );
                                                                    ("remove", fun _ -> remove_node (get_path j) n m);
                                                                    ( "replace",
                                                                      fun _ ->
                                                                        replace_node (get_path j) n (get_node j) m );
                                                                    ( "replace_value",
                                                                      fun _ ->
                                                                        replace_value (get_path j) n (get_type j)
                                                                          (get_key j) (get_value j) m );
                                                                    ( "delete_value",
                                                                      fun _ ->
                                                                        delete_value (get_path j) n (get_type j)
                                                                          (get_key j) m );
                                                                    ( "insert_value",
                                                                      fun _ ->
                                                                        insert_value (get_path j) n (get_type j)
                                                                          (get_key j) (get_value j) m );
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
                                                                  ]
                                                                  (fun _ -> panic (string "unknown command")))))
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

  let run_dynamic () : unit =
    let compiled_file_name = "Layout" ^ name ^ ".cpp" in

    let c = Stdio.Out_channel.create compiled_file_name in
    compile prog (defs ()) (undyn main) (EVAL.meta_defs prog) ds c;
    Stdio.Out_channel.close c;

    shell (shell_check_bin "clang-format-18" "clang-format" ^ " --style=file -i " ^ compiled_file_name);
    shell "cd build && cmake -DCMAKE_BUILD_TYPE=Release .. && make";
    shell ("build/Layout" ^ name)

  let () = if is_static then () else run_dynamic ()
end

(*module DEBUG = Main (Megatron.EvalPQ.EVAL (S))*)
(*module DEBUG = Main (Megatron.EvalHB.EVAL (S))*)

(*module MainFSI = Main (Megatron.EvalFS.EVAL (S))*)
module MainFSC = Main (Megatron.EvalFS.EVAL (D))
(*module MainDBI = Main (Megatron.EvalDB.EVAL (S))*)
module MainDBC = Main (Megatron.EvalDB.EVAL (D))
(*module MainPQI = Main (Megatron.EvalPQ.EVAL (S))*)
module MainPQC = Main (Megatron.EvalPQ.EVAL (D))
(*module MainHBC = Main (Megatron.EvalHB.EVAL (D))
*)
