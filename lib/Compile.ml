open Ast
open Core
open Eval
open Common
open SD
open TypeCheck

let truncate_length = 120
let truncate str = if String.length str <= truncate_length then str else String.sub str ~pos:0 ~len:truncate_length
let is_absolutely_pure_function f = match f with "Cons" -> true | _ -> false

let is_pure_function f =
  match f with
  | "InputChangeMetric" | "OutputChangeMetric" | "PrintEndline" | "WriteMetric" | "HashtblAddExn" | "HashtblForceRemove"
  | "PushStack" | "Assert" | "IterLines" | "JsonToChannel" | "OutputString" | "ResetMetric" | "ClearStack" | "WriteRef"
  | "ReadMetric" | "HashtblSet" | "WriteJson" | "MetaReadMetric" | "MetaWriteMetric" | "RemoveMeta" | "NextTotalOrder"
  | "QueuePop" | "MetricQueueSize" | "MetricRecordOverhead" ->
      false
  | "MakeUnit" | "ListIsEmpty" | "IntEqual" | "ListLength" | "ListSplitN" | "Zro" | "Fst" | "FreshMetric" | "Cons"
  | "Nil" | "IsNone" | "HashtblFind" | "UnSome" | "ListLast" | "JsonMember" | "ListMatch" | "OptionIter" | "OptionMatch"
  | "ListIter" | "HashtblFind" | "EqualValue" | "ListZip" | "ListDropLast" | "ListTl" | "ListHead" | "ListHeadExn"
  | "ListTailExn" | "ListIter2" | "HashtblContain" | "IsSome" | "HashtblFindExn" | "ListIsSingleton" | "RFMatch"
  | "TotalOrderEqual" ->
      true
  | _ -> panic ("is_pure_function:" ^ f)

let rec is_pure x =
  match x with
  | CSetMember _ | CPanic _ -> false
  | CInt _ | CString _ | CVar _ -> true
  | CAssert _ -> false
  | CFun (name, body) -> is_pure body
  | CSeq xs -> List.for_all xs ~f:is_pure
  | CApp (CVar _, _) -> false
  | CApp (f, xs) -> is_pure f && List.for_all xs ~f:is_pure
  | CPF f -> is_pure_function f
  | CIf (i, t, e) -> is_pure i && is_pure t && is_pure e
  | CNot x -> is_pure x
  | CGetMember (x, f) -> is_pure x
  | CLet (lhs, rhs, body) -> is_pure rhs && is_pure body
  | CStringMatch (str, cases, default) ->
      is_pure str && List.for_all cases ~f:(fun (_, c) -> is_pure c) && is_pure default
  | _ -> Common.panic ("is_pure:" ^ truncate (show_code x))

let rec simplify (p : prog) x =
  let recurse x = simplify p x in
  match x with
  | CString _ | CVar _ | CPF _ | CInt _ | CBool _ | CFloat _ -> x
  | CApp (CPF "ReadMetric", [ x ]) ->
      x (* not correct, but we dont care about ReadMetric rn, and this simplify the generated code *)
  | CAssert (_, _, x) -> x (*also not correct.*)
  | CApp (CPF "OptionMatch", [ x; CFun (_, CApp (CPF "MakeUnit", [])); CFun (_, CApp (CPF "MakeUnit", [])) ]) -> x
  | CApp (CPF "OptionMatch", [ x; CFun (_, CPanic _); y ]) -> CApp (y, [ CApp (CPF "UnSome", [ x ]) ])
  | CApp (CPF "OptionMatch", [ CApp (CPF "Some", [ x ]); y; z ]) -> CSeq [ y; CApp (z, [ x ]) ]
  | CApp (CPF "OptionMatch", [ CApp (CPF "HashtblFind", [ x; y ]); CFun (_, nbody); s ]) ->
      CIf (CApp (CPF "HashtblContain", [ x; y ]), CApp (s, [ CApp (CPF "HashtblFindExn", [ x; y ]) ]), nbody)
  | CApp (CPF "ListIter", [ x; CFun (_, CApp (CPF "MakeUnit", [])) ]) -> x
  | CApp (CPF "ListIter", [ CApp (CPF "Cons", [ hd; tl ]); f ]) ->
      let v = fresh () in
      CLet (v, f, CSeq [ CApp (CVar v, [ hd ]); CApp (CPF "ListIter", [ tl; CVar v ]) ])
  | CApp (CPF "ListIter", [ CApp (CPF "Nil", []); f ]) -> CSeq [ f; CApp (CPF "MakeUnit", []) ]
  | CApp (CPF "ListIter", [ CApp (CPF "OptionMatch", [ o; CFun ([ nn ], nb); CFun ([ sn ], sb) ]); f ]) ->
      let v = fresh () in
      CLet
        ( v,
          f,
          CApp
            ( CPF "OptionMatch",
              [
                o;
                CFun ([ nn ], CApp (CPF "ListIter", [ nb; CVar v ]));
                CFun ([ sn ], CApp (CPF "ListIter", [ sb; CVar v ]));
              ] ) )
  | CApp (CPF "ListIter", [ CIf (i, t, e); f ]) ->
      let v = fresh () in
      CLet (v, f, CIf (i, CApp (CPF "ListIter", [ t; CVar v ]), CApp (CPF "ListIter", [ e; CVar v ])))
  | CApp (CPF "UnSome", [ CApp (CPF "Some", [ x ]) ]) -> x
  | CApp (CPF "UnSome", [ CApp (CPF "HashtblFind", [ x; y ]) ]) -> CApp (CPF "HashtblFindExn", [ x; y ])
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, "var"); CString f ]) -> CGetMember (x, "var_" ^ f)
  | CApp (CPF "HashtblContain", [ CGetMember (x, "var"); CString f ]) -> CGetMember (x, "has_var_" ^ f)
  | CApp (CPF "HashtblSet", [ CGetMember (x, "var"); CString f; v ]) ->
      CSeq [ CSetMember (x, "has_var_" ^ f, CBool true); CSetMember (x, "var_" ^ f, v) ]
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, "prop"); CString f ]) ->
      CApp (CPF ("GetProp" ^ angle_bracket (compile_type_expr (prop_from_tyck_env p.tyck_env f))), [ x; CString f ])
  | CApp (CPF "IsSome", [ CApp (CPF "HashtblFind", [ x; y ]) ]) -> CApp (CPF "HashtblContain", [ x; y ])
  | CApp (CPF "HashtblContain", [ CGetMember (x, "prop"); CString f ]) -> CApp (CPF "HasProp", [ x; CString f ])
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, "attr"); CString f ]) ->
      CApp (CPF ("GetAttr" ^ angle_bracket (compile_type_expr (attr_from_tyck_env p.tyck_env f))), [ x; CString f ])
  | CApp (CPF "HashtblContain", [ CGetMember (x, "attr"); CString f ]) -> CApp (CPF "HasAttr", [ x; CString f ])
  | CApp (CPF ("BoolOfValue" | "VBool" | "VString" | "VFloat" | "VInt"), [ x ]) -> x
  | CApp
      ( CPF
          (( "WriteMetric" | "MetricWriteCount" | "MetaWriteMetric" | "MetricQueueSizeAcc" | "MetricMetaReadCount"
           | "MetricMetaWriteCount" | "MetricOutputChangeCount" | "MetricInputChangeCount" | "MetricReadCount"
           | "ResetMetric" | "MetaReadMetric" | "MetricOverheadCount" | "MetricEvalCount" ) as f),
        [ _ ] ) ->
      CApp (CPF f, [])
  | CApp
      ( CPF
          (("OutputChangeMetric" | "InputChangeMetric" | "MetricQueueSize" | "MetricRecordOverhead" | "MetricRecordEval")
          as f),
        [ _; i ] ) ->
      CApp (CPF f, [ i ])
  | CApp (CPF (("QueuePush" | "QueueForcePush") as f), [ a; b; c; _ ]) -> CApp (CPF f, [ a; b; c ])
  | CApp (CFun ([ xname ], body), [ x ]) -> CLet (xname, x, body)
  | CIf (i, CApp (CPF "MakeUnit", []), CApp (CPF "MakeUnit", [])) -> CSeq [ i; CApp (CPF "MakeUnit", []) ]
  | CIf (i, CApp (CPF "MakeUnit", []), x) -> CIf (CNot i, x, CApp (CPF "MakeUnit", []))
  | CSeq [ x ] -> x
  | CSeq xs ->
      let xs, last = unsnoc xs in
      CSeq
        (List.map
           (List.append
              (List.concat
                 (List.map xs ~f:(fun x ->
                      if is_pure x then []
                      else
                        match x with
                        | CSeq xs -> xs
                        | CApp (CPF f, xs) -> if is_absolutely_pure_function f then xs else [ x ]
                        | CIf _ | CLet _ | CSetMember _ | CApp (CVar _, _) | CStringMatch (_, _, _) | CAssert _ -> [ x ]
                        | CFun _ | CVar _ -> []
                        | CGetMember (x, _) -> [ x ]
                        | _ -> Common.panic ("simplify_seq:" ^ truncate (show_code x)))))
              [ last ])
           ~f:recurse)
  | CIf (i, CPanic t, e) -> CAssert (CNot i, t, e)
  | CIf (i, t, CPanic e) -> CAssert (i, e, t)
  | CLet (lhs, rhs, CVar body) -> if String.equal lhs body then rhs else CSeq [ rhs; CVar body ]
  | CApp (CPF "AssocToJson", [ x ]) ->
      let v = fresh () in
      recurse (CLet (v, CApp (CPF "FreshJson", []), CApp (CPF "WriteAssocToJson", [ CVar v; x ])))
  | CApp (CPF "WriteAssocToJson", [ CVar j; CApp (CPF "Cons", [ CApp (CPF "MakePair", [ CString f; x ]); y ]) ]) ->
      recurse (CSeq [ CApp (CPF "WriteJson", [ CVar j; CString f; x ]); CApp (CPF "WriteAssocToJson", [ CVar j; y ]) ])
  | CApp (CPF "WriteJson", [ j; f; CApp (CPF ("IntToJson" | "StringToJson" | "ListToJson"), [ x ]) ]) ->
      recurse (CApp (CPF "WriteJson", [ j; f; x ]))
  | CApp (CPF "WriteAssocToJson", [ j; CApp (CPF "Nil", []) ]) -> j
  | CApp (CPF "not", [ x ]) -> CNot x
  (* default cases *)
  | CAssert (b, e, t) -> CAssert (recurse b, recurse e, recurse t)
  | CPanic xs -> CPanic (recurse xs)
  | CIf (i, t, e) -> CIf (recurse i, recurse t, recurse e)
  | CAnd (l, r) -> CAnd (recurse l, recurse r)
  | COr (l, r) -> COr (recurse l, recurse r)
  | CNot i -> CNot (recurse i)
  | CApp (f, xs) -> CApp (recurse f, List.map xs ~f:recurse)
  | CLet (lhs, rhs, body) -> CLet (lhs, recurse rhs, recurse body)
  | CFix (fname, xname, body) -> CFix (fname, xname, recurse body)
  | CFun (xname, body) -> CFun (xname, recurse body)
  | CGetMember (x, f) -> CGetMember (recurse x, f)
  | CSetMember (x, f, v) -> CSetMember (recurse x, f, recurse v)
  | CStringMatch (str, cases, default) ->
      CStringMatch (recurse str, List.map cases ~f:(fun (l, r) -> (l, recurse r)), recurse default)
  | _ -> Common.panic ("simplify:" ^ truncate (show_code x))

let rec optimize prog x =
  let new_x = simplify prog x in
  if equal_code x new_x then x else optimize prog new_x

let names_to_args x = bracket (String.concat ~sep:"," (List.map x ~f:(fun v -> "const auto&" ^ v)))

let rec compile_stmt c x =
  match x with
  | CSeq [ x ] -> compile_stmt c x
  | CSeq [] -> output_string c "return MakeUnit();"
  | CSeq (x :: xs) ->
      compile_proc c x;
      compile_stmt c (CSeq xs)
  | CLet (var, value, body) ->
      output_string c ("auto " ^ var ^ " = ");
      compile_expr c value;
      output_string c ";";
      compile_stmt c body
  | CIf (i, t, e) ->
      output_string c "if (";
      compile_expr c i;
      output_string c "){";
      compile_stmt c t;
      output_string c "}else{";
      compile_stmt c e;
      output_string c "}"
  | CPanic _ -> output_string c "Panic();"
  | CApp _ | CVar _ | CFun _ | CGetMember _ | CBool _ | CAnd _ | CString _ | CFloat _ ->
      output_string c "return ";
      compile_expr c x;
      output_string c ";"
  | CSetMember _ ->
      compile_proc c x;
      output_string c "return MakeUnit();"
  | CAssert (b, _, t) ->
      output_string c "assert(";
      compile_expr c b;
      output_string c ");";
      compile_stmt c t
  | CStringMatch (str, cases, default) ->
      let v = fresh () in
      output_string c ("std::string " ^ v ^ " = ");
      compile_expr c str;
      output_string c ";";
      List.iter cases ~f:(fun (value, case) ->
          output_string c ("if (" ^ v ^ "==" ^ quoted value ^ "){");
          compile_stmt c case;
          output_string c "}else ");
      output_string c "{";
      compile_stmt c default;
      output_string c "}"
  | _ -> Common.panic ("compile_stmt:" ^ truncate (show_code x))

and compile_proc c x =
  match x with
  | CSeq (x :: xs) ->
      compile_proc c x;
      compile_proc c (CSeq xs)
  | CSeq [] -> ()
  | CLet (var, value, body) ->
      output_string c ("auto " ^ var ^ " = ");
      compile_expr c value;
      output_string c ";";
      compile_proc c body
  | CApp _ | CGetMember _ | CVar _ | CInt _ | CStringMatch _ ->
      compile_expr c x;
      output_string c ";"
  | CSetMember (x, (("first" | "parent" | "prev" | "next" | "last") as f), CApp (CPF "None", [])) ->
      compile_expr c x;
      output_string c ("->" ^ f ^ "= nullptr;")
  | CSetMember (x, (("first" | "parent" | "prev" | "next" | "last") as f), CApp (CPF "Some", [ v ])) ->
      compile_expr c x;
      output_string c ("->" ^ f ^ "=");
      compile_expr c v;
      output_string c ".get();"
  | CSetMember (x, (("first" | "parent" | "prev" | "next" | "last") as f), v) ->
      compile_expr c x;
      output_string c ("->" ^ f ^ "= ToPath(");
      compile_expr c v;
      output_string c ");"
  | CSetMember (x, f, v) ->
      compile_expr c x;
      output_string c ("->" ^ f ^ "=");
      compile_expr c v;
      output_string c ";"
  | CIf (i, t, CApp (CPF "MakeUnit", [])) ->
      output_string c "if (";
      compile_expr c i;
      output_string c "){";
      compile_proc c t;
      output_string c "}"
  | CIf (i, t, e) ->
      output_string c "if (";
      compile_expr c i;
      output_string c "){";
      compile_proc c t;
      output_string c "}else{";
      compile_proc c e;
      output_string c "}"
  | _ -> Common.panic ("compile_proc:" ^ truncate (show_code x))

and compile_expr c x =
  match x with
  | CPF str -> output_string c str
  | CInt i -> output_string c ("static_cast<int64_t>" ^ bracket (string_of_int i))
  | CVar x -> output_string c x
  | CBool b -> output_string c (string_of_bool b)
  | CFloat f -> output_string c (string_of_float f)
  | CFun (var, body) ->
      output_string c ("[&]" ^ names_to_args var ^ "{");
      compile_stmt c body;
      output_string c "}"
  | CIf (i, t, e) ->
      output_string c "(";
      compile_expr c i;
      output_string c ")?(";
      compile_expr c t;
      output_string c "):(";
      compile_expr c e;
      output_string c ")"
  | CLet _ | CSeq _ | CStringMatch _ ->
      output_string c "[&](){";
      compile_stmt c x;
      output_string c "}()"
  | CApp (CPF "IsSome", [ CGetMember (x, (("parent" | "prev" | "next" | "first" | "last") as y)) ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c "->";
      output_string c y;
      output_string c " != nullptr)"
  | CApp (CPF "IsNone", [ CGetMember (x, (("parent" | "prev" | "next" | "first" | "last") as y)) ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c "->";
      output_string c y;
      output_string c " == nullptr)"
  | CApp (CPF "UnSome", [ CGetMember (x, (("parent" | "prev" | "next" | "first" | "last") as y)) ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c "->";
      output_string c y;
      output_string c ")"
  | CAssert (b, _, t) ->
      output_string c "ASSERT(";
      compile_expr c b;
      output_string c ", [&](){";
      compile_stmt c t;
      output_string c "})"
  | CAnd (l, r) ->
      output_string c "(";
      compile_expr c l;
      output_string c " && ";
      compile_expr c r;
      output_string c ")"
  | COr (l, r) ->
      output_string c "(";
      compile_expr c l;
      output_string c " || ";
      compile_expr c r;
      output_string c ")"
  | CNot x ->
      output_string c "(!";
      compile_expr c x;
      output_string c ")"
  | CPanic xs -> output_string c "Panic()"
  | CString str -> output_string c ("std::string" ^ bracket (quoted str))
  | CGetMember (x, (("n" | "rf") as f)) ->
      compile_expr c x;
      output_string c ("." ^ f)
  | CGetMember (x, f) ->
      compile_expr c x;
      output_string c ("->" ^ f)
  | CApp (f, xs) ->
      compile_expr c f;
      output_string c "(";
      let init = ref true in
      List.iter xs ~f:(fun x ->
          if !init then init := false else Stdio.Out_channel.output_string c ",";
          compile_expr c x);
      output_string c ")"
  | _ -> Common.panic ("compile_expr:" ^ truncate (show_code x))

let compile_forward_def prog c (ret_type, name, x) =
  match x with
  | CFix (name, xname, _) -> output_string c (ret_type ^ " " ^ name ^ names_to_args xname ^ ";")
  | CFun (xname, _) -> output_string c (ret_type ^ " " ^ name ^ names_to_args xname ^ ";")

let compile_def prog c (ret_type, name, x) =
  match optimize prog x with
  | CFix (fname, xname, body) ->
      output_string c (ret_type ^ " " ^ fname ^ names_to_args xname ^ "{");
      compile_stmt c body;
      output_string c "}";
      output_string c
        (ret_type ^ " " ^ name ^ names_to_args xname ^ "{return " ^ fname
        ^ bracket (String.concat ~sep:"," xname)
        ^ ";}")
  | CFun (xname, body) ->
      output_string c (ret_type ^ " " ^ name ^ names_to_args xname ^ "{");
      compile_stmt c body;
      output_string c "}"
  | _ ->
      output_string c ("auto " ^ name ^ " = ");
      compile_expr c x;
      output_string c ";"
  | _ -> Common.panic ("compile_def:" ^ truncate (show_code x))

let compile_field name type_expr =
  compile_type_expr type_expr ^ " var_" ^ name ^ ";" ^ "bool " ^ "has_var_" ^ name ^ " = false;"

let compile_typedef (env : tyck_env) meta_defs : string =
  " struct MetaNode{\n " ^ meta_defs
  ^ "};\n\
    \ using Meta = std::shared_ptr<MetaNode>;\n\
    \   struct Content : std::enable_shared_from_this<Content> {\n\
    \    Content* parent = nullptr;\n\
    \    Content* prev = nullptr;\n\
    \    Content* next = nullptr;\n\
    \    Content* first = nullptr;\n\
    \    Content* last = nullptr;\n\
    \    int64_t extern_id;\n\
    \    List<Node> children;\n\
    \    std::string name;\n\
    \    std::unordered_map<std::string, Value> attr;\n\
    \    std::unordered_map<std::string, Value> prop;\n\
    \    Meta meta = std::make_shared<MetaNode>();\n\
    \    Content(const std::string& name,\n\
    \            std::unordered_map<std::string, Value>&& attr,\n\
    \            std::unordered_map<std::string, Value>&& prop,\n\
    \            int64_t extern_id, \n\
    \            const List<Node>& children) :\n\
    \            name(name),\n\
    \            attr(std::move(attr)), \n\
    \            prop(std::move(prop)), \n\
    \            extern_id(extern_id), \n\
    \            children(children) { }\n\
    \    Content(const std::string& name,\n\
    \            const std::unordered_map<std::string, Value>& attr,\n\
    \            const std::unordered_map<std::string, Value>& prop,\n\
    \            int64_t extern_id, \n\
    \            const List<Node>& children) :\n\
    \            name(name),\n\
    \            attr(attr), \n\
    \            prop(prop), \n\
    \            extern_id(extern_id), \n\
    \            children(children) { }"
  ^ String.concat (List.map (Hashtbl.to_alist env.var_type) ~f:(fun (x, y) -> compile_field x y))
  ^ "};"

let compile (prog : prog) defs main meta_defs c : unit =
  Stdio.Out_channel.output_string c "#include \"header.h\"\n";
  Stdio.Out_channel.output_string c (compile_typedef prog.tyck_env meta_defs);
  Stdio.Out_channel.output_string c "\n";
  Stdio.Out_channel.output_string c "#include \"header_continued.h\"\n";
  List.iter defs (compile_forward_def prog c);
  List.iter defs (compile_def prog c);
  Stdio.Out_channel.output_string c "int main(){";
  compile_proc c (main |> optimize prog);
  Stdio.Out_channel.output_string c "}"
