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
  mutable overhead_l2m : int;
  mutable eval_time : int;
  mutable queue_time : int;
  mutable om_time : int;
}
[@@deriving show]
