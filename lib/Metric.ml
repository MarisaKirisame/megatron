open Common
open SD

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

let read (m : metric) : unit = m.read_count <- m.read_count + 1
let meta_read (m : metric) : unit = m.meta_read_count <- m.meta_read_count + 1
let write (m : metric) : unit = m.write_count <- m.write_count + 1
let meta_write (m : metric) : unit = m.meta_write_count <- m.meta_write_count + 1
let input_change (m : metric) (c : int) = m.input_change_count <- m.input_change_count + c
let output_change (m : metric) (c : int) = m.output_change_count <- m.output_change_count + c
