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
Unit var_modified_x_486(const auto &x_488);
auto eval_expr_x_483(const auto &x_494);
Unit var_modified_x_481(const auto &x_503);
auto eval_expr_x_478(const auto &x_507);
Unit var_modified_x_476(const auto &x_512);
auto eval_expr_x_473(const auto &x_517);
Unit var_modified_x_471(const auto &x_544);
auto eval_expr_x_468(const auto &x_551);
Unit var_modified_x_466(const auto &x_564);
auto eval_expr_x_463(const auto &x_570);
Unit var_modified_x_461(const auto &x_575);
auto eval_expr_x_458(const auto &x_580);
Unit var_modified_x_456(const auto &x_607);
auto eval_expr_x_453(const auto &x_614);
Unit var_modified_x_451(const auto &x_625);
auto eval_expr_x_448(const auto &x_629);
Unit var_modified_x_446(const auto &x_640);
auto eval_expr_x_443(const auto &x_644);
Unit var_modified_x_441(const auto &x_651);
auto eval_expr_x_438(const auto &x_656);
Unit var_modified_x_436(const auto &x_667);
auto eval_expr_x_433(const auto &x_671);
Unit var_modified_x_431(const auto &x_674);
auto eval_expr_x_428(const auto &x_678);
Unit var_modified_x_422(const auto &x_681);
auto eval_expr_x_419(const auto &x_692);
Unit var_modified_x_417(const auto &x_737);
auto eval_expr_x_414(const auto &x_741);
Unit var_modified_x_412(const auto &x_750);
auto eval_expr_x_409(const auto &x_756);
Unit var_modified_x_407(const auto &x_759);
auto eval_expr_x_404(const auto &x_765);
Unit var_modified_x_402(const auto &x_770);
auto eval_expr_x_399(const auto &x_774);
Unit var_modified_x_397(const auto &x_775);
auto eval_expr_x_394(const auto &x_779);
Unit var_modified_x_392(const auto &x_782);
auto eval_expr_x_389(const auto &x_787);
Unit var_modified_x_387(const auto &x_798);
auto eval_expr_x_384(const auto &x_802);
Unit var_modified_x_382(const auto &x_805);
auto eval_expr_x_379(const auto &x_810);
Unit var_modified_x_377(const auto &x_821);
auto eval_expr_x_374(const auto &x_826);
Unit var_modified_x_372(const auto &x_839);
auto eval_expr_x_369(const auto &x_845);
Unit var_modified_x_367(const auto &x_860);
auto eval_expr_x_364(const auto &x_864);
Unit var_modified_x_362(const auto &x_867);
auto eval_expr_x_359(const auto &x_874);
Unit var_modified_x_357(const auto &x_879);
auto eval_expr_x_354(const auto &x_886);
Unit var_modified_x_352(const auto &x_891);
auto eval_expr_x_349(const auto &x_896);
Unit var_modified_x_347(const auto &x_899);
auto eval_expr_x_344(const auto &x_904);
Unit var_modified_x_342(const auto &x_907);
auto eval_expr_x_339(const auto &x_913);
Unit var_modified_x_337(const auto &x_916);
auto eval_expr_x_334(const auto &x_922);
Unit var_modified_x_330(const auto &x_925);
auto eval_expr_x_327(const auto &x_934);
Unit var_modified_x_325(const auto &x_949);
auto eval_expr_x_322(const auto &x_958);
Unit var_modified_x_320(const auto &x_965);
auto eval_expr_x_317(const auto &x_974);
Unit var_modified_x_315(const auto &x_979);
auto eval_expr_x_312(const auto &x_983);
Unit var_modified_x_310(const auto &x_988);
auto eval_expr_x_307(const auto &x_993);
Unit var_modified_x_305(const auto &x_1072);
auto eval_expr_x_302(const auto &x_1076);
Unit var_modified_x_300(const auto &x_1101);
auto eval_expr_x_297(const auto &x_1106);
Unit var_modified_x_295(const auto &x_1109);
auto eval_expr_x_292(const auto &x_1113);
Unit var_modified_x_290(const auto &x_1118);
auto eval_expr_x_287(const auto &x_1127);
Unit var_modified_x_285(const auto &x_1132);
auto eval_expr_x_282(const auto &x_1141);
Unit var_modified_x_280(const auto &x_1146);
auto eval_expr_x_277(const auto &x_1153);
Unit var_modified_x_275(const auto &x_1160);
auto eval_expr_x_272(const auto &x_1164);
Unit var_modified_x_270(const auto &x_1169);
auto eval_expr_x_267(const auto &x_1174);
Unit var_modified_x_265(const auto &x_1257);
auto eval_expr_x_262(const auto &x_1261);
Unit var_modified_x_260(const auto &x_1264);
auto eval_expr_x_257(const auto &x_1268);
Unit var_modified_x_255(const auto &x_1293);
auto eval_expr_x_252(const auto &x_1297);
Unit var_modified_x_250(const auto &x_1304);
auto eval_expr_x_247(const auto &x_1309);
Unit eval_stmts_x_221(const auto &x_245);
Unit eval_stmts_x_215(const auto &x_332);
Unit eval_stmts_x_210(const auto &x_424);
Unit eval_stmts_x_204(const auto &x_426);
Unit x_47(const auto &x_48, const auto &x_49, const auto &x_50);
Unit x_54(const auto &x_55, const auto &x_56, const auto &x_57);
Unit x_61(const auto &x_62, const auto &x_63, const auto &x_64);
Unit x_68(const auto &x_69, const auto &x_70, const auto &x_71);
Unit x_79(const auto &x_80, const auto &x_81, const auto &x_82);
Unit x_88(const auto &x_89, const auto &x_90, const auto &x_91);
Unit x_99(const auto &x_100, const auto &x_101, const auto &x_102);
Unit x_137(const auto &x_138);
Unit x_145(const auto &x_146, const auto &x_147, const auto &x_148);
Unit recalculate_x_28(const auto &x_166);
Unit x_169(const auto &x_170, const auto &x_171, const auto &x_172);
Unit x_192(const auto &x_193);
Unit eval_stmts_x_21(const auto &x_200);
Unit eval_stmts_x_18(const auto &x_211);
Unit x_222(const auto &x_223);
int64_t x_230(const auto &x_231);
int64_t x_233(const auto &x_234);
LayoutNode x_236(const auto &x_237);
Node x_239(const auto &x_240);
Node x_242(const auto &x_243);
Unit var_modified_x_486(const auto &x_488) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_489) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_490) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_483(const auto &x_494) {
  if ((x_494->prev != nullptr) && (!(x_494->prev)->var_line_break)) {
    return max(x_494->var_height_external, (x_494->prev)->var_line_height);
  } else {
    return x_494->var_height_external;
  }
}
Unit var_modified_x_481(const auto &x_503) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_504) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_505) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_478(const auto &x_507) {
  if (eq(x_507->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_507->var_height_internal;
  }
}
Unit var_modified_x_476(const auto &x_512) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_513) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_514) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_473(const auto &x_517) {
  if (x_517->var_intrinsic_height_is_height) {
    return x_517->var_intrinsic_height_internal;
  } else {
    if ((x_517->parent != nullptr) && (x_517->parent)->var_is_flex_column) {
      return plus(x_517->var_intrinsic_height_internal, mult(x_517->var_flex_amount, (x_517->parent)->var_flex_unit));
    } else {
      if (x_517->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_517->var_box_height, divide(x_517->var_height_expr.r.a0, 100.));
      } else {
        return max(x_517->var_box_height, x_517->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_471(const auto &x_544) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_545) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_546) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_468(const auto &x_551) {
  if (x_551->prev != nullptr) {
    if (x_551->var_line_break || (x_551->prev)->var_line_break) {
      return plus((x_551->prev)->var_y, (x_551->prev)->var_line_height);
    } else {
      return (x_551->prev)->var_y;
    }
  } else {
    if (x_551->parent != nullptr) {
      return (x_551->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_466(const auto &x_564) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_565) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_566) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_463(const auto &x_570) {
  if (eq(x_570->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_570->var_width_internal;
  }
}
Unit var_modified_x_461(const auto &x_575) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_576) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_577) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_458(const auto &x_580) {
  if (x_580->var_intrinsic_width_is_width) {
    return x_580->var_intrinsic_width_internal;
  } else {
    if ((x_580->parent != nullptr) && (x_580->parent)->var_is_flex_row) {
      return plus(x_580->var_intrinsic_width_internal, mult(x_580->var_flex_amount, (x_580->parent)->var_flex_unit));
    } else {
      if (x_580->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_580->var_box_width, divide(x_580->var_width_expr.r.a0, 100.));
      } else {
        return max(x_580->var_box_width, x_580->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_456(const auto &x_607) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_608) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_609) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_453(const auto &x_614) {
  if (x_614->prev != nullptr) {
    if (x_614->var_line_break || (x_614->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_614->prev)->var_x, (x_614->prev)->var_width_external);
    }
  } else {
    if (x_614->parent != nullptr) {
      return (x_614->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_451(const auto &x_625) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_626) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_627) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_448(const auto &x_629) {
  if (gt(x_629->var_left_over, 0.)) {
    return divide(x_629->var_left_over, x_629->var_flex_grow_sum);
  } else {
    return divide(x_629->var_left_over, x_629->var_flex_shrink_sum);
  }
}
Unit var_modified_x_446(const auto &x_640) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_641) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_642) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_443(const auto &x_644) {
  if ((x_644->parent != nullptr) && gt((x_644->parent)->var_left_over, 0.)) {
    return x_644->var_flex_grow;
  } else {
    return x_644->var_flex_shrink;
  }
}
Unit var_modified_x_441(const auto &x_651) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_652) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_653) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_438(const auto &x_656) {
  if (x_656->var_is_flex_row) {
    return minus(x_656->var_box_width, (x_656->last != nullptr) ? ((x_656->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_656->var_box_height, (x_656->last != nullptr) ? ((x_656->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_436(const auto &x_667) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_668) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_669) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_433(const auto &x_671) {
  if (x_671->parent != nullptr) {
    return (x_671->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_431(const auto &x_674) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_675) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_676) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_428(const auto &x_678) {
  if (x_678->parent != nullptr) {
    return (x_678->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_422(const auto &x_681) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_682) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_683) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_419(const auto &x_692) {
  if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_692->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_692->parent != nullptr) &&
          (eq((x_692->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_692->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_692->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_692->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_692->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_692->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_417(const auto &x_737) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_738) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_739) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_414(const auto &x_741) {
  return (((!(x_741->parent != nullptr)) || (x_741->parent)->var_visible) &&
          (neq(x_741->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_741->var_inside_svg) && (!x_741->var_disabled))));
}
Unit var_modified_x_412(const auto &x_750) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_751) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_752) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_409(const auto &x_756) {
  if (eq(x_756->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_756->parent != nullptr) && (x_756->parent)->var_disabled);
  }
}
Unit var_modified_x_407(const auto &x_759) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_760) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_761) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_404(const auto &x_765) {
  return ((x_765->parent != nullptr) && ((x_765->parent)->var_is_svg_block || (x_765->parent)->var_inside_svg));
}
Unit var_modified_x_402(const auto &x_770) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_771) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_772) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_399(const auto &x_774) { return eq(x_774->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_397(const auto &x_775) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_776) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_777) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_394(const auto &x_779) {
  return neq(x_779->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_392(const auto &x_782) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_783) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_784) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_389(const auto &x_787) {
  if (!x_787->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_787->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_787->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_787->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_387(const auto &x_798) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_799) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_800) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_384(const auto &x_802) {
  return neq(x_802->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_382(const auto &x_805) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_806) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_807) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_379(const auto &x_810) {
  if (!x_810->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_810->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_810->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_810->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_377(const auto &x_821) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_822) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_823) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_374(const auto &x_826) {
  if ((x_826->parent != nullptr) &&
      (eq((x_826->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_826->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_826->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_826->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_372(const auto &x_839) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_840) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_841) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_369(const auto &x_845) {
  if ((x_845->parent != nullptr) &&
      (eq((x_845->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_845->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_845->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_845->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_367(const auto &x_860) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_861) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_862) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_364(const auto &x_864) {
  if (x_864->has_prop_flex_direction) {
    return x_864->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_362(const auto &x_867) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_868) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_869) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_359(const auto &x_874) {
  return plus((x_874->prev != nullptr) ? ((x_874->prev)->var_flex_shrink_sum) : (0.), x_874->var_flex_shrink);
}
Unit var_modified_x_357(const auto &x_879) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_880) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_881) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_354(const auto &x_886) {
  return plus((x_886->prev != nullptr) ? ((x_886->prev)->var_flex_grow_sum) : (0.), x_886->var_flex_grow);
}
Unit var_modified_x_352(const auto &x_891) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_892) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_893) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_349(const auto &x_896) {
  if (x_896->has_prop_flex_shrink) {
    return (x_896->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_347(const auto &x_899) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_900) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_901) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_344(const auto &x_904) {
  if (x_904->has_prop_flex_grow) {
    return (x_904->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_342(const auto &x_907) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_908) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_909) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_339(const auto &x_913) {
  if (x_913->has_prop_position) {
    return x_913->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_337(const auto &x_916) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_917) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_918) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_334(const auto &x_922) {
  if (x_922->has_prop_display) {
    return x_922->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_330(const auto &x_925) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_926) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_927) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_327(const auto &x_934) {
  if (x_934->prev != nullptr) {
    if (x_934->var_line_break) {
      return plus((x_934->prev)->var_finished_intrinsic_height_sum,
                  plus((x_934->prev)->var_intrinsic_current_line_height, x_934->var_intrinsic_height_external));
    } else {
      return (x_934->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_934->var_line_break) {
      return x_934->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_325(const auto &x_949) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_950) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_951) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_322(const auto &x_958) {
  if (x_958->var_line_break) {
    return 0.;
  } else {
    return max(x_958->var_intrinsic_height_external,
               (x_958->prev != nullptr) ? ((x_958->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_320(const auto &x_965) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_966) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_967) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_317(const auto &x_974) {
  return plus((x_974->prev != nullptr) ? ((x_974->prev)->var_intrinsic_height_sum) : (0.),
              x_974->var_intrinsic_height_external);
}
Unit var_modified_x_315(const auto &x_979) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_980) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_981) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_312(const auto &x_983) {
  if (eq(x_983->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_983->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_310(const auto &x_988) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_989) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_990) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_307(const auto &x_993) {
  if (eq(x_993->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_993->var_inside_svg) {
      return 0.;
    } else {
      if (x_993->var_disabled) {
        return 0.;
      } else {
        if (neq(x_993->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_993->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_993->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_993->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_993->var_height_expr.r.a0;
          } else {
            if (x_993->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_993->var_height_expr.r.a0;
            } else {
              return x_993->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_993->var_children_intrinsic_height,
              (eq(x_993->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_993->var_is_default_case)
                         ? (0.)
                         : ((eq(x_993->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                             eq(x_993->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                ? (0.)
                                : ((eq(x_993->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_993->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_993->var_has_height_attr &&
                                                  (x_993->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_993->var_height_attr_expr.r.a0)
                                                     : ((x_993->has_attr_viewBox)
                                                            ? (x_993->attr_viewBox.r.a3)
                                                            : (mult((x_993->attr_viewBox.r.a3),
                                                                    divide(x_993->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_993->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_993->var_has_height_attr)
                                                            ? (x_993->var_height_attr_expr.r.a0)
                                                            : ((x_993->has_attr_image_height &&
                                                                (!x_993->var_has_width_attr))
                                                                   ? (int_to_float(x_993->attr_image_height))
                                                                   : ((neq(x_993->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult((x_993->var_width_attr_expr.r.a0),
                                                                                  divide(int_to_float(
                                                                                             x_993->attr_image_height),
                                                                                         int_to_float(
                                                                                             x_993->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_993->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_993->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_305(const auto &x_1072) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1073) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1074) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_302(const auto &x_1076) {
  if (eq(x_1076->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1076->var_inside_svg || x_1076->var_disabled)) {
    return true;
  } else {
    if ((x_1076->parent != nullptr) && (x_1076->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1076->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1076->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1076->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1076->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1076->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_300(const auto &x_1101) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1102) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1103) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_297(const auto &x_1106) {
  if (x_1106->has_prop_height) {
    return x_1106->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_295(const auto &x_1109) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1110) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1111) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_292(const auto &x_1113) {
  if (x_1113->last != nullptr) {
    return plus((x_1113->last)->var_finished_intrinsic_height_sum, (x_1113->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_290(const auto &x_1118) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1119) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1120) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_287(const auto &x_1127) {
  return plus((x_1127->prev != nullptr) ? ((x_1127->prev)->var_intrinsic_width_sum) : (0.),
              x_1127->var_intrinsic_width_external);
}
Unit var_modified_x_285(const auto &x_1132) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1133) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1134) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_282(const auto &x_1141) {
  return max(x_1141->var_intrinsic_current_line_width,
             (x_1141->prev != nullptr) ? ((x_1141->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_280(const auto &x_1146) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1147) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1148) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_277(const auto &x_1153) {
  return plus(x_1153->var_intrinsic_width_external,
              ((x_1153->prev != nullptr) && (!(x_1153->prev)->var_line_break))
                  ? ((x_1153->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_275(const auto &x_1160) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1161) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1162) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_272(const auto &x_1164) {
  if (eq(x_1164->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1164->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_270(const auto &x_1169) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1170) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1171) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_267(const auto &x_1174) {
  if (eq(x_1174->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1174->var_inside_svg) {
      return 0.;
    } else {
      if (x_1174->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1174->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1174->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1174->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1174->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1174->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1174->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1174->var_width_expr.r.a0;
          } else {
            return x_1174->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1174->var_children_intrinsic_width,
              (eq(x_1174->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1174->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1174->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                             eq(x_1174->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                ? (0.)
                                : ((eq(x_1174->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1174->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1174->var_has_width_attr &&
                                                  (x_1174->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1174->var_width_attr_expr.r.a0)
                                                     : (((!x_1174->var_has_width_attr) && x_1174->has_attr_viewBox)
                                                            ? (x_1174->attr_viewBox.r.a2)
                                                            : (mult((x_1174->attr_viewBox.r.a2),
                                                                    divide(x_1174->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1174->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1174->var_has_width_attr)
                                                            ? (x_1174->var_width_attr_expr.r.a0)
                                                            : ((x_1174->has_attr_image_width &&
                                                                (!x_1174->var_has_height_attr))
                                                                   ? (int_to_float(x_1174->attr_image_width))
                                                                   : ((neq(x_1174->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1174->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1174->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1174->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1174->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1174->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_265(const auto &x_1257) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1258) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1259) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_262(const auto &x_1261) {
  if (x_1261->last != nullptr) {
    return (x_1261->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_260(const auto &x_1264) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1265) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1266) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_257(const auto &x_1268) {
  if (eq(x_1268->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1268->var_inside_svg || x_1268->var_disabled)) {
    return true;
  } else {
    if ((x_1268->parent != nullptr) && (x_1268->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1268->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1268->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1268->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1268->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1268->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_255(const auto &x_1293) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1294) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1295) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_252(const auto &x_1297) {
  if (eq(x_1297->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1297->var_inside_svg) {
      return true;
    } else {
      if (x_1297->var_disabled) {
        return true;
      } else {if ( eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_html)) || eq(x_1297->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_250(const auto &x_1304) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_1305) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_1306) { return MakeUnit(); }));
  })));
}
auto eval_expr_x_247(const auto &x_1309) {
  if (x_1309->has_prop_width) {
    return x_1309->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_221(const auto &x_245) {
  return MetricRecordEval(TimedOnly([&](const auto &x_246) {
    WriteMetric();
    auto x_248 = eval_expr_x_247(x_245);
    if (x_245->has_var_width_expr) {
      auto x_249 = x_245->var_width_expr;
      if (!EqualValue(x_249, x_248)) {
        var_modified_x_250(x_245);
      }
    }
    x_245->has_var_width_expr = true;
    x_245->var_width_expr = AsDEString(x_248);
    WriteMetric();
    auto x_253 = eval_expr_x_252(x_245);
    if (x_245->has_var_is_default_case) {
      auto x_254 = x_245->var_is_default_case;
      if (!EqualValue(x_254, x_253)) {
        var_modified_x_255(x_245);
      }
    }
    x_245->has_var_is_default_case = true;
    x_245->var_is_default_case = Asbool(x_253);
    WriteMetric();
    auto x_258 = eval_expr_x_257(x_245);
    if (x_245->has_var_intrinsic_width_is_width) {
      auto x_259 = x_245->var_intrinsic_width_is_width;
      if (!EqualValue(x_259, x_258)) {
        var_modified_x_260(x_245);
      }
    }
    x_245->has_var_intrinsic_width_is_width = true;
    x_245->var_intrinsic_width_is_width = Asbool(x_258);
    WriteMetric();
    auto x_263 = eval_expr_x_262(x_245);
    if (x_245->has_var_children_intrinsic_width) {
      auto x_264 = x_245->var_children_intrinsic_width;
      if (!EqualValue(x_264, x_263)) {
        var_modified_x_265(x_245);
      }
    }
    x_245->has_var_children_intrinsic_width = true;
    x_245->var_children_intrinsic_width = Asdouble(x_263);
    WriteMetric();
    auto x_268 = eval_expr_x_267(x_245);
    if (x_245->has_var_intrinsic_width_internal) {
      auto x_269 = x_245->var_intrinsic_width_internal;
      if (!EqualValue(x_269, x_268)) {
        var_modified_x_270(x_245);
      }
    }
    x_245->has_var_intrinsic_width_internal = true;
    x_245->var_intrinsic_width_internal = Asdouble(x_268);
    WriteMetric();
    auto x_273 = eval_expr_x_272(x_245);
    if (x_245->has_var_intrinsic_width_external) {
      auto x_274 = x_245->var_intrinsic_width_external;
      if (!EqualValue(x_274, x_273)) {
        var_modified_x_275(x_245);
      }
    }
    x_245->has_var_intrinsic_width_external = true;
    x_245->var_intrinsic_width_external = Asdouble(x_273);
    WriteMetric();
    auto x_278 = eval_expr_x_277(x_245);
    if (x_245->has_var_intrinsic_current_line_width) {
      auto x_279 = x_245->var_intrinsic_current_line_width;
      if (!EqualValue(x_279, x_278)) {
        var_modified_x_280(x_245);
      }
    }
    x_245->has_var_intrinsic_current_line_width = true;
    x_245->var_intrinsic_current_line_width = Asdouble(x_278);
    WriteMetric();
    auto x_283 = eval_expr_x_282(x_245);
    if (x_245->has_var_intrinsic_width_max) {
      auto x_284 = x_245->var_intrinsic_width_max;
      if (!EqualValue(x_284, x_283)) {
        var_modified_x_285(x_245);
      }
    }
    x_245->has_var_intrinsic_width_max = true;
    x_245->var_intrinsic_width_max = Asdouble(x_283);
    WriteMetric();
    auto x_288 = eval_expr_x_287(x_245);
    if (x_245->has_var_intrinsic_width_sum) {
      auto x_289 = x_245->var_intrinsic_width_sum;
      if (!EqualValue(x_289, x_288)) {
        var_modified_x_290(x_245);
      }
    }
    x_245->has_var_intrinsic_width_sum = true;
    x_245->var_intrinsic_width_sum = Asdouble(x_288);
    WriteMetric();
    auto x_293 = eval_expr_x_292(x_245);
    if (x_245->has_var_children_intrinsic_height) {
      auto x_294 = x_245->var_children_intrinsic_height;
      if (!EqualValue(x_294, x_293)) {
        var_modified_x_295(x_245);
      }
    }
    x_245->has_var_children_intrinsic_height = true;
    x_245->var_children_intrinsic_height = Asdouble(x_293);
    WriteMetric();
    auto x_298 = eval_expr_x_297(x_245);
    if (x_245->has_var_height_expr) {
      auto x_299 = x_245->var_height_expr;
      if (!EqualValue(x_299, x_298)) {
        var_modified_x_300(x_245);
      }
    }
    x_245->has_var_height_expr = true;
    x_245->var_height_expr = AsDEString(x_298);
    WriteMetric();
    auto x_303 = eval_expr_x_302(x_245);
    if (x_245->has_var_intrinsic_height_is_height) {
      auto x_304 = x_245->var_intrinsic_height_is_height;
      if (!EqualValue(x_304, x_303)) {
        var_modified_x_305(x_245);
      }
    }
    x_245->has_var_intrinsic_height_is_height = true;
    x_245->var_intrinsic_height_is_height = Asbool(x_303);
    WriteMetric();
    auto x_308 = eval_expr_x_307(x_245);
    if (x_245->has_var_intrinsic_height_internal) {
      auto x_309 = x_245->var_intrinsic_height_internal;
      if (!EqualValue(x_309, x_308)) {
        var_modified_x_310(x_245);
      }
    }
    x_245->has_var_intrinsic_height_internal = true;
    x_245->var_intrinsic_height_internal = Asdouble(x_308);
    WriteMetric();
    auto x_313 = eval_expr_x_312(x_245);
    if (x_245->has_var_intrinsic_height_external) {
      auto x_314 = x_245->var_intrinsic_height_external;
      if (!EqualValue(x_314, x_313)) {
        var_modified_x_315(x_245);
      }
    }
    x_245->has_var_intrinsic_height_external = true;
    x_245->var_intrinsic_height_external = Asdouble(x_313);
    WriteMetric();
    auto x_318 = eval_expr_x_317(x_245);
    if (x_245->has_var_intrinsic_height_sum) {
      auto x_319 = x_245->var_intrinsic_height_sum;
      if (!EqualValue(x_319, x_318)) {
        var_modified_x_320(x_245);
      }
    }
    x_245->has_var_intrinsic_height_sum = true;
    x_245->var_intrinsic_height_sum = Asdouble(x_318);
    WriteMetric();
    auto x_323 = eval_expr_x_322(x_245);
    if (x_245->has_var_intrinsic_current_line_height) {
      auto x_324 = x_245->var_intrinsic_current_line_height;
      if (!EqualValue(x_324, x_323)) {
        var_modified_x_325(x_245);
      }
    }
    x_245->has_var_intrinsic_current_line_height = true;
    x_245->var_intrinsic_current_line_height = Asdouble(x_323);
    WriteMetric();
    auto x_328 = eval_expr_x_327(x_245);
    if (x_245->has_var_finished_intrinsic_height_sum) {
      auto x_329 = x_245->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_329, x_328)) {
        var_modified_x_330(x_245);
      }
    }
    x_245->has_var_finished_intrinsic_height_sum = true;
    x_245->var_finished_intrinsic_height_sum = Asdouble(x_328);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_215(const auto &x_332) {
  return MetricRecordEval(TimedOnly([&](const auto &x_333) {
    WriteMetric();
    auto x_335 = eval_expr_x_334(x_332);
    if (x_332->has_var_display) {
      auto x_336 = x_332->var_display;
      if (!EqualValue(x_336, x_335)) {
        var_modified_x_337(x_332);
      }
    }
    x_332->has_var_display = true;
    x_332->var_display = AsDEString(x_335);
    WriteMetric();
    auto x_340 = eval_expr_x_339(x_332);
    if (x_332->has_var_position) {
      auto x_341 = x_332->var_position;
      if (!EqualValue(x_341, x_340)) {
        var_modified_x_342(x_332);
      }
    }
    x_332->has_var_position = true;
    x_332->var_position = AsDEString(x_340);
    WriteMetric();
    auto x_345 = eval_expr_x_344(x_332);
    if (x_332->has_var_flex_grow) {
      auto x_346 = x_332->var_flex_grow;
      if (!EqualValue(x_346, x_345)) {
        var_modified_x_347(x_332);
      }
    }
    x_332->has_var_flex_grow = true;
    x_332->var_flex_grow = Asdouble(x_345);
    WriteMetric();
    auto x_350 = eval_expr_x_349(x_332);
    if (x_332->has_var_flex_shrink) {
      auto x_351 = x_332->var_flex_shrink;
      if (!EqualValue(x_351, x_350)) {
        var_modified_x_352(x_332);
      }
    }
    x_332->has_var_flex_shrink = true;
    x_332->var_flex_shrink = Asdouble(x_350);
    WriteMetric();
    auto x_355 = eval_expr_x_354(x_332);
    if (x_332->has_var_flex_grow_sum) {
      auto x_356 = x_332->var_flex_grow_sum;
      if (!EqualValue(x_356, x_355)) {
        var_modified_x_357(x_332);
      }
    }
    x_332->has_var_flex_grow_sum = true;
    x_332->var_flex_grow_sum = Asdouble(x_355);
    WriteMetric();
    auto x_360 = eval_expr_x_359(x_332);
    if (x_332->has_var_flex_shrink_sum) {
      auto x_361 = x_332->var_flex_shrink_sum;
      if (!EqualValue(x_361, x_360)) {
        var_modified_x_362(x_332);
      }
    }
    x_332->has_var_flex_shrink_sum = true;
    x_332->var_flex_shrink_sum = Asdouble(x_360);
    WriteMetric();
    auto x_365 = eval_expr_x_364(x_332);
    if (x_332->has_var_flex_direction) {
      auto x_366 = x_332->var_flex_direction;
      if (!EqualValue(x_366, x_365)) {
        var_modified_x_367(x_332);
      }
    }
    x_332->has_var_flex_direction = true;
    x_332->var_flex_direction = AsDEString(x_365);
    WriteMetric();
    auto x_370 = eval_expr_x_369(x_332);
    if (x_332->has_var_is_flex_row) {
      auto x_371 = x_332->var_is_flex_row;
      if (!EqualValue(x_371, x_370)) {
        var_modified_x_372(x_332);
      }
    }
    x_332->has_var_is_flex_row = true;
    x_332->var_is_flex_row = Asbool(x_370);
    WriteMetric();
    auto x_375 = eval_expr_x_374(x_332);
    if (x_332->has_var_is_flex_column) {
      auto x_376 = x_332->var_is_flex_column;
      if (!EqualValue(x_376, x_375)) {
        var_modified_x_377(x_332);
      }
    }
    x_332->has_var_is_flex_column = true;
    x_332->var_is_flex_column = Asbool(x_375);
    WriteMetric();
    auto x_380 = eval_expr_x_379(x_332);
    if (x_332->has_var_width_attr_expr) {
      auto x_381 = x_332->var_width_attr_expr;
      if (!EqualValue(x_381, x_380)) {
        var_modified_x_382(x_332);
      }
    }
    x_332->has_var_width_attr_expr = true;
    x_332->var_width_attr_expr = AsDEString(x_380);
    WriteMetric();
    auto x_385 = eval_expr_x_384(x_332);
    if (x_332->has_var_has_width_attr) {
      auto x_386 = x_332->var_has_width_attr;
      if (!EqualValue(x_386, x_385)) {
        var_modified_x_387(x_332);
      }
    }
    x_332->has_var_has_width_attr = true;
    x_332->var_has_width_attr = Asbool(x_385);
    WriteMetric();
    auto x_390 = eval_expr_x_389(x_332);
    if (x_332->has_var_height_attr_expr) {
      auto x_391 = x_332->var_height_attr_expr;
      if (!EqualValue(x_391, x_390)) {
        var_modified_x_392(x_332);
      }
    }
    x_332->has_var_height_attr_expr = true;
    x_332->var_height_attr_expr = AsDEString(x_390);
    WriteMetric();
    auto x_395 = eval_expr_x_394(x_332);
    if (x_332->has_var_has_height_attr) {
      auto x_396 = x_332->var_has_height_attr;
      if (!EqualValue(x_396, x_395)) {
        var_modified_x_397(x_332);
      }
    }
    x_332->has_var_has_height_attr = true;
    x_332->var_has_height_attr = Asbool(x_395);
    WriteMetric();
    auto x_400 = eval_expr_x_399(x_332);
    if (x_332->has_var_is_svg_block) {
      auto x_401 = x_332->var_is_svg_block;
      if (!EqualValue(x_401, x_400)) {
        var_modified_x_402(x_332);
      }
    }
    x_332->has_var_is_svg_block = true;
    x_332->var_is_svg_block = Asbool(x_400);
    WriteMetric();
    auto x_405 = eval_expr_x_404(x_332);
    if (x_332->has_var_inside_svg) {
      auto x_406 = x_332->var_inside_svg;
      if (!EqualValue(x_406, x_405)) {
        var_modified_x_407(x_332);
      }
    }
    x_332->has_var_inside_svg = true;
    x_332->var_inside_svg = Asbool(x_405);
    WriteMetric();
    auto x_410 = eval_expr_x_409(x_332);
    if (x_332->has_var_disabled) {
      auto x_411 = x_332->var_disabled;
      if (!EqualValue(x_411, x_410)) {
        var_modified_x_412(x_332);
      }
    }
    x_332->has_var_disabled = true;
    x_332->var_disabled = Asbool(x_410);
    WriteMetric();
    auto x_415 = eval_expr_x_414(x_332);
    if (x_332->has_var_visible) {
      auto x_416 = x_332->var_visible;
      if (!EqualValue(x_416, x_415)) {
        var_modified_x_417(x_332);
      }
    }
    x_332->has_var_visible = true;
    x_332->var_visible = Asbool(x_415);
    WriteMetric();
    auto x_420 = eval_expr_x_419(x_332);
    if (x_332->has_var_line_break) {
      auto x_421 = x_332->var_line_break;
      if (!EqualValue(x_421, x_420)) {
        var_modified_x_422(x_332);
      }
    }
    x_332->has_var_line_break = true;
    x_332->var_line_break = Asbool(x_420);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_210(const auto &x_424) {
  return MetricRecordEval(TimedOnly([&](const auto &x_425) { return MakeUnit(); }));
}
Unit eval_stmts_x_204(const auto &x_426) {
  return MetricRecordEval(TimedOnly([&](const auto &x_427) {
    WriteMetric();
    auto x_429 = eval_expr_x_428(x_426);
    if (x_426->has_var_box_width) {
      auto x_430 = x_426->var_box_width;
      if (!EqualValue(x_430, x_429)) {
        var_modified_x_431(x_426);
      }
    }
    x_426->has_var_box_width = true;
    x_426->var_box_width = Asdouble(x_429);
    WriteMetric();
    auto x_434 = eval_expr_x_433(x_426);
    if (x_426->has_var_box_height) {
      auto x_435 = x_426->var_box_height;
      if (!EqualValue(x_435, x_434)) {
        var_modified_x_436(x_426);
      }
    }
    x_426->has_var_box_height = true;
    x_426->var_box_height = Asdouble(x_434);
    WriteMetric();
    auto x_439 = eval_expr_x_438(x_426);
    if (x_426->has_var_left_over) {
      auto x_440 = x_426->var_left_over;
      if (!EqualValue(x_440, x_439)) {
        var_modified_x_441(x_426);
      }
    }
    x_426->has_var_left_over = true;
    x_426->var_left_over = Asdouble(x_439);
    WriteMetric();
    auto x_444 = eval_expr_x_443(x_426);
    if (x_426->has_var_flex_amount) {
      auto x_445 = x_426->var_flex_amount;
      if (!EqualValue(x_445, x_444)) {
        var_modified_x_446(x_426);
      }
    }
    x_426->has_var_flex_amount = true;
    x_426->var_flex_amount = Asdouble(x_444);
    WriteMetric();
    auto x_449 = eval_expr_x_448(x_426);
    if (x_426->has_var_flex_unit) {
      auto x_450 = x_426->var_flex_unit;
      if (!EqualValue(x_450, x_449)) {
        var_modified_x_451(x_426);
      }
    }
    x_426->has_var_flex_unit = true;
    x_426->var_flex_unit = Asdouble(x_449);
    WriteMetric();
    auto x_454 = eval_expr_x_453(x_426);
    if (x_426->has_var_x) {
      auto x_455 = x_426->var_x;
      if (!EqualValue(x_455, x_454)) {
        var_modified_x_456(x_426);
      }
    }
    x_426->has_var_x = true;
    x_426->var_x = Asdouble(x_454);
    WriteMetric();
    auto x_459 = eval_expr_x_458(x_426);
    if (x_426->has_var_width_internal) {
      auto x_460 = x_426->var_width_internal;
      if (!EqualValue(x_460, x_459)) {
        var_modified_x_461(x_426);
      }
    }
    x_426->has_var_width_internal = true;
    x_426->var_width_internal = Asdouble(x_459);
    WriteMetric();
    auto x_464 = eval_expr_x_463(x_426);
    if (x_426->has_var_width_external) {
      auto x_465 = x_426->var_width_external;
      if (!EqualValue(x_465, x_464)) {
        var_modified_x_466(x_426);
      }
    }
    x_426->has_var_width_external = true;
    x_426->var_width_external = Asdouble(x_464);
    WriteMetric();
    auto x_469 = eval_expr_x_468(x_426);
    if (x_426->has_var_y) {
      auto x_470 = x_426->var_y;
      if (!EqualValue(x_470, x_469)) {
        var_modified_x_471(x_426);
      }
    }
    x_426->has_var_y = true;
    x_426->var_y = Asdouble(x_469);
    WriteMetric();
    auto x_474 = eval_expr_x_473(x_426);
    if (x_426->has_var_height_internal) {
      auto x_475 = x_426->var_height_internal;
      if (!EqualValue(x_475, x_474)) {
        var_modified_x_476(x_426);
      }
    }
    x_426->has_var_height_internal = true;
    x_426->var_height_internal = Asdouble(x_474);
    WriteMetric();
    auto x_479 = eval_expr_x_478(x_426);
    if (x_426->has_var_height_external) {
      auto x_480 = x_426->var_height_external;
      if (!EqualValue(x_480, x_479)) {
        var_modified_x_481(x_426);
      }
    }
    x_426->has_var_height_external = true;
    x_426->var_height_external = Asdouble(x_479);
    WriteMetric();
    auto x_484 = eval_expr_x_483(x_426);
    if (x_426->has_var_line_height) {
      auto x_485 = x_426->var_line_height;
      if (!EqualValue(x_485, x_484)) {
        var_modified_x_486(x_426);
      }
    }
    x_426->has_var_line_height = true;
    x_426->var_line_height = Asdouble(x_484);
    return MakeUnit();
  }));
}
Unit x_47(const auto &x_48, const auto &x_49, const auto &x_50) {
  auto x_51 = ListHeadExn(x_48);
  auto x_52 = ListTailExn(x_48);
  if (ListIsEmpty(x_52)) {
    auto x_53 = ListSplitN(x_49->children, x_51);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_49->children, x_51)), layout_size_x_3(x_50)));
    x_49->children = ListAppend(Zro(x_53), Cons(x_50, ListTailExn(Fst(x_53))));
    return MakeUnit();
  } else {
    return x_47(x_52, ListNthExn(x_49->children, x_51), x_50);
  }
}
Unit replace_layout_node_x_46(const auto &x_48, const auto &x_49, const auto &x_50) { return x_47(x_48, x_49, x_50); }
Unit x_54(const auto &x_55, const auto &x_56, const auto &x_57) {
  auto x_58 = ListHeadExn(x_55);
  auto x_59 = ListTailExn(x_55);
  if (ListIsEmpty(x_59)) {
    OutputChangeMetric(layout_size_x_3(x_57));
    auto x_60 = ListSplitN(x_56->children, x_58);
    x_56->children = ListAppend(Zro(x_60), Cons(x_57, Fst(x_60)));
    return MakeUnit();
  } else {
    return x_54(x_59, ListNthExn(x_56->children, x_58), x_57);
  }
}
Unit add_layout_node_x_44(const auto &x_55, const auto &x_56, const auto &x_57) { return x_54(x_55, x_56, x_57); }
Unit x_61(const auto &x_62, const auto &x_63, const auto &x_64) {
  auto x_65 = ListHeadExn(x_62);
  auto x_66 = ListTailExn(x_62);
  if (ListIsEmpty(x_66)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_63->children, x_65)));
    auto x_67 = ListSplitN(x_63->children, x_65);
    x_63->children = ListAppend(Zro(x_67), ListTailExn(Fst(x_67)));
    return MakeUnit();
  } else {
    return x_61(x_66, ListNthExn(x_63->children, x_65), x_64);
  }
}
Unit remove_layout_node_x_42(const auto &x_62, const auto &x_63, const auto &x_64) { return x_61(x_62, x_63, x_64); }
Unit x_68(const auto &x_69, const auto &x_70, const auto &x_71) {
  return ListMatch(
      x_69,
      [&](const auto &x_74) {
        auto x_75 = Zro(x_71);
        auto x_76 = Zro(x_75);
        auto x_77 = Fst(x_75);
        auto x_78 = Fst(x_71);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1312 = x_76;
        if (x_1312 == "attributes") {
          std::string x_1313 = x_77;
          if (x_1313 == "width") {
            WriteMetric();
            x_70->has_attr_width = true;
            x_70->attr_width = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1313 == "image_height") {
            WriteMetric();
            x_70->has_attr_image_height = true;
            x_70->attr_image_height = Asint64_t(x_78);
            return MakeUnit();
          } else if (x_1313 == "image_width") {
            WriteMetric();
            x_70->has_attr_image_width = true;
            x_70->attr_image_width = Asint64_t(x_78);
            return MakeUnit();
          } else if (x_1313 == "height") {
            WriteMetric();
            x_70->has_attr_height = true;
            x_70->attr_height = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1313 == "viewBox") {
            WriteMetric();
            x_70->has_attr_viewBox = true;
            x_70->attr_viewBox = AsDEString(x_78);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1312 == "properties") {
          std::string x_1314 = x_77;
          if (x_1314 == "width") {
            WriteMetric();
            x_70->has_prop_width = true;
            x_70->prop_width = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1314 == "flex-grow") {
            WriteMetric();
            x_70->has_prop_flex_grow = true;
            x_70->prop_flex_grow = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1314 == "height") {
            WriteMetric();
            x_70->has_prop_height = true;
            x_70->prop_height = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1314 == "display") {
            WriteMetric();
            x_70->has_prop_display = true;
            x_70->prop_display = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1314 == "position") {
            WriteMetric();
            x_70->has_prop_position = true;
            x_70->prop_position = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1314 == "flex-shrink") {
            WriteMetric();
            x_70->has_prop_flex_shrink = true;
            x_70->prop_flex_shrink = AsDEString(x_78);
            return MakeUnit();
          } else if (x_1314 == "flex-direction") {
            WriteMetric();
            x_70->has_prop_flex_direction = true;
            x_70->prop_flex_direction = AsDEString(x_78);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_72, const auto &x_73) { return x_68(x_73, ListNthExn(x_70->children, x_72), x_71); });
}
Unit insert_value_x_40(const auto &x_69, const auto &x_70, const auto &x_71) { return x_68(x_69, x_70, x_71); }
Unit x_79(const auto &x_80, const auto &x_81, const auto &x_82) {
  return ListMatch(
      x_80,
      [&](const auto &x_85) {
        auto x_86 = Zro(x_82);
        auto x_87 = Fst(x_82);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1315 = x_86;
        if (x_1315 == "attributes") {
          std::string x_1316 = x_87;
          if (x_1316 == "width") {
            WriteMetric();
            x_81->has_attr_width = false;
            return MakeUnit();
          } else if (x_1316 == "image_height") {
            WriteMetric();
            x_81->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_1316 == "image_width") {
            WriteMetric();
            x_81->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_1316 == "height") {
            WriteMetric();
            x_81->has_attr_height = false;
            return MakeUnit();
          } else if (x_1316 == "viewBox") {
            WriteMetric();
            x_81->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1315 == "properties") {
          std::string x_1317 = x_87;
          if (x_1317 == "width") {
            WriteMetric();
            x_81->has_prop_width = false;
            return MakeUnit();
          } else if (x_1317 == "flex-grow") {
            WriteMetric();
            x_81->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_1317 == "height") {
            WriteMetric();
            x_81->has_prop_height = false;
            return MakeUnit();
          } else if (x_1317 == "display") {
            WriteMetric();
            x_81->has_prop_display = false;
            return MakeUnit();
          } else if (x_1317 == "position") {
            WriteMetric();
            x_81->has_prop_position = false;
            return MakeUnit();
          } else if (x_1317 == "flex-shrink") {
            WriteMetric();
            x_81->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_1317 == "flex-direction") {
            WriteMetric();
            x_81->has_prop_flex_direction = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_83, const auto &x_84) { return x_79(x_84, ListNthExn(x_81->children, x_83), x_82); });
}
Unit delete_value_x_38(const auto &x_80, const auto &x_81, const auto &x_82) { return x_79(x_80, x_81, x_82); }
Unit x_88(const auto &x_89, const auto &x_90, const auto &x_91) {
  return ListMatch(
      x_89,
      [&](const auto &x_94) {
        auto x_95 = Zro(x_91);
        auto x_96 = Zro(x_95);
        auto x_97 = Fst(x_95);
        auto x_98 = Fst(x_91);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1318 = x_96;
        if (x_1318 == "attributes") {
          std::string x_1319 = x_97;
          if (x_1319 == "width") {
            WriteMetric();
            x_90->has_attr_width = false;
            WriteMetric();
            x_90->has_attr_width = true;
            x_90->attr_width = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1319 == "image_height") {
            WriteMetric();
            x_90->has_attr_image_height = false;
            WriteMetric();
            x_90->has_attr_image_height = true;
            x_90->attr_image_height = Asint64_t(x_98);
            return MakeUnit();
          } else if (x_1319 == "image_width") {
            WriteMetric();
            x_90->has_attr_image_width = false;
            WriteMetric();
            x_90->has_attr_image_width = true;
            x_90->attr_image_width = Asint64_t(x_98);
            return MakeUnit();
          } else if (x_1319 == "height") {
            WriteMetric();
            x_90->has_attr_height = false;
            WriteMetric();
            x_90->has_attr_height = true;
            x_90->attr_height = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1319 == "viewBox") {
            WriteMetric();
            x_90->has_attr_viewBox = false;
            WriteMetric();
            x_90->has_attr_viewBox = true;
            x_90->attr_viewBox = AsDEString(x_98);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1318 == "properties") {
          std::string x_1320 = x_97;
          if (x_1320 == "width") {
            WriteMetric();
            x_90->has_prop_width = false;
            WriteMetric();
            x_90->has_prop_width = true;
            x_90->prop_width = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1320 == "flex-grow") {
            WriteMetric();
            x_90->has_prop_flex_grow = false;
            WriteMetric();
            x_90->has_prop_flex_grow = true;
            x_90->prop_flex_grow = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1320 == "height") {
            WriteMetric();
            x_90->has_prop_height = false;
            WriteMetric();
            x_90->has_prop_height = true;
            x_90->prop_height = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1320 == "display") {
            WriteMetric();
            x_90->has_prop_display = false;
            WriteMetric();
            x_90->has_prop_display = true;
            x_90->prop_display = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1320 == "position") {
            WriteMetric();
            x_90->has_prop_position = false;
            WriteMetric();
            x_90->has_prop_position = true;
            x_90->prop_position = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1320 == "flex-shrink") {
            WriteMetric();
            x_90->has_prop_flex_shrink = false;
            WriteMetric();
            x_90->has_prop_flex_shrink = true;
            x_90->prop_flex_shrink = AsDEString(x_98);
            return MakeUnit();
          } else if (x_1320 == "flex-direction") {
            WriteMetric();
            x_90->has_prop_flex_direction = false;
            WriteMetric();
            x_90->has_prop_flex_direction = true;
            x_90->prop_flex_direction = AsDEString(x_98);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_92, const auto &x_93) { return x_88(x_93, ListNthExn(x_90->children, x_92), x_91); });
}
Unit replace_value_x_36(const auto &x_89, const auto &x_90, const auto &x_91) { return x_88(x_89, x_90, x_91); }
Unit x_99(const auto &x_100, const auto &x_101, const auto &x_102) {
  auto x_103 = ListHeadExn(x_100);
  auto x_104 = ListTailExn(x_100);
  if (ListIsEmpty(x_104)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_101->children, x_103)), node_size_x_4(x_102)));
    auto x_105 = ListSplitN(x_101->children, x_103);
    auto x_106 = Zro(x_105);
    auto x_107 = Fst(x_105);
    auto x_108 = ListHeadExn(x_107);
    auto x_109 = ListTailExn(x_107);
    x_101->children = ListAppend(x_106, x_109);
    OptionMatch(
        x_108->prev, [&](const auto &x_111) { return MakeUnit(); },
        [&](const auto &x_110) {
          x_110->next = ToPath(x_108->next);
          return MakeUnit();
        });
    OptionMatch(
        x_108->next, [&](const auto &x_113) { return MakeUnit(); },
        [&](const auto &x_112) {
          x_112->prev = ToPath(x_108->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_106)) {
      x_101->first = ToPath(ListHead(x_109));
    }
    if (ListIsEmpty(x_109)) {
      x_101->last = ToPath(ListLast(x_106));
    }
    MakeUnit();
    auto x_120 = ListSplitN(x_101->children, x_103);
    auto x_121 = Zro(x_120);
    auto x_122 = Fst(x_120);
    x_101->children = ListAppend(x_121, Cons(x_102, x_122));
    if (ListIsEmpty(x_121)) {
      x_101->first = x_102.get();
    }
    if (ListIsEmpty(x_122)) {
      x_101->last = x_102.get();
    }
    OptionMatch(
        ListLast(x_121),
        [&](const auto &x_124) {
          x_102->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_123) {
          x_102->prev = x_123.get();
          x_123->next = x_102.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_122),
        [&](const auto &x_126) {
          x_102->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_125) {
          x_102->next = x_125.get();
          x_125->prev = x_102.get();
          return MakeUnit();
        });
    x_102->parent = x_101.get();
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_127) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_128) { return MakeUnit(); }));
    })));
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_133) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_134) { return MakeUnit(); }));
    })));
    MakeUnit();
    return MakeUnit();
  } else {
    return x_99(x_104, ListNthExn(x_101->children, x_103), x_102);
  }
}
Unit replace_node_x_34(const auto &x_100, const auto &x_101, const auto &x_102) { return x_99(x_100, x_101, x_102); }
Unit x_137(const auto &x_138) {
  ListIter2(x_138->children, [&](const auto &x_139, const auto &x_140) {
    x_139->parent = x_138.get();
    x_140->parent = x_138.get();
    x_139->next = x_140.get();
    x_140->prev = x_139.get();
    x_137(x_139);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_138->children),
      [&](const auto &x_142) {
        x_138->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_141) {
        x_138->first = x_141.get();
        x_141->parent = x_138.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_138->children),
      [&](const auto &x_144) {
        x_138->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_143) {
        x_138->last = x_143.get();
        x_143->parent = x_138.get();
        x_137(x_143);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_32(const auto &x_138) { return x_137(x_138); }
Unit x_145(const auto &x_146, const auto &x_147, const auto &x_148) {
  auto x_149 = ListHeadExn(x_146);
  auto x_150 = ListTailExn(x_146);
  if (ListIsEmpty(x_150)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_147->children, x_149)));
    auto x_151 = ListSplitN(x_147->children, x_149);
    auto x_152 = Zro(x_151);
    auto x_153 = Fst(x_151);
    auto x_154 = ListHeadExn(x_153);
    auto x_155 = ListTailExn(x_153);
    x_147->children = ListAppend(x_152, x_155);
    OptionMatch(
        x_154->prev, [&](const auto &x_157) { return MakeUnit(); },
        [&](const auto &x_156) {
          x_156->next = ToPath(x_154->next);
          return MakeUnit();
        });
    OptionMatch(
        x_154->next, [&](const auto &x_159) { return MakeUnit(); },
        [&](const auto &x_158) {
          x_158->prev = ToPath(x_154->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_152)) {
      x_147->first = ToPath(ListHead(x_155));
    }
    if (ListIsEmpty(x_155)) {
      x_147->last = ToPath(ListLast(x_152));
    }
    return MakeUnit();
  } else {
    return x_145(x_150, ListNthExn(x_147->children, x_149), x_148);
  }
}
Unit remove_node_x_30(const auto &x_146, const auto &x_147, const auto &x_148) { return x_145(x_146, x_147, x_148); }
Unit recalculate_x_28(const auto &x_166) {
  return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_167) {
    return MetricRecordOverheadTime(TimedOnly([&](const auto &x_168) {
      eval_stmts_x_18(x_166);
      eval_stmts_x_21(x_166);
      return MakeUnit();
    }));
  })));
}
Unit x_169(const auto &x_170, const auto &x_171, const auto &x_172) {
  auto x_173 = ListHeadExn(x_170);
  auto x_174 = ListTailExn(x_170);
  if (ListIsEmpty(x_174)) {
    InputChangeMetric(node_size_x_4(x_172));
    auto x_175 = ListSplitN(x_171->children, x_173);
    auto x_176 = Zro(x_175);
    auto x_177 = Fst(x_175);
    x_171->children = ListAppend(x_176, Cons(x_172, x_177));
    if (ListIsEmpty(x_176)) {
      x_171->first = x_172.get();
    }
    if (ListIsEmpty(x_177)) {
      x_171->last = x_172.get();
    }
    OptionMatch(
        ListLast(x_176),
        [&](const auto &x_179) {
          x_172->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_178) {
          x_172->prev = x_178.get();
          x_178->next = x_172.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_177),
        [&](const auto &x_181) {
          x_172->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_180) {
          x_172->next = x_180.get();
          x_180->prev = x_172.get();
          return MakeUnit();
        });
    x_172->parent = x_171.get();
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_182) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_183) { return MakeUnit(); }));
    })));
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_188) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_189) { return MakeUnit(); }));
    })));
    return MakeUnit();
  } else {
    return x_169(x_174, ListNthExn(x_171->children, x_173), x_172);
  }
}
Unit add_node_x_27(const auto &x_170, const auto &x_171, const auto &x_172) { return x_169(x_170, x_171, x_172); }
Unit x_192(const auto &x_193) {
  ListIter2(x_193->children, [&](const auto &x_194, const auto &x_195) {
    x_194->parent = x_193.get();
    x_195->parent = x_193.get();
    x_194->next = x_195.get();
    x_195->prev = x_194.get();
    x_192(x_194);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_193->children),
      [&](const auto &x_197) {
        x_193->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_196) {
        x_193->first = x_196.get();
        x_196->parent = x_193.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_193->children),
      [&](const auto &x_199) {
        x_193->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_198) {
        x_193->last = x_198.get();
        x_198->parent = x_193.get();
        x_192(x_198);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_25(const auto &x_193) { return x_192(x_193); }
Unit eval_stmts_x_21(const auto &x_200) {
  return MetricRecordEval(TimedOnly([&](const auto &x_201) {
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_202) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_203) { return eval_stmts_x_204(x_200); }));
    })));
    ListIter(x_200->children, [&](const auto &x_205) {
      return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_206) {
        return MetricRecordOverheadTime(TimedOnly([&](const auto &x_207) { return eval_stmts_x_21(x_205); }));
      })));
    });
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_208) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_209) { return eval_stmts_x_210(x_200); }));
    })));
    return MakeUnit();
  }));
}
Unit eval_stmts_x_18(const auto &x_211) {
  return MetricRecordEval(TimedOnly([&](const auto &x_212) {
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_213) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_214) { return eval_stmts_x_215(x_211); }));
    })));
    ListIter(x_211->children, [&](const auto &x_216) {
      return MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_217) {
        return MetricRecordOverheadTime(TimedOnly([&](const auto &x_218) { return eval_stmts_x_18(x_216); }));
      })));
    });
    MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_219) {
      return MetricRecordOverheadTime(TimedOnly([&](const auto &x_220) { return eval_stmts_x_221(x_211); }));
    })));
    return MakeUnit();
  }));
}
Unit x_222(const auto &x_223) {
  ListIter2(x_223->children, [&](const auto &x_224, const auto &x_225) {
    x_224->parent = x_223.get();
    x_225->parent = x_223.get();
    x_224->next = x_225.get();
    x_225->prev = x_224.get();
    x_222(x_224);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_223->children),
      [&](const auto &x_227) {
        x_223->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_226) {
        x_223->first = x_226.get();
        x_226->parent = x_223.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_223->children),
      [&](const auto &x_229) {
        x_223->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_228) {
        x_223->last = x_228.get();
        x_228->parent = x_223.get();
        x_222(x_228);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_223) { return x_222(x_223); }
int64_t x_230(const auto &x_231) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_231->children, [&](const auto &x_232) { return x_230(x_232); }));
}
int64_t node_size_x_4(const auto &x_231) { return x_230(x_231); }
int64_t x_233(const auto &x_234) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_234->children, [&](const auto &x_235) { return x_233(x_235); }));
}
int64_t layout_size_x_3(const auto &x_234) { return x_233(x_234); }
LayoutNode x_236(const auto &x_237) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_237)), [&](const auto &x_238) { return x_236(x_238); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_237) { return x_236(x_237); }
Node x_239(const auto &x_240) {
  return MakeNode(x_240->name, x_240->attr, x_240->prop, x_240->extern_id,
                  ListMap(x_240->children, [&](const auto &x_241) { return x_239(x_241); }));
}
Node node_to_fs_node_x_1(const auto &x_240) { return x_239(x_240); }
Node x_242(const auto &x_243) {
  return MakeNode(JsonToString(JsonMember("name", x_243)), JsonToDict(JsonMember("attributes", x_243)),
                  JsonToDict(JsonMember("properties", x_243)), JsonToInt(JsonMember("id", x_243)),
                  ListMap(JsonToList(JsonMember("children", x_243)), [&](const auto &x_244) { return x_242(x_244); }));
}
Node json_to_node_aux_x_0(const auto &x_243) { return x_242(x_243); }
int main() {
  WithOutFile("github_nologin.out", [&](const auto &x_5) {
    PrintEndline("RUNNING FS_D");
    return WithInFile("command.json", [&](const auto &x_6) {
      auto x_7 = MakeRef(static_cast<int64_t>(0));
      auto x_8 = FreshMetric();
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
      MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_16) {
        return MetricRecordOverheadTime(TimedOnly([&](const auto &x_17) { return eval_stmts_x_18(x_14); }));
      })));
      MetricRecordOverheadL2m(Zro(L2mRaw([&](const auto &x_19) {
        return MetricRecordOverheadTime(TimedOnly([&](const auto &x_20) { return eval_stmts_x_21(x_14); }));
      })));
      JsonToChannel(x_5, [&]() {
        auto x_1321 = FreshJson();
        WriteJson(x_1321, "name", "FS_D");
        WriteJson(x_1321, "diff_num", ReadRef(x_7));
        WriteJson(x_1321, "read_count", MetricReadCount());
        WriteJson(x_1321, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1321, "write_count", MetricWriteCount());
        WriteJson(x_1321, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1321, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1321, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1321, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1321, "overhead_time", MetricOverheadTime());
        WriteJson(x_1321, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_1321, "eval_time", MetricEvalCount());
        WriteJson(x_1321, "html", "");
        WriteJson(x_1321, "command", StackToList(x_11));
        return x_1321;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_22) {
        auto x_23 = JsonOfString(x_22);
        PushStack(x_11, x_23);
        std::string x_1323 = JsonToString(JsonMember("name", x_23));
        if (x_1323 == "add") {
          return add_node_x_27(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_26) { return JsonToInt(x_26); }), x_14,
              [&]() {
                auto x_24 = json_to_node_aux_x_0(JsonMember("node", x_23));
                x_24->parent = nullptr;
                x_24->prev = nullptr;
                x_24->next = nullptr;
                set_children_relation_x_25(x_24);
                return x_24;
              }());
        } else if (x_1323 == "recalculate") {
          recalculate_x_28(x_14);
          JsonToChannel(x_5, [&]() {
            auto x_1322 = FreshJson();
            WriteJson(x_1322, "name", "FS_D");
            WriteJson(x_1322, "diff_num", ReadRef(x_7));
            WriteJson(x_1322, "read_count", MetricReadCount());
            WriteJson(x_1322, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1322, "write_count", MetricWriteCount());
            WriteJson(x_1322, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1322, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1322, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1322, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1322, "overhead_time", MetricOverheadTime());
            WriteJson(x_1322, "overhead_l2m", MetricOverheadL2m());
            WriteJson(x_1322, "eval_time", MetricEvalCount());
            WriteJson(x_1322, "html", "");
            WriteJson(x_1322, "command", StackToList(x_11));
            return x_1322;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1323 == "remove") {
          return remove_node_x_30(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_29) { return JsonToInt(x_29); }), x_14,
              MakeUnit());
        } else if (x_1323 == "replace") {
          return replace_node_x_34(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              [&]() {
                auto x_31 = json_to_node_aux_x_0(JsonMember("node", x_23));
                x_31->parent = nullptr;
                x_31->prev = nullptr;
                x_31->next = nullptr;
                set_children_relation_x_32(x_31);
                return x_31;
              }());
        } else if (x_1323 == "replace_value") {
          return replace_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_23)), JsonToString(JsonMember("key", x_23))),
                       JsonToValue(JsonMember("value", x_23))));
        } else if (x_1323 == "delete_value") {
          return delete_value_x_38(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_23)), JsonToString(JsonMember("key", x_23))));
        } else if (x_1323 == "insert_value") {
          return insert_value_x_40(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_23)), JsonToString(JsonMember("key", x_23))),
                       JsonToValue(JsonMember("value", x_23))));
        } else if (x_1323 == "layout_remove") {
          return remove_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              MakeUnit());
        } else if (x_1323 == "layout_add") {
          return add_layout_node_x_44(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_43) { return JsonToInt(x_43); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_23)));
        } else if (x_1323 == "layout_replace") {
          return replace_layout_node_x_46(
              ListMap(JsonToList(JsonMember("path", x_23)), [&](const auto &x_45) { return JsonToInt(x_45); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_23)));
        } else if (x_1323 == "layout_info_changed") {
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