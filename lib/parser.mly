%{
open Ast
open Core
%}

%token <int> INT
%token <string> ID
%token TRUE
%token FALSE
%token LEQ
%token GEQ
%token LT
%token GT
%token TIMES  
%token PLUS
%token LPAREN
%token RPAREN
%token LBRACKET
%token RBRACKET
%token LET
%token EQUALS
%token IN
%token IF
%token THEN
%token ELSE
%token EOF

%token CHILDREN
%token LEN
%token MAP
%token SUM

%token SELF
%token HAS_PARENT
%token PARENT
%token HAS_FIRST
%token FIRST
%token HAS_NEXT
%token NEXT
%token HAS_LAST
%token LAST
%token HAS_PREV
%token PREV

%token SLASH
%token COMMA
%token SEMICOLON
%token BANG
%token DOT
%token LARROW
%token RARROW
%token LCB
%token RCB
%token PROP
%token PROC

%nonassoc IN
%nonassoc ELSE
%left LEQ
%left PLUS
%left TIMES  

%start <Ast.prog_def> prog

%%

prog:
	| EOF { {prop_decls = []; proc_defs = []; order_decls = [] } }
	| x = prop_decl; y = prog { {prop_decls = x :: y.prop_decls; proc_defs = y.proc_defs; order_decls = y.order_decls} }
	| x = proc_decl; y = prog { {prop_decls = y.prop_decls; proc_defs = x :: y.proc_defs; order_decls = y.order_decls} }
	| x = order_decl; y = prog { assert (List.is_empty y.order_decls); {prop_decls = y.prop_decls; proc_defs = y.proc_defs; order_decls = x} }
	;
	
order_decl:
	| LBRACKET; RBRACKET; { [] }
	| LBRACKET; x = procname_plus; RBRACKET; { x }

procname_plus:
	| x = ID; { [x] }
	| x = ID; SEMICOLON; y = procname_plus { x :: y }

prop_decl:
	| PROP; x = ID; SEMICOLON { PropDecl(x) };

proc_decl:
	| PROC; x = ID; LPAREN; RPAREN; LCB; y = stmt_list; RCB { ProcDef(x, y) };

path:
    | SELF { Self }
	| FIRST; LPAREN; RPAREN { First }
    | NEXT; LPAREN; RPAREN { Next }
    | LAST; LPAREN; RPAREN { Last }
    | PARENT; LPAREN; RPAREN { Parent }
	| PREV; LPAREN; RPAREN { Prev }
	;

stmt:
	| SELF; DOT; y = ID; LARROW; z = expr { Write(Self, y, z) }
	| CHILDREN; DOT; x = ID; LPAREN; RPAREN { ChildrenCall(x) }
	;

stmt_list:
    | { [] }
	| x = stmt; SEMICOLON; y = stmt_list; { x :: y }

expr_list:
    | LPAREN; RPAREN { [] } 
	| LPAREN; x = expr_plus; RPAREN { x }
	;

expr_plus:
	| x = expr { [x] }
	| x = expr; COMMA; y = expr_plus { x :: y }
	;

binop:
	| LEQ { Leq }
	| LT { Lt }
	| GEQ { Geq }
	| GT { Gt }
	| PLUS { Add }
	;

expr:
	| HAS_PARENT; LPAREN; RPAREN { HasPath(Parent) }
	| HAS_FIRST; LPAREN; RPAREN { HasPath(First) }
	| HAS_PREV; LPAREN; RPAREN { HasPath(Prev) }
	| HAS_NEXT; LPAREN; RPAREN { HasPath(Next) }
	| HAS_LAST; LPAREN; RPAREN { HasPath(Last) }
	| IF; e1 = expr; THEN; e2 = expr; ELSE; e3 = expr { IfExpr (e1, e2, e3) }
	| x = path; DOT; y = ID { Read(x, y) }
	| i = INT { Int i }
	| LEN { Len }
	| MAP { Map }
	| SUM { Sum }
	| x = ID { Var x }
	| TRUE { Bool true }
	| FALSE { Bool false }
	| x = expr; y = binop; z = expr { Binop (x, y, z) }
	| LET; x = ID; EQUALS; e1 = expr; IN; e2 = expr { Let (x, e1, e2) }
	| LPAREN; e=expr; RPAREN {e}
	| x = expr; LBRACKET; y = expr; RBRACKET { Index(x, y) }
	;
	
