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
Unit var_modified_x_2245(const auto &x_2255);
auto eval_expr_x_2242(const auto &x_2261);
Unit var_modified_x_2240(const auto &x_2278);
auto eval_expr_x_2237(const auto &x_2282);
Unit var_modified_x_2235(const auto &x_2291);
auto eval_expr_x_2232(const auto &x_2297);
Unit var_modified_x_2230(const auto &x_2350);
auto eval_expr_x_2227(const auto &x_2358);
Unit var_modified_x_2225(const auto &x_2383);
auto eval_expr_x_2222(const auto &x_2389);
Unit var_modified_x_2220(const auto &x_2398);
auto eval_expr_x_2217(const auto &x_2404);
Unit var_modified_x_2215(const auto &x_2457);
auto eval_expr_x_2212(const auto &x_2465);
Unit var_modified_x_2210(const auto &x_2486);
auto eval_expr_x_2207(const auto &x_2490);
Unit var_modified_x_2205(const auto &x_2511);
auto eval_expr_x_2202(const auto &x_2515);
Unit var_modified_x_2200(const auto &x_2528);
auto eval_expr_x_2197(const auto &x_2534);
Unit var_modified_x_2195(const auto &x_2555);
auto eval_expr_x_2192(const auto &x_2559);
Unit var_modified_x_2190(const auto &x_2564);
auto eval_expr_x_2187(const auto &x_2568);
Unit var_modified_x_2183(const auto &x_2573);
auto eval_expr_x_2180(const auto &x_2587);
Unit var_modified_x_2178(const auto &x_2664);
auto eval_expr_x_2175(const auto &x_2668);
Unit var_modified_x_2173(const auto &x_2685);
auto eval_expr_x_2170(const auto &x_2693);
Unit var_modified_x_2168(const auto &x_2698);
auto eval_expr_x_2165(const auto &x_2706);
Unit var_modified_x_2163(const auto &x_2715);
auto eval_expr_x_2160(const auto &x_2719);
Unit var_modified_x_2158(const auto &x_2720);
auto eval_expr_x_2155(const auto &x_2724);
Unit var_modified_x_2153(const auto &x_2729);
auto eval_expr_x_2150(const auto &x_2735);
Unit var_modified_x_2148(const auto &x_2746);
auto eval_expr_x_2145(const auto &x_2750);
Unit var_modified_x_2143(const auto &x_2755);
auto eval_expr_x_2140(const auto &x_2761);
Unit var_modified_x_2138(const auto &x_2772);
auto eval_expr_x_2135(const auto &x_2778);
Unit var_modified_x_2133(const auto &x_2803);
auto eval_expr_x_2130(const auto &x_2811);
Unit var_modified_x_2128(const auto &x_2836);
auto eval_expr_x_2125(const auto &x_2840);
Unit var_modified_x_2123(const auto &x_2843);
auto eval_expr_x_2120(const auto &x_2851);
Unit var_modified_x_2118(const auto &x_2860);
auto eval_expr_x_2115(const auto &x_2868);
Unit var_modified_x_2113(const auto &x_2877);
auto eval_expr_x_2110(const auto &x_2883);
Unit var_modified_x_2108(const auto &x_2886);
auto eval_expr_x_2105(const auto &x_2892);
Unit var_modified_x_2103(const auto &x_2895);
auto eval_expr_x_2100(const auto &x_2903);
Unit var_modified_x_2098(const auto &x_2906);
auto eval_expr_x_2095(const auto &x_2914);
Unit var_modified_x_2091(const auto &x_2917);
auto eval_expr_x_2088(const auto &x_2927);
Unit var_modified_x_2086(const auto &x_2956);
auto eval_expr_x_2083(const auto &x_2966);
Unit var_modified_x_2081(const auto &x_2979);
auto eval_expr_x_2078(const auto &x_2989);
Unit var_modified_x_2076(const auto &x_2998);
auto eval_expr_x_2073(const auto &x_3002);
Unit var_modified_x_2071(const auto &x_3011);
auto eval_expr_x_2068(const auto &x_3017);
Unit var_modified_x_2066(const auto &x_3162);
auto eval_expr_x_2063(const auto &x_3166);
Unit var_modified_x_2061(const auto &x_3215);
auto eval_expr_x_2058(const auto &x_3221);
Unit var_modified_x_2056(const auto &x_3224);
auto eval_expr_x_2053(const auto &x_3228);
Unit var_modified_x_2051(const auto &x_3237);
auto eval_expr_x_2048(const auto &x_3247);
Unit var_modified_x_2046(const auto &x_3256);
auto eval_expr_x_2043(const auto &x_3266);
Unit var_modified_x_2041(const auto &x_3275);
auto eval_expr_x_2038(const auto &x_3283);
Unit var_modified_x_2036(const auto &x_3296);
auto eval_expr_x_2033(const auto &x_3300);
Unit var_modified_x_2031(const auto &x_3309);
auto eval_expr_x_2028(const auto &x_3315);
Unit var_modified_x_2026(const auto &x_3468);
auto eval_expr_x_2023(const auto &x_3472);
Unit var_modified_x_2021(const auto &x_3477);
auto eval_expr_x_2018(const auto &x_3481);
Unit var_modified_x_2016(const auto &x_3530);
auto eval_expr_x_2013(const auto &x_3534);
Unit var_modified_x_2011(const auto &x_3547);
auto eval_expr_x_2008(const auto &x_3553);
Unit eval_stmts_x_1937(const auto &x_2006);
Unit eval_stmts_x_1935(const auto &x_2093);
Unit eval_stmts_x_1931(const auto &x_2185);
Unit x_2247(const auto &x_2248);
Unit x_2251(const auto &x_2252);
Unit x_1743(const auto &x_1744, const auto &x_1745, const auto &x_1746);
Unit x_1750(const auto &x_1751, const auto &x_1752, const auto &x_1753);
Unit x_1757(const auto &x_1758, const auto &x_1759, const auto &x_1760);
Unit x_1764(const auto &x_1765, const auto &x_1766, const auto &x_1767);
Unit x_1788(const auto &x_1789, const auto &x_1790, const auto &x_1791);
Unit x_1809(const auto &x_1810, const auto &x_1811, const auto &x_1812);
Unit x_1844(const auto &x_1845, const auto &x_1846, const auto &x_1847);
Unit x_1893(const auto &x_1894);
Unit x_1901(const auto &x_1902, const auto &x_1903, const auto &x_1904);
Unit x_1929(const auto &x_1930);
Unit x_1933(const auto &x_1934);
Unit x_1938(const auto &x_1939, const auto &x_1940, const auto &x_1941);
Unit x_1964(const auto &x_1965);
Unit eval_stmts_x_1715(const auto &x_1972);
Unit eval_stmts_x_1713(const auto &x_1977);
Unit x_1983(const auto &x_1984);
int64_t x_1991(const auto &x_1992);
int64_t x_1994(const auto &x_1995);
LayoutNode x_1997(const auto &x_1998);
Node x_2000(const auto &x_2001);
Node x_2003(const auto &x_2004);
Unit var_modified_x_2245(const auto &x_2255) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2256) {
    auto x_3556 = [&](const auto &x_2259) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2260) {
        if (x_2259->meta->pass_1_proc_inited) {
          x_2259->meta->bb_2_has_bb_dirtied = true;
          x_2259->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2259);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2255->next, [&](const auto &x_2258) { return MakeUnit(); },
        [&](const auto &x_2257) {
          auto x_3557 = x_3556;
          x_3557(x_2257);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2242(const auto &x_2261) {
  if ((x_2261->prev != nullptr) && (!(x_2261->prev)->var_line_break)) {
    return max(x_2261->var_height_external, (x_2261->prev)->var_line_height);
  } else {
    return x_2261->var_height_external;
  }
}
Unit var_modified_x_2240(const auto &x_2278) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2279) {
    auto x_3558 = [&](const auto &x_2280) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2281) {
        if (x_2280->meta->pass_1_proc_inited) {
          x_2280->meta->bb_2_has_bb_dirtied = true;
          x_2280->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2280);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3558(x_2278);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2237(const auto &x_2282) {
  if (eq(x_2282->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2282->var_height_internal;
  }
}
Unit var_modified_x_2235(const auto &x_2291) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2292) {
    auto x_3559 = [&](const auto &x_2293) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2294) {
        if (x_2293->meta->pass_1_proc_inited) {
          x_2293->meta->bb_2_has_bb_dirtied = true;
          x_2293->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2293);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3559(x_2291);
    MakeUnit();
    ListIter(x_2291->children, [&](const auto &x_2295) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2296) {
        if (x_2295->meta->pass_1_proc_inited) {
          x_2295->meta->bb_2_has_bb_dirtied = true;
          x_2295->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2295);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2232(const auto &x_2297) {
  if (x_2297->var_intrinsic_height_is_height) {
    return x_2297->var_intrinsic_height_internal;
  } else {
    if ((x_2297->parent != nullptr) && (x_2297->parent)->var_is_flex_column) {
      return plus(x_2297->var_intrinsic_height_internal,
                  mult(x_2297->var_flex_amount, (x_2297->parent)->var_flex_unit));
    } else {
      if (x_2297->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2297->var_box_height, divide(x_2297->var_height_expr.r.a0, 100.));
      } else {
        return max(x_2297->var_box_height, x_2297->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_2230(const auto &x_2350) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2351) {
    ListIter(x_2350->children, [&](const auto &x_2352) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2353) {
        if (x_2352->meta->pass_1_proc_inited) {
          x_2352->meta->bb_2_has_bb_dirtied = true;
          x_2352->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2352);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3560 = [&](const auto &x_2356) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2357) {
        if (x_2356->meta->pass_1_proc_inited) {
          x_2356->meta->bb_2_has_bb_dirtied = true;
          x_2356->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2356);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2350->next, [&](const auto &x_2355) { return MakeUnit(); },
        [&](const auto &x_2354) {
          auto x_3561 = x_3560;
          x_3561(x_2354);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2227(const auto &x_2358) {
  if (x_2358->prev != nullptr) {
    if (x_2358->var_line_break || (x_2358->prev)->var_line_break) {
      return plus((x_2358->prev)->var_y, (x_2358->prev)->var_line_height);
    } else {
      return (x_2358->prev)->var_y;
    }
  } else {
    if (x_2358->parent != nullptr) {
      return (x_2358->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2225(const auto &x_2383) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2384) {
    auto x_3562 = [&](const auto &x_2387) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2388) {
        if (x_2387->meta->pass_1_proc_inited) {
          x_2387->meta->bb_2_has_bb_dirtied = true;
          x_2387->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2387);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2383->next, [&](const auto &x_2386) { return MakeUnit(); },
        [&](const auto &x_2385) {
          auto x_3563 = x_3562;
          x_3563(x_2385);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2222(const auto &x_2389) {
  if (eq(x_2389->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2389->var_width_internal;
  }
}
Unit var_modified_x_2220(const auto &x_2398) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2399) {
    auto x_3564 = [&](const auto &x_2400) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2401) {
        if (x_2400->meta->pass_1_proc_inited) {
          x_2400->meta->bb_2_has_bb_dirtied = true;
          x_2400->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2400);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3564(x_2398);
    MakeUnit();
    ListIter(x_2398->children, [&](const auto &x_2402) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2403) {
        if (x_2402->meta->pass_1_proc_inited) {
          x_2402->meta->bb_2_has_bb_dirtied = true;
          x_2402->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2402);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2217(const auto &x_2404) {
  if (x_2404->var_intrinsic_width_is_width) {
    return x_2404->var_intrinsic_width_internal;
  } else {
    if ((x_2404->parent != nullptr) && (x_2404->parent)->var_is_flex_row) {
      return plus(x_2404->var_intrinsic_width_internal, mult(x_2404->var_flex_amount, (x_2404->parent)->var_flex_unit));
    } else {
      if (x_2404->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2404->var_box_width, divide(x_2404->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2404->var_box_width, x_2404->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_2215(const auto &x_2457) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2458) {
    ListIter(x_2457->children, [&](const auto &x_2459) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2460) {
        if (x_2459->meta->pass_1_proc_inited) {
          x_2459->meta->bb_2_has_bb_dirtied = true;
          x_2459->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2459);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3565 = [&](const auto &x_2463) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2464) {
        if (x_2463->meta->pass_1_proc_inited) {
          x_2463->meta->bb_2_has_bb_dirtied = true;
          x_2463->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2463);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2457->next, [&](const auto &x_2462) { return MakeUnit(); },
        [&](const auto &x_2461) {
          auto x_3566 = x_3565;
          x_3566(x_2461);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2212(const auto &x_2465) {
  if (x_2465->prev != nullptr) {
    if (x_2465->var_line_break || (x_2465->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2465->prev)->var_x, (x_2465->prev)->var_width_external);
    }
  } else {
    if (x_2465->parent != nullptr) {
      return (x_2465->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2210(const auto &x_2486) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2487) {
    ListIter(x_2486->children, [&](const auto &x_2488) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2489) {
        if (x_2488->meta->pass_1_proc_inited) {
          x_2488->meta->bb_2_has_bb_dirtied = true;
          x_2488->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2488);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2207(const auto &x_2490) {
  if (gt(x_2490->var_left_over, 0.)) {
    return divide(x_2490->var_left_over, x_2490->var_flex_grow_sum);
  } else {
    return divide(x_2490->var_left_over, x_2490->var_flex_shrink_sum);
  }
}
Unit var_modified_x_2205(const auto &x_2511) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2512) {
    auto x_3567 = [&](const auto &x_2513) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2514) {
        if (x_2513->meta->pass_1_proc_inited) {
          x_2513->meta->bb_2_has_bb_dirtied = true;
          x_2513->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2513);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3567(x_2511);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2202(const auto &x_2515) {
  if ((x_2515->parent != nullptr) && gt((x_2515->parent)->var_left_over, 0.)) {
    return x_2515->var_flex_grow;
  } else {
    return x_2515->var_flex_shrink;
  }
}
Unit var_modified_x_2200(const auto &x_2528) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2529) {
    auto x_3568 = [&](const auto &x_2530) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2531) {
        if (x_2530->meta->pass_1_proc_inited) {
          x_2530->meta->bb_2_has_bb_dirtied = true;
          x_2530->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2530);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3568(x_2528);
    MakeUnit();
    ListIter(x_2528->children, [&](const auto &x_2532) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2533) {
        if (x_2532->meta->pass_1_proc_inited) {
          x_2532->meta->bb_2_has_bb_dirtied = true;
          x_2532->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2532);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2197(const auto &x_2534) {
  if (x_2534->var_is_flex_row) {
    return minus(x_2534->var_box_width, (x_2534->last != nullptr) ? ((x_2534->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2534->var_box_height, (x_2534->last != nullptr) ? ((x_2534->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_2195(const auto &x_2555) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2556) {
    auto x_3569 = [&](const auto &x_2557) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2558) {
        if (x_2557->meta->pass_1_proc_inited) {
          x_2557->meta->bb_2_has_bb_dirtied = true;
          x_2557->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2557);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3569(x_2555);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2192(const auto &x_2559) {
  if (x_2559->parent != nullptr) {
    return (x_2559->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_2190(const auto &x_2564) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2565) {
    auto x_3570 = [&](const auto &x_2566) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2567) {
        if (x_2566->meta->pass_1_proc_inited) {
          x_2566->meta->bb_2_has_bb_dirtied = true;
          x_2566->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2566);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3570(x_2564);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2187(const auto &x_2568) {
  if (x_2568->parent != nullptr) {
    return (x_2568->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_2183(const auto &x_2573) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2574) {
    auto x_3571 = [&](const auto &x_2575) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2576) {
        if (x_2575->meta->pass_0_proc_inited) {
          x_2575->meta->bb_0_has_bb_dirtied = true;
          x_2575->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2575);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3571(x_2573);
    MakeUnit();
    auto x_3572 = [&](const auto &x_2579) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2580) {
        if (x_2579->meta->pass_0_proc_inited) {
          x_2579->meta->bb_0_has_bb_dirtied = true;
          x_2579->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2579);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2573->next, [&](const auto &x_2578) { return MakeUnit(); },
        [&](const auto &x_2577) {
          auto x_3575 = x_3572;
          x_3575(x_2577);
          return MakeUnit();
        });
    auto x_3573 = [&](const auto &x_2581) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2582) {
        if (x_2581->meta->pass_1_proc_inited) {
          x_2581->meta->bb_2_has_bb_dirtied = true;
          x_2581->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2581);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3573(x_2573);
    MakeUnit();
    auto x_3574 = [&](const auto &x_2585) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2586) {
        if (x_2585->meta->pass_1_proc_inited) {
          x_2585->meta->bb_2_has_bb_dirtied = true;
          x_2585->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2585);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2573->next, [&](const auto &x_2584) { return MakeUnit(); },
        [&](const auto &x_2583) {
          auto x_3576 = x_3574;
          x_3576(x_2583);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2180(const auto &x_2587) {
  if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_2587->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_2587->parent != nullptr) &&
          (eq((x_2587->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_2587->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_2587->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_2587->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_2587->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_2178(const auto &x_2664) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2665) {
    ListIter(x_2664->children, [&](const auto &x_2666) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2667) {
        if (x_2666->meta->pass_0_proc_inited) {
          x_2666->meta->bb_1_has_bb_dirtied = true;
          x_2666->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2666);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2175(const auto &x_2668) {
  return (((!(x_2668->parent != nullptr)) || (x_2668->parent)->var_visible) &&
          (neq(x_2668->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_2668->var_inside_svg) && (!x_2668->var_disabled))));
}
Unit var_modified_x_2173(const auto &x_2685) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2686) {
    auto x_3577 = [&](const auto &x_2687) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2688) {
        if (x_2687->meta->pass_0_proc_inited) {
          x_2687->meta->bb_1_has_bb_dirtied = true;
          x_2687->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2687);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3577(x_2685);
    MakeUnit();
    ListIter(x_2685->children, [&](const auto &x_2689) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2690) {
        if (x_2689->meta->pass_0_proc_inited) {
          x_2689->meta->bb_1_has_bb_dirtied = true;
          x_2689->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2689);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3578 = [&](const auto &x_2691) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2692) {
        if (x_2691->meta->pass_0_proc_inited) {
          x_2691->meta->bb_0_has_bb_dirtied = true;
          x_2691->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2691);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3578(x_2685);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2170(const auto &x_2693) {
  if (eq(x_2693->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_2693->parent != nullptr) && (x_2693->parent)->var_disabled);
  }
}
Unit var_modified_x_2168(const auto &x_2698) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2699) {
    auto x_3579 = [&](const auto &x_2700) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2701) {
        if (x_2700->meta->pass_0_proc_inited) {
          x_2700->meta->bb_1_has_bb_dirtied = true;
          x_2700->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2700);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3579(x_2698);
    MakeUnit();
    ListIter(x_2698->children, [&](const auto &x_2702) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2703) {
        if (x_2702->meta->pass_0_proc_inited) {
          x_2702->meta->bb_1_has_bb_dirtied = true;
          x_2702->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2702);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3580 = [&](const auto &x_2704) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2705) {
        if (x_2704->meta->pass_0_proc_inited) {
          x_2704->meta->bb_0_has_bb_dirtied = true;
          x_2704->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2704);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3580(x_2698);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2165(const auto &x_2706) {
  return ((x_2706->parent != nullptr) && ((x_2706->parent)->var_is_svg_block || (x_2706->parent)->var_inside_svg));
}
Unit var_modified_x_2163(const auto &x_2715) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2716) {
    ListIter(x_2715->children, [&](const auto &x_2717) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2718) {
        if (x_2717->meta->pass_0_proc_inited) {
          x_2717->meta->bb_1_has_bb_dirtied = true;
          x_2717->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2717);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2160(const auto &x_2719) { return eq(x_2719->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_2158(const auto &x_2720) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2721) {
    auto x_3581 = [&](const auto &x_2722) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2723) {
        if (x_2722->meta->pass_0_proc_inited) {
          x_2722->meta->bb_0_has_bb_dirtied = true;
          x_2722->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2722);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3581(x_2720);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2155(const auto &x_2724) {
  return neq(x_2724->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2153(const auto &x_2729) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2730) {
    auto x_3582 = [&](const auto &x_2731) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2732) {
        if (x_2731->meta->pass_0_proc_inited) {
          x_2731->meta->bb_1_has_bb_dirtied = true;
          x_2731->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2731);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3582(x_2729);
    MakeUnit();
    auto x_3583 = [&](const auto &x_2733) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2734) {
        if (x_2733->meta->pass_0_proc_inited) {
          x_2733->meta->bb_0_has_bb_dirtied = true;
          x_2733->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2733);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3583(x_2729);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2150(const auto &x_2735) {
  if (!x_2735->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2735->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_2735->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2735->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2148(const auto &x_2746) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2747) {
    auto x_3584 = [&](const auto &x_2748) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2749) {
        if (x_2748->meta->pass_0_proc_inited) {
          x_2748->meta->bb_0_has_bb_dirtied = true;
          x_2748->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2748);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3584(x_2746);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2145(const auto &x_2750) {
  return neq(x_2750->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2143(const auto &x_2755) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2756) {
    auto x_3585 = [&](const auto &x_2757) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2758) {
        if (x_2757->meta->pass_0_proc_inited) {
          x_2757->meta->bb_1_has_bb_dirtied = true;
          x_2757->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2757);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3585(x_2755);
    MakeUnit();
    auto x_3586 = [&](const auto &x_2759) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2760) {
        if (x_2759->meta->pass_0_proc_inited) {
          x_2759->meta->bb_0_has_bb_dirtied = true;
          x_2759->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2759);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3586(x_2755);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2140(const auto &x_2761) {
  if (!x_2761->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2761->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_2761->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2761->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2138(const auto &x_2772) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2773) {
    ListIter(x_2772->children, [&](const auto &x_2774) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2775) {
        if (x_2774->meta->pass_0_proc_inited) {
          x_2774->meta->bb_0_has_bb_dirtied = true;
          x_2774->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2774);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    ListIter(x_2772->children, [&](const auto &x_2776) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2777) {
        if (x_2776->meta->pass_1_proc_inited) {
          x_2776->meta->bb_2_has_bb_dirtied = true;
          x_2776->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2776);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2135(const auto &x_2778) {
  if ((x_2778->parent != nullptr) &&
      (eq((x_2778->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2778->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2778->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_2778->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2133(const auto &x_2803) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2804) {
    ListIter(x_2803->children, [&](const auto &x_2805) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2806) {
        if (x_2805->meta->pass_0_proc_inited) {
          x_2805->meta->bb_0_has_bb_dirtied = true;
          x_2805->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2805);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3587 = [&](const auto &x_2807) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2808) {
        if (x_2807->meta->pass_1_proc_inited) {
          x_2807->meta->bb_2_has_bb_dirtied = true;
          x_2807->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2807);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3587(x_2803);
    MakeUnit();
    ListIter(x_2803->children, [&](const auto &x_2809) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2810) {
        if (x_2809->meta->pass_1_proc_inited) {
          x_2809->meta->bb_2_has_bb_dirtied = true;
          x_2809->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2809);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2130(const auto &x_2811) {
  if ((x_2811->parent != nullptr) &&
      (eq((x_2811->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2811->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2811->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2128(const auto &x_2836) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2837) {
    ListIter(x_2836->children, [&](const auto &x_2838) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2839) {
        if (x_2838->meta->pass_0_proc_inited) {
          x_2838->meta->bb_1_has_bb_dirtied = true;
          x_2838->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2838);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2125(const auto &x_2840) {
  if (x_2840->has_prop_flex_direction) {
    return x_2840->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_2123(const auto &x_2843) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2844) {
    auto x_3588 = [&](const auto &x_2847) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2848) {
        if (x_2847->meta->pass_0_proc_inited) {
          x_2847->meta->bb_1_has_bb_dirtied = true;
          x_2847->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2847);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2843->next, [&](const auto &x_2846) { return MakeUnit(); },
        [&](const auto &x_2845) {
          auto x_3590 = x_3588;
          x_3590(x_2845);
          return MakeUnit();
        });
    auto x_3589 = [&](const auto &x_2849) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2850) {
        if (x_2849->meta->pass_1_proc_inited) {
          x_2849->meta->bb_2_has_bb_dirtied = true;
          x_2849->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2849);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3589(x_2843);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2120(const auto &x_2851) {
  return plus((x_2851->prev != nullptr) ? ((x_2851->prev)->var_flex_shrink_sum) : (0.), x_2851->var_flex_shrink);
}
Unit var_modified_x_2118(const auto &x_2860) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2861) {
    auto x_3591 = [&](const auto &x_2864) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2865) {
        if (x_2864->meta->pass_0_proc_inited) {
          x_2864->meta->bb_1_has_bb_dirtied = true;
          x_2864->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2864);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2860->next, [&](const auto &x_2863) { return MakeUnit(); },
        [&](const auto &x_2862) {
          auto x_3593 = x_3591;
          x_3593(x_2862);
          return MakeUnit();
        });
    auto x_3592 = [&](const auto &x_2866) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2867) {
        if (x_2866->meta->pass_1_proc_inited) {
          x_2866->meta->bb_2_has_bb_dirtied = true;
          x_2866->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2866);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3592(x_2860);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2115(const auto &x_2868) {
  return plus((x_2868->prev != nullptr) ? ((x_2868->prev)->var_flex_grow_sum) : (0.), x_2868->var_flex_grow);
}
Unit var_modified_x_2113(const auto &x_2877) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2878) {
    auto x_3594 = [&](const auto &x_2879) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2880) {
        if (x_2879->meta->pass_0_proc_inited) {
          x_2879->meta->bb_1_has_bb_dirtied = true;
          x_2879->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2879);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3594(x_2877);
    MakeUnit();
    auto x_3595 = [&](const auto &x_2881) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2882) {
        if (x_2881->meta->pass_1_proc_inited) {
          x_2881->meta->bb_2_has_bb_dirtied = true;
          x_2881->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2881);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3595(x_2877);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2110(const auto &x_2883) {
  if (x_2883->has_prop_flex_shrink) {
    return (x_2883->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2108(const auto &x_2886) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2887) {
    auto x_3596 = [&](const auto &x_2888) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2889) {
        if (x_2888->meta->pass_0_proc_inited) {
          x_2888->meta->bb_1_has_bb_dirtied = true;
          x_2888->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2888);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3596(x_2886);
    MakeUnit();
    auto x_3597 = [&](const auto &x_2890) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2891) {
        if (x_2890->meta->pass_1_proc_inited) {
          x_2890->meta->bb_2_has_bb_dirtied = true;
          x_2890->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2890);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3597(x_2886);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2105(const auto &x_2892) {
  if (x_2892->has_prop_flex_grow) {
    return (x_2892->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2103(const auto &x_2895) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2896) {
    auto x_3598 = [&](const auto &x_2897) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2898) {
        if (x_2897->meta->pass_0_proc_inited) {
          x_2897->meta->bb_1_has_bb_dirtied = true;
          x_2897->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2897);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3598(x_2895);
    MakeUnit();
    auto x_3599 = [&](const auto &x_2899) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2900) {
        if (x_2899->meta->pass_0_proc_inited) {
          x_2899->meta->bb_0_has_bb_dirtied = true;
          x_2899->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2899);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3599(x_2895);
    MakeUnit();
    auto x_3600 = [&](const auto &x_2901) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2902) {
        if (x_2901->meta->pass_1_proc_inited) {
          x_2901->meta->bb_2_has_bb_dirtied = true;
          x_2901->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2901);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3600(x_2895);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2100(const auto &x_2903) {
  if (x_2903->has_prop_position) {
    return x_2903->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_2098(const auto &x_2906) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2907) {
    auto x_3601 = [&](const auto &x_2908) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2909) {
        if (x_2908->meta->pass_0_proc_inited) {
          x_2908->meta->bb_1_has_bb_dirtied = true;
          x_2908->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2908);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3601(x_2906);
    MakeUnit();
    ListIter(x_2906->children, [&](const auto &x_2910) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2911) {
        if (x_2910->meta->pass_0_proc_inited) {
          x_2910->meta->bb_1_has_bb_dirtied = true;
          x_2910->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2910);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3602 = [&](const auto &x_2912) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2913) {
        if (x_2912->meta->pass_0_proc_inited) {
          x_2912->meta->bb_0_has_bb_dirtied = true;
          x_2912->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2912);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3602(x_2906);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2095(const auto &x_2914) {
  if (x_2914->has_prop_display) {
    return x_2914->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_2091(const auto &x_2917) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2918) {
    auto x_3603 = [&](const auto &x_2921) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2922) {
        if (x_2921->meta->pass_0_proc_inited) {
          x_2921->meta->bb_0_has_bb_dirtied = true;
          x_2921->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2921);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_2917->next == nullptr) {
      auto x_3605 = x_3603;
      OptionMatch(
          x_2917->parent, [&](const auto &x_2920) { return MakeUnit(); },
          [&](const auto &x_2919) {
            auto x_3607 = x_3605;
            x_3607(x_2919);
            return MakeUnit();
          });
    }
    auto x_3604 = [&](const auto &x_2925) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2926) {
        if (x_2925->meta->pass_0_proc_inited) {
          x_2925->meta->bb_0_has_bb_dirtied = true;
          x_2925->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2925);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2917->next, [&](const auto &x_2924) { return MakeUnit(); },
        [&](const auto &x_2923) {
          auto x_3606 = x_3604;
          x_3606(x_2923);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2088(const auto &x_2927) {
  if (x_2927->prev != nullptr) {
    if (x_2927->var_line_break) {
      return plus((x_2927->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2927->prev)->var_intrinsic_current_line_height, x_2927->var_intrinsic_height_external));
    } else {
      return (x_2927->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2927->var_line_break) {
      return x_2927->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2086(const auto &x_2956) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2957) {
    auto x_3608 = [&](const auto &x_2960) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2961) {
        if (x_2960->meta->pass_0_proc_inited) {
          x_2960->meta->bb_0_has_bb_dirtied = true;
          x_2960->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2960);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_2956->next == nullptr) {
      auto x_3610 = x_3608;
      OptionMatch(
          x_2956->parent, [&](const auto &x_2959) { return MakeUnit(); },
          [&](const auto &x_2958) {
            auto x_3612 = x_3610;
            x_3612(x_2958);
            return MakeUnit();
          });
    }
    auto x_3609 = [&](const auto &x_2964) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2965) {
        if (x_2964->meta->pass_0_proc_inited) {
          x_2964->meta->bb_0_has_bb_dirtied = true;
          x_2964->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2964);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2956->next, [&](const auto &x_2963) { return MakeUnit(); },
        [&](const auto &x_2962) {
          auto x_3611 = x_3609;
          x_3611(x_2962);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2083(const auto &x_2966) {
  if (x_2966->var_line_break) {
    return 0.;
  } else {
    return max(x_2966->var_intrinsic_height_external,
               (x_2966->prev != nullptr) ? ((x_2966->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_2081(const auto &x_2979) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2980) {
    auto x_3613 = [&](const auto &x_2983) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2984) {
        if (x_2983->meta->pass_0_proc_inited) {
          x_2983->meta->bb_0_has_bb_dirtied = true;
          x_2983->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_2983);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2979->next, [&](const auto &x_2982) { return MakeUnit(); },
        [&](const auto &x_2981) {
          auto x_3615 = x_3613;
          x_3615(x_2981);
          return MakeUnit();
        });
    auto x_3614 = [&](const auto &x_2987) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2988) {
        if (x_2987->meta->pass_1_proc_inited) {
          x_2987->meta->bb_2_has_bb_dirtied = true;
          x_2987->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_2987);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_2979->next == nullptr) {
      auto x_3616 = x_3614;
      OptionMatch(
          x_2979->parent, [&](const auto &x_2986) { return MakeUnit(); },
          [&](const auto &x_2985) {
            auto x_3617 = x_3616;
            x_3617(x_2985);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_2078(const auto &x_2989) {
  return plus((x_2989->prev != nullptr) ? ((x_2989->prev)->var_intrinsic_height_sum) : (0.),
              x_2989->var_intrinsic_height_external);
}
Unit var_modified_x_2076(const auto &x_2998) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2999) {
    auto x_3618 = [&](const auto &x_3000) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3001) {
        if (x_3000->meta->pass_0_proc_inited) {
          x_3000->meta->bb_0_has_bb_dirtied = true;
          x_3000->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3000);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3618(x_2998);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2073(const auto &x_3002) {
  if (eq(x_3002->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3002->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_2071(const auto &x_3011) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3012) {
    auto x_3619 = [&](const auto &x_3013) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3014) {
        if (x_3013->meta->pass_0_proc_inited) {
          x_3013->meta->bb_0_has_bb_dirtied = true;
          x_3013->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3013);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3619(x_3011);
    MakeUnit();
    auto x_3620 = [&](const auto &x_3015) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3016) {
        if (x_3015->meta->pass_1_proc_inited) {
          x_3015->meta->bb_2_has_bb_dirtied = true;
          x_3015->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_3015);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3620(x_3011);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2068(const auto &x_3017) {
  if (eq(x_3017->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3017->var_inside_svg) {
      return 0.;
    } else {
      if (x_3017->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3017->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3017->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_3017->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_3017->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3017->var_height_expr.r.a0;
          } else {
            if (x_3017->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_3017->var_height_expr.r.a0;
            } else {
              return x_3017->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_3017->var_children_intrinsic_height,
              (eq(x_3017->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_3017->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3017->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3017->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_3017->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3017->var_has_height_attr &&
                                                  (x_3017->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3017->var_height_attr_expr.r.a0)
                                                     : ((x_3017->has_attr_viewBox)
                                                            ? (x_3017->attr_viewBox.r.a3)
                                                            : (mult((x_3017->attr_viewBox.r.a3),
                                                                    divide(x_3017->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3017->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3017->var_has_height_attr)
                                                            ? (x_3017->var_height_attr_expr.r.a0)
                                                            : ((x_3017->has_attr_image_height &&
                                                                (!x_3017->var_has_width_attr))
                                                                   ? (int_to_float(x_3017->attr_image_height))
                                                                   : ((neq(x_3017->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3017->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3017->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_3017->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_3017->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_3017->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2066(const auto &x_3162) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3163) {
    auto x_3621 = [&](const auto &x_3164) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3165) {
        if (x_3164->meta->pass_1_proc_inited) {
          x_3164->meta->bb_2_has_bb_dirtied = true;
          x_3164->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_3164);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3621(x_3162);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2063(const auto &x_3166) {
  if (eq(x_3166->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3166->var_inside_svg || x_3166->var_disabled)) {
    return true;
  } else {
    if ((x_3166->parent != nullptr) && (x_3166->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3166->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3166->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3166->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3166->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_3166->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2061(const auto &x_3215) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3216) {
    auto x_3622 = [&](const auto &x_3217) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3218) {
        if (x_3217->meta->pass_0_proc_inited) {
          x_3217->meta->bb_0_has_bb_dirtied = true;
          x_3217->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3217);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3622(x_3215);
    MakeUnit();
    auto x_3623 = [&](const auto &x_3219) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3220) {
        if (x_3219->meta->pass_1_proc_inited) {
          x_3219->meta->bb_2_has_bb_dirtied = true;
          x_3219->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_3219);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3623(x_3215);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2058(const auto &x_3221) {
  if (x_3221->has_prop_height) {
    return x_3221->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_2056(const auto &x_3224) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3225) {
    auto x_3624 = [&](const auto &x_3226) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3227) {
        if (x_3226->meta->pass_0_proc_inited) {
          x_3226->meta->bb_0_has_bb_dirtied = true;
          x_3226->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3226);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3624(x_3224);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2053(const auto &x_3228) {
  if (x_3228->last != nullptr) {
    return plus((x_3228->last)->var_finished_intrinsic_height_sum, (x_3228->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2051(const auto &x_3237) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3238) {
    auto x_3625 = [&](const auto &x_3241) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3242) {
        if (x_3241->meta->pass_0_proc_inited) {
          x_3241->meta->bb_0_has_bb_dirtied = true;
          x_3241->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3241);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_3237->next, [&](const auto &x_3240) { return MakeUnit(); },
        [&](const auto &x_3239) {
          auto x_3627 = x_3625;
          x_3627(x_3239);
          return MakeUnit();
        });
    auto x_3626 = [&](const auto &x_3245) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3246) {
        if (x_3245->meta->pass_1_proc_inited) {
          x_3245->meta->bb_2_has_bb_dirtied = true;
          x_3245->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_3245);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_3237->next == nullptr) {
      auto x_3628 = x_3626;
      OptionMatch(
          x_3237->parent, [&](const auto &x_3244) { return MakeUnit(); },
          [&](const auto &x_3243) {
            auto x_3629 = x_3628;
            x_3629(x_3243);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_2048(const auto &x_3247) {
  return plus((x_3247->prev != nullptr) ? ((x_3247->prev)->var_intrinsic_width_sum) : (0.),
              x_3247->var_intrinsic_width_external);
}
Unit var_modified_x_2046(const auto &x_3256) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3257) {
    auto x_3630 = [&](const auto &x_3260) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3261) {
        if (x_3260->meta->pass_0_proc_inited) {
          x_3260->meta->bb_0_has_bb_dirtied = true;
          x_3260->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3260);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_3256->next == nullptr) {
      auto x_3632 = x_3630;
      OptionMatch(
          x_3256->parent, [&](const auto &x_3259) { return MakeUnit(); },
          [&](const auto &x_3258) {
            auto x_3634 = x_3632;
            x_3634(x_3258);
            return MakeUnit();
          });
    }
    auto x_3631 = [&](const auto &x_3264) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3265) {
        if (x_3264->meta->pass_0_proc_inited) {
          x_3264->meta->bb_0_has_bb_dirtied = true;
          x_3264->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3264);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_3256->next, [&](const auto &x_3263) { return MakeUnit(); },
        [&](const auto &x_3262) {
          auto x_3633 = x_3631;
          x_3633(x_3262);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2043(const auto &x_3266) {
  return max(x_3266->var_intrinsic_current_line_width,
             (x_3266->prev != nullptr) ? ((x_3266->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_2041(const auto &x_3275) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3276) {
    auto x_3635 = [&](const auto &x_3277) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3278) {
        if (x_3277->meta->pass_0_proc_inited) {
          x_3277->meta->bb_0_has_bb_dirtied = true;
          x_3277->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3277);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3635(x_3275);
    MakeUnit();
    auto x_3636 = [&](const auto &x_3281) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3282) {
        if (x_3281->meta->pass_0_proc_inited) {
          x_3281->meta->bb_0_has_bb_dirtied = true;
          x_3281->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3281);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_3275->next, [&](const auto &x_3280) { return MakeUnit(); },
        [&](const auto &x_3279) {
          auto x_3637 = x_3636;
          x_3637(x_3279);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2038(const auto &x_3283) {
  return plus(x_3283->var_intrinsic_width_external,
              ((x_3283->prev != nullptr) && (!(x_3283->prev)->var_line_break))
                  ? ((x_3283->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_2036(const auto &x_3296) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3297) {
    auto x_3638 = [&](const auto &x_3298) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3299) {
        if (x_3298->meta->pass_0_proc_inited) {
          x_3298->meta->bb_0_has_bb_dirtied = true;
          x_3298->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3298);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3638(x_3296);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2033(const auto &x_3300) {
  if (eq(x_3300->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3300->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_2031(const auto &x_3309) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3310) {
    auto x_3639 = [&](const auto &x_3311) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3312) {
        if (x_3311->meta->pass_0_proc_inited) {
          x_3311->meta->bb_0_has_bb_dirtied = true;
          x_3311->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3311);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3639(x_3309);
    MakeUnit();
    auto x_3640 = [&](const auto &x_3313) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3314) {
        if (x_3313->meta->pass_1_proc_inited) {
          x_3313->meta->bb_2_has_bb_dirtied = true;
          x_3313->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_3313);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3640(x_3309);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2028(const auto &x_3315) {
  if (eq(x_3315->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3315->var_inside_svg) {
      return 0.;
    } else {
      if (x_3315->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3315->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3315->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_3315->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_3315->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_3315->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_3315->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3315->var_width_expr.r.a0;
          } else {
            return x_3315->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_3315->var_children_intrinsic_width,
              (eq(x_3315->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_3315->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3315->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3315->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_3315->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3315->var_has_width_attr &&
                                                  (x_3315->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3315->var_width_attr_expr.r.a0)
                                                     : (((!x_3315->var_has_width_attr) && x_3315->has_attr_viewBox)
                                                            ? (x_3315->attr_viewBox.r.a2)
                                                            : (mult((x_3315->attr_viewBox.r.a2),
                                                                    divide(x_3315->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3315->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3315->var_has_width_attr)
                                                            ? (x_3315->var_width_attr_expr.r.a0)
                                                            : ((x_3315->has_attr_image_width &&
                                                                (!x_3315->var_has_height_attr))
                                                                   ? (int_to_float(x_3315->attr_image_width))
                                                                   : ((neq(x_3315->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3315->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3315->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_3315->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_3315->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_3315->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2026(const auto &x_3468) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3469) {
    auto x_3641 = [&](const auto &x_3470) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3471) {
        if (x_3470->meta->pass_0_proc_inited) {
          x_3470->meta->bb_0_has_bb_dirtied = true;
          x_3470->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3470);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3641(x_3468);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2023(const auto &x_3472) {
  if (x_3472->last != nullptr) {
    return (x_3472->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_2021(const auto &x_3477) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3478) {
    auto x_3642 = [&](const auto &x_3479) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3480) {
        if (x_3479->meta->pass_1_proc_inited) {
          x_3479->meta->bb_2_has_bb_dirtied = true;
          x_3479->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_3479);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3642(x_3477);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2018(const auto &x_3481) {
  if (eq(x_3481->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3481->var_inside_svg || x_3481->var_disabled)) {
    return true;
  } else {
    if ((x_3481->parent != nullptr) && (x_3481->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3481->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3481->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3481->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3481->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_3481->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2016(const auto &x_3530) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3531) {
    auto x_3643 = [&](const auto &x_3532) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3533) {
        if (x_3532->meta->pass_0_proc_inited) {
          x_3532->meta->bb_0_has_bb_dirtied = true;
          x_3532->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3532);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3643(x_3530);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2013(const auto &x_3534) {
  if (eq(x_3534->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_3534->var_inside_svg) {
      return true;
    } else {
      if (x_3534->var_disabled) {
        return true;
      } else {if ( eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_3534->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_2011(const auto &x_3547) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3548) {
    auto x_3644 = [&](const auto &x_3549) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3550) {
        if (x_3549->meta->pass_0_proc_inited) {
          x_3549->meta->bb_0_has_bb_dirtied = true;
          x_3549->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_3549);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3644(x_3547);
    MakeUnit();
    auto x_3645 = [&](const auto &x_3551) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3552) {
        if (x_3551->meta->pass_1_proc_inited) {
          x_3551->meta->bb_2_has_bb_dirtied = true;
          x_3551->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_3551);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3645(x_3547);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2008(const auto &x_3553) {
  if (x_3553->has_prop_width) {
    return x_3553->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_1937(const auto &x_2006) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2007) {
    WriteMetric();
    auto x_2009 = eval_expr_x_2008(x_2006);
    if (x_2006->has_var_width_expr) {
      auto x_2010 = x_2006->var_width_expr;
      if (!EqualValue(x_2010, x_2009)) {
        var_modified_x_2011(x_2006);
      }
    }
    x_2006->has_var_width_expr = true;
    x_2006->var_width_expr = AsDEString(x_2009);
    WriteMetric();
    auto x_2014 = eval_expr_x_2013(x_2006);
    if (x_2006->has_var_is_default_case) {
      auto x_2015 = x_2006->var_is_default_case;
      if (!EqualValue(x_2015, x_2014)) {
        var_modified_x_2016(x_2006);
      }
    }
    x_2006->has_var_is_default_case = true;
    x_2006->var_is_default_case = Asbool(x_2014);
    WriteMetric();
    auto x_2019 = eval_expr_x_2018(x_2006);
    if (x_2006->has_var_intrinsic_width_is_width) {
      auto x_2020 = x_2006->var_intrinsic_width_is_width;
      if (!EqualValue(x_2020, x_2019)) {
        var_modified_x_2021(x_2006);
      }
    }
    x_2006->has_var_intrinsic_width_is_width = true;
    x_2006->var_intrinsic_width_is_width = Asbool(x_2019);
    WriteMetric();
    auto x_2024 = eval_expr_x_2023(x_2006);
    if (x_2006->has_var_children_intrinsic_width) {
      auto x_2025 = x_2006->var_children_intrinsic_width;
      if (!EqualValue(x_2025, x_2024)) {
        var_modified_x_2026(x_2006);
      }
    }
    x_2006->has_var_children_intrinsic_width = true;
    x_2006->var_children_intrinsic_width = Asdouble(x_2024);
    WriteMetric();
    auto x_2029 = eval_expr_x_2028(x_2006);
    if (x_2006->has_var_intrinsic_width_internal) {
      auto x_2030 = x_2006->var_intrinsic_width_internal;
      if (!EqualValue(x_2030, x_2029)) {
        var_modified_x_2031(x_2006);
      }
    }
    x_2006->has_var_intrinsic_width_internal = true;
    x_2006->var_intrinsic_width_internal = Asdouble(x_2029);
    WriteMetric();
    auto x_2034 = eval_expr_x_2033(x_2006);
    if (x_2006->has_var_intrinsic_width_external) {
      auto x_2035 = x_2006->var_intrinsic_width_external;
      if (!EqualValue(x_2035, x_2034)) {
        var_modified_x_2036(x_2006);
      }
    }
    x_2006->has_var_intrinsic_width_external = true;
    x_2006->var_intrinsic_width_external = Asdouble(x_2034);
    WriteMetric();
    auto x_2039 = eval_expr_x_2038(x_2006);
    if (x_2006->has_var_intrinsic_current_line_width) {
      auto x_2040 = x_2006->var_intrinsic_current_line_width;
      if (!EqualValue(x_2040, x_2039)) {
        var_modified_x_2041(x_2006);
      }
    }
    x_2006->has_var_intrinsic_current_line_width = true;
    x_2006->var_intrinsic_current_line_width = Asdouble(x_2039);
    WriteMetric();
    auto x_2044 = eval_expr_x_2043(x_2006);
    if (x_2006->has_var_intrinsic_width_max) {
      auto x_2045 = x_2006->var_intrinsic_width_max;
      if (!EqualValue(x_2045, x_2044)) {
        var_modified_x_2046(x_2006);
      }
    }
    x_2006->has_var_intrinsic_width_max = true;
    x_2006->var_intrinsic_width_max = Asdouble(x_2044);
    WriteMetric();
    auto x_2049 = eval_expr_x_2048(x_2006);
    if (x_2006->has_var_intrinsic_width_sum) {
      auto x_2050 = x_2006->var_intrinsic_width_sum;
      if (!EqualValue(x_2050, x_2049)) {
        var_modified_x_2051(x_2006);
      }
    }
    x_2006->has_var_intrinsic_width_sum = true;
    x_2006->var_intrinsic_width_sum = Asdouble(x_2049);
    WriteMetric();
    auto x_2054 = eval_expr_x_2053(x_2006);
    if (x_2006->has_var_children_intrinsic_height) {
      auto x_2055 = x_2006->var_children_intrinsic_height;
      if (!EqualValue(x_2055, x_2054)) {
        var_modified_x_2056(x_2006);
      }
    }
    x_2006->has_var_children_intrinsic_height = true;
    x_2006->var_children_intrinsic_height = Asdouble(x_2054);
    WriteMetric();
    auto x_2059 = eval_expr_x_2058(x_2006);
    if (x_2006->has_var_height_expr) {
      auto x_2060 = x_2006->var_height_expr;
      if (!EqualValue(x_2060, x_2059)) {
        var_modified_x_2061(x_2006);
      }
    }
    x_2006->has_var_height_expr = true;
    x_2006->var_height_expr = AsDEString(x_2059);
    WriteMetric();
    auto x_2064 = eval_expr_x_2063(x_2006);
    if (x_2006->has_var_intrinsic_height_is_height) {
      auto x_2065 = x_2006->var_intrinsic_height_is_height;
      if (!EqualValue(x_2065, x_2064)) {
        var_modified_x_2066(x_2006);
      }
    }
    x_2006->has_var_intrinsic_height_is_height = true;
    x_2006->var_intrinsic_height_is_height = Asbool(x_2064);
    WriteMetric();
    auto x_2069 = eval_expr_x_2068(x_2006);
    if (x_2006->has_var_intrinsic_height_internal) {
      auto x_2070 = x_2006->var_intrinsic_height_internal;
      if (!EqualValue(x_2070, x_2069)) {
        var_modified_x_2071(x_2006);
      }
    }
    x_2006->has_var_intrinsic_height_internal = true;
    x_2006->var_intrinsic_height_internal = Asdouble(x_2069);
    WriteMetric();
    auto x_2074 = eval_expr_x_2073(x_2006);
    if (x_2006->has_var_intrinsic_height_external) {
      auto x_2075 = x_2006->var_intrinsic_height_external;
      if (!EqualValue(x_2075, x_2074)) {
        var_modified_x_2076(x_2006);
      }
    }
    x_2006->has_var_intrinsic_height_external = true;
    x_2006->var_intrinsic_height_external = Asdouble(x_2074);
    WriteMetric();
    auto x_2079 = eval_expr_x_2078(x_2006);
    if (x_2006->has_var_intrinsic_height_sum) {
      auto x_2080 = x_2006->var_intrinsic_height_sum;
      if (!EqualValue(x_2080, x_2079)) {
        var_modified_x_2081(x_2006);
      }
    }
    x_2006->has_var_intrinsic_height_sum = true;
    x_2006->var_intrinsic_height_sum = Asdouble(x_2079);
    WriteMetric();
    auto x_2084 = eval_expr_x_2083(x_2006);
    if (x_2006->has_var_intrinsic_current_line_height) {
      auto x_2085 = x_2006->var_intrinsic_current_line_height;
      if (!EqualValue(x_2085, x_2084)) {
        var_modified_x_2086(x_2006);
      }
    }
    x_2006->has_var_intrinsic_current_line_height = true;
    x_2006->var_intrinsic_current_line_height = Asdouble(x_2084);
    WriteMetric();
    auto x_2089 = eval_expr_x_2088(x_2006);
    if (x_2006->has_var_finished_intrinsic_height_sum) {
      auto x_2090 = x_2006->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_2090, x_2089)) {
        var_modified_x_2091(x_2006);
      }
    }
    x_2006->has_var_finished_intrinsic_height_sum = true;
    x_2006->var_finished_intrinsic_height_sum = Asdouble(x_2089);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1935(const auto &x_2093) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2094) {
    WriteMetric();
    auto x_2096 = eval_expr_x_2095(x_2093);
    if (x_2093->has_var_display) {
      auto x_2097 = x_2093->var_display;
      if (!EqualValue(x_2097, x_2096)) {
        var_modified_x_2098(x_2093);
      }
    }
    x_2093->has_var_display = true;
    x_2093->var_display = AsDEString(x_2096);
    WriteMetric();
    auto x_2101 = eval_expr_x_2100(x_2093);
    if (x_2093->has_var_position) {
      auto x_2102 = x_2093->var_position;
      if (!EqualValue(x_2102, x_2101)) {
        var_modified_x_2103(x_2093);
      }
    }
    x_2093->has_var_position = true;
    x_2093->var_position = AsDEString(x_2101);
    WriteMetric();
    auto x_2106 = eval_expr_x_2105(x_2093);
    if (x_2093->has_var_flex_grow) {
      auto x_2107 = x_2093->var_flex_grow;
      if (!EqualValue(x_2107, x_2106)) {
        var_modified_x_2108(x_2093);
      }
    }
    x_2093->has_var_flex_grow = true;
    x_2093->var_flex_grow = Asdouble(x_2106);
    WriteMetric();
    auto x_2111 = eval_expr_x_2110(x_2093);
    if (x_2093->has_var_flex_shrink) {
      auto x_2112 = x_2093->var_flex_shrink;
      if (!EqualValue(x_2112, x_2111)) {
        var_modified_x_2113(x_2093);
      }
    }
    x_2093->has_var_flex_shrink = true;
    x_2093->var_flex_shrink = Asdouble(x_2111);
    WriteMetric();
    auto x_2116 = eval_expr_x_2115(x_2093);
    if (x_2093->has_var_flex_grow_sum) {
      auto x_2117 = x_2093->var_flex_grow_sum;
      if (!EqualValue(x_2117, x_2116)) {
        var_modified_x_2118(x_2093);
      }
    }
    x_2093->has_var_flex_grow_sum = true;
    x_2093->var_flex_grow_sum = Asdouble(x_2116);
    WriteMetric();
    auto x_2121 = eval_expr_x_2120(x_2093);
    if (x_2093->has_var_flex_shrink_sum) {
      auto x_2122 = x_2093->var_flex_shrink_sum;
      if (!EqualValue(x_2122, x_2121)) {
        var_modified_x_2123(x_2093);
      }
    }
    x_2093->has_var_flex_shrink_sum = true;
    x_2093->var_flex_shrink_sum = Asdouble(x_2121);
    WriteMetric();
    auto x_2126 = eval_expr_x_2125(x_2093);
    if (x_2093->has_var_flex_direction) {
      auto x_2127 = x_2093->var_flex_direction;
      if (!EqualValue(x_2127, x_2126)) {
        var_modified_x_2128(x_2093);
      }
    }
    x_2093->has_var_flex_direction = true;
    x_2093->var_flex_direction = AsDEString(x_2126);
    WriteMetric();
    auto x_2131 = eval_expr_x_2130(x_2093);
    if (x_2093->has_var_is_flex_row) {
      auto x_2132 = x_2093->var_is_flex_row;
      if (!EqualValue(x_2132, x_2131)) {
        var_modified_x_2133(x_2093);
      }
    }
    x_2093->has_var_is_flex_row = true;
    x_2093->var_is_flex_row = Asbool(x_2131);
    WriteMetric();
    auto x_2136 = eval_expr_x_2135(x_2093);
    if (x_2093->has_var_is_flex_column) {
      auto x_2137 = x_2093->var_is_flex_column;
      if (!EqualValue(x_2137, x_2136)) {
        var_modified_x_2138(x_2093);
      }
    }
    x_2093->has_var_is_flex_column = true;
    x_2093->var_is_flex_column = Asbool(x_2136);
    WriteMetric();
    auto x_2141 = eval_expr_x_2140(x_2093);
    if (x_2093->has_var_width_attr_expr) {
      auto x_2142 = x_2093->var_width_attr_expr;
      if (!EqualValue(x_2142, x_2141)) {
        var_modified_x_2143(x_2093);
      }
    }
    x_2093->has_var_width_attr_expr = true;
    x_2093->var_width_attr_expr = AsDEString(x_2141);
    WriteMetric();
    auto x_2146 = eval_expr_x_2145(x_2093);
    if (x_2093->has_var_has_width_attr) {
      auto x_2147 = x_2093->var_has_width_attr;
      if (!EqualValue(x_2147, x_2146)) {
        var_modified_x_2148(x_2093);
      }
    }
    x_2093->has_var_has_width_attr = true;
    x_2093->var_has_width_attr = Asbool(x_2146);
    WriteMetric();
    auto x_2151 = eval_expr_x_2150(x_2093);
    if (x_2093->has_var_height_attr_expr) {
      auto x_2152 = x_2093->var_height_attr_expr;
      if (!EqualValue(x_2152, x_2151)) {
        var_modified_x_2153(x_2093);
      }
    }
    x_2093->has_var_height_attr_expr = true;
    x_2093->var_height_attr_expr = AsDEString(x_2151);
    WriteMetric();
    auto x_2156 = eval_expr_x_2155(x_2093);
    if (x_2093->has_var_has_height_attr) {
      auto x_2157 = x_2093->var_has_height_attr;
      if (!EqualValue(x_2157, x_2156)) {
        var_modified_x_2158(x_2093);
      }
    }
    x_2093->has_var_has_height_attr = true;
    x_2093->var_has_height_attr = Asbool(x_2156);
    WriteMetric();
    auto x_2161 = eval_expr_x_2160(x_2093);
    if (x_2093->has_var_is_svg_block) {
      auto x_2162 = x_2093->var_is_svg_block;
      if (!EqualValue(x_2162, x_2161)) {
        var_modified_x_2163(x_2093);
      }
    }
    x_2093->has_var_is_svg_block = true;
    x_2093->var_is_svg_block = Asbool(x_2161);
    WriteMetric();
    auto x_2166 = eval_expr_x_2165(x_2093);
    if (x_2093->has_var_inside_svg) {
      auto x_2167 = x_2093->var_inside_svg;
      if (!EqualValue(x_2167, x_2166)) {
        var_modified_x_2168(x_2093);
      }
    }
    x_2093->has_var_inside_svg = true;
    x_2093->var_inside_svg = Asbool(x_2166);
    WriteMetric();
    auto x_2171 = eval_expr_x_2170(x_2093);
    if (x_2093->has_var_disabled) {
      auto x_2172 = x_2093->var_disabled;
      if (!EqualValue(x_2172, x_2171)) {
        var_modified_x_2173(x_2093);
      }
    }
    x_2093->has_var_disabled = true;
    x_2093->var_disabled = Asbool(x_2171);
    WriteMetric();
    auto x_2176 = eval_expr_x_2175(x_2093);
    if (x_2093->has_var_visible) {
      auto x_2177 = x_2093->var_visible;
      if (!EqualValue(x_2177, x_2176)) {
        var_modified_x_2178(x_2093);
      }
    }
    x_2093->has_var_visible = true;
    x_2093->var_visible = Asbool(x_2176);
    WriteMetric();
    auto x_2181 = eval_expr_x_2180(x_2093);
    if (x_2093->has_var_line_break) {
      auto x_2182 = x_2093->var_line_break;
      if (!EqualValue(x_2182, x_2181)) {
        var_modified_x_2183(x_2093);
      }
    }
    x_2093->has_var_line_break = true;
    x_2093->var_line_break = Asbool(x_2181);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1931(const auto &x_2185) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2186) {
    WriteMetric();
    auto x_2188 = eval_expr_x_2187(x_2185);
    if (x_2185->has_var_box_width) {
      auto x_2189 = x_2185->var_box_width;
      if (!EqualValue(x_2189, x_2188)) {
        var_modified_x_2190(x_2185);
      }
    }
    x_2185->has_var_box_width = true;
    x_2185->var_box_width = Asdouble(x_2188);
    WriteMetric();
    auto x_2193 = eval_expr_x_2192(x_2185);
    if (x_2185->has_var_box_height) {
      auto x_2194 = x_2185->var_box_height;
      if (!EqualValue(x_2194, x_2193)) {
        var_modified_x_2195(x_2185);
      }
    }
    x_2185->has_var_box_height = true;
    x_2185->var_box_height = Asdouble(x_2193);
    WriteMetric();
    auto x_2198 = eval_expr_x_2197(x_2185);
    if (x_2185->has_var_left_over) {
      auto x_2199 = x_2185->var_left_over;
      if (!EqualValue(x_2199, x_2198)) {
        var_modified_x_2200(x_2185);
      }
    }
    x_2185->has_var_left_over = true;
    x_2185->var_left_over = Asdouble(x_2198);
    WriteMetric();
    auto x_2203 = eval_expr_x_2202(x_2185);
    if (x_2185->has_var_flex_amount) {
      auto x_2204 = x_2185->var_flex_amount;
      if (!EqualValue(x_2204, x_2203)) {
        var_modified_x_2205(x_2185);
      }
    }
    x_2185->has_var_flex_amount = true;
    x_2185->var_flex_amount = Asdouble(x_2203);
    WriteMetric();
    auto x_2208 = eval_expr_x_2207(x_2185);
    if (x_2185->has_var_flex_unit) {
      auto x_2209 = x_2185->var_flex_unit;
      if (!EqualValue(x_2209, x_2208)) {
        var_modified_x_2210(x_2185);
      }
    }
    x_2185->has_var_flex_unit = true;
    x_2185->var_flex_unit = Asdouble(x_2208);
    WriteMetric();
    auto x_2213 = eval_expr_x_2212(x_2185);
    if (x_2185->has_var_x) {
      auto x_2214 = x_2185->var_x;
      if (!EqualValue(x_2214, x_2213)) {
        var_modified_x_2215(x_2185);
      }
    }
    x_2185->has_var_x = true;
    x_2185->var_x = Asdouble(x_2213);
    WriteMetric();
    auto x_2218 = eval_expr_x_2217(x_2185);
    if (x_2185->has_var_width_internal) {
      auto x_2219 = x_2185->var_width_internal;
      if (!EqualValue(x_2219, x_2218)) {
        var_modified_x_2220(x_2185);
      }
    }
    x_2185->has_var_width_internal = true;
    x_2185->var_width_internal = Asdouble(x_2218);
    WriteMetric();
    auto x_2223 = eval_expr_x_2222(x_2185);
    if (x_2185->has_var_width_external) {
      auto x_2224 = x_2185->var_width_external;
      if (!EqualValue(x_2224, x_2223)) {
        var_modified_x_2225(x_2185);
      }
    }
    x_2185->has_var_width_external = true;
    x_2185->var_width_external = Asdouble(x_2223);
    WriteMetric();
    auto x_2228 = eval_expr_x_2227(x_2185);
    if (x_2185->has_var_y) {
      auto x_2229 = x_2185->var_y;
      if (!EqualValue(x_2229, x_2228)) {
        var_modified_x_2230(x_2185);
      }
    }
    x_2185->has_var_y = true;
    x_2185->var_y = Asdouble(x_2228);
    WriteMetric();
    auto x_2233 = eval_expr_x_2232(x_2185);
    if (x_2185->has_var_height_internal) {
      auto x_2234 = x_2185->var_height_internal;
      if (!EqualValue(x_2234, x_2233)) {
        var_modified_x_2235(x_2185);
      }
    }
    x_2185->has_var_height_internal = true;
    x_2185->var_height_internal = Asdouble(x_2233);
    WriteMetric();
    auto x_2238 = eval_expr_x_2237(x_2185);
    if (x_2185->has_var_height_external) {
      auto x_2239 = x_2185->var_height_external;
      if (!EqualValue(x_2239, x_2238)) {
        var_modified_x_2240(x_2185);
      }
    }
    x_2185->has_var_height_external = true;
    x_2185->var_height_external = Asdouble(x_2238);
    WriteMetric();
    auto x_2243 = eval_expr_x_2242(x_2185);
    if (x_2185->has_var_line_height) {
      auto x_2244 = x_2185->var_line_height;
      if (!EqualValue(x_2244, x_2243)) {
        var_modified_x_2245(x_2185);
      }
    }
    x_2185->has_var_line_height = true;
    x_2185->var_line_height = Asdouble(x_2243);
    return MakeUnit();
  })));
}
Unit x_2247(const auto &x_2248) {
  MetaWriteMetric();
  if (!x_2248->meta->pass_1_recursive_proc_dirtied) {
    x_2248->meta->pass_1_has_recursive_proc_dirtied = true;
    x_2248->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2248->parent, [&](const auto &x_2250) { return MakeUnit(); },
        [&](const auto &x_2249) { return x_2247(x_2249); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1868(const auto &x_2248) { return x_2247(x_2248); }
Unit x_2251(const auto &x_2252) {
  MetaWriteMetric();
  if (!x_2252->meta->pass_0_recursive_proc_dirtied) {
    x_2252->meta->pass_0_has_recursive_proc_dirtied = true;
    x_2252->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2252->parent, [&](const auto &x_2254) { return MakeUnit(); },
        [&](const auto &x_2253) { return x_2251(x_2253); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1776(const auto &x_2252) { return x_2251(x_2252); }
Unit x_1743(const auto &x_1744, const auto &x_1745, const auto &x_1746) {
  auto x_1747 = ListHeadExn(x_1744);
  auto x_1748 = ListTailExn(x_1744);
  if (ListIsEmpty(x_1748)) {
    auto x_1749 = ListSplitN(x_1745->children, x_1747);
    OutputChangeMetric(IntAdd(layout_size_x_1699(ListNthExn(x_1745->children, x_1747)), layout_size_x_1699(x_1746)));
    x_1745->children = ListAppend(Zro(x_1749), Cons(x_1746, ListTailExn(Fst(x_1749))));
    return MakeUnit();
  } else {
    return x_1743(x_1748, ListNthExn(x_1745->children, x_1747), x_1746);
  }
}
Unit replace_layout_node_x_1742(const auto &x_1744, const auto &x_1745, const auto &x_1746) {
  return x_1743(x_1744, x_1745, x_1746);
}
Unit x_1750(const auto &x_1751, const auto &x_1752, const auto &x_1753) {
  auto x_1754 = ListHeadExn(x_1751);
  auto x_1755 = ListTailExn(x_1751);
  if (ListIsEmpty(x_1755)) {
    OutputChangeMetric(layout_size_x_1699(x_1753));
    auto x_1756 = ListSplitN(x_1752->children, x_1754);
    x_1752->children = ListAppend(Zro(x_1756), Cons(x_1753, Fst(x_1756)));
    return MakeUnit();
  } else {
    return x_1750(x_1755, ListNthExn(x_1752->children, x_1754), x_1753);
  }
}
Unit add_layout_node_x_1740(const auto &x_1751, const auto &x_1752, const auto &x_1753) {
  return x_1750(x_1751, x_1752, x_1753);
}
Unit x_1757(const auto &x_1758, const auto &x_1759, const auto &x_1760) {
  auto x_1761 = ListHeadExn(x_1758);
  auto x_1762 = ListTailExn(x_1758);
  if (ListIsEmpty(x_1762)) {
    OutputChangeMetric(layout_size_x_1699(ListNthExn(x_1759->children, x_1761)));
    auto x_1763 = ListSplitN(x_1759->children, x_1761);
    x_1759->children = ListAppend(Zro(x_1763), ListTailExn(Fst(x_1763)));
    return MakeUnit();
  } else {
    return x_1757(x_1762, ListNthExn(x_1759->children, x_1761), x_1760);
  }
}
Unit remove_layout_node_x_1738(const auto &x_1758, const auto &x_1759, const auto &x_1760) {
  return x_1757(x_1758, x_1759, x_1760);
}
Unit x_1764(const auto &x_1765, const auto &x_1766, const auto &x_1767) {
  return ListMatch(
      x_1765,
      [&](const auto &x_1770) {
        auto x_1771 = Zro(x_1767);
        auto x_1772 = Zro(x_1771);
        auto x_1773 = Fst(x_1771);
        auto x_1774 = Fst(x_1767);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3646 = x_1772;
        if (x_3646 == "attributes") {
          std::string x_3647 = x_1773;
          if (x_3647 == "width") {
            WriteMetric();
            x_1766->has_attr_width = true;
            x_1766->attr_width = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1775) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_1_has_bb_dirtied = true;
                x_1766->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3647 == "image_height") {
            WriteMetric();
            x_1766->has_attr_image_height = true;
            x_1766->attr_image_height = Asint64_t(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1777) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_0_has_bb_dirtied = true;
                x_1766->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3647 == "image_width") {
            WriteMetric();
            x_1766->has_attr_image_width = true;
            x_1766->attr_image_width = Asint64_t(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1778) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_0_has_bb_dirtied = true;
                x_1766->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3647 == "height") {
            WriteMetric();
            x_1766->has_attr_height = true;
            x_1766->attr_height = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1779) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_1_has_bb_dirtied = true;
                x_1766->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3647 == "viewBox") {
            WriteMetric();
            x_1766->has_attr_viewBox = true;
            x_1766->attr_viewBox = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1780) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_0_has_bb_dirtied = true;
                x_1766->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3646 == "properties") {
          std::string x_3648 = x_1773;
          if (x_3648 == "width") {
            WriteMetric();
            x_1766->has_prop_width = true;
            x_1766->prop_width = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1781) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_0_has_bb_dirtied = true;
                x_1766->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3648 == "flex-grow") {
            WriteMetric();
            x_1766->has_prop_flex_grow = true;
            x_1766->prop_flex_grow = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1782) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_1_has_bb_dirtied = true;
                x_1766->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3648 == "height") {
            WriteMetric();
            x_1766->has_prop_height = true;
            x_1766->prop_height = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1783) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_0_has_bb_dirtied = true;
                x_1766->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3648 == "display") {
            WriteMetric();
            x_1766->has_prop_display = true;
            x_1766->prop_display = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1784) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_1_has_bb_dirtied = true;
                x_1766->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3648 == "position") {
            WriteMetric();
            x_1766->has_prop_position = true;
            x_1766->prop_position = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1785) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_1_has_bb_dirtied = true;
                x_1766->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3648 == "flex-shrink") {
            WriteMetric();
            x_1766->has_prop_flex_shrink = true;
            x_1766->prop_flex_shrink = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1786) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_1_has_bb_dirtied = true;
                x_1766->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3648 == "flex-direction") {
            WriteMetric();
            x_1766->has_prop_flex_direction = true;
            x_1766->prop_flex_direction = AsDEString(x_1774);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1787) {
              if (x_1766->meta->pass_0_proc_inited) {
                x_1766->meta->bb_1_has_bb_dirtied = true;
                x_1766->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1766);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1768, const auto &x_1769) {
        return x_1764(x_1769, ListNthExn(x_1766->children, x_1768), x_1767);
      });
}
Unit insert_value_x_1736(const auto &x_1765, const auto &x_1766, const auto &x_1767) {
  return x_1764(x_1765, x_1766, x_1767);
}
Unit x_1788(const auto &x_1789, const auto &x_1790, const auto &x_1791) {
  return ListMatch(
      x_1789,
      [&](const auto &x_1794) {
        auto x_1795 = Zro(x_1791);
        auto x_1796 = Fst(x_1791);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3649 = x_1795;
        if (x_3649 == "attributes") {
          std::string x_3650 = x_1796;
          if (x_3650 == "width") {
            WriteMetric();
            x_1790->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1797) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_1_has_bb_dirtied = true;
                x_1790->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3650 == "image_height") {
            WriteMetric();
            x_1790->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1798) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_0_has_bb_dirtied = true;
                x_1790->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3650 == "image_width") {
            WriteMetric();
            x_1790->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1799) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_0_has_bb_dirtied = true;
                x_1790->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3650 == "height") {
            WriteMetric();
            x_1790->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1800) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_1_has_bb_dirtied = true;
                x_1790->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3650 == "viewBox") {
            WriteMetric();
            x_1790->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1801) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_0_has_bb_dirtied = true;
                x_1790->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3649 == "properties") {
          std::string x_3651 = x_1796;
          if (x_3651 == "width") {
            WriteMetric();
            x_1790->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1802) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_0_has_bb_dirtied = true;
                x_1790->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3651 == "flex-grow") {
            WriteMetric();
            x_1790->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1803) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_1_has_bb_dirtied = true;
                x_1790->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3651 == "height") {
            WriteMetric();
            x_1790->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1804) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_0_has_bb_dirtied = true;
                x_1790->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3651 == "display") {
            WriteMetric();
            x_1790->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1805) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_1_has_bb_dirtied = true;
                x_1790->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3651 == "position") {
            WriteMetric();
            x_1790->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1806) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_1_has_bb_dirtied = true;
                x_1790->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3651 == "flex-shrink") {
            WriteMetric();
            x_1790->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1807) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_1_has_bb_dirtied = true;
                x_1790->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3651 == "flex-direction") {
            WriteMetric();
            x_1790->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1808) {
              if (x_1790->meta->pass_0_proc_inited) {
                x_1790->meta->bb_1_has_bb_dirtied = true;
                x_1790->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1790);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1792, const auto &x_1793) {
        return x_1788(x_1793, ListNthExn(x_1790->children, x_1792), x_1791);
      });
}
Unit delete_value_x_1734(const auto &x_1789, const auto &x_1790, const auto &x_1791) {
  return x_1788(x_1789, x_1790, x_1791);
}
Unit x_1809(const auto &x_1810, const auto &x_1811, const auto &x_1812) {
  return ListMatch(
      x_1810,
      [&](const auto &x_1815) {
        auto x_1816 = Zro(x_1812);
        auto x_1817 = Zro(x_1816);
        auto x_1818 = Fst(x_1816);
        auto x_1819 = Fst(x_1812);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3652 = x_1817;
        if (x_3652 == "attributes") {
          std::string x_3653 = x_1818;
          if (x_3653 == "width") {
            WriteMetric();
            x_1811->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1820) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_attr_width = true;
            x_1811->attr_width = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1821) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3653 == "image_height") {
            WriteMetric();
            x_1811->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1822) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_attr_image_height = true;
            x_1811->attr_image_height = Asint64_t(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1823) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3653 == "image_width") {
            WriteMetric();
            x_1811->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1824) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_attr_image_width = true;
            x_1811->attr_image_width = Asint64_t(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1825) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3653 == "height") {
            WriteMetric();
            x_1811->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1826) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_attr_height = true;
            x_1811->attr_height = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1827) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3653 == "viewBox") {
            WriteMetric();
            x_1811->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1828) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_attr_viewBox = true;
            x_1811->attr_viewBox = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1829) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3652 == "properties") {
          std::string x_3654 = x_1818;
          if (x_3654 == "width") {
            WriteMetric();
            x_1811->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1830) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_prop_width = true;
            x_1811->prop_width = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1831) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3654 == "flex-grow") {
            WriteMetric();
            x_1811->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1832) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_prop_flex_grow = true;
            x_1811->prop_flex_grow = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1833) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3654 == "height") {
            WriteMetric();
            x_1811->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1834) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_prop_height = true;
            x_1811->prop_height = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1835) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_0_has_bb_dirtied = true;
                x_1811->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3654 == "display") {
            WriteMetric();
            x_1811->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1836) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_prop_display = true;
            x_1811->prop_display = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1837) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3654 == "position") {
            WriteMetric();
            x_1811->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1838) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_prop_position = true;
            x_1811->prop_position = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1839) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3654 == "flex-shrink") {
            WriteMetric();
            x_1811->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1840) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_prop_flex_shrink = true;
            x_1811->prop_flex_shrink = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1841) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3654 == "flex-direction") {
            WriteMetric();
            x_1811->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1842) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1811->has_prop_flex_direction = true;
            x_1811->prop_flex_direction = AsDEString(x_1819);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1843) {
              if (x_1811->meta->pass_0_proc_inited) {
                x_1811->meta->bb_1_has_bb_dirtied = true;
                x_1811->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1776(x_1811);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1813, const auto &x_1814) {
        return x_1809(x_1814, ListNthExn(x_1811->children, x_1813), x_1812);
      });
}
Unit replace_value_x_1732(const auto &x_1810, const auto &x_1811, const auto &x_1812) {
  return x_1809(x_1810, x_1811, x_1812);
}
Unit x_1844(const auto &x_1845, const auto &x_1846, const auto &x_1847) {
  auto x_1848 = ListHeadExn(x_1845);
  auto x_1849 = ListTailExn(x_1845);
  if (ListIsEmpty(x_1849)) {
    InputChangeMetric(IntAdd(node_size_x_1700(ListNthExn(x_1846->children, x_1848)), node_size_x_1700(x_1847)));
    auto x_1850 = ListSplitN(x_1846->children, x_1848);
    auto x_1851 = Zro(x_1850);
    auto x_1852 = Fst(x_1850);
    auto x_1853 = ListHeadExn(x_1852);
    auto x_1854 = ListTailExn(x_1852);
    x_1846->children = ListAppend(x_1851, x_1854);
    OptionMatch(
        x_1853->prev, [&](const auto &x_1856) { return MakeUnit(); },
        [&](const auto &x_1855) {
          x_1855->next = ToPath(x_1853->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1853->next, [&](const auto &x_1858) { return MakeUnit(); },
        [&](const auto &x_1857) {
          x_1857->prev = ToPath(x_1853->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1851)) {
      x_1846->first = ToPath(ListHead(x_1854));
    }
    if (ListIsEmpty(x_1854)) {
      x_1846->last = ToPath(ListLast(x_1851));
    }
    OptionMatch(
        x_1853->next, [&](const auto &x_1861) { return MakeUnit(); },
        [&](const auto &x_1859) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1860) {
            if (x_1859->meta->pass_0_proc_inited) {
              x_1859->meta->bb_1_has_bb_dirtied = true;
              x_1859->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1859);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1846->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1862) {
        if (x_1846->meta->pass_0_proc_inited) {
          x_1846->meta->bb_0_has_bb_dirtied = true;
          x_1846->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1854)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1863) {
        if (x_1846->meta->pass_0_proc_inited) {
          x_1846->meta->bb_0_has_bb_dirtied = true;
          x_1846->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1853->next, [&](const auto &x_1866) { return MakeUnit(); },
        [&](const auto &x_1864) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1865) {
            if (x_1864->meta->pass_0_proc_inited) {
              x_1864->meta->bb_0_has_bb_dirtied = true;
              x_1864->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1864);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1846->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1867) {
        if (x_1846->meta->pass_1_proc_inited) {
          x_1846->meta->bb_2_has_bb_dirtied = true;
          x_1846->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1854)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1869) {
        if (x_1846->meta->pass_1_proc_inited) {
          x_1846->meta->bb_2_has_bb_dirtied = true;
          x_1846->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1853->next, [&](const auto &x_1872) { return MakeUnit(); },
        [&](const auto &x_1870) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1871) {
            if (x_1870->meta->pass_1_proc_inited) {
              x_1870->meta->bb_2_has_bb_dirtied = true;
              x_1870->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1868(x_1870);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MakeUnit();
    auto x_1873 = ListSplitN(x_1846->children, x_1848);
    auto x_1874 = Zro(x_1873);
    auto x_1875 = Fst(x_1873);
    x_1846->children = ListAppend(x_1874, Cons(x_1847, x_1875));
    if (ListIsEmpty(x_1874)) {
      x_1846->first = x_1847.get();
    }
    if (ListIsEmpty(x_1875)) {
      x_1846->last = x_1847.get();
    }
    OptionMatch(
        ListLast(x_1874),
        [&](const auto &x_1877) {
          x_1847->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1876) {
          x_1847->prev = x_1876.get();
          x_1876->next = x_1847.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1875),
        [&](const auto &x_1879) {
          x_1847->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1878) {
          x_1847->next = x_1878.get();
          x_1878->prev = x_1847.get();
          return MakeUnit();
        });
    x_1847->parent = x_1846.get();
    x_1847->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1847->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1776(x_1847);
    OptionMatch(
        x_1847->next, [&](const auto &x_1882) { return MakeUnit(); },
        [&](const auto &x_1880) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1881) {
            if (x_1880->meta->pass_0_proc_inited) {
              x_1880->meta->bb_1_has_bb_dirtied = true;
              x_1880->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1880);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsSingleton(x_1846->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1883) {
        if (x_1846->meta->pass_0_proc_inited) {
          x_1846->meta->bb_0_has_bb_dirtied = true;
          x_1846->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1875)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1884) {
        if (x_1846->meta->pass_0_proc_inited) {
          x_1846->meta->bb_0_has_bb_dirtied = true;
          x_1846->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1847->next, [&](const auto &x_1887) { return MakeUnit(); },
        [&](const auto &x_1885) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1886) {
            if (x_1885->meta->pass_0_proc_inited) {
              x_1885->meta->bb_0_has_bb_dirtied = true;
              x_1885->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1885);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    x_1847->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1847->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1868(x_1847);
    if (ListIsSingleton(x_1846->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1888) {
        if (x_1846->meta->pass_1_proc_inited) {
          x_1846->meta->bb_2_has_bb_dirtied = true;
          x_1846->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1875)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1889) {
        if (x_1846->meta->pass_1_proc_inited) {
          x_1846->meta->bb_2_has_bb_dirtied = true;
          x_1846->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1846);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1847->next, [&](const auto &x_1892) { return MakeUnit(); },
        [&](const auto &x_1890) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1891) {
            if (x_1890->meta->pass_1_proc_inited) {
              x_1890->meta->bb_2_has_bb_dirtied = true;
              x_1890->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1868(x_1890);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_1844(x_1849, ListNthExn(x_1846->children, x_1848), x_1847);
  }
}
Unit replace_node_x_1730(const auto &x_1845, const auto &x_1846, const auto &x_1847) {
  return x_1844(x_1845, x_1846, x_1847);
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
Unit set_children_relation_x_1728(const auto &x_1894) { return x_1893(x_1894); }
Unit x_1901(const auto &x_1902, const auto &x_1903, const auto &x_1904) {
  auto x_1905 = ListHeadExn(x_1902);
  auto x_1906 = ListTailExn(x_1902);
  if (ListIsEmpty(x_1906)) {
    InputChangeMetric(node_size_x_1700(ListNthExn(x_1903->children, x_1905)));
    auto x_1907 = ListSplitN(x_1903->children, x_1905);
    auto x_1908 = Zro(x_1907);
    auto x_1909 = Fst(x_1907);
    auto x_1910 = ListHeadExn(x_1909);
    auto x_1911 = ListTailExn(x_1909);
    x_1903->children = ListAppend(x_1908, x_1911);
    OptionMatch(
        x_1910->prev, [&](const auto &x_1913) { return MakeUnit(); },
        [&](const auto &x_1912) {
          x_1912->next = ToPath(x_1910->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1910->next, [&](const auto &x_1915) { return MakeUnit(); },
        [&](const auto &x_1914) {
          x_1914->prev = ToPath(x_1910->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1908)) {
      x_1903->first = ToPath(ListHead(x_1911));
    }
    if (ListIsEmpty(x_1911)) {
      x_1903->last = ToPath(ListLast(x_1908));
    }
    OptionMatch(
        x_1910->next, [&](const auto &x_1918) { return MakeUnit(); },
        [&](const auto &x_1916) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1917) {
            if (x_1916->meta->pass_0_proc_inited) {
              x_1916->meta->bb_1_has_bb_dirtied = true;
              x_1916->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1916);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1903->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1919) {
        if (x_1903->meta->pass_0_proc_inited) {
          x_1903->meta->bb_0_has_bb_dirtied = true;
          x_1903->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1903);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1911)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1920) {
        if (x_1903->meta->pass_0_proc_inited) {
          x_1903->meta->bb_0_has_bb_dirtied = true;
          x_1903->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1903);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1910->next, [&](const auto &x_1923) { return MakeUnit(); },
        [&](const auto &x_1921) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1922) {
            if (x_1921->meta->pass_0_proc_inited) {
              x_1921->meta->bb_0_has_bb_dirtied = true;
              x_1921->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1921);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1903->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1924) {
        if (x_1903->meta->pass_1_proc_inited) {
          x_1903->meta->bb_2_has_bb_dirtied = true;
          x_1903->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1903);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1911)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1925) {
        if (x_1903->meta->pass_1_proc_inited) {
          x_1903->meta->bb_2_has_bb_dirtied = true;
          x_1903->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1903);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1910->next, [&](const auto &x_1928) { return MakeUnit(); },
        [&](const auto &x_1926) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1927) {
            if (x_1926->meta->pass_1_proc_inited) {
              x_1926->meta->bb_2_has_bb_dirtied = true;
              x_1926->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1868(x_1926);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_1901(x_1906, ListNthExn(x_1903->children, x_1905), x_1904);
  }
}
Unit remove_node_x_1726(const auto &x_1902, const auto &x_1903, const auto &x_1904) {
  return x_1901(x_1902, x_1903, x_1904);
}
Unit x_1929(const auto &x_1930) {
  MetaReadMetric();
  if (x_1930->meta->pass_1_recursive_proc_dirtied) {
    if (x_1930->meta->pass_1_proc_inited) {
      if (x_1930->meta->bb_2_bb_dirtied) {
        eval_stmts_x_1931(x_1930);
        x_1930->meta->bb_2_has_bb_dirtied = true;
        x_1930->meta->bb_2_bb_dirtied = false;
      }
      ListIter(x_1930->children, [&](const auto &x_1932) { return x_1929(x_1932); });
      MakeUnit();
    } else {
      x_1930->meta->pass_1_proc_inited = true;
      eval_stmts_x_1715(x_1930);
    }
  }
  x_1930->meta->pass_1_has_recursive_proc_dirtied = true;
  x_1930->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1724(const auto &x_1930) { return x_1929(x_1930); }
Unit x_1933(const auto &x_1934) {
  MetaReadMetric();
  if (x_1934->meta->pass_0_recursive_proc_dirtied) {
    if (x_1934->meta->pass_0_proc_inited) {
      if (x_1934->meta->bb_1_bb_dirtied) {
        eval_stmts_x_1935(x_1934);
        x_1934->meta->bb_1_has_bb_dirtied = true;
        x_1934->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_1934->children, [&](const auto &x_1936) { return x_1933(x_1936); });
      if (x_1934->meta->bb_0_bb_dirtied) {
        eval_stmts_x_1937(x_1934);
        x_1934->meta->bb_0_has_bb_dirtied = true;
        x_1934->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1934->meta->pass_0_proc_inited = true;
      eval_stmts_x_1713(x_1934);
    }
  }
  x_1934->meta->pass_0_has_recursive_proc_dirtied = true;
  x_1934->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1723(const auto &x_1934) { return x_1933(x_1934); }
Unit x_1938(const auto &x_1939, const auto &x_1940, const auto &x_1941) {
  auto x_1942 = ListHeadExn(x_1939);
  auto x_1943 = ListTailExn(x_1939);
  if (ListIsEmpty(x_1943)) {
    InputChangeMetric(node_size_x_1700(x_1941));
    auto x_1944 = ListSplitN(x_1940->children, x_1942);
    auto x_1945 = Zro(x_1944);
    auto x_1946 = Fst(x_1944);
    x_1940->children = ListAppend(x_1945, Cons(x_1941, x_1946));
    if (ListIsEmpty(x_1945)) {
      x_1940->first = x_1941.get();
    }
    if (ListIsEmpty(x_1946)) {
      x_1940->last = x_1941.get();
    }
    OptionMatch(
        ListLast(x_1945),
        [&](const auto &x_1948) {
          x_1941->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1947) {
          x_1941->prev = x_1947.get();
          x_1947->next = x_1941.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1946),
        [&](const auto &x_1950) {
          x_1941->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1949) {
          x_1941->next = x_1949.get();
          x_1949->prev = x_1941.get();
          return MakeUnit();
        });
    x_1941->parent = x_1940.get();
    x_1941->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1941->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1776(x_1941);
    OptionMatch(
        x_1941->next, [&](const auto &x_1953) { return MakeUnit(); },
        [&](const auto &x_1951) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1952) {
            if (x_1951->meta->pass_0_proc_inited) {
              x_1951->meta->bb_1_has_bb_dirtied = true;
              x_1951->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1951);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsSingleton(x_1940->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1954) {
        if (x_1940->meta->pass_0_proc_inited) {
          x_1940->meta->bb_0_has_bb_dirtied = true;
          x_1940->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1940);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1946)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1955) {
        if (x_1940->meta->pass_0_proc_inited) {
          x_1940->meta->bb_0_has_bb_dirtied = true;
          x_1940->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1776(x_1940);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1941->next, [&](const auto &x_1958) { return MakeUnit(); },
        [&](const auto &x_1956) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1957) {
            if (x_1956->meta->pass_0_proc_inited) {
              x_1956->meta->bb_0_has_bb_dirtied = true;
              x_1956->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1776(x_1956);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    x_1941->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1941->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1868(x_1941);
    if (ListIsSingleton(x_1940->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1959) {
        if (x_1940->meta->pass_1_proc_inited) {
          x_1940->meta->bb_2_has_bb_dirtied = true;
          x_1940->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1940);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1946)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1960) {
        if (x_1940->meta->pass_1_proc_inited) {
          x_1940->meta->bb_2_has_bb_dirtied = true;
          x_1940->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1868(x_1940);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1941->next, [&](const auto &x_1963) { return MakeUnit(); },
        [&](const auto &x_1961) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1962) {
            if (x_1961->meta->pass_1_proc_inited) {
              x_1961->meta->bb_2_has_bb_dirtied = true;
              x_1961->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1868(x_1961);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_1938(x_1943, ListNthExn(x_1940->children, x_1942), x_1941);
  }
}
Unit add_node_x_1721(const auto &x_1939, const auto &x_1940, const auto &x_1941) {
  return x_1938(x_1939, x_1940, x_1941);
}
Unit x_1964(const auto &x_1965) {
  ListIter2(x_1965->children, [&](const auto &x_1966, const auto &x_1967) {
    x_1966->parent = x_1965.get();
    x_1967->parent = x_1965.get();
    x_1966->next = x_1967.get();
    x_1967->prev = x_1966.get();
    x_1964(x_1966);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1965->children),
      [&](const auto &x_1969) {
        x_1965->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1968) {
        x_1965->first = x_1968.get();
        x_1968->parent = x_1965.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1965->children),
      [&](const auto &x_1971) {
        x_1965->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1970) {
        x_1965->last = x_1970.get();
        x_1970->parent = x_1965.get();
        x_1964(x_1970);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1719(const auto &x_1965) { return x_1964(x_1965); }
Unit eval_stmts_x_1715(const auto &x_1972) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1973) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1974) {
      x_1972->meta->bb_2_has_bb_dirtied = true;
      x_1972->meta->bb_2_bb_dirtied = false;
      return eval_stmts_x_1931(x_1972);
    })));
    ListIter(x_1972->children, [&](const auto &x_1975) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1976) {
        x_1975->meta->pass_1_proc_inited = true;
        x_1975->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1975->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_1715(x_1975);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1713(const auto &x_1977) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1978) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1979) {
      x_1977->meta->bb_1_has_bb_dirtied = true;
      x_1977->meta->bb_1_bb_dirtied = false;
      return eval_stmts_x_1935(x_1977);
    })));
    ListIter(x_1977->children, [&](const auto &x_1980) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1981) {
        x_1980->meta->pass_0_proc_inited = true;
        x_1980->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1980->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_1713(x_1980);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1982) {
      x_1977->meta->bb_0_has_bb_dirtied = true;
      x_1977->meta->bb_0_bb_dirtied = false;
      return eval_stmts_x_1937(x_1977);
    })));
    return MakeUnit();
  })));
}
Unit x_1983(const auto &x_1984) {
  ListIter2(x_1984->children, [&](const auto &x_1985, const auto &x_1986) {
    x_1985->parent = x_1984.get();
    x_1986->parent = x_1984.get();
    x_1985->next = x_1986.get();
    x_1986->prev = x_1985.get();
    x_1983(x_1985);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1984->children),
      [&](const auto &x_1988) {
        x_1984->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1987) {
        x_1984->first = x_1987.get();
        x_1987->parent = x_1984.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1984->children),
      [&](const auto &x_1990) {
        x_1984->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1989) {
        x_1984->last = x_1989.get();
        x_1989->parent = x_1984.get();
        x_1983(x_1989);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1709(const auto &x_1984) { return x_1983(x_1984); }
int64_t x_1991(const auto &x_1992) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1992->children, [&](const auto &x_1993) { return x_1991(x_1993); }));
}
int64_t node_size_x_1700(const auto &x_1992) { return x_1991(x_1992); }
int64_t x_1994(const auto &x_1995) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1995->children, [&](const auto &x_1996) { return x_1994(x_1996); }));
}
int64_t layout_size_x_1699(const auto &x_1995) { return x_1994(x_1995); }
LayoutNode x_1997(const auto &x_1998) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_1998)), [&](const auto &x_1999) { return x_1997(x_1999); }));
}
LayoutNode json_to_layout_node_x_1698(const auto &x_1998) { return x_1997(x_1998); }
Node x_2000(const auto &x_2001) {
  return MakeNode(x_2001->name, x_2001->attr, x_2001->prop, x_2001->extern_id,
                  ListMap(x_2001->children, [&](const auto &x_2002) { return x_2000(x_2002); }));
}
Node node_to_fs_node_x_1697(const auto &x_2001) { return x_2000(x_2001); }
Node x_2003(const auto &x_2004) {
  return MakeNode(
      JsonToString(JsonMember("name", x_2004)), JsonToDict(JsonMember("attributes", x_2004)),
      JsonToDict(JsonMember("properties", x_2004)), JsonToInt(JsonMember("id", x_2004)),
      ListMap(JsonToList(JsonMember("children", x_2004)), [&](const auto &x_2005) { return x_2003(x_2005); }));
}
Node json_to_node_aux_x_1696(const auto &x_2004) { return x_2003(x_2004); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_1701) {
    PrintEndline("RUNNING DB_D");
    return WithInFile("command.json", [&](const auto &x_1702) {
      auto x_1703 = MakeRef(static_cast<int64_t>(0));
      auto x_1704 = FreshMetric();
      auto x_1705 = JsonOfString(InputLine(x_1702));
      auto x_1706 = JsonOfString(InputLine(x_1702));
      auto x_1707 = MakeStack();
      PushStack(x_1707, x_1705);
      PushStack(x_1707, x_1706);
      Assert(StringEqual(JsonToString(JsonMember("name", x_1705)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_1706)), "layout_init"));
      auto x_1710 = [&]() {
        auto x_1708 = json_to_node_aux_x_1696(JsonMember("node", x_1705));
        x_1708->parent = nullptr;
        x_1708->prev = nullptr;
        x_1708->next = nullptr;
        set_children_relation_x_1709(x_1708);
        return x_1708;
      }();
      auto x_1711 = json_to_layout_node_x_1698(JsonMember("node", x_1706));
      OutputChangeMetric(layout_size_x_1699(x_1711));
      InputChangeMetric(node_size_x_1700(x_1710));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1712) {
        x_1710->meta->pass_0_proc_inited = true;
        x_1710->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1710->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_1713(x_1710);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1714) {
        x_1710->meta->pass_1_proc_inited = true;
        x_1710->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1710->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_1715(x_1710);
        return MakeUnit();
      })));
      JsonToChannel(x_1701, [&]() {
        auto x_3655 = FreshJson();
        WriteJson(x_3655, "name", "DB_D");
        WriteJson(x_3655, "diff_num", ReadRef(x_1703));
        WriteJson(x_3655, "read_count", MetricReadCount());
        WriteJson(x_3655, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_3655, "write_count", MetricWriteCount());
        WriteJson(x_3655, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_3655, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_3655, "input_change_count", MetricInputChangeCount());
        WriteJson(x_3655, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_3655, "overhead_time", MetricOverheadCount());
        WriteJson(x_3655, "eval_time", MetricEvalCount());
        WriteJson(x_3655, "html", "");
        WriteJson(x_3655, "command", StackToList(x_1707));
        return x_3655;
      }());
      OutputString(x_1701, "\n");
      ClearStack(x_1707);
      WriteRef(x_1703, IntAdd(ReadRef(x_1703), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_1702, [&](const auto &x_1716) {
        auto x_1717 = JsonOfString(x_1716);
        PushStack(x_1707, x_1717);
        std::string x_3657 = JsonToString(JsonMember("name", x_1717));
        if (x_3657 == "add") {
          return add_node_x_1721(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1720) { return JsonToInt(x_1720); }),
              x_1710, [&]() {
                auto x_1718 = json_to_node_aux_x_1696(JsonMember("node", x_1717));
                x_1718->parent = nullptr;
                x_1718->prev = nullptr;
                x_1718->next = nullptr;
                set_children_relation_x_1719(x_1718);
                return x_1718;
              }());
        } else if (x_3657 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_1722) {
            recalculate_internal_x_1723(x_1710);
            recalculate_internal_x_1724(x_1710);
            return MakeUnit();
          })));
          JsonToChannel(x_1701, [&]() {
            auto x_3656 = FreshJson();
            WriteJson(x_3656, "name", "DB_D");
            WriteJson(x_3656, "diff_num", ReadRef(x_1703));
            WriteJson(x_3656, "read_count", MetricReadCount());
            WriteJson(x_3656, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_3656, "write_count", MetricWriteCount());
            WriteJson(x_3656, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_3656, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_3656, "input_change_count", MetricInputChangeCount());
            WriteJson(x_3656, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_3656, "overhead_time", MetricOverheadCount());
            WriteJson(x_3656, "eval_time", MetricEvalCount());
            WriteJson(x_3656, "html", "");
            WriteJson(x_3656, "command", StackToList(x_1707));
            return x_3656;
          }());
          OutputString(x_1701, "\n");
          ClearStack(x_1707);
          WriteRef(x_1703, IntAdd(ReadRef(x_1703), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_3657 == "remove") {
          return remove_node_x_1726(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1725) { return JsonToInt(x_1725); }),
              x_1710, MakeUnit());
        } else if (x_3657 == "replace") {
          return replace_node_x_1730(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1729) { return JsonToInt(x_1729); }),
              x_1710, [&]() {
                auto x_1727 = json_to_node_aux_x_1696(JsonMember("node", x_1717));
                x_1727->parent = nullptr;
                x_1727->prev = nullptr;
                x_1727->next = nullptr;
                set_children_relation_x_1728(x_1727);
                return x_1727;
              }());
        } else if (x_3657 == "replace_value") {
          return replace_value_x_1732(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1731) { return JsonToInt(x_1731); }),
              x_1710,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1717)), JsonToString(JsonMember("key", x_1717))),
                       JsonToValue(JsonMember("value", x_1717))));
        } else if (x_3657 == "delete_value") {
          return delete_value_x_1734(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1733) { return JsonToInt(x_1733); }),
              x_1710, MakePair(JsonToString(JsonMember("type", x_1717)), JsonToString(JsonMember("key", x_1717))));
        } else if (x_3657 == "insert_value") {
          return insert_value_x_1736(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1735) { return JsonToInt(x_1735); }),
              x_1710,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1717)), JsonToString(JsonMember("key", x_1717))),
                       JsonToValue(JsonMember("value", x_1717))));
        } else if (x_3657 == "layout_remove") {
          return remove_layout_node_x_1738(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1737) { return JsonToInt(x_1737); }),
              x_1711, MakeUnit());
        } else if (x_3657 == "layout_add") {
          return add_layout_node_x_1740(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1739) { return JsonToInt(x_1739); }),
              x_1711, json_to_layout_node_x_1698(JsonMember("node", x_1717)));
        } else if (x_3657 == "layout_replace") {
          return replace_layout_node_x_1742(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1741) { return JsonToInt(x_1741); }),
              x_1711, json_to_layout_node_x_1698(JsonMember("node", x_1717)));
        } else if (x_3657 == "layout_info_changed") {
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