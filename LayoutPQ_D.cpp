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
  bool bb_1_has_bb_time_table = false;
  TotalOrder bb_1_bb_time_table;
  bool bb_0_has_bb_time_table = false;
  TotalOrder bb_0_bb_time_table;
  bool bb_2_has_bb_time_table = false;
  TotalOrder bb_2_bb_time_table;
  bool pass_0_has_proc_time_table = false;
  TotalOrder pass_0_proc_time_table;
  bool pass_1_has_proc_time_table = false;
  TotalOrder pass_1_proc_time_table;
  bool alive = true;
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
Unit var_modified_x_6602(const auto &x_6698);
auto eval_expr_x_6599(const auto &x_6720);
Unit var_modified_x_6597(const auto &x_6799);
auto eval_expr_x_6594(const auto &x_6805);
Unit var_modified_x_6592(const auto &x_6822);
auto eval_expr_x_6589(const auto &x_6836);
Unit var_modified_x_6587(const auto &x_6841);
auto eval_expr_x_6584(const auto &x_6855);
Unit var_modified_x_6582(const auto &x_6864);
auto eval_expr_x_6579(const auto &x_6870);
Unit var_modified_x_6577(const auto &x_6871);
auto eval_expr_x_6574(const auto &x_6877);
Unit var_modified_x_6572(const auto &x_6882);
auto eval_expr_x_6569(const auto &x_6892);
Unit var_modified_x_6567(const auto &x_6903);
auto eval_expr_x_6564(const auto &x_6909);
Unit var_modified_x_6562(const auto &x_6914);
auto eval_expr_x_6559(const auto &x_6924);
Unit var_modified_x_6557(const auto &x_6935);
auto eval_expr_x_6554(const auto &x_6945);
Unit var_modified_x_6552(const auto &x_6970);
auto eval_expr_x_6549(const auto &x_6984);
Unit var_modified_x_6547(const auto &x_7013);
auto eval_expr_x_6544(const auto &x_7019);
Unit var_modified_x_6542(const auto &x_7022);
auto eval_expr_x_6539(const auto &x_7034);
Unit var_modified_x_6537(const auto &x_7043);
auto eval_expr_x_6534(const auto &x_7055);
Unit var_modified_x_6532(const auto &x_7064);
auto eval_expr_x_6529(const auto &x_7074);
Unit var_modified_x_6527(const auto &x_7077);
auto eval_expr_x_6524(const auto &x_7087);
Unit var_modified_x_6522(const auto &x_7090);
auto eval_expr_x_6519(const auto &x_7104);
Unit var_modified_x_6517(const auto &x_7107);
auto eval_expr_x_6514(const auto &x_7121);
Unit var_modified_x_6510(const auto &x_7124);
auto eval_expr_x_6507(const auto &x_7138);
Unit var_modified_x_6505(const auto &x_7167);
auto eval_expr_x_6502(const auto &x_7181);
Unit var_modified_x_6500(const auto &x_7194);
auto eval_expr_x_6497(const auto &x_7208);
Unit var_modified_x_6495(const auto &x_7217);
auto eval_expr_x_6492(const auto &x_7223);
Unit var_modified_x_6490(const auto &x_7232);
auto eval_expr_x_6487(const auto &x_7242);
Unit var_modified_x_6485(const auto &x_7387);
auto eval_expr_x_6482(const auto &x_7393);
Unit var_modified_x_6480(const auto &x_7442);
auto eval_expr_x_6477(const auto &x_7452);
Unit var_modified_x_6475(const auto &x_7455);
auto eval_expr_x_6472(const auto &x_7461);
Unit var_modified_x_6470(const auto &x_7470);
auto eval_expr_x_6467(const auto &x_7484);
Unit var_modified_x_6465(const auto &x_7493);
auto eval_expr_x_6462(const auto &x_7507);
Unit var_modified_x_6460(const auto &x_7516);
auto eval_expr_x_6457(const auto &x_7528);
Unit var_modified_x_6455(const auto &x_7541);
auto eval_expr_x_6452(const auto &x_7547);
Unit var_modified_x_6450(const auto &x_7556);
auto eval_expr_x_6447(const auto &x_7566);
Unit var_modified_x_6445(const auto &x_7719);
auto eval_expr_x_6442(const auto &x_7725);
Unit var_modified_x_6440(const auto &x_7730);
auto eval_expr_x_6437(const auto &x_7736);
Unit var_modified_x_6435(const auto &x_7785);
auto eval_expr_x_6432(const auto &x_7791);
Unit var_modified_x_6430(const auto &x_7804);
auto eval_expr_x_6427(const auto &x_7814);
Unit var_modified_x_6423(const auto &x_7817);
auto eval_expr_x_6420(const auto &x_7825);
Unit var_modified_x_6418(const auto &x_7842);
auto eval_expr_x_6415(const auto &x_7848);
Unit var_modified_x_6413(const auto &x_7857);
auto eval_expr_x_6410(const auto &x_7867);
Unit var_modified_x_6408(const auto &x_7920);
auto eval_expr_x_6405(const auto &x_7932);
Unit var_modified_x_6403(const auto &x_7957);
auto eval_expr_x_6400(const auto &x_7965);
Unit var_modified_x_6398(const auto &x_7974);
auto eval_expr_x_6395(const auto &x_7984);
Unit var_modified_x_6393(const auto &x_8037);
auto eval_expr_x_6390(const auto &x_8049);
Unit var_modified_x_6388(const auto &x_8070);
auto eval_expr_x_6385(const auto &x_8076);
Unit var_modified_x_6383(const auto &x_8097);
auto eval_expr_x_6380(const auto &x_8103);
Unit var_modified_x_6378(const auto &x_8116);
auto eval_expr_x_6375(const auto &x_8126);
Unit var_modified_x_6373(const auto &x_8147);
auto eval_expr_x_6370(const auto &x_8153);
Unit var_modified_x_6368(const auto &x_8158);
auto eval_expr_x_6365(const auto &x_8164);
Unit x_6029(const auto &x_6030, const auto &x_6031, const auto &x_6032);
Unit x_6036(const auto &x_6037, const auto &x_6038, const auto &x_6039);
Unit x_6043(const auto &x_6044, const auto &x_6045, const auto &x_6046);
Unit x_6050(const auto &x_6051, const auto &x_6052, const auto &x_6053);
Unit x_6097(const auto &x_6098, const auto &x_6099, const auto &x_6100);
Unit x_6142(const auto &x_6143, const auto &x_6144, const auto &x_6145);
Unit x_6225(const auto &x_6226, const auto &x_6227, const auto &x_6228);
Unit x_6313(const auto &x_6314);
Unit x_6321(const auto &x_6322, const auto &x_6323, const auto &x_6324);
Unit eval_stmts_x_6007(const auto &x_6363);
Unit eval_stmts_x_6006(const auto &x_6425);
Unit eval_stmts_x_6005(const auto &x_6512);
Unit x_6604(const auto &x_6605, const auto &x_6606, const auto &x_6607);
Unit x_6656(const auto &x_6657);
Unit eval_stmts_x_5994(const auto &x_6664);
Unit eval_stmts_x_5992(const auto &x_6669);
Unit x_6675(const auto &x_6676);
int64_t x_6683(const auto &x_6684);
int64_t x_6686(const auto &x_6687);
LayoutNode x_6689(const auto &x_6690);
Node x_6692(const auto &x_6693);
Node x_6695(const auto &x_6696);
Unit var_modified_x_6602(const auto &x_6698) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6699) {
    auto x_8169 = [&](const auto &x_6700) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6701) {
        if (x_6700->meta->bb_0_has_bb_time_table) {
          auto x_6702 = x_6700->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6702, x_6700, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8169(x_6698);
    MakeUnit();
    auto x_8170 = [&](const auto &x_6706) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6707) {
        if (x_6706->meta->bb_0_has_bb_time_table) {
          auto x_6708 = x_6706->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6708, x_6706, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_6698->next, [&](const auto &x_6705) { return MakeUnit(); },
        [&](const auto &x_6704) {
          auto x_8173 = x_8170;
          x_8173(x_6704);
          return MakeUnit();
        });
    auto x_8171 = [&](const auto &x_6710) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6711) {
        if (x_6710->meta->bb_2_has_bb_time_table) {
          auto x_6712 = x_6710->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6712, x_6710, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8171(x_6698);
    MakeUnit();
    auto x_8172 = [&](const auto &x_6716) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6717) {
        if (x_6716->meta->bb_2_has_bb_time_table) {
          auto x_6718 = x_6716->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6718, x_6716, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_6698->next, [&](const auto &x_6715) { return MakeUnit(); },
        [&](const auto &x_6714) {
          auto x_8174 = x_8172;
          x_8174(x_6714);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6599(const auto &x_6720) {
  if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_6720->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_6720->parent != nullptr) &&
          (eq((x_6720->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_6720->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_6720->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_6720->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_6720->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_6720->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_6597(const auto &x_6799) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6800) {
    ListIter(x_6799->children, [&](const auto &x_6801) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6802) {
        if (x_6801->meta->bb_1_has_bb_time_table) {
          auto x_6803 = x_6801->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6803, x_6801, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6594(const auto &x_6805) {
  return (((!(x_6805->parent != nullptr)) || (x_6805->parent)->var_visible) &&
          (neq(x_6805->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_6805->var_inside_svg) && (!x_6805->var_disabled))));
}
Unit var_modified_x_6592(const auto &x_6822) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6823) {
    auto x_8175 = [&](const auto &x_6824) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6825) {
        if (x_6824->meta->bb_1_has_bb_time_table) {
          auto x_6826 = x_6824->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6826, x_6824, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8175(x_6822);
    MakeUnit();
    ListIter(x_6822->children, [&](const auto &x_6828) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6829) {
        if (x_6828->meta->bb_1_has_bb_time_table) {
          auto x_6830 = x_6828->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6830, x_6828, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_8176 = [&](const auto &x_6832) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6833) {
        if (x_6832->meta->bb_0_has_bb_time_table) {
          auto x_6834 = x_6832->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6834, x_6832, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8176(x_6822);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6589(const auto &x_6836) {
  if (eq(x_6836->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_6836->parent != nullptr) && (x_6836->parent)->var_disabled);
  }
}
Unit var_modified_x_6587(const auto &x_6841) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6842) {
    auto x_8177 = [&](const auto &x_6843) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6844) {
        if (x_6843->meta->bb_1_has_bb_time_table) {
          auto x_6845 = x_6843->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6845, x_6843, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8177(x_6841);
    MakeUnit();
    ListIter(x_6841->children, [&](const auto &x_6847) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6848) {
        if (x_6847->meta->bb_1_has_bb_time_table) {
          auto x_6849 = x_6847->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6849, x_6847, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_8178 = [&](const auto &x_6851) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6852) {
        if (x_6851->meta->bb_0_has_bb_time_table) {
          auto x_6853 = x_6851->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6853, x_6851, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8178(x_6841);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6584(const auto &x_6855) {
  return ((x_6855->parent != nullptr) && ((x_6855->parent)->var_is_svg_block || (x_6855->parent)->var_inside_svg));
}
Unit var_modified_x_6582(const auto &x_6864) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6865) {
    ListIter(x_6864->children, [&](const auto &x_6866) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6867) {
        if (x_6866->meta->bb_1_has_bb_time_table) {
          auto x_6868 = x_6866->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6868, x_6866, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6579(const auto &x_6870) { return eq(x_6870->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_6577(const auto &x_6871) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6872) {
    auto x_8179 = [&](const auto &x_6873) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6874) {
        if (x_6873->meta->bb_0_has_bb_time_table) {
          auto x_6875 = x_6873->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6875, x_6873, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8179(x_6871);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6574(const auto &x_6877) {
  return neq(x_6877->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_6572(const auto &x_6882) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6883) {
    auto x_8180 = [&](const auto &x_6884) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6885) {
        if (x_6884->meta->bb_1_has_bb_time_table) {
          auto x_6886 = x_6884->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6886, x_6884, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8180(x_6882);
    MakeUnit();
    auto x_8181 = [&](const auto &x_6888) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6889) {
        if (x_6888->meta->bb_0_has_bb_time_table) {
          auto x_6890 = x_6888->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6890, x_6888, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8181(x_6882);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6569(const auto &x_6892) {
  if (!x_6892->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_6892->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_6892->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_6892->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_6567(const auto &x_6903) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6904) {
    auto x_8182 = [&](const auto &x_6905) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6906) {
        if (x_6905->meta->bb_0_has_bb_time_table) {
          auto x_6907 = x_6905->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6907, x_6905, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8182(x_6903);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6564(const auto &x_6909) {
  return neq(x_6909->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_6562(const auto &x_6914) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6915) {
    auto x_8183 = [&](const auto &x_6916) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6917) {
        if (x_6916->meta->bb_1_has_bb_time_table) {
          auto x_6918 = x_6916->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6918, x_6916, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8183(x_6914);
    MakeUnit();
    auto x_8184 = [&](const auto &x_6920) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6921) {
        if (x_6920->meta->bb_0_has_bb_time_table) {
          auto x_6922 = x_6920->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6922, x_6920, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8184(x_6914);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6559(const auto &x_6924) {
  if (!x_6924->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_6924->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_6924->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_6924->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_6557(const auto &x_6935) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6936) {
    ListIter(x_6935->children, [&](const auto &x_6937) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6938) {
        if (x_6937->meta->bb_0_has_bb_time_table) {
          auto x_6939 = x_6937->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6939, x_6937, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    ListIter(x_6935->children, [&](const auto &x_6941) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6942) {
        if (x_6941->meta->bb_2_has_bb_time_table) {
          auto x_6943 = x_6941->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6943, x_6941, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6554(const auto &x_6945) {
  if ((x_6945->parent != nullptr) &&
      (eq((x_6945->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_6945->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_6945->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_6945->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6552(const auto &x_6970) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6971) {
    ListIter(x_6970->children, [&](const auto &x_6972) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6973) {
        if (x_6972->meta->bb_0_has_bb_time_table) {
          auto x_6974 = x_6972->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6974, x_6972, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_8185 = [&](const auto &x_6976) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6977) {
        if (x_6976->meta->bb_2_has_bb_time_table) {
          auto x_6978 = x_6976->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6978, x_6976, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8185(x_6970);
    MakeUnit();
    ListIter(x_6970->children, [&](const auto &x_6980) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6981) {
        if (x_6980->meta->bb_2_has_bb_time_table) {
          auto x_6982 = x_6980->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6982, x_6980, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6549(const auto &x_6984) {
  if ((x_6984->parent != nullptr) &&
      (eq((x_6984->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_6984->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_6984->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_6984->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6547(const auto &x_7013) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7014) {
    ListIter(x_7013->children, [&](const auto &x_7015) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7016) {
        if (x_7015->meta->bb_1_has_bb_time_table) {
          auto x_7017 = x_7015->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7017, x_7015, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6544(const auto &x_7019) {
  if (x_7019->has_prop_flex_direction) {
    return x_7019->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_6542(const auto &x_7022) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7023) {
    auto x_8186 = [&](const auto &x_7026) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7027) {
        if (x_7026->meta->bb_1_has_bb_time_table) {
          auto x_7028 = x_7026->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7028, x_7026, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7022->next, [&](const auto &x_7025) { return MakeUnit(); },
        [&](const auto &x_7024) {
          auto x_8188 = x_8186;
          x_8188(x_7024);
          return MakeUnit();
        });
    auto x_8187 = [&](const auto &x_7030) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7031) {
        if (x_7030->meta->bb_2_has_bb_time_table) {
          auto x_7032 = x_7030->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7032, x_7030, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8187(x_7022);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6539(const auto &x_7034) {
  return plus((x_7034->prev != nullptr) ? ((x_7034->prev)->var_flex_shrink_sum) : (0.), x_7034->var_flex_shrink);
}
Unit var_modified_x_6537(const auto &x_7043) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7044) {
    auto x_8189 = [&](const auto &x_7047) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7048) {
        if (x_7047->meta->bb_1_has_bb_time_table) {
          auto x_7049 = x_7047->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7049, x_7047, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7043->next, [&](const auto &x_7046) { return MakeUnit(); },
        [&](const auto &x_7045) {
          auto x_8191 = x_8189;
          x_8191(x_7045);
          return MakeUnit();
        });
    auto x_8190 = [&](const auto &x_7051) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7052) {
        if (x_7051->meta->bb_2_has_bb_time_table) {
          auto x_7053 = x_7051->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7053, x_7051, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8190(x_7043);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6534(const auto &x_7055) {
  return plus((x_7055->prev != nullptr) ? ((x_7055->prev)->var_flex_grow_sum) : (0.), x_7055->var_flex_grow);
}
Unit var_modified_x_6532(const auto &x_7064) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7065) {
    auto x_8192 = [&](const auto &x_7066) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7067) {
        if (x_7066->meta->bb_1_has_bb_time_table) {
          auto x_7068 = x_7066->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7068, x_7066, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8192(x_7064);
    MakeUnit();
    auto x_8193 = [&](const auto &x_7070) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7071) {
        if (x_7070->meta->bb_2_has_bb_time_table) {
          auto x_7072 = x_7070->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7072, x_7070, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8193(x_7064);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6529(const auto &x_7074) {
  if (x_7074->has_prop_flex_shrink) {
    return (x_7074->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6527(const auto &x_7077) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7078) {
    auto x_8194 = [&](const auto &x_7079) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7080) {
        if (x_7079->meta->bb_1_has_bb_time_table) {
          auto x_7081 = x_7079->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7081, x_7079, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8194(x_7077);
    MakeUnit();
    auto x_8195 = [&](const auto &x_7083) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7084) {
        if (x_7083->meta->bb_2_has_bb_time_table) {
          auto x_7085 = x_7083->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7085, x_7083, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8195(x_7077);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6524(const auto &x_7087) {
  if (x_7087->has_prop_flex_grow) {
    return (x_7087->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6522(const auto &x_7090) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7091) {
    auto x_8196 = [&](const auto &x_7092) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7093) {
        if (x_7092->meta->bb_1_has_bb_time_table) {
          auto x_7094 = x_7092->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7094, x_7092, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8196(x_7090);
    MakeUnit();
    auto x_8197 = [&](const auto &x_7096) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7097) {
        if (x_7096->meta->bb_0_has_bb_time_table) {
          auto x_7098 = x_7096->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7098, x_7096, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8197(x_7090);
    MakeUnit();
    auto x_8198 = [&](const auto &x_7100) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7101) {
        if (x_7100->meta->bb_2_has_bb_time_table) {
          auto x_7102 = x_7100->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7102, x_7100, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8198(x_7090);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6519(const auto &x_7104) {
  if (x_7104->has_prop_position) {
    return x_7104->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_6517(const auto &x_7107) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7108) {
    auto x_8199 = [&](const auto &x_7109) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7110) {
        if (x_7109->meta->bb_1_has_bb_time_table) {
          auto x_7111 = x_7109->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7111, x_7109, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8199(x_7107);
    MakeUnit();
    ListIter(x_7107->children, [&](const auto &x_7113) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7114) {
        if (x_7113->meta->bb_1_has_bb_time_table) {
          auto x_7115 = x_7113->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7115, x_7113, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_8200 = [&](const auto &x_7117) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7118) {
        if (x_7117->meta->bb_0_has_bb_time_table) {
          auto x_7119 = x_7117->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7119, x_7117, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8200(x_7107);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6514(const auto &x_7121) {
  if (x_7121->has_prop_display) {
    return x_7121->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_6510(const auto &x_7124) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7125) {
    auto x_8201 = [&](const auto &x_7128) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7129) {
        if (x_7128->meta->bb_0_has_bb_time_table) {
          auto x_7130 = x_7128->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7130, x_7128, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_7124->next == nullptr) {
      auto x_8203 = x_8201;
      OptionMatch(
          x_7124->parent, [&](const auto &x_7127) { return MakeUnit(); },
          [&](const auto &x_7126) {
            auto x_8205 = x_8203;
            x_8205(x_7126);
            return MakeUnit();
          });
    }
    auto x_8202 = [&](const auto &x_7134) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7135) {
        if (x_7134->meta->bb_0_has_bb_time_table) {
          auto x_7136 = x_7134->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7136, x_7134, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7124->next, [&](const auto &x_7133) { return MakeUnit(); },
        [&](const auto &x_7132) {
          auto x_8204 = x_8202;
          x_8204(x_7132);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6507(const auto &x_7138) {
  if (x_7138->prev != nullptr) {
    if (x_7138->var_line_break) {
      return plus((x_7138->prev)->var_finished_intrinsic_height_sum,
                  plus((x_7138->prev)->var_intrinsic_current_line_height, x_7138->var_intrinsic_height_external));
    } else {
      return (x_7138->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_7138->var_line_break) {
      return x_7138->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6505(const auto &x_7167) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7168) {
    auto x_8206 = [&](const auto &x_7171) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7172) {
        if (x_7171->meta->bb_0_has_bb_time_table) {
          auto x_7173 = x_7171->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7173, x_7171, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_7167->next == nullptr) {
      auto x_8208 = x_8206;
      OptionMatch(
          x_7167->parent, [&](const auto &x_7170) { return MakeUnit(); },
          [&](const auto &x_7169) {
            auto x_8210 = x_8208;
            x_8210(x_7169);
            return MakeUnit();
          });
    }
    auto x_8207 = [&](const auto &x_7177) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7178) {
        if (x_7177->meta->bb_0_has_bb_time_table) {
          auto x_7179 = x_7177->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7179, x_7177, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7167->next, [&](const auto &x_7176) { return MakeUnit(); },
        [&](const auto &x_7175) {
          auto x_8209 = x_8207;
          x_8209(x_7175);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6502(const auto &x_7181) {
  if (x_7181->var_line_break) {
    return 0.;
  } else {
    return max(x_7181->var_intrinsic_height_external,
               (x_7181->prev != nullptr) ? ((x_7181->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_6500(const auto &x_7194) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7195) {
    auto x_8211 = [&](const auto &x_7198) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7199) {
        if (x_7198->meta->bb_0_has_bb_time_table) {
          auto x_7200 = x_7198->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7200, x_7198, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7194->next, [&](const auto &x_7197) { return MakeUnit(); },
        [&](const auto &x_7196) {
          auto x_8213 = x_8211;
          x_8213(x_7196);
          return MakeUnit();
        });
    auto x_8212 = [&](const auto &x_7204) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7205) {
        if (x_7204->meta->bb_2_has_bb_time_table) {
          auto x_7206 = x_7204->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7206, x_7204, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_7194->next == nullptr) {
      auto x_8214 = x_8212;
      OptionMatch(
          x_7194->parent, [&](const auto &x_7203) { return MakeUnit(); },
          [&](const auto &x_7202) {
            auto x_8215 = x_8214;
            x_8215(x_7202);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_6497(const auto &x_7208) {
  return plus((x_7208->prev != nullptr) ? ((x_7208->prev)->var_intrinsic_height_sum) : (0.),
              x_7208->var_intrinsic_height_external);
}
Unit var_modified_x_6495(const auto &x_7217) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7218) {
    auto x_8216 = [&](const auto &x_7219) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7220) {
        if (x_7219->meta->bb_0_has_bb_time_table) {
          auto x_7221 = x_7219->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7221, x_7219, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8216(x_7217);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6492(const auto &x_7223) {
  if (eq(x_7223->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_7223->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_6490(const auto &x_7232) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7233) {
    auto x_8217 = [&](const auto &x_7234) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7235) {
        if (x_7234->meta->bb_0_has_bb_time_table) {
          auto x_7236 = x_7234->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7236, x_7234, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8217(x_7232);
    MakeUnit();
    auto x_8218 = [&](const auto &x_7238) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7239) {
        if (x_7238->meta->bb_2_has_bb_time_table) {
          auto x_7240 = x_7238->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7240, x_7238, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8218(x_7232);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6487(const auto &x_7242) {
  if (eq(x_7242->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_7242->var_inside_svg) {
      return 0.;
    } else {
      if (x_7242->var_disabled) {
        return 0.;
      } else {
        if (neq(x_7242->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_7242->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_7242->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_7242->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_7242->var_height_expr.r.a0;
          } else {
            if (x_7242->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_7242->var_height_expr.r.a0;
            } else {
              return x_7242->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_7242->var_children_intrinsic_height,
              (eq(x_7242->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_7242->var_is_default_case)
                         ? (0.)
                         : ((eq(x_7242->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_7242->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_7242->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_7242->var_has_height_attr &&
                                                  (x_7242->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_7242->var_height_attr_expr.r.a0)
                                                     : ((x_7242->has_attr_viewBox)
                                                            ? (x_7242->attr_viewBox.r.a3)
                                                            : (mult((x_7242->attr_viewBox.r.a3),
                                                                    divide(x_7242->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_7242->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_7242->var_has_height_attr)
                                                            ? (x_7242->var_height_attr_expr.r.a0)
                                                            : ((x_7242->has_attr_image_height &&
                                                                (!x_7242->var_has_width_attr))
                                                                   ? (int_to_float(x_7242->attr_image_height))
                                                                   : ((neq(x_7242->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_7242->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_7242->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_7242->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_7242->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_7242->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6485(const auto &x_7387) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7388) {
    auto x_8219 = [&](const auto &x_7389) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7390) {
        if (x_7389->meta->bb_2_has_bb_time_table) {
          auto x_7391 = x_7389->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7391, x_7389, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8219(x_7387);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6482(const auto &x_7393) {
  if (eq(x_7393->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_7393->var_inside_svg || x_7393->var_disabled)) {
    return true;
  } else {
    if ((x_7393->parent != nullptr) && (x_7393->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_7393->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_7393->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_7393->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_7393->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_7393->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6480(const auto &x_7442) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7443) {
    auto x_8220 = [&](const auto &x_7444) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7445) {
        if (x_7444->meta->bb_0_has_bb_time_table) {
          auto x_7446 = x_7444->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7446, x_7444, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8220(x_7442);
    MakeUnit();
    auto x_8221 = [&](const auto &x_7448) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7449) {
        if (x_7448->meta->bb_2_has_bb_time_table) {
          auto x_7450 = x_7448->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7450, x_7448, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8221(x_7442);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6477(const auto &x_7452) {
  if (x_7452->has_prop_height) {
    return x_7452->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_6475(const auto &x_7455) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7456) {
    auto x_8222 = [&](const auto &x_7457) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7458) {
        if (x_7457->meta->bb_0_has_bb_time_table) {
          auto x_7459 = x_7457->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7459, x_7457, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8222(x_7455);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6472(const auto &x_7461) {
  if (x_7461->last != nullptr) {
    return plus((x_7461->last)->var_finished_intrinsic_height_sum, (x_7461->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6470(const auto &x_7470) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7471) {
    auto x_8223 = [&](const auto &x_7474) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7475) {
        if (x_7474->meta->bb_0_has_bb_time_table) {
          auto x_7476 = x_7474->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7476, x_7474, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7470->next, [&](const auto &x_7473) { return MakeUnit(); },
        [&](const auto &x_7472) {
          auto x_8225 = x_8223;
          x_8225(x_7472);
          return MakeUnit();
        });
    auto x_8224 = [&](const auto &x_7480) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7481) {
        if (x_7480->meta->bb_2_has_bb_time_table) {
          auto x_7482 = x_7480->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7482, x_7480, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_7470->next == nullptr) {
      auto x_8226 = x_8224;
      OptionMatch(
          x_7470->parent, [&](const auto &x_7479) { return MakeUnit(); },
          [&](const auto &x_7478) {
            auto x_8227 = x_8226;
            x_8227(x_7478);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_6467(const auto &x_7484) {
  return plus((x_7484->prev != nullptr) ? ((x_7484->prev)->var_intrinsic_width_sum) : (0.),
              x_7484->var_intrinsic_width_external);
}
Unit var_modified_x_6465(const auto &x_7493) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7494) {
    auto x_8228 = [&](const auto &x_7497) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7498) {
        if (x_7497->meta->bb_0_has_bb_time_table) {
          auto x_7499 = x_7497->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7499, x_7497, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_7493->next == nullptr) {
      auto x_8230 = x_8228;
      OptionMatch(
          x_7493->parent, [&](const auto &x_7496) { return MakeUnit(); },
          [&](const auto &x_7495) {
            auto x_8232 = x_8230;
            x_8232(x_7495);
            return MakeUnit();
          });
    }
    auto x_8229 = [&](const auto &x_7503) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7504) {
        if (x_7503->meta->bb_0_has_bb_time_table) {
          auto x_7505 = x_7503->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7505, x_7503, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7493->next, [&](const auto &x_7502) { return MakeUnit(); },
        [&](const auto &x_7501) {
          auto x_8231 = x_8229;
          x_8231(x_7501);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6462(const auto &x_7507) {
  return max(x_7507->var_intrinsic_current_line_width,
             (x_7507->prev != nullptr) ? ((x_7507->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_6460(const auto &x_7516) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7517) {
    auto x_8233 = [&](const auto &x_7518) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7519) {
        if (x_7518->meta->bb_0_has_bb_time_table) {
          auto x_7520 = x_7518->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7520, x_7518, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8233(x_7516);
    MakeUnit();
    auto x_8234 = [&](const auto &x_7524) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7525) {
        if (x_7524->meta->bb_0_has_bb_time_table) {
          auto x_7526 = x_7524->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7526, x_7524, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7516->next, [&](const auto &x_7523) { return MakeUnit(); },
        [&](const auto &x_7522) {
          auto x_8235 = x_8234;
          x_8235(x_7522);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6457(const auto &x_7528) {
  return plus(x_7528->var_intrinsic_width_external,
              ((x_7528->prev != nullptr) && (!(x_7528->prev)->var_line_break))
                  ? ((x_7528->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_6455(const auto &x_7541) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7542) {
    auto x_8236 = [&](const auto &x_7543) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7544) {
        if (x_7543->meta->bb_0_has_bb_time_table) {
          auto x_7545 = x_7543->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7545, x_7543, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8236(x_7541);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6452(const auto &x_7547) {
  if (eq(x_7547->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_7547->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_6450(const auto &x_7556) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7557) {
    auto x_8237 = [&](const auto &x_7558) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7559) {
        if (x_7558->meta->bb_0_has_bb_time_table) {
          auto x_7560 = x_7558->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7560, x_7558, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8237(x_7556);
    MakeUnit();
    auto x_8238 = [&](const auto &x_7562) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7563) {
        if (x_7562->meta->bb_2_has_bb_time_table) {
          auto x_7564 = x_7562->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7564, x_7562, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8238(x_7556);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6447(const auto &x_7566) {
  if (eq(x_7566->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_7566->var_inside_svg) {
      return 0.;
    } else {
      if (x_7566->var_disabled) {
        return 0.;
      } else {
        if (neq(x_7566->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_7566->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_7566->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_7566->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_7566->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_7566->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_7566->var_width_expr.r.a0;
          } else {
            return x_7566->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_7566->var_children_intrinsic_width,
              (eq(x_7566->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_7566->var_is_default_case)
                         ? (0.)
                         : ((eq(x_7566->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_7566->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_7566->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_7566->var_has_width_attr &&
                                                  (x_7566->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_7566->var_width_attr_expr.r.a0)
                                                     : (((!x_7566->var_has_width_attr) && x_7566->has_attr_viewBox)
                                                            ? (x_7566->attr_viewBox.r.a2)
                                                            : (mult((x_7566->attr_viewBox.r.a2),
                                                                    divide(x_7566->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_7566->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_7566->var_has_width_attr)
                                                            ? (x_7566->var_width_attr_expr.r.a0)
                                                            : ((x_7566->has_attr_image_width &&
                                                                (!x_7566->var_has_height_attr))
                                                                   ? (int_to_float(x_7566->attr_image_width))
                                                                   : ((neq(x_7566->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_7566->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_7566->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_7566->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_7566->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_7566->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6445(const auto &x_7719) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7720) {
    auto x_8239 = [&](const auto &x_7721) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7722) {
        if (x_7721->meta->bb_0_has_bb_time_table) {
          auto x_7723 = x_7721->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7723, x_7721, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8239(x_7719);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6442(const auto &x_7725) {
  if (x_7725->last != nullptr) {
    return (x_7725->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_6440(const auto &x_7730) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7731) {
    auto x_8240 = [&](const auto &x_7732) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7733) {
        if (x_7732->meta->bb_2_has_bb_time_table) {
          auto x_7734 = x_7732->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7734, x_7732, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8240(x_7730);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6437(const auto &x_7736) {
  if (eq(x_7736->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_7736->var_inside_svg || x_7736->var_disabled)) {
    return true;
  } else {
    if ((x_7736->parent != nullptr) && (x_7736->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_7736->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_7736->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_7736->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_7736->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_7736->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6435(const auto &x_7785) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7786) {
    auto x_8241 = [&](const auto &x_7787) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7788) {
        if (x_7787->meta->bb_0_has_bb_time_table) {
          auto x_7789 = x_7787->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7789, x_7787, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8241(x_7785);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6432(const auto &x_7791) {
  if (eq(x_7791->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_7791->var_inside_svg) {
      return true;
    } else {
      if (x_7791->var_disabled) {
        return true;
      } else {if ( eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_7791->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6430(const auto &x_7804) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7805) {
    auto x_8242 = [&](const auto &x_7806) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7807) {
        if (x_7806->meta->bb_0_has_bb_time_table) {
          auto x_7808 = x_7806->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7808, x_7806, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8242(x_7804);
    MakeUnit();
    auto x_8243 = [&](const auto &x_7810) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7811) {
        if (x_7810->meta->bb_2_has_bb_time_table) {
          auto x_7812 = x_7810->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7812, x_7810, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8243(x_7804);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6427(const auto &x_7814) {
  if (x_7814->has_prop_width) {
    return x_7814->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_6423(const auto &x_7817) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7818) {
    auto x_8244 = [&](const auto &x_7821) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7822) {
        if (x_7821->meta->bb_2_has_bb_time_table) {
          auto x_7823 = x_7821->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7823, x_7821, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7817->next, [&](const auto &x_7820) { return MakeUnit(); },
        [&](const auto &x_7819) {
          auto x_8245 = x_8244;
          x_8245(x_7819);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6420(const auto &x_7825) {
  if ((x_7825->prev != nullptr) && (!(x_7825->prev)->var_line_break)) {
    return max(x_7825->var_height_external, (x_7825->prev)->var_line_height);
  } else {
    return x_7825->var_height_external;
  }
}
Unit var_modified_x_6418(const auto &x_7842) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7843) {
    auto x_8246 = [&](const auto &x_7844) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7845) {
        if (x_7844->meta->bb_2_has_bb_time_table) {
          auto x_7846 = x_7844->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7846, x_7844, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8246(x_7842);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6415(const auto &x_7848) {
  if (eq(x_7848->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_7848->var_height_internal;
  }
}
Unit var_modified_x_6413(const auto &x_7857) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7858) {
    auto x_8247 = [&](const auto &x_7859) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7860) {
        if (x_7859->meta->bb_2_has_bb_time_table) {
          auto x_7861 = x_7859->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7861, x_7859, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8247(x_7857);
    MakeUnit();
    ListIter(x_7857->children, [&](const auto &x_7863) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7864) {
        if (x_7863->meta->bb_2_has_bb_time_table) {
          auto x_7865 = x_7863->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7865, x_7863, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6410(const auto &x_7867) {
  if (x_7867->var_intrinsic_height_is_height) {
    return x_7867->var_intrinsic_height_internal;
  } else {
    if ((x_7867->parent != nullptr) && (x_7867->parent)->var_is_flex_column) {
      return plus(x_7867->var_intrinsic_height_internal,
                  mult(x_7867->var_flex_amount, (x_7867->parent)->var_flex_unit));
    } else {
      if (x_7867->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_7867->var_box_height, divide(x_7867->var_height_expr.r.a0, 100.));
      } else {
        return max(x_7867->var_box_height, x_7867->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_6408(const auto &x_7920) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7921) {
    ListIter(x_7920->children, [&](const auto &x_7922) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7923) {
        if (x_7922->meta->bb_2_has_bb_time_table) {
          auto x_7924 = x_7922->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7924, x_7922, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_8248 = [&](const auto &x_7928) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7929) {
        if (x_7928->meta->bb_2_has_bb_time_table) {
          auto x_7930 = x_7928->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7930, x_7928, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7920->next, [&](const auto &x_7927) { return MakeUnit(); },
        [&](const auto &x_7926) {
          auto x_8249 = x_8248;
          x_8249(x_7926);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6405(const auto &x_7932) {
  if (x_7932->prev != nullptr) {
    if (x_7932->var_line_break || (x_7932->prev)->var_line_break) {
      return plus((x_7932->prev)->var_y, (x_7932->prev)->var_line_height);
    } else {
      return (x_7932->prev)->var_y;
    }
  } else {
    if (x_7932->parent != nullptr) {
      return (x_7932->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6403(const auto &x_7957) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7958) {
    auto x_8250 = [&](const auto &x_7961) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7962) {
        if (x_7961->meta->bb_2_has_bb_time_table) {
          auto x_7963 = x_7961->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7963, x_7961, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_7957->next, [&](const auto &x_7960) { return MakeUnit(); },
        [&](const auto &x_7959) {
          auto x_8251 = x_8250;
          x_8251(x_7959);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6400(const auto &x_7965) {
  if (eq(x_7965->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_7965->var_width_internal;
  }
}
Unit var_modified_x_6398(const auto &x_7974) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7975) {
    auto x_8252 = [&](const auto &x_7976) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7977) {
        if (x_7976->meta->bb_2_has_bb_time_table) {
          auto x_7978 = x_7976->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7978, x_7976, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8252(x_7974);
    MakeUnit();
    ListIter(x_7974->children, [&](const auto &x_7980) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_7981) {
        if (x_7980->meta->bb_2_has_bb_time_table) {
          auto x_7982 = x_7980->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_7982, x_7980, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6395(const auto &x_7984) {
  if (x_7984->var_intrinsic_width_is_width) {
    return x_7984->var_intrinsic_width_internal;
  } else {
    if ((x_7984->parent != nullptr) && (x_7984->parent)->var_is_flex_row) {
      return plus(x_7984->var_intrinsic_width_internal, mult(x_7984->var_flex_amount, (x_7984->parent)->var_flex_unit));
    } else {
      if (x_7984->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_7984->var_box_width, divide(x_7984->var_width_expr.r.a0, 100.));
      } else {
        return max(x_7984->var_box_width, x_7984->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_6393(const auto &x_8037) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_8038) {
    ListIter(x_8037->children, [&](const auto &x_8039) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8040) {
        if (x_8039->meta->bb_2_has_bb_time_table) {
          auto x_8041 = x_8039->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8041, x_8039, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_8253 = [&](const auto &x_8045) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8046) {
        if (x_8045->meta->bb_2_has_bb_time_table) {
          auto x_8047 = x_8045->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8047, x_8045, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_8037->next, [&](const auto &x_8044) { return MakeUnit(); },
        [&](const auto &x_8043) {
          auto x_8254 = x_8253;
          x_8254(x_8043);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6390(const auto &x_8049) {
  if (x_8049->prev != nullptr) {
    if (x_8049->var_line_break || (x_8049->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_8049->prev)->var_x, (x_8049->prev)->var_width_external);
    }
  } else {
    if (x_8049->parent != nullptr) {
      return (x_8049->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6388(const auto &x_8070) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_8071) {
    ListIter(x_8070->children, [&](const auto &x_8072) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8073) {
        if (x_8072->meta->bb_2_has_bb_time_table) {
          auto x_8074 = x_8072->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8074, x_8072, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6385(const auto &x_8076) {
  if (gt(x_8076->var_left_over, 0.)) {
    return divide(x_8076->var_left_over, x_8076->var_flex_grow_sum);
  } else {
    return divide(x_8076->var_left_over, x_8076->var_flex_shrink_sum);
  }
}
Unit var_modified_x_6383(const auto &x_8097) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_8098) {
    auto x_8255 = [&](const auto &x_8099) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8100) {
        if (x_8099->meta->bb_2_has_bb_time_table) {
          auto x_8101 = x_8099->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8101, x_8099, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8255(x_8097);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6380(const auto &x_8103) {
  if ((x_8103->parent != nullptr) && gt((x_8103->parent)->var_left_over, 0.)) {
    return x_8103->var_flex_grow;
  } else {
    return x_8103->var_flex_shrink;
  }
}
Unit var_modified_x_6378(const auto &x_8116) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_8117) {
    auto x_8256 = [&](const auto &x_8118) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8119) {
        if (x_8118->meta->bb_2_has_bb_time_table) {
          auto x_8120 = x_8118->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8120, x_8118, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8256(x_8116);
    MakeUnit();
    ListIter(x_8116->children, [&](const auto &x_8122) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8123) {
        if (x_8122->meta->bb_2_has_bb_time_table) {
          auto x_8124 = x_8122->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8124, x_8122, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6375(const auto &x_8126) {
  if (x_8126->var_is_flex_row) {
    return minus(x_8126->var_box_width, (x_8126->last != nullptr) ? ((x_8126->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_8126->var_box_height, (x_8126->last != nullptr) ? ((x_8126->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_6373(const auto &x_8147) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_8148) {
    auto x_8257 = [&](const auto &x_8149) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8150) {
        if (x_8149->meta->bb_2_has_bb_time_table) {
          auto x_8151 = x_8149->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8151, x_8149, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8257(x_8147);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6370(const auto &x_8153) {
  if (x_8153->parent != nullptr) {
    return (x_8153->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_6368(const auto &x_8158) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_8159) {
    auto x_8258 = [&](const auto &x_8160) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_8161) {
        if (x_8160->meta->bb_2_has_bb_time_table) {
          auto x_8162 = x_8160->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_8162, x_8160, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_8258(x_8158);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6365(const auto &x_8164) {
  if (x_8164->parent != nullptr) {
    return (x_8164->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit x_6029(const auto &x_6030, const auto &x_6031, const auto &x_6032) {
  auto x_6033 = ListHeadExn(x_6030);
  auto x_6034 = ListTailExn(x_6030);
  if (ListIsEmpty(x_6034)) {
    auto x_6035 = ListSplitN(x_6031->children, x_6033);
    OutputChangeMetric(IntAdd(layout_size_x_5978(ListNthExn(x_6031->children, x_6033)), layout_size_x_5978(x_6032)));
    x_6031->children = ListAppend(Zro(x_6035), Cons(x_6032, ListTailExn(Fst(x_6035))));
    return MakeUnit();
  } else {
    return x_6029(x_6034, ListNthExn(x_6031->children, x_6033), x_6032);
  }
}
Unit replace_layout_node_x_6028(const auto &x_6030, const auto &x_6031, const auto &x_6032) {
  return x_6029(x_6030, x_6031, x_6032);
}
Unit x_6036(const auto &x_6037, const auto &x_6038, const auto &x_6039) {
  auto x_6040 = ListHeadExn(x_6037);
  auto x_6041 = ListTailExn(x_6037);
  if (ListIsEmpty(x_6041)) {
    OutputChangeMetric(layout_size_x_5978(x_6039));
    auto x_6042 = ListSplitN(x_6038->children, x_6040);
    x_6038->children = ListAppend(Zro(x_6042), Cons(x_6039, Fst(x_6042)));
    return MakeUnit();
  } else {
    return x_6036(x_6041, ListNthExn(x_6038->children, x_6040), x_6039);
  }
}
Unit add_layout_node_x_6026(const auto &x_6037, const auto &x_6038, const auto &x_6039) {
  return x_6036(x_6037, x_6038, x_6039);
}
Unit x_6043(const auto &x_6044, const auto &x_6045, const auto &x_6046) {
  auto x_6047 = ListHeadExn(x_6044);
  auto x_6048 = ListTailExn(x_6044);
  if (ListIsEmpty(x_6048)) {
    OutputChangeMetric(layout_size_x_5978(ListNthExn(x_6045->children, x_6047)));
    auto x_6049 = ListSplitN(x_6045->children, x_6047);
    x_6045->children = ListAppend(Zro(x_6049), ListTailExn(Fst(x_6049)));
    return MakeUnit();
  } else {
    return x_6043(x_6048, ListNthExn(x_6045->children, x_6047), x_6046);
  }
}
Unit remove_layout_node_x_6024(const auto &x_6044, const auto &x_6045, const auto &x_6046) {
  return x_6043(x_6044, x_6045, x_6046);
}
Unit x_6050(const auto &x_6051, const auto &x_6052, const auto &x_6053) {
  return ListMatch(
      x_6051,
      [&](const auto &x_6056) {
        auto x_6057 = Zro(x_6053);
        auto x_6058 = Zro(x_6057);
        auto x_6059 = Fst(x_6057);
        auto x_6060 = Fst(x_6053);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_8259 = x_6058;
        if (x_8259 == "attributes") {
          std::string x_8260 = x_6059;
          if (x_8260 == "width") {
            WriteMetric();
            x_6052->has_attr_width = true;
            x_6052->attr_width = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6061) {
              if (x_6052->meta->bb_1_has_bb_time_table) {
                auto x_6062 = x_6052->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6062, x_6052, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8260 == "image_height") {
            WriteMetric();
            x_6052->has_attr_image_height = true;
            x_6052->attr_image_height = Asint64_t(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6064) {
              if (x_6052->meta->bb_0_has_bb_time_table) {
                auto x_6065 = x_6052->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6065, x_6052, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8260 == "image_width") {
            WriteMetric();
            x_6052->has_attr_image_width = true;
            x_6052->attr_image_width = Asint64_t(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6067) {
              if (x_6052->meta->bb_0_has_bb_time_table) {
                auto x_6068 = x_6052->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6068, x_6052, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8260 == "height") {
            WriteMetric();
            x_6052->has_attr_height = true;
            x_6052->attr_height = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6070) {
              if (x_6052->meta->bb_1_has_bb_time_table) {
                auto x_6071 = x_6052->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6071, x_6052, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8260 == "viewBox") {
            WriteMetric();
            x_6052->has_attr_viewBox = true;
            x_6052->attr_viewBox = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6073) {
              if (x_6052->meta->bb_0_has_bb_time_table) {
                auto x_6074 = x_6052->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6074, x_6052, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_8259 == "properties") {
          std::string x_8261 = x_6059;
          if (x_8261 == "width") {
            WriteMetric();
            x_6052->has_prop_width = true;
            x_6052->prop_width = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6076) {
              if (x_6052->meta->bb_0_has_bb_time_table) {
                auto x_6077 = x_6052->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6077, x_6052, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8261 == "flex-grow") {
            WriteMetric();
            x_6052->has_prop_flex_grow = true;
            x_6052->prop_flex_grow = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6079) {
              if (x_6052->meta->bb_1_has_bb_time_table) {
                auto x_6080 = x_6052->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6080, x_6052, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8261 == "height") {
            WriteMetric();
            x_6052->has_prop_height = true;
            x_6052->prop_height = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6082) {
              if (x_6052->meta->bb_0_has_bb_time_table) {
                auto x_6083 = x_6052->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6083, x_6052, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8261 == "display") {
            WriteMetric();
            x_6052->has_prop_display = true;
            x_6052->prop_display = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6085) {
              if (x_6052->meta->bb_1_has_bb_time_table) {
                auto x_6086 = x_6052->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6086, x_6052, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8261 == "position") {
            WriteMetric();
            x_6052->has_prop_position = true;
            x_6052->prop_position = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6088) {
              if (x_6052->meta->bb_1_has_bb_time_table) {
                auto x_6089 = x_6052->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6089, x_6052, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8261 == "flex-shrink") {
            WriteMetric();
            x_6052->has_prop_flex_shrink = true;
            x_6052->prop_flex_shrink = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6091) {
              if (x_6052->meta->bb_1_has_bb_time_table) {
                auto x_6092 = x_6052->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6092, x_6052, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8261 == "flex-direction") {
            WriteMetric();
            x_6052->has_prop_flex_direction = true;
            x_6052->prop_flex_direction = AsDEString(x_6060);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6094) {
              if (x_6052->meta->bb_1_has_bb_time_table) {
                auto x_6095 = x_6052->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6095, x_6052, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
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
      [&](const auto &x_6054, const auto &x_6055) {
        return x_6050(x_6055, ListNthExn(x_6052->children, x_6054), x_6053);
      });
}
Unit insert_value_x_6022(const auto &x_6051, const auto &x_6052, const auto &x_6053) {
  return x_6050(x_6051, x_6052, x_6053);
}
Unit x_6097(const auto &x_6098, const auto &x_6099, const auto &x_6100) {
  return ListMatch(
      x_6098,
      [&](const auto &x_6103) {
        auto x_6104 = Zro(x_6100);
        auto x_6105 = Fst(x_6100);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_8262 = x_6104;
        if (x_8262 == "attributes") {
          std::string x_8263 = x_6105;
          if (x_8263 == "width") {
            WriteMetric();
            x_6099->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6106) {
              if (x_6099->meta->bb_1_has_bb_time_table) {
                auto x_6107 = x_6099->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6107, x_6099, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8263 == "image_height") {
            WriteMetric();
            x_6099->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6109) {
              if (x_6099->meta->bb_0_has_bb_time_table) {
                auto x_6110 = x_6099->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6110, x_6099, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8263 == "image_width") {
            WriteMetric();
            x_6099->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6112) {
              if (x_6099->meta->bb_0_has_bb_time_table) {
                auto x_6113 = x_6099->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6113, x_6099, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8263 == "height") {
            WriteMetric();
            x_6099->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6115) {
              if (x_6099->meta->bb_1_has_bb_time_table) {
                auto x_6116 = x_6099->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6116, x_6099, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8263 == "viewBox") {
            WriteMetric();
            x_6099->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6118) {
              if (x_6099->meta->bb_0_has_bb_time_table) {
                auto x_6119 = x_6099->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6119, x_6099, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_8262 == "properties") {
          std::string x_8264 = x_6105;
          if (x_8264 == "width") {
            WriteMetric();
            x_6099->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6121) {
              if (x_6099->meta->bb_0_has_bb_time_table) {
                auto x_6122 = x_6099->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6122, x_6099, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8264 == "flex-grow") {
            WriteMetric();
            x_6099->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6124) {
              if (x_6099->meta->bb_1_has_bb_time_table) {
                auto x_6125 = x_6099->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6125, x_6099, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8264 == "height") {
            WriteMetric();
            x_6099->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6127) {
              if (x_6099->meta->bb_0_has_bb_time_table) {
                auto x_6128 = x_6099->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6128, x_6099, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8264 == "display") {
            WriteMetric();
            x_6099->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6130) {
              if (x_6099->meta->bb_1_has_bb_time_table) {
                auto x_6131 = x_6099->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6131, x_6099, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8264 == "position") {
            WriteMetric();
            x_6099->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6133) {
              if (x_6099->meta->bb_1_has_bb_time_table) {
                auto x_6134 = x_6099->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6134, x_6099, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8264 == "flex-shrink") {
            WriteMetric();
            x_6099->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6136) {
              if (x_6099->meta->bb_1_has_bb_time_table) {
                auto x_6137 = x_6099->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6137, x_6099, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8264 == "flex-direction") {
            WriteMetric();
            x_6099->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6139) {
              if (x_6099->meta->bb_1_has_bb_time_table) {
                auto x_6140 = x_6099->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6140, x_6099, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
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
      [&](const auto &x_6101, const auto &x_6102) {
        return x_6097(x_6102, ListNthExn(x_6099->children, x_6101), x_6100);
      });
}
Unit delete_value_x_6020(const auto &x_6098, const auto &x_6099, const auto &x_6100) {
  return x_6097(x_6098, x_6099, x_6100);
}
Unit x_6142(const auto &x_6143, const auto &x_6144, const auto &x_6145) {
  return ListMatch(
      x_6143,
      [&](const auto &x_6148) {
        auto x_6149 = Zro(x_6145);
        auto x_6150 = Zro(x_6149);
        auto x_6151 = Fst(x_6149);
        auto x_6152 = Fst(x_6145);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_8265 = x_6150;
        if (x_8265 == "attributes") {
          std::string x_8266 = x_6151;
          if (x_8266 == "width") {
            WriteMetric();
            x_6144->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6153) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6154 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6154, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_attr_width = true;
            x_6144->attr_width = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6156) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6157 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6157, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8266 == "image_height") {
            WriteMetric();
            x_6144->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6159) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6160 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6160, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_attr_image_height = true;
            x_6144->attr_image_height = Asint64_t(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6162) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6163 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6163, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8266 == "image_width") {
            WriteMetric();
            x_6144->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6165) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6166 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6166, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_attr_image_width = true;
            x_6144->attr_image_width = Asint64_t(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6168) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6169 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6169, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8266 == "height") {
            WriteMetric();
            x_6144->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6171) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6172 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6172, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_attr_height = true;
            x_6144->attr_height = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6174) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6175 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6175, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8266 == "viewBox") {
            WriteMetric();
            x_6144->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6177) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6178 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6178, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_attr_viewBox = true;
            x_6144->attr_viewBox = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6180) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6181 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6181, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_8265 == "properties") {
          std::string x_8267 = x_6151;
          if (x_8267 == "width") {
            WriteMetric();
            x_6144->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6183) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6184 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6184, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_prop_width = true;
            x_6144->prop_width = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6186) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6187 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6187, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8267 == "flex-grow") {
            WriteMetric();
            x_6144->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6189) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6190 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6190, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_prop_flex_grow = true;
            x_6144->prop_flex_grow = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6192) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6193 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6193, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8267 == "height") {
            WriteMetric();
            x_6144->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6195) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6196 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6196, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_prop_height = true;
            x_6144->prop_height = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6198) {
              if (x_6144->meta->bb_0_has_bb_time_table) {
                auto x_6199 = x_6144->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6199, x_6144, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8267 == "display") {
            WriteMetric();
            x_6144->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6201) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6202 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6202, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_prop_display = true;
            x_6144->prop_display = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6204) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6205 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6205, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8267 == "position") {
            WriteMetric();
            x_6144->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6207) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6208 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6208, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_prop_position = true;
            x_6144->prop_position = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6210) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6211 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6211, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8267 == "flex-shrink") {
            WriteMetric();
            x_6144->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6213) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6214 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6214, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_prop_flex_shrink = true;
            x_6144->prop_flex_shrink = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6216) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6217 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6217, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_8267 == "flex-direction") {
            WriteMetric();
            x_6144->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6219) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6220 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6220, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_6144->has_prop_flex_direction = true;
            x_6144->prop_flex_direction = AsDEString(x_6152);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_6222) {
              if (x_6144->meta->bb_1_has_bb_time_table) {
                auto x_6223 = x_6144->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_6223, x_6144, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
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
      [&](const auto &x_6146, const auto &x_6147) {
        return x_6142(x_6147, ListNthExn(x_6144->children, x_6146), x_6145);
      });
}
Unit replace_value_x_6018(const auto &x_6143, const auto &x_6144, const auto &x_6145) {
  return x_6142(x_6143, x_6144, x_6145);
}
Unit x_6225(const auto &x_6226, const auto &x_6227, const auto &x_6228) {
  auto x_6229 = ListHeadExn(x_6226);
  auto x_6230 = ListTailExn(x_6226);
  if (ListIsEmpty(x_6230)) {
    InputChangeMetric(IntAdd(node_size_x_5979(ListNthExn(x_6227->children, x_6229)), node_size_x_5979(x_6228)));
    auto x_6231 = ListSplitN(x_6227->children, x_6229);
    auto x_6232 = Zro(x_6231);
    auto x_6233 = Fst(x_6231);
    auto x_6234 = ListHeadExn(x_6233);
    auto x_6235 = ListTailExn(x_6233);
    x_6227->children = ListAppend(x_6232, x_6235);
    x_6234->meta->alive = false;
    OptionMatch(
        x_6234->prev, [&](const auto &x_6237) { return MakeUnit(); },
        [&](const auto &x_6236) {
          x_6236->next = ToPath(x_6234->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6234->next, [&](const auto &x_6239) { return MakeUnit(); },
        [&](const auto &x_6238) {
          x_6238->prev = ToPath(x_6234->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_6232)) {
      x_6227->first = ToPath(ListHead(x_6235));
    }
    if (ListIsEmpty(x_6235)) {
      x_6227->last = ToPath(ListLast(x_6232));
    }
    OptionMatch(
        x_6234->next, [&](const auto &x_6244) { return MakeUnit(); },
        [&](const auto &x_6240) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6241) {
            if (x_6240->meta->bb_1_has_bb_time_table) {
              auto x_6242 = x_6240->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6242, x_6240, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_6227->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6245) {
        if (x_6227->meta->bb_0_has_bb_time_table) {
          auto x_6246 = x_6227->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6246, x_6227, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6235)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6248) {
        if (x_6227->meta->bb_0_has_bb_time_table) {
          auto x_6249 = x_6227->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6249, x_6227, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6234->next, [&](const auto &x_6255) { return MakeUnit(); },
        [&](const auto &x_6251) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6252) {
            if (x_6251->meta->bb_0_has_bb_time_table) {
              auto x_6253 = x_6251->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6253, x_6251, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_6227->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6256) {
        if (x_6227->meta->bb_2_has_bb_time_table) {
          auto x_6257 = x_6227->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6257, x_6227, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6235)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6259) {
        if (x_6227->meta->bb_2_has_bb_time_table) {
          auto x_6260 = x_6227->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6260, x_6227, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6234->next, [&](const auto &x_6266) { return MakeUnit(); },
        [&](const auto &x_6262) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6263) {
            if (x_6262->meta->bb_2_has_bb_time_table) {
              auto x_6264 = x_6262->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6264, x_6262, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    auto x_6267 = ListSplitN(x_6227->children, x_6229);
    auto x_6268 = Zro(x_6267);
    auto x_6269 = Fst(x_6267);
    x_6227->children = ListAppend(x_6268, Cons(x_6228, x_6269));
    if (ListIsEmpty(x_6268)) {
      x_6227->first = x_6228.get();
    }
    if (ListIsEmpty(x_6269)) {
      x_6227->last = x_6228.get();
    }
    OptionMatch(
        ListLast(x_6268),
        [&](const auto &x_6271) {
          x_6228->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6270) {
          x_6228->prev = x_6270.get();
          x_6270->next = x_6228.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6269),
        [&](const auto &x_6273) {
          x_6228->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6272) {
          x_6228->next = x_6272.get();
          x_6272->prev = x_6228.get();
          return MakeUnit();
        });
    x_6228->parent = x_6227.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_6274) {
      auto x_6275 = (x_6228->parent);
      if (x_6275->meta->pass_0_has_proc_time_table) {
        auto x_6278 = OptionMatch(
            x_6228->prev, [&](const auto &x_6277) { return NextTotalOrder(x_6275->meta->bb_1_bb_time_table); },
            [&](const auto &x_6276) { return NextTotalOrder(x_6276->meta->pass_0_proc_time_table); });
        x_6228->meta->pass_0_has_proc_time_table = true;
        x_6228->meta->pass_0_proc_time_table = x_6278;
        MetaWriteMetric();
        return QueueForcePush(x_6278, x_6228, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_6228->next, [&](const auto &x_6284) { return MakeUnit(); },
        [&](const auto &x_6280) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6281) {
            if (x_6280->meta->bb_1_has_bb_time_table) {
              auto x_6282 = x_6280->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6282, x_6280, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_6227->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6285) {
        if (x_6227->meta->bb_0_has_bb_time_table) {
          auto x_6286 = x_6227->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6286, x_6227, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6269)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6288) {
        if (x_6227->meta->bb_0_has_bb_time_table) {
          auto x_6289 = x_6227->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6289, x_6227, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6228->next, [&](const auto &x_6295) { return MakeUnit(); },
        [&](const auto &x_6291) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6292) {
            if (x_6291->meta->bb_0_has_bb_time_table) {
              auto x_6293 = x_6291->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6293, x_6291, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_6296) {
      auto x_6297 = (x_6228->parent);
      if (x_6297->meta->pass_1_has_proc_time_table) {
        auto x_6300 = OptionMatch(
            x_6228->prev, [&](const auto &x_6299) { return NextTotalOrder(x_6297->meta->bb_2_bb_time_table); },
            [&](const auto &x_6298) { return NextTotalOrder(x_6298->meta->pass_1_proc_time_table); });
        x_6228->meta->pass_1_has_proc_time_table = true;
        x_6228->meta->pass_1_proc_time_table = x_6300;
        MetaWriteMetric();
        return QueueForcePush(x_6300, x_6228, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_6227->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6302) {
        if (x_6227->meta->bb_2_has_bb_time_table) {
          auto x_6303 = x_6227->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6303, x_6227, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6269)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6305) {
        if (x_6227->meta->bb_2_has_bb_time_table) {
          auto x_6306 = x_6227->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6306, x_6227, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6228->next, [&](const auto &x_6312) { return MakeUnit(); },
        [&](const auto &x_6308) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6309) {
            if (x_6308->meta->bb_2_has_bb_time_table) {
              auto x_6310 = x_6308->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6310, x_6308, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_6225(x_6230, ListNthExn(x_6227->children, x_6229), x_6228);
  }
}
Unit replace_node_x_6016(const auto &x_6226, const auto &x_6227, const auto &x_6228) {
  return x_6225(x_6226, x_6227, x_6228);
}
Unit x_6313(const auto &x_6314) {
  ListIter2(x_6314->children, [&](const auto &x_6315, const auto &x_6316) {
    x_6315->parent = x_6314.get();
    x_6316->parent = x_6314.get();
    x_6315->next = x_6316.get();
    x_6316->prev = x_6315.get();
    x_6313(x_6315);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6314->children),
      [&](const auto &x_6318) {
        x_6314->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6317) {
        x_6314->first = x_6317.get();
        x_6317->parent = x_6314.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6314->children),
      [&](const auto &x_6320) {
        x_6314->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6319) {
        x_6314->last = x_6319.get();
        x_6319->parent = x_6314.get();
        x_6313(x_6319);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6014(const auto &x_6314) { return x_6313(x_6314); }
Unit x_6321(const auto &x_6322, const auto &x_6323, const auto &x_6324) {
  auto x_6325 = ListHeadExn(x_6322);
  auto x_6326 = ListTailExn(x_6322);
  if (ListIsEmpty(x_6326)) {
    InputChangeMetric(node_size_x_5979(ListNthExn(x_6323->children, x_6325)));
    auto x_6327 = ListSplitN(x_6323->children, x_6325);
    auto x_6328 = Zro(x_6327);
    auto x_6329 = Fst(x_6327);
    auto x_6330 = ListHeadExn(x_6329);
    auto x_6331 = ListTailExn(x_6329);
    x_6323->children = ListAppend(x_6328, x_6331);
    x_6330->meta->alive = false;
    OptionMatch(
        x_6330->prev, [&](const auto &x_6333) { return MakeUnit(); },
        [&](const auto &x_6332) {
          x_6332->next = ToPath(x_6330->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6330->next, [&](const auto &x_6335) { return MakeUnit(); },
        [&](const auto &x_6334) {
          x_6334->prev = ToPath(x_6330->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_6328)) {
      x_6323->first = ToPath(ListHead(x_6331));
    }
    if (ListIsEmpty(x_6331)) {
      x_6323->last = ToPath(ListLast(x_6328));
    }
    OptionMatch(
        x_6330->next, [&](const auto &x_6340) { return MakeUnit(); },
        [&](const auto &x_6336) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6337) {
            if (x_6336->meta->bb_1_has_bb_time_table) {
              auto x_6338 = x_6336->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6338, x_6336, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_6323->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6341) {
        if (x_6323->meta->bb_0_has_bb_time_table) {
          auto x_6342 = x_6323->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6342, x_6323, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6331)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6344) {
        if (x_6323->meta->bb_0_has_bb_time_table) {
          auto x_6345 = x_6323->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6345, x_6323, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6330->next, [&](const auto &x_6351) { return MakeUnit(); },
        [&](const auto &x_6347) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6348) {
            if (x_6347->meta->bb_0_has_bb_time_table) {
              auto x_6349 = x_6347->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6349, x_6347, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_6323->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6352) {
        if (x_6323->meta->bb_2_has_bb_time_table) {
          auto x_6353 = x_6323->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6353, x_6323, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6331)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6355) {
        if (x_6323->meta->bb_2_has_bb_time_table) {
          auto x_6356 = x_6323->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6356, x_6323, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6330->next, [&](const auto &x_6362) { return MakeUnit(); },
        [&](const auto &x_6358) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6359) {
            if (x_6358->meta->bb_2_has_bb_time_table) {
              auto x_6360 = x_6358->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6360, x_6358, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_6321(x_6326, ListNthExn(x_6323->children, x_6325), x_6324);
  }
}
Unit remove_node_x_6012(const auto &x_6322, const auto &x_6323, const auto &x_6324) {
  return x_6321(x_6322, x_6323, x_6324);
}
Unit eval_stmts_x_6007(const auto &x_6363) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6364) {
    WriteMetric();
    auto x_6366 = eval_expr_x_6365(x_6363);
    if (x_6363->has_var_box_width) {
      auto x_6367 = x_6363->var_box_width;
      if (!EqualValue(x_6367, x_6366)) {
        var_modified_x_6368(x_6363);
      }
    }
    x_6363->has_var_box_width = true;
    x_6363->var_box_width = Asdouble(x_6366);
    WriteMetric();
    auto x_6371 = eval_expr_x_6370(x_6363);
    if (x_6363->has_var_box_height) {
      auto x_6372 = x_6363->var_box_height;
      if (!EqualValue(x_6372, x_6371)) {
        var_modified_x_6373(x_6363);
      }
    }
    x_6363->has_var_box_height = true;
    x_6363->var_box_height = Asdouble(x_6371);
    WriteMetric();
    auto x_6376 = eval_expr_x_6375(x_6363);
    if (x_6363->has_var_left_over) {
      auto x_6377 = x_6363->var_left_over;
      if (!EqualValue(x_6377, x_6376)) {
        var_modified_x_6378(x_6363);
      }
    }
    x_6363->has_var_left_over = true;
    x_6363->var_left_over = Asdouble(x_6376);
    WriteMetric();
    auto x_6381 = eval_expr_x_6380(x_6363);
    if (x_6363->has_var_flex_amount) {
      auto x_6382 = x_6363->var_flex_amount;
      if (!EqualValue(x_6382, x_6381)) {
        var_modified_x_6383(x_6363);
      }
    }
    x_6363->has_var_flex_amount = true;
    x_6363->var_flex_amount = Asdouble(x_6381);
    WriteMetric();
    auto x_6386 = eval_expr_x_6385(x_6363);
    if (x_6363->has_var_flex_unit) {
      auto x_6387 = x_6363->var_flex_unit;
      if (!EqualValue(x_6387, x_6386)) {
        var_modified_x_6388(x_6363);
      }
    }
    x_6363->has_var_flex_unit = true;
    x_6363->var_flex_unit = Asdouble(x_6386);
    WriteMetric();
    auto x_6391 = eval_expr_x_6390(x_6363);
    if (x_6363->has_var_x) {
      auto x_6392 = x_6363->var_x;
      if (!EqualValue(x_6392, x_6391)) {
        var_modified_x_6393(x_6363);
      }
    }
    x_6363->has_var_x = true;
    x_6363->var_x = Asdouble(x_6391);
    WriteMetric();
    auto x_6396 = eval_expr_x_6395(x_6363);
    if (x_6363->has_var_width_internal) {
      auto x_6397 = x_6363->var_width_internal;
      if (!EqualValue(x_6397, x_6396)) {
        var_modified_x_6398(x_6363);
      }
    }
    x_6363->has_var_width_internal = true;
    x_6363->var_width_internal = Asdouble(x_6396);
    WriteMetric();
    auto x_6401 = eval_expr_x_6400(x_6363);
    if (x_6363->has_var_width_external) {
      auto x_6402 = x_6363->var_width_external;
      if (!EqualValue(x_6402, x_6401)) {
        var_modified_x_6403(x_6363);
      }
    }
    x_6363->has_var_width_external = true;
    x_6363->var_width_external = Asdouble(x_6401);
    WriteMetric();
    auto x_6406 = eval_expr_x_6405(x_6363);
    if (x_6363->has_var_y) {
      auto x_6407 = x_6363->var_y;
      if (!EqualValue(x_6407, x_6406)) {
        var_modified_x_6408(x_6363);
      }
    }
    x_6363->has_var_y = true;
    x_6363->var_y = Asdouble(x_6406);
    WriteMetric();
    auto x_6411 = eval_expr_x_6410(x_6363);
    if (x_6363->has_var_height_internal) {
      auto x_6412 = x_6363->var_height_internal;
      if (!EqualValue(x_6412, x_6411)) {
        var_modified_x_6413(x_6363);
      }
    }
    x_6363->has_var_height_internal = true;
    x_6363->var_height_internal = Asdouble(x_6411);
    WriteMetric();
    auto x_6416 = eval_expr_x_6415(x_6363);
    if (x_6363->has_var_height_external) {
      auto x_6417 = x_6363->var_height_external;
      if (!EqualValue(x_6417, x_6416)) {
        var_modified_x_6418(x_6363);
      }
    }
    x_6363->has_var_height_external = true;
    x_6363->var_height_external = Asdouble(x_6416);
    WriteMetric();
    auto x_6421 = eval_expr_x_6420(x_6363);
    if (x_6363->has_var_line_height) {
      auto x_6422 = x_6363->var_line_height;
      if (!EqualValue(x_6422, x_6421)) {
        var_modified_x_6423(x_6363);
      }
    }
    x_6363->has_var_line_height = true;
    x_6363->var_line_height = Asdouble(x_6421);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_6006(const auto &x_6425) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6426) {
    WriteMetric();
    auto x_6428 = eval_expr_x_6427(x_6425);
    if (x_6425->has_var_width_expr) {
      auto x_6429 = x_6425->var_width_expr;
      if (!EqualValue(x_6429, x_6428)) {
        var_modified_x_6430(x_6425);
      }
    }
    x_6425->has_var_width_expr = true;
    x_6425->var_width_expr = AsDEString(x_6428);
    WriteMetric();
    auto x_6433 = eval_expr_x_6432(x_6425);
    if (x_6425->has_var_is_default_case) {
      auto x_6434 = x_6425->var_is_default_case;
      if (!EqualValue(x_6434, x_6433)) {
        var_modified_x_6435(x_6425);
      }
    }
    x_6425->has_var_is_default_case = true;
    x_6425->var_is_default_case = Asbool(x_6433);
    WriteMetric();
    auto x_6438 = eval_expr_x_6437(x_6425);
    if (x_6425->has_var_intrinsic_width_is_width) {
      auto x_6439 = x_6425->var_intrinsic_width_is_width;
      if (!EqualValue(x_6439, x_6438)) {
        var_modified_x_6440(x_6425);
      }
    }
    x_6425->has_var_intrinsic_width_is_width = true;
    x_6425->var_intrinsic_width_is_width = Asbool(x_6438);
    WriteMetric();
    auto x_6443 = eval_expr_x_6442(x_6425);
    if (x_6425->has_var_children_intrinsic_width) {
      auto x_6444 = x_6425->var_children_intrinsic_width;
      if (!EqualValue(x_6444, x_6443)) {
        var_modified_x_6445(x_6425);
      }
    }
    x_6425->has_var_children_intrinsic_width = true;
    x_6425->var_children_intrinsic_width = Asdouble(x_6443);
    WriteMetric();
    auto x_6448 = eval_expr_x_6447(x_6425);
    if (x_6425->has_var_intrinsic_width_internal) {
      auto x_6449 = x_6425->var_intrinsic_width_internal;
      if (!EqualValue(x_6449, x_6448)) {
        var_modified_x_6450(x_6425);
      }
    }
    x_6425->has_var_intrinsic_width_internal = true;
    x_6425->var_intrinsic_width_internal = Asdouble(x_6448);
    WriteMetric();
    auto x_6453 = eval_expr_x_6452(x_6425);
    if (x_6425->has_var_intrinsic_width_external) {
      auto x_6454 = x_6425->var_intrinsic_width_external;
      if (!EqualValue(x_6454, x_6453)) {
        var_modified_x_6455(x_6425);
      }
    }
    x_6425->has_var_intrinsic_width_external = true;
    x_6425->var_intrinsic_width_external = Asdouble(x_6453);
    WriteMetric();
    auto x_6458 = eval_expr_x_6457(x_6425);
    if (x_6425->has_var_intrinsic_current_line_width) {
      auto x_6459 = x_6425->var_intrinsic_current_line_width;
      if (!EqualValue(x_6459, x_6458)) {
        var_modified_x_6460(x_6425);
      }
    }
    x_6425->has_var_intrinsic_current_line_width = true;
    x_6425->var_intrinsic_current_line_width = Asdouble(x_6458);
    WriteMetric();
    auto x_6463 = eval_expr_x_6462(x_6425);
    if (x_6425->has_var_intrinsic_width_max) {
      auto x_6464 = x_6425->var_intrinsic_width_max;
      if (!EqualValue(x_6464, x_6463)) {
        var_modified_x_6465(x_6425);
      }
    }
    x_6425->has_var_intrinsic_width_max = true;
    x_6425->var_intrinsic_width_max = Asdouble(x_6463);
    WriteMetric();
    auto x_6468 = eval_expr_x_6467(x_6425);
    if (x_6425->has_var_intrinsic_width_sum) {
      auto x_6469 = x_6425->var_intrinsic_width_sum;
      if (!EqualValue(x_6469, x_6468)) {
        var_modified_x_6470(x_6425);
      }
    }
    x_6425->has_var_intrinsic_width_sum = true;
    x_6425->var_intrinsic_width_sum = Asdouble(x_6468);
    WriteMetric();
    auto x_6473 = eval_expr_x_6472(x_6425);
    if (x_6425->has_var_children_intrinsic_height) {
      auto x_6474 = x_6425->var_children_intrinsic_height;
      if (!EqualValue(x_6474, x_6473)) {
        var_modified_x_6475(x_6425);
      }
    }
    x_6425->has_var_children_intrinsic_height = true;
    x_6425->var_children_intrinsic_height = Asdouble(x_6473);
    WriteMetric();
    auto x_6478 = eval_expr_x_6477(x_6425);
    if (x_6425->has_var_height_expr) {
      auto x_6479 = x_6425->var_height_expr;
      if (!EqualValue(x_6479, x_6478)) {
        var_modified_x_6480(x_6425);
      }
    }
    x_6425->has_var_height_expr = true;
    x_6425->var_height_expr = AsDEString(x_6478);
    WriteMetric();
    auto x_6483 = eval_expr_x_6482(x_6425);
    if (x_6425->has_var_intrinsic_height_is_height) {
      auto x_6484 = x_6425->var_intrinsic_height_is_height;
      if (!EqualValue(x_6484, x_6483)) {
        var_modified_x_6485(x_6425);
      }
    }
    x_6425->has_var_intrinsic_height_is_height = true;
    x_6425->var_intrinsic_height_is_height = Asbool(x_6483);
    WriteMetric();
    auto x_6488 = eval_expr_x_6487(x_6425);
    if (x_6425->has_var_intrinsic_height_internal) {
      auto x_6489 = x_6425->var_intrinsic_height_internal;
      if (!EqualValue(x_6489, x_6488)) {
        var_modified_x_6490(x_6425);
      }
    }
    x_6425->has_var_intrinsic_height_internal = true;
    x_6425->var_intrinsic_height_internal = Asdouble(x_6488);
    WriteMetric();
    auto x_6493 = eval_expr_x_6492(x_6425);
    if (x_6425->has_var_intrinsic_height_external) {
      auto x_6494 = x_6425->var_intrinsic_height_external;
      if (!EqualValue(x_6494, x_6493)) {
        var_modified_x_6495(x_6425);
      }
    }
    x_6425->has_var_intrinsic_height_external = true;
    x_6425->var_intrinsic_height_external = Asdouble(x_6493);
    WriteMetric();
    auto x_6498 = eval_expr_x_6497(x_6425);
    if (x_6425->has_var_intrinsic_height_sum) {
      auto x_6499 = x_6425->var_intrinsic_height_sum;
      if (!EqualValue(x_6499, x_6498)) {
        var_modified_x_6500(x_6425);
      }
    }
    x_6425->has_var_intrinsic_height_sum = true;
    x_6425->var_intrinsic_height_sum = Asdouble(x_6498);
    WriteMetric();
    auto x_6503 = eval_expr_x_6502(x_6425);
    if (x_6425->has_var_intrinsic_current_line_height) {
      auto x_6504 = x_6425->var_intrinsic_current_line_height;
      if (!EqualValue(x_6504, x_6503)) {
        var_modified_x_6505(x_6425);
      }
    }
    x_6425->has_var_intrinsic_current_line_height = true;
    x_6425->var_intrinsic_current_line_height = Asdouble(x_6503);
    WriteMetric();
    auto x_6508 = eval_expr_x_6507(x_6425);
    if (x_6425->has_var_finished_intrinsic_height_sum) {
      auto x_6509 = x_6425->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_6509, x_6508)) {
        var_modified_x_6510(x_6425);
      }
    }
    x_6425->has_var_finished_intrinsic_height_sum = true;
    x_6425->var_finished_intrinsic_height_sum = Asdouble(x_6508);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_6005(const auto &x_6512) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6513) {
    WriteMetric();
    auto x_6515 = eval_expr_x_6514(x_6512);
    if (x_6512->has_var_display) {
      auto x_6516 = x_6512->var_display;
      if (!EqualValue(x_6516, x_6515)) {
        var_modified_x_6517(x_6512);
      }
    }
    x_6512->has_var_display = true;
    x_6512->var_display = AsDEString(x_6515);
    WriteMetric();
    auto x_6520 = eval_expr_x_6519(x_6512);
    if (x_6512->has_var_position) {
      auto x_6521 = x_6512->var_position;
      if (!EqualValue(x_6521, x_6520)) {
        var_modified_x_6522(x_6512);
      }
    }
    x_6512->has_var_position = true;
    x_6512->var_position = AsDEString(x_6520);
    WriteMetric();
    auto x_6525 = eval_expr_x_6524(x_6512);
    if (x_6512->has_var_flex_grow) {
      auto x_6526 = x_6512->var_flex_grow;
      if (!EqualValue(x_6526, x_6525)) {
        var_modified_x_6527(x_6512);
      }
    }
    x_6512->has_var_flex_grow = true;
    x_6512->var_flex_grow = Asdouble(x_6525);
    WriteMetric();
    auto x_6530 = eval_expr_x_6529(x_6512);
    if (x_6512->has_var_flex_shrink) {
      auto x_6531 = x_6512->var_flex_shrink;
      if (!EqualValue(x_6531, x_6530)) {
        var_modified_x_6532(x_6512);
      }
    }
    x_6512->has_var_flex_shrink = true;
    x_6512->var_flex_shrink = Asdouble(x_6530);
    WriteMetric();
    auto x_6535 = eval_expr_x_6534(x_6512);
    if (x_6512->has_var_flex_grow_sum) {
      auto x_6536 = x_6512->var_flex_grow_sum;
      if (!EqualValue(x_6536, x_6535)) {
        var_modified_x_6537(x_6512);
      }
    }
    x_6512->has_var_flex_grow_sum = true;
    x_6512->var_flex_grow_sum = Asdouble(x_6535);
    WriteMetric();
    auto x_6540 = eval_expr_x_6539(x_6512);
    if (x_6512->has_var_flex_shrink_sum) {
      auto x_6541 = x_6512->var_flex_shrink_sum;
      if (!EqualValue(x_6541, x_6540)) {
        var_modified_x_6542(x_6512);
      }
    }
    x_6512->has_var_flex_shrink_sum = true;
    x_6512->var_flex_shrink_sum = Asdouble(x_6540);
    WriteMetric();
    auto x_6545 = eval_expr_x_6544(x_6512);
    if (x_6512->has_var_flex_direction) {
      auto x_6546 = x_6512->var_flex_direction;
      if (!EqualValue(x_6546, x_6545)) {
        var_modified_x_6547(x_6512);
      }
    }
    x_6512->has_var_flex_direction = true;
    x_6512->var_flex_direction = AsDEString(x_6545);
    WriteMetric();
    auto x_6550 = eval_expr_x_6549(x_6512);
    if (x_6512->has_var_is_flex_row) {
      auto x_6551 = x_6512->var_is_flex_row;
      if (!EqualValue(x_6551, x_6550)) {
        var_modified_x_6552(x_6512);
      }
    }
    x_6512->has_var_is_flex_row = true;
    x_6512->var_is_flex_row = Asbool(x_6550);
    WriteMetric();
    auto x_6555 = eval_expr_x_6554(x_6512);
    if (x_6512->has_var_is_flex_column) {
      auto x_6556 = x_6512->var_is_flex_column;
      if (!EqualValue(x_6556, x_6555)) {
        var_modified_x_6557(x_6512);
      }
    }
    x_6512->has_var_is_flex_column = true;
    x_6512->var_is_flex_column = Asbool(x_6555);
    WriteMetric();
    auto x_6560 = eval_expr_x_6559(x_6512);
    if (x_6512->has_var_width_attr_expr) {
      auto x_6561 = x_6512->var_width_attr_expr;
      if (!EqualValue(x_6561, x_6560)) {
        var_modified_x_6562(x_6512);
      }
    }
    x_6512->has_var_width_attr_expr = true;
    x_6512->var_width_attr_expr = AsDEString(x_6560);
    WriteMetric();
    auto x_6565 = eval_expr_x_6564(x_6512);
    if (x_6512->has_var_has_width_attr) {
      auto x_6566 = x_6512->var_has_width_attr;
      if (!EqualValue(x_6566, x_6565)) {
        var_modified_x_6567(x_6512);
      }
    }
    x_6512->has_var_has_width_attr = true;
    x_6512->var_has_width_attr = Asbool(x_6565);
    WriteMetric();
    auto x_6570 = eval_expr_x_6569(x_6512);
    if (x_6512->has_var_height_attr_expr) {
      auto x_6571 = x_6512->var_height_attr_expr;
      if (!EqualValue(x_6571, x_6570)) {
        var_modified_x_6572(x_6512);
      }
    }
    x_6512->has_var_height_attr_expr = true;
    x_6512->var_height_attr_expr = AsDEString(x_6570);
    WriteMetric();
    auto x_6575 = eval_expr_x_6574(x_6512);
    if (x_6512->has_var_has_height_attr) {
      auto x_6576 = x_6512->var_has_height_attr;
      if (!EqualValue(x_6576, x_6575)) {
        var_modified_x_6577(x_6512);
      }
    }
    x_6512->has_var_has_height_attr = true;
    x_6512->var_has_height_attr = Asbool(x_6575);
    WriteMetric();
    auto x_6580 = eval_expr_x_6579(x_6512);
    if (x_6512->has_var_is_svg_block) {
      auto x_6581 = x_6512->var_is_svg_block;
      if (!EqualValue(x_6581, x_6580)) {
        var_modified_x_6582(x_6512);
      }
    }
    x_6512->has_var_is_svg_block = true;
    x_6512->var_is_svg_block = Asbool(x_6580);
    WriteMetric();
    auto x_6585 = eval_expr_x_6584(x_6512);
    if (x_6512->has_var_inside_svg) {
      auto x_6586 = x_6512->var_inside_svg;
      if (!EqualValue(x_6586, x_6585)) {
        var_modified_x_6587(x_6512);
      }
    }
    x_6512->has_var_inside_svg = true;
    x_6512->var_inside_svg = Asbool(x_6585);
    WriteMetric();
    auto x_6590 = eval_expr_x_6589(x_6512);
    if (x_6512->has_var_disabled) {
      auto x_6591 = x_6512->var_disabled;
      if (!EqualValue(x_6591, x_6590)) {
        var_modified_x_6592(x_6512);
      }
    }
    x_6512->has_var_disabled = true;
    x_6512->var_disabled = Asbool(x_6590);
    WriteMetric();
    auto x_6595 = eval_expr_x_6594(x_6512);
    if (x_6512->has_var_visible) {
      auto x_6596 = x_6512->var_visible;
      if (!EqualValue(x_6596, x_6595)) {
        var_modified_x_6597(x_6512);
      }
    }
    x_6512->has_var_visible = true;
    x_6512->var_visible = Asbool(x_6595);
    WriteMetric();
    auto x_6600 = eval_expr_x_6599(x_6512);
    if (x_6512->has_var_line_break) {
      auto x_6601 = x_6512->var_line_break;
      if (!EqualValue(x_6601, x_6600)) {
        var_modified_x_6602(x_6512);
      }
    }
    x_6512->has_var_line_break = true;
    x_6512->var_line_break = Asbool(x_6600);
    return MakeUnit();
  })));
}
Unit x_6604(const auto &x_6605, const auto &x_6606, const auto &x_6607) {
  auto x_6608 = ListHeadExn(x_6605);
  auto x_6609 = ListTailExn(x_6605);
  if (ListIsEmpty(x_6609)) {
    InputChangeMetric(node_size_x_5979(x_6607));
    auto x_6610 = ListSplitN(x_6606->children, x_6608);
    auto x_6611 = Zro(x_6610);
    auto x_6612 = Fst(x_6610);
    x_6606->children = ListAppend(x_6611, Cons(x_6607, x_6612));
    if (ListIsEmpty(x_6611)) {
      x_6606->first = x_6607.get();
    }
    if (ListIsEmpty(x_6612)) {
      x_6606->last = x_6607.get();
    }
    OptionMatch(
        ListLast(x_6611),
        [&](const auto &x_6614) {
          x_6607->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6613) {
          x_6607->prev = x_6613.get();
          x_6613->next = x_6607.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6612),
        [&](const auto &x_6616) {
          x_6607->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6615) {
          x_6607->next = x_6615.get();
          x_6615->prev = x_6607.get();
          return MakeUnit();
        });
    x_6607->parent = x_6606.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_6617) {
      auto x_6618 = (x_6607->parent);
      if (x_6618->meta->pass_0_has_proc_time_table) {
        auto x_6621 = OptionMatch(
            x_6607->prev, [&](const auto &x_6620) { return NextTotalOrder(x_6618->meta->bb_1_bb_time_table); },
            [&](const auto &x_6619) { return NextTotalOrder(x_6619->meta->pass_0_proc_time_table); });
        x_6607->meta->pass_0_has_proc_time_table = true;
        x_6607->meta->pass_0_proc_time_table = x_6621;
        MetaWriteMetric();
        return QueueForcePush(x_6621, x_6607, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_6607->next, [&](const auto &x_6627) { return MakeUnit(); },
        [&](const auto &x_6623) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6624) {
            if (x_6623->meta->bb_1_has_bb_time_table) {
              auto x_6625 = x_6623->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6625, x_6623, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_6606->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6628) {
        if (x_6606->meta->bb_0_has_bb_time_table) {
          auto x_6629 = x_6606->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6629, x_6606, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6612)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6631) {
        if (x_6606->meta->bb_0_has_bb_time_table) {
          auto x_6632 = x_6606->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6632, x_6606, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6607->next, [&](const auto &x_6638) { return MakeUnit(); },
        [&](const auto &x_6634) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6635) {
            if (x_6634->meta->bb_0_has_bb_time_table) {
              auto x_6636 = x_6634->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6636, x_6634, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_6639) {
      auto x_6640 = (x_6607->parent);
      if (x_6640->meta->pass_1_has_proc_time_table) {
        auto x_6643 = OptionMatch(
            x_6607->prev, [&](const auto &x_6642) { return NextTotalOrder(x_6640->meta->bb_2_bb_time_table); },
            [&](const auto &x_6641) { return NextTotalOrder(x_6641->meta->pass_1_proc_time_table); });
        x_6607->meta->pass_1_has_proc_time_table = true;
        x_6607->meta->pass_1_proc_time_table = x_6643;
        MetaWriteMetric();
        return QueueForcePush(x_6643, x_6607, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_6606->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6645) {
        if (x_6606->meta->bb_2_has_bb_time_table) {
          auto x_6646 = x_6606->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6646, x_6606, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_6612)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_6648) {
        if (x_6606->meta->bb_2_has_bb_time_table) {
          auto x_6649 = x_6606->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_6649, x_6606, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_6607->next, [&](const auto &x_6655) { return MakeUnit(); },
        [&](const auto &x_6651) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_6652) {
            if (x_6651->meta->bb_2_has_bb_time_table) {
              auto x_6653 = x_6651->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_6653, x_6651, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_6604(x_6609, ListNthExn(x_6606->children, x_6608), x_6607);
  }
}
Unit add_node_x_6000(const auto &x_6605, const auto &x_6606, const auto &x_6607) {
  return x_6604(x_6605, x_6606, x_6607);
}
Unit x_6656(const auto &x_6657) {
  ListIter2(x_6657->children, [&](const auto &x_6658, const auto &x_6659) {
    x_6658->parent = x_6657.get();
    x_6659->parent = x_6657.get();
    x_6658->next = x_6659.get();
    x_6659->prev = x_6658.get();
    x_6656(x_6658);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6657->children),
      [&](const auto &x_6661) {
        x_6657->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6660) {
        x_6657->first = x_6660.get();
        x_6660->parent = x_6657.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6657->children),
      [&](const auto &x_6663) {
        x_6657->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6662) {
        x_6657->last = x_6662.get();
        x_6662->parent = x_6657.get();
        x_6656(x_6662);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_5998(const auto &x_6657) { return x_6656(x_6657); }
Unit eval_stmts_x_5994(const auto &x_6664) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6665) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_6666) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_6664->meta->bb_2_has_bb_time_table = true;
      x_6664->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_6007(x_6664);
      return MakeUnit();
    })));
    ListIter(x_6664->children, [&](const auto &x_6667) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6668) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_5994(x_6667);
        x_6667->meta->pass_1_has_proc_time_table = true;
        x_6667->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_5992(const auto &x_6669) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6670) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_6671) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_6669->meta->bb_1_has_bb_time_table = true;
      x_6669->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_6005(x_6669);
      return MakeUnit();
    })));
    ListIter(x_6669->children, [&](const auto &x_6672) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_6673) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_5992(x_6672);
        x_6672->meta->pass_0_has_proc_time_table = true;
        x_6672->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_6674) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_6669->meta->bb_0_has_bb_time_table = true;
      x_6669->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_6006(x_6669);
      return MakeUnit();
    })));
    return MakeUnit();
  })));
}
Unit x_6675(const auto &x_6676) {
  ListIter2(x_6676->children, [&](const auto &x_6677, const auto &x_6678) {
    x_6677->parent = x_6676.get();
    x_6678->parent = x_6676.get();
    x_6677->next = x_6678.get();
    x_6678->prev = x_6677.get();
    x_6675(x_6677);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6676->children),
      [&](const auto &x_6680) {
        x_6676->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6679) {
        x_6676->first = x_6679.get();
        x_6679->parent = x_6676.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6676->children),
      [&](const auto &x_6682) {
        x_6676->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6681) {
        x_6676->last = x_6681.get();
        x_6681->parent = x_6676.get();
        x_6675(x_6681);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_5988(const auto &x_6676) { return x_6675(x_6676); }
int64_t x_6683(const auto &x_6684) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6684->children, [&](const auto &x_6685) { return x_6683(x_6685); }));
}
int64_t node_size_x_5979(const auto &x_6684) { return x_6683(x_6684); }
int64_t x_6686(const auto &x_6687) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6687->children, [&](const auto &x_6688) { return x_6686(x_6688); }));
}
int64_t layout_size_x_5978(const auto &x_6687) { return x_6686(x_6687); }
LayoutNode x_6689(const auto &x_6690) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_6690)), [&](const auto &x_6691) { return x_6689(x_6691); }));
}
LayoutNode json_to_layout_node_x_5977(const auto &x_6690) { return x_6689(x_6690); }
Node x_6692(const auto &x_6693) {
  return MakeNode(x_6693->name, x_6693->attr, x_6693->prop, x_6693->extern_id,
                  ListMap(x_6693->children, [&](const auto &x_6694) { return x_6692(x_6694); }));
}
Node node_to_fs_node_x_5976(const auto &x_6693) { return x_6692(x_6693); }
Node x_6695(const auto &x_6696) {
  return MakeNode(
      JsonToString(JsonMember("name", x_6696)), JsonToDict(JsonMember("attributes", x_6696)),
      JsonToDict(JsonMember("properties", x_6696)), JsonToInt(JsonMember("id", x_6696)),
      ListMap(JsonToList(JsonMember("children", x_6696)), [&](const auto &x_6697) { return x_6695(x_6697); }));
}
Node json_to_node_aux_x_5975(const auto &x_6696) { return x_6695(x_6696); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_5980) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_5981) {
      auto x_5982 = MakeRef(static_cast<int64_t>(0));
      auto x_5983 = FreshMetric();
      auto x_5984 = JsonOfString(InputLine(x_5981));
      auto x_5985 = JsonOfString(InputLine(x_5981));
      auto x_5986 = MakeStack();
      PushStack(x_5986, x_5984);
      PushStack(x_5986, x_5985);
      Assert(StringEqual(JsonToString(JsonMember("name", x_5984)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_5985)), "layout_init"));
      auto x_5989 = [&]() {
        auto x_5987 = json_to_node_aux_x_5975(JsonMember("node", x_5984));
        x_5987->parent = nullptr;
        x_5987->prev = nullptr;
        x_5987->next = nullptr;
        set_children_relation_x_5988(x_5987);
        return x_5987;
      }();
      auto x_5990 = json_to_layout_node_x_5977(JsonMember("node", x_5985));
      OutputChangeMetric(layout_size_x_5978(x_5990));
      InputChangeMetric(node_size_x_5979(x_5989));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_5991) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_5992(x_5989);
        x_5989->meta->pass_0_has_proc_time_table = true;
        x_5989->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_5993) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_5994(x_5989);
        x_5989->meta->pass_1_has_proc_time_table = true;
        x_5989->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      JsonToChannel(x_5980, [&]() {
        auto x_8268 = FreshJson();
        WriteJson(x_8268, "name", "PQ_D");
        WriteJson(x_8268, "diff_num", ReadRef(x_5982));
        WriteJson(x_8268, "read_count", MetricReadCount());
        WriteJson(x_8268, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_8268, "write_count", MetricWriteCount());
        WriteJson(x_8268, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_8268, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_8268, "input_change_count", MetricInputChangeCount());
        WriteJson(x_8268, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_8268, "overhead_time", MetricOverheadCount());
        WriteJson(x_8268, "eval_time", MetricEvalCount());
        WriteJson(x_8268, "html", "");
        WriteJson(x_8268, "command", StackToList(x_5986));
        return x_8268;
      }());
      OutputString(x_5980, "\n");
      ClearStack(x_5986);
      WriteRef(x_5982, IntAdd(ReadRef(x_5982), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_5981, [&](const auto &x_5995) {
        auto x_5996 = JsonOfString(x_5995);
        PushStack(x_5986, x_5996);
        std::string x_8270 = JsonToString(JsonMember("name", x_5996));
        if (x_8270 == "add") {
          return add_node_x_6000(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_5999) { return JsonToInt(x_5999); }),
              x_5989, [&]() {
                auto x_5997 = json_to_node_aux_x_5975(JsonMember("node", x_5996));
                x_5997->parent = nullptr;
                x_5997->prev = nullptr;
                x_5997->next = nullptr;
                set_children_relation_x_5998(x_5997);
                return x_5997;
              }());
        } else if (x_8270 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_6001) {
            while (!QueueIsEmpty()) {
              auto x_6002 = QueuePeek();
              auto x_6003 = Zro(x_6002);
              auto x_6004 = Fst(x_6002);
              MetaReadMetric();
              MetricQueueSize(QueueSize());
              if (x_6004.n->meta->alive) {
                [&]() {
                  auto x_8271 = x_6004.rf;
                  if (x_8271 == 0) {
                    return eval_stmts_x_6005(x_6004.n);
                  } else if (x_8271 == 1) {
                    return eval_stmts_x_6006(x_6004.n);
                  } else if (x_8271 == 2) {
                    return eval_stmts_x_6007(x_6004.n);
                  } else if (x_8271 == 3) {
                    auto x_6008 = ReadRef(current_time);
                    WriteRef(current_time, x_6003);
                    eval_stmts_x_5992(x_6004.n);
                    x_6004.n->meta->pass_0_has_proc_time_table = true;
                    x_6004.n->meta->pass_0_proc_time_table = ReadRef(current_time);
                    WriteRef(current_time, x_6008);
                    return MakeUnit();
                  } else if (x_8271 == 4) {
                    auto x_6009 = ReadRef(current_time);
                    WriteRef(current_time, x_6003);
                    eval_stmts_x_5994(x_6004.n);
                    x_6004.n->meta->pass_1_has_proc_time_table = true;
                    x_6004.n->meta->pass_1_proc_time_table = ReadRef(current_time);
                    WriteRef(current_time, x_6009);
                    return MakeUnit();
                  } else {
                    Panic();
                  }
                }();
              }
              auto x_6010 = Zro(QueuePop());
              MakeUnit();
              MakeUnit();
            }
            return MakeUnit();
          })));
          JsonToChannel(x_5980, [&]() {
            auto x_8269 = FreshJson();
            WriteJson(x_8269, "name", "PQ_D");
            WriteJson(x_8269, "diff_num", ReadRef(x_5982));
            WriteJson(x_8269, "read_count", MetricReadCount());
            WriteJson(x_8269, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_8269, "write_count", MetricWriteCount());
            WriteJson(x_8269, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_8269, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_8269, "input_change_count", MetricInputChangeCount());
            WriteJson(x_8269, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_8269, "overhead_time", MetricOverheadCount());
            WriteJson(x_8269, "eval_time", MetricEvalCount());
            WriteJson(x_8269, "html", "");
            WriteJson(x_8269, "command", StackToList(x_5986));
            return x_8269;
          }());
          OutputString(x_5980, "\n");
          ClearStack(x_5986);
          WriteRef(x_5982, IntAdd(ReadRef(x_5982), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_8270 == "remove") {
          return remove_node_x_6012(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6011) { return JsonToInt(x_6011); }),
              x_5989, MakeUnit());
        } else if (x_8270 == "replace") {
          return replace_node_x_6016(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6015) { return JsonToInt(x_6015); }),
              x_5989, [&]() {
                auto x_6013 = json_to_node_aux_x_5975(JsonMember("node", x_5996));
                x_6013->parent = nullptr;
                x_6013->prev = nullptr;
                x_6013->next = nullptr;
                set_children_relation_x_6014(x_6013);
                return x_6013;
              }());
        } else if (x_8270 == "replace_value") {
          return replace_value_x_6018(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6017) { return JsonToInt(x_6017); }),
              x_5989,
              MakePair(MakePair(JsonToString(JsonMember("type", x_5996)), JsonToString(JsonMember("key", x_5996))),
                       JsonToValue(JsonMember("value", x_5996))));
        } else if (x_8270 == "delete_value") {
          return delete_value_x_6020(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6019) { return JsonToInt(x_6019); }),
              x_5989, MakePair(JsonToString(JsonMember("type", x_5996)), JsonToString(JsonMember("key", x_5996))));
        } else if (x_8270 == "insert_value") {
          return insert_value_x_6022(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6021) { return JsonToInt(x_6021); }),
              x_5989,
              MakePair(MakePair(JsonToString(JsonMember("type", x_5996)), JsonToString(JsonMember("key", x_5996))),
                       JsonToValue(JsonMember("value", x_5996))));
        } else if (x_8270 == "layout_remove") {
          return remove_layout_node_x_6024(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6023) { return JsonToInt(x_6023); }),
              x_5990, MakeUnit());
        } else if (x_8270 == "layout_add") {
          return add_layout_node_x_6026(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6025) { return JsonToInt(x_6025); }),
              x_5990, json_to_layout_node_x_5977(JsonMember("node", x_5996)));
        } else if (x_8270 == "layout_replace") {
          return replace_layout_node_x_6028(
              ListMap(JsonToList(JsonMember("path", x_5996)), [&](const auto &x_6027) { return JsonToInt(x_6027); }),
              x_5990, json_to_layout_node_x_5977(JsonMember("node", x_5996)));
        } else if (x_8270 == "layout_info_changed") {
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