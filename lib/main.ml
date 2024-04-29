open Ast
open Core
open TotalOrder

let parse (path : string): prog_decl =
  let chan = In_channel.create path in
  let lexbuf = Lexing.from_channel chan in
  try Parser.prog Lexer.read lexbuf
  with (Parser.Error) as exn ->
    let line_num = lexbuf.lex_curr_p.pos_lnum in
    let column_num = lexbuf.lex_curr_p.pos_cnum - lexbuf.lex_curr_p.pos_bol in
    Out_channel.printf "\nParse Error at Line %d Column %d:\n" line_num column_num;
    let filelines = In_channel.read_lines path in
    let line = List.nth_exn filelines (lexbuf.lex_curr_p.pos_lnum - 1) in
    let line_length = String.length line in
    let err_pointer = String.make (column_num - 1) '~' ^ "^" ^ String.make (line_length - column_num) '~' in
    Out_channel.printf "%s\n%s\n" line err_pointer;
    raise exn