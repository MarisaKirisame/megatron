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
Unit var_modified_x_467(const auto &x_469);
auto eval_expr_x_464(const auto &x_474);
Unit var_modified_x_462(const auto &x_491);
auto eval_expr_x_459(const auto &x_494);
Unit var_modified_x_457(const auto &x_503);
auto eval_expr_x_454(const auto &x_507);
Unit var_modified_x_452(const auto &x_560);
auto eval_expr_x_449(const auto &x_566);
Unit var_modified_x_447(const auto &x_591);
auto eval_expr_x_444(const auto &x_596);
Unit var_modified_x_442(const auto &x_605);
auto eval_expr_x_439(const auto &x_609);
Unit var_modified_x_437(const auto &x_662);
auto eval_expr_x_434(const auto &x_668);
Unit var_modified_x_432(const auto &x_689);
auto eval_expr_x_429(const auto &x_692);
Unit var_modified_x_427(const auto &x_713);
auto eval_expr_x_424(const auto &x_716);
Unit var_modified_x_422(const auto &x_729);
auto eval_expr_x_419(const auto &x_733);
Unit var_modified_x_417(const auto &x_754);
auto eval_expr_x_414(const auto &x_757);
Unit var_modified_x_412(const auto &x_762);
auto eval_expr_x_409(const auto &x_765);
Unit var_modified_x_405(const auto &x_770);
auto eval_expr_x_402(const auto &x_780);
Unit var_modified_x_400(const auto &x_857);
auto eval_expr_x_397(const auto &x_860);
Unit var_modified_x_395(const auto &x_877);
auto eval_expr_x_392(const auto &x_882);
Unit var_modified_x_390(const auto &x_887);
auto eval_expr_x_387(const auto &x_892);
Unit var_modified_x_385(const auto &x_901);
auto eval_expr_x_382(const auto &x_904);
Unit var_modified_x_380(const auto &x_905);
auto eval_expr_x_377(const auto &x_908);
Unit var_modified_x_375(const auto &x_913);
auto eval_expr_x_372(const auto &x_917);
Unit var_modified_x_370(const auto &x_928);
auto eval_expr_x_367(const auto &x_931);
Unit var_modified_x_365(const auto &x_936);
auto eval_expr_x_362(const auto &x_940);
Unit var_modified_x_360(const auto &x_951);
auto eval_expr_x_357(const auto &x_955);
Unit var_modified_x_355(const auto &x_980);
auto eval_expr_x_352(const auto &x_985);
Unit var_modified_x_350(const auto &x_1010);
auto eval_expr_x_347(const auto &x_1013);
Unit var_modified_x_345(const auto &x_1016);
auto eval_expr_x_342(const auto &x_1022);
Unit var_modified_x_340(const auto &x_1031);
auto eval_expr_x_337(const auto &x_1037);
Unit var_modified_x_335(const auto &x_1046);
auto eval_expr_x_332(const auto &x_1050);
Unit var_modified_x_330(const auto &x_1053);
auto eval_expr_x_327(const auto &x_1057);
Unit var_modified_x_325(const auto &x_1060);
auto eval_expr_x_322(const auto &x_1065);
Unit var_modified_x_320(const auto &x_1068);
auto eval_expr_x_317(const auto &x_1073);
Unit var_modified_x_313(const auto &x_1076);
auto eval_expr_x_310(const auto &x_1084);
Unit var_modified_x_308(const auto &x_1113);
auto eval_expr_x_305(const auto &x_1121);
Unit var_modified_x_303(const auto &x_1134);
auto eval_expr_x_300(const auto &x_1142);
Unit var_modified_x_298(const auto &x_1151);
auto eval_expr_x_295(const auto &x_1154);
Unit var_modified_x_293(const auto &x_1163);
auto eval_expr_x_290(const auto &x_1167);
Unit var_modified_x_288(const auto &x_1312);
auto eval_expr_x_285(const auto &x_1315);
Unit var_modified_x_283(const auto &x_1364);
auto eval_expr_x_280(const auto &x_1368);
Unit var_modified_x_278(const auto &x_1371);
auto eval_expr_x_275(const auto &x_1374);
Unit var_modified_x_273(const auto &x_1383);
auto eval_expr_x_270(const auto &x_1391);
Unit var_modified_x_268(const auto &x_1400);
auto eval_expr_x_265(const auto &x_1408);
Unit var_modified_x_263(const auto &x_1417);
auto eval_expr_x_260(const auto &x_1423);
Unit var_modified_x_258(const auto &x_1436);
auto eval_expr_x_255(const auto &x_1439);
Unit var_modified_x_253(const auto &x_1448);
auto eval_expr_x_250(const auto &x_1452);
Unit var_modified_x_248(const auto &x_1605);
auto eval_expr_x_245(const auto &x_1608);
Unit var_modified_x_243(const auto &x_1613);
auto eval_expr_x_240(const auto &x_1616);
Unit var_modified_x_238(const auto &x_1665);
auto eval_expr_x_235(const auto &x_1668);
Unit var_modified_x_233(const auto &x_1681);
auto eval_expr_x_230(const auto &x_1685);
Unit eval_stmts_x_204(const auto &x_228);
Unit eval_stmts_x_200(const auto &x_315);
Unit eval_stmts_x_194(const auto &x_407);
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
Unit eval_stmts_x_17(const auto &x_197);
Unit x_205(const auto &x_206);
int64_t x_213(const auto &x_214);
int64_t x_216(const auto &x_217);
LayoutNode x_219(const auto &x_220);
Node x_222(const auto &x_223);
Node x_225(const auto &x_226);
Unit var_modified_x_467(const auto &x_469) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_470) { return MakeUnit(); })));
}
auto eval_expr_x_464(const auto &x_474) {
  if ((x_474->prev != nullptr) && (!(x_474->prev)->var_line_break)) {
    return max(x_474->var_height_external, (x_474->prev)->var_line_height);
  } else {
    return x_474->var_height_external;
  }
}
Unit var_modified_x_462(const auto &x_491) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_492) { return MakeUnit(); })));
}
auto eval_expr_x_459(const auto &x_494) {
  if (eq(x_494->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_494->var_height_internal;
  }
}
Unit var_modified_x_457(const auto &x_503) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_504) { return MakeUnit(); })));
}
auto eval_expr_x_454(const auto &x_507) {
  if (x_507->var_intrinsic_height_is_height) {
    return x_507->var_intrinsic_height_internal;
  } else {
    if ((x_507->parent != nullptr) && (x_507->parent)->var_is_flex_column) {
      return plus(x_507->var_intrinsic_height_internal, mult(x_507->var_flex_amount, (x_507->parent)->var_flex_unit));
    } else {
      if (x_507->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_507->var_box_height, divide(x_507->var_height_expr.r.a0, 100.));
      } else {
        return max(x_507->var_box_height, x_507->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_452(const auto &x_560) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_561) { return MakeUnit(); })));
}
auto eval_expr_x_449(const auto &x_566) {
  if (x_566->prev != nullptr) {
    if (x_566->var_line_break || (x_566->prev)->var_line_break) {
      return plus((x_566->prev)->var_y, (x_566->prev)->var_line_height);
    } else {
      return (x_566->prev)->var_y;
    }
  } else {
    if (x_566->parent != nullptr) {
      return (x_566->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_447(const auto &x_591) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_592) { return MakeUnit(); })));
}
auto eval_expr_x_444(const auto &x_596) {
  if (eq(x_596->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_596->var_width_internal;
  }
}
Unit var_modified_x_442(const auto &x_605) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_606) { return MakeUnit(); })));
}
auto eval_expr_x_439(const auto &x_609) {
  if (x_609->var_intrinsic_width_is_width) {
    return x_609->var_intrinsic_width_internal;
  } else {
    if ((x_609->parent != nullptr) && (x_609->parent)->var_is_flex_row) {
      return plus(x_609->var_intrinsic_width_internal, mult(x_609->var_flex_amount, (x_609->parent)->var_flex_unit));
    } else {
      if (x_609->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_609->var_box_width, divide(x_609->var_width_expr.r.a0, 100.));
      } else {
        return max(x_609->var_box_width, x_609->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_437(const auto &x_662) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_663) { return MakeUnit(); })));
}
auto eval_expr_x_434(const auto &x_668) {
  if (x_668->prev != nullptr) {
    if (x_668->var_line_break || (x_668->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_668->prev)->var_x, (x_668->prev)->var_width_external);
    }
  } else {
    if (x_668->parent != nullptr) {
      return (x_668->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_432(const auto &x_689) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_690) { return MakeUnit(); })));
}
auto eval_expr_x_429(const auto &x_692) {
  if (gt(x_692->var_left_over, 0.)) {
    return divide(x_692->var_left_over, x_692->var_flex_grow_sum);
  } else {
    return divide(x_692->var_left_over, x_692->var_flex_shrink_sum);
  }
}
Unit var_modified_x_427(const auto &x_713) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_714) { return MakeUnit(); })));
}
auto eval_expr_x_424(const auto &x_716) {
  if ((x_716->parent != nullptr) && gt((x_716->parent)->var_left_over, 0.)) {
    return x_716->var_flex_grow;
  } else {
    return x_716->var_flex_shrink;
  }
}
Unit var_modified_x_422(const auto &x_729) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_730) { return MakeUnit(); })));
}
auto eval_expr_x_419(const auto &x_733) {
  if (x_733->var_is_flex_row) {
    return minus(x_733->var_box_width, (x_733->last != nullptr) ? ((x_733->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_733->var_box_height, (x_733->last != nullptr) ? ((x_733->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_417(const auto &x_754) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_755) { return MakeUnit(); })));
}
auto eval_expr_x_414(const auto &x_757) {
  if (x_757->parent != nullptr) {
    return (x_757->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_412(const auto &x_762) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_763) { return MakeUnit(); })));
}
auto eval_expr_x_409(const auto &x_765) {
  if (x_765->parent != nullptr) {
    return (x_765->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_405(const auto &x_770) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_771) { return MakeUnit(); })));
}
auto eval_expr_x_402(const auto &x_780) {
  if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_780->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_780->parent != nullptr) &&
          (eq((x_780->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_780->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_780->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_780->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_780->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_400(const auto &x_857) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_858) { return MakeUnit(); })));
}
auto eval_expr_x_397(const auto &x_860) {
  return (((!(x_860->parent != nullptr)) || (x_860->parent)->var_visible) &&
          (neq(x_860->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_860->var_inside_svg) && (!x_860->var_disabled))));
}
Unit var_modified_x_395(const auto &x_877) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_878) { return MakeUnit(); })));
}
auto eval_expr_x_392(const auto &x_882) {
  if (eq(x_882->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_882->parent != nullptr) && (x_882->parent)->var_disabled);
  }
}
Unit var_modified_x_390(const auto &x_887) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_888) { return MakeUnit(); })));
}
auto eval_expr_x_387(const auto &x_892) {
  return ((x_892->parent != nullptr) && ((x_892->parent)->var_is_svg_block || (x_892->parent)->var_inside_svg));
}
Unit var_modified_x_385(const auto &x_901) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_902) { return MakeUnit(); })));
}
auto eval_expr_x_382(const auto &x_904) { return eq(x_904->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_380(const auto &x_905) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_906) { return MakeUnit(); })));
}
auto eval_expr_x_377(const auto &x_908) {
  return neq(x_908->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_375(const auto &x_913) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_914) { return MakeUnit(); })));
}
auto eval_expr_x_372(const auto &x_917) {
  if (!x_917->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_917->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_917->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_917->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_370(const auto &x_928) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_929) { return MakeUnit(); })));
}
auto eval_expr_x_367(const auto &x_931) {
  return neq(x_931->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_365(const auto &x_936) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_937) { return MakeUnit(); })));
}
auto eval_expr_x_362(const auto &x_940) {
  if (!x_940->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_940->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_940->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_940->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_360(const auto &x_951) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_952) { return MakeUnit(); })));
}
auto eval_expr_x_357(const auto &x_955) {
  if ((x_955->parent != nullptr) &&
      (eq((x_955->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_955->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_955->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_955->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_355(const auto &x_980) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_981) { return MakeUnit(); })));
}
auto eval_expr_x_352(const auto &x_985) {
  if ((x_985->parent != nullptr) &&
      (eq((x_985->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_985->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_985->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_350(const auto &x_1010) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1011) { return MakeUnit(); })));
}
auto eval_expr_x_347(const auto &x_1013) {
  if (x_1013->has_prop_flex_direction) {
    return x_1013->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_345(const auto &x_1016) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1017) { return MakeUnit(); })));
}
auto eval_expr_x_342(const auto &x_1022) {
  return plus((x_1022->prev != nullptr) ? ((x_1022->prev)->var_flex_shrink_sum) : (0.), x_1022->var_flex_shrink);
}
Unit var_modified_x_340(const auto &x_1031) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1032) { return MakeUnit(); })));
}
auto eval_expr_x_337(const auto &x_1037) {
  return plus((x_1037->prev != nullptr) ? ((x_1037->prev)->var_flex_grow_sum) : (0.), x_1037->var_flex_grow);
}
Unit var_modified_x_335(const auto &x_1046) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1047) { return MakeUnit(); })));
}
auto eval_expr_x_332(const auto &x_1050) {
  if (x_1050->has_prop_flex_shrink) {
    return (x_1050->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_330(const auto &x_1053) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1054) { return MakeUnit(); })));
}
auto eval_expr_x_327(const auto &x_1057) {
  if (x_1057->has_prop_flex_grow) {
    return (x_1057->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_325(const auto &x_1060) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1061) { return MakeUnit(); })));
}
auto eval_expr_x_322(const auto &x_1065) {
  if (x_1065->has_prop_position) {
    return x_1065->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_320(const auto &x_1068) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1069) { return MakeUnit(); })));
}
auto eval_expr_x_317(const auto &x_1073) {
  if (x_1073->has_prop_display) {
    return x_1073->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_313(const auto &x_1076) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1077) { return MakeUnit(); })));
}
auto eval_expr_x_310(const auto &x_1084) {
  if (x_1084->prev != nullptr) {
    if (x_1084->var_line_break) {
      return plus((x_1084->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1084->prev)->var_intrinsic_current_line_height, x_1084->var_intrinsic_height_external));
    } else {
      return (x_1084->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1084->var_line_break) {
      return x_1084->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_308(const auto &x_1113) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1114) { return MakeUnit(); })));
}
auto eval_expr_x_305(const auto &x_1121) {
  if (x_1121->var_line_break) {
    return 0.;
  } else {
    return max(x_1121->var_intrinsic_height_external,
               (x_1121->prev != nullptr) ? ((x_1121->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_303(const auto &x_1134) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1135) { return MakeUnit(); })));
}
auto eval_expr_x_300(const auto &x_1142) {
  return plus((x_1142->prev != nullptr) ? ((x_1142->prev)->var_intrinsic_height_sum) : (0.),
              x_1142->var_intrinsic_height_external);
}
Unit var_modified_x_298(const auto &x_1151) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1152) { return MakeUnit(); })));
}
auto eval_expr_x_295(const auto &x_1154) {
  if (eq(x_1154->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1154->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_293(const auto &x_1163) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1164) { return MakeUnit(); })));
}
auto eval_expr_x_290(const auto &x_1167) {
  if (eq(x_1167->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1167->var_inside_svg) {
      return 0.;
    } else {
      if (x_1167->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1167->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1167->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_1167->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_1167->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1167->var_height_expr.r.a0;
          } else {
            if (x_1167->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_1167->var_height_expr.r.a0;
            } else {
              return x_1167->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_1167->var_children_intrinsic_height,
              (eq(x_1167->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_1167->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1167->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1167->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_1167->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1167->var_has_height_attr &&
                                                  (x_1167->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1167->var_height_attr_expr.r.a0)
                                                     : ((x_1167->has_attr_viewBox)
                                                            ? (x_1167->attr_viewBox.r.a3)
                                                            : (mult((x_1167->attr_viewBox.r.a3),
                                                                    divide(x_1167->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1167->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1167->var_has_height_attr)
                                                            ? (x_1167->var_height_attr_expr.r.a0)
                                                            : ((x_1167->has_attr_image_height &&
                                                                (!x_1167->var_has_width_attr))
                                                                   ? (int_to_float(x_1167->attr_image_height))
                                                                   : ((neq(x_1167->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1167->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1167->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_1167->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_1167->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_1167->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_288(const auto &x_1312) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1313) { return MakeUnit(); })));
}
auto eval_expr_x_285(const auto &x_1315) {
  if (eq(x_1315->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1315->var_inside_svg || x_1315->var_disabled)) {
    return true;
  } else {
    if ((x_1315->parent != nullptr) && (x_1315->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1315->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1315->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1315->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1315->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1315->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_283(const auto &x_1364) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1365) { return MakeUnit(); })));
}
auto eval_expr_x_280(const auto &x_1368) {
  if (x_1368->has_prop_height) {
    return x_1368->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_278(const auto &x_1371) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1372) { return MakeUnit(); })));
}
auto eval_expr_x_275(const auto &x_1374) {
  if (x_1374->last != nullptr) {
    return plus((x_1374->last)->var_finished_intrinsic_height_sum, (x_1374->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_273(const auto &x_1383) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1384) { return MakeUnit(); })));
}
auto eval_expr_x_270(const auto &x_1391) {
  return plus((x_1391->prev != nullptr) ? ((x_1391->prev)->var_intrinsic_width_sum) : (0.),
              x_1391->var_intrinsic_width_external);
}
Unit var_modified_x_268(const auto &x_1400) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1401) { return MakeUnit(); })));
}
auto eval_expr_x_265(const auto &x_1408) {
  return max(x_1408->var_intrinsic_current_line_width,
             (x_1408->prev != nullptr) ? ((x_1408->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_263(const auto &x_1417) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1418) { return MakeUnit(); })));
}
auto eval_expr_x_260(const auto &x_1423) {
  return plus(x_1423->var_intrinsic_width_external,
              ((x_1423->prev != nullptr) && (!(x_1423->prev)->var_line_break))
                  ? ((x_1423->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_258(const auto &x_1436) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1437) { return MakeUnit(); })));
}
auto eval_expr_x_255(const auto &x_1439) {
  if (eq(x_1439->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1439->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_253(const auto &x_1448) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1449) { return MakeUnit(); })));
}
auto eval_expr_x_250(const auto &x_1452) {
  if (eq(x_1452->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1452->var_inside_svg) {
      return 0.;
    } else {
      if (x_1452->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1452->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1452->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1452->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1452->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1452->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1452->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1452->var_width_expr.r.a0;
          } else {
            return x_1452->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1452->var_children_intrinsic_width,
              (eq(x_1452->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1452->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1452->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1452->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1452->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1452->var_has_width_attr &&
                                                  (x_1452->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1452->var_width_attr_expr.r.a0)
                                                     : (((!x_1452->var_has_width_attr) && x_1452->has_attr_viewBox)
                                                            ? (x_1452->attr_viewBox.r.a2)
                                                            : (mult((x_1452->attr_viewBox.r.a2),
                                                                    divide(x_1452->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1452->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1452->var_has_width_attr)
                                                            ? (x_1452->var_width_attr_expr.r.a0)
                                                            : ((x_1452->has_attr_image_width &&
                                                                (!x_1452->var_has_height_attr))
                                                                   ? (int_to_float(x_1452->attr_image_width))
                                                                   : ((neq(x_1452->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1452->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1452->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1452->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1452->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1452->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_248(const auto &x_1605) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1606) { return MakeUnit(); })));
}
auto eval_expr_x_245(const auto &x_1608) {
  if (x_1608->last != nullptr) {
    return (x_1608->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_243(const auto &x_1613) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1614) { return MakeUnit(); })));
}
auto eval_expr_x_240(const auto &x_1616) {
  if (eq(x_1616->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1616->var_inside_svg || x_1616->var_disabled)) {
    return true;
  } else {
    if ((x_1616->parent != nullptr) && (x_1616->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1616->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1616->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1616->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1616->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1616->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_238(const auto &x_1665) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1666) { return MakeUnit(); })));
}
auto eval_expr_x_235(const auto &x_1668) {
  if (eq(x_1668->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1668->var_inside_svg) {
      return true;
    } else {
      if (x_1668->var_disabled) {
        return true;
      } else {if ( eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_1668->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_233(const auto &x_1681) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1682) { return MakeUnit(); })));
}
auto eval_expr_x_230(const auto &x_1685) {
  if (x_1685->has_prop_width) {
    return x_1685->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_204(const auto &x_228) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_229) {
    WriteMetric();
    auto x_231 = eval_expr_x_230(x_228);
    if (x_228->has_var_width_expr) {
      auto x_232 = x_228->var_width_expr;
      if (!EqualValue(x_232, x_231)) {
        var_modified_x_233(x_228);
      }
    }
    x_228->has_var_width_expr = true;
    x_228->var_width_expr = AsDEString(x_231);
    WriteMetric();
    auto x_236 = eval_expr_x_235(x_228);
    if (x_228->has_var_is_default_case) {
      auto x_237 = x_228->var_is_default_case;
      if (!EqualValue(x_237, x_236)) {
        var_modified_x_238(x_228);
      }
    }
    x_228->has_var_is_default_case = true;
    x_228->var_is_default_case = Asbool(x_236);
    WriteMetric();
    auto x_241 = eval_expr_x_240(x_228);
    if (x_228->has_var_intrinsic_width_is_width) {
      auto x_242 = x_228->var_intrinsic_width_is_width;
      if (!EqualValue(x_242, x_241)) {
        var_modified_x_243(x_228);
      }
    }
    x_228->has_var_intrinsic_width_is_width = true;
    x_228->var_intrinsic_width_is_width = Asbool(x_241);
    WriteMetric();
    auto x_246 = eval_expr_x_245(x_228);
    if (x_228->has_var_children_intrinsic_width) {
      auto x_247 = x_228->var_children_intrinsic_width;
      if (!EqualValue(x_247, x_246)) {
        var_modified_x_248(x_228);
      }
    }
    x_228->has_var_children_intrinsic_width = true;
    x_228->var_children_intrinsic_width = Asdouble(x_246);
    WriteMetric();
    auto x_251 = eval_expr_x_250(x_228);
    if (x_228->has_var_intrinsic_width_internal) {
      auto x_252 = x_228->var_intrinsic_width_internal;
      if (!EqualValue(x_252, x_251)) {
        var_modified_x_253(x_228);
      }
    }
    x_228->has_var_intrinsic_width_internal = true;
    x_228->var_intrinsic_width_internal = Asdouble(x_251);
    WriteMetric();
    auto x_256 = eval_expr_x_255(x_228);
    if (x_228->has_var_intrinsic_width_external) {
      auto x_257 = x_228->var_intrinsic_width_external;
      if (!EqualValue(x_257, x_256)) {
        var_modified_x_258(x_228);
      }
    }
    x_228->has_var_intrinsic_width_external = true;
    x_228->var_intrinsic_width_external = Asdouble(x_256);
    WriteMetric();
    auto x_261 = eval_expr_x_260(x_228);
    if (x_228->has_var_intrinsic_current_line_width) {
      auto x_262 = x_228->var_intrinsic_current_line_width;
      if (!EqualValue(x_262, x_261)) {
        var_modified_x_263(x_228);
      }
    }
    x_228->has_var_intrinsic_current_line_width = true;
    x_228->var_intrinsic_current_line_width = Asdouble(x_261);
    WriteMetric();
    auto x_266 = eval_expr_x_265(x_228);
    if (x_228->has_var_intrinsic_width_max) {
      auto x_267 = x_228->var_intrinsic_width_max;
      if (!EqualValue(x_267, x_266)) {
        var_modified_x_268(x_228);
      }
    }
    x_228->has_var_intrinsic_width_max = true;
    x_228->var_intrinsic_width_max = Asdouble(x_266);
    WriteMetric();
    auto x_271 = eval_expr_x_270(x_228);
    if (x_228->has_var_intrinsic_width_sum) {
      auto x_272 = x_228->var_intrinsic_width_sum;
      if (!EqualValue(x_272, x_271)) {
        var_modified_x_273(x_228);
      }
    }
    x_228->has_var_intrinsic_width_sum = true;
    x_228->var_intrinsic_width_sum = Asdouble(x_271);
    WriteMetric();
    auto x_276 = eval_expr_x_275(x_228);
    if (x_228->has_var_children_intrinsic_height) {
      auto x_277 = x_228->var_children_intrinsic_height;
      if (!EqualValue(x_277, x_276)) {
        var_modified_x_278(x_228);
      }
    }
    x_228->has_var_children_intrinsic_height = true;
    x_228->var_children_intrinsic_height = Asdouble(x_276);
    WriteMetric();
    auto x_281 = eval_expr_x_280(x_228);
    if (x_228->has_var_height_expr) {
      auto x_282 = x_228->var_height_expr;
      if (!EqualValue(x_282, x_281)) {
        var_modified_x_283(x_228);
      }
    }
    x_228->has_var_height_expr = true;
    x_228->var_height_expr = AsDEString(x_281);
    WriteMetric();
    auto x_286 = eval_expr_x_285(x_228);
    if (x_228->has_var_intrinsic_height_is_height) {
      auto x_287 = x_228->var_intrinsic_height_is_height;
      if (!EqualValue(x_287, x_286)) {
        var_modified_x_288(x_228);
      }
    }
    x_228->has_var_intrinsic_height_is_height = true;
    x_228->var_intrinsic_height_is_height = Asbool(x_286);
    WriteMetric();
    auto x_291 = eval_expr_x_290(x_228);
    if (x_228->has_var_intrinsic_height_internal) {
      auto x_292 = x_228->var_intrinsic_height_internal;
      if (!EqualValue(x_292, x_291)) {
        var_modified_x_293(x_228);
      }
    }
    x_228->has_var_intrinsic_height_internal = true;
    x_228->var_intrinsic_height_internal = Asdouble(x_291);
    WriteMetric();
    auto x_296 = eval_expr_x_295(x_228);
    if (x_228->has_var_intrinsic_height_external) {
      auto x_297 = x_228->var_intrinsic_height_external;
      if (!EqualValue(x_297, x_296)) {
        var_modified_x_298(x_228);
      }
    }
    x_228->has_var_intrinsic_height_external = true;
    x_228->var_intrinsic_height_external = Asdouble(x_296);
    WriteMetric();
    auto x_301 = eval_expr_x_300(x_228);
    if (x_228->has_var_intrinsic_height_sum) {
      auto x_302 = x_228->var_intrinsic_height_sum;
      if (!EqualValue(x_302, x_301)) {
        var_modified_x_303(x_228);
      }
    }
    x_228->has_var_intrinsic_height_sum = true;
    x_228->var_intrinsic_height_sum = Asdouble(x_301);
    WriteMetric();
    auto x_306 = eval_expr_x_305(x_228);
    if (x_228->has_var_intrinsic_current_line_height) {
      auto x_307 = x_228->var_intrinsic_current_line_height;
      if (!EqualValue(x_307, x_306)) {
        var_modified_x_308(x_228);
      }
    }
    x_228->has_var_intrinsic_current_line_height = true;
    x_228->var_intrinsic_current_line_height = Asdouble(x_306);
    WriteMetric();
    auto x_311 = eval_expr_x_310(x_228);
    if (x_228->has_var_finished_intrinsic_height_sum) {
      auto x_312 = x_228->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_312, x_311)) {
        var_modified_x_313(x_228);
      }
    }
    x_228->has_var_finished_intrinsic_height_sum = true;
    x_228->var_finished_intrinsic_height_sum = Asdouble(x_311);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_200(const auto &x_315) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_316) {
    WriteMetric();
    auto x_318 = eval_expr_x_317(x_315);
    if (x_315->has_var_display) {
      auto x_319 = x_315->var_display;
      if (!EqualValue(x_319, x_318)) {
        var_modified_x_320(x_315);
      }
    }
    x_315->has_var_display = true;
    x_315->var_display = AsDEString(x_318);
    WriteMetric();
    auto x_323 = eval_expr_x_322(x_315);
    if (x_315->has_var_position) {
      auto x_324 = x_315->var_position;
      if (!EqualValue(x_324, x_323)) {
        var_modified_x_325(x_315);
      }
    }
    x_315->has_var_position = true;
    x_315->var_position = AsDEString(x_323);
    WriteMetric();
    auto x_328 = eval_expr_x_327(x_315);
    if (x_315->has_var_flex_grow) {
      auto x_329 = x_315->var_flex_grow;
      if (!EqualValue(x_329, x_328)) {
        var_modified_x_330(x_315);
      }
    }
    x_315->has_var_flex_grow = true;
    x_315->var_flex_grow = Asdouble(x_328);
    WriteMetric();
    auto x_333 = eval_expr_x_332(x_315);
    if (x_315->has_var_flex_shrink) {
      auto x_334 = x_315->var_flex_shrink;
      if (!EqualValue(x_334, x_333)) {
        var_modified_x_335(x_315);
      }
    }
    x_315->has_var_flex_shrink = true;
    x_315->var_flex_shrink = Asdouble(x_333);
    WriteMetric();
    auto x_338 = eval_expr_x_337(x_315);
    if (x_315->has_var_flex_grow_sum) {
      auto x_339 = x_315->var_flex_grow_sum;
      if (!EqualValue(x_339, x_338)) {
        var_modified_x_340(x_315);
      }
    }
    x_315->has_var_flex_grow_sum = true;
    x_315->var_flex_grow_sum = Asdouble(x_338);
    WriteMetric();
    auto x_343 = eval_expr_x_342(x_315);
    if (x_315->has_var_flex_shrink_sum) {
      auto x_344 = x_315->var_flex_shrink_sum;
      if (!EqualValue(x_344, x_343)) {
        var_modified_x_345(x_315);
      }
    }
    x_315->has_var_flex_shrink_sum = true;
    x_315->var_flex_shrink_sum = Asdouble(x_343);
    WriteMetric();
    auto x_348 = eval_expr_x_347(x_315);
    if (x_315->has_var_flex_direction) {
      auto x_349 = x_315->var_flex_direction;
      if (!EqualValue(x_349, x_348)) {
        var_modified_x_350(x_315);
      }
    }
    x_315->has_var_flex_direction = true;
    x_315->var_flex_direction = AsDEString(x_348);
    WriteMetric();
    auto x_353 = eval_expr_x_352(x_315);
    if (x_315->has_var_is_flex_row) {
      auto x_354 = x_315->var_is_flex_row;
      if (!EqualValue(x_354, x_353)) {
        var_modified_x_355(x_315);
      }
    }
    x_315->has_var_is_flex_row = true;
    x_315->var_is_flex_row = Asbool(x_353);
    WriteMetric();
    auto x_358 = eval_expr_x_357(x_315);
    if (x_315->has_var_is_flex_column) {
      auto x_359 = x_315->var_is_flex_column;
      if (!EqualValue(x_359, x_358)) {
        var_modified_x_360(x_315);
      }
    }
    x_315->has_var_is_flex_column = true;
    x_315->var_is_flex_column = Asbool(x_358);
    WriteMetric();
    auto x_363 = eval_expr_x_362(x_315);
    if (x_315->has_var_width_attr_expr) {
      auto x_364 = x_315->var_width_attr_expr;
      if (!EqualValue(x_364, x_363)) {
        var_modified_x_365(x_315);
      }
    }
    x_315->has_var_width_attr_expr = true;
    x_315->var_width_attr_expr = AsDEString(x_363);
    WriteMetric();
    auto x_368 = eval_expr_x_367(x_315);
    if (x_315->has_var_has_width_attr) {
      auto x_369 = x_315->var_has_width_attr;
      if (!EqualValue(x_369, x_368)) {
        var_modified_x_370(x_315);
      }
    }
    x_315->has_var_has_width_attr = true;
    x_315->var_has_width_attr = Asbool(x_368);
    WriteMetric();
    auto x_373 = eval_expr_x_372(x_315);
    if (x_315->has_var_height_attr_expr) {
      auto x_374 = x_315->var_height_attr_expr;
      if (!EqualValue(x_374, x_373)) {
        var_modified_x_375(x_315);
      }
    }
    x_315->has_var_height_attr_expr = true;
    x_315->var_height_attr_expr = AsDEString(x_373);
    WriteMetric();
    auto x_378 = eval_expr_x_377(x_315);
    if (x_315->has_var_has_height_attr) {
      auto x_379 = x_315->var_has_height_attr;
      if (!EqualValue(x_379, x_378)) {
        var_modified_x_380(x_315);
      }
    }
    x_315->has_var_has_height_attr = true;
    x_315->var_has_height_attr = Asbool(x_378);
    WriteMetric();
    auto x_383 = eval_expr_x_382(x_315);
    if (x_315->has_var_is_svg_block) {
      auto x_384 = x_315->var_is_svg_block;
      if (!EqualValue(x_384, x_383)) {
        var_modified_x_385(x_315);
      }
    }
    x_315->has_var_is_svg_block = true;
    x_315->var_is_svg_block = Asbool(x_383);
    WriteMetric();
    auto x_388 = eval_expr_x_387(x_315);
    if (x_315->has_var_inside_svg) {
      auto x_389 = x_315->var_inside_svg;
      if (!EqualValue(x_389, x_388)) {
        var_modified_x_390(x_315);
      }
    }
    x_315->has_var_inside_svg = true;
    x_315->var_inside_svg = Asbool(x_388);
    WriteMetric();
    auto x_393 = eval_expr_x_392(x_315);
    if (x_315->has_var_disabled) {
      auto x_394 = x_315->var_disabled;
      if (!EqualValue(x_394, x_393)) {
        var_modified_x_395(x_315);
      }
    }
    x_315->has_var_disabled = true;
    x_315->var_disabled = Asbool(x_393);
    WriteMetric();
    auto x_398 = eval_expr_x_397(x_315);
    if (x_315->has_var_visible) {
      auto x_399 = x_315->var_visible;
      if (!EqualValue(x_399, x_398)) {
        var_modified_x_400(x_315);
      }
    }
    x_315->has_var_visible = true;
    x_315->var_visible = Asbool(x_398);
    WriteMetric();
    auto x_403 = eval_expr_x_402(x_315);
    if (x_315->has_var_line_break) {
      auto x_404 = x_315->var_line_break;
      if (!EqualValue(x_404, x_403)) {
        var_modified_x_405(x_315);
      }
    }
    x_315->has_var_line_break = true;
    x_315->var_line_break = Asbool(x_403);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_194(const auto &x_407) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_408) {
    WriteMetric();
    auto x_410 = eval_expr_x_409(x_407);
    if (x_407->has_var_box_width) {
      auto x_411 = x_407->var_box_width;
      if (!EqualValue(x_411, x_410)) {
        var_modified_x_412(x_407);
      }
    }
    x_407->has_var_box_width = true;
    x_407->var_box_width = Asdouble(x_410);
    WriteMetric();
    auto x_415 = eval_expr_x_414(x_407);
    if (x_407->has_var_box_height) {
      auto x_416 = x_407->var_box_height;
      if (!EqualValue(x_416, x_415)) {
        var_modified_x_417(x_407);
      }
    }
    x_407->has_var_box_height = true;
    x_407->var_box_height = Asdouble(x_415);
    WriteMetric();
    auto x_420 = eval_expr_x_419(x_407);
    if (x_407->has_var_left_over) {
      auto x_421 = x_407->var_left_over;
      if (!EqualValue(x_421, x_420)) {
        var_modified_x_422(x_407);
      }
    }
    x_407->has_var_left_over = true;
    x_407->var_left_over = Asdouble(x_420);
    WriteMetric();
    auto x_425 = eval_expr_x_424(x_407);
    if (x_407->has_var_flex_amount) {
      auto x_426 = x_407->var_flex_amount;
      if (!EqualValue(x_426, x_425)) {
        var_modified_x_427(x_407);
      }
    }
    x_407->has_var_flex_amount = true;
    x_407->var_flex_amount = Asdouble(x_425);
    WriteMetric();
    auto x_430 = eval_expr_x_429(x_407);
    if (x_407->has_var_flex_unit) {
      auto x_431 = x_407->var_flex_unit;
      if (!EqualValue(x_431, x_430)) {
        var_modified_x_432(x_407);
      }
    }
    x_407->has_var_flex_unit = true;
    x_407->var_flex_unit = Asdouble(x_430);
    WriteMetric();
    auto x_435 = eval_expr_x_434(x_407);
    if (x_407->has_var_x) {
      auto x_436 = x_407->var_x;
      if (!EqualValue(x_436, x_435)) {
        var_modified_x_437(x_407);
      }
    }
    x_407->has_var_x = true;
    x_407->var_x = Asdouble(x_435);
    WriteMetric();
    auto x_440 = eval_expr_x_439(x_407);
    if (x_407->has_var_width_internal) {
      auto x_441 = x_407->var_width_internal;
      if (!EqualValue(x_441, x_440)) {
        var_modified_x_442(x_407);
      }
    }
    x_407->has_var_width_internal = true;
    x_407->var_width_internal = Asdouble(x_440);
    WriteMetric();
    auto x_445 = eval_expr_x_444(x_407);
    if (x_407->has_var_width_external) {
      auto x_446 = x_407->var_width_external;
      if (!EqualValue(x_446, x_445)) {
        var_modified_x_447(x_407);
      }
    }
    x_407->has_var_width_external = true;
    x_407->var_width_external = Asdouble(x_445);
    WriteMetric();
    auto x_450 = eval_expr_x_449(x_407);
    if (x_407->has_var_y) {
      auto x_451 = x_407->var_y;
      if (!EqualValue(x_451, x_450)) {
        var_modified_x_452(x_407);
      }
    }
    x_407->has_var_y = true;
    x_407->var_y = Asdouble(x_450);
    WriteMetric();
    auto x_455 = eval_expr_x_454(x_407);
    if (x_407->has_var_height_internal) {
      auto x_456 = x_407->var_height_internal;
      if (!EqualValue(x_456, x_455)) {
        var_modified_x_457(x_407);
      }
    }
    x_407->has_var_height_internal = true;
    x_407->var_height_internal = Asdouble(x_455);
    WriteMetric();
    auto x_460 = eval_expr_x_459(x_407);
    if (x_407->has_var_height_external) {
      auto x_461 = x_407->var_height_external;
      if (!EqualValue(x_461, x_460)) {
        var_modified_x_462(x_407);
      }
    }
    x_407->has_var_height_external = true;
    x_407->var_height_external = Asdouble(x_460);
    WriteMetric();
    auto x_465 = eval_expr_x_464(x_407);
    if (x_407->has_var_line_height) {
      auto x_466 = x_407->var_line_height;
      if (!EqualValue(x_466, x_465)) {
        var_modified_x_467(x_407);
      }
    }
    x_407->has_var_line_height = true;
    x_407->var_line_height = Asdouble(x_465);
    return MakeUnit();
  })));
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
        std::string x_1688 = x_74;
        if (x_1688 == "attributes") {
          std::string x_1689 = x_75;
          if (x_1689 == "width") {
            WriteMetric();
            x_68->has_attr_width = true;
            x_68->attr_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1689 == "image_height") {
            WriteMetric();
            x_68->has_attr_image_height = true;
            x_68->attr_image_height = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1689 == "image_width") {
            WriteMetric();
            x_68->has_attr_image_width = true;
            x_68->attr_image_width = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1689 == "height") {
            WriteMetric();
            x_68->has_attr_height = true;
            x_68->attr_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1689 == "viewBox") {
            WriteMetric();
            x_68->has_attr_viewBox = true;
            x_68->attr_viewBox = AsDEString(x_76);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1688 == "properties") {
          std::string x_1690 = x_75;
          if (x_1690 == "width") {
            WriteMetric();
            x_68->has_prop_width = true;
            x_68->prop_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1690 == "flex-grow") {
            WriteMetric();
            x_68->has_prop_flex_grow = true;
            x_68->prop_flex_grow = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1690 == "height") {
            WriteMetric();
            x_68->has_prop_height = true;
            x_68->prop_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1690 == "display") {
            WriteMetric();
            x_68->has_prop_display = true;
            x_68->prop_display = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1690 == "position") {
            WriteMetric();
            x_68->has_prop_position = true;
            x_68->prop_position = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1690 == "flex-shrink") {
            WriteMetric();
            x_68->has_prop_flex_shrink = true;
            x_68->prop_flex_shrink = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1690 == "flex-direction") {
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
        std::string x_1691 = x_84;
        if (x_1691 == "attributes") {
          std::string x_1692 = x_85;
          if (x_1692 == "width") {
            WriteMetric();
            x_79->has_attr_width = false;
            return MakeUnit();
          } else if (x_1692 == "image_height") {
            WriteMetric();
            x_79->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_1692 == "image_width") {
            WriteMetric();
            x_79->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_1692 == "height") {
            WriteMetric();
            x_79->has_attr_height = false;
            return MakeUnit();
          } else if (x_1692 == "viewBox") {
            WriteMetric();
            x_79->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1691 == "properties") {
          std::string x_1693 = x_85;
          if (x_1693 == "width") {
            WriteMetric();
            x_79->has_prop_width = false;
            return MakeUnit();
          } else if (x_1693 == "flex-grow") {
            WriteMetric();
            x_79->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_1693 == "height") {
            WriteMetric();
            x_79->has_prop_height = false;
            return MakeUnit();
          } else if (x_1693 == "display") {
            WriteMetric();
            x_79->has_prop_display = false;
            return MakeUnit();
          } else if (x_1693 == "position") {
            WriteMetric();
            x_79->has_prop_position = false;
            return MakeUnit();
          } else if (x_1693 == "flex-shrink") {
            WriteMetric();
            x_79->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_1693 == "flex-direction") {
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
        std::string x_1694 = x_94;
        if (x_1694 == "attributes") {
          std::string x_1695 = x_95;
          if (x_1695 == "width") {
            WriteMetric();
            x_88->has_attr_width = false;
            WriteMetric();
            x_88->has_attr_width = true;
            x_88->attr_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1695 == "image_height") {
            WriteMetric();
            x_88->has_attr_image_height = false;
            WriteMetric();
            x_88->has_attr_image_height = true;
            x_88->attr_image_height = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1695 == "image_width") {
            WriteMetric();
            x_88->has_attr_image_width = false;
            WriteMetric();
            x_88->has_attr_image_width = true;
            x_88->attr_image_width = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1695 == "height") {
            WriteMetric();
            x_88->has_attr_height = false;
            WriteMetric();
            x_88->has_attr_height = true;
            x_88->attr_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1695 == "viewBox") {
            WriteMetric();
            x_88->has_attr_viewBox = false;
            WriteMetric();
            x_88->has_attr_viewBox = true;
            x_88->attr_viewBox = AsDEString(x_96);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1694 == "properties") {
          std::string x_1696 = x_95;
          if (x_1696 == "width") {
            WriteMetric();
            x_88->has_prop_width = false;
            WriteMetric();
            x_88->has_prop_width = true;
            x_88->prop_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1696 == "flex-grow") {
            WriteMetric();
            x_88->has_prop_flex_grow = false;
            WriteMetric();
            x_88->has_prop_flex_grow = true;
            x_88->prop_flex_grow = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1696 == "height") {
            WriteMetric();
            x_88->has_prop_height = false;
            WriteMetric();
            x_88->has_prop_height = true;
            x_88->prop_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1696 == "display") {
            WriteMetric();
            x_88->has_prop_display = false;
            WriteMetric();
            x_88->has_prop_display = true;
            x_88->prop_display = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1696 == "position") {
            WriteMetric();
            x_88->has_prop_position = false;
            WriteMetric();
            x_88->has_prop_position = true;
            x_88->prop_position = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1696 == "flex-shrink") {
            WriteMetric();
            x_88->has_prop_flex_shrink = false;
            WriteMetric();
            x_88->has_prop_flex_shrink = true;
            x_88->prop_flex_shrink = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1696 == "flex-direction") {
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
    MetricRecordOverhead(Zro(Timed([&](const auto &x_125) { return MakeUnit(); })));
    MetricRecordOverhead(Zro(Timed([&](const auto &x_130) { return MakeUnit(); })));
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
    MetricRecordOverhead(Zro(Timed([&](const auto &x_175) { return MakeUnit(); })));
    MetricRecordOverhead(Zro(Timed([&](const auto &x_180) { return MakeUnit(); })));
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
  return MetricRecordEval(Zro(Timed([&](const auto &x_192) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_193) { return eval_stmts_x_194(x_191); })));
    ListIter(x_191->children, [&](const auto &x_195) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_196) { return eval_stmts_x_19(x_195); })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_17(const auto &x_197) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_198) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_199) { return eval_stmts_x_200(x_197); })));
    ListIter(x_197->children, [&](const auto &x_201) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_202) { return eval_stmts_x_17(x_201); })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_203) { return eval_stmts_x_204(x_197); })));
    return MakeUnit();
  })));
}
Unit x_205(const auto &x_206) {
  ListIter2(x_206->children, [&](const auto &x_207, const auto &x_208) {
    x_207->parent = x_206.get();
    x_208->parent = x_206.get();
    x_207->next = x_208.get();
    x_208->prev = x_207.get();
    x_205(x_207);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_206->children),
      [&](const auto &x_210) {
        x_206->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_209) {
        x_206->first = x_209.get();
        x_209->parent = x_206.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_206->children),
      [&](const auto &x_212) {
        x_206->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_211) {
        x_206->last = x_211.get();
        x_211->parent = x_206.get();
        x_205(x_211);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_206) { return x_205(x_206); }
int64_t x_213(const auto &x_214) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_214->children, [&](const auto &x_215) { return x_213(x_215); }));
}
int64_t node_size_x_4(const auto &x_214) { return x_213(x_214); }
int64_t x_216(const auto &x_217) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_217->children, [&](const auto &x_218) { return x_216(x_218); }));
}
int64_t layout_size_x_3(const auto &x_217) { return x_216(x_217); }
LayoutNode x_219(const auto &x_220) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_220)), [&](const auto &x_221) { return x_219(x_221); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_220) { return x_219(x_220); }
Node x_222(const auto &x_223) {
  return MakeNode(x_223->name, x_223->attr, x_223->prop, x_223->extern_id,
                  ListMap(x_223->children, [&](const auto &x_224) { return x_222(x_224); }));
}
Node node_to_fs_node_x_1(const auto &x_223) { return x_222(x_223); }
Node x_225(const auto &x_226) {
  return MakeNode(JsonToString(JsonMember("name", x_226)), JsonToDict(JsonMember("attributes", x_226)),
                  JsonToDict(JsonMember("properties", x_226)), JsonToInt(JsonMember("id", x_226)),
                  ListMap(JsonToList(JsonMember("children", x_226)), [&](const auto &x_227) { return x_225(x_227); }));
}
Node json_to_node_aux_x_0(const auto &x_226) { return x_225(x_226); }
int main() {
  WithOutFile("google_hover.out", [&](const auto &x_5) {
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
      MetricRecordOverhead(Zro(Timed([&](const auto &x_16) { return eval_stmts_x_17(x_14); })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_18) { return eval_stmts_x_19(x_14); })));
      JsonToChannel(x_5, [&]() {
        auto x_1697 = FreshJson();
        WriteJson(x_1697, "name", "FS_D");
        WriteJson(x_1697, "diff_num", ReadRef(x_7));
        WriteJson(x_1697, "read_count", MetricReadCount());
        WriteJson(x_1697, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1697, "write_count", MetricWriteCount());
        WriteJson(x_1697, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1697, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1697, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1697, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1697, "overhead_time", MetricOverheadCount());
        WriteJson(x_1697, "eval_time", MetricEvalCount());
        WriteJson(x_1697, "html", "");
        WriteJson(x_1697, "command", StackToList(x_11));
        return x_1697;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_1699 = JsonToString(JsonMember("name", x_21));
        if (x_1699 == "add") {
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
        } else if (x_1699 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_26) {
            eval_stmts_x_17(x_14);
            eval_stmts_x_19(x_14);
            return MakeUnit();
          })));
          JsonToChannel(x_5, [&]() {
            auto x_1698 = FreshJson();
            WriteJson(x_1698, "name", "FS_D");
            WriteJson(x_1698, "diff_num", ReadRef(x_7));
            WriteJson(x_1698, "read_count", MetricReadCount());
            WriteJson(x_1698, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1698, "write_count", MetricWriteCount());
            WriteJson(x_1698, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1698, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1698, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1698, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1698, "overhead_time", MetricOverheadCount());
            WriteJson(x_1698, "eval_time", MetricEvalCount());
            WriteJson(x_1698, "html", "");
            WriteJson(x_1698, "command", StackToList(x_11));
            return x_1698;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1699 == "remove") {
          return remove_node_x_28(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_27) { return JsonToInt(x_27); }), x_14,
              MakeUnit());
        } else if (x_1699 == "replace") {
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
        } else if (x_1699 == "replace_value") {
          return replace_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1699 == "delete_value") {
          return delete_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_1699 == "insert_value") {
          return insert_value_x_38(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1699 == "layout_remove") {
          return remove_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              MakeUnit());
        } else if (x_1699 == "layout_add") {
          return add_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1699 == "layout_replace") {
          return replace_layout_node_x_44(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_43) { return JsonToInt(x_43); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1699 == "layout_info_changed") {
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