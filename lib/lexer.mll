{
open Parser
}

let white = [' ' '\t']+
let digit = ['0'-'9']
let int = 'i' ('-'?) (digit+)
let float = '-'? digit+
let letter = ['a'-'z' 'A'-'Z' '_' '-']
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
  | "+" { PLUS }
  | "-" { MINUS }
  | "*" { TIMES }
  | "/" { DIVIDE }
  | "(" { LPAREN }
  | ")" { RPAREN }
  | "let" { LET }
  | "=" { EQ }
  | "!=" { NEQ }
  | "in" { IN }
  | "if" { IF }
  | "else" { ELSE }
  | "var" { VAR }
  | "proc" { PROC }
  | "<-" { LARROW }
  | "->" { RARROW }
  | "[" { LBRACKET }
  | "]" { RBRACKET }
  | "\\" { SLASH }
  | "," { COMMA }
  | ";" { SEMICOLON }
  | "!" { NOT }
  | "." { DOT }
  | "{" { LCB }
  | "}" { RCB }
  | "||" { OR }
  | "&&" { AND }
  | '"' { read_string (Buffer.create 17) lexbuf }
  | "has_parent" { HAS_PARENT }
  | "parent" { PARENT }
  | "has_first" { HAS_FIRST }
  | "has_prev" { HAS_PREV }
  | "has_next" { HAS_NEXT }
  | "has_last" { HAS_LAST }
  | "children" { CHILDREN }
  | "has_prop" { HAS_PROPERTY }
  | "get_prop" { GET_PROPERTY }
  | "has_attr" { HAS_ATTRIBUTE }
  | "get_attr" { GET_ATTRIBUTE }
  | "get_name" { GET_NAME }
  | "has_suffix" { HAS_SUFFIX }
  | "strip_suffix" { STRIP_SUFFIX }
  | "has_prefix" { HAS_PREFIX }
  | "strip_prefix" { STRIP_PREFIX }
  | "string_to_int" { STRING_TO_INT }
  | "string_to_float" { STRING_TO_FLOAT }
  | "int_to_float" { INT_TO_FLOAT }
  | "nth_by_sep" { NTH_BY_SEP }
  | "len" { LEN }
  | "map" { MAP }
  | "sum" { SUM }
  | "max" { MAX }
  | "self" { SELF }
  | "first" { FIRST }
  | "next" { NEXT }
  | "prev" { PREV }
  | "last" { LAST }
  | "then" { THEN }
  | "panic" { PANIC }
  | int { let s = (Lexing.lexeme lexbuf) in 
  let pfx = "i" in INT (int_of_string (String.sub s (String.length pfx) (String.length s - String.length pfx))) }
  | float { FLOAT (float_of_string (Lexing.lexeme lexbuf)) }
  | id { ID (Lexing.lexeme lexbuf) }
  | newline { Lexing.new_line lexbuf; read lexbuf }
  | eof { EOF }
  | _ as c { failwith (Printf.sprintf "unexpected character: %C" c) }
and read_comment = parse
  | "*)" { read lexbuf }
  | newline { Lexing.new_line lexbuf; read_comment lexbuf }
  | eof { failwith "unterminated comment" }
  | _ { read_comment lexbuf }
and read_string buf =
  parse
  | '"'       { STRING (Buffer.contents buf) }
  | '\\' '/'  { Buffer.add_char buf '/'; read_string buf lexbuf }
  | '\\' '\\' { Buffer.add_char buf '\\'; read_string buf lexbuf }
  | '\\' 'b'  { Buffer.add_char buf '\b'; read_string buf lexbuf }
  | '\\' 'f'  { Buffer.add_char buf '\012'; read_string buf lexbuf }
  | '\\' 'n'  { Buffer.add_char buf '\n'; read_string buf lexbuf }
  | '\\' 'r'  { Buffer.add_char buf '\r'; read_string buf lexbuf }
  | '\\' 't'  { Buffer.add_char buf '\t'; read_string buf lexbuf }
  | [^ '"' '\\']+
    { Buffer.add_string buf (Lexing.lexeme lexbuf);
      read_string buf lexbuf
    }
  | _ { failwith ("Illegal string character: " ^ (Lexing.lexeme lexbuf)) }
  | eof { failwith "String is not terminated" }