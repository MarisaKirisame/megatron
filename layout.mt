var intrinsic_width;
var intrinsic_height;
var display;

(*calculate display, intrinsic_width, and intrinsic_height*)
proc pass_0() {
  self.display <- if has_prop(display) then get_prop(display) else "block";

  self.is_svg_block <- get_name() = "svg";
  self.inside_svg <- has_parent() && (parent().is_svg_block || parent().inside_svg);

  self.disabled <-
    if get_name() = "NOSCRIPT"
    then true
    else has_parent() && parent().disabled;

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
    then 
      (if get_prop(flex-direction) = "row"
      then false
      else if get_prop(flex-direction) = "column"
      then true
      else if get_prop(flex-direction) = "column-reverse"
      then true
      else panic("flex-direction:", get_prop(flex-direction)))
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
    then false
    else if self.display = "list-item"
    then true
    else if self.display = "grid"
    then true
    else panic("line_break: ", self.display);
  children.pass_0();

  self.children_intrinsic_width <- 
    if has_last() then last().intrinsic_width_max else 0;

  self.width_expr <- if has_prop(width) then get_prop(width) else "auto";

  self.is_default_case <-
    if self.display = "none" then true
    else if self.inside_svg then true
    else if self.disabled then true
    else if 
      (get_name() = "#document") ||
      (get_name() = "#shadow-root") ||
      (get_name() = "DIV") ||
      (get_name() = "HTML") ||
      (get_name() = "BODY") ||
      (get_name() = "BUTTON") ||
      (get_name() = "FOOTER") ||
      (get_name() = "SELECT") ||
      (get_name() = "SECTION") ||
      (get_name() = "FORM") ||
      (get_name() = "CENTER") ||
      (get_name() = "TD") ||
      (get_name() = "TR") ||
      (get_name() = "TBODY") ||
      (get_name() = "TABLE") || 
      (get_name() = "SPAN") || 
      (get_name() = "FONT") || 
      (get_name() = "A") || 
      (get_name() = "ARTICLE") || 
      (get_name() = "P") || 
      (get_name() = "U") || 
      (get_name() = "UL") || 
      (get_name() = "B") ||
      (get_name() = "H1") ||
      (get_name() = "H2") ||
      (get_name() = "H3") ||
      (get_name() = "H4") ||
      (get_name() = "DT") ||
      (get_name() = "DD") ||
      (get_name() = "DL") ||
      (get_name() = "LI") ||
      (get_name() = "LABEL") ||
      (get_name() = "OL") ||
      (get_name() = "NAV") ||
      (get_name() = "HEADER") ||
      (get_name() = "HEAD") ||
      (get_name() = "SOURCE") ||
      (get_name() = "PICTURE") ||
      (get_name() = "FIGURE") ||
      (get_name() = "FIGCAPTION") || (*todo: fix*)
      (get_name() = "MAIN") ||
      (get_name() = "REACT-PARTIAL") ||
      (get_name() = "QUERY-BUILDER") ||
      (get_name() = "MODAL-DIALOG") ||
      (get_name() = "SCROLLABLE-REGION") ||
      (get_name() = "DIALOG-HELPER") ||
      (get_name() = "AUTO-CHECK") ||
      (get_name() = "TOOL-TIP") ||
      (get_name() = "CUSTOM-SCOPES") ||
      (get_name() = "QBSEARCH-INPUT") ||
      (get_name() = "INCLUDE-FRAGMENT") ||
      (get_name() = "COOKIE-CONSENT-LINK") ||
      (get_name() = "FULLSTORY-CAPTURE") ||
      (get_name() = "GHCC-CONSENT") ||
      (get_name() = "GLOBAL-BANNER") ||
      (get_name() = "ACTIVE-GLOBAL-BANNERS") ||
      (get_name() = "CARD-SKEW") ||
      (get_name() = "EM") ||
      (get_name() = "SUP") ||
      (get_name() = "TIME") ||
      (get_name() = "ABBR") ||
      (get_name() = "SMALL") ||
      (get_name() = "SLOT") ||
      (get_name() = "I")
    then true
    else if 
      (get_name() = "#text") ||
      (get_name() = "svg") ||
      (get_name() = "IFRAME") ||
      (get_name() = "INPUT") ||
      (get_name() = "VIDEO") ||
      (get_name() = "BR") ||
      (get_name() = "IMG") ||
      (get_name() = "TEXTAREA")
    then false
    else panic("is_default_case:", get_name());

  self.intrinsic_width <- 
    if self.display = "none" then 0
    else if self.inside_svg then 0
    else if self.disabled then 0
    else if 
      (self.width_expr != "auto") && 
      (!(has_suffix(self.width_expr, "%"))) && 
      (self.width_expr != "fit-content") && 
      (self.width_expr != "max-content") && 
      (!(has_prefix(self.width_expr, "calc")))
    then 
      (if has_suffix(self.width_expr, "px") 
      then string_to_float(strip_suffix(self.width_expr, "px"))
      else if has_suffix(self.width_expr, "ch")
      then string_to_float(strip_suffix(self.width_expr, "ch"))
      else panic("intrinsic_width:", self.width_expr))
    else 
      self.children_intrinsic_width +
      (if (get_name() = "#text")
      then (if has_first() then panic("intrinsic_width ICE") else 100)
      else if self.is_default_case 
      then 0
      else if get_name() = "BR"
      then (if has_first() then panic("intrinsic_width ICE") else 0)
      else if get_name() = "INPUT"
      then 100
      else if get_name() = "svg"
      then 
        (if has_attr(width)
        then string_to_float(get_attr(width)) 
        else if has_attr(viewBox)
        then string_to_float(nth_by_sep(get_attr(viewBox), " ", i2))
        else panic("unknown SVG"))
      else if get_name() = "IMG"
      then 
        (if has_attr(width)
        then string_to_float(get_attr(width))
        else if has_attr(image_width) && !(has_attr(height))
        then int_to_float(get_attr(image_width))
        else if !(has_attr(width)) && has_attr(height) && has_attr(image_width) && has_attr(image_height)
        then 
          (if get_attr(image_height) != i0
          then string_to_float(get_attr(height)) * int_to_float(get_attr(image_width)) / int_to_float(get_attr(image_height))
          else 0)
        else panic("IMG width:", has_attr(width), has_attr(height), has_attr(image_width), has_attr(image_height)))
      else if get_name() = "IFRAME"
      then
        (if has_attr(width) 
        then panic("IFRAME width:", get_attr(width))
        else 300)
      else if get_name() = "TEXTAREA"
      then 100
      else panic("intrinsic_width name:", get_name()));

  self.intrinsic_current_line_width <-
    self.intrinsic_width + 
    if has_prev() && !(prev().line_break)
    then prev().intrinsic_current_line_width
    else 0;

  self.intrinsic_width_max <-
    max(self.intrinsic_current_line_width,
      if has_prev() then prev().intrinsic_width_max else 0);

  self.children_intrinsic_height <- 
    if has_last() then last().finished_intrinsic_height_sum + last().intrinsic_current_line_height else 0;

  self.height_expr <- if has_prop(height) then get_prop(height) else "auto";

  self.intrinsic_height <- 
    if self.display = "none" then 0 
    else if self.inside_svg then 0
    else if self.disabled then 0
    else if (self.height_expr != "auto") && (!(has_suffix(self.height_expr, "%"))) && (self.height_expr != "fit-content")
    then 
      (if has_suffix(self.height_expr, "px") 
      then string_to_float(strip_suffix(self.height_expr, "px"))
      else if has_suffix(self.height_expr, "ch")
      then string_to_float(strip_suffix(self.height_expr, "ch"))
      else if has_suffix(self.height_expr, "lh")
      then string_to_float(strip_suffix(self.height_expr, "lh"))
      else panic("intrinsic_height:", self.height_expr))
    else 
      self.children_intrinsic_height +
      (if (get_name() = "#text")
      then (if has_first() then panic("intrinisc_height ICE") else 10)
      else if self.is_default_case
      then 0
      else if get_name() = "BR"
      then (if has_first() then panic("intrinsic_height BR ICE") else 0)
      else if get_name() = "INPUT"
      then 10
      else if get_name() = "svg"
      then 
        (if has_attr(height)
        then string_to_float(get_attr(height)) 
        else if has_attr(viewBox)
        then string_to_float(nth_by_sep(get_attr(viewBox), " ", i3))
        else panic("unknown SVG"))
      else if get_name() = "IMG"
      then 
        (if has_attr(height)
        then string_to_float(get_attr(height))
        else if has_attr(image_height) && !(has_attr(width))
        then int_to_float(get_attr(image_height))
        else panic("IMG height"))
      else if get_name() = "IFRAME"
      then
        (if has_attr(height) 
        then panic("IFRAME height:", get_attr(height))
        else 150)
      else if get_name() = "TEXTAREA"
      then 100
      else panic("intrinisc_height name:", get_name()));

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
    else if has_suffix(self.width_expr, "%")
    then self.box_width * string_to_float(strip_suffix(self.width_expr, "%")) / 100
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
    else if has_suffix(self.height_expr, "%")
    then self.box_height * string_to_float(strip_suffix(self.height_expr, "%")) / 100
    (*todo: handle each case separately*)
    else self.intrinsic_height;


  (*the height of the current ongoing line*)
  self.current_line_height <-
    if self.line_break 
    then 0
    else max(self.height, if has_prev() then prev().current_line_height else 0);

  children.pass_1();
}

[pass_0; pass_1]