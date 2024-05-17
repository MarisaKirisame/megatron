open Megatron.Parse;;
open Megatron.Ast;;
(*open Megatron.EvalFS;;*)
(*open Megatron.EvalDB;;*)
(*open Megatron.EvalPQ;;*)
open Megatron.EvalPQ;;
open Megatron.Eval;;
open Core;;
open Yojson;;
open Megatron.Metric;;

let json = Yojson.Basic.from_file "data.json";;

let prog_def = parse "./layout.mt";;

Out_channel.newline stdout;;

print_endline (show_prog_def prog_def);;

let prog = prog_of_prog_def prog_def;;

let m = fresh_metric ();;

print_endline (show_prog prog);;

let rec json_to_node j: _ node = 
  let open Yojson.Basic.Util in
  make_node prog (List.map (j |> member "children" |> to_list) json_to_node);;

let n = json_to_node json;;

set_relation n;;

eval prog n m;;

print_endline "EVAL OK!";;

print_endline (show_metric m);;

reset_metric m;;

Random.init 1729;;

let rec size (n: _ node): int = 
  1 + List.sum (module Int) n.children ~f:size;;

let rec modify (n: _ node): unit = 
  let children_size = List.map n.children size in
  let fuel = ref (Some (Random.int (1 + List.sum (module Int) children_size ~f:(fun i -> i)))) in
  let consume i =
    match !fuel with
    | None -> false
    | Some x -> if x >= i then (fuel := Some (x - i); false) else (fuel := None; true) in
  if consume 1
  then add_children prog n (make_node prog []) 0 m
  else List.iter n.children ~f:(fun n -> if consume (size n) then modify n else ());;

modify n;;

print_endline "EVAL AGAIN...";;

recalculate prog n m;;

print_endline "EVAL AGAIN OK!";;

print_endline (show_metric m);;