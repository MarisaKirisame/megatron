open Megatron.Parse
open Megatron.Ast
open Megatron.Eval
open Megatron.EXN
open Core
open Yojson
open Megatron.Metric

let out_file = Stdio.Out_channel.create "out.json"
let prog_def = parse "./layout.mt";;

Out_channel.newline stdout;;
print_endline (show_prog_def prog_def)

let prog = prog_of_prog_def prog_def;;

print_endline (show_prog prog);;

(*let json = Yojson.Basic.from_file "data.json"*)
let lines: string list = Stdio.In_channel.read_lines "command.json";;

module Main (EVAL : Eval) = struct
  let m = fresh_metric ();;

  print_endline ("RUNNING " ^ EVAL.name);
  ()

  let rec json_to_node_aux j : _ node =
    let open Yojson.Basic.Util in
    EVAL.make_node prog (List.map (j |> member "children" |> to_list) ~f:json_to_node_aux)
  
  let json_to_node j: _ node =
    let v = json_to_node_aux j in   set_relation v; v

  let lines_hd = List.hd_exn lines;;
  let lines_tl = List.tl_exn lines;;

  let json_hd = Yojson.Basic.from_string lines_hd;;

  let get_command j: string = j |> Yojson.Basic.Util.member "name" |> Yojson.Basic.Util.to_string;;
  let get_path j: int list = List.map (j |> Yojson.Basic.Util.member "path" |> Yojson.Basic.Util.to_list) Yojson.Basic.Util.to_int;;
  let get_node j: _ node = json_to_node (j |> Yojson.Basic.Util.member "node");;

  assert (String.equal (get_command json_hd) "init");;
  let n = get_node json_hd;;

  EVAL.eval prog n m;
  print_endline "EVAL OK!";
  print_endline (show_metric m);
  ()

  let rec modify (n : _ node) : unit =
    let children_size = List.map n.children size in
    let fuel = ref (Some (Random.int (1 + List.sum (module Int) children_size ~f:(fun i -> i)))) in
    let consume i =
      match !fuel with
      | None -> false
      | Some x ->
          if x >= i then (
            fuel := Some (x - i);
            false)
          else (
            fuel := None;
            true)
    in
    if consume 1 then EVAL.add_children prog n (EVAL.make_node prog []) 0 m
    else List.iter n.children ~f:(fun n -> if consume (size n) then modify n else ())

  let rec add_node (path: int list) (x: _ node) (y: _ node): unit = 
    match path with
    | [] -> panic "bad path!"
    | [i] -> EVAL.add_children prog x y i m
    | p_hd :: p_tl -> add_node p_tl (List.nth_exn x.children p_hd) y

  let rec remove_node (path: int list) (x: _ node) : unit = 
    match path with
    | [] -> panic "bad path!"
    | [i] -> EVAL.remove_children prog x i m
    | p_hd :: p_tl -> remove_node p_tl (List.nth_exn x.children p_hd)
  let rec replace_node (path: int list) (x: _ node) (y: _ node): unit = 
    match path with
    | [] -> panic "bad path!"
    | [i] -> EVAL.remove_children prog x i m; EVAL.add_children prog x y i m
    | p_hd :: p_tl -> replace_node p_tl (List.nth_exn x.children p_hd) y
    
  let fsm : metric =
    {
      read_count = m.read_count;
      meta_read_count = m.meta_read_count;
      write_count = m.write_count;
      meta_write_count = m.meta_write_count;
    }
  ;;

  Random.init 1729;
  (*taxicab number*)
  reset_metric m;

  List.iter lines_tl ~f:(fun line -> 
    let j = Yojson.Basic.from_string line in
    match get_command j with
    | "add" -> 
      (*print_endline (List.to_string string_of_int (get_path j));*)
      add_node (get_path j) n (get_node j);
    | "recalculate" -> (*print_endline "recalculate!";*) EVAL.recalculate prog n m
    | "remove" -> remove_node (get_path j) n
    | "replace" -> replace_node (get_path j) n (get_node j);
    | x -> panic x);;
  print_endline "INCREMENTAL EVAL OK!";
  print_endline (show_metric m);

  let open Yojson.Basic in
  to_channel out_file
    (`Assoc
      [
        ("name", `String EVAL.name);
        ("fs_read_count", `Int fsm.read_count);
        ("fs_meta_read_count", `Int fsm.meta_read_count);
        ("fs_write_count", `Int fsm.read_count);
        ("fs_meta_write_count", `Int fsm.meta_write_count);
        ("in_read_count", `Int m.read_count);
        ("in_meta_read_count", `Int m.meta_read_count);
        ("in_write_count", `Int m.read_count);
        ("in_meta_write_count", `Int m.meta_write_count);
      ]);
  output_string out_file "\n";
  ()
end

module MainFS = Main (Megatron.EvalFS.EVAL)
module MainDB = Main (Megatron.EvalDB.EVAL)
module MainPQ = Main (Megatron.EvalPQ.EVAL)
