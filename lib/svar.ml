open EXN

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
  start_timestamp: TotalOrder.t;
  (*end_timestamp: TotalOrder.t;*)
  (*dependents: channel WeakBucket.t;*)
  mutable dependents: channel list;
} and
channel = {
  pass: diff -> unit
}

module PriorityQueue = PrioritySet.Make (struct 
  type t = meta
  let compare lhs rhs = TotalOrder.compare lhs.start_timestamp rhs.start_timestamp
end)

let eager_queue = PriorityQueue.create ()

let enqueue m = ignore (PriorityQueue.add eager_queue m)

let earliest_time = TotalOrder.create ()
let current_time = ref earliest_time

let add_timestamp () =
  let time = TotalOrder.add_next !current_time in
  current_time := time;
  time

let propagate_diff (diff: diff) (x: meta): unit = 
  (*WeakBucket.fold (fun chan () -> chan.pass diff) x.dependents ()*)
  List.iter (fun chan -> chan.pass diff) x.dependents

let const_svar (a: 'a): 'a svar = 
  let ts = TotalOrder.add_next earliest_time in {
  value = a;
  chan = [];
  meta = {
    refresh = (fun _ -> ());
    start_timestamp = ts;
    dependents = []
  };
}

(*create an svar that is 'dumb': it does not use any diff information. basically the same as SAC.*)
let ignore_diff (diff_gen: 'a -> 'a -> diff) (f: unit -> 'a) (xs: meta list): 'a svar = 
  let rec sv: 'a svar = {
    value = f();
    chan = [{ pass = fun _ -> enqueue sv.meta }];
    meta = {
      refresh = (fun _ -> 
        let old_value = sv.value in
        sv.value <- f();
        let diff = diff_gen old_value sv.value in
        (*todo: does not propagate on equal value*)
        propagate_diff diff sv.meta);
      start_timestamp = add_timestamp();
      dependents = []
    }
  } in
  List.iter (fun x -> x.dependents <- (List.nth sv.chan 0) :: x.dependents) xs;
  sv