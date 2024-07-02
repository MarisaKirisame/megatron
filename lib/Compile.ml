open Ast
open Core
open EXN
open TypeCheck

let header =
  "#include <string>\n\n\
  \  #include <cassert>\n\n\
  \  #include <variant>\n\n\
  \  #include <unordered_map>\n\n\
  \  #include <stdexcept>\n\n\
  \  #include <ranges>\n\n\
  \  #include <iterator>\n\n\
  \  #include <vector>\n\n\
  \  #include <cmath>\n\n\
  \  #include <memory>\n\
  \  struct Value {\n\
  \    std::variant<int, double, bool, std::string> v;\n\
  \  };\n\
  \  struct Content;\n\
  \  using Node = std::shared_ptr<Content>;\n\
  \  "

let forward =
  "template<typename T>\n\
  \  T panic() { assert(false); }\n\
  \  template<typename T>\n\
  \  T get_attribute(const Content& self, const std::string& str) { \n\
  \    return std::get<T>(self.attr.at(str).v);\n\
  \  }\n\
  \  bool has_attribute(const Content& self, const std::string& str) { \n\
  \    return self.attr.count(str) != 0;\n\
  \  }\n\
  \  template<typename T>\n\
  \  T get_property(const Content& self, const std::string& str) {\n\
  \    return std::get<T>(self.prop.at(str).v);\n\
  \  }\n\
  \  bool has_property(const Content& self, const std::string& str) {\n\
  \    return self.prop.count(str) != 0;\n\
  \  }\n\
  \  template<typename T>\n\
  \  T max(T x, T y) { return x > y ? x : y; }\n\
  \  template<typename T>\n\
  \  T plus(T x, T y) { return x + y; }\n\
  \  template<typename T>\n\
  \  T minus(T x, T y) { return x - y; }\n\
  \  template<typename T>\n\
  \  T mult(T x, T y) { return x * y; }\n\
  \  template<typename T>\n\
  \  T divide(T x, T y) { return x * y; }\n\
  \  template<typename T>\n\
  \  bool gt(T x, T y) { return x > y; }\n\
  \  bool eq(int x, int y) { return x == y; }\n\
  \  bool eq(double x, double y) { \n\
  \    return (std::isnan(x) && std::isnan(y)) || (x == y);\n\
  \  }\n\
  \  bool eq(const std::string& x, const std::string& y) { return x == y; }\n\
  \  bool neq(int x, int y) { return x != y; }\n\
  \  bool neq(double x, double y) { return !eq(x, y); }\n\
  \  bool neq(const std::string& x, const std::string& y) { return x != y; }\n\
  \  double string_to_float(const std::string& x) { \n\
  \    return std::stod(x);\n\
  \  }\n\
  \  bool string_is_float(const std::string& x) {\n\
  \    try {\n\
  \      std::stod(x);\n\
  \      return true;\n\
  \    } catch(const std::invalid_argument&) {\n\
  \      return false;\n\
  \    }\n\
  \  }\n\
  \  double int_to_float(int x) {\n\
  \    return static_cast<double>(x);\n\
  \  }\n\
  \  std::string strip_suffix(const std::string& str, const std::string& sfx) {\n\
  \    return str.substr(0, str.size() - sfx.size());\n\
  \  }\n\
  \  bool has_suffix(const std::string& str, const std::string& sfx) {\n\
  \    return str.substr(str.size() - sfx.size(), sfx.size()) == sfx;\n\
  \  }\n\
  \  bool has_prefix(const std::string& str, const std::string& pfx) {\n\
  \    return str.substr(0, pfx.size()) == pfx;\n\
  \  }\n\
  \  std::string nth_by_sep(const std::string& str, const std::string& sep, int nth) {\n\
  \    auto to_string = [](auto&& r) -> std::string {\n\
  \      const auto data = &*r.begin();\n\
  \      const auto size = static_cast<std::size_t>(std::ranges::distance(r));\n\
  \      return std::string{data, size};\n\
  \    };\n\
  \    assert(sep.size() == 1);\n\
  \    auto range = str | std::ranges::views::split(sep.at(0)) | std::ranges::views::transform(to_string);\n\
  \    return *std::next(range.begin(), nth);\n\
  \  }\n\
  \  "

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
  "struct Content { \n\
  \    Content* parent = nullptr; \n\
  \    Content* prev = nullptr; \n\
  \    Content* first = nullptr; \n\
  \    Content* last = nullptr; \n\
  \    std::vector<Node> children;\n\
  \    std::string name;\n\
  \    std::unordered_map<std::string, Value> attr;\n\
  \    std::unordered_map<std::string, Value> prop;"
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
    | GetProperty p ->
        "get_property<" ^ compile_type_expr (Hashtbl.find_exn env.prop_type p) ^ ">(self, " ^ quoted p ^ ")"
    | HasProperty p -> "has_property(self, " ^ quoted p ^ ")"
    | GetAttribute p ->
        "get_attribute<" ^ compile_type_expr (Hashtbl.find_exn env.attr_type p) ^ ">(self, " ^ quoted p ^ ")"
    | HasAttribute p -> "has_attribute(self, " ^ quoted p ^ ")"
    | Float f -> "double" ^ bracket (string_of_float f)
    | Call (f, xs) -> compile_func f ^ bracket (String.concat (List.map xs ~f:recurse) ~sep:",")
    | Read (path, p) -> compile_path path ^ "->" ^ p
    | HasPath path -> compile_path path ^ "!= nullptr"
    | Bool b -> string_of_bool b
    | Panic (t, _) -> "panic<" ^ compile_type_expr t ^ ">()"
    | Or (x, y) -> recurse x ^ "||" ^ recurse y
    | And (x, y) -> recurse x ^ "&&" ^ recurse y
    | GetName -> "self.name"
    | Int x -> "int" ^ bracket (string_of_int x) (*| _ -> panic (show_expr expr)*))

let compile_stmt env stmt =
  match stmt with
  | Write (name, expr) -> "self." ^ name ^ "=" ^ compile_expr env expr ^ ";\n"
  | BBCall name -> name ^ "(self);"
  | ChildrenCall name -> "for (const Node& n : self.children) {" ^ name ^ "(*n);}"
  | _ -> panic (show_stmt stmt)

let compile_stmts env stmts = String.concat (List.map stmts ~f:(compile_stmt env))
let compile_bb env (BasicBlock (name, stmts)) = "void " ^ name ^ "(Content& self)" ^ "{" ^ compile_stmts env stmts ^ "}"

let compile_proc env (ProcessedProc (name, stmts)) =
  "void " ^ name ^ "(Content& self)" ^ "{" ^ compile_stmts env stmts ^ "}"

let compile (p : _ prog) (env : tyck_env) : string =
  header ^ compile_typedef env ^ forward
  ^ String.concat (List.map (Hashtbl.to_alist p.bbs) ~f:(fun (_, x) -> compile_bb env x))
  ^ String.concat (List.map (Hashtbl.to_alist p.procs) ~f:(fun (_, x) -> compile_proc env x))
  ^ "Node root;\n  int main() {}"
