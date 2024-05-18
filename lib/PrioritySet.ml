(** Mutable priority set based on simple binary tree. *)

module type S = sig
  type data
  type t

  exception Empty

  val create : unit -> t
  val add : t -> data -> bool
  val pop : t -> data
  val peek : t -> data
  val remove : t -> data -> bool
  val size : t -> int
  val is_empty : t -> bool
end

module Make (O : Set.OrderedType) : S with type data = O.t = struct
  type data = O.t

  type node = t' ref
  and t' = Null | Node of data * node * node
  and t = { node : node; mutable size : int }

  exception Empty

  let size t = t.size
  let create () = { node = ref Null; size = 0 }
  let is_empty queue = size queue == 0

  let rec add_node queue x =
    match !queue with
    | Node (value, left, right) ->
        let dir = O.compare x value in
        if dir == 0 then false else if dir < 0 then add_node left x else add_node right x
    | Null ->
        queue := Node (x, ref Null, ref Null);
        true

  let add queue x =
    let added = add_node queue.node x in
    if added then queue.size <- queue.size + 1 else ();
    added

  let rec pop_node queue =
    match !queue with
    | Node (value, ({ contents = Node _ } as left), _) -> pop_node left
    | Node (value, { contents = Null }, right) ->
        queue := !right;
        value
    | Null -> raise Empty

  let pop queue =
    let v = pop_node queue.node in
    queue.size <- queue.size - 1;
    v

  let rec peek_node queue =
    match !queue with
    | Node (value, ({ contents = Node _ } as left), _) -> peek_node left
    | Node (value, { contents = Null }, right) -> value
    | Null -> raise Empty

  let rec peek queue = peek_node queue.node

  let rec remove_node queue x =
    match !queue with
    | Node (value, left, right) ->
        let dir = O.compare x value in
        if dir == 0 then (
          (queue := try Node (pop_node right, left, right) with Empty -> !left);
          true)
        else if dir < 0 then remove_node left x
        else remove_node right x
    | Null -> false

  let remove queue x =
    let removed = remove_node queue.node x in
    if removed then queue.size <- queue.size - 1 else ();
    removed
end
