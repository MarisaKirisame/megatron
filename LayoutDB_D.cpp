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
struct Meta {
  bool bb_3_has_bb_dirtied = false;
  bool bb_3_bb_dirtied;
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
Unit var_modified_x_1819(const auto &x_1829);
auto eval_expr_x_1816(const auto &x_1835);
Unit var_modified_x_1814(const auto &x_1844);
auto eval_expr_x_1811(const auto &x_1848);
Unit var_modified_x_1809(const auto &x_1853);
auto eval_expr_x_1806(const auto &x_1859);
Unit var_modified_x_1804(const auto &x_1886);
auto eval_expr_x_1801(const auto &x_1894);
Unit var_modified_x_1799(const auto &x_1907);
auto eval_expr_x_1796(const auto &x_1913);
Unit var_modified_x_1794(const auto &x_1918);
auto eval_expr_x_1791(const auto &x_1924);
Unit var_modified_x_1789(const auto &x_1951);
auto eval_expr_x_1786(const auto &x_1959);
Unit var_modified_x_1784(const auto &x_1970);
auto eval_expr_x_1781(const auto &x_1974);
Unit var_modified_x_1779(const auto &x_1985);
auto eval_expr_x_1776(const auto &x_1989);
Unit var_modified_x_1774(const auto &x_1996);
auto eval_expr_x_1771(const auto &x_2002);
Unit var_modified_x_1769(const auto &x_2013);
auto eval_expr_x_1766(const auto &x_2017);
Unit var_modified_x_1764(const auto &x_2020);
auto eval_expr_x_1761(const auto &x_2024);
Unit var_modified_x_1755(const auto &x_2027);
auto eval_expr_x_1752(const auto &x_2041);
Unit var_modified_x_1750(const auto &x_2086);
auto eval_expr_x_1747(const auto &x_2090);
Unit var_modified_x_1745(const auto &x_2099);
auto eval_expr_x_1742(const auto &x_2107);
Unit var_modified_x_1740(const auto &x_2110);
auto eval_expr_x_1737(const auto &x_2118);
Unit var_modified_x_1735(const auto &x_2123);
auto eval_expr_x_1732(const auto &x_2127);
Unit var_modified_x_1730(const auto &x_2128);
auto eval_expr_x_1727(const auto &x_2132);
Unit var_modified_x_1725(const auto &x_2135);
auto eval_expr_x_1722(const auto &x_2141);
Unit var_modified_x_1720(const auto &x_2152);
auto eval_expr_x_1717(const auto &x_2156);
Unit var_modified_x_1715(const auto &x_2159);
auto eval_expr_x_1712(const auto &x_2165);
Unit var_modified_x_1710(const auto &x_2176);
auto eval_expr_x_1707(const auto &x_2182);
Unit var_modified_x_1705(const auto &x_2195);
auto eval_expr_x_1702(const auto &x_2203);
Unit var_modified_x_1700(const auto &x_2218);
auto eval_expr_x_1697(const auto &x_2222);
Unit var_modified_x_1695(const auto &x_2225);
auto eval_expr_x_1692(const auto &x_2233);
Unit var_modified_x_1690(const auto &x_2238);
auto eval_expr_x_1687(const auto &x_2246);
Unit var_modified_x_1685(const auto &x_2251);
auto eval_expr_x_1682(const auto &x_2257);
Unit var_modified_x_1680(const auto &x_2260);
auto eval_expr_x_1677(const auto &x_2266);
Unit var_modified_x_1675(const auto &x_2269);
auto eval_expr_x_1672(const auto &x_2277);
Unit var_modified_x_1670(const auto &x_2280);
auto eval_expr_x_1667(const auto &x_2288);
Unit var_modified_x_1663(const auto &x_2291);
auto eval_expr_x_1660(const auto &x_2301);
Unit var_modified_x_1658(const auto &x_2316);
auto eval_expr_x_1655(const auto &x_2326);
Unit var_modified_x_1653(const auto &x_2333);
auto eval_expr_x_1650(const auto &x_2343);
Unit var_modified_x_1648(const auto &x_2348);
auto eval_expr_x_1645(const auto &x_2352);
Unit var_modified_x_1643(const auto &x_2357);
auto eval_expr_x_1640(const auto &x_2363);
Unit var_modified_x_1638(const auto &x_2442);
auto eval_expr_x_1635(const auto &x_2446);
Unit var_modified_x_1633(const auto &x_2471);
auto eval_expr_x_1630(const auto &x_2477);
Unit var_modified_x_1628(const auto &x_2480);
auto eval_expr_x_1625(const auto &x_2484);
Unit var_modified_x_1623(const auto &x_2489);
auto eval_expr_x_1620(const auto &x_2499);
Unit var_modified_x_1618(const auto &x_2504);
auto eval_expr_x_1615(const auto &x_2514);
Unit var_modified_x_1613(const auto &x_2519);
auto eval_expr_x_1610(const auto &x_2527);
Unit var_modified_x_1608(const auto &x_2534);
auto eval_expr_x_1605(const auto &x_2538);
Unit var_modified_x_1603(const auto &x_2543);
auto eval_expr_x_1600(const auto &x_2549);
Unit var_modified_x_1598(const auto &x_2632);
auto eval_expr_x_1595(const auto &x_2636);
Unit var_modified_x_1593(const auto &x_2639);
auto eval_expr_x_1590(const auto &x_2643);
Unit var_modified_x_1588(const auto &x_2668);
auto eval_expr_x_1585(const auto &x_2672);
Unit var_modified_x_1583(const auto &x_2679);
auto eval_expr_x_1580(const auto &x_2685);
Unit eval_stmts_x_1506(const auto &x_1578);
Unit eval_stmts_x_1504(const auto &x_1665);
Unit eval_stmts_x_1501(const auto &x_1757);
Unit eval_stmts_x_1499(const auto &x_1759);
Unit x_1821(const auto &x_1822);
Unit x_1825(const auto &x_1826);
Unit x_1309(const auto &x_1310, const auto &x_1311, const auto &x_1312);
Unit x_1316(const auto &x_1317, const auto &x_1318, const auto &x_1319);
Unit x_1323(const auto &x_1324, const auto &x_1325, const auto &x_1326);
Unit x_1330(const auto &x_1331, const auto &x_1332, const auto &x_1333);
Unit x_1354(const auto &x_1355, const auto &x_1356, const auto &x_1357);
Unit x_1375(const auto &x_1376, const auto &x_1377, const auto &x_1378);
Unit x_1410(const auto &x_1411, const auto &x_1412, const auto &x_1413);
Unit x_1461(const auto &x_1462);
Unit x_1469(const auto &x_1470, const auto &x_1471, const auto &x_1472);
Unit x_1497(const auto &x_1498);
Unit x_1502(const auto &x_1503);
Unit x_1507(const auto &x_1508, const auto &x_1509, const auto &x_1510);
Unit x_1535(const auto &x_1536);
Unit eval_stmts_x_1281(const auto &x_1543);
Unit eval_stmts_x_1279(const auto &x_1549);
Unit x_1555(const auto &x_1556);
int64_t x_1563(const auto &x_1564);
int64_t x_1566(const auto &x_1567);
LayoutNode x_1569(const auto &x_1570);
Node x_1572(const auto &x_1573);
Node x_1575(const auto &x_1576);
Unit var_modified_x_1819(const auto &x_1829) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1830) {
    auto x_2688 = [&](const auto &x_1833) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1834) {
        if (x_1833->meta->pass_1_proc_inited) {
          x_1833->meta->bb_3_has_bb_dirtied = true;
          x_1833->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1833);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1829->next, [&](const auto &x_1832) { return MakeUnit(); },
        [&](const auto &x_1831) {
          auto x_2689 = x_2688;
          x_2689(x_1831);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1816(const auto &x_1835) {
  if ((x_1835->prev != nullptr) && (!(x_1835->prev)->var_line_break)) {
    return max(x_1835->var_height_external, (x_1835->prev)->var_line_height);
  } else {
    return x_1835->var_height_external;
  }
}
Unit var_modified_x_1814(const auto &x_1844) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1845) {
    auto x_2690 = [&](const auto &x_1846) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1847) {
        if (x_1846->meta->pass_1_proc_inited) {
          x_1846->meta->bb_3_has_bb_dirtied = true;
          x_1846->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1846);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2690(x_1844);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1811(const auto &x_1848) {
  if (eq(x_1848->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1848->var_height_internal;
  }
}
Unit var_modified_x_1809(const auto &x_1853) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1854) {
    auto x_2691 = [&](const auto &x_1855) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1856) {
        if (x_1855->meta->pass_1_proc_inited) {
          x_1855->meta->bb_3_has_bb_dirtied = true;
          x_1855->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1855);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2691(x_1853);
    MakeUnit();
    ListIter(x_1853->children, [&](const auto &x_1857) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1858) {
        if (x_1857->meta->pass_1_proc_inited) {
          x_1857->meta->bb_3_has_bb_dirtied = true;
          x_1857->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1857);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1806(const auto &x_1859) {
  if (x_1859->var_intrinsic_height_is_height) {
    return x_1859->var_intrinsic_height_internal;
  } else {
    if ((x_1859->parent != nullptr) && (x_1859->parent)->var_is_flex_column) {
      return plus(x_1859->var_intrinsic_height_internal,
                  mult(x_1859->var_flex_amount, (x_1859->parent)->var_flex_unit));
    } else {
      if (x_1859->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_1859->var_box_height, divide(x_1859->var_height_expr.r.a0, 100.));
      } else {
        return max(x_1859->var_box_height, x_1859->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_1804(const auto &x_1886) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1887) {
    ListIter(x_1886->children, [&](const auto &x_1888) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1889) {
        if (x_1888->meta->pass_1_proc_inited) {
          x_1888->meta->bb_3_has_bb_dirtied = true;
          x_1888->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1888);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2692 = [&](const auto &x_1892) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1893) {
        if (x_1892->meta->pass_1_proc_inited) {
          x_1892->meta->bb_3_has_bb_dirtied = true;
          x_1892->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1892);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1886->next, [&](const auto &x_1891) { return MakeUnit(); },
        [&](const auto &x_1890) {
          auto x_2693 = x_2692;
          x_2693(x_1890);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1801(const auto &x_1894) {
  if (x_1894->prev != nullptr) {
    if (x_1894->var_line_break || (x_1894->prev)->var_line_break) {
      return plus((x_1894->prev)->var_y, (x_1894->prev)->var_line_height);
    } else {
      return (x_1894->prev)->var_y;
    }
  } else {
    if (x_1894->parent != nullptr) {
      return (x_1894->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_1799(const auto &x_1907) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1908) {
    auto x_2694 = [&](const auto &x_1911) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1912) {
        if (x_1911->meta->pass_1_proc_inited) {
          x_1911->meta->bb_3_has_bb_dirtied = true;
          x_1911->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1911);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1907->next, [&](const auto &x_1910) { return MakeUnit(); },
        [&](const auto &x_1909) {
          auto x_2695 = x_2694;
          x_2695(x_1909);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1796(const auto &x_1913) {
  if (eq(x_1913->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1913->var_width_internal;
  }
}
Unit var_modified_x_1794(const auto &x_1918) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1919) {
    auto x_2696 = [&](const auto &x_1920) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1921) {
        if (x_1920->meta->pass_1_proc_inited) {
          x_1920->meta->bb_3_has_bb_dirtied = true;
          x_1920->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1920);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2696(x_1918);
    MakeUnit();
    ListIter(x_1918->children, [&](const auto &x_1922) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1923) {
        if (x_1922->meta->pass_1_proc_inited) {
          x_1922->meta->bb_3_has_bb_dirtied = true;
          x_1922->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1922);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1791(const auto &x_1924) {
  if (x_1924->var_intrinsic_width_is_width) {
    return x_1924->var_intrinsic_width_internal;
  } else {
    if ((x_1924->parent != nullptr) && (x_1924->parent)->var_is_flex_row) {
      return plus(x_1924->var_intrinsic_width_internal, mult(x_1924->var_flex_amount, (x_1924->parent)->var_flex_unit));
    } else {
      if (x_1924->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_1924->var_box_width, divide(x_1924->var_width_expr.r.a0, 100.));
      } else {
        return max(x_1924->var_box_width, x_1924->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_1789(const auto &x_1951) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1952) {
    ListIter(x_1951->children, [&](const auto &x_1953) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1954) {
        if (x_1953->meta->pass_1_proc_inited) {
          x_1953->meta->bb_3_has_bb_dirtied = true;
          x_1953->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1953);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2697 = [&](const auto &x_1957) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1958) {
        if (x_1957->meta->pass_1_proc_inited) {
          x_1957->meta->bb_3_has_bb_dirtied = true;
          x_1957->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1957);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1951->next, [&](const auto &x_1956) { return MakeUnit(); },
        [&](const auto &x_1955) {
          auto x_2698 = x_2697;
          x_2698(x_1955);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1786(const auto &x_1959) {
  if (x_1959->prev != nullptr) {
    if (x_1959->var_line_break || (x_1959->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_1959->prev)->var_x, (x_1959->prev)->var_width_external);
    }
  } else {
    if (x_1959->parent != nullptr) {
      return (x_1959->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_1784(const auto &x_1970) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1971) {
    ListIter(x_1970->children, [&](const auto &x_1972) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1973) {
        if (x_1972->meta->pass_1_proc_inited) {
          x_1972->meta->bb_3_has_bb_dirtied = true;
          x_1972->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1972);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1781(const auto &x_1974) {
  if (gt(x_1974->var_left_over, 0.)) {
    return divide(x_1974->var_left_over, x_1974->var_flex_grow_sum);
  } else {
    return divide(x_1974->var_left_over, x_1974->var_flex_shrink_sum);
  }
}
Unit var_modified_x_1779(const auto &x_1985) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1986) {
    auto x_2699 = [&](const auto &x_1987) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1988) {
        if (x_1987->meta->pass_1_proc_inited) {
          x_1987->meta->bb_3_has_bb_dirtied = true;
          x_1987->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1987);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2699(x_1985);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1776(const auto &x_1989) {
  if ((x_1989->parent != nullptr) && gt((x_1989->parent)->var_left_over, 0.)) {
    return x_1989->var_flex_grow;
  } else {
    return x_1989->var_flex_shrink;
  }
}
Unit var_modified_x_1774(const auto &x_1996) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1997) {
    auto x_2700 = [&](const auto &x_1998) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1999) {
        if (x_1998->meta->pass_1_proc_inited) {
          x_1998->meta->bb_3_has_bb_dirtied = true;
          x_1998->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1998);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2700(x_1996);
    MakeUnit();
    ListIter(x_1996->children, [&](const auto &x_2000) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2001) {
        if (x_2000->meta->pass_1_proc_inited) {
          x_2000->meta->bb_3_has_bb_dirtied = true;
          x_2000->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2000);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1771(const auto &x_2002) {
  if (x_2002->var_is_flex_row) {
    return minus(x_2002->var_box_width, (x_2002->last != nullptr) ? ((x_2002->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2002->var_box_height, (x_2002->last != nullptr) ? ((x_2002->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_1769(const auto &x_2013) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2014) {
    auto x_2701 = [&](const auto &x_2015) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2016) {
        if (x_2015->meta->pass_1_proc_inited) {
          x_2015->meta->bb_3_has_bb_dirtied = true;
          x_2015->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2015);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2701(x_2013);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1766(const auto &x_2017) {
  if (x_2017->parent != nullptr) {
    return (x_2017->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_1764(const auto &x_2020) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2021) {
    auto x_2702 = [&](const auto &x_2022) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2023) {
        if (x_2022->meta->pass_1_proc_inited) {
          x_2022->meta->bb_3_has_bb_dirtied = true;
          x_2022->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2022);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2702(x_2020);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1761(const auto &x_2024) {
  if (x_2024->parent != nullptr) {
    return (x_2024->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_1755(const auto &x_2027) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2028) {
    auto x_2703 = [&](const auto &x_2029) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2030) {
        if (x_2029->meta->pass_0_proc_inited) {
          x_2029->meta->bb_0_has_bb_dirtied = true;
          x_2029->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2029);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2703(x_2027);
    MakeUnit();
    auto x_2704 = [&](const auto &x_2033) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2034) {
        if (x_2033->meta->pass_0_proc_inited) {
          x_2033->meta->bb_0_has_bb_dirtied = true;
          x_2033->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2033);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2027->next, [&](const auto &x_2032) { return MakeUnit(); },
        [&](const auto &x_2031) {
          auto x_2707 = x_2704;
          x_2707(x_2031);
          return MakeUnit();
        });
    auto x_2705 = [&](const auto &x_2035) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2036) {
        if (x_2035->meta->pass_1_proc_inited) {
          x_2035->meta->bb_3_has_bb_dirtied = true;
          x_2035->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2035);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2705(x_2027);
    MakeUnit();
    auto x_2706 = [&](const auto &x_2039) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2040) {
        if (x_2039->meta->pass_1_proc_inited) {
          x_2039->meta->bb_3_has_bb_dirtied = true;
          x_2039->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2039);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2027->next, [&](const auto &x_2038) { return MakeUnit(); },
        [&](const auto &x_2037) {
          auto x_2708 = x_2706;
          x_2708(x_2037);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1752(const auto &x_2041) {
  if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_2041->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_2041->parent != nullptr) &&
          (eq((x_2041->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_2041->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_2041->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_2041->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_2041->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_2041->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_1750(const auto &x_2086) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2087) {
    ListIter(x_2086->children, [&](const auto &x_2088) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2089) {
        if (x_2088->meta->pass_0_proc_inited) {
          x_2088->meta->bb_1_has_bb_dirtied = true;
          x_2088->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2088);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1747(const auto &x_2090) {
  return (((!(x_2090->parent != nullptr)) || (x_2090->parent)->var_visible) &&
          (neq(x_2090->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_2090->var_inside_svg) && (!x_2090->var_disabled))));
}
Unit var_modified_x_1745(const auto &x_2099) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2100) {
    auto x_2709 = [&](const auto &x_2101) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2102) {
        if (x_2101->meta->pass_0_proc_inited) {
          x_2101->meta->bb_1_has_bb_dirtied = true;
          x_2101->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2101);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2709(x_2099);
    MakeUnit();
    ListIter(x_2099->children, [&](const auto &x_2103) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2104) {
        if (x_2103->meta->pass_0_proc_inited) {
          x_2103->meta->bb_1_has_bb_dirtied = true;
          x_2103->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2103);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2710 = [&](const auto &x_2105) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2106) {
        if (x_2105->meta->pass_0_proc_inited) {
          x_2105->meta->bb_0_has_bb_dirtied = true;
          x_2105->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2105);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2710(x_2099);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1742(const auto &x_2107) {
  if (eq(x_2107->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_2107->parent != nullptr) && (x_2107->parent)->var_disabled);
  }
}
Unit var_modified_x_1740(const auto &x_2110) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2111) {
    auto x_2711 = [&](const auto &x_2112) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2113) {
        if (x_2112->meta->pass_0_proc_inited) {
          x_2112->meta->bb_1_has_bb_dirtied = true;
          x_2112->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2112);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2711(x_2110);
    MakeUnit();
    ListIter(x_2110->children, [&](const auto &x_2114) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2115) {
        if (x_2114->meta->pass_0_proc_inited) {
          x_2114->meta->bb_1_has_bb_dirtied = true;
          x_2114->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2114);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2712 = [&](const auto &x_2116) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2117) {
        if (x_2116->meta->pass_0_proc_inited) {
          x_2116->meta->bb_0_has_bb_dirtied = true;
          x_2116->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2116);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2712(x_2110);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1737(const auto &x_2118) {
  return ((x_2118->parent != nullptr) && ((x_2118->parent)->var_is_svg_block || (x_2118->parent)->var_inside_svg));
}
Unit var_modified_x_1735(const auto &x_2123) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2124) {
    ListIter(x_2123->children, [&](const auto &x_2125) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2126) {
        if (x_2125->meta->pass_0_proc_inited) {
          x_2125->meta->bb_1_has_bb_dirtied = true;
          x_2125->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2125);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1732(const auto &x_2127) { return eq(x_2127->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_1730(const auto &x_2128) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2129) {
    auto x_2713 = [&](const auto &x_2130) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2131) {
        if (x_2130->meta->pass_0_proc_inited) {
          x_2130->meta->bb_0_has_bb_dirtied = true;
          x_2130->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2130);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2713(x_2128);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1727(const auto &x_2132) {
  return neq(x_2132->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_1725(const auto &x_2135) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2136) {
    auto x_2714 = [&](const auto &x_2137) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2138) {
        if (x_2137->meta->pass_0_proc_inited) {
          x_2137->meta->bb_1_has_bb_dirtied = true;
          x_2137->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2137);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2714(x_2135);
    MakeUnit();
    auto x_2715 = [&](const auto &x_2139) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2140) {
        if (x_2139->meta->pass_0_proc_inited) {
          x_2139->meta->bb_0_has_bb_dirtied = true;
          x_2139->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2139);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2715(x_2135);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1722(const auto &x_2141) {
  if (!x_2141->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2141->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_2141->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2141->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_1720(const auto &x_2152) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2153) {
    auto x_2716 = [&](const auto &x_2154) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2155) {
        if (x_2154->meta->pass_0_proc_inited) {
          x_2154->meta->bb_0_has_bb_dirtied = true;
          x_2154->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2154);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2716(x_2152);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1717(const auto &x_2156) {
  return neq(x_2156->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_1715(const auto &x_2159) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2160) {
    auto x_2717 = [&](const auto &x_2161) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2162) {
        if (x_2161->meta->pass_0_proc_inited) {
          x_2161->meta->bb_1_has_bb_dirtied = true;
          x_2161->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2161);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2717(x_2159);
    MakeUnit();
    auto x_2718 = [&](const auto &x_2163) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2164) {
        if (x_2163->meta->pass_0_proc_inited) {
          x_2163->meta->bb_0_has_bb_dirtied = true;
          x_2163->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2163);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2718(x_2159);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1712(const auto &x_2165) {
  if (!x_2165->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_2165->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_2165->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_2165->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_1710(const auto &x_2176) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2177) {
    ListIter(x_2176->children, [&](const auto &x_2178) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2179) {
        if (x_2178->meta->pass_0_proc_inited) {
          x_2178->meta->bb_0_has_bb_dirtied = true;
          x_2178->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2178);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    ListIter(x_2176->children, [&](const auto &x_2180) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2181) {
        if (x_2180->meta->pass_1_proc_inited) {
          x_2180->meta->bb_3_has_bb_dirtied = true;
          x_2180->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2180);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1707(const auto &x_2182) {
  if ((x_2182->parent != nullptr) &&
      (eq((x_2182->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2182->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2182->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_2182->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_1705(const auto &x_2195) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2196) {
    ListIter(x_2195->children, [&](const auto &x_2197) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2198) {
        if (x_2197->meta->pass_0_proc_inited) {
          x_2197->meta->bb_0_has_bb_dirtied = true;
          x_2197->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2197);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2719 = [&](const auto &x_2199) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2200) {
        if (x_2199->meta->pass_1_proc_inited) {
          x_2199->meta->bb_3_has_bb_dirtied = true;
          x_2199->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2199);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2719(x_2195);
    MakeUnit();
    ListIter(x_2195->children, [&](const auto &x_2201) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2202) {
        if (x_2201->meta->pass_1_proc_inited) {
          x_2201->meta->bb_3_has_bb_dirtied = true;
          x_2201->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2201);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1702(const auto &x_2203) {
  if ((x_2203->parent != nullptr) &&
      (eq((x_2203->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_2203->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_2203->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_2203->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_1700(const auto &x_2218) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2219) {
    ListIter(x_2218->children, [&](const auto &x_2220) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2221) {
        if (x_2220->meta->pass_0_proc_inited) {
          x_2220->meta->bb_1_has_bb_dirtied = true;
          x_2220->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2220);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_1697(const auto &x_2222) {
  if (x_2222->has_prop_flex_direction) {
    return x_2222->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_1695(const auto &x_2225) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2226) {
    auto x_2720 = [&](const auto &x_2229) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2230) {
        if (x_2229->meta->pass_0_proc_inited) {
          x_2229->meta->bb_1_has_bb_dirtied = true;
          x_2229->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2229);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2225->next, [&](const auto &x_2228) { return MakeUnit(); },
        [&](const auto &x_2227) {
          auto x_2722 = x_2720;
          x_2722(x_2227);
          return MakeUnit();
        });
    auto x_2721 = [&](const auto &x_2231) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2232) {
        if (x_2231->meta->pass_1_proc_inited) {
          x_2231->meta->bb_3_has_bb_dirtied = true;
          x_2231->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2231);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2721(x_2225);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1692(const auto &x_2233) {
  return plus((x_2233->prev != nullptr) ? ((x_2233->prev)->var_flex_shrink_sum) : (0.), x_2233->var_flex_shrink);
}
Unit var_modified_x_1690(const auto &x_2238) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2239) {
    auto x_2723 = [&](const auto &x_2242) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2243) {
        if (x_2242->meta->pass_0_proc_inited) {
          x_2242->meta->bb_1_has_bb_dirtied = true;
          x_2242->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2242);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2238->next, [&](const auto &x_2241) { return MakeUnit(); },
        [&](const auto &x_2240) {
          auto x_2725 = x_2723;
          x_2725(x_2240);
          return MakeUnit();
        });
    auto x_2724 = [&](const auto &x_2244) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2245) {
        if (x_2244->meta->pass_1_proc_inited) {
          x_2244->meta->bb_3_has_bb_dirtied = true;
          x_2244->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2244);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2724(x_2238);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1687(const auto &x_2246) {
  return plus((x_2246->prev != nullptr) ? ((x_2246->prev)->var_flex_grow_sum) : (0.), x_2246->var_flex_grow);
}
Unit var_modified_x_1685(const auto &x_2251) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2252) {
    auto x_2726 = [&](const auto &x_2253) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2254) {
        if (x_2253->meta->pass_0_proc_inited) {
          x_2253->meta->bb_1_has_bb_dirtied = true;
          x_2253->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2253);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2726(x_2251);
    MakeUnit();
    auto x_2727 = [&](const auto &x_2255) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2256) {
        if (x_2255->meta->pass_1_proc_inited) {
          x_2255->meta->bb_3_has_bb_dirtied = true;
          x_2255->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2255);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2727(x_2251);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1682(const auto &x_2257) {
  if (x_2257->has_prop_flex_shrink) {
    return (x_2257->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_1680(const auto &x_2260) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2261) {
    auto x_2728 = [&](const auto &x_2262) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2263) {
        if (x_2262->meta->pass_0_proc_inited) {
          x_2262->meta->bb_1_has_bb_dirtied = true;
          x_2262->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2262);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2728(x_2260);
    MakeUnit();
    auto x_2729 = [&](const auto &x_2264) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2265) {
        if (x_2264->meta->pass_1_proc_inited) {
          x_2264->meta->bb_3_has_bb_dirtied = true;
          x_2264->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2264);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2729(x_2260);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1677(const auto &x_2266) {
  if (x_2266->has_prop_flex_grow) {
    return (x_2266->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_1675(const auto &x_2269) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2270) {
    auto x_2730 = [&](const auto &x_2271) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2272) {
        if (x_2271->meta->pass_0_proc_inited) {
          x_2271->meta->bb_1_has_bb_dirtied = true;
          x_2271->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2271);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2730(x_2269);
    MakeUnit();
    auto x_2731 = [&](const auto &x_2273) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2274) {
        if (x_2273->meta->pass_0_proc_inited) {
          x_2273->meta->bb_0_has_bb_dirtied = true;
          x_2273->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2273);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2731(x_2269);
    MakeUnit();
    auto x_2732 = [&](const auto &x_2275) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2276) {
        if (x_2275->meta->pass_1_proc_inited) {
          x_2275->meta->bb_3_has_bb_dirtied = true;
          x_2275->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2275);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2732(x_2269);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1672(const auto &x_2277) {
  if (x_2277->has_prop_position) {
    return x_2277->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_1670(const auto &x_2280) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2281) {
    auto x_2733 = [&](const auto &x_2282) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2283) {
        if (x_2282->meta->pass_0_proc_inited) {
          x_2282->meta->bb_1_has_bb_dirtied = true;
          x_2282->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2282);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2733(x_2280);
    MakeUnit();
    ListIter(x_2280->children, [&](const auto &x_2284) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2285) {
        if (x_2284->meta->pass_0_proc_inited) {
          x_2284->meta->bb_1_has_bb_dirtied = true;
          x_2284->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2284);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2734 = [&](const auto &x_2286) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2287) {
        if (x_2286->meta->pass_0_proc_inited) {
          x_2286->meta->bb_0_has_bb_dirtied = true;
          x_2286->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2286);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2734(x_2280);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1667(const auto &x_2288) {
  if (x_2288->has_prop_display) {
    return x_2288->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_1663(const auto &x_2291) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2292) {
    auto x_2735 = [&](const auto &x_2295) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2296) {
        if (x_2295->meta->pass_0_proc_inited) {
          x_2295->meta->bb_0_has_bb_dirtied = true;
          x_2295->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2295);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_2291->next == nullptr) {
      auto x_2737 = x_2735;
      OptionMatch(
          x_2291->parent, [&](const auto &x_2294) { return MakeUnit(); },
          [&](const auto &x_2293) {
            auto x_2739 = x_2737;
            x_2739(x_2293);
            return MakeUnit();
          });
    }
    auto x_2736 = [&](const auto &x_2299) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2300) {
        if (x_2299->meta->pass_0_proc_inited) {
          x_2299->meta->bb_0_has_bb_dirtied = true;
          x_2299->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2299);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2291->next, [&](const auto &x_2298) { return MakeUnit(); },
        [&](const auto &x_2297) {
          auto x_2738 = x_2736;
          x_2738(x_2297);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1660(const auto &x_2301) {
  if (x_2301->prev != nullptr) {
    if (x_2301->var_line_break) {
      return plus((x_2301->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2301->prev)->var_intrinsic_current_line_height, x_2301->var_intrinsic_height_external));
    } else {
      return (x_2301->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2301->var_line_break) {
      return x_2301->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_1658(const auto &x_2316) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2317) {
    auto x_2740 = [&](const auto &x_2320) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2321) {
        if (x_2320->meta->pass_0_proc_inited) {
          x_2320->meta->bb_0_has_bb_dirtied = true;
          x_2320->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2320);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_2316->next == nullptr) {
      auto x_2742 = x_2740;
      OptionMatch(
          x_2316->parent, [&](const auto &x_2319) { return MakeUnit(); },
          [&](const auto &x_2318) {
            auto x_2744 = x_2742;
            x_2744(x_2318);
            return MakeUnit();
          });
    }
    auto x_2741 = [&](const auto &x_2324) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2325) {
        if (x_2324->meta->pass_0_proc_inited) {
          x_2324->meta->bb_0_has_bb_dirtied = true;
          x_2324->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2324);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2316->next, [&](const auto &x_2323) { return MakeUnit(); },
        [&](const auto &x_2322) {
          auto x_2743 = x_2741;
          x_2743(x_2322);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1655(const auto &x_2326) {
  if (x_2326->var_line_break) {
    return 0.;
  } else {
    return max(x_2326->var_intrinsic_height_external,
               (x_2326->prev != nullptr) ? ((x_2326->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_1653(const auto &x_2333) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2334) {
    auto x_2745 = [&](const auto &x_2337) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2338) {
        if (x_2337->meta->pass_0_proc_inited) {
          x_2337->meta->bb_0_has_bb_dirtied = true;
          x_2337->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2337);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2333->next, [&](const auto &x_2336) { return MakeUnit(); },
        [&](const auto &x_2335) {
          auto x_2747 = x_2745;
          x_2747(x_2335);
          return MakeUnit();
        });
    auto x_2746 = [&](const auto &x_2341) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2342) {
        if (x_2341->meta->pass_1_proc_inited) {
          x_2341->meta->bb_3_has_bb_dirtied = true;
          x_2341->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2341);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_2333->next == nullptr) {
      auto x_2748 = x_2746;
      OptionMatch(
          x_2333->parent, [&](const auto &x_2340) { return MakeUnit(); },
          [&](const auto &x_2339) {
            auto x_2749 = x_2748;
            x_2749(x_2339);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_1650(const auto &x_2343) {
  return plus((x_2343->prev != nullptr) ? ((x_2343->prev)->var_intrinsic_height_sum) : (0.),
              x_2343->var_intrinsic_height_external);
}
Unit var_modified_x_1648(const auto &x_2348) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2349) {
    auto x_2750 = [&](const auto &x_2350) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2351) {
        if (x_2350->meta->pass_0_proc_inited) {
          x_2350->meta->bb_0_has_bb_dirtied = true;
          x_2350->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2350);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2750(x_2348);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1645(const auto &x_2352) {
  if (eq(x_2352->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2352->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_1643(const auto &x_2357) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2358) {
    auto x_2751 = [&](const auto &x_2359) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2360) {
        if (x_2359->meta->pass_0_proc_inited) {
          x_2359->meta->bb_0_has_bb_dirtied = true;
          x_2359->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2359);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2751(x_2357);
    MakeUnit();
    auto x_2752 = [&](const auto &x_2361) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2362) {
        if (x_2361->meta->pass_1_proc_inited) {
          x_2361->meta->bb_3_has_bb_dirtied = true;
          x_2361->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2361);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2752(x_2357);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1640(const auto &x_2363) {
  if (eq(x_2363->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_2363->var_inside_svg) {
      return 0.;
    } else {
      if (x_2363->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2363->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_2363->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_2363->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_2363->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_2363->var_height_expr.r.a0;
          } else {
            if (x_2363->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_2363->var_height_expr.r.a0;
            } else {
              return x_2363->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_2363->var_children_intrinsic_height,
              (eq(x_2363->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_2363->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2363->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_2363->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_2363->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_2363->var_has_height_attr &&
                                                  (x_2363->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_2363->var_height_attr_expr.r.a0)
                                                     : ((x_2363->has_attr_viewBox)
                                                            ? (x_2363->attr_viewBox.r.a3)
                                                            : (mult((x_2363->attr_viewBox.r.a3),
                                                                    divide(x_2363->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_2363->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_2363->var_has_height_attr)
                                                            ? (x_2363->var_height_attr_expr.r.a0)
                                                            : ((x_2363->has_attr_image_height &&
                                                                (!x_2363->var_has_width_attr))
                                                                   ? (int_to_float(x_2363->attr_image_height))
                                                                   : ((neq(x_2363->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_2363->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_2363->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_2363->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_2363->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_2363->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1638(const auto &x_2442) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2443) {
    auto x_2753 = [&](const auto &x_2444) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2445) {
        if (x_2444->meta->pass_1_proc_inited) {
          x_2444->meta->bb_3_has_bb_dirtied = true;
          x_2444->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2444);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2753(x_2442);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1635(const auto &x_2446) {
  if (eq(x_2446->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_2446->var_inside_svg || x_2446->var_disabled)) {
    return true;
  } else {
    if ((x_2446->parent != nullptr) && (x_2446->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_2446->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_2446->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_2446->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_2446->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_2446->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1633(const auto &x_2471) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2472) {
    auto x_2754 = [&](const auto &x_2473) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2474) {
        if (x_2473->meta->pass_0_proc_inited) {
          x_2473->meta->bb_0_has_bb_dirtied = true;
          x_2473->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2473);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2754(x_2471);
    MakeUnit();
    auto x_2755 = [&](const auto &x_2475) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2476) {
        if (x_2475->meta->pass_1_proc_inited) {
          x_2475->meta->bb_3_has_bb_dirtied = true;
          x_2475->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2475);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2755(x_2471);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1630(const auto &x_2477) {
  if (x_2477->has_prop_height) {
    return x_2477->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_1628(const auto &x_2480) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2481) {
    auto x_2756 = [&](const auto &x_2482) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2483) {
        if (x_2482->meta->pass_0_proc_inited) {
          x_2482->meta->bb_0_has_bb_dirtied = true;
          x_2482->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2482);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2756(x_2480);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1625(const auto &x_2484) {
  if (x_2484->last != nullptr) {
    return plus((x_2484->last)->var_finished_intrinsic_height_sum, (x_2484->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_1623(const auto &x_2489) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2490) {
    auto x_2757 = [&](const auto &x_2493) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2494) {
        if (x_2493->meta->pass_0_proc_inited) {
          x_2493->meta->bb_0_has_bb_dirtied = true;
          x_2493->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2493);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2489->next, [&](const auto &x_2492) { return MakeUnit(); },
        [&](const auto &x_2491) {
          auto x_2759 = x_2757;
          x_2759(x_2491);
          return MakeUnit();
        });
    auto x_2758 = [&](const auto &x_2497) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2498) {
        if (x_2497->meta->pass_1_proc_inited) {
          x_2497->meta->bb_3_has_bb_dirtied = true;
          x_2497->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2497);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_2489->next == nullptr) {
      auto x_2760 = x_2758;
      OptionMatch(
          x_2489->parent, [&](const auto &x_2496) { return MakeUnit(); },
          [&](const auto &x_2495) {
            auto x_2761 = x_2760;
            x_2761(x_2495);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_1620(const auto &x_2499) {
  return plus((x_2499->prev != nullptr) ? ((x_2499->prev)->var_intrinsic_width_sum) : (0.),
              x_2499->var_intrinsic_width_external);
}
Unit var_modified_x_1618(const auto &x_2504) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2505) {
    auto x_2762 = [&](const auto &x_2508) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2509) {
        if (x_2508->meta->pass_0_proc_inited) {
          x_2508->meta->bb_0_has_bb_dirtied = true;
          x_2508->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2508);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_2504->next == nullptr) {
      auto x_2764 = x_2762;
      OptionMatch(
          x_2504->parent, [&](const auto &x_2507) { return MakeUnit(); },
          [&](const auto &x_2506) {
            auto x_2766 = x_2764;
            x_2766(x_2506);
            return MakeUnit();
          });
    }
    auto x_2763 = [&](const auto &x_2512) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2513) {
        if (x_2512->meta->pass_0_proc_inited) {
          x_2512->meta->bb_0_has_bb_dirtied = true;
          x_2512->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2512);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2504->next, [&](const auto &x_2511) { return MakeUnit(); },
        [&](const auto &x_2510) {
          auto x_2765 = x_2763;
          x_2765(x_2510);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1615(const auto &x_2514) {
  return max(x_2514->var_intrinsic_current_line_width,
             (x_2514->prev != nullptr) ? ((x_2514->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_1613(const auto &x_2519) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2520) {
    auto x_2767 = [&](const auto &x_2521) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2522) {
        if (x_2521->meta->pass_0_proc_inited) {
          x_2521->meta->bb_0_has_bb_dirtied = true;
          x_2521->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2521);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2767(x_2519);
    MakeUnit();
    auto x_2768 = [&](const auto &x_2525) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2526) {
        if (x_2525->meta->pass_0_proc_inited) {
          x_2525->meta->bb_0_has_bb_dirtied = true;
          x_2525->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2525);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_2519->next, [&](const auto &x_2524) { return MakeUnit(); },
        [&](const auto &x_2523) {
          auto x_2769 = x_2768;
          x_2769(x_2523);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_1610(const auto &x_2527) {
  return plus(x_2527->var_intrinsic_width_external,
              ((x_2527->prev != nullptr) && (!(x_2527->prev)->var_line_break))
                  ? ((x_2527->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_1608(const auto &x_2534) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2535) {
    auto x_2770 = [&](const auto &x_2536) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2537) {
        if (x_2536->meta->pass_0_proc_inited) {
          x_2536->meta->bb_0_has_bb_dirtied = true;
          x_2536->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2536);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2770(x_2534);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1605(const auto &x_2538) {
  if (eq(x_2538->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2538->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_1603(const auto &x_2543) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2544) {
    auto x_2771 = [&](const auto &x_2545) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2546) {
        if (x_2545->meta->pass_0_proc_inited) {
          x_2545->meta->bb_0_has_bb_dirtied = true;
          x_2545->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2545);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2771(x_2543);
    MakeUnit();
    auto x_2772 = [&](const auto &x_2547) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2548) {
        if (x_2547->meta->pass_1_proc_inited) {
          x_2547->meta->bb_3_has_bb_dirtied = true;
          x_2547->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2547);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2772(x_2543);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1600(const auto &x_2549) {
  if (eq(x_2549->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_2549->var_inside_svg) {
      return 0.;
    } else {
      if (x_2549->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2549->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_2549->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_2549->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_2549->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_2549->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_2549->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_2549->var_width_expr.r.a0;
          } else {
            return x_2549->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_2549->var_children_intrinsic_width,
              (eq(x_2549->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_2549->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2549->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_2549->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_2549->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_2549->var_has_width_attr &&
                                                  (x_2549->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_2549->var_width_attr_expr.r.a0)
                                                     : (((!x_2549->var_has_width_attr) && x_2549->has_attr_viewBox)
                                                            ? (x_2549->attr_viewBox.r.a2)
                                                            : (mult((x_2549->attr_viewBox.r.a2),
                                                                    divide(x_2549->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_2549->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_2549->var_has_width_attr)
                                                            ? (x_2549->var_width_attr_expr.r.a0)
                                                            : ((x_2549->has_attr_image_width &&
                                                                (!x_2549->var_has_height_attr))
                                                                   ? (int_to_float(x_2549->attr_image_width))
                                                                   : ((neq(x_2549->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_2549->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_2549->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_2549->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_2549->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_2549->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1598(const auto &x_2632) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2633) {
    auto x_2773 = [&](const auto &x_2634) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2635) {
        if (x_2634->meta->pass_0_proc_inited) {
          x_2634->meta->bb_0_has_bb_dirtied = true;
          x_2634->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2634);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2773(x_2632);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1595(const auto &x_2636) {
  if (x_2636->last != nullptr) {
    return (x_2636->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_1593(const auto &x_2639) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2640) {
    auto x_2774 = [&](const auto &x_2641) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2642) {
        if (x_2641->meta->pass_1_proc_inited) {
          x_2641->meta->bb_3_has_bb_dirtied = true;
          x_2641->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2641);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2774(x_2639);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1590(const auto &x_2643) {
  if (eq(x_2643->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_2643->var_inside_svg || x_2643->var_disabled)) {
    return true;
  } else {
    if ((x_2643->parent != nullptr) && (x_2643->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2643->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_2643->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_2643->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_2643->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_2643->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1588(const auto &x_2668) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2669) {
    auto x_2775 = [&](const auto &x_2670) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2671) {
        if (x_2670->meta->pass_0_proc_inited) {
          x_2670->meta->bb_0_has_bb_dirtied = true;
          x_2670->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2670);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2775(x_2668);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1585(const auto &x_2672) {
  if (eq(x_2672->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_2672->var_inside_svg) {
      return true;
    } else {
      if (x_2672->var_disabled) {
        return true;
      } else {if ( eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_2672->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_1583(const auto &x_2679) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2680) {
    auto x_2776 = [&](const auto &x_2681) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2682) {
        if (x_2681->meta->pass_0_proc_inited) {
          x_2681->meta->bb_0_has_bb_dirtied = true;
          x_2681->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_2681);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2776(x_2679);
    MakeUnit();
    auto x_2777 = [&](const auto &x_2683) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2684) {
        if (x_2683->meta->pass_1_proc_inited) {
          x_2683->meta->bb_3_has_bb_dirtied = true;
          x_2683->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_2683);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2777(x_2679);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_1580(const auto &x_2685) {
  if (x_2685->has_prop_width) {
    return x_2685->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_1506(const auto &x_1578) {
  return MetricRecordEval(TimedOnly([&](const auto &x_1579) {
    WriteMetric();
    auto x_1581 = eval_expr_x_1580(x_1578);
    if (x_1578->has_var_width_expr) {
      auto x_1582 = x_1578->var_width_expr;
      if (!EqualValue(x_1582, x_1581)) {
        var_modified_x_1583(x_1578);
      }
    }
    x_1578->has_var_width_expr = true;
    x_1578->var_width_expr = AsDEString(x_1581);
    WriteMetric();
    auto x_1586 = eval_expr_x_1585(x_1578);
    if (x_1578->has_var_is_default_case) {
      auto x_1587 = x_1578->var_is_default_case;
      if (!EqualValue(x_1587, x_1586)) {
        var_modified_x_1588(x_1578);
      }
    }
    x_1578->has_var_is_default_case = true;
    x_1578->var_is_default_case = Asbool(x_1586);
    WriteMetric();
    auto x_1591 = eval_expr_x_1590(x_1578);
    if (x_1578->has_var_intrinsic_width_is_width) {
      auto x_1592 = x_1578->var_intrinsic_width_is_width;
      if (!EqualValue(x_1592, x_1591)) {
        var_modified_x_1593(x_1578);
      }
    }
    x_1578->has_var_intrinsic_width_is_width = true;
    x_1578->var_intrinsic_width_is_width = Asbool(x_1591);
    WriteMetric();
    auto x_1596 = eval_expr_x_1595(x_1578);
    if (x_1578->has_var_children_intrinsic_width) {
      auto x_1597 = x_1578->var_children_intrinsic_width;
      if (!EqualValue(x_1597, x_1596)) {
        var_modified_x_1598(x_1578);
      }
    }
    x_1578->has_var_children_intrinsic_width = true;
    x_1578->var_children_intrinsic_width = Asdouble(x_1596);
    WriteMetric();
    auto x_1601 = eval_expr_x_1600(x_1578);
    if (x_1578->has_var_intrinsic_width_internal) {
      auto x_1602 = x_1578->var_intrinsic_width_internal;
      if (!EqualValue(x_1602, x_1601)) {
        var_modified_x_1603(x_1578);
      }
    }
    x_1578->has_var_intrinsic_width_internal = true;
    x_1578->var_intrinsic_width_internal = Asdouble(x_1601);
    WriteMetric();
    auto x_1606 = eval_expr_x_1605(x_1578);
    if (x_1578->has_var_intrinsic_width_external) {
      auto x_1607 = x_1578->var_intrinsic_width_external;
      if (!EqualValue(x_1607, x_1606)) {
        var_modified_x_1608(x_1578);
      }
    }
    x_1578->has_var_intrinsic_width_external = true;
    x_1578->var_intrinsic_width_external = Asdouble(x_1606);
    WriteMetric();
    auto x_1611 = eval_expr_x_1610(x_1578);
    if (x_1578->has_var_intrinsic_current_line_width) {
      auto x_1612 = x_1578->var_intrinsic_current_line_width;
      if (!EqualValue(x_1612, x_1611)) {
        var_modified_x_1613(x_1578);
      }
    }
    x_1578->has_var_intrinsic_current_line_width = true;
    x_1578->var_intrinsic_current_line_width = Asdouble(x_1611);
    WriteMetric();
    auto x_1616 = eval_expr_x_1615(x_1578);
    if (x_1578->has_var_intrinsic_width_max) {
      auto x_1617 = x_1578->var_intrinsic_width_max;
      if (!EqualValue(x_1617, x_1616)) {
        var_modified_x_1618(x_1578);
      }
    }
    x_1578->has_var_intrinsic_width_max = true;
    x_1578->var_intrinsic_width_max = Asdouble(x_1616);
    WriteMetric();
    auto x_1621 = eval_expr_x_1620(x_1578);
    if (x_1578->has_var_intrinsic_width_sum) {
      auto x_1622 = x_1578->var_intrinsic_width_sum;
      if (!EqualValue(x_1622, x_1621)) {
        var_modified_x_1623(x_1578);
      }
    }
    x_1578->has_var_intrinsic_width_sum = true;
    x_1578->var_intrinsic_width_sum = Asdouble(x_1621);
    WriteMetric();
    auto x_1626 = eval_expr_x_1625(x_1578);
    if (x_1578->has_var_children_intrinsic_height) {
      auto x_1627 = x_1578->var_children_intrinsic_height;
      if (!EqualValue(x_1627, x_1626)) {
        var_modified_x_1628(x_1578);
      }
    }
    x_1578->has_var_children_intrinsic_height = true;
    x_1578->var_children_intrinsic_height = Asdouble(x_1626);
    WriteMetric();
    auto x_1631 = eval_expr_x_1630(x_1578);
    if (x_1578->has_var_height_expr) {
      auto x_1632 = x_1578->var_height_expr;
      if (!EqualValue(x_1632, x_1631)) {
        var_modified_x_1633(x_1578);
      }
    }
    x_1578->has_var_height_expr = true;
    x_1578->var_height_expr = AsDEString(x_1631);
    WriteMetric();
    auto x_1636 = eval_expr_x_1635(x_1578);
    if (x_1578->has_var_intrinsic_height_is_height) {
      auto x_1637 = x_1578->var_intrinsic_height_is_height;
      if (!EqualValue(x_1637, x_1636)) {
        var_modified_x_1638(x_1578);
      }
    }
    x_1578->has_var_intrinsic_height_is_height = true;
    x_1578->var_intrinsic_height_is_height = Asbool(x_1636);
    WriteMetric();
    auto x_1641 = eval_expr_x_1640(x_1578);
    if (x_1578->has_var_intrinsic_height_internal) {
      auto x_1642 = x_1578->var_intrinsic_height_internal;
      if (!EqualValue(x_1642, x_1641)) {
        var_modified_x_1643(x_1578);
      }
    }
    x_1578->has_var_intrinsic_height_internal = true;
    x_1578->var_intrinsic_height_internal = Asdouble(x_1641);
    WriteMetric();
    auto x_1646 = eval_expr_x_1645(x_1578);
    if (x_1578->has_var_intrinsic_height_external) {
      auto x_1647 = x_1578->var_intrinsic_height_external;
      if (!EqualValue(x_1647, x_1646)) {
        var_modified_x_1648(x_1578);
      }
    }
    x_1578->has_var_intrinsic_height_external = true;
    x_1578->var_intrinsic_height_external = Asdouble(x_1646);
    WriteMetric();
    auto x_1651 = eval_expr_x_1650(x_1578);
    if (x_1578->has_var_intrinsic_height_sum) {
      auto x_1652 = x_1578->var_intrinsic_height_sum;
      if (!EqualValue(x_1652, x_1651)) {
        var_modified_x_1653(x_1578);
      }
    }
    x_1578->has_var_intrinsic_height_sum = true;
    x_1578->var_intrinsic_height_sum = Asdouble(x_1651);
    WriteMetric();
    auto x_1656 = eval_expr_x_1655(x_1578);
    if (x_1578->has_var_intrinsic_current_line_height) {
      auto x_1657 = x_1578->var_intrinsic_current_line_height;
      if (!EqualValue(x_1657, x_1656)) {
        var_modified_x_1658(x_1578);
      }
    }
    x_1578->has_var_intrinsic_current_line_height = true;
    x_1578->var_intrinsic_current_line_height = Asdouble(x_1656);
    WriteMetric();
    auto x_1661 = eval_expr_x_1660(x_1578);
    if (x_1578->has_var_finished_intrinsic_height_sum) {
      auto x_1662 = x_1578->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_1662, x_1661)) {
        var_modified_x_1663(x_1578);
      }
    }
    x_1578->has_var_finished_intrinsic_height_sum = true;
    x_1578->var_finished_intrinsic_height_sum = Asdouble(x_1661);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_1504(const auto &x_1665) {
  return MetricRecordEval(TimedOnly([&](const auto &x_1666) {
    WriteMetric();
    auto x_1668 = eval_expr_x_1667(x_1665);
    if (x_1665->has_var_display) {
      auto x_1669 = x_1665->var_display;
      if (!EqualValue(x_1669, x_1668)) {
        var_modified_x_1670(x_1665);
      }
    }
    x_1665->has_var_display = true;
    x_1665->var_display = AsDEString(x_1668);
    WriteMetric();
    auto x_1673 = eval_expr_x_1672(x_1665);
    if (x_1665->has_var_position) {
      auto x_1674 = x_1665->var_position;
      if (!EqualValue(x_1674, x_1673)) {
        var_modified_x_1675(x_1665);
      }
    }
    x_1665->has_var_position = true;
    x_1665->var_position = AsDEString(x_1673);
    WriteMetric();
    auto x_1678 = eval_expr_x_1677(x_1665);
    if (x_1665->has_var_flex_grow) {
      auto x_1679 = x_1665->var_flex_grow;
      if (!EqualValue(x_1679, x_1678)) {
        var_modified_x_1680(x_1665);
      }
    }
    x_1665->has_var_flex_grow = true;
    x_1665->var_flex_grow = Asdouble(x_1678);
    WriteMetric();
    auto x_1683 = eval_expr_x_1682(x_1665);
    if (x_1665->has_var_flex_shrink) {
      auto x_1684 = x_1665->var_flex_shrink;
      if (!EqualValue(x_1684, x_1683)) {
        var_modified_x_1685(x_1665);
      }
    }
    x_1665->has_var_flex_shrink = true;
    x_1665->var_flex_shrink = Asdouble(x_1683);
    WriteMetric();
    auto x_1688 = eval_expr_x_1687(x_1665);
    if (x_1665->has_var_flex_grow_sum) {
      auto x_1689 = x_1665->var_flex_grow_sum;
      if (!EqualValue(x_1689, x_1688)) {
        var_modified_x_1690(x_1665);
      }
    }
    x_1665->has_var_flex_grow_sum = true;
    x_1665->var_flex_grow_sum = Asdouble(x_1688);
    WriteMetric();
    auto x_1693 = eval_expr_x_1692(x_1665);
    if (x_1665->has_var_flex_shrink_sum) {
      auto x_1694 = x_1665->var_flex_shrink_sum;
      if (!EqualValue(x_1694, x_1693)) {
        var_modified_x_1695(x_1665);
      }
    }
    x_1665->has_var_flex_shrink_sum = true;
    x_1665->var_flex_shrink_sum = Asdouble(x_1693);
    WriteMetric();
    auto x_1698 = eval_expr_x_1697(x_1665);
    if (x_1665->has_var_flex_direction) {
      auto x_1699 = x_1665->var_flex_direction;
      if (!EqualValue(x_1699, x_1698)) {
        var_modified_x_1700(x_1665);
      }
    }
    x_1665->has_var_flex_direction = true;
    x_1665->var_flex_direction = AsDEString(x_1698);
    WriteMetric();
    auto x_1703 = eval_expr_x_1702(x_1665);
    if (x_1665->has_var_is_flex_row) {
      auto x_1704 = x_1665->var_is_flex_row;
      if (!EqualValue(x_1704, x_1703)) {
        var_modified_x_1705(x_1665);
      }
    }
    x_1665->has_var_is_flex_row = true;
    x_1665->var_is_flex_row = Asbool(x_1703);
    WriteMetric();
    auto x_1708 = eval_expr_x_1707(x_1665);
    if (x_1665->has_var_is_flex_column) {
      auto x_1709 = x_1665->var_is_flex_column;
      if (!EqualValue(x_1709, x_1708)) {
        var_modified_x_1710(x_1665);
      }
    }
    x_1665->has_var_is_flex_column = true;
    x_1665->var_is_flex_column = Asbool(x_1708);
    WriteMetric();
    auto x_1713 = eval_expr_x_1712(x_1665);
    if (x_1665->has_var_width_attr_expr) {
      auto x_1714 = x_1665->var_width_attr_expr;
      if (!EqualValue(x_1714, x_1713)) {
        var_modified_x_1715(x_1665);
      }
    }
    x_1665->has_var_width_attr_expr = true;
    x_1665->var_width_attr_expr = AsDEString(x_1713);
    WriteMetric();
    auto x_1718 = eval_expr_x_1717(x_1665);
    if (x_1665->has_var_has_width_attr) {
      auto x_1719 = x_1665->var_has_width_attr;
      if (!EqualValue(x_1719, x_1718)) {
        var_modified_x_1720(x_1665);
      }
    }
    x_1665->has_var_has_width_attr = true;
    x_1665->var_has_width_attr = Asbool(x_1718);
    WriteMetric();
    auto x_1723 = eval_expr_x_1722(x_1665);
    if (x_1665->has_var_height_attr_expr) {
      auto x_1724 = x_1665->var_height_attr_expr;
      if (!EqualValue(x_1724, x_1723)) {
        var_modified_x_1725(x_1665);
      }
    }
    x_1665->has_var_height_attr_expr = true;
    x_1665->var_height_attr_expr = AsDEString(x_1723);
    WriteMetric();
    auto x_1728 = eval_expr_x_1727(x_1665);
    if (x_1665->has_var_has_height_attr) {
      auto x_1729 = x_1665->var_has_height_attr;
      if (!EqualValue(x_1729, x_1728)) {
        var_modified_x_1730(x_1665);
      }
    }
    x_1665->has_var_has_height_attr = true;
    x_1665->var_has_height_attr = Asbool(x_1728);
    WriteMetric();
    auto x_1733 = eval_expr_x_1732(x_1665);
    if (x_1665->has_var_is_svg_block) {
      auto x_1734 = x_1665->var_is_svg_block;
      if (!EqualValue(x_1734, x_1733)) {
        var_modified_x_1735(x_1665);
      }
    }
    x_1665->has_var_is_svg_block = true;
    x_1665->var_is_svg_block = Asbool(x_1733);
    WriteMetric();
    auto x_1738 = eval_expr_x_1737(x_1665);
    if (x_1665->has_var_inside_svg) {
      auto x_1739 = x_1665->var_inside_svg;
      if (!EqualValue(x_1739, x_1738)) {
        var_modified_x_1740(x_1665);
      }
    }
    x_1665->has_var_inside_svg = true;
    x_1665->var_inside_svg = Asbool(x_1738);
    WriteMetric();
    auto x_1743 = eval_expr_x_1742(x_1665);
    if (x_1665->has_var_disabled) {
      auto x_1744 = x_1665->var_disabled;
      if (!EqualValue(x_1744, x_1743)) {
        var_modified_x_1745(x_1665);
      }
    }
    x_1665->has_var_disabled = true;
    x_1665->var_disabled = Asbool(x_1743);
    WriteMetric();
    auto x_1748 = eval_expr_x_1747(x_1665);
    if (x_1665->has_var_visible) {
      auto x_1749 = x_1665->var_visible;
      if (!EqualValue(x_1749, x_1748)) {
        var_modified_x_1750(x_1665);
      }
    }
    x_1665->has_var_visible = true;
    x_1665->var_visible = Asbool(x_1748);
    WriteMetric();
    auto x_1753 = eval_expr_x_1752(x_1665);
    if (x_1665->has_var_line_break) {
      auto x_1754 = x_1665->var_line_break;
      if (!EqualValue(x_1754, x_1753)) {
        var_modified_x_1755(x_1665);
      }
    }
    x_1665->has_var_line_break = true;
    x_1665->var_line_break = Asbool(x_1753);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_1501(const auto &x_1757) {
  return MetricRecordEval(TimedOnly([&](const auto &x_1758) { return MakeUnit(); }));
}
Unit eval_stmts_x_1499(const auto &x_1759) {
  return MetricRecordEval(TimedOnly([&](const auto &x_1760) {
    WriteMetric();
    auto x_1762 = eval_expr_x_1761(x_1759);
    if (x_1759->has_var_box_width) {
      auto x_1763 = x_1759->var_box_width;
      if (!EqualValue(x_1763, x_1762)) {
        var_modified_x_1764(x_1759);
      }
    }
    x_1759->has_var_box_width = true;
    x_1759->var_box_width = Asdouble(x_1762);
    WriteMetric();
    auto x_1767 = eval_expr_x_1766(x_1759);
    if (x_1759->has_var_box_height) {
      auto x_1768 = x_1759->var_box_height;
      if (!EqualValue(x_1768, x_1767)) {
        var_modified_x_1769(x_1759);
      }
    }
    x_1759->has_var_box_height = true;
    x_1759->var_box_height = Asdouble(x_1767);
    WriteMetric();
    auto x_1772 = eval_expr_x_1771(x_1759);
    if (x_1759->has_var_left_over) {
      auto x_1773 = x_1759->var_left_over;
      if (!EqualValue(x_1773, x_1772)) {
        var_modified_x_1774(x_1759);
      }
    }
    x_1759->has_var_left_over = true;
    x_1759->var_left_over = Asdouble(x_1772);
    WriteMetric();
    auto x_1777 = eval_expr_x_1776(x_1759);
    if (x_1759->has_var_flex_amount) {
      auto x_1778 = x_1759->var_flex_amount;
      if (!EqualValue(x_1778, x_1777)) {
        var_modified_x_1779(x_1759);
      }
    }
    x_1759->has_var_flex_amount = true;
    x_1759->var_flex_amount = Asdouble(x_1777);
    WriteMetric();
    auto x_1782 = eval_expr_x_1781(x_1759);
    if (x_1759->has_var_flex_unit) {
      auto x_1783 = x_1759->var_flex_unit;
      if (!EqualValue(x_1783, x_1782)) {
        var_modified_x_1784(x_1759);
      }
    }
    x_1759->has_var_flex_unit = true;
    x_1759->var_flex_unit = Asdouble(x_1782);
    WriteMetric();
    auto x_1787 = eval_expr_x_1786(x_1759);
    if (x_1759->has_var_x) {
      auto x_1788 = x_1759->var_x;
      if (!EqualValue(x_1788, x_1787)) {
        var_modified_x_1789(x_1759);
      }
    }
    x_1759->has_var_x = true;
    x_1759->var_x = Asdouble(x_1787);
    WriteMetric();
    auto x_1792 = eval_expr_x_1791(x_1759);
    if (x_1759->has_var_width_internal) {
      auto x_1793 = x_1759->var_width_internal;
      if (!EqualValue(x_1793, x_1792)) {
        var_modified_x_1794(x_1759);
      }
    }
    x_1759->has_var_width_internal = true;
    x_1759->var_width_internal = Asdouble(x_1792);
    WriteMetric();
    auto x_1797 = eval_expr_x_1796(x_1759);
    if (x_1759->has_var_width_external) {
      auto x_1798 = x_1759->var_width_external;
      if (!EqualValue(x_1798, x_1797)) {
        var_modified_x_1799(x_1759);
      }
    }
    x_1759->has_var_width_external = true;
    x_1759->var_width_external = Asdouble(x_1797);
    WriteMetric();
    auto x_1802 = eval_expr_x_1801(x_1759);
    if (x_1759->has_var_y) {
      auto x_1803 = x_1759->var_y;
      if (!EqualValue(x_1803, x_1802)) {
        var_modified_x_1804(x_1759);
      }
    }
    x_1759->has_var_y = true;
    x_1759->var_y = Asdouble(x_1802);
    WriteMetric();
    auto x_1807 = eval_expr_x_1806(x_1759);
    if (x_1759->has_var_height_internal) {
      auto x_1808 = x_1759->var_height_internal;
      if (!EqualValue(x_1808, x_1807)) {
        var_modified_x_1809(x_1759);
      }
    }
    x_1759->has_var_height_internal = true;
    x_1759->var_height_internal = Asdouble(x_1807);
    WriteMetric();
    auto x_1812 = eval_expr_x_1811(x_1759);
    if (x_1759->has_var_height_external) {
      auto x_1813 = x_1759->var_height_external;
      if (!EqualValue(x_1813, x_1812)) {
        var_modified_x_1814(x_1759);
      }
    }
    x_1759->has_var_height_external = true;
    x_1759->var_height_external = Asdouble(x_1812);
    WriteMetric();
    auto x_1817 = eval_expr_x_1816(x_1759);
    if (x_1759->has_var_line_height) {
      auto x_1818 = x_1759->var_line_height;
      if (!EqualValue(x_1818, x_1817)) {
        var_modified_x_1819(x_1759);
      }
    }
    x_1759->has_var_line_height = true;
    x_1759->var_line_height = Asdouble(x_1817);
    return MakeUnit();
  }));
}
Unit x_1821(const auto &x_1822) {
  MetaWriteMetric();
  if (!x_1822->meta->pass_1_recursive_proc_dirtied) {
    x_1822->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1822->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_1822->parent, [&](const auto &x_1824) { return MakeUnit(); },
        [&](const auto &x_1823) { return x_1821(x_1823); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1434(const auto &x_1822) { return x_1821(x_1822); }
Unit x_1825(const auto &x_1826) {
  MetaWriteMetric();
  if (!x_1826->meta->pass_0_recursive_proc_dirtied) {
    x_1826->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1826->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_1826->parent, [&](const auto &x_1828) { return MakeUnit(); },
        [&](const auto &x_1827) { return x_1825(x_1827); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1342(const auto &x_1826) { return x_1825(x_1826); }
Unit x_1309(const auto &x_1310, const auto &x_1311, const auto &x_1312) {
  auto x_1313 = ListHeadExn(x_1310);
  auto x_1314 = ListTailExn(x_1310);
  if (ListIsEmpty(x_1314)) {
    auto x_1315 = ListSplitN(x_1311->children, x_1313);
    OutputChangeMetric(IntAdd(layout_size_x_1265(ListNthExn(x_1311->children, x_1313)), layout_size_x_1265(x_1312)));
    x_1311->children = ListAppend(Zro(x_1315), Cons(x_1312, ListTailExn(Fst(x_1315))));
    return MakeUnit();
  } else {
    return x_1309(x_1314, ListNthExn(x_1311->children, x_1313), x_1312);
  }
}
Unit replace_layout_node_x_1308(const auto &x_1310, const auto &x_1311, const auto &x_1312) {
  return x_1309(x_1310, x_1311, x_1312);
}
Unit x_1316(const auto &x_1317, const auto &x_1318, const auto &x_1319) {
  auto x_1320 = ListHeadExn(x_1317);
  auto x_1321 = ListTailExn(x_1317);
  if (ListIsEmpty(x_1321)) {
    OutputChangeMetric(layout_size_x_1265(x_1319));
    auto x_1322 = ListSplitN(x_1318->children, x_1320);
    x_1318->children = ListAppend(Zro(x_1322), Cons(x_1319, Fst(x_1322)));
    return MakeUnit();
  } else {
    return x_1316(x_1321, ListNthExn(x_1318->children, x_1320), x_1319);
  }
}
Unit add_layout_node_x_1306(const auto &x_1317, const auto &x_1318, const auto &x_1319) {
  return x_1316(x_1317, x_1318, x_1319);
}
Unit x_1323(const auto &x_1324, const auto &x_1325, const auto &x_1326) {
  auto x_1327 = ListHeadExn(x_1324);
  auto x_1328 = ListTailExn(x_1324);
  if (ListIsEmpty(x_1328)) {
    OutputChangeMetric(layout_size_x_1265(ListNthExn(x_1325->children, x_1327)));
    auto x_1329 = ListSplitN(x_1325->children, x_1327);
    x_1325->children = ListAppend(Zro(x_1329), ListTailExn(Fst(x_1329)));
    return MakeUnit();
  } else {
    return x_1323(x_1328, ListNthExn(x_1325->children, x_1327), x_1326);
  }
}
Unit remove_layout_node_x_1304(const auto &x_1324, const auto &x_1325, const auto &x_1326) {
  return x_1323(x_1324, x_1325, x_1326);
}
Unit x_1330(const auto &x_1331, const auto &x_1332, const auto &x_1333) {
  return ListMatch(
      x_1331,
      [&](const auto &x_1336) {
        auto x_1337 = Zro(x_1333);
        auto x_1338 = Zro(x_1337);
        auto x_1339 = Fst(x_1337);
        auto x_1340 = Fst(x_1333);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2778 = x_1338;
        if (x_2778 == "attributes") {
          std::string x_2779 = x_1339;
          if (x_2779 == "width") {
            WriteMetric();
            x_1332->has_attr_width = true;
            x_1332->attr_width = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1341) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_1_has_bb_dirtied = true;
                x_1332->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2779 == "image_height") {
            WriteMetric();
            x_1332->has_attr_image_height = true;
            x_1332->attr_image_height = Asint64_t(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1343) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_0_has_bb_dirtied = true;
                x_1332->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2779 == "image_width") {
            WriteMetric();
            x_1332->has_attr_image_width = true;
            x_1332->attr_image_width = Asint64_t(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1344) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_0_has_bb_dirtied = true;
                x_1332->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2779 == "height") {
            WriteMetric();
            x_1332->has_attr_height = true;
            x_1332->attr_height = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1345) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_1_has_bb_dirtied = true;
                x_1332->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2779 == "viewBox") {
            WriteMetric();
            x_1332->has_attr_viewBox = true;
            x_1332->attr_viewBox = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1346) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_0_has_bb_dirtied = true;
                x_1332->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2778 == "properties") {
          std::string x_2780 = x_1339;
          if (x_2780 == "width") {
            WriteMetric();
            x_1332->has_prop_width = true;
            x_1332->prop_width = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1347) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_0_has_bb_dirtied = true;
                x_1332->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2780 == "flex-grow") {
            WriteMetric();
            x_1332->has_prop_flex_grow = true;
            x_1332->prop_flex_grow = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1348) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_1_has_bb_dirtied = true;
                x_1332->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2780 == "height") {
            WriteMetric();
            x_1332->has_prop_height = true;
            x_1332->prop_height = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1349) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_0_has_bb_dirtied = true;
                x_1332->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2780 == "display") {
            WriteMetric();
            x_1332->has_prop_display = true;
            x_1332->prop_display = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1350) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_1_has_bb_dirtied = true;
                x_1332->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2780 == "position") {
            WriteMetric();
            x_1332->has_prop_position = true;
            x_1332->prop_position = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1351) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_1_has_bb_dirtied = true;
                x_1332->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2780 == "flex-shrink") {
            WriteMetric();
            x_1332->has_prop_flex_shrink = true;
            x_1332->prop_flex_shrink = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1352) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_1_has_bb_dirtied = true;
                x_1332->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2780 == "flex-direction") {
            WriteMetric();
            x_1332->has_prop_flex_direction = true;
            x_1332->prop_flex_direction = AsDEString(x_1340);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1353) {
              if (x_1332->meta->pass_0_proc_inited) {
                x_1332->meta->bb_1_has_bb_dirtied = true;
                x_1332->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1332);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1334, const auto &x_1335) {
        return x_1330(x_1335, ListNthExn(x_1332->children, x_1334), x_1333);
      });
}
Unit insert_value_x_1302(const auto &x_1331, const auto &x_1332, const auto &x_1333) {
  return x_1330(x_1331, x_1332, x_1333);
}
Unit x_1354(const auto &x_1355, const auto &x_1356, const auto &x_1357) {
  return ListMatch(
      x_1355,
      [&](const auto &x_1360) {
        auto x_1361 = Zro(x_1357);
        auto x_1362 = Fst(x_1357);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2781 = x_1361;
        if (x_2781 == "attributes") {
          std::string x_2782 = x_1362;
          if (x_2782 == "width") {
            WriteMetric();
            x_1356->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1363) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_1_has_bb_dirtied = true;
                x_1356->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2782 == "image_height") {
            WriteMetric();
            x_1356->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1364) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_0_has_bb_dirtied = true;
                x_1356->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2782 == "image_width") {
            WriteMetric();
            x_1356->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1365) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_0_has_bb_dirtied = true;
                x_1356->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2782 == "height") {
            WriteMetric();
            x_1356->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1366) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_1_has_bb_dirtied = true;
                x_1356->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2782 == "viewBox") {
            WriteMetric();
            x_1356->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1367) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_0_has_bb_dirtied = true;
                x_1356->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2781 == "properties") {
          std::string x_2783 = x_1362;
          if (x_2783 == "width") {
            WriteMetric();
            x_1356->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1368) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_0_has_bb_dirtied = true;
                x_1356->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2783 == "flex-grow") {
            WriteMetric();
            x_1356->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1369) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_1_has_bb_dirtied = true;
                x_1356->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2783 == "height") {
            WriteMetric();
            x_1356->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1370) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_0_has_bb_dirtied = true;
                x_1356->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2783 == "display") {
            WriteMetric();
            x_1356->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1371) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_1_has_bb_dirtied = true;
                x_1356->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2783 == "position") {
            WriteMetric();
            x_1356->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1372) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_1_has_bb_dirtied = true;
                x_1356->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2783 == "flex-shrink") {
            WriteMetric();
            x_1356->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1373) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_1_has_bb_dirtied = true;
                x_1356->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2783 == "flex-direction") {
            WriteMetric();
            x_1356->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1374) {
              if (x_1356->meta->pass_0_proc_inited) {
                x_1356->meta->bb_1_has_bb_dirtied = true;
                x_1356->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1356);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1358, const auto &x_1359) {
        return x_1354(x_1359, ListNthExn(x_1356->children, x_1358), x_1357);
      });
}
Unit delete_value_x_1300(const auto &x_1355, const auto &x_1356, const auto &x_1357) {
  return x_1354(x_1355, x_1356, x_1357);
}
Unit x_1375(const auto &x_1376, const auto &x_1377, const auto &x_1378) {
  return ListMatch(
      x_1376,
      [&](const auto &x_1381) {
        auto x_1382 = Zro(x_1378);
        auto x_1383 = Zro(x_1382);
        auto x_1384 = Fst(x_1382);
        auto x_1385 = Fst(x_1378);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2784 = x_1383;
        if (x_2784 == "attributes") {
          std::string x_2785 = x_1384;
          if (x_2785 == "width") {
            WriteMetric();
            x_1377->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1386) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_attr_width = true;
            x_1377->attr_width = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1387) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2785 == "image_height") {
            WriteMetric();
            x_1377->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1388) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_attr_image_height = true;
            x_1377->attr_image_height = Asint64_t(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1389) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2785 == "image_width") {
            WriteMetric();
            x_1377->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1390) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_attr_image_width = true;
            x_1377->attr_image_width = Asint64_t(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1391) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2785 == "height") {
            WriteMetric();
            x_1377->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1392) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_attr_height = true;
            x_1377->attr_height = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1393) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2785 == "viewBox") {
            WriteMetric();
            x_1377->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1394) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_attr_viewBox = true;
            x_1377->attr_viewBox = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1395) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2784 == "properties") {
          std::string x_2786 = x_1384;
          if (x_2786 == "width") {
            WriteMetric();
            x_1377->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1396) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_prop_width = true;
            x_1377->prop_width = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1397) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2786 == "flex-grow") {
            WriteMetric();
            x_1377->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1398) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_prop_flex_grow = true;
            x_1377->prop_flex_grow = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1399) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2786 == "height") {
            WriteMetric();
            x_1377->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1400) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_prop_height = true;
            x_1377->prop_height = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1401) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_0_has_bb_dirtied = true;
                x_1377->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2786 == "display") {
            WriteMetric();
            x_1377->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1402) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_prop_display = true;
            x_1377->prop_display = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1403) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2786 == "position") {
            WriteMetric();
            x_1377->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1404) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_prop_position = true;
            x_1377->prop_position = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1405) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2786 == "flex-shrink") {
            WriteMetric();
            x_1377->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1406) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_prop_flex_shrink = true;
            x_1377->prop_flex_shrink = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1407) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else if (x_2786 == "flex-direction") {
            WriteMetric();
            x_1377->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_1408) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            WriteMetric();
            x_1377->has_prop_flex_direction = true;
            x_1377->prop_flex_direction = AsDEString(x_1385);
            MetricRecordOverhead(TimedOnly([&](const auto &x_1409) {
              if (x_1377->meta->pass_0_proc_inited) {
                x_1377->meta->bb_1_has_bb_dirtied = true;
                x_1377->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_1342(x_1377);
              } else {
                return MetaWriteMetric();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_1379, const auto &x_1380) {
        return x_1375(x_1380, ListNthExn(x_1377->children, x_1379), x_1378);
      });
}
Unit replace_value_x_1298(const auto &x_1376, const auto &x_1377, const auto &x_1378) {
  return x_1375(x_1376, x_1377, x_1378);
}
Unit x_1410(const auto &x_1411, const auto &x_1412, const auto &x_1413) {
  auto x_1414 = ListHeadExn(x_1411);
  auto x_1415 = ListTailExn(x_1411);
  if (ListIsEmpty(x_1415)) {
    InputChangeMetric(IntAdd(node_size_x_1266(ListNthExn(x_1412->children, x_1414)), node_size_x_1266(x_1413)));
    auto x_1416 = ListSplitN(x_1412->children, x_1414);
    auto x_1417 = Zro(x_1416);
    auto x_1418 = Fst(x_1416);
    auto x_1419 = ListHeadExn(x_1418);
    auto x_1420 = ListTailExn(x_1418);
    x_1412->children = ListAppend(x_1417, x_1420);
    OptionMatch(
        x_1419->prev, [&](const auto &x_1422) { return MakeUnit(); },
        [&](const auto &x_1421) {
          x_1421->next = ToPath(x_1419->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1419->next, [&](const auto &x_1424) { return MakeUnit(); },
        [&](const auto &x_1423) {
          x_1423->prev = ToPath(x_1419->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1417)) {
      x_1412->first = ToPath(ListHead(x_1420));
    }
    if (ListIsEmpty(x_1420)) {
      x_1412->last = ToPath(ListLast(x_1417));
    }
    OptionMatch(
        x_1419->next, [&](const auto &x_1427) { return MakeUnit(); },
        [&](const auto &x_1425) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1426) {
            if (x_1425->meta->pass_0_proc_inited) {
              x_1425->meta->bb_1_has_bb_dirtied = true;
              x_1425->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1425);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    if (ListIsEmpty(x_1412->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1428) {
        if (x_1412->meta->pass_0_proc_inited) {
          x_1412->meta->bb_0_has_bb_dirtied = true;
          x_1412->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1420)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1429) {
        if (x_1412->meta->pass_0_proc_inited) {
          x_1412->meta->bb_0_has_bb_dirtied = true;
          x_1412->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1419->next, [&](const auto &x_1432) { return MakeUnit(); },
        [&](const auto &x_1430) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1431) {
            if (x_1430->meta->pass_0_proc_inited) {
              x_1430->meta->bb_0_has_bb_dirtied = true;
              x_1430->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1430);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    if (ListIsEmpty(x_1412->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1433) {
        if (x_1412->meta->pass_1_proc_inited) {
          x_1412->meta->bb_3_has_bb_dirtied = true;
          x_1412->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1420)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1435) {
        if (x_1412->meta->pass_1_proc_inited) {
          x_1412->meta->bb_3_has_bb_dirtied = true;
          x_1412->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1419->next, [&](const auto &x_1438) { return MakeUnit(); },
        [&](const auto &x_1436) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1437) {
            if (x_1436->meta->pass_1_proc_inited) {
              x_1436->meta->bb_3_has_bb_dirtied = true;
              x_1436->meta->bb_3_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1434(x_1436);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    MakeUnit();
    auto x_1439 = ListSplitN(x_1412->children, x_1414);
    auto x_1440 = Zro(x_1439);
    auto x_1441 = Fst(x_1439);
    x_1412->children = ListAppend(x_1440, Cons(x_1413, x_1441));
    if (ListIsEmpty(x_1440)) {
      x_1412->first = x_1413.get();
    }
    if (ListIsEmpty(x_1441)) {
      x_1412->last = x_1413.get();
    }
    OptionMatch(
        ListLast(x_1440),
        [&](const auto &x_1443) {
          x_1413->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1442) {
          x_1413->prev = x_1442.get();
          x_1442->next = x_1413.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1441),
        [&](const auto &x_1445) {
          x_1413->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1444) {
          x_1413->next = x_1444.get();
          x_1444->prev = x_1413.get();
          return MakeUnit();
        });
    x_1413->parent = x_1412.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_1446) {
      x_1413->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1413->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1342(x_1413);
    }));
    OptionMatch(
        x_1413->next, [&](const auto &x_1449) { return MakeUnit(); },
        [&](const auto &x_1447) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1448) {
            if (x_1447->meta->pass_0_proc_inited) {
              x_1447->meta->bb_1_has_bb_dirtied = true;
              x_1447->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1447);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    if (ListIsSingleton(x_1412->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1450) {
        if (x_1412->meta->pass_0_proc_inited) {
          x_1412->meta->bb_0_has_bb_dirtied = true;
          x_1412->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1441)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1451) {
        if (x_1412->meta->pass_0_proc_inited) {
          x_1412->meta->bb_0_has_bb_dirtied = true;
          x_1412->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1413->next, [&](const auto &x_1454) { return MakeUnit(); },
        [&](const auto &x_1452) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1453) {
            if (x_1452->meta->pass_0_proc_inited) {
              x_1452->meta->bb_0_has_bb_dirtied = true;
              x_1452->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1452);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_1455) {
      x_1413->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1413->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1434(x_1413);
    }));
    if (ListIsSingleton(x_1412->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1456) {
        if (x_1412->meta->pass_1_proc_inited) {
          x_1412->meta->bb_3_has_bb_dirtied = true;
          x_1412->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1441)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1457) {
        if (x_1412->meta->pass_1_proc_inited) {
          x_1412->meta->bb_3_has_bb_dirtied = true;
          x_1412->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1412);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1413->next, [&](const auto &x_1460) { return MakeUnit(); },
        [&](const auto &x_1458) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1459) {
            if (x_1458->meta->pass_1_proc_inited) {
              x_1458->meta->bb_3_has_bb_dirtied = true;
              x_1458->meta->bb_3_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1434(x_1458);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_1410(x_1415, ListNthExn(x_1412->children, x_1414), x_1413);
  }
}
Unit replace_node_x_1296(const auto &x_1411, const auto &x_1412, const auto &x_1413) {
  return x_1410(x_1411, x_1412, x_1413);
}
Unit x_1461(const auto &x_1462) {
  ListIter2(x_1462->children, [&](const auto &x_1463, const auto &x_1464) {
    x_1463->parent = x_1462.get();
    x_1464->parent = x_1462.get();
    x_1463->next = x_1464.get();
    x_1464->prev = x_1463.get();
    x_1461(x_1463);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1462->children),
      [&](const auto &x_1466) {
        x_1462->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1465) {
        x_1462->first = x_1465.get();
        x_1465->parent = x_1462.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1462->children),
      [&](const auto &x_1468) {
        x_1462->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1467) {
        x_1462->last = x_1467.get();
        x_1467->parent = x_1462.get();
        x_1461(x_1467);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1294(const auto &x_1462) { return x_1461(x_1462); }
Unit x_1469(const auto &x_1470, const auto &x_1471, const auto &x_1472) {
  auto x_1473 = ListHeadExn(x_1470);
  auto x_1474 = ListTailExn(x_1470);
  if (ListIsEmpty(x_1474)) {
    InputChangeMetric(node_size_x_1266(ListNthExn(x_1471->children, x_1473)));
    auto x_1475 = ListSplitN(x_1471->children, x_1473);
    auto x_1476 = Zro(x_1475);
    auto x_1477 = Fst(x_1475);
    auto x_1478 = ListHeadExn(x_1477);
    auto x_1479 = ListTailExn(x_1477);
    x_1471->children = ListAppend(x_1476, x_1479);
    OptionMatch(
        x_1478->prev, [&](const auto &x_1481) { return MakeUnit(); },
        [&](const auto &x_1480) {
          x_1480->next = ToPath(x_1478->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1478->next, [&](const auto &x_1483) { return MakeUnit(); },
        [&](const auto &x_1482) {
          x_1482->prev = ToPath(x_1478->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1476)) {
      x_1471->first = ToPath(ListHead(x_1479));
    }
    if (ListIsEmpty(x_1479)) {
      x_1471->last = ToPath(ListLast(x_1476));
    }
    OptionMatch(
        x_1478->next, [&](const auto &x_1486) { return MakeUnit(); },
        [&](const auto &x_1484) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1485) {
            if (x_1484->meta->pass_0_proc_inited) {
              x_1484->meta->bb_1_has_bb_dirtied = true;
              x_1484->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1484);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    if (ListIsEmpty(x_1471->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1487) {
        if (x_1471->meta->pass_0_proc_inited) {
          x_1471->meta->bb_0_has_bb_dirtied = true;
          x_1471->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1471);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1479)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1488) {
        if (x_1471->meta->pass_0_proc_inited) {
          x_1471->meta->bb_0_has_bb_dirtied = true;
          x_1471->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1471);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1478->next, [&](const auto &x_1491) { return MakeUnit(); },
        [&](const auto &x_1489) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1490) {
            if (x_1489->meta->pass_0_proc_inited) {
              x_1489->meta->bb_0_has_bb_dirtied = true;
              x_1489->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1489);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    if (ListIsEmpty(x_1471->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1492) {
        if (x_1471->meta->pass_1_proc_inited) {
          x_1471->meta->bb_3_has_bb_dirtied = true;
          x_1471->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1471);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1479)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1493) {
        if (x_1471->meta->pass_1_proc_inited) {
          x_1471->meta->bb_3_has_bb_dirtied = true;
          x_1471->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1471);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1478->next, [&](const auto &x_1496) { return MakeUnit(); },
        [&](const auto &x_1494) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1495) {
            if (x_1494->meta->pass_1_proc_inited) {
              x_1494->meta->bb_3_has_bb_dirtied = true;
              x_1494->meta->bb_3_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1434(x_1494);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    return MakeUnit();
  } else {
    return x_1469(x_1474, ListNthExn(x_1471->children, x_1473), x_1472);
  }
}
Unit remove_node_x_1292(const auto &x_1470, const auto &x_1471, const auto &x_1472) {
  return x_1469(x_1470, x_1471, x_1472);
}
Unit x_1497(const auto &x_1498) {
  MetaReadMetric();
  if (x_1498->meta->pass_1_recursive_proc_dirtied) {
    if (x_1498->meta->pass_1_proc_inited) {
      if (x_1498->meta->bb_3_bb_dirtied) {
        eval_stmts_x_1499(x_1498);
        x_1498->meta->bb_3_has_bb_dirtied = true;
        x_1498->meta->bb_3_bb_dirtied = false;
      }
      ListIter(x_1498->children, [&](const auto &x_1500) { return x_1497(x_1500); });
      if (x_1498->meta->bb_2_bb_dirtied) {
        eval_stmts_x_1501(x_1498);
        x_1498->meta->bb_2_has_bb_dirtied = true;
        x_1498->meta->bb_2_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1498->meta->pass_1_proc_inited = true;
      eval_stmts_x_1281(x_1498);
    }
  }
  x_1498->meta->pass_1_has_recursive_proc_dirtied = true;
  x_1498->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1290(const auto &x_1498) { return x_1497(x_1498); }
Unit x_1502(const auto &x_1503) {
  MetaReadMetric();
  if (x_1503->meta->pass_0_recursive_proc_dirtied) {
    if (x_1503->meta->pass_0_proc_inited) {
      if (x_1503->meta->bb_1_bb_dirtied) {
        eval_stmts_x_1504(x_1503);
        x_1503->meta->bb_1_has_bb_dirtied = true;
        x_1503->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_1503->children, [&](const auto &x_1505) { return x_1502(x_1505); });
      if (x_1503->meta->bb_0_bb_dirtied) {
        eval_stmts_x_1506(x_1503);
        x_1503->meta->bb_0_has_bb_dirtied = true;
        x_1503->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1503->meta->pass_0_proc_inited = true;
      eval_stmts_x_1279(x_1503);
    }
  }
  x_1503->meta->pass_0_has_recursive_proc_dirtied = true;
  x_1503->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1289(const auto &x_1503) { return x_1502(x_1503); }
Unit x_1507(const auto &x_1508, const auto &x_1509, const auto &x_1510) {
  auto x_1511 = ListHeadExn(x_1508);
  auto x_1512 = ListTailExn(x_1508);
  if (ListIsEmpty(x_1512)) {
    InputChangeMetric(node_size_x_1266(x_1510));
    auto x_1513 = ListSplitN(x_1509->children, x_1511);
    auto x_1514 = Zro(x_1513);
    auto x_1515 = Fst(x_1513);
    x_1509->children = ListAppend(x_1514, Cons(x_1510, x_1515));
    if (ListIsEmpty(x_1514)) {
      x_1509->first = x_1510.get();
    }
    if (ListIsEmpty(x_1515)) {
      x_1509->last = x_1510.get();
    }
    OptionMatch(
        ListLast(x_1514),
        [&](const auto &x_1517) {
          x_1510->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1516) {
          x_1510->prev = x_1516.get();
          x_1516->next = x_1510.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1515),
        [&](const auto &x_1519) {
          x_1510->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1518) {
          x_1510->next = x_1518.get();
          x_1518->prev = x_1510.get();
          return MakeUnit();
        });
    x_1510->parent = x_1509.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_1520) {
      x_1510->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1510->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1342(x_1510);
    }));
    OptionMatch(
        x_1510->next, [&](const auto &x_1523) { return MakeUnit(); },
        [&](const auto &x_1521) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1522) {
            if (x_1521->meta->pass_0_proc_inited) {
              x_1521->meta->bb_1_has_bb_dirtied = true;
              x_1521->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1521);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    if (ListIsSingleton(x_1509->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1524) {
        if (x_1509->meta->pass_0_proc_inited) {
          x_1509->meta->bb_0_has_bb_dirtied = true;
          x_1509->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1509);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1515)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1525) {
        if (x_1509->meta->pass_0_proc_inited) {
          x_1509->meta->bb_0_has_bb_dirtied = true;
          x_1509->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1342(x_1509);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1510->next, [&](const auto &x_1528) { return MakeUnit(); },
        [&](const auto &x_1526) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1527) {
            if (x_1526->meta->pass_0_proc_inited) {
              x_1526->meta->bb_0_has_bb_dirtied = true;
              x_1526->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1342(x_1526);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_1529) {
      x_1510->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1510->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1434(x_1510);
    }));
    if (ListIsSingleton(x_1509->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1530) {
        if (x_1509->meta->pass_1_proc_inited) {
          x_1509->meta->bb_3_has_bb_dirtied = true;
          x_1509->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1509);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    if (ListIsEmpty(x_1515)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_1531) {
        if (x_1509->meta->pass_1_proc_inited) {
          x_1509->meta->bb_3_has_bb_dirtied = true;
          x_1509->meta->bb_3_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1434(x_1509);
        } else {
          return MetaWriteMetric();
        }
      }));
    }
    OptionMatch(
        x_1510->next, [&](const auto &x_1534) { return MakeUnit(); },
        [&](const auto &x_1532) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_1533) {
            if (x_1532->meta->pass_1_proc_inited) {
              x_1532->meta->bb_3_has_bb_dirtied = true;
              x_1532->meta->bb_3_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_1434(x_1532);
            } else {
              return MetaWriteMetric();
            }
          }));
        });
    return MakeUnit();
  } else {
    return x_1507(x_1512, ListNthExn(x_1509->children, x_1511), x_1510);
  }
}
Unit add_node_x_1287(const auto &x_1508, const auto &x_1509, const auto &x_1510) {
  return x_1507(x_1508, x_1509, x_1510);
}
Unit x_1535(const auto &x_1536) {
  ListIter2(x_1536->children, [&](const auto &x_1537, const auto &x_1538) {
    x_1537->parent = x_1536.get();
    x_1538->parent = x_1536.get();
    x_1537->next = x_1538.get();
    x_1538->prev = x_1537.get();
    x_1535(x_1537);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1536->children),
      [&](const auto &x_1540) {
        x_1536->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1539) {
        x_1536->first = x_1539.get();
        x_1539->parent = x_1536.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1536->children),
      [&](const auto &x_1542) {
        x_1536->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1541) {
        x_1536->last = x_1541.get();
        x_1541->parent = x_1536.get();
        x_1535(x_1541);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1285(const auto &x_1536) { return x_1535(x_1536); }
Unit eval_stmts_x_1281(const auto &x_1543) {
  return MetricRecordEval(TimedOnly([&](const auto &x_1544) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_1545) {
      x_1543->meta->bb_3_has_bb_dirtied = true;
      x_1543->meta->bb_3_bb_dirtied = false;
      return eval_stmts_x_1499(x_1543);
    }));
    ListIter(x_1543->children, [&](const auto &x_1546) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1547) {
        x_1546->meta->pass_1_proc_inited = true;
        x_1546->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1546->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_1281(x_1546);
        return MakeUnit();
      }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_1548) {
      x_1543->meta->bb_2_has_bb_dirtied = true;
      x_1543->meta->bb_2_bb_dirtied = false;
      return eval_stmts_x_1501(x_1543);
    }));
    return MakeUnit();
  }));
}
Unit eval_stmts_x_1279(const auto &x_1549) {
  return MetricRecordEval(TimedOnly([&](const auto &x_1550) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_1551) {
      x_1549->meta->bb_1_has_bb_dirtied = true;
      x_1549->meta->bb_1_bb_dirtied = false;
      return eval_stmts_x_1504(x_1549);
    }));
    ListIter(x_1549->children, [&](const auto &x_1552) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1553) {
        x_1552->meta->pass_0_proc_inited = true;
        x_1552->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1552->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_1279(x_1552);
        return MakeUnit();
      }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_1554) {
      x_1549->meta->bb_0_has_bb_dirtied = true;
      x_1549->meta->bb_0_bb_dirtied = false;
      return eval_stmts_x_1506(x_1549);
    }));
    return MakeUnit();
  }));
}
Unit x_1555(const auto &x_1556) {
  ListIter2(x_1556->children, [&](const auto &x_1557, const auto &x_1558) {
    x_1557->parent = x_1556.get();
    x_1558->parent = x_1556.get();
    x_1557->next = x_1558.get();
    x_1558->prev = x_1557.get();
    x_1555(x_1557);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1556->children),
      [&](const auto &x_1560) {
        x_1556->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1559) {
        x_1556->first = x_1559.get();
        x_1559->parent = x_1556.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1556->children),
      [&](const auto &x_1562) {
        x_1556->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1561) {
        x_1556->last = x_1561.get();
        x_1561->parent = x_1556.get();
        x_1555(x_1561);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1275(const auto &x_1556) { return x_1555(x_1556); }
int64_t x_1563(const auto &x_1564) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1564->children, [&](const auto &x_1565) { return x_1563(x_1565); }));
}
int64_t node_size_x_1266(const auto &x_1564) { return x_1563(x_1564); }
int64_t x_1566(const auto &x_1567) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1567->children, [&](const auto &x_1568) { return x_1566(x_1568); }));
}
int64_t layout_size_x_1265(const auto &x_1567) { return x_1566(x_1567); }
LayoutNode x_1569(const auto &x_1570) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_1570)), [&](const auto &x_1571) { return x_1569(x_1571); }));
}
LayoutNode json_to_layout_node_x_1264(const auto &x_1570) { return x_1569(x_1570); }
Node x_1572(const auto &x_1573) {
  return MakeNode(x_1573->name, x_1573->attr, x_1573->prop, x_1573->extern_id,
                  ListMap(x_1573->children, [&](const auto &x_1574) { return x_1572(x_1574); }));
}
Node node_to_fs_node_x_1263(const auto &x_1573) { return x_1572(x_1573); }
Node x_1575(const auto &x_1576) {
  return MakeNode(
      JsonToString(JsonMember("name", x_1576)), JsonToDict(JsonMember("attributes", x_1576)),
      JsonToDict(JsonMember("properties", x_1576)), JsonToInt(JsonMember("id", x_1576)),
      ListMap(JsonToList(JsonMember("children", x_1576)), [&](const auto &x_1577) { return x_1575(x_1577); }));
}
Node json_to_node_aux_x_1262(const auto &x_1576) { return x_1575(x_1576); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_1267) {
    PrintEndline("RUNNING DB_D");
    return WithInFile("command.json", [&](const auto &x_1268) {
      auto x_1269 = MakeRef(static_cast<int64_t>(0));
      auto x_1270 = FreshMetric();
      auto x_1271 = JsonOfString(InputLine(x_1268));
      auto x_1272 = JsonOfString(InputLine(x_1268));
      auto x_1273 = MakeStack();
      PushStack(x_1273, x_1271);
      PushStack(x_1273, x_1272);
      Assert(StringEqual(JsonToString(JsonMember("name", x_1271)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_1272)), "layout_init"));
      auto x_1276 = [&]() {
        auto x_1274 = json_to_node_aux_x_1262(JsonMember("node", x_1271));
        x_1274->parent = nullptr;
        x_1274->prev = nullptr;
        x_1274->next = nullptr;
        set_children_relation_x_1275(x_1274);
        return x_1274;
      }();
      auto x_1277 = json_to_layout_node_x_1264(JsonMember("node", x_1272));
      OutputChangeMetric(layout_size_x_1265(x_1277));
      InputChangeMetric(node_size_x_1266(x_1276));
      MetricRecordOverhead(TimedOnly([&](const auto &x_1278) {
        x_1276->meta->pass_0_proc_inited = true;
        x_1276->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1276->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_1279(x_1276);
        return MakeUnit();
      }));
      MetricRecordOverhead(TimedOnly([&](const auto &x_1280) {
        x_1276->meta->pass_1_proc_inited = true;
        x_1276->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1276->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_1281(x_1276);
        return MakeUnit();
      }));
      JsonToChannel(x_1267, [&]() {
        auto x_2787 = FreshJson();
        WriteJson(x_2787, "name", "DB_D");
        WriteJson(x_2787, "diff_num", ReadRef(x_1269));
        WriteJson(x_2787, "read_count", MetricReadCount());
        WriteJson(x_2787, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_2787, "write_count", MetricWriteCount());
        WriteJson(x_2787, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_2787, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_2787, "input_change_count", MetricInputChangeCount());
        WriteJson(x_2787, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_2787, "overhead_time", MetricOverheadCount());
        WriteJson(x_2787, "eval_time", MetricEvalCount());
        WriteJson(x_2787, "html", "");
        WriteJson(x_2787, "command", StackToList(x_1273));
        return x_2787;
      }());
      OutputString(x_1267, "\n");
      ClearStack(x_1273);
      WriteRef(x_1269, IntAdd(ReadRef(x_1269), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_1268, [&](const auto &x_1282) {
        auto x_1283 = JsonOfString(x_1282);
        PushStack(x_1273, x_1283);
        std::string x_2789 = JsonToString(JsonMember("name", x_1283));
        if (x_2789 == "add") {
          return add_node_x_1287(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1286) { return JsonToInt(x_1286); }),
              x_1276, [&]() {
                auto x_1284 = json_to_node_aux_x_1262(JsonMember("node", x_1283));
                x_1284->parent = nullptr;
                x_1284->prev = nullptr;
                x_1284->next = nullptr;
                set_children_relation_x_1285(x_1284);
                return x_1284;
              }());
        } else if (x_2789 == "recalculate") {
          MetricRecordOverhead(TimedOnly([&](const auto &x_1288) {
            recalculate_internal_x_1289(x_1276);
            recalculate_internal_x_1290(x_1276);
            return MakeUnit();
          }));
          JsonToChannel(x_1267, [&]() {
            auto x_2788 = FreshJson();
            WriteJson(x_2788, "name", "DB_D");
            WriteJson(x_2788, "diff_num", ReadRef(x_1269));
            WriteJson(x_2788, "read_count", MetricReadCount());
            WriteJson(x_2788, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_2788, "write_count", MetricWriteCount());
            WriteJson(x_2788, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_2788, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_2788, "input_change_count", MetricInputChangeCount());
            WriteJson(x_2788, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_2788, "overhead_time", MetricOverheadCount());
            WriteJson(x_2788, "eval_time", MetricEvalCount());
            WriteJson(x_2788, "html", "");
            WriteJson(x_2788, "command", StackToList(x_1273));
            return x_2788;
          }());
          OutputString(x_1267, "\n");
          ClearStack(x_1273);
          WriteRef(x_1269, IntAdd(ReadRef(x_1269), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_2789 == "remove") {
          return remove_node_x_1292(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1291) { return JsonToInt(x_1291); }),
              x_1276, MakeUnit());
        } else if (x_2789 == "replace") {
          return replace_node_x_1296(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1295) { return JsonToInt(x_1295); }),
              x_1276, [&]() {
                auto x_1293 = json_to_node_aux_x_1262(JsonMember("node", x_1283));
                x_1293->parent = nullptr;
                x_1293->prev = nullptr;
                x_1293->next = nullptr;
                set_children_relation_x_1294(x_1293);
                return x_1293;
              }());
        } else if (x_2789 == "replace_value") {
          return replace_value_x_1298(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1297) { return JsonToInt(x_1297); }),
              x_1276,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1283)), JsonToString(JsonMember("key", x_1283))),
                       JsonToValue(JsonMember("value", x_1283))));
        } else if (x_2789 == "delete_value") {
          return delete_value_x_1300(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1299) { return JsonToInt(x_1299); }),
              x_1276, MakePair(JsonToString(JsonMember("type", x_1283)), JsonToString(JsonMember("key", x_1283))));
        } else if (x_2789 == "insert_value") {
          return insert_value_x_1302(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1301) { return JsonToInt(x_1301); }),
              x_1276,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1283)), JsonToString(JsonMember("key", x_1283))),
                       JsonToValue(JsonMember("value", x_1283))));
        } else if (x_2789 == "layout_remove") {
          return remove_layout_node_x_1304(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1303) { return JsonToInt(x_1303); }),
              x_1277, MakeUnit());
        } else if (x_2789 == "layout_add") {
          return add_layout_node_x_1306(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1305) { return JsonToInt(x_1305); }),
              x_1277, json_to_layout_node_x_1264(JsonMember("node", x_1283)));
        } else if (x_2789 == "layout_replace") {
          return replace_layout_node_x_1308(
              ListMap(JsonToList(JsonMember("path", x_1283)), [&](const auto &x_1307) { return JsonToInt(x_1307); }),
              x_1277, json_to_layout_node_x_1264(JsonMember("node", x_1283)));
        } else if (x_2789 == "layout_info_changed") {
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