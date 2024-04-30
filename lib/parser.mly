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
%token THEN
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

proc_decl:
	| PROC; x = ID; LPAREN; RPAREN; LCB; y = stmt; RCB { ProcDecl(x, y) };

stmt:
	| x = ID; EQUALS; y = expr { LocalDef(x, y) }
	| x = stmt; SEMICOLON; y = stmt { Seq(x, y) }
	| CHILDREN; DOT; x = ID; LPAREN; RPAREN { ChildrenCall(x) }
	| SELF; DOT; x = ID; LPAREN; RPAREN { SelfCall(x) }
	| SELF; DOT; x = ID; LARROW; y = expr { SelfWrite(x, y) }
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
	| IF; e1 = expr; THEN; e2 = expr; ELSE; e3 = expr { If (e1, e2, e3) }
	| BANG; e=expr { ReadRef e }
	| x = expr; y = expr_list { Call(x, y) }
	| CHILDREN; DOT; id = ID { ChildrenAccess(id) }
	| PARENT; LPAREN; RPAREN; DOT; id = ID { ParentAccess(id) }
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
	;
	
