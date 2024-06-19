%{
open Ast
open Core
%}

%token <int> INT
%token <float> FLOAT
%token <string> ID
%token <string> STRING
%token TRUE
%token FALSE
%token LEQ
%token GEQ
%token LT
%token GT

%token PLUS
%token MINUS
%token TIMES
%token DIVIDE

%token LPAREN
%token RPAREN
%token LBRACKET
%token RBRACKET
%token LET
%token EQ
%token NEQ
%token IN
%token IF
%token THEN
%token ELSE
%token EOF
%token AND
%token OR

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
%token MAX
%token STRING_TO_FLOAT
%token INT_TO_FLOAT

%token HAS_PROPERTY
%token GET_PROPERTY
%token HAS_ATTRIBUTE
%token GET_ATTRIBUTE
%token GET_NAME

%token HAS_SUFFIX
%token HAS_PREFIX
%token STRIP_SUFFIX
%token STRIP_PREFIX
%token STRING_TO_INT
%token NTH_BY_SEP

%token SLASH
%token COMMA
%token SEMICOLON
%token NOT
%token DOT
%token LARROW
%token RARROW
%token LCB
%token RCB
%token VAR
%token PROC
%token PANIC

%nonassoc IN
%nonassoc ELSE
%left LEQ
%left PLUS
%left TIMES  

%start <Ast.prog_def> prog

%%

prog:
	| EOF { {var_decls = []; proc_defs = []; order_decls = [] } }
	| x = var_decl; y = prog { {var_decls = x :: y.var_decls; proc_defs = y.proc_defs; order_decls = y.order_decls} }
	| x = proc_decl; y = prog { {var_decls = y.var_decls; proc_defs = x :: y.proc_defs; order_decls = y.order_decls} }
	| x = order_decl; y = prog { assert (List.is_empty y.order_decls); {var_decls = y.var_decls; proc_defs = y.proc_defs; order_decls = x} }
	;
	
order_decl:
	| LBRACKET; RBRACKET; { [] }
	| LBRACKET; x = procname_plus; RBRACKET; { x }

procname_plus:
	| x = ID; { [x] }
	| x = ID; SEMICOLON; y = procname_plus { x :: y }

var_decl:
	| VAR; x = ID; SEMICOLON { VarDecl(x) };

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
	| PLUS { Plus }
	| MINUS { Minus }
	| TIMES { Mult }
	| DIVIDE { Div }
	| EQ { Eq }
	| NEQ { Neq }
	;

expr:
	| HAS_PARENT; LPAREN; RPAREN { HasPath(Parent) }
	| HAS_FIRST; LPAREN; RPAREN { HasPath(First) }
	| HAS_PREV; LPAREN; RPAREN { HasPath(Prev) }
	| HAS_NEXT; LPAREN; RPAREN { HasPath(Next) }
	| HAS_LAST; LPAREN; RPAREN { HasPath(Last) }
	| HAS_PROPERTY; LPAREN; x = ID; RPAREN { HasProperty(x) }
	| GET_PROPERTY; LPAREN; x = ID; RPAREN { GetProperty(x) }
	| HAS_ATTRIBUTE; LPAREN; x = ID; RPAREN { HasAttribute(x) }
	| GET_ATTRIBUTE; LPAREN; x = ID; RPAREN { GetAttribute(x) }
	| PANIC; x = expr_list { Panic(x) }
	| STRING_TO_INT; LPAREN; x = expr; RPAREN { StringToInt(x) }
	| STRING_TO_FLOAT; LPAREN; x = expr; RPAREN { StringToFloat(x) }
	| INT_TO_FLOAT; LPAREN; x = expr; RPAREN { IntToFloat(x) }
	| NTH_BY_SEP; LPAREN; x = expr; COMMA; y = expr; COMMA; z = expr; RPAREN { NthBySep(x, y, z) }
	| MAX; LPAREN; x = expr; COMMA; y = expr; RPAREN { Binop(x, Max, y) }
	| GET_NAME; LPAREN; RPAREN { GetName }
	| IF; e1 = expr; THEN; e2 = expr; ELSE; e3 = expr { IfExpr (e1, e2, e3) }
	| x = STRING { String(x) }
	| x = path; DOT; y = ID { Read(x, y) }
	| i = INT { Int i }
	| f = FLOAT { Float f }
	| HAS_SUFFIX; LPAREN; x = expr; COMMA; y = expr; RPAREN { HasSuffix(x, y) }
	| HAS_PREFIX; LPAREN; x = expr; COMMA; y = expr; RPAREN { HasPrefix(x, y) }
	| STRIP_SUFFIX; LPAREN; x = expr; COMMA; y = expr; RPAREN { StripSuffix(x, y) }
	| STRIP_PREFIX; LPAREN; x = expr; COMMA; y = expr; RPAREN { StripPrefix(x, y) }
	| TRUE { Bool true }
	| FALSE { Bool false }
	| x = expr; y = binop; z = expr { Binop (x, y, z) }
	| LET; x = ID; EQ; e1 = expr; IN; e2 = expr { Let (x, e1, e2) }
	| LPAREN; e=expr; RPAREN { e }
	| x = expr; LBRACKET; y = expr; RBRACKET { Index(x, y) }
	| x = expr; AND; y = expr { And(x, y) }
	| x = expr; OR; y = expr { Or(x, y) }
	| NOT; x = expr { Not(x) }
	;
	
