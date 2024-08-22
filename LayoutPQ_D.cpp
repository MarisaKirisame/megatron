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
  bool bb_3_has_bb_time_table = false;
  TotalOrder bb_3_bb_time_table;
  bool bb_1_has_bb_time_table = false;
  TotalOrder bb_1_bb_time_table;
  bool bb_0_has_bb_time_table = false;
  TotalOrder bb_0_bb_time_table;
  bool bb_2_has_bb_time_table = false;
  TotalOrder bb_2_bb_time_table;
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
Unit var_modified_x_3424(const auto &x_3525);
auto eval_expr_x_3421(const auto &x_3533);
Unit var_modified_x_3419(const auto &x_3542);
auto eval_expr_x_3416(const auto &x_3548);
Unit var_modified_x_3414(const auto &x_3553);
auto eval_expr_x_3411(const auto &x_3563);
Unit var_modified_x_3409(const auto &x_3590);
auto eval_expr_x_3406(const auto &x_3602);
Unit var_modified_x_3404(const auto &x_3615);
auto eval_expr_x_3401(const auto &x_3623);
Unit var_modified_x_3399(const auto &x_3628);
auto eval_expr_x_3396(const auto &x_3638);
Unit var_modified_x_3394(const auto &x_3665);
auto eval_expr_x_3391(const auto &x_3677);
Unit var_modified_x_3389(const auto &x_3688);
auto eval_expr_x_3386(const auto &x_3694);
Unit var_modified_x_3384(const auto &x_3705);
auto eval_expr_x_3381(const auto &x_3711);
Unit var_modified_x_3379(const auto &x_3718);
auto eval_expr_x_3376(const auto &x_3728);
Unit var_modified_x_3374(const auto &x_3739);
auto eval_expr_x_3371(const auto &x_3745);
Unit var_modified_x_3369(const auto &x_3748);
auto eval_expr_x_3366(const auto &x_3754);
Unit var_modified_x_3362(const auto &x_3757);
auto eval_expr_x_3359(const auto &x_3779);
Unit var_modified_x_3357(const auto &x_3824);
auto eval_expr_x_3354(const auto &x_3830);
Unit var_modified_x_3352(const auto &x_3839);
auto eval_expr_x_3349(const auto &x_3853);
Unit var_modified_x_3347(const auto &x_3856);
auto eval_expr_x_3344(const auto &x_3870);
Unit var_modified_x_3342(const auto &x_3875);
auto eval_expr_x_3339(const auto &x_3881);
Unit var_modified_x_3337(const auto &x_3882);
auto eval_expr_x_3334(const auto &x_3888);
Unit var_modified_x_3332(const auto &x_3891);
auto eval_expr_x_3329(const auto &x_3901);
Unit var_modified_x_3327(const auto &x_3912);
auto eval_expr_x_3324(const auto &x_3918);
Unit var_modified_x_3322(const auto &x_3921);
auto eval_expr_x_3319(const auto &x_3931);
Unit var_modified_x_3317(const auto &x_3942);
auto eval_expr_x_3314(const auto &x_3952);
Unit var_modified_x_3312(const auto &x_3965);
auto eval_expr_x_3309(const auto &x_3979);
Unit var_modified_x_3307(const auto &x_3994);
auto eval_expr_x_3304(const auto &x_4000);
Unit var_modified_x_3302(const auto &x_4003);
auto eval_expr_x_3299(const auto &x_4015);
Unit var_modified_x_3297(const auto &x_4020);
auto eval_expr_x_3294(const auto &x_4032);
Unit var_modified_x_3292(const auto &x_4037);
auto eval_expr_x_3289(const auto &x_4047);
Unit var_modified_x_3287(const auto &x_4050);
auto eval_expr_x_3284(const auto &x_4060);
Unit var_modified_x_3282(const auto &x_4063);
auto eval_expr_x_3279(const auto &x_4077);
Unit var_modified_x_3277(const auto &x_4080);
auto eval_expr_x_3274(const auto &x_4094);
Unit var_modified_x_3270(const auto &x_4097);
auto eval_expr_x_3267(const auto &x_4111);
Unit var_modified_x_3265(const auto &x_4126);
auto eval_expr_x_3262(const auto &x_4140);
Unit var_modified_x_3260(const auto &x_4147);
auto eval_expr_x_3257(const auto &x_4161);
Unit var_modified_x_3255(const auto &x_4166);
auto eval_expr_x_3252(const auto &x_4172);
Unit var_modified_x_3250(const auto &x_4177);
auto eval_expr_x_3247(const auto &x_4187);
Unit var_modified_x_3245(const auto &x_4266);
auto eval_expr_x_3242(const auto &x_4272);
Unit var_modified_x_3240(const auto &x_4297);
auto eval_expr_x_3237(const auto &x_4307);
Unit var_modified_x_3235(const auto &x_4310);
auto eval_expr_x_3232(const auto &x_4316);
Unit var_modified_x_3230(const auto &x_4321);
auto eval_expr_x_3227(const auto &x_4335);
Unit var_modified_x_3225(const auto &x_4340);
auto eval_expr_x_3222(const auto &x_4354);
Unit var_modified_x_3220(const auto &x_4359);
auto eval_expr_x_3217(const auto &x_4371);
Unit var_modified_x_3215(const auto &x_4378);
auto eval_expr_x_3212(const auto &x_4384);
Unit var_modified_x_3210(const auto &x_4389);
auto eval_expr_x_3207(const auto &x_4399);
Unit var_modified_x_3205(const auto &x_4482);
auto eval_expr_x_3202(const auto &x_4488);
Unit var_modified_x_3200(const auto &x_4491);
auto eval_expr_x_3197(const auto &x_4497);
Unit var_modified_x_3195(const auto &x_4522);
auto eval_expr_x_3192(const auto &x_4528);
Unit var_modified_x_3190(const auto &x_4535);
auto eval_expr_x_3187(const auto &x_4545);
Unit x_2845(const auto &x_2846, const auto &x_2847, const auto &x_2848);
Unit x_2852(const auto &x_2853, const auto &x_2854, const auto &x_2855);
Unit x_2859(const auto &x_2860, const auto &x_2861, const auto &x_2862);
Unit x_2866(const auto &x_2867, const auto &x_2868, const auto &x_2869);
Unit x_2913(const auto &x_2914, const auto &x_2915, const auto &x_2916);
Unit x_2958(const auto &x_2959, const auto &x_2960, const auto &x_2961);
Unit x_3041(const auto &x_3042, const auto &x_3043, const auto &x_3044);
Unit x_3133(const auto &x_3134);
Unit x_3141(const auto &x_3142, const auto &x_3143, const auto &x_3144);
Unit eval_stmts_x_2823(const auto &x_3183);
Unit eval_stmts_x_2822(const auto &x_3185);
Unit eval_stmts_x_2821(const auto &x_3272);
Unit eval_stmts_x_2820(const auto &x_3364);
Unit x_3426(const auto &x_3427, const auto &x_3428, const auto &x_3429);
Unit x_3482(const auto &x_3483);
Unit eval_stmts_x_2809(const auto &x_3490);
Unit eval_stmts_x_2807(const auto &x_3496);
Unit x_3502(const auto &x_3503);
int64_t x_3510(const auto &x_3511);
int64_t x_3513(const auto &x_3514);
LayoutNode x_3516(const auto &x_3517);
Node x_3519(const auto &x_3520);
Node x_3522(const auto &x_3523);
Unit var_modified_x_3424(const auto &x_3525) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3526) {
    auto x_4548 = [&](const auto &x_3529) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3530) {
        if (x_3529->meta->bb_3_has_bb_time_table) {
          auto x_3531 = x_3529->meta->bb_3_bb_time_table;
          if (!(x_3529->meta->bb_3_has_bb_dirtied && x_3529->meta->bb_3_bb_dirtied)) {
            x_3529->meta->bb_3_has_bb_dirtied = true;
            x_3529->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3531, x_3529, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_3525->next, [&](const auto &x_3528) { return MakeUnit(); },
        [&](const auto &x_3527) {
          auto x_4549 = x_4548;
          x_4549(x_3527);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3421(const auto &x_3533) {
  if ((x_3533->prev != nullptr) && (!(x_3533->prev)->var_line_break)) {
    return max(x_3533->var_height_external, (x_3533->prev)->var_line_height);
  } else {
    return x_3533->var_height_external;
  }
}
Unit var_modified_x_3419(const auto &x_3542) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3543) {
    auto x_4550 = [&](const auto &x_3544) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3545) {
        if (x_3544->meta->bb_3_has_bb_time_table) {
          auto x_3546 = x_3544->meta->bb_3_bb_time_table;
          if (!(x_3544->meta->bb_3_has_bb_dirtied && x_3544->meta->bb_3_bb_dirtied)) {
            x_3544->meta->bb_3_has_bb_dirtied = true;
            x_3544->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3546, x_3544, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4550(x_3542);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3416(const auto &x_3548) {
  if (eq(x_3548->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3548->var_height_internal;
  }
}
Unit var_modified_x_3414(const auto &x_3553) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3554) {
    auto x_4551 = [&](const auto &x_3555) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3556) {
        if (x_3555->meta->bb_3_has_bb_time_table) {
          auto x_3557 = x_3555->meta->bb_3_bb_time_table;
          if (!(x_3555->meta->bb_3_has_bb_dirtied && x_3555->meta->bb_3_bb_dirtied)) {
            x_3555->meta->bb_3_has_bb_dirtied = true;
            x_3555->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3557, x_3555, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4551(x_3553);
    MakeUnit();
    ListIter(x_3553->children, [&](const auto &x_3559) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3560) {
        if (x_3559->meta->bb_3_has_bb_time_table) {
          auto x_3561 = x_3559->meta->bb_3_bb_time_table;
          if (!(x_3559->meta->bb_3_has_bb_dirtied && x_3559->meta->bb_3_bb_dirtied)) {
            x_3559->meta->bb_3_has_bb_dirtied = true;
            x_3559->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3561, x_3559, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3411(const auto &x_3563) {
  if (x_3563->var_intrinsic_height_is_height) {
    return x_3563->var_intrinsic_height_internal;
  } else {
    if ((x_3563->parent != nullptr) && (x_3563->parent)->var_is_flex_column) {
      return plus(x_3563->var_intrinsic_height_internal,
                  mult(x_3563->var_flex_amount, (x_3563->parent)->var_flex_unit));
    } else {
      if (x_3563->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_3563->var_box_height, divide(x_3563->var_height_expr.r.a0, 100.));
      } else {
        return max(x_3563->var_box_height, x_3563->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_3409(const auto &x_3590) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3591) {
    ListIter(x_3590->children, [&](const auto &x_3592) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3593) {
        if (x_3592->meta->bb_3_has_bb_time_table) {
          auto x_3594 = x_3592->meta->bb_3_bb_time_table;
          if (!(x_3592->meta->bb_3_has_bb_dirtied && x_3592->meta->bb_3_bb_dirtied)) {
            x_3592->meta->bb_3_has_bb_dirtied = true;
            x_3592->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3594, x_3592, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4552 = [&](const auto &x_3598) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3599) {
        if (x_3598->meta->bb_3_has_bb_time_table) {
          auto x_3600 = x_3598->meta->bb_3_bb_time_table;
          if (!(x_3598->meta->bb_3_has_bb_dirtied && x_3598->meta->bb_3_bb_dirtied)) {
            x_3598->meta->bb_3_has_bb_dirtied = true;
            x_3598->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3600, x_3598, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_3590->next, [&](const auto &x_3597) { return MakeUnit(); },
        [&](const auto &x_3596) {
          auto x_4553 = x_4552;
          x_4553(x_3596);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3406(const auto &x_3602) {
  if (x_3602->prev != nullptr) {
    if (x_3602->var_line_break || (x_3602->prev)->var_line_break) {
      return plus((x_3602->prev)->var_y, (x_3602->prev)->var_line_height);
    } else {
      return (x_3602->prev)->var_y;
    }
  } else {
    if (x_3602->parent != nullptr) {
      return (x_3602->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3404(const auto &x_3615) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3616) {
    auto x_4554 = [&](const auto &x_3619) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3620) {
        if (x_3619->meta->bb_3_has_bb_time_table) {
          auto x_3621 = x_3619->meta->bb_3_bb_time_table;
          if (!(x_3619->meta->bb_3_has_bb_dirtied && x_3619->meta->bb_3_bb_dirtied)) {
            x_3619->meta->bb_3_has_bb_dirtied = true;
            x_3619->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3621, x_3619, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_3615->next, [&](const auto &x_3618) { return MakeUnit(); },
        [&](const auto &x_3617) {
          auto x_4555 = x_4554;
          x_4555(x_3617);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3401(const auto &x_3623) {
  if (eq(x_3623->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3623->var_width_internal;
  }
}
Unit var_modified_x_3399(const auto &x_3628) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3629) {
    auto x_4556 = [&](const auto &x_3630) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3631) {
        if (x_3630->meta->bb_3_has_bb_time_table) {
          auto x_3632 = x_3630->meta->bb_3_bb_time_table;
          if (!(x_3630->meta->bb_3_has_bb_dirtied && x_3630->meta->bb_3_bb_dirtied)) {
            x_3630->meta->bb_3_has_bb_dirtied = true;
            x_3630->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3632, x_3630, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4556(x_3628);
    MakeUnit();
    ListIter(x_3628->children, [&](const auto &x_3634) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3635) {
        if (x_3634->meta->bb_3_has_bb_time_table) {
          auto x_3636 = x_3634->meta->bb_3_bb_time_table;
          if (!(x_3634->meta->bb_3_has_bb_dirtied && x_3634->meta->bb_3_bb_dirtied)) {
            x_3634->meta->bb_3_has_bb_dirtied = true;
            x_3634->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3636, x_3634, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3396(const auto &x_3638) {
  if (x_3638->var_intrinsic_width_is_width) {
    return x_3638->var_intrinsic_width_internal;
  } else {
    if ((x_3638->parent != nullptr) && (x_3638->parent)->var_is_flex_row) {
      return plus(x_3638->var_intrinsic_width_internal, mult(x_3638->var_flex_amount, (x_3638->parent)->var_flex_unit));
    } else {
      if (x_3638->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_3638->var_box_width, divide(x_3638->var_width_expr.r.a0, 100.));
      } else {
        return max(x_3638->var_box_width, x_3638->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_3394(const auto &x_3665) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3666) {
    ListIter(x_3665->children, [&](const auto &x_3667) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3668) {
        if (x_3667->meta->bb_3_has_bb_time_table) {
          auto x_3669 = x_3667->meta->bb_3_bb_time_table;
          if (!(x_3667->meta->bb_3_has_bb_dirtied && x_3667->meta->bb_3_bb_dirtied)) {
            x_3667->meta->bb_3_has_bb_dirtied = true;
            x_3667->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3669, x_3667, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4557 = [&](const auto &x_3673) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3674) {
        if (x_3673->meta->bb_3_has_bb_time_table) {
          auto x_3675 = x_3673->meta->bb_3_bb_time_table;
          if (!(x_3673->meta->bb_3_has_bb_dirtied && x_3673->meta->bb_3_bb_dirtied)) {
            x_3673->meta->bb_3_has_bb_dirtied = true;
            x_3673->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3675, x_3673, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_3665->next, [&](const auto &x_3672) { return MakeUnit(); },
        [&](const auto &x_3671) {
          auto x_4558 = x_4557;
          x_4558(x_3671);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3391(const auto &x_3677) {
  if (x_3677->prev != nullptr) {
    if (x_3677->var_line_break || (x_3677->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_3677->prev)->var_x, (x_3677->prev)->var_width_external);
    }
  } else {
    if (x_3677->parent != nullptr) {
      return (x_3677->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3389(const auto &x_3688) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3689) {
    ListIter(x_3688->children, [&](const auto &x_3690) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3691) {
        if (x_3690->meta->bb_3_has_bb_time_table) {
          auto x_3692 = x_3690->meta->bb_3_bb_time_table;
          if (!(x_3690->meta->bb_3_has_bb_dirtied && x_3690->meta->bb_3_bb_dirtied)) {
            x_3690->meta->bb_3_has_bb_dirtied = true;
            x_3690->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3692, x_3690, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3386(const auto &x_3694) {
  if (gt(x_3694->var_left_over, 0.)) {
    return divide(x_3694->var_left_over, x_3694->var_flex_grow_sum);
  } else {
    return divide(x_3694->var_left_over, x_3694->var_flex_shrink_sum);
  }
}
Unit var_modified_x_3384(const auto &x_3705) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3706) {
    auto x_4559 = [&](const auto &x_3707) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3708) {
        if (x_3707->meta->bb_3_has_bb_time_table) {
          auto x_3709 = x_3707->meta->bb_3_bb_time_table;
          if (!(x_3707->meta->bb_3_has_bb_dirtied && x_3707->meta->bb_3_bb_dirtied)) {
            x_3707->meta->bb_3_has_bb_dirtied = true;
            x_3707->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3709, x_3707, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4559(x_3705);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3381(const auto &x_3711) {
  if ((x_3711->parent != nullptr) && gt((x_3711->parent)->var_left_over, 0.)) {
    return x_3711->var_flex_grow;
  } else {
    return x_3711->var_flex_shrink;
  }
}
Unit var_modified_x_3379(const auto &x_3718) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3719) {
    auto x_4560 = [&](const auto &x_3720) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3721) {
        if (x_3720->meta->bb_3_has_bb_time_table) {
          auto x_3722 = x_3720->meta->bb_3_bb_time_table;
          if (!(x_3720->meta->bb_3_has_bb_dirtied && x_3720->meta->bb_3_bb_dirtied)) {
            x_3720->meta->bb_3_has_bb_dirtied = true;
            x_3720->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3722, x_3720, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4560(x_3718);
    MakeUnit();
    ListIter(x_3718->children, [&](const auto &x_3724) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3725) {
        if (x_3724->meta->bb_3_has_bb_time_table) {
          auto x_3726 = x_3724->meta->bb_3_bb_time_table;
          if (!(x_3724->meta->bb_3_has_bb_dirtied && x_3724->meta->bb_3_bb_dirtied)) {
            x_3724->meta->bb_3_has_bb_dirtied = true;
            x_3724->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3726, x_3724, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3376(const auto &x_3728) {
  if (x_3728->var_is_flex_row) {
    return minus(x_3728->var_box_width, (x_3728->last != nullptr) ? ((x_3728->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_3728->var_box_height, (x_3728->last != nullptr) ? ((x_3728->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_3374(const auto &x_3739) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3740) {
    auto x_4561 = [&](const auto &x_3741) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3742) {
        if (x_3741->meta->bb_3_has_bb_time_table) {
          auto x_3743 = x_3741->meta->bb_3_bb_time_table;
          if (!(x_3741->meta->bb_3_has_bb_dirtied && x_3741->meta->bb_3_bb_dirtied)) {
            x_3741->meta->bb_3_has_bb_dirtied = true;
            x_3741->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3743, x_3741, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4561(x_3739);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3371(const auto &x_3745) {
  if (x_3745->parent != nullptr) {
    return (x_3745->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_3369(const auto &x_3748) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3749) {
    auto x_4562 = [&](const auto &x_3750) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3751) {
        if (x_3750->meta->bb_3_has_bb_time_table) {
          auto x_3752 = x_3750->meta->bb_3_bb_time_table;
          if (!(x_3750->meta->bb_3_has_bb_dirtied && x_3750->meta->bb_3_bb_dirtied)) {
            x_3750->meta->bb_3_has_bb_dirtied = true;
            x_3750->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3752, x_3750, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4562(x_3748);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3366(const auto &x_3754) {
  if (x_3754->parent != nullptr) {
    return (x_3754->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_3362(const auto &x_3757) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3758) {
    auto x_4563 = [&](const auto &x_3759) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3760) {
        if (x_3759->meta->bb_0_has_bb_time_table) {
          auto x_3761 = x_3759->meta->bb_0_bb_time_table;
          if (!(x_3759->meta->bb_0_has_bb_dirtied && x_3759->meta->bb_0_bb_dirtied)) {
            x_3759->meta->bb_0_has_bb_dirtied = true;
            x_3759->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3761, x_3759, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4563(x_3757);
    MakeUnit();
    auto x_4564 = [&](const auto &x_3765) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3766) {
        if (x_3765->meta->bb_0_has_bb_time_table) {
          auto x_3767 = x_3765->meta->bb_0_bb_time_table;
          if (!(x_3765->meta->bb_0_has_bb_dirtied && x_3765->meta->bb_0_bb_dirtied)) {
            x_3765->meta->bb_0_has_bb_dirtied = true;
            x_3765->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3767, x_3765, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_3757->next, [&](const auto &x_3764) { return MakeUnit(); },
        [&](const auto &x_3763) {
          auto x_4567 = x_4564;
          x_4567(x_3763);
          return MakeUnit();
        });
    auto x_4565 = [&](const auto &x_3769) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3770) {
        if (x_3769->meta->bb_3_has_bb_time_table) {
          auto x_3771 = x_3769->meta->bb_3_bb_time_table;
          if (!(x_3769->meta->bb_3_has_bb_dirtied && x_3769->meta->bb_3_bb_dirtied)) {
            x_3769->meta->bb_3_has_bb_dirtied = true;
            x_3769->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3771, x_3769, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4565(x_3757);
    MakeUnit();
    auto x_4566 = [&](const auto &x_3775) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3776) {
        if (x_3775->meta->bb_3_has_bb_time_table) {
          auto x_3777 = x_3775->meta->bb_3_bb_time_table;
          if (!(x_3775->meta->bb_3_has_bb_dirtied && x_3775->meta->bb_3_bb_dirtied)) {
            x_3775->meta->bb_3_has_bb_dirtied = true;
            x_3775->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3777, x_3775, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_3757->next, [&](const auto &x_3774) { return MakeUnit(); },
        [&](const auto &x_3773) {
          auto x_4568 = x_4566;
          x_4568(x_3773);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3359(const auto &x_3779) {
  if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_3779->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_3779->parent != nullptr) &&
          (eq((x_3779->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_3779->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_3779->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_3779->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_3779->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_3779->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_3357(const auto &x_3824) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3825) {
    ListIter(x_3824->children, [&](const auto &x_3826) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3827) {
        if (x_3826->meta->bb_1_has_bb_time_table) {
          auto x_3828 = x_3826->meta->bb_1_bb_time_table;
          if (!(x_3826->meta->bb_1_has_bb_dirtied && x_3826->meta->bb_1_bb_dirtied)) {
            x_3826->meta->bb_1_has_bb_dirtied = true;
            x_3826->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3828, x_3826, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3354(const auto &x_3830) {
  return (((!(x_3830->parent != nullptr)) || (x_3830->parent)->var_visible) &&
          (neq(x_3830->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_3830->var_inside_svg) && (!x_3830->var_disabled))));
}
Unit var_modified_x_3352(const auto &x_3839) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3840) {
    auto x_4569 = [&](const auto &x_3841) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3842) {
        if (x_3841->meta->bb_1_has_bb_time_table) {
          auto x_3843 = x_3841->meta->bb_1_bb_time_table;
          if (!(x_3841->meta->bb_1_has_bb_dirtied && x_3841->meta->bb_1_bb_dirtied)) {
            x_3841->meta->bb_1_has_bb_dirtied = true;
            x_3841->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3843, x_3841, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4569(x_3839);
    MakeUnit();
    ListIter(x_3839->children, [&](const auto &x_3845) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3846) {
        if (x_3845->meta->bb_1_has_bb_time_table) {
          auto x_3847 = x_3845->meta->bb_1_bb_time_table;
          if (!(x_3845->meta->bb_1_has_bb_dirtied && x_3845->meta->bb_1_bb_dirtied)) {
            x_3845->meta->bb_1_has_bb_dirtied = true;
            x_3845->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3847, x_3845, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4570 = [&](const auto &x_3849) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3850) {
        if (x_3849->meta->bb_0_has_bb_time_table) {
          auto x_3851 = x_3849->meta->bb_0_bb_time_table;
          if (!(x_3849->meta->bb_0_has_bb_dirtied && x_3849->meta->bb_0_bb_dirtied)) {
            x_3849->meta->bb_0_has_bb_dirtied = true;
            x_3849->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3851, x_3849, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4570(x_3839);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3349(const auto &x_3853) {
  if (eq(x_3853->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_3853->parent != nullptr) && (x_3853->parent)->var_disabled);
  }
}
Unit var_modified_x_3347(const auto &x_3856) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3857) {
    auto x_4571 = [&](const auto &x_3858) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3859) {
        if (x_3858->meta->bb_1_has_bb_time_table) {
          auto x_3860 = x_3858->meta->bb_1_bb_time_table;
          if (!(x_3858->meta->bb_1_has_bb_dirtied && x_3858->meta->bb_1_bb_dirtied)) {
            x_3858->meta->bb_1_has_bb_dirtied = true;
            x_3858->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3860, x_3858, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4571(x_3856);
    MakeUnit();
    ListIter(x_3856->children, [&](const auto &x_3862) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3863) {
        if (x_3862->meta->bb_1_has_bb_time_table) {
          auto x_3864 = x_3862->meta->bb_1_bb_time_table;
          if (!(x_3862->meta->bb_1_has_bb_dirtied && x_3862->meta->bb_1_bb_dirtied)) {
            x_3862->meta->bb_1_has_bb_dirtied = true;
            x_3862->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3864, x_3862, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4572 = [&](const auto &x_3866) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3867) {
        if (x_3866->meta->bb_0_has_bb_time_table) {
          auto x_3868 = x_3866->meta->bb_0_bb_time_table;
          if (!(x_3866->meta->bb_0_has_bb_dirtied && x_3866->meta->bb_0_bb_dirtied)) {
            x_3866->meta->bb_0_has_bb_dirtied = true;
            x_3866->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3868, x_3866, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4572(x_3856);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3344(const auto &x_3870) {
  return ((x_3870->parent != nullptr) && ((x_3870->parent)->var_is_svg_block || (x_3870->parent)->var_inside_svg));
}
Unit var_modified_x_3342(const auto &x_3875) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3876) {
    ListIter(x_3875->children, [&](const auto &x_3877) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3878) {
        if (x_3877->meta->bb_1_has_bb_time_table) {
          auto x_3879 = x_3877->meta->bb_1_bb_time_table;
          if (!(x_3877->meta->bb_1_has_bb_dirtied && x_3877->meta->bb_1_bb_dirtied)) {
            x_3877->meta->bb_1_has_bb_dirtied = true;
            x_3877->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3879, x_3877, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3339(const auto &x_3881) { return eq(x_3881->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_3337(const auto &x_3882) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3883) {
    auto x_4573 = [&](const auto &x_3884) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3885) {
        if (x_3884->meta->bb_0_has_bb_time_table) {
          auto x_3886 = x_3884->meta->bb_0_bb_time_table;
          if (!(x_3884->meta->bb_0_has_bb_dirtied && x_3884->meta->bb_0_bb_dirtied)) {
            x_3884->meta->bb_0_has_bb_dirtied = true;
            x_3884->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3886, x_3884, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4573(x_3882);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3334(const auto &x_3888) {
  return neq(x_3888->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_3332(const auto &x_3891) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3892) {
    auto x_4574 = [&](const auto &x_3893) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3894) {
        if (x_3893->meta->bb_1_has_bb_time_table) {
          auto x_3895 = x_3893->meta->bb_1_bb_time_table;
          if (!(x_3893->meta->bb_1_has_bb_dirtied && x_3893->meta->bb_1_bb_dirtied)) {
            x_3893->meta->bb_1_has_bb_dirtied = true;
            x_3893->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3895, x_3893, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4574(x_3891);
    MakeUnit();
    auto x_4575 = [&](const auto &x_3897) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3898) {
        if (x_3897->meta->bb_0_has_bb_time_table) {
          auto x_3899 = x_3897->meta->bb_0_bb_time_table;
          if (!(x_3897->meta->bb_0_has_bb_dirtied && x_3897->meta->bb_0_bb_dirtied)) {
            x_3897->meta->bb_0_has_bb_dirtied = true;
            x_3897->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3899, x_3897, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4575(x_3891);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3329(const auto &x_3901) {
  if (!x_3901->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3901->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_3901->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3901->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_3327(const auto &x_3912) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3913) {
    auto x_4576 = [&](const auto &x_3914) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3915) {
        if (x_3914->meta->bb_0_has_bb_time_table) {
          auto x_3916 = x_3914->meta->bb_0_bb_time_table;
          if (!(x_3914->meta->bb_0_has_bb_dirtied && x_3914->meta->bb_0_bb_dirtied)) {
            x_3914->meta->bb_0_has_bb_dirtied = true;
            x_3914->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3916, x_3914, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4576(x_3912);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3324(const auto &x_3918) {
  return neq(x_3918->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_3322(const auto &x_3921) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3922) {
    auto x_4577 = [&](const auto &x_3923) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3924) {
        if (x_3923->meta->bb_1_has_bb_time_table) {
          auto x_3925 = x_3923->meta->bb_1_bb_time_table;
          if (!(x_3923->meta->bb_1_has_bb_dirtied && x_3923->meta->bb_1_bb_dirtied)) {
            x_3923->meta->bb_1_has_bb_dirtied = true;
            x_3923->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3925, x_3923, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4577(x_3921);
    MakeUnit();
    auto x_4578 = [&](const auto &x_3927) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3928) {
        if (x_3927->meta->bb_0_has_bb_time_table) {
          auto x_3929 = x_3927->meta->bb_0_bb_time_table;
          if (!(x_3927->meta->bb_0_has_bb_dirtied && x_3927->meta->bb_0_bb_dirtied)) {
            x_3927->meta->bb_0_has_bb_dirtied = true;
            x_3927->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3929, x_3927, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4578(x_3921);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3319(const auto &x_3931) {
  if (!x_3931->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3931->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_3931->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3931->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_3317(const auto &x_3942) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3943) {
    ListIter(x_3942->children, [&](const auto &x_3944) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3945) {
        if (x_3944->meta->bb_0_has_bb_time_table) {
          auto x_3946 = x_3944->meta->bb_0_bb_time_table;
          if (!(x_3944->meta->bb_0_has_bb_dirtied && x_3944->meta->bb_0_bb_dirtied)) {
            x_3944->meta->bb_0_has_bb_dirtied = true;
            x_3944->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3946, x_3944, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    ListIter(x_3942->children, [&](const auto &x_3948) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3949) {
        if (x_3948->meta->bb_3_has_bb_time_table) {
          auto x_3950 = x_3948->meta->bb_3_bb_time_table;
          if (!(x_3948->meta->bb_3_has_bb_dirtied && x_3948->meta->bb_3_bb_dirtied)) {
            x_3948->meta->bb_3_has_bb_dirtied = true;
            x_3948->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3950, x_3948, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3314(const auto &x_3952) {
  if ((x_3952->parent != nullptr) &&
      (eq((x_3952->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3952->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3952->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_3952->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3312(const auto &x_3965) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3966) {
    ListIter(x_3965->children, [&](const auto &x_3967) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3968) {
        if (x_3967->meta->bb_0_has_bb_time_table) {
          auto x_3969 = x_3967->meta->bb_0_bb_time_table;
          if (!(x_3967->meta->bb_0_has_bb_dirtied && x_3967->meta->bb_0_bb_dirtied)) {
            x_3967->meta->bb_0_has_bb_dirtied = true;
            x_3967->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3969, x_3967, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4579 = [&](const auto &x_3971) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3972) {
        if (x_3971->meta->bb_3_has_bb_time_table) {
          auto x_3973 = x_3971->meta->bb_3_bb_time_table;
          if (!(x_3971->meta->bb_3_has_bb_dirtied && x_3971->meta->bb_3_bb_dirtied)) {
            x_3971->meta->bb_3_has_bb_dirtied = true;
            x_3971->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3973, x_3971, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4579(x_3965);
    MakeUnit();
    ListIter(x_3965->children, [&](const auto &x_3975) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3976) {
        if (x_3975->meta->bb_3_has_bb_time_table) {
          auto x_3977 = x_3975->meta->bb_3_bb_time_table;
          if (!(x_3975->meta->bb_3_has_bb_dirtied && x_3975->meta->bb_3_bb_dirtied)) {
            x_3975->meta->bb_3_has_bb_dirtied = true;
            x_3975->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3977, x_3975, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3309(const auto &x_3979) {
  if ((x_3979->parent != nullptr) &&
      (eq((x_3979->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3979->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3979->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_3979->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3307(const auto &x_3994) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3995) {
    ListIter(x_3994->children, [&](const auto &x_3996) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3997) {
        if (x_3996->meta->bb_1_has_bb_time_table) {
          auto x_3998 = x_3996->meta->bb_1_bb_time_table;
          if (!(x_3996->meta->bb_1_has_bb_dirtied && x_3996->meta->bb_1_bb_dirtied)) {
            x_3996->meta->bb_1_has_bb_dirtied = true;
            x_3996->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3998, x_3996, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_3304(const auto &x_4000) {
  if (x_4000->has_prop_flex_direction) {
    return x_4000->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_3302(const auto &x_4003) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4004) {
    auto x_4580 = [&](const auto &x_4007) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4008) {
        if (x_4007->meta->bb_1_has_bb_time_table) {
          auto x_4009 = x_4007->meta->bb_1_bb_time_table;
          if (!(x_4007->meta->bb_1_has_bb_dirtied && x_4007->meta->bb_1_bb_dirtied)) {
            x_4007->meta->bb_1_has_bb_dirtied = true;
            x_4007->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4009, x_4007, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4003->next, [&](const auto &x_4006) { return MakeUnit(); },
        [&](const auto &x_4005) {
          auto x_4582 = x_4580;
          x_4582(x_4005);
          return MakeUnit();
        });
    auto x_4581 = [&](const auto &x_4011) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4012) {
        if (x_4011->meta->bb_3_has_bb_time_table) {
          auto x_4013 = x_4011->meta->bb_3_bb_time_table;
          if (!(x_4011->meta->bb_3_has_bb_dirtied && x_4011->meta->bb_3_bb_dirtied)) {
            x_4011->meta->bb_3_has_bb_dirtied = true;
            x_4011->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4013, x_4011, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4581(x_4003);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3299(const auto &x_4015) {
  return plus((x_4015->prev != nullptr) ? ((x_4015->prev)->var_flex_shrink_sum) : (0.), x_4015->var_flex_shrink);
}
Unit var_modified_x_3297(const auto &x_4020) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4021) {
    auto x_4583 = [&](const auto &x_4024) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4025) {
        if (x_4024->meta->bb_1_has_bb_time_table) {
          auto x_4026 = x_4024->meta->bb_1_bb_time_table;
          if (!(x_4024->meta->bb_1_has_bb_dirtied && x_4024->meta->bb_1_bb_dirtied)) {
            x_4024->meta->bb_1_has_bb_dirtied = true;
            x_4024->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4026, x_4024, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4020->next, [&](const auto &x_4023) { return MakeUnit(); },
        [&](const auto &x_4022) {
          auto x_4585 = x_4583;
          x_4585(x_4022);
          return MakeUnit();
        });
    auto x_4584 = [&](const auto &x_4028) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4029) {
        if (x_4028->meta->bb_3_has_bb_time_table) {
          auto x_4030 = x_4028->meta->bb_3_bb_time_table;
          if (!(x_4028->meta->bb_3_has_bb_dirtied && x_4028->meta->bb_3_bb_dirtied)) {
            x_4028->meta->bb_3_has_bb_dirtied = true;
            x_4028->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4030, x_4028, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4584(x_4020);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3294(const auto &x_4032) {
  return plus((x_4032->prev != nullptr) ? ((x_4032->prev)->var_flex_grow_sum) : (0.), x_4032->var_flex_grow);
}
Unit var_modified_x_3292(const auto &x_4037) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4038) {
    auto x_4586 = [&](const auto &x_4039) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4040) {
        if (x_4039->meta->bb_1_has_bb_time_table) {
          auto x_4041 = x_4039->meta->bb_1_bb_time_table;
          if (!(x_4039->meta->bb_1_has_bb_dirtied && x_4039->meta->bb_1_bb_dirtied)) {
            x_4039->meta->bb_1_has_bb_dirtied = true;
            x_4039->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4041, x_4039, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4586(x_4037);
    MakeUnit();
    auto x_4587 = [&](const auto &x_4043) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4044) {
        if (x_4043->meta->bb_3_has_bb_time_table) {
          auto x_4045 = x_4043->meta->bb_3_bb_time_table;
          if (!(x_4043->meta->bb_3_has_bb_dirtied && x_4043->meta->bb_3_bb_dirtied)) {
            x_4043->meta->bb_3_has_bb_dirtied = true;
            x_4043->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4045, x_4043, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4587(x_4037);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3289(const auto &x_4047) {
  if (x_4047->has_prop_flex_shrink) {
    return (x_4047->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3287(const auto &x_4050) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4051) {
    auto x_4588 = [&](const auto &x_4052) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4053) {
        if (x_4052->meta->bb_1_has_bb_time_table) {
          auto x_4054 = x_4052->meta->bb_1_bb_time_table;
          if (!(x_4052->meta->bb_1_has_bb_dirtied && x_4052->meta->bb_1_bb_dirtied)) {
            x_4052->meta->bb_1_has_bb_dirtied = true;
            x_4052->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4054, x_4052, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4588(x_4050);
    MakeUnit();
    auto x_4589 = [&](const auto &x_4056) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4057) {
        if (x_4056->meta->bb_3_has_bb_time_table) {
          auto x_4058 = x_4056->meta->bb_3_bb_time_table;
          if (!(x_4056->meta->bb_3_has_bb_dirtied && x_4056->meta->bb_3_bb_dirtied)) {
            x_4056->meta->bb_3_has_bb_dirtied = true;
            x_4056->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4058, x_4056, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4589(x_4050);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3284(const auto &x_4060) {
  if (x_4060->has_prop_flex_grow) {
    return (x_4060->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3282(const auto &x_4063) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4064) {
    auto x_4590 = [&](const auto &x_4065) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4066) {
        if (x_4065->meta->bb_1_has_bb_time_table) {
          auto x_4067 = x_4065->meta->bb_1_bb_time_table;
          if (!(x_4065->meta->bb_1_has_bb_dirtied && x_4065->meta->bb_1_bb_dirtied)) {
            x_4065->meta->bb_1_has_bb_dirtied = true;
            x_4065->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4067, x_4065, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4590(x_4063);
    MakeUnit();
    auto x_4591 = [&](const auto &x_4069) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4070) {
        if (x_4069->meta->bb_0_has_bb_time_table) {
          auto x_4071 = x_4069->meta->bb_0_bb_time_table;
          if (!(x_4069->meta->bb_0_has_bb_dirtied && x_4069->meta->bb_0_bb_dirtied)) {
            x_4069->meta->bb_0_has_bb_dirtied = true;
            x_4069->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4071, x_4069, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4591(x_4063);
    MakeUnit();
    auto x_4592 = [&](const auto &x_4073) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4074) {
        if (x_4073->meta->bb_3_has_bb_time_table) {
          auto x_4075 = x_4073->meta->bb_3_bb_time_table;
          if (!(x_4073->meta->bb_3_has_bb_dirtied && x_4073->meta->bb_3_bb_dirtied)) {
            x_4073->meta->bb_3_has_bb_dirtied = true;
            x_4073->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4075, x_4073, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4592(x_4063);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3279(const auto &x_4077) {
  if (x_4077->has_prop_position) {
    return x_4077->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_3277(const auto &x_4080) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4081) {
    auto x_4593 = [&](const auto &x_4082) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4083) {
        if (x_4082->meta->bb_1_has_bb_time_table) {
          auto x_4084 = x_4082->meta->bb_1_bb_time_table;
          if (!(x_4082->meta->bb_1_has_bb_dirtied && x_4082->meta->bb_1_bb_dirtied)) {
            x_4082->meta->bb_1_has_bb_dirtied = true;
            x_4082->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4084, x_4082, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4593(x_4080);
    MakeUnit();
    ListIter(x_4080->children, [&](const auto &x_4086) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4087) {
        if (x_4086->meta->bb_1_has_bb_time_table) {
          auto x_4088 = x_4086->meta->bb_1_bb_time_table;
          if (!(x_4086->meta->bb_1_has_bb_dirtied && x_4086->meta->bb_1_bb_dirtied)) {
            x_4086->meta->bb_1_has_bb_dirtied = true;
            x_4086->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4088, x_4086, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4594 = [&](const auto &x_4090) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4091) {
        if (x_4090->meta->bb_0_has_bb_time_table) {
          auto x_4092 = x_4090->meta->bb_0_bb_time_table;
          if (!(x_4090->meta->bb_0_has_bb_dirtied && x_4090->meta->bb_0_bb_dirtied)) {
            x_4090->meta->bb_0_has_bb_dirtied = true;
            x_4090->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4092, x_4090, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4594(x_4080);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3274(const auto &x_4094) {
  if (x_4094->has_prop_display) {
    return x_4094->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_3270(const auto &x_4097) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4098) {
    auto x_4595 = [&](const auto &x_4101) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4102) {
        if (x_4101->meta->bb_0_has_bb_time_table) {
          auto x_4103 = x_4101->meta->bb_0_bb_time_table;
          if (!(x_4101->meta->bb_0_has_bb_dirtied && x_4101->meta->bb_0_bb_dirtied)) {
            x_4101->meta->bb_0_has_bb_dirtied = true;
            x_4101->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4103, x_4101, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4097->next == nullptr) {
      auto x_4597 = x_4595;
      OptionMatch(
          x_4097->parent, [&](const auto &x_4100) { return MakeUnit(); },
          [&](const auto &x_4099) {
            auto x_4599 = x_4597;
            x_4599(x_4099);
            return MakeUnit();
          });
    }
    auto x_4596 = [&](const auto &x_4107) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4108) {
        if (x_4107->meta->bb_0_has_bb_time_table) {
          auto x_4109 = x_4107->meta->bb_0_bb_time_table;
          if (!(x_4107->meta->bb_0_has_bb_dirtied && x_4107->meta->bb_0_bb_dirtied)) {
            x_4107->meta->bb_0_has_bb_dirtied = true;
            x_4107->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4109, x_4107, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4097->next, [&](const auto &x_4106) { return MakeUnit(); },
        [&](const auto &x_4105) {
          auto x_4598 = x_4596;
          x_4598(x_4105);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3267(const auto &x_4111) {
  if (x_4111->prev != nullptr) {
    if (x_4111->var_line_break) {
      return plus((x_4111->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4111->prev)->var_intrinsic_current_line_height, x_4111->var_intrinsic_height_external));
    } else {
      return (x_4111->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4111->var_line_break) {
      return x_4111->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3265(const auto &x_4126) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4127) {
    auto x_4600 = [&](const auto &x_4130) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4131) {
        if (x_4130->meta->bb_0_has_bb_time_table) {
          auto x_4132 = x_4130->meta->bb_0_bb_time_table;
          if (!(x_4130->meta->bb_0_has_bb_dirtied && x_4130->meta->bb_0_bb_dirtied)) {
            x_4130->meta->bb_0_has_bb_dirtied = true;
            x_4130->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4132, x_4130, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4126->next == nullptr) {
      auto x_4602 = x_4600;
      OptionMatch(
          x_4126->parent, [&](const auto &x_4129) { return MakeUnit(); },
          [&](const auto &x_4128) {
            auto x_4604 = x_4602;
            x_4604(x_4128);
            return MakeUnit();
          });
    }
    auto x_4601 = [&](const auto &x_4136) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4137) {
        if (x_4136->meta->bb_0_has_bb_time_table) {
          auto x_4138 = x_4136->meta->bb_0_bb_time_table;
          if (!(x_4136->meta->bb_0_has_bb_dirtied && x_4136->meta->bb_0_bb_dirtied)) {
            x_4136->meta->bb_0_has_bb_dirtied = true;
            x_4136->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4138, x_4136, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4126->next, [&](const auto &x_4135) { return MakeUnit(); },
        [&](const auto &x_4134) {
          auto x_4603 = x_4601;
          x_4603(x_4134);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3262(const auto &x_4140) {
  if (x_4140->var_line_break) {
    return 0.;
  } else {
    return max(x_4140->var_intrinsic_height_external,
               (x_4140->prev != nullptr) ? ((x_4140->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_3260(const auto &x_4147) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4148) {
    auto x_4605 = [&](const auto &x_4151) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4152) {
        if (x_4151->meta->bb_0_has_bb_time_table) {
          auto x_4153 = x_4151->meta->bb_0_bb_time_table;
          if (!(x_4151->meta->bb_0_has_bb_dirtied && x_4151->meta->bb_0_bb_dirtied)) {
            x_4151->meta->bb_0_has_bb_dirtied = true;
            x_4151->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4153, x_4151, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4147->next, [&](const auto &x_4150) { return MakeUnit(); },
        [&](const auto &x_4149) {
          auto x_4607 = x_4605;
          x_4607(x_4149);
          return MakeUnit();
        });
    auto x_4606 = [&](const auto &x_4157) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4158) {
        if (x_4157->meta->bb_3_has_bb_time_table) {
          auto x_4159 = x_4157->meta->bb_3_bb_time_table;
          if (!(x_4157->meta->bb_3_has_bb_dirtied && x_4157->meta->bb_3_bb_dirtied)) {
            x_4157->meta->bb_3_has_bb_dirtied = true;
            x_4157->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4159, x_4157, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4147->next == nullptr) {
      auto x_4608 = x_4606;
      OptionMatch(
          x_4147->parent, [&](const auto &x_4156) { return MakeUnit(); },
          [&](const auto &x_4155) {
            auto x_4609 = x_4608;
            x_4609(x_4155);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_3257(const auto &x_4161) {
  return plus((x_4161->prev != nullptr) ? ((x_4161->prev)->var_intrinsic_height_sum) : (0.),
              x_4161->var_intrinsic_height_external);
}
Unit var_modified_x_3255(const auto &x_4166) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4167) {
    auto x_4610 = [&](const auto &x_4168) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4169) {
        if (x_4168->meta->bb_0_has_bb_time_table) {
          auto x_4170 = x_4168->meta->bb_0_bb_time_table;
          if (!(x_4168->meta->bb_0_has_bb_dirtied && x_4168->meta->bb_0_bb_dirtied)) {
            x_4168->meta->bb_0_has_bb_dirtied = true;
            x_4168->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4170, x_4168, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4610(x_4166);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3252(const auto &x_4172) {
  if (eq(x_4172->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4172->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_3250(const auto &x_4177) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4178) {
    auto x_4611 = [&](const auto &x_4179) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4180) {
        if (x_4179->meta->bb_0_has_bb_time_table) {
          auto x_4181 = x_4179->meta->bb_0_bb_time_table;
          if (!(x_4179->meta->bb_0_has_bb_dirtied && x_4179->meta->bb_0_bb_dirtied)) {
            x_4179->meta->bb_0_has_bb_dirtied = true;
            x_4179->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4181, x_4179, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4611(x_4177);
    MakeUnit();
    auto x_4612 = [&](const auto &x_4183) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4184) {
        if (x_4183->meta->bb_3_has_bb_time_table) {
          auto x_4185 = x_4183->meta->bb_3_bb_time_table;
          if (!(x_4183->meta->bb_3_has_bb_dirtied && x_4183->meta->bb_3_bb_dirtied)) {
            x_4183->meta->bb_3_has_bb_dirtied = true;
            x_4183->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4185, x_4183, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4612(x_4177);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3247(const auto &x_4187) {
  if (eq(x_4187->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4187->var_inside_svg) {
      return 0.;
    } else {
      if (x_4187->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4187->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4187->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_4187->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_4187->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4187->var_height_expr.r.a0;
          } else {
            if (x_4187->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_4187->var_height_expr.r.a0;
            } else {
              return x_4187->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_4187->var_children_intrinsic_height,
              (eq(x_4187->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_4187->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4187->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4187->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_4187->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4187->var_has_height_attr &&
                                                  (x_4187->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4187->var_height_attr_expr.r.a0)
                                                     : ((x_4187->has_attr_viewBox)
                                                            ? (x_4187->attr_viewBox.r.a3)
                                                            : (mult((x_4187->attr_viewBox.r.a3),
                                                                    divide(x_4187->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4187->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4187->var_has_height_attr)
                                                            ? (x_4187->var_height_attr_expr.r.a0)
                                                            : ((x_4187->has_attr_image_height &&
                                                                (!x_4187->var_has_width_attr))
                                                                   ? (int_to_float(x_4187->attr_image_height))
                                                                   : ((neq(x_4187->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4187->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4187->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_4187->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_4187->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_4187->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3245(const auto &x_4266) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4267) {
    auto x_4613 = [&](const auto &x_4268) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4269) {
        if (x_4268->meta->bb_3_has_bb_time_table) {
          auto x_4270 = x_4268->meta->bb_3_bb_time_table;
          if (!(x_4268->meta->bb_3_has_bb_dirtied && x_4268->meta->bb_3_bb_dirtied)) {
            x_4268->meta->bb_3_has_bb_dirtied = true;
            x_4268->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4270, x_4268, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4613(x_4266);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3242(const auto &x_4272) {
  if (eq(x_4272->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_4272->var_inside_svg || x_4272->var_disabled)) {
    return true;
  } else {
    if ((x_4272->parent != nullptr) && (x_4272->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_4272->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_4272->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_4272->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_4272->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_4272->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3240(const auto &x_4297) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4298) {
    auto x_4614 = [&](const auto &x_4299) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4300) {
        if (x_4299->meta->bb_0_has_bb_time_table) {
          auto x_4301 = x_4299->meta->bb_0_bb_time_table;
          if (!(x_4299->meta->bb_0_has_bb_dirtied && x_4299->meta->bb_0_bb_dirtied)) {
            x_4299->meta->bb_0_has_bb_dirtied = true;
            x_4299->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4301, x_4299, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4614(x_4297);
    MakeUnit();
    auto x_4615 = [&](const auto &x_4303) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4304) {
        if (x_4303->meta->bb_3_has_bb_time_table) {
          auto x_4305 = x_4303->meta->bb_3_bb_time_table;
          if (!(x_4303->meta->bb_3_has_bb_dirtied && x_4303->meta->bb_3_bb_dirtied)) {
            x_4303->meta->bb_3_has_bb_dirtied = true;
            x_4303->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4305, x_4303, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4615(x_4297);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3237(const auto &x_4307) {
  if (x_4307->has_prop_height) {
    return x_4307->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_3235(const auto &x_4310) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4311) {
    auto x_4616 = [&](const auto &x_4312) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4313) {
        if (x_4312->meta->bb_0_has_bb_time_table) {
          auto x_4314 = x_4312->meta->bb_0_bb_time_table;
          if (!(x_4312->meta->bb_0_has_bb_dirtied && x_4312->meta->bb_0_bb_dirtied)) {
            x_4312->meta->bb_0_has_bb_dirtied = true;
            x_4312->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4314, x_4312, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4616(x_4310);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3232(const auto &x_4316) {
  if (x_4316->last != nullptr) {
    return plus((x_4316->last)->var_finished_intrinsic_height_sum, (x_4316->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3230(const auto &x_4321) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4322) {
    auto x_4617 = [&](const auto &x_4325) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4326) {
        if (x_4325->meta->bb_0_has_bb_time_table) {
          auto x_4327 = x_4325->meta->bb_0_bb_time_table;
          if (!(x_4325->meta->bb_0_has_bb_dirtied && x_4325->meta->bb_0_bb_dirtied)) {
            x_4325->meta->bb_0_has_bb_dirtied = true;
            x_4325->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4327, x_4325, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4321->next, [&](const auto &x_4324) { return MakeUnit(); },
        [&](const auto &x_4323) {
          auto x_4619 = x_4617;
          x_4619(x_4323);
          return MakeUnit();
        });
    auto x_4618 = [&](const auto &x_4331) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4332) {
        if (x_4331->meta->bb_3_has_bb_time_table) {
          auto x_4333 = x_4331->meta->bb_3_bb_time_table;
          if (!(x_4331->meta->bb_3_has_bb_dirtied && x_4331->meta->bb_3_bb_dirtied)) {
            x_4331->meta->bb_3_has_bb_dirtied = true;
            x_4331->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4333, x_4331, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4321->next == nullptr) {
      auto x_4620 = x_4618;
      OptionMatch(
          x_4321->parent, [&](const auto &x_4330) { return MakeUnit(); },
          [&](const auto &x_4329) {
            auto x_4621 = x_4620;
            x_4621(x_4329);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_3227(const auto &x_4335) {
  return plus((x_4335->prev != nullptr) ? ((x_4335->prev)->var_intrinsic_width_sum) : (0.),
              x_4335->var_intrinsic_width_external);
}
Unit var_modified_x_3225(const auto &x_4340) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4341) {
    auto x_4622 = [&](const auto &x_4344) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4345) {
        if (x_4344->meta->bb_0_has_bb_time_table) {
          auto x_4346 = x_4344->meta->bb_0_bb_time_table;
          if (!(x_4344->meta->bb_0_has_bb_dirtied && x_4344->meta->bb_0_bb_dirtied)) {
            x_4344->meta->bb_0_has_bb_dirtied = true;
            x_4344->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4346, x_4344, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4340->next == nullptr) {
      auto x_4624 = x_4622;
      OptionMatch(
          x_4340->parent, [&](const auto &x_4343) { return MakeUnit(); },
          [&](const auto &x_4342) {
            auto x_4626 = x_4624;
            x_4626(x_4342);
            return MakeUnit();
          });
    }
    auto x_4623 = [&](const auto &x_4350) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4351) {
        if (x_4350->meta->bb_0_has_bb_time_table) {
          auto x_4352 = x_4350->meta->bb_0_bb_time_table;
          if (!(x_4350->meta->bb_0_has_bb_dirtied && x_4350->meta->bb_0_bb_dirtied)) {
            x_4350->meta->bb_0_has_bb_dirtied = true;
            x_4350->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4352, x_4350, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4340->next, [&](const auto &x_4349) { return MakeUnit(); },
        [&](const auto &x_4348) {
          auto x_4625 = x_4623;
          x_4625(x_4348);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3222(const auto &x_4354) {
  return max(x_4354->var_intrinsic_current_line_width,
             (x_4354->prev != nullptr) ? ((x_4354->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_3220(const auto &x_4359) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4360) {
    auto x_4627 = [&](const auto &x_4361) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4362) {
        if (x_4361->meta->bb_0_has_bb_time_table) {
          auto x_4363 = x_4361->meta->bb_0_bb_time_table;
          if (!(x_4361->meta->bb_0_has_bb_dirtied && x_4361->meta->bb_0_bb_dirtied)) {
            x_4361->meta->bb_0_has_bb_dirtied = true;
            x_4361->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4363, x_4361, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4627(x_4359);
    MakeUnit();
    auto x_4628 = [&](const auto &x_4367) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4368) {
        if (x_4367->meta->bb_0_has_bb_time_table) {
          auto x_4369 = x_4367->meta->bb_0_bb_time_table;
          if (!(x_4367->meta->bb_0_has_bb_dirtied && x_4367->meta->bb_0_bb_dirtied)) {
            x_4367->meta->bb_0_has_bb_dirtied = true;
            x_4367->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4369, x_4367, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    OptionMatch(
        x_4359->next, [&](const auto &x_4366) { return MakeUnit(); },
        [&](const auto &x_4365) {
          auto x_4629 = x_4628;
          x_4629(x_4365);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3217(const auto &x_4371) {
  return plus(x_4371->var_intrinsic_width_external,
              ((x_4371->prev != nullptr) && (!(x_4371->prev)->var_line_break))
                  ? ((x_4371->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_3215(const auto &x_4378) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4379) {
    auto x_4630 = [&](const auto &x_4380) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4381) {
        if (x_4380->meta->bb_0_has_bb_time_table) {
          auto x_4382 = x_4380->meta->bb_0_bb_time_table;
          if (!(x_4380->meta->bb_0_has_bb_dirtied && x_4380->meta->bb_0_bb_dirtied)) {
            x_4380->meta->bb_0_has_bb_dirtied = true;
            x_4380->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4382, x_4380, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4630(x_4378);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3212(const auto &x_4384) {
  if (eq(x_4384->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4384->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_3210(const auto &x_4389) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4390) {
    auto x_4631 = [&](const auto &x_4391) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4392) {
        if (x_4391->meta->bb_0_has_bb_time_table) {
          auto x_4393 = x_4391->meta->bb_0_bb_time_table;
          if (!(x_4391->meta->bb_0_has_bb_dirtied && x_4391->meta->bb_0_bb_dirtied)) {
            x_4391->meta->bb_0_has_bb_dirtied = true;
            x_4391->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4393, x_4391, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4631(x_4389);
    MakeUnit();
    auto x_4632 = [&](const auto &x_4395) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4396) {
        if (x_4395->meta->bb_3_has_bb_time_table) {
          auto x_4397 = x_4395->meta->bb_3_bb_time_table;
          if (!(x_4395->meta->bb_3_has_bb_dirtied && x_4395->meta->bb_3_bb_dirtied)) {
            x_4395->meta->bb_3_has_bb_dirtied = true;
            x_4395->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4397, x_4395, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4632(x_4389);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3207(const auto &x_4399) {
  if (eq(x_4399->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4399->var_inside_svg) {
      return 0.;
    } else {
      if (x_4399->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4399->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4399->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_4399->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_4399->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_4399->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_4399->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4399->var_width_expr.r.a0;
          } else {
            return x_4399->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_4399->var_children_intrinsic_width,
              (eq(x_4399->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_4399->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4399->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4399->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_4399->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4399->var_has_width_attr &&
                                                  (x_4399->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4399->var_width_attr_expr.r.a0)
                                                     : (((!x_4399->var_has_width_attr) && x_4399->has_attr_viewBox)
                                                            ? (x_4399->attr_viewBox.r.a2)
                                                            : (mult((x_4399->attr_viewBox.r.a2),
                                                                    divide(x_4399->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4399->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4399->var_has_width_attr)
                                                            ? (x_4399->var_width_attr_expr.r.a0)
                                                            : ((x_4399->has_attr_image_width &&
                                                                (!x_4399->var_has_height_attr))
                                                                   ? (int_to_float(x_4399->attr_image_width))
                                                                   : ((neq(x_4399->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4399->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4399->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_4399->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_4399->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_4399->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3205(const auto &x_4482) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4483) {
    auto x_4633 = [&](const auto &x_4484) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4485) {
        if (x_4484->meta->bb_0_has_bb_time_table) {
          auto x_4486 = x_4484->meta->bb_0_bb_time_table;
          if (!(x_4484->meta->bb_0_has_bb_dirtied && x_4484->meta->bb_0_bb_dirtied)) {
            x_4484->meta->bb_0_has_bb_dirtied = true;
            x_4484->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4486, x_4484, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4633(x_4482);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3202(const auto &x_4488) {
  if (x_4488->last != nullptr) {
    return (x_4488->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_3200(const auto &x_4491) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4492) {
    auto x_4634 = [&](const auto &x_4493) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4494) {
        if (x_4493->meta->bb_3_has_bb_time_table) {
          auto x_4495 = x_4493->meta->bb_3_bb_time_table;
          if (!(x_4493->meta->bb_3_has_bb_dirtied && x_4493->meta->bb_3_bb_dirtied)) {
            x_4493->meta->bb_3_has_bb_dirtied = true;
            x_4493->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4495, x_4493, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4634(x_4491);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3197(const auto &x_4497) {
  if (eq(x_4497->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_4497->var_inside_svg || x_4497->var_disabled)) {
    return true;
  } else {
    if ((x_4497->parent != nullptr) && (x_4497->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_4497->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_4497->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_4497->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_4497->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_4497->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3195(const auto &x_4522) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4523) {
    auto x_4635 = [&](const auto &x_4524) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4525) {
        if (x_4524->meta->bb_0_has_bb_time_table) {
          auto x_4526 = x_4524->meta->bb_0_bb_time_table;
          if (!(x_4524->meta->bb_0_has_bb_dirtied && x_4524->meta->bb_0_bb_dirtied)) {
            x_4524->meta->bb_0_has_bb_dirtied = true;
            x_4524->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4526, x_4524, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4635(x_4522);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3192(const auto &x_4528) {
  if (eq(x_4528->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_4528->var_inside_svg) {
      return true;
    } else {
      if (x_4528->var_disabled) {
        return true;
      } else {if ( eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_4528->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_3190(const auto &x_4535) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4536) {
    auto x_4636 = [&](const auto &x_4537) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4538) {
        if (x_4537->meta->bb_0_has_bb_time_table) {
          auto x_4539 = x_4537->meta->bb_0_bb_time_table;
          if (!(x_4537->meta->bb_0_has_bb_dirtied && x_4537->meta->bb_0_bb_dirtied)) {
            x_4537->meta->bb_0_has_bb_dirtied = true;
            x_4537->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4539, x_4537, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4636(x_4535);
    MakeUnit();
    auto x_4637 = [&](const auto &x_4541) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4542) {
        if (x_4541->meta->bb_3_has_bb_time_table) {
          auto x_4543 = x_4541->meta->bb_3_bb_time_table;
          if (!(x_4541->meta->bb_3_has_bb_dirtied && x_4541->meta->bb_3_bb_dirtied)) {
            x_4541->meta->bb_3_has_bb_dirtied = true;
            x_4541->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_4543, x_4541, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4637(x_4535);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3187(const auto &x_4545) {
  if (x_4545->has_prop_width) {
    return x_4545->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit x_2845(const auto &x_2846, const auto &x_2847, const auto &x_2848) {
  auto x_2849 = ListHeadExn(x_2846);
  auto x_2850 = ListTailExn(x_2846);
  if (ListIsEmpty(x_2850)) {
    auto x_2851 = ListSplitN(x_2847->children, x_2849);
    OutputChangeMetric(IntAdd(layout_size_x_2793(ListNthExn(x_2847->children, x_2849)), layout_size_x_2793(x_2848)));
    x_2847->children = ListAppend(Zro(x_2851), Cons(x_2848, ListTailExn(Fst(x_2851))));
    return MakeUnit();
  } else {
    return x_2845(x_2850, ListNthExn(x_2847->children, x_2849), x_2848);
  }
}
Unit replace_layout_node_x_2844(const auto &x_2846, const auto &x_2847, const auto &x_2848) {
  return x_2845(x_2846, x_2847, x_2848);
}
Unit x_2852(const auto &x_2853, const auto &x_2854, const auto &x_2855) {
  auto x_2856 = ListHeadExn(x_2853);
  auto x_2857 = ListTailExn(x_2853);
  if (ListIsEmpty(x_2857)) {
    OutputChangeMetric(layout_size_x_2793(x_2855));
    auto x_2858 = ListSplitN(x_2854->children, x_2856);
    x_2854->children = ListAppend(Zro(x_2858), Cons(x_2855, Fst(x_2858)));
    return MakeUnit();
  } else {
    return x_2852(x_2857, ListNthExn(x_2854->children, x_2856), x_2855);
  }
}
Unit add_layout_node_x_2842(const auto &x_2853, const auto &x_2854, const auto &x_2855) {
  return x_2852(x_2853, x_2854, x_2855);
}
Unit x_2859(const auto &x_2860, const auto &x_2861, const auto &x_2862) {
  auto x_2863 = ListHeadExn(x_2860);
  auto x_2864 = ListTailExn(x_2860);
  if (ListIsEmpty(x_2864)) {
    OutputChangeMetric(layout_size_x_2793(ListNthExn(x_2861->children, x_2863)));
    auto x_2865 = ListSplitN(x_2861->children, x_2863);
    x_2861->children = ListAppend(Zro(x_2865), ListTailExn(Fst(x_2865)));
    return MakeUnit();
  } else {
    return x_2859(x_2864, ListNthExn(x_2861->children, x_2863), x_2862);
  }
}
Unit remove_layout_node_x_2840(const auto &x_2860, const auto &x_2861, const auto &x_2862) {
  return x_2859(x_2860, x_2861, x_2862);
}
Unit x_2866(const auto &x_2867, const auto &x_2868, const auto &x_2869) {
  return ListMatch(
      x_2867,
      [&](const auto &x_2872) {
        auto x_2873 = Zro(x_2869);
        auto x_2874 = Zro(x_2873);
        auto x_2875 = Fst(x_2873);
        auto x_2876 = Fst(x_2869);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4638 = x_2874;
        if (x_4638 == "attributes") {
          std::string x_4639 = x_2875;
          if (x_4639 == "width") {
            WriteMetric();
            x_2868->has_attr_width = true;
            x_2868->attr_width = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2877) {
              if (x_2868->meta->bb_1_has_bb_time_table) {
                auto x_2878 = x_2868->meta->bb_1_bb_time_table;
                if (!(x_2868->meta->bb_1_has_bb_dirtied && x_2868->meta->bb_1_bb_dirtied)) {
                  x_2868->meta->bb_1_has_bb_dirtied = true;
                  x_2868->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2878, x_2868, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "image_height") {
            WriteMetric();
            x_2868->has_attr_image_height = true;
            x_2868->attr_image_height = Asint64_t(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2880) {
              if (x_2868->meta->bb_0_has_bb_time_table) {
                auto x_2881 = x_2868->meta->bb_0_bb_time_table;
                if (!(x_2868->meta->bb_0_has_bb_dirtied && x_2868->meta->bb_0_bb_dirtied)) {
                  x_2868->meta->bb_0_has_bb_dirtied = true;
                  x_2868->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2881, x_2868, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "image_width") {
            WriteMetric();
            x_2868->has_attr_image_width = true;
            x_2868->attr_image_width = Asint64_t(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2883) {
              if (x_2868->meta->bb_0_has_bb_time_table) {
                auto x_2884 = x_2868->meta->bb_0_bb_time_table;
                if (!(x_2868->meta->bb_0_has_bb_dirtied && x_2868->meta->bb_0_bb_dirtied)) {
                  x_2868->meta->bb_0_has_bb_dirtied = true;
                  x_2868->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2884, x_2868, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "height") {
            WriteMetric();
            x_2868->has_attr_height = true;
            x_2868->attr_height = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2886) {
              if (x_2868->meta->bb_1_has_bb_time_table) {
                auto x_2887 = x_2868->meta->bb_1_bb_time_table;
                if (!(x_2868->meta->bb_1_has_bb_dirtied && x_2868->meta->bb_1_bb_dirtied)) {
                  x_2868->meta->bb_1_has_bb_dirtied = true;
                  x_2868->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2887, x_2868, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "viewBox") {
            WriteMetric();
            x_2868->has_attr_viewBox = true;
            x_2868->attr_viewBox = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2889) {
              if (x_2868->meta->bb_0_has_bb_time_table) {
                auto x_2890 = x_2868->meta->bb_0_bb_time_table;
                if (!(x_2868->meta->bb_0_has_bb_dirtied && x_2868->meta->bb_0_bb_dirtied)) {
                  x_2868->meta->bb_0_has_bb_dirtied = true;
                  x_2868->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2890, x_2868, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4638 == "properties") {
          std::string x_4640 = x_2875;
          if (x_4640 == "width") {
            WriteMetric();
            x_2868->has_prop_width = true;
            x_2868->prop_width = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2892) {
              if (x_2868->meta->bb_0_has_bb_time_table) {
                auto x_2893 = x_2868->meta->bb_0_bb_time_table;
                if (!(x_2868->meta->bb_0_has_bb_dirtied && x_2868->meta->bb_0_bb_dirtied)) {
                  x_2868->meta->bb_0_has_bb_dirtied = true;
                  x_2868->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2893, x_2868, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4640 == "flex-grow") {
            WriteMetric();
            x_2868->has_prop_flex_grow = true;
            x_2868->prop_flex_grow = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2895) {
              if (x_2868->meta->bb_1_has_bb_time_table) {
                auto x_2896 = x_2868->meta->bb_1_bb_time_table;
                if (!(x_2868->meta->bb_1_has_bb_dirtied && x_2868->meta->bb_1_bb_dirtied)) {
                  x_2868->meta->bb_1_has_bb_dirtied = true;
                  x_2868->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2896, x_2868, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4640 == "height") {
            WriteMetric();
            x_2868->has_prop_height = true;
            x_2868->prop_height = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2898) {
              if (x_2868->meta->bb_0_has_bb_time_table) {
                auto x_2899 = x_2868->meta->bb_0_bb_time_table;
                if (!(x_2868->meta->bb_0_has_bb_dirtied && x_2868->meta->bb_0_bb_dirtied)) {
                  x_2868->meta->bb_0_has_bb_dirtied = true;
                  x_2868->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2899, x_2868, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4640 == "display") {
            WriteMetric();
            x_2868->has_prop_display = true;
            x_2868->prop_display = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2901) {
              if (x_2868->meta->bb_1_has_bb_time_table) {
                auto x_2902 = x_2868->meta->bb_1_bb_time_table;
                if (!(x_2868->meta->bb_1_has_bb_dirtied && x_2868->meta->bb_1_bb_dirtied)) {
                  x_2868->meta->bb_1_has_bb_dirtied = true;
                  x_2868->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2902, x_2868, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4640 == "position") {
            WriteMetric();
            x_2868->has_prop_position = true;
            x_2868->prop_position = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2904) {
              if (x_2868->meta->bb_1_has_bb_time_table) {
                auto x_2905 = x_2868->meta->bb_1_bb_time_table;
                if (!(x_2868->meta->bb_1_has_bb_dirtied && x_2868->meta->bb_1_bb_dirtied)) {
                  x_2868->meta->bb_1_has_bb_dirtied = true;
                  x_2868->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2905, x_2868, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4640 == "flex-shrink") {
            WriteMetric();
            x_2868->has_prop_flex_shrink = true;
            x_2868->prop_flex_shrink = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2907) {
              if (x_2868->meta->bb_1_has_bb_time_table) {
                auto x_2908 = x_2868->meta->bb_1_bb_time_table;
                if (!(x_2868->meta->bb_1_has_bb_dirtied && x_2868->meta->bb_1_bb_dirtied)) {
                  x_2868->meta->bb_1_has_bb_dirtied = true;
                  x_2868->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2908, x_2868, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4640 == "flex-direction") {
            WriteMetric();
            x_2868->has_prop_flex_direction = true;
            x_2868->prop_flex_direction = AsDEString(x_2876);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2910) {
              if (x_2868->meta->bb_1_has_bb_time_table) {
                auto x_2911 = x_2868->meta->bb_1_bb_time_table;
                if (!(x_2868->meta->bb_1_has_bb_dirtied && x_2868->meta->bb_1_bb_dirtied)) {
                  x_2868->meta->bb_1_has_bb_dirtied = true;
                  x_2868->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2911, x_2868, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
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
      [&](const auto &x_2870, const auto &x_2871) {
        return x_2866(x_2871, ListNthExn(x_2868->children, x_2870), x_2869);
      });
}
Unit insert_value_x_2838(const auto &x_2867, const auto &x_2868, const auto &x_2869) {
  return x_2866(x_2867, x_2868, x_2869);
}
Unit x_2913(const auto &x_2914, const auto &x_2915, const auto &x_2916) {
  return ListMatch(
      x_2914,
      [&](const auto &x_2919) {
        auto x_2920 = Zro(x_2916);
        auto x_2921 = Fst(x_2916);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4641 = x_2920;
        if (x_4641 == "attributes") {
          std::string x_4642 = x_2921;
          if (x_4642 == "width") {
            WriteMetric();
            x_2915->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2922) {
              if (x_2915->meta->bb_1_has_bb_time_table) {
                auto x_2923 = x_2915->meta->bb_1_bb_time_table;
                if (!(x_2915->meta->bb_1_has_bb_dirtied && x_2915->meta->bb_1_bb_dirtied)) {
                  x_2915->meta->bb_1_has_bb_dirtied = true;
                  x_2915->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2923, x_2915, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "image_height") {
            WriteMetric();
            x_2915->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2925) {
              if (x_2915->meta->bb_0_has_bb_time_table) {
                auto x_2926 = x_2915->meta->bb_0_bb_time_table;
                if (!(x_2915->meta->bb_0_has_bb_dirtied && x_2915->meta->bb_0_bb_dirtied)) {
                  x_2915->meta->bb_0_has_bb_dirtied = true;
                  x_2915->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2926, x_2915, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "image_width") {
            WriteMetric();
            x_2915->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2928) {
              if (x_2915->meta->bb_0_has_bb_time_table) {
                auto x_2929 = x_2915->meta->bb_0_bb_time_table;
                if (!(x_2915->meta->bb_0_has_bb_dirtied && x_2915->meta->bb_0_bb_dirtied)) {
                  x_2915->meta->bb_0_has_bb_dirtied = true;
                  x_2915->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2929, x_2915, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "height") {
            WriteMetric();
            x_2915->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2931) {
              if (x_2915->meta->bb_1_has_bb_time_table) {
                auto x_2932 = x_2915->meta->bb_1_bb_time_table;
                if (!(x_2915->meta->bb_1_has_bb_dirtied && x_2915->meta->bb_1_bb_dirtied)) {
                  x_2915->meta->bb_1_has_bb_dirtied = true;
                  x_2915->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2932, x_2915, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "viewBox") {
            WriteMetric();
            x_2915->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2934) {
              if (x_2915->meta->bb_0_has_bb_time_table) {
                auto x_2935 = x_2915->meta->bb_0_bb_time_table;
                if (!(x_2915->meta->bb_0_has_bb_dirtied && x_2915->meta->bb_0_bb_dirtied)) {
                  x_2915->meta->bb_0_has_bb_dirtied = true;
                  x_2915->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2935, x_2915, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4641 == "properties") {
          std::string x_4643 = x_2921;
          if (x_4643 == "width") {
            WriteMetric();
            x_2915->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2937) {
              if (x_2915->meta->bb_0_has_bb_time_table) {
                auto x_2938 = x_2915->meta->bb_0_bb_time_table;
                if (!(x_2915->meta->bb_0_has_bb_dirtied && x_2915->meta->bb_0_bb_dirtied)) {
                  x_2915->meta->bb_0_has_bb_dirtied = true;
                  x_2915->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2938, x_2915, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4643 == "flex-grow") {
            WriteMetric();
            x_2915->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2940) {
              if (x_2915->meta->bb_1_has_bb_time_table) {
                auto x_2941 = x_2915->meta->bb_1_bb_time_table;
                if (!(x_2915->meta->bb_1_has_bb_dirtied && x_2915->meta->bb_1_bb_dirtied)) {
                  x_2915->meta->bb_1_has_bb_dirtied = true;
                  x_2915->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2941, x_2915, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4643 == "height") {
            WriteMetric();
            x_2915->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2943) {
              if (x_2915->meta->bb_0_has_bb_time_table) {
                auto x_2944 = x_2915->meta->bb_0_bb_time_table;
                if (!(x_2915->meta->bb_0_has_bb_dirtied && x_2915->meta->bb_0_bb_dirtied)) {
                  x_2915->meta->bb_0_has_bb_dirtied = true;
                  x_2915->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2944, x_2915, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4643 == "display") {
            WriteMetric();
            x_2915->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2946) {
              if (x_2915->meta->bb_1_has_bb_time_table) {
                auto x_2947 = x_2915->meta->bb_1_bb_time_table;
                if (!(x_2915->meta->bb_1_has_bb_dirtied && x_2915->meta->bb_1_bb_dirtied)) {
                  x_2915->meta->bb_1_has_bb_dirtied = true;
                  x_2915->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2947, x_2915, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4643 == "position") {
            WriteMetric();
            x_2915->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2949) {
              if (x_2915->meta->bb_1_has_bb_time_table) {
                auto x_2950 = x_2915->meta->bb_1_bb_time_table;
                if (!(x_2915->meta->bb_1_has_bb_dirtied && x_2915->meta->bb_1_bb_dirtied)) {
                  x_2915->meta->bb_1_has_bb_dirtied = true;
                  x_2915->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2950, x_2915, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4643 == "flex-shrink") {
            WriteMetric();
            x_2915->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2952) {
              if (x_2915->meta->bb_1_has_bb_time_table) {
                auto x_2953 = x_2915->meta->bb_1_bb_time_table;
                if (!(x_2915->meta->bb_1_has_bb_dirtied && x_2915->meta->bb_1_bb_dirtied)) {
                  x_2915->meta->bb_1_has_bb_dirtied = true;
                  x_2915->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2953, x_2915, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4643 == "flex-direction") {
            WriteMetric();
            x_2915->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2955) {
              if (x_2915->meta->bb_1_has_bb_time_table) {
                auto x_2956 = x_2915->meta->bb_1_bb_time_table;
                if (!(x_2915->meta->bb_1_has_bb_dirtied && x_2915->meta->bb_1_bb_dirtied)) {
                  x_2915->meta->bb_1_has_bb_dirtied = true;
                  x_2915->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2956, x_2915, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
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
      [&](const auto &x_2917, const auto &x_2918) {
        return x_2913(x_2918, ListNthExn(x_2915->children, x_2917), x_2916);
      });
}
Unit delete_value_x_2836(const auto &x_2914, const auto &x_2915, const auto &x_2916) {
  return x_2913(x_2914, x_2915, x_2916);
}
Unit x_2958(const auto &x_2959, const auto &x_2960, const auto &x_2961) {
  return ListMatch(
      x_2959,
      [&](const auto &x_2964) {
        auto x_2965 = Zro(x_2961);
        auto x_2966 = Zro(x_2965);
        auto x_2967 = Fst(x_2965);
        auto x_2968 = Fst(x_2961);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4644 = x_2966;
        if (x_4644 == "attributes") {
          std::string x_4645 = x_2967;
          if (x_4645 == "width") {
            WriteMetric();
            x_2960->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2969) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_2970 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2970, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_attr_width = true;
            x_2960->attr_width = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2972) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_2973 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2973, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "image_height") {
            WriteMetric();
            x_2960->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2975) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_2976 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2976, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_attr_image_height = true;
            x_2960->attr_image_height = Asint64_t(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2978) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_2979 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2979, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "image_width") {
            WriteMetric();
            x_2960->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2981) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_2982 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2982, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_attr_image_width = true;
            x_2960->attr_image_width = Asint64_t(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2984) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_2985 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2985, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "height") {
            WriteMetric();
            x_2960->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2987) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_2988 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2988, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_attr_height = true;
            x_2960->attr_height = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2990) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_2991 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2991, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "viewBox") {
            WriteMetric();
            x_2960->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2993) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_2994 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2994, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_attr_viewBox = true;
            x_2960->attr_viewBox = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2996) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_2997 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_2997, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4644 == "properties") {
          std::string x_4646 = x_2967;
          if (x_4646 == "width") {
            WriteMetric();
            x_2960->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2999) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_3000 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3000, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_prop_width = true;
            x_2960->prop_width = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3002) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_3003 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3003, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4646 == "flex-grow") {
            WriteMetric();
            x_2960->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3005) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3006 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3006, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_prop_flex_grow = true;
            x_2960->prop_flex_grow = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3008) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3009 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3009, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4646 == "height") {
            WriteMetric();
            x_2960->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3011) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_3012 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3012, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_prop_height = true;
            x_2960->prop_height = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3014) {
              if (x_2960->meta->bb_0_has_bb_time_table) {
                auto x_3015 = x_2960->meta->bb_0_bb_time_table;
                if (!(x_2960->meta->bb_0_has_bb_dirtied && x_2960->meta->bb_0_bb_dirtied)) {
                  x_2960->meta->bb_0_has_bb_dirtied = true;
                  x_2960->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3015, x_2960, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4646 == "display") {
            WriteMetric();
            x_2960->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3017) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3018 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3018, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_prop_display = true;
            x_2960->prop_display = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3020) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3021 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3021, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4646 == "position") {
            WriteMetric();
            x_2960->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3023) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3024 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3024, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_prop_position = true;
            x_2960->prop_position = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3026) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3027 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3027, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4646 == "flex-shrink") {
            WriteMetric();
            x_2960->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3029) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3030 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3030, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_prop_flex_shrink = true;
            x_2960->prop_flex_shrink = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3032) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3033 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3033, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4646 == "flex-direction") {
            WriteMetric();
            x_2960->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3035) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3036 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3036, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2960->has_prop_flex_direction = true;
            x_2960->prop_flex_direction = AsDEString(x_2968);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3038) {
              if (x_2960->meta->bb_1_has_bb_time_table) {
                auto x_3039 = x_2960->meta->bb_1_bb_time_table;
                if (!(x_2960->meta->bb_1_has_bb_dirtied && x_2960->meta->bb_1_bb_dirtied)) {
                  x_2960->meta->bb_1_has_bb_dirtied = true;
                  x_2960->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueuePush(x_3039, x_2960, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
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
      [&](const auto &x_2962, const auto &x_2963) {
        return x_2958(x_2963, ListNthExn(x_2960->children, x_2962), x_2961);
      });
}
Unit replace_value_x_2834(const auto &x_2959, const auto &x_2960, const auto &x_2961) {
  return x_2958(x_2959, x_2960, x_2961);
}
Unit x_3041(const auto &x_3042, const auto &x_3043, const auto &x_3044) {
  auto x_3045 = ListHeadExn(x_3042);
  auto x_3046 = ListTailExn(x_3042);
  if (ListIsEmpty(x_3046)) {
    InputChangeMetric(IntAdd(node_size_x_2794(ListNthExn(x_3043->children, x_3045)), node_size_x_2794(x_3044)));
    auto x_3047 = ListSplitN(x_3043->children, x_3045);
    auto x_3048 = Zro(x_3047);
    auto x_3049 = Fst(x_3047);
    auto x_3050 = ListHeadExn(x_3049);
    auto x_3051 = ListTailExn(x_3049);
    x_3043->children = ListAppend(x_3048, x_3051);
    x_3050->meta->alive = false;
    OptionMatch(
        x_3050->prev, [&](const auto &x_3053) { return MakeUnit(); },
        [&](const auto &x_3052) {
          x_3052->next = ToPath(x_3050->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3050->next, [&](const auto &x_3055) { return MakeUnit(); },
        [&](const auto &x_3054) {
          x_3054->prev = ToPath(x_3050->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3048)) {
      x_3043->first = ToPath(ListHead(x_3051));
    }
    if (ListIsEmpty(x_3051)) {
      x_3043->last = ToPath(ListLast(x_3048));
    }
    OptionMatch(
        x_3050->next, [&](const auto &x_3060) { return MakeUnit(); },
        [&](const auto &x_3056) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3057) {
            if (x_3056->meta->bb_1_has_bb_time_table) {
              auto x_3058 = x_3056->meta->bb_1_bb_time_table;
              if (!(x_3056->meta->bb_1_has_bb_dirtied && x_3056->meta->bb_1_bb_dirtied)) {
                x_3056->meta->bb_1_has_bb_dirtied = true;
                x_3056->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3058, x_3056, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3043->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3061) {
        if (x_3043->meta->bb_0_has_bb_time_table) {
          auto x_3062 = x_3043->meta->bb_0_bb_time_table;
          if (!(x_3043->meta->bb_0_has_bb_dirtied && x_3043->meta->bb_0_bb_dirtied)) {
            x_3043->meta->bb_0_has_bb_dirtied = true;
            x_3043->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3062, x_3043, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3051)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3064) {
        if (x_3043->meta->bb_0_has_bb_time_table) {
          auto x_3065 = x_3043->meta->bb_0_bb_time_table;
          if (!(x_3043->meta->bb_0_has_bb_dirtied && x_3043->meta->bb_0_bb_dirtied)) {
            x_3043->meta->bb_0_has_bb_dirtied = true;
            x_3043->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3065, x_3043, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3050->next, [&](const auto &x_3071) { return MakeUnit(); },
        [&](const auto &x_3067) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3068) {
            if (x_3067->meta->bb_0_has_bb_time_table) {
              auto x_3069 = x_3067->meta->bb_0_bb_time_table;
              if (!(x_3067->meta->bb_0_has_bb_dirtied && x_3067->meta->bb_0_bb_dirtied)) {
                x_3067->meta->bb_0_has_bb_dirtied = true;
                x_3067->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3069, x_3067, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3043->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3072) {
        if (x_3043->meta->bb_3_has_bb_time_table) {
          auto x_3073 = x_3043->meta->bb_3_bb_time_table;
          if (!(x_3043->meta->bb_3_has_bb_dirtied && x_3043->meta->bb_3_bb_dirtied)) {
            x_3043->meta->bb_3_has_bb_dirtied = true;
            x_3043->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3073, x_3043, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3051)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3075) {
        if (x_3043->meta->bb_3_has_bb_time_table) {
          auto x_3076 = x_3043->meta->bb_3_bb_time_table;
          if (!(x_3043->meta->bb_3_has_bb_dirtied && x_3043->meta->bb_3_bb_dirtied)) {
            x_3043->meta->bb_3_has_bb_dirtied = true;
            x_3043->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3076, x_3043, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3050->next, [&](const auto &x_3082) { return MakeUnit(); },
        [&](const auto &x_3078) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3079) {
            if (x_3078->meta->bb_3_has_bb_time_table) {
              auto x_3080 = x_3078->meta->bb_3_bb_time_table;
              if (!(x_3078->meta->bb_3_has_bb_dirtied && x_3078->meta->bb_3_bb_dirtied)) {
                x_3078->meta->bb_3_has_bb_dirtied = true;
                x_3078->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3080, x_3078, static_cast<int64_t>(0));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    MakeUnit();
    auto x_3083 = ListSplitN(x_3043->children, x_3045);
    auto x_3084 = Zro(x_3083);
    auto x_3085 = Fst(x_3083);
    x_3043->children = ListAppend(x_3084, Cons(x_3044, x_3085));
    if (ListIsEmpty(x_3084)) {
      x_3043->first = x_3044.get();
    }
    if (ListIsEmpty(x_3085)) {
      x_3043->last = x_3044.get();
    }
    OptionMatch(
        ListLast(x_3084),
        [&](const auto &x_3087) {
          x_3044->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3086) {
          x_3044->prev = x_3086.get();
          x_3086->next = x_3044.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3085),
        [&](const auto &x_3089) {
          x_3044->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3088) {
          x_3044->next = x_3088.get();
          x_3088->prev = x_3044.get();
          return MakeUnit();
        });
    x_3044->parent = x_3043.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_3090) {
      auto x_3091 = (x_3044->parent);
      if (x_3091->meta->bb_0_has_bb_time_table) {
        auto x_3096 = OptionMatch(
            x_3044->prev, [&](const auto &x_3095) { return NextTotalOrder(x_3091->meta->bb_1_bb_time_table); },
            [&](const auto &x_3092) {
              if (x_3092->meta->bb_0_has_bb_time_table) {
                auto x_3093 = x_3092->meta->bb_0_bb_time_table;
                return NextTotalOrder(x_3093);
              } else {
                return NextTotalOrder(x_3092->meta->bb_1_bb_time_table);
              }
            });
        x_3044->meta->bb_1_has_bb_time_table = true;
        x_3044->meta->bb_1_bb_time_table = x_3096;
        MetaWriteMetric();
        QueueForcePush(x_3096, x_3044, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    OptionMatch(
        x_3044->next, [&](const auto &x_3102) { return MakeUnit(); },
        [&](const auto &x_3098) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3099) {
            if (x_3098->meta->bb_1_has_bb_time_table) {
              auto x_3100 = x_3098->meta->bb_1_bb_time_table;
              if (!(x_3098->meta->bb_1_has_bb_dirtied && x_3098->meta->bb_1_bb_dirtied)) {
                x_3098->meta->bb_1_has_bb_dirtied = true;
                x_3098->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3100, x_3098, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsSingleton(x_3043->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3103) {
        if (x_3043->meta->bb_0_has_bb_time_table) {
          auto x_3104 = x_3043->meta->bb_0_bb_time_table;
          if (!(x_3043->meta->bb_0_has_bb_dirtied && x_3043->meta->bb_0_bb_dirtied)) {
            x_3043->meta->bb_0_has_bb_dirtied = true;
            x_3043->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3104, x_3043, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3085)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3106) {
        if (x_3043->meta->bb_0_has_bb_time_table) {
          auto x_3107 = x_3043->meta->bb_0_bb_time_table;
          if (!(x_3043->meta->bb_0_has_bb_dirtied && x_3043->meta->bb_0_bb_dirtied)) {
            x_3043->meta->bb_0_has_bb_dirtied = true;
            x_3043->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3107, x_3043, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3044->next, [&](const auto &x_3113) { return MakeUnit(); },
        [&](const auto &x_3109) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3110) {
            if (x_3109->meta->bb_0_has_bb_time_table) {
              auto x_3111 = x_3109->meta->bb_0_bb_time_table;
              if (!(x_3109->meta->bb_0_has_bb_dirtied && x_3109->meta->bb_0_bb_dirtied)) {
                x_3109->meta->bb_0_has_bb_dirtied = true;
                x_3109->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3111, x_3109, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3114) {
      auto x_3115 = (x_3044->parent);
      if (x_3115->meta->bb_2_has_bb_time_table) {
        auto x_3120 = OptionMatch(
            x_3044->prev, [&](const auto &x_3119) { return NextTotalOrder(x_3115->meta->bb_3_bb_time_table); },
            [&](const auto &x_3116) {
              if (x_3116->meta->bb_2_has_bb_time_table) {
                auto x_3117 = x_3116->meta->bb_2_bb_time_table;
                return NextTotalOrder(x_3117);
              } else {
                return NextTotalOrder(x_3116->meta->bb_3_bb_time_table);
              }
            });
        x_3044->meta->bb_3_has_bb_time_table = true;
        x_3044->meta->bb_3_bb_time_table = x_3120;
        MetaWriteMetric();
        QueueForcePush(x_3120, x_3044, static_cast<int64_t>(5));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    if (ListIsSingleton(x_3043->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3122) {
        if (x_3043->meta->bb_3_has_bb_time_table) {
          auto x_3123 = x_3043->meta->bb_3_bb_time_table;
          if (!(x_3043->meta->bb_3_has_bb_dirtied && x_3043->meta->bb_3_bb_dirtied)) {
            x_3043->meta->bb_3_has_bb_dirtied = true;
            x_3043->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3123, x_3043, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3085)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3125) {
        if (x_3043->meta->bb_3_has_bb_time_table) {
          auto x_3126 = x_3043->meta->bb_3_bb_time_table;
          if (!(x_3043->meta->bb_3_has_bb_dirtied && x_3043->meta->bb_3_bb_dirtied)) {
            x_3043->meta->bb_3_has_bb_dirtied = true;
            x_3043->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3126, x_3043, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3044->next, [&](const auto &x_3132) { return MakeUnit(); },
        [&](const auto &x_3128) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3129) {
            if (x_3128->meta->bb_3_has_bb_time_table) {
              auto x_3130 = x_3128->meta->bb_3_bb_time_table;
              if (!(x_3128->meta->bb_3_has_bb_dirtied && x_3128->meta->bb_3_bb_dirtied)) {
                x_3128->meta->bb_3_has_bb_dirtied = true;
                x_3128->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3130, x_3128, static_cast<int64_t>(0));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3041(x_3046, ListNthExn(x_3043->children, x_3045), x_3044);
  }
}
Unit replace_node_x_2832(const auto &x_3042, const auto &x_3043, const auto &x_3044) {
  return x_3041(x_3042, x_3043, x_3044);
}
Unit x_3133(const auto &x_3134) {
  ListIter2(x_3134->children, [&](const auto &x_3135, const auto &x_3136) {
    x_3135->parent = x_3134.get();
    x_3136->parent = x_3134.get();
    x_3135->next = x_3136.get();
    x_3136->prev = x_3135.get();
    x_3133(x_3135);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3134->children),
      [&](const auto &x_3138) {
        x_3134->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3137) {
        x_3134->first = x_3137.get();
        x_3137->parent = x_3134.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3134->children),
      [&](const auto &x_3140) {
        x_3134->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3139) {
        x_3134->last = x_3139.get();
        x_3139->parent = x_3134.get();
        x_3133(x_3139);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2830(const auto &x_3134) { return x_3133(x_3134); }
Unit x_3141(const auto &x_3142, const auto &x_3143, const auto &x_3144) {
  auto x_3145 = ListHeadExn(x_3142);
  auto x_3146 = ListTailExn(x_3142);
  if (ListIsEmpty(x_3146)) {
    InputChangeMetric(node_size_x_2794(ListNthExn(x_3143->children, x_3145)));
    auto x_3147 = ListSplitN(x_3143->children, x_3145);
    auto x_3148 = Zro(x_3147);
    auto x_3149 = Fst(x_3147);
    auto x_3150 = ListHeadExn(x_3149);
    auto x_3151 = ListTailExn(x_3149);
    x_3143->children = ListAppend(x_3148, x_3151);
    x_3150->meta->alive = false;
    OptionMatch(
        x_3150->prev, [&](const auto &x_3153) { return MakeUnit(); },
        [&](const auto &x_3152) {
          x_3152->next = ToPath(x_3150->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3150->next, [&](const auto &x_3155) { return MakeUnit(); },
        [&](const auto &x_3154) {
          x_3154->prev = ToPath(x_3150->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3148)) {
      x_3143->first = ToPath(ListHead(x_3151));
    }
    if (ListIsEmpty(x_3151)) {
      x_3143->last = ToPath(ListLast(x_3148));
    }
    OptionMatch(
        x_3150->next, [&](const auto &x_3160) { return MakeUnit(); },
        [&](const auto &x_3156) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3157) {
            if (x_3156->meta->bb_1_has_bb_time_table) {
              auto x_3158 = x_3156->meta->bb_1_bb_time_table;
              if (!(x_3156->meta->bb_1_has_bb_dirtied && x_3156->meta->bb_1_bb_dirtied)) {
                x_3156->meta->bb_1_has_bb_dirtied = true;
                x_3156->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3158, x_3156, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3143->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3161) {
        if (x_3143->meta->bb_0_has_bb_time_table) {
          auto x_3162 = x_3143->meta->bb_0_bb_time_table;
          if (!(x_3143->meta->bb_0_has_bb_dirtied && x_3143->meta->bb_0_bb_dirtied)) {
            x_3143->meta->bb_0_has_bb_dirtied = true;
            x_3143->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3162, x_3143, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3151)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3164) {
        if (x_3143->meta->bb_0_has_bb_time_table) {
          auto x_3165 = x_3143->meta->bb_0_bb_time_table;
          if (!(x_3143->meta->bb_0_has_bb_dirtied && x_3143->meta->bb_0_bb_dirtied)) {
            x_3143->meta->bb_0_has_bb_dirtied = true;
            x_3143->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3165, x_3143, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3150->next, [&](const auto &x_3171) { return MakeUnit(); },
        [&](const auto &x_3167) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3168) {
            if (x_3167->meta->bb_0_has_bb_time_table) {
              auto x_3169 = x_3167->meta->bb_0_bb_time_table;
              if (!(x_3167->meta->bb_0_has_bb_dirtied && x_3167->meta->bb_0_bb_dirtied)) {
                x_3167->meta->bb_0_has_bb_dirtied = true;
                x_3167->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3169, x_3167, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3143->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3172) {
        if (x_3143->meta->bb_3_has_bb_time_table) {
          auto x_3173 = x_3143->meta->bb_3_bb_time_table;
          if (!(x_3143->meta->bb_3_has_bb_dirtied && x_3143->meta->bb_3_bb_dirtied)) {
            x_3143->meta->bb_3_has_bb_dirtied = true;
            x_3143->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3173, x_3143, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3151)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3175) {
        if (x_3143->meta->bb_3_has_bb_time_table) {
          auto x_3176 = x_3143->meta->bb_3_bb_time_table;
          if (!(x_3143->meta->bb_3_has_bb_dirtied && x_3143->meta->bb_3_bb_dirtied)) {
            x_3143->meta->bb_3_has_bb_dirtied = true;
            x_3143->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3176, x_3143, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3150->next, [&](const auto &x_3182) { return MakeUnit(); },
        [&](const auto &x_3178) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3179) {
            if (x_3178->meta->bb_3_has_bb_time_table) {
              auto x_3180 = x_3178->meta->bb_3_bb_time_table;
              if (!(x_3178->meta->bb_3_has_bb_dirtied && x_3178->meta->bb_3_bb_dirtied)) {
                x_3178->meta->bb_3_has_bb_dirtied = true;
                x_3178->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3180, x_3178, static_cast<int64_t>(0));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    return MakeUnit();
  } else {
    return x_3141(x_3146, ListNthExn(x_3143->children, x_3145), x_3144);
  }
}
Unit remove_node_x_2828(const auto &x_3142, const auto &x_3143, const auto &x_3144) {
  return x_3141(x_3142, x_3143, x_3144);
}
Unit eval_stmts_x_2823(const auto &x_3183) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3184) { return MakeUnit(); }));
}
Unit eval_stmts_x_2822(const auto &x_3185) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3186) {
    WriteMetric();
    auto x_3188 = eval_expr_x_3187(x_3185);
    if (x_3185->has_var_width_expr) {
      auto x_3189 = x_3185->var_width_expr;
      if (!EqualValue(x_3189, x_3188)) {
        var_modified_x_3190(x_3185);
      }
    }
    x_3185->has_var_width_expr = true;
    x_3185->var_width_expr = AsDEString(x_3188);
    WriteMetric();
    auto x_3193 = eval_expr_x_3192(x_3185);
    if (x_3185->has_var_is_default_case) {
      auto x_3194 = x_3185->var_is_default_case;
      if (!EqualValue(x_3194, x_3193)) {
        var_modified_x_3195(x_3185);
      }
    }
    x_3185->has_var_is_default_case = true;
    x_3185->var_is_default_case = Asbool(x_3193);
    WriteMetric();
    auto x_3198 = eval_expr_x_3197(x_3185);
    if (x_3185->has_var_intrinsic_width_is_width) {
      auto x_3199 = x_3185->var_intrinsic_width_is_width;
      if (!EqualValue(x_3199, x_3198)) {
        var_modified_x_3200(x_3185);
      }
    }
    x_3185->has_var_intrinsic_width_is_width = true;
    x_3185->var_intrinsic_width_is_width = Asbool(x_3198);
    WriteMetric();
    auto x_3203 = eval_expr_x_3202(x_3185);
    if (x_3185->has_var_children_intrinsic_width) {
      auto x_3204 = x_3185->var_children_intrinsic_width;
      if (!EqualValue(x_3204, x_3203)) {
        var_modified_x_3205(x_3185);
      }
    }
    x_3185->has_var_children_intrinsic_width = true;
    x_3185->var_children_intrinsic_width = Asdouble(x_3203);
    WriteMetric();
    auto x_3208 = eval_expr_x_3207(x_3185);
    if (x_3185->has_var_intrinsic_width_internal) {
      auto x_3209 = x_3185->var_intrinsic_width_internal;
      if (!EqualValue(x_3209, x_3208)) {
        var_modified_x_3210(x_3185);
      }
    }
    x_3185->has_var_intrinsic_width_internal = true;
    x_3185->var_intrinsic_width_internal = Asdouble(x_3208);
    WriteMetric();
    auto x_3213 = eval_expr_x_3212(x_3185);
    if (x_3185->has_var_intrinsic_width_external) {
      auto x_3214 = x_3185->var_intrinsic_width_external;
      if (!EqualValue(x_3214, x_3213)) {
        var_modified_x_3215(x_3185);
      }
    }
    x_3185->has_var_intrinsic_width_external = true;
    x_3185->var_intrinsic_width_external = Asdouble(x_3213);
    WriteMetric();
    auto x_3218 = eval_expr_x_3217(x_3185);
    if (x_3185->has_var_intrinsic_current_line_width) {
      auto x_3219 = x_3185->var_intrinsic_current_line_width;
      if (!EqualValue(x_3219, x_3218)) {
        var_modified_x_3220(x_3185);
      }
    }
    x_3185->has_var_intrinsic_current_line_width = true;
    x_3185->var_intrinsic_current_line_width = Asdouble(x_3218);
    WriteMetric();
    auto x_3223 = eval_expr_x_3222(x_3185);
    if (x_3185->has_var_intrinsic_width_max) {
      auto x_3224 = x_3185->var_intrinsic_width_max;
      if (!EqualValue(x_3224, x_3223)) {
        var_modified_x_3225(x_3185);
      }
    }
    x_3185->has_var_intrinsic_width_max = true;
    x_3185->var_intrinsic_width_max = Asdouble(x_3223);
    WriteMetric();
    auto x_3228 = eval_expr_x_3227(x_3185);
    if (x_3185->has_var_intrinsic_width_sum) {
      auto x_3229 = x_3185->var_intrinsic_width_sum;
      if (!EqualValue(x_3229, x_3228)) {
        var_modified_x_3230(x_3185);
      }
    }
    x_3185->has_var_intrinsic_width_sum = true;
    x_3185->var_intrinsic_width_sum = Asdouble(x_3228);
    WriteMetric();
    auto x_3233 = eval_expr_x_3232(x_3185);
    if (x_3185->has_var_children_intrinsic_height) {
      auto x_3234 = x_3185->var_children_intrinsic_height;
      if (!EqualValue(x_3234, x_3233)) {
        var_modified_x_3235(x_3185);
      }
    }
    x_3185->has_var_children_intrinsic_height = true;
    x_3185->var_children_intrinsic_height = Asdouble(x_3233);
    WriteMetric();
    auto x_3238 = eval_expr_x_3237(x_3185);
    if (x_3185->has_var_height_expr) {
      auto x_3239 = x_3185->var_height_expr;
      if (!EqualValue(x_3239, x_3238)) {
        var_modified_x_3240(x_3185);
      }
    }
    x_3185->has_var_height_expr = true;
    x_3185->var_height_expr = AsDEString(x_3238);
    WriteMetric();
    auto x_3243 = eval_expr_x_3242(x_3185);
    if (x_3185->has_var_intrinsic_height_is_height) {
      auto x_3244 = x_3185->var_intrinsic_height_is_height;
      if (!EqualValue(x_3244, x_3243)) {
        var_modified_x_3245(x_3185);
      }
    }
    x_3185->has_var_intrinsic_height_is_height = true;
    x_3185->var_intrinsic_height_is_height = Asbool(x_3243);
    WriteMetric();
    auto x_3248 = eval_expr_x_3247(x_3185);
    if (x_3185->has_var_intrinsic_height_internal) {
      auto x_3249 = x_3185->var_intrinsic_height_internal;
      if (!EqualValue(x_3249, x_3248)) {
        var_modified_x_3250(x_3185);
      }
    }
    x_3185->has_var_intrinsic_height_internal = true;
    x_3185->var_intrinsic_height_internal = Asdouble(x_3248);
    WriteMetric();
    auto x_3253 = eval_expr_x_3252(x_3185);
    if (x_3185->has_var_intrinsic_height_external) {
      auto x_3254 = x_3185->var_intrinsic_height_external;
      if (!EqualValue(x_3254, x_3253)) {
        var_modified_x_3255(x_3185);
      }
    }
    x_3185->has_var_intrinsic_height_external = true;
    x_3185->var_intrinsic_height_external = Asdouble(x_3253);
    WriteMetric();
    auto x_3258 = eval_expr_x_3257(x_3185);
    if (x_3185->has_var_intrinsic_height_sum) {
      auto x_3259 = x_3185->var_intrinsic_height_sum;
      if (!EqualValue(x_3259, x_3258)) {
        var_modified_x_3260(x_3185);
      }
    }
    x_3185->has_var_intrinsic_height_sum = true;
    x_3185->var_intrinsic_height_sum = Asdouble(x_3258);
    WriteMetric();
    auto x_3263 = eval_expr_x_3262(x_3185);
    if (x_3185->has_var_intrinsic_current_line_height) {
      auto x_3264 = x_3185->var_intrinsic_current_line_height;
      if (!EqualValue(x_3264, x_3263)) {
        var_modified_x_3265(x_3185);
      }
    }
    x_3185->has_var_intrinsic_current_line_height = true;
    x_3185->var_intrinsic_current_line_height = Asdouble(x_3263);
    WriteMetric();
    auto x_3268 = eval_expr_x_3267(x_3185);
    if (x_3185->has_var_finished_intrinsic_height_sum) {
      auto x_3269 = x_3185->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_3269, x_3268)) {
        var_modified_x_3270(x_3185);
      }
    }
    x_3185->has_var_finished_intrinsic_height_sum = true;
    x_3185->var_finished_intrinsic_height_sum = Asdouble(x_3268);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_2821(const auto &x_3272) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3273) {
    WriteMetric();
    auto x_3275 = eval_expr_x_3274(x_3272);
    if (x_3272->has_var_display) {
      auto x_3276 = x_3272->var_display;
      if (!EqualValue(x_3276, x_3275)) {
        var_modified_x_3277(x_3272);
      }
    }
    x_3272->has_var_display = true;
    x_3272->var_display = AsDEString(x_3275);
    WriteMetric();
    auto x_3280 = eval_expr_x_3279(x_3272);
    if (x_3272->has_var_position) {
      auto x_3281 = x_3272->var_position;
      if (!EqualValue(x_3281, x_3280)) {
        var_modified_x_3282(x_3272);
      }
    }
    x_3272->has_var_position = true;
    x_3272->var_position = AsDEString(x_3280);
    WriteMetric();
    auto x_3285 = eval_expr_x_3284(x_3272);
    if (x_3272->has_var_flex_grow) {
      auto x_3286 = x_3272->var_flex_grow;
      if (!EqualValue(x_3286, x_3285)) {
        var_modified_x_3287(x_3272);
      }
    }
    x_3272->has_var_flex_grow = true;
    x_3272->var_flex_grow = Asdouble(x_3285);
    WriteMetric();
    auto x_3290 = eval_expr_x_3289(x_3272);
    if (x_3272->has_var_flex_shrink) {
      auto x_3291 = x_3272->var_flex_shrink;
      if (!EqualValue(x_3291, x_3290)) {
        var_modified_x_3292(x_3272);
      }
    }
    x_3272->has_var_flex_shrink = true;
    x_3272->var_flex_shrink = Asdouble(x_3290);
    WriteMetric();
    auto x_3295 = eval_expr_x_3294(x_3272);
    if (x_3272->has_var_flex_grow_sum) {
      auto x_3296 = x_3272->var_flex_grow_sum;
      if (!EqualValue(x_3296, x_3295)) {
        var_modified_x_3297(x_3272);
      }
    }
    x_3272->has_var_flex_grow_sum = true;
    x_3272->var_flex_grow_sum = Asdouble(x_3295);
    WriteMetric();
    auto x_3300 = eval_expr_x_3299(x_3272);
    if (x_3272->has_var_flex_shrink_sum) {
      auto x_3301 = x_3272->var_flex_shrink_sum;
      if (!EqualValue(x_3301, x_3300)) {
        var_modified_x_3302(x_3272);
      }
    }
    x_3272->has_var_flex_shrink_sum = true;
    x_3272->var_flex_shrink_sum = Asdouble(x_3300);
    WriteMetric();
    auto x_3305 = eval_expr_x_3304(x_3272);
    if (x_3272->has_var_flex_direction) {
      auto x_3306 = x_3272->var_flex_direction;
      if (!EqualValue(x_3306, x_3305)) {
        var_modified_x_3307(x_3272);
      }
    }
    x_3272->has_var_flex_direction = true;
    x_3272->var_flex_direction = AsDEString(x_3305);
    WriteMetric();
    auto x_3310 = eval_expr_x_3309(x_3272);
    if (x_3272->has_var_is_flex_row) {
      auto x_3311 = x_3272->var_is_flex_row;
      if (!EqualValue(x_3311, x_3310)) {
        var_modified_x_3312(x_3272);
      }
    }
    x_3272->has_var_is_flex_row = true;
    x_3272->var_is_flex_row = Asbool(x_3310);
    WriteMetric();
    auto x_3315 = eval_expr_x_3314(x_3272);
    if (x_3272->has_var_is_flex_column) {
      auto x_3316 = x_3272->var_is_flex_column;
      if (!EqualValue(x_3316, x_3315)) {
        var_modified_x_3317(x_3272);
      }
    }
    x_3272->has_var_is_flex_column = true;
    x_3272->var_is_flex_column = Asbool(x_3315);
    WriteMetric();
    auto x_3320 = eval_expr_x_3319(x_3272);
    if (x_3272->has_var_width_attr_expr) {
      auto x_3321 = x_3272->var_width_attr_expr;
      if (!EqualValue(x_3321, x_3320)) {
        var_modified_x_3322(x_3272);
      }
    }
    x_3272->has_var_width_attr_expr = true;
    x_3272->var_width_attr_expr = AsDEString(x_3320);
    WriteMetric();
    auto x_3325 = eval_expr_x_3324(x_3272);
    if (x_3272->has_var_has_width_attr) {
      auto x_3326 = x_3272->var_has_width_attr;
      if (!EqualValue(x_3326, x_3325)) {
        var_modified_x_3327(x_3272);
      }
    }
    x_3272->has_var_has_width_attr = true;
    x_3272->var_has_width_attr = Asbool(x_3325);
    WriteMetric();
    auto x_3330 = eval_expr_x_3329(x_3272);
    if (x_3272->has_var_height_attr_expr) {
      auto x_3331 = x_3272->var_height_attr_expr;
      if (!EqualValue(x_3331, x_3330)) {
        var_modified_x_3332(x_3272);
      }
    }
    x_3272->has_var_height_attr_expr = true;
    x_3272->var_height_attr_expr = AsDEString(x_3330);
    WriteMetric();
    auto x_3335 = eval_expr_x_3334(x_3272);
    if (x_3272->has_var_has_height_attr) {
      auto x_3336 = x_3272->var_has_height_attr;
      if (!EqualValue(x_3336, x_3335)) {
        var_modified_x_3337(x_3272);
      }
    }
    x_3272->has_var_has_height_attr = true;
    x_3272->var_has_height_attr = Asbool(x_3335);
    WriteMetric();
    auto x_3340 = eval_expr_x_3339(x_3272);
    if (x_3272->has_var_is_svg_block) {
      auto x_3341 = x_3272->var_is_svg_block;
      if (!EqualValue(x_3341, x_3340)) {
        var_modified_x_3342(x_3272);
      }
    }
    x_3272->has_var_is_svg_block = true;
    x_3272->var_is_svg_block = Asbool(x_3340);
    WriteMetric();
    auto x_3345 = eval_expr_x_3344(x_3272);
    if (x_3272->has_var_inside_svg) {
      auto x_3346 = x_3272->var_inside_svg;
      if (!EqualValue(x_3346, x_3345)) {
        var_modified_x_3347(x_3272);
      }
    }
    x_3272->has_var_inside_svg = true;
    x_3272->var_inside_svg = Asbool(x_3345);
    WriteMetric();
    auto x_3350 = eval_expr_x_3349(x_3272);
    if (x_3272->has_var_disabled) {
      auto x_3351 = x_3272->var_disabled;
      if (!EqualValue(x_3351, x_3350)) {
        var_modified_x_3352(x_3272);
      }
    }
    x_3272->has_var_disabled = true;
    x_3272->var_disabled = Asbool(x_3350);
    WriteMetric();
    auto x_3355 = eval_expr_x_3354(x_3272);
    if (x_3272->has_var_visible) {
      auto x_3356 = x_3272->var_visible;
      if (!EqualValue(x_3356, x_3355)) {
        var_modified_x_3357(x_3272);
      }
    }
    x_3272->has_var_visible = true;
    x_3272->var_visible = Asbool(x_3355);
    WriteMetric();
    auto x_3360 = eval_expr_x_3359(x_3272);
    if (x_3272->has_var_line_break) {
      auto x_3361 = x_3272->var_line_break;
      if (!EqualValue(x_3361, x_3360)) {
        var_modified_x_3362(x_3272);
      }
    }
    x_3272->has_var_line_break = true;
    x_3272->var_line_break = Asbool(x_3360);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_2820(const auto &x_3364) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3365) {
    WriteMetric();
    auto x_3367 = eval_expr_x_3366(x_3364);
    if (x_3364->has_var_box_width) {
      auto x_3368 = x_3364->var_box_width;
      if (!EqualValue(x_3368, x_3367)) {
        var_modified_x_3369(x_3364);
      }
    }
    x_3364->has_var_box_width = true;
    x_3364->var_box_width = Asdouble(x_3367);
    WriteMetric();
    auto x_3372 = eval_expr_x_3371(x_3364);
    if (x_3364->has_var_box_height) {
      auto x_3373 = x_3364->var_box_height;
      if (!EqualValue(x_3373, x_3372)) {
        var_modified_x_3374(x_3364);
      }
    }
    x_3364->has_var_box_height = true;
    x_3364->var_box_height = Asdouble(x_3372);
    WriteMetric();
    auto x_3377 = eval_expr_x_3376(x_3364);
    if (x_3364->has_var_left_over) {
      auto x_3378 = x_3364->var_left_over;
      if (!EqualValue(x_3378, x_3377)) {
        var_modified_x_3379(x_3364);
      }
    }
    x_3364->has_var_left_over = true;
    x_3364->var_left_over = Asdouble(x_3377);
    WriteMetric();
    auto x_3382 = eval_expr_x_3381(x_3364);
    if (x_3364->has_var_flex_amount) {
      auto x_3383 = x_3364->var_flex_amount;
      if (!EqualValue(x_3383, x_3382)) {
        var_modified_x_3384(x_3364);
      }
    }
    x_3364->has_var_flex_amount = true;
    x_3364->var_flex_amount = Asdouble(x_3382);
    WriteMetric();
    auto x_3387 = eval_expr_x_3386(x_3364);
    if (x_3364->has_var_flex_unit) {
      auto x_3388 = x_3364->var_flex_unit;
      if (!EqualValue(x_3388, x_3387)) {
        var_modified_x_3389(x_3364);
      }
    }
    x_3364->has_var_flex_unit = true;
    x_3364->var_flex_unit = Asdouble(x_3387);
    WriteMetric();
    auto x_3392 = eval_expr_x_3391(x_3364);
    if (x_3364->has_var_x) {
      auto x_3393 = x_3364->var_x;
      if (!EqualValue(x_3393, x_3392)) {
        var_modified_x_3394(x_3364);
      }
    }
    x_3364->has_var_x = true;
    x_3364->var_x = Asdouble(x_3392);
    WriteMetric();
    auto x_3397 = eval_expr_x_3396(x_3364);
    if (x_3364->has_var_width_internal) {
      auto x_3398 = x_3364->var_width_internal;
      if (!EqualValue(x_3398, x_3397)) {
        var_modified_x_3399(x_3364);
      }
    }
    x_3364->has_var_width_internal = true;
    x_3364->var_width_internal = Asdouble(x_3397);
    WriteMetric();
    auto x_3402 = eval_expr_x_3401(x_3364);
    if (x_3364->has_var_width_external) {
      auto x_3403 = x_3364->var_width_external;
      if (!EqualValue(x_3403, x_3402)) {
        var_modified_x_3404(x_3364);
      }
    }
    x_3364->has_var_width_external = true;
    x_3364->var_width_external = Asdouble(x_3402);
    WriteMetric();
    auto x_3407 = eval_expr_x_3406(x_3364);
    if (x_3364->has_var_y) {
      auto x_3408 = x_3364->var_y;
      if (!EqualValue(x_3408, x_3407)) {
        var_modified_x_3409(x_3364);
      }
    }
    x_3364->has_var_y = true;
    x_3364->var_y = Asdouble(x_3407);
    WriteMetric();
    auto x_3412 = eval_expr_x_3411(x_3364);
    if (x_3364->has_var_height_internal) {
      auto x_3413 = x_3364->var_height_internal;
      if (!EqualValue(x_3413, x_3412)) {
        var_modified_x_3414(x_3364);
      }
    }
    x_3364->has_var_height_internal = true;
    x_3364->var_height_internal = Asdouble(x_3412);
    WriteMetric();
    auto x_3417 = eval_expr_x_3416(x_3364);
    if (x_3364->has_var_height_external) {
      auto x_3418 = x_3364->var_height_external;
      if (!EqualValue(x_3418, x_3417)) {
        var_modified_x_3419(x_3364);
      }
    }
    x_3364->has_var_height_external = true;
    x_3364->var_height_external = Asdouble(x_3417);
    WriteMetric();
    auto x_3422 = eval_expr_x_3421(x_3364);
    if (x_3364->has_var_line_height) {
      auto x_3423 = x_3364->var_line_height;
      if (!EqualValue(x_3423, x_3422)) {
        var_modified_x_3424(x_3364);
      }
    }
    x_3364->has_var_line_height = true;
    x_3364->var_line_height = Asdouble(x_3422);
    return MakeUnit();
  }));
}
Unit x_3426(const auto &x_3427, const auto &x_3428, const auto &x_3429) {
  auto x_3430 = ListHeadExn(x_3427);
  auto x_3431 = ListTailExn(x_3427);
  if (ListIsEmpty(x_3431)) {
    InputChangeMetric(node_size_x_2794(x_3429));
    auto x_3432 = ListSplitN(x_3428->children, x_3430);
    auto x_3433 = Zro(x_3432);
    auto x_3434 = Fst(x_3432);
    x_3428->children = ListAppend(x_3433, Cons(x_3429, x_3434));
    if (ListIsEmpty(x_3433)) {
      x_3428->first = x_3429.get();
    }
    if (ListIsEmpty(x_3434)) {
      x_3428->last = x_3429.get();
    }
    OptionMatch(
        ListLast(x_3433),
        [&](const auto &x_3436) {
          x_3429->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3435) {
          x_3429->prev = x_3435.get();
          x_3435->next = x_3429.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3434),
        [&](const auto &x_3438) {
          x_3429->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3437) {
          x_3429->next = x_3437.get();
          x_3437->prev = x_3429.get();
          return MakeUnit();
        });
    x_3429->parent = x_3428.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_3439) {
      auto x_3440 = (x_3429->parent);
      if (x_3440->meta->bb_0_has_bb_time_table) {
        auto x_3445 = OptionMatch(
            x_3429->prev, [&](const auto &x_3444) { return NextTotalOrder(x_3440->meta->bb_1_bb_time_table); },
            [&](const auto &x_3441) {
              if (x_3441->meta->bb_0_has_bb_time_table) {
                auto x_3442 = x_3441->meta->bb_0_bb_time_table;
                return NextTotalOrder(x_3442);
              } else {
                return NextTotalOrder(x_3441->meta->bb_1_bb_time_table);
              }
            });
        x_3429->meta->bb_1_has_bb_time_table = true;
        x_3429->meta->bb_1_bb_time_table = x_3445;
        MetaWriteMetric();
        QueueForcePush(x_3445, x_3429, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    OptionMatch(
        x_3429->next, [&](const auto &x_3451) { return MakeUnit(); },
        [&](const auto &x_3447) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3448) {
            if (x_3447->meta->bb_1_has_bb_time_table) {
              auto x_3449 = x_3447->meta->bb_1_bb_time_table;
              if (!(x_3447->meta->bb_1_has_bb_dirtied && x_3447->meta->bb_1_bb_dirtied)) {
                x_3447->meta->bb_1_has_bb_dirtied = true;
                x_3447->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3449, x_3447, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsSingleton(x_3428->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3452) {
        if (x_3428->meta->bb_0_has_bb_time_table) {
          auto x_3453 = x_3428->meta->bb_0_bb_time_table;
          if (!(x_3428->meta->bb_0_has_bb_dirtied && x_3428->meta->bb_0_bb_dirtied)) {
            x_3428->meta->bb_0_has_bb_dirtied = true;
            x_3428->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3453, x_3428, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3434)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3455) {
        if (x_3428->meta->bb_0_has_bb_time_table) {
          auto x_3456 = x_3428->meta->bb_0_bb_time_table;
          if (!(x_3428->meta->bb_0_has_bb_dirtied && x_3428->meta->bb_0_bb_dirtied)) {
            x_3428->meta->bb_0_has_bb_dirtied = true;
            x_3428->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3456, x_3428, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3429->next, [&](const auto &x_3462) { return MakeUnit(); },
        [&](const auto &x_3458) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3459) {
            if (x_3458->meta->bb_0_has_bb_time_table) {
              auto x_3460 = x_3458->meta->bb_0_bb_time_table;
              if (!(x_3458->meta->bb_0_has_bb_dirtied && x_3458->meta->bb_0_bb_dirtied)) {
                x_3458->meta->bb_0_has_bb_dirtied = true;
                x_3458->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3460, x_3458, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3463) {
      auto x_3464 = (x_3429->parent);
      if (x_3464->meta->bb_2_has_bb_time_table) {
        auto x_3469 = OptionMatch(
            x_3429->prev, [&](const auto &x_3468) { return NextTotalOrder(x_3464->meta->bb_3_bb_time_table); },
            [&](const auto &x_3465) {
              if (x_3465->meta->bb_2_has_bb_time_table) {
                auto x_3466 = x_3465->meta->bb_2_bb_time_table;
                return NextTotalOrder(x_3466);
              } else {
                return NextTotalOrder(x_3465->meta->bb_3_bb_time_table);
              }
            });
        x_3429->meta->bb_3_has_bb_time_table = true;
        x_3429->meta->bb_3_bb_time_table = x_3469;
        MetaWriteMetric();
        QueueForcePush(x_3469, x_3429, static_cast<int64_t>(5));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    if (ListIsSingleton(x_3428->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3471) {
        if (x_3428->meta->bb_3_has_bb_time_table) {
          auto x_3472 = x_3428->meta->bb_3_bb_time_table;
          if (!(x_3428->meta->bb_3_has_bb_dirtied && x_3428->meta->bb_3_bb_dirtied)) {
            x_3428->meta->bb_3_has_bb_dirtied = true;
            x_3428->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3472, x_3428, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3434)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3474) {
        if (x_3428->meta->bb_3_has_bb_time_table) {
          auto x_3475 = x_3428->meta->bb_3_bb_time_table;
          if (!(x_3428->meta->bb_3_has_bb_dirtied && x_3428->meta->bb_3_bb_dirtied)) {
            x_3428->meta->bb_3_has_bb_dirtied = true;
            x_3428->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueuePush(x_3475, x_3428, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_3429->next, [&](const auto &x_3481) { return MakeUnit(); },
        [&](const auto &x_3477) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3478) {
            if (x_3477->meta->bb_3_has_bb_time_table) {
              auto x_3479 = x_3477->meta->bb_3_bb_time_table;
              if (!(x_3477->meta->bb_3_has_bb_dirtied && x_3477->meta->bb_3_bb_dirtied)) {
                x_3477->meta->bb_3_has_bb_dirtied = true;
                x_3477->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueuePush(x_3479, x_3477, static_cast<int64_t>(0));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    return MakeUnit();
  } else {
    return x_3426(x_3431, ListNthExn(x_3428->children, x_3430), x_3429);
  }
}
Unit add_node_x_2815(const auto &x_3427, const auto &x_3428, const auto &x_3429) {
  return x_3426(x_3427, x_3428, x_3429);
}
Unit x_3482(const auto &x_3483) {
  ListIter2(x_3483->children, [&](const auto &x_3484, const auto &x_3485) {
    x_3484->parent = x_3483.get();
    x_3485->parent = x_3483.get();
    x_3484->next = x_3485.get();
    x_3485->prev = x_3484.get();
    x_3482(x_3484);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3483->children),
      [&](const auto &x_3487) {
        x_3483->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3486) {
        x_3483->first = x_3486.get();
        x_3486->parent = x_3483.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3483->children),
      [&](const auto &x_3489) {
        x_3483->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3488) {
        x_3483->last = x_3488.get();
        x_3488->parent = x_3483.get();
        x_3482(x_3488);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2813(const auto &x_3483) { return x_3482(x_3483); }
Unit eval_stmts_x_2809(const auto &x_3490) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3491) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_3492) {
      x_3490->meta->bb_3_has_bb_dirtied = true;
      x_3490->meta->bb_3_bb_dirtied = false;
      x_3490->meta->bb_3_has_bb_time_table = true;
      x_3490->meta->bb_3_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2820(x_3490);
      return MakeUnit();
    }));
    ListIter(x_3490->children, [&](const auto &x_3493) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3494) { return eval_stmts_x_2809(x_3493); }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3495) {
      x_3490->meta->bb_2_has_bb_dirtied = true;
      x_3490->meta->bb_2_bb_dirtied = false;
      x_3490->meta->bb_2_has_bb_time_table = true;
      x_3490->meta->bb_2_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2823(x_3490);
      return MakeUnit();
    }));
    return MakeUnit();
  }));
}
Unit eval_stmts_x_2807(const auto &x_3496) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3497) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_3498) {
      x_3496->meta->bb_1_has_bb_dirtied = true;
      x_3496->meta->bb_1_bb_dirtied = false;
      x_3496->meta->bb_1_has_bb_time_table = true;
      x_3496->meta->bb_1_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2821(x_3496);
      return MakeUnit();
    }));
    ListIter(x_3496->children, [&](const auto &x_3499) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3500) { return eval_stmts_x_2807(x_3499); }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3501) {
      x_3496->meta->bb_0_has_bb_dirtied = true;
      x_3496->meta->bb_0_bb_dirtied = false;
      x_3496->meta->bb_0_has_bb_time_table = true;
      x_3496->meta->bb_0_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2822(x_3496);
      return MakeUnit();
    }));
    return MakeUnit();
  }));
}
Unit x_3502(const auto &x_3503) {
  ListIter2(x_3503->children, [&](const auto &x_3504, const auto &x_3505) {
    x_3504->parent = x_3503.get();
    x_3505->parent = x_3503.get();
    x_3504->next = x_3505.get();
    x_3505->prev = x_3504.get();
    x_3502(x_3504);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3503->children),
      [&](const auto &x_3507) {
        x_3503->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3506) {
        x_3503->first = x_3506.get();
        x_3506->parent = x_3503.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3503->children),
      [&](const auto &x_3509) {
        x_3503->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3508) {
        x_3503->last = x_3508.get();
        x_3508->parent = x_3503.get();
        x_3502(x_3508);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2803(const auto &x_3503) { return x_3502(x_3503); }
int64_t x_3510(const auto &x_3511) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3511->children, [&](const auto &x_3512) { return x_3510(x_3512); }));
}
int64_t node_size_x_2794(const auto &x_3511) { return x_3510(x_3511); }
int64_t x_3513(const auto &x_3514) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3514->children, [&](const auto &x_3515) { return x_3513(x_3515); }));
}
int64_t layout_size_x_2793(const auto &x_3514) { return x_3513(x_3514); }
LayoutNode x_3516(const auto &x_3517) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_3517)), [&](const auto &x_3518) { return x_3516(x_3518); }));
}
LayoutNode json_to_layout_node_x_2792(const auto &x_3517) { return x_3516(x_3517); }
Node x_3519(const auto &x_3520) {
  return MakeNode(x_3520->name, x_3520->attr, x_3520->prop, x_3520->extern_id,
                  ListMap(x_3520->children, [&](const auto &x_3521) { return x_3519(x_3521); }));
}
Node node_to_fs_node_x_2791(const auto &x_3520) { return x_3519(x_3520); }
Node x_3522(const auto &x_3523) {
  return MakeNode(
      JsonToString(JsonMember("name", x_3523)), JsonToDict(JsonMember("attributes", x_3523)),
      JsonToDict(JsonMember("properties", x_3523)), JsonToInt(JsonMember("id", x_3523)),
      ListMap(JsonToList(JsonMember("children", x_3523)), [&](const auto &x_3524) { return x_3522(x_3524); }));
}
Node json_to_node_aux_x_2790(const auto &x_3523) { return x_3522(x_3523); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_2795) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_2796) {
      auto x_2797 = MakeRef(static_cast<int64_t>(0));
      auto x_2798 = FreshMetric();
      auto x_2799 = JsonOfString(InputLine(x_2796));
      auto x_2800 = JsonOfString(InputLine(x_2796));
      auto x_2801 = MakeStack();
      PushStack(x_2801, x_2799);
      PushStack(x_2801, x_2800);
      Assert(StringEqual(JsonToString(JsonMember("name", x_2799)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_2800)), "layout_init"));
      auto x_2804 = [&]() {
        auto x_2802 = json_to_node_aux_x_2790(JsonMember("node", x_2799));
        x_2802->parent = nullptr;
        x_2802->prev = nullptr;
        x_2802->next = nullptr;
        set_children_relation_x_2803(x_2802);
        return x_2802;
      }();
      auto x_2805 = json_to_layout_node_x_2792(JsonMember("node", x_2800));
      OutputChangeMetric(layout_size_x_2793(x_2805));
      InputChangeMetric(node_size_x_2794(x_2804));
      MetricRecordOverhead(TimedOnly([&](const auto &x_2806) { return eval_stmts_x_2807(x_2804); }));
      MetricRecordOverhead(TimedOnly([&](const auto &x_2808) { return eval_stmts_x_2809(x_2804); }));
      JsonToChannel(x_2795, [&]() {
        auto x_4647 = FreshJson();
        WriteJson(x_4647, "name", "PQ_D");
        WriteJson(x_4647, "diff_num", ReadRef(x_2797));
        WriteJson(x_4647, "read_count", MetricReadCount());
        WriteJson(x_4647, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_4647, "write_count", MetricWriteCount());
        WriteJson(x_4647, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_4647, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_4647, "input_change_count", MetricInputChangeCount());
        WriteJson(x_4647, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_4647, "overhead_time", MetricOverheadCount());
        WriteJson(x_4647, "eval_time", MetricEvalCount());
        WriteJson(x_4647, "html", "");
        WriteJson(x_4647, "command", StackToList(x_2801));
        return x_4647;
      }());
      OutputString(x_2795, "\n");
      ClearStack(x_2801);
      WriteRef(x_2797, IntAdd(ReadRef(x_2797), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_2796, [&](const auto &x_2810) {
        auto x_2811 = JsonOfString(x_2810);
        PushStack(x_2801, x_2811);
        std::string x_4649 = JsonToString(JsonMember("name", x_2811));
        if (x_4649 == "add") {
          return add_node_x_2815(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2814) { return JsonToInt(x_2814); }),
              x_2804, [&]() {
                auto x_2812 = json_to_node_aux_x_2790(JsonMember("node", x_2811));
                x_2812->parent = nullptr;
                x_2812->prev = nullptr;
                x_2812->next = nullptr;
                set_children_relation_x_2813(x_2812);
                return x_2812;
              }());
        } else if (x_4649 == "recalculate") {
          MetricRecordOverhead(TimedOnly([&](const auto &x_2816) {
            while (!QueueIsEmpty()) {
              auto x_2817 = QueuePeek();
              auto x_2818 = Zro(x_2817);
              auto x_2819 = Fst(x_2817);
              MetaReadMetric();
              MetricQueueSize(QueueSize());
              if (x_2819.n->meta->alive) {
                [&]() {
                  auto x_4650 = x_2819.rf;
                  if (x_4650 == 0) {
                    eval_stmts_x_2820(x_2819.n);
                    x_2819.n->meta->bb_3_has_bb_dirtied = true;
                    x_2819.n->meta->bb_3_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4650 == 1) {
                    eval_stmts_x_2821(x_2819.n);
                    x_2819.n->meta->bb_1_has_bb_dirtied = true;
                    x_2819.n->meta->bb_1_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4650 == 2) {
                    eval_stmts_x_2822(x_2819.n);
                    x_2819.n->meta->bb_0_has_bb_dirtied = true;
                    x_2819.n->meta->bb_0_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4650 == 3) {
                    eval_stmts_x_2823(x_2819.n);
                    x_2819.n->meta->bb_2_has_bb_dirtied = true;
                    x_2819.n->meta->bb_2_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4650 == 4) {
                    auto x_2824 = ReadRef(current_time);
                    WriteRef(current_time, x_2818);
                    eval_stmts_x_2807(x_2819.n);
                    WriteRef(current_time, x_2824);
                    return MakeUnit();
                  } else if (x_4650 == 5) {
                    auto x_2825 = ReadRef(current_time);
                    WriteRef(current_time, x_2818);
                    eval_stmts_x_2809(x_2819.n);
                    WriteRef(current_time, x_2825);
                    return MakeUnit();
                  } else {
                    Panic();
                  }
                }();
              }
              auto x_2826 = Zro(QueuePop());
              MakeUnit();
              MakeUnit();
            }
            return MakeUnit();
          }));
          JsonToChannel(x_2795, [&]() {
            auto x_4648 = FreshJson();
            WriteJson(x_4648, "name", "PQ_D");
            WriteJson(x_4648, "diff_num", ReadRef(x_2797));
            WriteJson(x_4648, "read_count", MetricReadCount());
            WriteJson(x_4648, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_4648, "write_count", MetricWriteCount());
            WriteJson(x_4648, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_4648, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_4648, "input_change_count", MetricInputChangeCount());
            WriteJson(x_4648, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_4648, "overhead_time", MetricOverheadCount());
            WriteJson(x_4648, "eval_time", MetricEvalCount());
            WriteJson(x_4648, "html", "");
            WriteJson(x_4648, "command", StackToList(x_2801));
            return x_4648;
          }());
          OutputString(x_2795, "\n");
          ClearStack(x_2801);
          WriteRef(x_2797, IntAdd(ReadRef(x_2797), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_4649 == "remove") {
          return remove_node_x_2828(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2827) { return JsonToInt(x_2827); }),
              x_2804, MakeUnit());
        } else if (x_4649 == "replace") {
          return replace_node_x_2832(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2831) { return JsonToInt(x_2831); }),
              x_2804, [&]() {
                auto x_2829 = json_to_node_aux_x_2790(JsonMember("node", x_2811));
                x_2829->parent = nullptr;
                x_2829->prev = nullptr;
                x_2829->next = nullptr;
                set_children_relation_x_2830(x_2829);
                return x_2829;
              }());
        } else if (x_4649 == "replace_value") {
          return replace_value_x_2834(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2833) { return JsonToInt(x_2833); }),
              x_2804,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2811)), JsonToString(JsonMember("key", x_2811))),
                       JsonToValue(JsonMember("value", x_2811))));
        } else if (x_4649 == "delete_value") {
          return delete_value_x_2836(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2835) { return JsonToInt(x_2835); }),
              x_2804, MakePair(JsonToString(JsonMember("type", x_2811)), JsonToString(JsonMember("key", x_2811))));
        } else if (x_4649 == "insert_value") {
          return insert_value_x_2838(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2837) { return JsonToInt(x_2837); }),
              x_2804,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2811)), JsonToString(JsonMember("key", x_2811))),
                       JsonToValue(JsonMember("value", x_2811))));
        } else if (x_4649 == "layout_remove") {
          return remove_layout_node_x_2840(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2839) { return JsonToInt(x_2839); }),
              x_2805, MakeUnit());
        } else if (x_4649 == "layout_add") {
          return add_layout_node_x_2842(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2841) { return JsonToInt(x_2841); }),
              x_2805, json_to_layout_node_x_2792(JsonMember("node", x_2811)));
        } else if (x_4649 == "layout_replace") {
          return replace_layout_node_x_2844(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2843) { return JsonToInt(x_2843); }),
              x_2805, json_to_layout_node_x_2792(JsonMember("node", x_2811)));
        } else if (x_4649 == "layout_info_changed") {
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