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
struct MetaNode {
  bool bb_1_has_bb_dirtied = false;
  bool bb_1_bb_dirtied;
  bool bb_0_has_bb_dirtied = false;
  bool bb_0_bb_dirtied;
  bool bb_2_has_bb_dirtied = false;
  bool bb_2_bb_dirtied;
  bool pass_0_proc_inited = false;
  bool pass_0_has_recursive_proc_dirtied = false;
  bool pass_0_recursive_proc_dirtied;
  bool pass_1_proc_inited = false;
  bool pass_1_has_recursive_proc_dirtied = false;
  bool pass_1_recursive_proc_dirtied;
};

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
Unit var_modified_x_2155(const auto &x_2165);
auto eval_expr_x_2152(const auto &x_2170);
Unit var_modified_x_2150(const auto &x_2187);
auto eval_expr_x_2147(const auto &x_2190);
Unit var_modified_x_2145(const auto &x_2199);
auto eval_expr_x_2142(const auto &x_2203);
Unit var_modified_x_2140(const auto &x_2256);
auto eval_expr_x_2137(const auto &x_2262);
Unit var_modified_x_2135(const auto &x_2287);
auto eval_expr_x_2132(const auto &x_2292);
Unit var_modified_x_2130(const auto &x_2301);
auto eval_expr_x_2127(const auto &x_2305);
Unit var_modified_x_2125(const auto &x_2358);
auto eval_expr_x_2122(const auto &x_2364);
Unit var_modified_x_2120(const auto &x_2385);
auto eval_expr_x_2117(const auto &x_2388);
Unit var_modified_x_2115(const auto &x_2409);
auto eval_expr_x_2112(const auto &x_2412);
Unit var_modified_x_2110(const auto &x_2425);
auto eval_expr_x_2107(const auto &x_2429);
Unit var_modified_x_2105(const auto &x_2450);
auto eval_expr_x_2102(const auto &x_2453);
Unit var_modified_x_2100(const auto &x_2458);
auto eval_expr_x_2097(const auto &x_2461);
Unit var_modified_x_2093(const auto &x_2466);
auto eval_expr_x_2090(const auto &x_2476);
Unit var_modified_x_2088(const auto &x_2553);
auto eval_expr_x_2085(const auto &x_2556);
Unit var_modified_x_2083(const auto &x_2573);
auto eval_expr_x_2080(const auto &x_2578);
Unit var_modified_x_2078(const auto &x_2583);
auto eval_expr_x_2075(const auto &x_2588);
Unit var_modified_x_2073(const auto &x_2597);
auto eval_expr_x_2070(const auto &x_2600);
Unit var_modified_x_2068(const auto &x_2601);
auto eval_expr_x_2065(const auto &x_2604);
Unit var_modified_x_2063(const auto &x_2609);
auto eval_expr_x_2060(const auto &x_2613);
Unit var_modified_x_2058(const auto &x_2624);
auto eval_expr_x_2055(const auto &x_2627);
Unit var_modified_x_2053(const auto &x_2632);
auto eval_expr_x_2050(const auto &x_2636);
Unit var_modified_x_2048(const auto &x_2647);
auto eval_expr_x_2045(const auto &x_2651);
Unit var_modified_x_2043(const auto &x_2676);
auto eval_expr_x_2040(const auto &x_2681);
Unit var_modified_x_2038(const auto &x_2706);
auto eval_expr_x_2035(const auto &x_2709);
Unit var_modified_x_2033(const auto &x_2712);
auto eval_expr_x_2030(const auto &x_2718);
Unit var_modified_x_2028(const auto &x_2727);
auto eval_expr_x_2025(const auto &x_2733);
Unit var_modified_x_2023(const auto &x_2742);
auto eval_expr_x_2020(const auto &x_2746);
Unit var_modified_x_2018(const auto &x_2749);
auto eval_expr_x_2015(const auto &x_2753);
Unit var_modified_x_2013(const auto &x_2756);
auto eval_expr_x_2010(const auto &x_2761);
Unit var_modified_x_2008(const auto &x_2764);
auto eval_expr_x_2005(const auto &x_2769);
Unit var_modified_x_2001(const auto &x_2772);
auto eval_expr_x_1998(const auto &x_2780);
Unit var_modified_x_1996(const auto &x_2809);
auto eval_expr_x_1993(const auto &x_2817);
Unit var_modified_x_1991(const auto &x_2830);
auto eval_expr_x_1988(const auto &x_2838);
Unit var_modified_x_1986(const auto &x_2847);
auto eval_expr_x_1983(const auto &x_2850);
Unit var_modified_x_1981(const auto &x_2859);
auto eval_expr_x_1978(const auto &x_2863);
Unit var_modified_x_1976(const auto &x_3008);
auto eval_expr_x_1973(const auto &x_3011);
Unit var_modified_x_1971(const auto &x_3060);
auto eval_expr_x_1968(const auto &x_3064);
Unit var_modified_x_1966(const auto &x_3067);
auto eval_expr_x_1963(const auto &x_3070);
Unit var_modified_x_1961(const auto &x_3079);
auto eval_expr_x_1958(const auto &x_3087);
Unit var_modified_x_1956(const auto &x_3096);
auto eval_expr_x_1953(const auto &x_3104);
Unit var_modified_x_1951(const auto &x_3113);
auto eval_expr_x_1948(const auto &x_3119);
Unit var_modified_x_1946(const auto &x_3132);
auto eval_expr_x_1943(const auto &x_3135);
Unit var_modified_x_1941(const auto &x_3144);
auto eval_expr_x_1938(const auto &x_3148);
Unit var_modified_x_1936(const auto &x_3301);
auto eval_expr_x_1933(const auto &x_3304);
Unit var_modified_x_1931(const auto &x_3309);
auto eval_expr_x_1928(const auto &x_3312);
Unit var_modified_x_1926(const auto &x_3361);
auto eval_expr_x_1923(const auto &x_3364);
Unit var_modified_x_1921(const auto &x_3377);
auto eval_expr_x_1918(const auto &x_3381);
Unit eval_stmts_x_1859(const auto &x_1916);
Unit eval_stmts_x_1857(const auto &x_2003);
Unit eval_stmts_x_1853(const auto &x_2095);
Unit x_2157(const auto &x_2158);
Unit x_2161(const auto &x_2162);
Unit x_1734(const auto &x_1735, const auto &x_1736, const auto &x_1737);
Unit x_1741(const auto &x_1742, const auto &x_1743, const auto &x_1744);
Unit x_1748(const auto &x_1749, const auto &x_1750, const auto &x_1751);
Unit x_1755(const auto &x_1756, const auto &x_1757, const auto &x_1758);
Unit x_1767(const auto &x_1768, const auto &x_1769, const auto &x_1770);
Unit x_1776(const auto &x_1777, const auto &x_1778, const auto &x_1779);
Unit x_1787(const auto &x_1788, const auto &x_1789, const auto &x_1790);
Unit x_1822(const auto &x_1823);
Unit x_1830(const auto &x_1831, const auto &x_1832, const auto &x_1833);
Unit x_1851(const auto &x_1852);
Unit x_1855(const auto &x_1856);
Unit x_1860(const auto &x_1861, const auto &x_1862, const auto &x_1863);
Unit x_1879(const auto &x_1880);
Unit eval_stmts_x_1706(const auto &x_1887);
Unit eval_stmts_x_1705(const auto &x_1890);
Unit x_1893(const auto &x_1894);
int64_t x_1901(const auto &x_1902);
int64_t x_1904(const auto &x_1905);
LayoutNode x_1907(const auto &x_1908);
Node x_1910(const auto &x_1911);
Node x_1913(const auto &x_1914);
Unit var_modified_x_2155(const auto &x_2165) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2166) {
    auto x_3384 = [&](const auto &x_2169) {
      if (x_2169->meta->pass_1_proc_inited) {
        x_2169->meta->bb_2_has_bb_dirtied = true;
        x_2169->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2169);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2165->next, [&](const auto &x_2168) { return MakeUnit(); },
        [&](const auto &x_2167) {
          auto x_3385 = x_3384;
          x_3385(x_2167);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2152(const auto &x_2170) {
  if ((x_2170->prev != nullptr) && (!(x_2170->prev)->var_line_break)) {
    return max(x_2170->var_height_external, (x_2170->prev)->var_line_height);
  } else {
    return x_2170->var_height_external;
  }
}
Unit var_modified_x_2150(const auto &x_2187) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2188) {
    auto x_3386 = [&](const auto &x_2189) {
      if (x_2189->meta->pass_1_proc_inited) {
        x_2189->meta->bb_2_has_bb_dirtied = true;
        x_2189->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2189);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3386(x_2187);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2147(const auto &x_2190) {
  if (eq(x_2190->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2190->var_height_internal;
  }
}
Unit var_modified_x_2145(const auto &x_2199) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2200) {
    auto x_3387 = [&](const auto &x_2201) {
      if (x_2201->meta->pass_1_proc_inited) {
        x_2201->meta->bb_2_has_bb_dirtied = true;
        x_2201->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2201);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3387(x_2199);
    MakeUnit();
    ListIter(x_2199->children, [&](const auto &x_2202) {
      if (x_2202->meta->pass_1_proc_inited) {
        x_2202->meta->bb_2_has_bb_dirtied = true;
        x_2202->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2202);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2142(const auto &x_2203) {
  if (x_2203->var_intrinsic_height_is_height) {
    return x_2203->var_intrinsic_height_internal;
  } else {
    if ((x_2203->parent != nullptr) && (x_2203->parent)->var_is_flex_column) {
      return plus(x_2203->var_intrinsic_height_internal,
                  mult(x_2203->var_flex_amount, (x_2203->parent)->var_flex_unit));
    } else {
      if (x_2203->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2203->var_box_height, divide(x_2203->var_height_expr.r.a0, 100.));
      } else {
        return max(x_2203->var_box_height, x_2203->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_2140(const auto &x_2256) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2257) {
    ListIter(x_2256->children, [&](const auto &x_2258) {
      if (x_2258->meta->pass_1_proc_inited) {
        x_2258->meta->bb_2_has_bb_dirtied = true;
        x_2258->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2258);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3388 = [&](const auto &x_2261) {
      if (x_2261->meta->pass_1_proc_inited) {
        x_2261->meta->bb_2_has_bb_dirtied = true;
        x_2261->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2261);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2256->next, [&](const auto &x_2260) { return MakeUnit(); },
        [&](const auto &x_2259) {
          auto x_3389 = x_3388;
          x_3389(x_2259);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2137(const auto &x_2262) {
  if (x_2262->prev != nullptr) {
    if (x_2262->var_line_break || (x_2262->prev)->var_line_break) {
      return plus((x_2262->prev)->var_y, (x_2262->prev)->var_line_height);
    } else {
      return (x_2262->prev)->var_y;
    }
  } else {
    if (x_2262->parent != nullptr) {
      return (x_2262->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2135(const auto &x_2287) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2288) {
    auto x_3390 = [&](const auto &x_2291) {
      if (x_2291->meta->pass_1_proc_inited) {
        x_2291->meta->bb_2_has_bb_dirtied = true;
        x_2291->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2291);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2287->next, [&](const auto &x_2290) { return MakeUnit(); },
        [&](const auto &x_2289) {
          auto x_3391 = x_3390;
          x_3391(x_2289);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2132(const auto &x_2292) {
  if (eq(x_2292->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2292->var_width_internal;
  }
}
Unit var_modified_x_2130(const auto &x_2301) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2302) {
    auto x_3392 = [&](const auto &x_2303) {
      if (x_2303->meta->pass_1_proc_inited) {
        x_2303->meta->bb_2_has_bb_dirtied = true;
        x_2303->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2303);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3392(x_2301);
    MakeUnit();
    ListIter(x_2301->children, [&](const auto &x_2304) {
      if (x_2304->meta->pass_1_proc_inited) {
        x_2304->meta->bb_2_has_bb_dirtied = true;
        x_2304->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2304);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2127(const auto &x_2305) {
  if (x_2305->var_intrinsic_width_is_width) {
    return x_2305->var_intrinsic_width_internal;
  } else {
    if ((x_2305->parent != nullptr) && (x_2305->parent)->var_is_flex_row) {
      return plus(x_2305->var_intrinsic_width_internal, mult(x_2305->var_flex_amount, (x_2305->parent)->var_flex_unit));
    } else {
      if (x_2305->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2305->var_box_width, divide(x_2305->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2305->var_box_width, x_2305->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_2125(const auto &x_2358) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2359) {
    ListIter(x_2358->children, [&](const auto &x_2360) {
      if (x_2360->meta->pass_1_proc_inited) {
        x_2360->meta->bb_2_has_bb_dirtied = true;
        x_2360->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2360);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3393 = [&](const auto &x_2363) {
      if (x_2363->meta->pass_1_proc_inited) {
        x_2363->meta->bb_2_has_bb_dirtied = true;
        x_2363->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2363);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2358->next, [&](const auto &x_2362) { return MakeUnit(); },
        [&](const auto &x_2361) {
          auto x_3394 = x_3393;
          x_3394(x_2361);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2122(const auto &x_2364) {
  if (x_2364->prev != nullptr) {
    if (x_2364->var_line_break || (x_2364->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2364->prev)->var_x, (x_2364->prev)->var_width_external);
    }
  } else {
    if (x_2364->parent != nullptr) {
      return (x_2364->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2120(const auto &x_2385) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2386) {
    ListIter(x_2385->children, [&](const auto &x_2387) {
      if (x_2387->meta->pass_1_proc_inited) {
        x_2387->meta->bb_2_has_bb_dirtied = true;
        x_2387->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2387);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2117(const auto &x_2388) {
  if (gt(x_2388->var_left_over, 0.)) {
    return divide(x_2388->var_left_over, x_2388->var_flex_grow_sum);
  } else {
    return divide(x_2388->var_left_over, x_2388->var_flex_shrink_sum);
  }
}
Unit var_modified_x_2115(const auto &x_2409) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2410) {
    auto x_3395 = [&](const auto &x_2411) {
      if (x_2411->meta->pass_1_proc_inited) {
        x_2411->meta->bb_2_has_bb_dirtied = true;
        x_2411->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2411);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3395(x_2409);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2112(const auto &x_2412) {
  if ((x_2412->parent != nullptr) && gt((x_2412->parent)->var_left_over, 0.)) {
    return x_2412->var_flex_grow;
  } else {
    return x_2412->var_flex_shrink;
  }
}
Unit var_modified_x_2110(const auto &x_2425) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2426) {
    auto x_3396 = [&](const auto &x_2427) {
      if (x_2427->meta->pass_1_proc_inited) {
        x_2427->meta->bb_2_has_bb_dirtied = true;
        x_2427->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2427);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3396(x_2425);
    MakeUnit();
    ListIter(x_2425->children, [&](const auto &x_2428) {
      if (x_2428->meta->pass_1_proc_inited) {
        x_2428->meta->bb_2_has_bb_dirtied = true;
        x_2428->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2428);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2107(const auto &x_2429) {
  if (x_2429->var_is_flex_row) {
    return minus(x_2429->var_box_width, (x_2429->last != nullptr) ? ((x_2429->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2429->var_box_height, (x_2429->last != nullptr) ? ((x_2429->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_2105(const auto &x_2450) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2451) {
    auto x_3397 = [&](const auto &x_2452) {
      if (x_2452->meta->pass_1_proc_inited) {
        x_2452->meta->bb_2_has_bb_dirtied = true;
        x_2452->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2452);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3397(x_2450);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2102(const auto &x_2453) {
  if (x_2453->parent != nullptr) {
    return (x_2453->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_2100(const auto &x_2458) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2459) {
    auto x_3398 = [&](const auto &x_2460) {
      if (x_2460->meta->pass_1_proc_inited) {
        x_2460->meta->bb_2_has_bb_dirtied = true;
        x_2460->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2460);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3398(x_2458);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2097(const auto &x_2461) {
  if (x_2461->parent != nullptr) {
    return (x_2461->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_2093(const auto &x_2466) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2467) {
    auto x_3399 = [&](const auto &x_2468) {
      if (x_2468->meta->pass_0_proc_inited) {
        x_2468->meta->bb_0_has_bb_dirtied = true;
        x_2468->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2468);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3399(x_2466);
    MakeUnit();
    auto x_3400 = [&](const auto &x_2471) {
      if (x_2471->meta->pass_0_proc_inited) {
        x_2471->meta->bb_0_has_bb_dirtied = true;
        x_2471->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2471);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2466->next, [&](const auto &x_2470) { return MakeUnit(); },
        [&](const auto &x_2469) {
          auto x_3403 = x_3400;
          x_3403(x_2469);
          return MakeUnit();
        });
    auto x_3401 = [&](const auto &x_2472) {
      if (x_2472->meta->pass_1_proc_inited) {
        x_2472->meta->bb_2_has_bb_dirtied = true;
        x_2472->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2472);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3401(x_2466);
    MakeUnit();
    auto x_3402 = [&](const auto &x_2475) {
      if (x_2475->meta->pass_1_proc_inited) {
        x_2475->meta->bb_2_has_bb_dirtied = true;
        x_2475->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2475);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2466->next, [&](const auto &x_2474) { return MakeUnit(); },
        [&](const auto &x_2473) {
          auto x_3404 = x_3402;
          x_3404(x_2473);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2090(const auto &x_2476) {
  if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_2476->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_2476->parent != nullptr) &&
          (eq((x_2476->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_2476->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_2476->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_2476->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_2476->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_2088(const auto &x_2553) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2554) {
    ListIter(x_2553->children, [&](const auto &x_2555) {
      if (x_2555->meta->pass_0_proc_inited) {
        x_2555->meta->bb_1_has_bb_dirtied = true;
        x_2555->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2555);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2085(const auto &x_2556) {
  return (((!(x_2556->parent != nullptr)) || (x_2556->parent)->var_visible) &&
          (neq(x_2556->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_2556->var_inside_svg) && (!x_2556->var_disabled))));
}
Unit var_modified_x_2083(const auto &x_2573) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2574) {
    auto x_3405 = [&](const auto &x_2575) {
      if (x_2575->meta->pass_0_proc_inited) {
        x_2575->meta->bb_1_has_bb_dirtied = true;
        x_2575->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2575);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3405(x_2573);
    MakeUnit();
    ListIter(x_2573->children, [&](const auto &x_2576) {
      if (x_2576->meta->pass_0_proc_inited) {
        x_2576->meta->bb_1_has_bb_dirtied = true;
        x_2576->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2576);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3406 = [&](const auto &x_2577) {
      if (x_2577->meta->pass_0_proc_inited) {
        x_2577->meta->bb_0_has_bb_dirtied = true;
        x_2577->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2577);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3406(x_2573);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2080(const auto &x_2578) {
  if (eq(x_2578->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_2578->parent != nullptr) && (x_2578->parent)->var_disabled);
  }
}
Unit var_modified_x_2078(const auto &x_2583) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2584) {
    auto x_3407 = [&](const auto &x_2585) {
      if (x_2585->meta->pass_0_proc_inited) {
        x_2585->meta->bb_1_has_bb_dirtied = true;
        x_2585->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2585);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3407(x_2583);
    MakeUnit();
    ListIter(x_2583->children, [&](const auto &x_2586) {
      if (x_2586->meta->pass_0_proc_inited) {
        x_2586->meta->bb_1_has_bb_dirtied = true;
        x_2586->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2586);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3408 = [&](const auto &x_2587) {
      if (x_2587->meta->pass_0_proc_inited) {
        x_2587->meta->bb_0_has_bb_dirtied = true;
        x_2587->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2587);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3408(x_2583);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2075(const auto &x_2588) {
  return ((x_2588->parent != nullptr) && ((x_2588->parent)->var_is_svg_block || (x_2588->parent)->var_inside_svg));
}
Unit var_modified_x_2073(const auto &x_2597) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2598) {
    ListIter(x_2597->children, [&](const auto &x_2599) {
      if (x_2599->meta->pass_0_proc_inited) {
        x_2599->meta->bb_1_has_bb_dirtied = true;
        x_2599->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2599);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2070(const auto &x_2600) { return eq(x_2600->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_2068(const auto &x_2601) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2602) {
    auto x_3409 = [&](const auto &x_2603) {
      if (x_2603->meta->pass_0_proc_inited) {
        x_2603->meta->bb_0_has_bb_dirtied = true;
        x_2603->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2603);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3409(x_2601);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2065(const auto &x_2604) {
  return neq(x_2604->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2063(const auto &x_2609) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2610) {
    auto x_3410 = [&](const auto &x_2611) {
      if (x_2611->meta->pass_0_proc_inited) {
        x_2611->meta->bb_1_has_bb_dirtied = true;
        x_2611->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2611);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3410(x_2609);
    MakeUnit();
    auto x_3411 = [&](const auto &x_2612) {
      if (x_2612->meta->pass_0_proc_inited) {
        x_2612->meta->bb_0_has_bb_dirtied = true;
        x_2612->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2612);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3411(x_2609);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2060(const auto &x_2613) {
  if (!x_2613->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2613->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_2613->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2613->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2058(const auto &x_2624) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2625) {
    auto x_3412 = [&](const auto &x_2626) {
      if (x_2626->meta->pass_0_proc_inited) {
        x_2626->meta->bb_0_has_bb_dirtied = true;
        x_2626->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2626);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3412(x_2624);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2055(const auto &x_2627) {
  return neq(x_2627->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2053(const auto &x_2632) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2633) {
    auto x_3413 = [&](const auto &x_2634) {
      if (x_2634->meta->pass_0_proc_inited) {
        x_2634->meta->bb_1_has_bb_dirtied = true;
        x_2634->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2634);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3413(x_2632);
    MakeUnit();
    auto x_3414 = [&](const auto &x_2635) {
      if (x_2635->meta->pass_0_proc_inited) {
        x_2635->meta->bb_0_has_bb_dirtied = true;
        x_2635->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2635);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3414(x_2632);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2050(const auto &x_2636) {
  if (!x_2636->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2636->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_2636->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2636->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2048(const auto &x_2647) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2648) {
    ListIter(x_2647->children, [&](const auto &x_2649) {
      if (x_2649->meta->pass_0_proc_inited) {
        x_2649->meta->bb_0_has_bb_dirtied = true;
        x_2649->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2649);
      } else {
        return MetaWriteMetric();
      }
    });
    ListIter(x_2647->children, [&](const auto &x_2650) {
      if (x_2650->meta->pass_1_proc_inited) {
        x_2650->meta->bb_2_has_bb_dirtied = true;
        x_2650->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2650);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2045(const auto &x_2651) {
  if ((x_2651->parent != nullptr) &&
      (eq((x_2651->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2651->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2651->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_2651->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2043(const auto &x_2676) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2677) {
    ListIter(x_2676->children, [&](const auto &x_2678) {
      if (x_2678->meta->pass_0_proc_inited) {
        x_2678->meta->bb_0_has_bb_dirtied = true;
        x_2678->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2678);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3415 = [&](const auto &x_2679) {
      if (x_2679->meta->pass_1_proc_inited) {
        x_2679->meta->bb_2_has_bb_dirtied = true;
        x_2679->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2679);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3415(x_2676);
    MakeUnit();
    ListIter(x_2676->children, [&](const auto &x_2680) {
      if (x_2680->meta->pass_1_proc_inited) {
        x_2680->meta->bb_2_has_bb_dirtied = true;
        x_2680->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2680);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2040(const auto &x_2681) {
  if ((x_2681->parent != nullptr) &&
      (eq((x_2681->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2681->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2681->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2038(const auto &x_2706) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2707) {
    ListIter(x_2706->children, [&](const auto &x_2708) {
      if (x_2708->meta->pass_0_proc_inited) {
        x_2708->meta->bb_1_has_bb_dirtied = true;
        x_2708->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2708);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2035(const auto &x_2709) {
  if (x_2709->has_prop_flex_direction) {
    return x_2709->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_2033(const auto &x_2712) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2713) {
    auto x_3416 = [&](const auto &x_2716) {
      if (x_2716->meta->pass_0_proc_inited) {
        x_2716->meta->bb_1_has_bb_dirtied = true;
        x_2716->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2716);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2712->next, [&](const auto &x_2715) { return MakeUnit(); },
        [&](const auto &x_2714) {
          auto x_3418 = x_3416;
          x_3418(x_2714);
          return MakeUnit();
        });
    auto x_3417 = [&](const auto &x_2717) {
      if (x_2717->meta->pass_1_proc_inited) {
        x_2717->meta->bb_2_has_bb_dirtied = true;
        x_2717->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2717);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3417(x_2712);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2030(const auto &x_2718) {
  return plus((x_2718->prev != nullptr) ? ((x_2718->prev)->var_flex_shrink_sum) : (0.), x_2718->var_flex_shrink);
}
Unit var_modified_x_2028(const auto &x_2727) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2728) {
    auto x_3419 = [&](const auto &x_2731) {
      if (x_2731->meta->pass_0_proc_inited) {
        x_2731->meta->bb_1_has_bb_dirtied = true;
        x_2731->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2731);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2727->next, [&](const auto &x_2730) { return MakeUnit(); },
        [&](const auto &x_2729) {
          auto x_3421 = x_3419;
          x_3421(x_2729);
          return MakeUnit();
        });
    auto x_3420 = [&](const auto &x_2732) {
      if (x_2732->meta->pass_1_proc_inited) {
        x_2732->meta->bb_2_has_bb_dirtied = true;
        x_2732->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2732);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3420(x_2727);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2025(const auto &x_2733) {
  return plus((x_2733->prev != nullptr) ? ((x_2733->prev)->var_flex_grow_sum) : (0.), x_2733->var_flex_grow);
}
Unit var_modified_x_2023(const auto &x_2742) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2743) {
    auto x_3422 = [&](const auto &x_2744) {
      if (x_2744->meta->pass_0_proc_inited) {
        x_2744->meta->bb_1_has_bb_dirtied = true;
        x_2744->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2744);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3422(x_2742);
    MakeUnit();
    auto x_3423 = [&](const auto &x_2745) {
      if (x_2745->meta->pass_1_proc_inited) {
        x_2745->meta->bb_2_has_bb_dirtied = true;
        x_2745->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2745);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3423(x_2742);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2020(const auto &x_2746) {
  if (x_2746->has_prop_flex_shrink) {
    return (x_2746->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2018(const auto &x_2749) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2750) {
    auto x_3424 = [&](const auto &x_2751) {
      if (x_2751->meta->pass_0_proc_inited) {
        x_2751->meta->bb_1_has_bb_dirtied = true;
        x_2751->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2751);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3424(x_2749);
    MakeUnit();
    auto x_3425 = [&](const auto &x_2752) {
      if (x_2752->meta->pass_1_proc_inited) {
        x_2752->meta->bb_2_has_bb_dirtied = true;
        x_2752->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2752);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3425(x_2749);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2015(const auto &x_2753) {
  if (x_2753->has_prop_flex_grow) {
    return (x_2753->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2013(const auto &x_2756) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2757) {
    auto x_3426 = [&](const auto &x_2758) {
      if (x_2758->meta->pass_0_proc_inited) {
        x_2758->meta->bb_1_has_bb_dirtied = true;
        x_2758->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2758);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3426(x_2756);
    MakeUnit();
    auto x_3427 = [&](const auto &x_2759) {
      if (x_2759->meta->pass_0_proc_inited) {
        x_2759->meta->bb_0_has_bb_dirtied = true;
        x_2759->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2759);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3427(x_2756);
    MakeUnit();
    auto x_3428 = [&](const auto &x_2760) {
      if (x_2760->meta->pass_1_proc_inited) {
        x_2760->meta->bb_2_has_bb_dirtied = true;
        x_2760->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2760);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3428(x_2756);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2010(const auto &x_2761) {
  if (x_2761->has_prop_position) {
    return x_2761->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_2008(const auto &x_2764) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2765) {
    auto x_3429 = [&](const auto &x_2766) {
      if (x_2766->meta->pass_0_proc_inited) {
        x_2766->meta->bb_1_has_bb_dirtied = true;
        x_2766->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2766);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3429(x_2764);
    MakeUnit();
    ListIter(x_2764->children, [&](const auto &x_2767) {
      if (x_2767->meta->pass_0_proc_inited) {
        x_2767->meta->bb_1_has_bb_dirtied = true;
        x_2767->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2767);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3430 = [&](const auto &x_2768) {
      if (x_2768->meta->pass_0_proc_inited) {
        x_2768->meta->bb_0_has_bb_dirtied = true;
        x_2768->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2768);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3430(x_2764);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2005(const auto &x_2769) {
  if (x_2769->has_prop_display) {
    return x_2769->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_2001(const auto &x_2772) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2773) {
    auto x_3431 = [&](const auto &x_2776) {
      if (x_2776->meta->pass_0_proc_inited) {
        x_2776->meta->bb_0_has_bb_dirtied = true;
        x_2776->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2776);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_2772->next == nullptr) {
      auto x_3433 = x_3431;
      OptionMatch(
          x_2772->parent, [&](const auto &x_2775) { return MakeUnit(); },
          [&](const auto &x_2774) {
            auto x_3435 = x_3433;
            x_3435(x_2774);
            return MakeUnit();
          });
    }
    auto x_3432 = [&](const auto &x_2779) {
      if (x_2779->meta->pass_0_proc_inited) {
        x_2779->meta->bb_0_has_bb_dirtied = true;
        x_2779->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2779);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2772->next, [&](const auto &x_2778) { return MakeUnit(); },
        [&](const auto &x_2777) {
          auto x_3434 = x_3432;
          x_3434(x_2777);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_1998(const auto &x_2780) {
  if (x_2780->prev != nullptr) {
    if (x_2780->var_line_break) {
      return plus((x_2780->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2780->prev)->var_intrinsic_current_line_height, x_2780->var_intrinsic_height_external));
    } else {
      return (x_2780->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2780->var_line_break) {
      return x_2780->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_1996(const auto &x_2809) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2810) {
    auto x_3436 = [&](const auto &x_2813) {
      if (x_2813->meta->pass_0_proc_inited) {
        x_2813->meta->bb_0_has_bb_dirtied = true;
        x_2813->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2813);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_2809->next == nullptr) {
      auto x_3438 = x_3436;
      OptionMatch(
          x_2809->parent, [&](const auto &x_2812) { return MakeUnit(); },
          [&](const auto &x_2811) {
            auto x_3440 = x_3438;
            x_3440(x_2811);
            return MakeUnit();
          });
    }
    auto x_3437 = [&](const auto &x_2816) {
      if (x_2816->meta->pass_0_proc_inited) {
        x_2816->meta->bb_0_has_bb_dirtied = true;
        x_2816->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2816);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2809->next, [&](const auto &x_2815) { return MakeUnit(); },
        [&](const auto &x_2814) {
          auto x_3439 = x_3437;
          x_3439(x_2814);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_1993(const auto &x_2817) {
  if (x_2817->var_line_break) {
    return 0.;
  } else {
    return max(x_2817->var_intrinsic_height_external,
               (x_2817->prev != nullptr) ? ((x_2817->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_1991(const auto &x_2830) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2831) {
    auto x_3441 = [&](const auto &x_2834) {
      if (x_2834->meta->pass_0_proc_inited) {
        x_2834->meta->bb_0_has_bb_dirtied = true;
        x_2834->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2834);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2830->next, [&](const auto &x_2833) { return MakeUnit(); },
        [&](const auto &x_2832) {
          auto x_3443 = x_3441;
          x_3443(x_2832);
          return MakeUnit();
        });
    auto x_3442 = [&](const auto &x_2837) {
      if (x_2837->meta->pass_1_proc_inited) {
        x_2837->meta->bb_2_has_bb_dirtied = true;
        x_2837->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2837);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_2830->next == nullptr) {
      auto x_3444 = x_3442;
      OptionMatch(
          x_2830->parent, [&](const auto &x_2836) { return MakeUnit(); },
          [&](const auto &x_2835) {
            auto x_3445 = x_3444;
            x_3445(x_2835);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_1988(const auto &x_2838) {
  return plus((x_2838->prev != nullptr) ? ((x_2838->prev)->var_intrinsic_height_sum) : (0.),
              x_2838->var_intrinsic_height_external);
}
Unit var_modified_x_1986(const auto &x_2847) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2848) {
    auto x_3446 = [&](const auto &x_2849) {
      if (x_2849->meta->pass_0_proc_inited) {
        x_2849->meta->bb_0_has_bb_dirtied = true;
        x_2849->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2849);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3446(x_2847);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1983(const auto &x_2850) {
  if (eq(x_2850->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2850->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_1981(const auto &x_2859) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2860) {
    auto x_3447 = [&](const auto &x_2861) {
      if (x_2861->meta->pass_0_proc_inited) {
        x_2861->meta->bb_0_has_bb_dirtied = true;
        x_2861->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_2861);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3447(x_2859);
    MakeUnit();
    auto x_3448 = [&](const auto &x_2862) {
      if (x_2862->meta->pass_1_proc_inited) {
        x_2862->meta->bb_2_has_bb_dirtied = true;
        x_2862->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_2862);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3448(x_2859);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1978(const auto &x_2863) {
  if (eq(x_2863->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_2863->var_inside_svg) {
      return 0.;
    } else {
      if (x_2863->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2863->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_2863->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_2863->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_2863->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_2863->var_height_expr.r.a0;
          } else {
            if (x_2863->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_2863->var_height_expr.r.a0;
            } else {
              return x_2863->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_2863->var_children_intrinsic_height,
              (eq(x_2863->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_2863->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2863->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_2863->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_2863->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_2863->var_has_height_attr &&
                                                  (x_2863->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_2863->var_height_attr_expr.r.a0)
                                                     : ((x_2863->has_attr_viewBox)
                                                            ? (x_2863->attr_viewBox.r.a3)
                                                            : (mult((x_2863->attr_viewBox.r.a3),
                                                                    divide(x_2863->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_2863->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_2863->var_has_height_attr)
                                                            ? (x_2863->var_height_attr_expr.r.a0)
                                                            : ((x_2863->has_attr_image_height &&
                                                                (!x_2863->var_has_width_attr))
                                                                   ? (int_to_float(x_2863->attr_image_height))
                                                                   : ((neq(x_2863->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_2863->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_2863->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_2863->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_2863->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_2863->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1976(const auto &x_3008) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3009) {
    auto x_3449 = [&](const auto &x_3010) {
      if (x_3010->meta->pass_1_proc_inited) {
        x_3010->meta->bb_2_has_bb_dirtied = true;
        x_3010->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_3010);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3449(x_3008);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1973(const auto &x_3011) {
  if (eq(x_3011->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3011->var_inside_svg || x_3011->var_disabled)) {
    return true;
  } else {
    if ((x_3011->parent != nullptr) && (x_3011->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3011->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3011->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3011->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3011->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_3011->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1971(const auto &x_3060) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3061) {
    auto x_3450 = [&](const auto &x_3062) {
      if (x_3062->meta->pass_0_proc_inited) {
        x_3062->meta->bb_0_has_bb_dirtied = true;
        x_3062->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3062);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3450(x_3060);
    MakeUnit();
    auto x_3451 = [&](const auto &x_3063) {
      if (x_3063->meta->pass_1_proc_inited) {
        x_3063->meta->bb_2_has_bb_dirtied = true;
        x_3063->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_3063);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3451(x_3060);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1968(const auto &x_3064) {
  if (x_3064->has_prop_height) {
    return x_3064->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_1966(const auto &x_3067) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3068) {
    auto x_3452 = [&](const auto &x_3069) {
      if (x_3069->meta->pass_0_proc_inited) {
        x_3069->meta->bb_0_has_bb_dirtied = true;
        x_3069->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3069);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3452(x_3067);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1963(const auto &x_3070) {
  if (x_3070->last != nullptr) {
    return plus((x_3070->last)->var_finished_intrinsic_height_sum, (x_3070->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_1961(const auto &x_3079) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3080) {
    auto x_3453 = [&](const auto &x_3083) {
      if (x_3083->meta->pass_0_proc_inited) {
        x_3083->meta->bb_0_has_bb_dirtied = true;
        x_3083->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3083);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_3079->next, [&](const auto &x_3082) { return MakeUnit(); },
        [&](const auto &x_3081) {
          auto x_3455 = x_3453;
          x_3455(x_3081);
          return MakeUnit();
        });
    auto x_3454 = [&](const auto &x_3086) {
      if (x_3086->meta->pass_1_proc_inited) {
        x_3086->meta->bb_2_has_bb_dirtied = true;
        x_3086->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_3086);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_3079->next == nullptr) {
      auto x_3456 = x_3454;
      OptionMatch(
          x_3079->parent, [&](const auto &x_3085) { return MakeUnit(); },
          [&](const auto &x_3084) {
            auto x_3457 = x_3456;
            x_3457(x_3084);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_1958(const auto &x_3087) {
  return plus((x_3087->prev != nullptr) ? ((x_3087->prev)->var_intrinsic_width_sum) : (0.),
              x_3087->var_intrinsic_width_external);
}
Unit var_modified_x_1956(const auto &x_3096) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3097) {
    auto x_3458 = [&](const auto &x_3100) {
      if (x_3100->meta->pass_0_proc_inited) {
        x_3100->meta->bb_0_has_bb_dirtied = true;
        x_3100->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3100);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_3096->next == nullptr) {
      auto x_3460 = x_3458;
      OptionMatch(
          x_3096->parent, [&](const auto &x_3099) { return MakeUnit(); },
          [&](const auto &x_3098) {
            auto x_3462 = x_3460;
            x_3462(x_3098);
            return MakeUnit();
          });
    }
    auto x_3459 = [&](const auto &x_3103) {
      if (x_3103->meta->pass_0_proc_inited) {
        x_3103->meta->bb_0_has_bb_dirtied = true;
        x_3103->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3103);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_3096->next, [&](const auto &x_3102) { return MakeUnit(); },
        [&](const auto &x_3101) {
          auto x_3461 = x_3459;
          x_3461(x_3101);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_1953(const auto &x_3104) {
  return max(x_3104->var_intrinsic_current_line_width,
             (x_3104->prev != nullptr) ? ((x_3104->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_1951(const auto &x_3113) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3114) {
    auto x_3463 = [&](const auto &x_3115) {
      if (x_3115->meta->pass_0_proc_inited) {
        x_3115->meta->bb_0_has_bb_dirtied = true;
        x_3115->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3115);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3463(x_3113);
    MakeUnit();
    auto x_3464 = [&](const auto &x_3118) {
      if (x_3118->meta->pass_0_proc_inited) {
        x_3118->meta->bb_0_has_bb_dirtied = true;
        x_3118->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3118);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_3113->next, [&](const auto &x_3117) { return MakeUnit(); },
        [&](const auto &x_3116) {
          auto x_3465 = x_3464;
          x_3465(x_3116);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_1948(const auto &x_3119) {
  return plus(x_3119->var_intrinsic_width_external,
              ((x_3119->prev != nullptr) && (!(x_3119->prev)->var_line_break))
                  ? ((x_3119->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_1946(const auto &x_3132) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3133) {
    auto x_3466 = [&](const auto &x_3134) {
      if (x_3134->meta->pass_0_proc_inited) {
        x_3134->meta->bb_0_has_bb_dirtied = true;
        x_3134->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3134);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3466(x_3132);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1943(const auto &x_3135) {
  if (eq(x_3135->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3135->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_1941(const auto &x_3144) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3145) {
    auto x_3467 = [&](const auto &x_3146) {
      if (x_3146->meta->pass_0_proc_inited) {
        x_3146->meta->bb_0_has_bb_dirtied = true;
        x_3146->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3146);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3467(x_3144);
    MakeUnit();
    auto x_3468 = [&](const auto &x_3147) {
      if (x_3147->meta->pass_1_proc_inited) {
        x_3147->meta->bb_2_has_bb_dirtied = true;
        x_3147->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_3147);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3468(x_3144);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1938(const auto &x_3148) {
  if (eq(x_3148->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3148->var_inside_svg) {
      return 0.;
    } else {
      if (x_3148->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3148->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3148->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_3148->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_3148->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_3148->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_3148->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3148->var_width_expr.r.a0;
          } else {
            return x_3148->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_3148->var_children_intrinsic_width,
              (eq(x_3148->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_3148->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3148->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3148->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_3148->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3148->var_has_width_attr &&
                                                  (x_3148->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3148->var_width_attr_expr.r.a0)
                                                     : (((!x_3148->var_has_width_attr) && x_3148->has_attr_viewBox)
                                                            ? (x_3148->attr_viewBox.r.a2)
                                                            : (mult((x_3148->attr_viewBox.r.a2),
                                                                    divide(x_3148->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3148->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3148->var_has_width_attr)
                                                            ? (x_3148->var_width_attr_expr.r.a0)
                                                            : ((x_3148->has_attr_image_width &&
                                                                (!x_3148->var_has_height_attr))
                                                                   ? (int_to_float(x_3148->attr_image_width))
                                                                   : ((neq(x_3148->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3148->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3148->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_3148->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_3148->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_3148->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1936(const auto &x_3301) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3302) {
    auto x_3469 = [&](const auto &x_3303) {
      if (x_3303->meta->pass_0_proc_inited) {
        x_3303->meta->bb_0_has_bb_dirtied = true;
        x_3303->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3303);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3469(x_3301);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1933(const auto &x_3304) {
  if (x_3304->last != nullptr) {
    return (x_3304->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_1931(const auto &x_3309) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3310) {
    auto x_3470 = [&](const auto &x_3311) {
      if (x_3311->meta->pass_1_proc_inited) {
        x_3311->meta->bb_2_has_bb_dirtied = true;
        x_3311->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_3311);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3470(x_3309);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1928(const auto &x_3312) {
  if (eq(x_3312->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3312->var_inside_svg || x_3312->var_disabled)) {
    return true;
  } else {
    if ((x_3312->parent != nullptr) && (x_3312->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3312->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3312->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3312->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3312->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_3312->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1926(const auto &x_3361) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3362) {
    auto x_3471 = [&](const auto &x_3363) {
      if (x_3363->meta->pass_0_proc_inited) {
        x_3363->meta->bb_0_has_bb_dirtied = true;
        x_3363->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3363);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3471(x_3361);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1923(const auto &x_3364) {
  if (eq(x_3364->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_3364->var_inside_svg) {
      return true;
    } else {
      if (x_3364->var_disabled) {
        return true;
      } else {if ( eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_3364->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_1921(const auto &x_3377) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3378) {
    auto x_3472 = [&](const auto &x_3379) {
      if (x_3379->meta->pass_0_proc_inited) {
        x_3379->meta->bb_0_has_bb_dirtied = true;
        x_3379->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1766(x_3379);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3472(x_3377);
    MakeUnit();
    auto x_3473 = [&](const auto &x_3380) {
      if (x_3380->meta->pass_1_proc_inited) {
        x_3380->meta->bb_2_has_bb_dirtied = true;
        x_3380->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1806(x_3380);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3473(x_3377);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1918(const auto &x_3381) {
  if (x_3381->has_prop_width) {
    return x_3381->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_1859(const auto &x_1916) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1917) {
    WriteMetric();
    auto x_1919 = eval_expr_x_1918(x_1916);
    if (x_1916->has_var_width_expr) {
      auto x_1920 = x_1916->var_width_expr;
      if (!EqualValue(x_1920, x_1919)) {
        var_modified_x_1921(x_1916);
      }
    }
    x_1916->has_var_width_expr = true;
    x_1916->var_width_expr = AsDEString(x_1919);
    WriteMetric();
    auto x_1924 = eval_expr_x_1923(x_1916);
    if (x_1916->has_var_is_default_case) {
      auto x_1925 = x_1916->var_is_default_case;
      if (!EqualValue(x_1925, x_1924)) {
        var_modified_x_1926(x_1916);
      }
    }
    x_1916->has_var_is_default_case = true;
    x_1916->var_is_default_case = Asbool(x_1924);
    WriteMetric();
    auto x_1929 = eval_expr_x_1928(x_1916);
    if (x_1916->has_var_intrinsic_width_is_width) {
      auto x_1930 = x_1916->var_intrinsic_width_is_width;
      if (!EqualValue(x_1930, x_1929)) {
        var_modified_x_1931(x_1916);
      }
    }
    x_1916->has_var_intrinsic_width_is_width = true;
    x_1916->var_intrinsic_width_is_width = Asbool(x_1929);
    WriteMetric();
    auto x_1934 = eval_expr_x_1933(x_1916);
    if (x_1916->has_var_children_intrinsic_width) {
      auto x_1935 = x_1916->var_children_intrinsic_width;
      if (!EqualValue(x_1935, x_1934)) {
        var_modified_x_1936(x_1916);
      }
    }
    x_1916->has_var_children_intrinsic_width = true;
    x_1916->var_children_intrinsic_width = Asdouble(x_1934);
    WriteMetric();
    auto x_1939 = eval_expr_x_1938(x_1916);
    if (x_1916->has_var_intrinsic_width_internal) {
      auto x_1940 = x_1916->var_intrinsic_width_internal;
      if (!EqualValue(x_1940, x_1939)) {
        var_modified_x_1941(x_1916);
      }
    }
    x_1916->has_var_intrinsic_width_internal = true;
    x_1916->var_intrinsic_width_internal = Asdouble(x_1939);
    WriteMetric();
    auto x_1944 = eval_expr_x_1943(x_1916);
    if (x_1916->has_var_intrinsic_width_external) {
      auto x_1945 = x_1916->var_intrinsic_width_external;
      if (!EqualValue(x_1945, x_1944)) {
        var_modified_x_1946(x_1916);
      }
    }
    x_1916->has_var_intrinsic_width_external = true;
    x_1916->var_intrinsic_width_external = Asdouble(x_1944);
    WriteMetric();
    auto x_1949 = eval_expr_x_1948(x_1916);
    if (x_1916->has_var_intrinsic_current_line_width) {
      auto x_1950 = x_1916->var_intrinsic_current_line_width;
      if (!EqualValue(x_1950, x_1949)) {
        var_modified_x_1951(x_1916);
      }
    }
    x_1916->has_var_intrinsic_current_line_width = true;
    x_1916->var_intrinsic_current_line_width = Asdouble(x_1949);
    WriteMetric();
    auto x_1954 = eval_expr_x_1953(x_1916);
    if (x_1916->has_var_intrinsic_width_max) {
      auto x_1955 = x_1916->var_intrinsic_width_max;
      if (!EqualValue(x_1955, x_1954)) {
        var_modified_x_1956(x_1916);
      }
    }
    x_1916->has_var_intrinsic_width_max = true;
    x_1916->var_intrinsic_width_max = Asdouble(x_1954);
    WriteMetric();
    auto x_1959 = eval_expr_x_1958(x_1916);
    if (x_1916->has_var_intrinsic_width_sum) {
      auto x_1960 = x_1916->var_intrinsic_width_sum;
      if (!EqualValue(x_1960, x_1959)) {
        var_modified_x_1961(x_1916);
      }
    }
    x_1916->has_var_intrinsic_width_sum = true;
    x_1916->var_intrinsic_width_sum = Asdouble(x_1959);
    WriteMetric();
    auto x_1964 = eval_expr_x_1963(x_1916);
    if (x_1916->has_var_children_intrinsic_height) {
      auto x_1965 = x_1916->var_children_intrinsic_height;
      if (!EqualValue(x_1965, x_1964)) {
        var_modified_x_1966(x_1916);
      }
    }
    x_1916->has_var_children_intrinsic_height = true;
    x_1916->var_children_intrinsic_height = Asdouble(x_1964);
    WriteMetric();
    auto x_1969 = eval_expr_x_1968(x_1916);
    if (x_1916->has_var_height_expr) {
      auto x_1970 = x_1916->var_height_expr;
      if (!EqualValue(x_1970, x_1969)) {
        var_modified_x_1971(x_1916);
      }
    }
    x_1916->has_var_height_expr = true;
    x_1916->var_height_expr = AsDEString(x_1969);
    WriteMetric();
    auto x_1974 = eval_expr_x_1973(x_1916);
    if (x_1916->has_var_intrinsic_height_is_height) {
      auto x_1975 = x_1916->var_intrinsic_height_is_height;
      if (!EqualValue(x_1975, x_1974)) {
        var_modified_x_1976(x_1916);
      }
    }
    x_1916->has_var_intrinsic_height_is_height = true;
    x_1916->var_intrinsic_height_is_height = Asbool(x_1974);
    WriteMetric();
    auto x_1979 = eval_expr_x_1978(x_1916);
    if (x_1916->has_var_intrinsic_height_internal) {
      auto x_1980 = x_1916->var_intrinsic_height_internal;
      if (!EqualValue(x_1980, x_1979)) {
        var_modified_x_1981(x_1916);
      }
    }
    x_1916->has_var_intrinsic_height_internal = true;
    x_1916->var_intrinsic_height_internal = Asdouble(x_1979);
    WriteMetric();
    auto x_1984 = eval_expr_x_1983(x_1916);
    if (x_1916->has_var_intrinsic_height_external) {
      auto x_1985 = x_1916->var_intrinsic_height_external;
      if (!EqualValue(x_1985, x_1984)) {
        var_modified_x_1986(x_1916);
      }
    }
    x_1916->has_var_intrinsic_height_external = true;
    x_1916->var_intrinsic_height_external = Asdouble(x_1984);
    WriteMetric();
    auto x_1989 = eval_expr_x_1988(x_1916);
    if (x_1916->has_var_intrinsic_height_sum) {
      auto x_1990 = x_1916->var_intrinsic_height_sum;
      if (!EqualValue(x_1990, x_1989)) {
        var_modified_x_1991(x_1916);
      }
    }
    x_1916->has_var_intrinsic_height_sum = true;
    x_1916->var_intrinsic_height_sum = Asdouble(x_1989);
    WriteMetric();
    auto x_1994 = eval_expr_x_1993(x_1916);
    if (x_1916->has_var_intrinsic_current_line_height) {
      auto x_1995 = x_1916->var_intrinsic_current_line_height;
      if (!EqualValue(x_1995, x_1994)) {
        var_modified_x_1996(x_1916);
      }
    }
    x_1916->has_var_intrinsic_current_line_height = true;
    x_1916->var_intrinsic_current_line_height = Asdouble(x_1994);
    WriteMetric();
    auto x_1999 = eval_expr_x_1998(x_1916);
    if (x_1916->has_var_finished_intrinsic_height_sum) {
      auto x_2000 = x_1916->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_2000, x_1999)) {
        var_modified_x_2001(x_1916);
      }
    }
    x_1916->has_var_finished_intrinsic_height_sum = true;
    x_1916->var_finished_intrinsic_height_sum = Asdouble(x_1999);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1857(const auto &x_2003) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2004) {
    WriteMetric();
    auto x_2006 = eval_expr_x_2005(x_2003);
    if (x_2003->has_var_display) {
      auto x_2007 = x_2003->var_display;
      if (!EqualValue(x_2007, x_2006)) {
        var_modified_x_2008(x_2003);
      }
    }
    x_2003->has_var_display = true;
    x_2003->var_display = AsDEString(x_2006);
    WriteMetric();
    auto x_2011 = eval_expr_x_2010(x_2003);
    if (x_2003->has_var_position) {
      auto x_2012 = x_2003->var_position;
      if (!EqualValue(x_2012, x_2011)) {
        var_modified_x_2013(x_2003);
      }
    }
    x_2003->has_var_position = true;
    x_2003->var_position = AsDEString(x_2011);
    WriteMetric();
    auto x_2016 = eval_expr_x_2015(x_2003);
    if (x_2003->has_var_flex_grow) {
      auto x_2017 = x_2003->var_flex_grow;
      if (!EqualValue(x_2017, x_2016)) {
        var_modified_x_2018(x_2003);
      }
    }
    x_2003->has_var_flex_grow = true;
    x_2003->var_flex_grow = Asdouble(x_2016);
    WriteMetric();
    auto x_2021 = eval_expr_x_2020(x_2003);
    if (x_2003->has_var_flex_shrink) {
      auto x_2022 = x_2003->var_flex_shrink;
      if (!EqualValue(x_2022, x_2021)) {
        var_modified_x_2023(x_2003);
      }
    }
    x_2003->has_var_flex_shrink = true;
    x_2003->var_flex_shrink = Asdouble(x_2021);
    WriteMetric();
    auto x_2026 = eval_expr_x_2025(x_2003);
    if (x_2003->has_var_flex_grow_sum) {
      auto x_2027 = x_2003->var_flex_grow_sum;
      if (!EqualValue(x_2027, x_2026)) {
        var_modified_x_2028(x_2003);
      }
    }
    x_2003->has_var_flex_grow_sum = true;
    x_2003->var_flex_grow_sum = Asdouble(x_2026);
    WriteMetric();
    auto x_2031 = eval_expr_x_2030(x_2003);
    if (x_2003->has_var_flex_shrink_sum) {
      auto x_2032 = x_2003->var_flex_shrink_sum;
      if (!EqualValue(x_2032, x_2031)) {
        var_modified_x_2033(x_2003);
      }
    }
    x_2003->has_var_flex_shrink_sum = true;
    x_2003->var_flex_shrink_sum = Asdouble(x_2031);
    WriteMetric();
    auto x_2036 = eval_expr_x_2035(x_2003);
    if (x_2003->has_var_flex_direction) {
      auto x_2037 = x_2003->var_flex_direction;
      if (!EqualValue(x_2037, x_2036)) {
        var_modified_x_2038(x_2003);
      }
    }
    x_2003->has_var_flex_direction = true;
    x_2003->var_flex_direction = AsDEString(x_2036);
    WriteMetric();
    auto x_2041 = eval_expr_x_2040(x_2003);
    if (x_2003->has_var_is_flex_row) {
      auto x_2042 = x_2003->var_is_flex_row;
      if (!EqualValue(x_2042, x_2041)) {
        var_modified_x_2043(x_2003);
      }
    }
    x_2003->has_var_is_flex_row = true;
    x_2003->var_is_flex_row = Asbool(x_2041);
    WriteMetric();
    auto x_2046 = eval_expr_x_2045(x_2003);
    if (x_2003->has_var_is_flex_column) {
      auto x_2047 = x_2003->var_is_flex_column;
      if (!EqualValue(x_2047, x_2046)) {
        var_modified_x_2048(x_2003);
      }
    }
    x_2003->has_var_is_flex_column = true;
    x_2003->var_is_flex_column = Asbool(x_2046);
    WriteMetric();
    auto x_2051 = eval_expr_x_2050(x_2003);
    if (x_2003->has_var_width_attr_expr) {
      auto x_2052 = x_2003->var_width_attr_expr;
      if (!EqualValue(x_2052, x_2051)) {
        var_modified_x_2053(x_2003);
      }
    }
    x_2003->has_var_width_attr_expr = true;
    x_2003->var_width_attr_expr = AsDEString(x_2051);
    WriteMetric();
    auto x_2056 = eval_expr_x_2055(x_2003);
    if (x_2003->has_var_has_width_attr) {
      auto x_2057 = x_2003->var_has_width_attr;
      if (!EqualValue(x_2057, x_2056)) {
        var_modified_x_2058(x_2003);
      }
    }
    x_2003->has_var_has_width_attr = true;
    x_2003->var_has_width_attr = Asbool(x_2056);
    WriteMetric();
    auto x_2061 = eval_expr_x_2060(x_2003);
    if (x_2003->has_var_height_attr_expr) {
      auto x_2062 = x_2003->var_height_attr_expr;
      if (!EqualValue(x_2062, x_2061)) {
        var_modified_x_2063(x_2003);
      }
    }
    x_2003->has_var_height_attr_expr = true;
    x_2003->var_height_attr_expr = AsDEString(x_2061);
    WriteMetric();
    auto x_2066 = eval_expr_x_2065(x_2003);
    if (x_2003->has_var_has_height_attr) {
      auto x_2067 = x_2003->var_has_height_attr;
      if (!EqualValue(x_2067, x_2066)) {
        var_modified_x_2068(x_2003);
      }
    }
    x_2003->has_var_has_height_attr = true;
    x_2003->var_has_height_attr = Asbool(x_2066);
    WriteMetric();
    auto x_2071 = eval_expr_x_2070(x_2003);
    if (x_2003->has_var_is_svg_block) {
      auto x_2072 = x_2003->var_is_svg_block;
      if (!EqualValue(x_2072, x_2071)) {
        var_modified_x_2073(x_2003);
      }
    }
    x_2003->has_var_is_svg_block = true;
    x_2003->var_is_svg_block = Asbool(x_2071);
    WriteMetric();
    auto x_2076 = eval_expr_x_2075(x_2003);
    if (x_2003->has_var_inside_svg) {
      auto x_2077 = x_2003->var_inside_svg;
      if (!EqualValue(x_2077, x_2076)) {
        var_modified_x_2078(x_2003);
      }
    }
    x_2003->has_var_inside_svg = true;
    x_2003->var_inside_svg = Asbool(x_2076);
    WriteMetric();
    auto x_2081 = eval_expr_x_2080(x_2003);
    if (x_2003->has_var_disabled) {
      auto x_2082 = x_2003->var_disabled;
      if (!EqualValue(x_2082, x_2081)) {
        var_modified_x_2083(x_2003);
      }
    }
    x_2003->has_var_disabled = true;
    x_2003->var_disabled = Asbool(x_2081);
    WriteMetric();
    auto x_2086 = eval_expr_x_2085(x_2003);
    if (x_2003->has_var_visible) {
      auto x_2087 = x_2003->var_visible;
      if (!EqualValue(x_2087, x_2086)) {
        var_modified_x_2088(x_2003);
      }
    }
    x_2003->has_var_visible = true;
    x_2003->var_visible = Asbool(x_2086);
    WriteMetric();
    auto x_2091 = eval_expr_x_2090(x_2003);
    if (x_2003->has_var_line_break) {
      auto x_2092 = x_2003->var_line_break;
      if (!EqualValue(x_2092, x_2091)) {
        var_modified_x_2093(x_2003);
      }
    }
    x_2003->has_var_line_break = true;
    x_2003->var_line_break = Asbool(x_2091);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1853(const auto &x_2095) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2096) {
    WriteMetric();
    auto x_2098 = eval_expr_x_2097(x_2095);
    if (x_2095->has_var_box_width) {
      auto x_2099 = x_2095->var_box_width;
      if (!EqualValue(x_2099, x_2098)) {
        var_modified_x_2100(x_2095);
      }
    }
    x_2095->has_var_box_width = true;
    x_2095->var_box_width = Asdouble(x_2098);
    WriteMetric();
    auto x_2103 = eval_expr_x_2102(x_2095);
    if (x_2095->has_var_box_height) {
      auto x_2104 = x_2095->var_box_height;
      if (!EqualValue(x_2104, x_2103)) {
        var_modified_x_2105(x_2095);
      }
    }
    x_2095->has_var_box_height = true;
    x_2095->var_box_height = Asdouble(x_2103);
    WriteMetric();
    auto x_2108 = eval_expr_x_2107(x_2095);
    if (x_2095->has_var_left_over) {
      auto x_2109 = x_2095->var_left_over;
      if (!EqualValue(x_2109, x_2108)) {
        var_modified_x_2110(x_2095);
      }
    }
    x_2095->has_var_left_over = true;
    x_2095->var_left_over = Asdouble(x_2108);
    WriteMetric();
    auto x_2113 = eval_expr_x_2112(x_2095);
    if (x_2095->has_var_flex_amount) {
      auto x_2114 = x_2095->var_flex_amount;
      if (!EqualValue(x_2114, x_2113)) {
        var_modified_x_2115(x_2095);
      }
    }
    x_2095->has_var_flex_amount = true;
    x_2095->var_flex_amount = Asdouble(x_2113);
    WriteMetric();
    auto x_2118 = eval_expr_x_2117(x_2095);
    if (x_2095->has_var_flex_unit) {
      auto x_2119 = x_2095->var_flex_unit;
      if (!EqualValue(x_2119, x_2118)) {
        var_modified_x_2120(x_2095);
      }
    }
    x_2095->has_var_flex_unit = true;
    x_2095->var_flex_unit = Asdouble(x_2118);
    WriteMetric();
    auto x_2123 = eval_expr_x_2122(x_2095);
    if (x_2095->has_var_x) {
      auto x_2124 = x_2095->var_x;
      if (!EqualValue(x_2124, x_2123)) {
        var_modified_x_2125(x_2095);
      }
    }
    x_2095->has_var_x = true;
    x_2095->var_x = Asdouble(x_2123);
    WriteMetric();
    auto x_2128 = eval_expr_x_2127(x_2095);
    if (x_2095->has_var_width_internal) {
      auto x_2129 = x_2095->var_width_internal;
      if (!EqualValue(x_2129, x_2128)) {
        var_modified_x_2130(x_2095);
      }
    }
    x_2095->has_var_width_internal = true;
    x_2095->var_width_internal = Asdouble(x_2128);
    WriteMetric();
    auto x_2133 = eval_expr_x_2132(x_2095);
    if (x_2095->has_var_width_external) {
      auto x_2134 = x_2095->var_width_external;
      if (!EqualValue(x_2134, x_2133)) {
        var_modified_x_2135(x_2095);
      }
    }
    x_2095->has_var_width_external = true;
    x_2095->var_width_external = Asdouble(x_2133);
    WriteMetric();
    auto x_2138 = eval_expr_x_2137(x_2095);
    if (x_2095->has_var_y) {
      auto x_2139 = x_2095->var_y;
      if (!EqualValue(x_2139, x_2138)) {
        var_modified_x_2140(x_2095);
      }
    }
    x_2095->has_var_y = true;
    x_2095->var_y = Asdouble(x_2138);
    WriteMetric();
    auto x_2143 = eval_expr_x_2142(x_2095);
    if (x_2095->has_var_height_internal) {
      auto x_2144 = x_2095->var_height_internal;
      if (!EqualValue(x_2144, x_2143)) {
        var_modified_x_2145(x_2095);
      }
    }
    x_2095->has_var_height_internal = true;
    x_2095->var_height_internal = Asdouble(x_2143);
    WriteMetric();
    auto x_2148 = eval_expr_x_2147(x_2095);
    if (x_2095->has_var_height_external) {
      auto x_2149 = x_2095->var_height_external;
      if (!EqualValue(x_2149, x_2148)) {
        var_modified_x_2150(x_2095);
      }
    }
    x_2095->has_var_height_external = true;
    x_2095->var_height_external = Asdouble(x_2148);
    WriteMetric();
    auto x_2153 = eval_expr_x_2152(x_2095);
    if (x_2095->has_var_line_height) {
      auto x_2154 = x_2095->var_line_height;
      if (!EqualValue(x_2154, x_2153)) {
        var_modified_x_2155(x_2095);
      }
    }
    x_2095->has_var_line_height = true;
    x_2095->var_line_height = Asdouble(x_2153);
    return MakeUnit();
  })));
}
Unit x_2157(const auto &x_2158) {
  MetaWriteMetric();
  if (!x_2158->meta->pass_1_recursive_proc_dirtied) {
    x_2158->meta->pass_1_has_recursive_proc_dirtied = true;
    x_2158->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2158->parent, [&](const auto &x_2160) { return MakeUnit(); },
        [&](const auto &x_2159) { return x_2157(x_2159); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1806(const auto &x_2158) { return x_2157(x_2158); }
Unit x_2161(const auto &x_2162) {
  MetaWriteMetric();
  if (!x_2162->meta->pass_0_recursive_proc_dirtied) {
    x_2162->meta->pass_0_has_recursive_proc_dirtied = true;
    x_2162->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2162->parent, [&](const auto &x_2164) { return MakeUnit(); },
        [&](const auto &x_2163) { return x_2161(x_2163); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1766(const auto &x_2162) { return x_2161(x_2162); }
Unit x_1734(const auto &x_1735, const auto &x_1736, const auto &x_1737) {
  auto x_1738 = ListHeadExn(x_1735);
  auto x_1739 = ListTailExn(x_1735);
  if (ListIsEmpty(x_1739)) {
    auto x_1740 = ListSplitN(x_1736->children, x_1738);
    OutputChangeMetric(IntAdd(layout_size_x_1692(ListNthExn(x_1736->children, x_1738)), layout_size_x_1692(x_1737)));
    x_1736->children = ListAppend(Zro(x_1740), Cons(x_1737, ListTailExn(Fst(x_1740))));
    return MakeUnit();
  } else {
    return x_1734(x_1739, ListNthExn(x_1736->children, x_1738), x_1737);
  }
}
Unit replace_layout_node_x_1733(const auto &x_1735, const auto &x_1736, const auto &x_1737) {
  return x_1734(x_1735, x_1736, x_1737);
}
Unit x_1741(const auto &x_1742, const auto &x_1743, const auto &x_1744) {
  auto x_1745 = ListHeadExn(x_1742);
  auto x_1746 = ListTailExn(x_1742);
  if (ListIsEmpty(x_1746)) {
    OutputChangeMetric(layout_size_x_1692(x_1744));
    auto x_1747 = ListSplitN(x_1743->children, x_1745);
    x_1743->children = ListAppend(Zro(x_1747), Cons(x_1744, Fst(x_1747)));
    return MakeUnit();
  } else {
    return x_1741(x_1746, ListNthExn(x_1743->children, x_1745), x_1744);
  }
}
Unit add_layout_node_x_1731(const auto &x_1742, const auto &x_1743, const auto &x_1744) {
  return x_1741(x_1742, x_1743, x_1744);
}
Unit x_1748(const auto &x_1749, const auto &x_1750, const auto &x_1751) {
  auto x_1752 = ListHeadExn(x_1749);
  auto x_1753 = ListTailExn(x_1749);
  if (ListIsEmpty(x_1753)) {
    OutputChangeMetric(layout_size_x_1692(ListNthExn(x_1750->children, x_1752)));
    auto x_1754 = ListSplitN(x_1750->children, x_1752);
    x_1750->children = ListAppend(Zro(x_1754), ListTailExn(Fst(x_1754)));
    return MakeUnit();
  } else {
    return x_1748(x_1753, ListNthExn(x_1750->children, x_1752), x_1751);
  }
}
Unit remove_layout_node_x_1729(const auto &x_1749, const auto &x_1750, const auto &x_1751) {
  return x_1748(x_1749, x_1750, x_1751);
}
Unit x_1755(const auto &x_1756, const auto &x_1757, const auto &x_1758) {
  return ListMatch(
      x_1756,
      [&](const auto &x_1761) {
        auto x_1762 = Zro(x_1758);
        auto x_1763 = Zro(x_1762);
        auto x_1764 = Fst(x_1762);
        auto x_1765 = Fst(x_1758);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3474 = x_1763;
        if (x_3474 == "attributes") {
          std::string x_3475 = x_1764;
          if (x_3475 == "width") {
            WriteMetric();
            x_1757->has_attr_width = true;
            x_1757->attr_width = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_1_has_bb_dirtied = true;
              x_1757->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3475 == "image_height") {
            WriteMetric();
            x_1757->has_attr_image_height = true;
            x_1757->attr_image_height = Asint64_t(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_0_has_bb_dirtied = true;
              x_1757->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3475 == "image_width") {
            WriteMetric();
            x_1757->has_attr_image_width = true;
            x_1757->attr_image_width = Asint64_t(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_0_has_bb_dirtied = true;
              x_1757->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3475 == "height") {
            WriteMetric();
            x_1757->has_attr_height = true;
            x_1757->attr_height = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_1_has_bb_dirtied = true;
              x_1757->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3475 == "viewBox") {
            WriteMetric();
            x_1757->has_attr_viewBox = true;
            x_1757->attr_viewBox = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_0_has_bb_dirtied = true;
              x_1757->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3474 == "properties") {
          std::string x_3476 = x_1764;
          if (x_3476 == "width") {
            WriteMetric();
            x_1757->has_prop_width = true;
            x_1757->prop_width = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_0_has_bb_dirtied = true;
              x_1757->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3476 == "flex-grow") {
            WriteMetric();
            x_1757->has_prop_flex_grow = true;
            x_1757->prop_flex_grow = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_1_has_bb_dirtied = true;
              x_1757->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3476 == "height") {
            WriteMetric();
            x_1757->has_prop_height = true;
            x_1757->prop_height = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_0_has_bb_dirtied = true;
              x_1757->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3476 == "display") {
            WriteMetric();
            x_1757->has_prop_display = true;
            x_1757->prop_display = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_1_has_bb_dirtied = true;
              x_1757->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3476 == "position") {
            WriteMetric();
            x_1757->has_prop_position = true;
            x_1757->prop_position = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_1_has_bb_dirtied = true;
              x_1757->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3476 == "flex-shrink") {
            WriteMetric();
            x_1757->has_prop_flex_shrink = true;
            x_1757->prop_flex_shrink = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_1_has_bb_dirtied = true;
              x_1757->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3476 == "flex-direction") {
            WriteMetric();
            x_1757->has_prop_flex_direction = true;
            x_1757->prop_flex_direction = AsDEString(x_1765);
            if (x_1757->meta->pass_0_proc_inited) {
              x_1757->meta->bb_1_has_bb_dirtied = true;
              x_1757->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1757);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1759, const auto &x_1760) {
        return x_1755(x_1760, ListNthExn(x_1757->children, x_1759), x_1758);
      });
}
Unit insert_value_x_1727(const auto &x_1756, const auto &x_1757, const auto &x_1758) {
  return x_1755(x_1756, x_1757, x_1758);
}
Unit x_1767(const auto &x_1768, const auto &x_1769, const auto &x_1770) {
  return ListMatch(
      x_1768,
      [&](const auto &x_1773) {
        auto x_1774 = Zro(x_1770);
        auto x_1775 = Fst(x_1770);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3477 = x_1774;
        if (x_3477 == "attributes") {
          std::string x_3478 = x_1775;
          if (x_3478 == "width") {
            WriteMetric();
            x_1769->has_attr_width = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_1_has_bb_dirtied = true;
              x_1769->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3478 == "image_height") {
            WriteMetric();
            x_1769->has_attr_image_height = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_0_has_bb_dirtied = true;
              x_1769->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3478 == "image_width") {
            WriteMetric();
            x_1769->has_attr_image_width = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_0_has_bb_dirtied = true;
              x_1769->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3478 == "height") {
            WriteMetric();
            x_1769->has_attr_height = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_1_has_bb_dirtied = true;
              x_1769->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3478 == "viewBox") {
            WriteMetric();
            x_1769->has_attr_viewBox = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_0_has_bb_dirtied = true;
              x_1769->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3477 == "properties") {
          std::string x_3479 = x_1775;
          if (x_3479 == "width") {
            WriteMetric();
            x_1769->has_prop_width = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_0_has_bb_dirtied = true;
              x_1769->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3479 == "flex-grow") {
            WriteMetric();
            x_1769->has_prop_flex_grow = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_1_has_bb_dirtied = true;
              x_1769->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3479 == "height") {
            WriteMetric();
            x_1769->has_prop_height = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_0_has_bb_dirtied = true;
              x_1769->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3479 == "display") {
            WriteMetric();
            x_1769->has_prop_display = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_1_has_bb_dirtied = true;
              x_1769->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3479 == "position") {
            WriteMetric();
            x_1769->has_prop_position = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_1_has_bb_dirtied = true;
              x_1769->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3479 == "flex-shrink") {
            WriteMetric();
            x_1769->has_prop_flex_shrink = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_1_has_bb_dirtied = true;
              x_1769->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3479 == "flex-direction") {
            WriteMetric();
            x_1769->has_prop_flex_direction = false;
            if (x_1769->meta->pass_0_proc_inited) {
              x_1769->meta->bb_1_has_bb_dirtied = true;
              x_1769->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1769);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1771, const auto &x_1772) {
        return x_1767(x_1772, ListNthExn(x_1769->children, x_1771), x_1770);
      });
}
Unit delete_value_x_1725(const auto &x_1768, const auto &x_1769, const auto &x_1770) {
  return x_1767(x_1768, x_1769, x_1770);
}
Unit x_1776(const auto &x_1777, const auto &x_1778, const auto &x_1779) {
  return ListMatch(
      x_1777,
      [&](const auto &x_1782) {
        auto x_1783 = Zro(x_1779);
        auto x_1784 = Zro(x_1783);
        auto x_1785 = Fst(x_1783);
        auto x_1786 = Fst(x_1779);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3480 = x_1784;
        if (x_3480 == "attributes") {
          std::string x_3481 = x_1785;
          if (x_3481 == "width") {
            WriteMetric();
            x_1778->has_attr_width = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_attr_width = true;
            x_1778->attr_width = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3481 == "image_height") {
            WriteMetric();
            x_1778->has_attr_image_height = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_attr_image_height = true;
            x_1778->attr_image_height = Asint64_t(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3481 == "image_width") {
            WriteMetric();
            x_1778->has_attr_image_width = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_attr_image_width = true;
            x_1778->attr_image_width = Asint64_t(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3481 == "height") {
            WriteMetric();
            x_1778->has_attr_height = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_attr_height = true;
            x_1778->attr_height = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3481 == "viewBox") {
            WriteMetric();
            x_1778->has_attr_viewBox = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_attr_viewBox = true;
            x_1778->attr_viewBox = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3480 == "properties") {
          std::string x_3482 = x_1785;
          if (x_3482 == "width") {
            WriteMetric();
            x_1778->has_prop_width = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_prop_width = true;
            x_1778->prop_width = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3482 == "flex-grow") {
            WriteMetric();
            x_1778->has_prop_flex_grow = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_prop_flex_grow = true;
            x_1778->prop_flex_grow = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3482 == "height") {
            WriteMetric();
            x_1778->has_prop_height = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_prop_height = true;
            x_1778->prop_height = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3482 == "display") {
            WriteMetric();
            x_1778->has_prop_display = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_prop_display = true;
            x_1778->prop_display = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3482 == "position") {
            WriteMetric();
            x_1778->has_prop_position = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_prop_position = true;
            x_1778->prop_position = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3482 == "flex-shrink") {
            WriteMetric();
            x_1778->has_prop_flex_shrink = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_prop_flex_shrink = true;
            x_1778->prop_flex_shrink = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3482 == "flex-direction") {
            WriteMetric();
            x_1778->has_prop_flex_direction = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1778->has_prop_flex_direction = true;
            x_1778->prop_flex_direction = AsDEString(x_1786);
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1766(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1780, const auto &x_1781) {
        return x_1776(x_1781, ListNthExn(x_1778->children, x_1780), x_1779);
      });
}
Unit replace_value_x_1723(const auto &x_1777, const auto &x_1778, const auto &x_1779) {
  return x_1776(x_1777, x_1778, x_1779);
}
Unit x_1787(const auto &x_1788, const auto &x_1789, const auto &x_1790) {
  auto x_1791 = ListHeadExn(x_1788);
  auto x_1792 = ListTailExn(x_1788);
  if (ListIsEmpty(x_1792)) {
    InputChangeMetric(IntAdd(node_size_x_1693(ListNthExn(x_1789->children, x_1791)), node_size_x_1693(x_1790)));
    auto x_1793 = ListSplitN(x_1789->children, x_1791);
    auto x_1794 = Zro(x_1793);
    auto x_1795 = Fst(x_1793);
    auto x_1796 = ListHeadExn(x_1795);
    auto x_1797 = ListTailExn(x_1795);
    x_1789->children = ListAppend(x_1794, x_1797);
    OptionMatch(
        x_1796->prev, [&](const auto &x_1799) { return MakeUnit(); },
        [&](const auto &x_1798) {
          x_1798->next = ToPath(x_1796->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1796->next, [&](const auto &x_1801) { return MakeUnit(); },
        [&](const auto &x_1800) {
          x_1800->prev = ToPath(x_1796->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1794)) {
      x_1789->first = ToPath(ListHead(x_1797));
    }
    if (ListIsEmpty(x_1797)) {
      x_1789->last = ToPath(ListLast(x_1794));
    }
    OptionMatch(
        x_1796->next, [&](const auto &x_1803) { return MakeUnit(); },
        [&](const auto &x_1802) {
          if (x_1802->meta->pass_0_proc_inited) {
            x_1802->meta->bb_1_has_bb_dirtied = true;
            x_1802->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1802);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1789->children)) {
      if (x_1789->meta->pass_0_proc_inited) {
        x_1789->meta->bb_0_has_bb_dirtied = true;
        x_1789->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1797)) {
      if (x_1789->meta->pass_0_proc_inited) {
        x_1789->meta->bb_0_has_bb_dirtied = true;
        x_1789->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1796->next, [&](const auto &x_1805) { return MakeUnit(); },
        [&](const auto &x_1804) {
          if (x_1804->meta->pass_0_proc_inited) {
            x_1804->meta->bb_0_has_bb_dirtied = true;
            x_1804->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1804);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1789->children)) {
      if (x_1789->meta->pass_1_proc_inited) {
        x_1789->meta->bb_2_has_bb_dirtied = true;
        x_1789->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1797)) {
      if (x_1789->meta->pass_1_proc_inited) {
        x_1789->meta->bb_2_has_bb_dirtied = true;
        x_1789->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1796->next, [&](const auto &x_1808) { return MakeUnit(); },
        [&](const auto &x_1807) {
          if (x_1807->meta->pass_1_proc_inited) {
            x_1807->meta->bb_2_has_bb_dirtied = true;
            x_1807->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1806(x_1807);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    auto x_1809 = ListSplitN(x_1789->children, x_1791);
    auto x_1810 = Zro(x_1809);
    auto x_1811 = Fst(x_1809);
    x_1789->children = ListAppend(x_1810, Cons(x_1790, x_1811));
    if (ListIsEmpty(x_1810)) {
      x_1789->first = x_1790.get();
    }
    if (ListIsEmpty(x_1811)) {
      x_1789->last = x_1790.get();
    }
    OptionMatch(
        ListLast(x_1810),
        [&](const auto &x_1813) {
          x_1790->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1812) {
          x_1790->prev = x_1812.get();
          x_1812->next = x_1790.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1811),
        [&](const auto &x_1815) {
          x_1790->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1814) {
          x_1790->next = x_1814.get();
          x_1814->prev = x_1790.get();
          return MakeUnit();
        });
    x_1790->parent = x_1789.get();
    x_1790->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1790->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1766(x_1790);
    OptionMatch(
        x_1790->next, [&](const auto &x_1817) { return MakeUnit(); },
        [&](const auto &x_1816) {
          if (x_1816->meta->pass_0_proc_inited) {
            x_1816->meta->bb_1_has_bb_dirtied = true;
            x_1816->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1816);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1789->children)) {
      if (x_1789->meta->pass_0_proc_inited) {
        x_1789->meta->bb_0_has_bb_dirtied = true;
        x_1789->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1811)) {
      if (x_1789->meta->pass_0_proc_inited) {
        x_1789->meta->bb_0_has_bb_dirtied = true;
        x_1789->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1790->next, [&](const auto &x_1819) { return MakeUnit(); },
        [&](const auto &x_1818) {
          if (x_1818->meta->pass_0_proc_inited) {
            x_1818->meta->bb_0_has_bb_dirtied = true;
            x_1818->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1818);
          } else {
            return MetaWriteMetric();
          }
        });
    x_1790->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1790->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1806(x_1790);
    if (ListIsSingleton(x_1789->children)) {
      if (x_1789->meta->pass_1_proc_inited) {
        x_1789->meta->bb_2_has_bb_dirtied = true;
        x_1789->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1811)) {
      if (x_1789->meta->pass_1_proc_inited) {
        x_1789->meta->bb_2_has_bb_dirtied = true;
        x_1789->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1789);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1790->next, [&](const auto &x_1821) { return MakeUnit(); },
        [&](const auto &x_1820) {
          if (x_1820->meta->pass_1_proc_inited) {
            x_1820->meta->bb_2_has_bb_dirtied = true;
            x_1820->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1806(x_1820);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_1787(x_1792, ListNthExn(x_1789->children, x_1791), x_1790);
  }
}
Unit replace_node_x_1721(const auto &x_1788, const auto &x_1789, const auto &x_1790) {
  return x_1787(x_1788, x_1789, x_1790);
}
Unit x_1822(const auto &x_1823) {
  ListIter2(x_1823->children, [&](const auto &x_1824, const auto &x_1825) {
    x_1824->parent = x_1823.get();
    x_1825->parent = x_1823.get();
    x_1824->next = x_1825.get();
    x_1825->prev = x_1824.get();
    x_1822(x_1824);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1823->children),
      [&](const auto &x_1827) {
        x_1823->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1826) {
        x_1823->first = x_1826.get();
        x_1826->parent = x_1823.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1823->children),
      [&](const auto &x_1829) {
        x_1823->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1828) {
        x_1823->last = x_1828.get();
        x_1828->parent = x_1823.get();
        x_1822(x_1828);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1719(const auto &x_1823) { return x_1822(x_1823); }
Unit x_1830(const auto &x_1831, const auto &x_1832, const auto &x_1833) {
  auto x_1834 = ListHeadExn(x_1831);
  auto x_1835 = ListTailExn(x_1831);
  if (ListIsEmpty(x_1835)) {
    InputChangeMetric(node_size_x_1693(ListNthExn(x_1832->children, x_1834)));
    auto x_1836 = ListSplitN(x_1832->children, x_1834);
    auto x_1837 = Zro(x_1836);
    auto x_1838 = Fst(x_1836);
    auto x_1839 = ListHeadExn(x_1838);
    auto x_1840 = ListTailExn(x_1838);
    x_1832->children = ListAppend(x_1837, x_1840);
    OptionMatch(
        x_1839->prev, [&](const auto &x_1842) { return MakeUnit(); },
        [&](const auto &x_1841) {
          x_1841->next = ToPath(x_1839->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1839->next, [&](const auto &x_1844) { return MakeUnit(); },
        [&](const auto &x_1843) {
          x_1843->prev = ToPath(x_1839->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1837)) {
      x_1832->first = ToPath(ListHead(x_1840));
    }
    if (ListIsEmpty(x_1840)) {
      x_1832->last = ToPath(ListLast(x_1837));
    }
    OptionMatch(
        x_1839->next, [&](const auto &x_1846) { return MakeUnit(); },
        [&](const auto &x_1845) {
          if (x_1845->meta->pass_0_proc_inited) {
            x_1845->meta->bb_1_has_bb_dirtied = true;
            x_1845->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1845);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1832->children)) {
      if (x_1832->meta->pass_0_proc_inited) {
        x_1832->meta->bb_0_has_bb_dirtied = true;
        x_1832->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1832);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1840)) {
      if (x_1832->meta->pass_0_proc_inited) {
        x_1832->meta->bb_0_has_bb_dirtied = true;
        x_1832->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1832);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1839->next, [&](const auto &x_1848) { return MakeUnit(); },
        [&](const auto &x_1847) {
          if (x_1847->meta->pass_0_proc_inited) {
            x_1847->meta->bb_0_has_bb_dirtied = true;
            x_1847->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1847);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1832->children)) {
      if (x_1832->meta->pass_1_proc_inited) {
        x_1832->meta->bb_2_has_bb_dirtied = true;
        x_1832->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1832);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1840)) {
      if (x_1832->meta->pass_1_proc_inited) {
        x_1832->meta->bb_2_has_bb_dirtied = true;
        x_1832->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1832);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1839->next, [&](const auto &x_1850) { return MakeUnit(); },
        [&](const auto &x_1849) {
          if (x_1849->meta->pass_1_proc_inited) {
            x_1849->meta->bb_2_has_bb_dirtied = true;
            x_1849->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1806(x_1849);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1830(x_1835, ListNthExn(x_1832->children, x_1834), x_1833);
  }
}
Unit remove_node_x_1717(const auto &x_1831, const auto &x_1832, const auto &x_1833) {
  return x_1830(x_1831, x_1832, x_1833);
}
Unit x_1851(const auto &x_1852) {
  MetaReadMetric();
  if (x_1852->meta->pass_1_recursive_proc_dirtied) {
    if (x_1852->meta->pass_1_proc_inited) {
      if (x_1852->meta->bb_2_bb_dirtied) {
        eval_stmts_x_1853(x_1852);
        x_1852->meta->bb_2_has_bb_dirtied = true;
        x_1852->meta->bb_2_bb_dirtied = false;
      }
      ListIter(x_1852->children, [&](const auto &x_1854) { return x_1851(x_1854); });
      MakeUnit();
    } else {
      x_1852->meta->pass_1_proc_inited = true;
      eval_stmts_x_1706(x_1852);
    }
  }
  x_1852->meta->pass_1_has_recursive_proc_dirtied = true;
  x_1852->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1715(const auto &x_1852) { return x_1851(x_1852); }
Unit x_1855(const auto &x_1856) {
  MetaReadMetric();
  if (x_1856->meta->pass_0_recursive_proc_dirtied) {
    if (x_1856->meta->pass_0_proc_inited) {
      if (x_1856->meta->bb_1_bb_dirtied) {
        eval_stmts_x_1857(x_1856);
        x_1856->meta->bb_1_has_bb_dirtied = true;
        x_1856->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_1856->children, [&](const auto &x_1858) { return x_1855(x_1858); });
      if (x_1856->meta->bb_0_bb_dirtied) {
        eval_stmts_x_1859(x_1856);
        x_1856->meta->bb_0_has_bb_dirtied = true;
        x_1856->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1856->meta->pass_0_proc_inited = true;
      eval_stmts_x_1705(x_1856);
    }
  }
  x_1856->meta->pass_0_has_recursive_proc_dirtied = true;
  x_1856->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1714(const auto &x_1856) { return x_1855(x_1856); }
Unit x_1860(const auto &x_1861, const auto &x_1862, const auto &x_1863) {
  auto x_1864 = ListHeadExn(x_1861);
  auto x_1865 = ListTailExn(x_1861);
  if (ListIsEmpty(x_1865)) {
    InputChangeMetric(node_size_x_1693(x_1863));
    auto x_1866 = ListSplitN(x_1862->children, x_1864);
    auto x_1867 = Zro(x_1866);
    auto x_1868 = Fst(x_1866);
    x_1862->children = ListAppend(x_1867, Cons(x_1863, x_1868));
    if (ListIsEmpty(x_1867)) {
      x_1862->first = x_1863.get();
    }
    if (ListIsEmpty(x_1868)) {
      x_1862->last = x_1863.get();
    }
    OptionMatch(
        ListLast(x_1867),
        [&](const auto &x_1870) {
          x_1863->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1869) {
          x_1863->prev = x_1869.get();
          x_1869->next = x_1863.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1868),
        [&](const auto &x_1872) {
          x_1863->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1871) {
          x_1863->next = x_1871.get();
          x_1871->prev = x_1863.get();
          return MakeUnit();
        });
    x_1863->parent = x_1862.get();
    x_1863->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1863->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1766(x_1863);
    OptionMatch(
        x_1863->next, [&](const auto &x_1874) { return MakeUnit(); },
        [&](const auto &x_1873) {
          if (x_1873->meta->pass_0_proc_inited) {
            x_1873->meta->bb_1_has_bb_dirtied = true;
            x_1873->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1873);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1862->children)) {
      if (x_1862->meta->pass_0_proc_inited) {
        x_1862->meta->bb_0_has_bb_dirtied = true;
        x_1862->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1862);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1868)) {
      if (x_1862->meta->pass_0_proc_inited) {
        x_1862->meta->bb_0_has_bb_dirtied = true;
        x_1862->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1766(x_1862);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1863->next, [&](const auto &x_1876) { return MakeUnit(); },
        [&](const auto &x_1875) {
          if (x_1875->meta->pass_0_proc_inited) {
            x_1875->meta->bb_0_has_bb_dirtied = true;
            x_1875->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1766(x_1875);
          } else {
            return MetaWriteMetric();
          }
        });
    x_1863->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1863->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1806(x_1863);
    if (ListIsSingleton(x_1862->children)) {
      if (x_1862->meta->pass_1_proc_inited) {
        x_1862->meta->bb_2_has_bb_dirtied = true;
        x_1862->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1862);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1868)) {
      if (x_1862->meta->pass_1_proc_inited) {
        x_1862->meta->bb_2_has_bb_dirtied = true;
        x_1862->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1806(x_1862);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1863->next, [&](const auto &x_1878) { return MakeUnit(); },
        [&](const auto &x_1877) {
          if (x_1877->meta->pass_1_proc_inited) {
            x_1877->meta->bb_2_has_bb_dirtied = true;
            x_1877->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1806(x_1877);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1860(x_1865, ListNthExn(x_1862->children, x_1864), x_1863);
  }
}
Unit add_node_x_1712(const auto &x_1861, const auto &x_1862, const auto &x_1863) {
  return x_1860(x_1861, x_1862, x_1863);
}
Unit x_1879(const auto &x_1880) {
  ListIter2(x_1880->children, [&](const auto &x_1881, const auto &x_1882) {
    x_1881->parent = x_1880.get();
    x_1882->parent = x_1880.get();
    x_1881->next = x_1882.get();
    x_1882->prev = x_1881.get();
    x_1879(x_1881);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1880->children),
      [&](const auto &x_1884) {
        x_1880->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1883) {
        x_1880->first = x_1883.get();
        x_1883->parent = x_1880.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1880->children),
      [&](const auto &x_1886) {
        x_1880->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1885) {
        x_1880->last = x_1885.get();
        x_1885->parent = x_1880.get();
        x_1879(x_1885);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1710(const auto &x_1880) { return x_1879(x_1880); }
Unit eval_stmts_x_1706(const auto &x_1887) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1888) {
    x_1887->meta->bb_2_has_bb_dirtied = true;
    x_1887->meta->bb_2_bb_dirtied = false;
    eval_stmts_x_1853(x_1887);
    ListIter(x_1887->children, [&](const auto &x_1889) {
      x_1889->meta->pass_1_proc_inited = true;
      x_1889->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1889->meta->pass_1_recursive_proc_dirtied = false;
      eval_stmts_x_1706(x_1889);
      return MakeUnit();
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1705(const auto &x_1890) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1891) {
    x_1890->meta->bb_1_has_bb_dirtied = true;
    x_1890->meta->bb_1_bb_dirtied = false;
    eval_stmts_x_1857(x_1890);
    ListIter(x_1890->children, [&](const auto &x_1892) {
      x_1892->meta->pass_0_proc_inited = true;
      x_1892->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1892->meta->pass_0_recursive_proc_dirtied = false;
      eval_stmts_x_1705(x_1892);
      return MakeUnit();
    });
    x_1890->meta->bb_0_has_bb_dirtied = true;
    x_1890->meta->bb_0_bb_dirtied = false;
    eval_stmts_x_1859(x_1890);
    return MakeUnit();
  })));
}
Unit x_1893(const auto &x_1894) {
  ListIter2(x_1894->children, [&](const auto &x_1895, const auto &x_1896) {
    x_1895->parent = x_1894.get();
    x_1896->parent = x_1894.get();
    x_1895->next = x_1896.get();
    x_1896->prev = x_1895.get();
    x_1893(x_1895);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1894->children),
      [&](const auto &x_1898) {
        x_1894->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1897) {
        x_1894->first = x_1897.get();
        x_1897->parent = x_1894.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1894->children),
      [&](const auto &x_1900) {
        x_1894->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1899) {
        x_1894->last = x_1899.get();
        x_1899->parent = x_1894.get();
        x_1893(x_1899);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1702(const auto &x_1894) { return x_1893(x_1894); }
int64_t x_1901(const auto &x_1902) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1902->children, [&](const auto &x_1903) { return x_1901(x_1903); }));
}
int64_t node_size_x_1693(const auto &x_1902) { return x_1901(x_1902); }
int64_t x_1904(const auto &x_1905) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1905->children, [&](const auto &x_1906) { return x_1904(x_1906); }));
}
int64_t layout_size_x_1692(const auto &x_1905) { return x_1904(x_1905); }
LayoutNode x_1907(const auto &x_1908) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_1908)), [&](const auto &x_1909) { return x_1907(x_1909); }));
}
LayoutNode json_to_layout_node_x_1691(const auto &x_1908) { return x_1907(x_1908); }
Node x_1910(const auto &x_1911) {
  return MakeNode(x_1911->name, x_1911->attr, x_1911->prop, x_1911->extern_id,
                  ListMap(x_1911->children, [&](const auto &x_1912) { return x_1910(x_1912); }));
}
Node node_to_fs_node_x_1690(const auto &x_1911) { return x_1910(x_1911); }
Node x_1913(const auto &x_1914) {
  return MakeNode(
      JsonToString(JsonMember("name", x_1914)), JsonToDict(JsonMember("attributes", x_1914)),
      JsonToDict(JsonMember("properties", x_1914)), JsonToInt(JsonMember("id", x_1914)),
      ListMap(JsonToList(JsonMember("children", x_1914)), [&](const auto &x_1915) { return x_1913(x_1915); }));
}
Node json_to_node_aux_x_1689(const auto &x_1914) { return x_1913(x_1914); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_1694) {
    PrintEndline("RUNNING DB_D");
    return WithInFile("command.json", [&](const auto &x_1695) {
      auto x_1696 = MakeRef(static_cast<int64_t>(0));
      auto x_1697 = FreshMetric();
      auto x_1698 = JsonOfString(InputLine(x_1695));
      auto x_1699 = JsonOfString(InputLine(x_1695));
      auto x_1700 = MakeStack();
      PushStack(x_1700, x_1698);
      PushStack(x_1700, x_1699);
      Assert(StringEqual(JsonToString(JsonMember("name", x_1698)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_1699)), "layout_init"));
      auto x_1703 = [&]() {
        auto x_1701 = json_to_node_aux_x_1689(JsonMember("node", x_1698));
        x_1701->parent = nullptr;
        x_1701->prev = nullptr;
        x_1701->next = nullptr;
        set_children_relation_x_1702(x_1701);
        return x_1701;
      }();
      auto x_1704 = json_to_layout_node_x_1691(JsonMember("node", x_1699));
      OutputChangeMetric(layout_size_x_1692(x_1704));
      InputChangeMetric(node_size_x_1693(x_1703));
      x_1703->meta->pass_0_proc_inited = true;
      x_1703->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1703->meta->pass_0_recursive_proc_dirtied = false;
      eval_stmts_x_1705(x_1703);
      x_1703->meta->pass_1_proc_inited = true;
      x_1703->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1703->meta->pass_1_recursive_proc_dirtied = false;
      eval_stmts_x_1706(x_1703);
      JsonToChannel(x_1694, [&]() {
        auto x_3483 = FreshJson();
        WriteJson(x_3483, "name", "DB_D");
        WriteJson(x_3483, "diff_num", ReadRef(x_1696));
        WriteJson(x_3483, "read_count", MetricReadCount());
        WriteJson(x_3483, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_3483, "write_count", MetricWriteCount());
        WriteJson(x_3483, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_3483, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_3483, "input_change_count", MetricInputChangeCount());
        WriteJson(x_3483, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_3483, "overhead_time", MetricOverheadCount());
        WriteJson(x_3483, "eval_time", MetricEvalCount());
        WriteJson(x_3483, "html", "");
        WriteJson(x_3483, "command", StackToList(x_1700));
        return x_3483;
      }());
      OutputString(x_1694, "\n");
      ClearStack(x_1700);
      WriteRef(x_1696, IntAdd(ReadRef(x_1696), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_1695, [&](const auto &x_1707) {
        auto x_1708 = JsonOfString(x_1707);
        PushStack(x_1700, x_1708);
        std::string x_3485 = JsonToString(JsonMember("name", x_1708));
        if (x_3485 == "add") {
          return add_node_x_1712(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1711) { return JsonToInt(x_1711); }),
              x_1703, [&]() {
                auto x_1709 = json_to_node_aux_x_1689(JsonMember("node", x_1708));
                x_1709->parent = nullptr;
                x_1709->prev = nullptr;
                x_1709->next = nullptr;
                set_children_relation_x_1710(x_1709);
                return x_1709;
              }());
        } else if (x_3485 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_1713) {
            recalculate_internal_x_1714(x_1703);
            recalculate_internal_x_1715(x_1703);
            return MakeUnit();
          })));
          JsonToChannel(x_1694, [&]() {
            auto x_3484 = FreshJson();
            WriteJson(x_3484, "name", "DB_D");
            WriteJson(x_3484, "diff_num", ReadRef(x_1696));
            WriteJson(x_3484, "read_count", MetricReadCount());
            WriteJson(x_3484, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_3484, "write_count", MetricWriteCount());
            WriteJson(x_3484, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_3484, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_3484, "input_change_count", MetricInputChangeCount());
            WriteJson(x_3484, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_3484, "overhead_time", MetricOverheadCount());
            WriteJson(x_3484, "eval_time", MetricEvalCount());
            WriteJson(x_3484, "html", "");
            WriteJson(x_3484, "command", StackToList(x_1700));
            return x_3484;
          }());
          OutputString(x_1694, "\n");
          ClearStack(x_1700);
          WriteRef(x_1696, IntAdd(ReadRef(x_1696), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_3485 == "remove") {
          return remove_node_x_1717(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1716) { return JsonToInt(x_1716); }),
              x_1703, MakeUnit());
        } else if (x_3485 == "replace") {
          return replace_node_x_1721(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1720) { return JsonToInt(x_1720); }),
              x_1703, [&]() {
                auto x_1718 = json_to_node_aux_x_1689(JsonMember("node", x_1708));
                x_1718->parent = nullptr;
                x_1718->prev = nullptr;
                x_1718->next = nullptr;
                set_children_relation_x_1719(x_1718);
                return x_1718;
              }());
        } else if (x_3485 == "replace_value") {
          return replace_value_x_1723(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1722) { return JsonToInt(x_1722); }),
              x_1703,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1708)), JsonToString(JsonMember("key", x_1708))),
                       JsonToValue(JsonMember("value", x_1708))));
        } else if (x_3485 == "delete_value") {
          return delete_value_x_1725(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1724) { return JsonToInt(x_1724); }),
              x_1703, MakePair(JsonToString(JsonMember("type", x_1708)), JsonToString(JsonMember("key", x_1708))));
        } else if (x_3485 == "insert_value") {
          return insert_value_x_1727(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1726) { return JsonToInt(x_1726); }),
              x_1703,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1708)), JsonToString(JsonMember("key", x_1708))),
                       JsonToValue(JsonMember("value", x_1708))));
        } else if (x_3485 == "layout_remove") {
          return remove_layout_node_x_1729(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1728) { return JsonToInt(x_1728); }),
              x_1704, MakeUnit());
        } else if (x_3485 == "layout_add") {
          return add_layout_node_x_1731(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1730) { return JsonToInt(x_1730); }),
              x_1704, json_to_layout_node_x_1691(JsonMember("node", x_1708)));
        } else if (x_3485 == "layout_replace") {
          return replace_layout_node_x_1733(
              ListMap(JsonToList(JsonMember("path", x_1708)), [&](const auto &x_1732) { return JsonToInt(x_1732); }),
              x_1704, json_to_layout_node_x_1691(JsonMember("node", x_1708)));
        } else if (x_3485 == "layout_info_changed") {
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