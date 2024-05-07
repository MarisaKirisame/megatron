prop width;
prop height;
prop sum_height;

proc compute_width() {
  self.width <- if has_parent() then parent().width else 800;
  if (has_first()) {
    first().compute_width();
  } else {
    self.compute_height();
  }
}

proc compute_height() {
  self.height <- if (has_last()) then last().sum_height else 10;

  self.sum_height <- if (has_prev()) then self.height + prev().sum_height else self.height;

  if (has_next()) {
    next().compute_width();
  } else {
    if (has_parent()) {
      parent().compute_height();
    } else { }
  }
}

proc main() {
  self.compute_width();
}