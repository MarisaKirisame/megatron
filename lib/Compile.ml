open Ast
open Core
open EXN
open Metric
open TypeCheck
open List

let header = 
  "#include <string>\n
  #include <cassert>\n
  #include <variant>\n
  #include <unordered_map>\n
  struct Value {
    std::variant<int, double, bool, std::string> v;
  };
  struct Content;"
  
let forward = 
  "template<typename T>
  T panic() { assert(false); }
  template<typename T>
  T get_attribute(const Content& self, const std::string& str) { 
    return std::get<T>(self.attr.at(str).v);
  }
  bool has_attribute(const Content& self, const std::string& str) { 
    return self.attr.count(str) != 0;
  }
  template<typename T>
  T get_property(const Content& self, const std::string& str) {
    return std::get<T>(self.prop.at(str).v);
  }
  bool has_property(const Content& self, const std::string& str) {
    return self.prop.count(str) != 0;
  }
  template<typename T>
  T max(T x, T y) { return x > y ? x : y; }
  template<typename T>
  T plus(T x, T y) { return x + y; }
  template<typename T>
  T minus(T x, T y) { return x - y; }
  template<typename T>
  T mult(T x, T y) { return x * y; }
  template<typename T>
  T divide(T x, T y) { return x * y; }
  template<typename T>
  bool gt(T x, T y) { return x > y; }
  bool eq(int x, int y) { return x == y; }
  bool eq(double x, double y) { assert(false); }
  bool eq(const std::string& x, const std::string& y) { return x == y; }
  bool neq(int x, int y) { return x != y; }
  bool neq(double x, double y) { return !eq(x, y); }
  bool neq(const std::string& x, const std::string& y) { return x != y; }
  double string_to_float(const std::string& x) { }
  bool string_is_float(const std::string& x) { }
  double int_to_float(int x) { }
  std::string strip_suffix(const std::string& str, const std::string& sfx) { }
  bool has_suffix(const std::string& str, const std::string& sfx) { }
  bool has_prefix(const std::string& str, const std::string& sfx) { }
  std::string nth_by_sep(const std::string& str, const std::string& sep, int nth) { }
  "

let compile_func f =
  match f with
  | StringToFloat -> "string_to_float"
  | Plus -> "plus"
  | Eq -> "eq"
  | HasSuffix -> "has_suffix"
  | StripSuffix -> "strip_suffix"
  | StringIsFloat -> "string_is_float"
  | Not -> "not"
  | Neq -> "neq"
  | HasPrefix -> "has_prefix"
  | IntToFloat -> "int_to_float"
  | Div -> "divide"
  | Mult -> "mult"
  | NthBySep -> "nth_by_sep"
  | Max -> "max"
  | Minus -> "minus"
  | Gt -> "gt"
  | _ -> panic (show_func f)

let compile_type_expr ty =
  match resolve ty with
  | TInt -> "int"
  | TBool -> "bool"
  | TString -> "std::string"
  | TFloat -> "double"
  | _ -> panic (show_type_expr ty)

let compile_field name type_expr = compile_type_expr type_expr ^ " " ^ name ^ ";"

let compile_typedef (env : tyck_env) : string =
  "struct Content { 
    Content* parent = nullptr; 
    Content* prev = nullptr; 
    Content* first = nullptr; 
    Content* last = nullptr; 
    std::string name;
    std::unordered_map<std::string, Value> attr;
    std::unordered_map<std::string, Value> prop;"
  ^ String.concat (List.map (Hashtbl.to_alist env.var_type) ~f:(fun (x, y) -> compile_field x y))
  ^ "};"

let bracket str = "(" ^ str ^ ")"

let compile_path path =
  match path with
  | Prev -> "self.prev"
  | Self -> "(&self)"
  | Parent -> "self.parent"
  | Last -> "self.last"
  | First -> "self.first"
  | _ -> panic (show_path path)

let quoted str = "\"" ^ String.escaped str ^ "\""

let rec compile_expr env expr =
  let recurse expr = compile_expr env expr in
  bracket
    (match expr with
    | IfExpr (i, t, e) -> recurse i ^ "?" ^ recurse t ^ ":" ^ recurse e
    | String b -> quoted b
    | GetProperty p -> "get_property<" ^ compile_type_expr (Hashtbl.find_exn env.prop_type p) ^ ">(self, " ^ quoted p ^ ")"
    | HasProperty p -> "has_property(self, " ^ quoted p ^ ")"
    | GetAttribute p -> "get_attribute<" ^ compile_type_expr (Hashtbl.find_exn env.attr_type p) ^ ">(self, " ^ quoted p ^ ")"
    | HasAttribute p -> "has_attribute(self, " ^ quoted p ^ ")"
    | Float f -> "double" ^ bracket (string_of_float f)
    | Call (f, xs) -> compile_func f ^ bracket (String.concat (List.map xs ~f:recurse) ~sep:",")
    | Read (path, p) -> compile_path path ^ "->" ^ p
    | HasPath path -> compile_path path ^ "!= nullptr"
    | Bool b -> string_of_bool b
    | Panic (t, xs) -> "panic<" ^ compile_type_expr t ^ ">()"
    | Or (x, y) -> recurse x ^ "||" ^ recurse y
    | And (x, y) -> recurse x ^ "&&" ^ recurse y
    | GetName -> "self.name"
    | Int x -> "int" ^ bracket (string_of_int x)
    | _ -> panic (show_expr expr))

let compile_stmt env stmt =
  match stmt with
  | Write (Self, name, expr) -> "self." ^ name ^ "=" ^ compile_expr env expr ^ ";\n"
  | _ -> panic (show_stmt stmt)

let compile_stmts env stmts = String.concat (List.map stmts ~f:(compile_stmt env))
let compile_bbs env (BasicBlock (name, stmts)) = "void " ^ name ^ "(Content& self)" ^ "{" ^ compile_stmts env stmts ^ "}"

let compile (p : _ prog) (env : tyck_env) : string =
  header ^ compile_typedef env ^ forward
  ^ String.concat (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (_, x) -> compile_bbs env x))
  ^ "int main() {}"
