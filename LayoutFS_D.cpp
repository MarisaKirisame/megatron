#include "header.h"
enum class DEStringCase {
  DEStringCaseDefault,
  DSTRING_,
  DSTRING_SLASHdocument,
  DSTRING_SLASHshadow_root,
  DSTRING_SLASHtext,
  DSTRING_A,
  DSTRING_ABBR,
  DSTRING_ACTIVE_GLOBAL_BANNERS,
  DSTRING_APP_ROOT,
  DSTRING_ARTICLE,
  DSTRING_ASIDE,
  DSTRING_AUDIO,
  DSTRING_AUTO_CHECK,
  DSTRING_Auto,
  DSTRING_B,
  DSTRING_BODY,
  DSTRING_BR,
  DSTRING_BUTTON,
  DSTRING_CARD_SKEW,
  DSTRING_CENTER,
  DSTRING_COOKIE_CONSENT_LINK,
  DSTRING_CUSTOM_SCOPES,
  DSTRING_DD,
  DSTRING_DIALOG_HELPER,
  DSTRING_DIV,
  DSTRING_DL,
  DSTRING_DT,
  DSTRING_EM,
  DSTRING_FIGCAPTION,
  DSTRING_FIGURE,
  DSTRING_FONT,
  DSTRING_FOOTER,
  DSTRING_FORM,
  DSTRING_FULLSTORY_CAPTURE,
  DSTRING_GHCC_CONSENT,
  DSTRING_GLOBAL_BANNER,
  DSTRING_H1,
  DSTRING_H2,
  DSTRING_H3,
  DSTRING_H4,
  DSTRING_HEAD,
  DSTRING_HEADER,
  DSTRING_HR,
  DSTRING_HTML,
  DSTRING_I,
  DSTRING_IFRAME,
  DSTRING_IMG,
  DSTRING_INCLUDE_FRAGMENT,
  DSTRING_INPUT,
  DSTRING_LABEL,
  DSTRING_LI,
  DSTRING_MAIN,
  DSTRING_MODAL_DIALOG,
  DSTRING_NAV,
  DSTRING_NG_PLURALIZE,
  DSTRING_NG_VIEW,
  DSTRING_NOSCRIPT,
  DSTRING_OL,
  DSTRING_P,
  DSTRING_PICTURE,
  DSTRING_QBSEARCH_INPUT,
  DSTRING_QUERY_BUILDER,
  DSTRING_REACT_PARTIAL,
  DSTRING_SCROLLABLE_REGION,
  DSTRING_SECTION,
  DSTRING_SELECT,
  DSTRING_SLOT,
  DSTRING_SMALL,
  DSTRING_SOURCE,
  DSTRING_SPAN,
  DSTRING_STRONG,
  DSTRING_SUP,
  DSTRING_TABLE,
  DSTRING_TBODY,
  DSTRING_TD,
  DSTRING_TEXTAREA,
  DSTRING_TIME,
  DSTRING_TOOL_TIP,
  DSTRING_TR,
  DSTRING_U,
  DSTRING_UL,
  DSTRING_VIDEO,
  DSTRING_absolute,
  DSTRING_auto,
  DSTRING_block,
  DSTRING_column,
  DSTRING_column_reverse,
  DSTRING_contents,
  DSTRING_fit_content,
  DSTRING_flex,
  DSTRING_grid,
  DSTRING_html,
  DSTRING_inline,
  DSTRING_inline_block,
  DSTRING_inline_flex,
  DSTRING_list_item,
  DSTRING_max_content,
  DSTRING_none,
  DSTRING_row,
  DSTRING_row_reverse,
  DSTRING_static,
  DSTRING_svg,
  DSTRING_table,
  DSTRING_table_cell,
  DSTRING_table_row,
  DSTRING_table_row_group,
  DHasSuffix_PERCENTAGE,
  DHasSuffix_ch,
  DHasSuffix_lh,
  DHasSuffix_px,
  DStringIsFloat,
  DHasPrefix_calc,
};
struct DEStringRest {
  double a0 = 0, a1 = 0, a2 = 0, a3 = 0;
};
struct DEString {
  DEStringCase c;
  DEStringRest r;
};
struct Meta {};

struct Value {
  std::variant<int64_t, double, bool, DEString> v;
};

DEString DEStringLit(DEStringCase c) {
  DEString des;
  des.c = c;
  return des;
}
bool Asbool(const bool &b) { return b; }
bool Asbool(const Value &v) { return std::get<bool>(v.v); }
DEString AsDEString(const DEString &d) { return d; }
DEString AsDEString(const Value &v) { return std::get<DEString>(v.v); }
double Asdouble(const double &d) { return d; }
double Asdouble(const Value &v) { return std::get<double>(v.v); }
int64_t Asint64_t(const int64_t &i) { return i; }
int64_t Asint64_t(const Value &v) { return std::get<int64_t>(v.v); }
DEStringRest StringToDEStringRest(const std::string &str);
DEString StringToDEString(const std::string &str) {
  if (str == "") {
    return DEStringLit(DEStringCase::DSTRING_);
  }
  if (str == "#document") {
    return DEStringLit(DEStringCase::DSTRING_SLASHdocument);
  }
  if (str == "#shadow-root") {
    return DEStringLit(DEStringCase::DSTRING_SLASHshadow_root);
  }
  if (str == "#text") {
    return DEStringLit(DEStringCase::DSTRING_SLASHtext);
  }
  if (str == "A") {
    return DEStringLit(DEStringCase::DSTRING_A);
  }
  if (str == "ABBR") {
    return DEStringLit(DEStringCase::DSTRING_ABBR);
  }
  if (str == "ACTIVE-GLOBAL-BANNERS") {
    return DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS);
  }
  if (str == "APP-ROOT") {
    return DEStringLit(DEStringCase::DSTRING_APP_ROOT);
  }
  if (str == "ARTICLE") {
    return DEStringLit(DEStringCase::DSTRING_ARTICLE);
  }
  if (str == "ASIDE") {
    return DEStringLit(DEStringCase::DSTRING_ASIDE);
  }
  if (str == "AUDIO") {
    return DEStringLit(DEStringCase::DSTRING_AUDIO);
  }
  if (str == "AUTO-CHECK") {
    return DEStringLit(DEStringCase::DSTRING_AUTO_CHECK);
  }
  if (str == "Auto") {
    return DEStringLit(DEStringCase::DSTRING_Auto);
  }
  if (str == "B") {
    return DEStringLit(DEStringCase::DSTRING_B);
  }
  if (str == "BODY") {
    return DEStringLit(DEStringCase::DSTRING_BODY);
  }
  if (str == "BR") {
    return DEStringLit(DEStringCase::DSTRING_BR);
  }
  if (str == "BUTTON") {
    return DEStringLit(DEStringCase::DSTRING_BUTTON);
  }
  if (str == "CARD-SKEW") {
    return DEStringLit(DEStringCase::DSTRING_CARD_SKEW);
  }
  if (str == "CENTER") {
    return DEStringLit(DEStringCase::DSTRING_CENTER);
  }
  if (str == "COOKIE-CONSENT-LINK") {
    return DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK);
  }
  if (str == "CUSTOM-SCOPES") {
    return DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES);
  }
  if (str == "DD") {
    return DEStringLit(DEStringCase::DSTRING_DD);
  }
  if (str == "DIALOG-HELPER") {
    return DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER);
  }
  if (str == "DIV") {
    return DEStringLit(DEStringCase::DSTRING_DIV);
  }
  if (str == "DL") {
    return DEStringLit(DEStringCase::DSTRING_DL);
  }
  if (str == "DT") {
    return DEStringLit(DEStringCase::DSTRING_DT);
  }
  if (str == "EM") {
    return DEStringLit(DEStringCase::DSTRING_EM);
  }
  if (str == "FIGCAPTION") {
    return DEStringLit(DEStringCase::DSTRING_FIGCAPTION);
  }
  if (str == "FIGURE") {
    return DEStringLit(DEStringCase::DSTRING_FIGURE);
  }
  if (str == "FONT") {
    return DEStringLit(DEStringCase::DSTRING_FONT);
  }
  if (str == "FOOTER") {
    return DEStringLit(DEStringCase::DSTRING_FOOTER);
  }
  if (str == "FORM") {
    return DEStringLit(DEStringCase::DSTRING_FORM);
  }
  if (str == "FULLSTORY-CAPTURE") {
    return DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE);
  }
  if (str == "GHCC-CONSENT") {
    return DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT);
  }
  if (str == "GLOBAL-BANNER") {
    return DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER);
  }
  if (str == "H1") {
    return DEStringLit(DEStringCase::DSTRING_H1);
  }
  if (str == "H2") {
    return DEStringLit(DEStringCase::DSTRING_H2);
  }
  if (str == "H3") {
    return DEStringLit(DEStringCase::DSTRING_H3);
  }
  if (str == "H4") {
    return DEStringLit(DEStringCase::DSTRING_H4);
  }
  if (str == "HEAD") {
    return DEStringLit(DEStringCase::DSTRING_HEAD);
  }
  if (str == "HEADER") {
    return DEStringLit(DEStringCase::DSTRING_HEADER);
  }
  if (str == "HR") {
    return DEStringLit(DEStringCase::DSTRING_HR);
  }
  if (str == "HTML") {
    return DEStringLit(DEStringCase::DSTRING_HTML);
  }
  if (str == "I") {
    return DEStringLit(DEStringCase::DSTRING_I);
  }
  if (str == "IFRAME") {
    return DEStringLit(DEStringCase::DSTRING_IFRAME);
  }
  if (str == "IMG") {
    return DEStringLit(DEStringCase::DSTRING_IMG);
  }
  if (str == "INCLUDE-FRAGMENT") {
    return DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT);
  }
  if (str == "INPUT") {
    return DEStringLit(DEStringCase::DSTRING_INPUT);
  }
  if (str == "LABEL") {
    return DEStringLit(DEStringCase::DSTRING_LABEL);
  }
  if (str == "LI") {
    return DEStringLit(DEStringCase::DSTRING_LI);
  }
  if (str == "MAIN") {
    return DEStringLit(DEStringCase::DSTRING_MAIN);
  }
  if (str == "MODAL-DIALOG") {
    return DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG);
  }
  if (str == "NAV") {
    return DEStringLit(DEStringCase::DSTRING_NAV);
  }
  if (str == "NG-PLURALIZE") {
    return DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE);
  }
  if (str == "NG-VIEW") {
    return DEStringLit(DEStringCase::DSTRING_NG_VIEW);
  }
  if (str == "NOSCRIPT") {
    return DEStringLit(DEStringCase::DSTRING_NOSCRIPT);
  }
  if (str == "OL") {
    return DEStringLit(DEStringCase::DSTRING_OL);
  }
  if (str == "P") {
    return DEStringLit(DEStringCase::DSTRING_P);
  }
  if (str == "PICTURE") {
    return DEStringLit(DEStringCase::DSTRING_PICTURE);
  }
  if (str == "QBSEARCH-INPUT") {
    return DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT);
  }
  if (str == "QUERY-BUILDER") {
    return DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER);
  }
  if (str == "REACT-PARTIAL") {
    return DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL);
  }
  if (str == "SCROLLABLE-REGION") {
    return DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION);
  }
  if (str == "SECTION") {
    return DEStringLit(DEStringCase::DSTRING_SECTION);
  }
  if (str == "SELECT") {
    return DEStringLit(DEStringCase::DSTRING_SELECT);
  }
  if (str == "SLOT") {
    return DEStringLit(DEStringCase::DSTRING_SLOT);
  }
  if (str == "SMALL") {
    return DEStringLit(DEStringCase::DSTRING_SMALL);
  }
  if (str == "SOURCE") {
    return DEStringLit(DEStringCase::DSTRING_SOURCE);
  }
  if (str == "SPAN") {
    return DEStringLit(DEStringCase::DSTRING_SPAN);
  }
  if (str == "STRONG") {
    return DEStringLit(DEStringCase::DSTRING_STRONG);
  }
  if (str == "SUP") {
    return DEStringLit(DEStringCase::DSTRING_SUP);
  }
  if (str == "TABLE") {
    return DEStringLit(DEStringCase::DSTRING_TABLE);
  }
  if (str == "TBODY") {
    return DEStringLit(DEStringCase::DSTRING_TBODY);
  }
  if (str == "TD") {
    return DEStringLit(DEStringCase::DSTRING_TD);
  }
  if (str == "TEXTAREA") {
    return DEStringLit(DEStringCase::DSTRING_TEXTAREA);
  }
  if (str == "TIME") {
    return DEStringLit(DEStringCase::DSTRING_TIME);
  }
  if (str == "TOOL-TIP") {
    return DEStringLit(DEStringCase::DSTRING_TOOL_TIP);
  }
  if (str == "TR") {
    return DEStringLit(DEStringCase::DSTRING_TR);
  }
  if (str == "U") {
    return DEStringLit(DEStringCase::DSTRING_U);
  }
  if (str == "UL") {
    return DEStringLit(DEStringCase::DSTRING_UL);
  }
  if (str == "VIDEO") {
    return DEStringLit(DEStringCase::DSTRING_VIDEO);
  }
  if (str == "absolute") {
    return DEStringLit(DEStringCase::DSTRING_absolute);
  }
  if (str == "auto") {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
  if (str == "block") {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
  if (str == "column") {
    return DEStringLit(DEStringCase::DSTRING_column);
  }
  if (str == "column-reverse") {
    return DEStringLit(DEStringCase::DSTRING_column_reverse);
  }
  if (str == "contents") {
    return DEStringLit(DEStringCase::DSTRING_contents);
  }
  if (str == "fit-content") {
    return DEStringLit(DEStringCase::DSTRING_fit_content);
  }
  if (str == "flex") {
    return DEStringLit(DEStringCase::DSTRING_flex);
  }
  if (str == "grid") {
    return DEStringLit(DEStringCase::DSTRING_grid);
  }
  if (str == "html") {
    return DEStringLit(DEStringCase::DSTRING_html);
  }
  if (str == "inline") {
    return DEStringLit(DEStringCase::DSTRING_inline);
  }
  if (str == "inline-block") {
    return DEStringLit(DEStringCase::DSTRING_inline_block);
  }
  if (str == "inline-flex") {
    return DEStringLit(DEStringCase::DSTRING_inline_flex);
  }
  if (str == "list-item") {
    return DEStringLit(DEStringCase::DSTRING_list_item);
  }
  if (str == "max-content") {
    return DEStringLit(DEStringCase::DSTRING_max_content);
  }
  if (str == "none") {
    return DEStringLit(DEStringCase::DSTRING_none);
  }
  if (str == "row") {
    return DEStringLit(DEStringCase::DSTRING_row);
  }
  if (str == "row-reverse") {
    return DEStringLit(DEStringCase::DSTRING_row_reverse);
  }
  if (str == "static") {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
  if (str == "svg") {
    return DEStringLit(DEStringCase::DSTRING_svg);
  }
  if (str == "table") {
    return DEStringLit(DEStringCase::DSTRING_table);
  }
  if (str == "table-cell") {
    return DEStringLit(DEStringCase::DSTRING_table_cell);
  }
  if (str == "table-row") {
    return DEStringLit(DEStringCase::DSTRING_table_row);
  }
  if (str == "table-row-group") {
    return DEStringLit(DEStringCase::DSTRING_table_row_group);
  }
  if (std_has_suffix(str, "%")) {
    return DEString{DEStringCase::DHasSuffix_PERCENTAGE, StringToDEStringRest(std_strip_suffix(str, "%"))};
  }
  if (std_has_suffix(str, "ch")) {
    return DEString{DEStringCase::DHasSuffix_ch, StringToDEStringRest(std_strip_suffix(str, "ch"))};
  }
  if (std_has_suffix(str, "lh")) {
    return DEString{DEStringCase::DHasSuffix_lh, StringToDEStringRest(std_strip_suffix(str, "lh"))};
  }
  if (std_has_suffix(str, "px")) {
    return DEString{DEStringCase::DHasSuffix_px, StringToDEStringRest(std_strip_suffix(str, "px"))};
  }
  if (std_string_is_float(str)) {
    return DEString{DEStringCase::DStringIsFloat, StringToDEStringRest(str)};
  }
  if (std_has_prefix(str, "calc")) {
    return DEString{DEStringCase::DHasPrefix_calc, StringToDEStringRest(std_strip_prefix(str, "calc"))};
  }
  return DEStringLit(DEStringCase::DEStringCaseDefault);
}
Value JsonToValue(const json &j) {
  if (j.is_string()) {
    return Value(StringToDEString(JsonToString(j)));
  } else if (j.is_number_integer()) {
    return Value(JsonToInt(j));
  } else {
    std::cout << "JsonToValue:" << std::endl;
    assert(false);
  }
}
std::unordered_map<std::string, Value> JsonToDict(const json &j) {
  std::unordered_map<std::string, Value> ret;
  for (auto &[key, val] : j.items()) {
    ret.insert({key, JsonToValue(val)});
  }
  return ret;
}

struct Content : std::enable_shared_from_this<Content> {
  Content *parent = nullptr;
  Content *prev = nullptr;
  Content *next = nullptr;
  Content *first = nullptr;
  Content *last = nullptr;
  int64_t extern_id;
  List<Node> children;
  DEString name;
  Meta m;
  Meta *meta = &m;
  Content(const DEString &name, const std::unordered_map<std::string, Value> &attr,
          const std::unordered_map<std::string, Value> &prop, int64_t extern_id, const List<Node> &children)
      : name(name), extern_id(extern_id), children(children) {
    if (attr.count("width") == 1) {
      has_attr_width = true;
      attr_width = AsDEString(attr.at("width"));
    }
    if (attr.count("image_height") == 1) {
      has_attr_image_height = true;
      attr_image_height = Asint64_t(attr.at("image_height"));
    }
    if (attr.count("image_width") == 1) {
      has_attr_image_width = true;
      attr_image_width = Asint64_t(attr.at("image_width"));
    }
    if (attr.count("height") == 1) {
      has_attr_height = true;
      attr_height = AsDEString(attr.at("height"));
    }
    if (attr.count("viewBox") == 1) {
      has_attr_viewBox = true;
      attr_viewBox = AsDEString(attr.at("viewBox"));
    }
    if (prop.count("width") == 1) {
      has_prop_width = true;
      prop_width = AsDEString(prop.at("width"));
    }
    if (prop.count("flex-grow") == 1) {
      has_prop_flex_grow = true;
      prop_flex_grow = AsDEString(prop.at("flex-grow"));
    }
    if (prop.count("height") == 1) {
      has_prop_height = true;
      prop_height = AsDEString(prop.at("height"));
    }
    if (prop.count("display") == 1) {
      has_prop_display = true;
      prop_display = AsDEString(prop.at("display"));
    }
    if (prop.count("position") == 1) {
      has_prop_position = true;
      prop_position = AsDEString(prop.at("position"));
    }
    if (prop.count("flex-shrink") == 1) {
      has_prop_flex_shrink = true;
      prop_flex_shrink = AsDEString(prop.at("flex-shrink"));
    }
    if (prop.count("flex-direction") == 1) {
      has_prop_flex_direction = true;
      prop_flex_direction = AsDEString(prop.at("flex-direction"));
    }
  }
  bool var_visible;
  bool has_var_visible = false;
  bool var_inside_svg;
  bool has_var_inside_svg = false;
  DEString var_height_expr;
  bool has_var_height_expr = false;
  double var_flex_grow_sum;
  bool has_var_flex_grow_sum = false;
  double var_intrinsic_width_max;
  bool has_var_intrinsic_width_max = false;
  double var_x;
  bool has_var_x = false;
  double var_left_over;
  bool has_var_left_over = false;
  double var_y;
  bool has_var_y = false;
  bool var_is_svg_block;
  bool has_var_is_svg_block = false;
  double var_intrinsic_current_line_width;
  bool has_var_intrinsic_current_line_width = false;
  bool var_is_default_case;
  bool has_var_is_default_case = false;
  double var_finished_intrinsic_height_sum;
  bool has_var_finished_intrinsic_height_sum = false;
  double var_flex_grow;
  bool has_var_flex_grow = false;
  double var_flex_amount;
  bool has_var_flex_amount = false;
  double var_children_intrinsic_height;
  bool has_var_children_intrinsic_height = false;
  double var_height_internal;
  bool has_var_height_internal = false;
  double var_width_external;
  bool has_var_width_external = false;
  double var_intrinsic_current_line_height;
  bool has_var_intrinsic_current_line_height = false;
  double var_intrinsic_width_external;
  bool has_var_intrinsic_width_external = false;
  double var_flex_unit;
  bool has_var_flex_unit = false;
  DEString var_width_attr_expr;
  bool has_var_width_attr_expr = false;
  double var_intrinsic_height_internal;
  bool has_var_intrinsic_height_internal = false;
  DEString var_flex_direction;
  bool has_var_flex_direction = false;
  double var_children_intrinsic_width;
  bool has_var_children_intrinsic_width = false;
  double var_box_width;
  bool has_var_box_width = false;
  double var_intrinsic_height_sum;
  bool has_var_intrinsic_height_sum = false;
  bool var_intrinsic_height_is_height;
  bool has_var_intrinsic_height_is_height = false;
  bool var_intrinsic_width_is_width;
  bool has_var_intrinsic_width_is_width = false;
  DEString var_display;
  bool has_var_display = false;
  double var_box_height;
  bool has_var_box_height = false;
  bool var_is_flex_row;
  bool has_var_is_flex_row = false;
  double var_flex_shrink_sum;
  bool has_var_flex_shrink_sum = false;
  double var_intrinsic_width_sum;
  bool has_var_intrinsic_width_sum = false;
  double var_line_height;
  bool has_var_line_height = false;
  bool var_is_flex_column;
  bool has_var_is_flex_column = false;
  bool var_has_width_attr;
  bool has_var_has_width_attr = false;
  double var_width_internal;
  bool has_var_width_internal = false;
  bool var_line_break;
  bool has_var_line_break = false;
  double var_intrinsic_height_external;
  bool has_var_intrinsic_height_external = false;
  bool var_has_height_attr;
  bool has_var_has_height_attr = false;
  double var_flex_shrink;
  bool has_var_flex_shrink = false;
  bool var_disabled;
  bool has_var_disabled = false;
  DEString var_position;
  bool has_var_position = false;
  DEString var_height_attr_expr;
  bool has_var_height_attr_expr = false;
  double var_height_external;
  bool has_var_height_external = false;
  DEString var_width_expr;
  bool has_var_width_expr = false;
  double var_intrinsic_width_internal;
  bool has_var_intrinsic_width_internal = false;
  DEString attr_width;
  bool has_attr_width = false;
  int64_t attr_image_height;
  bool has_attr_image_height = false;
  int64_t attr_image_width;
  bool has_attr_image_width = false;
  DEString attr_height;
  bool has_attr_height = false;
  DEString attr_viewBox;
  bool has_attr_viewBox = false;
  DEString prop_width;
  bool has_prop_width = false;
  DEString prop_flex_grow;
  bool has_prop_flex_grow = false;
  DEString prop_height;
  bool has_prop_height = false;
  DEString prop_display;
  bool has_prop_display = false;
  DEString prop_position;
  bool has_prop_position = false;
  DEString prop_flex_shrink;
  bool has_prop_flex_shrink = false;
  DEString prop_flex_direction;
  bool has_prop_flex_direction = false;
};
#include "header_continued.h"
Unit var_modified_x_458(const auto &x_460);
auto eval_expr_x_455(const auto &x_465);
Unit var_modified_x_453(const auto &x_475);
auto eval_expr_x_450(const auto &x_478);
Unit var_modified_x_448(const auto &x_484);
auto eval_expr_x_445(const auto &x_488);
Unit var_modified_x_443(const auto &x_516);
auto eval_expr_x_440(const auto &x_522);
Unit var_modified_x_438(const auto &x_536);
auto eval_expr_x_435(const auto &x_541);
Unit var_modified_x_433(const auto &x_547);
auto eval_expr_x_430(const auto &x_551);
Unit var_modified_x_428(const auto &x_579);
auto eval_expr_x_425(const auto &x_585);
Unit var_modified_x_423(const auto &x_597);
auto eval_expr_x_420(const auto &x_600);
Unit var_modified_x_418(const auto &x_612);
auto eval_expr_x_415(const auto &x_615);
Unit var_modified_x_413(const auto &x_623);
auto eval_expr_x_410(const auto &x_627);
Unit var_modified_x_408(const auto &x_639);
auto eval_expr_x_405(const auto &x_642);
Unit var_modified_x_403(const auto &x_646);
auto eval_expr_x_400(const auto &x_649);
Unit var_modified_x_396(const auto &x_653);
auto eval_expr_x_393(const auto &x_663);
Unit var_modified_x_391(const auto &x_709);
auto eval_expr_x_388(const auto &x_712);
Unit var_modified_x_386(const auto &x_722);
auto eval_expr_x_383(const auto &x_727);
Unit var_modified_x_381(const auto &x_731);
auto eval_expr_x_378(const auto &x_736);
Unit var_modified_x_376(const auto &x_742);
auto eval_expr_x_373(const auto &x_745);
Unit var_modified_x_371(const auto &x_747);
auto eval_expr_x_368(const auto &x_750);
Unit var_modified_x_366(const auto &x_754);
auto eval_expr_x_363(const auto &x_758);
Unit var_modified_x_361(const auto &x_770);
auto eval_expr_x_358(const auto &x_773);
Unit var_modified_x_356(const auto &x_777);
auto eval_expr_x_353(const auto &x_781);
Unit var_modified_x_351(const auto &x_793);
auto eval_expr_x_348(const auto &x_797);
Unit var_modified_x_346(const auto &x_811);
auto eval_expr_x_343(const auto &x_816);
Unit var_modified_x_341(const auto &x_832);
auto eval_expr_x_338(const auto &x_835);
Unit var_modified_x_336(const auto &x_839);
auto eval_expr_x_333(const auto &x_845);
Unit var_modified_x_331(const auto &x_851);
auto eval_expr_x_328(const auto &x_857);
Unit var_modified_x_326(const auto &x_863);
auto eval_expr_x_323(const auto &x_867);
Unit var_modified_x_321(const auto &x_871);
auto eval_expr_x_318(const auto &x_875);
Unit var_modified_x_316(const auto &x_879);
auto eval_expr_x_313(const auto &x_884);
Unit var_modified_x_311(const auto &x_888);
auto eval_expr_x_308(const auto &x_893);
Unit var_modified_x_305(const auto &x_897);
auto eval_expr_x_302(const auto &x_905);
Unit var_modified_x_300(const auto &x_921);
auto eval_expr_x_297(const auto &x_929);
Unit var_modified_x_295(const auto &x_937);
auto eval_expr_x_292(const auto &x_945);
Unit var_modified_x_290(const auto &x_951);
auto eval_expr_x_287(const auto &x_954);
Unit var_modified_x_285(const auto &x_960);
auto eval_expr_x_282(const auto &x_964);
Unit var_modified_x_280(const auto &x_1044);
auto eval_expr_x_277(const auto &x_1047);
Unit var_modified_x_275(const auto &x_1073);
auto eval_expr_x_272(const auto &x_1077);
Unit var_modified_x_270(const auto &x_1081);
auto eval_expr_x_267(const auto &x_1084);
Unit var_modified_x_265(const auto &x_1090);
auto eval_expr_x_262(const auto &x_1098);
Unit var_modified_x_260(const auto &x_1104);
auto eval_expr_x_257(const auto &x_1112);
Unit var_modified_x_255(const auto &x_1118);
auto eval_expr_x_252(const auto &x_1124);
Unit var_modified_x_250(const auto &x_1132);
auto eval_expr_x_247(const auto &x_1135);
Unit var_modified_x_245(const auto &x_1141);
auto eval_expr_x_242(const auto &x_1145);
Unit var_modified_x_240(const auto &x_1229);
auto eval_expr_x_237(const auto &x_1232);
Unit var_modified_x_235(const auto &x_1236);
auto eval_expr_x_232(const auto &x_1239);
Unit var_modified_x_230(const auto &x_1265);
auto eval_expr_x_227(const auto &x_1268);
Unit var_modified_x_225(const auto &x_1276);
auto eval_expr_x_222(const auto &x_1280);
Unit eval_stmts_x_197(const auto &x_221);
Unit eval_stmts_x_195(const auto &x_307);
Unit eval_stmts_x_193(const auto &x_398);
Unit eval_stmts_x_191(const auto &x_399);
Unit x_43(const auto &x_44, const auto &x_45, const auto &x_46);
Unit x_50(const auto &x_51, const auto &x_52, const auto &x_53);
Unit x_57(const auto &x_58, const auto &x_59, const auto &x_60);
Unit x_64(const auto &x_65, const auto &x_66, const auto &x_67);
Unit x_75(const auto &x_76, const auto &x_77, const auto &x_78);
Unit x_84(const auto &x_85, const auto &x_86, const auto &x_87);
Unit x_95(const auto &x_96, const auto &x_97, const auto &x_98);
Unit x_131(const auto &x_132);
Unit x_139(const auto &x_140, const auto &x_141, const auto &x_142);
Unit recalculate_x_24(const auto &x_160);
Unit x_161(const auto &x_162, const auto &x_163, const auto &x_164);
Unit x_182(const auto &x_183);
Unit eval_stmts_x_17(const auto &x_190);
Unit eval_stmts_x_16(const auto &x_194);
Unit x_198(const auto &x_199);
int64_t x_206(const auto &x_207);
int64_t x_209(const auto &x_210);
LayoutNode x_212(const auto &x_213);
Node x_215(const auto &x_216);
Node x_218(const auto &x_219);
Unit var_modified_x_458(const auto &x_460) { return MakeUnit(); }
auto eval_expr_x_455(const auto &x_465) {
  return RecordEval([&](const auto &x_466) {
    if ((x_465->prev != nullptr) && (!(x_465->prev)->var_line_break)) {
      return max(x_465->var_height_external, (x_465->prev)->var_line_height);
    } else {
      return x_465->var_height_external;
    }
  });
}
Unit var_modified_x_453(const auto &x_475) { return MakeUnit(); }
auto eval_expr_x_450(const auto &x_478) {
  return RecordEval([&](const auto &x_479) {
    if (eq(x_478->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_478->var_height_internal;
    }
  });
}
Unit var_modified_x_448(const auto &x_484) { return MakeUnit(); }
auto eval_expr_x_445(const auto &x_488) {
  return RecordEval([&](const auto &x_489) {
    if (x_488->var_intrinsic_height_is_height) {
      return x_488->var_intrinsic_height_internal;
    } else {
      if ((x_488->parent != nullptr) && (x_488->parent)->var_is_flex_column) {
        return plus(x_488->var_intrinsic_height_internal, mult(x_488->var_flex_amount, (x_488->parent)->var_flex_unit));
      } else {
        if (x_488->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_488->var_box_height, divide(x_488->var_height_expr.r.a0, 100.));
        } else {
          return max(x_488->var_box_height, x_488->var_intrinsic_height_internal);
        }
      }
    }
  });
}
Unit var_modified_x_443(const auto &x_516) { return MakeUnit(); }
auto eval_expr_x_440(const auto &x_522) {
  return RecordEval([&](const auto &x_523) {
    if (x_522->prev != nullptr) {
      if (x_522->var_line_break || (x_522->prev)->var_line_break) {
        return plus((x_522->prev)->var_y, (x_522->prev)->var_line_height);
      } else {
        return (x_522->prev)->var_y;
      }
    } else {
      if (x_522->parent != nullptr) {
        return (x_522->parent)->var_y;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_438(const auto &x_536) { return MakeUnit(); }
auto eval_expr_x_435(const auto &x_541) {
  return RecordEval([&](const auto &x_542) {
    if (eq(x_541->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_541->var_width_internal;
    }
  });
}
Unit var_modified_x_433(const auto &x_547) { return MakeUnit(); }
auto eval_expr_x_430(const auto &x_551) {
  return RecordEval([&](const auto &x_552) {
    if (x_551->var_intrinsic_width_is_width) {
      return x_551->var_intrinsic_width_internal;
    } else {
      if ((x_551->parent != nullptr) && (x_551->parent)->var_is_flex_row) {
        return plus(x_551->var_intrinsic_width_internal, mult(x_551->var_flex_amount, (x_551->parent)->var_flex_unit));
      } else {
        if (x_551->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_551->var_box_width, divide(x_551->var_width_expr.r.a0, 100.));
        } else {
          return max(x_551->var_box_width, x_551->var_intrinsic_width_internal);
        }
      }
    }
  });
}
Unit var_modified_x_428(const auto &x_579) { return MakeUnit(); }
auto eval_expr_x_425(const auto &x_585) {
  return RecordEval([&](const auto &x_586) {
    if (x_585->prev != nullptr) {
      if (x_585->var_line_break || (x_585->prev)->var_line_break) {
        return 0.;
      } else {
        return plus((x_585->prev)->var_x, (x_585->prev)->var_width_external);
      }
    } else {
      if (x_585->parent != nullptr) {
        return (x_585->parent)->var_x;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_423(const auto &x_597) { return MakeUnit(); }
auto eval_expr_x_420(const auto &x_600) {
  return RecordEval([&](const auto &x_601) {
    if (gt(x_600->var_left_over, 0.)) {
      return divide(x_600->var_left_over, x_600->var_flex_grow_sum);
    } else {
      return divide(x_600->var_left_over, x_600->var_flex_shrink_sum);
    }
  });
}
Unit var_modified_x_418(const auto &x_612) { return MakeUnit(); }
auto eval_expr_x_415(const auto &x_615) {
  return RecordEval([&](const auto &x_616) {
    if ((x_615->parent != nullptr) && gt((x_615->parent)->var_left_over, 0.)) {
      return x_615->var_flex_grow;
    } else {
      return x_615->var_flex_shrink;
    }
  });
}
Unit var_modified_x_413(const auto &x_623) { return MakeUnit(); }
auto eval_expr_x_410(const auto &x_627) {
  return RecordEval([&](const auto &x_628) {
    if (x_627->var_is_flex_row) {
      return minus(x_627->var_box_width, (x_627->last != nullptr) ? ((x_627->last)->var_intrinsic_width_sum) : (0.));
    } else {
      return minus(x_627->var_box_height, (x_627->last != nullptr) ? ((x_627->last)->var_intrinsic_height_sum) : (0.));
    }
  });
}
Unit var_modified_x_408(const auto &x_639) { return MakeUnit(); }
auto eval_expr_x_405(const auto &x_642) {
  return RecordEval([&](const auto &x_643) {
    if (x_642->parent != nullptr) {
      return (x_642->parent)->var_height_internal;
    } else {
      return 1080.;
    }
  });
}
Unit var_modified_x_403(const auto &x_646) { return MakeUnit(); }
auto eval_expr_x_400(const auto &x_649) {
  return RecordEval([&](const auto &x_650) {
    if (x_649->parent != nullptr) {
      return (x_649->parent)->var_width_internal;
    } else {
      return 1920.;
    }
  });
}
Unit var_modified_x_396(const auto &x_653) { return MakeUnit(); }
auto eval_expr_x_393(const auto &x_663) {
  return RecordEval([&](const auto &x_664) {
    if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return false;
    } else {
      if (eq(x_663->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
        return false;
      } else {
        if ((x_663->parent != nullptr) &&
            (eq((x_663->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
             eq((x_663->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
          return true;
        } else {
          if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
            return true;
          } else {
            if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
              return false;
            } else {
              if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
                return false;
              } else {
                if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                  if (eq(x_663->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                    return false;
                  } else {
                    if (eq(x_663->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                      return false;
                    } else {
                      if (eq(x_663->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                        return true;
                      } else {
                        return true;
                      }
                    }
                  }
                } else {
                  if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                    return false;
                  } else {
                    if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                      return false;
                    } else {
                      if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                        return true;
                      } else {
                        if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                          return true;
                        } else {
                          if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                            return true;
                          } else {
                            if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                              return false;
                            } else {
                              if (eq(x_663->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
                                return true;
                              } else {
                                return true;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  });
}
Unit var_modified_x_391(const auto &x_709) { return MakeUnit(); }
auto eval_expr_x_388(const auto &x_712) {
  return RecordEval([&](const auto &x_713) {
    return (((!(x_712->parent != nullptr)) || (x_712->parent)->var_visible) &&
            (neq(x_712->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
             ((!x_712->var_inside_svg) && (!x_712->var_disabled))));
  });
}
Unit var_modified_x_386(const auto &x_722) { return MakeUnit(); }
auto eval_expr_x_383(const auto &x_727) {
  return RecordEval([&](const auto &x_728) {
    if (eq(x_727->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
      return true;
    } else {
      return ((x_727->parent != nullptr) && (x_727->parent)->var_disabled);
    }
  });
}
Unit var_modified_x_381(const auto &x_731) { return MakeUnit(); }
auto eval_expr_x_378(const auto &x_736) {
  return RecordEval([&](const auto &x_737) {
    return ((x_736->parent != nullptr) && ((x_736->parent)->var_is_svg_block || (x_736->parent)->var_inside_svg));
  });
}
Unit var_modified_x_376(const auto &x_742) { return MakeUnit(); }
auto eval_expr_x_373(const auto &x_745) {
  return RecordEval([&](const auto &x_746) { return eq(x_745->name, DEStringLit(DEStringCase::DSTRING_svg)); });
}
Unit var_modified_x_371(const auto &x_747) { return MakeUnit(); }
auto eval_expr_x_368(const auto &x_750) {
  return RecordEval(
      [&](const auto &x_751) { return neq(x_750->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_366(const auto &x_754) { return MakeUnit(); }
auto eval_expr_x_363(const auto &x_758) {
  return RecordEval([&](const auto &x_759) {
    if (!x_758->has_attr_height) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_758->attr_height.c == DEStringCase::DStringIsFloat) ||
          (x_758->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_758->attr_height;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_361(const auto &x_770) { return MakeUnit(); }
auto eval_expr_x_358(const auto &x_773) {
  return RecordEval(
      [&](const auto &x_774) { return neq(x_773->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_356(const auto &x_777) { return MakeUnit(); }
auto eval_expr_x_353(const auto &x_781) {
  return RecordEval([&](const auto &x_782) {
    if (!x_781->has_attr_width) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_781->attr_width.c == DEStringCase::DStringIsFloat) ||
          (x_781->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_781->attr_width;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_351(const auto &x_793) { return MakeUnit(); }
auto eval_expr_x_348(const auto &x_797) {
  return RecordEval([&](const auto &x_798) {
    if ((x_797->parent != nullptr) &&
        (eq((x_797->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_797->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_797->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
          eq((x_797->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_346(const auto &x_811) { return MakeUnit(); }
auto eval_expr_x_343(const auto &x_816) {
  return RecordEval([&](const auto &x_817) {
    if ((x_816->parent != nullptr) &&
        (eq((x_816->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_816->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_816->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
          eq((x_816->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_341(const auto &x_832) { return MakeUnit(); }
auto eval_expr_x_338(const auto &x_835) {
  return RecordEval([&](const auto &x_836) {
    if (x_835->has_prop_flex_direction) {
      return x_835->prop_flex_direction;
    } else {
      return DEStringLit(DEStringCase::DSTRING_);
    }
  });
}
Unit var_modified_x_336(const auto &x_839) { return MakeUnit(); }
auto eval_expr_x_333(const auto &x_845) {
  return RecordEval([&](const auto &x_846) {
    return plus((x_845->prev != nullptr) ? ((x_845->prev)->var_flex_shrink_sum) : (0.), x_845->var_flex_shrink);
  });
}
Unit var_modified_x_331(const auto &x_851) { return MakeUnit(); }
auto eval_expr_x_328(const auto &x_857) {
  return RecordEval([&](const auto &x_858) {
    return plus((x_857->prev != nullptr) ? ((x_857->prev)->var_flex_grow_sum) : (0.), x_857->var_flex_grow);
  });
}
Unit var_modified_x_326(const auto &x_863) { return MakeUnit(); }
auto eval_expr_x_323(const auto &x_867) {
  return RecordEval([&](const auto &x_868) {
    if (x_867->has_prop_flex_shrink) {
      return (x_867->prop_flex_shrink.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_321(const auto &x_871) { return MakeUnit(); }
auto eval_expr_x_318(const auto &x_875) {
  return RecordEval([&](const auto &x_876) {
    if (x_875->has_prop_flex_grow) {
      return (x_875->prop_flex_grow.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_316(const auto &x_879) { return MakeUnit(); }
auto eval_expr_x_313(const auto &x_884) {
  return RecordEval([&](const auto &x_885) {
    if (x_884->has_prop_position) {
      return x_884->prop_position;
    } else {
      return DEStringLit(DEStringCase::DSTRING_static);
    }
  });
}
Unit var_modified_x_311(const auto &x_888) { return MakeUnit(); }
auto eval_expr_x_308(const auto &x_893) {
  return RecordEval([&](const auto &x_894) {
    if (x_893->has_prop_display) {
      return x_893->prop_display;
    } else {
      return DEStringLit(DEStringCase::DSTRING_block);
    }
  });
}
Unit var_modified_x_305(const auto &x_897) { return MakeUnit(); }
auto eval_expr_x_302(const auto &x_905) {
  return RecordEval([&](const auto &x_906) {
    if (x_905->prev != nullptr) {
      if (x_905->var_line_break) {
        return plus((x_905->prev)->var_finished_intrinsic_height_sum,
                    plus((x_905->prev)->var_intrinsic_current_line_height, x_905->var_intrinsic_height_external));
      } else {
        return (x_905->prev)->var_finished_intrinsic_height_sum;
      }
    } else {
      if (x_905->var_line_break) {
        return x_905->var_intrinsic_height_external;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_300(const auto &x_921) { return MakeUnit(); }
auto eval_expr_x_297(const auto &x_929) {
  return RecordEval([&](const auto &x_930) {
    if (x_929->var_line_break) {
      return 0.;
    } else {
      return max(x_929->var_intrinsic_height_external,
                 (x_929->prev != nullptr) ? ((x_929->prev)->var_intrinsic_current_line_height) : (0.));
    }
  });
}
Unit var_modified_x_295(const auto &x_937) { return MakeUnit(); }
auto eval_expr_x_292(const auto &x_945) {
  return RecordEval([&](const auto &x_946) {
    return plus((x_945->prev != nullptr) ? ((x_945->prev)->var_intrinsic_height_sum) : (0.),
                x_945->var_intrinsic_height_external);
  });
}
Unit var_modified_x_290(const auto &x_951) { return MakeUnit(); }
auto eval_expr_x_287(const auto &x_954) {
  return RecordEval([&](const auto &x_955) {
    if (eq(x_954->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_954->var_intrinsic_height_internal;
    }
  });
}
Unit var_modified_x_285(const auto &x_960) { return MakeUnit(); }
auto eval_expr_x_282(const auto &x_964) {
  return RecordEval([&](const auto &x_965) {
    if (eq(x_964->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_964->var_inside_svg) {
        return 0.;
      } else {
        if (x_964->var_disabled) {
          return 0.;
        } else {
          if (neq(x_964->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_964->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               neq(x_964->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
            if (x_964->var_height_expr.c == DEStringCase::DHasSuffix_px) {
              return x_964->var_height_expr.r.a0;
            } else {
              if (x_964->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
                return x_964->var_height_expr.r.a0;
              } else {
                return x_964->var_height_expr.r.a0;
              }
            }
          } else {
            return plus(
                x_964->var_children_intrinsic_height,
                (eq(x_964->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (10.)
                    : ((x_964->var_is_default_case)
                           ? (0.)
                           : ((eq(x_964->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_964->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_964->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (10.)
                                         : ((eq(x_964->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_964->var_has_height_attr &&
                                                    (x_964->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_964->var_height_attr_expr.r.a0)
                                                       : ((x_964->has_attr_viewBox)
                                                              ? (x_964->attr_viewBox.r.a3)
                                                              : (mult((x_964->attr_viewBox.r.a3),
                                                                      divide(x_964->var_height_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_964->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_964->var_has_height_attr)
                                                              ? (x_964->var_height_attr_expr.r.a0)
                                                              : ((x_964->has_attr_image_height &&
                                                                  (!x_964->var_has_width_attr))
                                                                     ? (int_to_float(x_964->attr_image_height))
                                                                     : ((neq(x_964->attr_image_width,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(
                                                                                  (x_964->var_width_attr_expr.r.a0),
                                                                                  divide(int_to_float(
                                                                                             x_964->attr_image_height),
                                                                                         int_to_float(
                                                                                             x_964->attr_image_width))))
                                                                            : (0.))))
                                                       : ((eq(x_964->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (150.)
                                                              : ((eq(x_964->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (150.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_280(const auto &x_1044) { return MakeUnit(); }
auto eval_expr_x_277(const auto &x_1047) {
  return RecordEval([&](const auto &x_1048) {
    if (eq(x_1047->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_1047->var_inside_svg || x_1047->var_disabled)) {
      return true;
    } else {
      if ((x_1047->parent != nullptr) && (x_1047->parent)->var_is_flex_column) {
        return false;
      } else {
        if (eq(x_1047->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_1047->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_1047->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_1047->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
               eq(x_1047->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_275(const auto &x_1073) { return MakeUnit(); }
auto eval_expr_x_272(const auto &x_1077) {
  return RecordEval([&](const auto &x_1078) {
    if (x_1077->has_prop_height) {
      return x_1077->prop_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit var_modified_x_270(const auto &x_1081) { return MakeUnit(); }
auto eval_expr_x_267(const auto &x_1084) {
  return RecordEval([&](const auto &x_1085) {
    if (x_1084->last != nullptr) {
      return plus((x_1084->last)->var_finished_intrinsic_height_sum, (x_1084->last)->var_intrinsic_current_line_height);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_265(const auto &x_1090) { return MakeUnit(); }
auto eval_expr_x_262(const auto &x_1098) {
  return RecordEval([&](const auto &x_1099) {
    return plus((x_1098->prev != nullptr) ? ((x_1098->prev)->var_intrinsic_width_sum) : (0.),
                x_1098->var_intrinsic_width_external);
  });
}
Unit var_modified_x_260(const auto &x_1104) { return MakeUnit(); }
auto eval_expr_x_257(const auto &x_1112) {
  return RecordEval([&](const auto &x_1113) {
    return max(x_1112->var_intrinsic_current_line_width,
               (x_1112->prev != nullptr) ? ((x_1112->prev)->var_intrinsic_width_max) : (0.));
  });
}
Unit var_modified_x_255(const auto &x_1118) { return MakeUnit(); }
auto eval_expr_x_252(const auto &x_1124) {
  return RecordEval([&](const auto &x_1125) {
    return plus(x_1124->var_intrinsic_width_external,
                ((x_1124->prev != nullptr) && (!(x_1124->prev)->var_line_break))
                    ? ((x_1124->prev)->var_intrinsic_current_line_width)
                    : (0.));
  });
}
Unit var_modified_x_250(const auto &x_1132) { return MakeUnit(); }
auto eval_expr_x_247(const auto &x_1135) {
  return RecordEval([&](const auto &x_1136) {
    if (eq(x_1135->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_1135->var_intrinsic_width_internal;
    }
  });
}
Unit var_modified_x_245(const auto &x_1141) { return MakeUnit(); }
auto eval_expr_x_242(const auto &x_1145) {
  return RecordEval([&](const auto &x_1146) {
    if (eq(x_1145->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_1145->var_inside_svg) {
        return 0.;
      } else {
        if (x_1145->var_disabled) {
          return 0.;
        } else {
          if (neq(x_1145->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_1145->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               (neq(x_1145->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
                (neq(x_1145->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
                 (!(x_1145->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
            if (x_1145->var_width_expr.c == DEStringCase::DHasSuffix_px) {
              return x_1145->var_width_expr.r.a0;
            } else {
              return x_1145->var_width_expr.r.a0;
            }
          } else {
            return plus(
                x_1145->var_children_intrinsic_width,
                (eq(x_1145->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (100.)
                    : ((x_1145->var_is_default_case)
                           ? (0.)
                           : ((eq(x_1145->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_1145->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_1145->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (100.)
                                         : ((eq(x_1145->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_1145->var_has_width_attr &&
                                                    (x_1145->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_1145->var_width_attr_expr.r.a0)
                                                       : (((!x_1145->var_has_width_attr) && x_1145->has_attr_viewBox)
                                                              ? (x_1145->attr_viewBox.r.a2)
                                                              : (mult((x_1145->attr_viewBox.r.a2),
                                                                      divide(x_1145->var_width_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_1145->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_1145->var_has_width_attr)
                                                              ? (x_1145->var_width_attr_expr.r.a0)
                                                              : ((x_1145->has_attr_image_width &&
                                                                  (!x_1145->var_has_height_attr))
                                                                     ? (int_to_float(x_1145->attr_image_width))
                                                                     : ((neq(x_1145->attr_image_height,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(
                                                                                  (x_1145->var_height_attr_expr.r.a0),
                                                                                  divide(
                                                                                      int_to_float(
                                                                                          x_1145->attr_image_width),
                                                                                      int_to_float(
                                                                                          x_1145->attr_image_height))))
                                                                            : (0.))))
                                                       : ((eq(x_1145->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (300.)
                                                              : ((eq(x_1145->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (300.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_240(const auto &x_1229) { return MakeUnit(); }
auto eval_expr_x_237(const auto &x_1232) {
  return RecordEval([&](const auto &x_1233) {
    if (x_1232->last != nullptr) {
      return (x_1232->last)->var_intrinsic_width_max;
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_235(const auto &x_1236) { return MakeUnit(); }
auto eval_expr_x_232(const auto &x_1239) {
  return RecordEval([&](const auto &x_1240) {
    if (eq(x_1239->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_1239->var_inside_svg || x_1239->var_disabled)) {
      return true;
    } else {
      if ((x_1239->parent != nullptr) && (x_1239->parent)->var_is_flex_row) {
        return false;
      } else {
        if (eq(x_1239->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_1239->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_1239->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_1239->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
               eq(x_1239->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_230(const auto &x_1265) { return MakeUnit(); }
auto eval_expr_x_227(const auto &x_1268) {
  return RecordEval([&](const auto &x_1269) {
    if (eq(x_1268->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return true;
    } else {
      if (x_1268->var_inside_svg) {
        return true;
      } else {
        if (x_1268->var_disabled) {
          return true;
        } else {if ( eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_html)) || eq(x_1268->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
            return true;
          } else {
            return false;
          }
        }
      }
    }
  });
}
Unit var_modified_x_225(const auto &x_1276) { return MakeUnit(); }
auto eval_expr_x_222(const auto &x_1280) {
  return RecordEval([&](const auto &x_1281) {
    if (x_1280->has_prop_width) {
      return x_1280->prop_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit eval_stmts_x_197(const auto &x_221) {
  WriteMetric();
  auto x_223 = eval_expr_x_222(x_221);
  if (x_221->has_var_width_expr) {
    if (!EqualValue(x_221->var_width_expr, x_223)) {
      var_modified_x_225(x_221);
    }
  }
  x_221->has_var_width_expr = true;
  x_221->var_width_expr = AsDEString(x_223);
  WriteMetric();
  auto x_228 = eval_expr_x_227(x_221);
  if (x_221->has_var_is_default_case) {
    if (!EqualValue(x_221->var_is_default_case, x_228)) {
      var_modified_x_230(x_221);
    }
  }
  x_221->has_var_is_default_case = true;
  x_221->var_is_default_case = Asbool(x_228);
  WriteMetric();
  auto x_233 = eval_expr_x_232(x_221);
  if (x_221->has_var_intrinsic_width_is_width) {
    if (!EqualValue(x_221->var_intrinsic_width_is_width, x_233)) {
      var_modified_x_235(x_221);
    }
  }
  x_221->has_var_intrinsic_width_is_width = true;
  x_221->var_intrinsic_width_is_width = Asbool(x_233);
  WriteMetric();
  auto x_238 = eval_expr_x_237(x_221);
  if (x_221->has_var_children_intrinsic_width) {
    if (!EqualValue(x_221->var_children_intrinsic_width, x_238)) {
      var_modified_x_240(x_221);
    }
  }
  x_221->has_var_children_intrinsic_width = true;
  x_221->var_children_intrinsic_width = Asdouble(x_238);
  WriteMetric();
  auto x_243 = eval_expr_x_242(x_221);
  if (x_221->has_var_intrinsic_width_internal) {
    if (!EqualValue(x_221->var_intrinsic_width_internal, x_243)) {
      var_modified_x_245(x_221);
    }
  }
  x_221->has_var_intrinsic_width_internal = true;
  x_221->var_intrinsic_width_internal = Asdouble(x_243);
  WriteMetric();
  auto x_248 = eval_expr_x_247(x_221);
  if (x_221->has_var_intrinsic_width_external) {
    if (!EqualValue(x_221->var_intrinsic_width_external, x_248)) {
      var_modified_x_250(x_221);
    }
  }
  x_221->has_var_intrinsic_width_external = true;
  x_221->var_intrinsic_width_external = Asdouble(x_248);
  WriteMetric();
  auto x_253 = eval_expr_x_252(x_221);
  if (x_221->has_var_intrinsic_current_line_width) {
    if (!EqualValue(x_221->var_intrinsic_current_line_width, x_253)) {
      var_modified_x_255(x_221);
    }
  }
  x_221->has_var_intrinsic_current_line_width = true;
  x_221->var_intrinsic_current_line_width = Asdouble(x_253);
  WriteMetric();
  auto x_258 = eval_expr_x_257(x_221);
  if (x_221->has_var_intrinsic_width_max) {
    if (!EqualValue(x_221->var_intrinsic_width_max, x_258)) {
      var_modified_x_260(x_221);
    }
  }
  x_221->has_var_intrinsic_width_max = true;
  x_221->var_intrinsic_width_max = Asdouble(x_258);
  WriteMetric();
  auto x_263 = eval_expr_x_262(x_221);
  if (x_221->has_var_intrinsic_width_sum) {
    if (!EqualValue(x_221->var_intrinsic_width_sum, x_263)) {
      var_modified_x_265(x_221);
    }
  }
  x_221->has_var_intrinsic_width_sum = true;
  x_221->var_intrinsic_width_sum = Asdouble(x_263);
  WriteMetric();
  auto x_268 = eval_expr_x_267(x_221);
  if (x_221->has_var_children_intrinsic_height) {
    if (!EqualValue(x_221->var_children_intrinsic_height, x_268)) {
      var_modified_x_270(x_221);
    }
  }
  x_221->has_var_children_intrinsic_height = true;
  x_221->var_children_intrinsic_height = Asdouble(x_268);
  WriteMetric();
  auto x_273 = eval_expr_x_272(x_221);
  if (x_221->has_var_height_expr) {
    if (!EqualValue(x_221->var_height_expr, x_273)) {
      var_modified_x_275(x_221);
    }
  }
  x_221->has_var_height_expr = true;
  x_221->var_height_expr = AsDEString(x_273);
  WriteMetric();
  auto x_278 = eval_expr_x_277(x_221);
  if (x_221->has_var_intrinsic_height_is_height) {
    if (!EqualValue(x_221->var_intrinsic_height_is_height, x_278)) {
      var_modified_x_280(x_221);
    }
  }
  x_221->has_var_intrinsic_height_is_height = true;
  x_221->var_intrinsic_height_is_height = Asbool(x_278);
  WriteMetric();
  auto x_283 = eval_expr_x_282(x_221);
  if (x_221->has_var_intrinsic_height_internal) {
    if (!EqualValue(x_221->var_intrinsic_height_internal, x_283)) {
      var_modified_x_285(x_221);
    }
  }
  x_221->has_var_intrinsic_height_internal = true;
  x_221->var_intrinsic_height_internal = Asdouble(x_283);
  WriteMetric();
  auto x_288 = eval_expr_x_287(x_221);
  if (x_221->has_var_intrinsic_height_external) {
    if (!EqualValue(x_221->var_intrinsic_height_external, x_288)) {
      var_modified_x_290(x_221);
    }
  }
  x_221->has_var_intrinsic_height_external = true;
  x_221->var_intrinsic_height_external = Asdouble(x_288);
  WriteMetric();
  auto x_293 = eval_expr_x_292(x_221);
  if (x_221->has_var_intrinsic_height_sum) {
    if (!EqualValue(x_221->var_intrinsic_height_sum, x_293)) {
      var_modified_x_295(x_221);
    }
  }
  x_221->has_var_intrinsic_height_sum = true;
  x_221->var_intrinsic_height_sum = Asdouble(x_293);
  WriteMetric();
  auto x_298 = eval_expr_x_297(x_221);
  if (x_221->has_var_intrinsic_current_line_height) {
    if (!EqualValue(x_221->var_intrinsic_current_line_height, x_298)) {
      var_modified_x_300(x_221);
    }
  }
  x_221->has_var_intrinsic_current_line_height = true;
  x_221->var_intrinsic_current_line_height = Asdouble(x_298);
  WriteMetric();
  auto x_303 = eval_expr_x_302(x_221);
  if (x_221->has_var_finished_intrinsic_height_sum) {
    if (!EqualValue(x_221->var_finished_intrinsic_height_sum, x_303)) {
      var_modified_x_305(x_221);
    }
  }
  x_221->has_var_finished_intrinsic_height_sum = true;
  x_221->var_finished_intrinsic_height_sum = Asdouble(x_303);
  return MakeUnit();
}
Unit eval_stmts_x_195(const auto &x_307) {
  WriteMetric();
  auto x_309 = eval_expr_x_308(x_307);
  if (x_307->has_var_display) {
    if (!EqualValue(x_307->var_display, x_309)) {
      var_modified_x_311(x_307);
    }
  }
  x_307->has_var_display = true;
  x_307->var_display = AsDEString(x_309);
  WriteMetric();
  auto x_314 = eval_expr_x_313(x_307);
  if (x_307->has_var_position) {
    if (!EqualValue(x_307->var_position, x_314)) {
      var_modified_x_316(x_307);
    }
  }
  x_307->has_var_position = true;
  x_307->var_position = AsDEString(x_314);
  WriteMetric();
  auto x_319 = eval_expr_x_318(x_307);
  if (x_307->has_var_flex_grow) {
    if (!EqualValue(x_307->var_flex_grow, x_319)) {
      var_modified_x_321(x_307);
    }
  }
  x_307->has_var_flex_grow = true;
  x_307->var_flex_grow = Asdouble(x_319);
  WriteMetric();
  auto x_324 = eval_expr_x_323(x_307);
  if (x_307->has_var_flex_shrink) {
    if (!EqualValue(x_307->var_flex_shrink, x_324)) {
      var_modified_x_326(x_307);
    }
  }
  x_307->has_var_flex_shrink = true;
  x_307->var_flex_shrink = Asdouble(x_324);
  WriteMetric();
  auto x_329 = eval_expr_x_328(x_307);
  if (x_307->has_var_flex_grow_sum) {
    if (!EqualValue(x_307->var_flex_grow_sum, x_329)) {
      var_modified_x_331(x_307);
    }
  }
  x_307->has_var_flex_grow_sum = true;
  x_307->var_flex_grow_sum = Asdouble(x_329);
  WriteMetric();
  auto x_334 = eval_expr_x_333(x_307);
  if (x_307->has_var_flex_shrink_sum) {
    if (!EqualValue(x_307->var_flex_shrink_sum, x_334)) {
      var_modified_x_336(x_307);
    }
  }
  x_307->has_var_flex_shrink_sum = true;
  x_307->var_flex_shrink_sum = Asdouble(x_334);
  WriteMetric();
  auto x_339 = eval_expr_x_338(x_307);
  if (x_307->has_var_flex_direction) {
    if (!EqualValue(x_307->var_flex_direction, x_339)) {
      var_modified_x_341(x_307);
    }
  }
  x_307->has_var_flex_direction = true;
  x_307->var_flex_direction = AsDEString(x_339);
  WriteMetric();
  auto x_344 = eval_expr_x_343(x_307);
  if (x_307->has_var_is_flex_row) {
    if (!EqualValue(x_307->var_is_flex_row, x_344)) {
      var_modified_x_346(x_307);
    }
  }
  x_307->has_var_is_flex_row = true;
  x_307->var_is_flex_row = Asbool(x_344);
  WriteMetric();
  auto x_349 = eval_expr_x_348(x_307);
  if (x_307->has_var_is_flex_column) {
    if (!EqualValue(x_307->var_is_flex_column, x_349)) {
      var_modified_x_351(x_307);
    }
  }
  x_307->has_var_is_flex_column = true;
  x_307->var_is_flex_column = Asbool(x_349);
  WriteMetric();
  auto x_354 = eval_expr_x_353(x_307);
  if (x_307->has_var_width_attr_expr) {
    if (!EqualValue(x_307->var_width_attr_expr, x_354)) {
      var_modified_x_356(x_307);
    }
  }
  x_307->has_var_width_attr_expr = true;
  x_307->var_width_attr_expr = AsDEString(x_354);
  WriteMetric();
  auto x_359 = eval_expr_x_358(x_307);
  if (x_307->has_var_has_width_attr) {
    if (!EqualValue(x_307->var_has_width_attr, x_359)) {
      var_modified_x_361(x_307);
    }
  }
  x_307->has_var_has_width_attr = true;
  x_307->var_has_width_attr = Asbool(x_359);
  WriteMetric();
  auto x_364 = eval_expr_x_363(x_307);
  if (x_307->has_var_height_attr_expr) {
    if (!EqualValue(x_307->var_height_attr_expr, x_364)) {
      var_modified_x_366(x_307);
    }
  }
  x_307->has_var_height_attr_expr = true;
  x_307->var_height_attr_expr = AsDEString(x_364);
  WriteMetric();
  auto x_369 = eval_expr_x_368(x_307);
  if (x_307->has_var_has_height_attr) {
    if (!EqualValue(x_307->var_has_height_attr, x_369)) {
      var_modified_x_371(x_307);
    }
  }
  x_307->has_var_has_height_attr = true;
  x_307->var_has_height_attr = Asbool(x_369);
  WriteMetric();
  auto x_374 = eval_expr_x_373(x_307);
  if (x_307->has_var_is_svg_block) {
    if (!EqualValue(x_307->var_is_svg_block, x_374)) {
      var_modified_x_376(x_307);
    }
  }
  x_307->has_var_is_svg_block = true;
  x_307->var_is_svg_block = Asbool(x_374);
  WriteMetric();
  auto x_379 = eval_expr_x_378(x_307);
  if (x_307->has_var_inside_svg) {
    if (!EqualValue(x_307->var_inside_svg, x_379)) {
      var_modified_x_381(x_307);
    }
  }
  x_307->has_var_inside_svg = true;
  x_307->var_inside_svg = Asbool(x_379);
  WriteMetric();
  auto x_384 = eval_expr_x_383(x_307);
  if (x_307->has_var_disabled) {
    if (!EqualValue(x_307->var_disabled, x_384)) {
      var_modified_x_386(x_307);
    }
  }
  x_307->has_var_disabled = true;
  x_307->var_disabled = Asbool(x_384);
  WriteMetric();
  auto x_389 = eval_expr_x_388(x_307);
  if (x_307->has_var_visible) {
    if (!EqualValue(x_307->var_visible, x_389)) {
      var_modified_x_391(x_307);
    }
  }
  x_307->has_var_visible = true;
  x_307->var_visible = Asbool(x_389);
  WriteMetric();
  auto x_394 = eval_expr_x_393(x_307);
  if (x_307->has_var_line_break) {
    if (!EqualValue(x_307->var_line_break, x_394)) {
      var_modified_x_396(x_307);
    }
  }
  x_307->has_var_line_break = true;
  x_307->var_line_break = Asbool(x_394);
  return MakeUnit();
}
Unit eval_stmts_x_193(const auto &x_398) { return MakeUnit(); }
Unit eval_stmts_x_191(const auto &x_399) {
  WriteMetric();
  auto x_401 = eval_expr_x_400(x_399);
  if (x_399->has_var_box_width) {
    if (!EqualValue(x_399->var_box_width, x_401)) {
      var_modified_x_403(x_399);
    }
  }
  x_399->has_var_box_width = true;
  x_399->var_box_width = Asdouble(x_401);
  WriteMetric();
  auto x_406 = eval_expr_x_405(x_399);
  if (x_399->has_var_box_height) {
    if (!EqualValue(x_399->var_box_height, x_406)) {
      var_modified_x_408(x_399);
    }
  }
  x_399->has_var_box_height = true;
  x_399->var_box_height = Asdouble(x_406);
  WriteMetric();
  auto x_411 = eval_expr_x_410(x_399);
  if (x_399->has_var_left_over) {
    if (!EqualValue(x_399->var_left_over, x_411)) {
      var_modified_x_413(x_399);
    }
  }
  x_399->has_var_left_over = true;
  x_399->var_left_over = Asdouble(x_411);
  WriteMetric();
  auto x_416 = eval_expr_x_415(x_399);
  if (x_399->has_var_flex_amount) {
    if (!EqualValue(x_399->var_flex_amount, x_416)) {
      var_modified_x_418(x_399);
    }
  }
  x_399->has_var_flex_amount = true;
  x_399->var_flex_amount = Asdouble(x_416);
  WriteMetric();
  auto x_421 = eval_expr_x_420(x_399);
  if (x_399->has_var_flex_unit) {
    if (!EqualValue(x_399->var_flex_unit, x_421)) {
      var_modified_x_423(x_399);
    }
  }
  x_399->has_var_flex_unit = true;
  x_399->var_flex_unit = Asdouble(x_421);
  WriteMetric();
  auto x_426 = eval_expr_x_425(x_399);
  if (x_399->has_var_x) {
    if (!EqualValue(x_399->var_x, x_426)) {
      var_modified_x_428(x_399);
    }
  }
  x_399->has_var_x = true;
  x_399->var_x = Asdouble(x_426);
  WriteMetric();
  auto x_431 = eval_expr_x_430(x_399);
  if (x_399->has_var_width_internal) {
    if (!EqualValue(x_399->var_width_internal, x_431)) {
      var_modified_x_433(x_399);
    }
  }
  x_399->has_var_width_internal = true;
  x_399->var_width_internal = Asdouble(x_431);
  WriteMetric();
  auto x_436 = eval_expr_x_435(x_399);
  if (x_399->has_var_width_external) {
    if (!EqualValue(x_399->var_width_external, x_436)) {
      var_modified_x_438(x_399);
    }
  }
  x_399->has_var_width_external = true;
  x_399->var_width_external = Asdouble(x_436);
  WriteMetric();
  auto x_441 = eval_expr_x_440(x_399);
  if (x_399->has_var_y) {
    if (!EqualValue(x_399->var_y, x_441)) {
      var_modified_x_443(x_399);
    }
  }
  x_399->has_var_y = true;
  x_399->var_y = Asdouble(x_441);
  WriteMetric();
  auto x_446 = eval_expr_x_445(x_399);
  if (x_399->has_var_height_internal) {
    if (!EqualValue(x_399->var_height_internal, x_446)) {
      var_modified_x_448(x_399);
    }
  }
  x_399->has_var_height_internal = true;
  x_399->var_height_internal = Asdouble(x_446);
  WriteMetric();
  auto x_451 = eval_expr_x_450(x_399);
  if (x_399->has_var_height_external) {
    if (!EqualValue(x_399->var_height_external, x_451)) {
      var_modified_x_453(x_399);
    }
  }
  x_399->has_var_height_external = true;
  x_399->var_height_external = Asdouble(x_451);
  WriteMetric();
  auto x_456 = eval_expr_x_455(x_399);
  if (x_399->has_var_line_height) {
    if (!EqualValue(x_399->var_line_height, x_456)) {
      var_modified_x_458(x_399);
    }
  }
  x_399->has_var_line_height = true;
  x_399->var_line_height = Asdouble(x_456);
  return MakeUnit();
}
Unit x_43(const auto &x_44, const auto &x_45, const auto &x_46) {
  auto x_47 = ListHeadExn(x_44);
  auto x_48 = ListTailExn(x_44);
  if (ListIsEmpty(x_48)) {
    auto x_49 = ListSplitN(x_45->children, x_47);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_45->children, x_47)), layout_size_x_3(x_46)));
    x_45->children = ListAppend(Zro(x_49), Cons(x_46, ListTailExn(Fst(x_49))));
    return MakeUnit();
  } else {
    return x_43(x_48, ListNthExn(x_45->children, x_47), x_46);
  }
}
Unit replace_layout_node_x_42(const auto &x_44, const auto &x_45, const auto &x_46) { return x_43(x_44, x_45, x_46); }
Unit x_50(const auto &x_51, const auto &x_52, const auto &x_53) {
  auto x_54 = ListHeadExn(x_51);
  auto x_55 = ListTailExn(x_51);
  if (ListIsEmpty(x_55)) {
    OutputChangeMetric(layout_size_x_3(x_53));
    auto x_56 = ListSplitN(x_52->children, x_54);
    x_52->children = ListAppend(Zro(x_56), Cons(x_53, Fst(x_56)));
    return MakeUnit();
  } else {
    return x_50(x_55, ListNthExn(x_52->children, x_54), x_53);
  }
}
Unit add_layout_node_x_40(const auto &x_51, const auto &x_52, const auto &x_53) { return x_50(x_51, x_52, x_53); }
Unit x_57(const auto &x_58, const auto &x_59, const auto &x_60) {
  auto x_61 = ListHeadExn(x_58);
  auto x_62 = ListTailExn(x_58);
  if (ListIsEmpty(x_62)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_59->children, x_61)));
    auto x_63 = ListSplitN(x_59->children, x_61);
    x_59->children = ListAppend(Zro(x_63), ListTailExn(Fst(x_63)));
    return MakeUnit();
  } else {
    return x_57(x_62, ListNthExn(x_59->children, x_61), x_60);
  }
}
Unit remove_layout_node_x_38(const auto &x_58, const auto &x_59, const auto &x_60) { return x_57(x_58, x_59, x_60); }
Unit x_64(const auto &x_65, const auto &x_66, const auto &x_67) {
  return ListMatch(
      x_65,
      [&](const auto &x_70) {
        auto x_71 = Zro(x_67);
        auto x_72 = Zro(x_71);
        auto x_73 = Fst(x_71);
        auto x_74 = Fst(x_67);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1284 = x_72;
        if (x_1284 == "attributes") {
          std::string x_1285 = x_73;
          if (x_1285 == "width") {
            WriteMetric();
            x_66->has_attr_width = true;
            x_66->attr_width = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1285 == "image_height") {
            WriteMetric();
            x_66->has_attr_image_height = true;
            x_66->attr_image_height = Asint64_t(x_74);
            return MakeUnit();
          } else if (x_1285 == "image_width") {
            WriteMetric();
            x_66->has_attr_image_width = true;
            x_66->attr_image_width = Asint64_t(x_74);
            return MakeUnit();
          } else if (x_1285 == "height") {
            WriteMetric();
            x_66->has_attr_height = true;
            x_66->attr_height = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1285 == "viewBox") {
            WriteMetric();
            x_66->has_attr_viewBox = true;
            x_66->attr_viewBox = AsDEString(x_74);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1284 == "properties") {
          std::string x_1286 = x_73;
          if (x_1286 == "width") {
            WriteMetric();
            x_66->has_prop_width = true;
            x_66->prop_width = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1286 == "flex-grow") {
            WriteMetric();
            x_66->has_prop_flex_grow = true;
            x_66->prop_flex_grow = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1286 == "height") {
            WriteMetric();
            x_66->has_prop_height = true;
            x_66->prop_height = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1286 == "display") {
            WriteMetric();
            x_66->has_prop_display = true;
            x_66->prop_display = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1286 == "position") {
            WriteMetric();
            x_66->has_prop_position = true;
            x_66->prop_position = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1286 == "flex-shrink") {
            WriteMetric();
            x_66->has_prop_flex_shrink = true;
            x_66->prop_flex_shrink = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1286 == "flex-direction") {
            WriteMetric();
            x_66->has_prop_flex_direction = true;
            x_66->prop_flex_direction = AsDEString(x_74);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_68, const auto &x_69) { return x_64(x_69, ListNthExn(x_66->children, x_68), x_67); });
}
Unit insert_value_x_36(const auto &x_65, const auto &x_66, const auto &x_67) { return x_64(x_65, x_66, x_67); }
Unit x_75(const auto &x_76, const auto &x_77, const auto &x_78) {
  return ListMatch(
      x_76,
      [&](const auto &x_81) {
        auto x_82 = Zro(x_78);
        auto x_83 = Fst(x_78);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1287 = x_82;
        if (x_1287 == "attributes") {
          std::string x_1288 = x_83;
          if (x_1288 == "width") {
            WriteMetric();
            x_77->has_attr_width = false;
            return MakeUnit();
          } else if (x_1288 == "image_height") {
            WriteMetric();
            x_77->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_1288 == "image_width") {
            WriteMetric();
            x_77->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_1288 == "height") {
            WriteMetric();
            x_77->has_attr_height = false;
            return MakeUnit();
          } else if (x_1288 == "viewBox") {
            WriteMetric();
            x_77->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1287 == "properties") {
          std::string x_1289 = x_83;
          if (x_1289 == "width") {
            WriteMetric();
            x_77->has_prop_width = false;
            return MakeUnit();
          } else if (x_1289 == "flex-grow") {
            WriteMetric();
            x_77->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_1289 == "height") {
            WriteMetric();
            x_77->has_prop_height = false;
            return MakeUnit();
          } else if (x_1289 == "display") {
            WriteMetric();
            x_77->has_prop_display = false;
            return MakeUnit();
          } else if (x_1289 == "position") {
            WriteMetric();
            x_77->has_prop_position = false;
            return MakeUnit();
          } else if (x_1289 == "flex-shrink") {
            WriteMetric();
            x_77->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_1289 == "flex-direction") {
            WriteMetric();
            x_77->has_prop_flex_direction = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_79, const auto &x_80) { return x_75(x_80, ListNthExn(x_77->children, x_79), x_78); });
}
Unit delete_value_x_34(const auto &x_76, const auto &x_77, const auto &x_78) { return x_75(x_76, x_77, x_78); }
Unit x_84(const auto &x_85, const auto &x_86, const auto &x_87) {
  return ListMatch(
      x_85,
      [&](const auto &x_90) {
        auto x_91 = Zro(x_87);
        auto x_92 = Zro(x_91);
        auto x_93 = Fst(x_91);
        auto x_94 = Fst(x_87);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1290 = x_92;
        if (x_1290 == "attributes") {
          std::string x_1291 = x_93;
          if (x_1291 == "width") {
            WriteMetric();
            x_86->has_attr_width = false;
            WriteMetric();
            x_86->has_attr_width = true;
            x_86->attr_width = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1291 == "image_height") {
            WriteMetric();
            x_86->has_attr_image_height = false;
            WriteMetric();
            x_86->has_attr_image_height = true;
            x_86->attr_image_height = Asint64_t(x_94);
            return MakeUnit();
          } else if (x_1291 == "image_width") {
            WriteMetric();
            x_86->has_attr_image_width = false;
            WriteMetric();
            x_86->has_attr_image_width = true;
            x_86->attr_image_width = Asint64_t(x_94);
            return MakeUnit();
          } else if (x_1291 == "height") {
            WriteMetric();
            x_86->has_attr_height = false;
            WriteMetric();
            x_86->has_attr_height = true;
            x_86->attr_height = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1291 == "viewBox") {
            WriteMetric();
            x_86->has_attr_viewBox = false;
            WriteMetric();
            x_86->has_attr_viewBox = true;
            x_86->attr_viewBox = AsDEString(x_94);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1290 == "properties") {
          std::string x_1292 = x_93;
          if (x_1292 == "width") {
            WriteMetric();
            x_86->has_prop_width = false;
            WriteMetric();
            x_86->has_prop_width = true;
            x_86->prop_width = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1292 == "flex-grow") {
            WriteMetric();
            x_86->has_prop_flex_grow = false;
            WriteMetric();
            x_86->has_prop_flex_grow = true;
            x_86->prop_flex_grow = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1292 == "height") {
            WriteMetric();
            x_86->has_prop_height = false;
            WriteMetric();
            x_86->has_prop_height = true;
            x_86->prop_height = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1292 == "display") {
            WriteMetric();
            x_86->has_prop_display = false;
            WriteMetric();
            x_86->has_prop_display = true;
            x_86->prop_display = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1292 == "position") {
            WriteMetric();
            x_86->has_prop_position = false;
            WriteMetric();
            x_86->has_prop_position = true;
            x_86->prop_position = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1292 == "flex-shrink") {
            WriteMetric();
            x_86->has_prop_flex_shrink = false;
            WriteMetric();
            x_86->has_prop_flex_shrink = true;
            x_86->prop_flex_shrink = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1292 == "flex-direction") {
            WriteMetric();
            x_86->has_prop_flex_direction = false;
            WriteMetric();
            x_86->has_prop_flex_direction = true;
            x_86->prop_flex_direction = AsDEString(x_94);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_88, const auto &x_89) { return x_84(x_89, ListNthExn(x_86->children, x_88), x_87); });
}
Unit replace_value_x_32(const auto &x_85, const auto &x_86, const auto &x_87) { return x_84(x_85, x_86, x_87); }
Unit x_95(const auto &x_96, const auto &x_97, const auto &x_98) {
  auto x_99 = ListHeadExn(x_96);
  auto x_100 = ListTailExn(x_96);
  if (ListIsEmpty(x_100)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_97->children, x_99)), node_size_x_4(x_98)));
    auto x_101 = ListSplitN(x_97->children, x_99);
    auto x_102 = Zro(x_101);
    auto x_103 = Fst(x_101);
    auto x_104 = ListHeadExn(x_103);
    auto x_105 = ListTailExn(x_103);
    x_97->children = ListAppend(x_102, x_105);
    OptionMatch(
        x_104->prev, [&](const auto &x_107) { return MakeUnit(); },
        [&](const auto &x_106) {
          x_106->next = ToPath(x_104->next);
          return MakeUnit();
        });
    OptionMatch(
        x_104->next, [&](const auto &x_109) { return MakeUnit(); },
        [&](const auto &x_108) {
          x_108->prev = ToPath(x_104->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_102)) {
      x_97->first = ToPath(ListHead(x_105));
    }
    if (ListIsEmpty(x_105)) {
      x_97->last = ToPath(ListLast(x_102));
    }
    MakeUnit();
    auto x_116 = ListSplitN(x_97->children, x_99);
    auto x_117 = Zro(x_116);
    auto x_118 = Fst(x_116);
    x_97->children = ListAppend(x_117, Cons(x_98, x_118));
    if (ListIsEmpty(x_117)) {
      x_97->first = x_98.get();
    }
    if (ListIsEmpty(x_118)) {
      x_97->last = x_98.get();
    }
    OptionMatch(
        ListLast(x_117),
        [&](const auto &x_120) {
          x_98->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_119) {
          x_98->prev = x_119.get();
          x_119->next = x_98.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_118),
        [&](const auto &x_122) {
          x_98->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_121) {
          x_98->next = x_121.get();
          x_121->prev = x_98.get();
          return MakeUnit();
        });
    x_98->parent = x_97.get();
    MakeUnit();
    MakeUnit();
    MakeUnit();
    return MakeUnit();
  } else {
    return x_95(x_100, ListNthExn(x_97->children, x_99), x_98);
  }
}
Unit replace_node_x_30(const auto &x_96, const auto &x_97, const auto &x_98) { return x_95(x_96, x_97, x_98); }
Unit x_131(const auto &x_132) {
  ListIter2(x_132->children, [&](const auto &x_133, const auto &x_134) {
    x_133->parent = x_132.get();
    x_134->parent = x_132.get();
    x_133->next = x_134.get();
    x_134->prev = x_133.get();
    x_131(x_133);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_132->children),
      [&](const auto &x_136) {
        x_132->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_135) {
        x_132->first = x_135.get();
        x_135->parent = x_132.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_132->children),
      [&](const auto &x_138) {
        x_132->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_137) {
        x_132->last = x_137.get();
        x_137->parent = x_132.get();
        x_131(x_137);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_28(const auto &x_132) { return x_131(x_132); }
Unit x_139(const auto &x_140, const auto &x_141, const auto &x_142) {
  auto x_143 = ListHeadExn(x_140);
  auto x_144 = ListTailExn(x_140);
  if (ListIsEmpty(x_144)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_141->children, x_143)));
    auto x_145 = ListSplitN(x_141->children, x_143);
    auto x_146 = Zro(x_145);
    auto x_147 = Fst(x_145);
    auto x_148 = ListHeadExn(x_147);
    auto x_149 = ListTailExn(x_147);
    x_141->children = ListAppend(x_146, x_149);
    OptionMatch(
        x_148->prev, [&](const auto &x_151) { return MakeUnit(); },
        [&](const auto &x_150) {
          x_150->next = ToPath(x_148->next);
          return MakeUnit();
        });
    OptionMatch(
        x_148->next, [&](const auto &x_153) { return MakeUnit(); },
        [&](const auto &x_152) {
          x_152->prev = ToPath(x_148->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_146)) {
      x_141->first = ToPath(ListHead(x_149));
    }
    if (ListIsEmpty(x_149)) {
      x_141->last = ToPath(ListLast(x_146));
    }
    return MakeUnit();
  } else {
    return x_139(x_144, ListNthExn(x_141->children, x_143), x_142);
  }
}
Unit remove_node_x_26(const auto &x_140, const auto &x_141, const auto &x_142) { return x_139(x_140, x_141, x_142); }
Unit recalculate_x_24(const auto &x_160) {
  eval_stmts_x_16(x_160);
  eval_stmts_x_17(x_160);
  return MakeUnit();
}
Unit x_161(const auto &x_162, const auto &x_163, const auto &x_164) {
  auto x_165 = ListHeadExn(x_162);
  auto x_166 = ListTailExn(x_162);
  if (ListIsEmpty(x_166)) {
    InputChangeMetric(node_size_x_4(x_164));
    auto x_167 = ListSplitN(x_163->children, x_165);
    auto x_168 = Zro(x_167);
    auto x_169 = Fst(x_167);
    x_163->children = ListAppend(x_168, Cons(x_164, x_169));
    if (ListIsEmpty(x_168)) {
      x_163->first = x_164.get();
    }
    if (ListIsEmpty(x_169)) {
      x_163->last = x_164.get();
    }
    OptionMatch(
        ListLast(x_168),
        [&](const auto &x_171) {
          x_164->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_170) {
          x_164->prev = x_170.get();
          x_170->next = x_164.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_169),
        [&](const auto &x_173) {
          x_164->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_172) {
          x_164->next = x_172.get();
          x_172->prev = x_164.get();
          return MakeUnit();
        });
    x_164->parent = x_163.get();
    MakeUnit();
    MakeUnit();
    return MakeUnit();
  } else {
    return x_161(x_166, ListNthExn(x_163->children, x_165), x_164);
  }
}
Unit add_node_x_23(const auto &x_162, const auto &x_163, const auto &x_164) { return x_161(x_162, x_163, x_164); }
Unit x_182(const auto &x_183) {
  ListIter2(x_183->children, [&](const auto &x_184, const auto &x_185) {
    x_184->parent = x_183.get();
    x_185->parent = x_183.get();
    x_184->next = x_185.get();
    x_185->prev = x_184.get();
    x_182(x_184);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_183->children),
      [&](const auto &x_187) {
        x_183->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_186) {
        x_183->first = x_186.get();
        x_186->parent = x_183.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_183->children),
      [&](const auto &x_189) {
        x_183->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_188) {
        x_183->last = x_188.get();
        x_188->parent = x_183.get();
        x_182(x_188);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_21(const auto &x_183) { return x_182(x_183); }
Unit eval_stmts_x_17(const auto &x_190) {
  eval_stmts_x_191(x_190);
  ListIter(x_190->children, [&](const auto &x_192) { return eval_stmts_x_17(x_192); });
  eval_stmts_x_193(x_190);
  return MakeUnit();
}
Unit eval_stmts_x_16(const auto &x_194) {
  eval_stmts_x_195(x_194);
  ListIter(x_194->children, [&](const auto &x_196) { return eval_stmts_x_16(x_196); });
  eval_stmts_x_197(x_194);
  return MakeUnit();
}
Unit x_198(const auto &x_199) {
  ListIter2(x_199->children, [&](const auto &x_200, const auto &x_201) {
    x_200->parent = x_199.get();
    x_201->parent = x_199.get();
    x_200->next = x_201.get();
    x_201->prev = x_200.get();
    x_198(x_200);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_199->children),
      [&](const auto &x_203) {
        x_199->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_202) {
        x_199->first = x_202.get();
        x_202->parent = x_199.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_199->children),
      [&](const auto &x_205) {
        x_199->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_204) {
        x_199->last = x_204.get();
        x_204->parent = x_199.get();
        x_198(x_204);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_199) { return x_198(x_199); }
int64_t x_206(const auto &x_207) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_207->children, [&](const auto &x_208) { return x_206(x_208); }));
}
int64_t node_size_x_4(const auto &x_207) { return x_206(x_207); }
int64_t x_209(const auto &x_210) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_210->children, [&](const auto &x_211) { return x_209(x_211); }));
}
int64_t layout_size_x_3(const auto &x_210) { return x_209(x_210); }
LayoutNode x_212(const auto &x_213) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_213)), [&](const auto &x_214) { return x_212(x_214); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_213) { return x_212(x_213); }
Node x_215(const auto &x_216) {
  return MakeNode(x_216->name, x_216->attr, x_216->prop, x_216->extern_id,
                  ListMap(x_216->children, [&](const auto &x_217) { return x_215(x_217); }));
}
Node node_to_fs_node_x_1(const auto &x_216) { return x_215(x_216); }
Node x_218(const auto &x_219) {
  return MakeNode(JsonToString(JsonMember("name", x_219)), JsonToDict(JsonMember("attributes", x_219)),
                  JsonToDict(JsonMember("properties", x_219)), JsonToInt(JsonMember("id", x_219)),
                  ListMap(JsonToList(JsonMember("children", x_219)), [&](const auto &x_220) { return x_218(x_220); }));
}
Node json_to_node_aux_x_0(const auto &x_219) { return x_218(x_219); }
int main() {
  WithOutFile("espn.out", [&](const auto &x_5) {
    PrintEndline("RUNNING FS_D");
    return WithInFile("command.json", [&](const auto &x_6) {
      auto x_7 = MakeRef(static_cast<int64_t>(0));
      auto x_9 = JsonOfString(InputLine(x_6));
      auto x_10 = JsonOfString(InputLine(x_6));
      auto x_11 = MakeStack();
      PushStack(x_11, x_9);
      PushStack(x_11, x_10);
      Assert(StringEqual(JsonToString(JsonMember("name", x_9)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_10)), "layout_init"));
      auto x_14 = [&]() {
        auto x_12 = json_to_node_aux_x_0(JsonMember("node", x_9));
        x_12->parent = nullptr;
        x_12->prev = nullptr;
        x_12->next = nullptr;
        set_children_relation_x_13(x_12);
        return x_12;
      }();
      auto x_15 = json_to_layout_node_x_2(JsonMember("node", x_10));
      OutputChangeMetric(layout_size_x_3(x_15));
      InputChangeMetric(node_size_x_4(x_14));
      eval_stmts_x_16(x_14);
      eval_stmts_x_17(x_14);
      JsonToChannel(x_5, [&]() {
        auto x_1293 = FreshJson();
        WriteJson(x_1293, "name", "FS_D");
        WriteJson(x_1293, "diff_num", ReadRef(x_7));
        WriteJson(x_1293, "read_count", MetricReadCount());
        WriteJson(x_1293, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1293, "write_count", MetricWriteCount());
        WriteJson(x_1293, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1293, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1293, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1293, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1293, "overhead_time", MetricOverheadTime());
        WriteJson(x_1293, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_1293, "eval_time", MetricEvalCount());
        WriteJson(x_1293, "html", "");
        WriteJson(x_1293, "command", StackToList(x_11));
        return x_1293;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_18) {
        auto x_19 = JsonOfString(x_18);
        PushStack(x_11, x_19);
        std::string x_1295 = JsonToString(JsonMember("name", x_19));
        if (x_1295 == "add") {
          return add_node_x_23(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_22) { return JsonToInt(x_22); }), x_14,
              [&]() {
                auto x_20 = json_to_node_aux_x_0(JsonMember("node", x_19));
                x_20->parent = nullptr;
                x_20->prev = nullptr;
                x_20->next = nullptr;
                set_children_relation_x_21(x_20);
                return x_20;
              }());
        } else if (x_1295 == "recalculate") {
          recalculate_x_24(x_14);
          JsonToChannel(x_5, [&]() {
            auto x_1294 = FreshJson();
            WriteJson(x_1294, "name", "FS_D");
            WriteJson(x_1294, "diff_num", ReadRef(x_7));
            WriteJson(x_1294, "read_count", MetricReadCount());
            WriteJson(x_1294, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1294, "write_count", MetricWriteCount());
            WriteJson(x_1294, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1294, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1294, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1294, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1294, "overhead_time", MetricOverheadTime());
            WriteJson(x_1294, "overhead_l2m", MetricOverheadL2m());
            WriteJson(x_1294, "eval_time", MetricEvalCount());
            WriteJson(x_1294, "html", "");
            WriteJson(x_1294, "command", StackToList(x_11));
            return x_1294;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1295 == "remove") {
          return remove_node_x_26(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_25) { return JsonToInt(x_25); }), x_14,
              MakeUnit());
        } else if (x_1295 == "replace") {
          return replace_node_x_30(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_29) { return JsonToInt(x_29); }), x_14,
              [&]() {
                auto x_27 = json_to_node_aux_x_0(JsonMember("node", x_19));
                x_27->parent = nullptr;
                x_27->prev = nullptr;
                x_27->next = nullptr;
                set_children_relation_x_28(x_27);
                return x_27;
              }());
        } else if (x_1295 == "replace_value") {
          return replace_value_x_32(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_31) { return JsonToInt(x_31); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_19)), JsonToString(JsonMember("key", x_19))),
                       JsonToValue(JsonMember("value", x_19))));
        } else if (x_1295 == "delete_value") {
          return delete_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_19)), JsonToString(JsonMember("key", x_19))));
        } else if (x_1295 == "insert_value") {
          return insert_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_19)), JsonToString(JsonMember("key", x_19))),
                       JsonToValue(JsonMember("value", x_19))));
        } else if (x_1295 == "layout_remove") {
          return remove_layout_node_x_38(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_15,
              MakeUnit());
        } else if (x_1295 == "layout_add") {
          return add_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_19)));
        } else if (x_1295 == "layout_replace") {
          return replace_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_19)));
        } else if (x_1295 == "layout_info_changed") {
          return OutputChangeMetric(static_cast<int64_t>(1));
        } else {
          Panic();
        }
      });
      PrintEndline("INCREMENTAL EVAL OK!");
      MakeUnit();
      return MakeUnit();
    });
  });
}