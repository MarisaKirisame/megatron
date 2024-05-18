open Megatron.Parse
open Megatron.Ast

(*open Megatron.EvalFS;;*)
(*open Megatron.EvalDB;;*)
(*open Megatron.EvalPQ;;*)
(*open Megatron.EvalDB;;*)
open Megatron.Eval
open Core
open Yojson
open Megatron.Metric

let prog_def = parse "./layout.mt";;

Out_channel.newline stdout;;
print_endline (show_prog_def prog_def)

let prog = prog_of_prog_def prog_def;;

print_endline (show_prog prog)

let json = Yojson.Basic.from_file "data.json"
let m = fresh_metric ()

module Main (EVAL : Eval) = struct
  let rec json_to_node j : _ node =
    let open Yojson.Basic.Util in
    EVAL.make_node prog (List.map (j |> member "children" |> to_list) ~f:json_to_node)

  let n = json_to_node json;;

  set_relation n;;
  EVAL.eval prog n m;;
  print_endline "EVAL OK!";;
  print_endline (show_metric m);;
  reset_metric m

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
  ;;

  Random.init 1729;;
  modify n;;
  print_endline "EVAL AGAIN...";;
  EVAL.recalculate prog n m;;
  print_endline "EVAL AGAIN OK!";;
  print_endline (show_metric m)
end

module MainDB = Main (Megatron.EvalDB.EVAL)
module MainPQ = Main (Megatron.EvalPQ.EVAL)
