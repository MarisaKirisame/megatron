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
Unit var_modified_x_473(const auto &x_475);
auto eval_expr_x_470(const auto &x_480);
Unit var_modified_x_468(const auto &x_489);
auto eval_expr_x_465(const auto &x_492);
Unit var_modified_x_463(const auto &x_497);
auto eval_expr_x_460(const auto &x_501);
Unit var_modified_x_458(const auto &x_528);
auto eval_expr_x_455(const auto &x_534);
Unit var_modified_x_453(const auto &x_547);
auto eval_expr_x_450(const auto &x_552);
Unit var_modified_x_448(const auto &x_557);
auto eval_expr_x_445(const auto &x_561);
Unit var_modified_x_443(const auto &x_588);
auto eval_expr_x_440(const auto &x_594);
Unit var_modified_x_438(const auto &x_605);
auto eval_expr_x_435(const auto &x_608);
Unit var_modified_x_433(const auto &x_619);
auto eval_expr_x_430(const auto &x_622);
Unit var_modified_x_428(const auto &x_629);
auto eval_expr_x_425(const auto &x_633);
Unit var_modified_x_423(const auto &x_644);
auto eval_expr_x_420(const auto &x_647);
Unit var_modified_x_418(const auto &x_650);
auto eval_expr_x_415(const auto &x_653);
Unit var_modified_x_409(const auto &x_656);
auto eval_expr_x_406(const auto &x_666);
Unit var_modified_x_404(const auto &x_711);
auto eval_expr_x_401(const auto &x_714);
Unit var_modified_x_399(const auto &x_723);
auto eval_expr_x_396(const auto &x_728);
Unit var_modified_x_394(const auto &x_731);
auto eval_expr_x_391(const auto &x_736);
Unit var_modified_x_389(const auto &x_741);
auto eval_expr_x_386(const auto &x_744);
Unit var_modified_x_384(const auto &x_745);
auto eval_expr_x_381(const auto &x_748);
Unit var_modified_x_379(const auto &x_751);
auto eval_expr_x_376(const auto &x_755);
Unit var_modified_x_374(const auto &x_766);
auto eval_expr_x_371(const auto &x_769);
Unit var_modified_x_369(const auto &x_772);
auto eval_expr_x_366(const auto &x_776);
Unit var_modified_x_364(const auto &x_787);
auto eval_expr_x_361(const auto &x_791);
Unit var_modified_x_359(const auto &x_804);
auto eval_expr_x_356(const auto &x_809);
Unit var_modified_x_354(const auto &x_824);
auto eval_expr_x_351(const auto &x_827);
Unit var_modified_x_349(const auto &x_830);
auto eval_expr_x_346(const auto &x_836);
Unit var_modified_x_344(const auto &x_841);
auto eval_expr_x_341(const auto &x_847);
Unit var_modified_x_339(const auto &x_852);
auto eval_expr_x_336(const auto &x_856);
Unit var_modified_x_334(const auto &x_859);
auto eval_expr_x_331(const auto &x_863);
Unit var_modified_x_329(const auto &x_866);
auto eval_expr_x_326(const auto &x_871);
Unit var_modified_x_324(const auto &x_874);
auto eval_expr_x_321(const auto &x_879);
Unit var_modified_x_317(const auto &x_882);
auto eval_expr_x_314(const auto &x_890);
Unit var_modified_x_312(const auto &x_905);
auto eval_expr_x_309(const auto &x_913);
Unit var_modified_x_307(const auto &x_920);
auto eval_expr_x_304(const auto &x_928);
Unit var_modified_x_302(const auto &x_933);
auto eval_expr_x_299(const auto &x_936);
Unit var_modified_x_297(const auto &x_941);
auto eval_expr_x_294(const auto &x_945);
Unit var_modified_x_292(const auto &x_1024);
auto eval_expr_x_289(const auto &x_1027);
Unit var_modified_x_287(const auto &x_1052);
auto eval_expr_x_284(const auto &x_1056);
Unit var_modified_x_282(const auto &x_1059);
auto eval_expr_x_279(const auto &x_1062);
Unit var_modified_x_277(const auto &x_1067);
auto eval_expr_x_274(const auto &x_1075);
Unit var_modified_x_272(const auto &x_1080);
auto eval_expr_x_269(const auto &x_1088);
Unit var_modified_x_267(const auto &x_1093);
auto eval_expr_x_264(const auto &x_1099);
Unit var_modified_x_262(const auto &x_1106);
auto eval_expr_x_259(const auto &x_1109);
Unit var_modified_x_257(const auto &x_1114);
auto eval_expr_x_254(const auto &x_1118);
Unit var_modified_x_252(const auto &x_1201);
auto eval_expr_x_249(const auto &x_1204);
Unit var_modified_x_247(const auto &x_1207);
auto eval_expr_x_244(const auto &x_1210);
Unit var_modified_x_242(const auto &x_1235);
auto eval_expr_x_239(const auto &x_1238);
Unit var_modified_x_237(const auto &x_1245);
auto eval_expr_x_234(const auto &x_1249);
Unit eval_stmts_x_208(const auto &x_232);
Unit eval_stmts_x_204(const auto &x_319);
Unit eval_stmts_x_200(const auto &x_411);
Unit eval_stmts_x_196(const auto &x_413);
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48);
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55);
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62);
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69);
Unit x_77(const auto &x_78, const auto &x_79, const auto &x_80);
Unit x_86(const auto &x_87, const auto &x_88, const auto &x_89);
Unit x_97(const auto &x_98, const auto &x_99, const auto &x_100);
Unit x_133(const auto &x_134);
Unit x_141(const auto &x_142, const auto &x_143, const auto &x_144);
Unit recalculate_x_26(const auto &x_162);
Unit x_164(const auto &x_165, const auto &x_166, const auto &x_167);
Unit x_185(const auto &x_186);
Unit eval_stmts_x_19(const auto &x_193);
Unit eval_stmts_x_17(const auto &x_201);
Unit x_209(const auto &x_210);
int64_t x_217(const auto &x_218);
int64_t x_220(const auto &x_221);
LayoutNode x_223(const auto &x_224);
Node x_226(const auto &x_227);
Node x_229(const auto &x_230);
Unit var_modified_x_473(const auto &x_475) { return MakeUnit(); }
auto eval_expr_x_470(const auto &x_480) {
  if ((x_480->prev != nullptr) && (!(x_480->prev)->var_line_break)) {
    return max(x_480->var_height_external, (x_480->prev)->var_line_height);
  } else {
    return x_480->var_height_external;
  }
}
Unit var_modified_x_468(const auto &x_489) { return MakeUnit(); }
auto eval_expr_x_465(const auto &x_492) {
  if (eq(x_492->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_492->var_height_internal;
  }
}
Unit var_modified_x_463(const auto &x_497) { return MakeUnit(); }
auto eval_expr_x_460(const auto &x_501) {
  if (x_501->var_intrinsic_height_is_height) {
    return x_501->var_intrinsic_height_internal;
  } else {
    if ((x_501->parent != nullptr) && (x_501->parent)->var_is_flex_column) {
      return plus(x_501->var_intrinsic_height_internal, mult(x_501->var_flex_amount, (x_501->parent)->var_flex_unit));
    } else {
      if (x_501->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_501->var_box_height, divide(x_501->var_height_expr.r.a0, 100.));
      } else {
        return max(x_501->var_box_height, x_501->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_458(const auto &x_528) { return MakeUnit(); }
auto eval_expr_x_455(const auto &x_534) {
  if (x_534->prev != nullptr) {
    if (x_534->var_line_break || (x_534->prev)->var_line_break) {
      return plus((x_534->prev)->var_y, (x_534->prev)->var_line_height);
    } else {
      return (x_534->prev)->var_y;
    }
  } else {
    if (x_534->parent != nullptr) {
      return (x_534->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_453(const auto &x_547) { return MakeUnit(); }
auto eval_expr_x_450(const auto &x_552) {
  if (eq(x_552->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_552->var_width_internal;
  }
}
Unit var_modified_x_448(const auto &x_557) { return MakeUnit(); }
auto eval_expr_x_445(const auto &x_561) {
  if (x_561->var_intrinsic_width_is_width) {
    return x_561->var_intrinsic_width_internal;
  } else {
    if ((x_561->parent != nullptr) && (x_561->parent)->var_is_flex_row) {
      return plus(x_561->var_intrinsic_width_internal, mult(x_561->var_flex_amount, (x_561->parent)->var_flex_unit));
    } else {
      if (x_561->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_561->var_box_width, divide(x_561->var_width_expr.r.a0, 100.));
      } else {
        return max(x_561->var_box_width, x_561->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_443(const auto &x_588) { return MakeUnit(); }
auto eval_expr_x_440(const auto &x_594) {
  if (x_594->prev != nullptr) {
    if (x_594->var_line_break || (x_594->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_594->prev)->var_x, (x_594->prev)->var_width_external);
    }
  } else {
    if (x_594->parent != nullptr) {
      return (x_594->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_438(const auto &x_605) { return MakeUnit(); }
auto eval_expr_x_435(const auto &x_608) {
  if (gt(x_608->var_left_over, 0.)) {
    return divide(x_608->var_left_over, x_608->var_flex_grow_sum);
  } else {
    return divide(x_608->var_left_over, x_608->var_flex_shrink_sum);
  }
}
Unit var_modified_x_433(const auto &x_619) { return MakeUnit(); }
auto eval_expr_x_430(const auto &x_622) {
  if ((x_622->parent != nullptr) && gt((x_622->parent)->var_left_over, 0.)) {
    return x_622->var_flex_grow;
  } else {
    return x_622->var_flex_shrink;
  }
}
Unit var_modified_x_428(const auto &x_629) { return MakeUnit(); }
auto eval_expr_x_425(const auto &x_633) {
  if (x_633->var_is_flex_row) {
    return minus(x_633->var_box_width, (x_633->last != nullptr) ? ((x_633->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_633->var_box_height, (x_633->last != nullptr) ? ((x_633->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_423(const auto &x_644) { return MakeUnit(); }
auto eval_expr_x_420(const auto &x_647) {
  if (x_647->parent != nullptr) {
    return (x_647->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_418(const auto &x_650) { return MakeUnit(); }
auto eval_expr_x_415(const auto &x_653) {
  if (x_653->parent != nullptr) {
    return (x_653->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_409(const auto &x_656) { return MakeUnit(); }
auto eval_expr_x_406(const auto &x_666) {
  if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_666->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_666->parent != nullptr) &&
          (eq((x_666->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_666->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_666->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_666->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_666->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_666->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
}
Unit var_modified_x_404(const auto &x_711) { return MakeUnit(); }
auto eval_expr_x_401(const auto &x_714) {
  return (((!(x_714->parent != nullptr)) || (x_714->parent)->var_visible) &&
          (neq(x_714->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_714->var_inside_svg) && (!x_714->var_disabled))));
}
Unit var_modified_x_399(const auto &x_723) { return MakeUnit(); }
auto eval_expr_x_396(const auto &x_728) {
  if (eq(x_728->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_728->parent != nullptr) && (x_728->parent)->var_disabled);
  }
}
Unit var_modified_x_394(const auto &x_731) { return MakeUnit(); }
auto eval_expr_x_391(const auto &x_736) {
  return ((x_736->parent != nullptr) && ((x_736->parent)->var_is_svg_block || (x_736->parent)->var_inside_svg));
}
Unit var_modified_x_389(const auto &x_741) { return MakeUnit(); }
auto eval_expr_x_386(const auto &x_744) { return eq(x_744->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_384(const auto &x_745) { return MakeUnit(); }
auto eval_expr_x_381(const auto &x_748) {
  return neq(x_748->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_379(const auto &x_751) { return MakeUnit(); }
auto eval_expr_x_376(const auto &x_755) {
  if (!x_755->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_755->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_755->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_755->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_374(const auto &x_766) { return MakeUnit(); }
auto eval_expr_x_371(const auto &x_769) {
  return neq(x_769->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_369(const auto &x_772) { return MakeUnit(); }
auto eval_expr_x_366(const auto &x_776) {
  if (!x_776->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_776->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_776->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_776->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_364(const auto &x_787) { return MakeUnit(); }
auto eval_expr_x_361(const auto &x_791) {
  if ((x_791->parent != nullptr) &&
      (eq((x_791->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_791->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_791->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_791->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_359(const auto &x_804) { return MakeUnit(); }
auto eval_expr_x_356(const auto &x_809) {
  if ((x_809->parent != nullptr) &&
      (eq((x_809->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_809->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_809->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_809->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_354(const auto &x_824) { return MakeUnit(); }
auto eval_expr_x_351(const auto &x_827) {
  if (x_827->has_prop_flex_direction) {
    return x_827->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_349(const auto &x_830) { return MakeUnit(); }
auto eval_expr_x_346(const auto &x_836) {
  return plus((x_836->prev != nullptr) ? ((x_836->prev)->var_flex_shrink_sum) : (0.), x_836->var_flex_shrink);
}
Unit var_modified_x_344(const auto &x_841) { return MakeUnit(); }
auto eval_expr_x_341(const auto &x_847) {
  return plus((x_847->prev != nullptr) ? ((x_847->prev)->var_flex_grow_sum) : (0.), x_847->var_flex_grow);
}
Unit var_modified_x_339(const auto &x_852) { return MakeUnit(); }
auto eval_expr_x_336(const auto &x_856) {
  if (x_856->has_prop_flex_shrink) {
    return (x_856->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_334(const auto &x_859) { return MakeUnit(); }
auto eval_expr_x_331(const auto &x_863) {
  if (x_863->has_prop_flex_grow) {
    return (x_863->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_329(const auto &x_866) { return MakeUnit(); }
auto eval_expr_x_326(const auto &x_871) {
  if (x_871->has_prop_position) {
    return x_871->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_324(const auto &x_874) { return MakeUnit(); }
auto eval_expr_x_321(const auto &x_879) {
  if (x_879->has_prop_display) {
    return x_879->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_317(const auto &x_882) { return MakeUnit(); }
auto eval_expr_x_314(const auto &x_890) {
  if (x_890->prev != nullptr) {
    if (x_890->var_line_break) {
      return plus((x_890->prev)->var_finished_intrinsic_height_sum,
                  plus((x_890->prev)->var_intrinsic_current_line_height, x_890->var_intrinsic_height_external));
    } else {
      return (x_890->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_890->var_line_break) {
      return x_890->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_312(const auto &x_905) { return MakeUnit(); }
auto eval_expr_x_309(const auto &x_913) {
  if (x_913->var_line_break) {
    return 0.;
  } else {
    return max(x_913->var_intrinsic_height_external,
               (x_913->prev != nullptr) ? ((x_913->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_307(const auto &x_920) { return MakeUnit(); }
auto eval_expr_x_304(const auto &x_928) {
  return plus((x_928->prev != nullptr) ? ((x_928->prev)->var_intrinsic_height_sum) : (0.),
              x_928->var_intrinsic_height_external);
}
Unit var_modified_x_302(const auto &x_933) { return MakeUnit(); }
auto eval_expr_x_299(const auto &x_936) {
  if (eq(x_936->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_936->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_297(const auto &x_941) { return MakeUnit(); }
auto eval_expr_x_294(const auto &x_945) {
  if (eq(x_945->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_945->var_inside_svg) {
      return 0.;
    } else {
      if (x_945->var_disabled) {
        return 0.;
      } else {
        if (neq(x_945->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_945->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_945->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_945->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_945->var_height_expr.r.a0;
          } else {
            if (x_945->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_945->var_height_expr.r.a0;
            } else {
              return x_945->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_945->var_children_intrinsic_height,
              (eq(x_945->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_945->var_is_default_case)
                         ? (0.)
                         : ((eq(x_945->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                             eq(x_945->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                ? (0.)
                                : ((eq(x_945->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_945->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_945->var_has_height_attr &&
                                                  (x_945->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_945->var_height_attr_expr.r.a0)
                                                     : ((x_945->has_attr_viewBox)
                                                            ? (x_945->attr_viewBox.r.a3)
                                                            : (mult((x_945->attr_viewBox.r.a3),
                                                                    divide(x_945->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_945->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_945->var_has_height_attr)
                                                            ? (x_945->var_height_attr_expr.r.a0)
                                                            : ((x_945->has_attr_image_height &&
                                                                (!x_945->var_has_width_attr))
                                                                   ? (int_to_float(x_945->attr_image_height))
                                                                   : ((neq(x_945->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult((x_945->var_width_attr_expr.r.a0),
                                                                                  divide(int_to_float(
                                                                                             x_945->attr_image_height),
                                                                                         int_to_float(
                                                                                             x_945->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_945->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_945->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_292(const auto &x_1024) { return MakeUnit(); }
auto eval_expr_x_289(const auto &x_1027) {
  if (eq(x_1027->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1027->var_inside_svg || x_1027->var_disabled)) {
    return true;
  } else {
    if ((x_1027->parent != nullptr) && (x_1027->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1027->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1027->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1027->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1027->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1027->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_287(const auto &x_1052) { return MakeUnit(); }
auto eval_expr_x_284(const auto &x_1056) {
  if (x_1056->has_prop_height) {
    return x_1056->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_282(const auto &x_1059) { return MakeUnit(); }
auto eval_expr_x_279(const auto &x_1062) {
  if (x_1062->last != nullptr) {
    return plus((x_1062->last)->var_finished_intrinsic_height_sum, (x_1062->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_277(const auto &x_1067) { return MakeUnit(); }
auto eval_expr_x_274(const auto &x_1075) {
  return plus((x_1075->prev != nullptr) ? ((x_1075->prev)->var_intrinsic_width_sum) : (0.),
              x_1075->var_intrinsic_width_external);
}
Unit var_modified_x_272(const auto &x_1080) { return MakeUnit(); }
auto eval_expr_x_269(const auto &x_1088) {
  return max(x_1088->var_intrinsic_current_line_width,
             (x_1088->prev != nullptr) ? ((x_1088->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_267(const auto &x_1093) { return MakeUnit(); }
auto eval_expr_x_264(const auto &x_1099) {
  return plus(x_1099->var_intrinsic_width_external,
              ((x_1099->prev != nullptr) && (!(x_1099->prev)->var_line_break))
                  ? ((x_1099->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_262(const auto &x_1106) { return MakeUnit(); }
auto eval_expr_x_259(const auto &x_1109) {
  if (eq(x_1109->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1109->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_257(const auto &x_1114) { return MakeUnit(); }
auto eval_expr_x_254(const auto &x_1118) {
  if (eq(x_1118->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1118->var_inside_svg) {
      return 0.;
    } else {
      if (x_1118->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1118->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1118->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1118->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1118->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1118->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1118->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1118->var_width_expr.r.a0;
          } else {
            return x_1118->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1118->var_children_intrinsic_width,
              (eq(x_1118->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1118->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1118->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                             eq(x_1118->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                ? (0.)
                                : ((eq(x_1118->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1118->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1118->var_has_width_attr &&
                                                  (x_1118->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1118->var_width_attr_expr.r.a0)
                                                     : (((!x_1118->var_has_width_attr) && x_1118->has_attr_viewBox)
                                                            ? (x_1118->attr_viewBox.r.a2)
                                                            : (mult((x_1118->attr_viewBox.r.a2),
                                                                    divide(x_1118->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1118->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1118->var_has_width_attr)
                                                            ? (x_1118->var_width_attr_expr.r.a0)
                                                            : ((x_1118->has_attr_image_width &&
                                                                (!x_1118->var_has_height_attr))
                                                                   ? (int_to_float(x_1118->attr_image_width))
                                                                   : ((neq(x_1118->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1118->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1118->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1118->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1118->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1118->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_252(const auto &x_1201) { return MakeUnit(); }
auto eval_expr_x_249(const auto &x_1204) {
  if (x_1204->last != nullptr) {
    return (x_1204->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_247(const auto &x_1207) { return MakeUnit(); }
auto eval_expr_x_244(const auto &x_1210) {
  if (eq(x_1210->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1210->var_inside_svg || x_1210->var_disabled)) {
    return true;
  } else {
    if ((x_1210->parent != nullptr) && (x_1210->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1210->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1210->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1210->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1210->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1210->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_242(const auto &x_1235) { return MakeUnit(); }
auto eval_expr_x_239(const auto &x_1238) {
  if (eq(x_1238->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1238->var_inside_svg) {
      return true;
    } else {
      if (x_1238->var_disabled) {
        return true;
      } else {if ( eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_html)) || eq(x_1238->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_237(const auto &x_1245) { return MakeUnit(); }
auto eval_expr_x_234(const auto &x_1249) {
  if (x_1249->has_prop_width) {
    return x_1249->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_208(const auto &x_232) {
  return RecordEval([&](const auto &x_233) {
    WriteMetric();
    auto x_235 = eval_expr_x_234(x_232);
    if (x_232->has_var_width_expr) {
      if (!EqualValue(x_232->var_width_expr, x_235)) {
        var_modified_x_237(x_232);
      }
    }
    x_232->has_var_width_expr = true;
    x_232->var_width_expr = AsDEString(x_235);
    WriteMetric();
    auto x_240 = eval_expr_x_239(x_232);
    if (x_232->has_var_is_default_case) {
      if (!EqualValue(x_232->var_is_default_case, x_240)) {
        var_modified_x_242(x_232);
      }
    }
    x_232->has_var_is_default_case = true;
    x_232->var_is_default_case = Asbool(x_240);
    WriteMetric();
    auto x_245 = eval_expr_x_244(x_232);
    if (x_232->has_var_intrinsic_width_is_width) {
      if (!EqualValue(x_232->var_intrinsic_width_is_width, x_245)) {
        var_modified_x_247(x_232);
      }
    }
    x_232->has_var_intrinsic_width_is_width = true;
    x_232->var_intrinsic_width_is_width = Asbool(x_245);
    WriteMetric();
    auto x_250 = eval_expr_x_249(x_232);
    if (x_232->has_var_children_intrinsic_width) {
      if (!EqualValue(x_232->var_children_intrinsic_width, x_250)) {
        var_modified_x_252(x_232);
      }
    }
    x_232->has_var_children_intrinsic_width = true;
    x_232->var_children_intrinsic_width = Asdouble(x_250);
    WriteMetric();
    auto x_255 = eval_expr_x_254(x_232);
    if (x_232->has_var_intrinsic_width_internal) {
      if (!EqualValue(x_232->var_intrinsic_width_internal, x_255)) {
        var_modified_x_257(x_232);
      }
    }
    x_232->has_var_intrinsic_width_internal = true;
    x_232->var_intrinsic_width_internal = Asdouble(x_255);
    WriteMetric();
    auto x_260 = eval_expr_x_259(x_232);
    if (x_232->has_var_intrinsic_width_external) {
      if (!EqualValue(x_232->var_intrinsic_width_external, x_260)) {
        var_modified_x_262(x_232);
      }
    }
    x_232->has_var_intrinsic_width_external = true;
    x_232->var_intrinsic_width_external = Asdouble(x_260);
    WriteMetric();
    auto x_265 = eval_expr_x_264(x_232);
    if (x_232->has_var_intrinsic_current_line_width) {
      if (!EqualValue(x_232->var_intrinsic_current_line_width, x_265)) {
        var_modified_x_267(x_232);
      }
    }
    x_232->has_var_intrinsic_current_line_width = true;
    x_232->var_intrinsic_current_line_width = Asdouble(x_265);
    WriteMetric();
    auto x_270 = eval_expr_x_269(x_232);
    if (x_232->has_var_intrinsic_width_max) {
      if (!EqualValue(x_232->var_intrinsic_width_max, x_270)) {
        var_modified_x_272(x_232);
      }
    }
    x_232->has_var_intrinsic_width_max = true;
    x_232->var_intrinsic_width_max = Asdouble(x_270);
    WriteMetric();
    auto x_275 = eval_expr_x_274(x_232);
    if (x_232->has_var_intrinsic_width_sum) {
      if (!EqualValue(x_232->var_intrinsic_width_sum, x_275)) {
        var_modified_x_277(x_232);
      }
    }
    x_232->has_var_intrinsic_width_sum = true;
    x_232->var_intrinsic_width_sum = Asdouble(x_275);
    WriteMetric();
    auto x_280 = eval_expr_x_279(x_232);
    if (x_232->has_var_children_intrinsic_height) {
      if (!EqualValue(x_232->var_children_intrinsic_height, x_280)) {
        var_modified_x_282(x_232);
      }
    }
    x_232->has_var_children_intrinsic_height = true;
    x_232->var_children_intrinsic_height = Asdouble(x_280);
    WriteMetric();
    auto x_285 = eval_expr_x_284(x_232);
    if (x_232->has_var_height_expr) {
      if (!EqualValue(x_232->var_height_expr, x_285)) {
        var_modified_x_287(x_232);
      }
    }
    x_232->has_var_height_expr = true;
    x_232->var_height_expr = AsDEString(x_285);
    WriteMetric();
    auto x_290 = eval_expr_x_289(x_232);
    if (x_232->has_var_intrinsic_height_is_height) {
      if (!EqualValue(x_232->var_intrinsic_height_is_height, x_290)) {
        var_modified_x_292(x_232);
      }
    }
    x_232->has_var_intrinsic_height_is_height = true;
    x_232->var_intrinsic_height_is_height = Asbool(x_290);
    WriteMetric();
    auto x_295 = eval_expr_x_294(x_232);
    if (x_232->has_var_intrinsic_height_internal) {
      if (!EqualValue(x_232->var_intrinsic_height_internal, x_295)) {
        var_modified_x_297(x_232);
      }
    }
    x_232->has_var_intrinsic_height_internal = true;
    x_232->var_intrinsic_height_internal = Asdouble(x_295);
    WriteMetric();
    auto x_300 = eval_expr_x_299(x_232);
    if (x_232->has_var_intrinsic_height_external) {
      if (!EqualValue(x_232->var_intrinsic_height_external, x_300)) {
        var_modified_x_302(x_232);
      }
    }
    x_232->has_var_intrinsic_height_external = true;
    x_232->var_intrinsic_height_external = Asdouble(x_300);
    WriteMetric();
    auto x_305 = eval_expr_x_304(x_232);
    if (x_232->has_var_intrinsic_height_sum) {
      if (!EqualValue(x_232->var_intrinsic_height_sum, x_305)) {
        var_modified_x_307(x_232);
      }
    }
    x_232->has_var_intrinsic_height_sum = true;
    x_232->var_intrinsic_height_sum = Asdouble(x_305);
    WriteMetric();
    auto x_310 = eval_expr_x_309(x_232);
    if (x_232->has_var_intrinsic_current_line_height) {
      if (!EqualValue(x_232->var_intrinsic_current_line_height, x_310)) {
        var_modified_x_312(x_232);
      }
    }
    x_232->has_var_intrinsic_current_line_height = true;
    x_232->var_intrinsic_current_line_height = Asdouble(x_310);
    WriteMetric();
    auto x_315 = eval_expr_x_314(x_232);
    if (x_232->has_var_finished_intrinsic_height_sum) {
      if (!EqualValue(x_232->var_finished_intrinsic_height_sum, x_315)) {
        var_modified_x_317(x_232);
      }
    }
    x_232->has_var_finished_intrinsic_height_sum = true;
    x_232->var_finished_intrinsic_height_sum = Asdouble(x_315);
    return MakeUnit();
  });
}
Unit eval_stmts_x_204(const auto &x_319) {
  return RecordEval([&](const auto &x_320) {
    WriteMetric();
    auto x_322 = eval_expr_x_321(x_319);
    if (x_319->has_var_display) {
      if (!EqualValue(x_319->var_display, x_322)) {
        var_modified_x_324(x_319);
      }
    }
    x_319->has_var_display = true;
    x_319->var_display = AsDEString(x_322);
    WriteMetric();
    auto x_327 = eval_expr_x_326(x_319);
    if (x_319->has_var_position) {
      if (!EqualValue(x_319->var_position, x_327)) {
        var_modified_x_329(x_319);
      }
    }
    x_319->has_var_position = true;
    x_319->var_position = AsDEString(x_327);
    WriteMetric();
    auto x_332 = eval_expr_x_331(x_319);
    if (x_319->has_var_flex_grow) {
      if (!EqualValue(x_319->var_flex_grow, x_332)) {
        var_modified_x_334(x_319);
      }
    }
    x_319->has_var_flex_grow = true;
    x_319->var_flex_grow = Asdouble(x_332);
    WriteMetric();
    auto x_337 = eval_expr_x_336(x_319);
    if (x_319->has_var_flex_shrink) {
      if (!EqualValue(x_319->var_flex_shrink, x_337)) {
        var_modified_x_339(x_319);
      }
    }
    x_319->has_var_flex_shrink = true;
    x_319->var_flex_shrink = Asdouble(x_337);
    WriteMetric();
    auto x_342 = eval_expr_x_341(x_319);
    if (x_319->has_var_flex_grow_sum) {
      if (!EqualValue(x_319->var_flex_grow_sum, x_342)) {
        var_modified_x_344(x_319);
      }
    }
    x_319->has_var_flex_grow_sum = true;
    x_319->var_flex_grow_sum = Asdouble(x_342);
    WriteMetric();
    auto x_347 = eval_expr_x_346(x_319);
    if (x_319->has_var_flex_shrink_sum) {
      if (!EqualValue(x_319->var_flex_shrink_sum, x_347)) {
        var_modified_x_349(x_319);
      }
    }
    x_319->has_var_flex_shrink_sum = true;
    x_319->var_flex_shrink_sum = Asdouble(x_347);
    WriteMetric();
    auto x_352 = eval_expr_x_351(x_319);
    if (x_319->has_var_flex_direction) {
      if (!EqualValue(x_319->var_flex_direction, x_352)) {
        var_modified_x_354(x_319);
      }
    }
    x_319->has_var_flex_direction = true;
    x_319->var_flex_direction = AsDEString(x_352);
    WriteMetric();
    auto x_357 = eval_expr_x_356(x_319);
    if (x_319->has_var_is_flex_row) {
      if (!EqualValue(x_319->var_is_flex_row, x_357)) {
        var_modified_x_359(x_319);
      }
    }
    x_319->has_var_is_flex_row = true;
    x_319->var_is_flex_row = Asbool(x_357);
    WriteMetric();
    auto x_362 = eval_expr_x_361(x_319);
    if (x_319->has_var_is_flex_column) {
      if (!EqualValue(x_319->var_is_flex_column, x_362)) {
        var_modified_x_364(x_319);
      }
    }
    x_319->has_var_is_flex_column = true;
    x_319->var_is_flex_column = Asbool(x_362);
    WriteMetric();
    auto x_367 = eval_expr_x_366(x_319);
    if (x_319->has_var_width_attr_expr) {
      if (!EqualValue(x_319->var_width_attr_expr, x_367)) {
        var_modified_x_369(x_319);
      }
    }
    x_319->has_var_width_attr_expr = true;
    x_319->var_width_attr_expr = AsDEString(x_367);
    WriteMetric();
    auto x_372 = eval_expr_x_371(x_319);
    if (x_319->has_var_has_width_attr) {
      if (!EqualValue(x_319->var_has_width_attr, x_372)) {
        var_modified_x_374(x_319);
      }
    }
    x_319->has_var_has_width_attr = true;
    x_319->var_has_width_attr = Asbool(x_372);
    WriteMetric();
    auto x_377 = eval_expr_x_376(x_319);
    if (x_319->has_var_height_attr_expr) {
      if (!EqualValue(x_319->var_height_attr_expr, x_377)) {
        var_modified_x_379(x_319);
      }
    }
    x_319->has_var_height_attr_expr = true;
    x_319->var_height_attr_expr = AsDEString(x_377);
    WriteMetric();
    auto x_382 = eval_expr_x_381(x_319);
    if (x_319->has_var_has_height_attr) {
      if (!EqualValue(x_319->var_has_height_attr, x_382)) {
        var_modified_x_384(x_319);
      }
    }
    x_319->has_var_has_height_attr = true;
    x_319->var_has_height_attr = Asbool(x_382);
    WriteMetric();
    auto x_387 = eval_expr_x_386(x_319);
    if (x_319->has_var_is_svg_block) {
      if (!EqualValue(x_319->var_is_svg_block, x_387)) {
        var_modified_x_389(x_319);
      }
    }
    x_319->has_var_is_svg_block = true;
    x_319->var_is_svg_block = Asbool(x_387);
    WriteMetric();
    auto x_392 = eval_expr_x_391(x_319);
    if (x_319->has_var_inside_svg) {
      if (!EqualValue(x_319->var_inside_svg, x_392)) {
        var_modified_x_394(x_319);
      }
    }
    x_319->has_var_inside_svg = true;
    x_319->var_inside_svg = Asbool(x_392);
    WriteMetric();
    auto x_397 = eval_expr_x_396(x_319);
    if (x_319->has_var_disabled) {
      if (!EqualValue(x_319->var_disabled, x_397)) {
        var_modified_x_399(x_319);
      }
    }
    x_319->has_var_disabled = true;
    x_319->var_disabled = Asbool(x_397);
    WriteMetric();
    auto x_402 = eval_expr_x_401(x_319);
    if (x_319->has_var_visible) {
      if (!EqualValue(x_319->var_visible, x_402)) {
        var_modified_x_404(x_319);
      }
    }
    x_319->has_var_visible = true;
    x_319->var_visible = Asbool(x_402);
    WriteMetric();
    auto x_407 = eval_expr_x_406(x_319);
    if (x_319->has_var_line_break) {
      if (!EqualValue(x_319->var_line_break, x_407)) {
        var_modified_x_409(x_319);
      }
    }
    x_319->has_var_line_break = true;
    x_319->var_line_break = Asbool(x_407);
    return MakeUnit();
  });
}
Unit eval_stmts_x_200(const auto &x_411) {
  return RecordEval([&](const auto &x_412) { return MakeUnit(); });
}
Unit eval_stmts_x_196(const auto &x_413) {
  return RecordEval([&](const auto &x_414) {
    WriteMetric();
    auto x_416 = eval_expr_x_415(x_413);
    if (x_413->has_var_box_width) {
      if (!EqualValue(x_413->var_box_width, x_416)) {
        var_modified_x_418(x_413);
      }
    }
    x_413->has_var_box_width = true;
    x_413->var_box_width = Asdouble(x_416);
    WriteMetric();
    auto x_421 = eval_expr_x_420(x_413);
    if (x_413->has_var_box_height) {
      if (!EqualValue(x_413->var_box_height, x_421)) {
        var_modified_x_423(x_413);
      }
    }
    x_413->has_var_box_height = true;
    x_413->var_box_height = Asdouble(x_421);
    WriteMetric();
    auto x_426 = eval_expr_x_425(x_413);
    if (x_413->has_var_left_over) {
      if (!EqualValue(x_413->var_left_over, x_426)) {
        var_modified_x_428(x_413);
      }
    }
    x_413->has_var_left_over = true;
    x_413->var_left_over = Asdouble(x_426);
    WriteMetric();
    auto x_431 = eval_expr_x_430(x_413);
    if (x_413->has_var_flex_amount) {
      if (!EqualValue(x_413->var_flex_amount, x_431)) {
        var_modified_x_433(x_413);
      }
    }
    x_413->has_var_flex_amount = true;
    x_413->var_flex_amount = Asdouble(x_431);
    WriteMetric();
    auto x_436 = eval_expr_x_435(x_413);
    if (x_413->has_var_flex_unit) {
      if (!EqualValue(x_413->var_flex_unit, x_436)) {
        var_modified_x_438(x_413);
      }
    }
    x_413->has_var_flex_unit = true;
    x_413->var_flex_unit = Asdouble(x_436);
    WriteMetric();
    auto x_441 = eval_expr_x_440(x_413);
    if (x_413->has_var_x) {
      if (!EqualValue(x_413->var_x, x_441)) {
        var_modified_x_443(x_413);
      }
    }
    x_413->has_var_x = true;
    x_413->var_x = Asdouble(x_441);
    WriteMetric();
    auto x_446 = eval_expr_x_445(x_413);
    if (x_413->has_var_width_internal) {
      if (!EqualValue(x_413->var_width_internal, x_446)) {
        var_modified_x_448(x_413);
      }
    }
    x_413->has_var_width_internal = true;
    x_413->var_width_internal = Asdouble(x_446);
    WriteMetric();
    auto x_451 = eval_expr_x_450(x_413);
    if (x_413->has_var_width_external) {
      if (!EqualValue(x_413->var_width_external, x_451)) {
        var_modified_x_453(x_413);
      }
    }
    x_413->has_var_width_external = true;
    x_413->var_width_external = Asdouble(x_451);
    WriteMetric();
    auto x_456 = eval_expr_x_455(x_413);
    if (x_413->has_var_y) {
      if (!EqualValue(x_413->var_y, x_456)) {
        var_modified_x_458(x_413);
      }
    }
    x_413->has_var_y = true;
    x_413->var_y = Asdouble(x_456);
    WriteMetric();
    auto x_461 = eval_expr_x_460(x_413);
    if (x_413->has_var_height_internal) {
      if (!EqualValue(x_413->var_height_internal, x_461)) {
        var_modified_x_463(x_413);
      }
    }
    x_413->has_var_height_internal = true;
    x_413->var_height_internal = Asdouble(x_461);
    WriteMetric();
    auto x_466 = eval_expr_x_465(x_413);
    if (x_413->has_var_height_external) {
      if (!EqualValue(x_413->var_height_external, x_466)) {
        var_modified_x_468(x_413);
      }
    }
    x_413->has_var_height_external = true;
    x_413->var_height_external = Asdouble(x_466);
    WriteMetric();
    auto x_471 = eval_expr_x_470(x_413);
    if (x_413->has_var_line_height) {
      if (!EqualValue(x_413->var_line_height, x_471)) {
        var_modified_x_473(x_413);
      }
    }
    x_413->has_var_line_height = true;
    x_413->var_line_height = Asdouble(x_471);
    return MakeUnit();
  });
}
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48) {
  auto x_49 = ListHeadExn(x_46);
  auto x_50 = ListTailExn(x_46);
  if (ListIsEmpty(x_50)) {
    auto x_51 = ListSplitN(x_47->children, x_49);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_47->children, x_49)), layout_size_x_3(x_48)));
    x_47->children = ListAppend(Zro(x_51), Cons(x_48, ListTailExn(Fst(x_51))));
    return MakeUnit();
  } else {
    return x_45(x_50, ListNthExn(x_47->children, x_49), x_48);
  }
}
Unit replace_layout_node_x_44(const auto &x_46, const auto &x_47, const auto &x_48) { return x_45(x_46, x_47, x_48); }
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55) {
  auto x_56 = ListHeadExn(x_53);
  auto x_57 = ListTailExn(x_53);
  if (ListIsEmpty(x_57)) {
    OutputChangeMetric(layout_size_x_3(x_55));
    auto x_58 = ListSplitN(x_54->children, x_56);
    x_54->children = ListAppend(Zro(x_58), Cons(x_55, Fst(x_58)));
    return MakeUnit();
  } else {
    return x_52(x_57, ListNthExn(x_54->children, x_56), x_55);
  }
}
Unit add_layout_node_x_42(const auto &x_53, const auto &x_54, const auto &x_55) { return x_52(x_53, x_54, x_55); }
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62) {
  auto x_63 = ListHeadExn(x_60);
  auto x_64 = ListTailExn(x_60);
  if (ListIsEmpty(x_64)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_61->children, x_63)));
    auto x_65 = ListSplitN(x_61->children, x_63);
    x_61->children = ListAppend(Zro(x_65), ListTailExn(Fst(x_65)));
    return MakeUnit();
  } else {
    return x_59(x_64, ListNthExn(x_61->children, x_63), x_62);
  }
}
Unit remove_layout_node_x_40(const auto &x_60, const auto &x_61, const auto &x_62) { return x_59(x_60, x_61, x_62); }
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69) {
  return ListMatch(
      x_67,
      [&](const auto &x_72) {
        auto x_73 = Zro(x_69);
        auto x_74 = Zro(x_73);
        auto x_75 = Fst(x_73);
        auto x_76 = Fst(x_69);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1252 = x_74;
        if (x_1252 == "attributes") {
          std::string x_1253 = x_75;
          if (x_1253 == "width") {
            WriteMetric();
            x_68->has_attr_width = true;
            x_68->attr_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1253 == "image_height") {
            WriteMetric();
            x_68->has_attr_image_height = true;
            x_68->attr_image_height = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1253 == "image_width") {
            WriteMetric();
            x_68->has_attr_image_width = true;
            x_68->attr_image_width = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1253 == "height") {
            WriteMetric();
            x_68->has_attr_height = true;
            x_68->attr_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1253 == "viewBox") {
            WriteMetric();
            x_68->has_attr_viewBox = true;
            x_68->attr_viewBox = AsDEString(x_76);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1252 == "properties") {
          std::string x_1254 = x_75;
          if (x_1254 == "width") {
            WriteMetric();
            x_68->has_prop_width = true;
            x_68->prop_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1254 == "flex-grow") {
            WriteMetric();
            x_68->has_prop_flex_grow = true;
            x_68->prop_flex_grow = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1254 == "height") {
            WriteMetric();
            x_68->has_prop_height = true;
            x_68->prop_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1254 == "display") {
            WriteMetric();
            x_68->has_prop_display = true;
            x_68->prop_display = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1254 == "position") {
            WriteMetric();
            x_68->has_prop_position = true;
            x_68->prop_position = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1254 == "flex-shrink") {
            WriteMetric();
            x_68->has_prop_flex_shrink = true;
            x_68->prop_flex_shrink = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1254 == "flex-direction") {
            WriteMetric();
            x_68->has_prop_flex_direction = true;
            x_68->prop_flex_direction = AsDEString(x_76);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_70, const auto &x_71) { return x_66(x_71, ListNthExn(x_68->children, x_70), x_69); });
}
Unit insert_value_x_38(const auto &x_67, const auto &x_68, const auto &x_69) { return x_66(x_67, x_68, x_69); }
Unit x_77(const auto &x_78, const auto &x_79, const auto &x_80) {
  return ListMatch(
      x_78,
      [&](const auto &x_83) {
        auto x_84 = Zro(x_80);
        auto x_85 = Fst(x_80);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1255 = x_84;
        if (x_1255 == "attributes") {
          std::string x_1256 = x_85;
          if (x_1256 == "width") {
            WriteMetric();
            x_79->has_attr_width = false;
            return MakeUnit();
          } else if (x_1256 == "image_height") {
            WriteMetric();
            x_79->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_1256 == "image_width") {
            WriteMetric();
            x_79->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_1256 == "height") {
            WriteMetric();
            x_79->has_attr_height = false;
            return MakeUnit();
          } else if (x_1256 == "viewBox") {
            WriteMetric();
            x_79->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1255 == "properties") {
          std::string x_1257 = x_85;
          if (x_1257 == "width") {
            WriteMetric();
            x_79->has_prop_width = false;
            return MakeUnit();
          } else if (x_1257 == "flex-grow") {
            WriteMetric();
            x_79->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_1257 == "height") {
            WriteMetric();
            x_79->has_prop_height = false;
            return MakeUnit();
          } else if (x_1257 == "display") {
            WriteMetric();
            x_79->has_prop_display = false;
            return MakeUnit();
          } else if (x_1257 == "position") {
            WriteMetric();
            x_79->has_prop_position = false;
            return MakeUnit();
          } else if (x_1257 == "flex-shrink") {
            WriteMetric();
            x_79->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_1257 == "flex-direction") {
            WriteMetric();
            x_79->has_prop_flex_direction = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_81, const auto &x_82) { return x_77(x_82, ListNthExn(x_79->children, x_81), x_80); });
}
Unit delete_value_x_36(const auto &x_78, const auto &x_79, const auto &x_80) { return x_77(x_78, x_79, x_80); }
Unit x_86(const auto &x_87, const auto &x_88, const auto &x_89) {
  return ListMatch(
      x_87,
      [&](const auto &x_92) {
        auto x_93 = Zro(x_89);
        auto x_94 = Zro(x_93);
        auto x_95 = Fst(x_93);
        auto x_96 = Fst(x_89);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1258 = x_94;
        if (x_1258 == "attributes") {
          std::string x_1259 = x_95;
          if (x_1259 == "width") {
            WriteMetric();
            x_88->has_attr_width = false;
            WriteMetric();
            x_88->has_attr_width = true;
            x_88->attr_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1259 == "image_height") {
            WriteMetric();
            x_88->has_attr_image_height = false;
            WriteMetric();
            x_88->has_attr_image_height = true;
            x_88->attr_image_height = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1259 == "image_width") {
            WriteMetric();
            x_88->has_attr_image_width = false;
            WriteMetric();
            x_88->has_attr_image_width = true;
            x_88->attr_image_width = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1259 == "height") {
            WriteMetric();
            x_88->has_attr_height = false;
            WriteMetric();
            x_88->has_attr_height = true;
            x_88->attr_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1259 == "viewBox") {
            WriteMetric();
            x_88->has_attr_viewBox = false;
            WriteMetric();
            x_88->has_attr_viewBox = true;
            x_88->attr_viewBox = AsDEString(x_96);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1258 == "properties") {
          std::string x_1260 = x_95;
          if (x_1260 == "width") {
            WriteMetric();
            x_88->has_prop_width = false;
            WriteMetric();
            x_88->has_prop_width = true;
            x_88->prop_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1260 == "flex-grow") {
            WriteMetric();
            x_88->has_prop_flex_grow = false;
            WriteMetric();
            x_88->has_prop_flex_grow = true;
            x_88->prop_flex_grow = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1260 == "height") {
            WriteMetric();
            x_88->has_prop_height = false;
            WriteMetric();
            x_88->has_prop_height = true;
            x_88->prop_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1260 == "display") {
            WriteMetric();
            x_88->has_prop_display = false;
            WriteMetric();
            x_88->has_prop_display = true;
            x_88->prop_display = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1260 == "position") {
            WriteMetric();
            x_88->has_prop_position = false;
            WriteMetric();
            x_88->has_prop_position = true;
            x_88->prop_position = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1260 == "flex-shrink") {
            WriteMetric();
            x_88->has_prop_flex_shrink = false;
            WriteMetric();
            x_88->has_prop_flex_shrink = true;
            x_88->prop_flex_shrink = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1260 == "flex-direction") {
            WriteMetric();
            x_88->has_prop_flex_direction = false;
            WriteMetric();
            x_88->has_prop_flex_direction = true;
            x_88->prop_flex_direction = AsDEString(x_96);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_90, const auto &x_91) { return x_86(x_91, ListNthExn(x_88->children, x_90), x_89); });
}
Unit replace_value_x_34(const auto &x_87, const auto &x_88, const auto &x_89) { return x_86(x_87, x_88, x_89); }
Unit x_97(const auto &x_98, const auto &x_99, const auto &x_100) {
  auto x_101 = ListHeadExn(x_98);
  auto x_102 = ListTailExn(x_98);
  if (ListIsEmpty(x_102)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_99->children, x_101)), node_size_x_4(x_100)));
    auto x_103 = ListSplitN(x_99->children, x_101);
    auto x_104 = Zro(x_103);
    auto x_105 = Fst(x_103);
    auto x_106 = ListHeadExn(x_105);
    auto x_107 = ListTailExn(x_105);
    x_99->children = ListAppend(x_104, x_107);
    OptionMatch(
        x_106->prev, [&](const auto &x_109) { return MakeUnit(); },
        [&](const auto &x_108) {
          x_108->next = ToPath(x_106->next);
          return MakeUnit();
        });
    OptionMatch(
        x_106->next, [&](const auto &x_111) { return MakeUnit(); },
        [&](const auto &x_110) {
          x_110->prev = ToPath(x_106->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_104)) {
      x_99->first = ToPath(ListHead(x_107));
    }
    if (ListIsEmpty(x_107)) {
      x_99->last = ToPath(ListLast(x_104));
    }
    MakeUnit();
    auto x_118 = ListSplitN(x_99->children, x_101);
    auto x_119 = Zro(x_118);
    auto x_120 = Fst(x_118);
    x_99->children = ListAppend(x_119, Cons(x_100, x_120));
    if (ListIsEmpty(x_119)) {
      x_99->first = x_100.get();
    }
    if (ListIsEmpty(x_120)) {
      x_99->last = x_100.get();
    }
    OptionMatch(
        ListLast(x_119),
        [&](const auto &x_122) {
          x_100->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_121) {
          x_100->prev = x_121.get();
          x_121->next = x_100.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_120),
        [&](const auto &x_124) {
          x_100->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_123) {
          x_100->next = x_123.get();
          x_123->prev = x_100.get();
          return MakeUnit();
        });
    x_100->parent = x_99.get();
    MakeUnit();
    return MakeUnit();
  } else {
    return x_97(x_102, ListNthExn(x_99->children, x_101), x_100);
  }
}
Unit replace_node_x_32(const auto &x_98, const auto &x_99, const auto &x_100) { return x_97(x_98, x_99, x_100); }
Unit x_133(const auto &x_134) {
  ListIter2(x_134->children, [&](const auto &x_135, const auto &x_136) {
    x_135->parent = x_134.get();
    x_136->parent = x_134.get();
    x_135->next = x_136.get();
    x_136->prev = x_135.get();
    x_133(x_135);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_134->children),
      [&](const auto &x_138) {
        x_134->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_137) {
        x_134->first = x_137.get();
        x_137->parent = x_134.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_134->children),
      [&](const auto &x_140) {
        x_134->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_139) {
        x_134->last = x_139.get();
        x_139->parent = x_134.get();
        x_133(x_139);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_30(const auto &x_134) { return x_133(x_134); }
Unit x_141(const auto &x_142, const auto &x_143, const auto &x_144) {
  auto x_145 = ListHeadExn(x_142);
  auto x_146 = ListTailExn(x_142);
  if (ListIsEmpty(x_146)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_143->children, x_145)));
    auto x_147 = ListSplitN(x_143->children, x_145);
    auto x_148 = Zro(x_147);
    auto x_149 = Fst(x_147);
    auto x_150 = ListHeadExn(x_149);
    auto x_151 = ListTailExn(x_149);
    x_143->children = ListAppend(x_148, x_151);
    OptionMatch(
        x_150->prev, [&](const auto &x_153) { return MakeUnit(); },
        [&](const auto &x_152) {
          x_152->next = ToPath(x_150->next);
          return MakeUnit();
        });
    OptionMatch(
        x_150->next, [&](const auto &x_155) { return MakeUnit(); },
        [&](const auto &x_154) {
          x_154->prev = ToPath(x_150->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_148)) {
      x_143->first = ToPath(ListHead(x_151));
    }
    if (ListIsEmpty(x_151)) {
      x_143->last = ToPath(ListLast(x_148));
    }
    return MakeUnit();
  } else {
    return x_141(x_146, ListNthExn(x_143->children, x_145), x_144);
  }
}
Unit remove_node_x_28(const auto &x_142, const auto &x_143, const auto &x_144) { return x_141(x_142, x_143, x_144); }
Unit recalculate_x_26(const auto &x_162) {
  return RecordOverhead([&](const auto &x_163) {
    eval_stmts_x_17(x_162);
    eval_stmts_x_19(x_162);
    return MakeUnit();
  });
}
Unit x_164(const auto &x_165, const auto &x_166, const auto &x_167) {
  auto x_168 = ListHeadExn(x_165);
  auto x_169 = ListTailExn(x_165);
  if (ListIsEmpty(x_169)) {
    InputChangeMetric(node_size_x_4(x_167));
    auto x_170 = ListSplitN(x_166->children, x_168);
    auto x_171 = Zro(x_170);
    auto x_172 = Fst(x_170);
    x_166->children = ListAppend(x_171, Cons(x_167, x_172));
    if (ListIsEmpty(x_171)) {
      x_166->first = x_167.get();
    }
    if (ListIsEmpty(x_172)) {
      x_166->last = x_167.get();
    }
    OptionMatch(
        ListLast(x_171),
        [&](const auto &x_174) {
          x_167->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_173) {
          x_167->prev = x_173.get();
          x_173->next = x_167.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_172),
        [&](const auto &x_176) {
          x_167->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_175) {
          x_167->next = x_175.get();
          x_175->prev = x_167.get();
          return MakeUnit();
        });
    x_167->parent = x_166.get();
    return MakeUnit();
  } else {
    return x_164(x_169, ListNthExn(x_166->children, x_168), x_167);
  }
}
Unit add_node_x_25(const auto &x_165, const auto &x_166, const auto &x_167) { return x_164(x_165, x_166, x_167); }
Unit x_185(const auto &x_186) {
  ListIter2(x_186->children, [&](const auto &x_187, const auto &x_188) {
    x_187->parent = x_186.get();
    x_188->parent = x_186.get();
    x_187->next = x_188.get();
    x_188->prev = x_187.get();
    x_185(x_187);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_186->children),
      [&](const auto &x_190) {
        x_186->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_189) {
        x_186->first = x_189.get();
        x_189->parent = x_186.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_186->children),
      [&](const auto &x_192) {
        x_186->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_191) {
        x_186->last = x_191.get();
        x_191->parent = x_186.get();
        x_185(x_191);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_23(const auto &x_186) { return x_185(x_186); }
Unit eval_stmts_x_19(const auto &x_193) {
  return RecordEval([&](const auto &x_194) {
    RecordOverhead([&](const auto &x_195) { return eval_stmts_x_196(x_193); });
    ListIter(x_193->children, [&](const auto &x_197) {
      return RecordOverhead([&](const auto &x_198) { return eval_stmts_x_19(x_197); });
    });
    RecordOverhead([&](const auto &x_199) { return eval_stmts_x_200(x_193); });
    return MakeUnit();
  });
}
Unit eval_stmts_x_17(const auto &x_201) {
  return RecordEval([&](const auto &x_202) {
    RecordOverhead([&](const auto &x_203) { return eval_stmts_x_204(x_201); });
    ListIter(x_201->children, [&](const auto &x_205) {
      return RecordOverhead([&](const auto &x_206) { return eval_stmts_x_17(x_205); });
    });
    RecordOverhead([&](const auto &x_207) { return eval_stmts_x_208(x_201); });
    return MakeUnit();
  });
}
Unit x_209(const auto &x_210) {
  ListIter2(x_210->children, [&](const auto &x_211, const auto &x_212) {
    x_211->parent = x_210.get();
    x_212->parent = x_210.get();
    x_211->next = x_212.get();
    x_212->prev = x_211.get();
    x_209(x_211);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_210->children),
      [&](const auto &x_214) {
        x_210->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_213) {
        x_210->first = x_213.get();
        x_213->parent = x_210.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_210->children),
      [&](const auto &x_216) {
        x_210->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_215) {
        x_210->last = x_215.get();
        x_215->parent = x_210.get();
        x_209(x_215);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_210) { return x_209(x_210); }
int64_t x_217(const auto &x_218) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_218->children, [&](const auto &x_219) { return x_217(x_219); }));
}
int64_t node_size_x_4(const auto &x_218) { return x_217(x_218); }
int64_t x_220(const auto &x_221) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_221->children, [&](const auto &x_222) { return x_220(x_222); }));
}
int64_t layout_size_x_3(const auto &x_221) { return x_220(x_221); }
LayoutNode x_223(const auto &x_224) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_224)), [&](const auto &x_225) { return x_223(x_225); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_224) { return x_223(x_224); }
Node x_226(const auto &x_227) {
  return MakeNode(x_227->name, x_227->attr, x_227->prop, x_227->extern_id,
                  ListMap(x_227->children, [&](const auto &x_228) { return x_226(x_228); }));
}
Node node_to_fs_node_x_1(const auto &x_227) { return x_226(x_227); }
Node x_229(const auto &x_230) {
  return MakeNode(JsonToString(JsonMember("name", x_230)), JsonToDict(JsonMember("attributes", x_230)),
                  JsonToDict(JsonMember("properties", x_230)), JsonToInt(JsonMember("id", x_230)),
                  ListMap(JsonToList(JsonMember("children", x_230)), [&](const auto &x_231) { return x_229(x_231); }));
}
Node json_to_node_aux_x_0(const auto &x_230) { return x_229(x_230); }
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
      RecordOverhead([&](const auto &x_16) { return eval_stmts_x_17(x_14); });
      RecordOverhead([&](const auto &x_18) { return eval_stmts_x_19(x_14); });
      JsonToChannel(x_5, [&]() {
        auto x_1261 = FreshJson();
        WriteJson(x_1261, "name", "FS_D");
        WriteJson(x_1261, "diff_num", ReadRef(x_7));
        WriteJson(x_1261, "read_count", MetricReadCount());
        WriteJson(x_1261, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1261, "write_count", MetricWriteCount());
        WriteJson(x_1261, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1261, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1261, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1261, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1261, "overhead_time", MetricOverheadTime());
        WriteJson(x_1261, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_1261, "eval_time", MetricEvalCount());
        WriteJson(x_1261, "html", "");
        WriteJson(x_1261, "command", StackToList(x_11));
        return x_1261;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_1263 = JsonToString(JsonMember("name", x_21));
        if (x_1263 == "add") {
          return add_node_x_25(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_24) { return JsonToInt(x_24); }), x_14,
              [&]() {
                auto x_22 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_22->parent = nullptr;
                x_22->prev = nullptr;
                x_22->next = nullptr;
                set_children_relation_x_23(x_22);
                return x_22;
              }());
        } else if (x_1263 == "recalculate") {
          recalculate_x_26(x_14);
          JsonToChannel(x_5, [&]() {
            auto x_1262 = FreshJson();
            WriteJson(x_1262, "name", "FS_D");
            WriteJson(x_1262, "diff_num", ReadRef(x_7));
            WriteJson(x_1262, "read_count", MetricReadCount());
            WriteJson(x_1262, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1262, "write_count", MetricWriteCount());
            WriteJson(x_1262, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1262, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1262, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1262, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1262, "overhead_time", MetricOverheadTime());
            WriteJson(x_1262, "overhead_l2m", MetricOverheadL2m());
            WriteJson(x_1262, "eval_time", MetricEvalCount());
            WriteJson(x_1262, "html", "");
            WriteJson(x_1262, "command", StackToList(x_11));
            return x_1262;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1263 == "remove") {
          return remove_node_x_28(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_27) { return JsonToInt(x_27); }), x_14,
              MakeUnit());
        } else if (x_1263 == "replace") {
          return replace_node_x_32(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_31) { return JsonToInt(x_31); }), x_14,
              [&]() {
                auto x_29 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_29->parent = nullptr;
                x_29->prev = nullptr;
                x_29->next = nullptr;
                set_children_relation_x_30(x_29);
                return x_29;
              }());
        } else if (x_1263 == "replace_value") {
          return replace_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1263 == "delete_value") {
          return delete_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_1263 == "insert_value") {
          return insert_value_x_38(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1263 == "layout_remove") {
          return remove_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              MakeUnit());
        } else if (x_1263 == "layout_add") {
          return add_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1263 == "layout_replace") {
          return replace_layout_node_x_44(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_43) { return JsonToInt(x_43); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1263 == "layout_info_changed") {
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