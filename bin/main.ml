open Megatron.Main;;
open Megatron.Ast;;

let prog_decl = simplify (parse "./layout.mt");;

print_newline ();;

print_endline (show_prog_decl prog_decl);;

let prog = prog_of_prog_decl prog_decl;;

let n = make_node [make_node[] prog; make_node[] prog] prog;;

set_children_parent n;;

print_endline (show_node n);;

eval n prog;;

print_endline "EVAL OK!";;

print_endline (show_node n);;
