open Common

type metric = {
  mutable read_count : int;
  mutable meta_read_count : int;
  mutable write_count : int;
  mutable meta_write_count : int;
  mutable queue_size_acc : int;
  mutable input_change_count : int;
  mutable output_change_count : int;
  mutable overhead_time : int;
  mutable eval_time : int;
}
[@@deriving show]
