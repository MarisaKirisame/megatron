open Ast
open Core
open Eval
open Common
open SD
open TypeCheck

let truncate_length = 120
let truncate str = if String.length str <= truncate_length then str else String.sub str ~pos:0 ~len:truncate_length
let is_absolutely_pure_function f = match f with "Cons" -> true | _ -> false

let replace (s : string) (from : string) (into : string) =
  String.Search_pattern.replace_all (String.Search_pattern.create from) ~in_:s ~with_:into

let string_to_cpp (s : string) : string = replace (replace (replace s "#" "SLASH") "-" "_") "%" "PERCENTAGE"

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
  | CSetMember _ | CPanic _ | CWhile _ -> false
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
  | CStringMatch (x, cases, default) -> is_pure x && List.for_all cases ~f:(fun (_, c) -> is_pure c) && is_pure default
  | CIntMatch (x, cases, default) -> is_pure x && List.for_all cases ~f:(fun (_, c) -> is_pure c) && is_pure default
  | _ -> Common.panic ("is_pure:" ^ truncate (show_code x))

let rec simplify (p : prog) x =
  let recurse x = simplify p x in
  match x with
  | CString _ | CVar _ | CPF _ | CInt _ | CBool _ | CFloat _ -> x
  | CApp (CPF "ReadMetric", [ x ]) ->
      x (* not correct, but we dont care about ReadMetric rn, and this simplify the generated code *)
  | CAssert (_, _, x) -> x (*also not correct.*)
  | CApp (CPF "Zro", [ CApp (CPF "Timed", [x]) ]) -> CApp (CPF "TimedOnly", [x])
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
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, (("var" | "prop" | "attr") as tbl)); CString f ]) ->
      CGetMember (x, tbl ^ "_" ^ string_to_cpp f)
  | CApp (CPF "HashtblContain", [ CGetMember (x, (("var" | "prop" | "attr") as tbl)); CString f ]) ->
      CGetMember (x, "has_" ^ tbl ^ "_" ^ string_to_cpp f)
  | CApp (CPF ("HashtblSet" | "HashtblAddExn"), [ CGetMember (x, (("var" | "prop" | "attr") as tbl)); CString f; v ]) ->
      let type_ =
        compile_type_expr
          (Hashtbl.find_exn
             (match tbl with
             | "var" -> p.tyck_env.var_type
             | "attr" -> p.tyck_env.attr_type
             | "prop" -> p.tyck_env.prop_type)
             f)
      in
      CSeq
        [
          CSetMember (x, "has_" ^ tbl ^ "_" ^ string_to_cpp f, CBool true);
          CSetMember (x, tbl ^ "_" ^ string_to_cpp f, CApp (CPF ("As" ^ type_), [ v ]));
        ]
  | CApp (CPF "HashtblForceRemove", [ CGetMember (x, (("var" | "prop" | "attr") as tbl)); CString f ]) ->
      CSetMember (x, "has_" ^ tbl ^ "_" ^ string_to_cpp f, CBool false)
  | CApp (CPF "HashtblContain", [ CGetMember (x, "BBTimeTable"); CString f ]) -> CGetMember (x, f ^ "_has_bb_time_table")
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, "BBTimeTable"); CString f ]) -> CGetMember (x, f ^ "_bb_time_table")
  | CApp (CPF ("HashtblAddExn" | "HashtblSet"), [ CGetMember (x, "BBTimeTable"); CString f; v ]) ->
      CSeq [ CSetMember (x, f ^ "_has_bb_time_table", CBool true); CSetMember (x, f ^ "_bb_time_table", v) ]
  | CApp (CPF "HashtblContain", [ CGetMember (x, "ProcTimeTable"); CString f ]) ->
      CGetMember (x, f ^ "_has_proc_time_table")
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, "ProcTimeTable"); CString f ]) -> CGetMember (x, f ^ "_proc_time_table")
  | CApp (CPF ("HashtblAddExn" | "HashtblSet"), [ CGetMember (x, "ProcTimeTable"); CString f; v ]) ->
      CSeq [ CSetMember (x, f ^ "_has_proc_time_table", CBool true); CSetMember (x, f ^ "_proc_time_table", v) ]
  | CApp (CPF "HashtblContain", [ CGetMember (x, "ProcInited"); CString f ]) -> CGetMember (x, f ^ "_proc_inited")
  | CApp (CPF "HashtblAddExn", [ CGetMember (x, "ProcInited"); CString f; _ ]) ->
      CSetMember (x, f ^ "_proc_inited", CBool true)
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, "RecursiveProcDirtied"); CString f ]) ->
      CGetMember (x, f ^ "_recursive_proc_dirtied")
  | CApp (CPF ("HashtblSet" | "HashtblAddExn"), [ CGetMember (x, "RecursiveProcDirtied"); CString f; v ]) ->
      CSeq
        [
          CSetMember (x, f ^ "_has_recursive_proc_dirtied", CBool true); CSetMember (x, f ^ "_recursive_proc_dirtied", v);
        ]
  | CApp (CPF "HashtblFindExn", [ CGetMember (x, "BBDirtied"); CString f ]) -> CGetMember (x, f ^ "_bb_dirtied")
  | CApp (CPF ("HashtblSet" | "HashtblAddExn"), [ CGetMember (x, "BBDirtied"); CString f; v ]) ->
      CSeq [ CSetMember (x, f ^ "_has_bb_dirtied", CBool true); CSetMember (x, f ^ "_bb_dirtied", v) ]
  | CApp (CPF "IsSome", [ CApp (CPF "HashtblFind", [ x; y ]) ]) -> CApp (CPF "HashtblContain", [ x; y ])
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
                        | CIf _ | CLet _ | CSetMember _
                        | CApp (CVar _, _)
                        | CStringMatch (_, _, _)
                        | CIntMatch (_, _, _)
                        | CAssert _
                        | CWhile (_, _) ->
                            [ x ]
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
  | CWhile (b, s) -> CWhile (recurse b, recurse s)
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
  | CIntMatch (i, cases, default) ->
      CIntMatch (recurse i, List.map cases ~f:(fun (l, r) -> (l, recurse r)), recurse default)
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
  | CIntMatch (i, cases, default) ->
      let v = fresh () in
      output_string c ("auto " ^ v ^ " = ");
      compile_expr c i;
      output_string c ";";
      List.iter cases ~f:(fun (value, case) ->
          output_string c ("if (" ^ v ^ "==" ^ string_of_int value ^ "){");
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
  | CApp _ | CGetMember _ | CVar _ | CInt _ | CStringMatch _ | CIntMatch _ ->
      compile_expr c x;
      output_string c ";"
  | CWhile (b, s) ->
      output_string c "while(";
      compile_expr c b;
      output_string c "){";
      compile_proc c s;
      output_string c "}"
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
  | CLet _ | CSeq _ | CStringMatch _ | CIntMatch _ ->
      output_string c "[&](){";
      compile_stmt c x;
      output_string c "}()"
  | CApp (CPF (("PrintEndline" | "MakeRecomputeBB" | "MakeRecomputeProc") as f), [ CString x ]) ->
      output_string c (f ^ bracket (quoted x))
  | CApp (CPF (("StringEqual" | "OutputString") as f), [ x; CString y ]) ->
      output_string c f;
      output_string c "(";
      compile_expr c x;
      output_string c ",";
      output_string c (quoted y);
      output_string c ")"
  | CApp (CPF "JsonMember", [ CString x; y ]) ->
      output_string c "JsonMember(";
      output_string c (quoted x);
      output_string c ",";
      compile_expr c y;
      output_string c ")"
  | CApp (CPF "WriteJson", [ x; CString y; CString z ]) ->
      output_string c "WriteJson(";
      compile_expr c x;
      output_string c ",";
      output_string c (quoted y);
      output_string c ",";
      output_string c (quoted z);
      output_string c ")"
  | CApp (CPF "WriteJson", [ x; CString y; z ]) ->
      output_string c "WriteJson(";
      compile_expr c x;
      output_string c ",";
      output_string c (quoted y);
      output_string c ",";
      compile_expr c z;
      output_string c ")"
  | CApp (CPF "WithInFile", [ CString x; y ]) ->
      output_string c "WithInFile(";
      output_string c (quoted x);
      output_string c ",";
      compile_expr c y;
      output_string c ")"
  | CApp (CPF "WithOutFile", [ CString x; y ]) ->
      output_string c "WithOutFile(";
      output_string c (quoted x);
      output_string c ",";
      compile_expr c y;
      output_string c ")"
  | CApp (CPF "string_to_float", [ CApp (CPF "strip_suffix", [ x; _ ]) ]) ->
      compile_expr c x;
      output_string c ".r.a0"
  | CApp (CPF "has_suffix", [ x; CString f ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c ".c == ";
      output_string c ("DEStringCase::DHasSuffix_" ^ string_to_cpp f);
      output_string c ")"
  | CApp (CPF "has_prefix", [ x; CString f ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c ".c == ";
      output_string c ("DEStringCase::DHasPrefix_" ^ string_to_cpp f);
      output_string c ")"
  | CApp (CPF "string_is_float", [ x ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c ".c == ";
      output_string c "DEStringCase::DStringIsFloat";
      output_string c ")"
  | CApp (CPF "string_to_float", [ CApp (CPF "nth_by_sep", [ x; CString " "; CInt i ]) ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c (".r.a" ^ string_of_int i);
      output_string c ")"
  | CApp (CPF "string_to_float", [ x ]) ->
      output_string c "(";
      compile_expr c x;
      output_string c ".r.a0";
      output_string c ")"
  | CApp (CPF (("HashtblFindExn" | "HashtblContain") as func), [ h; CString f ]) ->
      output_string c (func ^ "(");
      compile_expr c h;
      output_string c ", ";
      output_string c (quoted f);
      output_string c ")"
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
  | CString str -> output_string c ("DEStringLit" ^ bracket ("DEStringCase::DSTRING_" ^ string_to_cpp str))
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

let compile_field tbl name type_expr =
  compile_type_expr type_expr ^ " " ^ tbl ^ "_" ^ string_to_cpp name ^ ";" ^ "bool " ^ "has_" ^ tbl ^ "_"
  ^ string_to_cpp name ^ " = false;"

let compile_constructor tbl name type_expr =
  "if(" ^ tbl ^ ".count(" ^ quoted name ^ ")==1){" ^ "has_" ^ tbl ^ "_" ^ string_to_cpp name ^ " = true;" ^ tbl ^ "_"
  ^ string_to_cpp name ^ "=As" ^ compile_type_expr type_expr ^ "(" ^ tbl ^ ".at(" ^ quoted name ^ "));}"

let compile_destring_case (d : destringed) : string =
  match d with
  | DString d -> "DSTRING_" ^ string_to_cpp d ^ ","
  | DHasSuffix d -> "DHasSuffix_" ^ string_to_cpp d ^ ","
  | DHasPrefix d -> "DHasPrefix_" ^ string_to_cpp d ^ ","
  | DStringIsFloat -> "DStringIsFloat" ^ ","
  | DStringToFloat | DFloatBySep _ | DStripSuffix _ -> ""
  | _ -> panic (show_destringed d)

let compile_to_destring_case (d : destringed) : string =
  match d with
  | DString d -> "if (str ==" ^ quoted d ^ "){return DEStringLit(DEStringCase::DSTRING_" ^ string_to_cpp d ^ ");}"
  | DHasSuffix d ->
      "if (std_has_suffix(str," ^ quoted d ^ ")){return DEString{DEStringCase::DHasSuffix_" ^ string_to_cpp d
      ^ ",StringToDEStringRest(std_strip_suffix(str," ^ quoted d ^ "))};}"
  | DHasPrefix d ->
      "if (std_has_prefix(str," ^ quoted d ^ ")){return DEString{DEStringCase::DHasPrefix_" ^ string_to_cpp d
      ^ ",StringToDEStringRest(std_strip_prefix(str," ^ quoted d ^ "))};}"
  | DStringIsFloat ->
      "if (std_string_is_float(str)){ return DEString{DEStringCase::DStringIsFloat, StringToDEStringRest(str)}; }"
  | DStringToFloat | DFloatBySep _ | DStripSuffix _ -> ""
  | _ -> panic (show_destringed d)

let compile_typedef (env : tyck_env) meta_defs (ds : destringed list) : string =
  "enum class DEStringCase { DEStringCaseDefault, "
  ^ String.concat (List.map ds ~f:compile_destring_case)
  ^ "};" ^ "struct DEStringRest{ double a0 = 0, a1 = 0, a2 = 0, a3 = 0;" ^ "};"
  ^ "struct DEString { DEStringCase c; DEStringRest r; };" ^ " struct Meta{\n " ^ meta_defs ^ "};\n"
  ^ "\n struct Value {\n   std::variant<int64_t, double, bool, DEString> v;\n };\n"
  ^ "\n         DEString DEStringLit(DEStringCase c) {\n   DEString des;\n   des.c = c;\n   return des;\n }\n "
  ^ "bool Asbool(const bool &b) { return b; }\n\
    \  bool Asbool(const Value &v) { return std::get<bool>(v.v); }\n\
    \  DEString AsDEString(const DEString &d) { return d; }\n\
    \  DEString AsDEString(const Value &v) { return std::get<DEString>(v.v); }\n\
    \  double Asdouble(const double &d) { return d; }\n\
    \  double Asdouble(const Value &v) { return std::get<double>(v.v); }\n\
    \  int64_t Asint64_t(const int64_t &i) { return i; }\n\
    \  int64_t Asint64_t(const Value &v) { return std::get<int64_t>(v.v); }"
  ^ " DEStringRest StringToDEStringRest(const std::string& str);\n DEString StringToDEString(const std::string& str) {"
  ^ String.concat (List.map ds ~f:compile_to_destring_case)
  ^ "return DEStringLit(DEStringCase::DEStringCaseDefault);}\n\
    \     Value JsonToValue(const json &j) {\n\
    \   if (j.is_string()) {\n\
    \     return Value(StringToDEString(JsonToString(j)));\n\
    \   } else if (j.is_number_integer()) {\n\
    \     return Value(JsonToInt(j));\n\
    \   } else {\n\
    \     std::cout << \"JsonToValue:\" << std::endl;\n\
    \     assert(false);\n\
    \   }\n\
    \ }\n\
     std::unordered_map<std::string, Value> JsonToDict(const json &j) {\n\
    \  std::unordered_map<std::string, Value> ret;\n\
    \  for (auto &[key, val] : j.items()) {\n\
    \    ret.insert({key, JsonToValue(val)});\n\
    \  }\n\
    \  return ret;\n\
     }\n\n\
    \  struct Content : std::enable_shared_from_this<Content> {\n\
    \   Content* parent = nullptr;\n\
    \    Content* prev = nullptr;\n\
    \    Content* next = nullptr;\n\
    \    Content* first = nullptr;\n\
    \    Content* last = nullptr;\n\
    \    int64_t extern_id;\n\
    \    List<Node> children;\n\
    \    DEString name;\n\
    \    Meta m;\n\
    \    Meta* meta = &m;\n\
    \    Content(const DEString& name,\n\
    \            const std::unordered_map<std::string, Value>& attr,\n\
    \            const std::unordered_map<std::string, Value>& prop,\n\
    \            int64_t extern_id, \n\
    \            const List<Node>& children) :\n\
    \            name(name),\n\
    \            extern_id(extern_id), \n\
    \            children(children) { "
  ^ String.concat (List.map (Hashtbl.to_alist env.attr_type) ~f:(fun (x, y) -> compile_constructor "attr" x y))
  ^ String.concat (List.map (Hashtbl.to_alist env.prop_type) ~f:(fun (x, y) -> compile_constructor "prop" x y))
  ^ " }"
  ^ String.concat (List.map (Hashtbl.to_alist env.var_type) ~f:(fun (x, y) -> compile_field "var" x y))
  ^ String.concat (List.map (Hashtbl.to_alist env.attr_type) ~f:(fun (x, y) -> compile_field "attr" x y))
  ^ String.concat (List.map (Hashtbl.to_alist env.prop_type) ~f:(fun (x, y) -> compile_field "prop" x y))
  ^ "};"

let compile (prog : prog) defs main meta_defs (ds : destringed list) c : unit =
  Stdio.Out_channel.output_string c "#include \"header.h\"\n";
  Stdio.Out_channel.output_string c (compile_typedef prog.tyck_env meta_defs ds);
  Stdio.Out_channel.output_string c "\n";
  Stdio.Out_channel.output_string c "#include \"header_continued.h\"\n";
  List.iter defs (compile_forward_def prog c);
  List.iter defs (compile_def prog c);
  Stdio.Out_channel.output_string c "int main(){";
  compile_proc c (main |> optimize prog);
  Stdio.Out_channel.output_string c "}"
