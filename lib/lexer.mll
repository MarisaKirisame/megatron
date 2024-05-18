{
open Parser
}

let white = [' ' '\t']+
let digit = ['0'-'9']
let int = '-'? digit+
let letter = ['a'-'z' 'A'-'Z' '_']
let id = letter (letter|digit)*
let newline = '\r' | '\n' | "\r\n"

rule read = 
  parse
  | "(*" { read_comment lexbuf }
  | white { read lexbuf }
  | "true" { TRUE }
  | "false" { FALSE }
  | "<=" { LEQ }
  | "<" { LT }
  | ">=" { GEQ }
  | ">" { GT }
  | "*" { TIMES }
  | "+" { PLUS }
  | "(" { LPAREN }
  | ")" { RPAREN }
  | "let" { LET }
  | "=" { EQUALS }
  | "in" { IN }
  | "if" { IF }
  | "else" { ELSE }
  | "prop" { PROP }
  | "proc" { PROC }
  | "<-" { LARROW }
  | "->" { RARROW }
  | "[" { LBRACKET }
  | "]" { RBRACKET }
  | "\\" { SLASH }
  | "," { COMMA }
  | ";" { SEMICOLON }
  | "!" { BANG }
  | "." { DOT }
  | "{" { LCB }
  | "}" { RCB }
  | "has_parent" { HAS_PARENT }
  | "parent" { PARENT }
  | "has_first" { HAS_FIRST }
  | "has_prev" { HAS_PREV }
  | "has_next" { HAS_NEXT }
  | "has_last" { HAS_LAST }
  | "children" { CHILDREN }
  | "len" { LEN }
  | "map" { MAP }
  | "sum" { SUM }
  | "self" { SELF }
  | "first" { FIRST }
  | "next" { NEXT }
  | "prev" { PREV }
  | "last" { LAST }
  | "then" { THEN }
  | id { ID (Lexing.lexeme lexbuf) }
  | int { INT (int_of_string (Lexing.lexeme lexbuf)) }
  | newline { Lexing.new_line lexbuf; read lexbuf }
  | eof { EOF }
  | _ as c { failwith (Printf.sprintf "unexpected character: %C" c) }
and read_comment = parse
  | "*)" { read lexbuf }
  | newline { Lexing.new_line lexbuf; read_comment lexbuf }
  | eof { failwith (Printf.sprintf "unterminated comment") }
  | _ { read_comment lexbuf }