type diff = 
| IntChange of int * int
| BoolChange of bool * bool (*technically only one bool is needed*)
| Inserted of int (*array insertion at pos*)
| Removed of int (*array removal at pos*)

type 'a svar = {
  mutable value: 'a;
  mutable chan: channel list; (*this should be the only strong reference to channels*)
  meta: meta;
  (*SAC use an ID for hashing and memoization, we have no need for that*)
} and
meta = {
  refresh: unit -> unit;
  timestamp: TotalOrder.t; (*SAC use a range because their computation form a tree, but for us each svar computation is atomic*)
  dependents: channel WeakBucket.t;
} and
channel = {
  pass: diff -> unit
}

module PriorityQueue = PrioritySet.Make (struct 
  type t = meta
  let compare lhs rhs = TotalOrder.compare lhs.timestamp rhs.timestamp
end)

let eager_queue = PriorityQueue.create ()

let enqueue m = ignore (PriorityQueue.add eager_queue m)

let current_time = ref (TotalOrder.create ())

let add_timestamp () =
  let time = TotalOrder.add_next !current_time in
  current_time := time;
  time

let propagate_diff (diff: diff) (x: meta): unit = 
  WeakBucket.fold (fun chan () -> chan.pass diff) x.dependents ()

(*create an svar that is 'dumb': it does not use any diff information. basically the same as SAC.*)
let ignore_diff (diff_gen: 'a -> 'a -> diff) (f: unit -> 'a) (xs: meta list): 'a svar = 
  let rec sv: 'a svar = {
    value = f();
    chan = [];
    meta = {
      refresh = (fun _ -> 
        let old_value = sv.value in
        sv.value <- f();
        let diff = diff_gen old_value sv.value in
        propagate_diff diff sv.meta);
      timestamp = add_timestamp();
      dependents = WeakBucket.create 0
    }
  } in
  (*todo: make sv weak below*)
  let chan = { pass = fun _ -> enqueue sv.meta } in
  List.iter (fun x -> WeakBucket.add x.dependents chan) xs;
  sv