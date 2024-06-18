var intrinsic_width;
var intrinsic_height;
var display;

(*calculate display, intrinsic_width, and intrinsic_height*)
proc pass_0() {
  self.display <- if has_prop(display) then get_prop(display) else "block";
  self.line_break <- 
     if self.display = "none"
    then false
    else if has_parent() && ((parent().display = "flex") || parent().display = "inline-flex")
    then true
    else if self.display = "block"
    then true
    else if self.display = "inline"
    then false
    else if self.display = "inline-block"
    then false
    else if self.display = "flex"
    then true
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
    else panic("line_break: ", self.display);
  children.pass_0();

  self.children_intrinsic_width <- 
    if has_last() then last().intrinsic_width_max else 0;

  self.intrinsic_width <- 
    if self.display = "none" then 0
    else if (has_prop(width)) && (get_prop(width) != "auto") && (!has_suffix(get_prop(width), "%"))
    then 
      (if has_suffix(get_prop(width), "px") 
      then string_to_int(strip_suffix(get_prop(width), "px"))
      else if has_suffix(get_prop(width), "ch")
      then string_to_int(strip_suffix(get_prop(width), "ch"))
      else panic("intrinsic_width: ", get_prop(width)))
    else 
      self.children_intrinsic_width +
      (if (get_name() = "#text")
      then (if has_first() then panic("intrinsic_width ICE") else 100)
      else if
        (get_name() = "#document") ||
        (get_name() = "#shadow-root") ||
        (get_name() = "DIV") ||
        (get_name() = "HTML") ||
        (get_name() = "BODY") ||
        (get_name() = "FORM") ||
        (get_name() = "CENTER") ||
        (get_name() = "TD") ||
        (get_name() = "TR") ||
        (get_name() = "TBODY") ||
        (get_name() = "TABLE") || 
        (get_name() = "SPAN") || 
        (get_name() = "FONT") || 
        (get_name() = "A") || 
        (get_name() = "P") || 
        (get_name() = "U") || 
        (get_name() = "B") ||
        (get_name() = "I")
      then 0
      else if get_name() = "BR"
      then (if has_first() then panic("intrinsic_width ICE") else 0)
      else if get_name() = "INPUT"
      then 100
      else panic("intrinsic_width name: ", get_name()));

  self.intrinsic_current_line_width <-
    self.intrinsic_width + 
    if has_prev() && !prev().line_break 
    then prev().intrinsic_current_line_width
    else 0;

  self.intrinsic_width_max <-
    max(self.intrinsic_current_line_width,
      if has_prev() then prev().intrinsic_width_max else 0);

  self.children_intrinsic_height <- 
    if has_last() then last().finished_intrinsic_height_sum + last().intrinsic_current_line_height else 0;

  self.intrinsic_height <- 
    if self.display = "none" then 0 
    else if has_prop(height) && (get_prop(height) != "auto") && (!has_suffix(get_prop(height), "%"))
    then 
      (if has_suffix(get_prop(height), "px") 
      then string_to_int(strip_suffix(get_prop(height), "px"))
      else if has_suffix(get_prop(height), "ch")
      then string_to_int(strip_suffix(get_prop(height), "ch"))
      else if has_suffix(get_prop(height), "lh")
      then string_to_int(strip_suffix(get_prop(height), "lh"))
      else panic("intrinsic_height: ", get_prop(height)))
    else 
      self.children_intrinsic_height +
      (if (get_name() = "#text")
      then (if has_first() then panic("intrinisc_height ICE") else 10)
      else if 
        (get_name() = "#document") || 
        (get_name() = "#shadow-root") ||
        (get_name() = "DIV") ||
        (get_name() = "HTML") ||
        (get_name() = "BODY") ||
        (get_name() = "FORM") ||
        (get_name() = "CENTER") ||
        (get_name() = "TD") || 
        (get_name() = "TR") || 
        (get_name() = "TBODY") || 
        (get_name() = "TABLE") || 
        (get_name() = "SPAN") || 
        (get_name() = "FONT") || 
        (get_name() = "A") || 
        (get_name() = "P") || 
        (get_name() = "U") || 
        (get_name() = "B") ||
        (get_name() = "I")
      then 0
      else if get_name() = "BR"
      then (if has_first() then panic("intrinsic_height BR ICE") else 0)
      else if get_name() = "INPUT"
      then 10
      else panic("intrinisc_height name: ", get_name()));

  (*the height of the current ongoing line*)
  self.intrinsic_current_line_height <-
    if self.line_break 
    then 0
    else max(self.intrinsic_height, if has_prev() then prev().intrinsic_current_line_height else 0);

  (*the sum of intrinsic height of all finished line: exclude current ongoing line*)
  self.finished_intrinsic_height_sum <-
    if has_prev() then
      (if self.line_break 
      then prev().finished_intrinsic_height_sum + prev().intrinsic_current_line_height + self.intrinsic_height 
      else prev().finished_intrinsic_height_sum)
    else
      (if self.line_break then self.intrinsic_height else 0);
}

var width;
var height;
var x;
var y;

proc pass_1() {
  self.position <- if has_prop(position) then get_prop(position) else "static";

  self.box_width <- if has_parent() then parent().width else 1920;

  self.x <- 
    if has_prev() 
    then 
      (if (self.line_break || prev().line_break) then 0 else prev().x + prev().width)
    else if has_parent() then parent().x else 0;

  self.width <- 
    if self.display = "none"
    then 0
    else if has_prop(width) && has_suffix(get_prop(width), "%")
    then (self.box_width - self.x) * 100 / string_to_int(strip_suffix(get_prop(width), "%"))
    else self.intrinsic_width;

  self.box_height <- if has_parent() then parent().height else 1080;

  self.y <- 
    if has_prev() 
    then 
      (if self.line_break || prev().line_break then prev().y + prev().current_line_height else prev().y)
    else if has_parent() then parent().y else 0;

  self.height <- 
    if self.display = "none"
    then 0
    else if has_prop(height) && has_suffix(get_prop(height), "%")
    then (self.box_height - self.y) * 100 / string_to_int(strip_suffix(get_prop(height), "%"))
    else self.intrinsic_height;


  (*the height of the current ongoing line*)
  self.current_line_height <-
    if self.line_break 
    then 0
    else max(self.height, if has_prev() then prev().current_line_height else 0);

  children.pass_1();
}

[pass_0; pass_1]