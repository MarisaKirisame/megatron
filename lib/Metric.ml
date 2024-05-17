open Eval

type metric = {
  mutable read_count : int;
  mutable write_count : int;
}

let read (m: metric) (_: 'a node): unit =
  m.read_count <- m.read_count + 1

let read (m: metric) (_: 'a node): unit =
  m.write_count <- m.write_count + 1