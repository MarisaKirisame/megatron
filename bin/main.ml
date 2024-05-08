open Megatron.Parse;;
open Megatron.Ast;;
open Megatron.EvalPQ;;
open Core;;

let prog_decl = simplify (parse "./layout.mt");;

Out_channel.newline stdout;;

print_endline (show_prog_decl prog_decl);;

let prog = prog_of_prog_decl prog_decl;;

print_endline (string_of_reads (reads_of_stmt (stmt_of_proc_decl (Hashtbl.find_exn prog.procs "compute_height"))));
print_endline (show_stmt (simplify_stmt (strip_tailcall (stmt_of_proc_decl (Hashtbl.find_exn prog.procs "compute_height")))));;

let n = make_node [make_node[] prog; make_node[] prog] prog;;

set_relation n;;

print_endline (show_node n);;

eval prog n;;

print_endline "EVAL OK!";;

print_endline (show_node n);;

add_children n (make_node [] prog) prog;

print_endline "EVAL AGAIN...";;

recalculate prog;

print_endline "EVAL AGAIN OK!";;

print_endline (show_node n);;
(*
add_children n (make_node [] prog);;

recalculate();;

print_endline "RECALCULATE OK!";;

print_endline (show_node n);;

add_children (List.hd n.children.value) (make_node [] prog);;

recalculate();;

print_endline "RECALCULATE AGAIN OK!";;

print_endline (show_node n);;

add_children (List.hd n.children.value) (make_node [] prog);;

recalculate();;

print_endline "RECALCULATE YET AGAIN OK!";;

print_endline (show_node n);;
*)