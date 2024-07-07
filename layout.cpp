#include <cassert>
#include <cmath>
#include <iterator>
#include <memory>
#include <ranges>
#include <stdexcept>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>
struct Value {
  std::variant<int, double, bool, std::string> v;
};
struct Content;
using Node = std::shared_ptr<Content>;
struct Content {
  Content *parent = nullptr;
  Content *prev = nullptr;
  Content *first = nullptr;
  Content *last = nullptr;
  std::vector<Node> children;
  std::string name;
  std::unordered_map<std::string, Value> attr;
  std::unordered_map<std::string, Value> prop;
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
template <typename T> T panic() { assert(false); }
template <typename T> T get_attribute(const Content &self, const std::string &str) {
  return std::get<T>(self.attr.at(str).v);
}
bool has_attribute(const Content &self, const std::string &str) { return self.attr.count(str) != 0; }
template <typename T> T get_property(const Content &self, const std::string &str) {
  return std::get<T>(self.prop.at(str).v);
}
bool has_property(const Content &self, const std::string &str) { return self.prop.count(str) != 0; }
template <typename T> T max(T x, T y) { return x > y ? x : y; }
template <typename T> T plus(T x, T y) { return x + y; }
template <typename T> T minus(T x, T y) { return x - y; }
template <typename T> T mult(T x, T y) { return x * y; }
template <typename T> T divide(T x, T y) { return x * y; }
template <typename T> bool gt(T x, T y) { return x > y; }
bool eq(int x, int y) { return x == y; }
bool eq(double x, double y) { return (std::isnan(x) && std::isnan(y)) || (x == y); }
bool eq(const std::string &x, const std::string &y) { return x == y; }
bool neq(int x, int y) { return x != y; }
bool neq(double x, double y) { return !eq(x, y); }
bool neq(const std::string &x, const std::string &y) { return x != y; }
double string_to_float(const std::string &x) { return std::stod(x); }
bool string_is_float(const std::string &x) {
  try {
    std::stod(x);
    return true;
  } catch (const std::invalid_argument &) {
    return false;
  }
}
double int_to_float(int x) { return static_cast<double>(x); }
std::string strip_suffix(const std::string &str, const std::string &sfx) {
  return str.substr(0, str.size() - sfx.size());
}
bool has_suffix(const std::string &str, const std::string &sfx) {
  return str.substr(str.size() - sfx.size(), sfx.size()) == sfx;
}
bool has_prefix(const std::string &str, const std::string &pfx) { return str.substr(0, pfx.size()) == pfx; }
std::string nth_by_sep(const std::string &str, const std::string &sep, int nth) {
  auto to_string = [](auto &&r) -> std::string {
    const auto data = &*r.begin();
    const auto size = static_cast<std::size_t>(std::ranges::distance(r));
    return std::string{data, size};
  };
  assert(sep.size() == 1);
  auto range = str | std::ranges::views::split(sep.at(0)) | std::ranges::views::transform(to_string);
  return *std::next(range.begin(), nth);
}
void bb_1(Content &self) {
  self.display = ((has_property(self, "display")) ? (get_property<std::string>(self, "display")) : ("block"));
  self.position = ((has_property(self, "position")) ? (get_property<std::string>(self, "position")) : ("static"));
  self.flex_grow = ((has_property(self, "flex-grow")) ? (string_to_float(get_property<std::string>(self, "flex-grow")))
                                                      : (double(0.)));
  self.flex_shrink =
      ((has_property(self, "flex-shrink")) ? (string_to_float(get_property<std::string>(self, "flex-shrink")))
                                           : (double(0.)));
  self.flex_grow_sum = (plus(((!= nullptr) ? (->flex_grow_sum) : (double(0.))), (->flex_grow)));
  self.flex_shrink_sum = (plus(((!= nullptr) ? (->flex_shrink_sum) : (double(0.))), (->flex_shrink)));
  self.flex_direction =
      ((has_property(self, "flex-direction")) ? (get_property<std::string>(self, "flex-direction")) : (""));
  self.is_flex_row =
      (((!= nullptr) && ((eq((->display), ("flex"))) || (eq((->display), ("inline-flex")))))
           ? ((eq((->flex_direction), ("row")))
                  ? (true)
                  : (((eq((->flex_direction), ("column"))) || (eq((->flex_direction), ("column-reverse"))))
                         ? (false)
                         : (panic<bool>())))
           : (false));
  self.is_flex_column = (((!= nullptr) && ((eq((->display), ("flex"))) || (eq((->display), ("inline-flex")))))
                             ? (((eq((->flex_direction), ("column"))) || (eq((->flex_direction), ("column-reverse"))))
                                    ? (true)
                                    : ((eq((->flex_direction), ("row"))) ? (false) : (panic<bool>())))
                             : (false));
  self.width_attr_expr =
      ((not(has_attribute(self, "width")))
           ? ("auto")
           : (((string_is_float(get_attribute<std::string>(self, "width"))) ||
               (has_suffix((get_attribute<std::string>(self, "width")), ("%"))))
                  ? (get_attribute<std::string>(self, "width"))
                  : ((eq((get_attribute<std::string>(self, "width")), ("Auto"))) ? ("auto") : (panic<std::string>()))));
  self.has_width_attr = (neq((->width_attr_expr), ("auto")));
  self.height_attr_expr =
      ((not(has_attribute(self, "height")))
           ? ("auto")
           : (((string_is_float(get_attribute<std::string>(self, "height"))) ||
               (has_suffix((get_attribute<std::string>(self, "height")), ("%"))))
                  ? (get_attribute<std::string>(self, "height"))
                  : ((eq((get_attribute<std::string>(self, "height")), ("Auto"))) ? ("auto")
                                                                                  : (panic<std::string>()))));
  self.has_height_attr = (neq((->height_attr_expr), ("auto")));
  self.is_svg_block = (eq((self.name), ("svg")));
  self.inside_svg = ((!= nullptr) && ((->is_svg_block) || (->inside_svg)));
  self.disabled = ((eq((self.name), ("NOSCRIPT"))) ? (true) : ((!= nullptr) && (->disabled)));
  self.visible = (((not(!= nullptr)) || (->visible)) &&
                  ((neq((->display), ("none"))) && ((not(->inside_svg)) && (not(->disabled)))));
  self.line_break =
      ((eq((->display), ("none")))
           ? (false)
           : ((eq((->position), ("absolute")))
                  ? (false)
                  : (((!= nullptr) && ((eq((->display), ("flex"))) || (eq((->display), ("inline-flex")))))
                         ? (true)
                         : ((eq((->display), ("block")))
                                ? (true)
                                : ((eq((->display), ("inline")))
                                       ? (false)
                                       : ((eq((->display), ("inline-block")))
                                              ? (false)
                                              : ((eq((->display), ("flex")))
                                                     ? ((eq((get_property<std::string>(self, "flex-direction")),
                                                            ("row")))
                                                            ? (false)
                                                            : ((eq((get_property<std::string>(self, "flex-direction")),
                                                                   ("column")))
                                                                   ? (true)
                                                                   : ((eq((get_property<std::string>(self,
                                                                                                     "flex-direction")),
                                                                          ("column-reverse")))
                                                                          ? (true)
                                                                          : (panic<bool>()))))
                                                     : ((eq((->display), ("inline-flex")))
                                                            ? (false)
                                                            : ((eq((->display), ("contents")))
                                                                   ? (false)
                                                                   : ((eq((->display), ("table")))
                                                                          ? (true)
                                                                          : ((eq((->display), ("table-row-group")))
                                                                                 ? (true)
                                                                                 : ((eq((->display), ("table-row")))
                                                                                        ? (true)
                                                                                        : ((eq((->display),
                                                                                               ("table-cell")))
                                                                                               ? (false)
                                                                                               : ((eq((->display),
                                                                                                      ("list-item")))
                                                                                                      ? (true)
                                                                                                      : ((eq((->display),
                                                                                                             ("grid")))
                                                                                                             ? (true)
                                                                                                             : (panic<
                                                                                                                   bool>()))))))))))))))));
}
void bb_0(Content &self) {
  self.width_expr = ((has_property(self, "width")) ? (get_property<std::string>(self, "width")) : ("auto"));
self.is_default_case=((eq((->display),("none")))?(true):((->inside_svg)?(true):((->disabled)?(true):(((eq((self.name),("#document")))||((eq((self.name),("#shadow-root")))||((eq((self.name),("DIV")))||((eq((self.name),("HTML")))||((eq((self.name),("BODY")))||((eq((self.name),("BUTTON")))||((eq((self.name),("FOOTER")))||((eq((self.name),("SELECT")))||((eq((self.name),("SECTION")))||((eq((self.name),("FORM")))||((eq((self.name),("CENTER")))||((eq((self.name),("TD")))||((eq((self.name),("TR")))||((eq((self.name),("TBODY")))||((eq((self.name),("TABLE")))||((eq((self.name),("SPAN")))||((eq((self.name),("FONT")))||((eq((self.name),("A")))||((eq((self.name),("ARTICLE")))||((eq((self.name),("P")))||((eq((self.name),("U")))||((eq((self.name),("UL")))||((eq((self.name),("B")))||((eq((self.name),("H1")))||((eq((self.name),("H2")))||((eq((self.name),("H3")))||((eq((self.name),("H4")))||((eq((self.name),("DT")))||((eq((self.name),("DD")))||((eq((self.name),("DL")))||((eq((self.name),("LI")))||((eq((self.name),("LABEL")))||((eq((self.name),("OL")))||((eq((self.name),("NAV")))||((eq((self.name),("HEADER")))||((eq((self.name),("HEAD")))||((eq((self.name),("SOURCE")))||((eq((self.name),("PICTURE")))||((eq((self.name),("FIGURE")))||((eq((self.name),("FIGCAPTION")))||((eq((self.name),("MAIN")))||((eq((self.name),("REACT-PARTIAL")))||((eq((self.name),("QUERY-BUILDER")))||((eq((self.name),("MODAL-DIALOG")))||((eq((self.name),("SCROLLABLE-REGION")))||((eq((self.name),("DIALOG-HELPER")))||((eq((self.name),("AUTO-CHECK")))||((eq((self.name),("TOOL-TIP")))||((eq((self.name),("CUSTOM-SCOPES")))||((eq((self.name),("QBSEARCH-INPUT")))||((eq((self.name),("INCLUDE-FRAGMENT")))||((eq((self.name),("COOKIE-CONSENT-LINK")))||((eq((self.name),("FULLSTORY-CAPTURE")))||((eq((self.name),("GHCC-CONSENT")))||((eq((self.name),("GLOBAL-BANNER")))||((eq((self.name),("ACTIVE-GLOBAL-BANNERS")))||((eq((self.name),("CARD-SKEW")))||((eq((self.name),("EM")))||((eq((self.name),("ASIDE")))||((eq((self.name),("AUDIO")))||((eq((self.name),("SUP")))||((eq((self.name),("TIME")))||((eq((self.name),("ABBR")))||((eq((self.name),("SMALL")))||((eq((self.name),("SLOT")))||(eq((self.name),("I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))?(true):(((eq((self.name),("#text")))||((eq((self.name),("svg")))||((eq((self.name),("IFRAME")))||((eq((self.name),("INPUT")))||((eq((self.name),("VIDEO")))||((eq((self.name),("BR")))||((eq((self.name),("IMG")))||(eq((self.name),("TEXTAREA"))))))))))?(false):(panic<bool>()))))));
self.intrinsic_width_is_width =
    (((eq((->display), ("none"))) || ((->inside_svg) || (->disabled)))
         ? (true)
         : (((!= nullptr) && (->is_flex_row))
                ? (false)
                : (((eq((->width_expr), ("auto"))) ||
                    ((has_suffix((->width_expr), ("px"))) ||
                     ((has_suffix((->width_expr), ("ch"))) ||
                      ((has_prefix((->width_expr), ("calc("))) || (eq((->width_expr), ("max-content")))))))
                       ? (true)
                       : (((has_suffix((->width_expr), ("%"))) || (eq((->width_expr), ("fit-content"))))
                              ? (false)
                              : (panic<bool>())))));
self.children_intrinsic_width = ((!= nullptr) ? (->intrinsic_width_max) : (double(0.)));
self.intrinsic_width_internal =
    ((eq((->display), ("none")))
         ? (double(0.))
         : ((->inside_svg)
                ? (double(0.))
                : ((->disabled)
                       ? (double(0.))
                       : (((neq((->width_expr), ("auto"))) &&
                           ((not(has_suffix((->width_expr), ("%")))) &&
                            ((neq((->width_expr), ("fit-content"))) &&
                             ((neq((->width_expr), ("max-content"))) && (not(has_prefix((->width_expr), ("calc"))))))))
                              ? ((has_suffix((->width_expr), ("px")))
                                     ? (string_to_float(strip_suffix((->width_expr), ("px"))))
                                     : ((has_suffix((->width_expr), ("ch")))
                                            ? (string_to_float(strip_suffix((->width_expr), ("ch"))))
                                            : (panic<double>())))
                              : (plus(
                                    (->children_intrinsic_width),
                                    ((eq((self.name), ("#text")))
                                         ? ((!= nullptr) ? (panic<double>()) : (double(100.)))
                                         : ((->is_default_case)
                                                ? (double(0.))
                                                : ((eq((self.name), ("BR")))
                                                       ? ((!= nullptr) ? (panic<double>()) : (double(0.)))
                                                       : ((eq((self.name), ("INPUT")))
                                                              ? (double(100.))
                                                              : ((eq((self.name), ("svg")))
                                                                     ? (((->has_width_attr) &&
                                                                         (string_is_float(->width_attr_expr)))
                                                                            ? (string_to_float(->width_attr_expr))
                                                                            : (((not(->has_width_attr)) &&
                                                                                (has_attribute(self, "viewBox")))
                                                                                   ? (string_to_float(nth_by_sep(
                                                                                         (get_attribute<std::string>(
                                                                                             self, "viewBox")),
                                                                                         (" "), (int(2)))))
                                                                                   : (((->has_width_attr) &&
                                                                                       ((has_suffix((->width_attr_expr),
                                                                                                    ("%"))) &&
                                                                                        (has_attribute(self,
                                                                                                       "viewBox"))))
                                                                                          ? (mult(
                                                                                                (string_to_float(
                                                                                                    nth_by_sep(
                                                                                                        (get_attribute<
                                                                                                            std::
                                                                                                                string>(
                                                                                                            self,
                                                                                                            "viewBox")),
                                                                                                        (" "),
                                                                                                        (int(2))))),
                                                                                                (divide(
                                                                                                    (string_to_float(
                                                                                                        strip_suffix(
                                                                                                            (->width_attr_expr),
                                                                                                            ("%")))),
                                                                                                    (double(100.))))))
                                                                                          : (panic<double>()))))
                                                                     : ((eq((self.name), ("IMG")))
                                                                            ? ((->has_width_attr)
                                                                                   ? (string_to_float(
                                                                                             ->width_attr_expr))
                                                                                   : (((has_attribute(self,
                                                                                                      "image_width")) &&
                                                                                       (not(->has_height_attr)))
                                                                                          ? (int_to_float(get_attribute<
                                                                                                          int>(
                                                                                                self, "image_width")))
                                                                                          : (((not(->has_width_attr)) &&
                                                                                              ((->has_height_attr) &&
                                                                                               ((has_attribute(
                                                                                                    self,
                                                                                                    "image_width")) &&
                                                                                                (has_attribute(
                                                                                                    self,
                                                                                                    "image_height")))))
                                                                                                 ? ((neq((get_attribute<
                                                                                                             int>(
                                                                                                             self,
                                                                                                             "image_"
                                                                                                             "height")),
                                                                                                         (int(0))))
                                                                                                        ? (mult(
                                                                                                              (string_to_float(
                                                                                                                      ->height_attr_expr)),
                                                                                                              (divide(
                                                                                                                  (int_to_float(
                                                                                                                      get_attribute<
                                                                                                                          int>(
                                                                                                                          self,
                                                                                                                          "image_width"))),
                                                                                                                  (int_to_float(get_attribute<
                                                                                                                                int>(
                                                                                                                      self,
                                                                                                                      "image_height")))))))
                                                                                                        : (double(0.)))
                                                                                          : (panic<double>()))))
                                                                     : ((eq((self.name), ("IFRAME")))
                                                                            ? ((->has_width_attr)
                                                                                   ? (panic<double>())
                                                                                   : (double(300.)))
                                                                            : ((eq((self.name), ("TEXTAREA")))
                                                                                   ? (double(100.))
                                                                                   : ((eq((self.name),
                                                                                          ("VIDEO")))
                                                                                          ? ((->has_width_attr)
                                                                                                 ? (panic<
                                                                                                       double>())
                                                                                                 : (double(
                                                                                                              300.)))
                                                                                          : (panic<
                                                                                                double>()))))))))))))))));
self.intrinsic_width_external = ((eq((->position), ("absolute"))) ? (double(0.)) : (->intrinsic_width_internal));
self.intrinsic_current_line_width =
    (plus((->intrinsic_width_external),
          (((!= nullptr) && (not(->line_break))) ? (->intrinsic_current_line_width) : (double(0.)))));
self.intrinsic_width_max =
    (max((->intrinsic_current_line_width), ((!= nullptr) ? (->intrinsic_width_max) : (double(0.)))));
self.intrinsic_width_sum =
    (plus(((!= nullptr) ? (->intrinsic_width_sum) : (double(0.))), (->intrinsic_width_external)));
self.children_intrinsic_height =
    ((!= nullptr) ? (plus((->finished_intrinsic_height_sum), (->intrinsic_current_line_height))) : (double(0.)));
self.height_expr = ((has_property(self, "height")) ? (get_property<std::string>(self, "height")) : ("auto"));
self.intrinsic_height_is_height =
    (((eq((->display), ("none"))) || ((->inside_svg) || (->disabled)))
         ? (true)
         : (((!= nullptr) && (->is_flex_column))
                ? (false)
                : (((eq((->height_expr), ("auto"))) ||
                    ((has_suffix((->height_expr), ("px"))) ||
                     ((has_suffix((->height_expr), ("ch"))) ||
                      ((has_suffix((->height_expr), ("lh"))) || (eq((->height_expr), ("max-content")))))))
                       ? (true)
                       : (((has_suffix((->height_expr), ("%"))) || (eq((->height_expr), ("fit-content"))))
                              ? (false)
                              : (panic<bool>())))));
self.intrinsic_height_internal =
    ((eq((->display), ("none")))
         ? (double(0.))
         : ((->inside_svg)
                ? (double(0.))
                : ((->disabled)
                       ? (double(0.))
                       : (((neq((->height_expr), ("auto"))) &&
                           ((not(has_suffix((->height_expr), ("%")))) && (neq((->height_expr), ("fit-content")))))
                              ? ((has_suffix((->height_expr), ("px")))
                                     ? (string_to_float(strip_suffix((->height_expr), ("px"))))
                                     : ((has_suffix((->height_expr), ("ch")))
                                            ? (string_to_float(strip_suffix((->height_expr), ("ch"))))
                                            : ((has_suffix((->height_expr), ("lh")))
                                                   ? (string_to_float(strip_suffix((->height_expr), ("lh"))))
                                                   : (panic<double>()))))
                              : (plus(
                                    (->children_intrinsic_height),
                                    ((eq((self.name), ("#text")))
                                         ? ((!= nullptr) ? (panic<double>()) : (double(10.)))
                                         : ((->is_default_case)
                                                ? (double(0.))
                                                : ((eq((self.name), ("BR")))
                                                       ? ((!= nullptr) ? (panic<double>()) : (double(0.)))
                                                       : ((eq((self.name), ("INPUT")))
                                                              ? (double(10.))
                                                              : ((eq((self.name), ("svg")))
                                                                     ? (((->has_height_attr) &&
                                                                         (string_is_float(->height_attr_expr)))
                                                                            ? (string_to_float(->height_attr_expr))
                                                                            : ((has_attribute(self, "viewBox"))
                                                                                   ? (string_to_float(nth_by_sep(
                                                                                         (get_attribute<std::string>(
                                                                                             self, "viewBox")),
                                                                                         (" "), (int(3)))))
                                                                                   : (((->has_height_attr) &&
                                                                                       ((has_suffix(
                                                                                            (->height_attr_expr),
                                                                                            ("%"))) &&
                                                                                        (has_attribute(self,
                                                                                                       "viewBox"))))
                                                                                          ? (mult(
                                                                                                (string_to_float(
                                                                                                    nth_by_sep(
                                                                                                        (get_attribute<
                                                                                                            std::
                                                                                                                string>(
                                                                                                            self,
                                                                                                            "viewBox")),
                                                                                                        (" "),
                                                                                                        (int(3))))),
                                                                                                (divide(
                                                                                                    (string_to_float(
                                                                                                        strip_suffix(
                                                                                                            (->height_attr_expr),
                                                                                                            ("%")))),
                                                                                                    (double(100.))))))
                                                                                          : (panic<double>()))))
                                                                     : ((eq((self.name), ("IMG")))
                                                                            ? ((->has_height_attr)
                                                                                   ? (string_to_float(
                                                                                             ->height_attr_expr))
                                                                                   : (((has_attribute(
                                                                                           self, "image_height")) &&
                                                                                       (not(->has_width_attr)))
                                                                                          ? (int_to_float(get_attribute<
                                                                                                          int>(
                                                                                                self, "image_height")))
                                                                                          : (((->has_width_attr) &&
                                                                                              ((not(->has_height_attr)) &&
                                                                                               ((has_attribute(
                                                                                                    self,
                                                                                                    "image_width")) &&
                                                                                                (has_attribute(
                                                                                                    self,
                                                                                                    "image_height")))))
                                                                                                 ? ((neq((get_attribute<
                                                                                                             int>(
                                                                                                             self,
                                                                                                             "image_"
                                                                                                             "width")),
                                                                                                         (int(0))))
                                                                                                        ? (mult(
                                                                                                              (string_to_float(
                                                                                                                      ->width_attr_expr)),
                                                                                                              (divide(
                                                                                                                  (int_to_float(
                                                                                                                      get_attribute<
                                                                                                                          int>(
                                                                                                                          self,
                                                                                                                          "image_height"))),
                                                                                                                  (int_to_float(get_attribute<
                                                                                                                                int>(
                                                                                                                      self,
                                                                                                                      "image_width")))))))
                                                                                                        : (double(0.)))
                                                                                          : (panic<double>()))))
                                                                     : ((eq((self.name), ("IFRAME")))
                                                                            ? ((->has_height_attr)
                                                                                   ? (panic<double>())
                                                                                   : (double(150.)))
                                                                            : ((eq((self.name), ("TEXTAREA")))
                                                                                   ? (double(100.))
                                                                                   : ((eq((self.name),
                                                                                          ("VIDEO")))
                                                                                          ? ((->has_height_attr)
                                                                                                 ? (panic<
                                                                                                       double>())
                                                                                                 : (double(
                                                                                                              150.)))
                                                                                          : (panic<
                                                                                                double>()))))))))))))))));
self.intrinsic_height_external = ((eq((->position), ("absolute"))) ? (double(0.)) : (->intrinsic_height_internal));
self.intrinsic_height_sum =
    (plus(((!= nullptr) ? (->intrinsic_height_sum) : (double(0.))), (->intrinsic_height_external)));
self.intrinsic_current_line_height =
    ((->line_break)
         ? (double(0.))
         : (max((->intrinsic_height_external), ((!= nullptr) ? (->intrinsic_current_line_height) : (double(0.))))));
self.finished_intrinsic_height_sum =
    ((!= nullptr) ? ((->line_break) ? (plus((->finished_intrinsic_height_sum),
                                            (plus((->intrinsic_current_line_height), (->intrinsic_height_external)))))
                                    : (->finished_intrinsic_height_sum))
                  : ((->line_break) ? (->intrinsic_height_external) : (double(0.))));
}
void bb_2(Content &self) {
  self.box_width = ((!= nullptr) ? (->width_internal) : (double(1920.)));
  self.box_height = ((!= nullptr) ? (->height_internal) : (double(1080.)));
  self.left_over =
      ((->is_flex_row) ? (minus((->box_width), ((!= nullptr) ? (->intrinsic_width_sum) : (double(0.)))))
                       : (minus((->box_height), ((!= nullptr) ? (->intrinsic_height_sum) : (double(0.))))));
  self.flex_amount = (((!= nullptr) && (gt((->left_over), (double(0.))))) ? (->flex_grow) : (->flex_shrink));
  self.flex_unit = ((gt((->left_over), (double(0.)))) ? (divide((->left_over), (->flex_grow_sum)))
                                                      : (divide((->left_over), (->flex_shrink_sum))));
  self.x = ((!= nullptr) ? (((->line_break) || (->line_break)) ? (double(0.)) : (plus((->x), (->width_external))))
                         : ((!= nullptr) ? (->x) : (double(0.))));
  self.width_internal =
      ((->intrinsic_width_is_width)
           ? (->intrinsic_width_internal)
           : (((!= nullptr) && (->is_flex_row))
                  ? (plus((->intrinsic_width_internal), (mult((->flex_amount), (->flex_unit)))))
                  : ((has_suffix((->width_expr), ("%")))
                         ? (mult((->box_width),
                                 (divide((string_to_float(strip_suffix((->width_expr), ("%")))), (double(100.))))))
                         : ((eq((->width_expr), ("fit-content"))) ? (max((->box_width), (->intrinsic_width_internal)))
                                                                  : (panic<double>())))));
  self.width_external = ((eq((->position), ("absolute"))) ? (double(0.)) : (->width_internal));
  self.y = ((!= nullptr) ? (((->line_break) || (->line_break)) ? (plus((->y), (->line_height))) : (->y))
                         : ((!= nullptr) ? (->y) : (double(0.))));
  self.height_internal =
      ((->intrinsic_height_is_height)
           ? (->intrinsic_height_internal)
           : (((!= nullptr) && (->is_flex_column))
                  ? (plus((->intrinsic_height_internal), (mult((->flex_amount), (->flex_unit)))))
                  : ((has_suffix((->height_expr), ("%")))
                         ? (mult((->box_height),
                                 (divide((string_to_float(strip_suffix((->height_expr), ("%")))), (double(100.))))))
                         : ((eq((->height_expr), ("fit-content")))
                                ? (max((->box_height), (->intrinsic_height_internal)))
                                : (panic<double>())))));
  self.height_external = ((eq((->position), ("absolute"))) ? (double(0.)) : (->height_internal));
  self.line_height =
      (((!= nullptr) && (not(->line_break))) ? (max((->height_external), (->line_height))) : (->height_external));
}
void pass_0(Content &self) {
  bb_1(self);
  for (const Node &n : self.children) {
    pass_0(*n);
  }
  bb_0(self);
}
void pass_1(Content &self) {
  bb_2(self);
  for (const Node &n : self.children) {
    pass_1(*n);
  }
}
Node root;
int main() {}