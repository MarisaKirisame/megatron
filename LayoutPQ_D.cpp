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
  bool bb_3_has_bb_time_table = false;
  bool bb_1_has_bb_dirtied = false;
  bool bb_1_bb_dirtied;
  bool bb_1_has_bb_time_table = false;
  bool bb_0_has_bb_dirtied = false;
  bool bb_0_bb_dirtied;
  bool bb_0_has_bb_time_table = false;
  bool bb_2_has_bb_dirtied = false;
  bool bb_2_bb_dirtied;
  bool bb_2_has_bb_time_table = false;
  TotalOrder bb_3_bb_time_table;
  TotalOrder bb_1_bb_time_table;
  TotalOrder bb_0_bb_time_table;
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
Unit var_modified_x_3423(const auto &x_3524);
auto eval_expr_x_3420(const auto &x_3532);
Unit var_modified_x_3418(const auto &x_3541);
auto eval_expr_x_3415(const auto &x_3547);
Unit var_modified_x_3413(const auto &x_3552);
auto eval_expr_x_3410(const auto &x_3562);
Unit var_modified_x_3408(const auto &x_3589);
auto eval_expr_x_3405(const auto &x_3601);
Unit var_modified_x_3403(const auto &x_3614);
auto eval_expr_x_3400(const auto &x_3622);
Unit var_modified_x_3398(const auto &x_3627);
auto eval_expr_x_3395(const auto &x_3637);
Unit var_modified_x_3393(const auto &x_3664);
auto eval_expr_x_3390(const auto &x_3676);
Unit var_modified_x_3388(const auto &x_3687);
auto eval_expr_x_3385(const auto &x_3693);
Unit var_modified_x_3383(const auto &x_3704);
auto eval_expr_x_3380(const auto &x_3710);
Unit var_modified_x_3378(const auto &x_3717);
auto eval_expr_x_3375(const auto &x_3727);
Unit var_modified_x_3373(const auto &x_3738);
auto eval_expr_x_3370(const auto &x_3744);
Unit var_modified_x_3368(const auto &x_3747);
auto eval_expr_x_3365(const auto &x_3753);
Unit var_modified_x_3361(const auto &x_3756);
auto eval_expr_x_3358(const auto &x_3778);
Unit var_modified_x_3356(const auto &x_3823);
auto eval_expr_x_3353(const auto &x_3829);
Unit var_modified_x_3351(const auto &x_3838);
auto eval_expr_x_3348(const auto &x_3852);
Unit var_modified_x_3346(const auto &x_3855);
auto eval_expr_x_3343(const auto &x_3869);
Unit var_modified_x_3341(const auto &x_3874);
auto eval_expr_x_3338(const auto &x_3880);
Unit var_modified_x_3336(const auto &x_3881);
auto eval_expr_x_3333(const auto &x_3887);
Unit var_modified_x_3331(const auto &x_3890);
auto eval_expr_x_3328(const auto &x_3900);
Unit var_modified_x_3326(const auto &x_3911);
auto eval_expr_x_3323(const auto &x_3917);
Unit var_modified_x_3321(const auto &x_3920);
auto eval_expr_x_3318(const auto &x_3930);
Unit var_modified_x_3316(const auto &x_3941);
auto eval_expr_x_3313(const auto &x_3951);
Unit var_modified_x_3311(const auto &x_3964);
auto eval_expr_x_3308(const auto &x_3978);
Unit var_modified_x_3306(const auto &x_3993);
auto eval_expr_x_3303(const auto &x_3999);
Unit var_modified_x_3301(const auto &x_4002);
auto eval_expr_x_3298(const auto &x_4014);
Unit var_modified_x_3296(const auto &x_4019);
auto eval_expr_x_3293(const auto &x_4031);
Unit var_modified_x_3291(const auto &x_4036);
auto eval_expr_x_3288(const auto &x_4046);
Unit var_modified_x_3286(const auto &x_4049);
auto eval_expr_x_3283(const auto &x_4059);
Unit var_modified_x_3281(const auto &x_4062);
auto eval_expr_x_3278(const auto &x_4076);
Unit var_modified_x_3276(const auto &x_4079);
auto eval_expr_x_3273(const auto &x_4093);
Unit var_modified_x_3269(const auto &x_4096);
auto eval_expr_x_3266(const auto &x_4110);
Unit var_modified_x_3264(const auto &x_4125);
auto eval_expr_x_3261(const auto &x_4139);
Unit var_modified_x_3259(const auto &x_4146);
auto eval_expr_x_3256(const auto &x_4160);
Unit var_modified_x_3254(const auto &x_4165);
auto eval_expr_x_3251(const auto &x_4171);
Unit var_modified_x_3249(const auto &x_4176);
auto eval_expr_x_3246(const auto &x_4186);
Unit var_modified_x_3244(const auto &x_4265);
auto eval_expr_x_3241(const auto &x_4271);
Unit var_modified_x_3239(const auto &x_4296);
auto eval_expr_x_3236(const auto &x_4306);
Unit var_modified_x_3234(const auto &x_4309);
auto eval_expr_x_3231(const auto &x_4315);
Unit var_modified_x_3229(const auto &x_4320);
auto eval_expr_x_3226(const auto &x_4334);
Unit var_modified_x_3224(const auto &x_4339);
auto eval_expr_x_3221(const auto &x_4353);
Unit var_modified_x_3219(const auto &x_4358);
auto eval_expr_x_3216(const auto &x_4370);
Unit var_modified_x_3214(const auto &x_4377);
auto eval_expr_x_3211(const auto &x_4383);
Unit var_modified_x_3209(const auto &x_4388);
auto eval_expr_x_3206(const auto &x_4398);
Unit var_modified_x_3204(const auto &x_4481);
auto eval_expr_x_3201(const auto &x_4487);
Unit var_modified_x_3199(const auto &x_4490);
auto eval_expr_x_3196(const auto &x_4496);
Unit var_modified_x_3194(const auto &x_4521);
auto eval_expr_x_3191(const auto &x_4527);
Unit var_modified_x_3189(const auto &x_4534);
auto eval_expr_x_3186(const auto &x_4544);
Unit x_2844(const auto &x_2845, const auto &x_2846, const auto &x_2847);
Unit x_2851(const auto &x_2852, const auto &x_2853, const auto &x_2854);
Unit x_2858(const auto &x_2859, const auto &x_2860, const auto &x_2861);
Unit x_2865(const auto &x_2866, const auto &x_2867, const auto &x_2868);
Unit x_2912(const auto &x_2913, const auto &x_2914, const auto &x_2915);
Unit x_2957(const auto &x_2958, const auto &x_2959, const auto &x_2960);
Unit x_3040(const auto &x_3041, const auto &x_3042, const auto &x_3043);
Unit x_3132(const auto &x_3133);
Unit x_3140(const auto &x_3141, const auto &x_3142, const auto &x_3143);
Unit eval_stmts_x_2823(const auto &x_3182);
Unit eval_stmts_x_2822(const auto &x_3184);
Unit eval_stmts_x_2821(const auto &x_3271);
Unit eval_stmts_x_2820(const auto &x_3363);
Unit x_3425(const auto &x_3426, const auto &x_3427, const auto &x_3428);
Unit x_3481(const auto &x_3482);
Unit eval_stmts_x_2809(const auto &x_3489);
Unit eval_stmts_x_2807(const auto &x_3495);
Unit x_3501(const auto &x_3502);
int64_t x_3509(const auto &x_3510);
int64_t x_3512(const auto &x_3513);
LayoutNode x_3515(const auto &x_3516);
Node x_3518(const auto &x_3519);
Node x_3521(const auto &x_3522);
Unit var_modified_x_3423(const auto &x_3524) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3525) {
    auto x_4547 = [&](const auto &x_3528) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3529) {
        if (x_3528->meta->bb_3_has_bb_time_table) {
          auto x_3530 = x_3528->meta->bb_3_bb_time_table;
          if (!(x_3528->meta->bb_3_has_bb_dirtied && x_3528->meta->bb_3_bb_dirtied)) {
            x_3528->meta->bb_3_has_bb_dirtied = true;
            x_3528->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3530, x_3528, static_cast<int64_t>(0));
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
        x_3524->next, [&](const auto &x_3527) { return MakeUnit(); },
        [&](const auto &x_3526) {
          auto x_4548 = x_4547;
          x_4548(x_3526);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3420(const auto &x_3532) {
  if ((x_3532->prev != nullptr) && (!(x_3532->prev)->var_line_break)) {
    return max(x_3532->var_height_external, (x_3532->prev)->var_line_height);
  } else {
    return x_3532->var_height_external;
  }
}
Unit var_modified_x_3418(const auto &x_3541) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3542) {
    auto x_4549 = [&](const auto &x_3543) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3544) {
        if (x_3543->meta->bb_3_has_bb_time_table) {
          auto x_3545 = x_3543->meta->bb_3_bb_time_table;
          if (!(x_3543->meta->bb_3_has_bb_dirtied && x_3543->meta->bb_3_bb_dirtied)) {
            x_3543->meta->bb_3_has_bb_dirtied = true;
            x_3543->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3545, x_3543, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4549(x_3541);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3415(const auto &x_3547) {
  if (eq(x_3547->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3547->var_height_internal;
  }
}
Unit var_modified_x_3413(const auto &x_3552) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3553) {
    auto x_4550 = [&](const auto &x_3554) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3555) {
        if (x_3554->meta->bb_3_has_bb_time_table) {
          auto x_3556 = x_3554->meta->bb_3_bb_time_table;
          if (!(x_3554->meta->bb_3_has_bb_dirtied && x_3554->meta->bb_3_bb_dirtied)) {
            x_3554->meta->bb_3_has_bb_dirtied = true;
            x_3554->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3556, x_3554, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4550(x_3552);
    MakeUnit();
    ListIter(x_3552->children, [&](const auto &x_3558) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3559) {
        if (x_3558->meta->bb_3_has_bb_time_table) {
          auto x_3560 = x_3558->meta->bb_3_bb_time_table;
          if (!(x_3558->meta->bb_3_has_bb_dirtied && x_3558->meta->bb_3_bb_dirtied)) {
            x_3558->meta->bb_3_has_bb_dirtied = true;
            x_3558->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3560, x_3558, static_cast<int64_t>(0));
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
auto eval_expr_x_3410(const auto &x_3562) {
  if (x_3562->var_intrinsic_height_is_height) {
    return x_3562->var_intrinsic_height_internal;
  } else {
    if ((x_3562->parent != nullptr) && (x_3562->parent)->var_is_flex_column) {
      return plus(x_3562->var_intrinsic_height_internal,
                  mult(x_3562->var_flex_amount, (x_3562->parent)->var_flex_unit));
    } else {
      if (x_3562->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_3562->var_box_height, divide(x_3562->var_height_expr.r.a0, 100.));
      } else {
        return max(x_3562->var_box_height, x_3562->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_3408(const auto &x_3589) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3590) {
    ListIter(x_3589->children, [&](const auto &x_3591) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3592) {
        if (x_3591->meta->bb_3_has_bb_time_table) {
          auto x_3593 = x_3591->meta->bb_3_bb_time_table;
          if (!(x_3591->meta->bb_3_has_bb_dirtied && x_3591->meta->bb_3_bb_dirtied)) {
            x_3591->meta->bb_3_has_bb_dirtied = true;
            x_3591->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3593, x_3591, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4551 = [&](const auto &x_3597) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3598) {
        if (x_3597->meta->bb_3_has_bb_time_table) {
          auto x_3599 = x_3597->meta->bb_3_bb_time_table;
          if (!(x_3597->meta->bb_3_has_bb_dirtied && x_3597->meta->bb_3_bb_dirtied)) {
            x_3597->meta->bb_3_has_bb_dirtied = true;
            x_3597->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3599, x_3597, static_cast<int64_t>(0));
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
        x_3589->next, [&](const auto &x_3596) { return MakeUnit(); },
        [&](const auto &x_3595) {
          auto x_4552 = x_4551;
          x_4552(x_3595);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3405(const auto &x_3601) {
  if (x_3601->prev != nullptr) {
    if (x_3601->var_line_break || (x_3601->prev)->var_line_break) {
      return plus((x_3601->prev)->var_y, (x_3601->prev)->var_line_height);
    } else {
      return (x_3601->prev)->var_y;
    }
  } else {
    if (x_3601->parent != nullptr) {
      return (x_3601->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3403(const auto &x_3614) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3615) {
    auto x_4553 = [&](const auto &x_3618) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3619) {
        if (x_3618->meta->bb_3_has_bb_time_table) {
          auto x_3620 = x_3618->meta->bb_3_bb_time_table;
          if (!(x_3618->meta->bb_3_has_bb_dirtied && x_3618->meta->bb_3_bb_dirtied)) {
            x_3618->meta->bb_3_has_bb_dirtied = true;
            x_3618->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3620, x_3618, static_cast<int64_t>(0));
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
        x_3614->next, [&](const auto &x_3617) { return MakeUnit(); },
        [&](const auto &x_3616) {
          auto x_4554 = x_4553;
          x_4554(x_3616);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3400(const auto &x_3622) {
  if (eq(x_3622->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3622->var_width_internal;
  }
}
Unit var_modified_x_3398(const auto &x_3627) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3628) {
    auto x_4555 = [&](const auto &x_3629) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3630) {
        if (x_3629->meta->bb_3_has_bb_time_table) {
          auto x_3631 = x_3629->meta->bb_3_bb_time_table;
          if (!(x_3629->meta->bb_3_has_bb_dirtied && x_3629->meta->bb_3_bb_dirtied)) {
            x_3629->meta->bb_3_has_bb_dirtied = true;
            x_3629->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3631, x_3629, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4555(x_3627);
    MakeUnit();
    ListIter(x_3627->children, [&](const auto &x_3633) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3634) {
        if (x_3633->meta->bb_3_has_bb_time_table) {
          auto x_3635 = x_3633->meta->bb_3_bb_time_table;
          if (!(x_3633->meta->bb_3_has_bb_dirtied && x_3633->meta->bb_3_bb_dirtied)) {
            x_3633->meta->bb_3_has_bb_dirtied = true;
            x_3633->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3635, x_3633, static_cast<int64_t>(0));
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
auto eval_expr_x_3395(const auto &x_3637) {
  if (x_3637->var_intrinsic_width_is_width) {
    return x_3637->var_intrinsic_width_internal;
  } else {
    if ((x_3637->parent != nullptr) && (x_3637->parent)->var_is_flex_row) {
      return plus(x_3637->var_intrinsic_width_internal, mult(x_3637->var_flex_amount, (x_3637->parent)->var_flex_unit));
    } else {
      if (x_3637->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_3637->var_box_width, divide(x_3637->var_width_expr.r.a0, 100.));
      } else {
        return max(x_3637->var_box_width, x_3637->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_3393(const auto &x_3664) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3665) {
    ListIter(x_3664->children, [&](const auto &x_3666) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3667) {
        if (x_3666->meta->bb_3_has_bb_time_table) {
          auto x_3668 = x_3666->meta->bb_3_bb_time_table;
          if (!(x_3666->meta->bb_3_has_bb_dirtied && x_3666->meta->bb_3_bb_dirtied)) {
            x_3666->meta->bb_3_has_bb_dirtied = true;
            x_3666->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3668, x_3666, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4556 = [&](const auto &x_3672) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3673) {
        if (x_3672->meta->bb_3_has_bb_time_table) {
          auto x_3674 = x_3672->meta->bb_3_bb_time_table;
          if (!(x_3672->meta->bb_3_has_bb_dirtied && x_3672->meta->bb_3_bb_dirtied)) {
            x_3672->meta->bb_3_has_bb_dirtied = true;
            x_3672->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3674, x_3672, static_cast<int64_t>(0));
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
        x_3664->next, [&](const auto &x_3671) { return MakeUnit(); },
        [&](const auto &x_3670) {
          auto x_4557 = x_4556;
          x_4557(x_3670);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3390(const auto &x_3676) {
  if (x_3676->prev != nullptr) {
    if (x_3676->var_line_break || (x_3676->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_3676->prev)->var_x, (x_3676->prev)->var_width_external);
    }
  } else {
    if (x_3676->parent != nullptr) {
      return (x_3676->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3388(const auto &x_3687) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3688) {
    ListIter(x_3687->children, [&](const auto &x_3689) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3690) {
        if (x_3689->meta->bb_3_has_bb_time_table) {
          auto x_3691 = x_3689->meta->bb_3_bb_time_table;
          if (!(x_3689->meta->bb_3_has_bb_dirtied && x_3689->meta->bb_3_bb_dirtied)) {
            x_3689->meta->bb_3_has_bb_dirtied = true;
            x_3689->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3691, x_3689, static_cast<int64_t>(0));
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
auto eval_expr_x_3385(const auto &x_3693) {
  if (gt(x_3693->var_left_over, 0.)) {
    return divide(x_3693->var_left_over, x_3693->var_flex_grow_sum);
  } else {
    return divide(x_3693->var_left_over, x_3693->var_flex_shrink_sum);
  }
}
Unit var_modified_x_3383(const auto &x_3704) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3705) {
    auto x_4558 = [&](const auto &x_3706) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3707) {
        if (x_3706->meta->bb_3_has_bb_time_table) {
          auto x_3708 = x_3706->meta->bb_3_bb_time_table;
          if (!(x_3706->meta->bb_3_has_bb_dirtied && x_3706->meta->bb_3_bb_dirtied)) {
            x_3706->meta->bb_3_has_bb_dirtied = true;
            x_3706->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3708, x_3706, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4558(x_3704);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3380(const auto &x_3710) {
  if ((x_3710->parent != nullptr) && gt((x_3710->parent)->var_left_over, 0.)) {
    return x_3710->var_flex_grow;
  } else {
    return x_3710->var_flex_shrink;
  }
}
Unit var_modified_x_3378(const auto &x_3717) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3718) {
    auto x_4559 = [&](const auto &x_3719) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3720) {
        if (x_3719->meta->bb_3_has_bb_time_table) {
          auto x_3721 = x_3719->meta->bb_3_bb_time_table;
          if (!(x_3719->meta->bb_3_has_bb_dirtied && x_3719->meta->bb_3_bb_dirtied)) {
            x_3719->meta->bb_3_has_bb_dirtied = true;
            x_3719->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3721, x_3719, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4559(x_3717);
    MakeUnit();
    ListIter(x_3717->children, [&](const auto &x_3723) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3724) {
        if (x_3723->meta->bb_3_has_bb_time_table) {
          auto x_3725 = x_3723->meta->bb_3_bb_time_table;
          if (!(x_3723->meta->bb_3_has_bb_dirtied && x_3723->meta->bb_3_bb_dirtied)) {
            x_3723->meta->bb_3_has_bb_dirtied = true;
            x_3723->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3725, x_3723, static_cast<int64_t>(0));
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
auto eval_expr_x_3375(const auto &x_3727) {
  if (x_3727->var_is_flex_row) {
    return minus(x_3727->var_box_width, (x_3727->last != nullptr) ? ((x_3727->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_3727->var_box_height, (x_3727->last != nullptr) ? ((x_3727->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_3373(const auto &x_3738) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3739) {
    auto x_4560 = [&](const auto &x_3740) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3741) {
        if (x_3740->meta->bb_3_has_bb_time_table) {
          auto x_3742 = x_3740->meta->bb_3_bb_time_table;
          if (!(x_3740->meta->bb_3_has_bb_dirtied && x_3740->meta->bb_3_bb_dirtied)) {
            x_3740->meta->bb_3_has_bb_dirtied = true;
            x_3740->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3742, x_3740, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4560(x_3738);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3370(const auto &x_3744) {
  if (x_3744->parent != nullptr) {
    return (x_3744->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_3368(const auto &x_3747) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3748) {
    auto x_4561 = [&](const auto &x_3749) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3750) {
        if (x_3749->meta->bb_3_has_bb_time_table) {
          auto x_3751 = x_3749->meta->bb_3_bb_time_table;
          if (!(x_3749->meta->bb_3_has_bb_dirtied && x_3749->meta->bb_3_bb_dirtied)) {
            x_3749->meta->bb_3_has_bb_dirtied = true;
            x_3749->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3751, x_3749, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4561(x_3747);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3365(const auto &x_3753) {
  if (x_3753->parent != nullptr) {
    return (x_3753->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_3361(const auto &x_3756) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3757) {
    auto x_4562 = [&](const auto &x_3758) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3759) {
        if (x_3758->meta->bb_0_has_bb_time_table) {
          auto x_3760 = x_3758->meta->bb_0_bb_time_table;
          if (!(x_3758->meta->bb_0_has_bb_dirtied && x_3758->meta->bb_0_bb_dirtied)) {
            x_3758->meta->bb_0_has_bb_dirtied = true;
            x_3758->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3760, x_3758, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4562(x_3756);
    MakeUnit();
    auto x_4563 = [&](const auto &x_3764) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3765) {
        if (x_3764->meta->bb_0_has_bb_time_table) {
          auto x_3766 = x_3764->meta->bb_0_bb_time_table;
          if (!(x_3764->meta->bb_0_has_bb_dirtied && x_3764->meta->bb_0_bb_dirtied)) {
            x_3764->meta->bb_0_has_bb_dirtied = true;
            x_3764->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3766, x_3764, static_cast<int64_t>(2));
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
        x_3756->next, [&](const auto &x_3763) { return MakeUnit(); },
        [&](const auto &x_3762) {
          auto x_4566 = x_4563;
          x_4566(x_3762);
          return MakeUnit();
        });
    auto x_4564 = [&](const auto &x_3768) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3769) {
        if (x_3768->meta->bb_3_has_bb_time_table) {
          auto x_3770 = x_3768->meta->bb_3_bb_time_table;
          if (!(x_3768->meta->bb_3_has_bb_dirtied && x_3768->meta->bb_3_bb_dirtied)) {
            x_3768->meta->bb_3_has_bb_dirtied = true;
            x_3768->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3770, x_3768, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4564(x_3756);
    MakeUnit();
    auto x_4565 = [&](const auto &x_3774) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3775) {
        if (x_3774->meta->bb_3_has_bb_time_table) {
          auto x_3776 = x_3774->meta->bb_3_bb_time_table;
          if (!(x_3774->meta->bb_3_has_bb_dirtied && x_3774->meta->bb_3_bb_dirtied)) {
            x_3774->meta->bb_3_has_bb_dirtied = true;
            x_3774->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3776, x_3774, static_cast<int64_t>(0));
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
        x_3756->next, [&](const auto &x_3773) { return MakeUnit(); },
        [&](const auto &x_3772) {
          auto x_4567 = x_4565;
          x_4567(x_3772);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3358(const auto &x_3778) {
  if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_3778->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_3778->parent != nullptr) &&
          (eq((x_3778->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_3778->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_3778->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_3778->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_3778->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_3778->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_3356(const auto &x_3823) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3824) {
    ListIter(x_3823->children, [&](const auto &x_3825) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3826) {
        if (x_3825->meta->bb_1_has_bb_time_table) {
          auto x_3827 = x_3825->meta->bb_1_bb_time_table;
          if (!(x_3825->meta->bb_1_has_bb_dirtied && x_3825->meta->bb_1_bb_dirtied)) {
            x_3825->meta->bb_1_has_bb_dirtied = true;
            x_3825->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3827, x_3825, static_cast<int64_t>(1));
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
auto eval_expr_x_3353(const auto &x_3829) {
  return (((!(x_3829->parent != nullptr)) || (x_3829->parent)->var_visible) &&
          (neq(x_3829->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_3829->var_inside_svg) && (!x_3829->var_disabled))));
}
Unit var_modified_x_3351(const auto &x_3838) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3839) {
    auto x_4568 = [&](const auto &x_3840) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3841) {
        if (x_3840->meta->bb_1_has_bb_time_table) {
          auto x_3842 = x_3840->meta->bb_1_bb_time_table;
          if (!(x_3840->meta->bb_1_has_bb_dirtied && x_3840->meta->bb_1_bb_dirtied)) {
            x_3840->meta->bb_1_has_bb_dirtied = true;
            x_3840->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3842, x_3840, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4568(x_3838);
    MakeUnit();
    ListIter(x_3838->children, [&](const auto &x_3844) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3845) {
        if (x_3844->meta->bb_1_has_bb_time_table) {
          auto x_3846 = x_3844->meta->bb_1_bb_time_table;
          if (!(x_3844->meta->bb_1_has_bb_dirtied && x_3844->meta->bb_1_bb_dirtied)) {
            x_3844->meta->bb_1_has_bb_dirtied = true;
            x_3844->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3846, x_3844, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4569 = [&](const auto &x_3848) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3849) {
        if (x_3848->meta->bb_0_has_bb_time_table) {
          auto x_3850 = x_3848->meta->bb_0_bb_time_table;
          if (!(x_3848->meta->bb_0_has_bb_dirtied && x_3848->meta->bb_0_bb_dirtied)) {
            x_3848->meta->bb_0_has_bb_dirtied = true;
            x_3848->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3850, x_3848, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4569(x_3838);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3348(const auto &x_3852) {
  if (eq(x_3852->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_3852->parent != nullptr) && (x_3852->parent)->var_disabled);
  }
}
Unit var_modified_x_3346(const auto &x_3855) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3856) {
    auto x_4570 = [&](const auto &x_3857) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3858) {
        if (x_3857->meta->bb_1_has_bb_time_table) {
          auto x_3859 = x_3857->meta->bb_1_bb_time_table;
          if (!(x_3857->meta->bb_1_has_bb_dirtied && x_3857->meta->bb_1_bb_dirtied)) {
            x_3857->meta->bb_1_has_bb_dirtied = true;
            x_3857->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3859, x_3857, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4570(x_3855);
    MakeUnit();
    ListIter(x_3855->children, [&](const auto &x_3861) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3862) {
        if (x_3861->meta->bb_1_has_bb_time_table) {
          auto x_3863 = x_3861->meta->bb_1_bb_time_table;
          if (!(x_3861->meta->bb_1_has_bb_dirtied && x_3861->meta->bb_1_bb_dirtied)) {
            x_3861->meta->bb_1_has_bb_dirtied = true;
            x_3861->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3863, x_3861, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4571 = [&](const auto &x_3865) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3866) {
        if (x_3865->meta->bb_0_has_bb_time_table) {
          auto x_3867 = x_3865->meta->bb_0_bb_time_table;
          if (!(x_3865->meta->bb_0_has_bb_dirtied && x_3865->meta->bb_0_bb_dirtied)) {
            x_3865->meta->bb_0_has_bb_dirtied = true;
            x_3865->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3867, x_3865, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4571(x_3855);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3343(const auto &x_3869) {
  return ((x_3869->parent != nullptr) && ((x_3869->parent)->var_is_svg_block || (x_3869->parent)->var_inside_svg));
}
Unit var_modified_x_3341(const auto &x_3874) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3875) {
    ListIter(x_3874->children, [&](const auto &x_3876) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3877) {
        if (x_3876->meta->bb_1_has_bb_time_table) {
          auto x_3878 = x_3876->meta->bb_1_bb_time_table;
          if (!(x_3876->meta->bb_1_has_bb_dirtied && x_3876->meta->bb_1_bb_dirtied)) {
            x_3876->meta->bb_1_has_bb_dirtied = true;
            x_3876->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3878, x_3876, static_cast<int64_t>(1));
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
auto eval_expr_x_3338(const auto &x_3880) { return eq(x_3880->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_3336(const auto &x_3881) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3882) {
    auto x_4572 = [&](const auto &x_3883) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3884) {
        if (x_3883->meta->bb_0_has_bb_time_table) {
          auto x_3885 = x_3883->meta->bb_0_bb_time_table;
          if (!(x_3883->meta->bb_0_has_bb_dirtied && x_3883->meta->bb_0_bb_dirtied)) {
            x_3883->meta->bb_0_has_bb_dirtied = true;
            x_3883->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3885, x_3883, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4572(x_3881);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3333(const auto &x_3887) {
  return neq(x_3887->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_3331(const auto &x_3890) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3891) {
    auto x_4573 = [&](const auto &x_3892) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3893) {
        if (x_3892->meta->bb_1_has_bb_time_table) {
          auto x_3894 = x_3892->meta->bb_1_bb_time_table;
          if (!(x_3892->meta->bb_1_has_bb_dirtied && x_3892->meta->bb_1_bb_dirtied)) {
            x_3892->meta->bb_1_has_bb_dirtied = true;
            x_3892->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3894, x_3892, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4573(x_3890);
    MakeUnit();
    auto x_4574 = [&](const auto &x_3896) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3897) {
        if (x_3896->meta->bb_0_has_bb_time_table) {
          auto x_3898 = x_3896->meta->bb_0_bb_time_table;
          if (!(x_3896->meta->bb_0_has_bb_dirtied && x_3896->meta->bb_0_bb_dirtied)) {
            x_3896->meta->bb_0_has_bb_dirtied = true;
            x_3896->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3898, x_3896, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4574(x_3890);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3328(const auto &x_3900) {
  if (!x_3900->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3900->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_3900->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3900->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_3326(const auto &x_3911) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3912) {
    auto x_4575 = [&](const auto &x_3913) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3914) {
        if (x_3913->meta->bb_0_has_bb_time_table) {
          auto x_3915 = x_3913->meta->bb_0_bb_time_table;
          if (!(x_3913->meta->bb_0_has_bb_dirtied && x_3913->meta->bb_0_bb_dirtied)) {
            x_3913->meta->bb_0_has_bb_dirtied = true;
            x_3913->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3915, x_3913, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4575(x_3911);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3323(const auto &x_3917) {
  return neq(x_3917->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_3321(const auto &x_3920) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3921) {
    auto x_4576 = [&](const auto &x_3922) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3923) {
        if (x_3922->meta->bb_1_has_bb_time_table) {
          auto x_3924 = x_3922->meta->bb_1_bb_time_table;
          if (!(x_3922->meta->bb_1_has_bb_dirtied && x_3922->meta->bb_1_bb_dirtied)) {
            x_3922->meta->bb_1_has_bb_dirtied = true;
            x_3922->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3924, x_3922, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4576(x_3920);
    MakeUnit();
    auto x_4577 = [&](const auto &x_3926) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3927) {
        if (x_3926->meta->bb_0_has_bb_time_table) {
          auto x_3928 = x_3926->meta->bb_0_bb_time_table;
          if (!(x_3926->meta->bb_0_has_bb_dirtied && x_3926->meta->bb_0_bb_dirtied)) {
            x_3926->meta->bb_0_has_bb_dirtied = true;
            x_3926->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3928, x_3926, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4577(x_3920);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3318(const auto &x_3930) {
  if (!x_3930->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3930->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_3930->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3930->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_3316(const auto &x_3941) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3942) {
    ListIter(x_3941->children, [&](const auto &x_3943) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3944) {
        if (x_3943->meta->bb_0_has_bb_time_table) {
          auto x_3945 = x_3943->meta->bb_0_bb_time_table;
          if (!(x_3943->meta->bb_0_has_bb_dirtied && x_3943->meta->bb_0_bb_dirtied)) {
            x_3943->meta->bb_0_has_bb_dirtied = true;
            x_3943->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3945, x_3943, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    ListIter(x_3941->children, [&](const auto &x_3947) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3948) {
        if (x_3947->meta->bb_3_has_bb_time_table) {
          auto x_3949 = x_3947->meta->bb_3_bb_time_table;
          if (!(x_3947->meta->bb_3_has_bb_dirtied && x_3947->meta->bb_3_bb_dirtied)) {
            x_3947->meta->bb_3_has_bb_dirtied = true;
            x_3947->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3949, x_3947, static_cast<int64_t>(0));
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
auto eval_expr_x_3313(const auto &x_3951) {
  if ((x_3951->parent != nullptr) &&
      (eq((x_3951->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3951->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3951->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_3951->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3311(const auto &x_3964) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3965) {
    ListIter(x_3964->children, [&](const auto &x_3966) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3967) {
        if (x_3966->meta->bb_0_has_bb_time_table) {
          auto x_3968 = x_3966->meta->bb_0_bb_time_table;
          if (!(x_3966->meta->bb_0_has_bb_dirtied && x_3966->meta->bb_0_bb_dirtied)) {
            x_3966->meta->bb_0_has_bb_dirtied = true;
            x_3966->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3968, x_3966, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4578 = [&](const auto &x_3970) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3971) {
        if (x_3970->meta->bb_3_has_bb_time_table) {
          auto x_3972 = x_3970->meta->bb_3_bb_time_table;
          if (!(x_3970->meta->bb_3_has_bb_dirtied && x_3970->meta->bb_3_bb_dirtied)) {
            x_3970->meta->bb_3_has_bb_dirtied = true;
            x_3970->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3972, x_3970, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4578(x_3964);
    MakeUnit();
    ListIter(x_3964->children, [&](const auto &x_3974) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3975) {
        if (x_3974->meta->bb_3_has_bb_time_table) {
          auto x_3976 = x_3974->meta->bb_3_bb_time_table;
          if (!(x_3974->meta->bb_3_has_bb_dirtied && x_3974->meta->bb_3_bb_dirtied)) {
            x_3974->meta->bb_3_has_bb_dirtied = true;
            x_3974->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3976, x_3974, static_cast<int64_t>(0));
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
auto eval_expr_x_3308(const auto &x_3978) {
  if ((x_3978->parent != nullptr) &&
      (eq((x_3978->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3978->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3978->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_3978->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3306(const auto &x_3993) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_3994) {
    ListIter(x_3993->children, [&](const auto &x_3995) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3996) {
        if (x_3995->meta->bb_1_has_bb_time_table) {
          auto x_3997 = x_3995->meta->bb_1_bb_time_table;
          if (!(x_3995->meta->bb_1_has_bb_dirtied && x_3995->meta->bb_1_bb_dirtied)) {
            x_3995->meta->bb_1_has_bb_dirtied = true;
            x_3995->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3997, x_3995, static_cast<int64_t>(1));
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
auto eval_expr_x_3303(const auto &x_3999) {
  if (x_3999->has_prop_flex_direction) {
    return x_3999->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_3301(const auto &x_4002) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4003) {
    auto x_4579 = [&](const auto &x_4006) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4007) {
        if (x_4006->meta->bb_1_has_bb_time_table) {
          auto x_4008 = x_4006->meta->bb_1_bb_time_table;
          if (!(x_4006->meta->bb_1_has_bb_dirtied && x_4006->meta->bb_1_bb_dirtied)) {
            x_4006->meta->bb_1_has_bb_dirtied = true;
            x_4006->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4008, x_4006, static_cast<int64_t>(1));
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
        x_4002->next, [&](const auto &x_4005) { return MakeUnit(); },
        [&](const auto &x_4004) {
          auto x_4581 = x_4579;
          x_4581(x_4004);
          return MakeUnit();
        });
    auto x_4580 = [&](const auto &x_4010) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4011) {
        if (x_4010->meta->bb_3_has_bb_time_table) {
          auto x_4012 = x_4010->meta->bb_3_bb_time_table;
          if (!(x_4010->meta->bb_3_has_bb_dirtied && x_4010->meta->bb_3_bb_dirtied)) {
            x_4010->meta->bb_3_has_bb_dirtied = true;
            x_4010->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4012, x_4010, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4580(x_4002);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3298(const auto &x_4014) {
  return plus((x_4014->prev != nullptr) ? ((x_4014->prev)->var_flex_shrink_sum) : (0.), x_4014->var_flex_shrink);
}
Unit var_modified_x_3296(const auto &x_4019) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4020) {
    auto x_4582 = [&](const auto &x_4023) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4024) {
        if (x_4023->meta->bb_1_has_bb_time_table) {
          auto x_4025 = x_4023->meta->bb_1_bb_time_table;
          if (!(x_4023->meta->bb_1_has_bb_dirtied && x_4023->meta->bb_1_bb_dirtied)) {
            x_4023->meta->bb_1_has_bb_dirtied = true;
            x_4023->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4025, x_4023, static_cast<int64_t>(1));
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
        x_4019->next, [&](const auto &x_4022) { return MakeUnit(); },
        [&](const auto &x_4021) {
          auto x_4584 = x_4582;
          x_4584(x_4021);
          return MakeUnit();
        });
    auto x_4583 = [&](const auto &x_4027) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4028) {
        if (x_4027->meta->bb_3_has_bb_time_table) {
          auto x_4029 = x_4027->meta->bb_3_bb_time_table;
          if (!(x_4027->meta->bb_3_has_bb_dirtied && x_4027->meta->bb_3_bb_dirtied)) {
            x_4027->meta->bb_3_has_bb_dirtied = true;
            x_4027->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4029, x_4027, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4583(x_4019);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3293(const auto &x_4031) {
  return plus((x_4031->prev != nullptr) ? ((x_4031->prev)->var_flex_grow_sum) : (0.), x_4031->var_flex_grow);
}
Unit var_modified_x_3291(const auto &x_4036) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4037) {
    auto x_4585 = [&](const auto &x_4038) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4039) {
        if (x_4038->meta->bb_1_has_bb_time_table) {
          auto x_4040 = x_4038->meta->bb_1_bb_time_table;
          if (!(x_4038->meta->bb_1_has_bb_dirtied && x_4038->meta->bb_1_bb_dirtied)) {
            x_4038->meta->bb_1_has_bb_dirtied = true;
            x_4038->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4040, x_4038, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4585(x_4036);
    MakeUnit();
    auto x_4586 = [&](const auto &x_4042) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4043) {
        if (x_4042->meta->bb_3_has_bb_time_table) {
          auto x_4044 = x_4042->meta->bb_3_bb_time_table;
          if (!(x_4042->meta->bb_3_has_bb_dirtied && x_4042->meta->bb_3_bb_dirtied)) {
            x_4042->meta->bb_3_has_bb_dirtied = true;
            x_4042->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4044, x_4042, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4586(x_4036);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3288(const auto &x_4046) {
  if (x_4046->has_prop_flex_shrink) {
    return (x_4046->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3286(const auto &x_4049) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4050) {
    auto x_4587 = [&](const auto &x_4051) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4052) {
        if (x_4051->meta->bb_1_has_bb_time_table) {
          auto x_4053 = x_4051->meta->bb_1_bb_time_table;
          if (!(x_4051->meta->bb_1_has_bb_dirtied && x_4051->meta->bb_1_bb_dirtied)) {
            x_4051->meta->bb_1_has_bb_dirtied = true;
            x_4051->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4053, x_4051, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4587(x_4049);
    MakeUnit();
    auto x_4588 = [&](const auto &x_4055) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4056) {
        if (x_4055->meta->bb_3_has_bb_time_table) {
          auto x_4057 = x_4055->meta->bb_3_bb_time_table;
          if (!(x_4055->meta->bb_3_has_bb_dirtied && x_4055->meta->bb_3_bb_dirtied)) {
            x_4055->meta->bb_3_has_bb_dirtied = true;
            x_4055->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4057, x_4055, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4588(x_4049);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3283(const auto &x_4059) {
  if (x_4059->has_prop_flex_grow) {
    return (x_4059->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3281(const auto &x_4062) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4063) {
    auto x_4589 = [&](const auto &x_4064) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4065) {
        if (x_4064->meta->bb_1_has_bb_time_table) {
          auto x_4066 = x_4064->meta->bb_1_bb_time_table;
          if (!(x_4064->meta->bb_1_has_bb_dirtied && x_4064->meta->bb_1_bb_dirtied)) {
            x_4064->meta->bb_1_has_bb_dirtied = true;
            x_4064->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4066, x_4064, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4589(x_4062);
    MakeUnit();
    auto x_4590 = [&](const auto &x_4068) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4069) {
        if (x_4068->meta->bb_0_has_bb_time_table) {
          auto x_4070 = x_4068->meta->bb_0_bb_time_table;
          if (!(x_4068->meta->bb_0_has_bb_dirtied && x_4068->meta->bb_0_bb_dirtied)) {
            x_4068->meta->bb_0_has_bb_dirtied = true;
            x_4068->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4070, x_4068, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4590(x_4062);
    MakeUnit();
    auto x_4591 = [&](const auto &x_4072) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4073) {
        if (x_4072->meta->bb_3_has_bb_time_table) {
          auto x_4074 = x_4072->meta->bb_3_bb_time_table;
          if (!(x_4072->meta->bb_3_has_bb_dirtied && x_4072->meta->bb_3_bb_dirtied)) {
            x_4072->meta->bb_3_has_bb_dirtied = true;
            x_4072->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4074, x_4072, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4591(x_4062);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3278(const auto &x_4076) {
  if (x_4076->has_prop_position) {
    return x_4076->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_3276(const auto &x_4079) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4080) {
    auto x_4592 = [&](const auto &x_4081) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4082) {
        if (x_4081->meta->bb_1_has_bb_time_table) {
          auto x_4083 = x_4081->meta->bb_1_bb_time_table;
          if (!(x_4081->meta->bb_1_has_bb_dirtied && x_4081->meta->bb_1_bb_dirtied)) {
            x_4081->meta->bb_1_has_bb_dirtied = true;
            x_4081->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4083, x_4081, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4592(x_4079);
    MakeUnit();
    ListIter(x_4079->children, [&](const auto &x_4085) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4086) {
        if (x_4085->meta->bb_1_has_bb_time_table) {
          auto x_4087 = x_4085->meta->bb_1_bb_time_table;
          if (!(x_4085->meta->bb_1_has_bb_dirtied && x_4085->meta->bb_1_bb_dirtied)) {
            x_4085->meta->bb_1_has_bb_dirtied = true;
            x_4085->meta->bb_1_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4087, x_4085, static_cast<int64_t>(1));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    });
    auto x_4593 = [&](const auto &x_4089) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4090) {
        if (x_4089->meta->bb_0_has_bb_time_table) {
          auto x_4091 = x_4089->meta->bb_0_bb_time_table;
          if (!(x_4089->meta->bb_0_has_bb_dirtied && x_4089->meta->bb_0_bb_dirtied)) {
            x_4089->meta->bb_0_has_bb_dirtied = true;
            x_4089->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4091, x_4089, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4593(x_4079);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3273(const auto &x_4093) {
  if (x_4093->has_prop_display) {
    return x_4093->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_3269(const auto &x_4096) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4097) {
    auto x_4594 = [&](const auto &x_4100) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4101) {
        if (x_4100->meta->bb_0_has_bb_time_table) {
          auto x_4102 = x_4100->meta->bb_0_bb_time_table;
          if (!(x_4100->meta->bb_0_has_bb_dirtied && x_4100->meta->bb_0_bb_dirtied)) {
            x_4100->meta->bb_0_has_bb_dirtied = true;
            x_4100->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4102, x_4100, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4096->next == nullptr) {
      auto x_4596 = x_4594;
      OptionMatch(
          x_4096->parent, [&](const auto &x_4099) { return MakeUnit(); },
          [&](const auto &x_4098) {
            auto x_4598 = x_4596;
            x_4598(x_4098);
            return MakeUnit();
          });
    }
    auto x_4595 = [&](const auto &x_4106) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4107) {
        if (x_4106->meta->bb_0_has_bb_time_table) {
          auto x_4108 = x_4106->meta->bb_0_bb_time_table;
          if (!(x_4106->meta->bb_0_has_bb_dirtied && x_4106->meta->bb_0_bb_dirtied)) {
            x_4106->meta->bb_0_has_bb_dirtied = true;
            x_4106->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4108, x_4106, static_cast<int64_t>(2));
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
        x_4096->next, [&](const auto &x_4105) { return MakeUnit(); },
        [&](const auto &x_4104) {
          auto x_4597 = x_4595;
          x_4597(x_4104);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3266(const auto &x_4110) {
  if (x_4110->prev != nullptr) {
    if (x_4110->var_line_break) {
      return plus((x_4110->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4110->prev)->var_intrinsic_current_line_height, x_4110->var_intrinsic_height_external));
    } else {
      return (x_4110->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4110->var_line_break) {
      return x_4110->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3264(const auto &x_4125) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4126) {
    auto x_4599 = [&](const auto &x_4129) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4130) {
        if (x_4129->meta->bb_0_has_bb_time_table) {
          auto x_4131 = x_4129->meta->bb_0_bb_time_table;
          if (!(x_4129->meta->bb_0_has_bb_dirtied && x_4129->meta->bb_0_bb_dirtied)) {
            x_4129->meta->bb_0_has_bb_dirtied = true;
            x_4129->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4131, x_4129, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4125->next == nullptr) {
      auto x_4601 = x_4599;
      OptionMatch(
          x_4125->parent, [&](const auto &x_4128) { return MakeUnit(); },
          [&](const auto &x_4127) {
            auto x_4603 = x_4601;
            x_4603(x_4127);
            return MakeUnit();
          });
    }
    auto x_4600 = [&](const auto &x_4135) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4136) {
        if (x_4135->meta->bb_0_has_bb_time_table) {
          auto x_4137 = x_4135->meta->bb_0_bb_time_table;
          if (!(x_4135->meta->bb_0_has_bb_dirtied && x_4135->meta->bb_0_bb_dirtied)) {
            x_4135->meta->bb_0_has_bb_dirtied = true;
            x_4135->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4137, x_4135, static_cast<int64_t>(2));
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
        x_4125->next, [&](const auto &x_4134) { return MakeUnit(); },
        [&](const auto &x_4133) {
          auto x_4602 = x_4600;
          x_4602(x_4133);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3261(const auto &x_4139) {
  if (x_4139->var_line_break) {
    return 0.;
  } else {
    return max(x_4139->var_intrinsic_height_external,
               (x_4139->prev != nullptr) ? ((x_4139->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_3259(const auto &x_4146) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4147) {
    auto x_4604 = [&](const auto &x_4150) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4151) {
        if (x_4150->meta->bb_0_has_bb_time_table) {
          auto x_4152 = x_4150->meta->bb_0_bb_time_table;
          if (!(x_4150->meta->bb_0_has_bb_dirtied && x_4150->meta->bb_0_bb_dirtied)) {
            x_4150->meta->bb_0_has_bb_dirtied = true;
            x_4150->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4152, x_4150, static_cast<int64_t>(2));
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
        x_4146->next, [&](const auto &x_4149) { return MakeUnit(); },
        [&](const auto &x_4148) {
          auto x_4606 = x_4604;
          x_4606(x_4148);
          return MakeUnit();
        });
    auto x_4605 = [&](const auto &x_4156) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4157) {
        if (x_4156->meta->bb_3_has_bb_time_table) {
          auto x_4158 = x_4156->meta->bb_3_bb_time_table;
          if (!(x_4156->meta->bb_3_has_bb_dirtied && x_4156->meta->bb_3_bb_dirtied)) {
            x_4156->meta->bb_3_has_bb_dirtied = true;
            x_4156->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4158, x_4156, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4146->next == nullptr) {
      auto x_4607 = x_4605;
      OptionMatch(
          x_4146->parent, [&](const auto &x_4155) { return MakeUnit(); },
          [&](const auto &x_4154) {
            auto x_4608 = x_4607;
            x_4608(x_4154);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_3256(const auto &x_4160) {
  return plus((x_4160->prev != nullptr) ? ((x_4160->prev)->var_intrinsic_height_sum) : (0.),
              x_4160->var_intrinsic_height_external);
}
Unit var_modified_x_3254(const auto &x_4165) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4166) {
    auto x_4609 = [&](const auto &x_4167) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4168) {
        if (x_4167->meta->bb_0_has_bb_time_table) {
          auto x_4169 = x_4167->meta->bb_0_bb_time_table;
          if (!(x_4167->meta->bb_0_has_bb_dirtied && x_4167->meta->bb_0_bb_dirtied)) {
            x_4167->meta->bb_0_has_bb_dirtied = true;
            x_4167->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4169, x_4167, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4609(x_4165);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3251(const auto &x_4171) {
  if (eq(x_4171->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4171->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_3249(const auto &x_4176) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4177) {
    auto x_4610 = [&](const auto &x_4178) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4179) {
        if (x_4178->meta->bb_0_has_bb_time_table) {
          auto x_4180 = x_4178->meta->bb_0_bb_time_table;
          if (!(x_4178->meta->bb_0_has_bb_dirtied && x_4178->meta->bb_0_bb_dirtied)) {
            x_4178->meta->bb_0_has_bb_dirtied = true;
            x_4178->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4180, x_4178, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4610(x_4176);
    MakeUnit();
    auto x_4611 = [&](const auto &x_4182) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4183) {
        if (x_4182->meta->bb_3_has_bb_time_table) {
          auto x_4184 = x_4182->meta->bb_3_bb_time_table;
          if (!(x_4182->meta->bb_3_has_bb_dirtied && x_4182->meta->bb_3_bb_dirtied)) {
            x_4182->meta->bb_3_has_bb_dirtied = true;
            x_4182->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4184, x_4182, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4611(x_4176);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3246(const auto &x_4186) {
  if (eq(x_4186->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4186->var_inside_svg) {
      return 0.;
    } else {
      if (x_4186->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4186->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4186->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_4186->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_4186->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4186->var_height_expr.r.a0;
          } else {
            if (x_4186->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_4186->var_height_expr.r.a0;
            } else {
              return x_4186->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_4186->var_children_intrinsic_height,
              (eq(x_4186->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_4186->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4186->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4186->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_4186->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4186->var_has_height_attr &&
                                                  (x_4186->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4186->var_height_attr_expr.r.a0)
                                                     : ((x_4186->has_attr_viewBox)
                                                            ? (x_4186->attr_viewBox.r.a3)
                                                            : (mult((x_4186->attr_viewBox.r.a3),
                                                                    divide(x_4186->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4186->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4186->var_has_height_attr)
                                                            ? (x_4186->var_height_attr_expr.r.a0)
                                                            : ((x_4186->has_attr_image_height &&
                                                                (!x_4186->var_has_width_attr))
                                                                   ? (int_to_float(x_4186->attr_image_height))
                                                                   : ((neq(x_4186->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4186->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4186->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_4186->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_4186->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_4186->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3244(const auto &x_4265) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4266) {
    auto x_4612 = [&](const auto &x_4267) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4268) {
        if (x_4267->meta->bb_3_has_bb_time_table) {
          auto x_4269 = x_4267->meta->bb_3_bb_time_table;
          if (!(x_4267->meta->bb_3_has_bb_dirtied && x_4267->meta->bb_3_bb_dirtied)) {
            x_4267->meta->bb_3_has_bb_dirtied = true;
            x_4267->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4269, x_4267, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4612(x_4265);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3241(const auto &x_4271) {
  if (eq(x_4271->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_4271->var_inside_svg || x_4271->var_disabled)) {
    return true;
  } else {
    if ((x_4271->parent != nullptr) && (x_4271->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_4271->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_4271->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_4271->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_4271->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_4271->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3239(const auto &x_4296) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4297) {
    auto x_4613 = [&](const auto &x_4298) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4299) {
        if (x_4298->meta->bb_0_has_bb_time_table) {
          auto x_4300 = x_4298->meta->bb_0_bb_time_table;
          if (!(x_4298->meta->bb_0_has_bb_dirtied && x_4298->meta->bb_0_bb_dirtied)) {
            x_4298->meta->bb_0_has_bb_dirtied = true;
            x_4298->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4300, x_4298, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4613(x_4296);
    MakeUnit();
    auto x_4614 = [&](const auto &x_4302) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4303) {
        if (x_4302->meta->bb_3_has_bb_time_table) {
          auto x_4304 = x_4302->meta->bb_3_bb_time_table;
          if (!(x_4302->meta->bb_3_has_bb_dirtied && x_4302->meta->bb_3_bb_dirtied)) {
            x_4302->meta->bb_3_has_bb_dirtied = true;
            x_4302->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4304, x_4302, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4614(x_4296);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3236(const auto &x_4306) {
  if (x_4306->has_prop_height) {
    return x_4306->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_3234(const auto &x_4309) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4310) {
    auto x_4615 = [&](const auto &x_4311) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4312) {
        if (x_4311->meta->bb_0_has_bb_time_table) {
          auto x_4313 = x_4311->meta->bb_0_bb_time_table;
          if (!(x_4311->meta->bb_0_has_bb_dirtied && x_4311->meta->bb_0_bb_dirtied)) {
            x_4311->meta->bb_0_has_bb_dirtied = true;
            x_4311->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4313, x_4311, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4615(x_4309);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3231(const auto &x_4315) {
  if (x_4315->last != nullptr) {
    return plus((x_4315->last)->var_finished_intrinsic_height_sum, (x_4315->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3229(const auto &x_4320) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4321) {
    auto x_4616 = [&](const auto &x_4324) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4325) {
        if (x_4324->meta->bb_0_has_bb_time_table) {
          auto x_4326 = x_4324->meta->bb_0_bb_time_table;
          if (!(x_4324->meta->bb_0_has_bb_dirtied && x_4324->meta->bb_0_bb_dirtied)) {
            x_4324->meta->bb_0_has_bb_dirtied = true;
            x_4324->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4326, x_4324, static_cast<int64_t>(2));
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
        x_4320->next, [&](const auto &x_4323) { return MakeUnit(); },
        [&](const auto &x_4322) {
          auto x_4618 = x_4616;
          x_4618(x_4322);
          return MakeUnit();
        });
    auto x_4617 = [&](const auto &x_4330) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4331) {
        if (x_4330->meta->bb_3_has_bb_time_table) {
          auto x_4332 = x_4330->meta->bb_3_bb_time_table;
          if (!(x_4330->meta->bb_3_has_bb_dirtied && x_4330->meta->bb_3_bb_dirtied)) {
            x_4330->meta->bb_3_has_bb_dirtied = true;
            x_4330->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4332, x_4330, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4320->next == nullptr) {
      auto x_4619 = x_4617;
      OptionMatch(
          x_4320->parent, [&](const auto &x_4329) { return MakeUnit(); },
          [&](const auto &x_4328) {
            auto x_4620 = x_4619;
            x_4620(x_4328);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_3226(const auto &x_4334) {
  return plus((x_4334->prev != nullptr) ? ((x_4334->prev)->var_intrinsic_width_sum) : (0.),
              x_4334->var_intrinsic_width_external);
}
Unit var_modified_x_3224(const auto &x_4339) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4340) {
    auto x_4621 = [&](const auto &x_4343) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4344) {
        if (x_4343->meta->bb_0_has_bb_time_table) {
          auto x_4345 = x_4343->meta->bb_0_bb_time_table;
          if (!(x_4343->meta->bb_0_has_bb_dirtied && x_4343->meta->bb_0_bb_dirtied)) {
            x_4343->meta->bb_0_has_bb_dirtied = true;
            x_4343->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4345, x_4343, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    if (x_4339->next == nullptr) {
      auto x_4623 = x_4621;
      OptionMatch(
          x_4339->parent, [&](const auto &x_4342) { return MakeUnit(); },
          [&](const auto &x_4341) {
            auto x_4625 = x_4623;
            x_4625(x_4341);
            return MakeUnit();
          });
    }
    auto x_4622 = [&](const auto &x_4349) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4350) {
        if (x_4349->meta->bb_0_has_bb_time_table) {
          auto x_4351 = x_4349->meta->bb_0_bb_time_table;
          if (!(x_4349->meta->bb_0_has_bb_dirtied && x_4349->meta->bb_0_bb_dirtied)) {
            x_4349->meta->bb_0_has_bb_dirtied = true;
            x_4349->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4351, x_4349, static_cast<int64_t>(2));
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
        x_4339->next, [&](const auto &x_4348) { return MakeUnit(); },
        [&](const auto &x_4347) {
          auto x_4624 = x_4622;
          x_4624(x_4347);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3221(const auto &x_4353) {
  return max(x_4353->var_intrinsic_current_line_width,
             (x_4353->prev != nullptr) ? ((x_4353->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_3219(const auto &x_4358) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4359) {
    auto x_4626 = [&](const auto &x_4360) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4361) {
        if (x_4360->meta->bb_0_has_bb_time_table) {
          auto x_4362 = x_4360->meta->bb_0_bb_time_table;
          if (!(x_4360->meta->bb_0_has_bb_dirtied && x_4360->meta->bb_0_bb_dirtied)) {
            x_4360->meta->bb_0_has_bb_dirtied = true;
            x_4360->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4362, x_4360, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4626(x_4358);
    MakeUnit();
    auto x_4627 = [&](const auto &x_4366) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4367) {
        if (x_4366->meta->bb_0_has_bb_time_table) {
          auto x_4368 = x_4366->meta->bb_0_bb_time_table;
          if (!(x_4366->meta->bb_0_has_bb_dirtied && x_4366->meta->bb_0_bb_dirtied)) {
            x_4366->meta->bb_0_has_bb_dirtied = true;
            x_4366->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4368, x_4366, static_cast<int64_t>(2));
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
        x_4358->next, [&](const auto &x_4365) { return MakeUnit(); },
        [&](const auto &x_4364) {
          auto x_4628 = x_4627;
          x_4628(x_4364);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_3216(const auto &x_4370) {
  return plus(x_4370->var_intrinsic_width_external,
              ((x_4370->prev != nullptr) && (!(x_4370->prev)->var_line_break))
                  ? ((x_4370->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_3214(const auto &x_4377) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4378) {
    auto x_4629 = [&](const auto &x_4379) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4380) {
        if (x_4379->meta->bb_0_has_bb_time_table) {
          auto x_4381 = x_4379->meta->bb_0_bb_time_table;
          if (!(x_4379->meta->bb_0_has_bb_dirtied && x_4379->meta->bb_0_bb_dirtied)) {
            x_4379->meta->bb_0_has_bb_dirtied = true;
            x_4379->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4381, x_4379, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4629(x_4377);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3211(const auto &x_4383) {
  if (eq(x_4383->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4383->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_3209(const auto &x_4388) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4389) {
    auto x_4630 = [&](const auto &x_4390) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4391) {
        if (x_4390->meta->bb_0_has_bb_time_table) {
          auto x_4392 = x_4390->meta->bb_0_bb_time_table;
          if (!(x_4390->meta->bb_0_has_bb_dirtied && x_4390->meta->bb_0_bb_dirtied)) {
            x_4390->meta->bb_0_has_bb_dirtied = true;
            x_4390->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4392, x_4390, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4630(x_4388);
    MakeUnit();
    auto x_4631 = [&](const auto &x_4394) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4395) {
        if (x_4394->meta->bb_3_has_bb_time_table) {
          auto x_4396 = x_4394->meta->bb_3_bb_time_table;
          if (!(x_4394->meta->bb_3_has_bb_dirtied && x_4394->meta->bb_3_bb_dirtied)) {
            x_4394->meta->bb_3_has_bb_dirtied = true;
            x_4394->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4396, x_4394, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4631(x_4388);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3206(const auto &x_4398) {
  if (eq(x_4398->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4398->var_inside_svg) {
      return 0.;
    } else {
      if (x_4398->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4398->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4398->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_4398->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_4398->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_4398->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_4398->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4398->var_width_expr.r.a0;
          } else {
            return x_4398->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_4398->var_children_intrinsic_width,
              (eq(x_4398->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_4398->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4398->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4398->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_4398->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4398->var_has_width_attr &&
                                                  (x_4398->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4398->var_width_attr_expr.r.a0)
                                                     : (((!x_4398->var_has_width_attr) && x_4398->has_attr_viewBox)
                                                            ? (x_4398->attr_viewBox.r.a2)
                                                            : (mult((x_4398->attr_viewBox.r.a2),
                                                                    divide(x_4398->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4398->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4398->var_has_width_attr)
                                                            ? (x_4398->var_width_attr_expr.r.a0)
                                                            : ((x_4398->has_attr_image_width &&
                                                                (!x_4398->var_has_height_attr))
                                                                   ? (int_to_float(x_4398->attr_image_width))
                                                                   : ((neq(x_4398->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4398->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4398->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_4398->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_4398->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_4398->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3204(const auto &x_4481) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4482) {
    auto x_4632 = [&](const auto &x_4483) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4484) {
        if (x_4483->meta->bb_0_has_bb_time_table) {
          auto x_4485 = x_4483->meta->bb_0_bb_time_table;
          if (!(x_4483->meta->bb_0_has_bb_dirtied && x_4483->meta->bb_0_bb_dirtied)) {
            x_4483->meta->bb_0_has_bb_dirtied = true;
            x_4483->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4485, x_4483, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4632(x_4481);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3201(const auto &x_4487) {
  if (x_4487->last != nullptr) {
    return (x_4487->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_3199(const auto &x_4490) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4491) {
    auto x_4633 = [&](const auto &x_4492) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4493) {
        if (x_4492->meta->bb_3_has_bb_time_table) {
          auto x_4494 = x_4492->meta->bb_3_bb_time_table;
          if (!(x_4492->meta->bb_3_has_bb_dirtied && x_4492->meta->bb_3_bb_dirtied)) {
            x_4492->meta->bb_3_has_bb_dirtied = true;
            x_4492->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4494, x_4492, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4633(x_4490);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3196(const auto &x_4496) {
  if (eq(x_4496->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_4496->var_inside_svg || x_4496->var_disabled)) {
    return true;
  } else {
    if ((x_4496->parent != nullptr) && (x_4496->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_4496->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_4496->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_4496->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_4496->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_4496->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3194(const auto &x_4521) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4522) {
    auto x_4634 = [&](const auto &x_4523) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4524) {
        if (x_4523->meta->bb_0_has_bb_time_table) {
          auto x_4525 = x_4523->meta->bb_0_bb_time_table;
          if (!(x_4523->meta->bb_0_has_bb_dirtied && x_4523->meta->bb_0_bb_dirtied)) {
            x_4523->meta->bb_0_has_bb_dirtied = true;
            x_4523->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4525, x_4523, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4634(x_4521);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3191(const auto &x_4527) {
  if (eq(x_4527->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_4527->var_inside_svg) {
      return true;
    } else {
      if (x_4527->var_disabled) {
        return true;
      } else {if ( eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_4527->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_3189(const auto &x_4534) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_4535) {
    auto x_4635 = [&](const auto &x_4536) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4537) {
        if (x_4536->meta->bb_0_has_bb_time_table) {
          auto x_4538 = x_4536->meta->bb_0_bb_time_table;
          if (!(x_4536->meta->bb_0_has_bb_dirtied && x_4536->meta->bb_0_bb_dirtied)) {
            x_4536->meta->bb_0_has_bb_dirtied = true;
            x_4536->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4538, x_4536, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4635(x_4534);
    MakeUnit();
    auto x_4636 = [&](const auto &x_4540) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_4541) {
        if (x_4540->meta->bb_3_has_bb_time_table) {
          auto x_4542 = x_4540->meta->bb_3_bb_time_table;
          if (!(x_4540->meta->bb_3_has_bb_dirtied && x_4540->meta->bb_3_bb_dirtied)) {
            x_4540->meta->bb_3_has_bb_dirtied = true;
            x_4540->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_4542, x_4540, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    };
    x_4636(x_4534);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_3186(const auto &x_4544) {
  if (x_4544->has_prop_width) {
    return x_4544->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit x_2844(const auto &x_2845, const auto &x_2846, const auto &x_2847) {
  auto x_2848 = ListHeadExn(x_2845);
  auto x_2849 = ListTailExn(x_2845);
  if (ListIsEmpty(x_2849)) {
    auto x_2850 = ListSplitN(x_2846->children, x_2848);
    OutputChangeMetric(IntAdd(layout_size_x_2793(ListNthExn(x_2846->children, x_2848)), layout_size_x_2793(x_2847)));
    x_2846->children = ListAppend(Zro(x_2850), Cons(x_2847, ListTailExn(Fst(x_2850))));
    return MakeUnit();
  } else {
    return x_2844(x_2849, ListNthExn(x_2846->children, x_2848), x_2847);
  }
}
Unit replace_layout_node_x_2843(const auto &x_2845, const auto &x_2846, const auto &x_2847) {
  return x_2844(x_2845, x_2846, x_2847);
}
Unit x_2851(const auto &x_2852, const auto &x_2853, const auto &x_2854) {
  auto x_2855 = ListHeadExn(x_2852);
  auto x_2856 = ListTailExn(x_2852);
  if (ListIsEmpty(x_2856)) {
    OutputChangeMetric(layout_size_x_2793(x_2854));
    auto x_2857 = ListSplitN(x_2853->children, x_2855);
    x_2853->children = ListAppend(Zro(x_2857), Cons(x_2854, Fst(x_2857)));
    return MakeUnit();
  } else {
    return x_2851(x_2856, ListNthExn(x_2853->children, x_2855), x_2854);
  }
}
Unit add_layout_node_x_2841(const auto &x_2852, const auto &x_2853, const auto &x_2854) {
  return x_2851(x_2852, x_2853, x_2854);
}
Unit x_2858(const auto &x_2859, const auto &x_2860, const auto &x_2861) {
  auto x_2862 = ListHeadExn(x_2859);
  auto x_2863 = ListTailExn(x_2859);
  if (ListIsEmpty(x_2863)) {
    OutputChangeMetric(layout_size_x_2793(ListNthExn(x_2860->children, x_2862)));
    auto x_2864 = ListSplitN(x_2860->children, x_2862);
    x_2860->children = ListAppend(Zro(x_2864), ListTailExn(Fst(x_2864)));
    return MakeUnit();
  } else {
    return x_2858(x_2863, ListNthExn(x_2860->children, x_2862), x_2861);
  }
}
Unit remove_layout_node_x_2839(const auto &x_2859, const auto &x_2860, const auto &x_2861) {
  return x_2858(x_2859, x_2860, x_2861);
}
Unit x_2865(const auto &x_2866, const auto &x_2867, const auto &x_2868) {
  return ListMatch(
      x_2866,
      [&](const auto &x_2871) {
        auto x_2872 = Zro(x_2868);
        auto x_2873 = Zro(x_2872);
        auto x_2874 = Fst(x_2872);
        auto x_2875 = Fst(x_2868);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4637 = x_2873;
        if (x_4637 == "attributes") {
          std::string x_4638 = x_2874;
          if (x_4638 == "width") {
            WriteMetric();
            x_2867->has_attr_width = true;
            x_2867->attr_width = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2876) {
              if (x_2867->meta->bb_1_has_bb_time_table) {
                auto x_2877 = x_2867->meta->bb_1_bb_time_table;
                if (!(x_2867->meta->bb_1_has_bb_dirtied && x_2867->meta->bb_1_bb_dirtied)) {
                  x_2867->meta->bb_1_has_bb_dirtied = true;
                  x_2867->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2877, x_2867, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4638 == "image_height") {
            WriteMetric();
            x_2867->has_attr_image_height = true;
            x_2867->attr_image_height = Asint64_t(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2879) {
              if (x_2867->meta->bb_0_has_bb_time_table) {
                auto x_2880 = x_2867->meta->bb_0_bb_time_table;
                if (!(x_2867->meta->bb_0_has_bb_dirtied && x_2867->meta->bb_0_bb_dirtied)) {
                  x_2867->meta->bb_0_has_bb_dirtied = true;
                  x_2867->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2880, x_2867, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4638 == "image_width") {
            WriteMetric();
            x_2867->has_attr_image_width = true;
            x_2867->attr_image_width = Asint64_t(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2882) {
              if (x_2867->meta->bb_0_has_bb_time_table) {
                auto x_2883 = x_2867->meta->bb_0_bb_time_table;
                if (!(x_2867->meta->bb_0_has_bb_dirtied && x_2867->meta->bb_0_bb_dirtied)) {
                  x_2867->meta->bb_0_has_bb_dirtied = true;
                  x_2867->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2883, x_2867, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4638 == "height") {
            WriteMetric();
            x_2867->has_attr_height = true;
            x_2867->attr_height = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2885) {
              if (x_2867->meta->bb_1_has_bb_time_table) {
                auto x_2886 = x_2867->meta->bb_1_bb_time_table;
                if (!(x_2867->meta->bb_1_has_bb_dirtied && x_2867->meta->bb_1_bb_dirtied)) {
                  x_2867->meta->bb_1_has_bb_dirtied = true;
                  x_2867->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2886, x_2867, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4638 == "viewBox") {
            WriteMetric();
            x_2867->has_attr_viewBox = true;
            x_2867->attr_viewBox = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2888) {
              if (x_2867->meta->bb_0_has_bb_time_table) {
                auto x_2889 = x_2867->meta->bb_0_bb_time_table;
                if (!(x_2867->meta->bb_0_has_bb_dirtied && x_2867->meta->bb_0_bb_dirtied)) {
                  x_2867->meta->bb_0_has_bb_dirtied = true;
                  x_2867->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2889, x_2867, static_cast<int64_t>(2));
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
        } else if (x_4637 == "properties") {
          std::string x_4639 = x_2874;
          if (x_4639 == "width") {
            WriteMetric();
            x_2867->has_prop_width = true;
            x_2867->prop_width = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2891) {
              if (x_2867->meta->bb_0_has_bb_time_table) {
                auto x_2892 = x_2867->meta->bb_0_bb_time_table;
                if (!(x_2867->meta->bb_0_has_bb_dirtied && x_2867->meta->bb_0_bb_dirtied)) {
                  x_2867->meta->bb_0_has_bb_dirtied = true;
                  x_2867->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2892, x_2867, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "flex-grow") {
            WriteMetric();
            x_2867->has_prop_flex_grow = true;
            x_2867->prop_flex_grow = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2894) {
              if (x_2867->meta->bb_1_has_bb_time_table) {
                auto x_2895 = x_2867->meta->bb_1_bb_time_table;
                if (!(x_2867->meta->bb_1_has_bb_dirtied && x_2867->meta->bb_1_bb_dirtied)) {
                  x_2867->meta->bb_1_has_bb_dirtied = true;
                  x_2867->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2895, x_2867, static_cast<int64_t>(1));
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
            x_2867->has_prop_height = true;
            x_2867->prop_height = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2897) {
              if (x_2867->meta->bb_0_has_bb_time_table) {
                auto x_2898 = x_2867->meta->bb_0_bb_time_table;
                if (!(x_2867->meta->bb_0_has_bb_dirtied && x_2867->meta->bb_0_bb_dirtied)) {
                  x_2867->meta->bb_0_has_bb_dirtied = true;
                  x_2867->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2898, x_2867, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "display") {
            WriteMetric();
            x_2867->has_prop_display = true;
            x_2867->prop_display = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2900) {
              if (x_2867->meta->bb_1_has_bb_time_table) {
                auto x_2901 = x_2867->meta->bb_1_bb_time_table;
                if (!(x_2867->meta->bb_1_has_bb_dirtied && x_2867->meta->bb_1_bb_dirtied)) {
                  x_2867->meta->bb_1_has_bb_dirtied = true;
                  x_2867->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2901, x_2867, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "position") {
            WriteMetric();
            x_2867->has_prop_position = true;
            x_2867->prop_position = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2903) {
              if (x_2867->meta->bb_1_has_bb_time_table) {
                auto x_2904 = x_2867->meta->bb_1_bb_time_table;
                if (!(x_2867->meta->bb_1_has_bb_dirtied && x_2867->meta->bb_1_bb_dirtied)) {
                  x_2867->meta->bb_1_has_bb_dirtied = true;
                  x_2867->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2904, x_2867, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "flex-shrink") {
            WriteMetric();
            x_2867->has_prop_flex_shrink = true;
            x_2867->prop_flex_shrink = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2906) {
              if (x_2867->meta->bb_1_has_bb_time_table) {
                auto x_2907 = x_2867->meta->bb_1_bb_time_table;
                if (!(x_2867->meta->bb_1_has_bb_dirtied && x_2867->meta->bb_1_bb_dirtied)) {
                  x_2867->meta->bb_1_has_bb_dirtied = true;
                  x_2867->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2907, x_2867, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4639 == "flex-direction") {
            WriteMetric();
            x_2867->has_prop_flex_direction = true;
            x_2867->prop_flex_direction = AsDEString(x_2875);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2909) {
              if (x_2867->meta->bb_1_has_bb_time_table) {
                auto x_2910 = x_2867->meta->bb_1_bb_time_table;
                if (!(x_2867->meta->bb_1_has_bb_dirtied && x_2867->meta->bb_1_bb_dirtied)) {
                  x_2867->meta->bb_1_has_bb_dirtied = true;
                  x_2867->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2910, x_2867, static_cast<int64_t>(1));
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
      [&](const auto &x_2869, const auto &x_2870) {
        return x_2865(x_2870, ListNthExn(x_2867->children, x_2869), x_2868);
      });
}
Unit insert_value_x_2837(const auto &x_2866, const auto &x_2867, const auto &x_2868) {
  return x_2865(x_2866, x_2867, x_2868);
}
Unit x_2912(const auto &x_2913, const auto &x_2914, const auto &x_2915) {
  return ListMatch(
      x_2913,
      [&](const auto &x_2918) {
        auto x_2919 = Zro(x_2915);
        auto x_2920 = Fst(x_2915);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4640 = x_2919;
        if (x_4640 == "attributes") {
          std::string x_4641 = x_2920;
          if (x_4641 == "width") {
            WriteMetric();
            x_2914->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2921) {
              if (x_2914->meta->bb_1_has_bb_time_table) {
                auto x_2922 = x_2914->meta->bb_1_bb_time_table;
                if (!(x_2914->meta->bb_1_has_bb_dirtied && x_2914->meta->bb_1_bb_dirtied)) {
                  x_2914->meta->bb_1_has_bb_dirtied = true;
                  x_2914->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2922, x_2914, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4641 == "image_height") {
            WriteMetric();
            x_2914->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2924) {
              if (x_2914->meta->bb_0_has_bb_time_table) {
                auto x_2925 = x_2914->meta->bb_0_bb_time_table;
                if (!(x_2914->meta->bb_0_has_bb_dirtied && x_2914->meta->bb_0_bb_dirtied)) {
                  x_2914->meta->bb_0_has_bb_dirtied = true;
                  x_2914->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2925, x_2914, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4641 == "image_width") {
            WriteMetric();
            x_2914->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2927) {
              if (x_2914->meta->bb_0_has_bb_time_table) {
                auto x_2928 = x_2914->meta->bb_0_bb_time_table;
                if (!(x_2914->meta->bb_0_has_bb_dirtied && x_2914->meta->bb_0_bb_dirtied)) {
                  x_2914->meta->bb_0_has_bb_dirtied = true;
                  x_2914->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2928, x_2914, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4641 == "height") {
            WriteMetric();
            x_2914->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2930) {
              if (x_2914->meta->bb_1_has_bb_time_table) {
                auto x_2931 = x_2914->meta->bb_1_bb_time_table;
                if (!(x_2914->meta->bb_1_has_bb_dirtied && x_2914->meta->bb_1_bb_dirtied)) {
                  x_2914->meta->bb_1_has_bb_dirtied = true;
                  x_2914->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2931, x_2914, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4641 == "viewBox") {
            WriteMetric();
            x_2914->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2933) {
              if (x_2914->meta->bb_0_has_bb_time_table) {
                auto x_2934 = x_2914->meta->bb_0_bb_time_table;
                if (!(x_2914->meta->bb_0_has_bb_dirtied && x_2914->meta->bb_0_bb_dirtied)) {
                  x_2914->meta->bb_0_has_bb_dirtied = true;
                  x_2914->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2934, x_2914, static_cast<int64_t>(2));
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
        } else if (x_4640 == "properties") {
          std::string x_4642 = x_2920;
          if (x_4642 == "width") {
            WriteMetric();
            x_2914->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2936) {
              if (x_2914->meta->bb_0_has_bb_time_table) {
                auto x_2937 = x_2914->meta->bb_0_bb_time_table;
                if (!(x_2914->meta->bb_0_has_bb_dirtied && x_2914->meta->bb_0_bb_dirtied)) {
                  x_2914->meta->bb_0_has_bb_dirtied = true;
                  x_2914->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2937, x_2914, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "flex-grow") {
            WriteMetric();
            x_2914->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2939) {
              if (x_2914->meta->bb_1_has_bb_time_table) {
                auto x_2940 = x_2914->meta->bb_1_bb_time_table;
                if (!(x_2914->meta->bb_1_has_bb_dirtied && x_2914->meta->bb_1_bb_dirtied)) {
                  x_2914->meta->bb_1_has_bb_dirtied = true;
                  x_2914->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2940, x_2914, static_cast<int64_t>(1));
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
            x_2914->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2942) {
              if (x_2914->meta->bb_0_has_bb_time_table) {
                auto x_2943 = x_2914->meta->bb_0_bb_time_table;
                if (!(x_2914->meta->bb_0_has_bb_dirtied && x_2914->meta->bb_0_bb_dirtied)) {
                  x_2914->meta->bb_0_has_bb_dirtied = true;
                  x_2914->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2943, x_2914, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "display") {
            WriteMetric();
            x_2914->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2945) {
              if (x_2914->meta->bb_1_has_bb_time_table) {
                auto x_2946 = x_2914->meta->bb_1_bb_time_table;
                if (!(x_2914->meta->bb_1_has_bb_dirtied && x_2914->meta->bb_1_bb_dirtied)) {
                  x_2914->meta->bb_1_has_bb_dirtied = true;
                  x_2914->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2946, x_2914, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "position") {
            WriteMetric();
            x_2914->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2948) {
              if (x_2914->meta->bb_1_has_bb_time_table) {
                auto x_2949 = x_2914->meta->bb_1_bb_time_table;
                if (!(x_2914->meta->bb_1_has_bb_dirtied && x_2914->meta->bb_1_bb_dirtied)) {
                  x_2914->meta->bb_1_has_bb_dirtied = true;
                  x_2914->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2949, x_2914, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "flex-shrink") {
            WriteMetric();
            x_2914->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2951) {
              if (x_2914->meta->bb_1_has_bb_time_table) {
                auto x_2952 = x_2914->meta->bb_1_bb_time_table;
                if (!(x_2914->meta->bb_1_has_bb_dirtied && x_2914->meta->bb_1_bb_dirtied)) {
                  x_2914->meta->bb_1_has_bb_dirtied = true;
                  x_2914->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2952, x_2914, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4642 == "flex-direction") {
            WriteMetric();
            x_2914->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2954) {
              if (x_2914->meta->bb_1_has_bb_time_table) {
                auto x_2955 = x_2914->meta->bb_1_bb_time_table;
                if (!(x_2914->meta->bb_1_has_bb_dirtied && x_2914->meta->bb_1_bb_dirtied)) {
                  x_2914->meta->bb_1_has_bb_dirtied = true;
                  x_2914->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2955, x_2914, static_cast<int64_t>(1));
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
      [&](const auto &x_2916, const auto &x_2917) {
        return x_2912(x_2917, ListNthExn(x_2914->children, x_2916), x_2915);
      });
}
Unit delete_value_x_2835(const auto &x_2913, const auto &x_2914, const auto &x_2915) {
  return x_2912(x_2913, x_2914, x_2915);
}
Unit x_2957(const auto &x_2958, const auto &x_2959, const auto &x_2960) {
  return ListMatch(
      x_2958,
      [&](const auto &x_2963) {
        auto x_2964 = Zro(x_2960);
        auto x_2965 = Zro(x_2964);
        auto x_2966 = Fst(x_2964);
        auto x_2967 = Fst(x_2960);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4643 = x_2965;
        if (x_4643 == "attributes") {
          std::string x_4644 = x_2966;
          if (x_4644 == "width") {
            WriteMetric();
            x_2959->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2968) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_2969 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2969, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_attr_width = true;
            x_2959->attr_width = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2971) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_2972 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2972, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4644 == "image_height") {
            WriteMetric();
            x_2959->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2974) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_2975 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2975, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_attr_image_height = true;
            x_2959->attr_image_height = Asint64_t(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2977) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_2978 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2978, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4644 == "image_width") {
            WriteMetric();
            x_2959->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2980) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_2981 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2981, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_attr_image_width = true;
            x_2959->attr_image_width = Asint64_t(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2983) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_2984 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2984, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4644 == "height") {
            WriteMetric();
            x_2959->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2986) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_2987 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2987, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_attr_height = true;
            x_2959->attr_height = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2989) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_2990 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2990, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4644 == "viewBox") {
            WriteMetric();
            x_2959->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2992) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_2993 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2993, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_attr_viewBox = true;
            x_2959->attr_viewBox = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_2995) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_2996 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2996, x_2959, static_cast<int64_t>(2));
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
        } else if (x_4643 == "properties") {
          std::string x_4645 = x_2966;
          if (x_4645 == "width") {
            WriteMetric();
            x_2959->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_2998) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_2999 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_2999, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_prop_width = true;
            x_2959->prop_width = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3001) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_3002 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3002, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "flex-grow") {
            WriteMetric();
            x_2959->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3004) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3005 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3005, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_prop_flex_grow = true;
            x_2959->prop_flex_grow = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3007) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3008 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3008, x_2959, static_cast<int64_t>(1));
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
            x_2959->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3010) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_3011 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3011, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_prop_height = true;
            x_2959->prop_height = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3013) {
              if (x_2959->meta->bb_0_has_bb_time_table) {
                auto x_3014 = x_2959->meta->bb_0_bb_time_table;
                if (!(x_2959->meta->bb_0_has_bb_dirtied && x_2959->meta->bb_0_bb_dirtied)) {
                  x_2959->meta->bb_0_has_bb_dirtied = true;
                  x_2959->meta->bb_0_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3014, x_2959, static_cast<int64_t>(2));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "display") {
            WriteMetric();
            x_2959->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3016) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3017 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3017, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_prop_display = true;
            x_2959->prop_display = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3019) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3020 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3020, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "position") {
            WriteMetric();
            x_2959->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3022) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3023 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3023, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_prop_position = true;
            x_2959->prop_position = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3025) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3026 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3026, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "flex-shrink") {
            WriteMetric();
            x_2959->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3028) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3029 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3029, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_prop_flex_shrink = true;
            x_2959->prop_flex_shrink = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3031) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3032 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3032, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_4645 == "flex-direction") {
            WriteMetric();
            x_2959->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_3034) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3035 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3035, x_2959, static_cast<int64_t>(1));
                  return MakeUnit();
                } else {
                  return MakeUnit();
                }
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_2959->has_prop_flex_direction = true;
            x_2959->prop_flex_direction = AsDEString(x_2967);
            MetricRecordOverhead(TimedOnly([&](const auto &x_3037) {
              if (x_2959->meta->bb_1_has_bb_time_table) {
                auto x_3038 = x_2959->meta->bb_1_bb_time_table;
                if (!(x_2959->meta->bb_1_has_bb_dirtied && x_2959->meta->bb_1_bb_dirtied)) {
                  x_2959->meta->bb_1_has_bb_dirtied = true;
                  x_2959->meta->bb_1_bb_dirtied = true;
                  MetaWriteMetric();
                  QueueForcePush(x_3038, x_2959, static_cast<int64_t>(1));
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
      [&](const auto &x_2961, const auto &x_2962) {
        return x_2957(x_2962, ListNthExn(x_2959->children, x_2961), x_2960);
      });
}
Unit replace_value_x_2833(const auto &x_2958, const auto &x_2959, const auto &x_2960) {
  return x_2957(x_2958, x_2959, x_2960);
}
Unit x_3040(const auto &x_3041, const auto &x_3042, const auto &x_3043) {
  auto x_3044 = ListHeadExn(x_3041);
  auto x_3045 = ListTailExn(x_3041);
  if (ListIsEmpty(x_3045)) {
    InputChangeMetric(IntAdd(node_size_x_2794(ListNthExn(x_3042->children, x_3044)), node_size_x_2794(x_3043)));
    auto x_3046 = ListSplitN(x_3042->children, x_3044);
    auto x_3047 = Zro(x_3046);
    auto x_3048 = Fst(x_3046);
    auto x_3049 = ListHeadExn(x_3048);
    auto x_3050 = ListTailExn(x_3048);
    x_3042->children = ListAppend(x_3047, x_3050);
    x_3049->meta->alive = false;
    OptionMatch(
        x_3049->prev, [&](const auto &x_3052) { return MakeUnit(); },
        [&](const auto &x_3051) {
          x_3051->next = ToPath(x_3049->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3049->next, [&](const auto &x_3054) { return MakeUnit(); },
        [&](const auto &x_3053) {
          x_3053->prev = ToPath(x_3049->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3047)) {
      x_3042->first = ToPath(ListHead(x_3050));
    }
    if (ListIsEmpty(x_3050)) {
      x_3042->last = ToPath(ListLast(x_3047));
    }
    OptionMatch(
        x_3049->next, [&](const auto &x_3059) { return MakeUnit(); },
        [&](const auto &x_3055) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3056) {
            if (x_3055->meta->bb_1_has_bb_time_table) {
              auto x_3057 = x_3055->meta->bb_1_bb_time_table;
              if (!(x_3055->meta->bb_1_has_bb_dirtied && x_3055->meta->bb_1_bb_dirtied)) {
                x_3055->meta->bb_1_has_bb_dirtied = true;
                x_3055->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3057, x_3055, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3042->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3060) {
        if (x_3042->meta->bb_0_has_bb_time_table) {
          auto x_3061 = x_3042->meta->bb_0_bb_time_table;
          if (!(x_3042->meta->bb_0_has_bb_dirtied && x_3042->meta->bb_0_bb_dirtied)) {
            x_3042->meta->bb_0_has_bb_dirtied = true;
            x_3042->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3061, x_3042, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3050)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3063) {
        if (x_3042->meta->bb_0_has_bb_time_table) {
          auto x_3064 = x_3042->meta->bb_0_bb_time_table;
          if (!(x_3042->meta->bb_0_has_bb_dirtied && x_3042->meta->bb_0_bb_dirtied)) {
            x_3042->meta->bb_0_has_bb_dirtied = true;
            x_3042->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3064, x_3042, static_cast<int64_t>(2));
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
        x_3049->next, [&](const auto &x_3070) { return MakeUnit(); },
        [&](const auto &x_3066) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3067) {
            if (x_3066->meta->bb_0_has_bb_time_table) {
              auto x_3068 = x_3066->meta->bb_0_bb_time_table;
              if (!(x_3066->meta->bb_0_has_bb_dirtied && x_3066->meta->bb_0_bb_dirtied)) {
                x_3066->meta->bb_0_has_bb_dirtied = true;
                x_3066->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3068, x_3066, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3042->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3071) {
        if (x_3042->meta->bb_3_has_bb_time_table) {
          auto x_3072 = x_3042->meta->bb_3_bb_time_table;
          if (!(x_3042->meta->bb_3_has_bb_dirtied && x_3042->meta->bb_3_bb_dirtied)) {
            x_3042->meta->bb_3_has_bb_dirtied = true;
            x_3042->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3072, x_3042, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3050)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3074) {
        if (x_3042->meta->bb_3_has_bb_time_table) {
          auto x_3075 = x_3042->meta->bb_3_bb_time_table;
          if (!(x_3042->meta->bb_3_has_bb_dirtied && x_3042->meta->bb_3_bb_dirtied)) {
            x_3042->meta->bb_3_has_bb_dirtied = true;
            x_3042->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3075, x_3042, static_cast<int64_t>(0));
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
        x_3049->next, [&](const auto &x_3081) { return MakeUnit(); },
        [&](const auto &x_3077) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3078) {
            if (x_3077->meta->bb_3_has_bb_time_table) {
              auto x_3079 = x_3077->meta->bb_3_bb_time_table;
              if (!(x_3077->meta->bb_3_has_bb_dirtied && x_3077->meta->bb_3_bb_dirtied)) {
                x_3077->meta->bb_3_has_bb_dirtied = true;
                x_3077->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3079, x_3077, static_cast<int64_t>(0));
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
    auto x_3082 = ListSplitN(x_3042->children, x_3044);
    auto x_3083 = Zro(x_3082);
    auto x_3084 = Fst(x_3082);
    x_3042->children = ListAppend(x_3083, Cons(x_3043, x_3084));
    if (ListIsEmpty(x_3083)) {
      x_3042->first = x_3043.get();
    }
    if (ListIsEmpty(x_3084)) {
      x_3042->last = x_3043.get();
    }
    OptionMatch(
        ListLast(x_3083),
        [&](const auto &x_3086) {
          x_3043->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3085) {
          x_3043->prev = x_3085.get();
          x_3085->next = x_3043.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3084),
        [&](const auto &x_3088) {
          x_3043->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3087) {
          x_3043->next = x_3087.get();
          x_3087->prev = x_3043.get();
          return MakeUnit();
        });
    x_3043->parent = x_3042.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_3089) {
      auto x_3090 = (x_3043->parent);
      if (x_3090->meta->bb_0_has_bb_time_table) {
        auto x_3095 = OptionMatch(
            x_3043->prev, [&](const auto &x_3094) { return NextTotalOrder(x_3090->meta->bb_1_bb_time_table); },
            [&](const auto &x_3091) {
              if (x_3091->meta->bb_0_has_bb_time_table) {
                auto x_3092 = x_3091->meta->bb_0_bb_time_table;
                return NextTotalOrder(x_3092);
              } else {
                return NextTotalOrder(x_3091->meta->bb_1_bb_time_table);
              }
            });
        x_3043->meta->bb_1_has_bb_dirtied = true;
        x_3043->meta->bb_1_bb_dirtied = true;
        x_3043->meta->bb_1_has_bb_time_table = true;
        x_3043->meta->bb_1_bb_time_table = x_3095;
        MetaWriteMetric();
        QueueForcePush(x_3095, x_3043, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    OptionMatch(
        x_3043->next, [&](const auto &x_3101) { return MakeUnit(); },
        [&](const auto &x_3097) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3098) {
            if (x_3097->meta->bb_1_has_bb_time_table) {
              auto x_3099 = x_3097->meta->bb_1_bb_time_table;
              if (!(x_3097->meta->bb_1_has_bb_dirtied && x_3097->meta->bb_1_bb_dirtied)) {
                x_3097->meta->bb_1_has_bb_dirtied = true;
                x_3097->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3099, x_3097, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsSingleton(x_3042->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3102) {
        if (x_3042->meta->bb_0_has_bb_time_table) {
          auto x_3103 = x_3042->meta->bb_0_bb_time_table;
          if (!(x_3042->meta->bb_0_has_bb_dirtied && x_3042->meta->bb_0_bb_dirtied)) {
            x_3042->meta->bb_0_has_bb_dirtied = true;
            x_3042->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3103, x_3042, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3084)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3105) {
        if (x_3042->meta->bb_0_has_bb_time_table) {
          auto x_3106 = x_3042->meta->bb_0_bb_time_table;
          if (!(x_3042->meta->bb_0_has_bb_dirtied && x_3042->meta->bb_0_bb_dirtied)) {
            x_3042->meta->bb_0_has_bb_dirtied = true;
            x_3042->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3106, x_3042, static_cast<int64_t>(2));
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
        x_3043->next, [&](const auto &x_3112) { return MakeUnit(); },
        [&](const auto &x_3108) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3109) {
            if (x_3108->meta->bb_0_has_bb_time_table) {
              auto x_3110 = x_3108->meta->bb_0_bb_time_table;
              if (!(x_3108->meta->bb_0_has_bb_dirtied && x_3108->meta->bb_0_bb_dirtied)) {
                x_3108->meta->bb_0_has_bb_dirtied = true;
                x_3108->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3110, x_3108, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3113) {
      auto x_3114 = (x_3043->parent);
      if (x_3114->meta->bb_2_has_bb_time_table) {
        auto x_3119 = OptionMatch(
            x_3043->prev, [&](const auto &x_3118) { return NextTotalOrder(x_3114->meta->bb_3_bb_time_table); },
            [&](const auto &x_3115) {
              if (x_3115->meta->bb_2_has_bb_time_table) {
                auto x_3116 = x_3115->meta->bb_2_bb_time_table;
                return NextTotalOrder(x_3116);
              } else {
                return NextTotalOrder(x_3115->meta->bb_3_bb_time_table);
              }
            });
        x_3043->meta->bb_3_has_bb_dirtied = true;
        x_3043->meta->bb_3_bb_dirtied = true;
        x_3043->meta->bb_3_has_bb_time_table = true;
        x_3043->meta->bb_3_bb_time_table = x_3119;
        MetaWriteMetric();
        QueueForcePush(x_3119, x_3043, static_cast<int64_t>(5));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    if (ListIsSingleton(x_3042->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3121) {
        if (x_3042->meta->bb_3_has_bb_time_table) {
          auto x_3122 = x_3042->meta->bb_3_bb_time_table;
          if (!(x_3042->meta->bb_3_has_bb_dirtied && x_3042->meta->bb_3_bb_dirtied)) {
            x_3042->meta->bb_3_has_bb_dirtied = true;
            x_3042->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3122, x_3042, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3084)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3124) {
        if (x_3042->meta->bb_3_has_bb_time_table) {
          auto x_3125 = x_3042->meta->bb_3_bb_time_table;
          if (!(x_3042->meta->bb_3_has_bb_dirtied && x_3042->meta->bb_3_bb_dirtied)) {
            x_3042->meta->bb_3_has_bb_dirtied = true;
            x_3042->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3125, x_3042, static_cast<int64_t>(0));
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
        x_3043->next, [&](const auto &x_3131) { return MakeUnit(); },
        [&](const auto &x_3127) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3128) {
            if (x_3127->meta->bb_3_has_bb_time_table) {
              auto x_3129 = x_3127->meta->bb_3_bb_time_table;
              if (!(x_3127->meta->bb_3_has_bb_dirtied && x_3127->meta->bb_3_bb_dirtied)) {
                x_3127->meta->bb_3_has_bb_dirtied = true;
                x_3127->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3129, x_3127, static_cast<int64_t>(0));
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
    return x_3040(x_3045, ListNthExn(x_3042->children, x_3044), x_3043);
  }
}
Unit replace_node_x_2831(const auto &x_3041, const auto &x_3042, const auto &x_3043) {
  return x_3040(x_3041, x_3042, x_3043);
}
Unit x_3132(const auto &x_3133) {
  ListIter2(x_3133->children, [&](const auto &x_3134, const auto &x_3135) {
    x_3134->parent = x_3133.get();
    x_3135->parent = x_3133.get();
    x_3134->next = x_3135.get();
    x_3135->prev = x_3134.get();
    x_3132(x_3134);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3133->children),
      [&](const auto &x_3137) {
        x_3133->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3136) {
        x_3133->first = x_3136.get();
        x_3136->parent = x_3133.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3133->children),
      [&](const auto &x_3139) {
        x_3133->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3138) {
        x_3133->last = x_3138.get();
        x_3138->parent = x_3133.get();
        x_3132(x_3138);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2829(const auto &x_3133) { return x_3132(x_3133); }
Unit x_3140(const auto &x_3141, const auto &x_3142, const auto &x_3143) {
  auto x_3144 = ListHeadExn(x_3141);
  auto x_3145 = ListTailExn(x_3141);
  if (ListIsEmpty(x_3145)) {
    InputChangeMetric(node_size_x_2794(ListNthExn(x_3142->children, x_3144)));
    auto x_3146 = ListSplitN(x_3142->children, x_3144);
    auto x_3147 = Zro(x_3146);
    auto x_3148 = Fst(x_3146);
    auto x_3149 = ListHeadExn(x_3148);
    auto x_3150 = ListTailExn(x_3148);
    x_3142->children = ListAppend(x_3147, x_3150);
    x_3149->meta->alive = false;
    OptionMatch(
        x_3149->prev, [&](const auto &x_3152) { return MakeUnit(); },
        [&](const auto &x_3151) {
          x_3151->next = ToPath(x_3149->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3149->next, [&](const auto &x_3154) { return MakeUnit(); },
        [&](const auto &x_3153) {
          x_3153->prev = ToPath(x_3149->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3147)) {
      x_3142->first = ToPath(ListHead(x_3150));
    }
    if (ListIsEmpty(x_3150)) {
      x_3142->last = ToPath(ListLast(x_3147));
    }
    OptionMatch(
        x_3149->next, [&](const auto &x_3159) { return MakeUnit(); },
        [&](const auto &x_3155) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3156) {
            if (x_3155->meta->bb_1_has_bb_time_table) {
              auto x_3157 = x_3155->meta->bb_1_bb_time_table;
              if (!(x_3155->meta->bb_1_has_bb_dirtied && x_3155->meta->bb_1_bb_dirtied)) {
                x_3155->meta->bb_1_has_bb_dirtied = true;
                x_3155->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3157, x_3155, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3142->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3160) {
        if (x_3142->meta->bb_0_has_bb_time_table) {
          auto x_3161 = x_3142->meta->bb_0_bb_time_table;
          if (!(x_3142->meta->bb_0_has_bb_dirtied && x_3142->meta->bb_0_bb_dirtied)) {
            x_3142->meta->bb_0_has_bb_dirtied = true;
            x_3142->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3161, x_3142, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3150)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3163) {
        if (x_3142->meta->bb_0_has_bb_time_table) {
          auto x_3164 = x_3142->meta->bb_0_bb_time_table;
          if (!(x_3142->meta->bb_0_has_bb_dirtied && x_3142->meta->bb_0_bb_dirtied)) {
            x_3142->meta->bb_0_has_bb_dirtied = true;
            x_3142->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3164, x_3142, static_cast<int64_t>(2));
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
        x_3149->next, [&](const auto &x_3170) { return MakeUnit(); },
        [&](const auto &x_3166) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3167) {
            if (x_3166->meta->bb_0_has_bb_time_table) {
              auto x_3168 = x_3166->meta->bb_0_bb_time_table;
              if (!(x_3166->meta->bb_0_has_bb_dirtied && x_3166->meta->bb_0_bb_dirtied)) {
                x_3166->meta->bb_0_has_bb_dirtied = true;
                x_3166->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3168, x_3166, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_3142->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3171) {
        if (x_3142->meta->bb_3_has_bb_time_table) {
          auto x_3172 = x_3142->meta->bb_3_bb_time_table;
          if (!(x_3142->meta->bb_3_has_bb_dirtied && x_3142->meta->bb_3_bb_dirtied)) {
            x_3142->meta->bb_3_has_bb_dirtied = true;
            x_3142->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3172, x_3142, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3150)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3174) {
        if (x_3142->meta->bb_3_has_bb_time_table) {
          auto x_3175 = x_3142->meta->bb_3_bb_time_table;
          if (!(x_3142->meta->bb_3_has_bb_dirtied && x_3142->meta->bb_3_bb_dirtied)) {
            x_3142->meta->bb_3_has_bb_dirtied = true;
            x_3142->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3175, x_3142, static_cast<int64_t>(0));
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
        x_3149->next, [&](const auto &x_3181) { return MakeUnit(); },
        [&](const auto &x_3177) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3178) {
            if (x_3177->meta->bb_3_has_bb_time_table) {
              auto x_3179 = x_3177->meta->bb_3_bb_time_table;
              if (!(x_3177->meta->bb_3_has_bb_dirtied && x_3177->meta->bb_3_bb_dirtied)) {
                x_3177->meta->bb_3_has_bb_dirtied = true;
                x_3177->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3179, x_3177, static_cast<int64_t>(0));
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
    return x_3140(x_3145, ListNthExn(x_3142->children, x_3144), x_3143);
  }
}
Unit remove_node_x_2827(const auto &x_3141, const auto &x_3142, const auto &x_3143) {
  return x_3140(x_3141, x_3142, x_3143);
}
Unit eval_stmts_x_2823(const auto &x_3182) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3183) { return MakeUnit(); }));
}
Unit eval_stmts_x_2822(const auto &x_3184) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3185) {
    WriteMetric();
    auto x_3187 = eval_expr_x_3186(x_3184);
    if (x_3184->has_var_width_expr) {
      auto x_3188 = x_3184->var_width_expr;
      if (!EqualValue(x_3188, x_3187)) {
        var_modified_x_3189(x_3184);
      }
    }
    x_3184->has_var_width_expr = true;
    x_3184->var_width_expr = AsDEString(x_3187);
    WriteMetric();
    auto x_3192 = eval_expr_x_3191(x_3184);
    if (x_3184->has_var_is_default_case) {
      auto x_3193 = x_3184->var_is_default_case;
      if (!EqualValue(x_3193, x_3192)) {
        var_modified_x_3194(x_3184);
      }
    }
    x_3184->has_var_is_default_case = true;
    x_3184->var_is_default_case = Asbool(x_3192);
    WriteMetric();
    auto x_3197 = eval_expr_x_3196(x_3184);
    if (x_3184->has_var_intrinsic_width_is_width) {
      auto x_3198 = x_3184->var_intrinsic_width_is_width;
      if (!EqualValue(x_3198, x_3197)) {
        var_modified_x_3199(x_3184);
      }
    }
    x_3184->has_var_intrinsic_width_is_width = true;
    x_3184->var_intrinsic_width_is_width = Asbool(x_3197);
    WriteMetric();
    auto x_3202 = eval_expr_x_3201(x_3184);
    if (x_3184->has_var_children_intrinsic_width) {
      auto x_3203 = x_3184->var_children_intrinsic_width;
      if (!EqualValue(x_3203, x_3202)) {
        var_modified_x_3204(x_3184);
      }
    }
    x_3184->has_var_children_intrinsic_width = true;
    x_3184->var_children_intrinsic_width = Asdouble(x_3202);
    WriteMetric();
    auto x_3207 = eval_expr_x_3206(x_3184);
    if (x_3184->has_var_intrinsic_width_internal) {
      auto x_3208 = x_3184->var_intrinsic_width_internal;
      if (!EqualValue(x_3208, x_3207)) {
        var_modified_x_3209(x_3184);
      }
    }
    x_3184->has_var_intrinsic_width_internal = true;
    x_3184->var_intrinsic_width_internal = Asdouble(x_3207);
    WriteMetric();
    auto x_3212 = eval_expr_x_3211(x_3184);
    if (x_3184->has_var_intrinsic_width_external) {
      auto x_3213 = x_3184->var_intrinsic_width_external;
      if (!EqualValue(x_3213, x_3212)) {
        var_modified_x_3214(x_3184);
      }
    }
    x_3184->has_var_intrinsic_width_external = true;
    x_3184->var_intrinsic_width_external = Asdouble(x_3212);
    WriteMetric();
    auto x_3217 = eval_expr_x_3216(x_3184);
    if (x_3184->has_var_intrinsic_current_line_width) {
      auto x_3218 = x_3184->var_intrinsic_current_line_width;
      if (!EqualValue(x_3218, x_3217)) {
        var_modified_x_3219(x_3184);
      }
    }
    x_3184->has_var_intrinsic_current_line_width = true;
    x_3184->var_intrinsic_current_line_width = Asdouble(x_3217);
    WriteMetric();
    auto x_3222 = eval_expr_x_3221(x_3184);
    if (x_3184->has_var_intrinsic_width_max) {
      auto x_3223 = x_3184->var_intrinsic_width_max;
      if (!EqualValue(x_3223, x_3222)) {
        var_modified_x_3224(x_3184);
      }
    }
    x_3184->has_var_intrinsic_width_max = true;
    x_3184->var_intrinsic_width_max = Asdouble(x_3222);
    WriteMetric();
    auto x_3227 = eval_expr_x_3226(x_3184);
    if (x_3184->has_var_intrinsic_width_sum) {
      auto x_3228 = x_3184->var_intrinsic_width_sum;
      if (!EqualValue(x_3228, x_3227)) {
        var_modified_x_3229(x_3184);
      }
    }
    x_3184->has_var_intrinsic_width_sum = true;
    x_3184->var_intrinsic_width_sum = Asdouble(x_3227);
    WriteMetric();
    auto x_3232 = eval_expr_x_3231(x_3184);
    if (x_3184->has_var_children_intrinsic_height) {
      auto x_3233 = x_3184->var_children_intrinsic_height;
      if (!EqualValue(x_3233, x_3232)) {
        var_modified_x_3234(x_3184);
      }
    }
    x_3184->has_var_children_intrinsic_height = true;
    x_3184->var_children_intrinsic_height = Asdouble(x_3232);
    WriteMetric();
    auto x_3237 = eval_expr_x_3236(x_3184);
    if (x_3184->has_var_height_expr) {
      auto x_3238 = x_3184->var_height_expr;
      if (!EqualValue(x_3238, x_3237)) {
        var_modified_x_3239(x_3184);
      }
    }
    x_3184->has_var_height_expr = true;
    x_3184->var_height_expr = AsDEString(x_3237);
    WriteMetric();
    auto x_3242 = eval_expr_x_3241(x_3184);
    if (x_3184->has_var_intrinsic_height_is_height) {
      auto x_3243 = x_3184->var_intrinsic_height_is_height;
      if (!EqualValue(x_3243, x_3242)) {
        var_modified_x_3244(x_3184);
      }
    }
    x_3184->has_var_intrinsic_height_is_height = true;
    x_3184->var_intrinsic_height_is_height = Asbool(x_3242);
    WriteMetric();
    auto x_3247 = eval_expr_x_3246(x_3184);
    if (x_3184->has_var_intrinsic_height_internal) {
      auto x_3248 = x_3184->var_intrinsic_height_internal;
      if (!EqualValue(x_3248, x_3247)) {
        var_modified_x_3249(x_3184);
      }
    }
    x_3184->has_var_intrinsic_height_internal = true;
    x_3184->var_intrinsic_height_internal = Asdouble(x_3247);
    WriteMetric();
    auto x_3252 = eval_expr_x_3251(x_3184);
    if (x_3184->has_var_intrinsic_height_external) {
      auto x_3253 = x_3184->var_intrinsic_height_external;
      if (!EqualValue(x_3253, x_3252)) {
        var_modified_x_3254(x_3184);
      }
    }
    x_3184->has_var_intrinsic_height_external = true;
    x_3184->var_intrinsic_height_external = Asdouble(x_3252);
    WriteMetric();
    auto x_3257 = eval_expr_x_3256(x_3184);
    if (x_3184->has_var_intrinsic_height_sum) {
      auto x_3258 = x_3184->var_intrinsic_height_sum;
      if (!EqualValue(x_3258, x_3257)) {
        var_modified_x_3259(x_3184);
      }
    }
    x_3184->has_var_intrinsic_height_sum = true;
    x_3184->var_intrinsic_height_sum = Asdouble(x_3257);
    WriteMetric();
    auto x_3262 = eval_expr_x_3261(x_3184);
    if (x_3184->has_var_intrinsic_current_line_height) {
      auto x_3263 = x_3184->var_intrinsic_current_line_height;
      if (!EqualValue(x_3263, x_3262)) {
        var_modified_x_3264(x_3184);
      }
    }
    x_3184->has_var_intrinsic_current_line_height = true;
    x_3184->var_intrinsic_current_line_height = Asdouble(x_3262);
    WriteMetric();
    auto x_3267 = eval_expr_x_3266(x_3184);
    if (x_3184->has_var_finished_intrinsic_height_sum) {
      auto x_3268 = x_3184->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_3268, x_3267)) {
        var_modified_x_3269(x_3184);
      }
    }
    x_3184->has_var_finished_intrinsic_height_sum = true;
    x_3184->var_finished_intrinsic_height_sum = Asdouble(x_3267);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_2821(const auto &x_3271) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3272) {
    WriteMetric();
    auto x_3274 = eval_expr_x_3273(x_3271);
    if (x_3271->has_var_display) {
      auto x_3275 = x_3271->var_display;
      if (!EqualValue(x_3275, x_3274)) {
        var_modified_x_3276(x_3271);
      }
    }
    x_3271->has_var_display = true;
    x_3271->var_display = AsDEString(x_3274);
    WriteMetric();
    auto x_3279 = eval_expr_x_3278(x_3271);
    if (x_3271->has_var_position) {
      auto x_3280 = x_3271->var_position;
      if (!EqualValue(x_3280, x_3279)) {
        var_modified_x_3281(x_3271);
      }
    }
    x_3271->has_var_position = true;
    x_3271->var_position = AsDEString(x_3279);
    WriteMetric();
    auto x_3284 = eval_expr_x_3283(x_3271);
    if (x_3271->has_var_flex_grow) {
      auto x_3285 = x_3271->var_flex_grow;
      if (!EqualValue(x_3285, x_3284)) {
        var_modified_x_3286(x_3271);
      }
    }
    x_3271->has_var_flex_grow = true;
    x_3271->var_flex_grow = Asdouble(x_3284);
    WriteMetric();
    auto x_3289 = eval_expr_x_3288(x_3271);
    if (x_3271->has_var_flex_shrink) {
      auto x_3290 = x_3271->var_flex_shrink;
      if (!EqualValue(x_3290, x_3289)) {
        var_modified_x_3291(x_3271);
      }
    }
    x_3271->has_var_flex_shrink = true;
    x_3271->var_flex_shrink = Asdouble(x_3289);
    WriteMetric();
    auto x_3294 = eval_expr_x_3293(x_3271);
    if (x_3271->has_var_flex_grow_sum) {
      auto x_3295 = x_3271->var_flex_grow_sum;
      if (!EqualValue(x_3295, x_3294)) {
        var_modified_x_3296(x_3271);
      }
    }
    x_3271->has_var_flex_grow_sum = true;
    x_3271->var_flex_grow_sum = Asdouble(x_3294);
    WriteMetric();
    auto x_3299 = eval_expr_x_3298(x_3271);
    if (x_3271->has_var_flex_shrink_sum) {
      auto x_3300 = x_3271->var_flex_shrink_sum;
      if (!EqualValue(x_3300, x_3299)) {
        var_modified_x_3301(x_3271);
      }
    }
    x_3271->has_var_flex_shrink_sum = true;
    x_3271->var_flex_shrink_sum = Asdouble(x_3299);
    WriteMetric();
    auto x_3304 = eval_expr_x_3303(x_3271);
    if (x_3271->has_var_flex_direction) {
      auto x_3305 = x_3271->var_flex_direction;
      if (!EqualValue(x_3305, x_3304)) {
        var_modified_x_3306(x_3271);
      }
    }
    x_3271->has_var_flex_direction = true;
    x_3271->var_flex_direction = AsDEString(x_3304);
    WriteMetric();
    auto x_3309 = eval_expr_x_3308(x_3271);
    if (x_3271->has_var_is_flex_row) {
      auto x_3310 = x_3271->var_is_flex_row;
      if (!EqualValue(x_3310, x_3309)) {
        var_modified_x_3311(x_3271);
      }
    }
    x_3271->has_var_is_flex_row = true;
    x_3271->var_is_flex_row = Asbool(x_3309);
    WriteMetric();
    auto x_3314 = eval_expr_x_3313(x_3271);
    if (x_3271->has_var_is_flex_column) {
      auto x_3315 = x_3271->var_is_flex_column;
      if (!EqualValue(x_3315, x_3314)) {
        var_modified_x_3316(x_3271);
      }
    }
    x_3271->has_var_is_flex_column = true;
    x_3271->var_is_flex_column = Asbool(x_3314);
    WriteMetric();
    auto x_3319 = eval_expr_x_3318(x_3271);
    if (x_3271->has_var_width_attr_expr) {
      auto x_3320 = x_3271->var_width_attr_expr;
      if (!EqualValue(x_3320, x_3319)) {
        var_modified_x_3321(x_3271);
      }
    }
    x_3271->has_var_width_attr_expr = true;
    x_3271->var_width_attr_expr = AsDEString(x_3319);
    WriteMetric();
    auto x_3324 = eval_expr_x_3323(x_3271);
    if (x_3271->has_var_has_width_attr) {
      auto x_3325 = x_3271->var_has_width_attr;
      if (!EqualValue(x_3325, x_3324)) {
        var_modified_x_3326(x_3271);
      }
    }
    x_3271->has_var_has_width_attr = true;
    x_3271->var_has_width_attr = Asbool(x_3324);
    WriteMetric();
    auto x_3329 = eval_expr_x_3328(x_3271);
    if (x_3271->has_var_height_attr_expr) {
      auto x_3330 = x_3271->var_height_attr_expr;
      if (!EqualValue(x_3330, x_3329)) {
        var_modified_x_3331(x_3271);
      }
    }
    x_3271->has_var_height_attr_expr = true;
    x_3271->var_height_attr_expr = AsDEString(x_3329);
    WriteMetric();
    auto x_3334 = eval_expr_x_3333(x_3271);
    if (x_3271->has_var_has_height_attr) {
      auto x_3335 = x_3271->var_has_height_attr;
      if (!EqualValue(x_3335, x_3334)) {
        var_modified_x_3336(x_3271);
      }
    }
    x_3271->has_var_has_height_attr = true;
    x_3271->var_has_height_attr = Asbool(x_3334);
    WriteMetric();
    auto x_3339 = eval_expr_x_3338(x_3271);
    if (x_3271->has_var_is_svg_block) {
      auto x_3340 = x_3271->var_is_svg_block;
      if (!EqualValue(x_3340, x_3339)) {
        var_modified_x_3341(x_3271);
      }
    }
    x_3271->has_var_is_svg_block = true;
    x_3271->var_is_svg_block = Asbool(x_3339);
    WriteMetric();
    auto x_3344 = eval_expr_x_3343(x_3271);
    if (x_3271->has_var_inside_svg) {
      auto x_3345 = x_3271->var_inside_svg;
      if (!EqualValue(x_3345, x_3344)) {
        var_modified_x_3346(x_3271);
      }
    }
    x_3271->has_var_inside_svg = true;
    x_3271->var_inside_svg = Asbool(x_3344);
    WriteMetric();
    auto x_3349 = eval_expr_x_3348(x_3271);
    if (x_3271->has_var_disabled) {
      auto x_3350 = x_3271->var_disabled;
      if (!EqualValue(x_3350, x_3349)) {
        var_modified_x_3351(x_3271);
      }
    }
    x_3271->has_var_disabled = true;
    x_3271->var_disabled = Asbool(x_3349);
    WriteMetric();
    auto x_3354 = eval_expr_x_3353(x_3271);
    if (x_3271->has_var_visible) {
      auto x_3355 = x_3271->var_visible;
      if (!EqualValue(x_3355, x_3354)) {
        var_modified_x_3356(x_3271);
      }
    }
    x_3271->has_var_visible = true;
    x_3271->var_visible = Asbool(x_3354);
    WriteMetric();
    auto x_3359 = eval_expr_x_3358(x_3271);
    if (x_3271->has_var_line_break) {
      auto x_3360 = x_3271->var_line_break;
      if (!EqualValue(x_3360, x_3359)) {
        var_modified_x_3361(x_3271);
      }
    }
    x_3271->has_var_line_break = true;
    x_3271->var_line_break = Asbool(x_3359);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_2820(const auto &x_3363) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3364) {
    WriteMetric();
    auto x_3366 = eval_expr_x_3365(x_3363);
    if (x_3363->has_var_box_width) {
      auto x_3367 = x_3363->var_box_width;
      if (!EqualValue(x_3367, x_3366)) {
        var_modified_x_3368(x_3363);
      }
    }
    x_3363->has_var_box_width = true;
    x_3363->var_box_width = Asdouble(x_3366);
    WriteMetric();
    auto x_3371 = eval_expr_x_3370(x_3363);
    if (x_3363->has_var_box_height) {
      auto x_3372 = x_3363->var_box_height;
      if (!EqualValue(x_3372, x_3371)) {
        var_modified_x_3373(x_3363);
      }
    }
    x_3363->has_var_box_height = true;
    x_3363->var_box_height = Asdouble(x_3371);
    WriteMetric();
    auto x_3376 = eval_expr_x_3375(x_3363);
    if (x_3363->has_var_left_over) {
      auto x_3377 = x_3363->var_left_over;
      if (!EqualValue(x_3377, x_3376)) {
        var_modified_x_3378(x_3363);
      }
    }
    x_3363->has_var_left_over = true;
    x_3363->var_left_over = Asdouble(x_3376);
    WriteMetric();
    auto x_3381 = eval_expr_x_3380(x_3363);
    if (x_3363->has_var_flex_amount) {
      auto x_3382 = x_3363->var_flex_amount;
      if (!EqualValue(x_3382, x_3381)) {
        var_modified_x_3383(x_3363);
      }
    }
    x_3363->has_var_flex_amount = true;
    x_3363->var_flex_amount = Asdouble(x_3381);
    WriteMetric();
    auto x_3386 = eval_expr_x_3385(x_3363);
    if (x_3363->has_var_flex_unit) {
      auto x_3387 = x_3363->var_flex_unit;
      if (!EqualValue(x_3387, x_3386)) {
        var_modified_x_3388(x_3363);
      }
    }
    x_3363->has_var_flex_unit = true;
    x_3363->var_flex_unit = Asdouble(x_3386);
    WriteMetric();
    auto x_3391 = eval_expr_x_3390(x_3363);
    if (x_3363->has_var_x) {
      auto x_3392 = x_3363->var_x;
      if (!EqualValue(x_3392, x_3391)) {
        var_modified_x_3393(x_3363);
      }
    }
    x_3363->has_var_x = true;
    x_3363->var_x = Asdouble(x_3391);
    WriteMetric();
    auto x_3396 = eval_expr_x_3395(x_3363);
    if (x_3363->has_var_width_internal) {
      auto x_3397 = x_3363->var_width_internal;
      if (!EqualValue(x_3397, x_3396)) {
        var_modified_x_3398(x_3363);
      }
    }
    x_3363->has_var_width_internal = true;
    x_3363->var_width_internal = Asdouble(x_3396);
    WriteMetric();
    auto x_3401 = eval_expr_x_3400(x_3363);
    if (x_3363->has_var_width_external) {
      auto x_3402 = x_3363->var_width_external;
      if (!EqualValue(x_3402, x_3401)) {
        var_modified_x_3403(x_3363);
      }
    }
    x_3363->has_var_width_external = true;
    x_3363->var_width_external = Asdouble(x_3401);
    WriteMetric();
    auto x_3406 = eval_expr_x_3405(x_3363);
    if (x_3363->has_var_y) {
      auto x_3407 = x_3363->var_y;
      if (!EqualValue(x_3407, x_3406)) {
        var_modified_x_3408(x_3363);
      }
    }
    x_3363->has_var_y = true;
    x_3363->var_y = Asdouble(x_3406);
    WriteMetric();
    auto x_3411 = eval_expr_x_3410(x_3363);
    if (x_3363->has_var_height_internal) {
      auto x_3412 = x_3363->var_height_internal;
      if (!EqualValue(x_3412, x_3411)) {
        var_modified_x_3413(x_3363);
      }
    }
    x_3363->has_var_height_internal = true;
    x_3363->var_height_internal = Asdouble(x_3411);
    WriteMetric();
    auto x_3416 = eval_expr_x_3415(x_3363);
    if (x_3363->has_var_height_external) {
      auto x_3417 = x_3363->var_height_external;
      if (!EqualValue(x_3417, x_3416)) {
        var_modified_x_3418(x_3363);
      }
    }
    x_3363->has_var_height_external = true;
    x_3363->var_height_external = Asdouble(x_3416);
    WriteMetric();
    auto x_3421 = eval_expr_x_3420(x_3363);
    if (x_3363->has_var_line_height) {
      auto x_3422 = x_3363->var_line_height;
      if (!EqualValue(x_3422, x_3421)) {
        var_modified_x_3423(x_3363);
      }
    }
    x_3363->has_var_line_height = true;
    x_3363->var_line_height = Asdouble(x_3421);
    return MakeUnit();
  }));
}
Unit x_3425(const auto &x_3426, const auto &x_3427, const auto &x_3428) {
  auto x_3429 = ListHeadExn(x_3426);
  auto x_3430 = ListTailExn(x_3426);
  if (ListIsEmpty(x_3430)) {
    InputChangeMetric(node_size_x_2794(x_3428));
    auto x_3431 = ListSplitN(x_3427->children, x_3429);
    auto x_3432 = Zro(x_3431);
    auto x_3433 = Fst(x_3431);
    x_3427->children = ListAppend(x_3432, Cons(x_3428, x_3433));
    if (ListIsEmpty(x_3432)) {
      x_3427->first = x_3428.get();
    }
    if (ListIsEmpty(x_3433)) {
      x_3427->last = x_3428.get();
    }
    OptionMatch(
        ListLast(x_3432),
        [&](const auto &x_3435) {
          x_3428->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3434) {
          x_3428->prev = x_3434.get();
          x_3434->next = x_3428.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3433),
        [&](const auto &x_3437) {
          x_3428->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3436) {
          x_3428->next = x_3436.get();
          x_3436->prev = x_3428.get();
          return MakeUnit();
        });
    x_3428->parent = x_3427.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_3438) {
      auto x_3439 = (x_3428->parent);
      if (x_3439->meta->bb_0_has_bb_time_table) {
        auto x_3444 = OptionMatch(
            x_3428->prev, [&](const auto &x_3443) { return NextTotalOrder(x_3439->meta->bb_1_bb_time_table); },
            [&](const auto &x_3440) {
              if (x_3440->meta->bb_0_has_bb_time_table) {
                auto x_3441 = x_3440->meta->bb_0_bb_time_table;
                return NextTotalOrder(x_3441);
              } else {
                return NextTotalOrder(x_3440->meta->bb_1_bb_time_table);
              }
            });
        x_3428->meta->bb_1_has_bb_dirtied = true;
        x_3428->meta->bb_1_bb_dirtied = true;
        x_3428->meta->bb_1_has_bb_time_table = true;
        x_3428->meta->bb_1_bb_time_table = x_3444;
        MetaWriteMetric();
        QueueForcePush(x_3444, x_3428, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    OptionMatch(
        x_3428->next, [&](const auto &x_3450) { return MakeUnit(); },
        [&](const auto &x_3446) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3447) {
            if (x_3446->meta->bb_1_has_bb_time_table) {
              auto x_3448 = x_3446->meta->bb_1_bb_time_table;
              if (!(x_3446->meta->bb_1_has_bb_dirtied && x_3446->meta->bb_1_bb_dirtied)) {
                x_3446->meta->bb_1_has_bb_dirtied = true;
                x_3446->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3448, x_3446, static_cast<int64_t>(1));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsSingleton(x_3427->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3451) {
        if (x_3427->meta->bb_0_has_bb_time_table) {
          auto x_3452 = x_3427->meta->bb_0_bb_time_table;
          if (!(x_3427->meta->bb_0_has_bb_dirtied && x_3427->meta->bb_0_bb_dirtied)) {
            x_3427->meta->bb_0_has_bb_dirtied = true;
            x_3427->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3452, x_3427, static_cast<int64_t>(2));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3433)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3454) {
        if (x_3427->meta->bb_0_has_bb_time_table) {
          auto x_3455 = x_3427->meta->bb_0_bb_time_table;
          if (!(x_3427->meta->bb_0_has_bb_dirtied && x_3427->meta->bb_0_bb_dirtied)) {
            x_3427->meta->bb_0_has_bb_dirtied = true;
            x_3427->meta->bb_0_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3455, x_3427, static_cast<int64_t>(2));
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
        x_3428->next, [&](const auto &x_3461) { return MakeUnit(); },
        [&](const auto &x_3457) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3458) {
            if (x_3457->meta->bb_0_has_bb_time_table) {
              auto x_3459 = x_3457->meta->bb_0_bb_time_table;
              if (!(x_3457->meta->bb_0_has_bb_dirtied && x_3457->meta->bb_0_bb_dirtied)) {
                x_3457->meta->bb_0_has_bb_dirtied = true;
                x_3457->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3459, x_3457, static_cast<int64_t>(2));
                return MakeUnit();
              } else {
                return MakeUnit();
              }
            } else {
              return MakeUnit();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3462) {
      auto x_3463 = (x_3428->parent);
      if (x_3463->meta->bb_2_has_bb_time_table) {
        auto x_3468 = OptionMatch(
            x_3428->prev, [&](const auto &x_3467) { return NextTotalOrder(x_3463->meta->bb_3_bb_time_table); },
            [&](const auto &x_3464) {
              if (x_3464->meta->bb_2_has_bb_time_table) {
                auto x_3465 = x_3464->meta->bb_2_bb_time_table;
                return NextTotalOrder(x_3465);
              } else {
                return NextTotalOrder(x_3464->meta->bb_3_bb_time_table);
              }
            });
        x_3428->meta->bb_3_has_bb_dirtied = true;
        x_3428->meta->bb_3_bb_dirtied = true;
        x_3428->meta->bb_3_has_bb_time_table = true;
        x_3428->meta->bb_3_bb_time_table = x_3468;
        MetaWriteMetric();
        QueueForcePush(x_3468, x_3428, static_cast<int64_t>(5));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    }));
    if (ListIsSingleton(x_3427->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3470) {
        if (x_3427->meta->bb_3_has_bb_time_table) {
          auto x_3471 = x_3427->meta->bb_3_bb_time_table;
          if (!(x_3427->meta->bb_3_has_bb_dirtied && x_3427->meta->bb_3_bb_dirtied)) {
            x_3427->meta->bb_3_has_bb_dirtied = true;
            x_3427->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3471, x_3427, static_cast<int64_t>(0));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_3433)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_3473) {
        if (x_3427->meta->bb_3_has_bb_time_table) {
          auto x_3474 = x_3427->meta->bb_3_bb_time_table;
          if (!(x_3427->meta->bb_3_has_bb_dirtied && x_3427->meta->bb_3_bb_dirtied)) {
            x_3427->meta->bb_3_has_bb_dirtied = true;
            x_3427->meta->bb_3_bb_dirtied = true;
            MetaWriteMetric();
            QueueForcePush(x_3474, x_3427, static_cast<int64_t>(0));
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
        x_3428->next, [&](const auto &x_3480) { return MakeUnit(); },
        [&](const auto &x_3476) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_3477) {
            if (x_3476->meta->bb_3_has_bb_time_table) {
              auto x_3478 = x_3476->meta->bb_3_bb_time_table;
              if (!(x_3476->meta->bb_3_has_bb_dirtied && x_3476->meta->bb_3_bb_dirtied)) {
                x_3476->meta->bb_3_has_bb_dirtied = true;
                x_3476->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3478, x_3476, static_cast<int64_t>(0));
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
    return x_3425(x_3430, ListNthExn(x_3427->children, x_3429), x_3428);
  }
}
Unit add_node_x_2815(const auto &x_3426, const auto &x_3427, const auto &x_3428) {
  return x_3425(x_3426, x_3427, x_3428);
}
Unit x_3481(const auto &x_3482) {
  ListIter2(x_3482->children, [&](const auto &x_3483, const auto &x_3484) {
    x_3483->parent = x_3482.get();
    x_3484->parent = x_3482.get();
    x_3483->next = x_3484.get();
    x_3484->prev = x_3483.get();
    x_3481(x_3483);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3482->children),
      [&](const auto &x_3486) {
        x_3482->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3485) {
        x_3482->first = x_3485.get();
        x_3485->parent = x_3482.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3482->children),
      [&](const auto &x_3488) {
        x_3482->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3487) {
        x_3482->last = x_3487.get();
        x_3487->parent = x_3482.get();
        x_3481(x_3487);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2813(const auto &x_3482) { return x_3481(x_3482); }
Unit eval_stmts_x_2809(const auto &x_3489) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3490) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_3491) {
      x_3489->meta->bb_3_has_bb_time_table = true;
      x_3489->meta->bb_3_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2820(x_3489);
      x_3489->meta->bb_3_has_bb_dirtied = true;
      x_3489->meta->bb_3_bb_dirtied = false;
      return MakeUnit();
    }));
    ListIter(x_3489->children, [&](const auto &x_3492) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3493) { return eval_stmts_x_2809(x_3492); }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3494) {
      x_3489->meta->bb_2_has_bb_time_table = true;
      x_3489->meta->bb_2_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2823(x_3489);
      x_3489->meta->bb_2_has_bb_dirtied = true;
      x_3489->meta->bb_2_bb_dirtied = false;
      return MakeUnit();
    }));
    return MakeUnit();
  }));
}
Unit eval_stmts_x_2807(const auto &x_3495) {
  return MetricRecordEval(TimedOnly([&](const auto &x_3496) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_3497) {
      x_3495->meta->bb_1_has_bb_time_table = true;
      x_3495->meta->bb_1_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2821(x_3495);
      x_3495->meta->bb_1_has_bb_dirtied = true;
      x_3495->meta->bb_1_bb_dirtied = false;
      return MakeUnit();
    }));
    ListIter(x_3495->children, [&](const auto &x_3498) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_3499) { return eval_stmts_x_2807(x_3498); }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_3500) {
      x_3495->meta->bb_0_has_bb_time_table = true;
      x_3495->meta->bb_0_bb_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_2822(x_3495);
      x_3495->meta->bb_0_has_bb_dirtied = true;
      x_3495->meta->bb_0_bb_dirtied = false;
      return MakeUnit();
    }));
    return MakeUnit();
  }));
}
Unit x_3501(const auto &x_3502) {
  ListIter2(x_3502->children, [&](const auto &x_3503, const auto &x_3504) {
    x_3503->parent = x_3502.get();
    x_3504->parent = x_3502.get();
    x_3503->next = x_3504.get();
    x_3504->prev = x_3503.get();
    x_3501(x_3503);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3502->children),
      [&](const auto &x_3506) {
        x_3502->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3505) {
        x_3502->first = x_3505.get();
        x_3505->parent = x_3502.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3502->children),
      [&](const auto &x_3508) {
        x_3502->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3507) {
        x_3502->last = x_3507.get();
        x_3507->parent = x_3502.get();
        x_3501(x_3507);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2803(const auto &x_3502) { return x_3501(x_3502); }
int64_t x_3509(const auto &x_3510) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3510->children, [&](const auto &x_3511) { return x_3509(x_3511); }));
}
int64_t node_size_x_2794(const auto &x_3510) { return x_3509(x_3510); }
int64_t x_3512(const auto &x_3513) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3513->children, [&](const auto &x_3514) { return x_3512(x_3514); }));
}
int64_t layout_size_x_2793(const auto &x_3513) { return x_3512(x_3513); }
LayoutNode x_3515(const auto &x_3516) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_3516)), [&](const auto &x_3517) { return x_3515(x_3517); }));
}
LayoutNode json_to_layout_node_x_2792(const auto &x_3516) { return x_3515(x_3516); }
Node x_3518(const auto &x_3519) {
  return MakeNode(x_3519->name, x_3519->attr, x_3519->prop, x_3519->extern_id,
                  ListMap(x_3519->children, [&](const auto &x_3520) { return x_3518(x_3520); }));
}
Node node_to_fs_node_x_2791(const auto &x_3519) { return x_3518(x_3519); }
Node x_3521(const auto &x_3522) {
  return MakeNode(
      JsonToString(JsonMember("name", x_3522)), JsonToDict(JsonMember("attributes", x_3522)),
      JsonToDict(JsonMember("properties", x_3522)), JsonToInt(JsonMember("id", x_3522)),
      ListMap(JsonToList(JsonMember("children", x_3522)), [&](const auto &x_3523) { return x_3521(x_3523); }));
}
Node json_to_node_aux_x_2790(const auto &x_3522) { return x_3521(x_3522); }
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
        auto x_4646 = FreshJson();
        WriteJson(x_4646, "name", "PQ_D");
        WriteJson(x_4646, "diff_num", ReadRef(x_2797));
        WriteJson(x_4646, "read_count", MetricReadCount());
        WriteJson(x_4646, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_4646, "write_count", MetricWriteCount());
        WriteJson(x_4646, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_4646, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_4646, "input_change_count", MetricInputChangeCount());
        WriteJson(x_4646, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_4646, "overhead_time", MetricOverheadCount());
        WriteJson(x_4646, "eval_time", MetricEvalCount());
        WriteJson(x_4646, "html", "");
        WriteJson(x_4646, "command", StackToList(x_2801));
        return x_4646;
      }());
      OutputString(x_2795, "\n");
      ClearStack(x_2801);
      WriteRef(x_2797, IntAdd(ReadRef(x_2797), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_2796, [&](const auto &x_2810) {
        auto x_2811 = JsonOfString(x_2810);
        PushStack(x_2801, x_2811);
        std::string x_4648 = JsonToString(JsonMember("name", x_2811));
        if (x_4648 == "add") {
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
        } else if (x_4648 == "recalculate") {
          MetricRecordOverhead(TimedOnly([&](const auto &x_2816) {
            while (!QueueIsEmpty()) {
              auto x_2817 = QueuePop();
              auto x_2818 = Zro(x_2817);
              auto x_2819 = Fst(x_2817);
              MetaReadMetric();
              MetricQueueSize(QueueSize());
              if (x_2819.n->meta->alive) {
                [&]() {
                  auto x_4649 = x_2819.rf;
                  if (x_4649 == 0) {
                    eval_stmts_x_2820(x_2819.n);
                    x_2819.n->meta->bb_3_has_bb_dirtied = true;
                    x_2819.n->meta->bb_3_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4649 == 1) {
                    eval_stmts_x_2821(x_2819.n);
                    x_2819.n->meta->bb_1_has_bb_dirtied = true;
                    x_2819.n->meta->bb_1_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4649 == 2) {
                    eval_stmts_x_2822(x_2819.n);
                    x_2819.n->meta->bb_0_has_bb_dirtied = true;
                    x_2819.n->meta->bb_0_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4649 == 3) {
                    eval_stmts_x_2823(x_2819.n);
                    x_2819.n->meta->bb_2_has_bb_dirtied = true;
                    x_2819.n->meta->bb_2_bb_dirtied = false;
                    return MakeUnit();
                  } else if (x_4649 == 4) {
                    auto x_2824 = ReadRef(current_time);
                    WriteRef(current_time, x_2818);
                    eval_stmts_x_2807(x_2819.n);
                    WriteRef(current_time, x_2824);
                    return MakeUnit();
                  } else if (x_4649 == 5) {
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
              MakeUnit();
            }
            return MakeUnit();
          }));
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
          return MakeUnit();
        } else if (x_4648 == "remove") {
          return remove_node_x_2827(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2826) { return JsonToInt(x_2826); }),
              x_2804, MakeUnit());
        } else if (x_4648 == "replace") {
          return replace_node_x_2831(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2830) { return JsonToInt(x_2830); }),
              x_2804, [&]() {
                auto x_2828 = json_to_node_aux_x_2790(JsonMember("node", x_2811));
                x_2828->parent = nullptr;
                x_2828->prev = nullptr;
                x_2828->next = nullptr;
                set_children_relation_x_2829(x_2828);
                return x_2828;
              }());
        } else if (x_4648 == "replace_value") {
          return replace_value_x_2833(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2832) { return JsonToInt(x_2832); }),
              x_2804,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2811)), JsonToString(JsonMember("key", x_2811))),
                       JsonToValue(JsonMember("value", x_2811))));
        } else if (x_4648 == "delete_value") {
          return delete_value_x_2835(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2834) { return JsonToInt(x_2834); }),
              x_2804, MakePair(JsonToString(JsonMember("type", x_2811)), JsonToString(JsonMember("key", x_2811))));
        } else if (x_4648 == "insert_value") {
          return insert_value_x_2837(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2836) { return JsonToInt(x_2836); }),
              x_2804,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2811)), JsonToString(JsonMember("key", x_2811))),
                       JsonToValue(JsonMember("value", x_2811))));
        } else if (x_4648 == "layout_remove") {
          return remove_layout_node_x_2839(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2838) { return JsonToInt(x_2838); }),
              x_2805, MakeUnit());
        } else if (x_4648 == "layout_add") {
          return add_layout_node_x_2841(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2840) { return JsonToInt(x_2840); }),
              x_2805, json_to_layout_node_x_2792(JsonMember("node", x_2811)));
        } else if (x_4648 == "layout_replace") {
          return replace_layout_node_x_2843(
              ListMap(JsonToList(JsonMember("path", x_2811)), [&](const auto &x_2842) { return JsonToInt(x_2842); }),
              x_2805, json_to_layout_node_x_2792(JsonMember("node", x_2811)));
        } else if (x_4648 == "layout_info_changed") {
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