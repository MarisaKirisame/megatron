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
Unit var_modified_x_1771(const auto &x_1787);
auto eval_expr_x_1768(const auto &x_1792);
Unit var_modified_x_1766(const auto &x_1802);
auto eval_expr_x_1763(const auto &x_1805);
Unit var_modified_x_1761(const auto &x_1811);
auto eval_expr_x_1758(const auto &x_1815);
Unit var_modified_x_1756(const auto &x_1843);
auto eval_expr_x_1753(const auto &x_1849);
Unit var_modified_x_1751(const auto &x_1863);
auto eval_expr_x_1748(const auto &x_1868);
Unit var_modified_x_1746(const auto &x_1874);
auto eval_expr_x_1743(const auto &x_1878);
Unit var_modified_x_1741(const auto &x_1906);
auto eval_expr_x_1738(const auto &x_1912);
Unit var_modified_x_1736(const auto &x_1924);
auto eval_expr_x_1733(const auto &x_1927);
Unit var_modified_x_1731(const auto &x_1939);
auto eval_expr_x_1728(const auto &x_1942);
Unit var_modified_x_1726(const auto &x_1950);
auto eval_expr_x_1723(const auto &x_1954);
Unit var_modified_x_1721(const auto &x_1966);
auto eval_expr_x_1718(const auto &x_1969);
Unit var_modified_x_1716(const auto &x_1973);
auto eval_expr_x_1713(const auto &x_1976);
Unit var_modified_x_1709(const auto &x_1980);
auto eval_expr_x_1706(const auto &x_1990);
Unit var_modified_x_1704(const auto &x_2036);
auto eval_expr_x_1701(const auto &x_2039);
Unit var_modified_x_1699(const auto &x_2049);
auto eval_expr_x_1696(const auto &x_2054);
Unit var_modified_x_1694(const auto &x_2058);
auto eval_expr_x_1691(const auto &x_2063);
Unit var_modified_x_1689(const auto &x_2069);
auto eval_expr_x_1686(const auto &x_2072);
Unit var_modified_x_1684(const auto &x_2074);
auto eval_expr_x_1681(const auto &x_2077);
Unit var_modified_x_1679(const auto &x_2081);
auto eval_expr_x_1676(const auto &x_2085);
Unit var_modified_x_1674(const auto &x_2097);
auto eval_expr_x_1671(const auto &x_2100);
Unit var_modified_x_1669(const auto &x_2104);
auto eval_expr_x_1666(const auto &x_2108);
Unit var_modified_x_1664(const auto &x_2120);
auto eval_expr_x_1661(const auto &x_2124);
Unit var_modified_x_1659(const auto &x_2138);
auto eval_expr_x_1656(const auto &x_2143);
Unit var_modified_x_1654(const auto &x_2159);
auto eval_expr_x_1651(const auto &x_2162);
Unit var_modified_x_1649(const auto &x_2166);
auto eval_expr_x_1646(const auto &x_2172);
Unit var_modified_x_1644(const auto &x_2178);
auto eval_expr_x_1641(const auto &x_2184);
Unit var_modified_x_1639(const auto &x_2190);
auto eval_expr_x_1636(const auto &x_2194);
Unit var_modified_x_1634(const auto &x_2198);
auto eval_expr_x_1631(const auto &x_2202);
Unit var_modified_x_1629(const auto &x_2206);
auto eval_expr_x_1626(const auto &x_2211);
Unit var_modified_x_1624(const auto &x_2215);
auto eval_expr_x_1621(const auto &x_2220);
Unit var_modified_x_1618(const auto &x_2224);
auto eval_expr_x_1615(const auto &x_2232);
Unit var_modified_x_1613(const auto &x_2248);
auto eval_expr_x_1610(const auto &x_2256);
Unit var_modified_x_1608(const auto &x_2264);
auto eval_expr_x_1605(const auto &x_2272);
Unit var_modified_x_1603(const auto &x_2278);
auto eval_expr_x_1600(const auto &x_2281);
Unit var_modified_x_1598(const auto &x_2287);
auto eval_expr_x_1595(const auto &x_2291);
Unit var_modified_x_1593(const auto &x_2371);
auto eval_expr_x_1590(const auto &x_2374);
Unit var_modified_x_1588(const auto &x_2400);
auto eval_expr_x_1585(const auto &x_2404);
Unit var_modified_x_1583(const auto &x_2408);
auto eval_expr_x_1580(const auto &x_2411);
Unit var_modified_x_1578(const auto &x_2417);
auto eval_expr_x_1575(const auto &x_2425);
Unit var_modified_x_1573(const auto &x_2431);
auto eval_expr_x_1570(const auto &x_2439);
Unit var_modified_x_1568(const auto &x_2445);
auto eval_expr_x_1565(const auto &x_2451);
Unit var_modified_x_1563(const auto &x_2459);
auto eval_expr_x_1560(const auto &x_2462);
Unit var_modified_x_1558(const auto &x_2468);
auto eval_expr_x_1555(const auto &x_2472);
Unit var_modified_x_1553(const auto &x_2556);
auto eval_expr_x_1550(const auto &x_2559);
Unit var_modified_x_1548(const auto &x_2563);
auto eval_expr_x_1545(const auto &x_2566);
Unit var_modified_x_1543(const auto &x_2592);
auto eval_expr_x_1540(const auto &x_2595);
Unit var_modified_x_1538(const auto &x_2603);
auto eval_expr_x_1535(const auto &x_2607);
Unit eval_stmts_x_1510(const auto &x_1534);
Unit eval_stmts_x_1505(const auto &x_1620);
Unit eval_stmts_x_1502(const auto &x_1711);
Unit eval_stmts_x_1497(const auto &x_1712);
Unit x_1773(const auto &x_1774);
Unit x_1776(const auto &x_1777);
Unit x_1779(const auto &x_1780);
Unit x_1783(const auto &x_1784);
Unit x_1343(const auto &x_1344, const auto &x_1345, const auto &x_1346);
Unit x_1350(const auto &x_1351, const auto &x_1352, const auto &x_1353);
Unit x_1357(const auto &x_1358, const auto &x_1359, const auto &x_1360);
Unit x_1364(const auto &x_1365, const auto &x_1366, const auto &x_1367);
Unit x_1376(const auto &x_1377, const auto &x_1378, const auto &x_1379);
Unit x_1385(const auto &x_1386, const auto &x_1387, const auto &x_1388);
Unit x_1396(const auto &x_1397, const auto &x_1398, const auto &x_1399);
Unit x_1433(const auto &x_1434);
Unit x_1441(const auto &x_1442, const auto &x_1443, const auto &x_1444);
Unit recalculate_x_1324(const auto &x_1462);
Unit x_1466(const auto &x_1467, const auto &x_1468, const auto &x_1469);
Unit x_1487(const auto &x_1488);
Unit eval_stmts_x_1317(const auto &x_1495);
Unit eval_stmts_x_1314(const auto &x_1503);
Unit x_1511(const auto &x_1512);
int64_t x_1519(const auto &x_1520);
int64_t x_1522(const auto &x_1523);
LayoutNode x_1525(const auto &x_1526);
Node x_1528(const auto &x_1529);
Node x_1531(const auto &x_1532);
Unit var_modified_x_1771(const auto &x_1787) {
  return RecordOverhead([&](const auto &x_1788) {
    OptionMatch(
        x_1787->next, [&](const auto &x_1790) { return MakeUnit(); },
        [&](const auto &x_1789) {
          auto x_1791 = x_1789;
          if (x_1791->meta->pass_1_proc_inited) {
            x_1791->meta->bb_3_has_bb_dirtied = true;
            x_1791->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1791);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1768(const auto &x_1792) {
  return RecordEval([&](const auto &x_1793) {
    if ((x_1792->prev != nullptr) && (!(x_1792->prev)->var_line_break)) {
      return max(x_1792->var_height_external, (x_1792->prev)->var_line_height);
    } else {
      return x_1792->var_height_external;
    }
  });
}
Unit var_modified_x_1766(const auto &x_1802) {
  return RecordOverhead([&](const auto &x_1803) {
    auto x_1804 = x_1802;
    if (x_1804->meta->pass_1_proc_inited) {
      x_1804->meta->bb_3_has_bb_dirtied = true;
      x_1804->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1804);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1763(const auto &x_1805) {
  return RecordEval([&](const auto &x_1806) {
    if (eq(x_1805->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_1805->var_height_internal;
    }
  });
}
Unit var_modified_x_1761(const auto &x_1811) {
  return RecordOverhead([&](const auto &x_1812) {
    auto x_1813 = x_1811;
    if (x_1813->meta->pass_1_proc_inited) {
      x_1813->meta->bb_3_has_bb_dirtied = true;
      x_1813->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1813);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_1811->children, [&](const auto &x_1814) {
      if (x_1814->meta->pass_1_proc_inited) {
        x_1814->meta->bb_3_has_bb_dirtied = true;
        x_1814->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1814);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1758(const auto &x_1815) {
  return RecordEval([&](const auto &x_1816) {
    if (x_1815->var_intrinsic_height_is_height) {
      return x_1815->var_intrinsic_height_internal;
    } else {
      if ((x_1815->parent != nullptr) && (x_1815->parent)->var_is_flex_column) {
        return plus(x_1815->var_intrinsic_height_internal,
                    mult(x_1815->var_flex_amount, (x_1815->parent)->var_flex_unit));
      } else {
        if (x_1815->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_1815->var_box_height, divide(x_1815->var_height_expr.r.a0, 100.));
        } else {
          return max(x_1815->var_box_height, x_1815->var_intrinsic_height_internal);
        }
      }
    }
  });
}
Unit var_modified_x_1756(const auto &x_1843) {
  return RecordOverhead([&](const auto &x_1844) {
    ListIter(x_1843->children, [&](const auto &x_1845) {
      if (x_1845->meta->pass_1_proc_inited) {
        x_1845->meta->bb_3_has_bb_dirtied = true;
        x_1845->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1845);
      } else {
        return MetaWriteMetric();
      }
    });
    OptionMatch(
        x_1843->next, [&](const auto &x_1847) { return MakeUnit(); },
        [&](const auto &x_1846) {
          auto x_1848 = x_1846;
          if (x_1848->meta->pass_1_proc_inited) {
            x_1848->meta->bb_3_has_bb_dirtied = true;
            x_1848->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1848);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1753(const auto &x_1849) {
  return RecordEval([&](const auto &x_1850) {
    if (x_1849->prev != nullptr) {
      if (x_1849->var_line_break || (x_1849->prev)->var_line_break) {
        return plus((x_1849->prev)->var_y, (x_1849->prev)->var_line_height);
      } else {
        return (x_1849->prev)->var_y;
      }
    } else {
      if (x_1849->parent != nullptr) {
        return (x_1849->parent)->var_y;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_1751(const auto &x_1863) {
  return RecordOverhead([&](const auto &x_1864) {
    OptionMatch(
        x_1863->next, [&](const auto &x_1866) { return MakeUnit(); },
        [&](const auto &x_1865) {
          auto x_1867 = x_1865;
          if (x_1867->meta->pass_1_proc_inited) {
            x_1867->meta->bb_3_has_bb_dirtied = true;
            x_1867->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1867);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1748(const auto &x_1868) {
  return RecordEval([&](const auto &x_1869) {
    if (eq(x_1868->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_1868->var_width_internal;
    }
  });
}
Unit var_modified_x_1746(const auto &x_1874) {
  return RecordOverhead([&](const auto &x_1875) {
    auto x_1876 = x_1874;
    if (x_1876->meta->pass_1_proc_inited) {
      x_1876->meta->bb_3_has_bb_dirtied = true;
      x_1876->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1876);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_1874->children, [&](const auto &x_1877) {
      if (x_1877->meta->pass_1_proc_inited) {
        x_1877->meta->bb_3_has_bb_dirtied = true;
        x_1877->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1877);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1743(const auto &x_1878) {
  return RecordEval([&](const auto &x_1879) {
    if (x_1878->var_intrinsic_width_is_width) {
      return x_1878->var_intrinsic_width_internal;
    } else {
      if ((x_1878->parent != nullptr) && (x_1878->parent)->var_is_flex_row) {
        return plus(x_1878->var_intrinsic_width_internal,
                    mult(x_1878->var_flex_amount, (x_1878->parent)->var_flex_unit));
      } else {
        if (x_1878->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_1878->var_box_width, divide(x_1878->var_width_expr.r.a0, 100.));
        } else {
          return max(x_1878->var_box_width, x_1878->var_intrinsic_width_internal);
        }
      }
    }
  });
}
Unit var_modified_x_1741(const auto &x_1906) {
  return RecordOverhead([&](const auto &x_1907) {
    ListIter(x_1906->children, [&](const auto &x_1908) {
      if (x_1908->meta->pass_1_proc_inited) {
        x_1908->meta->bb_3_has_bb_dirtied = true;
        x_1908->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1908);
      } else {
        return MetaWriteMetric();
      }
    });
    OptionMatch(
        x_1906->next, [&](const auto &x_1910) { return MakeUnit(); },
        [&](const auto &x_1909) {
          auto x_1911 = x_1909;
          if (x_1911->meta->pass_1_proc_inited) {
            x_1911->meta->bb_3_has_bb_dirtied = true;
            x_1911->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1911);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1738(const auto &x_1912) {
  return RecordEval([&](const auto &x_1913) {
    if (x_1912->prev != nullptr) {
      if (x_1912->var_line_break || (x_1912->prev)->var_line_break) {
        return 0.;
      } else {
        return plus((x_1912->prev)->var_x, (x_1912->prev)->var_width_external);
      }
    } else {
      if (x_1912->parent != nullptr) {
        return (x_1912->parent)->var_x;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_1736(const auto &x_1924) {
  return RecordOverhead([&](const auto &x_1925) {
    ListIter(x_1924->children, [&](const auto &x_1926) {
      if (x_1926->meta->pass_1_proc_inited) {
        x_1926->meta->bb_3_has_bb_dirtied = true;
        x_1926->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1926);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1733(const auto &x_1927) {
  return RecordEval([&](const auto &x_1928) {
    if (gt(x_1927->var_left_over, 0.)) {
      return divide(x_1927->var_left_over, x_1927->var_flex_grow_sum);
    } else {
      return divide(x_1927->var_left_over, x_1927->var_flex_shrink_sum);
    }
  });
}
Unit var_modified_x_1731(const auto &x_1939) {
  return RecordOverhead([&](const auto &x_1940) {
    auto x_1941 = x_1939;
    if (x_1941->meta->pass_1_proc_inited) {
      x_1941->meta->bb_3_has_bb_dirtied = true;
      x_1941->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1941);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1728(const auto &x_1942) {
  return RecordEval([&](const auto &x_1943) {
    if ((x_1942->parent != nullptr) && gt((x_1942->parent)->var_left_over, 0.)) {
      return x_1942->var_flex_grow;
    } else {
      return x_1942->var_flex_shrink;
    }
  });
}
Unit var_modified_x_1726(const auto &x_1950) {
  return RecordOverhead([&](const auto &x_1951) {
    auto x_1952 = x_1950;
    if (x_1952->meta->pass_1_proc_inited) {
      x_1952->meta->bb_3_has_bb_dirtied = true;
      x_1952->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1952);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_1950->children, [&](const auto &x_1953) {
      if (x_1953->meta->pass_1_proc_inited) {
        x_1953->meta->bb_3_has_bb_dirtied = true;
        x_1953->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1953);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1723(const auto &x_1954) {
  return RecordEval([&](const auto &x_1955) {
    if (x_1954->var_is_flex_row) {
      return minus(x_1954->var_box_width, (x_1954->last != nullptr) ? ((x_1954->last)->var_intrinsic_width_sum) : (0.));
    } else {
      return minus(x_1954->var_box_height,
                   (x_1954->last != nullptr) ? ((x_1954->last)->var_intrinsic_height_sum) : (0.));
    }
  });
}
Unit var_modified_x_1721(const auto &x_1966) {
  return RecordOverhead([&](const auto &x_1967) {
    auto x_1968 = x_1966;
    if (x_1968->meta->pass_1_proc_inited) {
      x_1968->meta->bb_3_has_bb_dirtied = true;
      x_1968->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1968);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1718(const auto &x_1969) {
  return RecordEval([&](const auto &x_1970) {
    if (x_1969->parent != nullptr) {
      return (x_1969->parent)->var_height_internal;
    } else {
      return 1080.;
    }
  });
}
Unit var_modified_x_1716(const auto &x_1973) {
  return RecordOverhead([&](const auto &x_1974) {
    auto x_1975 = x_1973;
    if (x_1975->meta->pass_1_proc_inited) {
      x_1975->meta->bb_3_has_bb_dirtied = true;
      x_1975->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1975);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1713(const auto &x_1976) {
  return RecordEval([&](const auto &x_1977) {
    if (x_1976->parent != nullptr) {
      return (x_1976->parent)->var_width_internal;
    } else {
      return 1920.;
    }
  });
}
Unit var_modified_x_1709(const auto &x_1980) {
  return RecordOverhead([&](const auto &x_1981) {
    auto x_1982 = x_1980;
    if (x_1982->meta->pass_0_proc_inited) {
      x_1982->meta->bb_0_has_bb_dirtied = true;
      x_1982->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_1982);
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_1980->next, [&](const auto &x_1984) { return MakeUnit(); },
        [&](const auto &x_1983) {
          auto x_1985 = x_1983;
          if (x_1985->meta->pass_0_proc_inited) {
            x_1985->meta->bb_0_has_bb_dirtied = true;
            x_1985->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_1985);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_1986 = x_1980;
    if (x_1986->meta->pass_1_proc_inited) {
      x_1986->meta->bb_3_has_bb_dirtied = true;
      x_1986->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1986);
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_1980->next, [&](const auto &x_1988) { return MakeUnit(); },
        [&](const auto &x_1987) {
          auto x_1989 = x_1987;
          if (x_1989->meta->pass_1_proc_inited) {
            x_1989->meta->bb_3_has_bb_dirtied = true;
            x_1989->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1989);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1706(const auto &x_1990) {
  return RecordEval([&](const auto &x_1991) {
    if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return false;
    } else {
      if (eq(x_1990->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
        return false;
      } else {
        if ((x_1990->parent != nullptr) &&
            (eq((x_1990->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
             eq((x_1990->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
          return true;
        } else {
          if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
            return true;
          } else {
            if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
              return false;
            } else {
              if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
                return false;
              } else {
                if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                  if (eq(x_1990->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                    return false;
                  } else {
                    if (eq(x_1990->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                      return false;
                    } else {
                      if (eq(x_1990->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                        return true;
                      } else {
                        return true;
                      }
                    }
                  }
                } else {
                  if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                    return false;
                  } else {
                    if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                      return false;
                    } else {
                      if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                        return true;
                      } else {
                        if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                          return true;
                        } else {
                          if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                            return true;
                          } else {
                            if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                              return false;
                            } else {
                              if (eq(x_1990->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
  });
}
Unit var_modified_x_1704(const auto &x_2036) {
  return RecordOverhead([&](const auto &x_2037) {
    ListIter(x_2036->children, [&](const auto &x_2038) {
      if (x_2038->meta->pass_0_proc_inited) {
        x_2038->meta->bb_1_has_bb_dirtied = true;
        x_2038->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2038);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1701(const auto &x_2039) {
  return RecordEval([&](const auto &x_2040) {
    return (((!(x_2039->parent != nullptr)) || (x_2039->parent)->var_visible) &&
            (neq(x_2039->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
             ((!x_2039->var_inside_svg) && (!x_2039->var_disabled))));
  });
}
Unit var_modified_x_1699(const auto &x_2049) {
  return RecordOverhead([&](const auto &x_2050) {
    auto x_2051 = x_2049;
    if (x_2051->meta->pass_0_proc_inited) {
      x_2051->meta->bb_1_has_bb_dirtied = true;
      x_2051->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2051);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2049->children, [&](const auto &x_2052) {
      if (x_2052->meta->pass_0_proc_inited) {
        x_2052->meta->bb_1_has_bb_dirtied = true;
        x_2052->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2052);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2053 = x_2049;
    if (x_2053->meta->pass_0_proc_inited) {
      x_2053->meta->bb_0_has_bb_dirtied = true;
      x_2053->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2053);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1696(const auto &x_2054) {
  return RecordEval([&](const auto &x_2055) {
    if (eq(x_2054->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
      return true;
    } else {
      return ((x_2054->parent != nullptr) && (x_2054->parent)->var_disabled);
    }
  });
}
Unit var_modified_x_1694(const auto &x_2058) {
  return RecordOverhead([&](const auto &x_2059) {
    auto x_2060 = x_2058;
    if (x_2060->meta->pass_0_proc_inited) {
      x_2060->meta->bb_1_has_bb_dirtied = true;
      x_2060->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2060);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2058->children, [&](const auto &x_2061) {
      if (x_2061->meta->pass_0_proc_inited) {
        x_2061->meta->bb_1_has_bb_dirtied = true;
        x_2061->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2061);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2062 = x_2058;
    if (x_2062->meta->pass_0_proc_inited) {
      x_2062->meta->bb_0_has_bb_dirtied = true;
      x_2062->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2062);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1691(const auto &x_2063) {
  return RecordEval([&](const auto &x_2064) {
    return ((x_2063->parent != nullptr) && ((x_2063->parent)->var_is_svg_block || (x_2063->parent)->var_inside_svg));
  });
}
Unit var_modified_x_1689(const auto &x_2069) {
  return RecordOverhead([&](const auto &x_2070) {
    ListIter(x_2069->children, [&](const auto &x_2071) {
      if (x_2071->meta->pass_0_proc_inited) {
        x_2071->meta->bb_1_has_bb_dirtied = true;
        x_2071->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2071);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1686(const auto &x_2072) {
  return RecordEval([&](const auto &x_2073) { return eq(x_2072->name, DEStringLit(DEStringCase::DSTRING_svg)); });
}
Unit var_modified_x_1684(const auto &x_2074) {
  return RecordOverhead([&](const auto &x_2075) {
    auto x_2076 = x_2074;
    if (x_2076->meta->pass_0_proc_inited) {
      x_2076->meta->bb_0_has_bb_dirtied = true;
      x_2076->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2076);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1681(const auto &x_2077) {
  return RecordEval(
      [&](const auto &x_2078) { return neq(x_2077->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_1679(const auto &x_2081) {
  return RecordOverhead([&](const auto &x_2082) {
    auto x_2083 = x_2081;
    if (x_2083->meta->pass_0_proc_inited) {
      x_2083->meta->bb_1_has_bb_dirtied = true;
      x_2083->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2083);
    } else {
      MetaWriteMetric();
    }
    auto x_2084 = x_2081;
    if (x_2084->meta->pass_0_proc_inited) {
      x_2084->meta->bb_0_has_bb_dirtied = true;
      x_2084->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2084);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1676(const auto &x_2085) {
  return RecordEval([&](const auto &x_2086) {
    if (!x_2085->has_attr_height) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_2085->attr_height.c == DEStringCase::DStringIsFloat) ||
          (x_2085->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_2085->attr_height;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_1674(const auto &x_2097) {
  return RecordOverhead([&](const auto &x_2098) {
    auto x_2099 = x_2097;
    if (x_2099->meta->pass_0_proc_inited) {
      x_2099->meta->bb_0_has_bb_dirtied = true;
      x_2099->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2099);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1671(const auto &x_2100) {
  return RecordEval(
      [&](const auto &x_2101) { return neq(x_2100->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_1669(const auto &x_2104) {
  return RecordOverhead([&](const auto &x_2105) {
    auto x_2106 = x_2104;
    if (x_2106->meta->pass_0_proc_inited) {
      x_2106->meta->bb_1_has_bb_dirtied = true;
      x_2106->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2106);
    } else {
      MetaWriteMetric();
    }
    auto x_2107 = x_2104;
    if (x_2107->meta->pass_0_proc_inited) {
      x_2107->meta->bb_0_has_bb_dirtied = true;
      x_2107->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2107);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1666(const auto &x_2108) {
  return RecordEval([&](const auto &x_2109) {
    if (!x_2108->has_attr_width) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_2108->attr_width.c == DEStringCase::DStringIsFloat) ||
          (x_2108->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_2108->attr_width;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_1664(const auto &x_2120) {
  return RecordOverhead([&](const auto &x_2121) {
    ListIter(x_2120->children, [&](const auto &x_2122) {
      if (x_2122->meta->pass_0_proc_inited) {
        x_2122->meta->bb_0_has_bb_dirtied = true;
        x_2122->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2122);
      } else {
        return MetaWriteMetric();
      }
    });
    ListIter(x_2120->children, [&](const auto &x_2123) {
      if (x_2123->meta->pass_1_proc_inited) {
        x_2123->meta->bb_3_has_bb_dirtied = true;
        x_2123->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_2123);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1661(const auto &x_2124) {
  return RecordEval([&](const auto &x_2125) {
    if ((x_2124->parent != nullptr) &&
        (eq((x_2124->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_2124->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_2124->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
          eq((x_2124->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_1659(const auto &x_2138) {
  return RecordOverhead([&](const auto &x_2139) {
    ListIter(x_2138->children, [&](const auto &x_2140) {
      if (x_2140->meta->pass_0_proc_inited) {
        x_2140->meta->bb_0_has_bb_dirtied = true;
        x_2140->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2140);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2141 = x_2138;
    if (x_2141->meta->pass_1_proc_inited) {
      x_2141->meta->bb_3_has_bb_dirtied = true;
      x_2141->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2141);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2138->children, [&](const auto &x_2142) {
      if (x_2142->meta->pass_1_proc_inited) {
        x_2142->meta->bb_3_has_bb_dirtied = true;
        x_2142->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_2142);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1656(const auto &x_2143) {
  return RecordEval([&](const auto &x_2144) {
    if ((x_2143->parent != nullptr) &&
        (eq((x_2143->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_2143->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_2143->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
          eq((x_2143->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_1654(const auto &x_2159) {
  return RecordOverhead([&](const auto &x_2160) {
    ListIter(x_2159->children, [&](const auto &x_2161) {
      if (x_2161->meta->pass_0_proc_inited) {
        x_2161->meta->bb_1_has_bb_dirtied = true;
        x_2161->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2161);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1651(const auto &x_2162) {
  return RecordEval([&](const auto &x_2163) {
    if (x_2162->has_prop_flex_direction) {
      return x_2162->prop_flex_direction;
    } else {
      return DEStringLit(DEStringCase::DSTRING_);
    }
  });
}
Unit var_modified_x_1649(const auto &x_2166) {
  return RecordOverhead([&](const auto &x_2167) {
    OptionMatch(
        x_2166->next, [&](const auto &x_2169) { return MakeUnit(); },
        [&](const auto &x_2168) {
          auto x_2170 = x_2168;
          if (x_2170->meta->pass_0_proc_inited) {
            x_2170->meta->bb_1_has_bb_dirtied = true;
            x_2170->meta->bb_1_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2170);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_2171 = x_2166;
    if (x_2171->meta->pass_1_proc_inited) {
      x_2171->meta->bb_3_has_bb_dirtied = true;
      x_2171->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2171);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1646(const auto &x_2172) {
  return RecordEval([&](const auto &x_2173) {
    return plus((x_2172->prev != nullptr) ? ((x_2172->prev)->var_flex_shrink_sum) : (0.), x_2172->var_flex_shrink);
  });
}
Unit var_modified_x_1644(const auto &x_2178) {
  return RecordOverhead([&](const auto &x_2179) {
    OptionMatch(
        x_2178->next, [&](const auto &x_2181) { return MakeUnit(); },
        [&](const auto &x_2180) {
          auto x_2182 = x_2180;
          if (x_2182->meta->pass_0_proc_inited) {
            x_2182->meta->bb_1_has_bb_dirtied = true;
            x_2182->meta->bb_1_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2182);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_2183 = x_2178;
    if (x_2183->meta->pass_1_proc_inited) {
      x_2183->meta->bb_3_has_bb_dirtied = true;
      x_2183->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2183);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1641(const auto &x_2184) {
  return RecordEval([&](const auto &x_2185) {
    return plus((x_2184->prev != nullptr) ? ((x_2184->prev)->var_flex_grow_sum) : (0.), x_2184->var_flex_grow);
  });
}
Unit var_modified_x_1639(const auto &x_2190) {
  return RecordOverhead([&](const auto &x_2191) {
    auto x_2192 = x_2190;
    if (x_2192->meta->pass_0_proc_inited) {
      x_2192->meta->bb_1_has_bb_dirtied = true;
      x_2192->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2192);
    } else {
      MetaWriteMetric();
    }
    auto x_2193 = x_2190;
    if (x_2193->meta->pass_1_proc_inited) {
      x_2193->meta->bb_3_has_bb_dirtied = true;
      x_2193->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2193);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1636(const auto &x_2194) {
  return RecordEval([&](const auto &x_2195) {
    if (x_2194->has_prop_flex_shrink) {
      return (x_2194->prop_flex_shrink.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1634(const auto &x_2198) {
  return RecordOverhead([&](const auto &x_2199) {
    auto x_2200 = x_2198;
    if (x_2200->meta->pass_0_proc_inited) {
      x_2200->meta->bb_1_has_bb_dirtied = true;
      x_2200->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2200);
    } else {
      MetaWriteMetric();
    }
    auto x_2201 = x_2198;
    if (x_2201->meta->pass_1_proc_inited) {
      x_2201->meta->bb_3_has_bb_dirtied = true;
      x_2201->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2201);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1631(const auto &x_2202) {
  return RecordEval([&](const auto &x_2203) {
    if (x_2202->has_prop_flex_grow) {
      return (x_2202->prop_flex_grow.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1629(const auto &x_2206) {
  return RecordOverhead([&](const auto &x_2207) {
    auto x_2208 = x_2206;
    if (x_2208->meta->pass_0_proc_inited) {
      x_2208->meta->bb_1_has_bb_dirtied = true;
      x_2208->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2208);
    } else {
      MetaWriteMetric();
    }
    auto x_2209 = x_2206;
    if (x_2209->meta->pass_0_proc_inited) {
      x_2209->meta->bb_0_has_bb_dirtied = true;
      x_2209->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2209);
    } else {
      MetaWriteMetric();
    }
    auto x_2210 = x_2206;
    if (x_2210->meta->pass_1_proc_inited) {
      x_2210->meta->bb_3_has_bb_dirtied = true;
      x_2210->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2210);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1626(const auto &x_2211) {
  return RecordEval([&](const auto &x_2212) {
    if (x_2211->has_prop_position) {
      return x_2211->prop_position;
    } else {
      return DEStringLit(DEStringCase::DSTRING_static);
    }
  });
}
Unit var_modified_x_1624(const auto &x_2215) {
  return RecordOverhead([&](const auto &x_2216) {
    auto x_2217 = x_2215;
    if (x_2217->meta->pass_0_proc_inited) {
      x_2217->meta->bb_1_has_bb_dirtied = true;
      x_2217->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2217);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2215->children, [&](const auto &x_2218) {
      if (x_2218->meta->pass_0_proc_inited) {
        x_2218->meta->bb_1_has_bb_dirtied = true;
        x_2218->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2218);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2219 = x_2215;
    if (x_2219->meta->pass_0_proc_inited) {
      x_2219->meta->bb_0_has_bb_dirtied = true;
      x_2219->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2219);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1621(const auto &x_2220) {
  return RecordEval([&](const auto &x_2221) {
    if (x_2220->has_prop_display) {
      return x_2220->prop_display;
    } else {
      return DEStringLit(DEStringCase::DSTRING_block);
    }
  });
}
Unit var_modified_x_1618(const auto &x_2224) {
  return RecordOverhead([&](const auto &x_2225) {
    if (x_2224->next == nullptr) {
      OptionMatch(
          x_2224->parent, [&](const auto &x_2227) { return MakeUnit(); },
          [&](const auto &x_2226) {
            auto x_2228 = x_2226;
            if (x_2228->meta->pass_0_proc_inited) {
              x_2228->meta->bb_0_has_bb_dirtied = true;
              x_2228->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_2228);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_2224->next, [&](const auto &x_2230) { return MakeUnit(); },
        [&](const auto &x_2229) {
          auto x_2231 = x_2229;
          if (x_2231->meta->pass_0_proc_inited) {
            x_2231->meta->bb_0_has_bb_dirtied = true;
            x_2231->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2231);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1615(const auto &x_2232) {
  return RecordEval([&](const auto &x_2233) {
    if (x_2232->prev != nullptr) {
      if (x_2232->var_line_break) {
        return plus((x_2232->prev)->var_finished_intrinsic_height_sum,
                    plus((x_2232->prev)->var_intrinsic_current_line_height, x_2232->var_intrinsic_height_external));
      } else {
        return (x_2232->prev)->var_finished_intrinsic_height_sum;
      }
    } else {
      if (x_2232->var_line_break) {
        return x_2232->var_intrinsic_height_external;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_1613(const auto &x_2248) {
  return RecordOverhead([&](const auto &x_2249) {
    if (x_2248->next == nullptr) {
      OptionMatch(
          x_2248->parent, [&](const auto &x_2251) { return MakeUnit(); },
          [&](const auto &x_2250) {
            auto x_2252 = x_2250;
            if (x_2252->meta->pass_0_proc_inited) {
              x_2252->meta->bb_0_has_bb_dirtied = true;
              x_2252->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_2252);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_2248->next, [&](const auto &x_2254) { return MakeUnit(); },
        [&](const auto &x_2253) {
          auto x_2255 = x_2253;
          if (x_2255->meta->pass_0_proc_inited) {
            x_2255->meta->bb_0_has_bb_dirtied = true;
            x_2255->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2255);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1610(const auto &x_2256) {
  return RecordEval([&](const auto &x_2257) {
    if (x_2256->var_line_break) {
      return 0.;
    } else {
      return max(x_2256->var_intrinsic_height_external,
                 (x_2256->prev != nullptr) ? ((x_2256->prev)->var_intrinsic_current_line_height) : (0.));
    }
  });
}
Unit var_modified_x_1608(const auto &x_2264) {
  return RecordOverhead([&](const auto &x_2265) {
    OptionMatch(
        x_2264->next, [&](const auto &x_2267) { return MakeUnit(); },
        [&](const auto &x_2266) {
          auto x_2268 = x_2266;
          if (x_2268->meta->pass_0_proc_inited) {
            x_2268->meta->bb_0_has_bb_dirtied = true;
            x_2268->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2268);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    if (x_2264->next == nullptr) {
      OptionMatch(
          x_2264->parent, [&](const auto &x_2270) { return MakeUnit(); },
          [&](const auto &x_2269) {
            auto x_2271 = x_2269;
            if (x_2271->meta->pass_1_proc_inited) {
              x_2271->meta->bb_3_has_bb_dirtied = true;
              x_2271->meta->bb_3_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1415(x_2271);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1605(const auto &x_2272) {
  return RecordEval([&](const auto &x_2273) {
    return plus((x_2272->prev != nullptr) ? ((x_2272->prev)->var_intrinsic_height_sum) : (0.),
                x_2272->var_intrinsic_height_external);
  });
}
Unit var_modified_x_1603(const auto &x_2278) {
  return RecordOverhead([&](const auto &x_2279) {
    auto x_2280 = x_2278;
    if (x_2280->meta->pass_0_proc_inited) {
      x_2280->meta->bb_0_has_bb_dirtied = true;
      x_2280->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2280);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1600(const auto &x_2281) {
  return RecordEval([&](const auto &x_2282) {
    if (eq(x_2281->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_2281->var_intrinsic_height_internal;
    }
  });
}
Unit var_modified_x_1598(const auto &x_2287) {
  return RecordOverhead([&](const auto &x_2288) {
    auto x_2289 = x_2287;
    if (x_2289->meta->pass_0_proc_inited) {
      x_2289->meta->bb_0_has_bb_dirtied = true;
      x_2289->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2289);
    } else {
      MetaWriteMetric();
    }
    auto x_2290 = x_2287;
    if (x_2290->meta->pass_1_proc_inited) {
      x_2290->meta->bb_3_has_bb_dirtied = true;
      x_2290->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2290);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1595(const auto &x_2291) {
  return RecordEval([&](const auto &x_2292) {
    if (eq(x_2291->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_2291->var_inside_svg) {
        return 0.;
      } else {
        if (x_2291->var_disabled) {
          return 0.;
        } else {
          if (neq(x_2291->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_2291->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               neq(x_2291->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
            if (x_2291->var_height_expr.c == DEStringCase::DHasSuffix_px) {
              return x_2291->var_height_expr.r.a0;
            } else {
              if (x_2291->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
                return x_2291->var_height_expr.r.a0;
              } else {
                return x_2291->var_height_expr.r.a0;
              }
            }
          } else {
            return plus(
                x_2291->var_children_intrinsic_height,
                (eq(x_2291->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (10.)
                    : ((x_2291->var_is_default_case)
                           ? (0.)
                           : ((eq(x_2291->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_2291->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_2291->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (10.)
                                         : ((eq(x_2291->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_2291->var_has_height_attr &&
                                                    (x_2291->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_2291->var_height_attr_expr.r.a0)
                                                       : ((x_2291->has_attr_viewBox)
                                                              ? (x_2291->attr_viewBox.r.a3)
                                                              : (mult(
                                                                    (x_2291->attr_viewBox.r.a3),
                                                                    divide(x_2291->var_height_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_2291->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_2291->var_has_height_attr)
                                                              ? (x_2291->var_height_attr_expr.r.a0)
                                                              : ((x_2291->has_attr_image_height &&
                                                                  (!x_2291->var_has_width_attr))
                                                                     ? (int_to_float(x_2291->attr_image_height))
                                                                     : ((neq(x_2291->attr_image_width,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult((x_2291->var_width_attr_expr.r.a0),
                                                                                    divide(
                                                                                        int_to_float(
                                                                                            x_2291->attr_image_height),
                                                                                        int_to_float(
                                                                                            x_2291->attr_image_width))))
                                                                            : (0.))))
                                                       : ((eq(x_2291->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (150.)
                                                              : ((eq(x_2291->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (150.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_1593(const auto &x_2371) {
  return RecordOverhead([&](const auto &x_2372) {
    auto x_2373 = x_2371;
    if (x_2373->meta->pass_1_proc_inited) {
      x_2373->meta->bb_3_has_bb_dirtied = true;
      x_2373->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2373);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1590(const auto &x_2374) {
  return RecordEval([&](const auto &x_2375) {
    if (eq(x_2374->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_2374->var_inside_svg || x_2374->var_disabled)) {
      return true;
    } else {
      if ((x_2374->parent != nullptr) && (x_2374->parent)->var_is_flex_column) {
        return false;
      } else {
        if (eq(x_2374->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_2374->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_2374->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_2374->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
               eq(x_2374->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_1588(const auto &x_2400) {
  return RecordOverhead([&](const auto &x_2401) {
    auto x_2402 = x_2400;
    if (x_2402->meta->pass_0_proc_inited) {
      x_2402->meta->bb_0_has_bb_dirtied = true;
      x_2402->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2402);
    } else {
      MetaWriteMetric();
    }
    auto x_2403 = x_2400;
    if (x_2403->meta->pass_1_proc_inited) {
      x_2403->meta->bb_3_has_bb_dirtied = true;
      x_2403->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2403);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1585(const auto &x_2404) {
  return RecordEval([&](const auto &x_2405) {
    if (x_2404->has_prop_height) {
      return x_2404->prop_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit var_modified_x_1583(const auto &x_2408) {
  return RecordOverhead([&](const auto &x_2409) {
    auto x_2410 = x_2408;
    if (x_2410->meta->pass_0_proc_inited) {
      x_2410->meta->bb_0_has_bb_dirtied = true;
      x_2410->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2410);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1580(const auto &x_2411) {
  return RecordEval([&](const auto &x_2412) {
    if (x_2411->last != nullptr) {
      return plus((x_2411->last)->var_finished_intrinsic_height_sum, (x_2411->last)->var_intrinsic_current_line_height);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1578(const auto &x_2417) {
  return RecordOverhead([&](const auto &x_2418) {
    OptionMatch(
        x_2417->next, [&](const auto &x_2420) { return MakeUnit(); },
        [&](const auto &x_2419) {
          auto x_2421 = x_2419;
          if (x_2421->meta->pass_0_proc_inited) {
            x_2421->meta->bb_0_has_bb_dirtied = true;
            x_2421->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2421);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    if (x_2417->next == nullptr) {
      OptionMatch(
          x_2417->parent, [&](const auto &x_2423) { return MakeUnit(); },
          [&](const auto &x_2422) {
            auto x_2424 = x_2422;
            if (x_2424->meta->pass_1_proc_inited) {
              x_2424->meta->bb_3_has_bb_dirtied = true;
              x_2424->meta->bb_3_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1415(x_2424);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1575(const auto &x_2425) {
  return RecordEval([&](const auto &x_2426) {
    return plus((x_2425->prev != nullptr) ? ((x_2425->prev)->var_intrinsic_width_sum) : (0.),
                x_2425->var_intrinsic_width_external);
  });
}
Unit var_modified_x_1573(const auto &x_2431) {
  return RecordOverhead([&](const auto &x_2432) {
    if (x_2431->next == nullptr) {
      OptionMatch(
          x_2431->parent, [&](const auto &x_2434) { return MakeUnit(); },
          [&](const auto &x_2433) {
            auto x_2435 = x_2433;
            if (x_2435->meta->pass_0_proc_inited) {
              x_2435->meta->bb_0_has_bb_dirtied = true;
              x_2435->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_2435);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_2431->next, [&](const auto &x_2437) { return MakeUnit(); },
        [&](const auto &x_2436) {
          auto x_2438 = x_2436;
          if (x_2438->meta->pass_0_proc_inited) {
            x_2438->meta->bb_0_has_bb_dirtied = true;
            x_2438->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2438);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1570(const auto &x_2439) {
  return RecordEval([&](const auto &x_2440) {
    return max(x_2439->var_intrinsic_current_line_width,
               (x_2439->prev != nullptr) ? ((x_2439->prev)->var_intrinsic_width_max) : (0.));
  });
}
Unit var_modified_x_1568(const auto &x_2445) {
  return RecordOverhead([&](const auto &x_2446) {
    auto x_2447 = x_2445;
    if (x_2447->meta->pass_0_proc_inited) {
      x_2447->meta->bb_0_has_bb_dirtied = true;
      x_2447->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2447);
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_2445->next, [&](const auto &x_2449) { return MakeUnit(); },
        [&](const auto &x_2448) {
          auto x_2450 = x_2448;
          if (x_2450->meta->pass_0_proc_inited) {
            x_2450->meta->bb_0_has_bb_dirtied = true;
            x_2450->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2450);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1565(const auto &x_2451) {
  return RecordEval([&](const auto &x_2452) {
    return plus(x_2451->var_intrinsic_width_external,
                ((x_2451->prev != nullptr) && (!(x_2451->prev)->var_line_break))
                    ? ((x_2451->prev)->var_intrinsic_current_line_width)
                    : (0.));
  });
}
Unit var_modified_x_1563(const auto &x_2459) {
  return RecordOverhead([&](const auto &x_2460) {
    auto x_2461 = x_2459;
    if (x_2461->meta->pass_0_proc_inited) {
      x_2461->meta->bb_0_has_bb_dirtied = true;
      x_2461->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2461);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1560(const auto &x_2462) {
  return RecordEval([&](const auto &x_2463) {
    if (eq(x_2462->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_2462->var_intrinsic_width_internal;
    }
  });
}
Unit var_modified_x_1558(const auto &x_2468) {
  return RecordOverhead([&](const auto &x_2469) {
    auto x_2470 = x_2468;
    if (x_2470->meta->pass_0_proc_inited) {
      x_2470->meta->bb_0_has_bb_dirtied = true;
      x_2470->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2470);
    } else {
      MetaWriteMetric();
    }
    auto x_2471 = x_2468;
    if (x_2471->meta->pass_1_proc_inited) {
      x_2471->meta->bb_3_has_bb_dirtied = true;
      x_2471->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2471);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1555(const auto &x_2472) {
  return RecordEval([&](const auto &x_2473) {
    if (eq(x_2472->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_2472->var_inside_svg) {
        return 0.;
      } else {
        if (x_2472->var_disabled) {
          return 0.;
        } else {
          if (neq(x_2472->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_2472->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               (neq(x_2472->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
                (neq(x_2472->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
                 (!(x_2472->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
            if (x_2472->var_width_expr.c == DEStringCase::DHasSuffix_px) {
              return x_2472->var_width_expr.r.a0;
            } else {
              return x_2472->var_width_expr.r.a0;
            }
          } else {
            return plus(
                x_2472->var_children_intrinsic_width,
                (eq(x_2472->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (100.)
                    : ((x_2472->var_is_default_case)
                           ? (0.)
                           : ((eq(x_2472->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_2472->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_2472->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (100.)
                                         : ((eq(x_2472->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_2472->var_has_width_attr &&
                                                    (x_2472->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_2472->var_width_attr_expr.r.a0)
                                                       : (((!x_2472->var_has_width_attr) && x_2472->has_attr_viewBox)
                                                              ? (x_2472->attr_viewBox.r.a2)
                                                              : (mult((x_2472->attr_viewBox.r.a2),
                                                                      divide(x_2472->var_width_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_2472->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_2472->var_has_width_attr)
                                                              ? (x_2472->var_width_attr_expr.r.a0)
                                                              : ((x_2472->has_attr_image_width &&
                                                                  (!x_2472->var_has_height_attr))
                                                                     ? (int_to_float(x_2472->attr_image_width))
                                                                     : ((neq(x_2472->attr_image_height,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(
                                                                                  (x_2472->var_height_attr_expr.r.a0),
                                                                                  divide(
                                                                                      int_to_float(
                                                                                          x_2472->attr_image_width),
                                                                                      int_to_float(
                                                                                          x_2472->attr_image_height))))
                                                                            : (0.))))
                                                       : ((eq(x_2472->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (300.)
                                                              : ((eq(x_2472->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (300.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_1553(const auto &x_2556) {
  return RecordOverhead([&](const auto &x_2557) {
    auto x_2558 = x_2556;
    if (x_2558->meta->pass_0_proc_inited) {
      x_2558->meta->bb_0_has_bb_dirtied = true;
      x_2558->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2558);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1550(const auto &x_2559) {
  return RecordEval([&](const auto &x_2560) {
    if (x_2559->last != nullptr) {
      return (x_2559->last)->var_intrinsic_width_max;
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1548(const auto &x_2563) {
  return RecordOverhead([&](const auto &x_2564) {
    auto x_2565 = x_2563;
    if (x_2565->meta->pass_1_proc_inited) {
      x_2565->meta->bb_3_has_bb_dirtied = true;
      x_2565->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2565);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1545(const auto &x_2566) {
  return RecordEval([&](const auto &x_2567) {
    if (eq(x_2566->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_2566->var_inside_svg || x_2566->var_disabled)) {
      return true;
    } else {
      if ((x_2566->parent != nullptr) && (x_2566->parent)->var_is_flex_row) {
        return false;
      } else {
        if (eq(x_2566->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_2566->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_2566->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_2566->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
               eq(x_2566->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_1543(const auto &x_2592) {
  return RecordOverhead([&](const auto &x_2593) {
    auto x_2594 = x_2592;
    if (x_2594->meta->pass_0_proc_inited) {
      x_2594->meta->bb_0_has_bb_dirtied = true;
      x_2594->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2594);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1540(const auto &x_2595) {
  return RecordEval([&](const auto &x_2596) {
    if (eq(x_2595->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return true;
    } else {
      if (x_2595->var_inside_svg) {
        return true;
      } else {
        if (x_2595->var_disabled) {
          return true;
        } else {if ( eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_html)) || eq(x_2595->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
            return true;
          } else {
            return false;
          }
        }
      }
    }
  });
}
Unit var_modified_x_1538(const auto &x_2603) {
  return RecordOverhead([&](const auto &x_2604) {
    auto x_2605 = x_2603;
    if (x_2605->meta->pass_0_proc_inited) {
      x_2605->meta->bb_0_has_bb_dirtied = true;
      x_2605->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2605);
    } else {
      MetaWriteMetric();
    }
    auto x_2606 = x_2603;
    if (x_2606->meta->pass_1_proc_inited) {
      x_2606->meta->bb_3_has_bb_dirtied = true;
      x_2606->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2606);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1535(const auto &x_2607) {
  return RecordEval([&](const auto &x_2608) {
    if (x_2607->has_prop_width) {
      return x_2607->prop_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit eval_stmts_x_1510(const auto &x_1534) {
  WriteMetric();
  auto x_1536 = eval_expr_x_1535(x_1534);
  if (x_1534->has_var_width_expr) {
    if (!EqualValue(x_1534->var_width_expr, x_1536)) {
      var_modified_x_1538(x_1534);
    }
  }
  x_1534->has_var_width_expr = true;
  x_1534->var_width_expr = AsDEString(x_1536);
  WriteMetric();
  auto x_1541 = eval_expr_x_1540(x_1534);
  if (x_1534->has_var_is_default_case) {
    if (!EqualValue(x_1534->var_is_default_case, x_1541)) {
      var_modified_x_1543(x_1534);
    }
  }
  x_1534->has_var_is_default_case = true;
  x_1534->var_is_default_case = Asbool(x_1541);
  WriteMetric();
  auto x_1546 = eval_expr_x_1545(x_1534);
  if (x_1534->has_var_intrinsic_width_is_width) {
    if (!EqualValue(x_1534->var_intrinsic_width_is_width, x_1546)) {
      var_modified_x_1548(x_1534);
    }
  }
  x_1534->has_var_intrinsic_width_is_width = true;
  x_1534->var_intrinsic_width_is_width = Asbool(x_1546);
  WriteMetric();
  auto x_1551 = eval_expr_x_1550(x_1534);
  if (x_1534->has_var_children_intrinsic_width) {
    if (!EqualValue(x_1534->var_children_intrinsic_width, x_1551)) {
      var_modified_x_1553(x_1534);
    }
  }
  x_1534->has_var_children_intrinsic_width = true;
  x_1534->var_children_intrinsic_width = Asdouble(x_1551);
  WriteMetric();
  auto x_1556 = eval_expr_x_1555(x_1534);
  if (x_1534->has_var_intrinsic_width_internal) {
    if (!EqualValue(x_1534->var_intrinsic_width_internal, x_1556)) {
      var_modified_x_1558(x_1534);
    }
  }
  x_1534->has_var_intrinsic_width_internal = true;
  x_1534->var_intrinsic_width_internal = Asdouble(x_1556);
  WriteMetric();
  auto x_1561 = eval_expr_x_1560(x_1534);
  if (x_1534->has_var_intrinsic_width_external) {
    if (!EqualValue(x_1534->var_intrinsic_width_external, x_1561)) {
      var_modified_x_1563(x_1534);
    }
  }
  x_1534->has_var_intrinsic_width_external = true;
  x_1534->var_intrinsic_width_external = Asdouble(x_1561);
  WriteMetric();
  auto x_1566 = eval_expr_x_1565(x_1534);
  if (x_1534->has_var_intrinsic_current_line_width) {
    if (!EqualValue(x_1534->var_intrinsic_current_line_width, x_1566)) {
      var_modified_x_1568(x_1534);
    }
  }
  x_1534->has_var_intrinsic_current_line_width = true;
  x_1534->var_intrinsic_current_line_width = Asdouble(x_1566);
  WriteMetric();
  auto x_1571 = eval_expr_x_1570(x_1534);
  if (x_1534->has_var_intrinsic_width_max) {
    if (!EqualValue(x_1534->var_intrinsic_width_max, x_1571)) {
      var_modified_x_1573(x_1534);
    }
  }
  x_1534->has_var_intrinsic_width_max = true;
  x_1534->var_intrinsic_width_max = Asdouble(x_1571);
  WriteMetric();
  auto x_1576 = eval_expr_x_1575(x_1534);
  if (x_1534->has_var_intrinsic_width_sum) {
    if (!EqualValue(x_1534->var_intrinsic_width_sum, x_1576)) {
      var_modified_x_1578(x_1534);
    }
  }
  x_1534->has_var_intrinsic_width_sum = true;
  x_1534->var_intrinsic_width_sum = Asdouble(x_1576);
  WriteMetric();
  auto x_1581 = eval_expr_x_1580(x_1534);
  if (x_1534->has_var_children_intrinsic_height) {
    if (!EqualValue(x_1534->var_children_intrinsic_height, x_1581)) {
      var_modified_x_1583(x_1534);
    }
  }
  x_1534->has_var_children_intrinsic_height = true;
  x_1534->var_children_intrinsic_height = Asdouble(x_1581);
  WriteMetric();
  auto x_1586 = eval_expr_x_1585(x_1534);
  if (x_1534->has_var_height_expr) {
    if (!EqualValue(x_1534->var_height_expr, x_1586)) {
      var_modified_x_1588(x_1534);
    }
  }
  x_1534->has_var_height_expr = true;
  x_1534->var_height_expr = AsDEString(x_1586);
  WriteMetric();
  auto x_1591 = eval_expr_x_1590(x_1534);
  if (x_1534->has_var_intrinsic_height_is_height) {
    if (!EqualValue(x_1534->var_intrinsic_height_is_height, x_1591)) {
      var_modified_x_1593(x_1534);
    }
  }
  x_1534->has_var_intrinsic_height_is_height = true;
  x_1534->var_intrinsic_height_is_height = Asbool(x_1591);
  WriteMetric();
  auto x_1596 = eval_expr_x_1595(x_1534);
  if (x_1534->has_var_intrinsic_height_internal) {
    if (!EqualValue(x_1534->var_intrinsic_height_internal, x_1596)) {
      var_modified_x_1598(x_1534);
    }
  }
  x_1534->has_var_intrinsic_height_internal = true;
  x_1534->var_intrinsic_height_internal = Asdouble(x_1596);
  WriteMetric();
  auto x_1601 = eval_expr_x_1600(x_1534);
  if (x_1534->has_var_intrinsic_height_external) {
    if (!EqualValue(x_1534->var_intrinsic_height_external, x_1601)) {
      var_modified_x_1603(x_1534);
    }
  }
  x_1534->has_var_intrinsic_height_external = true;
  x_1534->var_intrinsic_height_external = Asdouble(x_1601);
  WriteMetric();
  auto x_1606 = eval_expr_x_1605(x_1534);
  if (x_1534->has_var_intrinsic_height_sum) {
    if (!EqualValue(x_1534->var_intrinsic_height_sum, x_1606)) {
      var_modified_x_1608(x_1534);
    }
  }
  x_1534->has_var_intrinsic_height_sum = true;
  x_1534->var_intrinsic_height_sum = Asdouble(x_1606);
  WriteMetric();
  auto x_1611 = eval_expr_x_1610(x_1534);
  if (x_1534->has_var_intrinsic_current_line_height) {
    if (!EqualValue(x_1534->var_intrinsic_current_line_height, x_1611)) {
      var_modified_x_1613(x_1534);
    }
  }
  x_1534->has_var_intrinsic_current_line_height = true;
  x_1534->var_intrinsic_current_line_height = Asdouble(x_1611);
  WriteMetric();
  auto x_1616 = eval_expr_x_1615(x_1534);
  if (x_1534->has_var_finished_intrinsic_height_sum) {
    if (!EqualValue(x_1534->var_finished_intrinsic_height_sum, x_1616)) {
      var_modified_x_1618(x_1534);
    }
  }
  x_1534->has_var_finished_intrinsic_height_sum = true;
  x_1534->var_finished_intrinsic_height_sum = Asdouble(x_1616);
  return MakeUnit();
}
Unit eval_stmts_x_1505(const auto &x_1620) {
  WriteMetric();
  auto x_1622 = eval_expr_x_1621(x_1620);
  if (x_1620->has_var_display) {
    if (!EqualValue(x_1620->var_display, x_1622)) {
      var_modified_x_1624(x_1620);
    }
  }
  x_1620->has_var_display = true;
  x_1620->var_display = AsDEString(x_1622);
  WriteMetric();
  auto x_1627 = eval_expr_x_1626(x_1620);
  if (x_1620->has_var_position) {
    if (!EqualValue(x_1620->var_position, x_1627)) {
      var_modified_x_1629(x_1620);
    }
  }
  x_1620->has_var_position = true;
  x_1620->var_position = AsDEString(x_1627);
  WriteMetric();
  auto x_1632 = eval_expr_x_1631(x_1620);
  if (x_1620->has_var_flex_grow) {
    if (!EqualValue(x_1620->var_flex_grow, x_1632)) {
      var_modified_x_1634(x_1620);
    }
  }
  x_1620->has_var_flex_grow = true;
  x_1620->var_flex_grow = Asdouble(x_1632);
  WriteMetric();
  auto x_1637 = eval_expr_x_1636(x_1620);
  if (x_1620->has_var_flex_shrink) {
    if (!EqualValue(x_1620->var_flex_shrink, x_1637)) {
      var_modified_x_1639(x_1620);
    }
  }
  x_1620->has_var_flex_shrink = true;
  x_1620->var_flex_shrink = Asdouble(x_1637);
  WriteMetric();
  auto x_1642 = eval_expr_x_1641(x_1620);
  if (x_1620->has_var_flex_grow_sum) {
    if (!EqualValue(x_1620->var_flex_grow_sum, x_1642)) {
      var_modified_x_1644(x_1620);
    }
  }
  x_1620->has_var_flex_grow_sum = true;
  x_1620->var_flex_grow_sum = Asdouble(x_1642);
  WriteMetric();
  auto x_1647 = eval_expr_x_1646(x_1620);
  if (x_1620->has_var_flex_shrink_sum) {
    if (!EqualValue(x_1620->var_flex_shrink_sum, x_1647)) {
      var_modified_x_1649(x_1620);
    }
  }
  x_1620->has_var_flex_shrink_sum = true;
  x_1620->var_flex_shrink_sum = Asdouble(x_1647);
  WriteMetric();
  auto x_1652 = eval_expr_x_1651(x_1620);
  if (x_1620->has_var_flex_direction) {
    if (!EqualValue(x_1620->var_flex_direction, x_1652)) {
      var_modified_x_1654(x_1620);
    }
  }
  x_1620->has_var_flex_direction = true;
  x_1620->var_flex_direction = AsDEString(x_1652);
  WriteMetric();
  auto x_1657 = eval_expr_x_1656(x_1620);
  if (x_1620->has_var_is_flex_row) {
    if (!EqualValue(x_1620->var_is_flex_row, x_1657)) {
      var_modified_x_1659(x_1620);
    }
  }
  x_1620->has_var_is_flex_row = true;
  x_1620->var_is_flex_row = Asbool(x_1657);
  WriteMetric();
  auto x_1662 = eval_expr_x_1661(x_1620);
  if (x_1620->has_var_is_flex_column) {
    if (!EqualValue(x_1620->var_is_flex_column, x_1662)) {
      var_modified_x_1664(x_1620);
    }
  }
  x_1620->has_var_is_flex_column = true;
  x_1620->var_is_flex_column = Asbool(x_1662);
  WriteMetric();
  auto x_1667 = eval_expr_x_1666(x_1620);
  if (x_1620->has_var_width_attr_expr) {
    if (!EqualValue(x_1620->var_width_attr_expr, x_1667)) {
      var_modified_x_1669(x_1620);
    }
  }
  x_1620->has_var_width_attr_expr = true;
  x_1620->var_width_attr_expr = AsDEString(x_1667);
  WriteMetric();
  auto x_1672 = eval_expr_x_1671(x_1620);
  if (x_1620->has_var_has_width_attr) {
    if (!EqualValue(x_1620->var_has_width_attr, x_1672)) {
      var_modified_x_1674(x_1620);
    }
  }
  x_1620->has_var_has_width_attr = true;
  x_1620->var_has_width_attr = Asbool(x_1672);
  WriteMetric();
  auto x_1677 = eval_expr_x_1676(x_1620);
  if (x_1620->has_var_height_attr_expr) {
    if (!EqualValue(x_1620->var_height_attr_expr, x_1677)) {
      var_modified_x_1679(x_1620);
    }
  }
  x_1620->has_var_height_attr_expr = true;
  x_1620->var_height_attr_expr = AsDEString(x_1677);
  WriteMetric();
  auto x_1682 = eval_expr_x_1681(x_1620);
  if (x_1620->has_var_has_height_attr) {
    if (!EqualValue(x_1620->var_has_height_attr, x_1682)) {
      var_modified_x_1684(x_1620);
    }
  }
  x_1620->has_var_has_height_attr = true;
  x_1620->var_has_height_attr = Asbool(x_1682);
  WriteMetric();
  auto x_1687 = eval_expr_x_1686(x_1620);
  if (x_1620->has_var_is_svg_block) {
    if (!EqualValue(x_1620->var_is_svg_block, x_1687)) {
      var_modified_x_1689(x_1620);
    }
  }
  x_1620->has_var_is_svg_block = true;
  x_1620->var_is_svg_block = Asbool(x_1687);
  WriteMetric();
  auto x_1692 = eval_expr_x_1691(x_1620);
  if (x_1620->has_var_inside_svg) {
    if (!EqualValue(x_1620->var_inside_svg, x_1692)) {
      var_modified_x_1694(x_1620);
    }
  }
  x_1620->has_var_inside_svg = true;
  x_1620->var_inside_svg = Asbool(x_1692);
  WriteMetric();
  auto x_1697 = eval_expr_x_1696(x_1620);
  if (x_1620->has_var_disabled) {
    if (!EqualValue(x_1620->var_disabled, x_1697)) {
      var_modified_x_1699(x_1620);
    }
  }
  x_1620->has_var_disabled = true;
  x_1620->var_disabled = Asbool(x_1697);
  WriteMetric();
  auto x_1702 = eval_expr_x_1701(x_1620);
  if (x_1620->has_var_visible) {
    if (!EqualValue(x_1620->var_visible, x_1702)) {
      var_modified_x_1704(x_1620);
    }
  }
  x_1620->has_var_visible = true;
  x_1620->var_visible = Asbool(x_1702);
  WriteMetric();
  auto x_1707 = eval_expr_x_1706(x_1620);
  if (x_1620->has_var_line_break) {
    if (!EqualValue(x_1620->var_line_break, x_1707)) {
      var_modified_x_1709(x_1620);
    }
  }
  x_1620->has_var_line_break = true;
  x_1620->var_line_break = Asbool(x_1707);
  return MakeUnit();
}
Unit eval_stmts_x_1502(const auto &x_1711) { return MakeUnit(); }
Unit eval_stmts_x_1497(const auto &x_1712) {
  WriteMetric();
  auto x_1714 = eval_expr_x_1713(x_1712);
  if (x_1712->has_var_box_width) {
    if (!EqualValue(x_1712->var_box_width, x_1714)) {
      var_modified_x_1716(x_1712);
    }
  }
  x_1712->has_var_box_width = true;
  x_1712->var_box_width = Asdouble(x_1714);
  WriteMetric();
  auto x_1719 = eval_expr_x_1718(x_1712);
  if (x_1712->has_var_box_height) {
    if (!EqualValue(x_1712->var_box_height, x_1719)) {
      var_modified_x_1721(x_1712);
    }
  }
  x_1712->has_var_box_height = true;
  x_1712->var_box_height = Asdouble(x_1719);
  WriteMetric();
  auto x_1724 = eval_expr_x_1723(x_1712);
  if (x_1712->has_var_left_over) {
    if (!EqualValue(x_1712->var_left_over, x_1724)) {
      var_modified_x_1726(x_1712);
    }
  }
  x_1712->has_var_left_over = true;
  x_1712->var_left_over = Asdouble(x_1724);
  WriteMetric();
  auto x_1729 = eval_expr_x_1728(x_1712);
  if (x_1712->has_var_flex_amount) {
    if (!EqualValue(x_1712->var_flex_amount, x_1729)) {
      var_modified_x_1731(x_1712);
    }
  }
  x_1712->has_var_flex_amount = true;
  x_1712->var_flex_amount = Asdouble(x_1729);
  WriteMetric();
  auto x_1734 = eval_expr_x_1733(x_1712);
  if (x_1712->has_var_flex_unit) {
    if (!EqualValue(x_1712->var_flex_unit, x_1734)) {
      var_modified_x_1736(x_1712);
    }
  }
  x_1712->has_var_flex_unit = true;
  x_1712->var_flex_unit = Asdouble(x_1734);
  WriteMetric();
  auto x_1739 = eval_expr_x_1738(x_1712);
  if (x_1712->has_var_x) {
    if (!EqualValue(x_1712->var_x, x_1739)) {
      var_modified_x_1741(x_1712);
    }
  }
  x_1712->has_var_x = true;
  x_1712->var_x = Asdouble(x_1739);
  WriteMetric();
  auto x_1744 = eval_expr_x_1743(x_1712);
  if (x_1712->has_var_width_internal) {
    if (!EqualValue(x_1712->var_width_internal, x_1744)) {
      var_modified_x_1746(x_1712);
    }
  }
  x_1712->has_var_width_internal = true;
  x_1712->var_width_internal = Asdouble(x_1744);
  WriteMetric();
  auto x_1749 = eval_expr_x_1748(x_1712);
  if (x_1712->has_var_width_external) {
    if (!EqualValue(x_1712->var_width_external, x_1749)) {
      var_modified_x_1751(x_1712);
    }
  }
  x_1712->has_var_width_external = true;
  x_1712->var_width_external = Asdouble(x_1749);
  WriteMetric();
  auto x_1754 = eval_expr_x_1753(x_1712);
  if (x_1712->has_var_y) {
    if (!EqualValue(x_1712->var_y, x_1754)) {
      var_modified_x_1756(x_1712);
    }
  }
  x_1712->has_var_y = true;
  x_1712->var_y = Asdouble(x_1754);
  WriteMetric();
  auto x_1759 = eval_expr_x_1758(x_1712);
  if (x_1712->has_var_height_internal) {
    if (!EqualValue(x_1712->var_height_internal, x_1759)) {
      var_modified_x_1761(x_1712);
    }
  }
  x_1712->has_var_height_internal = true;
  x_1712->var_height_internal = Asdouble(x_1759);
  WriteMetric();
  auto x_1764 = eval_expr_x_1763(x_1712);
  if (x_1712->has_var_height_external) {
    if (!EqualValue(x_1712->var_height_external, x_1764)) {
      var_modified_x_1766(x_1712);
    }
  }
  x_1712->has_var_height_external = true;
  x_1712->var_height_external = Asdouble(x_1764);
  WriteMetric();
  auto x_1769 = eval_expr_x_1768(x_1712);
  if (x_1712->has_var_line_height) {
    if (!EqualValue(x_1712->var_line_height, x_1769)) {
      var_modified_x_1771(x_1712);
    }
  }
  x_1712->has_var_line_height = true;
  x_1712->var_line_height = Asdouble(x_1769);
  return MakeUnit();
}
Unit x_1773(const auto &x_1774) {
  MetaReadMetric();
  if (x_1774->meta->pass_1_recursive_proc_dirtied) {
    if (x_1774->meta->pass_1_proc_inited) {
      if (x_1774->meta->bb_3_bb_dirtied) {
        eval_stmts_x_1497(x_1774);
        x_1774->meta->bb_3_has_bb_dirtied = true;
        x_1774->meta->bb_3_bb_dirtied = false;
      }
      ListIter(x_1774->children, [&](const auto &x_1775) { return x_1773(x_1775); });
      if (x_1774->meta->bb_2_bb_dirtied) {
        eval_stmts_x_1502(x_1774);
        x_1774->meta->bb_2_has_bb_dirtied = true;
        x_1774->meta->bb_2_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1774->meta->pass_1_proc_inited = true;
      eval_stmts_x_1317(x_1774);
    }
  }
  x_1774->meta->pass_1_has_recursive_proc_dirtied = true;
  x_1774->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1465(const auto &x_1774) { return x_1773(x_1774); }
Unit x_1776(const auto &x_1777) {
  MetaReadMetric();
  if (x_1777->meta->pass_0_recursive_proc_dirtied) {
    if (x_1777->meta->pass_0_proc_inited) {
      if (x_1777->meta->bb_1_bb_dirtied) {
        eval_stmts_x_1505(x_1777);
        x_1777->meta->bb_1_has_bb_dirtied = true;
        x_1777->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_1777->children, [&](const auto &x_1778) { return x_1776(x_1778); });
      if (x_1777->meta->bb_0_bb_dirtied) {
        eval_stmts_x_1510(x_1777);
        x_1777->meta->bb_0_has_bb_dirtied = true;
        x_1777->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_1777->meta->pass_0_proc_inited = true;
      eval_stmts_x_1314(x_1777);
    }
  }
  x_1777->meta->pass_0_has_recursive_proc_dirtied = true;
  x_1777->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1464(const auto &x_1777) { return x_1776(x_1777); }
Unit x_1779(const auto &x_1780) {
  MetaWriteMetric();
  if (!x_1780->meta->pass_1_recursive_proc_dirtied) {
    x_1780->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1780->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_1780->parent, [&](const auto &x_1782) { return MakeUnit(); },
        [&](const auto &x_1781) { return x_1779(x_1781); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1415(const auto &x_1780) { return x_1779(x_1780); }
Unit x_1783(const auto &x_1784) {
  MetaWriteMetric();
  if (!x_1784->meta->pass_0_recursive_proc_dirtied) {
    x_1784->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1784->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_1784->parent, [&](const auto &x_1786) { return MakeUnit(); },
        [&](const auto &x_1785) { return x_1783(x_1785); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1375(const auto &x_1784) { return x_1783(x_1784); }
Unit x_1343(const auto &x_1344, const auto &x_1345, const auto &x_1346) {
  auto x_1347 = ListHeadExn(x_1344);
  auto x_1348 = ListTailExn(x_1344);
  if (ListIsEmpty(x_1348)) {
    auto x_1349 = ListSplitN(x_1345->children, x_1347);
    OutputChangeMetric(IntAdd(layout_size_x_1299(ListNthExn(x_1345->children, x_1347)), layout_size_x_1299(x_1346)));
    x_1345->children = ListAppend(Zro(x_1349), Cons(x_1346, ListTailExn(Fst(x_1349))));
    return MakeUnit();
  } else {
    return x_1343(x_1348, ListNthExn(x_1345->children, x_1347), x_1346);
  }
}
Unit replace_layout_node_x_1342(const auto &x_1344, const auto &x_1345, const auto &x_1346) {
  return x_1343(x_1344, x_1345, x_1346);
}
Unit x_1350(const auto &x_1351, const auto &x_1352, const auto &x_1353) {
  auto x_1354 = ListHeadExn(x_1351);
  auto x_1355 = ListTailExn(x_1351);
  if (ListIsEmpty(x_1355)) {
    OutputChangeMetric(layout_size_x_1299(x_1353));
    auto x_1356 = ListSplitN(x_1352->children, x_1354);
    x_1352->children = ListAppend(Zro(x_1356), Cons(x_1353, Fst(x_1356)));
    return MakeUnit();
  } else {
    return x_1350(x_1355, ListNthExn(x_1352->children, x_1354), x_1353);
  }
}
Unit add_layout_node_x_1340(const auto &x_1351, const auto &x_1352, const auto &x_1353) {
  return x_1350(x_1351, x_1352, x_1353);
}
Unit x_1357(const auto &x_1358, const auto &x_1359, const auto &x_1360) {
  auto x_1361 = ListHeadExn(x_1358);
  auto x_1362 = ListTailExn(x_1358);
  if (ListIsEmpty(x_1362)) {
    OutputChangeMetric(layout_size_x_1299(ListNthExn(x_1359->children, x_1361)));
    auto x_1363 = ListSplitN(x_1359->children, x_1361);
    x_1359->children = ListAppend(Zro(x_1363), ListTailExn(Fst(x_1363)));
    return MakeUnit();
  } else {
    return x_1357(x_1362, ListNthExn(x_1359->children, x_1361), x_1360);
  }
}
Unit remove_layout_node_x_1338(const auto &x_1358, const auto &x_1359, const auto &x_1360) {
  return x_1357(x_1358, x_1359, x_1360);
}
Unit x_1364(const auto &x_1365, const auto &x_1366, const auto &x_1367) {
  return ListMatch(
      x_1365,
      [&](const auto &x_1370) {
        auto x_1371 = Zro(x_1367);
        auto x_1372 = Zro(x_1371);
        auto x_1373 = Fst(x_1371);
        auto x_1374 = Fst(x_1367);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2701 = x_1372;
        if (x_2701 == "attributes") {
          std::string x_2702 = x_1373;
          if (x_2702 == "width") {
            WriteMetric();
            x_1366->has_attr_width = true;
            x_1366->attr_width = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_1_has_bb_dirtied = true;
              x_1366->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2702 == "image_height") {
            WriteMetric();
            x_1366->has_attr_image_height = true;
            x_1366->attr_image_height = Asint64_t(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_0_has_bb_dirtied = true;
              x_1366->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2702 == "image_width") {
            WriteMetric();
            x_1366->has_attr_image_width = true;
            x_1366->attr_image_width = Asint64_t(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_0_has_bb_dirtied = true;
              x_1366->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2702 == "height") {
            WriteMetric();
            x_1366->has_attr_height = true;
            x_1366->attr_height = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_1_has_bb_dirtied = true;
              x_1366->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2702 == "viewBox") {
            WriteMetric();
            x_1366->has_attr_viewBox = true;
            x_1366->attr_viewBox = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_0_has_bb_dirtied = true;
              x_1366->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2701 == "properties") {
          std::string x_2703 = x_1373;
          if (x_2703 == "width") {
            WriteMetric();
            x_1366->has_prop_width = true;
            x_1366->prop_width = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_0_has_bb_dirtied = true;
              x_1366->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2703 == "flex-grow") {
            WriteMetric();
            x_1366->has_prop_flex_grow = true;
            x_1366->prop_flex_grow = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_1_has_bb_dirtied = true;
              x_1366->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2703 == "height") {
            WriteMetric();
            x_1366->has_prop_height = true;
            x_1366->prop_height = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_0_has_bb_dirtied = true;
              x_1366->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2703 == "display") {
            WriteMetric();
            x_1366->has_prop_display = true;
            x_1366->prop_display = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_1_has_bb_dirtied = true;
              x_1366->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2703 == "position") {
            WriteMetric();
            x_1366->has_prop_position = true;
            x_1366->prop_position = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_1_has_bb_dirtied = true;
              x_1366->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2703 == "flex-shrink") {
            WriteMetric();
            x_1366->has_prop_flex_shrink = true;
            x_1366->prop_flex_shrink = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_1_has_bb_dirtied = true;
              x_1366->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2703 == "flex-direction") {
            WriteMetric();
            x_1366->has_prop_flex_direction = true;
            x_1366->prop_flex_direction = AsDEString(x_1374);
            if (x_1366->meta->pass_0_proc_inited) {
              x_1366->meta->bb_1_has_bb_dirtied = true;
              x_1366->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1366);
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
      [&](const auto &x_1368, const auto &x_1369) {
        return x_1364(x_1369, ListNthExn(x_1366->children, x_1368), x_1367);
      });
}
Unit insert_value_x_1336(const auto &x_1365, const auto &x_1366, const auto &x_1367) {
  return x_1364(x_1365, x_1366, x_1367);
}
Unit x_1376(const auto &x_1377, const auto &x_1378, const auto &x_1379) {
  return ListMatch(
      x_1377,
      [&](const auto &x_1382) {
        auto x_1383 = Zro(x_1379);
        auto x_1384 = Fst(x_1379);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2704 = x_1383;
        if (x_2704 == "attributes") {
          std::string x_2705 = x_1384;
          if (x_2705 == "width") {
            WriteMetric();
            x_1378->has_attr_width = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_1_has_bb_dirtied = true;
              x_1378->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2705 == "image_height") {
            WriteMetric();
            x_1378->has_attr_image_height = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_0_has_bb_dirtied = true;
              x_1378->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2705 == "image_width") {
            WriteMetric();
            x_1378->has_attr_image_width = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_0_has_bb_dirtied = true;
              x_1378->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2705 == "height") {
            WriteMetric();
            x_1378->has_attr_height = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_1_has_bb_dirtied = true;
              x_1378->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2705 == "viewBox") {
            WriteMetric();
            x_1378->has_attr_viewBox = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_0_has_bb_dirtied = true;
              x_1378->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2704 == "properties") {
          std::string x_2706 = x_1384;
          if (x_2706 == "width") {
            WriteMetric();
            x_1378->has_prop_width = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_0_has_bb_dirtied = true;
              x_1378->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2706 == "flex-grow") {
            WriteMetric();
            x_1378->has_prop_flex_grow = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_1_has_bb_dirtied = true;
              x_1378->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2706 == "height") {
            WriteMetric();
            x_1378->has_prop_height = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_0_has_bb_dirtied = true;
              x_1378->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2706 == "display") {
            WriteMetric();
            x_1378->has_prop_display = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_1_has_bb_dirtied = true;
              x_1378->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2706 == "position") {
            WriteMetric();
            x_1378->has_prop_position = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_1_has_bb_dirtied = true;
              x_1378->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2706 == "flex-shrink") {
            WriteMetric();
            x_1378->has_prop_flex_shrink = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_1_has_bb_dirtied = true;
              x_1378->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2706 == "flex-direction") {
            WriteMetric();
            x_1378->has_prop_flex_direction = false;
            if (x_1378->meta->pass_0_proc_inited) {
              x_1378->meta->bb_1_has_bb_dirtied = true;
              x_1378->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1378);
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
      [&](const auto &x_1380, const auto &x_1381) {
        return x_1376(x_1381, ListNthExn(x_1378->children, x_1380), x_1379);
      });
}
Unit delete_value_x_1334(const auto &x_1377, const auto &x_1378, const auto &x_1379) {
  return x_1376(x_1377, x_1378, x_1379);
}
Unit x_1385(const auto &x_1386, const auto &x_1387, const auto &x_1388) {
  return ListMatch(
      x_1386,
      [&](const auto &x_1391) {
        auto x_1392 = Zro(x_1388);
        auto x_1393 = Zro(x_1392);
        auto x_1394 = Fst(x_1392);
        auto x_1395 = Fst(x_1388);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2707 = x_1393;
        if (x_2707 == "attributes") {
          std::string x_2708 = x_1394;
          if (x_2708 == "width") {
            WriteMetric();
            x_1387->has_attr_width = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_attr_width = true;
            x_1387->attr_width = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2708 == "image_height") {
            WriteMetric();
            x_1387->has_attr_image_height = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_attr_image_height = true;
            x_1387->attr_image_height = Asint64_t(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2708 == "image_width") {
            WriteMetric();
            x_1387->has_attr_image_width = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_attr_image_width = true;
            x_1387->attr_image_width = Asint64_t(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2708 == "height") {
            WriteMetric();
            x_1387->has_attr_height = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_attr_height = true;
            x_1387->attr_height = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2708 == "viewBox") {
            WriteMetric();
            x_1387->has_attr_viewBox = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_attr_viewBox = true;
            x_1387->attr_viewBox = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2707 == "properties") {
          std::string x_2709 = x_1394;
          if (x_2709 == "width") {
            WriteMetric();
            x_1387->has_prop_width = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_prop_width = true;
            x_1387->prop_width = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2709 == "flex-grow") {
            WriteMetric();
            x_1387->has_prop_flex_grow = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_prop_flex_grow = true;
            x_1387->prop_flex_grow = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2709 == "height") {
            WriteMetric();
            x_1387->has_prop_height = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_prop_height = true;
            x_1387->prop_height = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_0_has_bb_dirtied = true;
              x_1387->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2709 == "display") {
            WriteMetric();
            x_1387->has_prop_display = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_prop_display = true;
            x_1387->prop_display = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2709 == "position") {
            WriteMetric();
            x_1387->has_prop_position = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_prop_position = true;
            x_1387->prop_position = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2709 == "flex-shrink") {
            WriteMetric();
            x_1387->has_prop_flex_shrink = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_prop_flex_shrink = true;
            x_1387->prop_flex_shrink = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_2709 == "flex-direction") {
            WriteMetric();
            x_1387->has_prop_flex_direction = false;
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_1387->has_prop_flex_direction = true;
            x_1387->prop_flex_direction = AsDEString(x_1395);
            if (x_1387->meta->pass_0_proc_inited) {
              x_1387->meta->bb_1_has_bb_dirtied = true;
              x_1387->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_1387);
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
      [&](const auto &x_1389, const auto &x_1390) {
        return x_1385(x_1390, ListNthExn(x_1387->children, x_1389), x_1388);
      });
}
Unit replace_value_x_1332(const auto &x_1386, const auto &x_1387, const auto &x_1388) {
  return x_1385(x_1386, x_1387, x_1388);
}
Unit x_1396(const auto &x_1397, const auto &x_1398, const auto &x_1399) {
  auto x_1400 = ListHeadExn(x_1397);
  auto x_1401 = ListTailExn(x_1397);
  if (ListIsEmpty(x_1401)) {
    InputChangeMetric(IntAdd(node_size_x_1300(ListNthExn(x_1398->children, x_1400)), node_size_x_1300(x_1399)));
    auto x_1402 = ListSplitN(x_1398->children, x_1400);
    auto x_1403 = Zro(x_1402);
    auto x_1404 = Fst(x_1402);
    auto x_1405 = ListHeadExn(x_1404);
    auto x_1406 = ListTailExn(x_1404);
    x_1398->children = ListAppend(x_1403, x_1406);
    OptionMatch(
        x_1405->prev, [&](const auto &x_1408) { return MakeUnit(); },
        [&](const auto &x_1407) {
          x_1407->next = ToPath(x_1405->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1405->next, [&](const auto &x_1410) { return MakeUnit(); },
        [&](const auto &x_1409) {
          x_1409->prev = ToPath(x_1405->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1403)) {
      x_1398->first = ToPath(ListHead(x_1406));
    }
    if (ListIsEmpty(x_1406)) {
      x_1398->last = ToPath(ListLast(x_1403));
    }
    OptionMatch(
        x_1405->next, [&](const auto &x_1412) { return MakeUnit(); },
        [&](const auto &x_1411) {
          if (x_1411->meta->pass_0_proc_inited) {
            x_1411->meta->bb_1_has_bb_dirtied = true;
            x_1411->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1411);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1398->children)) {
      if (x_1398->meta->pass_0_proc_inited) {
        x_1398->meta->bb_0_has_bb_dirtied = true;
        x_1398->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1406)) {
      if (x_1398->meta->pass_0_proc_inited) {
        x_1398->meta->bb_0_has_bb_dirtied = true;
        x_1398->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1405->next, [&](const auto &x_1414) { return MakeUnit(); },
        [&](const auto &x_1413) {
          if (x_1413->meta->pass_0_proc_inited) {
            x_1413->meta->bb_0_has_bb_dirtied = true;
            x_1413->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1413);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1398->children)) {
      if (x_1398->meta->pass_1_proc_inited) {
        x_1398->meta->bb_3_has_bb_dirtied = true;
        x_1398->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1406)) {
      if (x_1398->meta->pass_1_proc_inited) {
        x_1398->meta->bb_3_has_bb_dirtied = true;
        x_1398->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1405->next, [&](const auto &x_1417) { return MakeUnit(); },
        [&](const auto &x_1416) {
          if (x_1416->meta->pass_1_proc_inited) {
            x_1416->meta->bb_3_has_bb_dirtied = true;
            x_1416->meta->bb_3_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1415(x_1416);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    auto x_1418 = ListSplitN(x_1398->children, x_1400);
    auto x_1419 = Zro(x_1418);
    auto x_1420 = Fst(x_1418);
    x_1398->children = ListAppend(x_1419, Cons(x_1399, x_1420));
    if (ListIsEmpty(x_1419)) {
      x_1398->first = x_1399.get();
    }
    if (ListIsEmpty(x_1420)) {
      x_1398->last = x_1399.get();
    }
    OptionMatch(
        ListLast(x_1419),
        [&](const auto &x_1422) {
          x_1399->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1421) {
          x_1399->prev = x_1421.get();
          x_1421->next = x_1399.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1420),
        [&](const auto &x_1424) {
          x_1399->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1423) {
          x_1399->next = x_1423.get();
          x_1423->prev = x_1399.get();
          return MakeUnit();
        });
    x_1399->parent = x_1398.get();
    RecordOverhead([&](const auto &x_1425) {
      x_1399->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1399->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1375(x_1399);
    });
    OptionMatch(
        x_1399->next, [&](const auto &x_1427) { return MakeUnit(); },
        [&](const auto &x_1426) {
          if (x_1426->meta->pass_0_proc_inited) {
            x_1426->meta->bb_1_has_bb_dirtied = true;
            x_1426->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1426);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1398->children)) {
      if (x_1398->meta->pass_0_proc_inited) {
        x_1398->meta->bb_0_has_bb_dirtied = true;
        x_1398->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1420)) {
      if (x_1398->meta->pass_0_proc_inited) {
        x_1398->meta->bb_0_has_bb_dirtied = true;
        x_1398->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1399->next, [&](const auto &x_1429) { return MakeUnit(); },
        [&](const auto &x_1428) {
          if (x_1428->meta->pass_0_proc_inited) {
            x_1428->meta->bb_0_has_bb_dirtied = true;
            x_1428->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1428);
          } else {
            return MetaWriteMetric();
          }
        });
    RecordOverhead([&](const auto &x_1430) {
      x_1399->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1399->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1415(x_1399);
    });
    if (ListIsSingleton(x_1398->children)) {
      if (x_1398->meta->pass_1_proc_inited) {
        x_1398->meta->bb_3_has_bb_dirtied = true;
        x_1398->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1420)) {
      if (x_1398->meta->pass_1_proc_inited) {
        x_1398->meta->bb_3_has_bb_dirtied = true;
        x_1398->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1398);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1399->next, [&](const auto &x_1432) { return MakeUnit(); },
        [&](const auto &x_1431) {
          if (x_1431->meta->pass_1_proc_inited) {
            x_1431->meta->bb_3_has_bb_dirtied = true;
            x_1431->meta->bb_3_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1415(x_1431);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_1396(x_1401, ListNthExn(x_1398->children, x_1400), x_1399);
  }
}
Unit replace_node_x_1330(const auto &x_1397, const auto &x_1398, const auto &x_1399) {
  return x_1396(x_1397, x_1398, x_1399);
}
Unit x_1433(const auto &x_1434) {
  ListIter2(x_1434->children, [&](const auto &x_1435, const auto &x_1436) {
    x_1435->parent = x_1434.get();
    x_1436->parent = x_1434.get();
    x_1435->next = x_1436.get();
    x_1436->prev = x_1435.get();
    x_1433(x_1435);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1434->children),
      [&](const auto &x_1438) {
        x_1434->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1437) {
        x_1434->first = x_1437.get();
        x_1437->parent = x_1434.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1434->children),
      [&](const auto &x_1440) {
        x_1434->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1439) {
        x_1434->last = x_1439.get();
        x_1439->parent = x_1434.get();
        x_1433(x_1439);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1328(const auto &x_1434) { return x_1433(x_1434); }
Unit x_1441(const auto &x_1442, const auto &x_1443, const auto &x_1444) {
  auto x_1445 = ListHeadExn(x_1442);
  auto x_1446 = ListTailExn(x_1442);
  if (ListIsEmpty(x_1446)) {
    InputChangeMetric(node_size_x_1300(ListNthExn(x_1443->children, x_1445)));
    auto x_1447 = ListSplitN(x_1443->children, x_1445);
    auto x_1448 = Zro(x_1447);
    auto x_1449 = Fst(x_1447);
    auto x_1450 = ListHeadExn(x_1449);
    auto x_1451 = ListTailExn(x_1449);
    x_1443->children = ListAppend(x_1448, x_1451);
    OptionMatch(
        x_1450->prev, [&](const auto &x_1453) { return MakeUnit(); },
        [&](const auto &x_1452) {
          x_1452->next = ToPath(x_1450->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1450->next, [&](const auto &x_1455) { return MakeUnit(); },
        [&](const auto &x_1454) {
          x_1454->prev = ToPath(x_1450->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1448)) {
      x_1443->first = ToPath(ListHead(x_1451));
    }
    if (ListIsEmpty(x_1451)) {
      x_1443->last = ToPath(ListLast(x_1448));
    }
    OptionMatch(
        x_1450->next, [&](const auto &x_1457) { return MakeUnit(); },
        [&](const auto &x_1456) {
          if (x_1456->meta->pass_0_proc_inited) {
            x_1456->meta->bb_1_has_bb_dirtied = true;
            x_1456->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1456);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1443->children)) {
      if (x_1443->meta->pass_0_proc_inited) {
        x_1443->meta->bb_0_has_bb_dirtied = true;
        x_1443->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1443);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1451)) {
      if (x_1443->meta->pass_0_proc_inited) {
        x_1443->meta->bb_0_has_bb_dirtied = true;
        x_1443->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1443);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1450->next, [&](const auto &x_1459) { return MakeUnit(); },
        [&](const auto &x_1458) {
          if (x_1458->meta->pass_0_proc_inited) {
            x_1458->meta->bb_0_has_bb_dirtied = true;
            x_1458->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1458);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1443->children)) {
      if (x_1443->meta->pass_1_proc_inited) {
        x_1443->meta->bb_3_has_bb_dirtied = true;
        x_1443->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1443);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1451)) {
      if (x_1443->meta->pass_1_proc_inited) {
        x_1443->meta->bb_3_has_bb_dirtied = true;
        x_1443->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1443);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1450->next, [&](const auto &x_1461) { return MakeUnit(); },
        [&](const auto &x_1460) {
          if (x_1460->meta->pass_1_proc_inited) {
            x_1460->meta->bb_3_has_bb_dirtied = true;
            x_1460->meta->bb_3_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1415(x_1460);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1441(x_1446, ListNthExn(x_1443->children, x_1445), x_1444);
  }
}
Unit remove_node_x_1326(const auto &x_1442, const auto &x_1443, const auto &x_1444) {
  return x_1441(x_1442, x_1443, x_1444);
}
Unit recalculate_x_1324(const auto &x_1462) {
  return RecordOverhead([&](const auto &x_1463) {
    recalculate_internal_x_1464(x_1462);
    recalculate_internal_x_1465(x_1462);
    return MakeUnit();
  });
}
Unit x_1466(const auto &x_1467, const auto &x_1468, const auto &x_1469) {
  auto x_1470 = ListHeadExn(x_1467);
  auto x_1471 = ListTailExn(x_1467);
  if (ListIsEmpty(x_1471)) {
    InputChangeMetric(node_size_x_1300(x_1469));
    auto x_1472 = ListSplitN(x_1468->children, x_1470);
    auto x_1473 = Zro(x_1472);
    auto x_1474 = Fst(x_1472);
    x_1468->children = ListAppend(x_1473, Cons(x_1469, x_1474));
    if (ListIsEmpty(x_1473)) {
      x_1468->first = x_1469.get();
    }
    if (ListIsEmpty(x_1474)) {
      x_1468->last = x_1469.get();
    }
    OptionMatch(
        ListLast(x_1473),
        [&](const auto &x_1476) {
          x_1469->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1475) {
          x_1469->prev = x_1475.get();
          x_1475->next = x_1469.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1474),
        [&](const auto &x_1478) {
          x_1469->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1477) {
          x_1469->next = x_1477.get();
          x_1477->prev = x_1469.get();
          return MakeUnit();
        });
    x_1469->parent = x_1468.get();
    RecordOverhead([&](const auto &x_1479) {
      x_1469->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1469->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1375(x_1469);
    });
    OptionMatch(
        x_1469->next, [&](const auto &x_1481) { return MakeUnit(); },
        [&](const auto &x_1480) {
          if (x_1480->meta->pass_0_proc_inited) {
            x_1480->meta->bb_1_has_bb_dirtied = true;
            x_1480->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1480);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1468->children)) {
      if (x_1468->meta->pass_0_proc_inited) {
        x_1468->meta->bb_0_has_bb_dirtied = true;
        x_1468->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1468);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1474)) {
      if (x_1468->meta->pass_0_proc_inited) {
        x_1468->meta->bb_0_has_bb_dirtied = true;
        x_1468->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1468);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1469->next, [&](const auto &x_1483) { return MakeUnit(); },
        [&](const auto &x_1482) {
          if (x_1482->meta->pass_0_proc_inited) {
            x_1482->meta->bb_0_has_bb_dirtied = true;
            x_1482->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1482);
          } else {
            return MetaWriteMetric();
          }
        });
    RecordOverhead([&](const auto &x_1484) {
      x_1469->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1469->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1415(x_1469);
    });
    if (ListIsSingleton(x_1468->children)) {
      if (x_1468->meta->pass_1_proc_inited) {
        x_1468->meta->bb_3_has_bb_dirtied = true;
        x_1468->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1468);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1474)) {
      if (x_1468->meta->pass_1_proc_inited) {
        x_1468->meta->bb_3_has_bb_dirtied = true;
        x_1468->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1468);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1469->next, [&](const auto &x_1486) { return MakeUnit(); },
        [&](const auto &x_1485) {
          if (x_1485->meta->pass_1_proc_inited) {
            x_1485->meta->bb_3_has_bb_dirtied = true;
            x_1485->meta->bb_3_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1415(x_1485);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1466(x_1471, ListNthExn(x_1468->children, x_1470), x_1469);
  }
}
Unit add_node_x_1323(const auto &x_1467, const auto &x_1468, const auto &x_1469) {
  return x_1466(x_1467, x_1468, x_1469);
}
Unit x_1487(const auto &x_1488) {
  ListIter2(x_1488->children, [&](const auto &x_1489, const auto &x_1490) {
    x_1489->parent = x_1488.get();
    x_1490->parent = x_1488.get();
    x_1489->next = x_1490.get();
    x_1490->prev = x_1489.get();
    x_1487(x_1489);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1488->children),
      [&](const auto &x_1492) {
        x_1488->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1491) {
        x_1488->first = x_1491.get();
        x_1491->parent = x_1488.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1488->children),
      [&](const auto &x_1494) {
        x_1488->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1493) {
        x_1488->last = x_1493.get();
        x_1493->parent = x_1488.get();
        x_1487(x_1493);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1321(const auto &x_1488) { return x_1487(x_1488); }
Unit eval_stmts_x_1317(const auto &x_1495) {
  RecordOverhead([&](const auto &x_1496) {
    x_1495->meta->bb_3_has_bb_dirtied = true;
    x_1495->meta->bb_3_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1497(x_1495);
  ListIter(x_1495->children, [&](const auto &x_1498) {
    RecordOverhead([&](const auto &x_1499) {
      x_1498->meta->pass_1_proc_inited = true;
      return MakeUnit();
    });
    RecordOverhead([&](const auto &x_1500) {
      x_1498->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1498->meta->pass_1_recursive_proc_dirtied = false;
      return MakeUnit();
    });
    eval_stmts_x_1317(x_1498);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_1501) {
    x_1495->meta->bb_2_has_bb_dirtied = true;
    x_1495->meta->bb_2_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1502(x_1495);
  return MakeUnit();
}
Unit eval_stmts_x_1314(const auto &x_1503) {
  RecordOverhead([&](const auto &x_1504) {
    x_1503->meta->bb_1_has_bb_dirtied = true;
    x_1503->meta->bb_1_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1505(x_1503);
  ListIter(x_1503->children, [&](const auto &x_1506) {
    RecordOverhead([&](const auto &x_1507) {
      x_1506->meta->pass_0_proc_inited = true;
      return MakeUnit();
    });
    RecordOverhead([&](const auto &x_1508) {
      x_1506->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1506->meta->pass_0_recursive_proc_dirtied = false;
      return MakeUnit();
    });
    eval_stmts_x_1314(x_1506);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_1509) {
    x_1503->meta->bb_0_has_bb_dirtied = true;
    x_1503->meta->bb_0_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1510(x_1503);
  return MakeUnit();
}
Unit x_1511(const auto &x_1512) {
  ListIter2(x_1512->children, [&](const auto &x_1513, const auto &x_1514) {
    x_1513->parent = x_1512.get();
    x_1514->parent = x_1512.get();
    x_1513->next = x_1514.get();
    x_1514->prev = x_1513.get();
    x_1511(x_1513);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1512->children),
      [&](const auto &x_1516) {
        x_1512->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1515) {
        x_1512->first = x_1515.get();
        x_1515->parent = x_1512.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1512->children),
      [&](const auto &x_1518) {
        x_1512->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1517) {
        x_1512->last = x_1517.get();
        x_1517->parent = x_1512.get();
        x_1511(x_1517);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1309(const auto &x_1512) { return x_1511(x_1512); }
int64_t x_1519(const auto &x_1520) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1520->children, [&](const auto &x_1521) { return x_1519(x_1521); }));
}
int64_t node_size_x_1300(const auto &x_1520) { return x_1519(x_1520); }
int64_t x_1522(const auto &x_1523) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1523->children, [&](const auto &x_1524) { return x_1522(x_1524); }));
}
int64_t layout_size_x_1299(const auto &x_1523) { return x_1522(x_1523); }
LayoutNode x_1525(const auto &x_1526) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_1526)), [&](const auto &x_1527) { return x_1525(x_1527); }));
}
LayoutNode json_to_layout_node_x_1298(const auto &x_1526) { return x_1525(x_1526); }
Node x_1528(const auto &x_1529) {
  return MakeNode(x_1529->name, x_1529->attr, x_1529->prop, x_1529->extern_id,
                  ListMap(x_1529->children, [&](const auto &x_1530) { return x_1528(x_1530); }));
}
Node node_to_fs_node_x_1297(const auto &x_1529) { return x_1528(x_1529); }
Node x_1531(const auto &x_1532) {
  return MakeNode(
      JsonToString(JsonMember("name", x_1532)), JsonToDict(JsonMember("attributes", x_1532)),
      JsonToDict(JsonMember("properties", x_1532)), JsonToInt(JsonMember("id", x_1532)),
      ListMap(JsonToList(JsonMember("children", x_1532)), [&](const auto &x_1533) { return x_1531(x_1533); }));
}
Node json_to_node_aux_x_1296(const auto &x_1532) { return x_1531(x_1532); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_1301) {
    PrintEndline("RUNNING DB_D");
    return WithInFile("command.json", [&](const auto &x_1302) {
      auto x_1303 = MakeRef(static_cast<int64_t>(0));
      auto x_1305 = JsonOfString(InputLine(x_1302));
      auto x_1306 = JsonOfString(InputLine(x_1302));
      auto x_1307 = MakeStack();
      PushStack(x_1307, x_1305);
      PushStack(x_1307, x_1306);
      Assert(StringEqual(JsonToString(JsonMember("name", x_1305)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_1306)), "layout_init"));
      auto x_1310 = [&]() {
        auto x_1308 = json_to_node_aux_x_1296(JsonMember("node", x_1305));
        x_1308->parent = nullptr;
        x_1308->prev = nullptr;
        x_1308->next = nullptr;
        set_children_relation_x_1309(x_1308);
        return x_1308;
      }();
      auto x_1311 = json_to_layout_node_x_1298(JsonMember("node", x_1306));
      OutputChangeMetric(layout_size_x_1299(x_1311));
      InputChangeMetric(node_size_x_1300(x_1310));
      RecordOverhead([&](const auto &x_1312) {
        x_1310->meta->pass_0_proc_inited = true;
        return MakeUnit();
      });
      RecordOverhead([&](const auto &x_1313) {
        x_1310->meta->pass_0_has_recursive_proc_dirtied = true;
        x_1310->meta->pass_0_recursive_proc_dirtied = false;
        return MakeUnit();
      });
      eval_stmts_x_1314(x_1310);
      RecordOverhead([&](const auto &x_1315) {
        x_1310->meta->pass_1_proc_inited = true;
        return MakeUnit();
      });
      RecordOverhead([&](const auto &x_1316) {
        x_1310->meta->pass_1_has_recursive_proc_dirtied = true;
        x_1310->meta->pass_1_recursive_proc_dirtied = false;
        return MakeUnit();
      });
      eval_stmts_x_1317(x_1310);
      JsonToChannel(x_1301, [&]() {
        auto x_2710 = FreshJson();
        WriteJson(x_2710, "name", "DB_D");
        WriteJson(x_2710, "diff_num", ReadRef(x_1303));
        WriteJson(x_2710, "read_count", MetricReadCount());
        WriteJson(x_2710, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_2710, "write_count", MetricWriteCount());
        WriteJson(x_2710, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_2710, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_2710, "input_change_count", MetricInputChangeCount());
        WriteJson(x_2710, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_2710, "overhead_time", MetricOverheadTime());
        WriteJson(x_2710, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_2710, "eval_time", MetricEvalCount());
        WriteJson(x_2710, "html", "");
        WriteJson(x_2710, "command", StackToList(x_1307));
        return x_2710;
      }());
      OutputString(x_1301, "\n");
      ClearStack(x_1307);
      WriteRef(x_1303, IntAdd(ReadRef(x_1303), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_1302, [&](const auto &x_1318) {
        auto x_1319 = JsonOfString(x_1318);
        PushStack(x_1307, x_1319);
        std::string x_2712 = JsonToString(JsonMember("name", x_1319));
        if (x_2712 == "add") {
          return add_node_x_1323(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1322) { return JsonToInt(x_1322); }),
              x_1310, [&]() {
                auto x_1320 = json_to_node_aux_x_1296(JsonMember("node", x_1319));
                x_1320->parent = nullptr;
                x_1320->prev = nullptr;
                x_1320->next = nullptr;
                set_children_relation_x_1321(x_1320);
                return x_1320;
              }());
        } else if (x_2712 == "recalculate") {
          recalculate_x_1324(x_1310);
          JsonToChannel(x_1301, [&]() {
            auto x_2711 = FreshJson();
            WriteJson(x_2711, "name", "DB_D");
            WriteJson(x_2711, "diff_num", ReadRef(x_1303));
            WriteJson(x_2711, "read_count", MetricReadCount());
            WriteJson(x_2711, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_2711, "write_count", MetricWriteCount());
            WriteJson(x_2711, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_2711, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_2711, "input_change_count", MetricInputChangeCount());
            WriteJson(x_2711, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_2711, "overhead_time", MetricOverheadTime());
            WriteJson(x_2711, "overhead_l2m", MetricOverheadL2m());
            WriteJson(x_2711, "eval_time", MetricEvalCount());
            WriteJson(x_2711, "html", "");
            WriteJson(x_2711, "command", StackToList(x_1307));
            return x_2711;
          }());
          OutputString(x_1301, "\n");
          ClearStack(x_1307);
          WriteRef(x_1303, IntAdd(ReadRef(x_1303), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_2712 == "remove") {
          return remove_node_x_1326(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1325) { return JsonToInt(x_1325); }),
              x_1310, MakeUnit());
        } else if (x_2712 == "replace") {
          return replace_node_x_1330(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1329) { return JsonToInt(x_1329); }),
              x_1310, [&]() {
                auto x_1327 = json_to_node_aux_x_1296(JsonMember("node", x_1319));
                x_1327->parent = nullptr;
                x_1327->prev = nullptr;
                x_1327->next = nullptr;
                set_children_relation_x_1328(x_1327);
                return x_1327;
              }());
        } else if (x_2712 == "replace_value") {
          return replace_value_x_1332(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1331) { return JsonToInt(x_1331); }),
              x_1310,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1319)), JsonToString(JsonMember("key", x_1319))),
                       JsonToValue(JsonMember("value", x_1319))));
        } else if (x_2712 == "delete_value") {
          return delete_value_x_1334(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1333) { return JsonToInt(x_1333); }),
              x_1310, MakePair(JsonToString(JsonMember("type", x_1319)), JsonToString(JsonMember("key", x_1319))));
        } else if (x_2712 == "insert_value") {
          return insert_value_x_1336(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1335) { return JsonToInt(x_1335); }),
              x_1310,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1319)), JsonToString(JsonMember("key", x_1319))),
                       JsonToValue(JsonMember("value", x_1319))));
        } else if (x_2712 == "layout_remove") {
          return remove_layout_node_x_1338(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1337) { return JsonToInt(x_1337); }),
              x_1311, MakeUnit());
        } else if (x_2712 == "layout_add") {
          return add_layout_node_x_1340(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1339) { return JsonToInt(x_1339); }),
              x_1311, json_to_layout_node_x_1298(JsonMember("node", x_1319)));
        } else if (x_2712 == "layout_replace") {
          return replace_layout_node_x_1342(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1341) { return JsonToInt(x_1341); }),
              x_1311, json_to_layout_node_x_1298(JsonMember("node", x_1319)));
        } else if (x_2712 == "layout_info_changed") {
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