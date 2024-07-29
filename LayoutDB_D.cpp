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
struct Meta {
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
Unit var_modified_x_2253(const auto &x_2263);
auto eval_expr_x_2250(const auto &x_2269);
Unit var_modified_x_2248(const auto &x_2286);
auto eval_expr_x_2245(const auto &x_2290);
Unit var_modified_x_2243(const auto &x_2299);
auto eval_expr_x_2240(const auto &x_2305);
Unit var_modified_x_2238(const auto &x_2358);
auto eval_expr_x_2235(const auto &x_2366);
Unit var_modified_x_2233(const auto &x_2391);
auto eval_expr_x_2230(const auto &x_2397);
Unit var_modified_x_2228(const auto &x_2406);
auto eval_expr_x_2225(const auto &x_2412);
Unit var_modified_x_2223(const auto &x_2465);
auto eval_expr_x_2220(const auto &x_2473);
Unit var_modified_x_2218(const auto &x_2494);
auto eval_expr_x_2215(const auto &x_2498);
Unit var_modified_x_2213(const auto &x_2519);
auto eval_expr_x_2210(const auto &x_2523);
Unit var_modified_x_2208(const auto &x_2536);
auto eval_expr_x_2205(const auto &x_2542);
Unit var_modified_x_2203(const auto &x_2563);
auto eval_expr_x_2200(const auto &x_2567);
Unit var_modified_x_2198(const auto &x_2572);
auto eval_expr_x_2195(const auto &x_2576);
Unit var_modified_x_2191(const auto &x_2581);
auto eval_expr_x_2188(const auto &x_2595);
Unit var_modified_x_2186(const auto &x_2672);
auto eval_expr_x_2183(const auto &x_2676);
Unit var_modified_x_2181(const auto &x_2693);
auto eval_expr_x_2178(const auto &x_2701);
Unit var_modified_x_2176(const auto &x_2706);
auto eval_expr_x_2173(const auto &x_2714);
Unit var_modified_x_2171(const auto &x_2723);
auto eval_expr_x_2168(const auto &x_2727);
Unit var_modified_x_2166(const auto &x_2728);
auto eval_expr_x_2163(const auto &x_2732);
Unit var_modified_x_2161(const auto &x_2737);
auto eval_expr_x_2158(const auto &x_2743);
Unit var_modified_x_2156(const auto &x_2754);
auto eval_expr_x_2153(const auto &x_2758);
Unit var_modified_x_2151(const auto &x_2763);
auto eval_expr_x_2148(const auto &x_2769);
Unit var_modified_x_2146(const auto &x_2780);
auto eval_expr_x_2143(const auto &x_2786);
Unit var_modified_x_2141(const auto &x_2811);
auto eval_expr_x_2138(const auto &x_2819);
Unit var_modified_x_2136(const auto &x_2844);
auto eval_expr_x_2133(const auto &x_2848);
Unit var_modified_x_2131(const auto &x_2851);
auto eval_expr_x_2128(const auto &x_2859);
Unit var_modified_x_2126(const auto &x_2868);
auto eval_expr_x_2123(const auto &x_2876);
Unit var_modified_x_2121(const auto &x_2885);
auto eval_expr_x_2118(const auto &x_2891);
Unit var_modified_x_2116(const auto &x_2894);
auto eval_expr_x_2113(const auto &x_2900);
Unit var_modified_x_2111(const auto &x_2903);
auto eval_expr_x_2108(const auto &x_2911);
Unit var_modified_x_2106(const auto &x_2914);
auto eval_expr_x_2103(const auto &x_2922);
Unit var_modified_x_2099(const auto &x_2925);
auto eval_expr_x_2096(const auto &x_2935);
Unit var_modified_x_2094(const auto &x_2964);
auto eval_expr_x_2091(const auto &x_2974);
Unit var_modified_x_2089(const auto &x_2987);
auto eval_expr_x_2086(const auto &x_2997);
Unit var_modified_x_2084(const auto &x_3006);
auto eval_expr_x_2081(const auto &x_3010);
Unit var_modified_x_2079(const auto &x_3019);
auto eval_expr_x_2076(const auto &x_3025);
Unit var_modified_x_2074(const auto &x_3170);
auto eval_expr_x_2071(const auto &x_3174);
Unit var_modified_x_2069(const auto &x_3223);
auto eval_expr_x_2066(const auto &x_3229);
Unit var_modified_x_2064(const auto &x_3232);
auto eval_expr_x_2061(const auto &x_3236);
Unit var_modified_x_2059(const auto &x_3245);
auto eval_expr_x_2056(const auto &x_3255);
Unit var_modified_x_2054(const auto &x_3264);
auto eval_expr_x_2051(const auto &x_3274);
Unit var_modified_x_2049(const auto &x_3283);
auto eval_expr_x_2046(const auto &x_3291);
Unit var_modified_x_2044(const auto &x_3304);
auto eval_expr_x_2041(const auto &x_3308);
Unit var_modified_x_2039(const auto &x_3317);
auto eval_expr_x_2036(const auto &x_3323);
Unit var_modified_x_2034(const auto &x_3476);
auto eval_expr_x_2031(const auto &x_3480);
Unit var_modified_x_2029(const auto &x_3485);
auto eval_expr_x_2026(const auto &x_3489);
Unit var_modified_x_2024(const auto &x_3538);
auto eval_expr_x_2021(const auto &x_3542);
Unit var_modified_x_2019(const auto &x_3555);
auto eval_expr_x_2016(const auto &x_3561);
Unit eval_stmts_x_1943(const auto &x_2014);
Unit eval_stmts_x_1941(const auto &x_2101);
Unit eval_stmts_x_1937(const auto &x_2193);
Unit x_2255(const auto &x_2256);
Unit x_2259(const auto &x_2260);
Unit x_1747(const auto &x_1748, const auto &x_1749, const auto &x_1750);
Unit x_1754(const auto &x_1755, const auto &x_1756, const auto &x_1757);
Unit x_1761(const auto &x_1762, const auto &x_1763, const auto &x_1764);
Unit x_1768(const auto &x_1769, const auto &x_1770, const auto &x_1771);
Unit x_1792(const auto &x_1793, const auto &x_1794, const auto &x_1795);
Unit x_1813(const auto &x_1814, const auto &x_1815, const auto &x_1816);
Unit x_1848(const auto &x_1849, const auto &x_1850, const auto &x_1851);
Unit x_1899(const auto &x_1900);
Unit x_1907(const auto &x_1908, const auto &x_1909, const auto &x_1910);
Unit x_1935(const auto &x_1936);
Unit x_1939(const auto &x_1940);
Unit x_1944(const auto &x_1945, const auto &x_1946, const auto &x_1947);
Unit x_1972(const auto &x_1973);
Unit eval_stmts_x_1719(const auto &x_1980);
Unit eval_stmts_x_1717(const auto &x_1985);
Unit x_1991(const auto &x_1992);
int64_t x_1999(const auto &x_2000);
int64_t x_2002(const auto &x_2003);
LayoutNode x_2005(const auto &x_2006);
Node x_2008(const auto &x_2009);
Node x_2011(const auto &x_2012);
Unit var_modified_x_2253(const auto &x_2263) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2264) {
    auto x_3564 = [&](const auto &x_2267) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2268) {
        if (x_2267->meta->pass_1_proc_inited) {
          x_2267->meta->bb_2_has_bb_dirtied = true;
          x_2267->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2267);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2263->next, [&](const auto &x_2266) { return MakeUnit(); },
        [&](const auto &x_2265) {
          auto x_3565 = x_3564;
          x_3565(x_2265);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2250(const auto &x_2269) {
  if ((x_2269->prev != nullptr) && (!(x_2269->prev)->var_line_break)) {
    return max(x_2269->var_height_external, (x_2269->prev)->var_line_height);
  } else {
    return x_2269->var_height_external;
  }
}
Unit var_modified_x_2248(const auto &x_2286) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2287) {
    auto x_3566 = [&](const auto &x_2288) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2289) {
        if (x_2288->meta->pass_1_proc_inited) {
          x_2288->meta->bb_2_has_bb_dirtied = true;
          x_2288->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2288);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3566(x_2286);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2245(const auto &x_2290) {
  if (eq(x_2290->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2290->var_height_internal;
  }
}
Unit var_modified_x_2243(const auto &x_2299) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2300) {
    auto x_3567 = [&](const auto &x_2301) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2302) {
        if (x_2301->meta->pass_1_proc_inited) {
          x_2301->meta->bb_2_has_bb_dirtied = true;
          x_2301->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2301);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3567(x_2299);
    MakeUnit();
    ListIter(x_2299->children, [&](const auto &x_2303) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2304) {
        if (x_2303->meta->pass_1_proc_inited) {
          x_2303->meta->bb_2_has_bb_dirtied = true;
          x_2303->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2303);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2240(const auto &x_2305) {
  if (x_2305->var_intrinsic_height_is_height) {
    return x_2305->var_intrinsic_height_internal;
  } else {
    if ((x_2305->parent != nullptr) && (x_2305->parent)->var_is_flex_column) {
      return plus(x_2305->var_intrinsic_height_internal,
                  mult(x_2305->var_flex_amount, (x_2305->parent)->var_flex_unit));
    } else {
      if (x_2305->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2305->var_box_height, divide(x_2305->var_height_expr.r.a0, 100.));
      } else {
        return max(x_2305->var_box_height, x_2305->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_2238(const auto &x_2358) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2359) {
    ListIter(x_2358->children, [&](const auto &x_2360) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2361) {
        if (x_2360->meta->pass_1_proc_inited) {
          x_2360->meta->bb_2_has_bb_dirtied = true;
          x_2360->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2360);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3568 = [&](const auto &x_2364) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2365) {
        if (x_2364->meta->pass_1_proc_inited) {
          x_2364->meta->bb_2_has_bb_dirtied = true;
          x_2364->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2364);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2358->next, [&](const auto &x_2363) { return MakeUnit(); },
        [&](const auto &x_2362) {
          auto x_3569 = x_3568;
          x_3569(x_2362);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2235(const auto &x_2366) {
  if (x_2366->prev != nullptr) {
    if (x_2366->var_line_break || (x_2366->prev)->var_line_break) {
      return plus((x_2366->prev)->var_y, (x_2366->prev)->var_line_height);
    } else {
      return (x_2366->prev)->var_y;
    }
  } else {
    if (x_2366->parent != nullptr) {
      return (x_2366->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2233(const auto &x_2391) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2392) {
    auto x_3570 = [&](const auto &x_2395) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2396) {
        if (x_2395->meta->pass_1_proc_inited) {
          x_2395->meta->bb_2_has_bb_dirtied = true;
          x_2395->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2395);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2391->next, [&](const auto &x_2394) { return MakeUnit(); },
        [&](const auto &x_2393) {
          auto x_3571 = x_3570;
          x_3571(x_2393);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2230(const auto &x_2397) {
  if (eq(x_2397->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2397->var_width_internal;
  }
}
Unit var_modified_x_2228(const auto &x_2406) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2407) {
    auto x_3572 = [&](const auto &x_2408) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2409) {
        if (x_2408->meta->pass_1_proc_inited) {
          x_2408->meta->bb_2_has_bb_dirtied = true;
          x_2408->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2408);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3572(x_2406);
    MakeUnit();
    ListIter(x_2406->children, [&](const auto &x_2410) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2411) {
        if (x_2410->meta->pass_1_proc_inited) {
          x_2410->meta->bb_2_has_bb_dirtied = true;
          x_2410->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2410);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2225(const auto &x_2412) {
  if (x_2412->var_intrinsic_width_is_width) {
    return x_2412->var_intrinsic_width_internal;
  } else {
    if ((x_2412->parent != nullptr) && (x_2412->parent)->var_is_flex_row) {
      return plus(x_2412->var_intrinsic_width_internal, mult(x_2412->var_flex_amount, (x_2412->parent)->var_flex_unit));
    } else {
      if (x_2412->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2412->var_box_width, divide(x_2412->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2412->var_box_width, x_2412->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_2223(const auto &x_2465) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2466) {
    ListIter(x_2465->children, [&](const auto &x_2467) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2468) {
        if (x_2467->meta->pass_1_proc_inited) {
          x_2467->meta->bb_2_has_bb_dirtied = true;
          x_2467->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2467);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3573 = [&](const auto &x_2471) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2472) {
        if (x_2471->meta->pass_1_proc_inited) {
          x_2471->meta->bb_2_has_bb_dirtied = true;
          x_2471->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2471);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2465->next, [&](const auto &x_2470) { return MakeUnit(); },
        [&](const auto &x_2469) {
          auto x_3574 = x_3573;
          x_3574(x_2469);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2220(const auto &x_2473) {
  if (x_2473->prev != nullptr) {
    if (x_2473->var_line_break || (x_2473->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2473->prev)->var_x, (x_2473->prev)->var_width_external);
    }
  } else {
    if (x_2473->parent != nullptr) {
      return (x_2473->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2218(const auto &x_2494) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2495) {
    ListIter(x_2494->children, [&](const auto &x_2496) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2497) {
        if (x_2496->meta->pass_1_proc_inited) {
          x_2496->meta->bb_2_has_bb_dirtied = true;
          x_2496->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2496);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2215(const auto &x_2498) {
  if (gt(x_2498->var_left_over, 0.)) {
    return divide(x_2498->var_left_over, x_2498->var_flex_grow_sum);
  } else {
    return divide(x_2498->var_left_over, x_2498->var_flex_shrink_sum);
  }
}
Unit var_modified_x_2213(const auto &x_2519) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2520) {
    auto x_3575 = [&](const auto &x_2521) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2522) {
        if (x_2521->meta->pass_1_proc_inited) {
          x_2521->meta->bb_2_has_bb_dirtied = true;
          x_2521->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2521);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3575(x_2519);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2210(const auto &x_2523) {
  if ((x_2523->parent != nullptr) && gt((x_2523->parent)->var_left_over, 0.)) {
    return x_2523->var_flex_grow;
  } else {
    return x_2523->var_flex_shrink;
  }
}
Unit var_modified_x_2208(const auto &x_2536) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2537) {
    auto x_3576 = [&](const auto &x_2538) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2539) {
        if (x_2538->meta->pass_1_proc_inited) {
          x_2538->meta->bb_2_has_bb_dirtied = true;
          x_2538->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2538);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3576(x_2536);
    MakeUnit();
    ListIter(x_2536->children, [&](const auto &x_2540) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2541) {
        if (x_2540->meta->pass_1_proc_inited) {
          x_2540->meta->bb_2_has_bb_dirtied = true;
          x_2540->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2540);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2205(const auto &x_2542) {
  if (x_2542->var_is_flex_row) {
    return minus(x_2542->var_box_width, (x_2542->last != nullptr) ? ((x_2542->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2542->var_box_height, (x_2542->last != nullptr) ? ((x_2542->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_2203(const auto &x_2563) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2564) {
    auto x_3577 = [&](const auto &x_2565) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2566) {
        if (x_2565->meta->pass_1_proc_inited) {
          x_2565->meta->bb_2_has_bb_dirtied = true;
          x_2565->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2565);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3577(x_2563);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2200(const auto &x_2567) {
  if (x_2567->parent != nullptr) {
    return (x_2567->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_2198(const auto &x_2572) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2573) {
    auto x_3578 = [&](const auto &x_2574) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2575) {
        if (x_2574->meta->pass_1_proc_inited) {
          x_2574->meta->bb_2_has_bb_dirtied = true;
          x_2574->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2574);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3578(x_2572);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2195(const auto &x_2576) {
  if (x_2576->parent != nullptr) {
    return (x_2576->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_2191(const auto &x_2581) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2582) {
    auto x_3579 = [&](const auto &x_2583) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2584) {
        if (x_2583->meta->pass_0_proc_inited) {
          x_2583->meta->bb_0_has_bb_dirtied = true;
          x_2583->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2583);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3579(x_2581);
    MakeUnit();
    auto x_3580 = [&](const auto &x_2587) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2588) {
        if (x_2587->meta->pass_0_proc_inited) {
          x_2587->meta->bb_0_has_bb_dirtied = true;
          x_2587->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2587);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2581->next, [&](const auto &x_2586) { return MakeUnit(); },
        [&](const auto &x_2585) {
          auto x_3583 = x_3580;
          x_3583(x_2585);
          return MakeUnit();
        });
    auto x_3581 = [&](const auto &x_2589) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2590) {
        if (x_2589->meta->pass_1_proc_inited) {
          x_2589->meta->bb_2_has_bb_dirtied = true;
          x_2589->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2589);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3581(x_2581);
    MakeUnit();
    auto x_3582 = [&](const auto &x_2593) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2594) {
        if (x_2593->meta->pass_1_proc_inited) {
          x_2593->meta->bb_2_has_bb_dirtied = true;
          x_2593->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2593);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2581->next, [&](const auto &x_2592) { return MakeUnit(); },
        [&](const auto &x_2591) {
          auto x_3584 = x_3582;
          x_3584(x_2591);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2188(const auto &x_2595) {
  if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_2595->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_2595->parent != nullptr) &&
          (eq((x_2595->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_2595->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_2595->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_2595->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_2186(const auto &x_2672) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2673) {
    ListIter(x_2672->children, [&](const auto &x_2674) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2675) {
        if (x_2674->meta->pass_0_proc_inited) {
          x_2674->meta->bb_1_has_bb_dirtied = true;
          x_2674->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2674);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2183(const auto &x_2676) {
  return (((!(x_2676->parent != nullptr)) || (x_2676->parent)->var_visible) &&
          (neq(x_2676->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_2676->var_inside_svg) && (!x_2676->var_disabled))));
}
Unit var_modified_x_2181(const auto &x_2693) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2694) {
    auto x_3585 = [&](const auto &x_2695) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2696) {
        if (x_2695->meta->pass_0_proc_inited) {
          x_2695->meta->bb_1_has_bb_dirtied = true;
          x_2695->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2695);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3585(x_2693);
    MakeUnit();
    ListIter(x_2693->children, [&](const auto &x_2697) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2698) {
        if (x_2697->meta->pass_0_proc_inited) {
          x_2697->meta->bb_1_has_bb_dirtied = true;
          x_2697->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2697);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3586 = [&](const auto &x_2699) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2700) {
        if (x_2699->meta->pass_0_proc_inited) {
          x_2699->meta->bb_0_has_bb_dirtied = true;
          x_2699->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2699);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3586(x_2693);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2178(const auto &x_2701) {
  if (eq(x_2701->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_2701->parent != nullptr) && (x_2701->parent)->var_disabled);
  }
}
Unit var_modified_x_2176(const auto &x_2706) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2707) {
    auto x_3587 = [&](const auto &x_2708) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2709) {
        if (x_2708->meta->pass_0_proc_inited) {
          x_2708->meta->bb_1_has_bb_dirtied = true;
          x_2708->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2708);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3587(x_2706);
    MakeUnit();
    ListIter(x_2706->children, [&](const auto &x_2710) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2711) {
        if (x_2710->meta->pass_0_proc_inited) {
          x_2710->meta->bb_1_has_bb_dirtied = true;
          x_2710->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2710);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3588 = [&](const auto &x_2712) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2713) {
        if (x_2712->meta->pass_0_proc_inited) {
          x_2712->meta->bb_0_has_bb_dirtied = true;
          x_2712->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2712);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3588(x_2706);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2173(const auto &x_2714) {
  return ((x_2714->parent != nullptr) && ((x_2714->parent)->var_is_svg_block || (x_2714->parent)->var_inside_svg));
}
Unit var_modified_x_2171(const auto &x_2723) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2724) {
    ListIter(x_2723->children, [&](const auto &x_2725) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2726) {
        if (x_2725->meta->pass_0_proc_inited) {
          x_2725->meta->bb_1_has_bb_dirtied = true;
          x_2725->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2725);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2168(const auto &x_2727) { return eq(x_2727->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_2166(const auto &x_2728) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2729) {
    auto x_3589 = [&](const auto &x_2730) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2731) {
        if (x_2730->meta->pass_0_proc_inited) {
          x_2730->meta->bb_0_has_bb_dirtied = true;
          x_2730->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2730);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3589(x_2728);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2163(const auto &x_2732) {
  return neq(x_2732->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2161(const auto &x_2737) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2738) {
    auto x_3590 = [&](const auto &x_2739) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2740) {
        if (x_2739->meta->pass_0_proc_inited) {
          x_2739->meta->bb_1_has_bb_dirtied = true;
          x_2739->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2739);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3590(x_2737);
    MakeUnit();
    auto x_3591 = [&](const auto &x_2741) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2742) {
        if (x_2741->meta->pass_0_proc_inited) {
          x_2741->meta->bb_0_has_bb_dirtied = true;
          x_2741->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2741);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3591(x_2737);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2158(const auto &x_2743) {
  if (!x_2743->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2743->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_2743->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2743->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2156(const auto &x_2754) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2755) {
    auto x_3592 = [&](const auto &x_2756) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2757) {
        if (x_2756->meta->pass_0_proc_inited) {
          x_2756->meta->bb_0_has_bb_dirtied = true;
          x_2756->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2756);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3592(x_2754);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2153(const auto &x_2758) {
  return neq(x_2758->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2151(const auto &x_2763) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2764) {
    auto x_3593 = [&](const auto &x_2765) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2766) {
        if (x_2765->meta->pass_0_proc_inited) {
          x_2765->meta->bb_1_has_bb_dirtied = true;
          x_2765->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2765);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3593(x_2763);
    MakeUnit();
    auto x_3594 = [&](const auto &x_2767) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2768) {
        if (x_2767->meta->pass_0_proc_inited) {
          x_2767->meta->bb_0_has_bb_dirtied = true;
          x_2767->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2767);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3594(x_2763);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2148(const auto &x_2769) {
  if (!x_2769->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2769->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_2769->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2769->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2146(const auto &x_2780) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2781) {
    ListIter(x_2780->children, [&](const auto &x_2782) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2783) {
        if (x_2782->meta->pass_0_proc_inited) {
          x_2782->meta->bb_0_has_bb_dirtied = true;
          x_2782->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2782);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    ListIter(x_2780->children, [&](const auto &x_2784) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2785) {
        if (x_2784->meta->pass_1_proc_inited) {
          x_2784->meta->bb_2_has_bb_dirtied = true;
          x_2784->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2784);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2143(const auto &x_2786) {
  if ((x_2786->parent != nullptr) &&
      (eq((x_2786->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2786->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2786->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_2786->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2141(const auto &x_2811) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2812) {
    ListIter(x_2811->children, [&](const auto &x_2813) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2814) {
        if (x_2813->meta->pass_0_proc_inited) {
          x_2813->meta->bb_0_has_bb_dirtied = true;
          x_2813->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2813);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3595 = [&](const auto &x_2815) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2816) {
        if (x_2815->meta->pass_1_proc_inited) {
          x_2815->meta->bb_2_has_bb_dirtied = true;
          x_2815->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2815);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3595(x_2811);
    MakeUnit();
    ListIter(x_2811->children, [&](const auto &x_2817) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2818) {
        if (x_2817->meta->pass_1_proc_inited) {
          x_2817->meta->bb_2_has_bb_dirtied = true;
          x_2817->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2817);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2138(const auto &x_2819) {
  if ((x_2819->parent != nullptr) &&
      (eq((x_2819->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2819->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2819->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2136(const auto &x_2844) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2845) {
    ListIter(x_2844->children, [&](const auto &x_2846) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2847) {
        if (x_2846->meta->pass_0_proc_inited) {
          x_2846->meta->bb_1_has_bb_dirtied = true;
          x_2846->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2846);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_2133(const auto &x_2848) {
  if (x_2848->has_prop_flex_direction) {
    return x_2848->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_2131(const auto &x_2851) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2852) {
    auto x_3596 = [&](const auto &x_2855) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2856) {
        if (x_2855->meta->pass_0_proc_inited) {
          x_2855->meta->bb_1_has_bb_dirtied = true;
          x_2855->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2855);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2851->next, [&](const auto &x_2854) { return MakeUnit(); },
        [&](const auto &x_2853) {
          auto x_3598 = x_3596;
          x_3598(x_2853);
          return MakeUnit();
        });
    auto x_3597 = [&](const auto &x_2857) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2858) {
        if (x_2857->meta->pass_1_proc_inited) {
          x_2857->meta->bb_2_has_bb_dirtied = true;
          x_2857->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2857);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3597(x_2851);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2128(const auto &x_2859) {
  return plus((x_2859->prev != nullptr) ? ((x_2859->prev)->var_flex_shrink_sum) : (0.), x_2859->var_flex_shrink);
}
Unit var_modified_x_2126(const auto &x_2868) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2869) {
    auto x_3599 = [&](const auto &x_2872) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2873) {
        if (x_2872->meta->pass_0_proc_inited) {
          x_2872->meta->bb_1_has_bb_dirtied = true;
          x_2872->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2872);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2868->next, [&](const auto &x_2871) { return MakeUnit(); },
        [&](const auto &x_2870) {
          auto x_3601 = x_3599;
          x_3601(x_2870);
          return MakeUnit();
        });
    auto x_3600 = [&](const auto &x_2874) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2875) {
        if (x_2874->meta->pass_1_proc_inited) {
          x_2874->meta->bb_2_has_bb_dirtied = true;
          x_2874->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2874);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3600(x_2868);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2123(const auto &x_2876) {
  return plus((x_2876->prev != nullptr) ? ((x_2876->prev)->var_flex_grow_sum) : (0.), x_2876->var_flex_grow);
}
Unit var_modified_x_2121(const auto &x_2885) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2886) {
    auto x_3602 = [&](const auto &x_2887) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2888) {
        if (x_2887->meta->pass_0_proc_inited) {
          x_2887->meta->bb_1_has_bb_dirtied = true;
          x_2887->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2887);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3602(x_2885);
    MakeUnit();
    auto x_3603 = [&](const auto &x_2889) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2890) {
        if (x_2889->meta->pass_1_proc_inited) {
          x_2889->meta->bb_2_has_bb_dirtied = true;
          x_2889->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2889);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3603(x_2885);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2118(const auto &x_2891) {
  if (x_2891->has_prop_flex_shrink) {
    return (x_2891->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2116(const auto &x_2894) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2895) {
    auto x_3604 = [&](const auto &x_2896) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2897) {
        if (x_2896->meta->pass_0_proc_inited) {
          x_2896->meta->bb_1_has_bb_dirtied = true;
          x_2896->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2896);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3604(x_2894);
    MakeUnit();
    auto x_3605 = [&](const auto &x_2898) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2899) {
        if (x_2898->meta->pass_1_proc_inited) {
          x_2898->meta->bb_2_has_bb_dirtied = true;
          x_2898->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2898);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3605(x_2894);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2113(const auto &x_2900) {
  if (x_2900->has_prop_flex_grow) {
    return (x_2900->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2111(const auto &x_2903) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2904) {
    auto x_3606 = [&](const auto &x_2905) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2906) {
        if (x_2905->meta->pass_0_proc_inited) {
          x_2905->meta->bb_1_has_bb_dirtied = true;
          x_2905->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2905);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3606(x_2903);
    MakeUnit();
    auto x_3607 = [&](const auto &x_2907) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2908) {
        if (x_2907->meta->pass_0_proc_inited) {
          x_2907->meta->bb_0_has_bb_dirtied = true;
          x_2907->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2907);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3607(x_2903);
    MakeUnit();
    auto x_3608 = [&](const auto &x_2909) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2910) {
        if (x_2909->meta->pass_1_proc_inited) {
          x_2909->meta->bb_2_has_bb_dirtied = true;
          x_2909->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2909);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3608(x_2903);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2108(const auto &x_2911) {
  if (x_2911->has_prop_position) {
    return x_2911->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_2106(const auto &x_2914) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2915) {
    auto x_3609 = [&](const auto &x_2916) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2917) {
        if (x_2916->meta->pass_0_proc_inited) {
          x_2916->meta->bb_1_has_bb_dirtied = true;
          x_2916->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2916);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3609(x_2914);
    MakeUnit();
    ListIter(x_2914->children, [&](const auto &x_2918) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2919) {
        if (x_2918->meta->pass_0_proc_inited) {
          x_2918->meta->bb_1_has_bb_dirtied = true;
          x_2918->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2918);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_3610 = [&](const auto &x_2920) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2921) {
        if (x_2920->meta->pass_0_proc_inited) {
          x_2920->meta->bb_0_has_bb_dirtied = true;
          x_2920->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2920);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3610(x_2914);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2103(const auto &x_2922) {
  if (x_2922->has_prop_display) {
    return x_2922->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_2099(const auto &x_2925) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2926) {
    auto x_3611 = [&](const auto &x_2929) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2930) {
        if (x_2929->meta->pass_0_proc_inited) {
          x_2929->meta->bb_0_has_bb_dirtied = true;
          x_2929->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2929);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_2925->next == nullptr) {
      auto x_3613 = x_3611;
      OptionMatch(
          x_2925->parent, [&](const auto &x_2928) { return MakeUnit(); },
          [&](const auto &x_2927) {
            auto x_3615 = x_3613;
            x_3615(x_2927);
            return MakeUnit();
          });
    }
    auto x_3612 = [&](const auto &x_2933) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2934) {
        if (x_2933->meta->pass_0_proc_inited) {
          x_2933->meta->bb_0_has_bb_dirtied = true;
          x_2933->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2933);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2925->next, [&](const auto &x_2932) { return MakeUnit(); },
        [&](const auto &x_2931) {
          auto x_3614 = x_3612;
          x_3614(x_2931);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2096(const auto &x_2935) {
  if (x_2935->prev != nullptr) {
    if (x_2935->var_line_break) {
      return plus((x_2935->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2935->prev)->var_intrinsic_current_line_height, x_2935->var_intrinsic_height_external));
    } else {
      return (x_2935->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2935->var_line_break) {
      return x_2935->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2094(const auto &x_2964) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2965) {
    auto x_3616 = [&](const auto &x_2968) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2969) {
        if (x_2968->meta->pass_0_proc_inited) {
          x_2968->meta->bb_0_has_bb_dirtied = true;
          x_2968->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2968);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_2964->next == nullptr) {
      auto x_3618 = x_3616;
      OptionMatch(
          x_2964->parent, [&](const auto &x_2967) { return MakeUnit(); },
          [&](const auto &x_2966) {
            auto x_3620 = x_3618;
            x_3620(x_2966);
            return MakeUnit();
          });
    }
    auto x_3617 = [&](const auto &x_2972) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2973) {
        if (x_2972->meta->pass_0_proc_inited) {
          x_2972->meta->bb_0_has_bb_dirtied = true;
          x_2972->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2972);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2964->next, [&](const auto &x_2971) { return MakeUnit(); },
        [&](const auto &x_2970) {
          auto x_3619 = x_3617;
          x_3619(x_2970);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2091(const auto &x_2974) {
  if (x_2974->var_line_break) {
    return 0.;
  } else {
    return max(x_2974->var_intrinsic_height_external,
               (x_2974->prev != nullptr) ? ((x_2974->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_2089(const auto &x_2987) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2988) {
    auto x_3621 = [&](const auto &x_2991) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2992) {
        if (x_2991->meta->pass_0_proc_inited) {
          x_2991->meta->bb_0_has_bb_dirtied = true;
          x_2991->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_2991);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_2987->next, [&](const auto &x_2990) { return MakeUnit(); },
        [&](const auto &x_2989) {
          auto x_3623 = x_3621;
          x_3623(x_2989);
          return MakeUnit();
        });
    auto x_3622 = [&](const auto &x_2995) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2996) {
        if (x_2995->meta->pass_1_proc_inited) {
          x_2995->meta->bb_2_has_bb_dirtied = true;
          x_2995->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_2995);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_2987->next == nullptr) {
      auto x_3624 = x_3622;
      OptionMatch(
          x_2987->parent, [&](const auto &x_2994) { return MakeUnit(); },
          [&](const auto &x_2993) {
            auto x_3625 = x_3624;
            x_3625(x_2993);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_2086(const auto &x_2997) {
  return plus((x_2997->prev != nullptr) ? ((x_2997->prev)->var_intrinsic_height_sum) : (0.),
              x_2997->var_intrinsic_height_external);
}
Unit var_modified_x_2084(const auto &x_3006) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3007) {
    auto x_3626 = [&](const auto &x_3008) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3009) {
        if (x_3008->meta->pass_0_proc_inited) {
          x_3008->meta->bb_0_has_bb_dirtied = true;
          x_3008->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3008);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3626(x_3006);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2081(const auto &x_3010) {
  if (eq(x_3010->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3010->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_2079(const auto &x_3019) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3020) {
    auto x_3627 = [&](const auto &x_3021) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3022) {
        if (x_3021->meta->pass_0_proc_inited) {
          x_3021->meta->bb_0_has_bb_dirtied = true;
          x_3021->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3021);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3627(x_3019);
    MakeUnit();
    auto x_3628 = [&](const auto &x_3023) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3024) {
        if (x_3023->meta->pass_1_proc_inited) {
          x_3023->meta->bb_2_has_bb_dirtied = true;
          x_3023->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_3023);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3628(x_3019);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2076(const auto &x_3025) {
  if (eq(x_3025->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3025->var_inside_svg) {
      return 0.;
    } else {
      if (x_3025->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3025->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3025->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_3025->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_3025->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3025->var_height_expr.r.a0;
          } else {
            if (x_3025->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_3025->var_height_expr.r.a0;
            } else {
              return x_3025->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_3025->var_children_intrinsic_height,
              (eq(x_3025->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_3025->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3025->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3025->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_3025->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3025->var_has_height_attr &&
                                                  (x_3025->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3025->var_height_attr_expr.r.a0)
                                                     : ((x_3025->has_attr_viewBox)
                                                            ? (x_3025->attr_viewBox.r.a3)
                                                            : (mult((x_3025->attr_viewBox.r.a3),
                                                                    divide(x_3025->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3025->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3025->var_has_height_attr)
                                                            ? (x_3025->var_height_attr_expr.r.a0)
                                                            : ((x_3025->has_attr_image_height &&
                                                                (!x_3025->var_has_width_attr))
                                                                   ? (int_to_float(x_3025->attr_image_height))
                                                                   : ((neq(x_3025->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3025->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3025->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_3025->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_3025->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_3025->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2074(const auto &x_3170) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3171) {
    auto x_3629 = [&](const auto &x_3172) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3173) {
        if (x_3172->meta->pass_1_proc_inited) {
          x_3172->meta->bb_2_has_bb_dirtied = true;
          x_3172->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_3172);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3629(x_3170);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2071(const auto &x_3174) {
  if (eq(x_3174->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3174->var_inside_svg || x_3174->var_disabled)) {
    return true;
  } else {
    if ((x_3174->parent != nullptr) && (x_3174->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3174->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3174->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3174->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3174->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_3174->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2069(const auto &x_3223) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3224) {
    auto x_3630 = [&](const auto &x_3225) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3226) {
        if (x_3225->meta->pass_0_proc_inited) {
          x_3225->meta->bb_0_has_bb_dirtied = true;
          x_3225->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3225);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3630(x_3223);
    MakeUnit();
    auto x_3631 = [&](const auto &x_3227) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3228) {
        if (x_3227->meta->pass_1_proc_inited) {
          x_3227->meta->bb_2_has_bb_dirtied = true;
          x_3227->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_3227);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3631(x_3223);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2066(const auto &x_3229) {
  if (x_3229->has_prop_height) {
    return x_3229->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_2064(const auto &x_3232) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3233) {
    auto x_3632 = [&](const auto &x_3234) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3235) {
        if (x_3234->meta->pass_0_proc_inited) {
          x_3234->meta->bb_0_has_bb_dirtied = true;
          x_3234->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3234);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3632(x_3232);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2061(const auto &x_3236) {
  if (x_3236->last != nullptr) {
    return plus((x_3236->last)->var_finished_intrinsic_height_sum, (x_3236->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2059(const auto &x_3245) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3246) {
    auto x_3633 = [&](const auto &x_3249) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3250) {
        if (x_3249->meta->pass_0_proc_inited) {
          x_3249->meta->bb_0_has_bb_dirtied = true;
          x_3249->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3249);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_3245->next, [&](const auto &x_3248) { return MakeUnit(); },
        [&](const auto &x_3247) {
          auto x_3635 = x_3633;
          x_3635(x_3247);
          return MakeUnit();
        });
    auto x_3634 = [&](const auto &x_3253) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3254) {
        if (x_3253->meta->pass_1_proc_inited) {
          x_3253->meta->bb_2_has_bb_dirtied = true;
          x_3253->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_3253);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_3245->next == nullptr) {
      auto x_3636 = x_3634;
      OptionMatch(
          x_3245->parent, [&](const auto &x_3252) { return MakeUnit(); },
          [&](const auto &x_3251) {
            auto x_3637 = x_3636;
            x_3637(x_3251);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_2056(const auto &x_3255) {
  return plus((x_3255->prev != nullptr) ? ((x_3255->prev)->var_intrinsic_width_sum) : (0.),
              x_3255->var_intrinsic_width_external);
}
Unit var_modified_x_2054(const auto &x_3264) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3265) {
    auto x_3638 = [&](const auto &x_3268) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3269) {
        if (x_3268->meta->pass_0_proc_inited) {
          x_3268->meta->bb_0_has_bb_dirtied = true;
          x_3268->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3268);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_3264->next == nullptr) {
      auto x_3640 = x_3638;
      OptionMatch(
          x_3264->parent, [&](const auto &x_3267) { return MakeUnit(); },
          [&](const auto &x_3266) {
            auto x_3642 = x_3640;
            x_3642(x_3266);
            return MakeUnit();
          });
    }
    auto x_3639 = [&](const auto &x_3272) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3273) {
        if (x_3272->meta->pass_0_proc_inited) {
          x_3272->meta->bb_0_has_bb_dirtied = true;
          x_3272->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3272);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_3264->next, [&](const auto &x_3271) { return MakeUnit(); },
        [&](const auto &x_3270) {
          auto x_3641 = x_3639;
          x_3641(x_3270);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2051(const auto &x_3274) {
  return max(x_3274->var_intrinsic_current_line_width,
             (x_3274->prev != nullptr) ? ((x_3274->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_2049(const auto &x_3283) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3284) {
    auto x_3643 = [&](const auto &x_3285) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3286) {
        if (x_3285->meta->pass_0_proc_inited) {
          x_3285->meta->bb_0_has_bb_dirtied = true;
          x_3285->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3285);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3643(x_3283);
    MakeUnit();
    auto x_3644 = [&](const auto &x_3289) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3290) {
        if (x_3289->meta->pass_0_proc_inited) {
          x_3289->meta->bb_0_has_bb_dirtied = true;
          x_3289->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3289);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_3283->next, [&](const auto &x_3288) { return MakeUnit(); },
        [&](const auto &x_3287) {
          auto x_3645 = x_3644;
          x_3645(x_3287);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_2046(const auto &x_3291) {
  return plus(x_3291->var_intrinsic_width_external,
              ((x_3291->prev != nullptr) && (!(x_3291->prev)->var_line_break))
                  ? ((x_3291->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_2044(const auto &x_3304) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3305) {
    auto x_3646 = [&](const auto &x_3306) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3307) {
        if (x_3306->meta->pass_0_proc_inited) {
          x_3306->meta->bb_0_has_bb_dirtied = true;
          x_3306->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3306);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3646(x_3304);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2041(const auto &x_3308) {
  if (eq(x_3308->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3308->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_2039(const auto &x_3317) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3318) {
    auto x_3647 = [&](const auto &x_3319) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3320) {
        if (x_3319->meta->pass_0_proc_inited) {
          x_3319->meta->bb_0_has_bb_dirtied = true;
          x_3319->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3319);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3647(x_3317);
    MakeUnit();
    auto x_3648 = [&](const auto &x_3321) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3322) {
        if (x_3321->meta->pass_1_proc_inited) {
          x_3321->meta->bb_2_has_bb_dirtied = true;
          x_3321->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_3321);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3648(x_3317);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2036(const auto &x_3323) {
  if (eq(x_3323->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3323->var_inside_svg) {
      return 0.;
    } else {
      if (x_3323->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3323->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3323->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_3323->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_3323->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_3323->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_3323->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3323->var_width_expr.r.a0;
          } else {
            return x_3323->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_3323->var_children_intrinsic_width,
              (eq(x_3323->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_3323->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3323->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3323->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_3323->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3323->var_has_width_attr &&
                                                  (x_3323->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3323->var_width_attr_expr.r.a0)
                                                     : (((!x_3323->var_has_width_attr) && x_3323->has_attr_viewBox)
                                                            ? (x_3323->attr_viewBox.r.a2)
                                                            : (mult((x_3323->attr_viewBox.r.a2),
                                                                    divide(x_3323->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3323->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3323->var_has_width_attr)
                                                            ? (x_3323->var_width_attr_expr.r.a0)
                                                            : ((x_3323->has_attr_image_width &&
                                                                (!x_3323->var_has_height_attr))
                                                                   ? (int_to_float(x_3323->attr_image_width))
                                                                   : ((neq(x_3323->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3323->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3323->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_3323->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_3323->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_3323->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2034(const auto &x_3476) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3477) {
    auto x_3649 = [&](const auto &x_3478) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3479) {
        if (x_3478->meta->pass_0_proc_inited) {
          x_3478->meta->bb_0_has_bb_dirtied = true;
          x_3478->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3478);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3649(x_3476);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2031(const auto &x_3480) {
  if (x_3480->last != nullptr) {
    return (x_3480->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_2029(const auto &x_3485) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3486) {
    auto x_3650 = [&](const auto &x_3487) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3488) {
        if (x_3487->meta->pass_1_proc_inited) {
          x_3487->meta->bb_2_has_bb_dirtied = true;
          x_3487->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_3487);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3650(x_3485);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2026(const auto &x_3489) {
  if (eq(x_3489->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3489->var_inside_svg || x_3489->var_disabled)) {
    return true;
  } else {
    if ((x_3489->parent != nullptr) && (x_3489->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3489->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3489->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3489->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3489->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_3489->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2024(const auto &x_3538) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3539) {
    auto x_3651 = [&](const auto &x_3540) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3541) {
        if (x_3540->meta->pass_0_proc_inited) {
          x_3540->meta->bb_0_has_bb_dirtied = true;
          x_3540->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3540);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3651(x_3538);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2021(const auto &x_3542) {
  if (eq(x_3542->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_3542->var_inside_svg) {
      return true;
    } else {
      if (x_3542->var_disabled) {
        return true;
      } else {if ( eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_3542->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_2019(const auto &x_3555) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3556) {
    auto x_3652 = [&](const auto &x_3557) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3558) {
        if (x_3557->meta->pass_0_proc_inited) {
          x_3557->meta->bb_0_has_bb_dirtied = true;
          x_3557->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_3557);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3652(x_3555);
    MakeUnit();
    auto x_3653 = [&](const auto &x_3559) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3560) {
        if (x_3559->meta->pass_1_proc_inited) {
          x_3559->meta->bb_2_has_bb_dirtied = true;
          x_3559->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_3559);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_3653(x_3555);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_2016(const auto &x_3561) {
  if (x_3561->has_prop_width) {
    return x_3561->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_1943(const auto &x_2014) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2015) {
    WriteMetric();
    auto x_2017 = eval_expr_x_2016(x_2014);
    if (x_2014->has_var_width_expr) {
      auto x_2018 = x_2014->var_width_expr;
      if (!EqualValue(x_2018, x_2017)) {
        var_modified_x_2019(x_2014);
      }
    }
    x_2014->has_var_width_expr = true;
    x_2014->var_width_expr = AsDEString(x_2017);
    WriteMetric();
    auto x_2022 = eval_expr_x_2021(x_2014);
    if (x_2014->has_var_is_default_case) {
      auto x_2023 = x_2014->var_is_default_case;
      if (!EqualValue(x_2023, x_2022)) {
        var_modified_x_2024(x_2014);
      }
    }
    x_2014->has_var_is_default_case = true;
    x_2014->var_is_default_case = Asbool(x_2022);
    WriteMetric();
    auto x_2027 = eval_expr_x_2026(x_2014);
    if (x_2014->has_var_intrinsic_width_is_width) {
      auto x_2028 = x_2014->var_intrinsic_width_is_width;
      if (!EqualValue(x_2028, x_2027)) {
        var_modified_x_2029(x_2014);
      }
    }
    x_2014->has_var_intrinsic_width_is_width = true;
    x_2014->var_intrinsic_width_is_width = Asbool(x_2027);
    WriteMetric();
    auto x_2032 = eval_expr_x_2031(x_2014);
    if (x_2014->has_var_children_intrinsic_width) {
      auto x_2033 = x_2014->var_children_intrinsic_width;
      if (!EqualValue(x_2033, x_2032)) {
        var_modified_x_2034(x_2014);
      }
    }
    x_2014->has_var_children_intrinsic_width = true;
    x_2014->var_children_intrinsic_width = Asdouble(x_2032);
    WriteMetric();
    auto x_2037 = eval_expr_x_2036(x_2014);
    if (x_2014->has_var_intrinsic_width_internal) {
      auto x_2038 = x_2014->var_intrinsic_width_internal;
      if (!EqualValue(x_2038, x_2037)) {
        var_modified_x_2039(x_2014);
      }
    }
    x_2014->has_var_intrinsic_width_internal = true;
    x_2014->var_intrinsic_width_internal = Asdouble(x_2037);
    WriteMetric();
    auto x_2042 = eval_expr_x_2041(x_2014);
    if (x_2014->has_var_intrinsic_width_external) {
      auto x_2043 = x_2014->var_intrinsic_width_external;
      if (!EqualValue(x_2043, x_2042)) {
        var_modified_x_2044(x_2014);
      }
    }
    x_2014->has_var_intrinsic_width_external = true;
    x_2014->var_intrinsic_width_external = Asdouble(x_2042);
    WriteMetric();
    auto x_2047 = eval_expr_x_2046(x_2014);
    if (x_2014->has_var_intrinsic_current_line_width) {
      auto x_2048 = x_2014->var_intrinsic_current_line_width;
      if (!EqualValue(x_2048, x_2047)) {
        var_modified_x_2049(x_2014);
      }
    }
    x_2014->has_var_intrinsic_current_line_width = true;
    x_2014->var_intrinsic_current_line_width = Asdouble(x_2047);
    WriteMetric();
    auto x_2052 = eval_expr_x_2051(x_2014);
    if (x_2014->has_var_intrinsic_width_max) {
      auto x_2053 = x_2014->var_intrinsic_width_max;
      if (!EqualValue(x_2053, x_2052)) {
        var_modified_x_2054(x_2014);
      }
    }
    x_2014->has_var_intrinsic_width_max = true;
    x_2014->var_intrinsic_width_max = Asdouble(x_2052);
    WriteMetric();
    auto x_2057 = eval_expr_x_2056(x_2014);
    if (x_2014->has_var_intrinsic_width_sum) {
      auto x_2058 = x_2014->var_intrinsic_width_sum;
      if (!EqualValue(x_2058, x_2057)) {
        var_modified_x_2059(x_2014);
      }
    }
    x_2014->has_var_intrinsic_width_sum = true;
    x_2014->var_intrinsic_width_sum = Asdouble(x_2057);
    WriteMetric();
    auto x_2062 = eval_expr_x_2061(x_2014);
    if (x_2014->has_var_children_intrinsic_height) {
      auto x_2063 = x_2014->var_children_intrinsic_height;
      if (!EqualValue(x_2063, x_2062)) {
        var_modified_x_2064(x_2014);
      }
    }
    x_2014->has_var_children_intrinsic_height = true;
    x_2014->var_children_intrinsic_height = Asdouble(x_2062);
    WriteMetric();
    auto x_2067 = eval_expr_x_2066(x_2014);
    if (x_2014->has_var_height_expr) {
      auto x_2068 = x_2014->var_height_expr;
      if (!EqualValue(x_2068, x_2067)) {
        var_modified_x_2069(x_2014);
      }
    }
    x_2014->has_var_height_expr = true;
    x_2014->var_height_expr = AsDEString(x_2067);
    WriteMetric();
    auto x_2072 = eval_expr_x_2071(x_2014);
    if (x_2014->has_var_intrinsic_height_is_height) {
      auto x_2073 = x_2014->var_intrinsic_height_is_height;
      if (!EqualValue(x_2073, x_2072)) {
        var_modified_x_2074(x_2014);
      }
    }
    x_2014->has_var_intrinsic_height_is_height = true;
    x_2014->var_intrinsic_height_is_height = Asbool(x_2072);
    WriteMetric();
    auto x_2077 = eval_expr_x_2076(x_2014);
    if (x_2014->has_var_intrinsic_height_internal) {
      auto x_2078 = x_2014->var_intrinsic_height_internal;
      if (!EqualValue(x_2078, x_2077)) {
        var_modified_x_2079(x_2014);
      }
    }
    x_2014->has_var_intrinsic_height_internal = true;
    x_2014->var_intrinsic_height_internal = Asdouble(x_2077);
    WriteMetric();
    auto x_2082 = eval_expr_x_2081(x_2014);
    if (x_2014->has_var_intrinsic_height_external) {
      auto x_2083 = x_2014->var_intrinsic_height_external;
      if (!EqualValue(x_2083, x_2082)) {
        var_modified_x_2084(x_2014);
      }
    }
    x_2014->has_var_intrinsic_height_external = true;
    x_2014->var_intrinsic_height_external = Asdouble(x_2082);
    WriteMetric();
    auto x_2087 = eval_expr_x_2086(x_2014);
    if (x_2014->has_var_intrinsic_height_sum) {
      auto x_2088 = x_2014->var_intrinsic_height_sum;
      if (!EqualValue(x_2088, x_2087)) {
        var_modified_x_2089(x_2014);
      }
    }
    x_2014->has_var_intrinsic_height_sum = true;
    x_2014->var_intrinsic_height_sum = Asdouble(x_2087);
    WriteMetric();
    auto x_2092 = eval_expr_x_2091(x_2014);
    if (x_2014->has_var_intrinsic_current_line_height) {
      auto x_2093 = x_2014->var_intrinsic_current_line_height;
      if (!EqualValue(x_2093, x_2092)) {
        var_modified_x_2094(x_2014);
      }
    }
    x_2014->has_var_intrinsic_current_line_height = true;
    x_2014->var_intrinsic_current_line_height = Asdouble(x_2092);
    WriteMetric();
    auto x_2097 = eval_expr_x_2096(x_2014);
    if (x_2014->has_var_finished_intrinsic_height_sum) {
      auto x_2098 = x_2014->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_2098, x_2097)) {
        var_modified_x_2099(x_2014);
      }
    }
    x_2014->has_var_finished_intrinsic_height_sum = true;
    x_2014->var_finished_intrinsic_height_sum = Asdouble(x_2097);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1941(const auto &x_2101) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2102) {
    WriteMetric();
    auto x_2104 = eval_expr_x_2103(x_2101);
    if (x_2101->has_var_display) {
      auto x_2105 = x_2101->var_display;
      if (!EqualValue(x_2105, x_2104)) {
        var_modified_x_2106(x_2101);
      }
    }
    x_2101->has_var_display = true;
    x_2101->var_display = AsDEString(x_2104);
    WriteMetric();
    auto x_2109 = eval_expr_x_2108(x_2101);
    if (x_2101->has_var_position) {
      auto x_2110 = x_2101->var_position;
      if (!EqualValue(x_2110, x_2109)) {
        var_modified_x_2111(x_2101);
      }
    }
    x_2101->has_var_position = true;
    x_2101->var_position = AsDEString(x_2109);
    WriteMetric();
    auto x_2114 = eval_expr_x_2113(x_2101);
    if (x_2101->has_var_flex_grow) {
      auto x_2115 = x_2101->var_flex_grow;
      if (!EqualValue(x_2115, x_2114)) {
        var_modified_x_2116(x_2101);
      }
    }
    x_2101->has_var_flex_grow = true;
    x_2101->var_flex_grow = Asdouble(x_2114);
    WriteMetric();
    auto x_2119 = eval_expr_x_2118(x_2101);
    if (x_2101->has_var_flex_shrink) {
      auto x_2120 = x_2101->var_flex_shrink;
      if (!EqualValue(x_2120, x_2119)) {
        var_modified_x_2121(x_2101);
      }
    }
    x_2101->has_var_flex_shrink = true;
    x_2101->var_flex_shrink = Asdouble(x_2119);
    WriteMetric();
    auto x_2124 = eval_expr_x_2123(x_2101);
    if (x_2101->has_var_flex_grow_sum) {
      auto x_2125 = x_2101->var_flex_grow_sum;
      if (!EqualValue(x_2125, x_2124)) {
        var_modified_x_2126(x_2101);
      }
    }
    x_2101->has_var_flex_grow_sum = true;
    x_2101->var_flex_grow_sum = Asdouble(x_2124);
    WriteMetric();
    auto x_2129 = eval_expr_x_2128(x_2101);
    if (x_2101->has_var_flex_shrink_sum) {
      auto x_2130 = x_2101->var_flex_shrink_sum;
      if (!EqualValue(x_2130, x_2129)) {
        var_modified_x_2131(x_2101);
      }
    }
    x_2101->has_var_flex_shrink_sum = true;
    x_2101->var_flex_shrink_sum = Asdouble(x_2129);
    WriteMetric();
    auto x_2134 = eval_expr_x_2133(x_2101);
    if (x_2101->has_var_flex_direction) {
      auto x_2135 = x_2101->var_flex_direction;
      if (!EqualValue(x_2135, x_2134)) {
        var_modified_x_2136(x_2101);
      }
    }
    x_2101->has_var_flex_direction = true;
    x_2101->var_flex_direction = AsDEString(x_2134);
    WriteMetric();
    auto x_2139 = eval_expr_x_2138(x_2101);
    if (x_2101->has_var_is_flex_row) {
      auto x_2140 = x_2101->var_is_flex_row;
      if (!EqualValue(x_2140, x_2139)) {
        var_modified_x_2141(x_2101);
      }
    }
    x_2101->has_var_is_flex_row = true;
    x_2101->var_is_flex_row = Asbool(x_2139);
    WriteMetric();
    auto x_2144 = eval_expr_x_2143(x_2101);
    if (x_2101->has_var_is_flex_column) {
      auto x_2145 = x_2101->var_is_flex_column;
      if (!EqualValue(x_2145, x_2144)) {
        var_modified_x_2146(x_2101);
      }
    }
    x_2101->has_var_is_flex_column = true;
    x_2101->var_is_flex_column = Asbool(x_2144);
    WriteMetric();
    auto x_2149 = eval_expr_x_2148(x_2101);
    if (x_2101->has_var_width_attr_expr) {
      auto x_2150 = x_2101->var_width_attr_expr;
      if (!EqualValue(x_2150, x_2149)) {
        var_modified_x_2151(x_2101);
      }
    }
    x_2101->has_var_width_attr_expr = true;
    x_2101->var_width_attr_expr = AsDEString(x_2149);
    WriteMetric();
    auto x_2154 = eval_expr_x_2153(x_2101);
    if (x_2101->has_var_has_width_attr) {
      auto x_2155 = x_2101->var_has_width_attr;
      if (!EqualValue(x_2155, x_2154)) {
        var_modified_x_2156(x_2101);
      }
    }
    x_2101->has_var_has_width_attr = true;
    x_2101->var_has_width_attr = Asbool(x_2154);
    WriteMetric();
    auto x_2159 = eval_expr_x_2158(x_2101);
    if (x_2101->has_var_height_attr_expr) {
      auto x_2160 = x_2101->var_height_attr_expr;
      if (!EqualValue(x_2160, x_2159)) {
        var_modified_x_2161(x_2101);
      }
    }
    x_2101->has_var_height_attr_expr = true;
    x_2101->var_height_attr_expr = AsDEString(x_2159);
    WriteMetric();
    auto x_2164 = eval_expr_x_2163(x_2101);
    if (x_2101->has_var_has_height_attr) {
      auto x_2165 = x_2101->var_has_height_attr;
      if (!EqualValue(x_2165, x_2164)) {
        var_modified_x_2166(x_2101);
      }
    }
    x_2101->has_var_has_height_attr = true;
    x_2101->var_has_height_attr = Asbool(x_2164);
    WriteMetric();
    auto x_2169 = eval_expr_x_2168(x_2101);
    if (x_2101->has_var_is_svg_block) {
      auto x_2170 = x_2101->var_is_svg_block;
      if (!EqualValue(x_2170, x_2169)) {
        var_modified_x_2171(x_2101);
      }
    }
    x_2101->has_var_is_svg_block = true;
    x_2101->var_is_svg_block = Asbool(x_2169);
    WriteMetric();
    auto x_2174 = eval_expr_x_2173(x_2101);
    if (x_2101->has_var_inside_svg) {
      auto x_2175 = x_2101->var_inside_svg;
      if (!EqualValue(x_2175, x_2174)) {
        var_modified_x_2176(x_2101);
      }
    }
    x_2101->has_var_inside_svg = true;
    x_2101->var_inside_svg = Asbool(x_2174);
    WriteMetric();
    auto x_2179 = eval_expr_x_2178(x_2101);
    if (x_2101->has_var_disabled) {
      auto x_2180 = x_2101->var_disabled;
      if (!EqualValue(x_2180, x_2179)) {
        var_modified_x_2181(x_2101);
      }
    }
    x_2101->has_var_disabled = true;
    x_2101->var_disabled = Asbool(x_2179);
    WriteMetric();
    auto x_2184 = eval_expr_x_2183(x_2101);
    if (x_2101->has_var_visible) {
      auto x_2185 = x_2101->var_visible;
      if (!EqualValue(x_2185, x_2184)) {
        var_modified_x_2186(x_2101);
      }
    }
    x_2101->has_var_visible = true;
    x_2101->var_visible = Asbool(x_2184);
    WriteMetric();
    auto x_2189 = eval_expr_x_2188(x_2101);
    if (x_2101->has_var_line_break) {
      auto x_2190 = x_2101->var_line_break;
      if (!EqualValue(x_2190, x_2189)) {
        var_modified_x_2191(x_2101);
      }
    }
    x_2101->has_var_line_break = true;
    x_2101->var_line_break = Asbool(x_2189);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1937(const auto &x_2193) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2194) {
    WriteMetric();
    auto x_2196 = eval_expr_x_2195(x_2193);
    if (x_2193->has_var_box_width) {
      auto x_2197 = x_2193->var_box_width;
      if (!EqualValue(x_2197, x_2196)) {
        var_modified_x_2198(x_2193);
      }
    }
    x_2193->has_var_box_width = true;
    x_2193->var_box_width = Asdouble(x_2196);
    WriteMetric();
    auto x_2201 = eval_expr_x_2200(x_2193);
    if (x_2193->has_var_box_height) {
      auto x_2202 = x_2193->var_box_height;
      if (!EqualValue(x_2202, x_2201)) {
        var_modified_x_2203(x_2193);
      }
    }
    x_2193->has_var_box_height = true;
    x_2193->var_box_height = Asdouble(x_2201);
    WriteMetric();
    auto x_2206 = eval_expr_x_2205(x_2193);
    if (x_2193->has_var_left_over) {
      auto x_2207 = x_2193->var_left_over;
      if (!EqualValue(x_2207, x_2206)) {
        var_modified_x_2208(x_2193);
      }
    }
    x_2193->has_var_left_over = true;
    x_2193->var_left_over = Asdouble(x_2206);
    WriteMetric();
    auto x_2211 = eval_expr_x_2210(x_2193);
    if (x_2193->has_var_flex_amount) {
      auto x_2212 = x_2193->var_flex_amount;
      if (!EqualValue(x_2212, x_2211)) {
        var_modified_x_2213(x_2193);
      }
    }
    x_2193->has_var_flex_amount = true;
    x_2193->var_flex_amount = Asdouble(x_2211);
    WriteMetric();
    auto x_2216 = eval_expr_x_2215(x_2193);
    if (x_2193->has_var_flex_unit) {
      auto x_2217 = x_2193->var_flex_unit;
      if (!EqualValue(x_2217, x_2216)) {
        var_modified_x_2218(x_2193);
      }
    }
    x_2193->has_var_flex_unit = true;
    x_2193->var_flex_unit = Asdouble(x_2216);
    WriteMetric();
    auto x_2221 = eval_expr_x_2220(x_2193);
    if (x_2193->has_var_x) {
      auto x_2222 = x_2193->var_x;
      if (!EqualValue(x_2222, x_2221)) {
        var_modified_x_2223(x_2193);
      }
    }
    x_2193->has_var_x = true;
    x_2193->var_x = Asdouble(x_2221);
    WriteMetric();
    auto x_2226 = eval_expr_x_2225(x_2193);
    if (x_2193->has_var_width_internal) {
      auto x_2227 = x_2193->var_width_internal;
      if (!EqualValue(x_2227, x_2226)) {
        var_modified_x_2228(x_2193);
      }
    }
    x_2193->has_var_width_internal = true;
    x_2193->var_width_internal = Asdouble(x_2226);
    WriteMetric();
    auto x_2231 = eval_expr_x_2230(x_2193);
    if (x_2193->has_var_width_external) {
      auto x_2232 = x_2193->var_width_external;
      if (!EqualValue(x_2232, x_2231)) {
        var_modified_x_2233(x_2193);
      }
    }
    x_2193->has_var_width_external = true;
    x_2193->var_width_external = Asdouble(x_2231);
    WriteMetric();
    auto x_2236 = eval_expr_x_2235(x_2193);
    if (x_2193->has_var_y) {
      auto x_2237 = x_2193->var_y;
      if (!EqualValue(x_2237, x_2236)) {
        var_modified_x_2238(x_2193);
      }
    }
    x_2193->has_var_y = true;
    x_2193->var_y = Asdouble(x_2236);
    WriteMetric();
    auto x_2241 = eval_expr_x_2240(x_2193);
    if (x_2193->has_var_height_internal) {
      auto x_2242 = x_2193->var_height_internal;
      if (!EqualValue(x_2242, x_2241)) {
        var_modified_x_2243(x_2193);
      }
    }
    x_2193->has_var_height_internal = true;
    x_2193->var_height_internal = Asdouble(x_2241);
    WriteMetric();
    auto x_2246 = eval_expr_x_2245(x_2193);
    if (x_2193->has_var_height_external) {
      auto x_2247 = x_2193->var_height_external;
      if (!EqualValue(x_2247, x_2246)) {
        var_modified_x_2248(x_2193);
      }
    }
    x_2193->has_var_height_external = true;
    x_2193->var_height_external = Asdouble(x_2246);
    WriteMetric();
    auto x_2251 = eval_expr_x_2250(x_2193);
    if (x_2193->has_var_line_height) {
      auto x_2252 = x_2193->var_line_height;
      if (!EqualValue(x_2252, x_2251)) {
        var_modified_x_2253(x_2193);
      }
    }
    x_2193->has_var_line_height = true;
    x_2193->var_line_height = Asdouble(x_2251);
    return MakeUnit();
  })));
}
Unit x_2255(const auto &x_2256) {
  MetaWriteMetric();
  if (!x_2256->meta->pass_1_recursive_proc_dirtied) {
    x_2256->meta->pass_1_has_recursive_proc_dirtied = true;
    x_2256->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2256->parent, [&](const auto &x_2258) { return MakeUnit(); },
        [&](const auto &x_2257) { return x_2255(x_2257); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1872(const auto &x_2256) { return x_2255(x_2256); }
Unit x_2259(const auto &x_2260) {
  MetaWriteMetric();
  if (!x_2260->meta->pass_0_recursive_proc_dirtied) {
    x_2260->meta->pass_0_has_recursive_proc_dirtied = true;
    x_2260->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2260->parent, [&](const auto &x_2262) { return MakeUnit(); },
        [&](const auto &x_2261) { return x_2259(x_2261); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1780(const auto &x_2260) { return x_2259(x_2260); }
Unit x_1747(const auto &x_1748, const auto &x_1749, const auto &x_1750) {
  auto x_1751 = ListHeadExn(x_1748);
  auto x_1752 = ListTailExn(x_1748);
  if (ListIsEmpty(x_1752)) {
    auto x_1753 = ListSplitN(x_1749->children, x_1751);
    OutputChangeMetric(IntAdd(layout_size_x_1703(ListNthExn(x_1749->children, x_1751)), layout_size_x_1703(x_1750)));
    x_1749->children = ListAppend(Zro(x_1753), Cons(x_1750, ListTailExn(Fst(x_1753))));
    return MakeUnit();
  } else {
    return x_1747(x_1752, ListNthExn(x_1749->children, x_1751), x_1750);
  }
}
Unit replace_layout_node_x_1746(const auto &x_1748, const auto &x_1749, const auto &x_1750) {
  return x_1747(x_1748, x_1749, x_1750);
}
Unit x_1754(const auto &x_1755, const auto &x_1756, const auto &x_1757) {
  auto x_1758 = ListHeadExn(x_1755);
  auto x_1759 = ListTailExn(x_1755);
  if (ListIsEmpty(x_1759)) {
    OutputChangeMetric(layout_size_x_1703(x_1757));
    auto x_1760 = ListSplitN(x_1756->children, x_1758);
    x_1756->children = ListAppend(Zro(x_1760), Cons(x_1757, Fst(x_1760)));
    return MakeUnit();
  } else {
    return x_1754(x_1759, ListNthExn(x_1756->children, x_1758), x_1757);
  }
}
Unit add_layout_node_x_1744(const auto &x_1755, const auto &x_1756, const auto &x_1757) {
  return x_1754(x_1755, x_1756, x_1757);
}
Unit x_1761(const auto &x_1762, const auto &x_1763, const auto &x_1764) {
  auto x_1765 = ListHeadExn(x_1762);
  auto x_1766 = ListTailExn(x_1762);
  if (ListIsEmpty(x_1766)) {
    OutputChangeMetric(layout_size_x_1703(ListNthExn(x_1763->children, x_1765)));
    auto x_1767 = ListSplitN(x_1763->children, x_1765);
    x_1763->children = ListAppend(Zro(x_1767), ListTailExn(Fst(x_1767)));
    return MakeUnit();
  } else {
    return x_1761(x_1766, ListNthExn(x_1763->children, x_1765), x_1764);
  }
}
Unit remove_layout_node_x_1742(const auto &x_1762, const auto &x_1763, const auto &x_1764) {
  return x_1761(x_1762, x_1763, x_1764);
}
Unit x_1768(const auto &x_1769, const auto &x_1770, const auto &x_1771) {
  return ListMatch(
      x_1769,
      [&](const auto &x_1774) {
        auto x_1775 = Zro(x_1771);
        auto x_1776 = Zro(x_1775);
        auto x_1777 = Fst(x_1775);
        auto x_1778 = Fst(x_1771);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3654 = x_1776;
        if (x_3654 == "attributes") {
          std::string x_3655 = x_1777;
          if (x_3655 == "width") {
            WriteMetric();
            x_1770->has_attr_width = true;
            x_1770->attr_width = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1779) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_1_has_bb_dirtied = true;
                x_1770->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3655 == "image_height") {
            WriteMetric();
            x_1770->has_attr_image_height = true;
            x_1770->attr_image_height = Asint64_t(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1781) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_0_has_bb_dirtied = true;
                x_1770->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3655 == "image_width") {
            WriteMetric();
            x_1770->has_attr_image_width = true;
            x_1770->attr_image_width = Asint64_t(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1782) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_0_has_bb_dirtied = true;
                x_1770->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3655 == "height") {
            WriteMetric();
            x_1770->has_attr_height = true;
            x_1770->attr_height = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1783) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_1_has_bb_dirtied = true;
                x_1770->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3655 == "viewBox") {
            WriteMetric();
            x_1770->has_attr_viewBox = true;
            x_1770->attr_viewBox = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1784) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_0_has_bb_dirtied = true;
                x_1770->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3654 == "properties") {
          std::string x_3656 = x_1777;
          if (x_3656 == "width") {
            WriteMetric();
            x_1770->has_prop_width = true;
            x_1770->prop_width = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1785) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_0_has_bb_dirtied = true;
                x_1770->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3656 == "flex-grow") {
            WriteMetric();
            x_1770->has_prop_flex_grow = true;
            x_1770->prop_flex_grow = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1786) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_1_has_bb_dirtied = true;
                x_1770->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3656 == "height") {
            WriteMetric();
            x_1770->has_prop_height = true;
            x_1770->prop_height = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1787) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_0_has_bb_dirtied = true;
                x_1770->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3656 == "display") {
            WriteMetric();
            x_1770->has_prop_display = true;
            x_1770->prop_display = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1788) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_1_has_bb_dirtied = true;
                x_1770->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3656 == "position") {
            WriteMetric();
            x_1770->has_prop_position = true;
            x_1770->prop_position = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1789) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_1_has_bb_dirtied = true;
                x_1770->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3656 == "flex-shrink") {
            WriteMetric();
            x_1770->has_prop_flex_shrink = true;
            x_1770->prop_flex_shrink = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1790) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_1_has_bb_dirtied = true;
                x_1770->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3656 == "flex-direction") {
            WriteMetric();
            x_1770->has_prop_flex_direction = true;
            x_1770->prop_flex_direction = AsDEString(x_1778);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1791) {
              if (x_1770->meta->pass_0_proc_inited) {
                x_1770->meta->bb_1_has_bb_dirtied = true;
                x_1770->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1770);
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
      [&](const auto &x_1772, const auto &x_1773) {
        return x_1768(x_1773, ListNthExn(x_1770->children, x_1772), x_1771);
      });
}
Unit insert_value_x_1740(const auto &x_1769, const auto &x_1770, const auto &x_1771) {
  return x_1768(x_1769, x_1770, x_1771);
}
Unit x_1792(const auto &x_1793, const auto &x_1794, const auto &x_1795) {
  return ListMatch(
      x_1793,
      [&](const auto &x_1798) {
        auto x_1799 = Zro(x_1795);
        auto x_1800 = Fst(x_1795);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3657 = x_1799;
        if (x_3657 == "attributes") {
          std::string x_3658 = x_1800;
          if (x_3658 == "width") {
            WriteMetric();
            x_1794->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1801) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_1_has_bb_dirtied = true;
                x_1794->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3658 == "image_height") {
            WriteMetric();
            x_1794->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1802) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_0_has_bb_dirtied = true;
                x_1794->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3658 == "image_width") {
            WriteMetric();
            x_1794->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1803) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_0_has_bb_dirtied = true;
                x_1794->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3658 == "height") {
            WriteMetric();
            x_1794->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1804) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_1_has_bb_dirtied = true;
                x_1794->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3658 == "viewBox") {
            WriteMetric();
            x_1794->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1805) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_0_has_bb_dirtied = true;
                x_1794->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3657 == "properties") {
          std::string x_3659 = x_1800;
          if (x_3659 == "width") {
            WriteMetric();
            x_1794->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1806) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_0_has_bb_dirtied = true;
                x_1794->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3659 == "flex-grow") {
            WriteMetric();
            x_1794->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1807) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_1_has_bb_dirtied = true;
                x_1794->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3659 == "height") {
            WriteMetric();
            x_1794->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1808) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_0_has_bb_dirtied = true;
                x_1794->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3659 == "display") {
            WriteMetric();
            x_1794->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1809) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_1_has_bb_dirtied = true;
                x_1794->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3659 == "position") {
            WriteMetric();
            x_1794->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1810) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_1_has_bb_dirtied = true;
                x_1794->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3659 == "flex-shrink") {
            WriteMetric();
            x_1794->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1811) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_1_has_bb_dirtied = true;
                x_1794->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3659 == "flex-direction") {
            WriteMetric();
            x_1794->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1812) {
              if (x_1794->meta->pass_0_proc_inited) {
                x_1794->meta->bb_1_has_bb_dirtied = true;
                x_1794->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1794);
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
      [&](const auto &x_1796, const auto &x_1797) {
        return x_1792(x_1797, ListNthExn(x_1794->children, x_1796), x_1795);
      });
}
Unit delete_value_x_1738(const auto &x_1793, const auto &x_1794, const auto &x_1795) {
  return x_1792(x_1793, x_1794, x_1795);
}
Unit x_1813(const auto &x_1814, const auto &x_1815, const auto &x_1816) {
  return ListMatch(
      x_1814,
      [&](const auto &x_1819) {
        auto x_1820 = Zro(x_1816);
        auto x_1821 = Zro(x_1820);
        auto x_1822 = Fst(x_1820);
        auto x_1823 = Fst(x_1816);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3660 = x_1821;
        if (x_3660 == "attributes") {
          std::string x_3661 = x_1822;
          if (x_3661 == "width") {
            WriteMetric();
            x_1815->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1824) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_attr_width = true;
            x_1815->attr_width = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1825) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3661 == "image_height") {
            WriteMetric();
            x_1815->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1826) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_attr_image_height = true;
            x_1815->attr_image_height = Asint64_t(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1827) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3661 == "image_width") {
            WriteMetric();
            x_1815->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1828) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_attr_image_width = true;
            x_1815->attr_image_width = Asint64_t(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1829) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3661 == "height") {
            WriteMetric();
            x_1815->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1830) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_attr_height = true;
            x_1815->attr_height = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1831) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3661 == "viewBox") {
            WriteMetric();
            x_1815->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1832) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_attr_viewBox = true;
            x_1815->attr_viewBox = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1833) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3660 == "properties") {
          std::string x_3662 = x_1822;
          if (x_3662 == "width") {
            WriteMetric();
            x_1815->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1834) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_prop_width = true;
            x_1815->prop_width = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1835) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3662 == "flex-grow") {
            WriteMetric();
            x_1815->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1836) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_prop_flex_grow = true;
            x_1815->prop_flex_grow = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1837) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3662 == "height") {
            WriteMetric();
            x_1815->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1838) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_prop_height = true;
            x_1815->prop_height = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1839) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_0_has_bb_dirtied = true;
                x_1815->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3662 == "display") {
            WriteMetric();
            x_1815->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1840) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_prop_display = true;
            x_1815->prop_display = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1841) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3662 == "position") {
            WriteMetric();
            x_1815->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1842) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_prop_position = true;
            x_1815->prop_position = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1843) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3662 == "flex-shrink") {
            WriteMetric();
            x_1815->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1844) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_prop_flex_shrink = true;
            x_1815->prop_flex_shrink = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1845) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_3662 == "flex-direction") {
            WriteMetric();
            x_1815->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1846) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_1815->has_prop_flex_direction = true;
            x_1815->prop_flex_direction = AsDEString(x_1823);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_1847) {
              if (x_1815->meta->pass_0_proc_inited) {
                x_1815->meta->bb_1_has_bb_dirtied = true;
                x_1815->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1780(x_1815);
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
      [&](const auto &x_1817, const auto &x_1818) {
        return x_1813(x_1818, ListNthExn(x_1815->children, x_1817), x_1816);
      });
}
Unit replace_value_x_1736(const auto &x_1814, const auto &x_1815, const auto &x_1816) {
  return x_1813(x_1814, x_1815, x_1816);
}
Unit x_1848(const auto &x_1849, const auto &x_1850, const auto &x_1851) {
  auto x_1852 = ListHeadExn(x_1849);
  auto x_1853 = ListTailExn(x_1849);
  if (ListIsEmpty(x_1853)) {
    InputChangeMetric(IntAdd(node_size_x_1704(ListNthExn(x_1850->children, x_1852)), node_size_x_1704(x_1851)));
    auto x_1854 = ListSplitN(x_1850->children, x_1852);
    auto x_1855 = Zro(x_1854);
    auto x_1856 = Fst(x_1854);
    auto x_1857 = ListHeadExn(x_1856);
    auto x_1858 = ListTailExn(x_1856);
    x_1850->children = ListAppend(x_1855, x_1858);
    OptionMatch(
        x_1857->prev, [&](const auto &x_1860) { return MakeUnit(); },
        [&](const auto &x_1859) {
          x_1859->next = ToPath(x_1857->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1857->next, [&](const auto &x_1862) { return MakeUnit(); },
        [&](const auto &x_1861) {
          x_1861->prev = ToPath(x_1857->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1855)) {
      x_1850->first = ToPath(ListHead(x_1858));
    }
    if (ListIsEmpty(x_1858)) {
      x_1850->last = ToPath(ListLast(x_1855));
    }
    OptionMatch(
        x_1857->next, [&](const auto &x_1865) { return MakeUnit(); },
        [&](const auto &x_1863) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1864) {
            if (x_1863->meta->pass_0_proc_inited) {
              x_1863->meta->bb_1_has_bb_dirtied = true;
              x_1863->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1863);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1850->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1866) {
        if (x_1850->meta->pass_0_proc_inited) {
          x_1850->meta->bb_0_has_bb_dirtied = true;
          x_1850->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1858)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1867) {
        if (x_1850->meta->pass_0_proc_inited) {
          x_1850->meta->bb_0_has_bb_dirtied = true;
          x_1850->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1857->next, [&](const auto &x_1870) { return MakeUnit(); },
        [&](const auto &x_1868) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1869) {
            if (x_1868->meta->pass_0_proc_inited) {
              x_1868->meta->bb_0_has_bb_dirtied = true;
              x_1868->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1868);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1850->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1871) {
        if (x_1850->meta->pass_1_proc_inited) {
          x_1850->meta->bb_2_has_bb_dirtied = true;
          x_1850->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1858)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1873) {
        if (x_1850->meta->pass_1_proc_inited) {
          x_1850->meta->bb_2_has_bb_dirtied = true;
          x_1850->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1857->next, [&](const auto &x_1876) { return MakeUnit(); },
        [&](const auto &x_1874) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1875) {
            if (x_1874->meta->pass_1_proc_inited) {
              x_1874->meta->bb_2_has_bb_dirtied = true;
              x_1874->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1872(x_1874);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MakeUnit();
    auto x_1877 = ListSplitN(x_1850->children, x_1852);
    auto x_1878 = Zro(x_1877);
    auto x_1879 = Fst(x_1877);
    x_1850->children = ListAppend(x_1878, Cons(x_1851, x_1879));
    if (ListIsEmpty(x_1878)) {
      x_1850->first = x_1851.get();
    }
    if (ListIsEmpty(x_1879)) {
      x_1850->last = x_1851.get();
    }
    OptionMatch(
        ListLast(x_1878),
        [&](const auto &x_1881) {
          x_1851->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1880) {
          x_1851->prev = x_1880.get();
          x_1880->next = x_1851.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1879),
        [&](const auto &x_1883) {
          x_1851->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1882) {
          x_1851->next = x_1882.get();
          x_1882->prev = x_1851.get();
          return MakeUnit();
        });
    x_1851->parent = x_1850.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1884) {
      x_1851->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1851->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1780(x_1851);
    })));
    OptionMatch(
        x_1851->next, [&](const auto &x_1887) { return MakeUnit(); },
        [&](const auto &x_1885) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1886) {
            if (x_1885->meta->pass_0_proc_inited) {
              x_1885->meta->bb_1_has_bb_dirtied = true;
              x_1885->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1885);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsSingleton(x_1850->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1888) {
        if (x_1850->meta->pass_0_proc_inited) {
          x_1850->meta->bb_0_has_bb_dirtied = true;
          x_1850->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1879)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1889) {
        if (x_1850->meta->pass_0_proc_inited) {
          x_1850->meta->bb_0_has_bb_dirtied = true;
          x_1850->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1851->next, [&](const auto &x_1892) { return MakeUnit(); },
        [&](const auto &x_1890) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1891) {
            if (x_1890->meta->pass_0_proc_inited) {
              x_1890->meta->bb_0_has_bb_dirtied = true;
              x_1890->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1890);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1893) {
      x_1851->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1851->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1872(x_1851);
    })));
    if (ListIsSingleton(x_1850->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1894) {
        if (x_1850->meta->pass_1_proc_inited) {
          x_1850->meta->bb_2_has_bb_dirtied = true;
          x_1850->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1879)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1895) {
        if (x_1850->meta->pass_1_proc_inited) {
          x_1850->meta->bb_2_has_bb_dirtied = true;
          x_1850->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1850);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1851->next, [&](const auto &x_1898) { return MakeUnit(); },
        [&](const auto &x_1896) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1897) {
            if (x_1896->meta->pass_1_proc_inited) {
              x_1896->meta->bb_2_has_bb_dirtied = true;
              x_1896->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1872(x_1896);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_1848(x_1853, ListNthExn(x_1850->children, x_1852), x_1851);
  }
}
Unit replace_node_x_1734(const auto &x_1849, const auto &x_1850, const auto &x_1851) {
  return x_1848(x_1849, x_1850, x_1851);
}
Unit x_1899(const auto &x_1900) {
  ListIter2(x_1900->children, [&](const auto &x_1901, const auto &x_1902) {
    x_1901->parent = x_1900.get();
    x_1902->parent = x_1900.get();
    x_1901->next = x_1902.get();
    x_1902->prev = x_1901.get();
    x_1899(x_1901);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1900->children),
      [&](const auto &x_1904) {
        x_1900->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1903) {
        x_1900->first = x_1903.get();
        x_1903->parent = x_1900.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1900->children),
      [&](const auto &x_1906) {
        x_1900->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1905) {
        x_1900->last = x_1905.get();
        x_1905->parent = x_1900.get();
        x_1899(x_1905);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1732(const auto &x_1900) { return x_1899(x_1900); }
Unit x_1907(const auto &x_1908, const auto &x_1909, const auto &x_1910) {
  auto x_1911 = ListHeadExn(x_1908);
  auto x_1912 = ListTailExn(x_1908);
  if (ListIsEmpty(x_1912)) {
    InputChangeMetric(node_size_x_1704(ListNthExn(x_1909->children, x_1911)));
    auto x_1913 = ListSplitN(x_1909->children, x_1911);
    auto x_1914 = Zro(x_1913);
    auto x_1915 = Fst(x_1913);
    auto x_1916 = ListHeadExn(x_1915);
    auto x_1917 = ListTailExn(x_1915);
    x_1909->children = ListAppend(x_1914, x_1917);
    OptionMatch(
        x_1916->prev, [&](const auto &x_1919) { return MakeUnit(); },
        [&](const auto &x_1918) {
          x_1918->next = ToPath(x_1916->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1916->next, [&](const auto &x_1921) { return MakeUnit(); },
        [&](const auto &x_1920) {
          x_1920->prev = ToPath(x_1916->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1914)) {
      x_1909->first = ToPath(ListHead(x_1917));
    }
    if (ListIsEmpty(x_1917)) {
      x_1909->last = ToPath(ListLast(x_1914));
    }
    OptionMatch(
        x_1916->next, [&](const auto &x_1924) { return MakeUnit(); },
        [&](const auto &x_1922) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1923) {
            if (x_1922->meta->pass_0_proc_inited) {
              x_1922->meta->bb_1_has_bb_dirtied = true;
              x_1922->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1922);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1909->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1925) {
        if (x_1909->meta->pass_0_proc_inited) {
          x_1909->meta->bb_0_has_bb_dirtied = true;
          x_1909->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1909);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1917)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1926) {
        if (x_1909->meta->pass_0_proc_inited) {
          x_1909->meta->bb_0_has_bb_dirtied = true;
          x_1909->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1909);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1916->next, [&](const auto &x_1929) { return MakeUnit(); },
        [&](const auto &x_1927) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1928) {
            if (x_1927->meta->pass_0_proc_inited) {
              x_1927->meta->bb_0_has_bb_dirtied = true;
              x_1927->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1927);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_1909->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1930) {
        if (x_1909->meta->pass_1_proc_inited) {
          x_1909->meta->bb_2_has_bb_dirtied = true;
          x_1909->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1909);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1917)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1931) {
        if (x_1909->meta->pass_1_proc_inited) {
          x_1909->meta->bb_2_has_bb_dirtied = true;
          x_1909->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1909);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1916->next, [&](const auto &x_1934) { return MakeUnit(); },
        [&](const auto &x_1932) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1933) {
            if (x_1932->meta->pass_1_proc_inited) {
              x_1932->meta->bb_2_has_bb_dirtied = true;
              x_1932->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1872(x_1932);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_1907(x_1912, ListNthExn(x_1909->children, x_1911), x_1910);
  }
}
Unit remove_node_x_1730(const auto &x_1908, const auto &x_1909, const auto &x_1910) {
  return x_1907(x_1908, x_1909, x_1910);
}
Unit x_1935(const auto &x_1936) {
  MetaReadMetric();
  if (x_1936->meta->pass_1_recursive_proc_dirtied) {
    if (x_1936->meta->pass_1_proc_inited) {
      if (x_1936->meta->bb_2_bb_dirtied) {
        eval_stmts_x_1937(x_1936);
        x_1936->meta->bb_2_has_bb_dirtied = true;
        x_1936->meta->bb_2_bb_dirtied = false;
      }
      ListIter(x_1936->children, [&](const auto &x_1938) { return x_1935(x_1938); });
      MakeUnit();
    } else {
      x_1936->meta->pass_1_proc_inited = true;
      eval_stmts_x_1719(x_1936);
    }
  }
  x_1936->meta->pass_1_has_recursive_proc_dirtied = true;
  x_1936->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1728(const auto &x_1936) { return x_1935(x_1936); }
Unit x_1939(const auto &x_1940) {
  MetaReadMetric();
  if (x_1940->meta->pass_0_recursive_proc_dirtied) {
    if (x_1940->meta->pass_0_proc_inited) {
      if (x_1940->meta->bb_1_bb_dirtied) {
        eval_stmts_x_1941(x_1940);
        x_1940->meta->bb_1_has_bb_dirtied = true;
        x_1940->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_1940->children, [&](const auto &x_1942) { return x_1939(x_1942); });
      if (x_1940->meta->bb_0_bb_dirtied) {
        eval_stmts_x_1943(x_1940);
        x_1940->meta->bb_0_has_bb_dirtied = true;
        x_1940->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1940->meta->pass_0_proc_inited = true;
      eval_stmts_x_1717(x_1940);
    }
  }
  x_1940->meta->pass_0_has_recursive_proc_dirtied = true;
  x_1940->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1727(const auto &x_1940) { return x_1939(x_1940); }
Unit x_1944(const auto &x_1945, const auto &x_1946, const auto &x_1947) {
  auto x_1948 = ListHeadExn(x_1945);
  auto x_1949 = ListTailExn(x_1945);
  if (ListIsEmpty(x_1949)) {
    InputChangeMetric(node_size_x_1704(x_1947));
    auto x_1950 = ListSplitN(x_1946->children, x_1948);
    auto x_1951 = Zro(x_1950);
    auto x_1952 = Fst(x_1950);
    x_1946->children = ListAppend(x_1951, Cons(x_1947, x_1952));
    if (ListIsEmpty(x_1951)) {
      x_1946->first = x_1947.get();
    }
    if (ListIsEmpty(x_1952)) {
      x_1946->last = x_1947.get();
    }
    OptionMatch(
        ListLast(x_1951),
        [&](const auto &x_1954) {
          x_1947->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1953) {
          x_1947->prev = x_1953.get();
          x_1953->next = x_1947.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1952),
        [&](const auto &x_1956) {
          x_1947->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1955) {
          x_1947->next = x_1955.get();
          x_1955->prev = x_1947.get();
          return MakeUnit();
        });
    x_1947->parent = x_1946.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1957) {
      x_1947->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1947->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1780(x_1947);
    })));
    OptionMatch(
        x_1947->next, [&](const auto &x_1960) { return MakeUnit(); },
        [&](const auto &x_1958) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1959) {
            if (x_1958->meta->pass_0_proc_inited) {
              x_1958->meta->bb_1_has_bb_dirtied = true;
              x_1958->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1958);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsSingleton(x_1946->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1961) {
        if (x_1946->meta->pass_0_proc_inited) {
          x_1946->meta->bb_0_has_bb_dirtied = true;
          x_1946->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1946);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1952)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1962) {
        if (x_1946->meta->pass_0_proc_inited) {
          x_1946->meta->bb_0_has_bb_dirtied = true;
          x_1946->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1780(x_1946);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1947->next, [&](const auto &x_1965) { return MakeUnit(); },
        [&](const auto &x_1963) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1964) {
            if (x_1963->meta->pass_0_proc_inited) {
              x_1963->meta->bb_0_has_bb_dirtied = true;
              x_1963->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1780(x_1963);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1966) {
      x_1947->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1947->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1872(x_1947);
    })));
    if (ListIsSingleton(x_1946->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1967) {
        if (x_1946->meta->pass_1_proc_inited) {
          x_1946->meta->bb_2_has_bb_dirtied = true;
          x_1946->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1946);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_1952)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1968) {
        if (x_1946->meta->pass_1_proc_inited) {
          x_1946->meta->bb_2_has_bb_dirtied = true;
          x_1946->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1872(x_1946);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_1947->next, [&](const auto &x_1971) { return MakeUnit(); },
        [&](const auto &x_1969) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_1970) {
            if (x_1969->meta->pass_1_proc_inited) {
              x_1969->meta->bb_2_has_bb_dirtied = true;
              x_1969->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1872(x_1969);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_1944(x_1949, ListNthExn(x_1946->children, x_1948), x_1947);
  }
}
Unit add_node_x_1725(const auto &x_1945, const auto &x_1946, const auto &x_1947) {
  return x_1944(x_1945, x_1946, x_1947);
}
Unit x_1972(const auto &x_1973) {
  ListIter2(x_1973->children, [&](const auto &x_1974, const auto &x_1975) {
    x_1974->parent = x_1973.get();
    x_1975->parent = x_1973.get();
    x_1974->next = x_1975.get();
    x_1975->prev = x_1974.get();
    x_1972(x_1974);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1973->children),
      [&](const auto &x_1977) {
        x_1973->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1976) {
        x_1973->first = x_1976.get();
        x_1976->parent = x_1973.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1973->children),
      [&](const auto &x_1979) {
        x_1973->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1978) {
        x_1973->last = x_1978.get();
        x_1978->parent = x_1973.get();
        x_1972(x_1978);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1723(const auto &x_1973) { return x_1972(x_1973); }
Unit eval_stmts_x_1719(const auto &x_1980) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1981) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1982) {
      x_1980->meta->bb_2_has_bb_dirtied = true;
      x_1980->meta->bb_2_bb_dirtied = false;
      return eval_stmts_x_1937(x_1980);
    })));
    ListIter(x_1980->children, [&](const auto &x_1983) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1984) {
        x_1983->meta->pass_1_proc_inited = true;
        x_1983->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1983->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_1719(x_1983);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_1717(const auto &x_1985) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_1986) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1987) {
      x_1985->meta->bb_1_has_bb_dirtied = true;
      x_1985->meta->bb_1_bb_dirtied = false;
      return eval_stmts_x_1941(x_1985);
    })));
    ListIter(x_1985->children, [&](const auto &x_1988) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1989) {
        x_1988->meta->pass_0_proc_inited = true;
        x_1988->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1988->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_1717(x_1988);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_1990) {
      x_1985->meta->bb_0_has_bb_dirtied = true;
      x_1985->meta->bb_0_bb_dirtied = false;
      return eval_stmts_x_1943(x_1985);
    })));
    return MakeUnit();
  })));
}
Unit x_1991(const auto &x_1992) {
  ListIter2(x_1992->children, [&](const auto &x_1993, const auto &x_1994) {
    x_1993->parent = x_1992.get();
    x_1994->parent = x_1992.get();
    x_1993->next = x_1994.get();
    x_1994->prev = x_1993.get();
    x_1991(x_1993);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1992->children),
      [&](const auto &x_1996) {
        x_1992->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1995) {
        x_1992->first = x_1995.get();
        x_1995->parent = x_1992.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1992->children),
      [&](const auto &x_1998) {
        x_1992->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1997) {
        x_1992->last = x_1997.get();
        x_1997->parent = x_1992.get();
        x_1991(x_1997);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1713(const auto &x_1992) { return x_1991(x_1992); }
int64_t x_1999(const auto &x_2000) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_2000->children, [&](const auto &x_2001) { return x_1999(x_2001); }));
}
int64_t node_size_x_1704(const auto &x_2000) { return x_1999(x_2000); }
int64_t x_2002(const auto &x_2003) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_2003->children, [&](const auto &x_2004) { return x_2002(x_2004); }));
}
int64_t layout_size_x_1703(const auto &x_2003) { return x_2002(x_2003); }
LayoutNode x_2005(const auto &x_2006) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_2006)), [&](const auto &x_2007) { return x_2005(x_2007); }));
}
LayoutNode json_to_layout_node_x_1702(const auto &x_2006) { return x_2005(x_2006); }
Node x_2008(const auto &x_2009) {
  return MakeNode(x_2009->name, x_2009->attr, x_2009->prop, x_2009->extern_id,
                  ListMap(x_2009->children, [&](const auto &x_2010) { return x_2008(x_2010); }));
}
Node node_to_fs_node_x_1701(const auto &x_2009) { return x_2008(x_2009); }
Node x_2011(const auto &x_2012) {
  return MakeNode(
      JsonToString(JsonMember("name", x_2012)), JsonToDict(JsonMember("attributes", x_2012)),
      JsonToDict(JsonMember("properties", x_2012)), JsonToInt(JsonMember("id", x_2012)),
      ListMap(JsonToList(JsonMember("children", x_2012)), [&](const auto &x_2013) { return x_2011(x_2013); }));
}
Node json_to_node_aux_x_1700(const auto &x_2012) { return x_2011(x_2012); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_1705) {
    PrintEndline("RUNNING DB_D");
    return WithInFile("command.json", [&](const auto &x_1706) {
      auto x_1707 = MakeRef(static_cast<int64_t>(0));
      auto x_1708 = FreshMetric();
      auto x_1709 = JsonOfString(InputLine(x_1706));
      auto x_1710 = JsonOfString(InputLine(x_1706));
      auto x_1711 = MakeStack();
      PushStack(x_1711, x_1709);
      PushStack(x_1711, x_1710);
      Assert(StringEqual(JsonToString(JsonMember("name", x_1709)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_1710)), "layout_init"));
      auto x_1714 = [&]() {
        auto x_1712 = json_to_node_aux_x_1700(JsonMember("node", x_1709));
        x_1712->parent = nullptr;
        x_1712->prev = nullptr;
        x_1712->next = nullptr;
        set_children_relation_x_1713(x_1712);
        return x_1712;
      }();
      auto x_1715 = json_to_layout_node_x_1702(JsonMember("node", x_1710));
      OutputChangeMetric(layout_size_x_1703(x_1715));
      InputChangeMetric(node_size_x_1704(x_1714));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1716) {
        x_1714->meta->pass_0_proc_inited = true;
        x_1714->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1714->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_1717(x_1714);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_1718) {
        x_1714->meta->pass_1_proc_inited = true;
        x_1714->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1714->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_1719(x_1714);
        return MakeUnit();
      })));
      JsonToChannel(x_1705, [&]() {
        auto x_3663 = FreshJson();
        WriteJson(x_3663, "name", "DB_D");
        WriteJson(x_3663, "diff_num", ReadRef(x_1707));
        WriteJson(x_3663, "read_count", MetricReadCount());
        WriteJson(x_3663, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_3663, "write_count", MetricWriteCount());
        WriteJson(x_3663, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_3663, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_3663, "input_change_count", MetricInputChangeCount());
        WriteJson(x_3663, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_3663, "overhead_time", MetricOverheadCount());
        WriteJson(x_3663, "eval_time", MetricEvalCount());
        WriteJson(x_3663, "html", "");
        WriteJson(x_3663, "command", StackToList(x_1711));
        return x_3663;
      }());
      OutputString(x_1705, "\n");
      ClearStack(x_1711);
      WriteRef(x_1707, IntAdd(ReadRef(x_1707), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_1706, [&](const auto &x_1720) {
        auto x_1721 = JsonOfString(x_1720);
        PushStack(x_1711, x_1721);
        std::string x_3665 = JsonToString(JsonMember("name", x_1721));
        if (x_3665 == "add") {
          return add_node_x_1725(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1724) { return JsonToInt(x_1724); }),
              x_1714, [&]() {
                auto x_1722 = json_to_node_aux_x_1700(JsonMember("node", x_1721));
                x_1722->parent = nullptr;
                x_1722->prev = nullptr;
                x_1722->next = nullptr;
                set_children_relation_x_1723(x_1722);
                return x_1722;
              }());
        } else if (x_3665 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_1726) {
            recalculate_internal_x_1727(x_1714);
            recalculate_internal_x_1728(x_1714);
            return MakeUnit();
          })));
          JsonToChannel(x_1705, [&]() {
            auto x_3664 = FreshJson();
            WriteJson(x_3664, "name", "DB_D");
            WriteJson(x_3664, "diff_num", ReadRef(x_1707));
            WriteJson(x_3664, "read_count", MetricReadCount());
            WriteJson(x_3664, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_3664, "write_count", MetricWriteCount());
            WriteJson(x_3664, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_3664, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_3664, "input_change_count", MetricInputChangeCount());
            WriteJson(x_3664, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_3664, "overhead_time", MetricOverheadCount());
            WriteJson(x_3664, "eval_time", MetricEvalCount());
            WriteJson(x_3664, "html", "");
            WriteJson(x_3664, "command", StackToList(x_1711));
            return x_3664;
          }());
          OutputString(x_1705, "\n");
          ClearStack(x_1711);
          WriteRef(x_1707, IntAdd(ReadRef(x_1707), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_3665 == "remove") {
          return remove_node_x_1730(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1729) { return JsonToInt(x_1729); }),
              x_1714, MakeUnit());
        } else if (x_3665 == "replace") {
          return replace_node_x_1734(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1733) { return JsonToInt(x_1733); }),
              x_1714, [&]() {
                auto x_1731 = json_to_node_aux_x_1700(JsonMember("node", x_1721));
                x_1731->parent = nullptr;
                x_1731->prev = nullptr;
                x_1731->next = nullptr;
                set_children_relation_x_1732(x_1731);
                return x_1731;
              }());
        } else if (x_3665 == "replace_value") {
          return replace_value_x_1736(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1735) { return JsonToInt(x_1735); }),
              x_1714,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1721)), JsonToString(JsonMember("key", x_1721))),
                       JsonToValue(JsonMember("value", x_1721))));
        } else if (x_3665 == "delete_value") {
          return delete_value_x_1738(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1737) { return JsonToInt(x_1737); }),
              x_1714, MakePair(JsonToString(JsonMember("type", x_1721)), JsonToString(JsonMember("key", x_1721))));
        } else if (x_3665 == "insert_value") {
          return insert_value_x_1740(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1739) { return JsonToInt(x_1739); }),
              x_1714,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1721)), JsonToString(JsonMember("key", x_1721))),
                       JsonToValue(JsonMember("value", x_1721))));
        } else if (x_3665 == "layout_remove") {
          return remove_layout_node_x_1742(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1741) { return JsonToInt(x_1741); }),
              x_1715, MakeUnit());
        } else if (x_3665 == "layout_add") {
          return add_layout_node_x_1744(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1743) { return JsonToInt(x_1743); }),
              x_1715, json_to_layout_node_x_1702(JsonMember("node", x_1721)));
        } else if (x_3665 == "layout_replace") {
          return replace_layout_node_x_1746(
              ListMap(JsonToList(JsonMember("path", x_1721)), [&](const auto &x_1745) { return JsonToInt(x_1745); }),
              x_1715, json_to_layout_node_x_1702(JsonMember("node", x_1721)));
        } else if (x_3665 == "layout_info_changed") {
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