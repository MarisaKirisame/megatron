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
Unit var_modified_x_1770(const auto &x_1786);
auto eval_expr_x_1767(const auto &x_1791);
Unit var_modified_x_1765(const auto &x_1801);
auto eval_expr_x_1762(const auto &x_1804);
Unit var_modified_x_1760(const auto &x_1810);
auto eval_expr_x_1757(const auto &x_1814);
Unit var_modified_x_1755(const auto &x_1842);
auto eval_expr_x_1752(const auto &x_1848);
Unit var_modified_x_1750(const auto &x_1862);
auto eval_expr_x_1747(const auto &x_1867);
Unit var_modified_x_1745(const auto &x_1873);
auto eval_expr_x_1742(const auto &x_1877);
Unit var_modified_x_1740(const auto &x_1905);
auto eval_expr_x_1737(const auto &x_1911);
Unit var_modified_x_1735(const auto &x_1923);
auto eval_expr_x_1732(const auto &x_1926);
Unit var_modified_x_1730(const auto &x_1938);
auto eval_expr_x_1727(const auto &x_1941);
Unit var_modified_x_1725(const auto &x_1949);
auto eval_expr_x_1722(const auto &x_1953);
Unit var_modified_x_1720(const auto &x_1965);
auto eval_expr_x_1717(const auto &x_1968);
Unit var_modified_x_1715(const auto &x_1972);
auto eval_expr_x_1712(const auto &x_1975);
Unit var_modified_x_1708(const auto &x_1979);
auto eval_expr_x_1705(const auto &x_1989);
Unit var_modified_x_1703(const auto &x_2035);
auto eval_expr_x_1700(const auto &x_2038);
Unit var_modified_x_1698(const auto &x_2048);
auto eval_expr_x_1695(const auto &x_2053);
Unit var_modified_x_1693(const auto &x_2057);
auto eval_expr_x_1690(const auto &x_2062);
Unit var_modified_x_1688(const auto &x_2068);
auto eval_expr_x_1685(const auto &x_2071);
Unit var_modified_x_1683(const auto &x_2073);
auto eval_expr_x_1680(const auto &x_2076);
Unit var_modified_x_1678(const auto &x_2080);
auto eval_expr_x_1675(const auto &x_2084);
Unit var_modified_x_1673(const auto &x_2096);
auto eval_expr_x_1670(const auto &x_2099);
Unit var_modified_x_1668(const auto &x_2103);
auto eval_expr_x_1665(const auto &x_2107);
Unit var_modified_x_1663(const auto &x_2119);
auto eval_expr_x_1660(const auto &x_2123);
Unit var_modified_x_1658(const auto &x_2137);
auto eval_expr_x_1655(const auto &x_2142);
Unit var_modified_x_1653(const auto &x_2158);
auto eval_expr_x_1650(const auto &x_2161);
Unit var_modified_x_1648(const auto &x_2165);
auto eval_expr_x_1645(const auto &x_2171);
Unit var_modified_x_1643(const auto &x_2177);
auto eval_expr_x_1640(const auto &x_2183);
Unit var_modified_x_1638(const auto &x_2189);
auto eval_expr_x_1635(const auto &x_2193);
Unit var_modified_x_1633(const auto &x_2197);
auto eval_expr_x_1630(const auto &x_2201);
Unit var_modified_x_1628(const auto &x_2205);
auto eval_expr_x_1625(const auto &x_2210);
Unit var_modified_x_1623(const auto &x_2214);
auto eval_expr_x_1620(const auto &x_2219);
Unit var_modified_x_1617(const auto &x_2223);
auto eval_expr_x_1614(const auto &x_2231);
Unit var_modified_x_1612(const auto &x_2247);
auto eval_expr_x_1609(const auto &x_2255);
Unit var_modified_x_1607(const auto &x_2263);
auto eval_expr_x_1604(const auto &x_2271);
Unit var_modified_x_1602(const auto &x_2277);
auto eval_expr_x_1599(const auto &x_2280);
Unit var_modified_x_1597(const auto &x_2286);
auto eval_expr_x_1594(const auto &x_2290);
Unit var_modified_x_1592(const auto &x_2370);
auto eval_expr_x_1589(const auto &x_2373);
Unit var_modified_x_1587(const auto &x_2399);
auto eval_expr_x_1584(const auto &x_2403);
Unit var_modified_x_1582(const auto &x_2407);
auto eval_expr_x_1579(const auto &x_2410);
Unit var_modified_x_1577(const auto &x_2416);
auto eval_expr_x_1574(const auto &x_2424);
Unit var_modified_x_1572(const auto &x_2430);
auto eval_expr_x_1569(const auto &x_2438);
Unit var_modified_x_1567(const auto &x_2444);
auto eval_expr_x_1564(const auto &x_2450);
Unit var_modified_x_1562(const auto &x_2458);
auto eval_expr_x_1559(const auto &x_2461);
Unit var_modified_x_1557(const auto &x_2467);
auto eval_expr_x_1554(const auto &x_2471);
Unit var_modified_x_1552(const auto &x_2555);
auto eval_expr_x_1549(const auto &x_2558);
Unit var_modified_x_1547(const auto &x_2562);
auto eval_expr_x_1544(const auto &x_2565);
Unit var_modified_x_1542(const auto &x_2591);
auto eval_expr_x_1539(const auto &x_2594);
Unit var_modified_x_1537(const auto &x_2602);
auto eval_expr_x_1534(const auto &x_2606);
Unit eval_stmts_x_1509(const auto &x_1533);
Unit eval_stmts_x_1504(const auto &x_1619);
Unit eval_stmts_x_1501(const auto &x_1710);
Unit eval_stmts_x_1496(const auto &x_1711);
Unit x_1772(const auto &x_1773);
Unit x_1775(const auto &x_1776);
Unit x_1778(const auto &x_1779);
Unit x_1782(const auto &x_1783);
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
Unit x_1465(const auto &x_1466, const auto &x_1467, const auto &x_1468);
Unit x_1486(const auto &x_1487);
Unit eval_stmts_x_1317(const auto &x_1494);
Unit eval_stmts_x_1314(const auto &x_1502);
Unit x_1510(const auto &x_1511);
int64_t x_1518(const auto &x_1519);
int64_t x_1521(const auto &x_1522);
LayoutNode x_1524(const auto &x_1525);
Node x_1527(const auto &x_1528);
Node x_1530(const auto &x_1531);
Unit var_modified_x_1770(const auto &x_1786) {
  return RecordOverhead([&](const auto &x_1787) {
    OptionMatch(
        x_1786->next, [&](const auto &x_1789) { return MakeUnit(); },
        [&](const auto &x_1788) {
          auto x_1790 = x_1788;
          if (x_1790->meta->pass_1_proc_inited) {
            x_1790->meta->bb_3_has_bb_dirtied = true;
            x_1790->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1790);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1767(const auto &x_1791) {
  return RecordEval([&](const auto &x_1792) {
    if ((x_1791->prev != nullptr) && (!(x_1791->prev)->var_line_break)) {
      return max(x_1791->var_height_external, (x_1791->prev)->var_line_height);
    } else {
      return x_1791->var_height_external;
    }
  });
}
Unit var_modified_x_1765(const auto &x_1801) {
  return RecordOverhead([&](const auto &x_1802) {
    auto x_1803 = x_1801;
    if (x_1803->meta->pass_1_proc_inited) {
      x_1803->meta->bb_3_has_bb_dirtied = true;
      x_1803->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1803);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1762(const auto &x_1804) {
  return RecordEval([&](const auto &x_1805) {
    if (eq(x_1804->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_1804->var_height_internal;
    }
  });
}
Unit var_modified_x_1760(const auto &x_1810) {
  return RecordOverhead([&](const auto &x_1811) {
    auto x_1812 = x_1810;
    if (x_1812->meta->pass_1_proc_inited) {
      x_1812->meta->bb_3_has_bb_dirtied = true;
      x_1812->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1812);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_1810->children, [&](const auto &x_1813) {
      if (x_1813->meta->pass_1_proc_inited) {
        x_1813->meta->bb_3_has_bb_dirtied = true;
        x_1813->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1813);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1757(const auto &x_1814) {
  return RecordEval([&](const auto &x_1815) {
    if (x_1814->var_intrinsic_height_is_height) {
      return x_1814->var_intrinsic_height_internal;
    } else {
      if ((x_1814->parent != nullptr) && (x_1814->parent)->var_is_flex_column) {
        return plus(x_1814->var_intrinsic_height_internal,
                    mult(x_1814->var_flex_amount, (x_1814->parent)->var_flex_unit));
      } else {
        if (x_1814->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_1814->var_box_height, divide(x_1814->var_height_expr.r.a0, 100.));
        } else {
          return max(x_1814->var_box_height, x_1814->var_intrinsic_height_internal);
        }
      }
    }
  });
}
Unit var_modified_x_1755(const auto &x_1842) {
  return RecordOverhead([&](const auto &x_1843) {
    ListIter(x_1842->children, [&](const auto &x_1844) {
      if (x_1844->meta->pass_1_proc_inited) {
        x_1844->meta->bb_3_has_bb_dirtied = true;
        x_1844->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1844);
      } else {
        return MetaWriteMetric();
      }
    });
    OptionMatch(
        x_1842->next, [&](const auto &x_1846) { return MakeUnit(); },
        [&](const auto &x_1845) {
          auto x_1847 = x_1845;
          if (x_1847->meta->pass_1_proc_inited) {
            x_1847->meta->bb_3_has_bb_dirtied = true;
            x_1847->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1847);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1752(const auto &x_1848) {
  return RecordEval([&](const auto &x_1849) {
    if (x_1848->prev != nullptr) {
      if (x_1848->var_line_break || (x_1848->prev)->var_line_break) {
        return plus((x_1848->prev)->var_y, (x_1848->prev)->var_line_height);
      } else {
        return (x_1848->prev)->var_y;
      }
    } else {
      if (x_1848->parent != nullptr) {
        return (x_1848->parent)->var_y;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_1750(const auto &x_1862) {
  return RecordOverhead([&](const auto &x_1863) {
    OptionMatch(
        x_1862->next, [&](const auto &x_1865) { return MakeUnit(); },
        [&](const auto &x_1864) {
          auto x_1866 = x_1864;
          if (x_1866->meta->pass_1_proc_inited) {
            x_1866->meta->bb_3_has_bb_dirtied = true;
            x_1866->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1866);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1747(const auto &x_1867) {
  return RecordEval([&](const auto &x_1868) {
    if (eq(x_1867->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_1867->var_width_internal;
    }
  });
}
Unit var_modified_x_1745(const auto &x_1873) {
  return RecordOverhead([&](const auto &x_1874) {
    auto x_1875 = x_1873;
    if (x_1875->meta->pass_1_proc_inited) {
      x_1875->meta->bb_3_has_bb_dirtied = true;
      x_1875->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1875);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_1873->children, [&](const auto &x_1876) {
      if (x_1876->meta->pass_1_proc_inited) {
        x_1876->meta->bb_3_has_bb_dirtied = true;
        x_1876->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1876);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1742(const auto &x_1877) {
  return RecordEval([&](const auto &x_1878) {
    if (x_1877->var_intrinsic_width_is_width) {
      return x_1877->var_intrinsic_width_internal;
    } else {
      if ((x_1877->parent != nullptr) && (x_1877->parent)->var_is_flex_row) {
        return plus(x_1877->var_intrinsic_width_internal,
                    mult(x_1877->var_flex_amount, (x_1877->parent)->var_flex_unit));
      } else {
        if (x_1877->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_1877->var_box_width, divide(x_1877->var_width_expr.r.a0, 100.));
        } else {
          return max(x_1877->var_box_width, x_1877->var_intrinsic_width_internal);
        }
      }
    }
  });
}
Unit var_modified_x_1740(const auto &x_1905) {
  return RecordOverhead([&](const auto &x_1906) {
    ListIter(x_1905->children, [&](const auto &x_1907) {
      if (x_1907->meta->pass_1_proc_inited) {
        x_1907->meta->bb_3_has_bb_dirtied = true;
        x_1907->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1907);
      } else {
        return MetaWriteMetric();
      }
    });
    OptionMatch(
        x_1905->next, [&](const auto &x_1909) { return MakeUnit(); },
        [&](const auto &x_1908) {
          auto x_1910 = x_1908;
          if (x_1910->meta->pass_1_proc_inited) {
            x_1910->meta->bb_3_has_bb_dirtied = true;
            x_1910->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1910);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1737(const auto &x_1911) {
  return RecordEval([&](const auto &x_1912) {
    if (x_1911->prev != nullptr) {
      if (x_1911->var_line_break || (x_1911->prev)->var_line_break) {
        return 0.;
      } else {
        return plus((x_1911->prev)->var_x, (x_1911->prev)->var_width_external);
      }
    } else {
      if (x_1911->parent != nullptr) {
        return (x_1911->parent)->var_x;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_1735(const auto &x_1923) {
  return RecordOverhead([&](const auto &x_1924) {
    ListIter(x_1923->children, [&](const auto &x_1925) {
      if (x_1925->meta->pass_1_proc_inited) {
        x_1925->meta->bb_3_has_bb_dirtied = true;
        x_1925->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1925);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1732(const auto &x_1926) {
  return RecordEval([&](const auto &x_1927) {
    if (gt(x_1926->var_left_over, 0.)) {
      return divide(x_1926->var_left_over, x_1926->var_flex_grow_sum);
    } else {
      return divide(x_1926->var_left_over, x_1926->var_flex_shrink_sum);
    }
  });
}
Unit var_modified_x_1730(const auto &x_1938) {
  return RecordOverhead([&](const auto &x_1939) {
    auto x_1940 = x_1938;
    if (x_1940->meta->pass_1_proc_inited) {
      x_1940->meta->bb_3_has_bb_dirtied = true;
      x_1940->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1940);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1727(const auto &x_1941) {
  return RecordEval([&](const auto &x_1942) {
    if ((x_1941->parent != nullptr) && gt((x_1941->parent)->var_left_over, 0.)) {
      return x_1941->var_flex_grow;
    } else {
      return x_1941->var_flex_shrink;
    }
  });
}
Unit var_modified_x_1725(const auto &x_1949) {
  return RecordOverhead([&](const auto &x_1950) {
    auto x_1951 = x_1949;
    if (x_1951->meta->pass_1_proc_inited) {
      x_1951->meta->bb_3_has_bb_dirtied = true;
      x_1951->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1951);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_1949->children, [&](const auto &x_1952) {
      if (x_1952->meta->pass_1_proc_inited) {
        x_1952->meta->bb_3_has_bb_dirtied = true;
        x_1952->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_1952);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1722(const auto &x_1953) {
  return RecordEval([&](const auto &x_1954) {
    if (x_1953->var_is_flex_row) {
      return minus(x_1953->var_box_width, (x_1953->last != nullptr) ? ((x_1953->last)->var_intrinsic_width_sum) : (0.));
    } else {
      return minus(x_1953->var_box_height,
                   (x_1953->last != nullptr) ? ((x_1953->last)->var_intrinsic_height_sum) : (0.));
    }
  });
}
Unit var_modified_x_1720(const auto &x_1965) {
  return RecordOverhead([&](const auto &x_1966) {
    auto x_1967 = x_1965;
    if (x_1967->meta->pass_1_proc_inited) {
      x_1967->meta->bb_3_has_bb_dirtied = true;
      x_1967->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1967);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1717(const auto &x_1968) {
  return RecordEval([&](const auto &x_1969) {
    if (x_1968->parent != nullptr) {
      return (x_1968->parent)->var_height_internal;
    } else {
      return 1080.;
    }
  });
}
Unit var_modified_x_1715(const auto &x_1972) {
  return RecordOverhead([&](const auto &x_1973) {
    auto x_1974 = x_1972;
    if (x_1974->meta->pass_1_proc_inited) {
      x_1974->meta->bb_3_has_bb_dirtied = true;
      x_1974->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1974);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1712(const auto &x_1975) {
  return RecordEval([&](const auto &x_1976) {
    if (x_1975->parent != nullptr) {
      return (x_1975->parent)->var_width_internal;
    } else {
      return 1920.;
    }
  });
}
Unit var_modified_x_1708(const auto &x_1979) {
  return RecordOverhead([&](const auto &x_1980) {
    auto x_1981 = x_1979;
    if (x_1981->meta->pass_0_proc_inited) {
      x_1981->meta->bb_0_has_bb_dirtied = true;
      x_1981->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_1981);
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_1979->next, [&](const auto &x_1983) { return MakeUnit(); },
        [&](const auto &x_1982) {
          auto x_1984 = x_1982;
          if (x_1984->meta->pass_0_proc_inited) {
            x_1984->meta->bb_0_has_bb_dirtied = true;
            x_1984->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_1984);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_1985 = x_1979;
    if (x_1985->meta->pass_1_proc_inited) {
      x_1985->meta->bb_3_has_bb_dirtied = true;
      x_1985->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_1985);
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_1979->next, [&](const auto &x_1987) { return MakeUnit(); },
        [&](const auto &x_1986) {
          auto x_1988 = x_1986;
          if (x_1988->meta->pass_1_proc_inited) {
            x_1988->meta->bb_3_has_bb_dirtied = true;
            x_1988->meta->bb_3_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1415(x_1988);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1705(const auto &x_1989) {
  return RecordEval([&](const auto &x_1990) {
    if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return false;
    } else {
      if (eq(x_1989->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
        return false;
      } else {
        if ((x_1989->parent != nullptr) &&
            (eq((x_1989->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
             eq((x_1989->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
          return true;
        } else {
          if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
            return true;
          } else {
            if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
              return false;
            } else {
              if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
                return false;
              } else {
                if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                  if (eq(x_1989->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                    return false;
                  } else {
                    if (eq(x_1989->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                      return false;
                    } else {
                      if (eq(x_1989->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                        return true;
                      } else {
                        return true;
                      }
                    }
                  }
                } else {
                  if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                    return false;
                  } else {
                    if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                      return false;
                    } else {
                      if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                        return true;
                      } else {
                        if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                          return true;
                        } else {
                          if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                            return true;
                          } else {
                            if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                              return false;
                            } else {
                              if (eq(x_1989->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_1703(const auto &x_2035) {
  return RecordOverhead([&](const auto &x_2036) {
    ListIter(x_2035->children, [&](const auto &x_2037) {
      if (x_2037->meta->pass_0_proc_inited) {
        x_2037->meta->bb_1_has_bb_dirtied = true;
        x_2037->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2037);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1700(const auto &x_2038) {
  return RecordEval([&](const auto &x_2039) {
    return (((!(x_2038->parent != nullptr)) || (x_2038->parent)->var_visible) &&
            (neq(x_2038->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
             ((!x_2038->var_inside_svg) && (!x_2038->var_disabled))));
  });
}
Unit var_modified_x_1698(const auto &x_2048) {
  return RecordOverhead([&](const auto &x_2049) {
    auto x_2050 = x_2048;
    if (x_2050->meta->pass_0_proc_inited) {
      x_2050->meta->bb_1_has_bb_dirtied = true;
      x_2050->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2050);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2048->children, [&](const auto &x_2051) {
      if (x_2051->meta->pass_0_proc_inited) {
        x_2051->meta->bb_1_has_bb_dirtied = true;
        x_2051->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2051);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2052 = x_2048;
    if (x_2052->meta->pass_0_proc_inited) {
      x_2052->meta->bb_0_has_bb_dirtied = true;
      x_2052->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2052);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1695(const auto &x_2053) {
  return RecordEval([&](const auto &x_2054) {
    if (eq(x_2053->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
      return true;
    } else {
      return ((x_2053->parent != nullptr) && (x_2053->parent)->var_disabled);
    }
  });
}
Unit var_modified_x_1693(const auto &x_2057) {
  return RecordOverhead([&](const auto &x_2058) {
    auto x_2059 = x_2057;
    if (x_2059->meta->pass_0_proc_inited) {
      x_2059->meta->bb_1_has_bb_dirtied = true;
      x_2059->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2059);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2057->children, [&](const auto &x_2060) {
      if (x_2060->meta->pass_0_proc_inited) {
        x_2060->meta->bb_1_has_bb_dirtied = true;
        x_2060->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2060);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2061 = x_2057;
    if (x_2061->meta->pass_0_proc_inited) {
      x_2061->meta->bb_0_has_bb_dirtied = true;
      x_2061->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2061);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1690(const auto &x_2062) {
  return RecordEval([&](const auto &x_2063) {
    return ((x_2062->parent != nullptr) && ((x_2062->parent)->var_is_svg_block || (x_2062->parent)->var_inside_svg));
  });
}
Unit var_modified_x_1688(const auto &x_2068) {
  return RecordOverhead([&](const auto &x_2069) {
    ListIter(x_2068->children, [&](const auto &x_2070) {
      if (x_2070->meta->pass_0_proc_inited) {
        x_2070->meta->bb_1_has_bb_dirtied = true;
        x_2070->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2070);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1685(const auto &x_2071) {
  return RecordEval([&](const auto &x_2072) { return eq(x_2071->name, DEStringLit(DEStringCase::DSTRING_svg)); });
}
Unit var_modified_x_1683(const auto &x_2073) {
  return RecordOverhead([&](const auto &x_2074) {
    auto x_2075 = x_2073;
    if (x_2075->meta->pass_0_proc_inited) {
      x_2075->meta->bb_0_has_bb_dirtied = true;
      x_2075->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2075);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1680(const auto &x_2076) {
  return RecordEval(
      [&](const auto &x_2077) { return neq(x_2076->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_1678(const auto &x_2080) {
  return RecordOverhead([&](const auto &x_2081) {
    auto x_2082 = x_2080;
    if (x_2082->meta->pass_0_proc_inited) {
      x_2082->meta->bb_1_has_bb_dirtied = true;
      x_2082->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2082);
    } else {
      MetaWriteMetric();
    }
    auto x_2083 = x_2080;
    if (x_2083->meta->pass_0_proc_inited) {
      x_2083->meta->bb_0_has_bb_dirtied = true;
      x_2083->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2083);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1675(const auto &x_2084) {
  return RecordEval([&](const auto &x_2085) {
    if (!x_2084->has_attr_height) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_2084->attr_height.c == DEStringCase::DStringIsFloat) ||
          (x_2084->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_2084->attr_height;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_1673(const auto &x_2096) {
  return RecordOverhead([&](const auto &x_2097) {
    auto x_2098 = x_2096;
    if (x_2098->meta->pass_0_proc_inited) {
      x_2098->meta->bb_0_has_bb_dirtied = true;
      x_2098->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2098);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1670(const auto &x_2099) {
  return RecordEval(
      [&](const auto &x_2100) { return neq(x_2099->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_1668(const auto &x_2103) {
  return RecordOverhead([&](const auto &x_2104) {
    auto x_2105 = x_2103;
    if (x_2105->meta->pass_0_proc_inited) {
      x_2105->meta->bb_1_has_bb_dirtied = true;
      x_2105->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2105);
    } else {
      MetaWriteMetric();
    }
    auto x_2106 = x_2103;
    if (x_2106->meta->pass_0_proc_inited) {
      x_2106->meta->bb_0_has_bb_dirtied = true;
      x_2106->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2106);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1665(const auto &x_2107) {
  return RecordEval([&](const auto &x_2108) {
    if (!x_2107->has_attr_width) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_2107->attr_width.c == DEStringCase::DStringIsFloat) ||
          (x_2107->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_2107->attr_width;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_1663(const auto &x_2119) {
  return RecordOverhead([&](const auto &x_2120) {
    ListIter(x_2119->children, [&](const auto &x_2121) {
      if (x_2121->meta->pass_0_proc_inited) {
        x_2121->meta->bb_0_has_bb_dirtied = true;
        x_2121->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2121);
      } else {
        return MetaWriteMetric();
      }
    });
    ListIter(x_2119->children, [&](const auto &x_2122) {
      if (x_2122->meta->pass_1_proc_inited) {
        x_2122->meta->bb_3_has_bb_dirtied = true;
        x_2122->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_2122);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1660(const auto &x_2123) {
  return RecordEval([&](const auto &x_2124) {
    if ((x_2123->parent != nullptr) &&
        (eq((x_2123->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_2123->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_2123->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
          eq((x_2123->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_1658(const auto &x_2137) {
  return RecordOverhead([&](const auto &x_2138) {
    ListIter(x_2137->children, [&](const auto &x_2139) {
      if (x_2139->meta->pass_0_proc_inited) {
        x_2139->meta->bb_0_has_bb_dirtied = true;
        x_2139->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2139);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2140 = x_2137;
    if (x_2140->meta->pass_1_proc_inited) {
      x_2140->meta->bb_3_has_bb_dirtied = true;
      x_2140->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2140);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2137->children, [&](const auto &x_2141) {
      if (x_2141->meta->pass_1_proc_inited) {
        x_2141->meta->bb_3_has_bb_dirtied = true;
        x_2141->meta->bb_3_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1415(x_2141);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1655(const auto &x_2142) {
  return RecordEval([&](const auto &x_2143) {
    if ((x_2142->parent != nullptr) &&
        (eq((x_2142->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_2142->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_2142->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
          eq((x_2142->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_1653(const auto &x_2158) {
  return RecordOverhead([&](const auto &x_2159) {
    ListIter(x_2158->children, [&](const auto &x_2160) {
      if (x_2160->meta->pass_0_proc_inited) {
        x_2160->meta->bb_1_has_bb_dirtied = true;
        x_2160->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2160);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_1650(const auto &x_2161) {
  return RecordEval([&](const auto &x_2162) {
    if (x_2161->has_prop_flex_direction) {
      return x_2161->prop_flex_direction;
    } else {
      return DEStringLit(DEStringCase::DSTRING_);
    }
  });
}
Unit var_modified_x_1648(const auto &x_2165) {
  return RecordOverhead([&](const auto &x_2166) {
    OptionMatch(
        x_2165->next, [&](const auto &x_2168) { return MakeUnit(); },
        [&](const auto &x_2167) {
          auto x_2169 = x_2167;
          if (x_2169->meta->pass_0_proc_inited) {
            x_2169->meta->bb_1_has_bb_dirtied = true;
            x_2169->meta->bb_1_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2169);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_2170 = x_2165;
    if (x_2170->meta->pass_1_proc_inited) {
      x_2170->meta->bb_3_has_bb_dirtied = true;
      x_2170->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2170);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1645(const auto &x_2171) {
  return RecordEval([&](const auto &x_2172) {
    return plus((x_2171->prev != nullptr) ? ((x_2171->prev)->var_flex_shrink_sum) : (0.), x_2171->var_flex_shrink);
  });
}
Unit var_modified_x_1643(const auto &x_2177) {
  return RecordOverhead([&](const auto &x_2178) {
    OptionMatch(
        x_2177->next, [&](const auto &x_2180) { return MakeUnit(); },
        [&](const auto &x_2179) {
          auto x_2181 = x_2179;
          if (x_2181->meta->pass_0_proc_inited) {
            x_2181->meta->bb_1_has_bb_dirtied = true;
            x_2181->meta->bb_1_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2181);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    auto x_2182 = x_2177;
    if (x_2182->meta->pass_1_proc_inited) {
      x_2182->meta->bb_3_has_bb_dirtied = true;
      x_2182->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2182);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1640(const auto &x_2183) {
  return RecordEval([&](const auto &x_2184) {
    return plus((x_2183->prev != nullptr) ? ((x_2183->prev)->var_flex_grow_sum) : (0.), x_2183->var_flex_grow);
  });
}
Unit var_modified_x_1638(const auto &x_2189) {
  return RecordOverhead([&](const auto &x_2190) {
    auto x_2191 = x_2189;
    if (x_2191->meta->pass_0_proc_inited) {
      x_2191->meta->bb_1_has_bb_dirtied = true;
      x_2191->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2191);
    } else {
      MetaWriteMetric();
    }
    auto x_2192 = x_2189;
    if (x_2192->meta->pass_1_proc_inited) {
      x_2192->meta->bb_3_has_bb_dirtied = true;
      x_2192->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2192);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1635(const auto &x_2193) {
  return RecordEval([&](const auto &x_2194) {
    if (x_2193->has_prop_flex_shrink) {
      return (x_2193->prop_flex_shrink.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1633(const auto &x_2197) {
  return RecordOverhead([&](const auto &x_2198) {
    auto x_2199 = x_2197;
    if (x_2199->meta->pass_0_proc_inited) {
      x_2199->meta->bb_1_has_bb_dirtied = true;
      x_2199->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2199);
    } else {
      MetaWriteMetric();
    }
    auto x_2200 = x_2197;
    if (x_2200->meta->pass_1_proc_inited) {
      x_2200->meta->bb_3_has_bb_dirtied = true;
      x_2200->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2200);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1630(const auto &x_2201) {
  return RecordEval([&](const auto &x_2202) {
    if (x_2201->has_prop_flex_grow) {
      return (x_2201->prop_flex_grow.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1628(const auto &x_2205) {
  return RecordOverhead([&](const auto &x_2206) {
    auto x_2207 = x_2205;
    if (x_2207->meta->pass_0_proc_inited) {
      x_2207->meta->bb_1_has_bb_dirtied = true;
      x_2207->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2207);
    } else {
      MetaWriteMetric();
    }
    auto x_2208 = x_2205;
    if (x_2208->meta->pass_0_proc_inited) {
      x_2208->meta->bb_0_has_bb_dirtied = true;
      x_2208->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2208);
    } else {
      MetaWriteMetric();
    }
    auto x_2209 = x_2205;
    if (x_2209->meta->pass_1_proc_inited) {
      x_2209->meta->bb_3_has_bb_dirtied = true;
      x_2209->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2209);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1625(const auto &x_2210) {
  return RecordEval([&](const auto &x_2211) {
    if (x_2210->has_prop_position) {
      return x_2210->prop_position;
    } else {
      return DEStringLit(DEStringCase::DSTRING_static);
    }
  });
}
Unit var_modified_x_1623(const auto &x_2214) {
  return RecordOverhead([&](const auto &x_2215) {
    auto x_2216 = x_2214;
    if (x_2216->meta->pass_0_proc_inited) {
      x_2216->meta->bb_1_has_bb_dirtied = true;
      x_2216->meta->bb_1_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2216);
    } else {
      MetaWriteMetric();
    }
    ListIter(x_2214->children, [&](const auto &x_2217) {
      if (x_2217->meta->pass_0_proc_inited) {
        x_2217->meta->bb_1_has_bb_dirtied = true;
        x_2217->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_1375(x_2217);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_2218 = x_2214;
    if (x_2218->meta->pass_0_proc_inited) {
      x_2218->meta->bb_0_has_bb_dirtied = true;
      x_2218->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2218);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1620(const auto &x_2219) {
  return RecordEval([&](const auto &x_2220) {
    if (x_2219->has_prop_display) {
      return x_2219->prop_display;
    } else {
      return DEStringLit(DEStringCase::DSTRING_block);
    }
  });
}
Unit var_modified_x_1617(const auto &x_2223) {
  return RecordOverhead([&](const auto &x_2224) {
    if (x_2223->next == nullptr) {
      OptionMatch(
          x_2223->parent, [&](const auto &x_2226) { return MakeUnit(); },
          [&](const auto &x_2225) {
            auto x_2227 = x_2225;
            if (x_2227->meta->pass_0_proc_inited) {
              x_2227->meta->bb_0_has_bb_dirtied = true;
              x_2227->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_2227);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_2223->next, [&](const auto &x_2229) { return MakeUnit(); },
        [&](const auto &x_2228) {
          auto x_2230 = x_2228;
          if (x_2230->meta->pass_0_proc_inited) {
            x_2230->meta->bb_0_has_bb_dirtied = true;
            x_2230->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2230);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1614(const auto &x_2231) {
  return RecordEval([&](const auto &x_2232) {
    if (x_2231->prev != nullptr) {
      if (x_2231->var_line_break) {
        return plus((x_2231->prev)->var_finished_intrinsic_height_sum,
                    plus((x_2231->prev)->var_intrinsic_current_line_height, x_2231->var_intrinsic_height_external));
      } else {
        return (x_2231->prev)->var_finished_intrinsic_height_sum;
      }
    } else {
      if (x_2231->var_line_break) {
        return x_2231->var_intrinsic_height_external;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_1612(const auto &x_2247) {
  return RecordOverhead([&](const auto &x_2248) {
    if (x_2247->next == nullptr) {
      OptionMatch(
          x_2247->parent, [&](const auto &x_2250) { return MakeUnit(); },
          [&](const auto &x_2249) {
            auto x_2251 = x_2249;
            if (x_2251->meta->pass_0_proc_inited) {
              x_2251->meta->bb_0_has_bb_dirtied = true;
              x_2251->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_2251);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_2247->next, [&](const auto &x_2253) { return MakeUnit(); },
        [&](const auto &x_2252) {
          auto x_2254 = x_2252;
          if (x_2254->meta->pass_0_proc_inited) {
            x_2254->meta->bb_0_has_bb_dirtied = true;
            x_2254->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2254);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1609(const auto &x_2255) {
  return RecordEval([&](const auto &x_2256) {
    if (x_2255->var_line_break) {
      return 0.;
    } else {
      return max(x_2255->var_intrinsic_height_external,
                 (x_2255->prev != nullptr) ? ((x_2255->prev)->var_intrinsic_current_line_height) : (0.));
    }
  });
}
Unit var_modified_x_1607(const auto &x_2263) {
  return RecordOverhead([&](const auto &x_2264) {
    OptionMatch(
        x_2263->next, [&](const auto &x_2266) { return MakeUnit(); },
        [&](const auto &x_2265) {
          auto x_2267 = x_2265;
          if (x_2267->meta->pass_0_proc_inited) {
            x_2267->meta->bb_0_has_bb_dirtied = true;
            x_2267->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2267);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    if (x_2263->next == nullptr) {
      OptionMatch(
          x_2263->parent, [&](const auto &x_2269) { return MakeUnit(); },
          [&](const auto &x_2268) {
            auto x_2270 = x_2268;
            if (x_2270->meta->pass_1_proc_inited) {
              x_2270->meta->bb_3_has_bb_dirtied = true;
              x_2270->meta->bb_3_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1415(x_2270);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1604(const auto &x_2271) {
  return RecordEval([&](const auto &x_2272) {
    return plus((x_2271->prev != nullptr) ? ((x_2271->prev)->var_intrinsic_height_sum) : (0.),
                x_2271->var_intrinsic_height_external);
  });
}
Unit var_modified_x_1602(const auto &x_2277) {
  return RecordOverhead([&](const auto &x_2278) {
    auto x_2279 = x_2277;
    if (x_2279->meta->pass_0_proc_inited) {
      x_2279->meta->bb_0_has_bb_dirtied = true;
      x_2279->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2279);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1599(const auto &x_2280) {
  return RecordEval([&](const auto &x_2281) {
    if (eq(x_2280->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_2280->var_intrinsic_height_internal;
    }
  });
}
Unit var_modified_x_1597(const auto &x_2286) {
  return RecordOverhead([&](const auto &x_2287) {
    auto x_2288 = x_2286;
    if (x_2288->meta->pass_0_proc_inited) {
      x_2288->meta->bb_0_has_bb_dirtied = true;
      x_2288->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2288);
    } else {
      MetaWriteMetric();
    }
    auto x_2289 = x_2286;
    if (x_2289->meta->pass_1_proc_inited) {
      x_2289->meta->bb_3_has_bb_dirtied = true;
      x_2289->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2289);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1594(const auto &x_2290) {
  return RecordEval([&](const auto &x_2291) {
    if (eq(x_2290->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_2290->var_inside_svg) {
        return 0.;
      } else {
        if (x_2290->var_disabled) {
          return 0.;
        } else {
          if (neq(x_2290->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_2290->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               neq(x_2290->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
            if (x_2290->var_height_expr.c == DEStringCase::DHasSuffix_px) {
              return x_2290->var_height_expr.r.a0;
            } else {
              if (x_2290->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
                return x_2290->var_height_expr.r.a0;
              } else {
                return x_2290->var_height_expr.r.a0;
              }
            }
          } else {
            return plus(
                x_2290->var_children_intrinsic_height,
                (eq(x_2290->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (10.)
                    : ((x_2290->var_is_default_case)
                           ? (0.)
                           : ((eq(x_2290->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_2290->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_2290->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (10.)
                                         : ((eq(x_2290->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_2290->var_has_height_attr &&
                                                    (x_2290->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_2290->var_height_attr_expr.r.a0)
                                                       : ((x_2290->has_attr_viewBox)
                                                              ? (x_2290->attr_viewBox.r.a3)
                                                              : (mult(
                                                                    (x_2290->attr_viewBox.r.a3),
                                                                    divide(x_2290->var_height_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_2290->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_2290->var_has_height_attr)
                                                              ? (x_2290->var_height_attr_expr.r.a0)
                                                              : ((x_2290->has_attr_image_height &&
                                                                  (!x_2290->var_has_width_attr))
                                                                     ? (int_to_float(x_2290->attr_image_height))
                                                                     : ((neq(x_2290->attr_image_width,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult((x_2290->var_width_attr_expr.r.a0),
                                                                                    divide(
                                                                                        int_to_float(
                                                                                            x_2290->attr_image_height),
                                                                                        int_to_float(
                                                                                            x_2290->attr_image_width))))
                                                                            : (0.))))
                                                       : ((eq(x_2290->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (150.)
                                                              : ((eq(x_2290->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (150.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_1592(const auto &x_2370) {
  return RecordOverhead([&](const auto &x_2371) {
    auto x_2372 = x_2370;
    if (x_2372->meta->pass_1_proc_inited) {
      x_2372->meta->bb_3_has_bb_dirtied = true;
      x_2372->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2372);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1589(const auto &x_2373) {
  return RecordEval([&](const auto &x_2374) {
    if (eq(x_2373->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_2373->var_inside_svg || x_2373->var_disabled)) {
      return true;
    } else {
      if ((x_2373->parent != nullptr) && (x_2373->parent)->var_is_flex_column) {
        return false;
      } else {
        if (eq(x_2373->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_2373->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_2373->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_2373->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
               eq(x_2373->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_1587(const auto &x_2399) {
  return RecordOverhead([&](const auto &x_2400) {
    auto x_2401 = x_2399;
    if (x_2401->meta->pass_0_proc_inited) {
      x_2401->meta->bb_0_has_bb_dirtied = true;
      x_2401->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2401);
    } else {
      MetaWriteMetric();
    }
    auto x_2402 = x_2399;
    if (x_2402->meta->pass_1_proc_inited) {
      x_2402->meta->bb_3_has_bb_dirtied = true;
      x_2402->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2402);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1584(const auto &x_2403) {
  return RecordEval([&](const auto &x_2404) {
    if (x_2403->has_prop_height) {
      return x_2403->prop_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit var_modified_x_1582(const auto &x_2407) {
  return RecordOverhead([&](const auto &x_2408) {
    auto x_2409 = x_2407;
    if (x_2409->meta->pass_0_proc_inited) {
      x_2409->meta->bb_0_has_bb_dirtied = true;
      x_2409->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2409);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1579(const auto &x_2410) {
  return RecordEval([&](const auto &x_2411) {
    if (x_2410->last != nullptr) {
      return plus((x_2410->last)->var_finished_intrinsic_height_sum, (x_2410->last)->var_intrinsic_current_line_height);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1577(const auto &x_2416) {
  return RecordOverhead([&](const auto &x_2417) {
    OptionMatch(
        x_2416->next, [&](const auto &x_2419) { return MakeUnit(); },
        [&](const auto &x_2418) {
          auto x_2420 = x_2418;
          if (x_2420->meta->pass_0_proc_inited) {
            x_2420->meta->bb_0_has_bb_dirtied = true;
            x_2420->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2420);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    if (x_2416->next == nullptr) {
      OptionMatch(
          x_2416->parent, [&](const auto &x_2422) { return MakeUnit(); },
          [&](const auto &x_2421) {
            auto x_2423 = x_2421;
            if (x_2423->meta->pass_1_proc_inited) {
              x_2423->meta->bb_3_has_bb_dirtied = true;
              x_2423->meta->bb_3_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1415(x_2423);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1574(const auto &x_2424) {
  return RecordEval([&](const auto &x_2425) {
    return plus((x_2424->prev != nullptr) ? ((x_2424->prev)->var_intrinsic_width_sum) : (0.),
                x_2424->var_intrinsic_width_external);
  });
}
Unit var_modified_x_1572(const auto &x_2430) {
  return RecordOverhead([&](const auto &x_2431) {
    if (x_2430->next == nullptr) {
      OptionMatch(
          x_2430->parent, [&](const auto &x_2433) { return MakeUnit(); },
          [&](const auto &x_2432) {
            auto x_2434 = x_2432;
            if (x_2434->meta->pass_0_proc_inited) {
              x_2434->meta->bb_0_has_bb_dirtied = true;
              x_2434->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_1375(x_2434);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_2430->next, [&](const auto &x_2436) { return MakeUnit(); },
        [&](const auto &x_2435) {
          auto x_2437 = x_2435;
          if (x_2437->meta->pass_0_proc_inited) {
            x_2437->meta->bb_0_has_bb_dirtied = true;
            x_2437->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2437);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1569(const auto &x_2438) {
  return RecordEval([&](const auto &x_2439) {
    return max(x_2438->var_intrinsic_current_line_width,
               (x_2438->prev != nullptr) ? ((x_2438->prev)->var_intrinsic_width_max) : (0.));
  });
}
Unit var_modified_x_1567(const auto &x_2444) {
  return RecordOverhead([&](const auto &x_2445) {
    auto x_2446 = x_2444;
    if (x_2446->meta->pass_0_proc_inited) {
      x_2446->meta->bb_0_has_bb_dirtied = true;
      x_2446->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2446);
    } else {
      MetaWriteMetric();
    }
    OptionMatch(
        x_2444->next, [&](const auto &x_2448) { return MakeUnit(); },
        [&](const auto &x_2447) {
          auto x_2449 = x_2447;
          if (x_2449->meta->pass_0_proc_inited) {
            x_2449->meta->bb_0_has_bb_dirtied = true;
            x_2449->meta->bb_0_bb_dirtied = true;
            set_recursive_proc_dirtied_x_1375(x_2449);
          } else {
            MetaWriteMetric();
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_1564(const auto &x_2450) {
  return RecordEval([&](const auto &x_2451) {
    return plus(x_2450->var_intrinsic_width_external,
                ((x_2450->prev != nullptr) && (!(x_2450->prev)->var_line_break))
                    ? ((x_2450->prev)->var_intrinsic_current_line_width)
                    : (0.));
  });
}
Unit var_modified_x_1562(const auto &x_2458) {
  return RecordOverhead([&](const auto &x_2459) {
    auto x_2460 = x_2458;
    if (x_2460->meta->pass_0_proc_inited) {
      x_2460->meta->bb_0_has_bb_dirtied = true;
      x_2460->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2460);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1559(const auto &x_2461) {
  return RecordEval([&](const auto &x_2462) {
    if (eq(x_2461->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_2461->var_intrinsic_width_internal;
    }
  });
}
Unit var_modified_x_1557(const auto &x_2467) {
  return RecordOverhead([&](const auto &x_2468) {
    auto x_2469 = x_2467;
    if (x_2469->meta->pass_0_proc_inited) {
      x_2469->meta->bb_0_has_bb_dirtied = true;
      x_2469->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2469);
    } else {
      MetaWriteMetric();
    }
    auto x_2470 = x_2467;
    if (x_2470->meta->pass_1_proc_inited) {
      x_2470->meta->bb_3_has_bb_dirtied = true;
      x_2470->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2470);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1554(const auto &x_2471) {
  return RecordEval([&](const auto &x_2472) {
    if (eq(x_2471->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_2471->var_inside_svg) {
        return 0.;
      } else {
        if (x_2471->var_disabled) {
          return 0.;
        } else {
          if (neq(x_2471->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_2471->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               (neq(x_2471->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
                (neq(x_2471->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
                 (!(x_2471->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
            if (x_2471->var_width_expr.c == DEStringCase::DHasSuffix_px) {
              return x_2471->var_width_expr.r.a0;
            } else {
              return x_2471->var_width_expr.r.a0;
            }
          } else {
            return plus(
                x_2471->var_children_intrinsic_width,
                (eq(x_2471->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (100.)
                    : ((x_2471->var_is_default_case)
                           ? (0.)
                           : ((eq(x_2471->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_2471->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_2471->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (100.)
                                         : ((eq(x_2471->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_2471->var_has_width_attr &&
                                                    (x_2471->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_2471->var_width_attr_expr.r.a0)
                                                       : (((!x_2471->var_has_width_attr) && x_2471->has_attr_viewBox)
                                                              ? (x_2471->attr_viewBox.r.a2)
                                                              : (mult((x_2471->attr_viewBox.r.a2),
                                                                      divide(x_2471->var_width_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_2471->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_2471->var_has_width_attr)
                                                              ? (x_2471->var_width_attr_expr.r.a0)
                                                              : ((x_2471->has_attr_image_width &&
                                                                  (!x_2471->var_has_height_attr))
                                                                     ? (int_to_float(x_2471->attr_image_width))
                                                                     : ((neq(x_2471->attr_image_height,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(
                                                                                  (x_2471->var_height_attr_expr.r.a0),
                                                                                  divide(
                                                                                      int_to_float(
                                                                                          x_2471->attr_image_width),
                                                                                      int_to_float(
                                                                                          x_2471->attr_image_height))))
                                                                            : (0.))))
                                                       : ((eq(x_2471->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (300.)
                                                              : ((eq(x_2471->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (300.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_1552(const auto &x_2555) {
  return RecordOverhead([&](const auto &x_2556) {
    auto x_2557 = x_2555;
    if (x_2557->meta->pass_0_proc_inited) {
      x_2557->meta->bb_0_has_bb_dirtied = true;
      x_2557->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2557);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1549(const auto &x_2558) {
  return RecordEval([&](const auto &x_2559) {
    if (x_2558->last != nullptr) {
      return (x_2558->last)->var_intrinsic_width_max;
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_1547(const auto &x_2562) {
  return RecordOverhead([&](const auto &x_2563) {
    auto x_2564 = x_2562;
    if (x_2564->meta->pass_1_proc_inited) {
      x_2564->meta->bb_3_has_bb_dirtied = true;
      x_2564->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2564);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1544(const auto &x_2565) {
  return RecordEval([&](const auto &x_2566) {
    if (eq(x_2565->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_2565->var_inside_svg || x_2565->var_disabled)) {
      return true;
    } else {
      if ((x_2565->parent != nullptr) && (x_2565->parent)->var_is_flex_row) {
        return false;
      } else {
        if (eq(x_2565->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_2565->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_2565->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_2565->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
               eq(x_2565->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_1542(const auto &x_2591) {
  return RecordOverhead([&](const auto &x_2592) {
    auto x_2593 = x_2591;
    if (x_2593->meta->pass_0_proc_inited) {
      x_2593->meta->bb_0_has_bb_dirtied = true;
      x_2593->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2593);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1539(const auto &x_2594) {
  return RecordEval([&](const auto &x_2595) {
    if (eq(x_2594->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return true;
    } else {
      if (x_2594->var_inside_svg) {
        return true;
      } else {
        if (x_2594->var_disabled) {
          return true;
        } else {if ( eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_html)) || eq(x_2594->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
            return true;
          } else {
            return false;
          }
        }
      }
    }
  });
}
Unit var_modified_x_1537(const auto &x_2602) {
  return RecordOverhead([&](const auto &x_2603) {
    auto x_2604 = x_2602;
    if (x_2604->meta->pass_0_proc_inited) {
      x_2604->meta->bb_0_has_bb_dirtied = true;
      x_2604->meta->bb_0_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1375(x_2604);
    } else {
      MetaWriteMetric();
    }
    auto x_2605 = x_2602;
    if (x_2605->meta->pass_1_proc_inited) {
      x_2605->meta->bb_3_has_bb_dirtied = true;
      x_2605->meta->bb_3_bb_dirtied = true;
      set_recursive_proc_dirtied_x_1415(x_2605);
    } else {
      MetaWriteMetric();
    }
    return MakeUnit();
  });
}
auto eval_expr_x_1534(const auto &x_2606) {
  return RecordEval([&](const auto &x_2607) {
    if (x_2606->has_prop_width) {
      return x_2606->prop_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit eval_stmts_x_1509(const auto &x_1533) {
  WriteMetric();
  auto x_1535 = eval_expr_x_1534(x_1533);
  if (x_1533->has_var_width_expr) {
    if (!EqualValue(x_1533->var_width_expr, x_1535)) {
      var_modified_x_1537(x_1533);
    }
  }
  x_1533->has_var_width_expr = true;
  x_1533->var_width_expr = AsDEString(x_1535);
  WriteMetric();
  auto x_1540 = eval_expr_x_1539(x_1533);
  if (x_1533->has_var_is_default_case) {
    if (!EqualValue(x_1533->var_is_default_case, x_1540)) {
      var_modified_x_1542(x_1533);
    }
  }
  x_1533->has_var_is_default_case = true;
  x_1533->var_is_default_case = Asbool(x_1540);
  WriteMetric();
  auto x_1545 = eval_expr_x_1544(x_1533);
  if (x_1533->has_var_intrinsic_width_is_width) {
    if (!EqualValue(x_1533->var_intrinsic_width_is_width, x_1545)) {
      var_modified_x_1547(x_1533);
    }
  }
  x_1533->has_var_intrinsic_width_is_width = true;
  x_1533->var_intrinsic_width_is_width = Asbool(x_1545);
  WriteMetric();
  auto x_1550 = eval_expr_x_1549(x_1533);
  if (x_1533->has_var_children_intrinsic_width) {
    if (!EqualValue(x_1533->var_children_intrinsic_width, x_1550)) {
      var_modified_x_1552(x_1533);
    }
  }
  x_1533->has_var_children_intrinsic_width = true;
  x_1533->var_children_intrinsic_width = Asdouble(x_1550);
  WriteMetric();
  auto x_1555 = eval_expr_x_1554(x_1533);
  if (x_1533->has_var_intrinsic_width_internal) {
    if (!EqualValue(x_1533->var_intrinsic_width_internal, x_1555)) {
      var_modified_x_1557(x_1533);
    }
  }
  x_1533->has_var_intrinsic_width_internal = true;
  x_1533->var_intrinsic_width_internal = Asdouble(x_1555);
  WriteMetric();
  auto x_1560 = eval_expr_x_1559(x_1533);
  if (x_1533->has_var_intrinsic_width_external) {
    if (!EqualValue(x_1533->var_intrinsic_width_external, x_1560)) {
      var_modified_x_1562(x_1533);
    }
  }
  x_1533->has_var_intrinsic_width_external = true;
  x_1533->var_intrinsic_width_external = Asdouble(x_1560);
  WriteMetric();
  auto x_1565 = eval_expr_x_1564(x_1533);
  if (x_1533->has_var_intrinsic_current_line_width) {
    if (!EqualValue(x_1533->var_intrinsic_current_line_width, x_1565)) {
      var_modified_x_1567(x_1533);
    }
  }
  x_1533->has_var_intrinsic_current_line_width = true;
  x_1533->var_intrinsic_current_line_width = Asdouble(x_1565);
  WriteMetric();
  auto x_1570 = eval_expr_x_1569(x_1533);
  if (x_1533->has_var_intrinsic_width_max) {
    if (!EqualValue(x_1533->var_intrinsic_width_max, x_1570)) {
      var_modified_x_1572(x_1533);
    }
  }
  x_1533->has_var_intrinsic_width_max = true;
  x_1533->var_intrinsic_width_max = Asdouble(x_1570);
  WriteMetric();
  auto x_1575 = eval_expr_x_1574(x_1533);
  if (x_1533->has_var_intrinsic_width_sum) {
    if (!EqualValue(x_1533->var_intrinsic_width_sum, x_1575)) {
      var_modified_x_1577(x_1533);
    }
  }
  x_1533->has_var_intrinsic_width_sum = true;
  x_1533->var_intrinsic_width_sum = Asdouble(x_1575);
  WriteMetric();
  auto x_1580 = eval_expr_x_1579(x_1533);
  if (x_1533->has_var_children_intrinsic_height) {
    if (!EqualValue(x_1533->var_children_intrinsic_height, x_1580)) {
      var_modified_x_1582(x_1533);
    }
  }
  x_1533->has_var_children_intrinsic_height = true;
  x_1533->var_children_intrinsic_height = Asdouble(x_1580);
  WriteMetric();
  auto x_1585 = eval_expr_x_1584(x_1533);
  if (x_1533->has_var_height_expr) {
    if (!EqualValue(x_1533->var_height_expr, x_1585)) {
      var_modified_x_1587(x_1533);
    }
  }
  x_1533->has_var_height_expr = true;
  x_1533->var_height_expr = AsDEString(x_1585);
  WriteMetric();
  auto x_1590 = eval_expr_x_1589(x_1533);
  if (x_1533->has_var_intrinsic_height_is_height) {
    if (!EqualValue(x_1533->var_intrinsic_height_is_height, x_1590)) {
      var_modified_x_1592(x_1533);
    }
  }
  x_1533->has_var_intrinsic_height_is_height = true;
  x_1533->var_intrinsic_height_is_height = Asbool(x_1590);
  WriteMetric();
  auto x_1595 = eval_expr_x_1594(x_1533);
  if (x_1533->has_var_intrinsic_height_internal) {
    if (!EqualValue(x_1533->var_intrinsic_height_internal, x_1595)) {
      var_modified_x_1597(x_1533);
    }
  }
  x_1533->has_var_intrinsic_height_internal = true;
  x_1533->var_intrinsic_height_internal = Asdouble(x_1595);
  WriteMetric();
  auto x_1600 = eval_expr_x_1599(x_1533);
  if (x_1533->has_var_intrinsic_height_external) {
    if (!EqualValue(x_1533->var_intrinsic_height_external, x_1600)) {
      var_modified_x_1602(x_1533);
    }
  }
  x_1533->has_var_intrinsic_height_external = true;
  x_1533->var_intrinsic_height_external = Asdouble(x_1600);
  WriteMetric();
  auto x_1605 = eval_expr_x_1604(x_1533);
  if (x_1533->has_var_intrinsic_height_sum) {
    if (!EqualValue(x_1533->var_intrinsic_height_sum, x_1605)) {
      var_modified_x_1607(x_1533);
    }
  }
  x_1533->has_var_intrinsic_height_sum = true;
  x_1533->var_intrinsic_height_sum = Asdouble(x_1605);
  WriteMetric();
  auto x_1610 = eval_expr_x_1609(x_1533);
  if (x_1533->has_var_intrinsic_current_line_height) {
    if (!EqualValue(x_1533->var_intrinsic_current_line_height, x_1610)) {
      var_modified_x_1612(x_1533);
    }
  }
  x_1533->has_var_intrinsic_current_line_height = true;
  x_1533->var_intrinsic_current_line_height = Asdouble(x_1610);
  WriteMetric();
  auto x_1615 = eval_expr_x_1614(x_1533);
  if (x_1533->has_var_finished_intrinsic_height_sum) {
    if (!EqualValue(x_1533->var_finished_intrinsic_height_sum, x_1615)) {
      var_modified_x_1617(x_1533);
    }
  }
  x_1533->has_var_finished_intrinsic_height_sum = true;
  x_1533->var_finished_intrinsic_height_sum = Asdouble(x_1615);
  return MakeUnit();
}
Unit eval_stmts_x_1504(const auto &x_1619) {
  WriteMetric();
  auto x_1621 = eval_expr_x_1620(x_1619);
  if (x_1619->has_var_display) {
    if (!EqualValue(x_1619->var_display, x_1621)) {
      var_modified_x_1623(x_1619);
    }
  }
  x_1619->has_var_display = true;
  x_1619->var_display = AsDEString(x_1621);
  WriteMetric();
  auto x_1626 = eval_expr_x_1625(x_1619);
  if (x_1619->has_var_position) {
    if (!EqualValue(x_1619->var_position, x_1626)) {
      var_modified_x_1628(x_1619);
    }
  }
  x_1619->has_var_position = true;
  x_1619->var_position = AsDEString(x_1626);
  WriteMetric();
  auto x_1631 = eval_expr_x_1630(x_1619);
  if (x_1619->has_var_flex_grow) {
    if (!EqualValue(x_1619->var_flex_grow, x_1631)) {
      var_modified_x_1633(x_1619);
    }
  }
  x_1619->has_var_flex_grow = true;
  x_1619->var_flex_grow = Asdouble(x_1631);
  WriteMetric();
  auto x_1636 = eval_expr_x_1635(x_1619);
  if (x_1619->has_var_flex_shrink) {
    if (!EqualValue(x_1619->var_flex_shrink, x_1636)) {
      var_modified_x_1638(x_1619);
    }
  }
  x_1619->has_var_flex_shrink = true;
  x_1619->var_flex_shrink = Asdouble(x_1636);
  WriteMetric();
  auto x_1641 = eval_expr_x_1640(x_1619);
  if (x_1619->has_var_flex_grow_sum) {
    if (!EqualValue(x_1619->var_flex_grow_sum, x_1641)) {
      var_modified_x_1643(x_1619);
    }
  }
  x_1619->has_var_flex_grow_sum = true;
  x_1619->var_flex_grow_sum = Asdouble(x_1641);
  WriteMetric();
  auto x_1646 = eval_expr_x_1645(x_1619);
  if (x_1619->has_var_flex_shrink_sum) {
    if (!EqualValue(x_1619->var_flex_shrink_sum, x_1646)) {
      var_modified_x_1648(x_1619);
    }
  }
  x_1619->has_var_flex_shrink_sum = true;
  x_1619->var_flex_shrink_sum = Asdouble(x_1646);
  WriteMetric();
  auto x_1651 = eval_expr_x_1650(x_1619);
  if (x_1619->has_var_flex_direction) {
    if (!EqualValue(x_1619->var_flex_direction, x_1651)) {
      var_modified_x_1653(x_1619);
    }
  }
  x_1619->has_var_flex_direction = true;
  x_1619->var_flex_direction = AsDEString(x_1651);
  WriteMetric();
  auto x_1656 = eval_expr_x_1655(x_1619);
  if (x_1619->has_var_is_flex_row) {
    if (!EqualValue(x_1619->var_is_flex_row, x_1656)) {
      var_modified_x_1658(x_1619);
    }
  }
  x_1619->has_var_is_flex_row = true;
  x_1619->var_is_flex_row = Asbool(x_1656);
  WriteMetric();
  auto x_1661 = eval_expr_x_1660(x_1619);
  if (x_1619->has_var_is_flex_column) {
    if (!EqualValue(x_1619->var_is_flex_column, x_1661)) {
      var_modified_x_1663(x_1619);
    }
  }
  x_1619->has_var_is_flex_column = true;
  x_1619->var_is_flex_column = Asbool(x_1661);
  WriteMetric();
  auto x_1666 = eval_expr_x_1665(x_1619);
  if (x_1619->has_var_width_attr_expr) {
    if (!EqualValue(x_1619->var_width_attr_expr, x_1666)) {
      var_modified_x_1668(x_1619);
    }
  }
  x_1619->has_var_width_attr_expr = true;
  x_1619->var_width_attr_expr = AsDEString(x_1666);
  WriteMetric();
  auto x_1671 = eval_expr_x_1670(x_1619);
  if (x_1619->has_var_has_width_attr) {
    if (!EqualValue(x_1619->var_has_width_attr, x_1671)) {
      var_modified_x_1673(x_1619);
    }
  }
  x_1619->has_var_has_width_attr = true;
  x_1619->var_has_width_attr = Asbool(x_1671);
  WriteMetric();
  auto x_1676 = eval_expr_x_1675(x_1619);
  if (x_1619->has_var_height_attr_expr) {
    if (!EqualValue(x_1619->var_height_attr_expr, x_1676)) {
      var_modified_x_1678(x_1619);
    }
  }
  x_1619->has_var_height_attr_expr = true;
  x_1619->var_height_attr_expr = AsDEString(x_1676);
  WriteMetric();
  auto x_1681 = eval_expr_x_1680(x_1619);
  if (x_1619->has_var_has_height_attr) {
    if (!EqualValue(x_1619->var_has_height_attr, x_1681)) {
      var_modified_x_1683(x_1619);
    }
  }
  x_1619->has_var_has_height_attr = true;
  x_1619->var_has_height_attr = Asbool(x_1681);
  WriteMetric();
  auto x_1686 = eval_expr_x_1685(x_1619);
  if (x_1619->has_var_is_svg_block) {
    if (!EqualValue(x_1619->var_is_svg_block, x_1686)) {
      var_modified_x_1688(x_1619);
    }
  }
  x_1619->has_var_is_svg_block = true;
  x_1619->var_is_svg_block = Asbool(x_1686);
  WriteMetric();
  auto x_1691 = eval_expr_x_1690(x_1619);
  if (x_1619->has_var_inside_svg) {
    if (!EqualValue(x_1619->var_inside_svg, x_1691)) {
      var_modified_x_1693(x_1619);
    }
  }
  x_1619->has_var_inside_svg = true;
  x_1619->var_inside_svg = Asbool(x_1691);
  WriteMetric();
  auto x_1696 = eval_expr_x_1695(x_1619);
  if (x_1619->has_var_disabled) {
    if (!EqualValue(x_1619->var_disabled, x_1696)) {
      var_modified_x_1698(x_1619);
    }
  }
  x_1619->has_var_disabled = true;
  x_1619->var_disabled = Asbool(x_1696);
  WriteMetric();
  auto x_1701 = eval_expr_x_1700(x_1619);
  if (x_1619->has_var_visible) {
    if (!EqualValue(x_1619->var_visible, x_1701)) {
      var_modified_x_1703(x_1619);
    }
  }
  x_1619->has_var_visible = true;
  x_1619->var_visible = Asbool(x_1701);
  WriteMetric();
  auto x_1706 = eval_expr_x_1705(x_1619);
  if (x_1619->has_var_line_break) {
    if (!EqualValue(x_1619->var_line_break, x_1706)) {
      var_modified_x_1708(x_1619);
    }
  }
  x_1619->has_var_line_break = true;
  x_1619->var_line_break = Asbool(x_1706);
  return MakeUnit();
}
Unit eval_stmts_x_1501(const auto &x_1710) { return MakeUnit(); }
Unit eval_stmts_x_1496(const auto &x_1711) {
  WriteMetric();
  auto x_1713 = eval_expr_x_1712(x_1711);
  if (x_1711->has_var_box_width) {
    if (!EqualValue(x_1711->var_box_width, x_1713)) {
      var_modified_x_1715(x_1711);
    }
  }
  x_1711->has_var_box_width = true;
  x_1711->var_box_width = Asdouble(x_1713);
  WriteMetric();
  auto x_1718 = eval_expr_x_1717(x_1711);
  if (x_1711->has_var_box_height) {
    if (!EqualValue(x_1711->var_box_height, x_1718)) {
      var_modified_x_1720(x_1711);
    }
  }
  x_1711->has_var_box_height = true;
  x_1711->var_box_height = Asdouble(x_1718);
  WriteMetric();
  auto x_1723 = eval_expr_x_1722(x_1711);
  if (x_1711->has_var_left_over) {
    if (!EqualValue(x_1711->var_left_over, x_1723)) {
      var_modified_x_1725(x_1711);
    }
  }
  x_1711->has_var_left_over = true;
  x_1711->var_left_over = Asdouble(x_1723);
  WriteMetric();
  auto x_1728 = eval_expr_x_1727(x_1711);
  if (x_1711->has_var_flex_amount) {
    if (!EqualValue(x_1711->var_flex_amount, x_1728)) {
      var_modified_x_1730(x_1711);
    }
  }
  x_1711->has_var_flex_amount = true;
  x_1711->var_flex_amount = Asdouble(x_1728);
  WriteMetric();
  auto x_1733 = eval_expr_x_1732(x_1711);
  if (x_1711->has_var_flex_unit) {
    if (!EqualValue(x_1711->var_flex_unit, x_1733)) {
      var_modified_x_1735(x_1711);
    }
  }
  x_1711->has_var_flex_unit = true;
  x_1711->var_flex_unit = Asdouble(x_1733);
  WriteMetric();
  auto x_1738 = eval_expr_x_1737(x_1711);
  if (x_1711->has_var_x) {
    if (!EqualValue(x_1711->var_x, x_1738)) {
      var_modified_x_1740(x_1711);
    }
  }
  x_1711->has_var_x = true;
  x_1711->var_x = Asdouble(x_1738);
  WriteMetric();
  auto x_1743 = eval_expr_x_1742(x_1711);
  if (x_1711->has_var_width_internal) {
    if (!EqualValue(x_1711->var_width_internal, x_1743)) {
      var_modified_x_1745(x_1711);
    }
  }
  x_1711->has_var_width_internal = true;
  x_1711->var_width_internal = Asdouble(x_1743);
  WriteMetric();
  auto x_1748 = eval_expr_x_1747(x_1711);
  if (x_1711->has_var_width_external) {
    if (!EqualValue(x_1711->var_width_external, x_1748)) {
      var_modified_x_1750(x_1711);
    }
  }
  x_1711->has_var_width_external = true;
  x_1711->var_width_external = Asdouble(x_1748);
  WriteMetric();
  auto x_1753 = eval_expr_x_1752(x_1711);
  if (x_1711->has_var_y) {
    if (!EqualValue(x_1711->var_y, x_1753)) {
      var_modified_x_1755(x_1711);
    }
  }
  x_1711->has_var_y = true;
  x_1711->var_y = Asdouble(x_1753);
  WriteMetric();
  auto x_1758 = eval_expr_x_1757(x_1711);
  if (x_1711->has_var_height_internal) {
    if (!EqualValue(x_1711->var_height_internal, x_1758)) {
      var_modified_x_1760(x_1711);
    }
  }
  x_1711->has_var_height_internal = true;
  x_1711->var_height_internal = Asdouble(x_1758);
  WriteMetric();
  auto x_1763 = eval_expr_x_1762(x_1711);
  if (x_1711->has_var_height_external) {
    if (!EqualValue(x_1711->var_height_external, x_1763)) {
      var_modified_x_1765(x_1711);
    }
  }
  x_1711->has_var_height_external = true;
  x_1711->var_height_external = Asdouble(x_1763);
  WriteMetric();
  auto x_1768 = eval_expr_x_1767(x_1711);
  if (x_1711->has_var_line_height) {
    if (!EqualValue(x_1711->var_line_height, x_1768)) {
      var_modified_x_1770(x_1711);
    }
  }
  x_1711->has_var_line_height = true;
  x_1711->var_line_height = Asdouble(x_1768);
  return MakeUnit();
}
Unit x_1772(const auto &x_1773) {
  MetaReadMetric();
  if (x_1773->meta->pass_1_recursive_proc_dirtied) {
    if (x_1773->meta->pass_1_proc_inited) {
      if (x_1773->meta->bb_3_bb_dirtied) {
        eval_stmts_x_1496(x_1773);
        StopRecordOverhead();
        x_1773->meta->bb_3_has_bb_dirtied = true;
        x_1773->meta->bb_3_bb_dirtied = false;
        StartRecordOverhead();
        MakeUnit();
      }
      ListIter(x_1773->children, [&](const auto &x_1774) { return x_1772(x_1774); });
      if (x_1773->meta->bb_2_bb_dirtied) {
        eval_stmts_x_1501(x_1773);
        StopRecordOverhead();
        x_1773->meta->bb_2_has_bb_dirtied = true;
        x_1773->meta->bb_2_bb_dirtied = false;
        StartRecordOverhead();
        MakeUnit();
      }
      MakeUnit();
    } else {
      x_1773->meta->pass_1_proc_inited = true;
      StopRecordOverhead();
      eval_stmts_x_1317(x_1773);
      StartRecordOverhead();
      MakeUnit();
    }
  }
  x_1773->meta->pass_1_has_recursive_proc_dirtied = true;
  x_1773->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1464(const auto &x_1773) { return x_1772(x_1773); }
Unit x_1775(const auto &x_1776) {
  MetaReadMetric();
  if (x_1776->meta->pass_0_recursive_proc_dirtied) {
    if (x_1776->meta->pass_0_proc_inited) {
      if (x_1776->meta->bb_1_bb_dirtied) {
        eval_stmts_x_1504(x_1776);
        StopRecordOverhead();
        x_1776->meta->bb_1_has_bb_dirtied = true;
        x_1776->meta->bb_1_bb_dirtied = false;
        StartRecordOverhead();
        MakeUnit();
      }
      ListIter(x_1776->children, [&](const auto &x_1777) { return x_1775(x_1777); });
      if (x_1776->meta->bb_0_bb_dirtied) {
        eval_stmts_x_1509(x_1776);
        StopRecordOverhead();
        x_1776->meta->bb_0_has_bb_dirtied = true;
        x_1776->meta->bb_0_bb_dirtied = false;
        StartRecordOverhead();
        MakeUnit();
      }
      MakeUnit();
    } else {
      x_1776->meta->pass_0_proc_inited = true;
      StopRecordOverhead();
      eval_stmts_x_1314(x_1776);
      StartRecordOverhead();
      MakeUnit();
    }
  }
  x_1776->meta->pass_0_has_recursive_proc_dirtied = true;
  x_1776->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_1463(const auto &x_1776) { return x_1775(x_1776); }
Unit x_1778(const auto &x_1779) {
  MetaWriteMetric();
  if (!x_1779->meta->pass_1_recursive_proc_dirtied) {
    x_1779->meta->pass_1_has_recursive_proc_dirtied = true;
    x_1779->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_1779->parent, [&](const auto &x_1781) { return MakeUnit(); },
        [&](const auto &x_1780) { return x_1778(x_1780); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1415(const auto &x_1779) { return x_1778(x_1779); }
Unit x_1782(const auto &x_1783) {
  MetaWriteMetric();
  if (!x_1783->meta->pass_0_recursive_proc_dirtied) {
    x_1783->meta->pass_0_has_recursive_proc_dirtied = true;
    x_1783->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_1783->parent, [&](const auto &x_1785) { return MakeUnit(); },
        [&](const auto &x_1784) { return x_1782(x_1784); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1375(const auto &x_1783) { return x_1782(x_1783); }
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
        std::string x_2700 = x_1372;
        if (x_2700 == "attributes") {
          std::string x_2701 = x_1373;
          if (x_2701 == "width") {
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
          } else if (x_2701 == "image_height") {
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
          } else if (x_2701 == "image_width") {
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
          } else if (x_2701 == "height") {
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
          } else if (x_2701 == "viewBox") {
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
        } else if (x_2700 == "properties") {
          std::string x_2702 = x_1373;
          if (x_2702 == "width") {
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
          } else if (x_2702 == "flex-grow") {
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
          } else if (x_2702 == "height") {
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
          } else if (x_2702 == "display") {
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
          } else if (x_2702 == "position") {
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
          } else if (x_2702 == "flex-shrink") {
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
          } else if (x_2702 == "flex-direction") {
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
        std::string x_2703 = x_1383;
        if (x_2703 == "attributes") {
          std::string x_2704 = x_1384;
          if (x_2704 == "width") {
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
          } else if (x_2704 == "image_height") {
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
          } else if (x_2704 == "image_width") {
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
          } else if (x_2704 == "height") {
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
          } else if (x_2704 == "viewBox") {
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
        } else if (x_2703 == "properties") {
          std::string x_2705 = x_1384;
          if (x_2705 == "width") {
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
          } else if (x_2705 == "flex-grow") {
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
          } else if (x_2705 == "height") {
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
          } else if (x_2705 == "display") {
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
          } else if (x_2705 == "position") {
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
          } else if (x_2705 == "flex-shrink") {
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
          } else if (x_2705 == "flex-direction") {
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
        std::string x_2706 = x_1393;
        if (x_2706 == "attributes") {
          std::string x_2707 = x_1394;
          if (x_2707 == "width") {
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
          } else if (x_2707 == "image_height") {
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
          } else if (x_2707 == "image_width") {
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
          } else if (x_2707 == "height") {
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
          } else if (x_2707 == "viewBox") {
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
        } else if (x_2706 == "properties") {
          std::string x_2708 = x_1394;
          if (x_2708 == "width") {
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
          } else if (x_2708 == "flex-grow") {
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
          } else if (x_2708 == "height") {
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
          } else if (x_2708 == "display") {
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
          } else if (x_2708 == "position") {
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
          } else if (x_2708 == "flex-shrink") {
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
          } else if (x_2708 == "flex-direction") {
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
  StartRecordOverhead();
  recalculate_internal_x_1463(x_1462);
  recalculate_internal_x_1464(x_1462);
  StopRecordOverhead();
  return MakeUnit();
}
Unit x_1465(const auto &x_1466, const auto &x_1467, const auto &x_1468) {
  auto x_1469 = ListHeadExn(x_1466);
  auto x_1470 = ListTailExn(x_1466);
  if (ListIsEmpty(x_1470)) {
    InputChangeMetric(node_size_x_1300(x_1468));
    auto x_1471 = ListSplitN(x_1467->children, x_1469);
    auto x_1472 = Zro(x_1471);
    auto x_1473 = Fst(x_1471);
    x_1467->children = ListAppend(x_1472, Cons(x_1468, x_1473));
    if (ListIsEmpty(x_1472)) {
      x_1467->first = x_1468.get();
    }
    if (ListIsEmpty(x_1473)) {
      x_1467->last = x_1468.get();
    }
    OptionMatch(
        ListLast(x_1472),
        [&](const auto &x_1475) {
          x_1468->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1474) {
          x_1468->prev = x_1474.get();
          x_1474->next = x_1468.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1473),
        [&](const auto &x_1477) {
          x_1468->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1476) {
          x_1468->next = x_1476.get();
          x_1476->prev = x_1468.get();
          return MakeUnit();
        });
    x_1468->parent = x_1467.get();
    RecordOverhead([&](const auto &x_1478) {
      x_1468->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1468->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1375(x_1468);
    });
    OptionMatch(
        x_1468->next, [&](const auto &x_1480) { return MakeUnit(); },
        [&](const auto &x_1479) {
          if (x_1479->meta->pass_0_proc_inited) {
            x_1479->meta->bb_1_has_bb_dirtied = true;
            x_1479->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1479);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1467->children)) {
      if (x_1467->meta->pass_0_proc_inited) {
        x_1467->meta->bb_0_has_bb_dirtied = true;
        x_1467->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1467);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1473)) {
      if (x_1467->meta->pass_0_proc_inited) {
        x_1467->meta->bb_0_has_bb_dirtied = true;
        x_1467->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1375(x_1467);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1468->next, [&](const auto &x_1482) { return MakeUnit(); },
        [&](const auto &x_1481) {
          if (x_1481->meta->pass_0_proc_inited) {
            x_1481->meta->bb_0_has_bb_dirtied = true;
            x_1481->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1375(x_1481);
          } else {
            return MetaWriteMetric();
          }
        });
    RecordOverhead([&](const auto &x_1483) {
      x_1468->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1468->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_1415(x_1468);
    });
    if (ListIsSingleton(x_1467->children)) {
      if (x_1467->meta->pass_1_proc_inited) {
        x_1467->meta->bb_3_has_bb_dirtied = true;
        x_1467->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1467);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1473)) {
      if (x_1467->meta->pass_1_proc_inited) {
        x_1467->meta->bb_3_has_bb_dirtied = true;
        x_1467->meta->bb_3_bb_dirtied = true;
        set_recursive_proc_dirtied_x_1415(x_1467);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1468->next, [&](const auto &x_1485) { return MakeUnit(); },
        [&](const auto &x_1484) {
          if (x_1484->meta->pass_1_proc_inited) {
            x_1484->meta->bb_3_has_bb_dirtied = true;
            x_1484->meta->bb_3_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_1415(x_1484);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1465(x_1470, ListNthExn(x_1467->children, x_1469), x_1468);
  }
}
Unit add_node_x_1323(const auto &x_1466, const auto &x_1467, const auto &x_1468) {
  return x_1465(x_1466, x_1467, x_1468);
}
Unit x_1486(const auto &x_1487) {
  ListIter2(x_1487->children, [&](const auto &x_1488, const auto &x_1489) {
    x_1488->parent = x_1487.get();
    x_1489->parent = x_1487.get();
    x_1488->next = x_1489.get();
    x_1489->prev = x_1488.get();
    x_1486(x_1488);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1487->children),
      [&](const auto &x_1491) {
        x_1487->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1490) {
        x_1487->first = x_1490.get();
        x_1490->parent = x_1487.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1487->children),
      [&](const auto &x_1493) {
        x_1487->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1492) {
        x_1487->last = x_1492.get();
        x_1492->parent = x_1487.get();
        x_1486(x_1492);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1321(const auto &x_1487) { return x_1486(x_1487); }
Unit eval_stmts_x_1317(const auto &x_1494) {
  RecordOverhead([&](const auto &x_1495) {
    x_1494->meta->bb_3_has_bb_dirtied = true;
    x_1494->meta->bb_3_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1496(x_1494);
  ListIter(x_1494->children, [&](const auto &x_1497) {
    RecordOverhead([&](const auto &x_1498) {
      x_1497->meta->pass_1_proc_inited = true;
      return MakeUnit();
    });
    RecordOverhead([&](const auto &x_1499) {
      x_1497->meta->pass_1_has_recursive_proc_dirtied = true;
      x_1497->meta->pass_1_recursive_proc_dirtied = false;
      return MakeUnit();
    });
    eval_stmts_x_1317(x_1497);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_1500) {
    x_1494->meta->bb_2_has_bb_dirtied = true;
    x_1494->meta->bb_2_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1501(x_1494);
  return MakeUnit();
}
Unit eval_stmts_x_1314(const auto &x_1502) {
  RecordOverhead([&](const auto &x_1503) {
    x_1502->meta->bb_1_has_bb_dirtied = true;
    x_1502->meta->bb_1_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1504(x_1502);
  ListIter(x_1502->children, [&](const auto &x_1505) {
    RecordOverhead([&](const auto &x_1506) {
      x_1505->meta->pass_0_proc_inited = true;
      return MakeUnit();
    });
    RecordOverhead([&](const auto &x_1507) {
      x_1505->meta->pass_0_has_recursive_proc_dirtied = true;
      x_1505->meta->pass_0_recursive_proc_dirtied = false;
      return MakeUnit();
    });
    eval_stmts_x_1314(x_1505);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_1508) {
    x_1502->meta->bb_0_has_bb_dirtied = true;
    x_1502->meta->bb_0_bb_dirtied = false;
    return MakeUnit();
  });
  eval_stmts_x_1509(x_1502);
  return MakeUnit();
}
Unit x_1510(const auto &x_1511) {
  ListIter2(x_1511->children, [&](const auto &x_1512, const auto &x_1513) {
    x_1512->parent = x_1511.get();
    x_1513->parent = x_1511.get();
    x_1512->next = x_1513.get();
    x_1513->prev = x_1512.get();
    x_1510(x_1512);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1511->children),
      [&](const auto &x_1515) {
        x_1511->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1514) {
        x_1511->first = x_1514.get();
        x_1514->parent = x_1511.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1511->children),
      [&](const auto &x_1517) {
        x_1511->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1516) {
        x_1511->last = x_1516.get();
        x_1516->parent = x_1511.get();
        x_1510(x_1516);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1309(const auto &x_1511) { return x_1510(x_1511); }
int64_t x_1518(const auto &x_1519) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1519->children, [&](const auto &x_1520) { return x_1518(x_1520); }));
}
int64_t node_size_x_1300(const auto &x_1519) { return x_1518(x_1519); }
int64_t x_1521(const auto &x_1522) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1522->children, [&](const auto &x_1523) { return x_1521(x_1523); }));
}
int64_t layout_size_x_1299(const auto &x_1522) { return x_1521(x_1522); }
LayoutNode x_1524(const auto &x_1525) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_1525)), [&](const auto &x_1526) { return x_1524(x_1526); }));
}
LayoutNode json_to_layout_node_x_1298(const auto &x_1525) { return x_1524(x_1525); }
Node x_1527(const auto &x_1528) {
  return MakeNode(x_1528->name, x_1528->attr, x_1528->prop, x_1528->extern_id,
                  ListMap(x_1528->children, [&](const auto &x_1529) { return x_1527(x_1529); }));
}
Node node_to_fs_node_x_1297(const auto &x_1528) { return x_1527(x_1528); }
Node x_1530(const auto &x_1531) {
  return MakeNode(
      JsonToString(JsonMember("name", x_1531)), JsonToDict(JsonMember("attributes", x_1531)),
      JsonToDict(JsonMember("properties", x_1531)), JsonToInt(JsonMember("id", x_1531)),
      ListMap(JsonToList(JsonMember("children", x_1531)), [&](const auto &x_1532) { return x_1530(x_1532); }));
}
Node json_to_node_aux_x_1296(const auto &x_1531) { return x_1530(x_1531); }
int main() {
  WithOutFile("github_nologin.out", [&](const auto &x_1301) {
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
        auto x_2709 = FreshJson();
        WriteJson(x_2709, "name", "DB_D");
        WriteJson(x_2709, "diff_num", ReadRef(x_1303));
        WriteJson(x_2709, "read_count", MetricReadCount());
        WriteJson(x_2709, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_2709, "write_count", MetricWriteCount());
        WriteJson(x_2709, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_2709, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_2709, "input_change_count", MetricInputChangeCount());
        WriteJson(x_2709, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_2709, "overhead_time", MetricOverheadTime());
        WriteJson(x_2709, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_2709, "eval_time", MetricEvalCount());
        WriteJson(x_2709, "html", "");
        WriteJson(x_2709, "command", StackToList(x_1307));
        return x_2709;
      }());
      OutputString(x_1301, "\n");
      ClearStack(x_1307);
      WriteRef(x_1303, IntAdd(ReadRef(x_1303), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_1302, [&](const auto &x_1318) {
        auto x_1319 = JsonOfString(x_1318);
        PushStack(x_1307, x_1319);
        std::string x_2711 = JsonToString(JsonMember("name", x_1319));
        if (x_2711 == "add") {
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
        } else if (x_2711 == "recalculate") {
          recalculate_x_1324(x_1310);
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
          return MakeUnit();
        } else if (x_2711 == "remove") {
          return remove_node_x_1326(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1325) { return JsonToInt(x_1325); }),
              x_1310, MakeUnit());
        } else if (x_2711 == "replace") {
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
        } else if (x_2711 == "replace_value") {
          return replace_value_x_1332(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1331) { return JsonToInt(x_1331); }),
              x_1310,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1319)), JsonToString(JsonMember("key", x_1319))),
                       JsonToValue(JsonMember("value", x_1319))));
        } else if (x_2711 == "delete_value") {
          return delete_value_x_1334(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1333) { return JsonToInt(x_1333); }),
              x_1310, MakePair(JsonToString(JsonMember("type", x_1319)), JsonToString(JsonMember("key", x_1319))));
        } else if (x_2711 == "insert_value") {
          return insert_value_x_1336(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1335) { return JsonToInt(x_1335); }),
              x_1310,
              MakePair(MakePair(JsonToString(JsonMember("type", x_1319)), JsonToString(JsonMember("key", x_1319))),
                       JsonToValue(JsonMember("value", x_1319))));
        } else if (x_2711 == "layout_remove") {
          return remove_layout_node_x_1338(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1337) { return JsonToInt(x_1337); }),
              x_1311, MakeUnit());
        } else if (x_2711 == "layout_add") {
          return add_layout_node_x_1340(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1339) { return JsonToInt(x_1339); }),
              x_1311, json_to_layout_node_x_1298(JsonMember("node", x_1319)));
        } else if (x_2711 == "layout_replace") {
          return replace_layout_node_x_1342(
              ListMap(JsonToList(JsonMember("path", x_1319)), [&](const auto &x_1341) { return JsonToInt(x_1341); }),
              x_1311, json_to_layout_node_x_1298(JsonMember("node", x_1319)));
        } else if (x_2711 == "layout_info_changed") {
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