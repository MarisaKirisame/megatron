%{
open Ast
open Core
%}

%token <int> INT_LIT
%token <float> FLOAT_LIT
%token <string> ID
%token <string> STRING_LIT

%token INT
%token FLOAT
%token COLON

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
%token EQ
%token NEQ
%token IF
%token THEN
%token ELSE
%token EOF
%token AND
%token OR

%token CHILDREN
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

%token STRING_TO_INT
%token STRING_TO_FLOAT
%token STRING_IS_INT
%token STRING_IS_FLOAT
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
%token NTH_BY_SEP

%token COMMA
%token SEMICOLON
%token NOT
%token DOT
%token LARROW
%token LCB
%token RCB
%token VAR
%token PROC
%token PANIC

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

type_expr:
	| INT { TInt }
	| FLOAT { TFloat }
	;

var_decl:
	| VAR; x = ID; COLON; y = type_expr SEMICOLON { VarDecl(x, y) };

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
	| PANIC; xs = expr_list { Panic(xs) }
	| f = func; xs = expr_list { Call(f, xs) }
	| GET_NAME; LPAREN; RPAREN { GetName }
	| IF; e1 = expr; THEN; e2 = expr; ELSE; e3 = expr { IfExpr (e1, e2, e3) }
	| x = STRING_LIT { String(x) }
	| x = path; DOT; y = ID { Read(x, y) }
	| i = INT_LIT { Int i }
	| f = FLOAT_LIT { Float f }
	| TRUE { Bool true }
	| FALSE { Bool false }
	| x = expr; y = binop; z = expr { Call (y, [x; z]) }
	| LPAREN; e=expr; RPAREN { e }
	| x = expr; AND; y = expr { And(x, y) }
	| x = expr; OR; y = expr { Or(x, y) }
	;
	
func:
	| HAS_SUFFIX { HasSuffix }
	| HAS_PREFIX { HasPrefix }
	| STRIP_SUFFIX { StripSuffix }
	| STRIP_PREFIX  { StripPrefix }
	| STRING_TO_INT { StringToInt }
	| STRING_TO_FLOAT { StringToFloat }
	| STRING_IS_INT { StringIsInt }
	| STRING_IS_FLOAT { StringIsFloat }
	| INT_TO_FLOAT { IntToFloat }
	| NTH_BY_SEP { NthBySep }
	| MAX { Max }
	| NOT { Not }
	;