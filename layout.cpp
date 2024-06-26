#include <string>

#include <cassert>

struct Content;
template <typename T> T panic() { assert(false); }
template <typename T>
T get_attribute(const Content &self, const std::string &str) {
  assert(false);
}
bool has_attribute(const Content &self, const std::string &str) {
  assert(false);
}
template <typename T>
T get_property(const Content &self, const std::string &str) {
  assert(false);
}
bool has_property(const Content &self, const std::string &str) {
  assert(false);
}
int max(int x, int y) {}
int plus(int x, int y) {}
int minus(int x, int y) {}
int mult(int x, int y) {}
int divide(int x, int y) {}
bool gt(float x, float y) {}
bool eq(const std::string &x, const std::string &y) {}
bool neq(const std::string &x, const std::string &y) {}
bool neq(int x, int y) {}
double string_to_float(const std::string &x) {}
bool string_is_float(const std::string &x) {}
double int_to_float(int x) {}
std::string strip_suffix(const std::string &str, const std::string &sfx) {}
bool has_suffix(const std::string &str, const std::string &sfx) {}
bool has_prefix(const std::string &str, const std::string &sfx) {}
std::string nth_by_sep(const std::string &str, const std::string &sep,
                       int nth) {}

struct Content {
  Content *parent = nullptr;
  Content *prev = nullptr;
  Content *first = nullptr;
  Content *last = nullptr;
  std::string name;
  bool visible;
  bool inside_svg;
  std::string height_expr;
  double flex_grow_sum;
  double intrinsic_width_max;
  double x;
  double left_over;
  double y;
  bool is_svg_block;
  double intrinsic_current_line_width;
  bool is_default_case;
  double finished_intrinsic_height_sum;
  double flex_grow;
  double flex_amount;
  double children_intrinsic_height;
  double height_internal;
  double width_external;
  double intrinsic_current_line_height;
  double intrinsic_width_external;
  double flex_unit;
  std::string width_attr_expr;
  double intrinsic_height_internal;
  std::string flex_direction;
  double children_intrinsic_width;
  double box_width;
  double intrinsic_height_sum;
  bool intrinsic_height_is_height;
  bool intrinsic_width_is_width;
  std::string display;
  double box_height;
  bool is_flex_row;
  double flex_shrink_sum;
  double intrinsic_width_sum;
  double line_height;
  bool is_flex_column;
  bool has_width_attr;
  double width_internal;
  bool line_break;
  double intrinsic_height_external;
  bool has_height_attr;
  double flex_shrink;
  bool disabled;
  std::string position;
  std::string height_attr_expr;
  double height_external;
  std::string width_expr;
  double intrinsic_width_internal;
};
void bb_1(Content &self) {
  self.display = ((has_property(self, "display"))
                      ? (get_property<std::string>(self, "display"))
                      : ("block"));
  self.position = ((has_property(self, "position"))
                       ? (get_property<std::string>(self, "position"))
                       : ("static"));
  self.flex_grow =
      ((has_property(self, "flex-grow"))
           ? (string_to_float((get_property<std::string>(self, "flex-grow"))))
           : (double(0.)));
  self.flex_shrink =
      ((has_property(self, "flex-shrink"))
           ? (string_to_float((get_property<std::string>(self, "flex-shrink"))))
           : (double(0.)));
  self.flex_grow_sum = (plus(
      ((self.prev != nullptr) ? (self.prev->flex_grow_sum) : (double(0.))),
      ((&self)->flex_grow)));
  self.flex_shrink_sum = (plus(
      ((self.prev != nullptr) ? (self.prev->flex_shrink_sum) : (double(0.))),
      ((&self)->flex_shrink)));
  self.flex_direction =
      ((has_property(self, "flex-direction"))
           ? (get_property<std::string>(self, "flex-direction"))
           : (""));
  self.is_flex_row =
      (((self.parent != nullptr) &&
        ((eq((self.parent->display), ("flex"))) ||
         (eq((self.parent->display), ("inline-flex")))))
           ? ((eq((self.parent->flex_direction), ("row")))
                  ? (true)
                  : (((eq((self.parent->flex_direction), ("column"))) ||
                      (eq((self.parent->flex_direction), ("column-reverse"))))
                         ? (false)
                         : (panic<bool>())))
           : (false));
  self.is_flex_column =
      (((self.parent != nullptr) &&
        ((eq((self.parent->display), ("flex"))) ||
         (eq((self.parent->display), ("inline-flex")))))
           ? (((eq((self.parent->flex_direction), ("column"))) ||
               (eq((self.parent->flex_direction), ("column-reverse"))))
                  ? (true)
                  : ((eq((self.parent->flex_direction), ("row")))
                         ? (false)
                         : (panic<bool>())))
           : (false));
  self.width_attr_expr =
      ((not((has_attribute(self, "width"))))
           ? ("auto")
           : (((string_is_float((get_attribute<std::string>(self, "width")))) ||
               (has_suffix((get_attribute<std::string>(self, "width")), ("%"))))
                  ? (get_attribute<std::string>(self, "width"))
                  : ((eq((get_attribute<std::string>(self, "width")), ("Auto")))
                         ? ("auto")
                         : (panic<std::string>()))));
  self.has_width_attr = (neq(((&self)->width_attr_expr), ("auto")));
  self.height_attr_expr =
      ((not((has_attribute(self, "height"))))
           ? ("auto")
           : (((string_is_float(
                   (get_attribute<std::string>(self, "height")))) ||
               (has_suffix((get_attribute<std::string>(self, "height")),
                           ("%"))))
                  ? (get_attribute<std::string>(self, "height"))
                  : ((eq((get_attribute<std::string>(self, "height")),
                         ("Auto")))
                         ? ("auto")
                         : (panic<std::string>()))));
  self.has_height_attr = (neq(((&self)->height_attr_expr), ("auto")));
  self.is_svg_block = (eq((self.name), ("svg")));
  self.inside_svg = ((self.parent != nullptr) && ((self.parent->is_svg_block) ||
                                                  (self.parent->inside_svg)));
  self.disabled = ((eq((self.name), ("NOSCRIPT")))
                       ? (true)
                       : ((self.parent != nullptr) && (self.parent->disabled)));
  self.visible =
      (((not((self.parent != nullptr))) || (self.parent->visible)) &&
       ((neq(((&self)->display), ("none"))) &&
        ((not(((&self)->inside_svg))) && (not(((&self)->disabled))))));
  self.line_break =
      ((eq(((&self)->display), ("none")))
           ? (false)
           : ((eq(((&self)->position), ("absolute")))
                  ? (false)
                  : (((self.parent != nullptr) &&
                      ((eq((self.parent->display), ("flex"))) ||
                       (eq((self.parent->display), ("inline-flex")))))
                         ? (true)
                         : ((eq(((&self)->display), ("block")))
                                ? (true)
                                : ((eq(((&self)->display), ("inline")))
                                       ? (false)
                                       : ((eq(((&self)->display),
                                              ("inline-block")))
                                              ? (false)
                                              : ((eq(((&self)->display),
                                                     ("flex")))
                                                     ? ((eq((get_property<
                                                                std::string>(
                                                                self,
                                                                "flex-"
                                                                "direction")),
                                                            ("row")))
                                                            ? (false)
                                                            : ((eq((get_property<
                                                                       std::
                                                                           string>(
                                                                       self,
                                                                       "flex-"
                                                                       "directi"
                                                                       "on")),
                                                                   ("column")))
                                                                   ? (true)
                                                            : ((eq((get_property<
                                                                       std::
                                                                           string>(
                                                                              self,
                                                                              "flex-direction")),
                                                                   ("col"
                                                                    "umn"
                                                                    "-re"
                                                                    "ver"
                                                                    "s"
                                                                    "e")))
                                                                   ? (true)
                                                                   : (panic<
                                                                         bool>()))))
                                              : ((eq(((&self)->display),
                                                     ("inline-flex")))
                                                     ? (false)
                                                     : ((eq(((&self)
                                                                        ->display),
                                                            ("content"
                                                             "s")))
                                                            ? (false)
                                                            : ((eq(((&self)
                                                                               ->display),
                                                                   ("tab"
                                                                    "l"
                                                                    "e")))
                                                                   ? (true)
                                                                   : ((eq(((&self)
                                                                                      ->display),
                                                                          ("table-row-group")))
                                                                          ? (true)
                                                                          : ((eq(((&self)
                                                                                             ->display),
                                                                                 ("table-row")))
                                                                                 ? (true)
                                                                                 : ((eq(((&self)
                                                                                                    ->display),
                                                                                        ("table-cell")))
                                                                                        ? (false)
                                                                                        : ((eq(((&self)
                                                                                                           ->display),
                                                                                               ("list-item")))
                                                                                               ? (true)
                                                                                               : ((eq(((&self)
                                                                                                                  ->display),
                                                                                                      ("grid")))
                                                                                                      ? (true)
                                                                                                      : (panic<
                                                                                                            bool>()))))))))))))))));
}
void bb_0(Content &self) {
  self.width_expr = ((has_property(self, "width"))
                         ? (get_property<std::string>(self, "width"))
                         : ("auto"));self.is_default_case=((eq(((&self)->display),("none")))?(true):(((&self)->inside_svg)?(true):(((&self)->disabled)?(true):(((eq((self.name),("#document")))||((eq((self.name),("#shadow-root")))||((eq((self.name),("DIV")))||((eq((self.name),("HTML")))||((eq((self.name),("BODY")))||((eq((self.name),("BUTTON")))||((eq((self.name),("FOOTER")))||((eq((self.name),("SELECT")))||((eq((self.name),("SECTION")))||((eq((self.name),("FORM")))||((eq((self.name),("CENTER")))||((eq((self.name),("TD")))||((eq((self.name),("TR")))||((eq((self.name),("TBODY")))||((eq((self.name),("TABLE")))||((eq((self.name),("SPAN")))||((eq((self.name),("FONT")))||((eq((self.name),("A")))||((eq((self.name),("ARTICLE")))||((eq((self.name),("P")))||((eq((self.name),("U")))||((eq((self.name),("UL")))||((eq((self.name),("B")))||((eq((self.name),("H1")))||((eq((self.name),("H2")))||((eq((self.name),("H3")))||((eq((self.name),("H4")))||((eq((self.name),("DT")))||((eq((self.name),("DD")))||((eq((self.name),("DL")))||((eq((self.name),("LI")))||((eq((self.name),("LABEL")))||((eq((self.name),("OL")))||((eq((self.name),("NAV")))||((eq((self.name),("HEADER")))||((eq((self.name),("HEAD")))||((eq((self.name),("SOURCE")))||((eq((self.name),("PICTURE")))||((eq((self.name),("FIGURE")))||((eq((self.name),("FIGCAPTION")))||((eq((self.name),("MAIN")))||((eq((self.name),("REACT-PARTIAL")))||((eq((self.name),("QUERY-BUILDER")))||((eq((self.name),("MODAL-DIALOG")))||((eq((self.name),("SCROLLABLE-REGION")))||((eq((self.name),("DIALOG-HELPER")))||((eq((self.name),("AUTO-CHECK")))||((eq((self.name),("TOOL-TIP")))||((eq((self.name),("CUSTOM-SCOPES")))||((eq((self.name),("QBSEARCH-INPUT")))||((eq((self.name),("INCLUDE-FRAGMENT")))||((eq((self.name),("COOKIE-CONSENT-LINK")))||((eq((self.name),("FULLSTORY-CAPTURE")))||((eq((self.name),("GHCC-CONSENT")))||((eq((self.name),("GLOBAL-BANNER")))||((eq((self.name),("ACTIVE-GLOBAL-BANNERS")))||((eq((self.name),("CARD-SKEW")))||((eq((self.name),("EM")))||((eq((self.name),("ASIDE")))||((eq((self.name),("AUDIO")))||((eq((self.name),("SUP")))||((eq((self.name),("TIME")))||((eq((self.name),("ABBR")))||((eq((self.name),("SMALL")))||((eq((self.name),("SLOT")))||(eq((self.name),("I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))?(true):(((eq((self.name),("#text")))||((eq((self.name),("svg")))||((eq((self.name),("IFRAME")))||((eq((self.name),("INPUT")))||((eq((self.name),("VIDEO")))||((eq((self.name),("BR")))||((eq((self.name),("IMG")))||(eq((self.name),("TEXTAREA"))))))))))?(false):(panic<bool>()))))));
  self.intrinsic_width_is_width =
      (((eq(((&self)->display), ("none"))) ||
        (((&self)->inside_svg) || ((&self)->disabled)))
           ? (true)
           : (((self.parent != nullptr) && (self.parent->is_flex_row))
                  ? (false)
                  : (((eq(((&self)->width_expr), ("auto"))) ||
                      ((has_suffix(((&self)->width_expr), ("px"))) ||
                       ((has_suffix(((&self)->width_expr), ("ch"))) ||
                        ((has_prefix(((&self)->width_expr), ("calc("))) ||
                         (eq(((&self)->width_expr), ("max-content")))))))
                         ? (true)
                         : (((has_suffix(((&self)->width_expr), ("%"))) ||
                             (eq(((&self)->width_expr), ("fit-content"))))
                                ? (false)
                                : (panic<bool>())))));
  self.children_intrinsic_width =
      ((self.last != nullptr) ? (self.last->intrinsic_width_max)
                              : (double(0.)));
  self.intrinsic_width_internal =
      ((eq(((&self)->display), ("none")))
           ? (double(0.))
           : (((&self)->inside_svg) ? (double(0.))
                                    : (((&self)->disabled)
                                           ? (double(0.))
                                           : (((neq(((&self)->width_expr),
                                                    ("auto"))) &&
                                               ((not((has_suffix(
                                                    ((&self)->width_expr),
                                                    ("%"))))) &&
                                                ((neq(((&self)->width_expr),
                                                      ("fit-content"))) &&
                                                 ((neq(((&self)->width_expr),
                                                       ("max-content"))) &&
                                                  (not((has_prefix(
                                                      ((&self)->width_expr), ("calc")))))))))
                                                  ? ((has_suffix(
                                                         ((&self)->width_expr),
                                                         ("px")))
                                                         ? (string_to_float(
                                                               (strip_suffix(
                                                                   ((&self)->width_expr), ("px")))))
                                                         : ((has_suffix(((&self)->width_expr), ("ch"))) ? (string_to_float((
                                                                                                              strip_suffix((
                                                                                                                               (&self)
                                                                                                                                   ->width_expr),
                                                                                                                           ("ch")))))
                                                                                                        : (panic<
                                                                                                              double>())))
                                                  : (plus(
                                                        ((&self)->children_intrinsic_width), ((eq((self.name), ("#text"))) ? (
                                                                                                                                 (self.first != nullptr) ? (panic<double>()) : (double(100.)))
                                                                                                                           : (
                                                                                                                                 (
                                                                                                                                     (&self)
                                                                                                                                         ->is_default_case)
                                                                                                                                     ? (double(0.))
                                                                                                                                     : (
                                                                                                                                           (eq((self.name), ("BR")))
                                                                                                                                               ? ((self.first != nullptr) ? (panic<double>()) : (double(0.)))
                                                                                                                                               : ((eq((self.name), ("INPUT"))) ? (double(
                                                                                                                                                                                     100.))
                                                                                                                                                                               : ((
                                                                                                                                                                                      eq(
                                                                                                                                                                                          (self.name), (
                                                                                                                                                                                                           "svg")))
                                                                                                                                                                                      ? ((((&self)
                                                                                                                                                                                               ->has_width_attr) &&
                                                                                                                                                                                          (string_is_float((
                                                                                                                                                                                              (&self)
                                                                                                                                                                                                  ->width_attr_expr))))
                                                                                                                                                                                             ? (string_to_float(
                                                                                                                                                                                                   (
                                                                                                                                                                                                       (&self)
                                                                                                                                                                                                           ->width_attr_expr)))
                                                                                                                                                                                             : (((not((
                                                                                                                                                                                                     (&self)
                                                                                                                                                                                                         ->has_width_attr))) &&
                                                                                                                                                                                                 (has_attribute(
                                                                                                                                                                                                     self,
                                                                                                                                                                                                     "viewBox")))
                                                                                                                                                                                                    ? (string_to_float((
                                                                                                                                                                                                          nth_by_sep((get_attribute<std::string>(self, "viewBox")), (" "), (int(2))))))
                                                                                                                                                                                                    : ((((&self)
                                                                                                                                                                                                             ->has_width_attr) &&
                                                                                                                                                                                                        ((has_suffix(
                                                                                                                                                                                                             ((&self)
                                                                                                                                                                                                                  ->width_attr_expr),
                                                                                                                                                                                                             ("%"))) &&
                                                                                                                                                                                                         (has_attribute(
                                                                                                                                                                                                             self,
                                                                                                                                                                                                             "viewBox"))))
                                                                                                                                                                                                           ? (mult(
                                                                                                                                                                                                                 (string_to_float(
                                                                                                                                                                                                                     (
                                                                                                                                                                                                                         nth_by_sep((get_attribute<std::string>(self, "viewBox")), (" "), (int(2)))))),
                                                                                                                                                                                                                 (divide((
                                                                                                                                                                                                                             string_to_float(
                                                                                                                                                                                                                                 (strip_suffix(((&self)
                                                                                                                                                                                                                                                    ->width_attr_expr),
                                                                                                                                                                                                                                               ("%"))))),
                                                                                                                                                                                                                         (double(
                                                                                                                                                                                                                             100.))))))
                                                                                                                                                                                                           : (panic<
                                                                                                                                                                                                                 double>()))))
                                                                                                                                                                                      : ((eq((
                                                                                                                                                                                                 self.name),
                                                                                                                                                                                             ("IMG")))
                                                                                                                                                                                             ? (
                                                                                                                                                                                                   (
                                                                                                                                                                                                       (&self)
                                                                                                                                                                                                           ->has_width_attr)
                                                                                                                                                                                                       ? (string_to_float((
                                                                                                                                                                                                             (&self)
                                                                                                                                                                                                                 ->width_attr_expr)))
                                                                                                                                                                                                       : (((has_attribute(
                                                                                                                                                                                                               self,
                                                                                                                                                                                                               "image_width")) &&
                                                                                                                                                                                                           (not((
                                                                                                                                                                                                               (&self)
                                                                                                                                                                                                                   ->has_height_attr))))
                                                                                                                                                                                                              ? (
                                                                                                                                                                                                                    int_to_float((get_attribute<
                                                                                                                                                                                                                                  int>(
                                                                                                                                                                                                                        self,
                                                                                                                                                                                                                        "image_width"))))
                                                                                                                                                                                                              : ((
                                                                                                                                                                                                                     (not((
                                                                                                                                                                                                                         (&self)
                                                                                                                                                                                                                             ->has_width_attr))) &&
                                                                                                                                                                                                                     (((&self)
                                                                                                                                                                                                                           ->has_height_attr) &&
                                                                                                                                                                                                                      ((has_attribute(self, "image_width")) && (has_attribute(
                                                                                                                                                                                                                                                                   self,
                                                                                                                                                                                                                                                                   "image_height")))))
                                                                                                                                                                                                                     ? (
                                                                                                                                                                                                                           (neq((get_attribute<int>(self, "image_height")), (int(0)))) ? (mult(
                                                                                                                                                                                                                                                                                             (string_to_float(
                                                                                                                                                                                                                                                                                                 ((&self)
                                                                                                                                                                                                                                                                                                      ->height_attr_expr))),
                                                                                                                                                                                                                                                                                             (divide(
                                                                                                                                                                                                                                                                                                 (int_to_float((get_attribute<int>(self, "image_width")))), (int_to_float(
                                                                                                                                                                                                                                                                                                                                                                (get_attribute<int>(self, "image_height"))))))))
                                                                                                                                                                                                                                                                                       : (double(
                                                                                                                                                                                                                                                                                             0.)))
                                                                                                                                                                                                                     : (panic<
                                                                                                                                                                                                                           double>()))))
                                                                                                                                                                                             : ((eq((self.name), ("IFRAME"))) ? (((&self)
                                                                                                                                                                                                                                      ->has_width_attr)
                                                                                                                                                                                                                                     ? (panic<
                                                                                                                                                                                                                                           double>())
                                                                                                                                                                                                                                     : (double(
                                                                                                                                                                                                                                           300.)))
                                                                                                                                                                                                                              : ((
                                                                                                                                                                                                                                     eq(
                                                                                                                                                                                                                                         (
                                                                                                                                                                                                                                             self.name),
                                                                                                                                                                                                                                         ("TEXTAREA")))
                                                                                                                                                                                                                                     ? (double(
                                                                                                                                                                                                                                           100.))
                                                                                                                                                                                                                                     : ((eq((self.name),
                                                                                                                                                                                                                                            ("VIDEO")))
                                                                                                                                                                                                                                            ? (
                                                                                                                                                                                                                                                  (
                                                                                                                                                                                                                                                      (&self)
                                                                                                                                                                                                                                                          ->has_width_attr)
                                                                                                                                                                                                                                                      ? (panic<
                                                                                                                                                                                                                                                            double>())
                                                                                                                                                                                                                                                      : (double(
                                                                                                                                                                                                                                                            300.)))
                                                                                                                                                                                                                                            : (panic<
                                                                                                                                                                                                                                                  double>()))))))))))))))));
  self.intrinsic_width_external = ((eq(((&self)->position), ("absolute")))
                                       ? (double(0.))
                                       : ((&self)->intrinsic_width_internal));
  self.intrinsic_current_line_width =
      (plus(((&self)->intrinsic_width_external),
            (((self.prev != nullptr) && (not((self.prev->line_break))))
                 ? (self.prev->intrinsic_current_line_width)
                 : (double(0.)))));
  self.intrinsic_width_max =
      (max(((&self)->intrinsic_current_line_width),
           ((self.prev != nullptr) ? (self.prev->intrinsic_width_max)
                                   : (double(0.)))));
  self.intrinsic_width_sum =
      (plus(((self.prev != nullptr) ? (self.prev->intrinsic_width_sum)
                                    : (double(0.))),
            ((&self)->intrinsic_width_external)));
  self.children_intrinsic_height =
      ((self.last != nullptr)
           ? (plus((self.last->finished_intrinsic_height_sum),
                   (self.last->intrinsic_current_line_height)))
           : (double(0.)));
  self.height_expr = ((has_property(self, "height"))
                          ? (get_property<std::string>(self, "height"))
                          : ("auto"));
  self.intrinsic_height_is_height =
      (((eq(((&self)->display), ("none"))) ||
        (((&self)->inside_svg) || ((&self)->disabled)))
           ? (true)
           : (((self.parent != nullptr) && (self.parent->is_flex_column))
                  ? (false)
                  : (((eq(((&self)->height_expr), ("auto"))) ||
                      ((has_suffix(((&self)->height_expr), ("px"))) ||
                       ((has_suffix(((&self)->height_expr), ("ch"))) ||
                        ((has_suffix(((&self)->height_expr), ("lh"))) ||
                         (eq(((&self)->height_expr), ("max-content")))))))
                         ? (true)
                         : (((has_suffix(((&self)->height_expr), ("%"))) ||
                             (eq(((&self)->height_expr), ("fit-content"))))
                                ? (false)
                                : (panic<bool>())))));
  self.intrinsic_height_internal =
      ((eq(((&self)->display), ("none")))
           ? (double(0.))
           : (
                 ((&self)->inside_svg)
                     ? (double(0.))
                     : (
                           ((&self)->disabled)
                               ? (double(0.))
                               : (((neq(((&self)->height_expr), ("auto"))) &&
                                   ((not((has_suffix(((&self)->height_expr),
                                                     ("%"))))) &&
                                    (neq(((&self)->height_expr),
                                         ("fit-content")))))
                                      ? ((has_suffix(((&self)->height_expr),
                                                     ("px")))
                                             ? (string_to_float((strip_suffix(
                                                   ((&self)->height_expr),
                                                   ("px")))))
                                             : (
                                                   (has_suffix(
                                                       ((&self)->height_expr),
                                                       ("ch")))
                                                       ? (string_to_float((strip_suffix(
                                                             ((&self)->height_expr),
                                                             ("ch")))))
                                                       : (
                                                             (has_suffix(
                                                                 ((&self)->height_expr),
                                                                 ("lh")))
                                                                 ? (string_to_float((
                                                                       strip_suffix((
                                                                                        (&self)
                                                                                            ->height_expr),
                                                                                    ("lh")))))
                                                                 : (panic<
                                                                       double>()))))
                                      : (plus(
                                            ((&self)->children_intrinsic_height),
                                            (
                                                (eq((self.name), ("#text")))
                                                    ? ((self.first != nullptr)
                                                           ? (panic<double>())
                                                           : (double(10.)))
                                                    : (
                                                          ((&self)->is_default_case)
                                                              ? (double(0.))
                                                              : (
                                                                    (eq((self.name), ("BR"))) ? ((self.first != nullptr) ? (panic<double>()) : (double(0.)))
                                                                                              : (
                                                                                                    (eq((self.name), ("INPUT"))) ? (double(10.))
                                                                                                                                 : ((eq((self.name), ("svg"))) ? ((
                                                                                                                                                                      (
                                                                                                                                                                          (
                                                                                                                                                                              &self)
                                                                                                                                                                              ->has_height_attr) &&
                                                                                                                                                                      (string_is_float(
                                                                                                                                                                          ((&self)
                                                                                                                                                                               ->height_attr_expr))))
                                                                                                                                                                      ? (string_to_float(
                                                                                                                                                                            ((&self)
                                                                                                                                                                                 ->height_attr_expr)))
                                                                                                                                                                      : ((has_attribute(
                                                                                                                                                                             self, "viewBox"))
                                                                                                                                                                             ? (string_to_float((nth_by_sep((get_attribute<std::string>(self, "viewBox")), (" "), (int(3))))))
                                                                                                                                                                             : ((
                                                                                                                                                                                    (
                                                                                                                                                                                        (&self)
                                                                                                                                                                                            ->has_height_attr) &&
                                                                                                                                                                                    ((has_suffix(
                                                                                                                                                                                         (
                                                                                                                                                                                             (&self)
                                                                                                                                                                                                 ->height_attr_expr),
                                                                                                                                                                                         (
                                                                                                                                                                                             "%"))) &&
                                                                                                                                                                                     (has_attribute(
                                                                                                                                                                                         self,
                                                                                                                                                                                         "viewBox"))))
                                                                                                                                                                                    ? (
                                                                                                                                                                                          mult((string_to_float((nth_by_sep((get_attribute<std::string>(self, "viewBox")), (" "), (int(3)))))), (divide(
                                                                                                                                                                                                                                                                                                    (string_to_float((strip_suffix(
                                                                                                                                                                                                                                                                                                        ((&self)
                                                                                                                                                                                                                                                                                                             ->height_attr_expr),
                                                                                                                                                                                                                                                                                                        ("%"))))),
                                                                                                                                                                                                                                                                                                    (double(
                                                                                                                                                                                                                                                                                                        100.))))))
                                                                                                                                                                                    : (panic<
                                                                                                                                                                                          double>()))))
                                                                                                                                                               : (
                                                                                                                                                                     (eq((self.name), ("IMG"))) ? (
                                                                                                                                                                                                      (
                                                                                                                                                                                                          (&self)
                                                                                                                                                                                                              ->has_height_attr)
                                                                                                                                                                                                          ? (string_to_float(((&self)
                                                                                                                                                                                                                                  ->height_attr_expr)))
                                                                                                                                                                                                          : ((
                                                                                                                                                                                                                 (has_attribute(self, "image_height")) && (not((
                                                                                                                                                                                                                                                              (&self)
                                                                                                                                                                                                                                                                  ->has_width_attr))))
                                                                                                                                                                                                                 ? (int_to_float(
                                                                                                                                                                                                                       (get_attribute<
                                                                                                                                                                                                                           int>(
                                                                                                                                                                                                                           self,
                                                                                                                                                                                                                           "image_height"))))
                                                                                                                                                                                                                 : (
                                                                                                                                                                                                                       (
                                                                                                                                                                                                                           (
                                                                                                                                                                                                                               (&self)
                                                                                                                                                                                                                                   ->has_width_attr) &&
                                                                                                                                                                                                                           ((not((
                                                                                                                                                                                                                                (&self)
                                                                                                                                                                                                                                    ->has_height_attr))) &&
                                                                                                                                                                                                                            ((has_attribute(
                                                                                                                                                                                                                                 self,
                                                                                                                                                                                                                                 "image_width")) &&
                                                                                                                                                                                                                             (has_attribute(
                                                                                                                                                                                                                                 self,
                                                                                                                                                                                                                                 "image_height")))))
                                                                                                                                                                                                                           ? (
                                                                                                                                                                                                                                 (neq((get_attribute<int>(self, "image_width")), (int(0)))) ? (mult(
                                                                                                                                                                                                                                                                                                  (string_to_float(
                                                                                                                                                                                                                                                                                                      ((&self)
                                                                                                                                                                                                                                                                                                           ->width_attr_expr))),
                                                                                                                                                                                                                                                                                                  (divide(
                                                                                                                                                                                                                                                                                                      (int_to_float(
                                                                                                                                                                                                                                                                                                          (get_attribute<
                                                                                                                                                                                                                                                                                                              int>(
                                                                                                                                                                                                                                                                                                              self,
                                                                                                                                                                                                                                                                                                              "image_height")))),
                                                                                                                                                                                                                                                                                                      (
                                                                                                                                                                                                                                                                                                          int_to_float((get_attribute<int>(
                                                                                                                                                                                                                                                                                                              self,
                                                                                                                                                                                                                                                                                                              "image_width"))))))))
                                                                                                                                                                                                                                                                                            : (double(
                                                                                                                                                                                                                                                                                                  0.)))
                                                                                                                                                                                                                           : (panic<
                                                                                                                                                                                                                                 double>()))))
                                                                                                                                                                                                : ((eq((self.name), ("IFRAME"))) ? (((&self)
                                                                                                                                                                                                                                         ->has_height_attr)
                                                                                                                                                                                                                                        ? (panic<
                                                                                                                                                                                                                                              double>())
                                                                                                                                                                                                                                        : (double(
                                                                                                                                                                                                                                              150.)))
                                                                                                                                                                                                                                 : ((eq((self.name),
                                                                                                                                                                                                                                        ("TEXTAREA")))
                                                                                                                                                                                                                                        ? (double(
                                                                                                                                                                                                                                              100.))
                                                                                                                                                                                                                                        : (
                                                                                                                                                                                                                                              (eq((self.name), ("VIDEO")))
                                                                                                                                                                                                                                                  ? (
                                                                                                                                                                                                                                                        (
                                                                                                                                                                                                                                                            (&self)
                                                                                                                                                                                                                                                                ->has_height_attr)
                                                                                                                                                                                                                                                            ? (
                                                                                                                                                                                                                                                                  panic<
                                                                                                                                                                                                                                                                      double>())
                                                                                                                                                                                                                                                            : (double(
                                                                                                                                                                                                                                                                  150.)))
                                                                                                                                                                                                                                                  : (panic<
                                                                                                                                                                                                                                                        double>()))))))))))))))));
  self.intrinsic_height_external = ((eq(((&self)->position), ("absolute")))
                                        ? (double(0.))
                                        : ((&self)->intrinsic_height_internal));
  self.intrinsic_height_sum =
      (plus(((self.prev != nullptr) ? (self.prev->intrinsic_height_sum)
                                    : (double(0.))),
            ((&self)->intrinsic_height_external)));
  self.intrinsic_current_line_height =
      (((&self)->line_break)
           ? (double(0.))
           : (max(((&self)->intrinsic_height_external),
                  ((self.prev != nullptr)
                       ? (self.prev->intrinsic_current_line_height)
                       : (double(0.))))));
  self.finished_intrinsic_height_sum =
      ((self.prev != nullptr)
           ? (((&self)->line_break)
                  ? (plus((self.prev->finished_intrinsic_height_sum),
                          (plus((self.prev->intrinsic_current_line_height),
                                ((&self)->intrinsic_height_external)))))
                  : (self.prev->finished_intrinsic_height_sum))
           : (((&self)->line_break) ? ((&self)->intrinsic_height_external)
                                    : (double(0.))));
}
void bb_2(Content &self) {
  self.box_width = ((self.parent != nullptr) ? (self.parent->width_internal)
                                             : (double(1920.)));
  self.box_height = ((self.parent != nullptr) ? (self.parent->height_internal)
                                              : (double(1080.)));
  self.left_over =
      (((&self)->is_flex_row)
           ? (minus(((&self)->box_width),
                    ((self.last != nullptr) ? (self.last->intrinsic_width_sum)
                                            : (double(0.)))))
           : (minus(((&self)->box_height),
                    ((self.last != nullptr) ? (self.last->intrinsic_height_sum)
                                            : (double(0.))))));
  self.flex_amount = (((self.parent != nullptr) &&
                       (gt((self.parent->left_over), (double(0.)))))
                          ? ((&self)->flex_grow)
                          : ((&self)->flex_shrink));
  self.flex_unit =
      ((gt(((&self)->left_over), (double(0.))))
           ? (divide(((&self)->left_over), ((&self)->flex_grow_sum)))
           : (divide(((&self)->left_over), ((&self)->flex_shrink_sum))));
  self.x = ((self.prev != nullptr)
                ? ((((&self)->line_break) || (self.prev->line_break))
                       ? (double(0.))
                       : (plus((self.prev->x), (self.prev->width_external))))
                : ((self.parent != nullptr) ? (self.parent->x) : (double(0.))));
  self.width_internal =
      (((&self)->intrinsic_width_is_width)
           ? ((&self)->intrinsic_width_internal)
           : (((self.parent != nullptr) && (self.parent->is_flex_row))
                  ? (plus(((&self)->intrinsic_width_internal),
                          (mult(((&self)->flex_amount),
                                (self.parent->flex_unit)))))
                  : ((has_suffix(((&self)->width_expr), ("%")))
                         ? (mult(((&self)->box_width),
                                 (divide((string_to_float((strip_suffix(
                                             ((&self)->width_expr), ("%"))))),
                                         (double(100.))))))
                         : ((eq(((&self)->width_expr), ("fit-content")))
                                ? (max(((&self)->box_width),
                                       ((&self)->intrinsic_width_internal)))
                                : (panic<double>())))));
  self.width_external =
      ((eq(((&self)->position), ("absolute"))) ? (double(0.))
                                               : ((&self)->width_internal));
  self.y = ((self.prev != nullptr)
                ? ((((&self)->line_break) || (self.prev->line_break))
                       ? (plus((self.prev->y), (self.prev->line_height)))
                       : (self.prev->y))
                : ((self.parent != nullptr) ? (self.parent->y) : (double(0.))));
  self.height_internal =
      (((&self)->intrinsic_height_is_height)
           ? ((&self)->intrinsic_height_internal)
           : (((self.parent != nullptr) && (self.parent->is_flex_column))
                  ? (plus(((&self)->intrinsic_height_internal),
                          (mult(((&self)->flex_amount),
                                (self.parent->flex_unit)))))
                  : ((has_suffix(((&self)->height_expr), ("%")))
                         ? (mult(((&self)->box_height),
                                 (divide((string_to_float((strip_suffix(
                                             ((&self)->height_expr), ("%"))))),
                                         (double(100.))))))
                         : ((eq(((&self)->height_expr), ("fit-content")))
                                ? (max(((&self)->box_height),
                                       ((&self)->intrinsic_height_internal)))
                                : (panic<double>())))));
  self.height_external =
      ((eq(((&self)->position), ("absolute"))) ? (double(0.))
                                               : ((&self)->height_internal));
  self.line_height =
      (((self.prev != nullptr) && (not((self.prev->line_break))))
           ? (max(((&self)->height_external), (self.prev->line_height)))
           : ((&self)->height_external));
}
int main() {}