open Common

type metric = {
  mutable read_count : int;
  mutable meta_read_count : int;
  mutable write_count : int;
  mutable meta_write_count : int;
  mutable queue_size_acc : int;
  mutable input_change_count : int;
  mutable output_change_count : int;
}
[@@deriving show]

let read (m : metric) : unit = m.read_count <- m.read_count + 1
let read_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".read();")
let read_ (m : metric sd) : unit sd = match m with Static m -> Static (read m) | Dyn m -> Dyn (read_staged m)
let meta_read (m : metric) : unit = m.meta_read_count <- m.meta_read_count + 1
let meta_read_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".meta_read();")

let meta_read_ (m : metric sd) : unit sd =
  match m with Static m -> Static (meta_read m) | Dyn m -> Dyn (meta_read_staged m)

let write (m : metric) : unit = m.write_count <- m.write_count + 1
let write_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".write();")
let write_ (m : metric sd) : unit sd = match m with Static m -> Static (write m) | Dyn m -> Dyn (write_staged m)
let meta_write (m : metric) : unit = m.meta_write_count <- m.meta_write_count + 1
let meta_write_staged (m : metric code) : unit code = Stmt (unexpr m ^ ".meta_write();")

let meta_write_ (m : metric sd) : unit sd =
  match m with Static m -> Static (meta_write m) | Dyn m -> Dyn (meta_write_staged m)

let fresh_metric () =
  {
    read_count = 0;
    meta_read_count = 0;
    write_count = 0;
    meta_write_count = 0;
    queue_size_acc = 0;
    input_change_count = 0;
    output_change_count = 0;
  }

let reset_metric m =
  m.read_count <- 0;
  m.meta_read_count <- 0;
  m.write_count <- 0;
  m.meta_write_count <- 0;
  m.queue_size_acc <- 0;
  m.input_change_count <- 0;
  m.output_change_count <- 0
