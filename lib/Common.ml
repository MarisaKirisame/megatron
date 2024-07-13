open Core
open Yojson

let debug = true
let bracket str = "(" ^ str ^ ")"
let curly_bracket str = "{" ^ str ^ "}"
let square_bracket str = "[" ^ str ^ "]"
let quoted str = "\"" ^ String.escaped str ^ "\""

let make_counter () : unit -> int =
  let counter : int ref = ref 0 in
  fun _ ->
    let ret = !counter in
    counter := !counter + 1;
    ret

let count = make_counter ()

let fresh : unit -> string =
  let c = make_counter () in
  fun _ -> "x_" ^ string_of_int (c ())

exception EXN of string

let panic msg = raise (EXN msg)
let todo msg = panic ("todo: " ^ msg)

module Stack = struct
  (*reversed list*)
  type 'a t = 'a list ref

  let make () : _ t = ref []
  let push (s : 'a t) (v : 'a) : unit = s := v :: !s
  let clear (s : 'a t) : unit = s := []
  let to_list (s : 'a t) : 'a list = List.rev !s
end

type 'meta node = {
  name : string;
  attr : (string, value) Hashtbl.t;
  prop : (string, value) Hashtbl.t;
  var : (string, value) Hashtbl.t;
  id : int;
  extern_id : int;
  mutable children : 'meta node list;
  mutable parent : 'meta node option;
  mutable next : 'meta node option;
  mutable prev : 'meta node option;
  mutable first : 'meta node option;
  mutable last : 'meta node option;
  m : 'meta;
}

and value = VInt of int | VBool of bool | VString of string | VFloat of float

type layout_node = { mutable children : layout_node list }

let has_suffix s sfx =
  String.length s >= String.length sfx
  && String.equal sfx (String.sub s ~pos:(String.length s - String.length sfx) ~len:(String.length sfx))

let has_prefix s pfx =
  String.length s >= String.length pfx && String.equal pfx (String.sub s ~pos:0 ~len:(String.length pfx))

let strip_prefix s pfx =
  if has_prefix s pfx then String.sub s ~pos:(String.length pfx) ~len:(String.length s - String.length pfx) else panic s

let strip_suffix s sfx =
  assert (has_suffix s sfx);
  String.sub s ~pos:0 ~len:(String.length s - String.length sfx)

let rec unsnoc x =
  match x with
  | [ x ] -> ([], x)
  | x :: xs ->
      let l, r = unsnoc xs in
      (x :: l, r)
