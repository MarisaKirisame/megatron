(*
property:
display := block | inline-block | flex | inline-flex | none | contents | table | table-row-group | table-row | table-cell | list-item | grid
position := static | absolute
flex-grow := float
flex-shrink := float
flex-direction := row | row-reverse | column | column-reverse

attribute:
width := auto | Auto | float px | float ch | float lh | float % | fit-content | max-content
height := auto | Auto | float px | float ch | float lh | float % | fit-content | max-content

name := svg | NOSCRIPT | #document | #shadow-root | DIV | HTML | BODY | BUTTON | FOOTER | SELECT | SECTION | FORM | CENTER 
      | TD | TR | TBODY | TABLE | SPAN | FONT | A | ARTICLE | P | U | UL | B | H1 | H2 | H3 | H4 | DT | DD | DL | LI | LABEL | OL
      | NAV | HEADER | HEAD | SOURCE | PICTURE | FIGURE | FIGCAPTION | MAIN | REACT-PARTIAL | QUERY-BUILDER | MODAL-DIALOG | SCROLLABLE-REGION
      | DIALOG-HELPER | AUTO-CHECK | TOOL-TIP | CUSTOM-SCOPES | QBSEARCH-INPUT | INCLUDE-FRAGMENT | COOKIE-CONSENT-LINK | FULLSTORY-CAPTURE 
      | GHCC-CONSENT | GLOBAL-BANNER | ACTIVE-GLOBAL-BANNERS | CARD-SKEW | EM | ASIDE | AUDIO | SUP | TIME | ABBR | SMALL | SLOT | I
      | #text | IFRAME | INPUT | VIDEO | BR | IMG | TEXTAREA
*)
var finished_intrinsic_height_sum : float;

(*calculate display, intrinsic_width, and intrinsic_height*)
proc pass_0() {
  self.display <- if has_prop(display) then get_prop(display) else "block";
  self.position <- if has_prop(position) then get_prop(position) else "static";

  self.flex_grow <- if has_prop(flex-grow) then string_to_float(get_prop(flex-grow)) else 0;
  self.flex_shrink <- if has_prop(flex-shrink) then string_to_float(get_prop(flex-shrink)) else 0;
  self.flex_grow_sum <- (if has_prev() then prev().flex_grow_sum else 0) + self.flex_grow;
  self.flex_shrink_sum <- (if has_prev() then prev().flex_shrink_sum else 0) + self.flex_shrink;
  self.flex_direction <- if has_prop(flex-direction) then get_prop(flex-direction) else "";
  self.is_flex_row <- 
    if (has_parent() && ((parent().display = "flex") || (parent().display = "inline-flex")))
    then
      (if ((parent().flex_direction = "row") || (parent().flex_direction = "row-reverse"))
      then true
      else if (parent().flex_direction = "column") || (parent().flex_direction = "column-reverse")
      then false
      else panic("flex_direction:", parent().flex_direction))
    else false;
  self.is_flex_column <- 
    if (has_parent() && ((parent().display = "flex") || (parent().display = "inline-flex")))
    then
      (if (parent().flex_direction = "column") || (parent().flex_direction = "column-reverse")
      then true
      else if (parent().flex_direction = "row") || (parent().flex_direction = "row-reverse")
      then false
      else panic("flex_direction:", parent().flex_direction))
    else false;

  self.width_attr_expr <- 
    if !(has_attr(width))
    then "auto"
    else if string_is_float(get_attr(width))
    then get_attr(width)
    else if has_suffix(get_attr(width), "px")
    then strip_suffix(get_attr(width), "px")
    else if get_attr(width) = "Auto"
    then "auto"
    else if get_attr(width) = "auto"
    then "auto"
    else if get_attr(width) = "100%"
    then "auto"
    else panic("width_attr:", get_attr(width));
  self.has_width_attr <- self.width_attr_expr != "auto";

  self.height_attr_expr <- 
    if !(has_attr(height))
    then "auto"
    else if string_is_float(get_attr(height))
    then get_attr(height)
    else if has_suffix(get_attr(height), "px")
    then strip_suffix(get_attr(height), "px")
    else if get_attr(height) = "Auto"
    then "auto"
    else if get_attr(height) = "auto"
    then "auto"
    else if get_attr(width) = "100%"
    then "auto"
    else panic("height_attr:", get_attr(height));
  self.has_height_attr <- self.height_attr_expr != "auto";

  self.is_svg_block <- get_name() = "svg";
  self.inside_svg <- has_parent() && (parent().is_svg_block || parent().inside_svg);

  self.disabled <-
    if get_name() = "NOSCRIPT"
    then true
    else has_parent() && parent().disabled;
  
  self.visible <- (!(has_parent()) || parent().visible) && (self.display != "none") && !(self.inside_svg) && !(self.disabled);

  self.line_break <- 
    if self.display = "none"
    then false
    else if self.position = "absolute"
    then false
    else if has_parent() && ((parent().display = "flex") || parent().display = "inline-flex")
    then true
    else if self.display = "block"
    then true
    else if self.display = "inline"
    then false
    else if self.display = "inline-block"
    then false
    else if self.display = "inline-grid"
    then false
    else if self.display = "flex"
    then 
      (if get_prop(flex-direction) = "row"
      then false
      else if get_prop(flex-direction) = "row-reverse"
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
    else if self.display = "table-header-group"
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
      (get_name() = "H5") ||
      (get_name() = "H6") ||
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
      (get_name() = "ASIDE") ||
      (get_name() = "AUDIO") ||
      (get_name() = "SUP") ||
      (get_name() = "TIME") ||
      (get_name() = "ABBR") ||
      (get_name() = "SMALL") ||
      (get_name() = "SLOT") ||
      (get_name() = "I") ||
      (get_name() = "NG-PLURALIZE") ||
      (get_name() = "NG-VIEW") ||
      (get_name() = "APP-ROOT") ||
      (get_name() = "html") ||
      (get_name() = "META") ||
      (get_name() = "TITLE") ||
      (get_name() = "LINK") ||
      (get_name() = "SCRIPT") ||
      (get_name() = "STYLE") ||
      (get_name() = "PSA-BANNERS") ||
      (get_name() = "NAV-SEARCH") ||
      (get_name() = "LOGIN-BUTTON") ||
      (get_name() = "MEDIA-BUTTON") ||
      (get_name() = "MEDIA-MENU") ||
      (get_name() = "ICON-HAMBURGER") ||
      (get_name() = "PRIMARY-NAV") ||
      (get_name() = "WAYBACK-SLIDER") ||
      (get_name() = "MORE-SLIDER") ||
      (get_name() = "MEDIA-SLIDER") ||
      (get_name() = "SIGNED-OUT-DROPDOWN") ||
      (get_name() = "SEARCH-MENU") ||
      (get_name() = "DESKTOP-SUBNAV") ||
      (get_name() = "IA-TOPNAV") ||
      (get_name() = "MODAL-MANAGER") ||
      (get_name() = "HORIZONTAL-ACTIVITY-INDICATOR") ||
      (get_name() = "WAYBACK-SEARCH") ||
      (get_name() = "IA-WAYBACK-SEARCH") ||
      (get_name() = "IA-ICON-CLOSE") ||
      (get_name() = "IA-CLEARABLE-TEXT-INPUT") ||
      (get_name() = "COLLECTION-SEARCH-INPUT") ||
      (get_name() = "HOME-PAGE") ||
      (get_name() = "HOME-PAGE-HERO-BLOCK-ICON-BAR") ||
      (get_name() = "HOME-PAGE-HERO-BLOCK") ||
      (get_name() = "HOME-PAGE-ONBOARDING") ||
      (get_name() = "INFINITE-SCROLLER") ||
      (get_name() = "ONBOARDING-TILE") ||
      (get_name() = "HERO-BLOCK-ANNOUNCEMENTS") ||
      (get_name() = "SAVE-PAGE-FORM") ||
      (get_name() = "FIELDSET") ||
      (get_name() = "MODAL-TEMPLATE") ||
      (get_name() = "ROUTER-SLOT") ||
      (get_name() = "APP-FOOTER") ||
      (get_name() = "CIRCULAR-ACTIVITY-INDICATOR") ||
      (get_name() = "COLLECTION-TILE") ||
      (get_name() = "NOBR") ||
      (get_name() = "TH") ||
      (get_name() = "S") ||
      (get_name() = "BLOCKQUOTE") ||
      (get_name() = "TT") ||
      (get_name() = "CODE") ||
      (get_name() = "PRE") ||
      (get_name() = "HGROUP") ||
      (get_name() = "SUMMARY") ||
      (get_name() = "DETAILS") ||
      (get_name() = "ACTION-LIST") ||
      (get_name() = "ANCHORED-POSITION") ||
      (get_name() = "FOCUS-GROUP") ||
      (get_name() = "ACTION-MENU") ||
      (get_name() = "RELATIVE-TIME") ||
      (get_name() = "REACT-APP") ||
      (get_name() = "TURBO-FRAME") ||
      (get_name() = "TOOL-TIP") ||
      (get_name() = "CANVAS") ||
      (get_name() = "SHOW-DIALOG-ON-LOAD") ||
      (get_name() = "THEAD") ||
      (get_name() = "LOTTIE-PLAYER") ||
      (get_name() = "C-WIZ") ||
      (get_name() = "NEXT-ROUTE-ANNOUNCER") ||
      (get_name() = "LEGEND") ||
      (get_name() = "CG-BOARD") ||
      (get_name() = "CG-CONTAINER") ||
      (get_name() = "CG-AUTO-PIECES") ||
      (get_name() = "COORD") ||
      (get_name() = "COORDS") ||
      (get_name() = "PIECE") ||
      (get_name() = "PEARL") ||
      (get_name() = "HELP") ||
      (get_name() = "CG-RESIZE") ||
      (get_name() = "SQUARE") ||
      (get_name() = "INDEX") ||
      (get_name() = "SAN") ||
      (get_name() = "MOVE") ||
      (get_name() = "SIGNAL") ||
      (get_name() = "DATA-SRC") ||
      (get_name() = "REPUTATION-RECAPTCHA") ||
      (get_name() = "SHREDDIT-ASYNC-LOADER") ||
      (get_name() = "SHREDDIT-GOOD-VISIT-TRACKER") ||
      (get_name() = "FACEPLATE-SERVER-SESSION") ||
      (get_name() = "FACEPLATE-SCREEN-READER-CONTENT") ||
      (get_name() = "ACTIVATE-FEATURE") ||
      (get_name() = "FACEPLATE-TRACKER") ||
      (get_name() = "FACEPLATE-TOOLTIP") ||
      (get_name() = "FACEPLATE-PERFMARK") ||
      (get_name() = "FACEPLATE-IMG") ||
      (get_name() = "FACEPLATE-DIALOG") ||
      (get_name() = "FACEPLATE-LOADER") ||
      (get_name() = "FACEPLATE-PARTIAL") ||
      (get_name() = "REDDIT-HEADER-LARGE") ||
      (get_name() = "SHREDDIT-MEDIA-LIGHTBOX") ||
      (get_name() = "FACEPLATE-DROPDOWN-MENU") ||
      (get_name() = "FACEPLATE-SEARCH-INPUT") ||
      (get_name() = "REDDIT-SEARCH-LARGE") ||
      (get_name() = "REDDIT-HEADER-ACTION-ITEMS") ||
      (get_name() = "SEARCH-DYNAMIC-ID-CACHE-CONTROLLER") ||
      (get_name() = "SCREEN-READER-ALERT-OUTLET") ||
      (get_name() = "SHREDDIT-PAGE-META") ||
      (get_name() = "STRONG")
    then true
    else if 
      (get_name() = "#text") ||
      (get_name() = "svg") ||
      (get_name() = "IFRAME") ||
      (get_name() = "INPUT") ||
      (get_name() = "VIDEO") ||
      (get_name() = "BR") ||
      (get_name() = "HR") ||
      (get_name() = "IMG") ||
      (get_name() = "TEXTAREA")
    then false
    else panic("is_default_case:", get_name());

  self.intrinsic_width_is_width <-
    if 
      (self.display = "none") || 
      self.inside_svg || 
      self.disabled
    then true
    else if (has_parent() && parent().is_flex_row) 
    then false
    else if
      (self.width_expr = "auto") ||
      has_suffix(self.width_expr, "px") ||
      has_suffix(self.width_expr, "ch") ||
      has_prefix(self.width_expr, "calc") ||
      (self.width_expr = "max-content") ||
      (self.width_expr = "min-content")
    then true
    else if has_suffix(self.width_expr, "%") || self.width_expr = "fit-content"
    then false
    else panic("intrinsic_width_is_width: ", self.width_expr);

  self.children_intrinsic_width <- 
    if has_last() then last().intrinsic_width_max else 0;

  self.intrinsic_width_internal <- 
    if self.display = "none" then 0
    else if self.inside_svg then 0
    else if self.disabled then 0
    else if 
      (self.width_expr != "auto") && 
      (!(has_suffix(self.width_expr, "%"))) && 
      (self.width_expr != "fit-content") && 
      (self.width_expr != "max-content") && 
      (self.width_expr != "min-content") && 
      (!(has_prefix(self.width_expr, "calc")))
    then 
      (if has_suffix(self.width_expr, "px") 
      then string_to_float(strip_suffix(self.width_expr, "px"))
      else if has_suffix(self.width_expr, "ch")
      then string_to_float(strip_suffix(self.width_expr, "ch"))
      else panic("intrinsic_width_internal:", self.width_expr))
    else 
      self.children_intrinsic_width +
      (if (get_name() = "#text")
      then (if has_first() then panic("intrinsic_width_internal ICE") else 100)
      else if self.is_default_case 
      then 0
      else if (get_name() = "BR") || (get_name() = "HR")
      then (if has_first() then panic("intrinsic_width_internal ICE") else 0)
      else if get_name() = "INPUT"
      then 100
      else if get_name() = "svg"
      then 
        (if !(self.has_width_attr) && !(self.has_height_attr)
        then 300
        else if self.has_width_attr && string_is_float(self.width_attr_expr)
        then string_to_float(self.width_attr_expr)
        else if self.has_width_attr && has_suffix(self.width_attr_expr, "px")
        then string_to_float(strip_suffix(self.width_attr_expr, "px"))
        else if !(self.has_width_attr) && has_attr(viewBox)
        then string_to_float(nth_by_sep(get_attr(viewBox), " ", i2))
        else if self.has_width_attr && has_suffix(self.width_attr_expr, "%") && has_attr(viewBox)
        then string_to_float(nth_by_sep(get_attr(viewBox), " ", i2)) * string_to_float(strip_suffix(self.width_attr_expr, "%")) / 100
        else panic("unknown SVG:", self.width_attr_expr, self.height_attr_expr))
      else if get_name() = "IMG"
      then 
        (if self.has_width_attr && string_is_float(self.width_attr_expr)
        then string_to_float(self.width_attr_expr)
        else if has_attr(image_width) && !(self.has_height_attr)
        then int_to_float(get_attr(image_width))
        else if !(self.has_width_attr) && self.has_height_attr && has_attr(image_width) && has_attr(image_height)
        then 
          (if get_attr(image_height) != i0
          then string_to_float(self.height_attr_expr) * int_to_float(get_attr(image_width)) / int_to_float(get_attr(image_height))
          else 0)
        else panic("IMG width:", self.has_width_attr, self.has_height_attr, has_attr(image_width), has_attr(image_height)))
      else if get_name() = "IFRAME"
      then
        (if self.has_width_attr
        then panic("IFRAME width:", self.width_attr_expr)
        else 300)
      else if get_name() = "TEXTAREA"
      then 100
      else if get_name() = "VIDEO"
      then 
        (if self.has_width_attr
        then panic("VIDEO width:", self.width_attr_expr)
        else 300)
      else panic("intrinsic_width name:", get_name()));

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

  self.children_intrinsic_height <- 
    if has_last() then last().finished_intrinsic_height_sum + last().intrinsic_current_line_height else 0;

  self.height_expr <- if has_prop(height) then get_prop(height) else "auto";

  self.intrinsic_height_is_height <-
    if 
      (self.display = "none") || 
      self.inside_svg || 
      self.disabled 
    then true
    else if (has_parent() && parent().is_flex_column) 
    then false
    else if
      (self.height_expr = "auto") ||
      has_suffix(self.height_expr, "px") ||
      has_suffix(self.height_expr, "ch") ||
      has_suffix(self.height_expr, "lh") ||
      has_prefix(self.height_expr, "calc") ||
      (self.height_expr = "max-content") ||
      (self.height_expr = "min-content")
    then true
    else if has_suffix(self.height_expr, "%") || self.height_expr = "fit-content"
    then false
    else panic("intrinsic_height_is_height: ", self.height_expr);

  self.intrinsic_height_internal <- 
    if self.display = "none" then 0 
    else if self.inside_svg then 0
    else if self.disabled then 0
    else if 
      (self.height_expr != "auto") && 
      (!(has_suffix(self.height_expr, "%"))) && 
      (self.height_expr != "fit-content") &&
      (self.height_expr != "max-content") &&
      (self.height_expr != "min-content") &&
      (!(has_prefix(self.height_expr, "calc")))
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
      then (if has_first() then panic("intrinsic_height ICE") else 10)
      else if self.is_default_case
      then 0
      else if (get_name() = "BR") || (get_name() = "HR")
      then (if has_first() then panic("intrinsic_height BR ICE") else 0)
      else if get_name() = "INPUT"
      then 10
      else if get_name() = "svg"
      then 
        (if !(self.has_width_attr) && !(self.has_height_attr)
        then 150
        else if self.has_height_attr && string_is_float(self.height_attr_expr)
        then string_to_float(self.height_attr_expr)
        else if self.has_height_attr && has_suffix(self.height_attr_expr, "px")
        then string_to_float(strip_suffix(self.height_attr_expr, "px"))
        else if has_attr(viewBox)
        then string_to_float(nth_by_sep(get_attr(viewBox), " ", i3))
        else if self.has_height_attr && has_suffix(self.height_attr_expr, "%") && has_attr(viewBox)
        then string_to_float(nth_by_sep(get_attr(viewBox), " ", i3)) * string_to_float(strip_suffix(self.height_attr_expr, "%")) / 100
        else panic("unknown SVG:", self.width_attr_expr, self.height_attr_expr))
      else if get_name() = "IMG"
      then 
        (if self.has_height_attr && string_is_float(self.height_attr_expr)
        then string_to_float(self.height_attr_expr)
        else if has_attr(image_height) && !(self.has_width_attr)
        then int_to_float(get_attr(image_height))
        else if self.has_width_attr && !(self.has_height_attr) && has_attr(image_width) && has_attr(image_height)
        then 
          (if get_attr(image_width) != i0
          then string_to_float(self.width_attr_expr) * int_to_float(get_attr(image_height)) / int_to_float(get_attr(image_width))
          else 0)
        else panic("IMG height", self.has_width_attr, self.has_height_attr, has_attr(image_width), has_attr(image_height)))
      else if get_name() = "IFRAME"
      then
        (if self.has_height_attr
        then panic("IFRAME height:", self.height_attr_expr)
        else 150)
      else if get_name() = "TEXTAREA"
      then 100
      else if get_name() = "VIDEO"
      then 
        (if self.has_height_attr
        then panic("VIDEO height:", self.height_attr_expr)
        else 150)
      else panic("intrinsic_height name:", get_name()));

  self.intrinsic_height_external <-
    if self.position = "absolute" then 0 else self.intrinsic_height_internal;

  self.intrinsic_height_sum <-
    (if has_prev() then prev().intrinsic_height_sum else 0) + self.intrinsic_height_external;

  (*the height of the current ongoing line*)
  self.intrinsic_current_line_height <-
    if self.line_break 
    then 0
    else max(self.intrinsic_height_external, if has_prev() then prev().intrinsic_current_line_height else 0);

  (*the sum of intrinsic height of all finished line: exclude current ongoing line*)
  self.finished_intrinsic_height_sum <-
    if has_prev() then
      (if self.line_break 
      then prev().finished_intrinsic_height_sum + prev().intrinsic_current_line_height + self.intrinsic_height_external
      else prev().finished_intrinsic_height_sum)
    else
      (if self.line_break then self.intrinsic_height_external else 0);
}

var x : float;
var y : float;

proc pass_1() {
  self.box_width <- if has_parent() then parent().width_internal else 1920;
  self.box_height <- if has_parent() then parent().height_internal else 1080;

  self.left_over <- 
    if self.is_flex_row 
    then self.box_width - (if has_last() then last().intrinsic_width_sum else 0)
    else self.box_height - (if has_last() then last().intrinsic_height_sum else 0);

  self.flex_amount <- if has_parent() && parent().left_over > 0 then self.flex_grow else self.flex_shrink;
  self.flex_unit <- if self.left_over > 0 then self.left_over / self.flex_grow_sum else self.left_over / self.flex_shrink_sum;

  self.x <- 
    if has_prev() 
    then 
      (if (self.line_break || prev().line_break) then 0 else prev().x + prev().width_external)
    else if has_parent() then parent().x else 0;

  self.width_internal <- 
    if self.intrinsic_width_is_width then self.intrinsic_width_internal
    else if (has_parent() && parent().is_flex_row)
    then self.intrinsic_width_internal + (self.flex_amount * parent().flex_unit)
    else if has_suffix(self.width_expr, "%")
    then self.box_width * string_to_float(strip_suffix(self.width_expr, "%")) / 100
    else if self.width_expr = "fit-content"
    then max(self.box_width, self.intrinsic_width_internal)
    else panic("width: ", self.width_expr);

  self.width_external <-
    if self.position = "absolute" then 0 else self.width_internal;

  self.y <- 
    if has_prev() 
    then 
      (if self.line_break || prev().line_break then prev().y + prev().line_height else prev().y)
    else if has_parent() then parent().y else 0;

  self.height_internal <- 
    if self.intrinsic_height_is_height 
    then self.intrinsic_height_internal
    else if (has_parent() && parent().is_flex_column)
    then self.intrinsic_height_internal + (self.flex_amount * parent().flex_unit)
    else if has_suffix(self.height_expr, "%")
    then self.box_height * string_to_float(strip_suffix(self.height_expr, "%")) / 100
    else if self.height_expr = "fit-content"
    then max(self.box_height, self.intrinsic_height_internal)
    else panic("height: ", self.height_expr);

  self.height_external <-
    if self.position = "absolute" then 0 else self.height_internal;

  (*the height of the line this node is on*)
  self.line_height <-
    if has_prev() && !(prev().line_break)
    then max(self.height_external, prev().line_height)
    else self.height_external;

  children.pass_1();
}

[pass_0; pass_1]
