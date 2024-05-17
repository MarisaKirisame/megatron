prop width;
prop height;
prop sum_height;
prop x;
prop y;

proc pass_0() {
  self.width <- if has_parent() then parent().width else 800;
  children.pass_0();
  self.height <- if has_last() then last().sum_height else 10;
  self.sum_height <- if has_prev() then self.height + prev().sum_height else self.height;
}

[pass_0]