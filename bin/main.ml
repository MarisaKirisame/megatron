open Megatron.Parse;;
open Megatron.Ast;;
(*open Megatron.EvalFS;;*)
(*open Megatron.EvalDB;;*)
(*open Megatron.EvalPQ;;*)
open Megatron.EvalPQ;;
open Megatron.Eval;;
open Core;;
let prog_def = parse "./layout.mt";;

Out_channel.newline stdout;;

print_endline (show_prog_def prog_def);;

let prog = prog_of_prog_def prog_def;;

print_endline (show_prog prog);;

let n = make_node [make_node[] prog; make_node[] prog] prog;;

set_relation n;;

print_endline (show_node n);;

eval prog n;;

print_endline "EVAL OK!";;

print_endline (show_node n);;

add_children prog n (make_node [] prog) 1;

print_endline (show_node n);;

print_endline "EVAL AGAIN...";;

recalculate prog n;;

print_endline "EVAL AGAIN OK!";;

print_endline (show_node n);;