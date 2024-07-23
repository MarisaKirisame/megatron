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
struct MetaNode {};

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

using Meta = std::shared_ptr<MetaNode>;
struct Content : std::enable_shared_from_this<Content> {
  Content *parent = nullptr;
  Content *prev = nullptr;
  Content *next = nullptr;
  Content *first = nullptr;
  Content *last = nullptr;
  int64_t extern_id;
  List<Node> children;
  DEString name;
  Meta meta = std::make_shared<MetaNode>();
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
Unit var_modified_x_456(const auto &x_458);
auto eval_expr_x_453(const auto &x_463);
Unit var_modified_x_451(const auto &x_480);
auto eval_expr_x_448(const auto &x_483);
Unit var_modified_x_446(const auto &x_492);
auto eval_expr_x_443(const auto &x_496);
Unit var_modified_x_441(const auto &x_549);
auto eval_expr_x_438(const auto &x_555);
Unit var_modified_x_436(const auto &x_580);
auto eval_expr_x_433(const auto &x_585);
Unit var_modified_x_431(const auto &x_594);
auto eval_expr_x_428(const auto &x_598);
Unit var_modified_x_426(const auto &x_651);
auto eval_expr_x_423(const auto &x_657);
Unit var_modified_x_421(const auto &x_678);
auto eval_expr_x_418(const auto &x_681);
Unit var_modified_x_416(const auto &x_702);
auto eval_expr_x_413(const auto &x_705);
Unit var_modified_x_411(const auto &x_718);
auto eval_expr_x_408(const auto &x_722);
Unit var_modified_x_406(const auto &x_743);
auto eval_expr_x_403(const auto &x_746);
Unit var_modified_x_401(const auto &x_751);
auto eval_expr_x_398(const auto &x_754);
Unit var_modified_x_394(const auto &x_759);
auto eval_expr_x_391(const auto &x_769);
Unit var_modified_x_389(const auto &x_846);
auto eval_expr_x_386(const auto &x_849);
Unit var_modified_x_384(const auto &x_866);
auto eval_expr_x_381(const auto &x_871);
Unit var_modified_x_379(const auto &x_876);
auto eval_expr_x_376(const auto &x_881);
Unit var_modified_x_374(const auto &x_890);
auto eval_expr_x_371(const auto &x_893);
Unit var_modified_x_369(const auto &x_894);
auto eval_expr_x_366(const auto &x_897);
Unit var_modified_x_364(const auto &x_902);
auto eval_expr_x_361(const auto &x_906);
Unit var_modified_x_359(const auto &x_917);
auto eval_expr_x_356(const auto &x_920);
Unit var_modified_x_354(const auto &x_925);
auto eval_expr_x_351(const auto &x_929);
Unit var_modified_x_349(const auto &x_940);
auto eval_expr_x_346(const auto &x_944);
Unit var_modified_x_344(const auto &x_969);
auto eval_expr_x_341(const auto &x_974);
Unit var_modified_x_339(const auto &x_999);
auto eval_expr_x_336(const auto &x_1002);
Unit var_modified_x_334(const auto &x_1005);
auto eval_expr_x_331(const auto &x_1011);
Unit var_modified_x_329(const auto &x_1020);
auto eval_expr_x_326(const auto &x_1026);
Unit var_modified_x_324(const auto &x_1035);
auto eval_expr_x_321(const auto &x_1039);
Unit var_modified_x_319(const auto &x_1042);
auto eval_expr_x_316(const auto &x_1046);
Unit var_modified_x_314(const auto &x_1049);
auto eval_expr_x_311(const auto &x_1054);
Unit var_modified_x_309(const auto &x_1057);
auto eval_expr_x_306(const auto &x_1062);
Unit var_modified_x_302(const auto &x_1065);
auto eval_expr_x_299(const auto &x_1073);
Unit var_modified_x_297(const auto &x_1102);
auto eval_expr_x_294(const auto &x_1110);
Unit var_modified_x_292(const auto &x_1123);
auto eval_expr_x_289(const auto &x_1131);
Unit var_modified_x_287(const auto &x_1140);
auto eval_expr_x_284(const auto &x_1143);
Unit var_modified_x_282(const auto &x_1152);
auto eval_expr_x_279(const auto &x_1156);
Unit var_modified_x_277(const auto &x_1301);
auto eval_expr_x_274(const auto &x_1304);
Unit var_modified_x_272(const auto &x_1353);
auto eval_expr_x_269(const auto &x_1357);
Unit var_modified_x_267(const auto &x_1360);
auto eval_expr_x_264(const auto &x_1363);
Unit var_modified_x_262(const auto &x_1372);
auto eval_expr_x_259(const auto &x_1380);
Unit var_modified_x_257(const auto &x_1389);
auto eval_expr_x_254(const auto &x_1397);
Unit var_modified_x_252(const auto &x_1406);
auto eval_expr_x_249(const auto &x_1412);
Unit var_modified_x_247(const auto &x_1425);
auto eval_expr_x_244(const auto &x_1428);
Unit var_modified_x_242(const auto &x_1437);
auto eval_expr_x_239(const auto &x_1441);
Unit var_modified_x_237(const auto &x_1594);
auto eval_expr_x_234(const auto &x_1597);
Unit var_modified_x_232(const auto &x_1602);
auto eval_expr_x_229(const auto &x_1605);
Unit var_modified_x_227(const auto &x_1654);
auto eval_expr_x_224(const auto &x_1657);
Unit var_modified_x_222(const auto &x_1670);
auto eval_expr_x_219(const auto &x_1674);
Unit eval_stmts_x_193(const auto &x_217);
Unit eval_stmts_x_191(const auto &x_304);
Unit eval_stmts_x_187(const auto &x_396);
Unit x_43(const auto &x_44, const auto &x_45, const auto &x_46);
Unit x_50(const auto &x_51, const auto &x_52, const auto &x_53);
Unit x_57(const auto &x_58, const auto &x_59, const auto &x_60);
Unit x_64(const auto &x_65, const auto &x_66, const auto &x_67);
Unit x_75(const auto &x_76, const auto &x_77, const auto &x_78);
Unit x_84(const auto &x_85, const auto &x_86, const auto &x_87);
Unit x_95(const auto &x_96, const auto &x_97, const auto &x_98);
Unit x_129(const auto &x_130);
Unit x_137(const auto &x_138, const auto &x_139, const auto &x_140);
Unit x_158(const auto &x_159, const auto &x_160, const auto &x_161);
Unit x_177(const auto &x_178);
Unit eval_stmts_x_17(const auto &x_185);
Unit eval_stmts_x_16(const auto &x_189);
Unit x_194(const auto &x_195);
int64_t x_202(const auto &x_203);
int64_t x_205(const auto &x_206);
LayoutNode x_208(const auto &x_209);
Node x_211(const auto &x_212);
Node x_214(const auto &x_215);
Unit var_modified_x_456(const auto &x_458) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_459) { return MakeUnit(); })));
}
auto eval_expr_x_453(const auto &x_463) {
  if ((x_463->prev != nullptr) && (!(x_463->prev)->var_line_break)) {
    return max(x_463->var_height_external, (x_463->prev)->var_line_height);
  } else {
    return x_463->var_height_external;
  }
}
Unit var_modified_x_451(const auto &x_480) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_481) { return MakeUnit(); })));
}
auto eval_expr_x_448(const auto &x_483) {
  if (eq(x_483->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_483->var_height_internal;
  }
}
Unit var_modified_x_446(const auto &x_492) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_493) { return MakeUnit(); })));
}
auto eval_expr_x_443(const auto &x_496) {
  if (x_496->var_intrinsic_height_is_height) {
    return x_496->var_intrinsic_height_internal;
  } else {
    if ((x_496->parent != nullptr) && (x_496->parent)->var_is_flex_column) {
      return plus(x_496->var_intrinsic_height_internal, mult(x_496->var_flex_amount, (x_496->parent)->var_flex_unit));
    } else {
      if (x_496->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_496->var_box_height, divide(x_496->var_height_expr.r.a0, 100.));
      } else {
        return max(x_496->var_box_height, x_496->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_441(const auto &x_549) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_550) { return MakeUnit(); })));
}
auto eval_expr_x_438(const auto &x_555) {
  if (x_555->prev != nullptr) {
    if (x_555->var_line_break || (x_555->prev)->var_line_break) {
      return plus((x_555->prev)->var_y, (x_555->prev)->var_line_height);
    } else {
      return (x_555->prev)->var_y;
    }
  } else {
    if (x_555->parent != nullptr) {
      return (x_555->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_436(const auto &x_580) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_581) { return MakeUnit(); })));
}
auto eval_expr_x_433(const auto &x_585) {
  if (eq(x_585->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_585->var_width_internal;
  }
}
Unit var_modified_x_431(const auto &x_594) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_595) { return MakeUnit(); })));
}
auto eval_expr_x_428(const auto &x_598) {
  if (x_598->var_intrinsic_width_is_width) {
    return x_598->var_intrinsic_width_internal;
  } else {
    if ((x_598->parent != nullptr) && (x_598->parent)->var_is_flex_row) {
      return plus(x_598->var_intrinsic_width_internal, mult(x_598->var_flex_amount, (x_598->parent)->var_flex_unit));
    } else {
      if (x_598->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_598->var_box_width, divide(x_598->var_width_expr.r.a0, 100.));
      } else {
        return max(x_598->var_box_width, x_598->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_426(const auto &x_651) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_652) { return MakeUnit(); })));
}
auto eval_expr_x_423(const auto &x_657) {
  if (x_657->prev != nullptr) {
    if (x_657->var_line_break || (x_657->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_657->prev)->var_x, (x_657->prev)->var_width_external);
    }
  } else {
    if (x_657->parent != nullptr) {
      return (x_657->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_421(const auto &x_678) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_679) { return MakeUnit(); })));
}
auto eval_expr_x_418(const auto &x_681) {
  if (gt(x_681->var_left_over, 0.)) {
    return divide(x_681->var_left_over, x_681->var_flex_grow_sum);
  } else {
    return divide(x_681->var_left_over, x_681->var_flex_shrink_sum);
  }
}
Unit var_modified_x_416(const auto &x_702) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_703) { return MakeUnit(); })));
}
auto eval_expr_x_413(const auto &x_705) {
  if ((x_705->parent != nullptr) && gt((x_705->parent)->var_left_over, 0.)) {
    return x_705->var_flex_grow;
  } else {
    return x_705->var_flex_shrink;
  }
}
Unit var_modified_x_411(const auto &x_718) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_719) { return MakeUnit(); })));
}
auto eval_expr_x_408(const auto &x_722) {
  if (x_722->var_is_flex_row) {
    return minus(x_722->var_box_width, (x_722->last != nullptr) ? ((x_722->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_722->var_box_height, (x_722->last != nullptr) ? ((x_722->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_406(const auto &x_743) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_744) { return MakeUnit(); })));
}
auto eval_expr_x_403(const auto &x_746) {
  if (x_746->parent != nullptr) {
    return (x_746->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_401(const auto &x_751) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_752) { return MakeUnit(); })));
}
auto eval_expr_x_398(const auto &x_754) {
  if (x_754->parent != nullptr) {
    return (x_754->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_394(const auto &x_759) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_760) { return MakeUnit(); })));
}
auto eval_expr_x_391(const auto &x_769) {
  if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_769->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_769->parent != nullptr) &&
          (eq((x_769->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_769->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_769->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_769->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_769->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_389(const auto &x_846) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_847) { return MakeUnit(); })));
}
auto eval_expr_x_386(const auto &x_849) {
  return (((!(x_849->parent != nullptr)) || (x_849->parent)->var_visible) &&
          (neq(x_849->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_849->var_inside_svg) && (!x_849->var_disabled))));
}
Unit var_modified_x_384(const auto &x_866) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_867) { return MakeUnit(); })));
}
auto eval_expr_x_381(const auto &x_871) {
  if (eq(x_871->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_871->parent != nullptr) && (x_871->parent)->var_disabled);
  }
}
Unit var_modified_x_379(const auto &x_876) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_877) { return MakeUnit(); })));
}
auto eval_expr_x_376(const auto &x_881) {
  return ((x_881->parent != nullptr) && ((x_881->parent)->var_is_svg_block || (x_881->parent)->var_inside_svg));
}
Unit var_modified_x_374(const auto &x_890) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_891) { return MakeUnit(); })));
}
auto eval_expr_x_371(const auto &x_893) { return eq(x_893->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_369(const auto &x_894) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_895) { return MakeUnit(); })));
}
auto eval_expr_x_366(const auto &x_897) {
  return neq(x_897->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_364(const auto &x_902) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_903) { return MakeUnit(); })));
}
auto eval_expr_x_361(const auto &x_906) {
  if (!x_906->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_906->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_906->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_906->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_359(const auto &x_917) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_918) { return MakeUnit(); })));
}
auto eval_expr_x_356(const auto &x_920) {
  return neq(x_920->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_354(const auto &x_925) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_926) { return MakeUnit(); })));
}
auto eval_expr_x_351(const auto &x_929) {
  if (!x_929->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_929->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_929->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_929->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_349(const auto &x_940) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_941) { return MakeUnit(); })));
}
auto eval_expr_x_346(const auto &x_944) {
  if ((x_944->parent != nullptr) &&
      (eq((x_944->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_944->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_944->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_944->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_344(const auto &x_969) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_970) { return MakeUnit(); })));
}
auto eval_expr_x_341(const auto &x_974) {
  if ((x_974->parent != nullptr) &&
      (eq((x_974->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_974->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_974->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_339(const auto &x_999) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1000) { return MakeUnit(); })));
}
auto eval_expr_x_336(const auto &x_1002) {
  if (x_1002->has_prop_flex_direction) {
    return x_1002->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_334(const auto &x_1005) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1006) { return MakeUnit(); })));
}
auto eval_expr_x_331(const auto &x_1011) {
  return plus((x_1011->prev != nullptr) ? ((x_1011->prev)->var_flex_shrink_sum) : (0.), x_1011->var_flex_shrink);
}
Unit var_modified_x_329(const auto &x_1020) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1021) { return MakeUnit(); })));
}
auto eval_expr_x_326(const auto &x_1026) {
  return plus((x_1026->prev != nullptr) ? ((x_1026->prev)->var_flex_grow_sum) : (0.), x_1026->var_flex_grow);
}
Unit var_modified_x_324(const auto &x_1035) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1036) { return MakeUnit(); })));
}
auto eval_expr_x_321(const auto &x_1039) {
  if (x_1039->has_prop_flex_shrink) {
    return (x_1039->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_319(const auto &x_1042) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1043) { return MakeUnit(); })));
}
auto eval_expr_x_316(const auto &x_1046) {
  if (x_1046->has_prop_flex_grow) {
    return (x_1046->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_314(const auto &x_1049) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1050) { return MakeUnit(); })));
}
auto eval_expr_x_311(const auto &x_1054) {
  if (x_1054->has_prop_position) {
    return x_1054->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_309(const auto &x_1057) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1058) { return MakeUnit(); })));
}
auto eval_expr_x_306(const auto &x_1062) {
  if (x_1062->has_prop_display) {
    return x_1062->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_302(const auto &x_1065) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1066) { return MakeUnit(); })));
}
auto eval_expr_x_299(const auto &x_1073) {
  if (x_1073->prev != nullptr) {
    if (x_1073->var_line_break) {
      return plus((x_1073->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1073->prev)->var_intrinsic_current_line_height, x_1073->var_intrinsic_height_external));
    } else {
      return (x_1073->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1073->var_line_break) {
      return x_1073->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_297(const auto &x_1102) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1103) { return MakeUnit(); })));
}
auto eval_expr_x_294(const auto &x_1110) {
  if (x_1110->var_line_break) {
    return 0.;
  } else {
    return max(x_1110->var_intrinsic_height_external,
               (x_1110->prev != nullptr) ? ((x_1110->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_292(const auto &x_1123) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1124) { return MakeUnit(); })));
}
auto eval_expr_x_289(const auto &x_1131) {
  return plus((x_1131->prev != nullptr) ? ((x_1131->prev)->var_intrinsic_height_sum) : (0.),
              x_1131->var_intrinsic_height_external);
}
Unit var_modified_x_287(const auto &x_1140) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1141) { return MakeUnit(); })));
}
auto eval_expr_x_284(const auto &x_1143) {
  if (eq(x_1143->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1143->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_282(const auto &x_1152) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1153) { return MakeUnit(); })));
}
auto eval_expr_x_279(const auto &x_1156) {
  if (eq(x_1156->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1156->var_inside_svg) {
      return 0.;
    } else {
      if (x_1156->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1156->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1156->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_1156->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_1156->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1156->var_height_expr.r.a0;
          } else {
            if (x_1156->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_1156->var_height_expr.r.a0;
            } else {
              return x_1156->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_1156->var_children_intrinsic_height,
              (eq(x_1156->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_1156->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1156->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1156->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_1156->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1156->var_has_height_attr &&
                                                  (x_1156->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1156->var_height_attr_expr.r.a0)
                                                     : ((x_1156->has_attr_viewBox)
                                                            ? (x_1156->attr_viewBox.r.a3)
                                                            : (mult((x_1156->attr_viewBox.r.a3),
                                                                    divide(x_1156->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1156->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1156->var_has_height_attr)
                                                            ? (x_1156->var_height_attr_expr.r.a0)
                                                            : ((x_1156->has_attr_image_height &&
                                                                (!x_1156->var_has_width_attr))
                                                                   ? (int_to_float(x_1156->attr_image_height))
                                                                   : ((neq(x_1156->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1156->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1156->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_1156->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_1156->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_1156->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_277(const auto &x_1301) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1302) { return MakeUnit(); })));
}
auto eval_expr_x_274(const auto &x_1304) {
  if (eq(x_1304->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1304->var_inside_svg || x_1304->var_disabled)) {
    return true;
  } else {
    if ((x_1304->parent != nullptr) && (x_1304->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1304->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1304->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1304->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1304->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1304->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_272(const auto &x_1353) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1354) { return MakeUnit(); })));
}
auto eval_expr_x_269(const auto &x_1357) {
  if (x_1357->has_prop_height) {
    return x_1357->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_267(const auto &x_1360) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1361) { return MakeUnit(); })));
}
auto eval_expr_x_264(const auto &x_1363) {
  if (x_1363->last != nullptr) {
    return plus((x_1363->last)->var_finished_intrinsic_height_sum, (x_1363->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_262(const auto &x_1372) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1373) { return MakeUnit(); })));
}
auto eval_expr_x_259(const auto &x_1380) {
  return plus((x_1380->prev != nullptr) ? ((x_1380->prev)->var_intrinsic_width_sum) : (0.),
              x_1380->var_intrinsic_width_external);
}
Unit var_modified_x_257(const auto &x_1389) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1390) { return MakeUnit(); })));
}
auto eval_expr_x_254(const auto &x_1397) {
  return max(x_1397->var_intrinsic_current_line_width,
             (x_1397->prev != nullptr) ? ((x_1397->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_252(const auto &x_1406) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1407) { return MakeUnit(); })));
}
auto eval_expr_x_249(const auto &x_1412) {
  return plus(x_1412->var_intrinsic_width_external,
              ((x_1412->prev != nullptr) && (!(x_1412->prev)->var_line_break))
                  ? ((x_1412->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_247(const auto &x_1425) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1426) { return MakeUnit(); })));
}
auto eval_expr_x_244(const auto &x_1428) {
  if (eq(x_1428->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1428->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_242(const auto &x_1437) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1438) { return MakeUnit(); })));
}
auto eval_expr_x_239(const auto &x_1441) {
  if (eq(x_1441->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1441->var_inside_svg) {
      return 0.;
    } else {
      if (x_1441->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1441->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1441->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1441->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1441->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1441->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1441->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1441->var_width_expr.r.a0;
          } else {
            return x_1441->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1441->var_children_intrinsic_width,
              (eq(x_1441->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1441->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1441->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1441->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1441->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1441->var_has_width_attr &&
                                                  (x_1441->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1441->var_width_attr_expr.r.a0)
                                                     : (((!x_1441->var_has_width_attr) && x_1441->has_attr_viewBox)
                                                            ? (x_1441->attr_viewBox.r.a2)
                                                            : (mult((x_1441->attr_viewBox.r.a2),
                                                                    divide(x_1441->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1441->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1441->var_has_width_attr)
                                                            ? (x_1441->var_width_attr_expr.r.a0)
                                                            : ((x_1441->has_attr_image_width &&
                                                                (!x_1441->var_has_height_attr))
                                                                   ? (int_to_float(x_1441->attr_image_width))
                                                                   : ((neq(x_1441->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1441->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1441->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1441->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1441->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1441->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_237(const auto &x_1594) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1595) { return MakeUnit(); })));
}
auto eval_expr_x_234(const auto &x_1597) {
  if (x_1597->last != nullptr) {
    return (x_1597->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_232(const auto &x_1602) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1603) { return MakeUnit(); })));
}
auto eval_expr_x_229(const auto &x_1605) {
  if (eq(x_1605->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1605->var_inside_svg || x_1605->var_disabled)) {
    return true;
  } else {
    if ((x_1605->parent != nullptr) && (x_1605->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1605->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1605->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1605->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1605->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1605->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_227(const auto &x_1654) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1655) { return MakeUnit(); })));
}
auto eval_expr_x_224(const auto &x_1657) {
  if (eq(x_1657->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1657->var_inside_svg) {
      return true;
    } else {
      if (x_1657->var_disabled) {
        return true;
      } else {if ( eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_1657->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_222(const auto &x_1670) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1671) { return MakeUnit(); })));
}
auto eval_expr_x_219(const auto &x_1674) {
  if (x_1674->has_prop_width) {
    return x_1674->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_193(const auto &x_217) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_218) {
    WriteMetric();
    auto x_220 = eval_expr_x_219(x_217);
    if (x_217->has_var_width_expr) {
      auto x_221 = x_217->var_width_expr;
      if (!EqualValue(x_221, x_220)) {
        var_modified_x_222(x_217);
      }
    }
    x_217->has_var_width_expr = true;
    x_217->var_width_expr = AsDEString(x_220);
    WriteMetric();
    auto x_225 = eval_expr_x_224(x_217);
    if (x_217->has_var_is_default_case) {
      auto x_226 = x_217->var_is_default_case;
      if (!EqualValue(x_226, x_225)) {
        var_modified_x_227(x_217);
      }
    }
    x_217->has_var_is_default_case = true;
    x_217->var_is_default_case = Asbool(x_225);
    WriteMetric();
    auto x_230 = eval_expr_x_229(x_217);
    if (x_217->has_var_intrinsic_width_is_width) {
      auto x_231 = x_217->var_intrinsic_width_is_width;
      if (!EqualValue(x_231, x_230)) {
        var_modified_x_232(x_217);
      }
    }
    x_217->has_var_intrinsic_width_is_width = true;
    x_217->var_intrinsic_width_is_width = Asbool(x_230);
    WriteMetric();
    auto x_235 = eval_expr_x_234(x_217);
    if (x_217->has_var_children_intrinsic_width) {
      auto x_236 = x_217->var_children_intrinsic_width;
      if (!EqualValue(x_236, x_235)) {
        var_modified_x_237(x_217);
      }
    }
    x_217->has_var_children_intrinsic_width = true;
    x_217->var_children_intrinsic_width = Asdouble(x_235);
    WriteMetric();
    auto x_240 = eval_expr_x_239(x_217);
    if (x_217->has_var_intrinsic_width_internal) {
      auto x_241 = x_217->var_intrinsic_width_internal;
      if (!EqualValue(x_241, x_240)) {
        var_modified_x_242(x_217);
      }
    }
    x_217->has_var_intrinsic_width_internal = true;
    x_217->var_intrinsic_width_internal = Asdouble(x_240);
    WriteMetric();
    auto x_245 = eval_expr_x_244(x_217);
    if (x_217->has_var_intrinsic_width_external) {
      auto x_246 = x_217->var_intrinsic_width_external;
      if (!EqualValue(x_246, x_245)) {
        var_modified_x_247(x_217);
      }
    }
    x_217->has_var_intrinsic_width_external = true;
    x_217->var_intrinsic_width_external = Asdouble(x_245);
    WriteMetric();
    auto x_250 = eval_expr_x_249(x_217);
    if (x_217->has_var_intrinsic_current_line_width) {
      auto x_251 = x_217->var_intrinsic_current_line_width;
      if (!EqualValue(x_251, x_250)) {
        var_modified_x_252(x_217);
      }
    }
    x_217->has_var_intrinsic_current_line_width = true;
    x_217->var_intrinsic_current_line_width = Asdouble(x_250);
    WriteMetric();
    auto x_255 = eval_expr_x_254(x_217);
    if (x_217->has_var_intrinsic_width_max) {
      auto x_256 = x_217->var_intrinsic_width_max;
      if (!EqualValue(x_256, x_255)) {
        var_modified_x_257(x_217);
      }
    }
    x_217->has_var_intrinsic_width_max = true;
    x_217->var_intrinsic_width_max = Asdouble(x_255);
    WriteMetric();
    auto x_260 = eval_expr_x_259(x_217);
    if (x_217->has_var_intrinsic_width_sum) {
      auto x_261 = x_217->var_intrinsic_width_sum;
      if (!EqualValue(x_261, x_260)) {
        var_modified_x_262(x_217);
      }
    }
    x_217->has_var_intrinsic_width_sum = true;
    x_217->var_intrinsic_width_sum = Asdouble(x_260);
    WriteMetric();
    auto x_265 = eval_expr_x_264(x_217);
    if (x_217->has_var_children_intrinsic_height) {
      auto x_266 = x_217->var_children_intrinsic_height;
      if (!EqualValue(x_266, x_265)) {
        var_modified_x_267(x_217);
      }
    }
    x_217->has_var_children_intrinsic_height = true;
    x_217->var_children_intrinsic_height = Asdouble(x_265);
    WriteMetric();
    auto x_270 = eval_expr_x_269(x_217);
    if (x_217->has_var_height_expr) {
      auto x_271 = x_217->var_height_expr;
      if (!EqualValue(x_271, x_270)) {
        var_modified_x_272(x_217);
      }
    }
    x_217->has_var_height_expr = true;
    x_217->var_height_expr = AsDEString(x_270);
    WriteMetric();
    auto x_275 = eval_expr_x_274(x_217);
    if (x_217->has_var_intrinsic_height_is_height) {
      auto x_276 = x_217->var_intrinsic_height_is_height;
      if (!EqualValue(x_276, x_275)) {
        var_modified_x_277(x_217);
      }
    }
    x_217->has_var_intrinsic_height_is_height = true;
    x_217->var_intrinsic_height_is_height = Asbool(x_275);
    WriteMetric();
    auto x_280 = eval_expr_x_279(x_217);
    if (x_217->has_var_intrinsic_height_internal) {
      auto x_281 = x_217->var_intrinsic_height_internal;
      if (!EqualValue(x_281, x_280)) {
        var_modified_x_282(x_217);
      }
    }
    x_217->has_var_intrinsic_height_internal = true;
    x_217->var_intrinsic_height_internal = Asdouble(x_280);
    WriteMetric();
    auto x_285 = eval_expr_x_284(x_217);
    if (x_217->has_var_intrinsic_height_external) {
      auto x_286 = x_217->var_intrinsic_height_external;
      if (!EqualValue(x_286, x_285)) {
        var_modified_x_287(x_217);
      }
    }
    x_217->has_var_intrinsic_height_external = true;
    x_217->var_intrinsic_height_external = Asdouble(x_285);
    WriteMetric();
    auto x_290 = eval_expr_x_289(x_217);
    if (x_217->has_var_intrinsic_height_sum) {
      auto x_291 = x_217->var_intrinsic_height_sum;
      if (!EqualValue(x_291, x_290)) {
        var_modified_x_292(x_217);
      }
    }
    x_217->has_var_intrinsic_height_sum = true;
    x_217->var_intrinsic_height_sum = Asdouble(x_290);
    WriteMetric();
    auto x_295 = eval_expr_x_294(x_217);
    if (x_217->has_var_intrinsic_current_line_height) {
      auto x_296 = x_217->var_intrinsic_current_line_height;
      if (!EqualValue(x_296, x_295)) {
        var_modified_x_297(x_217);
      }
    }
    x_217->has_var_intrinsic_current_line_height = true;
    x_217->var_intrinsic_current_line_height = Asdouble(x_295);
    WriteMetric();
    auto x_300 = eval_expr_x_299(x_217);
    if (x_217->has_var_finished_intrinsic_height_sum) {
      auto x_301 = x_217->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_301, x_300)) {
        var_modified_x_302(x_217);
      }
    }
    x_217->has_var_finished_intrinsic_height_sum = true;
    x_217->var_finished_intrinsic_height_sum = Asdouble(x_300);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_191(const auto &x_304) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_305) {
    WriteMetric();
    auto x_307 = eval_expr_x_306(x_304);
    if (x_304->has_var_display) {
      auto x_308 = x_304->var_display;
      if (!EqualValue(x_308, x_307)) {
        var_modified_x_309(x_304);
      }
    }
    x_304->has_var_display = true;
    x_304->var_display = AsDEString(x_307);
    WriteMetric();
    auto x_312 = eval_expr_x_311(x_304);
    if (x_304->has_var_position) {
      auto x_313 = x_304->var_position;
      if (!EqualValue(x_313, x_312)) {
        var_modified_x_314(x_304);
      }
    }
    x_304->has_var_position = true;
    x_304->var_position = AsDEString(x_312);
    WriteMetric();
    auto x_317 = eval_expr_x_316(x_304);
    if (x_304->has_var_flex_grow) {
      auto x_318 = x_304->var_flex_grow;
      if (!EqualValue(x_318, x_317)) {
        var_modified_x_319(x_304);
      }
    }
    x_304->has_var_flex_grow = true;
    x_304->var_flex_grow = Asdouble(x_317);
    WriteMetric();
    auto x_322 = eval_expr_x_321(x_304);
    if (x_304->has_var_flex_shrink) {
      auto x_323 = x_304->var_flex_shrink;
      if (!EqualValue(x_323, x_322)) {
        var_modified_x_324(x_304);
      }
    }
    x_304->has_var_flex_shrink = true;
    x_304->var_flex_shrink = Asdouble(x_322);
    WriteMetric();
    auto x_327 = eval_expr_x_326(x_304);
    if (x_304->has_var_flex_grow_sum) {
      auto x_328 = x_304->var_flex_grow_sum;
      if (!EqualValue(x_328, x_327)) {
        var_modified_x_329(x_304);
      }
    }
    x_304->has_var_flex_grow_sum = true;
    x_304->var_flex_grow_sum = Asdouble(x_327);
    WriteMetric();
    auto x_332 = eval_expr_x_331(x_304);
    if (x_304->has_var_flex_shrink_sum) {
      auto x_333 = x_304->var_flex_shrink_sum;
      if (!EqualValue(x_333, x_332)) {
        var_modified_x_334(x_304);
      }
    }
    x_304->has_var_flex_shrink_sum = true;
    x_304->var_flex_shrink_sum = Asdouble(x_332);
    WriteMetric();
    auto x_337 = eval_expr_x_336(x_304);
    if (x_304->has_var_flex_direction) {
      auto x_338 = x_304->var_flex_direction;
      if (!EqualValue(x_338, x_337)) {
        var_modified_x_339(x_304);
      }
    }
    x_304->has_var_flex_direction = true;
    x_304->var_flex_direction = AsDEString(x_337);
    WriteMetric();
    auto x_342 = eval_expr_x_341(x_304);
    if (x_304->has_var_is_flex_row) {
      auto x_343 = x_304->var_is_flex_row;
      if (!EqualValue(x_343, x_342)) {
        var_modified_x_344(x_304);
      }
    }
    x_304->has_var_is_flex_row = true;
    x_304->var_is_flex_row = Asbool(x_342);
    WriteMetric();
    auto x_347 = eval_expr_x_346(x_304);
    if (x_304->has_var_is_flex_column) {
      auto x_348 = x_304->var_is_flex_column;
      if (!EqualValue(x_348, x_347)) {
        var_modified_x_349(x_304);
      }
    }
    x_304->has_var_is_flex_column = true;
    x_304->var_is_flex_column = Asbool(x_347);
    WriteMetric();
    auto x_352 = eval_expr_x_351(x_304);
    if (x_304->has_var_width_attr_expr) {
      auto x_353 = x_304->var_width_attr_expr;
      if (!EqualValue(x_353, x_352)) {
        var_modified_x_354(x_304);
      }
    }
    x_304->has_var_width_attr_expr = true;
    x_304->var_width_attr_expr = AsDEString(x_352);
    WriteMetric();
    auto x_357 = eval_expr_x_356(x_304);
    if (x_304->has_var_has_width_attr) {
      auto x_358 = x_304->var_has_width_attr;
      if (!EqualValue(x_358, x_357)) {
        var_modified_x_359(x_304);
      }
    }
    x_304->has_var_has_width_attr = true;
    x_304->var_has_width_attr = Asbool(x_357);
    WriteMetric();
    auto x_362 = eval_expr_x_361(x_304);
    if (x_304->has_var_height_attr_expr) {
      auto x_363 = x_304->var_height_attr_expr;
      if (!EqualValue(x_363, x_362)) {
        var_modified_x_364(x_304);
      }
    }
    x_304->has_var_height_attr_expr = true;
    x_304->var_height_attr_expr = AsDEString(x_362);
    WriteMetric();
    auto x_367 = eval_expr_x_366(x_304);
    if (x_304->has_var_has_height_attr) {
      auto x_368 = x_304->var_has_height_attr;
      if (!EqualValue(x_368, x_367)) {
        var_modified_x_369(x_304);
      }
    }
    x_304->has_var_has_height_attr = true;
    x_304->var_has_height_attr = Asbool(x_367);
    WriteMetric();
    auto x_372 = eval_expr_x_371(x_304);
    if (x_304->has_var_is_svg_block) {
      auto x_373 = x_304->var_is_svg_block;
      if (!EqualValue(x_373, x_372)) {
        var_modified_x_374(x_304);
      }
    }
    x_304->has_var_is_svg_block = true;
    x_304->var_is_svg_block = Asbool(x_372);
    WriteMetric();
    auto x_377 = eval_expr_x_376(x_304);
    if (x_304->has_var_inside_svg) {
      auto x_378 = x_304->var_inside_svg;
      if (!EqualValue(x_378, x_377)) {
        var_modified_x_379(x_304);
      }
    }
    x_304->has_var_inside_svg = true;
    x_304->var_inside_svg = Asbool(x_377);
    WriteMetric();
    auto x_382 = eval_expr_x_381(x_304);
    if (x_304->has_var_disabled) {
      auto x_383 = x_304->var_disabled;
      if (!EqualValue(x_383, x_382)) {
        var_modified_x_384(x_304);
      }
    }
    x_304->has_var_disabled = true;
    x_304->var_disabled = Asbool(x_382);
    WriteMetric();
    auto x_387 = eval_expr_x_386(x_304);
    if (x_304->has_var_visible) {
      auto x_388 = x_304->var_visible;
      if (!EqualValue(x_388, x_387)) {
        var_modified_x_389(x_304);
      }
    }
    x_304->has_var_visible = true;
    x_304->var_visible = Asbool(x_387);
    WriteMetric();
    auto x_392 = eval_expr_x_391(x_304);
    if (x_304->has_var_line_break) {
      auto x_393 = x_304->var_line_break;
      if (!EqualValue(x_393, x_392)) {
        var_modified_x_394(x_304);
      }
    }
    x_304->has_var_line_break = true;
    x_304->var_line_break = Asbool(x_392);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_187(const auto &x_396) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_397) {
    WriteMetric();
    auto x_399 = eval_expr_x_398(x_396);
    if (x_396->has_var_box_width) {
      auto x_400 = x_396->var_box_width;
      if (!EqualValue(x_400, x_399)) {
        var_modified_x_401(x_396);
      }
    }
    x_396->has_var_box_width = true;
    x_396->var_box_width = Asdouble(x_399);
    WriteMetric();
    auto x_404 = eval_expr_x_403(x_396);
    if (x_396->has_var_box_height) {
      auto x_405 = x_396->var_box_height;
      if (!EqualValue(x_405, x_404)) {
        var_modified_x_406(x_396);
      }
    }
    x_396->has_var_box_height = true;
    x_396->var_box_height = Asdouble(x_404);
    WriteMetric();
    auto x_409 = eval_expr_x_408(x_396);
    if (x_396->has_var_left_over) {
      auto x_410 = x_396->var_left_over;
      if (!EqualValue(x_410, x_409)) {
        var_modified_x_411(x_396);
      }
    }
    x_396->has_var_left_over = true;
    x_396->var_left_over = Asdouble(x_409);
    WriteMetric();
    auto x_414 = eval_expr_x_413(x_396);
    if (x_396->has_var_flex_amount) {
      auto x_415 = x_396->var_flex_amount;
      if (!EqualValue(x_415, x_414)) {
        var_modified_x_416(x_396);
      }
    }
    x_396->has_var_flex_amount = true;
    x_396->var_flex_amount = Asdouble(x_414);
    WriteMetric();
    auto x_419 = eval_expr_x_418(x_396);
    if (x_396->has_var_flex_unit) {
      auto x_420 = x_396->var_flex_unit;
      if (!EqualValue(x_420, x_419)) {
        var_modified_x_421(x_396);
      }
    }
    x_396->has_var_flex_unit = true;
    x_396->var_flex_unit = Asdouble(x_419);
    WriteMetric();
    auto x_424 = eval_expr_x_423(x_396);
    if (x_396->has_var_x) {
      auto x_425 = x_396->var_x;
      if (!EqualValue(x_425, x_424)) {
        var_modified_x_426(x_396);
      }
    }
    x_396->has_var_x = true;
    x_396->var_x = Asdouble(x_424);
    WriteMetric();
    auto x_429 = eval_expr_x_428(x_396);
    if (x_396->has_var_width_internal) {
      auto x_430 = x_396->var_width_internal;
      if (!EqualValue(x_430, x_429)) {
        var_modified_x_431(x_396);
      }
    }
    x_396->has_var_width_internal = true;
    x_396->var_width_internal = Asdouble(x_429);
    WriteMetric();
    auto x_434 = eval_expr_x_433(x_396);
    if (x_396->has_var_width_external) {
      auto x_435 = x_396->var_width_external;
      if (!EqualValue(x_435, x_434)) {
        var_modified_x_436(x_396);
      }
    }
    x_396->has_var_width_external = true;
    x_396->var_width_external = Asdouble(x_434);
    WriteMetric();
    auto x_439 = eval_expr_x_438(x_396);
    if (x_396->has_var_y) {
      auto x_440 = x_396->var_y;
      if (!EqualValue(x_440, x_439)) {
        var_modified_x_441(x_396);
      }
    }
    x_396->has_var_y = true;
    x_396->var_y = Asdouble(x_439);
    WriteMetric();
    auto x_444 = eval_expr_x_443(x_396);
    if (x_396->has_var_height_internal) {
      auto x_445 = x_396->var_height_internal;
      if (!EqualValue(x_445, x_444)) {
        var_modified_x_446(x_396);
      }
    }
    x_396->has_var_height_internal = true;
    x_396->var_height_internal = Asdouble(x_444);
    WriteMetric();
    auto x_449 = eval_expr_x_448(x_396);
    if (x_396->has_var_height_external) {
      auto x_450 = x_396->var_height_external;
      if (!EqualValue(x_450, x_449)) {
        var_modified_x_451(x_396);
      }
    }
    x_396->has_var_height_external = true;
    x_396->var_height_external = Asdouble(x_449);
    WriteMetric();
    auto x_454 = eval_expr_x_453(x_396);
    if (x_396->has_var_line_height) {
      auto x_455 = x_396->var_line_height;
      if (!EqualValue(x_455, x_454)) {
        var_modified_x_456(x_396);
      }
    }
    x_396->has_var_line_height = true;
    x_396->var_line_height = Asdouble(x_454);
    return MakeUnit();
  })));
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
        std::string x_1677 = x_72;
        if (x_1677 == "attributes") {
          std::string x_1678 = x_73;
          if (x_1678 == "width") {
            WriteMetric();
            x_66->has_attr_width = true;
            x_66->attr_width = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1678 == "image_height") {
            WriteMetric();
            x_66->has_attr_image_height = true;
            x_66->attr_image_height = Asint64_t(x_74);
            return MakeUnit();
          } else if (x_1678 == "image_width") {
            WriteMetric();
            x_66->has_attr_image_width = true;
            x_66->attr_image_width = Asint64_t(x_74);
            return MakeUnit();
          } else if (x_1678 == "height") {
            WriteMetric();
            x_66->has_attr_height = true;
            x_66->attr_height = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1678 == "viewBox") {
            WriteMetric();
            x_66->has_attr_viewBox = true;
            x_66->attr_viewBox = AsDEString(x_74);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1677 == "properties") {
          std::string x_1679 = x_73;
          if (x_1679 == "width") {
            WriteMetric();
            x_66->has_prop_width = true;
            x_66->prop_width = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1679 == "flex-grow") {
            WriteMetric();
            x_66->has_prop_flex_grow = true;
            x_66->prop_flex_grow = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1679 == "height") {
            WriteMetric();
            x_66->has_prop_height = true;
            x_66->prop_height = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1679 == "display") {
            WriteMetric();
            x_66->has_prop_display = true;
            x_66->prop_display = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1679 == "position") {
            WriteMetric();
            x_66->has_prop_position = true;
            x_66->prop_position = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1679 == "flex-shrink") {
            WriteMetric();
            x_66->has_prop_flex_shrink = true;
            x_66->prop_flex_shrink = AsDEString(x_74);
            return MakeUnit();
          } else if (x_1679 == "flex-direction") {
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
        std::string x_1680 = x_82;
        if (x_1680 == "attributes") {
          std::string x_1681 = x_83;
          if (x_1681 == "width") {
            WriteMetric();
            x_77->has_attr_width = false;
            return MakeUnit();
          } else if (x_1681 == "image_height") {
            WriteMetric();
            x_77->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_1681 == "image_width") {
            WriteMetric();
            x_77->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_1681 == "height") {
            WriteMetric();
            x_77->has_attr_height = false;
            return MakeUnit();
          } else if (x_1681 == "viewBox") {
            WriteMetric();
            x_77->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1680 == "properties") {
          std::string x_1682 = x_83;
          if (x_1682 == "width") {
            WriteMetric();
            x_77->has_prop_width = false;
            return MakeUnit();
          } else if (x_1682 == "flex-grow") {
            WriteMetric();
            x_77->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_1682 == "height") {
            WriteMetric();
            x_77->has_prop_height = false;
            return MakeUnit();
          } else if (x_1682 == "display") {
            WriteMetric();
            x_77->has_prop_display = false;
            return MakeUnit();
          } else if (x_1682 == "position") {
            WriteMetric();
            x_77->has_prop_position = false;
            return MakeUnit();
          } else if (x_1682 == "flex-shrink") {
            WriteMetric();
            x_77->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_1682 == "flex-direction") {
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
        std::string x_1683 = x_92;
        if (x_1683 == "attributes") {
          std::string x_1684 = x_93;
          if (x_1684 == "width") {
            WriteMetric();
            x_86->has_attr_width = false;
            WriteMetric();
            x_86->has_attr_width = true;
            x_86->attr_width = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1684 == "image_height") {
            WriteMetric();
            x_86->has_attr_image_height = false;
            WriteMetric();
            x_86->has_attr_image_height = true;
            x_86->attr_image_height = Asint64_t(x_94);
            return MakeUnit();
          } else if (x_1684 == "image_width") {
            WriteMetric();
            x_86->has_attr_image_width = false;
            WriteMetric();
            x_86->has_attr_image_width = true;
            x_86->attr_image_width = Asint64_t(x_94);
            return MakeUnit();
          } else if (x_1684 == "height") {
            WriteMetric();
            x_86->has_attr_height = false;
            WriteMetric();
            x_86->has_attr_height = true;
            x_86->attr_height = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1684 == "viewBox") {
            WriteMetric();
            x_86->has_attr_viewBox = false;
            WriteMetric();
            x_86->has_attr_viewBox = true;
            x_86->attr_viewBox = AsDEString(x_94);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1683 == "properties") {
          std::string x_1685 = x_93;
          if (x_1685 == "width") {
            WriteMetric();
            x_86->has_prop_width = false;
            WriteMetric();
            x_86->has_prop_width = true;
            x_86->prop_width = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1685 == "flex-grow") {
            WriteMetric();
            x_86->has_prop_flex_grow = false;
            WriteMetric();
            x_86->has_prop_flex_grow = true;
            x_86->prop_flex_grow = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1685 == "height") {
            WriteMetric();
            x_86->has_prop_height = false;
            WriteMetric();
            x_86->has_prop_height = true;
            x_86->prop_height = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1685 == "display") {
            WriteMetric();
            x_86->has_prop_display = false;
            WriteMetric();
            x_86->has_prop_display = true;
            x_86->prop_display = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1685 == "position") {
            WriteMetric();
            x_86->has_prop_position = false;
            WriteMetric();
            x_86->has_prop_position = true;
            x_86->prop_position = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1685 == "flex-shrink") {
            WriteMetric();
            x_86->has_prop_flex_shrink = false;
            WriteMetric();
            x_86->has_prop_flex_shrink = true;
            x_86->prop_flex_shrink = AsDEString(x_94);
            return MakeUnit();
          } else if (x_1685 == "flex-direction") {
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
    return MakeUnit();
  } else {
    return x_95(x_100, ListNthExn(x_97->children, x_99), x_98);
  }
}
Unit replace_node_x_30(const auto &x_96, const auto &x_97, const auto &x_98) { return x_95(x_96, x_97, x_98); }
Unit x_129(const auto &x_130) {
  ListIter2(x_130->children, [&](const auto &x_131, const auto &x_132) {
    x_131->parent = x_130.get();
    x_132->parent = x_130.get();
    x_131->next = x_132.get();
    x_132->prev = x_131.get();
    x_129(x_131);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_130->children),
      [&](const auto &x_134) {
        x_130->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_133) {
        x_130->first = x_133.get();
        x_133->parent = x_130.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_130->children),
      [&](const auto &x_136) {
        x_130->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_135) {
        x_130->last = x_135.get();
        x_135->parent = x_130.get();
        x_129(x_135);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_28(const auto &x_130) { return x_129(x_130); }
Unit x_137(const auto &x_138, const auto &x_139, const auto &x_140) {
  auto x_141 = ListHeadExn(x_138);
  auto x_142 = ListTailExn(x_138);
  if (ListIsEmpty(x_142)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_139->children, x_141)));
    auto x_143 = ListSplitN(x_139->children, x_141);
    auto x_144 = Zro(x_143);
    auto x_145 = Fst(x_143);
    auto x_146 = ListHeadExn(x_145);
    auto x_147 = ListTailExn(x_145);
    x_139->children = ListAppend(x_144, x_147);
    OptionMatch(
        x_146->prev, [&](const auto &x_149) { return MakeUnit(); },
        [&](const auto &x_148) {
          x_148->next = ToPath(x_146->next);
          return MakeUnit();
        });
    OptionMatch(
        x_146->next, [&](const auto &x_151) { return MakeUnit(); },
        [&](const auto &x_150) {
          x_150->prev = ToPath(x_146->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_144)) {
      x_139->first = ToPath(ListHead(x_147));
    }
    if (ListIsEmpty(x_147)) {
      x_139->last = ToPath(ListLast(x_144));
    }
    return MakeUnit();
  } else {
    return x_137(x_142, ListNthExn(x_139->children, x_141), x_140);
  }
}
Unit remove_node_x_26(const auto &x_138, const auto &x_139, const auto &x_140) { return x_137(x_138, x_139, x_140); }
Unit x_158(const auto &x_159, const auto &x_160, const auto &x_161) {
  auto x_162 = ListHeadExn(x_159);
  auto x_163 = ListTailExn(x_159);
  if (ListIsEmpty(x_163)) {
    InputChangeMetric(node_size_x_4(x_161));
    auto x_164 = ListSplitN(x_160->children, x_162);
    auto x_165 = Zro(x_164);
    auto x_166 = Fst(x_164);
    x_160->children = ListAppend(x_165, Cons(x_161, x_166));
    if (ListIsEmpty(x_165)) {
      x_160->first = x_161.get();
    }
    if (ListIsEmpty(x_166)) {
      x_160->last = x_161.get();
    }
    OptionMatch(
        ListLast(x_165),
        [&](const auto &x_168) {
          x_161->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_167) {
          x_161->prev = x_167.get();
          x_167->next = x_161.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_166),
        [&](const auto &x_170) {
          x_161->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_169) {
          x_161->next = x_169.get();
          x_169->prev = x_161.get();
          return MakeUnit();
        });
    x_161->parent = x_160.get();
    return MakeUnit();
  } else {
    return x_158(x_163, ListNthExn(x_160->children, x_162), x_161);
  }
}
Unit add_node_x_23(const auto &x_159, const auto &x_160, const auto &x_161) { return x_158(x_159, x_160, x_161); }
Unit x_177(const auto &x_178) {
  ListIter2(x_178->children, [&](const auto &x_179, const auto &x_180) {
    x_179->parent = x_178.get();
    x_180->parent = x_178.get();
    x_179->next = x_180.get();
    x_180->prev = x_179.get();
    x_177(x_179);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_178->children),
      [&](const auto &x_182) {
        x_178->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_181) {
        x_178->first = x_181.get();
        x_181->parent = x_178.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_178->children),
      [&](const auto &x_184) {
        x_178->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_183) {
        x_178->last = x_183.get();
        x_183->parent = x_178.get();
        x_177(x_183);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_21(const auto &x_178) { return x_177(x_178); }
Unit eval_stmts_x_17(const auto &x_185) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_186) {
    eval_stmts_x_187(x_185);
    ListIter(x_185->children, [&](const auto &x_188) { return eval_stmts_x_17(x_188); });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_16(const auto &x_189) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_190) {
    eval_stmts_x_191(x_189);
    ListIter(x_189->children, [&](const auto &x_192) { return eval_stmts_x_16(x_192); });
    eval_stmts_x_193(x_189);
    return MakeUnit();
  })));
}
Unit x_194(const auto &x_195) {
  ListIter2(x_195->children, [&](const auto &x_196, const auto &x_197) {
    x_196->parent = x_195.get();
    x_197->parent = x_195.get();
    x_196->next = x_197.get();
    x_197->prev = x_196.get();
    x_194(x_196);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_195->children),
      [&](const auto &x_199) {
        x_195->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_198) {
        x_195->first = x_198.get();
        x_198->parent = x_195.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_195->children),
      [&](const auto &x_201) {
        x_195->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_200) {
        x_195->last = x_200.get();
        x_200->parent = x_195.get();
        x_194(x_200);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_195) { return x_194(x_195); }
int64_t x_202(const auto &x_203) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_203->children, [&](const auto &x_204) { return x_202(x_204); }));
}
int64_t node_size_x_4(const auto &x_203) { return x_202(x_203); }
int64_t x_205(const auto &x_206) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_206->children, [&](const auto &x_207) { return x_205(x_207); }));
}
int64_t layout_size_x_3(const auto &x_206) { return x_205(x_206); }
LayoutNode x_208(const auto &x_209) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_209)), [&](const auto &x_210) { return x_208(x_210); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_209) { return x_208(x_209); }
Node x_211(const auto &x_212) {
  return MakeNode(x_212->name, x_212->attr, x_212->prop, x_212->extern_id,
                  ListMap(x_212->children, [&](const auto &x_213) { return x_211(x_213); }));
}
Node node_to_fs_node_x_1(const auto &x_212) { return x_211(x_212); }
Node x_214(const auto &x_215) {
  return MakeNode(JsonToString(JsonMember("name", x_215)), JsonToDict(JsonMember("attributes", x_215)),
                  JsonToDict(JsonMember("properties", x_215)), JsonToInt(JsonMember("id", x_215)),
                  ListMap(JsonToList(JsonMember("children", x_215)), [&](const auto &x_216) { return x_214(x_216); }));
}
Node json_to_node_aux_x_0(const auto &x_215) { return x_214(x_215); }
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
      eval_stmts_x_16(x_14);
      eval_stmts_x_17(x_14);
      JsonToChannel(x_5, [&]() {
        auto x_1686 = FreshJson();
        WriteJson(x_1686, "name", "FS_D");
        WriteJson(x_1686, "diff_num", ReadRef(x_7));
        WriteJson(x_1686, "read_count", MetricReadCount());
        WriteJson(x_1686, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1686, "write_count", MetricWriteCount());
        WriteJson(x_1686, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1686, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1686, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1686, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1686, "overhead_time", MetricOverheadCount());
        WriteJson(x_1686, "eval_time", MetricEvalCount());
        WriteJson(x_1686, "html", "");
        WriteJson(x_1686, "command", StackToList(x_11));
        return x_1686;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_18) {
        auto x_19 = JsonOfString(x_18);
        PushStack(x_11, x_19);
        std::string x_1688 = JsonToString(JsonMember("name", x_19));
        if (x_1688 == "add") {
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
        } else if (x_1688 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_24) {
            eval_stmts_x_16(x_14);
            eval_stmts_x_17(x_14);
            return MakeUnit();
          })));
          JsonToChannel(x_5, [&]() {
            auto x_1687 = FreshJson();
            WriteJson(x_1687, "name", "FS_D");
            WriteJson(x_1687, "diff_num", ReadRef(x_7));
            WriteJson(x_1687, "read_count", MetricReadCount());
            WriteJson(x_1687, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1687, "write_count", MetricWriteCount());
            WriteJson(x_1687, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1687, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1687, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1687, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1687, "overhead_time", MetricOverheadCount());
            WriteJson(x_1687, "eval_time", MetricEvalCount());
            WriteJson(x_1687, "html", "");
            WriteJson(x_1687, "command", StackToList(x_11));
            return x_1687;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1688 == "remove") {
          return remove_node_x_26(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_25) { return JsonToInt(x_25); }), x_14,
              MakeUnit());
        } else if (x_1688 == "replace") {
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
        } else if (x_1688 == "replace_value") {
          return replace_value_x_32(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_31) { return JsonToInt(x_31); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_19)), JsonToString(JsonMember("key", x_19))),
                       JsonToValue(JsonMember("value", x_19))));
        } else if (x_1688 == "delete_value") {
          return delete_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_19)), JsonToString(JsonMember("key", x_19))));
        } else if (x_1688 == "insert_value") {
          return insert_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_19)), JsonToString(JsonMember("key", x_19))),
                       JsonToValue(JsonMember("value", x_19))));
        } else if (x_1688 == "layout_remove") {
          return remove_layout_node_x_38(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_15,
              MakeUnit());
        } else if (x_1688 == "layout_add") {
          return add_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_19)));
        } else if (x_1688 == "layout_replace") {
          return replace_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_19)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_19)));
        } else if (x_1688 == "layout_info_changed") {
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