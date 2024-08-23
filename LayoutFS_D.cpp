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
Unit var_modified_x_471(const auto &x_473);
auto eval_expr_x_468(const auto &x_478);
Unit var_modified_x_466(const auto &x_487);
auto eval_expr_x_463(const auto &x_490);
Unit var_modified_x_461(const auto &x_495);
auto eval_expr_x_458(const auto &x_499);
Unit var_modified_x_456(const auto &x_526);
auto eval_expr_x_453(const auto &x_532);
Unit var_modified_x_451(const auto &x_545);
auto eval_expr_x_448(const auto &x_550);
Unit var_modified_x_446(const auto &x_555);
auto eval_expr_x_443(const auto &x_559);
Unit var_modified_x_441(const auto &x_586);
auto eval_expr_x_438(const auto &x_592);
Unit var_modified_x_436(const auto &x_603);
auto eval_expr_x_433(const auto &x_606);
Unit var_modified_x_431(const auto &x_617);
auto eval_expr_x_428(const auto &x_620);
Unit var_modified_x_426(const auto &x_627);
auto eval_expr_x_423(const auto &x_631);
Unit var_modified_x_421(const auto &x_642);
auto eval_expr_x_418(const auto &x_645);
Unit var_modified_x_416(const auto &x_648);
auto eval_expr_x_413(const auto &x_651);
Unit var_modified_x_407(const auto &x_654);
auto eval_expr_x_404(const auto &x_664);
Unit var_modified_x_402(const auto &x_709);
auto eval_expr_x_399(const auto &x_712);
Unit var_modified_x_397(const auto &x_721);
auto eval_expr_x_394(const auto &x_726);
Unit var_modified_x_392(const auto &x_729);
auto eval_expr_x_389(const auto &x_734);
Unit var_modified_x_387(const auto &x_739);
auto eval_expr_x_384(const auto &x_742);
Unit var_modified_x_382(const auto &x_743);
auto eval_expr_x_379(const auto &x_746);
Unit var_modified_x_377(const auto &x_749);
auto eval_expr_x_374(const auto &x_753);
Unit var_modified_x_372(const auto &x_764);
auto eval_expr_x_369(const auto &x_767);
Unit var_modified_x_367(const auto &x_770);
auto eval_expr_x_364(const auto &x_774);
Unit var_modified_x_362(const auto &x_785);
auto eval_expr_x_359(const auto &x_789);
Unit var_modified_x_357(const auto &x_802);
auto eval_expr_x_354(const auto &x_807);
Unit var_modified_x_352(const auto &x_822);
auto eval_expr_x_349(const auto &x_825);
Unit var_modified_x_347(const auto &x_828);
auto eval_expr_x_344(const auto &x_834);
Unit var_modified_x_342(const auto &x_839);
auto eval_expr_x_339(const auto &x_845);
Unit var_modified_x_337(const auto &x_850);
auto eval_expr_x_334(const auto &x_854);
Unit var_modified_x_332(const auto &x_857);
auto eval_expr_x_329(const auto &x_861);
Unit var_modified_x_327(const auto &x_864);
auto eval_expr_x_324(const auto &x_869);
Unit var_modified_x_322(const auto &x_872);
auto eval_expr_x_319(const auto &x_877);
Unit var_modified_x_315(const auto &x_880);
auto eval_expr_x_312(const auto &x_888);
Unit var_modified_x_310(const auto &x_903);
auto eval_expr_x_307(const auto &x_911);
Unit var_modified_x_305(const auto &x_918);
auto eval_expr_x_302(const auto &x_926);
Unit var_modified_x_300(const auto &x_931);
auto eval_expr_x_297(const auto &x_934);
Unit var_modified_x_295(const auto &x_939);
auto eval_expr_x_292(const auto &x_943);
Unit var_modified_x_290(const auto &x_1022);
auto eval_expr_x_287(const auto &x_1025);
Unit var_modified_x_285(const auto &x_1050);
auto eval_expr_x_282(const auto &x_1054);
Unit var_modified_x_280(const auto &x_1057);
auto eval_expr_x_277(const auto &x_1060);
Unit var_modified_x_275(const auto &x_1065);
auto eval_expr_x_272(const auto &x_1073);
Unit var_modified_x_270(const auto &x_1078);
auto eval_expr_x_267(const auto &x_1086);
Unit var_modified_x_265(const auto &x_1091);
auto eval_expr_x_262(const auto &x_1097);
Unit var_modified_x_260(const auto &x_1104);
auto eval_expr_x_257(const auto &x_1107);
Unit var_modified_x_255(const auto &x_1112);
auto eval_expr_x_252(const auto &x_1116);
Unit var_modified_x_250(const auto &x_1199);
auto eval_expr_x_247(const auto &x_1202);
Unit var_modified_x_245(const auto &x_1205);
auto eval_expr_x_242(const auto &x_1208);
Unit var_modified_x_240(const auto &x_1233);
auto eval_expr_x_237(const auto &x_1236);
Unit var_modified_x_235(const auto &x_1243);
auto eval_expr_x_232(const auto &x_1247);
Unit eval_stmts_x_206(const auto &x_230);
Unit eval_stmts_x_202(const auto &x_317);
Unit eval_stmts_x_198(const auto &x_409);
Unit eval_stmts_x_194(const auto &x_411);
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48);
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55);
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62);
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69);
Unit x_77(const auto &x_78, const auto &x_79, const auto &x_80);
Unit x_86(const auto &x_87, const auto &x_88, const auto &x_89);
Unit x_97(const auto &x_98, const auto &x_99, const auto &x_100);
Unit x_133(const auto &x_134);
Unit x_141(const auto &x_142, const auto &x_143, const auto &x_144);
Unit x_162(const auto &x_163, const auto &x_164, const auto &x_165);
Unit x_183(const auto &x_184);
Unit eval_stmts_x_19(const auto &x_191);
Unit eval_stmts_x_17(const auto &x_199);
Unit x_207(const auto &x_208);
int64_t x_215(const auto &x_216);
int64_t x_218(const auto &x_219);
LayoutNode x_221(const auto &x_222);
Node x_224(const auto &x_225);
Node x_227(const auto &x_228);
Unit var_modified_x_471(const auto &x_473) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_474) { return MakeUnit(); }));
}
auto eval_expr_x_468(const auto &x_478) {
  if ((x_478->prev != nullptr) && (!(x_478->prev)->var_line_break)) {
    return max(x_478->var_height_external, (x_478->prev)->var_line_height);
  } else {
    return x_478->var_height_external;
  }
}
Unit var_modified_x_466(const auto &x_487) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_488) { return MakeUnit(); }));
}
auto eval_expr_x_463(const auto &x_490) {
  if (eq(x_490->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_490->var_height_internal;
  }
}
Unit var_modified_x_461(const auto &x_495) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_496) { return MakeUnit(); }));
}
auto eval_expr_x_458(const auto &x_499) {
  if (x_499->var_intrinsic_height_is_height) {
    return x_499->var_intrinsic_height_internal;
  } else {
    if ((x_499->parent != nullptr) && (x_499->parent)->var_is_flex_column) {
      return plus(x_499->var_intrinsic_height_internal, mult(x_499->var_flex_amount, (x_499->parent)->var_flex_unit));
    } else {
      if (x_499->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_499->var_box_height, divide(x_499->var_height_expr.r.a0, 100.));
      } else {
        return max(x_499->var_box_height, x_499->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_456(const auto &x_526) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_527) { return MakeUnit(); }));
}
auto eval_expr_x_453(const auto &x_532) {
  if (x_532->prev != nullptr) {
    if (x_532->var_line_break || (x_532->prev)->var_line_break) {
      return plus((x_532->prev)->var_y, (x_532->prev)->var_line_height);
    } else {
      return (x_532->prev)->var_y;
    }
  } else {
    if (x_532->parent != nullptr) {
      return (x_532->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_451(const auto &x_545) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_546) { return MakeUnit(); }));
}
auto eval_expr_x_448(const auto &x_550) {
  if (eq(x_550->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_550->var_width_internal;
  }
}
Unit var_modified_x_446(const auto &x_555) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_556) { return MakeUnit(); }));
}
auto eval_expr_x_443(const auto &x_559) {
  if (x_559->var_intrinsic_width_is_width) {
    return x_559->var_intrinsic_width_internal;
  } else {
    if ((x_559->parent != nullptr) && (x_559->parent)->var_is_flex_row) {
      return plus(x_559->var_intrinsic_width_internal, mult(x_559->var_flex_amount, (x_559->parent)->var_flex_unit));
    } else {
      if (x_559->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_559->var_box_width, divide(x_559->var_width_expr.r.a0, 100.));
      } else {
        return max(x_559->var_box_width, x_559->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_441(const auto &x_586) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_587) { return MakeUnit(); }));
}
auto eval_expr_x_438(const auto &x_592) {
  if (x_592->prev != nullptr) {
    if (x_592->var_line_break || (x_592->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_592->prev)->var_x, (x_592->prev)->var_width_external);
    }
  } else {
    if (x_592->parent != nullptr) {
      return (x_592->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_436(const auto &x_603) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_604) { return MakeUnit(); }));
}
auto eval_expr_x_433(const auto &x_606) {
  if (gt(x_606->var_left_over, 0.)) {
    return divide(x_606->var_left_over, x_606->var_flex_grow_sum);
  } else {
    return divide(x_606->var_left_over, x_606->var_flex_shrink_sum);
  }
}
Unit var_modified_x_431(const auto &x_617) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_618) { return MakeUnit(); }));
}
auto eval_expr_x_428(const auto &x_620) {
  if ((x_620->parent != nullptr) && gt((x_620->parent)->var_left_over, 0.)) {
    return x_620->var_flex_grow;
  } else {
    return x_620->var_flex_shrink;
  }
}
Unit var_modified_x_426(const auto &x_627) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_628) { return MakeUnit(); }));
}
auto eval_expr_x_423(const auto &x_631) {
  if (x_631->var_is_flex_row) {
    return minus(x_631->var_box_width, (x_631->last != nullptr) ? ((x_631->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_631->var_box_height, (x_631->last != nullptr) ? ((x_631->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_421(const auto &x_642) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_643) { return MakeUnit(); }));
}
auto eval_expr_x_418(const auto &x_645) {
  if (x_645->parent != nullptr) {
    return (x_645->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_416(const auto &x_648) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_649) { return MakeUnit(); }));
}
auto eval_expr_x_413(const auto &x_651) {
  if (x_651->parent != nullptr) {
    return (x_651->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_407(const auto &x_654) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_655) { return MakeUnit(); }));
}
auto eval_expr_x_404(const auto &x_664) {
  if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_664->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_664->parent != nullptr) &&
          (eq((x_664->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_664->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_664->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_664->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_664->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_664->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_402(const auto &x_709) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_710) { return MakeUnit(); }));
}
auto eval_expr_x_399(const auto &x_712) {
  return (((!(x_712->parent != nullptr)) || (x_712->parent)->var_visible) &&
          (neq(x_712->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_712->var_inside_svg) && (!x_712->var_disabled))));
}
Unit var_modified_x_397(const auto &x_721) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_722) { return MakeUnit(); }));
}
auto eval_expr_x_394(const auto &x_726) {
  if (eq(x_726->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_726->parent != nullptr) && (x_726->parent)->var_disabled);
  }
}
Unit var_modified_x_392(const auto &x_729) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_730) { return MakeUnit(); }));
}
auto eval_expr_x_389(const auto &x_734) {
  return ((x_734->parent != nullptr) && ((x_734->parent)->var_is_svg_block || (x_734->parent)->var_inside_svg));
}
Unit var_modified_x_387(const auto &x_739) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_740) { return MakeUnit(); }));
}
auto eval_expr_x_384(const auto &x_742) { return eq(x_742->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_382(const auto &x_743) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_744) { return MakeUnit(); }));
}
auto eval_expr_x_379(const auto &x_746) {
  return neq(x_746->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_377(const auto &x_749) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_750) { return MakeUnit(); }));
}
auto eval_expr_x_374(const auto &x_753) {
  if (!x_753->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_753->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_753->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_753->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_372(const auto &x_764) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_765) { return MakeUnit(); }));
}
auto eval_expr_x_369(const auto &x_767) {
  return neq(x_767->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_367(const auto &x_770) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_771) { return MakeUnit(); }));
}
auto eval_expr_x_364(const auto &x_774) {
  if (!x_774->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_774->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_774->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_774->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_362(const auto &x_785) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_786) { return MakeUnit(); }));
}
auto eval_expr_x_359(const auto &x_789) {
  if ((x_789->parent != nullptr) &&
      (eq((x_789->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_789->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_789->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_789->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_357(const auto &x_802) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_803) { return MakeUnit(); }));
}
auto eval_expr_x_354(const auto &x_807) {
  if ((x_807->parent != nullptr) &&
      (eq((x_807->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_807->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_807->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_807->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_352(const auto &x_822) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_823) { return MakeUnit(); }));
}
auto eval_expr_x_349(const auto &x_825) {
  if (x_825->has_prop_flex_direction) {
    return x_825->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_347(const auto &x_828) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_829) { return MakeUnit(); }));
}
auto eval_expr_x_344(const auto &x_834) {
  return plus((x_834->prev != nullptr) ? ((x_834->prev)->var_flex_shrink_sum) : (0.), x_834->var_flex_shrink);
}
Unit var_modified_x_342(const auto &x_839) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_840) { return MakeUnit(); }));
}
auto eval_expr_x_339(const auto &x_845) {
  return plus((x_845->prev != nullptr) ? ((x_845->prev)->var_flex_grow_sum) : (0.), x_845->var_flex_grow);
}
Unit var_modified_x_337(const auto &x_850) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_851) { return MakeUnit(); }));
}
auto eval_expr_x_334(const auto &x_854) {
  if (x_854->has_prop_flex_shrink) {
    return (x_854->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_332(const auto &x_857) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_858) { return MakeUnit(); }));
}
auto eval_expr_x_329(const auto &x_861) {
  if (x_861->has_prop_flex_grow) {
    return (x_861->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_327(const auto &x_864) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_865) { return MakeUnit(); }));
}
auto eval_expr_x_324(const auto &x_869) {
  if (x_869->has_prop_position) {
    return x_869->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_322(const auto &x_872) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_873) { return MakeUnit(); }));
}
auto eval_expr_x_319(const auto &x_877) {
  if (x_877->has_prop_display) {
    return x_877->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_315(const auto &x_880) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_881) { return MakeUnit(); }));
}
auto eval_expr_x_312(const auto &x_888) {
  if (x_888->prev != nullptr) {
    if (x_888->var_line_break) {
      return plus((x_888->prev)->var_finished_intrinsic_height_sum,
                  plus((x_888->prev)->var_intrinsic_current_line_height, x_888->var_intrinsic_height_external));
    } else {
      return (x_888->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_888->var_line_break) {
      return x_888->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_310(const auto &x_903) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_904) { return MakeUnit(); }));
}
auto eval_expr_x_307(const auto &x_911) {
  if (x_911->var_line_break) {
    return 0.;
  } else {
    return max(x_911->var_intrinsic_height_external,
               (x_911->prev != nullptr) ? ((x_911->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_305(const auto &x_918) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_919) { return MakeUnit(); }));
}
auto eval_expr_x_302(const auto &x_926) {
  return plus((x_926->prev != nullptr) ? ((x_926->prev)->var_intrinsic_height_sum) : (0.),
              x_926->var_intrinsic_height_external);
}
Unit var_modified_x_300(const auto &x_931) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_932) { return MakeUnit(); }));
}
auto eval_expr_x_297(const auto &x_934) {
  if (eq(x_934->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_934->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_295(const auto &x_939) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_940) { return MakeUnit(); }));
}
auto eval_expr_x_292(const auto &x_943) {
  if (eq(x_943->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_943->var_inside_svg) {
      return 0.;
    } else {
      if (x_943->var_disabled) {
        return 0.;
      } else {
        if (neq(x_943->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_943->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_943->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_943->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_943->var_height_expr.r.a0;
          } else {
            if (x_943->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_943->var_height_expr.r.a0;
            } else {
              return x_943->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_943->var_children_intrinsic_height,
              (eq(x_943->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_943->var_is_default_case)
                         ? (0.)
                         : ((eq(x_943->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_943->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_943->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_943->var_has_height_attr &&
                                                  (x_943->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_943->var_height_attr_expr.r.a0)
                                                     : ((x_943->has_attr_viewBox)
                                                            ? (x_943->attr_viewBox.r.a3)
                                                            : (mult((x_943->attr_viewBox.r.a3),
                                                                    divide(x_943->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_943->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_943->var_has_height_attr)
                                                            ? (x_943->var_height_attr_expr.r.a0)
                                                            : ((x_943->has_attr_image_height &&
                                                                (!x_943->var_has_width_attr))
                                                                   ? (int_to_float(x_943->attr_image_height))
                                                                   : ((neq(x_943->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult((x_943->var_width_attr_expr.r.a0),
                                                                                  divide(int_to_float(
                                                                                             x_943->attr_image_height),
                                                                                         int_to_float(
                                                                                             x_943->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_943->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_943->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_290(const auto &x_1022) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1023) { return MakeUnit(); }));
}
auto eval_expr_x_287(const auto &x_1025) {
  if (eq(x_1025->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1025->var_inside_svg || x_1025->var_disabled)) {
    return true;
  } else {
    if ((x_1025->parent != nullptr) && (x_1025->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1025->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1025->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1025->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1025->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1025->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_285(const auto &x_1050) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1051) { return MakeUnit(); }));
}
auto eval_expr_x_282(const auto &x_1054) {
  if (x_1054->has_prop_height) {
    return x_1054->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_280(const auto &x_1057) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1058) { return MakeUnit(); }));
}
auto eval_expr_x_277(const auto &x_1060) {
  if (x_1060->last != nullptr) {
    return plus((x_1060->last)->var_finished_intrinsic_height_sum, (x_1060->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_275(const auto &x_1065) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1066) { return MakeUnit(); }));
}
auto eval_expr_x_272(const auto &x_1073) {
  return plus((x_1073->prev != nullptr) ? ((x_1073->prev)->var_intrinsic_width_sum) : (0.),
              x_1073->var_intrinsic_width_external);
}
Unit var_modified_x_270(const auto &x_1078) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1079) { return MakeUnit(); }));
}
auto eval_expr_x_267(const auto &x_1086) {
  return max(x_1086->var_intrinsic_current_line_width,
             (x_1086->prev != nullptr) ? ((x_1086->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_265(const auto &x_1091) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1092) { return MakeUnit(); }));
}
auto eval_expr_x_262(const auto &x_1097) {
  return plus(x_1097->var_intrinsic_width_external,
              ((x_1097->prev != nullptr) && (!(x_1097->prev)->var_line_break))
                  ? ((x_1097->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_260(const auto &x_1104) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1105) { return MakeUnit(); }));
}
auto eval_expr_x_257(const auto &x_1107) {
  if (eq(x_1107->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1107->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_255(const auto &x_1112) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1113) { return MakeUnit(); }));
}
auto eval_expr_x_252(const auto &x_1116) {
  if (eq(x_1116->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1116->var_inside_svg) {
      return 0.;
    } else {
      if (x_1116->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1116->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1116->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1116->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1116->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1116->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1116->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1116->var_width_expr.r.a0;
          } else {
            return x_1116->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1116->var_children_intrinsic_width,
              (eq(x_1116->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1116->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1116->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1116->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1116->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1116->var_has_width_attr &&
                                                  (x_1116->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1116->var_width_attr_expr.r.a0)
                                                     : (((!x_1116->var_has_width_attr) && x_1116->has_attr_viewBox)
                                                            ? (x_1116->attr_viewBox.r.a2)
                                                            : (mult((x_1116->attr_viewBox.r.a2),
                                                                    divide(x_1116->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1116->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1116->var_has_width_attr)
                                                            ? (x_1116->var_width_attr_expr.r.a0)
                                                            : ((x_1116->has_attr_image_width &&
                                                                (!x_1116->var_has_height_attr))
                                                                   ? (int_to_float(x_1116->attr_image_width))
                                                                   : ((neq(x_1116->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1116->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1116->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1116->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1116->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1116->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_250(const auto &x_1199) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1200) { return MakeUnit(); }));
}
auto eval_expr_x_247(const auto &x_1202) {
  if (x_1202->last != nullptr) {
    return (x_1202->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_245(const auto &x_1205) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1206) { return MakeUnit(); }));
}
auto eval_expr_x_242(const auto &x_1208) {
  if (eq(x_1208->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1208->var_inside_svg || x_1208->var_disabled)) {
    return true;
  } else {
    if ((x_1208->parent != nullptr) && (x_1208->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1208->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1208->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1208->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1208->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1208->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_240(const auto &x_1233) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1234) { return MakeUnit(); }));
}
auto eval_expr_x_237(const auto &x_1236) {
  if (eq(x_1236->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1236->var_inside_svg) {
      return true;
    } else {
      if (x_1236->var_disabled) {
        return true;
      } else {if ( eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_1236->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_235(const auto &x_1243) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1244) { return MakeUnit(); }));
}
auto eval_expr_x_232(const auto &x_1247) {
  if (x_1247->has_prop_width) {
    return x_1247->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_206(const auto &x_230) {
  return MetricRecordEval(TimedOnly([&](const auto &x_231) {
    WriteMetric();
    auto x_233 = eval_expr_x_232(x_230);
    if (x_230->has_var_width_expr) {
      auto x_234 = x_230->var_width_expr;
      if (!EqualValue(x_234, x_233)) {
        var_modified_x_235(x_230);
      }
    }
    x_230->has_var_width_expr = true;
    x_230->var_width_expr = AsDEString(x_233);
    WriteMetric();
    auto x_238 = eval_expr_x_237(x_230);
    if (x_230->has_var_is_default_case) {
      auto x_239 = x_230->var_is_default_case;
      if (!EqualValue(x_239, x_238)) {
        var_modified_x_240(x_230);
      }
    }
    x_230->has_var_is_default_case = true;
    x_230->var_is_default_case = Asbool(x_238);
    WriteMetric();
    auto x_243 = eval_expr_x_242(x_230);
    if (x_230->has_var_intrinsic_width_is_width) {
      auto x_244 = x_230->var_intrinsic_width_is_width;
      if (!EqualValue(x_244, x_243)) {
        var_modified_x_245(x_230);
      }
    }
    x_230->has_var_intrinsic_width_is_width = true;
    x_230->var_intrinsic_width_is_width = Asbool(x_243);
    WriteMetric();
    auto x_248 = eval_expr_x_247(x_230);
    if (x_230->has_var_children_intrinsic_width) {
      auto x_249 = x_230->var_children_intrinsic_width;
      if (!EqualValue(x_249, x_248)) {
        var_modified_x_250(x_230);
      }
    }
    x_230->has_var_children_intrinsic_width = true;
    x_230->var_children_intrinsic_width = Asdouble(x_248);
    WriteMetric();
    auto x_253 = eval_expr_x_252(x_230);
    if (x_230->has_var_intrinsic_width_internal) {
      auto x_254 = x_230->var_intrinsic_width_internal;
      if (!EqualValue(x_254, x_253)) {
        var_modified_x_255(x_230);
      }
    }
    x_230->has_var_intrinsic_width_internal = true;
    x_230->var_intrinsic_width_internal = Asdouble(x_253);
    WriteMetric();
    auto x_258 = eval_expr_x_257(x_230);
    if (x_230->has_var_intrinsic_width_external) {
      auto x_259 = x_230->var_intrinsic_width_external;
      if (!EqualValue(x_259, x_258)) {
        var_modified_x_260(x_230);
      }
    }
    x_230->has_var_intrinsic_width_external = true;
    x_230->var_intrinsic_width_external = Asdouble(x_258);
    WriteMetric();
    auto x_263 = eval_expr_x_262(x_230);
    if (x_230->has_var_intrinsic_current_line_width) {
      auto x_264 = x_230->var_intrinsic_current_line_width;
      if (!EqualValue(x_264, x_263)) {
        var_modified_x_265(x_230);
      }
    }
    x_230->has_var_intrinsic_current_line_width = true;
    x_230->var_intrinsic_current_line_width = Asdouble(x_263);
    WriteMetric();
    auto x_268 = eval_expr_x_267(x_230);
    if (x_230->has_var_intrinsic_width_max) {
      auto x_269 = x_230->var_intrinsic_width_max;
      if (!EqualValue(x_269, x_268)) {
        var_modified_x_270(x_230);
      }
    }
    x_230->has_var_intrinsic_width_max = true;
    x_230->var_intrinsic_width_max = Asdouble(x_268);
    WriteMetric();
    auto x_273 = eval_expr_x_272(x_230);
    if (x_230->has_var_intrinsic_width_sum) {
      auto x_274 = x_230->var_intrinsic_width_sum;
      if (!EqualValue(x_274, x_273)) {
        var_modified_x_275(x_230);
      }
    }
    x_230->has_var_intrinsic_width_sum = true;
    x_230->var_intrinsic_width_sum = Asdouble(x_273);
    WriteMetric();
    auto x_278 = eval_expr_x_277(x_230);
    if (x_230->has_var_children_intrinsic_height) {
      auto x_279 = x_230->var_children_intrinsic_height;
      if (!EqualValue(x_279, x_278)) {
        var_modified_x_280(x_230);
      }
    }
    x_230->has_var_children_intrinsic_height = true;
    x_230->var_children_intrinsic_height = Asdouble(x_278);
    WriteMetric();
    auto x_283 = eval_expr_x_282(x_230);
    if (x_230->has_var_height_expr) {
      auto x_284 = x_230->var_height_expr;
      if (!EqualValue(x_284, x_283)) {
        var_modified_x_285(x_230);
      }
    }
    x_230->has_var_height_expr = true;
    x_230->var_height_expr = AsDEString(x_283);
    WriteMetric();
    auto x_288 = eval_expr_x_287(x_230);
    if (x_230->has_var_intrinsic_height_is_height) {
      auto x_289 = x_230->var_intrinsic_height_is_height;
      if (!EqualValue(x_289, x_288)) {
        var_modified_x_290(x_230);
      }
    }
    x_230->has_var_intrinsic_height_is_height = true;
    x_230->var_intrinsic_height_is_height = Asbool(x_288);
    WriteMetric();
    auto x_293 = eval_expr_x_292(x_230);
    if (x_230->has_var_intrinsic_height_internal) {
      auto x_294 = x_230->var_intrinsic_height_internal;
      if (!EqualValue(x_294, x_293)) {
        var_modified_x_295(x_230);
      }
    }
    x_230->has_var_intrinsic_height_internal = true;
    x_230->var_intrinsic_height_internal = Asdouble(x_293);
    WriteMetric();
    auto x_298 = eval_expr_x_297(x_230);
    if (x_230->has_var_intrinsic_height_external) {
      auto x_299 = x_230->var_intrinsic_height_external;
      if (!EqualValue(x_299, x_298)) {
        var_modified_x_300(x_230);
      }
    }
    x_230->has_var_intrinsic_height_external = true;
    x_230->var_intrinsic_height_external = Asdouble(x_298);
    WriteMetric();
    auto x_303 = eval_expr_x_302(x_230);
    if (x_230->has_var_intrinsic_height_sum) {
      auto x_304 = x_230->var_intrinsic_height_sum;
      if (!EqualValue(x_304, x_303)) {
        var_modified_x_305(x_230);
      }
    }
    x_230->has_var_intrinsic_height_sum = true;
    x_230->var_intrinsic_height_sum = Asdouble(x_303);
    WriteMetric();
    auto x_308 = eval_expr_x_307(x_230);
    if (x_230->has_var_intrinsic_current_line_height) {
      auto x_309 = x_230->var_intrinsic_current_line_height;
      if (!EqualValue(x_309, x_308)) {
        var_modified_x_310(x_230);
      }
    }
    x_230->has_var_intrinsic_current_line_height = true;
    x_230->var_intrinsic_current_line_height = Asdouble(x_308);
    WriteMetric();
    auto x_313 = eval_expr_x_312(x_230);
    if (x_230->has_var_finished_intrinsic_height_sum) {
      auto x_314 = x_230->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_314, x_313)) {
        var_modified_x_315(x_230);
      }
    }
    x_230->has_var_finished_intrinsic_height_sum = true;
    x_230->var_finished_intrinsic_height_sum = Asdouble(x_313);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_202(const auto &x_317) {
  return MetricRecordEval(TimedOnly([&](const auto &x_318) {
    WriteMetric();
    auto x_320 = eval_expr_x_319(x_317);
    if (x_317->has_var_display) {
      auto x_321 = x_317->var_display;
      if (!EqualValue(x_321, x_320)) {
        var_modified_x_322(x_317);
      }
    }
    x_317->has_var_display = true;
    x_317->var_display = AsDEString(x_320);
    WriteMetric();
    auto x_325 = eval_expr_x_324(x_317);
    if (x_317->has_var_position) {
      auto x_326 = x_317->var_position;
      if (!EqualValue(x_326, x_325)) {
        var_modified_x_327(x_317);
      }
    }
    x_317->has_var_position = true;
    x_317->var_position = AsDEString(x_325);
    WriteMetric();
    auto x_330 = eval_expr_x_329(x_317);
    if (x_317->has_var_flex_grow) {
      auto x_331 = x_317->var_flex_grow;
      if (!EqualValue(x_331, x_330)) {
        var_modified_x_332(x_317);
      }
    }
    x_317->has_var_flex_grow = true;
    x_317->var_flex_grow = Asdouble(x_330);
    WriteMetric();
    auto x_335 = eval_expr_x_334(x_317);
    if (x_317->has_var_flex_shrink) {
      auto x_336 = x_317->var_flex_shrink;
      if (!EqualValue(x_336, x_335)) {
        var_modified_x_337(x_317);
      }
    }
    x_317->has_var_flex_shrink = true;
    x_317->var_flex_shrink = Asdouble(x_335);
    WriteMetric();
    auto x_340 = eval_expr_x_339(x_317);
    if (x_317->has_var_flex_grow_sum) {
      auto x_341 = x_317->var_flex_grow_sum;
      if (!EqualValue(x_341, x_340)) {
        var_modified_x_342(x_317);
      }
    }
    x_317->has_var_flex_grow_sum = true;
    x_317->var_flex_grow_sum = Asdouble(x_340);
    WriteMetric();
    auto x_345 = eval_expr_x_344(x_317);
    if (x_317->has_var_flex_shrink_sum) {
      auto x_346 = x_317->var_flex_shrink_sum;
      if (!EqualValue(x_346, x_345)) {
        var_modified_x_347(x_317);
      }
    }
    x_317->has_var_flex_shrink_sum = true;
    x_317->var_flex_shrink_sum = Asdouble(x_345);
    WriteMetric();
    auto x_350 = eval_expr_x_349(x_317);
    if (x_317->has_var_flex_direction) {
      auto x_351 = x_317->var_flex_direction;
      if (!EqualValue(x_351, x_350)) {
        var_modified_x_352(x_317);
      }
    }
    x_317->has_var_flex_direction = true;
    x_317->var_flex_direction = AsDEString(x_350);
    WriteMetric();
    auto x_355 = eval_expr_x_354(x_317);
    if (x_317->has_var_is_flex_row) {
      auto x_356 = x_317->var_is_flex_row;
      if (!EqualValue(x_356, x_355)) {
        var_modified_x_357(x_317);
      }
    }
    x_317->has_var_is_flex_row = true;
    x_317->var_is_flex_row = Asbool(x_355);
    WriteMetric();
    auto x_360 = eval_expr_x_359(x_317);
    if (x_317->has_var_is_flex_column) {
      auto x_361 = x_317->var_is_flex_column;
      if (!EqualValue(x_361, x_360)) {
        var_modified_x_362(x_317);
      }
    }
    x_317->has_var_is_flex_column = true;
    x_317->var_is_flex_column = Asbool(x_360);
    WriteMetric();
    auto x_365 = eval_expr_x_364(x_317);
    if (x_317->has_var_width_attr_expr) {
      auto x_366 = x_317->var_width_attr_expr;
      if (!EqualValue(x_366, x_365)) {
        var_modified_x_367(x_317);
      }
    }
    x_317->has_var_width_attr_expr = true;
    x_317->var_width_attr_expr = AsDEString(x_365);
    WriteMetric();
    auto x_370 = eval_expr_x_369(x_317);
    if (x_317->has_var_has_width_attr) {
      auto x_371 = x_317->var_has_width_attr;
      if (!EqualValue(x_371, x_370)) {
        var_modified_x_372(x_317);
      }
    }
    x_317->has_var_has_width_attr = true;
    x_317->var_has_width_attr = Asbool(x_370);
    WriteMetric();
    auto x_375 = eval_expr_x_374(x_317);
    if (x_317->has_var_height_attr_expr) {
      auto x_376 = x_317->var_height_attr_expr;
      if (!EqualValue(x_376, x_375)) {
        var_modified_x_377(x_317);
      }
    }
    x_317->has_var_height_attr_expr = true;
    x_317->var_height_attr_expr = AsDEString(x_375);
    WriteMetric();
    auto x_380 = eval_expr_x_379(x_317);
    if (x_317->has_var_has_height_attr) {
      auto x_381 = x_317->var_has_height_attr;
      if (!EqualValue(x_381, x_380)) {
        var_modified_x_382(x_317);
      }
    }
    x_317->has_var_has_height_attr = true;
    x_317->var_has_height_attr = Asbool(x_380);
    WriteMetric();
    auto x_385 = eval_expr_x_384(x_317);
    if (x_317->has_var_is_svg_block) {
      auto x_386 = x_317->var_is_svg_block;
      if (!EqualValue(x_386, x_385)) {
        var_modified_x_387(x_317);
      }
    }
    x_317->has_var_is_svg_block = true;
    x_317->var_is_svg_block = Asbool(x_385);
    WriteMetric();
    auto x_390 = eval_expr_x_389(x_317);
    if (x_317->has_var_inside_svg) {
      auto x_391 = x_317->var_inside_svg;
      if (!EqualValue(x_391, x_390)) {
        var_modified_x_392(x_317);
      }
    }
    x_317->has_var_inside_svg = true;
    x_317->var_inside_svg = Asbool(x_390);
    WriteMetric();
    auto x_395 = eval_expr_x_394(x_317);
    if (x_317->has_var_disabled) {
      auto x_396 = x_317->var_disabled;
      if (!EqualValue(x_396, x_395)) {
        var_modified_x_397(x_317);
      }
    }
    x_317->has_var_disabled = true;
    x_317->var_disabled = Asbool(x_395);
    WriteMetric();
    auto x_400 = eval_expr_x_399(x_317);
    if (x_317->has_var_visible) {
      auto x_401 = x_317->var_visible;
      if (!EqualValue(x_401, x_400)) {
        var_modified_x_402(x_317);
      }
    }
    x_317->has_var_visible = true;
    x_317->var_visible = Asbool(x_400);
    WriteMetric();
    auto x_405 = eval_expr_x_404(x_317);
    if (x_317->has_var_line_break) {
      auto x_406 = x_317->var_line_break;
      if (!EqualValue(x_406, x_405)) {
        var_modified_x_407(x_317);
      }
    }
    x_317->has_var_line_break = true;
    x_317->var_line_break = Asbool(x_405);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_198(const auto &x_409) {
  return MetricRecordEval(TimedOnly([&](const auto &x_410) { return MakeUnit(); }));
}
Unit eval_stmts_x_194(const auto &x_411) {
  return MetricRecordEval(TimedOnly([&](const auto &x_412) {
    WriteMetric();
    auto x_414 = eval_expr_x_413(x_411);
    if (x_411->has_var_box_width) {
      auto x_415 = x_411->var_box_width;
      if (!EqualValue(x_415, x_414)) {
        var_modified_x_416(x_411);
      }
    }
    x_411->has_var_box_width = true;
    x_411->var_box_width = Asdouble(x_414);
    WriteMetric();
    auto x_419 = eval_expr_x_418(x_411);
    if (x_411->has_var_box_height) {
      auto x_420 = x_411->var_box_height;
      if (!EqualValue(x_420, x_419)) {
        var_modified_x_421(x_411);
      }
    }
    x_411->has_var_box_height = true;
    x_411->var_box_height = Asdouble(x_419);
    WriteMetric();
    auto x_424 = eval_expr_x_423(x_411);
    if (x_411->has_var_left_over) {
      auto x_425 = x_411->var_left_over;
      if (!EqualValue(x_425, x_424)) {
        var_modified_x_426(x_411);
      }
    }
    x_411->has_var_left_over = true;
    x_411->var_left_over = Asdouble(x_424);
    WriteMetric();
    auto x_429 = eval_expr_x_428(x_411);
    if (x_411->has_var_flex_amount) {
      auto x_430 = x_411->var_flex_amount;
      if (!EqualValue(x_430, x_429)) {
        var_modified_x_431(x_411);
      }
    }
    x_411->has_var_flex_amount = true;
    x_411->var_flex_amount = Asdouble(x_429);
    WriteMetric();
    auto x_434 = eval_expr_x_433(x_411);
    if (x_411->has_var_flex_unit) {
      auto x_435 = x_411->var_flex_unit;
      if (!EqualValue(x_435, x_434)) {
        var_modified_x_436(x_411);
      }
    }
    x_411->has_var_flex_unit = true;
    x_411->var_flex_unit = Asdouble(x_434);
    WriteMetric();
    auto x_439 = eval_expr_x_438(x_411);
    if (x_411->has_var_x) {
      auto x_440 = x_411->var_x;
      if (!EqualValue(x_440, x_439)) {
        var_modified_x_441(x_411);
      }
    }
    x_411->has_var_x = true;
    x_411->var_x = Asdouble(x_439);
    WriteMetric();
    auto x_444 = eval_expr_x_443(x_411);
    if (x_411->has_var_width_internal) {
      auto x_445 = x_411->var_width_internal;
      if (!EqualValue(x_445, x_444)) {
        var_modified_x_446(x_411);
      }
    }
    x_411->has_var_width_internal = true;
    x_411->var_width_internal = Asdouble(x_444);
    WriteMetric();
    auto x_449 = eval_expr_x_448(x_411);
    if (x_411->has_var_width_external) {
      auto x_450 = x_411->var_width_external;
      if (!EqualValue(x_450, x_449)) {
        var_modified_x_451(x_411);
      }
    }
    x_411->has_var_width_external = true;
    x_411->var_width_external = Asdouble(x_449);
    WriteMetric();
    auto x_454 = eval_expr_x_453(x_411);
    if (x_411->has_var_y) {
      auto x_455 = x_411->var_y;
      if (!EqualValue(x_455, x_454)) {
        var_modified_x_456(x_411);
      }
    }
    x_411->has_var_y = true;
    x_411->var_y = Asdouble(x_454);
    WriteMetric();
    auto x_459 = eval_expr_x_458(x_411);
    if (x_411->has_var_height_internal) {
      auto x_460 = x_411->var_height_internal;
      if (!EqualValue(x_460, x_459)) {
        var_modified_x_461(x_411);
      }
    }
    x_411->has_var_height_internal = true;
    x_411->var_height_internal = Asdouble(x_459);
    WriteMetric();
    auto x_464 = eval_expr_x_463(x_411);
    if (x_411->has_var_height_external) {
      auto x_465 = x_411->var_height_external;
      if (!EqualValue(x_465, x_464)) {
        var_modified_x_466(x_411);
      }
    }
    x_411->has_var_height_external = true;
    x_411->var_height_external = Asdouble(x_464);
    WriteMetric();
    auto x_469 = eval_expr_x_468(x_411);
    if (x_411->has_var_line_height) {
      auto x_470 = x_411->var_line_height;
      if (!EqualValue(x_470, x_469)) {
        var_modified_x_471(x_411);
      }
    }
    x_411->has_var_line_height = true;
    x_411->var_line_height = Asdouble(x_469);
    return MakeUnit();
  }));
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
        std::string x_1250 = x_74;
        if (x_1250 == "attributes") {
          std::string x_1251 = x_75;
          if (x_1251 == "width") {
            WriteMetric();
            x_68->has_attr_width = true;
            x_68->attr_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1251 == "image_height") {
            WriteMetric();
            x_68->has_attr_image_height = true;
            x_68->attr_image_height = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1251 == "image_width") {
            WriteMetric();
            x_68->has_attr_image_width = true;
            x_68->attr_image_width = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1251 == "height") {
            WriteMetric();
            x_68->has_attr_height = true;
            x_68->attr_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1251 == "viewBox") {
            WriteMetric();
            x_68->has_attr_viewBox = true;
            x_68->attr_viewBox = AsDEString(x_76);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1250 == "properties") {
          std::string x_1252 = x_75;
          if (x_1252 == "width") {
            WriteMetric();
            x_68->has_prop_width = true;
            x_68->prop_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1252 == "flex-grow") {
            WriteMetric();
            x_68->has_prop_flex_grow = true;
            x_68->prop_flex_grow = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1252 == "height") {
            WriteMetric();
            x_68->has_prop_height = true;
            x_68->prop_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1252 == "display") {
            WriteMetric();
            x_68->has_prop_display = true;
            x_68->prop_display = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1252 == "position") {
            WriteMetric();
            x_68->has_prop_position = true;
            x_68->prop_position = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1252 == "flex-shrink") {
            WriteMetric();
            x_68->has_prop_flex_shrink = true;
            x_68->prop_flex_shrink = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1252 == "flex-direction") {
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
        std::string x_1253 = x_84;
        if (x_1253 == "attributes") {
          std::string x_1254 = x_85;
          if (x_1254 == "width") {
            WriteMetric();
            x_79->has_attr_width = false;
            return MakeUnit();
          } else if (x_1254 == "image_height") {
            WriteMetric();
            x_79->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_1254 == "image_width") {
            WriteMetric();
            x_79->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_1254 == "height") {
            WriteMetric();
            x_79->has_attr_height = false;
            return MakeUnit();
          } else if (x_1254 == "viewBox") {
            WriteMetric();
            x_79->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1253 == "properties") {
          std::string x_1255 = x_85;
          if (x_1255 == "width") {
            WriteMetric();
            x_79->has_prop_width = false;
            return MakeUnit();
          } else if (x_1255 == "flex-grow") {
            WriteMetric();
            x_79->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_1255 == "height") {
            WriteMetric();
            x_79->has_prop_height = false;
            return MakeUnit();
          } else if (x_1255 == "display") {
            WriteMetric();
            x_79->has_prop_display = false;
            return MakeUnit();
          } else if (x_1255 == "position") {
            WriteMetric();
            x_79->has_prop_position = false;
            return MakeUnit();
          } else if (x_1255 == "flex-shrink") {
            WriteMetric();
            x_79->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_1255 == "flex-direction") {
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
        std::string x_1256 = x_94;
        if (x_1256 == "attributes") {
          std::string x_1257 = x_95;
          if (x_1257 == "width") {
            WriteMetric();
            x_88->has_attr_width = false;
            WriteMetric();
            x_88->has_attr_width = true;
            x_88->attr_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1257 == "image_height") {
            WriteMetric();
            x_88->has_attr_image_height = false;
            WriteMetric();
            x_88->has_attr_image_height = true;
            x_88->attr_image_height = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1257 == "image_width") {
            WriteMetric();
            x_88->has_attr_image_width = false;
            WriteMetric();
            x_88->has_attr_image_width = true;
            x_88->attr_image_width = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1257 == "height") {
            WriteMetric();
            x_88->has_attr_height = false;
            WriteMetric();
            x_88->has_attr_height = true;
            x_88->attr_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1257 == "viewBox") {
            WriteMetric();
            x_88->has_attr_viewBox = false;
            WriteMetric();
            x_88->has_attr_viewBox = true;
            x_88->attr_viewBox = AsDEString(x_96);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1256 == "properties") {
          std::string x_1258 = x_95;
          if (x_1258 == "width") {
            WriteMetric();
            x_88->has_prop_width = false;
            WriteMetric();
            x_88->has_prop_width = true;
            x_88->prop_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1258 == "flex-grow") {
            WriteMetric();
            x_88->has_prop_flex_grow = false;
            WriteMetric();
            x_88->has_prop_flex_grow = true;
            x_88->prop_flex_grow = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1258 == "height") {
            WriteMetric();
            x_88->has_prop_height = false;
            WriteMetric();
            x_88->has_prop_height = true;
            x_88->prop_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1258 == "display") {
            WriteMetric();
            x_88->has_prop_display = false;
            WriteMetric();
            x_88->has_prop_display = true;
            x_88->prop_display = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1258 == "position") {
            WriteMetric();
            x_88->has_prop_position = false;
            WriteMetric();
            x_88->has_prop_position = true;
            x_88->prop_position = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1258 == "flex-shrink") {
            WriteMetric();
            x_88->has_prop_flex_shrink = false;
            WriteMetric();
            x_88->has_prop_flex_shrink = true;
            x_88->prop_flex_shrink = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1258 == "flex-direction") {
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
    MetricRecordOverhead(TimedOnly([&](const auto &x_125) { return MakeUnit(); }));
    MetricRecordOverhead(TimedOnly([&](const auto &x_130) { return MakeUnit(); }));
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
Unit x_162(const auto &x_163, const auto &x_164, const auto &x_165) {
  auto x_166 = ListHeadExn(x_163);
  auto x_167 = ListTailExn(x_163);
  if (ListIsEmpty(x_167)) {
    InputChangeMetric(node_size_x_4(x_165));
    auto x_168 = ListSplitN(x_164->children, x_166);
    auto x_169 = Zro(x_168);
    auto x_170 = Fst(x_168);
    x_164->children = ListAppend(x_169, Cons(x_165, x_170));
    if (ListIsEmpty(x_169)) {
      x_164->first = x_165.get();
    }
    if (ListIsEmpty(x_170)) {
      x_164->last = x_165.get();
    }
    OptionMatch(
        ListLast(x_169),
        [&](const auto &x_172) {
          x_165->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_171) {
          x_165->prev = x_171.get();
          x_171->next = x_165.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_170),
        [&](const auto &x_174) {
          x_165->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_173) {
          x_165->next = x_173.get();
          x_173->prev = x_165.get();
          return MakeUnit();
        });
    x_165->parent = x_164.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_175) { return MakeUnit(); }));
    MetricRecordOverhead(TimedOnly([&](const auto &x_180) { return MakeUnit(); }));
    return MakeUnit();
  } else {
    return x_162(x_167, ListNthExn(x_164->children, x_166), x_165);
  }
}
Unit add_node_x_25(const auto &x_163, const auto &x_164, const auto &x_165) { return x_162(x_163, x_164, x_165); }
Unit x_183(const auto &x_184) {
  ListIter2(x_184->children, [&](const auto &x_185, const auto &x_186) {
    x_185->parent = x_184.get();
    x_186->parent = x_184.get();
    x_185->next = x_186.get();
    x_186->prev = x_185.get();
    x_183(x_185);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_184->children),
      [&](const auto &x_188) {
        x_184->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_187) {
        x_184->first = x_187.get();
        x_187->parent = x_184.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_184->children),
      [&](const auto &x_190) {
        x_184->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_189) {
        x_184->last = x_189.get();
        x_189->parent = x_184.get();
        x_183(x_189);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_23(const auto &x_184) { return x_183(x_184); }
Unit eval_stmts_x_19(const auto &x_191) {
  return MetricRecordEval(TimedOnly([&](const auto &x_192) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_193) { return eval_stmts_x_194(x_191); }));
    ListIter(x_191->children, [&](const auto &x_195) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_196) { return eval_stmts_x_19(x_195); }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_197) { return eval_stmts_x_198(x_191); }));
    return MakeUnit();
  }));
}
Unit eval_stmts_x_17(const auto &x_199) {
  return MetricRecordEval(TimedOnly([&](const auto &x_200) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_201) { return eval_stmts_x_202(x_199); }));
    ListIter(x_199->children, [&](const auto &x_203) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_204) { return eval_stmts_x_17(x_203); }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_205) { return eval_stmts_x_206(x_199); }));
    return MakeUnit();
  }));
}
Unit x_207(const auto &x_208) {
  ListIter2(x_208->children, [&](const auto &x_209, const auto &x_210) {
    x_209->parent = x_208.get();
    x_210->parent = x_208.get();
    x_209->next = x_210.get();
    x_210->prev = x_209.get();
    x_207(x_209);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_208->children),
      [&](const auto &x_212) {
        x_208->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_211) {
        x_208->first = x_211.get();
        x_211->parent = x_208.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_208->children),
      [&](const auto &x_214) {
        x_208->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_213) {
        x_208->last = x_213.get();
        x_213->parent = x_208.get();
        x_207(x_213);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_208) { return x_207(x_208); }
int64_t x_215(const auto &x_216) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_216->children, [&](const auto &x_217) { return x_215(x_217); }));
}
int64_t node_size_x_4(const auto &x_216) { return x_215(x_216); }
int64_t x_218(const auto &x_219) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_219->children, [&](const auto &x_220) { return x_218(x_220); }));
}
int64_t layout_size_x_3(const auto &x_219) { return x_218(x_219); }
LayoutNode x_221(const auto &x_222) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_222)), [&](const auto &x_223) { return x_221(x_223); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_222) { return x_221(x_222); }
Node x_224(const auto &x_225) {
  return MakeNode(x_225->name, x_225->attr, x_225->prop, x_225->extern_id,
                  ListMap(x_225->children, [&](const auto &x_226) { return x_224(x_226); }));
}
Node node_to_fs_node_x_1(const auto &x_225) { return x_224(x_225); }
Node x_227(const auto &x_228) {
  return MakeNode(JsonToString(JsonMember("name", x_228)), JsonToDict(JsonMember("attributes", x_228)),
                  JsonToDict(JsonMember("properties", x_228)), JsonToInt(JsonMember("id", x_228)),
                  ListMap(JsonToList(JsonMember("children", x_228)), [&](const auto &x_229) { return x_227(x_229); }));
}
Node json_to_node_aux_x_0(const auto &x_228) { return x_227(x_228); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_5) {
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
      MetricRecordOverhead(TimedOnly([&](const auto &x_16) { return eval_stmts_x_17(x_14); }));
      MetricRecordOverhead(TimedOnly([&](const auto &x_18) { return eval_stmts_x_19(x_14); }));
      JsonToChannel(x_5, [&]() {
        auto x_1259 = FreshJson();
        WriteJson(x_1259, "name", "FS_D");
        WriteJson(x_1259, "diff_num", ReadRef(x_7));
        WriteJson(x_1259, "read_count", MetricReadCount());
        WriteJson(x_1259, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1259, "write_count", MetricWriteCount());
        WriteJson(x_1259, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1259, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1259, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1259, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1259, "overhead_time", MetricOverheadCount());
        WriteJson(x_1259, "eval_time", MetricEvalCount());
        WriteJson(x_1259, "html", "");
        WriteJson(x_1259, "command", StackToList(x_11));
        return x_1259;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_1261 = JsonToString(JsonMember("name", x_21));
        if (x_1261 == "add") {
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
        } else if (x_1261 == "recalculate") {
          MetricRecordOverhead(TimedOnly([&](const auto &x_26) {
            eval_stmts_x_17(x_14);
            eval_stmts_x_19(x_14);
            return MakeUnit();
          }));
          JsonToChannel(x_5, [&]() {
            auto x_1260 = FreshJson();
            WriteJson(x_1260, "name", "FS_D");
            WriteJson(x_1260, "diff_num", ReadRef(x_7));
            WriteJson(x_1260, "read_count", MetricReadCount());
            WriteJson(x_1260, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1260, "write_count", MetricWriteCount());
            WriteJson(x_1260, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1260, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1260, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1260, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1260, "overhead_time", MetricOverheadCount());
            WriteJson(x_1260, "eval_time", MetricEvalCount());
            WriteJson(x_1260, "html", "");
            WriteJson(x_1260, "command", StackToList(x_11));
            return x_1260;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1261 == "remove") {
          return remove_node_x_28(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_27) { return JsonToInt(x_27); }), x_14,
              MakeUnit());
        } else if (x_1261 == "replace") {
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
        } else if (x_1261 == "replace_value") {
          return replace_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1261 == "delete_value") {
          return delete_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_1261 == "insert_value") {
          return insert_value_x_38(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1261 == "layout_remove") {
          return remove_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              MakeUnit());
        } else if (x_1261 == "layout_add") {
          return add_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1261 == "layout_replace") {
          return replace_layout_node_x_44(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_43) { return JsonToInt(x_43); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1261 == "layout_info_changed") {
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