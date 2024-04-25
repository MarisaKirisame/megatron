%{
open Ast
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
%token ELSE
%token EOF

%token HAS_PARENT
%token PARENT
%token CHILDREN
%token LEN
%token MAP
%token SUM
%token SELF
%token SELF_POS

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

%start <Ast.prog_decl> prog

%%

prog:
	| EOF { {prop_decls = []; proc_decls = [] } }
	| x = prop_decl; y = prog { {prop_decls = x :: y.prop_decls; proc_decls = y.proc_decls} }
	| x = proc_decl; y = prog { {prop_decls = y.prop_decls; proc_decls = x :: y.proc_decls} }
	;
	
prop_decl:
	| PROP; x = ID; SEMICOLON { PropDecl(x) };

arg_list:
    | LPAREN; RPAREN { [] }
	| LPAREN; x = ID; RPAREN { [x] }

proc_decl:
	| PROC; x = ID; y = arg_list; LCB; z = stmt; RCB { ProcDecl(x, y, z) };

stmt:
	| x = expr; LARROW; y = expr { WriteRef(x, y) }
 	| IF; e1 = expr; LCB; e2 = stmt; RCB; ELSE; LCB; e3 = stmt; RCB { If (e1, e2, e3) }
	| x = stmt; SEMICOLON; y = stmt { Seq(x, y) }
	| x = expr; DOT; y = ID; z = expr_list { TailCallProc(x, y, z) }
	| { Skip }
	;

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
	| BANG; e=expr { ReadRef e }
	| x = expr; y = expr_list { Call(x, y) }
	| lhs = expr; DOT; rhs = ID { Access(lhs, rhs) }
	| i = INT { Int i }
	| HAS_PARENT { HasParent }
	| PARENT { Parent }
	| CHILDREN { Children }
	| LEN { Len }
	| MAP { Map }
	| SUM { Sum }
	| SELF { Self }
	| SELF_POS { SelfPos }
	| x = ID { Var x }
	| TRUE { Bool true }
	| FALSE { Bool false }
	| x = expr; y = binop; z = expr { Binop (x, y, z) }
	| LET; x = ID; EQUALS; e1 = expr; IN; e2 = expr { Let (x, e1, e2) }
	| LPAREN; e=expr; RPAREN {e}
	| x = expr; LBRACKET; y = expr; RBRACKET { Index(x, y) }
	| SLASH; x = ID; RARROW; y = expr { Func(x, y) }
	;
	
