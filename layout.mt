var finished_intrinsic_height_sum : float;

(*calculate display, intrinsic_width, and intrinsic_height*)
proc pass_0() {
  self.display <- if has_prop(display) then get_prop(display) else "block";
  self.position <- if has_prop(position) then get_prop(position) else "static";

  self.width_attr_expr <- 
    if !(has_attr(width))
    then "auto"
    else if string_is_float(get_attr(width)) || has_suffix(get_attr(width), "%")
    then get_attr(width)
    else if get_attr(width) = "Auto"
    then "auto"
    else panic("width_attr:", get_attr(width));
  self.has_width_attr <- self.width_attr_expr != "auto";

  self.is_svg_block <- get_name() = "svg";
  self.inside_svg <- has_parent() && (parent().is_svg_block || parent().inside_svg);

  self.disabled <-
    if get_name() = "NOSCRIPT"
    then true
    else has_parent() && parent().disabled;
  
  self.visible <- (!(has_parent()) || parent().visible) && (self.display != "none") && !(self.inside_svg) && !(self.disabled);

  self.line_break <- true;

  children.pass_0();

  self.width_expr <- if has_prop(width) then get_prop(width) else "auto";

  self.is_default_case <- true;

  self.intrinsic_width_is_width <- true;

  self.children_intrinsic_width <- 
    if has_last() then last().intrinsic_width_max else 0;

  self.intrinsic_width_internal <- 
      self.children_intrinsic_width + 1;

  self.intrinsic_width_external <- 
    if self.position = "absolute" then 0 else self.intrinsic_width_internal;

  self.intrinsic_current_line_width <-
    self.intrinsic_width_external + 
    if has_prev() && !(prev().line_break)
    then prev().intrinsic_current_line_width
    else 0;

  self.intrinsic_width_max <-
    max(self.intrinsic_current_line_width,
      if has_prev() then prev().intrinsic_width_max else 0);

  self.intrinsic_width_sum <- (if has_prev() then prev().intrinsic_width_sum else 0) + self.intrinsic_width_external;
}

proc pass_1() {
  self.box_width <- if has_parent() then parent().intrinsic_width_internal else 1920;
  children.pass_1();
}

[pass_0; pass_1]
