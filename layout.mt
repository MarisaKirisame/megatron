var width;
var height;
var sum_height;
var display;

(*calculate display, intrinsic_width, and intrinsic_height*)
proc pass_0() {
  self.display <- if has_prop(display) then get_prop(display) else "block";
  self.line_break <- 
    if self.display = "none"
    then false
    else if self.display = "block"
    then true
    else if self.display = "inline"
    then false
    else if self.display = "inline-block"
    then false
    else if self.display = "flex"
    then false
    else if self.display = "inline-flex"
    then false
    else if self.display = "contents"
    then false
    else if self.display = "table"
    then true
    else if self.display = "table-row-group"
    then true
    else if self.display = "table-row"
    then true
    else if self.display = "table-cell"
    then true
    else if self.display = "list-item"
    then true
    else if self.display = "grid"
    then true
    else panic("line_break", self.display);
  children.pass_0();
  self.children_intrinsic_width <- if has_last() then last().intrinsic_width_max else 0;
  self.intrinsic_width <- 
    if self.display = "none"
    then 0
    else if get_name() = "#document"
    then self.children_intrinsic_width
    else if get_name() = "#text"
    then 100
    else if get_name() = "IMG"
    then (if has_attr(image_width) then (if has_attr(image_height) then get_attr(image_width) else panic("todo")) else 0)
    else if true
    then self.children_intrinsic_width
    else panic("intrinsic_width", get_name());
  self.intrinsic_current_line_width <-
    if self.line_break 
    then self.intrinsic_width 
    else if has_prev()
    then prev().intrinsic_next_x + self.intrinsic_width 
    else self.intrinsic_width;
  self.intrinsic_next_x <- if self.line_break then 0 else self.intrinsic_current_line_width;
  self.intrinsic_width_max <-
    if has_prev() then max(prev().intrinsic_width_max, self.intrinsic_current_line_width) else self.intrinsic_current_line_width;
  self.children_intrinsic_height <- if has_last() then last().intrinsic_height_sum else 10;
  self.intrinsic_height <-
    if self.display = "none"
    then 0
    else if get_name() = "#document"
    then self.children_intrinsic_height
    else if get_name() = "#text"
    then 10
    else if get_name() = "IMG"
    then (if has_attr(image_height) then (if has_attr(image_width) then get_attr(image_height) else panic("todo")) else 0)
    else if true
    then self.children_intrinsic_height
    else panic("intrinsic_height", get_name());
  self.intrinsic_current_line_height <-
    if self.line_break then
    0
    else if has_prev() then max(prev().intrinsic_current_line_height, self.intrinsic_height)
    else self.intrinsic_height;
  self.finished_intrinsic_height_sum <-
    if has_prev() then
      (if self.line_break 
      then prev().finished_intrinsic_height_sum + prev().intrinsic_current_line_height + self.intrinsic_height 
      else prev().finished_intrinsic_height_sum)
    else
      (if self.line_break then self.intrinsic_height else 0);
  self.intrinsic_height_sum <- self.finished_intrinsic_height_sum + self.intrinsic_current_line_height;
}

proc pass_1() {
  self.position <- if has_prop(position) then get_prop(position) else "static";
  self.width <- 
    if self.display = "none"
    then 0
    else if has_attr(width)
    then px_to_int(get_attr(width), self.intrinsic_width)
    else self.intrinsic_width;
  children.pass_1();
  self.height <- 
    if self.display = "none"
    then 0
    else if has_attr(height)
    then px_to_int(get_attr(height), self.intrinsic_height)
    else if has_last() then last().sum_height else 10;
  self.height_acc <- if self.position = "absolute" then 0 else self.height;
  self.sum_height <- 
     if has_prev() then self.height_acc + prev().sum_height else self.height_acc;
}

var x;
var y;
proc pass_2() {
  self.x <- if has_prev() then prev().next_x else (if has_parent() then parent().next_x else 0);
  self.y <- if has_prev() then prev().next_y else (if has_parent() then parent().next_y else 0);
  self.next_x <- if self.position = "absolute" then self.x else self.x + self.width;
  self.next_y <- if self.position = "absolute" then self.y else self.y + self.height;
  children.pass_2();
}

[pass_0; pass_1; pass_2]