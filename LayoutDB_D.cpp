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
Unit var_modified_x_2169(const auto &x_2179);
auto eval_expr_x_2166(const auto &x_2184);
Unit var_modified_x_2164(const auto &x_2201);
auto eval_expr_x_2161(const auto &x_2204);
Unit var_modified_x_2159(const auto &x_2213);
auto eval_expr_x_2156(const auto &x_2217);
Unit var_modified_x_2154(const auto &x_2270);
auto eval_expr_x_2151(const auto &x_2276);
Unit var_modified_x_2149(const auto &x_2301);
auto eval_expr_x_2146(const auto &x_2306);
Unit var_modified_x_2144(const auto &x_2315);
auto eval_expr_x_2141(const auto &x_2319);
Unit var_modified_x_2139(const auto &x_2372);
auto eval_expr_x_2136(const auto &x_2378);
Unit var_modified_x_2134(const auto &x_2399);
auto eval_expr_x_2131(const auto &x_2402);
Unit var_modified_x_2129(const auto &x_2423);
auto eval_expr_x_2126(const auto &x_2426);
Unit var_modified_x_2124(const auto &x_2439);
auto eval_expr_x_2121(const auto &x_2443);
Unit var_modified_x_2119(const auto &x_2464);
auto eval_expr_x_2116(const auto &x_2467);
Unit var_modified_x_2114(const auto &x_2472);
auto eval_expr_x_2111(const auto &x_2475);
Unit var_modified_x_2107(const auto &x_2480);
auto eval_expr_x_2104(const auto &x_2490);
Unit var_modified_x_2102(const auto &x_2567);
auto eval_expr_x_2099(const auto &x_2570);
Unit var_modified_x_2097(const auto &x_2587);
auto eval_expr_x_2094(const auto &x_2592);
Unit var_modified_x_2092(const auto &x_2597);
auto eval_expr_x_2089(const auto &x_2602);
Unit var_modified_x_2087(const auto &x_2611);
auto eval_expr_x_2084(const auto &x_2614);
Unit var_modified_x_2082(const auto &x_2615);
auto eval_expr_x_2079(const auto &x_2618);
Unit var_modified_x_2077(const auto &x_2623);
auto eval_expr_x_2074(const auto &x_2627);
Unit var_modified_x_2072(const auto &x_2638);
auto eval_expr_x_2069(const auto &x_2641);
Unit var_modified_x_2067(const auto &x_2646);
auto eval_expr_x_2064(const auto &x_2650);
Unit var_modified_x_2062(const auto &x_2661);
auto eval_expr_x_2059(const auto &x_2665);
Unit var_modified_x_2057(const auto &x_2690);
auto eval_expr_x_2054(const auto &x_2695);
Unit var_modified_x_2052(const auto &x_2720);
auto eval_expr_x_2049(const auto &x_2723);
Unit var_modified_x_2047(const auto &x_2726);
auto eval_expr_x_2044(const auto &x_2732);
Unit var_modified_x_2042(const auto &x_2741);
auto eval_expr_x_2039(const auto &x_2747);
Unit var_modified_x_2037(const auto &x_2756);
auto eval_expr_x_2034(const auto &x_2760);
Unit var_modified_x_2032(const auto &x_2763);
auto eval_expr_x_2029(const auto &x_2767);
Unit var_modified_x_2027(const auto &x_2770);
auto eval_expr_x_2024(const auto &x_2775);
Unit var_modified_x_2022(const auto &x_2778);
auto eval_expr_x_2019(const auto &x_2783);
Unit var_modified_x_2015(const auto &x_2786);
auto eval_expr_x_2012(const auto &x_2794);
Unit var_modified_x_2010(const auto &x_2823);
auto eval_expr_x_2007(const auto &x_2831);
Unit var_modified_x_2005(const auto &x_2844);
auto eval_expr_x_2002(const auto &x_2852);
Unit var_modified_x_2000(const auto &x_2861);
auto eval_expr_x_1997(const auto &x_2864);
Unit var_modified_x_1995(const auto &x_2873);
auto eval_expr_x_1992(const auto &x_2877);
Unit var_modified_x_1990(const auto &x_3022);
auto eval_expr_x_1987(const auto &x_3025);
Unit var_modified_x_1985(const auto &x_3074);
auto eval_expr_x_1982(const auto &x_3078);
Unit var_modified_x_1980(const auto &x_3081);
auto eval_expr_x_1977(const auto &x_3084);
Unit var_modified_x_1975(const auto &x_3093);
auto eval_expr_x_1972(const auto &x_3101);
Unit var_modified_x_1970(const auto &x_3110);
auto eval_expr_x_1967(const auto &x_3118);
Unit var_modified_x_1965(const auto &x_3127);
auto eval_expr_x_1962(const auto &x_3133);
Unit var_modified_x_1960(const auto &x_3146);
auto eval_expr_x_1957(const auto &x_3149);
Unit var_modified_x_1955(const auto &x_3158);
auto eval_expr_x_1952(const auto &x_3162);
Unit var_modified_x_1950(const auto &x_3315);
auto eval_expr_x_1947(const auto &x_3318);
Unit var_modified_x_1945(const auto &x_3323);
auto eval_expr_x_1942(const auto &x_3326);
Unit var_modified_x_1940(const auto &x_3375);
auto eval_expr_x_1937(const auto &x_3378);
Unit var_modified_x_1935(const auto &x_3391);
auto eval_expr_x_1932(const auto &x_3395);
Unit eval_stmts_x_1868(const auto &x_1930);
Unit eval_stmts_x_1866(const auto &x_2017);
Unit eval_stmts_x_1862(const auto &x_2109);
Unit x_2171(const auto &x_2172);
Unit x_2175(const auto &x_2176);
Unit x_1743(const auto &x_1744, const auto &x_1745, const auto &x_1746);
Unit x_1750(const auto &x_1751, const auto &x_1752, const auto &x_1753);
Unit x_1757(const auto &x_1758, const auto &x_1759, const auto &x_1760);
Unit x_1764(const auto &x_1765, const auto &x_1766, const auto &x_1767);
Unit x_1776(const auto &x_1777, const auto &x_1778, const auto &x_1779);
Unit x_1785(const auto &x_1786, const auto &x_1787, const auto &x_1788);
Unit x_1796(const auto &x_1797, const auto &x_1798, const auto &x_1799);
Unit x_1831(const auto &x_1832);
Unit x_1839(const auto &x_1840, const auto &x_1841, const auto &x_1842);
Unit x_1860(const auto &x_1861);
Unit x_1864(const auto &x_1865);
Unit x_1869(const auto &x_1870, const auto &x_1871, const auto &x_1872);
Unit x_1888(const auto &x_1889);
Unit eval_stmts_x_1715(const auto &x_1896);
Unit eval_stmts_x_1713(const auto &x_1901);
Unit x_1907(const auto &x_1908);
int64_t x_1915(const auto &x_1916);
int64_t x_1918(const auto &x_1919);
LayoutNode x_1921(const auto &x_1922);
Node x_1924(const auto &x_1925);
Node x_1927(const auto &x_1928);
Unit var_modified_x_2169(const auto &x_2179) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2180) {
    auto x_3398 = [&](const auto &x_2183) {
      if (x_2183->meta->pass_1_proc_inited) {
        x_2183->meta->bb_2_has_bb_dirtied = true;
        x_2183->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2183);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2179->next, [&](const auto &x_2182) { return MakeUnit(); },
        [&](const auto &x_2181) {
          auto x_3399 = x_3398;
          x_3399(x_2181);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2166(const auto &x_2184) {
  if ((x_2184->prev != nullptr) && (!(x_2184->prev)->var_line_break)) {
    return max(x_2184->var_height_external, (x_2184->prev)->var_line_height);
  } else {
    return x_2184->var_height_external;
  }
}
Unit var_modified_x_2164(const auto &x_2201) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2202) {
    auto x_3400 = [&](const auto &x_2203) {
      if (x_2203->meta->pass_1_proc_inited) {
        x_2203->meta->bb_2_has_bb_dirtied = true;
        x_2203->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2203);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3400(x_2201);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2161(const auto &x_2204) {
  if (eq(x_2204->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2204->var_height_internal;
  }
}
Unit var_modified_x_2159(const auto &x_2213) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2214) {
    auto x_3401 = [&](const auto &x_2215) {
      if (x_2215->meta->pass_1_proc_inited) {
        x_2215->meta->bb_2_has_bb_dirtied = true;
        x_2215->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2215);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3401(x_2213);
    MakeUnit();
    ListIter(x_2213->children, [&](const auto &x_2216) {
      if (x_2216->meta->pass_1_proc_inited) {
        x_2216->meta->bb_2_has_bb_dirtied = true;
        x_2216->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2216);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2156(const auto &x_2217) {
  if (x_2217->var_intrinsic_height_is_height) {
    return x_2217->var_intrinsic_height_internal;
  } else {
    if ((x_2217->parent != nullptr) && (x_2217->parent)->var_is_flex_column) {
      return plus(x_2217->var_intrinsic_height_internal,
                  mult(x_2217->var_flex_amount, (x_2217->parent)->var_flex_unit));
    } else {
      if (x_2217->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2217->var_box_height, divide(x_2217->var_height_expr.r.a0, 100.));
      } else {
        return max(x_2217->var_box_height, x_2217->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_2154(const auto &x_2270) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2271) {
    ListIter(x_2270->children, [&](const auto &x_2272) {
      if (x_2272->meta->pass_1_proc_inited) {
        x_2272->meta->bb_2_has_bb_dirtied = true;
        x_2272->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2272);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3402 = [&](const auto &x_2275) {
      if (x_2275->meta->pass_1_proc_inited) {
        x_2275->meta->bb_2_has_bb_dirtied = true;
        x_2275->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2275);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2270->next, [&](const auto &x_2274) { return MakeUnit(); },
        [&](const auto &x_2273) {
          auto x_3403 = x_3402;
          x_3403(x_2273);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2151(const auto &x_2276) {
  if (x_2276->prev != nullptr) {
    if (x_2276->var_line_break || (x_2276->prev)->var_line_break) {
      return plus((x_2276->prev)->var_y, (x_2276->prev)->var_line_height);
    } else {
      return (x_2276->prev)->var_y;
    }
  } else {
    if (x_2276->parent != nullptr) {
      return (x_2276->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2149(const auto &x_2301) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2302) {
    auto x_3404 = [&](const auto &x_2305) {
      if (x_2305->meta->pass_1_proc_inited) {
        x_2305->meta->bb_2_has_bb_dirtied = true;
        x_2305->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2305);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2301->next, [&](const auto &x_2304) { return MakeUnit(); },
        [&](const auto &x_2303) {
          auto x_3405 = x_3404;
          x_3405(x_2303);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2146(const auto &x_2306) {
  if (eq(x_2306->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2306->var_width_internal;
  }
}
Unit var_modified_x_2144(const auto &x_2315) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2316) {
    auto x_3406 = [&](const auto &x_2317) {
      if (x_2317->meta->pass_1_proc_inited) {
        x_2317->meta->bb_2_has_bb_dirtied = true;
        x_2317->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2317);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3406(x_2315);
    MakeUnit();
    ListIter(x_2315->children, [&](const auto &x_2318) {
      if (x_2318->meta->pass_1_proc_inited) {
        x_2318->meta->bb_2_has_bb_dirtied = true;
        x_2318->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2318);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2141(const auto &x_2319) {
  if (x_2319->var_intrinsic_width_is_width) {
    return x_2319->var_intrinsic_width_internal;
  } else {
    if ((x_2319->parent != nullptr) && (x_2319->parent)->var_is_flex_row) {
      return plus(x_2319->var_intrinsic_width_internal, mult(x_2319->var_flex_amount, (x_2319->parent)->var_flex_unit));
    } else {
      if (x_2319->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2319->var_box_width, divide(x_2319->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2319->var_box_width, x_2319->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_2139(const auto &x_2372) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2373) {
    ListIter(x_2372->children, [&](const auto &x_2374) {
      if (x_2374->meta->pass_1_proc_inited) {
        x_2374->meta->bb_2_has_bb_dirtied = true;
        x_2374->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2374);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3407 = [&](const auto &x_2377) {
      if (x_2377->meta->pass_1_proc_inited) {
        x_2377->meta->bb_2_has_bb_dirtied = true;
        x_2377->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2377);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2372->next, [&](const auto &x_2376) { return MakeUnit(); },
        [&](const auto &x_2375) {
          auto x_3408 = x_3407;
          x_3408(x_2375);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2136(const auto &x_2378) {
  if (x_2378->prev != nullptr) {
    if (x_2378->var_line_break || (x_2378->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2378->prev)->var_x, (x_2378->prev)->var_width_external);
    }
  } else {
    if (x_2378->parent != nullptr) {
      return (x_2378->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2134(const auto &x_2399) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2400) {
    ListIter(x_2399->children, [&](const auto &x_2401) {
      if (x_2401->meta->pass_1_proc_inited) {
        x_2401->meta->bb_2_has_bb_dirtied = true;
        x_2401->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2401);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2131(const auto &x_2402) {
  if (gt(x_2402->var_left_over, 0.)) {
    return divide(x_2402->var_left_over, x_2402->var_flex_grow_sum);
  } else {
    return divide(x_2402->var_left_over, x_2402->var_flex_shrink_sum);
  }
}
Unit var_modified_x_2129(const auto &x_2423) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2424) {
    auto x_3409 = [&](const auto &x_2425) {
      if (x_2425->meta->pass_1_proc_inited) {
        x_2425->meta->bb_2_has_bb_dirtied = true;
        x_2425->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2425);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3409(x_2423);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2126(const auto &x_2426) {
  if ((x_2426->parent != nullptr) && gt((x_2426->parent)->var_left_over, 0.)) {
    return x_2426->var_flex_grow;
  } else {
    return x_2426->var_flex_shrink;
  }
}
Unit var_modified_x_2124(const auto &x_2439) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2440) {
    auto x_3410 = [&](const auto &x_2441) {
      if (x_2441->meta->pass_1_proc_inited) {
        x_2441->meta->bb_2_has_bb_dirtied = true;
        x_2441->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2441);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3410(x_2439);
    MakeUnit();
    ListIter(x_2439->children, [&](const auto &x_2442) {
      if (x_2442->meta->pass_1_proc_inited) {
        x_2442->meta->bb_2_has_bb_dirtied = true;
        x_2442->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2442);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2121(const auto &x_2443) {
  if (x_2443->var_is_flex_row) {
    return minus(x_2443->var_box_width, (x_2443->last != nullptr) ? ((x_2443->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2443->var_box_height, (x_2443->last != nullptr) ? ((x_2443->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_2119(const auto &x_2464) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2465) {
    auto x_3411 = [&](const auto &x_2466) {
      if (x_2466->meta->pass_1_proc_inited) {
        x_2466->meta->bb_2_has_bb_dirtied = true;
        x_2466->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2466);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3411(x_2464);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2116(const auto &x_2467) {
  if (x_2467->parent != nullptr) {
    return (x_2467->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_2114(const auto &x_2472) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2473) {
    auto x_3412 = [&](const auto &x_2474) {
      if (x_2474->meta->pass_1_proc_inited) {
        x_2474->meta->bb_2_has_bb_dirtied = true;
        x_2474->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2474);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3412(x_2472);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2111(const auto &x_2475) {
  if (x_2475->parent != nullptr) {
    return (x_2475->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_2107(const auto &x_2480) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2481) {
    auto x_3413 = [&](const auto &x_2482) {
      if (x_2482->meta->pass_0_proc_inited) {
        x_2482->meta->bb_0_has_bb_dirtied = true;
        x_2482->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2482);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3413(x_2480);
    MakeUnit();
    auto x_3414 = [&](const auto &x_2485) {
      if (x_2485->meta->pass_0_proc_inited) {
        x_2485->meta->bb_0_has_bb_dirtied = true;
        x_2485->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2485);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2480->next, [&](const auto &x_2484) { return MakeUnit(); },
        [&](const auto &x_2483) {
          auto x_3417 = x_3414;
          x_3417(x_2483);
          return MakeUnit();
        });
    auto x_3415 = [&](const auto &x_2486) {
      if (x_2486->meta->pass_1_proc_inited) {
        x_2486->meta->bb_2_has_bb_dirtied = true;
        x_2486->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2486);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3415(x_2480);
    MakeUnit();
    auto x_3416 = [&](const auto &x_2489) {
      if (x_2489->meta->pass_1_proc_inited) {
        x_2489->meta->bb_2_has_bb_dirtied = true;
        x_2489->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2489);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2480->next, [&](const auto &x_2488) { return MakeUnit(); },
        [&](const auto &x_2487) {
          auto x_3418 = x_3416;
          x_3418(x_2487);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2104(const auto &x_2490) {
  if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_2490->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_2490->parent != nullptr) &&
          (eq((x_2490->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_2490->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_2490->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_2490->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_2490->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_2102(const auto &x_2567) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2568) {
    ListIter(x_2567->children, [&](const auto &x_2569) {
      if (x_2569->meta->pass_0_proc_inited) {
        x_2569->meta->bb_1_has_bb_dirtied = true;
        x_2569->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2569);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2099(const auto &x_2570) {
  return (((!(x_2570->parent != nullptr)) || (x_2570->parent)->var_visible) &&
          (neq(x_2570->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_2570->var_inside_svg) && (!x_2570->var_disabled))));
}
Unit var_modified_x_2097(const auto &x_2587) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2588) {
    auto x_3419 = [&](const auto &x_2589) {
      if (x_2589->meta->pass_0_proc_inited) {
        x_2589->meta->bb_1_has_bb_dirtied = true;
        x_2589->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2589);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3419(x_2587);
    MakeUnit();
    ListIter(x_2587->children, [&](const auto &x_2590) {
      if (x_2590->meta->pass_0_proc_inited) {
        x_2590->meta->bb_1_has_bb_dirtied = true;
        x_2590->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2590);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3420 = [&](const auto &x_2591) {
      if (x_2591->meta->pass_0_proc_inited) {
        x_2591->meta->bb_0_has_bb_dirtied = true;
        x_2591->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2591);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3420(x_2587);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2094(const auto &x_2592) {
  if (eq(x_2592->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_2592->parent != nullptr) && (x_2592->parent)->var_disabled);
  }
}
Unit var_modified_x_2092(const auto &x_2597) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2598) {
    auto x_3421 = [&](const auto &x_2599) {
      if (x_2599->meta->pass_0_proc_inited) {
        x_2599->meta->bb_1_has_bb_dirtied = true;
        x_2599->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2599);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3421(x_2597);
    MakeUnit();
    ListIter(x_2597->children, [&](const auto &x_2600) {
      if (x_2600->meta->pass_0_proc_inited) {
        x_2600->meta->bb_1_has_bb_dirtied = true;
        x_2600->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2600);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3422 = [&](const auto &x_2601) {
      if (x_2601->meta->pass_0_proc_inited) {
        x_2601->meta->bb_0_has_bb_dirtied = true;
        x_2601->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2601);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3422(x_2597);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2089(const auto &x_2602) {
  return ((x_2602->parent != nullptr) && ((x_2602->parent)->var_is_svg_block || (x_2602->parent)->var_inside_svg));
}
Unit var_modified_x_2087(const auto &x_2611) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2612) {
    ListIter(x_2611->children, [&](const auto &x_2613) {
      if (x_2613->meta->pass_0_proc_inited) {
        x_2613->meta->bb_1_has_bb_dirtied = true;
        x_2613->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2613);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2084(const auto &x_2614) { return eq(x_2614->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_2082(const auto &x_2615) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2616) {
    auto x_3423 = [&](const auto &x_2617) {
      if (x_2617->meta->pass_0_proc_inited) {
        x_2617->meta->bb_0_has_bb_dirtied = true;
        x_2617->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2617);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3423(x_2615);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2079(const auto &x_2618) {
  return neq(x_2618->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2077(const auto &x_2623) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2624) {
    auto x_3424 = [&](const auto &x_2625) {
      if (x_2625->meta->pass_0_proc_inited) {
        x_2625->meta->bb_1_has_bb_dirtied = true;
        x_2625->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2625);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3424(x_2623);
    MakeUnit();
    auto x_3425 = [&](const auto &x_2626) {
      if (x_2626->meta->pass_0_proc_inited) {
        x_2626->meta->bb_0_has_bb_dirtied = true;
        x_2626->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2626);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3425(x_2623);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2074(const auto &x_2627) {
  if (!x_2627->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2627->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_2627->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2627->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2072(const auto &x_2638) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2639) {
    auto x_3426 = [&](const auto &x_2640) {
      if (x_2640->meta->pass_0_proc_inited) {
        x_2640->meta->bb_0_has_bb_dirtied = true;
        x_2640->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2640);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3426(x_2638);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2069(const auto &x_2641) {
  return neq(x_2641->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2067(const auto &x_2646) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2647) {
    auto x_3427 = [&](const auto &x_2648) {
      if (x_2648->meta->pass_0_proc_inited) {
        x_2648->meta->bb_1_has_bb_dirtied = true;
        x_2648->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2648);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3427(x_2646);
    MakeUnit();
    auto x_3428 = [&](const auto &x_2649) {
      if (x_2649->meta->pass_0_proc_inited) {
        x_2649->meta->bb_0_has_bb_dirtied = true;
        x_2649->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2649);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3428(x_2646);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2064(const auto &x_2650) {
  if (!x_2650->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2650->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_2650->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2650->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2062(const auto &x_2661) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2662) {
    ListIter(x_2661->children, [&](const auto &x_2663) {
      if (x_2663->meta->pass_0_proc_inited) {
        x_2663->meta->bb_0_has_bb_dirtied = true;
        x_2663->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2663);
      } else {
        return MetaWriteMetric();
      }
    });
    ListIter(x_2661->children, [&](const auto &x_2664) {
      if (x_2664->meta->pass_1_proc_inited) {
        x_2664->meta->bb_2_has_bb_dirtied = true;
        x_2664->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2664);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2059(const auto &x_2665) {
  if ((x_2665->parent != nullptr) &&
      (eq((x_2665->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2665->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2665->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_2665->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2057(const auto &x_2690) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2691) {
    ListIter(x_2690->children, [&](const auto &x_2692) {
      if (x_2692->meta->pass_0_proc_inited) {
        x_2692->meta->bb_0_has_bb_dirtied = true;
        x_2692->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2692);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3429 = [&](const auto &x_2693) {
      if (x_2693->meta->pass_1_proc_inited) {
        x_2693->meta->bb_2_has_bb_dirtied = true;
        x_2693->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2693);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3429(x_2690);
    MakeUnit();
    ListIter(x_2690->children, [&](const auto &x_2694) {
      if (x_2694->meta->pass_1_proc_inited) {
        x_2694->meta->bb_2_has_bb_dirtied = true;
        x_2694->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2694);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2054(const auto &x_2695) {
  if ((x_2695->parent != nullptr) &&
      (eq((x_2695->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2695->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2695->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2052(const auto &x_2720) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2721) {
    ListIter(x_2720->children, [&](const auto &x_2722) {
      if (x_2722->meta->pass_0_proc_inited) {
        x_2722->meta->bb_1_has_bb_dirtied = true;
        x_2722->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2722);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2049(const auto &x_2723) {
  if (x_2723->has_prop_flex_direction) {
    return x_2723->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_2047(const auto &x_2726) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2727) {
    auto x_3430 = [&](const auto &x_2730) {
      if (x_2730->meta->pass_0_proc_inited) {
        x_2730->meta->bb_1_has_bb_dirtied = true;
        x_2730->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2730);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2726->next, [&](const auto &x_2729) { return MakeUnit(); },
        [&](const auto &x_2728) {
          auto x_3432 = x_3430;
          x_3432(x_2728);
          return MakeUnit();
        });
    auto x_3431 = [&](const auto &x_2731) {
      if (x_2731->meta->pass_1_proc_inited) {
        x_2731->meta->bb_2_has_bb_dirtied = true;
        x_2731->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2731);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3431(x_2726);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2044(const auto &x_2732) {
  return plus((x_2732->prev != nullptr) ? ((x_2732->prev)->var_flex_shrink_sum) : (0.), x_2732->var_flex_shrink);
}
Unit var_modified_x_2042(const auto &x_2741) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2742) {
    auto x_3433 = [&](const auto &x_2745) {
      if (x_2745->meta->pass_0_proc_inited) {
        x_2745->meta->bb_1_has_bb_dirtied = true;
        x_2745->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2745);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2741->next, [&](const auto &x_2744) { return MakeUnit(); },
        [&](const auto &x_2743) {
          auto x_3435 = x_3433;
          x_3435(x_2743);
          return MakeUnit();
        });
    auto x_3434 = [&](const auto &x_2746) {
      if (x_2746->meta->pass_1_proc_inited) {
        x_2746->meta->bb_2_has_bb_dirtied = true;
        x_2746->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2746);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3434(x_2741);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2039(const auto &x_2747) {
  return plus((x_2747->prev != nullptr) ? ((x_2747->prev)->var_flex_grow_sum) : (0.), x_2747->var_flex_grow);
}
Unit var_modified_x_2037(const auto &x_2756) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2757) {
    auto x_3436 = [&](const auto &x_2758) {
      if (x_2758->meta->pass_0_proc_inited) {
        x_2758->meta->bb_1_has_bb_dirtied = true;
        x_2758->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2758);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3436(x_2756);
    MakeUnit();
    auto x_3437 = [&](const auto &x_2759) {
      if (x_2759->meta->pass_1_proc_inited) {
        x_2759->meta->bb_2_has_bb_dirtied = true;
        x_2759->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2759);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3437(x_2756);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2034(const auto &x_2760) {
  if (x_2760->has_prop_flex_shrink) {
    return (x_2760->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2032(const auto &x_2763) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2764) {
    auto x_3438 = [&](const auto &x_2765) {
      if (x_2765->meta->pass_0_proc_inited) {
        x_2765->meta->bb_1_has_bb_dirtied = true;
        x_2765->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2765);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3438(x_2763);
    MakeUnit();
    auto x_3439 = [&](const auto &x_2766) {
      if (x_2766->meta->pass_1_proc_inited) {
        x_2766->meta->bb_2_has_bb_dirtied = true;
        x_2766->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2766);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3439(x_2763);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2029(const auto &x_2767) {
  if (x_2767->has_prop_flex_grow) {
    return (x_2767->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2027(const auto &x_2770) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2771) {
    auto x_3440 = [&](const auto &x_2772) {
      if (x_2772->meta->pass_0_proc_inited) {
        x_2772->meta->bb_1_has_bb_dirtied = true;
        x_2772->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2772);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3440(x_2770);
    MakeUnit();
    auto x_3441 = [&](const auto &x_2773) {
      if (x_2773->meta->pass_0_proc_inited) {
        x_2773->meta->bb_0_has_bb_dirtied = true;
        x_2773->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2773);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3441(x_2770);
    MakeUnit();
    auto x_3442 = [&](const auto &x_2774) {
      if (x_2774->meta->pass_1_proc_inited) {
        x_2774->meta->bb_2_has_bb_dirtied = true;
        x_2774->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2774);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3442(x_2770);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2024(const auto &x_2775) {
  if (x_2775->has_prop_position) {
    return x_2775->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_2022(const auto &x_2778) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2779) {
    auto x_3443 = [&](const auto &x_2780) {
      if (x_2780->meta->pass_0_proc_inited) {
        x_2780->meta->bb_1_has_bb_dirtied = true;
        x_2780->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2780);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3443(x_2778);
    MakeUnit();
    ListIter(x_2778->children, [&](const auto &x_2781) {
      if (x_2781->meta->pass_0_proc_inited) {
        x_2781->meta->bb_1_has_bb_dirtied = true;
        x_2781->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2781);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_3444 = [&](const auto &x_2782) {
      if (x_2782->meta->pass_0_proc_inited) {
        x_2782->meta->bb_0_has_bb_dirtied = true;
        x_2782->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2782);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3444(x_2778);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2019(const auto &x_2783) {
  if (x_2783->has_prop_display) {
    return x_2783->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_2015(const auto &x_2786) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2787) {
    auto x_3445 = [&](const auto &x_2790) {
      if (x_2790->meta->pass_0_proc_inited) {
        x_2790->meta->bb_0_has_bb_dirtied = true;
        x_2790->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2790);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_2786->next == nullptr) {
      auto x_3447 = x_3445;
      OptionMatch(
          x_2786->parent, [&](const auto &x_2789) { return MakeUnit(); },
          [&](const auto &x_2788) {
            auto x_3449 = x_3447;
            x_3449(x_2788);
            return MakeUnit();
          });
    }
    auto x_3446 = [&](const auto &x_2793) {
      if (x_2793->meta->pass_0_proc_inited) {
        x_2793->meta->bb_0_has_bb_dirtied = true;
        x_2793->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2793);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2786->next, [&](const auto &x_2792) { return MakeUnit(); },
        [&](const auto &x_2791) {
          auto x_3448 = x_3446;
          x_3448(x_2791);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2012(const auto &x_2794) {
  if (x_2794->prev != nullptr) {
    if (x_2794->var_line_break) {
      return plus((x_2794->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2794->prev)->var_intrinsic_current_line_height, x_2794->var_intrinsic_height_external));
    } else {
      return (x_2794->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2794->var_line_break) {
      return x_2794->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2010(const auto &x_2823) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2824) {
    auto x_3450 = [&](const auto &x_2827) {
      if (x_2827->meta->pass_0_proc_inited) {
        x_2827->meta->bb_0_has_bb_dirtied = true;
        x_2827->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2827);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_2823->next == nullptr) {
      auto x_3452 = x_3450;
      OptionMatch(
          x_2823->parent, [&](const auto &x_2826) { return MakeUnit(); },
          [&](const auto &x_2825) {
            auto x_3454 = x_3452;
            x_3454(x_2825);
            return MakeUnit();
          });
    }
    auto x_3451 = [&](const auto &x_2830) {
      if (x_2830->meta->pass_0_proc_inited) {
        x_2830->meta->bb_0_has_bb_dirtied = true;
        x_2830->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2830);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2823->next, [&](const auto &x_2829) { return MakeUnit(); },
        [&](const auto &x_2828) {
          auto x_3453 = x_3451;
          x_3453(x_2828);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2007(const auto &x_2831) {
  if (x_2831->var_line_break) {
    return 0.;
  } else {
    return max(x_2831->var_intrinsic_height_external,
               (x_2831->prev != nullptr) ? ((x_2831->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_2005(const auto &x_2844) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2845) {
    auto x_3455 = [&](const auto &x_2848) {
      if (x_2848->meta->pass_0_proc_inited) {
        x_2848->meta->bb_0_has_bb_dirtied = true;
        x_2848->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2848);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_2844->next, [&](const auto &x_2847) { return MakeUnit(); },
        [&](const auto &x_2846) {
          auto x_3457 = x_3455;
          x_3457(x_2846);
          return MakeUnit();
        });
    auto x_3456 = [&](const auto &x_2851) {
      if (x_2851->meta->pass_1_proc_inited) {
        x_2851->meta->bb_2_has_bb_dirtied = true;
        x_2851->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2851);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_2844->next == nullptr) {
      auto x_3458 = x_3456;
      OptionMatch(
          x_2844->parent, [&](const auto &x_2850) { return MakeUnit(); },
          [&](const auto &x_2849) {
            auto x_3459 = x_3458;
            x_3459(x_2849);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_2002(const auto &x_2852) {
  return plus((x_2852->prev != nullptr) ? ((x_2852->prev)->var_intrinsic_height_sum) : (0.),
              x_2852->var_intrinsic_height_external);
}
Unit var_modified_x_2000(const auto &x_2861) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2862) {
    auto x_3460 = [&](const auto &x_2863) {
      if (x_2863->meta->pass_0_proc_inited) {
        x_2863->meta->bb_0_has_bb_dirtied = true;
        x_2863->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2863);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3460(x_2861);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1997(const auto &x_2864) {
  if (eq(x_2864->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2864->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_1995(const auto &x_2873) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2874) {
    auto x_3461 = [&](const auto &x_2875) {
      if (x_2875->meta->pass_0_proc_inited) {
        x_2875->meta->bb_0_has_bb_dirtied = true;
        x_2875->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_2875);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3461(x_2873);
    MakeUnit();
    auto x_3462 = [&](const auto &x_2876) {
      if (x_2876->meta->pass_1_proc_inited) {
        x_2876->meta->bb_2_has_bb_dirtied = true;
        x_2876->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_2876);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3462(x_2873);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1992(const auto &x_2877) {
  if (eq(x_2877->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_2877->var_inside_svg) {
      return 0.;
    } else {
      if (x_2877->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2877->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_2877->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_2877->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_2877->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_2877->var_height_expr.r.a0;
          } else {
            if (x_2877->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_2877->var_height_expr.r.a0;
            } else {
              return x_2877->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_2877->var_children_intrinsic_height,
              (eq(x_2877->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_2877->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2877->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_2877->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_2877->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_2877->var_has_height_attr &&
                                                  (x_2877->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_2877->var_height_attr_expr.r.a0)
                                                     : ((x_2877->has_attr_viewBox)
                                                            ? (x_2877->attr_viewBox.r.a3)
                                                            : (mult((x_2877->attr_viewBox.r.a3),
                                                                    divide(x_2877->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_2877->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_2877->var_has_height_attr)
                                                            ? (x_2877->var_height_attr_expr.r.a0)
                                                            : ((x_2877->has_attr_image_height &&
                                                                (!x_2877->var_has_width_attr))
                                                                   ? (int_to_float(x_2877->attr_image_height))
                                                                   : ((neq(x_2877->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_2877->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_2877->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_2877->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_2877->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_2877->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1990(const auto &x_3022) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3023) {
    auto x_3463 = [&](const auto &x_3024) {
      if (x_3024->meta->pass_1_proc_inited) {
        x_3024->meta->bb_2_has_bb_dirtied = true;
        x_3024->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_3024);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3463(x_3022);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1987(const auto &x_3025) {
  if (eq(x_3025->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3025->var_inside_svg || x_3025->var_disabled)) {
    return true;
  } else {
    if ((x_3025->parent != nullptr) && (x_3025->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3025->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3025->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3025->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3025->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_3025->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1985(const auto &x_3074) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3075) {
    auto x_3464 = [&](const auto &x_3076) {
      if (x_3076->meta->pass_0_proc_inited) {
        x_3076->meta->bb_0_has_bb_dirtied = true;
        x_3076->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3076);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3464(x_3074);
    MakeUnit();
    auto x_3465 = [&](const auto &x_3077) {
      if (x_3077->meta->pass_1_proc_inited) {
        x_3077->meta->bb_2_has_bb_dirtied = true;
        x_3077->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_3077);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3465(x_3074);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1982(const auto &x_3078) {
  if (x_3078->has_prop_height) {
    return x_3078->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_1980(const auto &x_3081) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3082) {
    auto x_3466 = [&](const auto &x_3083) {
      if (x_3083->meta->pass_0_proc_inited) {
        x_3083->meta->bb_0_has_bb_dirtied = true;
        x_3083->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3083);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3466(x_3081);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1977(const auto &x_3084) {
  if (x_3084->last != nullptr) {
    return plus((x_3084->last)->var_finished_intrinsic_height_sum, (x_3084->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_1975(const auto &x_3093) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3094) {
    auto x_3467 = [&](const auto &x_3097) {
      if (x_3097->meta->pass_0_proc_inited) {
        x_3097->meta->bb_0_has_bb_dirtied = true;
        x_3097->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3097);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_3093->next, [&](const auto &x_3096) { return MakeUnit(); },
        [&](const auto &x_3095) {
          auto x_3469 = x_3467;
          x_3469(x_3095);
          return MakeUnit();
        });
    auto x_3468 = [&](const auto &x_3100) {
      if (x_3100->meta->pass_1_proc_inited) {
        x_3100->meta->bb_2_has_bb_dirtied = true;
        x_3100->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_3100);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_3093->next == nullptr) {
      auto x_3470 = x_3468;
      OptionMatch(
          x_3093->parent, [&](const auto &x_3099) { return MakeUnit(); },
          [&](const auto &x_3098) {
            auto x_3471 = x_3470;
            x_3471(x_3098);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_1972(const auto &x_3101) {
  return plus((x_3101->prev != nullptr) ? ((x_3101->prev)->var_intrinsic_width_sum) : (0.),
              x_3101->var_intrinsic_width_external);
}
Unit var_modified_x_1970(const auto &x_3110) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3111) {
    auto x_3472 = [&](const auto &x_3114) {
      if (x_3114->meta->pass_0_proc_inited) {
        x_3114->meta->bb_0_has_bb_dirtied = true;
        x_3114->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3114);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_3110->next == nullptr) {
      auto x_3474 = x_3472;
      OptionMatch(
          x_3110->parent, [&](const auto &x_3113) { return MakeUnit(); },
          [&](const auto &x_3112) {
            auto x_3476 = x_3474;
            x_3476(x_3112);
            return MakeUnit();
          });
    }
    auto x_3473 = [&](const auto &x_3117) {
      if (x_3117->meta->pass_0_proc_inited) {
        x_3117->meta->bb_0_has_bb_dirtied = true;
        x_3117->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3117);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_3110->next, [&](const auto &x_3116) { return MakeUnit(); },
        [&](const auto &x_3115) {
          auto x_3475 = x_3473;
          x_3475(x_3115);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_1967(const auto &x_3118) {
  return max(x_3118->var_intrinsic_current_line_width,
             (x_3118->prev != nullptr) ? ((x_3118->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_1965(const auto &x_3127) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3128) {
    auto x_3477 = [&](const auto &x_3129) {
      if (x_3129->meta->pass_0_proc_inited) {
        x_3129->meta->bb_0_has_bb_dirtied = true;
        x_3129->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3129);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3477(x_3127);
    MakeUnit();
    auto x_3478 = [&](const auto &x_3132) {
      if (x_3132->meta->pass_0_proc_inited) {
        x_3132->meta->bb_0_has_bb_dirtied = true;
        x_3132->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3132);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_3127->next, [&](const auto &x_3131) { return MakeUnit(); },
        [&](const auto &x_3130) {
          auto x_3479 = x_3478;
          x_3479(x_3130);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_1962(const auto &x_3133) {
  return plus(x_3133->var_intrinsic_width_external,
              ((x_3133->prev != nullptr) && (!(x_3133->prev)->var_line_break))
                  ? ((x_3133->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_1960(const auto &x_3146) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3147) {
    auto x_3480 = [&](const auto &x_3148) {
      if (x_3148->meta->pass_0_proc_inited) {
        x_3148->meta->bb_0_has_bb_dirtied = true;
        x_3148->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3148);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3480(x_3146);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1957(const auto &x_3149) {
  if (eq(x_3149->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3149->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_1955(const auto &x_3158) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3159) {
    auto x_3481 = [&](const auto &x_3160) {
      if (x_3160->meta->pass_0_proc_inited) {
        x_3160->meta->bb_0_has_bb_dirtied = true;
        x_3160->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3160);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3481(x_3158);
    MakeUnit();
    auto x_3482 = [&](const auto &x_3161) {
      if (x_3161->meta->pass_1_proc_inited) {
        x_3161->meta->bb_2_has_bb_dirtied = true;
        x_3161->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_3161);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3482(x_3158);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1952(const auto &x_3162) {
  if (eq(x_3162->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3162->var_inside_svg) {
      return 0.;
    } else {
      if (x_3162->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3162->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3162->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_3162->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_3162->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_3162->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_3162->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3162->var_width_expr.r.a0;
          } else {
            return x_3162->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_3162->var_children_intrinsic_width,
              (eq(x_3162->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_3162->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3162->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3162->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_3162->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3162->var_has_width_attr &&
                                                  (x_3162->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3162->var_width_attr_expr.r.a0)
                                                     : (((!x_3162->var_has_width_attr) && x_3162->has_attr_viewBox)
                                                            ? (x_3162->attr_viewBox.r.a2)
                                                            : (mult((x_3162->attr_viewBox.r.a2),
                                                                    divide(x_3162->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3162->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3162->var_has_width_attr)
                                                            ? (x_3162->var_width_attr_expr.r.a0)
                                                            : ((x_3162->has_attr_image_width &&
                                                                (!x_3162->var_has_height_attr))
                                                                   ? (int_to_float(x_3162->attr_image_width))
                                                                   : ((neq(x_3162->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3162->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3162->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_3162->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_3162->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_3162->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1950(const auto &x_3315) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3316) {
    auto x_3483 = [&](const auto &x_3317) {
      if (x_3317->meta->pass_0_proc_inited) {
        x_3317->meta->bb_0_has_bb_dirtied = true;
        x_3317->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3317);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3483(x_3315);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1947(const auto &x_3318) {
  if (x_3318->last != nullptr) {
    return (x_3318->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_1945(const auto &x_3323) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3324) {
    auto x_3484 = [&](const auto &x_3325) {
      if (x_3325->meta->pass_1_proc_inited) {
        x_3325->meta->bb_2_has_bb_dirtied = true;
        x_3325->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_3325);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3484(x_3323);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1942(const auto &x_3326) {
  if (eq(x_3326->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3326->var_inside_svg || x_3326->var_disabled)) {
    return true;
  } else {
    if ((x_3326->parent != nullptr) && (x_3326->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3326->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3326->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3326->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3326->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_3326->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1940(const auto &x_3375) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3376) {
    auto x_3485 = [&](const auto &x_3377) {
      if (x_3377->meta->pass_0_proc_inited) {
        x_3377->meta->bb_0_has_bb_dirtied = true;
        x_3377->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3377);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3485(x_3375);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1937(const auto &x_3378) {
  if (eq(x_3378->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_3378->var_inside_svg) {
      return true;
    } else {
      if (x_3378->var_disabled) {
        return true;
      } else {if ( eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_3378->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_1935(const auto &x_3391) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3392) {
    auto x_3486 = [&](const auto &x_3393) {
      if (x_3393->meta->pass_0_proc_inited) {
        x_3393->meta->bb_0_has_bb_dirtied = true;
        x_3393->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1775(x_3393);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3486(x_3391);
    MakeUnit();
    auto x_3487 = [&](const auto &x_3394) {
      if (x_3394->meta->pass_1_proc_inited) {
        x_3394->meta->bb_2_has_bb_dirtied = true;
        x_3394->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1815(x_3394);
      } else {
        return MetaWriteMetric();
      }
    };
    x_3487(x_3391);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_1932(const auto &x_3395) {
  if (x_3395->has_prop_width) {
    return x_3395->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_1868(const auto &x_1930) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1931) {
    WriteMetric();
    auto x_1933 = eval_expr_x_1932(x_1930);
    if (x_1930->has_var_width_expr) {
      auto x_1934 = x_1930->var_width_expr;
      if (!EqualValue(x_1934, x_1933)) {
        var_modified_x_1935(x_1930);
      }
    }
    x_1930->has_var_width_expr = true;
    x_1930->var_width_expr = AsDEString(x_1933);
    WriteMetric();
    auto x_1938 = eval_expr_x_1937(x_1930);
    if (x_1930->has_var_is_default_case) {
      auto x_1939 = x_1930->var_is_default_case;
      if (!EqualValue(x_1939, x_1938)) {
        var_modified_x_1940(x_1930);
      }
    }
    x_1930->has_var_is_default_case = true;
    x_1930->var_is_default_case = Asbool(x_1938);
    WriteMetric();
    auto x_1943 = eval_expr_x_1942(x_1930);
    if (x_1930->has_var_intrinsic_width_is_width) {
      auto x_1944 = x_1930->var_intrinsic_width_is_width;
      if (!EqualValue(x_1944, x_1943)) {
        var_modified_x_1945(x_1930);
      }
    }
    x_1930->has_var_intrinsic_width_is_width = true;
    x_1930->var_intrinsic_width_is_width = Asbool(x_1943);
    WriteMetric();
    auto x_1948 = eval_expr_x_1947(x_1930);
    if (x_1930->has_var_children_intrinsic_width) {
      auto x_1949 = x_1930->var_children_intrinsic_width;
      if (!EqualValue(x_1949, x_1948)) {
        var_modified_x_1950(x_1930);
      }
    }
    x_1930->has_var_children_intrinsic_width = true;
    x_1930->var_children_intrinsic_width = Asdouble(x_1948);
    WriteMetric();
    auto x_1953 = eval_expr_x_1952(x_1930);
    if (x_1930->has_var_intrinsic_width_internal) {
      auto x_1954 = x_1930->var_intrinsic_width_internal;
      if (!EqualValue(x_1954, x_1953)) {
        var_modified_x_1955(x_1930);
      }
    }
    x_1930->has_var_intrinsic_width_internal = true;
    x_1930->var_intrinsic_width_internal = Asdouble(x_1953);
    WriteMetric();
    auto x_1958 = eval_expr_x_1957(x_1930);
    if (x_1930->has_var_intrinsic_width_external) {
      auto x_1959 = x_1930->var_intrinsic_width_external;
      if (!EqualValue(x_1959, x_1958)) {
        var_modified_x_1960(x_1930);
      }
    }
    x_1930->has_var_intrinsic_width_external = true;
    x_1930->var_intrinsic_width_external = Asdouble(x_1958);
    WriteMetric();
    auto x_1963 = eval_expr_x_1962(x_1930);
    if (x_1930->has_var_intrinsic_current_line_width) {
      auto x_1964 = x_1930->var_intrinsic_current_line_width;
      if (!EqualValue(x_1964, x_1963)) {
        var_modified_x_1965(x_1930);
      }
    }
    x_1930->has_var_intrinsic_current_line_width = true;
    x_1930->var_intrinsic_current_line_width = Asdouble(x_1963);
    WriteMetric();
    auto x_1968 = eval_expr_x_1967(x_1930);
    if (x_1930->has_var_intrinsic_width_max) {
      auto x_1969 = x_1930->var_intrinsic_width_max;
      if (!EqualValue(x_1969, x_1968)) {
        var_modified_x_1970(x_1930);
      }
    }
    x_1930->has_var_intrinsic_width_max = true;
    x_1930->var_intrinsic_width_max = Asdouble(x_1968);
    WriteMetric();
    auto x_1973 = eval_expr_x_1972(x_1930);
    if (x_1930->has_var_intrinsic_width_sum) {
      auto x_1974 = x_1930->var_intrinsic_width_sum;
      if (!EqualValue(x_1974, x_1973)) {
        var_modified_x_1975(x_1930);
      }
    }
    x_1930->has_var_intrinsic_width_sum = true;
    x_1930->var_intrinsic_width_sum = Asdouble(x_1973);
    WriteMetric();
    auto x_1978 = eval_expr_x_1977(x_1930);
    if (x_1930->has_var_children_intrinsic_height) {
      auto x_1979 = x_1930->var_children_intrinsic_height;
      if (!EqualValue(x_1979, x_1978)) {
        var_modified_x_1980(x_1930);
      }
    }
    x_1930->has_var_children_intrinsic_height = true;
    x_1930->var_children_intrinsic_height = Asdouble(x_1978);
    WriteMetric();
    auto x_1983 = eval_expr_x_1982(x_1930);
    if (x_1930->has_var_height_expr) {
      auto x_1984 = x_1930->var_height_expr;
      if (!EqualValue(x_1984, x_1983)) {
        var_modified_x_1985(x_1930);
      }
    }
    x_1930->has_var_height_expr = true;
    x_1930->var_height_expr = AsDEString(x_1983);
    WriteMetric();
    auto x_1988 = eval_expr_x_1987(x_1930);
    if (x_1930->has_var_intrinsic_height_is_height) {
      auto x_1989 = x_1930->var_intrinsic_height_is_height;
      if (!EqualValue(x_1989, x_1988)) {
        var_modified_x_1990(x_1930);
      }
    }
    x_1930->has_var_intrinsic_height_is_height = true;
    x_1930->var_intrinsic_height_is_height = Asbool(x_1988);
    WriteMetric();
    auto x_1993 = eval_expr_x_1992(x_1930);
    if (x_1930->has_var_intrinsic_height_internal) {
      auto x_1994 = x_1930->var_intrinsic_height_internal;
      if (!EqualValue(x_1994, x_1993)) {
        var_modified_x_1995(x_1930);
      }
    }
    x_1930->has_var_intrinsic_height_internal = true;
    x_1930->var_intrinsic_height_internal = Asdouble(x_1993);
    WriteMetric();
    auto x_1998 = eval_expr_x_1997(x_1930);
    if (x_1930->has_var_intrinsic_height_external) {
      auto x_1999 = x_1930->var_intrinsic_height_external;
      if (!EqualValue(x_1999, x_1998)) {
        var_modified_x_2000(x_1930);
      }
    }
    x_1930->has_var_intrinsic_height_external = true;
    x_1930->var_intrinsic_height_external = Asdouble(x_1998);
    WriteMetric();
    auto x_2003 = eval_expr_x_2002(x_1930);
    if (x_1930->has_var_intrinsic_height_sum) {
      auto x_2004 = x_1930->var_intrinsic_height_sum;
      if (!EqualValue(x_2004, x_2003)) {
        var_modified_x_2005(x_1930);
      }
    }
    x_1930->has_var_intrinsic_height_sum = true;
    x_1930->var_intrinsic_height_sum = Asdouble(x_2003);
    WriteMetric();
    auto x_2008 = eval_expr_x_2007(x_1930);
    if (x_1930->has_var_intrinsic_current_line_height) {
      auto x_2009 = x_1930->var_intrinsic_current_line_height;
      if (!EqualValue(x_2009, x_2008)) {
        var_modified_x_2010(x_1930);
      }
    }
    x_1930->has_var_intrinsic_current_line_height = true;
    x_1930->var_intrinsic_current_line_height = Asdouble(x_2008);
    WriteMetric();
    auto x_2013 = eval_expr_x_2012(x_1930);
    if (x_1930->has_var_finished_intrinsic_height_sum) {
      auto x_2014 = x_1930->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_2014, x_2013)) {
        var_modified_x_2015(x_1930);
      }
    }
    x_1930->has_var_finished_intrinsic_height_sum = true;
    x_1930->var_finished_intrinsic_height_sum = Asdouble(x_2013);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1866(const auto &x_2017) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2018) {
    WriteMetric();
    auto x_2020 = eval_expr_x_2019(x_2017);
    if (x_2017->has_var_display) {
      auto x_2021 = x_2017->var_display;
      if (!EqualValue(x_2021, x_2020)) {
        var_modified_x_2022(x_2017);
      }
    }
    x_2017->has_var_display = true;
    x_2017->var_display = AsDEString(x_2020);
    WriteMetric();
    auto x_2025 = eval_expr_x_2024(x_2017);
    if (x_2017->has_var_position) {
      auto x_2026 = x_2017->var_position;
      if (!EqualValue(x_2026, x_2025)) {
        var_modified_x_2027(x_2017);
      }
    }
    x_2017->has_var_position = true;
    x_2017->var_position = AsDEString(x_2025);
    WriteMetric();
    auto x_2030 = eval_expr_x_2029(x_2017);
    if (x_2017->has_var_flex_grow) {
      auto x_2031 = x_2017->var_flex_grow;
      if (!EqualValue(x_2031, x_2030)) {
        var_modified_x_2032(x_2017);
      }
    }
    x_2017->has_var_flex_grow = true;
    x_2017->var_flex_grow = Asdouble(x_2030);
    WriteMetric();
    auto x_2035 = eval_expr_x_2034(x_2017);
    if (x_2017->has_var_flex_shrink) {
      auto x_2036 = x_2017->var_flex_shrink;
      if (!EqualValue(x_2036, x_2035)) {
        var_modified_x_2037(x_2017);
      }
    }
    x_2017->has_var_flex_shrink = true;
    x_2017->var_flex_shrink = Asdouble(x_2035);
    WriteMetric();
    auto x_2040 = eval_expr_x_2039(x_2017);
    if (x_2017->has_var_flex_grow_sum) {
      auto x_2041 = x_2017->var_flex_grow_sum;
      if (!EqualValue(x_2041, x_2040)) {
        var_modified_x_2042(x_2017);
      }
    }
    x_2017->has_var_flex_grow_sum = true;
    x_2017->var_flex_grow_sum = Asdouble(x_2040);
    WriteMetric();
    auto x_2045 = eval_expr_x_2044(x_2017);
    if (x_2017->has_var_flex_shrink_sum) {
      auto x_2046 = x_2017->var_flex_shrink_sum;
      if (!EqualValue(x_2046, x_2045)) {
        var_modified_x_2047(x_2017);
      }
    }
    x_2017->has_var_flex_shrink_sum = true;
    x_2017->var_flex_shrink_sum = Asdouble(x_2045);
    WriteMetric();
    auto x_2050 = eval_expr_x_2049(x_2017);
    if (x_2017->has_var_flex_direction) {
      auto x_2051 = x_2017->var_flex_direction;
      if (!EqualValue(x_2051, x_2050)) {
        var_modified_x_2052(x_2017);
      }
    }
    x_2017->has_var_flex_direction = true;
    x_2017->var_flex_direction = AsDEString(x_2050);
    WriteMetric();
    auto x_2055 = eval_expr_x_2054(x_2017);
    if (x_2017->has_var_is_flex_row) {
      auto x_2056 = x_2017->var_is_flex_row;
      if (!EqualValue(x_2056, x_2055)) {
        var_modified_x_2057(x_2017);
      }
    }
    x_2017->has_var_is_flex_row = true;
    x_2017->var_is_flex_row = Asbool(x_2055);
    WriteMetric();
    auto x_2060 = eval_expr_x_2059(x_2017);
    if (x_2017->has_var_is_flex_column) {
      auto x_2061 = x_2017->var_is_flex_column;
      if (!EqualValue(x_2061, x_2060)) {
        var_modified_x_2062(x_2017);
      }
    }
    x_2017->has_var_is_flex_column = true;
    x_2017->var_is_flex_column = Asbool(x_2060);
    WriteMetric();
    auto x_2065 = eval_expr_x_2064(x_2017);
    if (x_2017->has_var_width_attr_expr) {
      auto x_2066 = x_2017->var_width_attr_expr;
      if (!EqualValue(x_2066, x_2065)) {
        var_modified_x_2067(x_2017);
      }
    }
    x_2017->has_var_width_attr_expr = true;
    x_2017->var_width_attr_expr = AsDEString(x_2065);
    WriteMetric();
    auto x_2070 = eval_expr_x_2069(x_2017);
    if (x_2017->has_var_has_width_attr) {
      auto x_2071 = x_2017->var_has_width_attr;
      if (!EqualValue(x_2071, x_2070)) {
        var_modified_x_2072(x_2017);
      }
    }
    x_2017->has_var_has_width_attr = true;
    x_2017->var_has_width_attr = Asbool(x_2070);
    WriteMetric();
    auto x_2075 = eval_expr_x_2074(x_2017);
    if (x_2017->has_var_height_attr_expr) {
      auto x_2076 = x_2017->var_height_attr_expr;
      if (!EqualValue(x_2076, x_2075)) {
        var_modified_x_2077(x_2017);
      }
    }
    x_2017->has_var_height_attr_expr = true;
    x_2017->var_height_attr_expr = AsDEString(x_2075);
    WriteMetric();
    auto x_2080 = eval_expr_x_2079(x_2017);
    if (x_2017->has_var_has_height_attr) {
      auto x_2081 = x_2017->var_has_height_attr;
      if (!EqualValue(x_2081, x_2080)) {
        var_modified_x_2082(x_2017);
      }
    }
    x_2017->has_var_has_height_attr = true;
    x_2017->var_has_height_attr = Asbool(x_2080);
    WriteMetric();
    auto x_2085 = eval_expr_x_2084(x_2017);
    if (x_2017->has_var_is_svg_block) {
      auto x_2086 = x_2017->var_is_svg_block;
      if (!EqualValue(x_2086, x_2085)) {
        var_modified_x_2087(x_2017);
      }
    }
    x_2017->has_var_is_svg_block = true;
    x_2017->var_is_svg_block = Asbool(x_2085);
    WriteMetric();
    auto x_2090 = eval_expr_x_2089(x_2017);
    if (x_2017->has_var_inside_svg) {
      auto x_2091 = x_2017->var_inside_svg;
      if (!EqualValue(x_2091, x_2090)) {
        var_modified_x_2092(x_2017);
      }
    }
    x_2017->has_var_inside_svg = true;
    x_2017->var_inside_svg = Asbool(x_2090);
    WriteMetric();
    auto x_2095 = eval_expr_x_2094(x_2017);
    if (x_2017->has_var_disabled) {
      auto x_2096 = x_2017->var_disabled;
      if (!EqualValue(x_2096, x_2095)) {
        var_modified_x_2097(x_2017);
      }
    }
    x_2017->has_var_disabled = true;
    x_2017->var_disabled = Asbool(x_2095);
    WriteMetric();
    auto x_2100 = eval_expr_x_2099(x_2017);
    if (x_2017->has_var_visible) {
      auto x_2101 = x_2017->var_visible;
      if (!EqualValue(x_2101, x_2100)) {
        var_modified_x_2102(x_2017);
      }
    }
    x_2017->has_var_visible = true;
    x_2017->var_visible = Asbool(x_2100);
    WriteMetric();
    auto x_2105 = eval_expr_x_2104(x_2017);
    if (x_2017->has_var_line_break) {
      auto x_2106 = x_2017->var_line_break;
      if (!EqualValue(x_2106, x_2105)) {
        var_modified_x_2107(x_2017);
      }
    }
    x_2017->has_var_line_break = true;
    x_2017->var_line_break = Asbool(x_2105);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1862(const auto &x_2109) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2110) {
    WriteMetric();
    auto x_2112 = eval_expr_x_2111(x_2109);
    if (x_2109->has_var_box_width) {
      auto x_2113 = x_2109->var_box_width;
      if (!EqualValue(x_2113, x_2112)) {
        var_modified_x_2114(x_2109);
      }
    }
    x_2109->has_var_box_width = true;
    x_2109->var_box_width = Asdouble(x_2112);
    WriteMetric();
    auto x_2117 = eval_expr_x_2116(x_2109);
    if (x_2109->has_var_box_height) {
      auto x_2118 = x_2109->var_box_height;
      if (!EqualValue(x_2118, x_2117)) {
        var_modified_x_2119(x_2109);
      }
    }
    x_2109->has_var_box_height = true;
    x_2109->var_box_height = Asdouble(x_2117);
    WriteMetric();
    auto x_2122 = eval_expr_x_2121(x_2109);
    if (x_2109->has_var_left_over) {
      auto x_2123 = x_2109->var_left_over;
      if (!EqualValue(x_2123, x_2122)) {
        var_modified_x_2124(x_2109);
      }
    }
    x_2109->has_var_left_over = true;
    x_2109->var_left_over = Asdouble(x_2122);
    WriteMetric();
    auto x_2127 = eval_expr_x_2126(x_2109);
    if (x_2109->has_var_flex_amount) {
      auto x_2128 = x_2109->var_flex_amount;
      if (!EqualValue(x_2128, x_2127)) {
        var_modified_x_2129(x_2109);
      }
    }
    x_2109->has_var_flex_amount = true;
    x_2109->var_flex_amount = Asdouble(x_2127);
    WriteMetric();
    auto x_2132 = eval_expr_x_2131(x_2109);
    if (x_2109->has_var_flex_unit) {
      auto x_2133 = x_2109->var_flex_unit;
      if (!EqualValue(x_2133, x_2132)) {
        var_modified_x_2134(x_2109);
      }
    }
    x_2109->has_var_flex_unit = true;
    x_2109->var_flex_unit = Asdouble(x_2132);
    WriteMetric();
    auto x_2137 = eval_expr_x_2136(x_2109);
    if (x_2109->has_var_x) {
      auto x_2138 = x_2109->var_x;
      if (!EqualValue(x_2138, x_2137)) {
        var_modified_x_2139(x_2109);
      }
    }
    x_2109->has_var_x = true;
    x_2109->var_x = Asdouble(x_2137);
    WriteMetric();
    auto x_2142 = eval_expr_x_2141(x_2109);
    if (x_2109->has_var_width_internal) {
      auto x_2143 = x_2109->var_width_internal;
      if (!EqualValue(x_2143, x_2142)) {
        var_modified_x_2144(x_2109);
      }
    }
    x_2109->has_var_width_internal = true;
    x_2109->var_width_internal = Asdouble(x_2142);
    WriteMetric();
    auto x_2147 = eval_expr_x_2146(x_2109);
    if (x_2109->has_var_width_external) {
      auto x_2148 = x_2109->var_width_external;
      if (!EqualValue(x_2148, x_2147)) {
        var_modified_x_2149(x_2109);
      }
    }
    x_2109->has_var_width_external = true;
    x_2109->var_width_external = Asdouble(x_2147);
    WriteMetric();
    auto x_2152 = eval_expr_x_2151(x_2109);
    if (x_2109->has_var_y) {
      auto x_2153 = x_2109->var_y;
      if (!EqualValue(x_2153, x_2152)) {
        var_modified_x_2154(x_2109);
      }
    }
    x_2109->has_var_y = true;
    x_2109->var_y = Asdouble(x_2152);
    WriteMetric();
    auto x_2157 = eval_expr_x_2156(x_2109);
    if (x_2109->has_var_height_internal) {
      auto x_2158 = x_2109->var_height_internal;
      if (!EqualValue(x_2158, x_2157)) {
        var_modified_x_2159(x_2109);
      }
    }
    x_2109->has_var_height_internal = true;
    x_2109->var_height_internal = Asdouble(x_2157);
    WriteMetric();
    auto x_2162 = eval_expr_x_2161(x_2109);
    if (x_2109->has_var_height_external) {
      auto x_2163 = x_2109->var_height_external;
      if (!EqualValue(x_2163, x_2162)) {
        var_modified_x_2164(x_2109);
      }
    }
    x_2109->has_var_height_external = true;
    x_2109->var_height_external = Asdouble(x_2162);
    WriteMetric();
    auto x_2167 = eval_expr_x_2166(x_2109);
    if (x_2109->has_var_line_height) {
      auto x_2168 = x_2109->var_line_height;
      if (!EqualValue(x_2168, x_2167)) {
        var_modified_x_2169(x_2109);
      }
    }
    x_2109->has_var_line_height = true;
    x_2109->var_line_height = Asdouble(x_2167);
    return MakeUnit();
  })));
}
Unit x_2171(const auto &x_2172) {
  MetaWriteMetric();
  if (!x_2172->meta->pass_1_recursive_proc_dirtied) {
    x_2172->meta->pass_1_has_recursive_proc_dirtied = true;
    x_2172->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2172->parent, [&](const auto &x_2174) { return MakeUnit(); },
        [&](const auto &x_2173) { return x_2171(x_2173); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1815(const auto &x_2172) { return x_2171(x_2172); }
Unit x_2175(const auto &x_2176) {
  MetaWriteMetric();
  if (!x_2176->meta->pass_0_recursive_proc_dirtied) {
    x_2176->meta->pass_0_has_recursive_proc_dirtied = true;
    x_2176->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2176->parent, [&](const auto &x_2178) { return MakeUnit(); },
        [&](const auto &x_2177) { return x_2175(x_2177); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1775(const auto &x_2176) { return x_2175(x_2176); }
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
        std::string x_3488 = x_1772;
        if (x_3488 == "attributes") {
          std::string x_3489 = x_1773;
          if (x_3489 == "width") {
            WriteMetric();
            x_1766->has_attr_width = true;
            x_1766->attr_width = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_1_has_bb_dirtied = true;
              x_1766->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3489 == "image_height") {
            WriteMetric();
            x_1766->has_attr_image_height = true;
            x_1766->attr_image_height = Asint64_t(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_0_has_bb_dirtied = true;
              x_1766->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3489 == "image_width") {
            WriteMetric();
            x_1766->has_attr_image_width = true;
            x_1766->attr_image_width = Asint64_t(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_0_has_bb_dirtied = true;
              x_1766->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3489 == "height") {
            WriteMetric();
            x_1766->has_attr_height = true;
            x_1766->attr_height = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_1_has_bb_dirtied = true;
              x_1766->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3489 == "viewBox") {
            WriteMetric();
            x_1766->has_attr_viewBox = true;
            x_1766->attr_viewBox = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_0_has_bb_dirtied = true;
              x_1766->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3488 == "properties") {
          std::string x_3490 = x_1773;
          if (x_3490 == "width") {
            WriteMetric();
            x_1766->has_prop_width = true;
            x_1766->prop_width = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_0_has_bb_dirtied = true;
              x_1766->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3490 == "flex-grow") {
            WriteMetric();
            x_1766->has_prop_flex_grow = true;
            x_1766->prop_flex_grow = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_1_has_bb_dirtied = true;
              x_1766->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3490 == "height") {
            WriteMetric();
            x_1766->has_prop_height = true;
            x_1766->prop_height = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_0_has_bb_dirtied = true;
              x_1766->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3490 == "display") {
            WriteMetric();
            x_1766->has_prop_display = true;
            x_1766->prop_display = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_1_has_bb_dirtied = true;
              x_1766->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3490 == "position") {
            WriteMetric();
            x_1766->has_prop_position = true;
            x_1766->prop_position = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_1_has_bb_dirtied = true;
              x_1766->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3490 == "flex-shrink") {
            WriteMetric();
            x_1766->has_prop_flex_shrink = true;
            x_1766->prop_flex_shrink = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_1_has_bb_dirtied = true;
              x_1766->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3490 == "flex-direction") {
            WriteMetric();
            x_1766->has_prop_flex_direction = true;
            x_1766->prop_flex_direction = AsDEString(x_1774);
            if (x_1766->meta->pass_0_proc_inited) {
              x_1766->meta->bb_1_has_bb_dirtied = true;
              x_1766->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1766);
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
      [&](const auto &x_1768, const auto &x_1769) {
        return x_1764(x_1769, ListNthExn(x_1766->children, x_1768), x_1767);
      });
}
Unit insert_value_x_1736(const auto &x_1765, const auto &x_1766, const auto &x_1767) {
  return x_1764(x_1765, x_1766, x_1767);
}
Unit x_1776(const auto &x_1777, const auto &x_1778, const auto &x_1779) {
  return ListMatch(
      x_1777,
      [&](const auto &x_1782) {
        auto x_1783 = Zro(x_1779);
        auto x_1784 = Fst(x_1779);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3491 = x_1783;
        if (x_3491 == "attributes") {
          std::string x_3492 = x_1784;
          if (x_3492 == "width") {
            WriteMetric();
            x_1778->has_attr_width = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3492 == "image_height") {
            WriteMetric();
            x_1778->has_attr_image_height = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3492 == "image_width") {
            WriteMetric();
            x_1778->has_attr_image_width = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3492 == "height") {
            WriteMetric();
            x_1778->has_attr_height = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3492 == "viewBox") {
            WriteMetric();
            x_1778->has_attr_viewBox = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3491 == "properties") {
          std::string x_3493 = x_1784;
          if (x_3493 == "width") {
            WriteMetric();
            x_1778->has_prop_width = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3493 == "flex-grow") {
            WriteMetric();
            x_1778->has_prop_flex_grow = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3493 == "height") {
            WriteMetric();
            x_1778->has_prop_height = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_0_has_bb_dirtied = true;
              x_1778->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3493 == "display") {
            WriteMetric();
            x_1778->has_prop_display = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3493 == "position") {
            WriteMetric();
            x_1778->has_prop_position = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3493 == "flex-shrink") {
            WriteMetric();
            x_1778->has_prop_flex_shrink = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3493 == "flex-direction") {
            WriteMetric();
            x_1778->has_prop_flex_direction = false;
            if (x_1778->meta->pass_0_proc_inited) {
              x_1778->meta->bb_1_has_bb_dirtied = true;
              x_1778->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1778);
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
Unit delete_value_x_1734(const auto &x_1777, const auto &x_1778, const auto &x_1779) {
  return x_1776(x_1777, x_1778, x_1779);
}
Unit x_1785(const auto &x_1786, const auto &x_1787, const auto &x_1788) {
  return ListMatch(
      x_1786,
      [&](const auto &x_1791) {
        auto x_1792 = Zro(x_1788);
        auto x_1793 = Zro(x_1792);
        auto x_1794 = Fst(x_1792);
        auto x_1795 = Fst(x_1788);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3494 = x_1793;
        if (x_3494 == "attributes") {
          std::string x_3495 = x_1794;
          if (x_3495 == "width") {
            WriteMetric();
            x_1787->has_attr_width = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_attr_width = true;
            x_1787->attr_width = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3495 == "image_height") {
            WriteMetric();
            x_1787->has_attr_image_height = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_attr_image_height = true;
            x_1787->attr_image_height = Asint64_t(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3495 == "image_width") {
            WriteMetric();
            x_1787->has_attr_image_width = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_attr_image_width = true;
            x_1787->attr_image_width = Asint64_t(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3495 == "height") {
            WriteMetric();
            x_1787->has_attr_height = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_attr_height = true;
            x_1787->attr_height = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3495 == "viewBox") {
            WriteMetric();
            x_1787->has_attr_viewBox = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_attr_viewBox = true;
            x_1787->attr_viewBox = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3494 == "properties") {
          std::string x_3496 = x_1794;
          if (x_3496 == "width") {
            WriteMetric();
            x_1787->has_prop_width = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_prop_width = true;
            x_1787->prop_width = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3496 == "flex-grow") {
            WriteMetric();
            x_1787->has_prop_flex_grow = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_prop_flex_grow = true;
            x_1787->prop_flex_grow = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3496 == "height") {
            WriteMetric();
            x_1787->has_prop_height = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_prop_height = true;
            x_1787->prop_height = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_0_has_bb_dirtied = true;
              x_1787->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3496 == "display") {
            WriteMetric();
            x_1787->has_prop_display = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_prop_display = true;
            x_1787->prop_display = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3496 == "position") {
            WriteMetric();
            x_1787->has_prop_position = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_prop_position = true;
            x_1787->prop_position = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3496 == "flex-shrink") {
            WriteMetric();
            x_1787->has_prop_flex_shrink = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_prop_flex_shrink = true;
            x_1787->prop_flex_shrink = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3496 == "flex-direction") {
            WriteMetric();
            x_1787->has_prop_flex_direction = false;
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1787->has_prop_flex_direction = true;
            x_1787->prop_flex_direction = AsDEString(x_1795);
            if (x_1787->meta->pass_0_proc_inited) {
              x_1787->meta->bb_1_has_bb_dirtied = true;
              x_1787->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1775(x_1787);
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
      [&](const auto &x_1789, const auto &x_1790) {
        return x_1785(x_1790, ListNthExn(x_1787->children, x_1789), x_1788);
      });
}
Unit replace_value_x_1732(const auto &x_1786, const auto &x_1787, const auto &x_1788) {
  return x_1785(x_1786, x_1787, x_1788);
}
Unit x_1796(const auto &x_1797, const auto &x_1798, const auto &x_1799) {
  auto x_1800 = ListHeadExn(x_1797);
  auto x_1801 = ListTailExn(x_1797);
  if (ListIsEmpty(x_1801)) {
    InputChangeMetric(IntAdd(node_size_x_1700(ListNthExn(x_1798->children, x_1800)), node_size_x_1700(x_1799)));
    auto x_1802 = ListSplitN(x_1798->children, x_1800);
    auto x_1803 = Zro(x_1802);
    auto x_1804 = Fst(x_1802);
    auto x_1805 = ListHeadExn(x_1804);
    auto x_1806 = ListTailExn(x_1804);
    x_1798->children = ListAppend(x_1803, x_1806);
    OptionMatch(
        x_1805->prev, [&](const auto &x_1808) { return MakeUnit(); },
        [&](const auto &x_1807) {
          x_1807->next = ToPath(x_1805->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1805->next, [&](const auto &x_1810) { return MakeUnit(); },
        [&](const auto &x_1809) {
          x_1809->prev = ToPath(x_1805->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1803)) {
      x_1798->first = ToPath(ListHead(x_1806));
    }
    if (ListIsEmpty(x_1806)) {
      x_1798->last = ToPath(ListLast(x_1803));
    }
    OptionMatch(
        x_1805->next, [&](const auto &x_1812) { return MakeUnit(); },
        [&](const auto &x_1811) {
          if (x_1811->meta->pass_0_proc_inited) {
            x_1811->meta->bb_1_has_bb_dirtied = true;
            x_1811->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1811);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1798->children)) {
      if (x_1798->meta->pass_0_proc_inited) {
        x_1798->meta->bb_0_has_bb_dirtied = true;
        x_1798->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1806)) {
      if (x_1798->meta->pass_0_proc_inited) {
        x_1798->meta->bb_0_has_bb_dirtied = true;
        x_1798->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1805->next, [&](const auto &x_1814) { return MakeUnit(); },
        [&](const auto &x_1813) {
          if (x_1813->meta->pass_0_proc_inited) {
            x_1813->meta->bb_0_has_bb_dirtied = true;
            x_1813->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1813);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1798->children)) {
      if (x_1798->meta->pass_1_proc_inited) {
        x_1798->meta->bb_2_has_bb_dirtied = true;
        x_1798->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1806)) {
      if (x_1798->meta->pass_1_proc_inited) {
        x_1798->meta->bb_2_has_bb_dirtied = true;
        x_1798->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1805->next, [&](const auto &x_1817) { return MakeUnit(); },
        [&](const auto &x_1816) {
          if (x_1816->meta->pass_1_proc_inited) {
            x_1816->meta->bb_2_has_bb_dirtied = true;
            x_1816->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1815(x_1816);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    auto x_1818 = ListSplitN(x_1798->children, x_1800);
    auto x_1819 = Zro(x_1818);
    auto x_1820 = Fst(x_1818);
    x_1798->children = ListAppend(x_1819, Cons(x_1799, x_1820));
    if (ListIsEmpty(x_1819)) {
      x_1798->first = x_1799.get();
    }
    if (ListIsEmpty(x_1820)) {
      x_1798->last = x_1799.get();
    }
    OptionMatch(
        ListLast(x_1819),
        [&](const auto &x_1822) {
          x_1799->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1821) {
          x_1799->prev = x_1821.get();
          x_1821->next = x_1799.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1820),
        [&](const auto &x_1824) {
          x_1799->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1823) {
          x_1799->next = x_1823.get();
          x_1823->prev = x_1799.get();
          return MakeUnit();
        });
    x_1799->parent = x_1798.get();
    x_1799->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1799->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1775(x_1799);
    OptionMatch(
        x_1799->next, [&](const auto &x_1826) { return MakeUnit(); },
        [&](const auto &x_1825) {
          if (x_1825->meta->pass_0_proc_inited) {
            x_1825->meta->bb_1_has_bb_dirtied = true;
            x_1825->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1825);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1798->children)) {
      if (x_1798->meta->pass_0_proc_inited) {
        x_1798->meta->bb_0_has_bb_dirtied = true;
        x_1798->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1820)) {
      if (x_1798->meta->pass_0_proc_inited) {
        x_1798->meta->bb_0_has_bb_dirtied = true;
        x_1798->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1799->next, [&](const auto &x_1828) { return MakeUnit(); },
        [&](const auto &x_1827) {
          if (x_1827->meta->pass_0_proc_inited) {
            x_1827->meta->bb_0_has_bb_dirtied = true;
            x_1827->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1827);
          } else {
            return MetaWriteMetric();
          }
        });
    x_1799->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1799->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1815(x_1799);
    if (ListIsSingleton(x_1798->children)) {
      if (x_1798->meta->pass_1_proc_inited) {
        x_1798->meta->bb_2_has_bb_dirtied = true;
        x_1798->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1820)) {
      if (x_1798->meta->pass_1_proc_inited) {
        x_1798->meta->bb_2_has_bb_dirtied = true;
        x_1798->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1798);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1799->next, [&](const auto &x_1830) { return MakeUnit(); },
        [&](const auto &x_1829) {
          if (x_1829->meta->pass_1_proc_inited) {
            x_1829->meta->bb_2_has_bb_dirtied = true;
            x_1829->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1815(x_1829);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_1796(x_1801, ListNthExn(x_1798->children, x_1800), x_1799);
  }
}
Unit replace_node_x_1730(const auto &x_1797, const auto &x_1798, const auto &x_1799) {
  return x_1796(x_1797, x_1798, x_1799);
}
Unit x_1831(const auto &x_1832) {
  ListIter2(x_1832->children, [&](const auto &x_1833, const auto &x_1834) {
    x_1833->parent = x_1832.get();
    x_1834->parent = x_1832.get();
    x_1833->next = x_1834.get();
    x_1834->prev = x_1833.get();
    x_1831(x_1833);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1832->children),
      [&](const auto &x_1836) {
        x_1832->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1835) {
        x_1832->first = x_1835.get();
        x_1835->parent = x_1832.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1832->children),
      [&](const auto &x_1838) {
        x_1832->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1837) {
        x_1832->last = x_1837.get();
        x_1837->parent = x_1832.get();
        x_1831(x_1837);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1728(const auto &x_1832) { return x_1831(x_1832); }
Unit x_1839(const auto &x_1840, const auto &x_1841, const auto &x_1842) {
  auto x_1843 = ListHeadExn(x_1840);
  auto x_1844 = ListTailExn(x_1840);
  if (ListIsEmpty(x_1844)) {
    InputChangeMetric(node_size_x_1700(ListNthExn(x_1841->children, x_1843)));
    auto x_1845 = ListSplitN(x_1841->children, x_1843);
    auto x_1846 = Zro(x_1845);
    auto x_1847 = Fst(x_1845);
    auto x_1848 = ListHeadExn(x_1847);
    auto x_1849 = ListTailExn(x_1847);
    x_1841->children = ListAppend(x_1846, x_1849);
    OptionMatch(
        x_1848->prev, [&](const auto &x_1851) { return MakeUnit(); },
        [&](const auto &x_1850) {
          x_1850->next = ToPath(x_1848->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1848->next, [&](const auto &x_1853) { return MakeUnit(); },
        [&](const auto &x_1852) {
          x_1852->prev = ToPath(x_1848->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1846)) {
      x_1841->first = ToPath(ListHead(x_1849));
    }
    if (ListIsEmpty(x_1849)) {
      x_1841->last = ToPath(ListLast(x_1846));
    }
    OptionMatch(
        x_1848->next, [&](const auto &x_1855) { return MakeUnit(); },
        [&](const auto &x_1854) {
          if (x_1854->meta->pass_0_proc_inited) {
            x_1854->meta->bb_1_has_bb_dirtied = true;
            x_1854->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1854);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1841->children)) {
      if (x_1841->meta->pass_0_proc_inited) {
        x_1841->meta->bb_0_has_bb_dirtied = true;
        x_1841->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1841);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1849)) {
      if (x_1841->meta->pass_0_proc_inited) {
        x_1841->meta->bb_0_has_bb_dirtied = true;
        x_1841->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1841);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1848->next, [&](const auto &x_1857) { return MakeUnit(); },
        [&](const auto &x_1856) {
          if (x_1856->meta->pass_0_proc_inited) {
            x_1856->meta->bb_0_has_bb_dirtied = true;
            x_1856->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1856);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1841->children)) {
      if (x_1841->meta->pass_1_proc_inited) {
        x_1841->meta->bb_2_has_bb_dirtied = true;
        x_1841->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1841);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1849)) {
      if (x_1841->meta->pass_1_proc_inited) {
        x_1841->meta->bb_2_has_bb_dirtied = true;
        x_1841->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1841);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1848->next, [&](const auto &x_1859) { return MakeUnit(); },
        [&](const auto &x_1858) {
          if (x_1858->meta->pass_1_proc_inited) {
            x_1858->meta->bb_2_has_bb_dirtied = true;
            x_1858->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1815(x_1858);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1839(x_1844, ListNthExn(x_1841->children, x_1843), x_1842);
  }
}
Unit remove_node_x_1726(const auto &x_1840, const auto &x_1841, const auto &x_1842) {
  return x_1839(x_1840, x_1841, x_1842);
}
Unit x_1860(const auto &x_1861) {
  MetaReadMetric();
  if (x_1861->meta->pass_1_recursive_proc_dirtied) {
    if (x_1861->meta->pass_1_proc_inited) {
      if (x_1861->meta->bb_2_bb_dirtied) {
        eval_stmts_x_1862(x_1861);
        x_1861->meta->bb_2_has_bb_dirtied = true;
        x_1861->meta->bb_2_bb_dirtied = false;
      }
      ListIter(x_1861->children, [&](const auto &x_1863) { return x_1860(x_1863); });
      MakeUnit();
    } else {
      x_1861->meta->pass_1_proc_inited = true;
      eval_stmts_x_1715(x_1861);
    }
  }
  x_1861->meta->pass_1_has_recursive_proc_dirtied = true;
  x_1861->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1724(const auto &x_1861) { return x_1860(x_1861); }
Unit x_1864(const auto &x_1865) {
  MetaReadMetric();
  if (x_1865->meta->pass_0_recursive_proc_dirtied) {
    if (x_1865->meta->pass_0_proc_inited) {
      if (x_1865->meta->bb_1_bb_dirtied) {
        eval_stmts_x_1866(x_1865);
        x_1865->meta->bb_1_has_bb_dirtied = true;
        x_1865->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_1865->children, [&](const auto &x_1867) { return x_1864(x_1867); });
      if (x_1865->meta->bb_0_bb_dirtied) {
        eval_stmts_x_1868(x_1865);
        x_1865->meta->bb_0_has_bb_dirtied = true;
        x_1865->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1865->meta->pass_0_proc_inited = true;
      eval_stmts_x_1713(x_1865);
    }
  }
  x_1865->meta->pass_0_has_recursive_proc_dirtied = true;
  x_1865->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1723(const auto &x_1865) { return x_1864(x_1865); }
Unit x_1869(const auto &x_1870, const auto &x_1871, const auto &x_1872) {
  auto x_1873 = ListHeadExn(x_1870);
  auto x_1874 = ListTailExn(x_1870);
  if (ListIsEmpty(x_1874)) {
    InputChangeMetric(node_size_x_1700(x_1872));
    auto x_1875 = ListSplitN(x_1871->children, x_1873);
    auto x_1876 = Zro(x_1875);
    auto x_1877 = Fst(x_1875);
    x_1871->children = ListAppend(x_1876, Cons(x_1872, x_1877));
    if (ListIsEmpty(x_1876)) {
      x_1871->first = x_1872.get();
    }
    if (ListIsEmpty(x_1877)) {
      x_1871->last = x_1872.get();
    }
    OptionMatch(
        ListLast(x_1876),
        [&](const auto &x_1879) {
          x_1872->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1878) {
          x_1872->prev = x_1878.get();
          x_1878->next = x_1872.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1877),
        [&](const auto &x_1881) {
          x_1872->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1880) {
          x_1872->next = x_1880.get();
          x_1880->prev = x_1872.get();
          return MakeUnit();
        });
    x_1872->parent = x_1871.get();
    x_1872->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1872->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1775(x_1872);
    OptionMatch(
        x_1872->next, [&](const auto &x_1883) { return MakeUnit(); },
        [&](const auto &x_1882) {
          if (x_1882->meta->pass_0_proc_inited) {
            x_1882->meta->bb_1_has_bb_dirtied = true;
            x_1882->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1882);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1871->children)) {
      if (x_1871->meta->pass_0_proc_inited) {
        x_1871->meta->bb_0_has_bb_dirtied = true;
        x_1871->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1871);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1877)) {
      if (x_1871->meta->pass_0_proc_inited) {
        x_1871->meta->bb_0_has_bb_dirtied = true;
        x_1871->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1775(x_1871);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1872->next, [&](const auto &x_1885) { return MakeUnit(); },
        [&](const auto &x_1884) {
          if (x_1884->meta->pass_0_proc_inited) {
            x_1884->meta->bb_0_has_bb_dirtied = true;
            x_1884->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1775(x_1884);
          } else {
            return MetaWriteMetric();
          }
        });
    x_1872->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1872->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_1815(x_1872);
    if (ListIsSingleton(x_1871->children)) {
      if (x_1871->meta->pass_1_proc_inited) {
        x_1871->meta->bb_2_has_bb_dirtied = true;
        x_1871->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1871);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1877)) {
      if (x_1871->meta->pass_1_proc_inited) {
        x_1871->meta->bb_2_has_bb_dirtied = true;
        x_1871->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1815(x_1871);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1872->next, [&](const auto &x_1887) { return MakeUnit(); },
        [&](const auto &x_1886) {
          if (x_1886->meta->pass_1_proc_inited) {
            x_1886->meta->bb_2_has_bb_dirtied = true;
            x_1886->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1815(x_1886);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1869(x_1874, ListNthExn(x_1871->children, x_1873), x_1872);
  }
}
Unit add_node_x_1721(const auto &x_1870, const auto &x_1871, const auto &x_1872) {
  return x_1869(x_1870, x_1871, x_1872);
}
Unit x_1888(const auto &x_1889) {
  ListIter2(x_1889->children, [&](const auto &x_1890, const auto &x_1891) {
    x_1890->parent = x_1889.get();
    x_1891->parent = x_1889.get();
    x_1890->next = x_1891.get();
    x_1891->prev = x_1890.get();
    x_1888(x_1890);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1889->children),
      [&](const auto &x_1893) {
        x_1889->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1892) {
        x_1889->first = x_1892.get();
        x_1892->parent = x_1889.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1889->children),
      [&](const auto &x_1895) {
        x_1889->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1894) {
        x_1889->last = x_1894.get();
        x_1894->parent = x_1889.get();
        x_1888(x_1894);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1719(const auto &x_1889) { return x_1888(x_1889); }
Unit eval_stmts_x_1715(const auto &x_1896) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1897) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1898) {
      x_1896->meta->bb_2_has_bb_dirtied = true;
      x_1896->meta->bb_2_bb_dirtied = false;
      return eval_stmts_x_1862(x_1896);
    })));
    ListIter(x_1896->children, [&](const auto &x_1899) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1900) {
        x_1899->meta->pass_1_proc_inited = true;
        x_1899->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1899->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_1715(x_1899);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1713(const auto &x_1901) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1902) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1903) {
      x_1901->meta->bb_1_has_bb_dirtied = true;
      x_1901->meta->bb_1_bb_dirtied = false;
      return eval_stmts_x_1866(x_1901);
    })));
    ListIter(x_1901->children, [&](const auto &x_1904) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1905) {
        x_1904->meta->pass_0_proc_inited = true;
        x_1904->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1904->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_1713(x_1904);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1906) {
      x_1901->meta->bb_0_has_bb_dirtied = true;
      x_1901->meta->bb_0_bb_dirtied = false;
      return eval_stmts_x_1868(x_1901);
    })));
    return MakeUnit();
  })));
}
Unit x_1907(const auto &x_1908) {
  ListIter2(x_1908->children, [&](const auto &x_1909, const auto &x_1910) {
    x_1909->parent = x_1908.get();
    x_1910->parent = x_1908.get();
    x_1909->next = x_1910.get();
    x_1910->prev = x_1909.get();
    x_1907(x_1909);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1908->children),
      [&](const auto &x_1912) {
        x_1908->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1911) {
        x_1908->first = x_1911.get();
        x_1911->parent = x_1908.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1908->children),
      [&](const auto &x_1914) {
        x_1908->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1913) {
        x_1908->last = x_1913.get();
        x_1913->parent = x_1908.get();
        x_1907(x_1913);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1709(const auto &x_1908) { return x_1907(x_1908); }
int64_t x_1915(const auto &x_1916) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1916->children, [&](const auto &x_1917) { return x_1915(x_1917); }));
}
int64_t node_size_x_1700(const auto &x_1916) { return x_1915(x_1916); }
int64_t x_1918(const auto &x_1919) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1919->children, [&](const auto &x_1920) { return x_1918(x_1920); }));
}
int64_t layout_size_x_1699(const auto &x_1919) { return x_1918(x_1919); }
LayoutNode x_1921(const auto &x_1922) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_1922)), [&](const auto &x_1923) { return x_1921(x_1923); }));
}
LayoutNode json_to_layout_node_x_1698(const auto &x_1922) { return x_1921(x_1922); }
Node x_1924(const auto &x_1925) {
  return MakeNode(x_1925->name, x_1925->attr, x_1925->prop, x_1925->extern_id,
                  ListMap(x_1925->children, [&](const auto &x_1926) { return x_1924(x_1926); }));
}
Node node_to_fs_node_x_1697(const auto &x_1925) { return x_1924(x_1925); }
Node x_1927(const auto &x_1928) {
  return MakeNode(
      JsonToString(JsonMember("name", x_1928)), JsonToDict(JsonMember("attributes", x_1928)),
      JsonToDict(JsonMember("properties", x_1928)), JsonToInt(JsonMember("id", x_1928)),
      ListMap(JsonToList(JsonMember("children", x_1928)), [&](const auto &x_1929) { return x_1927(x_1929); }));
}
Node json_to_node_aux_x_1696(const auto &x_1928) { return x_1927(x_1928); }
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
        auto x_3497 = FreshJson();
        WriteJson(x_3497, "name", "DB_D");
        WriteJson(x_3497, "diff_num", ReadRef(x_1703));
        WriteJson(x_3497, "read_count", MetricReadCount());
        WriteJson(x_3497, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_3497, "write_count", MetricWriteCount());
        WriteJson(x_3497, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_3497, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_3497, "input_change_count", MetricInputChangeCount());
        WriteJson(x_3497, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_3497, "overhead_time", MetricOverheadCount());
        WriteJson(x_3497, "eval_time", MetricEvalCount());
        WriteJson(x_3497, "html", "");
        WriteJson(x_3497, "command", StackToList(x_1707));
        return x_3497;
      }());
      OutputString(x_1701, "\n");
      ClearStack(x_1707);
      WriteRef(x_1703, IntAdd(ReadRef(x_1703), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_1702, [&](const auto &x_1716) {
        auto x_1717 = JsonOfString(x_1716);
        PushStack(x_1707, x_1717);
        std::string x_3499 = JsonToString(JsonMember("name", x_1717));
        if (x_3499 == "add") {
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
        } else if (x_3499 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_1722) {
            recalculate_internal_x_1723(x_1710);
            recalculate_internal_x_1724(x_1710);
            return MakeUnit();
          })));
          JsonToChannel(x_1701, [&]() {
            auto x_3498 = FreshJson();
            WriteJson(x_3498, "name", "DB_D");
            WriteJson(x_3498, "diff_num", ReadRef(x_1703));
            WriteJson(x_3498, "read_count", MetricReadCount());
            WriteJson(x_3498, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_3498, "write_count", MetricWriteCount());
            WriteJson(x_3498, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_3498, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_3498, "input_change_count", MetricInputChangeCount());
            WriteJson(x_3498, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_3498, "overhead_time", MetricOverheadCount());
            WriteJson(x_3498, "eval_time", MetricEvalCount());
            WriteJson(x_3498, "html", "");
            WriteJson(x_3498, "command", StackToList(x_1707));
            return x_3498;
          }());
          OutputString(x_1701, "\n");
          ClearStack(x_1707);
          WriteRef(x_1703, IntAdd(ReadRef(x_1703), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_3499 == "remove") {
          return remove_node_x_1726(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1725) { return JsonToInt(x_1725); }),
              x_1710, MakeUnit());
        } else if (x_3499 == "replace") {
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
        } else if (x_3499 == "replace_value") {
          return replace_value_x_1732(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1731) { return JsonToInt(x_1731); }),
              x_1710,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1717)), JsonToString(JsonMember("key", x_1717))),
                       JsonToValue(JsonMember("value", x_1717))));
        } else if (x_3499 == "delete_value") {
          return delete_value_x_1734(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1733) { return JsonToInt(x_1733); }),
              x_1710, MakePair(JsonToString(JsonMember("type", x_1717)), JsonToString(JsonMember("key", x_1717))));
        } else if (x_3499 == "insert_value") {
          return insert_value_x_1736(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1735) { return JsonToInt(x_1735); }),
              x_1710,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1717)), JsonToString(JsonMember("key", x_1717))),
                       JsonToValue(JsonMember("value", x_1717))));
        } else if (x_3499 == "layout_remove") {
          return remove_layout_node_x_1738(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1737) { return JsonToInt(x_1737); }),
              x_1711, MakeUnit());
        } else if (x_3499 == "layout_add") {
          return add_layout_node_x_1740(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1739) { return JsonToInt(x_1739); }),
              x_1711, json_to_layout_node_x_1698(JsonMember("node", x_1717)));
        } else if (x_3499 == "layout_replace") {
          return replace_layout_node_x_1742(
              ListMap(JsonToList(JsonMember("path", x_1717)), [&](const auto &x_1741) { return JsonToInt(x_1741); }),
              x_1711, json_to_layout_node_x_1698(JsonMember("node", x_1717)));
        } else if (x_3499 == "layout_info_changed") {
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