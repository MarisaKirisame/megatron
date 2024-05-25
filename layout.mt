var width;
var height;
var sum_height;
var display;

proc pass_0() {
  self.display <- if has_prop(display) then get_prop(display) else "block";
  self.width_px <- if has_prop(width) then get_prop(width) else "auto";
  self.width <- 
    if self.display = "none"
    then 0
    else px_to_int(self.width_px, (if has_parent() then parent().width else 800));
  children.pass_0();
  self.height <- if self.display = "none" then 0 else if has_last() then last().sum_height else 10;
  self.sum_height <- if has_prev() then self.height + prev().sum_height else self.height;
}

var x;
var y;
proc pass_1() {
  self.x <- 
    if has_first() then 
      (if has_parent() then parent().x else 0) 
    else (if has_prev() then prev().x + prev().width else (if has_parent() then parent().x + parent().width else 0));
  self.y <-
    if has_first() then
      (if has_prev() then prev().y + prev().height else (if has_parent() then parent().y + parent().height else 0))
    else (if has_parent() then parent().y else 0);
  children.pass_1();
}

[pass_0; pass_1]