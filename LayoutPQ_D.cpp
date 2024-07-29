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
Unit var_modified_x_4390(const auto &x_4392);
auto eval_expr_x_4387(const auto &x_4414);
Unit var_modified_x_4385(const auto &x_4491);
auto eval_expr_x_4382(const auto &x_4497);
Unit var_modified_x_4380(const auto &x_4514);
auto eval_expr_x_4377(const auto &x_4528);
Unit var_modified_x_4375(const auto &x_4533);
auto eval_expr_x_4372(const auto &x_4547);
Unit var_modified_x_4370(const auto &x_4556);
auto eval_expr_x_4367(const auto &x_4562);
Unit var_modified_x_4365(const auto &x_4563);
auto eval_expr_x_4362(const auto &x_4569);
Unit var_modified_x_4360(const auto &x_4574);
auto eval_expr_x_4357(const auto &x_4584);
Unit var_modified_x_4355(const auto &x_4595);
auto eval_expr_x_4352(const auto &x_4601);
Unit var_modified_x_4350(const auto &x_4606);
auto eval_expr_x_4347(const auto &x_4616);
Unit var_modified_x_4345(const auto &x_4627);
auto eval_expr_x_4342(const auto &x_4637);
Unit var_modified_x_4340(const auto &x_4662);
auto eval_expr_x_4337(const auto &x_4676);
Unit var_modified_x_4335(const auto &x_4701);
auto eval_expr_x_4332(const auto &x_4707);
Unit var_modified_x_4330(const auto &x_4710);
auto eval_expr_x_4327(const auto &x_4722);
Unit var_modified_x_4325(const auto &x_4731);
auto eval_expr_x_4322(const auto &x_4743);
Unit var_modified_x_4320(const auto &x_4752);
auto eval_expr_x_4317(const auto &x_4762);
Unit var_modified_x_4315(const auto &x_4765);
auto eval_expr_x_4312(const auto &x_4775);
Unit var_modified_x_4310(const auto &x_4778);
auto eval_expr_x_4307(const auto &x_4792);
Unit var_modified_x_4305(const auto &x_4795);
auto eval_expr_x_4302(const auto &x_4809);
Unit var_modified_x_4298(const auto &x_4812);
auto eval_expr_x_4295(const auto &x_4826);
Unit var_modified_x_4293(const auto &x_4855);
auto eval_expr_x_4290(const auto &x_4869);
Unit var_modified_x_4288(const auto &x_4882);
auto eval_expr_x_4285(const auto &x_4896);
Unit var_modified_x_4283(const auto &x_4905);
auto eval_expr_x_4280(const auto &x_4911);
Unit var_modified_x_4278(const auto &x_4920);
auto eval_expr_x_4275(const auto &x_4930);
Unit var_modified_x_4273(const auto &x_5075);
auto eval_expr_x_4270(const auto &x_5081);
Unit var_modified_x_4268(const auto &x_5130);
auto eval_expr_x_4265(const auto &x_5140);
Unit var_modified_x_4263(const auto &x_5143);
auto eval_expr_x_4260(const auto &x_5149);
Unit var_modified_x_4258(const auto &x_5158);
auto eval_expr_x_4255(const auto &x_5172);
Unit var_modified_x_4253(const auto &x_5181);
auto eval_expr_x_4250(const auto &x_5195);
Unit var_modified_x_4248(const auto &x_5204);
auto eval_expr_x_4245(const auto &x_5216);
Unit var_modified_x_4243(const auto &x_5229);
auto eval_expr_x_4240(const auto &x_5235);
Unit var_modified_x_4238(const auto &x_5244);
auto eval_expr_x_4235(const auto &x_5254);
Unit var_modified_x_4233(const auto &x_5407);
auto eval_expr_x_4230(const auto &x_5413);
Unit var_modified_x_4228(const auto &x_5418);
auto eval_expr_x_4225(const auto &x_5424);
Unit var_modified_x_4223(const auto &x_5473);
auto eval_expr_x_4220(const auto &x_5479);
Unit var_modified_x_4218(const auto &x_5492);
auto eval_expr_x_4215(const auto &x_5502);
Unit var_modified_x_4211(const auto &x_5505);
auto eval_expr_x_4208(const auto &x_5513);
Unit var_modified_x_4206(const auto &x_5530);
auto eval_expr_x_4203(const auto &x_5536);
Unit var_modified_x_4201(const auto &x_5545);
auto eval_expr_x_4198(const auto &x_5555);
Unit var_modified_x_4196(const auto &x_5608);
auto eval_expr_x_4193(const auto &x_5620);
Unit var_modified_x_4191(const auto &x_5645);
auto eval_expr_x_4188(const auto &x_5653);
Unit var_modified_x_4186(const auto &x_5662);
auto eval_expr_x_4183(const auto &x_5672);
Unit var_modified_x_4181(const auto &x_5725);
auto eval_expr_x_4178(const auto &x_5737);
Unit var_modified_x_4176(const auto &x_5758);
auto eval_expr_x_4173(const auto &x_5764);
Unit var_modified_x_4171(const auto &x_5785);
auto eval_expr_x_4168(const auto &x_5791);
Unit var_modified_x_4166(const auto &x_5804);
auto eval_expr_x_4163(const auto &x_5814);
Unit var_modified_x_4161(const auto &x_5835);
auto eval_expr_x_4158(const auto &x_5841);
Unit var_modified_x_4156(const auto &x_5846);
auto eval_expr_x_4153(const auto &x_5852);
Unit eval_stmts_x_4053(const auto &x_4151);
Unit eval_stmts_x_4052(const auto &x_4213);
Unit eval_stmts_x_4051(const auto &x_4300);
Unit x_3712(const auto &x_3713, const auto &x_3714, const auto &x_3715);
Unit x_3719(const auto &x_3720, const auto &x_3721, const auto &x_3722);
Unit x_3726(const auto &x_3727, const auto &x_3728, const auto &x_3729);
Unit x_3733(const auto &x_3734, const auto &x_3735, const auto &x_3736);
Unit x_3780(const auto &x_3781, const auto &x_3782, const auto &x_3783);
Unit x_3825(const auto &x_3826, const auto &x_3827, const auto &x_3828);
Unit x_3908(const auto &x_3909, const auto &x_3910, const auto &x_3911);
Unit x_3996(const auto &x_3997);
Unit x_4004(const auto &x_4005, const auto &x_4006, const auto &x_4007);
Unit x_4046(const auto &x_4047);
Unit x_4057(const auto &x_4058, const auto &x_4059, const auto &x_4060);
Unit x_4109(const auto &x_4110);
Unit eval_stmts_x_3685(const auto &x_4117);
Unit eval_stmts_x_3683(const auto &x_4122);
Unit x_4128(const auto &x_4129);
int64_t x_4136(const auto &x_4137);
int64_t x_4139(const auto &x_4140);
LayoutNode x_4142(const auto &x_4143);
Node x_4145(const auto &x_4146);
Node x_4148(const auto &x_4149);
Unit var_modified_x_4390(const auto &x_4392) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4393) {
    auto x_5857 = [&](const auto &x_4394) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4395) {
        if (x_4394->meta->bb_0_has_bb_time_table) {
          auto x_4396 = x_4394->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4396, x_4394, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5857(x_4392);
    MakeUnit();
    auto x_5858 = [&](const auto &x_4400) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4401) {
        if (x_4400->meta->bb_0_has_bb_time_table) {
          auto x_4402 = x_4400->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4402, x_4400, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4392->next, [&](const auto &x_4399) { return MakeUnit(); },
        [&](const auto &x_4398) {
          auto x_5861 = x_5858;
          x_5861(x_4398);
          return MakeUnit();
        });
    auto x_5859 = [&](const auto &x_4404) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4405) {
        if (x_4404->meta->bb_2_has_bb_time_table) {
          auto x_4406 = x_4404->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4406, x_4404, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5859(x_4392);
    MakeUnit();
    auto x_5860 = [&](const auto &x_4410) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4411) {
        if (x_4410->meta->bb_2_has_bb_time_table) {
          auto x_4412 = x_4410->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4412, x_4410, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4392->next, [&](const auto &x_4409) { return MakeUnit(); },
        [&](const auto &x_4408) {
          auto x_5862 = x_5860;
          x_5862(x_4408);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4387(const auto &x_4414) {
  if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_4414->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_4414->parent != nullptr) &&
          (eq((x_4414->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_4414->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_4414->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_4414->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_4414->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_4385(const auto &x_4491) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4492) {
    ListIter(x_4491->children, [&](const auto &x_4493) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4494) {
        if (x_4493->meta->bb_1_has_bb_time_table) {
          auto x_4495 = x_4493->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4495, x_4493, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4382(const auto &x_4497) {
  return (((!(x_4497->parent != nullptr)) || (x_4497->parent)->var_visible) &&
          (neq(x_4497->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_4497->var_inside_svg) && (!x_4497->var_disabled))));
}
Unit var_modified_x_4380(const auto &x_4514) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4515) {
    auto x_5863 = [&](const auto &x_4516) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4517) {
        if (x_4516->meta->bb_1_has_bb_time_table) {
          auto x_4518 = x_4516->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4518, x_4516, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5863(x_4514);
    MakeUnit();
    ListIter(x_4514->children, [&](const auto &x_4520) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4521) {
        if (x_4520->meta->bb_1_has_bb_time_table) {
          auto x_4522 = x_4520->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4522, x_4520, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5864 = [&](const auto &x_4524) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4525) {
        if (x_4524->meta->bb_0_has_bb_time_table) {
          auto x_4526 = x_4524->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4526, x_4524, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5864(x_4514);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4377(const auto &x_4528) {
  if (eq(x_4528->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_4528->parent != nullptr) && (x_4528->parent)->var_disabled);
  }
}
Unit var_modified_x_4375(const auto &x_4533) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4534) {
    auto x_5865 = [&](const auto &x_4535) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4536) {
        if (x_4535->meta->bb_1_has_bb_time_table) {
          auto x_4537 = x_4535->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4537, x_4535, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5865(x_4533);
    MakeUnit();
    ListIter(x_4533->children, [&](const auto &x_4539) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4540) {
        if (x_4539->meta->bb_1_has_bb_time_table) {
          auto x_4541 = x_4539->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4541, x_4539, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5866 = [&](const auto &x_4543) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4544) {
        if (x_4543->meta->bb_0_has_bb_time_table) {
          auto x_4545 = x_4543->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4545, x_4543, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5866(x_4533);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4372(const auto &x_4547) {
  return ((x_4547->parent != nullptr) && ((x_4547->parent)->var_is_svg_block || (x_4547->parent)->var_inside_svg));
}
Unit var_modified_x_4370(const auto &x_4556) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4557) {
    ListIter(x_4556->children, [&](const auto &x_4558) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4559) {
        if (x_4558->meta->bb_1_has_bb_time_table) {
          auto x_4560 = x_4558->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4560, x_4558, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4367(const auto &x_4562) { return eq(x_4562->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_4365(const auto &x_4563) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4564) {
    auto x_5867 = [&](const auto &x_4565) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4566) {
        if (x_4565->meta->bb_0_has_bb_time_table) {
          auto x_4567 = x_4565->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4567, x_4565, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5867(x_4563);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4362(const auto &x_4569) {
  return neq(x_4569->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4360(const auto &x_4574) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4575) {
    auto x_5868 = [&](const auto &x_4576) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4577) {
        if (x_4576->meta->bb_1_has_bb_time_table) {
          auto x_4578 = x_4576->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4578, x_4576, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5868(x_4574);
    MakeUnit();
    auto x_5869 = [&](const auto &x_4580) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4581) {
        if (x_4580->meta->bb_0_has_bb_time_table) {
          auto x_4582 = x_4580->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4582, x_4580, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5869(x_4574);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4357(const auto &x_4584) {
  if (!x_4584->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4584->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_4584->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4584->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4355(const auto &x_4595) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4596) {
    auto x_5870 = [&](const auto &x_4597) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4598) {
        if (x_4597->meta->bb_0_has_bb_time_table) {
          auto x_4599 = x_4597->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4599, x_4597, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5870(x_4595);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4352(const auto &x_4601) {
  return neq(x_4601->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4350(const auto &x_4606) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4607) {
    auto x_5871 = [&](const auto &x_4608) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4609) {
        if (x_4608->meta->bb_1_has_bb_time_table) {
          auto x_4610 = x_4608->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4610, x_4608, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5871(x_4606);
    MakeUnit();
    auto x_5872 = [&](const auto &x_4612) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4613) {
        if (x_4612->meta->bb_0_has_bb_time_table) {
          auto x_4614 = x_4612->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4614, x_4612, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5872(x_4606);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4347(const auto &x_4616) {
  if (!x_4616->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4616->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_4616->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4616->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4345(const auto &x_4627) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4628) {
    ListIter(x_4627->children, [&](const auto &x_4629) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4630) {
        if (x_4629->meta->bb_0_has_bb_time_table) {
          auto x_4631 = x_4629->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4631, x_4629, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    ListIter(x_4627->children, [&](const auto &x_4633) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4634) {
        if (x_4633->meta->bb_2_has_bb_time_table) {
          auto x_4635 = x_4633->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4635, x_4633, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4342(const auto &x_4637) {
  if ((x_4637->parent != nullptr) &&
      (eq((x_4637->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4637->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4637->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_4637->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4340(const auto &x_4662) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4663) {
    ListIter(x_4662->children, [&](const auto &x_4664) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4665) {
        if (x_4664->meta->bb_0_has_bb_time_table) {
          auto x_4666 = x_4664->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4666, x_4664, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5873 = [&](const auto &x_4668) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4669) {
        if (x_4668->meta->bb_2_has_bb_time_table) {
          auto x_4670 = x_4668->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4670, x_4668, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5873(x_4662);
    MakeUnit();
    ListIter(x_4662->children, [&](const auto &x_4672) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4673) {
        if (x_4672->meta->bb_2_has_bb_time_table) {
          auto x_4674 = x_4672->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4674, x_4672, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4337(const auto &x_4676) {
  if ((x_4676->parent != nullptr) &&
      (eq((x_4676->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4676->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4676->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4335(const auto &x_4701) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4702) {
    ListIter(x_4701->children, [&](const auto &x_4703) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4704) {
        if (x_4703->meta->bb_1_has_bb_time_table) {
          auto x_4705 = x_4703->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4705, x_4703, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4332(const auto &x_4707) {
  if (x_4707->has_prop_flex_direction) {
    return x_4707->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_4330(const auto &x_4710) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4711) {
    auto x_5874 = [&](const auto &x_4714) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4715) {
        if (x_4714->meta->bb_1_has_bb_time_table) {
          auto x_4716 = x_4714->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4716, x_4714, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4710->next, [&](const auto &x_4713) { return MakeUnit(); },
        [&](const auto &x_4712) {
          auto x_5876 = x_5874;
          x_5876(x_4712);
          return MakeUnit();
        });
    auto x_5875 = [&](const auto &x_4718) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4719) {
        if (x_4718->meta->bb_2_has_bb_time_table) {
          auto x_4720 = x_4718->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4720, x_4718, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5875(x_4710);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4327(const auto &x_4722) {
  return plus((x_4722->prev != nullptr) ? ((x_4722->prev)->var_flex_shrink_sum) : (0.), x_4722->var_flex_shrink);
}
Unit var_modified_x_4325(const auto &x_4731) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4732) {
    auto x_5877 = [&](const auto &x_4735) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4736) {
        if (x_4735->meta->bb_1_has_bb_time_table) {
          auto x_4737 = x_4735->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4737, x_4735, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4731->next, [&](const auto &x_4734) { return MakeUnit(); },
        [&](const auto &x_4733) {
          auto x_5879 = x_5877;
          x_5879(x_4733);
          return MakeUnit();
        });
    auto x_5878 = [&](const auto &x_4739) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4740) {
        if (x_4739->meta->bb_2_has_bb_time_table) {
          auto x_4741 = x_4739->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4741, x_4739, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5878(x_4731);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4322(const auto &x_4743) {
  return plus((x_4743->prev != nullptr) ? ((x_4743->prev)->var_flex_grow_sum) : (0.), x_4743->var_flex_grow);
}
Unit var_modified_x_4320(const auto &x_4752) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4753) {
    auto x_5880 = [&](const auto &x_4754) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4755) {
        if (x_4754->meta->bb_1_has_bb_time_table) {
          auto x_4756 = x_4754->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4756, x_4754, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5880(x_4752);
    MakeUnit();
    auto x_5881 = [&](const auto &x_4758) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4759) {
        if (x_4758->meta->bb_2_has_bb_time_table) {
          auto x_4760 = x_4758->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4760, x_4758, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5881(x_4752);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4317(const auto &x_4762) {
  if (x_4762->has_prop_flex_shrink) {
    return (x_4762->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4315(const auto &x_4765) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4766) {
    auto x_5882 = [&](const auto &x_4767) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4768) {
        if (x_4767->meta->bb_1_has_bb_time_table) {
          auto x_4769 = x_4767->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4769, x_4767, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5882(x_4765);
    MakeUnit();
    auto x_5883 = [&](const auto &x_4771) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4772) {
        if (x_4771->meta->bb_2_has_bb_time_table) {
          auto x_4773 = x_4771->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4773, x_4771, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5883(x_4765);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4312(const auto &x_4775) {
  if (x_4775->has_prop_flex_grow) {
    return (x_4775->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4310(const auto &x_4778) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4779) {
    auto x_5884 = [&](const auto &x_4780) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4781) {
        if (x_4780->meta->bb_1_has_bb_time_table) {
          auto x_4782 = x_4780->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4782, x_4780, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5884(x_4778);
    MakeUnit();
    auto x_5885 = [&](const auto &x_4784) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4785) {
        if (x_4784->meta->bb_0_has_bb_time_table) {
          auto x_4786 = x_4784->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4786, x_4784, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5885(x_4778);
    MakeUnit();
    auto x_5886 = [&](const auto &x_4788) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4789) {
        if (x_4788->meta->bb_2_has_bb_time_table) {
          auto x_4790 = x_4788->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4790, x_4788, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5886(x_4778);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4307(const auto &x_4792) {
  if (x_4792->has_prop_position) {
    return x_4792->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_4305(const auto &x_4795) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4796) {
    auto x_5887 = [&](const auto &x_4797) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4798) {
        if (x_4797->meta->bb_1_has_bb_time_table) {
          auto x_4799 = x_4797->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4799, x_4797, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5887(x_4795);
    MakeUnit();
    ListIter(x_4795->children, [&](const auto &x_4801) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4802) {
        if (x_4801->meta->bb_1_has_bb_time_table) {
          auto x_4803 = x_4801->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4803, x_4801, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5888 = [&](const auto &x_4805) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4806) {
        if (x_4805->meta->bb_0_has_bb_time_table) {
          auto x_4807 = x_4805->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4807, x_4805, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5888(x_4795);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4302(const auto &x_4809) {
  if (x_4809->has_prop_display) {
    return x_4809->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_4298(const auto &x_4812) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4813) {
    auto x_5889 = [&](const auto &x_4816) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4817) {
        if (x_4816->meta->bb_0_has_bb_time_table) {
          auto x_4818 = x_4816->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4818, x_4816, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4812->next == nullptr) {
      auto x_5891 = x_5889;
      OptionMatch(
          x_4812->parent, [&](const auto &x_4815) { return MakeUnit(); },
          [&](const auto &x_4814) {
            auto x_5893 = x_5891;
            x_5893(x_4814);
            return MakeUnit();
          });
    }
    auto x_5890 = [&](const auto &x_4822) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4823) {
        if (x_4822->meta->bb_0_has_bb_time_table) {
          auto x_4824 = x_4822->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4824, x_4822, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4812->next, [&](const auto &x_4821) { return MakeUnit(); },
        [&](const auto &x_4820) {
          auto x_5892 = x_5890;
          x_5892(x_4820);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4295(const auto &x_4826) {
  if (x_4826->prev != nullptr) {
    if (x_4826->var_line_break) {
      return plus((x_4826->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4826->prev)->var_intrinsic_current_line_height, x_4826->var_intrinsic_height_external));
    } else {
      return (x_4826->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4826->var_line_break) {
      return x_4826->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4293(const auto &x_4855) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4856) {
    auto x_5894 = [&](const auto &x_4859) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4860) {
        if (x_4859->meta->bb_0_has_bb_time_table) {
          auto x_4861 = x_4859->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4861, x_4859, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4855->next == nullptr) {
      auto x_5896 = x_5894;
      OptionMatch(
          x_4855->parent, [&](const auto &x_4858) { return MakeUnit(); },
          [&](const auto &x_4857) {
            auto x_5898 = x_5896;
            x_5898(x_4857);
            return MakeUnit();
          });
    }
    auto x_5895 = [&](const auto &x_4865) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4866) {
        if (x_4865->meta->bb_0_has_bb_time_table) {
          auto x_4867 = x_4865->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4867, x_4865, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4855->next, [&](const auto &x_4864) { return MakeUnit(); },
        [&](const auto &x_4863) {
          auto x_5897 = x_5895;
          x_5897(x_4863);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4290(const auto &x_4869) {
  if (x_4869->var_line_break) {
    return 0.;
  } else {
    return max(x_4869->var_intrinsic_height_external,
               (x_4869->prev != nullptr) ? ((x_4869->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4288(const auto &x_4882) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4883) {
    auto x_5899 = [&](const auto &x_4886) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4887) {
        if (x_4886->meta->bb_0_has_bb_time_table) {
          auto x_4888 = x_4886->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4888, x_4886, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4882->next, [&](const auto &x_4885) { return MakeUnit(); },
        [&](const auto &x_4884) {
          auto x_5901 = x_5899;
          x_5901(x_4884);
          return MakeUnit();
        });
    auto x_5900 = [&](const auto &x_4892) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4893) {
        if (x_4892->meta->bb_2_has_bb_time_table) {
          auto x_4894 = x_4892->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4894, x_4892, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4882->next == nullptr) {
      auto x_5902 = x_5900;
      OptionMatch(
          x_4882->parent, [&](const auto &x_4891) { return MakeUnit(); },
          [&](const auto &x_4890) {
            auto x_5903 = x_5902;
            x_5903(x_4890);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4285(const auto &x_4896) {
  return plus((x_4896->prev != nullptr) ? ((x_4896->prev)->var_intrinsic_height_sum) : (0.),
              x_4896->var_intrinsic_height_external);
}
Unit var_modified_x_4283(const auto &x_4905) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4906) {
    auto x_5904 = [&](const auto &x_4907) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4908) {
        if (x_4907->meta->bb_0_has_bb_time_table) {
          auto x_4909 = x_4907->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4909, x_4907, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5904(x_4905);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4280(const auto &x_4911) {
  if (eq(x_4911->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4911->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4278(const auto &x_4920) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4921) {
    auto x_5905 = [&](const auto &x_4922) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4923) {
        if (x_4922->meta->bb_0_has_bb_time_table) {
          auto x_4924 = x_4922->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4924, x_4922, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5905(x_4920);
    MakeUnit();
    auto x_5906 = [&](const auto &x_4926) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4927) {
        if (x_4926->meta->bb_2_has_bb_time_table) {
          auto x_4928 = x_4926->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4928, x_4926, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5906(x_4920);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4275(const auto &x_4930) {
  if (eq(x_4930->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4930->var_inside_svg) {
      return 0.;
    } else {
      if (x_4930->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4930->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4930->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_4930->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_4930->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4930->var_height_expr.r.a0;
          } else {
            if (x_4930->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_4930->var_height_expr.r.a0;
            } else {
              return x_4930->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_4930->var_children_intrinsic_height,
              (eq(x_4930->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_4930->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4930->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4930->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_4930->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4930->var_has_height_attr &&
                                                  (x_4930->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4930->var_height_attr_expr.r.a0)
                                                     : ((x_4930->has_attr_viewBox)
                                                            ? (x_4930->attr_viewBox.r.a3)
                                                            : (mult((x_4930->attr_viewBox.r.a3),
                                                                    divide(x_4930->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4930->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4930->var_has_height_attr)
                                                            ? (x_4930->var_height_attr_expr.r.a0)
                                                            : ((x_4930->has_attr_image_height &&
                                                                (!x_4930->var_has_width_attr))
                                                                   ? (int_to_float(x_4930->attr_image_height))
                                                                   : ((neq(x_4930->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4930->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4930->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_4930->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_4930->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_4930->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4273(const auto &x_5075) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5076) {
    auto x_5907 = [&](const auto &x_5077) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5078) {
        if (x_5077->meta->bb_2_has_bb_time_table) {
          auto x_5079 = x_5077->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5079, x_5077, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5907(x_5075);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4270(const auto &x_5081) {
  if (eq(x_5081->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5081->var_inside_svg || x_5081->var_disabled)) {
    return true;
  } else {
    if ((x_5081->parent != nullptr) && (x_5081->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_5081->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5081->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5081->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5081->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_5081->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4268(const auto &x_5130) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5131) {
    auto x_5908 = [&](const auto &x_5132) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5133) {
        if (x_5132->meta->bb_0_has_bb_time_table) {
          auto x_5134 = x_5132->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5134, x_5132, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5908(x_5130);
    MakeUnit();
    auto x_5909 = [&](const auto &x_5136) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5137) {
        if (x_5136->meta->bb_2_has_bb_time_table) {
          auto x_5138 = x_5136->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5138, x_5136, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5909(x_5130);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4265(const auto &x_5140) {
  if (x_5140->has_prop_height) {
    return x_5140->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4263(const auto &x_5143) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5144) {
    auto x_5910 = [&](const auto &x_5145) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5146) {
        if (x_5145->meta->bb_0_has_bb_time_table) {
          auto x_5147 = x_5145->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5147, x_5145, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5910(x_5143);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4260(const auto &x_5149) {
  if (x_5149->last != nullptr) {
    return plus((x_5149->last)->var_finished_intrinsic_height_sum, (x_5149->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4258(const auto &x_5158) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5159) {
    auto x_5911 = [&](const auto &x_5162) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5163) {
        if (x_5162->meta->bb_0_has_bb_time_table) {
          auto x_5164 = x_5162->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5164, x_5162, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5158->next, [&](const auto &x_5161) { return MakeUnit(); },
        [&](const auto &x_5160) {
          auto x_5913 = x_5911;
          x_5913(x_5160);
          return MakeUnit();
        });
    auto x_5912 = [&](const auto &x_5168) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5169) {
        if (x_5168->meta->bb_2_has_bb_time_table) {
          auto x_5170 = x_5168->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5170, x_5168, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_5158->next == nullptr) {
      auto x_5914 = x_5912;
      OptionMatch(
          x_5158->parent, [&](const auto &x_5167) { return MakeUnit(); },
          [&](const auto &x_5166) {
            auto x_5915 = x_5914;
            x_5915(x_5166);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4255(const auto &x_5172) {
  return plus((x_5172->prev != nullptr) ? ((x_5172->prev)->var_intrinsic_width_sum) : (0.),
              x_5172->var_intrinsic_width_external);
}
Unit var_modified_x_4253(const auto &x_5181) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5182) {
    auto x_5916 = [&](const auto &x_5185) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5186) {
        if (x_5185->meta->bb_0_has_bb_time_table) {
          auto x_5187 = x_5185->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5187, x_5185, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_5181->next == nullptr) {
      auto x_5918 = x_5916;
      OptionMatch(
          x_5181->parent, [&](const auto &x_5184) { return MakeUnit(); },
          [&](const auto &x_5183) {
            auto x_5920 = x_5918;
            x_5920(x_5183);
            return MakeUnit();
          });
    }
    auto x_5917 = [&](const auto &x_5191) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5192) {
        if (x_5191->meta->bb_0_has_bb_time_table) {
          auto x_5193 = x_5191->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5193, x_5191, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5181->next, [&](const auto &x_5190) { return MakeUnit(); },
        [&](const auto &x_5189) {
          auto x_5919 = x_5917;
          x_5919(x_5189);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4250(const auto &x_5195) {
  return max(x_5195->var_intrinsic_current_line_width,
             (x_5195->prev != nullptr) ? ((x_5195->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4248(const auto &x_5204) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5205) {
    auto x_5921 = [&](const auto &x_5206) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5207) {
        if (x_5206->meta->bb_0_has_bb_time_table) {
          auto x_5208 = x_5206->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5208, x_5206, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5921(x_5204);
    MakeUnit();
    auto x_5922 = [&](const auto &x_5212) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5213) {
        if (x_5212->meta->bb_0_has_bb_time_table) {
          auto x_5214 = x_5212->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5214, x_5212, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5204->next, [&](const auto &x_5211) { return MakeUnit(); },
        [&](const auto &x_5210) {
          auto x_5923 = x_5922;
          x_5923(x_5210);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4245(const auto &x_5216) {
  return plus(x_5216->var_intrinsic_width_external,
              ((x_5216->prev != nullptr) && (!(x_5216->prev)->var_line_break))
                  ? ((x_5216->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_4243(const auto &x_5229) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5230) {
    auto x_5924 = [&](const auto &x_5231) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5232) {
        if (x_5231->meta->bb_0_has_bb_time_table) {
          auto x_5233 = x_5231->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5233, x_5231, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5924(x_5229);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4240(const auto &x_5235) {
  if (eq(x_5235->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5235->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_4238(const auto &x_5244) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5245) {
    auto x_5925 = [&](const auto &x_5246) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5247) {
        if (x_5246->meta->bb_0_has_bb_time_table) {
          auto x_5248 = x_5246->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5248, x_5246, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5925(x_5244);
    MakeUnit();
    auto x_5926 = [&](const auto &x_5250) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5251) {
        if (x_5250->meta->bb_2_has_bb_time_table) {
          auto x_5252 = x_5250->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5252, x_5250, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5926(x_5244);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4235(const auto &x_5254) {
  if (eq(x_5254->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_5254->var_inside_svg) {
      return 0.;
    } else {
      if (x_5254->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5254->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_5254->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_5254->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_5254->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_5254->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_5254->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_5254->var_width_expr.r.a0;
          } else {
            return x_5254->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_5254->var_children_intrinsic_width,
              (eq(x_5254->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_5254->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5254->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_5254->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_5254->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_5254->var_has_width_attr &&
                                                  (x_5254->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_5254->var_width_attr_expr.r.a0)
                                                     : (((!x_5254->var_has_width_attr) && x_5254->has_attr_viewBox)
                                                            ? (x_5254->attr_viewBox.r.a2)
                                                            : (mult((x_5254->attr_viewBox.r.a2),
                                                                    divide(x_5254->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_5254->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_5254->var_has_width_attr)
                                                            ? (x_5254->var_width_attr_expr.r.a0)
                                                            : ((x_5254->has_attr_image_width &&
                                                                (!x_5254->var_has_height_attr))
                                                                   ? (int_to_float(x_5254->attr_image_width))
                                                                   : ((neq(x_5254->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_5254->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_5254->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_5254->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_5254->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_5254->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4233(const auto &x_5407) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5408) {
    auto x_5927 = [&](const auto &x_5409) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5410) {
        if (x_5409->meta->bb_0_has_bb_time_table) {
          auto x_5411 = x_5409->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5411, x_5409, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5927(x_5407);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4230(const auto &x_5413) {
  if (x_5413->last != nullptr) {
    return (x_5413->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_4228(const auto &x_5418) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5419) {
    auto x_5928 = [&](const auto &x_5420) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5421) {
        if (x_5420->meta->bb_2_has_bb_time_table) {
          auto x_5422 = x_5420->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5422, x_5420, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5928(x_5418);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4225(const auto &x_5424) {
  if (eq(x_5424->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5424->var_inside_svg || x_5424->var_disabled)) {
    return true;
  } else {
    if ((x_5424->parent != nullptr) && (x_5424->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5424->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5424->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5424->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5424->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_5424->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4223(const auto &x_5473) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5474) {
    auto x_5929 = [&](const auto &x_5475) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5476) {
        if (x_5475->meta->bb_0_has_bb_time_table) {
          auto x_5477 = x_5475->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5477, x_5475, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5929(x_5473);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4220(const auto &x_5479) {
  if (eq(x_5479->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_5479->var_inside_svg) {
      return true;
    } else {
      if (x_5479->var_disabled) {
        return true;
      } else {if ( eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_5479->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_4218(const auto &x_5492) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5493) {
    auto x_5930 = [&](const auto &x_5494) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5495) {
        if (x_5494->meta->bb_0_has_bb_time_table) {
          auto x_5496 = x_5494->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5496, x_5494, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5930(x_5492);
    MakeUnit();
    auto x_5931 = [&](const auto &x_5498) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5499) {
        if (x_5498->meta->bb_2_has_bb_time_table) {
          auto x_5500 = x_5498->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5500, x_5498, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5931(x_5492);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4215(const auto &x_5502) {
  if (x_5502->has_prop_width) {
    return x_5502->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4211(const auto &x_5505) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5506) {
    auto x_5932 = [&](const auto &x_5509) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5510) {
        if (x_5509->meta->bb_2_has_bb_time_table) {
          auto x_5511 = x_5509->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5511, x_5509, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5505->next, [&](const auto &x_5508) { return MakeUnit(); },
        [&](const auto &x_5507) {
          auto x_5933 = x_5932;
          x_5933(x_5507);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4208(const auto &x_5513) {
  if ((x_5513->prev != nullptr) && (!(x_5513->prev)->var_line_break)) {
    return max(x_5513->var_height_external, (x_5513->prev)->var_line_height);
  } else {
    return x_5513->var_height_external;
  }
}
Unit var_modified_x_4206(const auto &x_5530) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5531) {
    auto x_5934 = [&](const auto &x_5532) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5533) {
        if (x_5532->meta->bb_2_has_bb_time_table) {
          auto x_5534 = x_5532->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5534, x_5532, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5934(x_5530);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4203(const auto &x_5536) {
  if (eq(x_5536->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5536->var_height_internal;
  }
}
Unit var_modified_x_4201(const auto &x_5545) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5546) {
    auto x_5935 = [&](const auto &x_5547) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5548) {
        if (x_5547->meta->bb_2_has_bb_time_table) {
          auto x_5549 = x_5547->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5549, x_5547, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5935(x_5545);
    MakeUnit();
    ListIter(x_5545->children, [&](const auto &x_5551) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5552) {
        if (x_5551->meta->bb_2_has_bb_time_table) {
          auto x_5553 = x_5551->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5553, x_5551, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4198(const auto &x_5555) {
  if (x_5555->var_intrinsic_height_is_height) {
    return x_5555->var_intrinsic_height_internal;
  } else {
    if ((x_5555->parent != nullptr) && (x_5555->parent)->var_is_flex_column) {
      return plus(x_5555->var_intrinsic_height_internal,
                  mult(x_5555->var_flex_amount, (x_5555->parent)->var_flex_unit));
    } else {
      if (x_5555->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5555->var_box_height, divide(x_5555->var_height_expr.r.a0, 100.));
      } else {
        return max(x_5555->var_box_height, x_5555->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_4196(const auto &x_5608) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5609) {
    ListIter(x_5608->children, [&](const auto &x_5610) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5611) {
        if (x_5610->meta->bb_2_has_bb_time_table) {
          auto x_5612 = x_5610->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5612, x_5610, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5936 = [&](const auto &x_5616) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5617) {
        if (x_5616->meta->bb_2_has_bb_time_table) {
          auto x_5618 = x_5616->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5618, x_5616, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5608->next, [&](const auto &x_5615) { return MakeUnit(); },
        [&](const auto &x_5614) {
          auto x_5937 = x_5936;
          x_5937(x_5614);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4193(const auto &x_5620) {
  if (x_5620->prev != nullptr) {
    if (x_5620->var_line_break || (x_5620->prev)->var_line_break) {
      return plus((x_5620->prev)->var_y, (x_5620->prev)->var_line_height);
    } else {
      return (x_5620->prev)->var_y;
    }
  } else {
    if (x_5620->parent != nullptr) {
      return (x_5620->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4191(const auto &x_5645) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5646) {
    auto x_5938 = [&](const auto &x_5649) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5650) {
        if (x_5649->meta->bb_2_has_bb_time_table) {
          auto x_5651 = x_5649->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5651, x_5649, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5645->next, [&](const auto &x_5648) { return MakeUnit(); },
        [&](const auto &x_5647) {
          auto x_5939 = x_5938;
          x_5939(x_5647);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4188(const auto &x_5653) {
  if (eq(x_5653->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5653->var_width_internal;
  }
}
Unit var_modified_x_4186(const auto &x_5662) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5663) {
    auto x_5940 = [&](const auto &x_5664) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5665) {
        if (x_5664->meta->bb_2_has_bb_time_table) {
          auto x_5666 = x_5664->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5666, x_5664, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5940(x_5662);
    MakeUnit();
    ListIter(x_5662->children, [&](const auto &x_5668) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5669) {
        if (x_5668->meta->bb_2_has_bb_time_table) {
          auto x_5670 = x_5668->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5670, x_5668, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4183(const auto &x_5672) {
  if (x_5672->var_intrinsic_width_is_width) {
    return x_5672->var_intrinsic_width_internal;
  } else {
    if ((x_5672->parent != nullptr) && (x_5672->parent)->var_is_flex_row) {
      return plus(x_5672->var_intrinsic_width_internal, mult(x_5672->var_flex_amount, (x_5672->parent)->var_flex_unit));
    } else {
      if (x_5672->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5672->var_box_width, divide(x_5672->var_width_expr.r.a0, 100.));
      } else {
        return max(x_5672->var_box_width, x_5672->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_4181(const auto &x_5725) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5726) {
    ListIter(x_5725->children, [&](const auto &x_5727) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5728) {
        if (x_5727->meta->bb_2_has_bb_time_table) {
          auto x_5729 = x_5727->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5729, x_5727, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5941 = [&](const auto &x_5733) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5734) {
        if (x_5733->meta->bb_2_has_bb_time_table) {
          auto x_5735 = x_5733->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5735, x_5733, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5725->next, [&](const auto &x_5732) { return MakeUnit(); },
        [&](const auto &x_5731) {
          auto x_5942 = x_5941;
          x_5942(x_5731);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4178(const auto &x_5737) {
  if (x_5737->prev != nullptr) {
    if (x_5737->var_line_break || (x_5737->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_5737->prev)->var_x, (x_5737->prev)->var_width_external);
    }
  } else {
    if (x_5737->parent != nullptr) {
      return (x_5737->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4176(const auto &x_5758) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5759) {
    ListIter(x_5758->children, [&](const auto &x_5760) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5761) {
        if (x_5760->meta->bb_2_has_bb_time_table) {
          auto x_5762 = x_5760->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5762, x_5760, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4173(const auto &x_5764) {
  if (gt(x_5764->var_left_over, 0.)) {
    return divide(x_5764->var_left_over, x_5764->var_flex_grow_sum);
  } else {
    return divide(x_5764->var_left_over, x_5764->var_flex_shrink_sum);
  }
}
Unit var_modified_x_4171(const auto &x_5785) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5786) {
    auto x_5943 = [&](const auto &x_5787) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5788) {
        if (x_5787->meta->bb_2_has_bb_time_table) {
          auto x_5789 = x_5787->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5789, x_5787, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5943(x_5785);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4168(const auto &x_5791) {
  if ((x_5791->parent != nullptr) && gt((x_5791->parent)->var_left_over, 0.)) {
    return x_5791->var_flex_grow;
  } else {
    return x_5791->var_flex_shrink;
  }
}
Unit var_modified_x_4166(const auto &x_5804) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5805) {
    auto x_5944 = [&](const auto &x_5806) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5807) {
        if (x_5806->meta->bb_2_has_bb_time_table) {
          auto x_5808 = x_5806->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5808, x_5806, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5944(x_5804);
    MakeUnit();
    ListIter(x_5804->children, [&](const auto &x_5810) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5811) {
        if (x_5810->meta->bb_2_has_bb_time_table) {
          auto x_5812 = x_5810->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5812, x_5810, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4163(const auto &x_5814) {
  if (x_5814->var_is_flex_row) {
    return minus(x_5814->var_box_width, (x_5814->last != nullptr) ? ((x_5814->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_5814->var_box_height, (x_5814->last != nullptr) ? ((x_5814->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_4161(const auto &x_5835) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5836) {
    auto x_5945 = [&](const auto &x_5837) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5838) {
        if (x_5837->meta->bb_2_has_bb_time_table) {
          auto x_5839 = x_5837->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5839, x_5837, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5945(x_5835);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4158(const auto &x_5841) {
  if (x_5841->parent != nullptr) {
    return (x_5841->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_4156(const auto &x_5846) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5847) {
    auto x_5946 = [&](const auto &x_5848) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5849) {
        if (x_5848->meta->bb_2_has_bb_time_table) {
          auto x_5850 = x_5848->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_5850, x_5848, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5946(x_5846);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4153(const auto &x_5852) {
  if (x_5852->parent != nullptr) {
    return (x_5852->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_4053(const auto &x_4151) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4152) {
    WriteMetric();
    auto x_4154 = eval_expr_x_4153(x_4151);
    if (x_4151->has_var_box_width) {
      auto x_4155 = x_4151->var_box_width;
      if (!EqualValue(x_4155, x_4154)) {
        var_modified_x_4156(x_4151);
      }
    }
    x_4151->has_var_box_width = true;
    x_4151->var_box_width = Asdouble(x_4154);
    WriteMetric();
    auto x_4159 = eval_expr_x_4158(x_4151);
    if (x_4151->has_var_box_height) {
      auto x_4160 = x_4151->var_box_height;
      if (!EqualValue(x_4160, x_4159)) {
        var_modified_x_4161(x_4151);
      }
    }
    x_4151->has_var_box_height = true;
    x_4151->var_box_height = Asdouble(x_4159);
    WriteMetric();
    auto x_4164 = eval_expr_x_4163(x_4151);
    if (x_4151->has_var_left_over) {
      auto x_4165 = x_4151->var_left_over;
      if (!EqualValue(x_4165, x_4164)) {
        var_modified_x_4166(x_4151);
      }
    }
    x_4151->has_var_left_over = true;
    x_4151->var_left_over = Asdouble(x_4164);
    WriteMetric();
    auto x_4169 = eval_expr_x_4168(x_4151);
    if (x_4151->has_var_flex_amount) {
      auto x_4170 = x_4151->var_flex_amount;
      if (!EqualValue(x_4170, x_4169)) {
        var_modified_x_4171(x_4151);
      }
    }
    x_4151->has_var_flex_amount = true;
    x_4151->var_flex_amount = Asdouble(x_4169);
    WriteMetric();
    auto x_4174 = eval_expr_x_4173(x_4151);
    if (x_4151->has_var_flex_unit) {
      auto x_4175 = x_4151->var_flex_unit;
      if (!EqualValue(x_4175, x_4174)) {
        var_modified_x_4176(x_4151);
      }
    }
    x_4151->has_var_flex_unit = true;
    x_4151->var_flex_unit = Asdouble(x_4174);
    WriteMetric();
    auto x_4179 = eval_expr_x_4178(x_4151);
    if (x_4151->has_var_x) {
      auto x_4180 = x_4151->var_x;
      if (!EqualValue(x_4180, x_4179)) {
        var_modified_x_4181(x_4151);
      }
    }
    x_4151->has_var_x = true;
    x_4151->var_x = Asdouble(x_4179);
    WriteMetric();
    auto x_4184 = eval_expr_x_4183(x_4151);
    if (x_4151->has_var_width_internal) {
      auto x_4185 = x_4151->var_width_internal;
      if (!EqualValue(x_4185, x_4184)) {
        var_modified_x_4186(x_4151);
      }
    }
    x_4151->has_var_width_internal = true;
    x_4151->var_width_internal = Asdouble(x_4184);
    WriteMetric();
    auto x_4189 = eval_expr_x_4188(x_4151);
    if (x_4151->has_var_width_external) {
      auto x_4190 = x_4151->var_width_external;
      if (!EqualValue(x_4190, x_4189)) {
        var_modified_x_4191(x_4151);
      }
    }
    x_4151->has_var_width_external = true;
    x_4151->var_width_external = Asdouble(x_4189);
    WriteMetric();
    auto x_4194 = eval_expr_x_4193(x_4151);
    if (x_4151->has_var_y) {
      auto x_4195 = x_4151->var_y;
      if (!EqualValue(x_4195, x_4194)) {
        var_modified_x_4196(x_4151);
      }
    }
    x_4151->has_var_y = true;
    x_4151->var_y = Asdouble(x_4194);
    WriteMetric();
    auto x_4199 = eval_expr_x_4198(x_4151);
    if (x_4151->has_var_height_internal) {
      auto x_4200 = x_4151->var_height_internal;
      if (!EqualValue(x_4200, x_4199)) {
        var_modified_x_4201(x_4151);
      }
    }
    x_4151->has_var_height_internal = true;
    x_4151->var_height_internal = Asdouble(x_4199);
    WriteMetric();
    auto x_4204 = eval_expr_x_4203(x_4151);
    if (x_4151->has_var_height_external) {
      auto x_4205 = x_4151->var_height_external;
      if (!EqualValue(x_4205, x_4204)) {
        var_modified_x_4206(x_4151);
      }
    }
    x_4151->has_var_height_external = true;
    x_4151->var_height_external = Asdouble(x_4204);
    WriteMetric();
    auto x_4209 = eval_expr_x_4208(x_4151);
    if (x_4151->has_var_line_height) {
      auto x_4210 = x_4151->var_line_height;
      if (!EqualValue(x_4210, x_4209)) {
        var_modified_x_4211(x_4151);
      }
    }
    x_4151->has_var_line_height = true;
    x_4151->var_line_height = Asdouble(x_4209);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4052(const auto &x_4213) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4214) {
    WriteMetric();
    auto x_4216 = eval_expr_x_4215(x_4213);
    if (x_4213->has_var_width_expr) {
      auto x_4217 = x_4213->var_width_expr;
      if (!EqualValue(x_4217, x_4216)) {
        var_modified_x_4218(x_4213);
      }
    }
    x_4213->has_var_width_expr = true;
    x_4213->var_width_expr = AsDEString(x_4216);
    WriteMetric();
    auto x_4221 = eval_expr_x_4220(x_4213);
    if (x_4213->has_var_is_default_case) {
      auto x_4222 = x_4213->var_is_default_case;
      if (!EqualValue(x_4222, x_4221)) {
        var_modified_x_4223(x_4213);
      }
    }
    x_4213->has_var_is_default_case = true;
    x_4213->var_is_default_case = Asbool(x_4221);
    WriteMetric();
    auto x_4226 = eval_expr_x_4225(x_4213);
    if (x_4213->has_var_intrinsic_width_is_width) {
      auto x_4227 = x_4213->var_intrinsic_width_is_width;
      if (!EqualValue(x_4227, x_4226)) {
        var_modified_x_4228(x_4213);
      }
    }
    x_4213->has_var_intrinsic_width_is_width = true;
    x_4213->var_intrinsic_width_is_width = Asbool(x_4226);
    WriteMetric();
    auto x_4231 = eval_expr_x_4230(x_4213);
    if (x_4213->has_var_children_intrinsic_width) {
      auto x_4232 = x_4213->var_children_intrinsic_width;
      if (!EqualValue(x_4232, x_4231)) {
        var_modified_x_4233(x_4213);
      }
    }
    x_4213->has_var_children_intrinsic_width = true;
    x_4213->var_children_intrinsic_width = Asdouble(x_4231);
    WriteMetric();
    auto x_4236 = eval_expr_x_4235(x_4213);
    if (x_4213->has_var_intrinsic_width_internal) {
      auto x_4237 = x_4213->var_intrinsic_width_internal;
      if (!EqualValue(x_4237, x_4236)) {
        var_modified_x_4238(x_4213);
      }
    }
    x_4213->has_var_intrinsic_width_internal = true;
    x_4213->var_intrinsic_width_internal = Asdouble(x_4236);
    WriteMetric();
    auto x_4241 = eval_expr_x_4240(x_4213);
    if (x_4213->has_var_intrinsic_width_external) {
      auto x_4242 = x_4213->var_intrinsic_width_external;
      if (!EqualValue(x_4242, x_4241)) {
        var_modified_x_4243(x_4213);
      }
    }
    x_4213->has_var_intrinsic_width_external = true;
    x_4213->var_intrinsic_width_external = Asdouble(x_4241);
    WriteMetric();
    auto x_4246 = eval_expr_x_4245(x_4213);
    if (x_4213->has_var_intrinsic_current_line_width) {
      auto x_4247 = x_4213->var_intrinsic_current_line_width;
      if (!EqualValue(x_4247, x_4246)) {
        var_modified_x_4248(x_4213);
      }
    }
    x_4213->has_var_intrinsic_current_line_width = true;
    x_4213->var_intrinsic_current_line_width = Asdouble(x_4246);
    WriteMetric();
    auto x_4251 = eval_expr_x_4250(x_4213);
    if (x_4213->has_var_intrinsic_width_max) {
      auto x_4252 = x_4213->var_intrinsic_width_max;
      if (!EqualValue(x_4252, x_4251)) {
        var_modified_x_4253(x_4213);
      }
    }
    x_4213->has_var_intrinsic_width_max = true;
    x_4213->var_intrinsic_width_max = Asdouble(x_4251);
    WriteMetric();
    auto x_4256 = eval_expr_x_4255(x_4213);
    if (x_4213->has_var_intrinsic_width_sum) {
      auto x_4257 = x_4213->var_intrinsic_width_sum;
      if (!EqualValue(x_4257, x_4256)) {
        var_modified_x_4258(x_4213);
      }
    }
    x_4213->has_var_intrinsic_width_sum = true;
    x_4213->var_intrinsic_width_sum = Asdouble(x_4256);
    WriteMetric();
    auto x_4261 = eval_expr_x_4260(x_4213);
    if (x_4213->has_var_children_intrinsic_height) {
      auto x_4262 = x_4213->var_children_intrinsic_height;
      if (!EqualValue(x_4262, x_4261)) {
        var_modified_x_4263(x_4213);
      }
    }
    x_4213->has_var_children_intrinsic_height = true;
    x_4213->var_children_intrinsic_height = Asdouble(x_4261);
    WriteMetric();
    auto x_4266 = eval_expr_x_4265(x_4213);
    if (x_4213->has_var_height_expr) {
      auto x_4267 = x_4213->var_height_expr;
      if (!EqualValue(x_4267, x_4266)) {
        var_modified_x_4268(x_4213);
      }
    }
    x_4213->has_var_height_expr = true;
    x_4213->var_height_expr = AsDEString(x_4266);
    WriteMetric();
    auto x_4271 = eval_expr_x_4270(x_4213);
    if (x_4213->has_var_intrinsic_height_is_height) {
      auto x_4272 = x_4213->var_intrinsic_height_is_height;
      if (!EqualValue(x_4272, x_4271)) {
        var_modified_x_4273(x_4213);
      }
    }
    x_4213->has_var_intrinsic_height_is_height = true;
    x_4213->var_intrinsic_height_is_height = Asbool(x_4271);
    WriteMetric();
    auto x_4276 = eval_expr_x_4275(x_4213);
    if (x_4213->has_var_intrinsic_height_internal) {
      auto x_4277 = x_4213->var_intrinsic_height_internal;
      if (!EqualValue(x_4277, x_4276)) {
        var_modified_x_4278(x_4213);
      }
    }
    x_4213->has_var_intrinsic_height_internal = true;
    x_4213->var_intrinsic_height_internal = Asdouble(x_4276);
    WriteMetric();
    auto x_4281 = eval_expr_x_4280(x_4213);
    if (x_4213->has_var_intrinsic_height_external) {
      auto x_4282 = x_4213->var_intrinsic_height_external;
      if (!EqualValue(x_4282, x_4281)) {
        var_modified_x_4283(x_4213);
      }
    }
    x_4213->has_var_intrinsic_height_external = true;
    x_4213->var_intrinsic_height_external = Asdouble(x_4281);
    WriteMetric();
    auto x_4286 = eval_expr_x_4285(x_4213);
    if (x_4213->has_var_intrinsic_height_sum) {
      auto x_4287 = x_4213->var_intrinsic_height_sum;
      if (!EqualValue(x_4287, x_4286)) {
        var_modified_x_4288(x_4213);
      }
    }
    x_4213->has_var_intrinsic_height_sum = true;
    x_4213->var_intrinsic_height_sum = Asdouble(x_4286);
    WriteMetric();
    auto x_4291 = eval_expr_x_4290(x_4213);
    if (x_4213->has_var_intrinsic_current_line_height) {
      auto x_4292 = x_4213->var_intrinsic_current_line_height;
      if (!EqualValue(x_4292, x_4291)) {
        var_modified_x_4293(x_4213);
      }
    }
    x_4213->has_var_intrinsic_current_line_height = true;
    x_4213->var_intrinsic_current_line_height = Asdouble(x_4291);
    WriteMetric();
    auto x_4296 = eval_expr_x_4295(x_4213);
    if (x_4213->has_var_finished_intrinsic_height_sum) {
      auto x_4297 = x_4213->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_4297, x_4296)) {
        var_modified_x_4298(x_4213);
      }
    }
    x_4213->has_var_finished_intrinsic_height_sum = true;
    x_4213->var_finished_intrinsic_height_sum = Asdouble(x_4296);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4051(const auto &x_4300) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4301) {
    WriteMetric();
    auto x_4303 = eval_expr_x_4302(x_4300);
    if (x_4300->has_var_display) {
      auto x_4304 = x_4300->var_display;
      if (!EqualValue(x_4304, x_4303)) {
        var_modified_x_4305(x_4300);
      }
    }
    x_4300->has_var_display = true;
    x_4300->var_display = AsDEString(x_4303);
    WriteMetric();
    auto x_4308 = eval_expr_x_4307(x_4300);
    if (x_4300->has_var_position) {
      auto x_4309 = x_4300->var_position;
      if (!EqualValue(x_4309, x_4308)) {
        var_modified_x_4310(x_4300);
      }
    }
    x_4300->has_var_position = true;
    x_4300->var_position = AsDEString(x_4308);
    WriteMetric();
    auto x_4313 = eval_expr_x_4312(x_4300);
    if (x_4300->has_var_flex_grow) {
      auto x_4314 = x_4300->var_flex_grow;
      if (!EqualValue(x_4314, x_4313)) {
        var_modified_x_4315(x_4300);
      }
    }
    x_4300->has_var_flex_grow = true;
    x_4300->var_flex_grow = Asdouble(x_4313);
    WriteMetric();
    auto x_4318 = eval_expr_x_4317(x_4300);
    if (x_4300->has_var_flex_shrink) {
      auto x_4319 = x_4300->var_flex_shrink;
      if (!EqualValue(x_4319, x_4318)) {
        var_modified_x_4320(x_4300);
      }
    }
    x_4300->has_var_flex_shrink = true;
    x_4300->var_flex_shrink = Asdouble(x_4318);
    WriteMetric();
    auto x_4323 = eval_expr_x_4322(x_4300);
    if (x_4300->has_var_flex_grow_sum) {
      auto x_4324 = x_4300->var_flex_grow_sum;
      if (!EqualValue(x_4324, x_4323)) {
        var_modified_x_4325(x_4300);
      }
    }
    x_4300->has_var_flex_grow_sum = true;
    x_4300->var_flex_grow_sum = Asdouble(x_4323);
    WriteMetric();
    auto x_4328 = eval_expr_x_4327(x_4300);
    if (x_4300->has_var_flex_shrink_sum) {
      auto x_4329 = x_4300->var_flex_shrink_sum;
      if (!EqualValue(x_4329, x_4328)) {
        var_modified_x_4330(x_4300);
      }
    }
    x_4300->has_var_flex_shrink_sum = true;
    x_4300->var_flex_shrink_sum = Asdouble(x_4328);
    WriteMetric();
    auto x_4333 = eval_expr_x_4332(x_4300);
    if (x_4300->has_var_flex_direction) {
      auto x_4334 = x_4300->var_flex_direction;
      if (!EqualValue(x_4334, x_4333)) {
        var_modified_x_4335(x_4300);
      }
    }
    x_4300->has_var_flex_direction = true;
    x_4300->var_flex_direction = AsDEString(x_4333);
    WriteMetric();
    auto x_4338 = eval_expr_x_4337(x_4300);
    if (x_4300->has_var_is_flex_row) {
      auto x_4339 = x_4300->var_is_flex_row;
      if (!EqualValue(x_4339, x_4338)) {
        var_modified_x_4340(x_4300);
      }
    }
    x_4300->has_var_is_flex_row = true;
    x_4300->var_is_flex_row = Asbool(x_4338);
    WriteMetric();
    auto x_4343 = eval_expr_x_4342(x_4300);
    if (x_4300->has_var_is_flex_column) {
      auto x_4344 = x_4300->var_is_flex_column;
      if (!EqualValue(x_4344, x_4343)) {
        var_modified_x_4345(x_4300);
      }
    }
    x_4300->has_var_is_flex_column = true;
    x_4300->var_is_flex_column = Asbool(x_4343);
    WriteMetric();
    auto x_4348 = eval_expr_x_4347(x_4300);
    if (x_4300->has_var_width_attr_expr) {
      auto x_4349 = x_4300->var_width_attr_expr;
      if (!EqualValue(x_4349, x_4348)) {
        var_modified_x_4350(x_4300);
      }
    }
    x_4300->has_var_width_attr_expr = true;
    x_4300->var_width_attr_expr = AsDEString(x_4348);
    WriteMetric();
    auto x_4353 = eval_expr_x_4352(x_4300);
    if (x_4300->has_var_has_width_attr) {
      auto x_4354 = x_4300->var_has_width_attr;
      if (!EqualValue(x_4354, x_4353)) {
        var_modified_x_4355(x_4300);
      }
    }
    x_4300->has_var_has_width_attr = true;
    x_4300->var_has_width_attr = Asbool(x_4353);
    WriteMetric();
    auto x_4358 = eval_expr_x_4357(x_4300);
    if (x_4300->has_var_height_attr_expr) {
      auto x_4359 = x_4300->var_height_attr_expr;
      if (!EqualValue(x_4359, x_4358)) {
        var_modified_x_4360(x_4300);
      }
    }
    x_4300->has_var_height_attr_expr = true;
    x_4300->var_height_attr_expr = AsDEString(x_4358);
    WriteMetric();
    auto x_4363 = eval_expr_x_4362(x_4300);
    if (x_4300->has_var_has_height_attr) {
      auto x_4364 = x_4300->var_has_height_attr;
      if (!EqualValue(x_4364, x_4363)) {
        var_modified_x_4365(x_4300);
      }
    }
    x_4300->has_var_has_height_attr = true;
    x_4300->var_has_height_attr = Asbool(x_4363);
    WriteMetric();
    auto x_4368 = eval_expr_x_4367(x_4300);
    if (x_4300->has_var_is_svg_block) {
      auto x_4369 = x_4300->var_is_svg_block;
      if (!EqualValue(x_4369, x_4368)) {
        var_modified_x_4370(x_4300);
      }
    }
    x_4300->has_var_is_svg_block = true;
    x_4300->var_is_svg_block = Asbool(x_4368);
    WriteMetric();
    auto x_4373 = eval_expr_x_4372(x_4300);
    if (x_4300->has_var_inside_svg) {
      auto x_4374 = x_4300->var_inside_svg;
      if (!EqualValue(x_4374, x_4373)) {
        var_modified_x_4375(x_4300);
      }
    }
    x_4300->has_var_inside_svg = true;
    x_4300->var_inside_svg = Asbool(x_4373);
    WriteMetric();
    auto x_4378 = eval_expr_x_4377(x_4300);
    if (x_4300->has_var_disabled) {
      auto x_4379 = x_4300->var_disabled;
      if (!EqualValue(x_4379, x_4378)) {
        var_modified_x_4380(x_4300);
      }
    }
    x_4300->has_var_disabled = true;
    x_4300->var_disabled = Asbool(x_4378);
    WriteMetric();
    auto x_4383 = eval_expr_x_4382(x_4300);
    if (x_4300->has_var_visible) {
      auto x_4384 = x_4300->var_visible;
      if (!EqualValue(x_4384, x_4383)) {
        var_modified_x_4385(x_4300);
      }
    }
    x_4300->has_var_visible = true;
    x_4300->var_visible = Asbool(x_4383);
    WriteMetric();
    auto x_4388 = eval_expr_x_4387(x_4300);
    if (x_4300->has_var_line_break) {
      auto x_4389 = x_4300->var_line_break;
      if (!EqualValue(x_4389, x_4388)) {
        var_modified_x_4390(x_4300);
      }
    }
    x_4300->has_var_line_break = true;
    x_4300->var_line_break = Asbool(x_4388);
    return MakeUnit();
  })));
}
Unit x_3712(const auto &x_3713, const auto &x_3714, const auto &x_3715) {
  auto x_3716 = ListHeadExn(x_3713);
  auto x_3717 = ListTailExn(x_3713);
  if (ListIsEmpty(x_3717)) {
    auto x_3718 = ListSplitN(x_3714->children, x_3716);
    OutputChangeMetric(IntAdd(layout_size_x_3669(ListNthExn(x_3714->children, x_3716)), layout_size_x_3669(x_3715)));
    x_3714->children = ListAppend(Zro(x_3718), Cons(x_3715, ListTailExn(Fst(x_3718))));
    return MakeUnit();
  } else {
    return x_3712(x_3717, ListNthExn(x_3714->children, x_3716), x_3715);
  }
}
Unit replace_layout_node_x_3711(const auto &x_3713, const auto &x_3714, const auto &x_3715) {
  return x_3712(x_3713, x_3714, x_3715);
}
Unit x_3719(const auto &x_3720, const auto &x_3721, const auto &x_3722) {
  auto x_3723 = ListHeadExn(x_3720);
  auto x_3724 = ListTailExn(x_3720);
  if (ListIsEmpty(x_3724)) {
    OutputChangeMetric(layout_size_x_3669(x_3722));
    auto x_3725 = ListSplitN(x_3721->children, x_3723);
    x_3721->children = ListAppend(Zro(x_3725), Cons(x_3722, Fst(x_3725)));
    return MakeUnit();
  } else {
    return x_3719(x_3724, ListNthExn(x_3721->children, x_3723), x_3722);
  }
}
Unit add_layout_node_x_3709(const auto &x_3720, const auto &x_3721, const auto &x_3722) {
  return x_3719(x_3720, x_3721, x_3722);
}
Unit x_3726(const auto &x_3727, const auto &x_3728, const auto &x_3729) {
  auto x_3730 = ListHeadExn(x_3727);
  auto x_3731 = ListTailExn(x_3727);
  if (ListIsEmpty(x_3731)) {
    OutputChangeMetric(layout_size_x_3669(ListNthExn(x_3728->children, x_3730)));
    auto x_3732 = ListSplitN(x_3728->children, x_3730);
    x_3728->children = ListAppend(Zro(x_3732), ListTailExn(Fst(x_3732)));
    return MakeUnit();
  } else {
    return x_3726(x_3731, ListNthExn(x_3728->children, x_3730), x_3729);
  }
}
Unit remove_layout_node_x_3707(const auto &x_3727, const auto &x_3728, const auto &x_3729) {
  return x_3726(x_3727, x_3728, x_3729);
}
Unit x_3733(const auto &x_3734, const auto &x_3735, const auto &x_3736) {
  return ListMatch(
      x_3734,
      [&](const auto &x_3739) {
        auto x_3740 = Zro(x_3736);
        auto x_3741 = Zro(x_3740);
        auto x_3742 = Fst(x_3740);
        auto x_3743 = Fst(x_3736);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5947 = x_3741;
        if (x_5947 == "attributes") {
          std::string x_5948 = x_3742;
          if (x_5948 == "width") {
            WriteMetric();
            x_3735->has_attr_width = true;
            x_3735->attr_width = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3744) {
              if (x_3735->meta->bb_1_has_bb_time_table) {
                auto x_3745 = x_3735->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3745, x_3735, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5948 == "image_height") {
            WriteMetric();
            x_3735->has_attr_image_height = true;
            x_3735->attr_image_height = Asint64_t(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3747) {
              if (x_3735->meta->bb_0_has_bb_time_table) {
                auto x_3748 = x_3735->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3748, x_3735, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5948 == "image_width") {
            WriteMetric();
            x_3735->has_attr_image_width = true;
            x_3735->attr_image_width = Asint64_t(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3750) {
              if (x_3735->meta->bb_0_has_bb_time_table) {
                auto x_3751 = x_3735->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3751, x_3735, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5948 == "height") {
            WriteMetric();
            x_3735->has_attr_height = true;
            x_3735->attr_height = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3753) {
              if (x_3735->meta->bb_1_has_bb_time_table) {
                auto x_3754 = x_3735->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3754, x_3735, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5948 == "viewBox") {
            WriteMetric();
            x_3735->has_attr_viewBox = true;
            x_3735->attr_viewBox = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3756) {
              if (x_3735->meta->bb_0_has_bb_time_table) {
                auto x_3757 = x_3735->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3757, x_3735, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5947 == "properties") {
          std::string x_5949 = x_3742;
          if (x_5949 == "width") {
            WriteMetric();
            x_3735->has_prop_width = true;
            x_3735->prop_width = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3759) {
              if (x_3735->meta->bb_0_has_bb_time_table) {
                auto x_3760 = x_3735->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3760, x_3735, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "flex-grow") {
            WriteMetric();
            x_3735->has_prop_flex_grow = true;
            x_3735->prop_flex_grow = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3762) {
              if (x_3735->meta->bb_1_has_bb_time_table) {
                auto x_3763 = x_3735->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3763, x_3735, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "height") {
            WriteMetric();
            x_3735->has_prop_height = true;
            x_3735->prop_height = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3765) {
              if (x_3735->meta->bb_0_has_bb_time_table) {
                auto x_3766 = x_3735->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3766, x_3735, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "display") {
            WriteMetric();
            x_3735->has_prop_display = true;
            x_3735->prop_display = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3768) {
              if (x_3735->meta->bb_1_has_bb_time_table) {
                auto x_3769 = x_3735->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3769, x_3735, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "position") {
            WriteMetric();
            x_3735->has_prop_position = true;
            x_3735->prop_position = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3771) {
              if (x_3735->meta->bb_1_has_bb_time_table) {
                auto x_3772 = x_3735->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3772, x_3735, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "flex-shrink") {
            WriteMetric();
            x_3735->has_prop_flex_shrink = true;
            x_3735->prop_flex_shrink = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3774) {
              if (x_3735->meta->bb_1_has_bb_time_table) {
                auto x_3775 = x_3735->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3775, x_3735, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "flex-direction") {
            WriteMetric();
            x_3735->has_prop_flex_direction = true;
            x_3735->prop_flex_direction = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3777) {
              if (x_3735->meta->bb_1_has_bb_time_table) {
                auto x_3778 = x_3735->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3778, x_3735, static_cast<int64_t>(0));
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
      [&](const auto &x_3737, const auto &x_3738) {
        return x_3733(x_3738, ListNthExn(x_3735->children, x_3737), x_3736);
      });
}
Unit insert_value_x_3705(const auto &x_3734, const auto &x_3735, const auto &x_3736) {
  return x_3733(x_3734, x_3735, x_3736);
}
Unit x_3780(const auto &x_3781, const auto &x_3782, const auto &x_3783) {
  return ListMatch(
      x_3781,
      [&](const auto &x_3786) {
        auto x_3787 = Zro(x_3783);
        auto x_3788 = Fst(x_3783);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5950 = x_3787;
        if (x_5950 == "attributes") {
          std::string x_5951 = x_3788;
          if (x_5951 == "width") {
            WriteMetric();
            x_3782->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3789) {
              if (x_3782->meta->bb_1_has_bb_time_table) {
                auto x_3790 = x_3782->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3790, x_3782, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5951 == "image_height") {
            WriteMetric();
            x_3782->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3792) {
              if (x_3782->meta->bb_0_has_bb_time_table) {
                auto x_3793 = x_3782->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3793, x_3782, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5951 == "image_width") {
            WriteMetric();
            x_3782->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3795) {
              if (x_3782->meta->bb_0_has_bb_time_table) {
                auto x_3796 = x_3782->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3796, x_3782, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5951 == "height") {
            WriteMetric();
            x_3782->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3798) {
              if (x_3782->meta->bb_1_has_bb_time_table) {
                auto x_3799 = x_3782->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3799, x_3782, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5951 == "viewBox") {
            WriteMetric();
            x_3782->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3801) {
              if (x_3782->meta->bb_0_has_bb_time_table) {
                auto x_3802 = x_3782->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3802, x_3782, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5950 == "properties") {
          std::string x_5952 = x_3788;
          if (x_5952 == "width") {
            WriteMetric();
            x_3782->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3804) {
              if (x_3782->meta->bb_0_has_bb_time_table) {
                auto x_3805 = x_3782->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3805, x_3782, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "flex-grow") {
            WriteMetric();
            x_3782->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3807) {
              if (x_3782->meta->bb_1_has_bb_time_table) {
                auto x_3808 = x_3782->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3808, x_3782, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "height") {
            WriteMetric();
            x_3782->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3810) {
              if (x_3782->meta->bb_0_has_bb_time_table) {
                auto x_3811 = x_3782->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3811, x_3782, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "display") {
            WriteMetric();
            x_3782->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3813) {
              if (x_3782->meta->bb_1_has_bb_time_table) {
                auto x_3814 = x_3782->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3814, x_3782, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "position") {
            WriteMetric();
            x_3782->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3816) {
              if (x_3782->meta->bb_1_has_bb_time_table) {
                auto x_3817 = x_3782->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3817, x_3782, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "flex-shrink") {
            WriteMetric();
            x_3782->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3819) {
              if (x_3782->meta->bb_1_has_bb_time_table) {
                auto x_3820 = x_3782->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3820, x_3782, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "flex-direction") {
            WriteMetric();
            x_3782->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3822) {
              if (x_3782->meta->bb_1_has_bb_time_table) {
                auto x_3823 = x_3782->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3823, x_3782, static_cast<int64_t>(0));
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
      [&](const auto &x_3784, const auto &x_3785) {
        return x_3780(x_3785, ListNthExn(x_3782->children, x_3784), x_3783);
      });
}
Unit delete_value_x_3703(const auto &x_3781, const auto &x_3782, const auto &x_3783) {
  return x_3780(x_3781, x_3782, x_3783);
}
Unit x_3825(const auto &x_3826, const auto &x_3827, const auto &x_3828) {
  return ListMatch(
      x_3826,
      [&](const auto &x_3831) {
        auto x_3832 = Zro(x_3828);
        auto x_3833 = Zro(x_3832);
        auto x_3834 = Fst(x_3832);
        auto x_3835 = Fst(x_3828);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5953 = x_3833;
        if (x_5953 == "attributes") {
          std::string x_5954 = x_3834;
          if (x_5954 == "width") {
            WriteMetric();
            x_3827->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3836) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3837 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3837, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_width = true;
            x_3827->attr_width = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3839) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3840 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3840, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5954 == "image_height") {
            WriteMetric();
            x_3827->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3842) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3843 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3843, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_image_height = true;
            x_3827->attr_image_height = Asint64_t(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3845) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3846 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3846, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5954 == "image_width") {
            WriteMetric();
            x_3827->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3848) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3849 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3849, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_image_width = true;
            x_3827->attr_image_width = Asint64_t(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3851) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3852 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3852, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5954 == "height") {
            WriteMetric();
            x_3827->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3854) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3855 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3855, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_height = true;
            x_3827->attr_height = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3857) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3858 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3858, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5954 == "viewBox") {
            WriteMetric();
            x_3827->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3860) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3861 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3861, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_viewBox = true;
            x_3827->attr_viewBox = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3863) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3864 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3864, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5953 == "properties") {
          std::string x_5955 = x_3834;
          if (x_5955 == "width") {
            WriteMetric();
            x_3827->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3866) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3867 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3867, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_width = true;
            x_3827->prop_width = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3869) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3870 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3870, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "flex-grow") {
            WriteMetric();
            x_3827->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3872) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3873 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3873, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_flex_grow = true;
            x_3827->prop_flex_grow = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3875) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3876 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3876, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "height") {
            WriteMetric();
            x_3827->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3878) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3879 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3879, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_height = true;
            x_3827->prop_height = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3881) {
              if (x_3827->meta->bb_0_has_bb_time_table) {
                auto x_3882 = x_3827->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3882, x_3827, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "display") {
            WriteMetric();
            x_3827->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3884) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3885 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3885, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_display = true;
            x_3827->prop_display = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3887) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3888 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3888, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "position") {
            WriteMetric();
            x_3827->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3890) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3891 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3891, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_position = true;
            x_3827->prop_position = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3893) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3894 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3894, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "flex-shrink") {
            WriteMetric();
            x_3827->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3896) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3897 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3897, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_flex_shrink = true;
            x_3827->prop_flex_shrink = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3899) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3900 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3900, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "flex-direction") {
            WriteMetric();
            x_3827->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3902) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3903 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3903, x_3827, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_flex_direction = true;
            x_3827->prop_flex_direction = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3905) {
              if (x_3827->meta->bb_1_has_bb_time_table) {
                auto x_3906 = x_3827->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_3906, x_3827, static_cast<int64_t>(0));
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
      [&](const auto &x_3829, const auto &x_3830) {
        return x_3825(x_3830, ListNthExn(x_3827->children, x_3829), x_3828);
      });
}
Unit replace_value_x_3701(const auto &x_3826, const auto &x_3827, const auto &x_3828) {
  return x_3825(x_3826, x_3827, x_3828);
}
Unit x_3908(const auto &x_3909, const auto &x_3910, const auto &x_3911) {
  auto x_3912 = ListHeadExn(x_3909);
  auto x_3913 = ListTailExn(x_3909);
  if (ListIsEmpty(x_3913)) {
    InputChangeMetric(IntAdd(node_size_x_3670(ListNthExn(x_3910->children, x_3912)), node_size_x_3670(x_3911)));
    auto x_3914 = ListSplitN(x_3910->children, x_3912);
    auto x_3915 = Zro(x_3914);
    auto x_3916 = Fst(x_3914);
    auto x_3917 = ListHeadExn(x_3916);
    auto x_3918 = ListTailExn(x_3916);
    x_3910->children = ListAppend(x_3915, x_3918);
    x_3917->meta->alive = false;
    OptionMatch(
        x_3917->prev, [&](const auto &x_3920) { return MakeUnit(); },
        [&](const auto &x_3919) {
          x_3919->next = ToPath(x_3917->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3917->next, [&](const auto &x_3922) { return MakeUnit(); },
        [&](const auto &x_3921) {
          x_3921->prev = ToPath(x_3917->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3915)) {
      x_3910->first = ToPath(ListHead(x_3918));
    }
    if (ListIsEmpty(x_3918)) {
      x_3910->last = ToPath(ListLast(x_3915));
    }
    OptionMatch(
        x_3917->next, [&](const auto &x_3927) { return MakeUnit(); },
        [&](const auto &x_3923) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3924) {
            if (x_3923->meta->bb_1_has_bb_time_table) {
              auto x_3925 = x_3923->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_3925, x_3923, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3928) {
        if (x_3910->meta->bb_0_has_bb_time_table) {
          auto x_3929 = x_3910->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3929, x_3910, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3918)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3931) {
        if (x_3910->meta->bb_0_has_bb_time_table) {
          auto x_3932 = x_3910->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3932, x_3910, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3917->next, [&](const auto &x_3938) { return MakeUnit(); },
        [&](const auto &x_3934) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3935) {
            if (x_3934->meta->bb_0_has_bb_time_table) {
              auto x_3936 = x_3934->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_3936, x_3934, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3939) {
        if (x_3910->meta->bb_2_has_bb_time_table) {
          auto x_3940 = x_3910->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3940, x_3910, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3918)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3942) {
        if (x_3910->meta->bb_2_has_bb_time_table) {
          auto x_3943 = x_3910->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3943, x_3910, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3917->next, [&](const auto &x_3949) { return MakeUnit(); },
        [&](const auto &x_3945) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3946) {
            if (x_3945->meta->bb_2_has_bb_time_table) {
              auto x_3947 = x_3945->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_3947, x_3945, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    auto x_3950 = ListSplitN(x_3910->children, x_3912);
    auto x_3951 = Zro(x_3950);
    auto x_3952 = Fst(x_3950);
    x_3910->children = ListAppend(x_3951, Cons(x_3911, x_3952));
    if (ListIsEmpty(x_3951)) {
      x_3910->first = x_3911.get();
    }
    if (ListIsEmpty(x_3952)) {
      x_3910->last = x_3911.get();
    }
    OptionMatch(
        ListLast(x_3951),
        [&](const auto &x_3954) {
          x_3911->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3953) {
          x_3911->prev = x_3953.get();
          x_3953->next = x_3911.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3952),
        [&](const auto &x_3956) {
          x_3911->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3955) {
          x_3911->next = x_3955.get();
          x_3955->prev = x_3911.get();
          return MakeUnit();
        });
    x_3911->parent = x_3910.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_3957) {
      auto x_3958 = (x_3911->parent);
      if (x_3958->meta->pass_0_has_proc_time_table) {
        auto x_3961 = OptionMatch(
            x_3911->prev, [&](const auto &x_3960) { return NextTotalOrder(x_3958->meta->bb_1_bb_time_table); },
            [&](const auto &x_3959) { return NextTotalOrder(x_3959->meta->pass_0_proc_time_table); });
        x_3911->meta->pass_0_has_proc_time_table = true;
        x_3911->meta->pass_0_proc_time_table = x_3961;
        MetaWriteMetric();
        return QueueForcePush(x_3961, x_3911, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_3911->next, [&](const auto &x_3967) { return MakeUnit(); },
        [&](const auto &x_3963) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3964) {
            if (x_3963->meta->bb_1_has_bb_time_table) {
              auto x_3965 = x_3963->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_3965, x_3963, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3968) {
        if (x_3910->meta->bb_0_has_bb_time_table) {
          auto x_3969 = x_3910->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3969, x_3910, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3952)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3971) {
        if (x_3910->meta->bb_0_has_bb_time_table) {
          auto x_3972 = x_3910->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3972, x_3910, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3911->next, [&](const auto &x_3978) { return MakeUnit(); },
        [&](const auto &x_3974) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3975) {
            if (x_3974->meta->bb_0_has_bb_time_table) {
              auto x_3976 = x_3974->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_3976, x_3974, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_3979) {
      auto x_3980 = (x_3911->parent);
      if (x_3980->meta->pass_1_has_proc_time_table) {
        auto x_3983 = OptionMatch(
            x_3911->prev, [&](const auto &x_3982) { return NextTotalOrder(x_3980->meta->bb_2_bb_time_table); },
            [&](const auto &x_3981) { return NextTotalOrder(x_3981->meta->pass_1_proc_time_table); });
        x_3911->meta->pass_1_has_proc_time_table = true;
        x_3911->meta->pass_1_proc_time_table = x_3983;
        MetaWriteMetric();
        return QueueForcePush(x_3983, x_3911, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3985) {
        if (x_3910->meta->bb_2_has_bb_time_table) {
          auto x_3986 = x_3910->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3986, x_3910, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3952)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3988) {
        if (x_3910->meta->bb_2_has_bb_time_table) {
          auto x_3989 = x_3910->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_3989, x_3910, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3911->next, [&](const auto &x_3995) { return MakeUnit(); },
        [&](const auto &x_3991) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3992) {
            if (x_3991->meta->bb_2_has_bb_time_table) {
              auto x_3993 = x_3991->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_3993, x_3991, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3908(x_3913, ListNthExn(x_3910->children, x_3912), x_3911);
  }
}
Unit replace_node_x_3699(const auto &x_3909, const auto &x_3910, const auto &x_3911) {
  return x_3908(x_3909, x_3910, x_3911);
}
Unit x_3996(const auto &x_3997) {
  ListIter2(x_3997->children, [&](const auto &x_3998, const auto &x_3999) {
    x_3998->parent = x_3997.get();
    x_3999->parent = x_3997.get();
    x_3998->next = x_3999.get();
    x_3999->prev = x_3998.get();
    x_3996(x_3998);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3997->children),
      [&](const auto &x_4001) {
        x_3997->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4000) {
        x_3997->first = x_4000.get();
        x_4000->parent = x_3997.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3997->children),
      [&](const auto &x_4003) {
        x_3997->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4002) {
        x_3997->last = x_4002.get();
        x_4002->parent = x_3997.get();
        x_3996(x_4002);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3697(const auto &x_3997) { return x_3996(x_3997); }
Unit x_4004(const auto &x_4005, const auto &x_4006, const auto &x_4007) {
  auto x_4008 = ListHeadExn(x_4005);
  auto x_4009 = ListTailExn(x_4005);
  if (ListIsEmpty(x_4009)) {
    InputChangeMetric(node_size_x_3670(ListNthExn(x_4006->children, x_4008)));
    auto x_4010 = ListSplitN(x_4006->children, x_4008);
    auto x_4011 = Zro(x_4010);
    auto x_4012 = Fst(x_4010);
    auto x_4013 = ListHeadExn(x_4012);
    auto x_4014 = ListTailExn(x_4012);
    x_4006->children = ListAppend(x_4011, x_4014);
    x_4013->meta->alive = false;
    OptionMatch(
        x_4013->prev, [&](const auto &x_4016) { return MakeUnit(); },
        [&](const auto &x_4015) {
          x_4015->next = ToPath(x_4013->next);
          return MakeUnit();
        });
    OptionMatch(
        x_4013->next, [&](const auto &x_4018) { return MakeUnit(); },
        [&](const auto &x_4017) {
          x_4017->prev = ToPath(x_4013->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_4011)) {
      x_4006->first = ToPath(ListHead(x_4014));
    }
    if (ListIsEmpty(x_4014)) {
      x_4006->last = ToPath(ListLast(x_4011));
    }
    OptionMatch(
        x_4013->next, [&](const auto &x_4023) { return MakeUnit(); },
        [&](const auto &x_4019) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4020) {
            if (x_4019->meta->bb_1_has_bb_time_table) {
              auto x_4021 = x_4019->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_4021, x_4019, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_4006->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4024) {
        if (x_4006->meta->bb_0_has_bb_time_table) {
          auto x_4025 = x_4006->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4025, x_4006, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4014)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4027) {
        if (x_4006->meta->bb_0_has_bb_time_table) {
          auto x_4028 = x_4006->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4028, x_4006, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4013->next, [&](const auto &x_4034) { return MakeUnit(); },
        [&](const auto &x_4030) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4031) {
            if (x_4030->meta->bb_0_has_bb_time_table) {
              auto x_4032 = x_4030->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_4032, x_4030, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_4006->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4035) {
        if (x_4006->meta->bb_2_has_bb_time_table) {
          auto x_4036 = x_4006->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4036, x_4006, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4014)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4038) {
        if (x_4006->meta->bb_2_has_bb_time_table) {
          auto x_4039 = x_4006->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4039, x_4006, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4013->next, [&](const auto &x_4045) { return MakeUnit(); },
        [&](const auto &x_4041) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4042) {
            if (x_4041->meta->bb_2_has_bb_time_table) {
              auto x_4043 = x_4041->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_4043, x_4041, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_4004(x_4009, ListNthExn(x_4006->children, x_4008), x_4007);
  }
}
Unit remove_node_x_3695(const auto &x_4005, const auto &x_4006, const auto &x_4007) {
  return x_4004(x_4005, x_4006, x_4007);
}
Unit x_4046(const auto &x_4047) {
  if (!QueueIsEmpty()) {
    auto x_4048 = QueuePeek();
    auto x_4049 = Zro(x_4048);
    auto x_4050 = Fst(x_4048);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_4050.n->meta->alive) {
      [&]() {
        auto x_5956 = x_4050.rf;
        if (x_5956 == 0) {
          return eval_stmts_x_4051(x_4050.n);
        } else if (x_5956 == 1) {
          return eval_stmts_x_4052(x_4050.n);
        } else if (x_5956 == 2) {
          return eval_stmts_x_4053(x_4050.n);
        } else if (x_5956 == 3) {
          auto x_4054 = ReadRef(current_time);
          WriteRef(current_time, x_4049);
          eval_stmts_x_3683(x_4050.n);
          x_4050.n->meta->pass_0_has_proc_time_table = true;
          x_4050.n->meta->pass_0_proc_time_table = ReadRef(current_time);
          WriteRef(current_time, x_4054);
          return MakeUnit();
        } else if (x_5956 == 4) {
          auto x_4055 = ReadRef(current_time);
          WriteRef(current_time, x_4049);
          eval_stmts_x_3685(x_4050.n);
          x_4050.n->meta->pass_1_has_proc_time_table = true;
          x_4050.n->meta->pass_1_proc_time_table = ReadRef(current_time);
          WriteRef(current_time, x_4055);
          return MakeUnit();
        } else {
          Panic();
        }
      }();
    }
    auto x_4056 = Zro(QueuePop());
    x_4046(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_3693(const auto &x_4047) { return x_4046(x_4047); }
Unit x_4057(const auto &x_4058, const auto &x_4059, const auto &x_4060) {
  auto x_4061 = ListHeadExn(x_4058);
  auto x_4062 = ListTailExn(x_4058);
  if (ListIsEmpty(x_4062)) {
    InputChangeMetric(node_size_x_3670(x_4060));
    auto x_4063 = ListSplitN(x_4059->children, x_4061);
    auto x_4064 = Zro(x_4063);
    auto x_4065 = Fst(x_4063);
    x_4059->children = ListAppend(x_4064, Cons(x_4060, x_4065));
    if (ListIsEmpty(x_4064)) {
      x_4059->first = x_4060.get();
    }
    if (ListIsEmpty(x_4065)) {
      x_4059->last = x_4060.get();
    }
    OptionMatch(
        ListLast(x_4064),
        [&](const auto &x_4067) {
          x_4060->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4066) {
          x_4060->prev = x_4066.get();
          x_4066->next = x_4060.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_4065),
        [&](const auto &x_4069) {
          x_4060->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4068) {
          x_4060->next = x_4068.get();
          x_4068->prev = x_4060.get();
          return MakeUnit();
        });
    x_4060->parent = x_4059.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4070) {
      auto x_4071 = (x_4060->parent);
      if (x_4071->meta->pass_0_has_proc_time_table) {
        auto x_4074 = OptionMatch(
            x_4060->prev, [&](const auto &x_4073) { return NextTotalOrder(x_4071->meta->bb_1_bb_time_table); },
            [&](const auto &x_4072) { return NextTotalOrder(x_4072->meta->pass_0_proc_time_table); });
        x_4060->meta->pass_0_has_proc_time_table = true;
        x_4060->meta->pass_0_proc_time_table = x_4074;
        MetaWriteMetric();
        return QueueForcePush(x_4074, x_4060, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_4060->next, [&](const auto &x_4080) { return MakeUnit(); },
        [&](const auto &x_4076) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4077) {
            if (x_4076->meta->bb_1_has_bb_time_table) {
              auto x_4078 = x_4076->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_4078, x_4076, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_4059->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4081) {
        if (x_4059->meta->bb_0_has_bb_time_table) {
          auto x_4082 = x_4059->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4082, x_4059, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4065)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4084) {
        if (x_4059->meta->bb_0_has_bb_time_table) {
          auto x_4085 = x_4059->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4085, x_4059, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4060->next, [&](const auto &x_4091) { return MakeUnit(); },
        [&](const auto &x_4087) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4088) {
            if (x_4087->meta->bb_0_has_bb_time_table) {
              auto x_4089 = x_4087->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_4089, x_4087, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4092) {
      auto x_4093 = (x_4060->parent);
      if (x_4093->meta->pass_1_has_proc_time_table) {
        auto x_4096 = OptionMatch(
            x_4060->prev, [&](const auto &x_4095) { return NextTotalOrder(x_4093->meta->bb_2_bb_time_table); },
            [&](const auto &x_4094) { return NextTotalOrder(x_4094->meta->pass_1_proc_time_table); });
        x_4060->meta->pass_1_has_proc_time_table = true;
        x_4060->meta->pass_1_proc_time_table = x_4096;
        MetaWriteMetric();
        return QueueForcePush(x_4096, x_4060, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_4059->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4098) {
        if (x_4059->meta->bb_2_has_bb_time_table) {
          auto x_4099 = x_4059->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4099, x_4059, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4065)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4101) {
        if (x_4059->meta->bb_2_has_bb_time_table) {
          auto x_4102 = x_4059->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_4102, x_4059, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4060->next, [&](const auto &x_4108) { return MakeUnit(); },
        [&](const auto &x_4104) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4105) {
            if (x_4104->meta->bb_2_has_bb_time_table) {
              auto x_4106 = x_4104->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_4106, x_4104, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_4057(x_4062, ListNthExn(x_4059->children, x_4061), x_4060);
  }
}
Unit add_node_x_3691(const auto &x_4058, const auto &x_4059, const auto &x_4060) {
  return x_4057(x_4058, x_4059, x_4060);
}
Unit x_4109(const auto &x_4110) {
  ListIter2(x_4110->children, [&](const auto &x_4111, const auto &x_4112) {
    x_4111->parent = x_4110.get();
    x_4112->parent = x_4110.get();
    x_4111->next = x_4112.get();
    x_4112->prev = x_4111.get();
    x_4109(x_4111);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4110->children),
      [&](const auto &x_4114) {
        x_4110->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4113) {
        x_4110->first = x_4113.get();
        x_4113->parent = x_4110.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4110->children),
      [&](const auto &x_4116) {
        x_4110->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4115) {
        x_4110->last = x_4115.get();
        x_4115->parent = x_4110.get();
        x_4109(x_4115);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3689(const auto &x_4110) { return x_4109(x_4110); }
Unit eval_stmts_x_3685(const auto &x_4117) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4118) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4119) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4117->meta->bb_2_has_bb_time_table = true;
      x_4117->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4053(x_4117);
      return MakeUnit();
    })));
    ListIter(x_4117->children, [&](const auto &x_4120) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4121) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3685(x_4120);
        x_4120->meta->pass_1_has_proc_time_table = true;
        x_4120->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3683(const auto &x_4122) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4123) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4124) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4122->meta->bb_1_has_bb_time_table = true;
      x_4122->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4051(x_4122);
      return MakeUnit();
    })));
    ListIter(x_4122->children, [&](const auto &x_4125) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4126) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3683(x_4125);
        x_4125->meta->pass_0_has_proc_time_table = true;
        x_4125->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4127) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4122->meta->bb_0_has_bb_time_table = true;
      x_4122->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4052(x_4122);
      return MakeUnit();
    })));
    return MakeUnit();
  })));
}
Unit x_4128(const auto &x_4129) {
  ListIter2(x_4129->children, [&](const auto &x_4130, const auto &x_4131) {
    x_4130->parent = x_4129.get();
    x_4131->parent = x_4129.get();
    x_4130->next = x_4131.get();
    x_4131->prev = x_4130.get();
    x_4128(x_4130);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4129->children),
      [&](const auto &x_4133) {
        x_4129->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4132) {
        x_4129->first = x_4132.get();
        x_4132->parent = x_4129.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4129->children),
      [&](const auto &x_4135) {
        x_4129->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4134) {
        x_4129->last = x_4134.get();
        x_4134->parent = x_4129.get();
        x_4128(x_4134);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3679(const auto &x_4129) { return x_4128(x_4129); }
int64_t x_4136(const auto &x_4137) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4137->children, [&](const auto &x_4138) { return x_4136(x_4138); }));
}
int64_t node_size_x_3670(const auto &x_4137) { return x_4136(x_4137); }
int64_t x_4139(const auto &x_4140) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4140->children, [&](const auto &x_4141) { return x_4139(x_4141); }));
}
int64_t layout_size_x_3669(const auto &x_4140) { return x_4139(x_4140); }
LayoutNode x_4142(const auto &x_4143) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_4143)), [&](const auto &x_4144) { return x_4142(x_4144); }));
}
LayoutNode json_to_layout_node_x_3668(const auto &x_4143) { return x_4142(x_4143); }
Node x_4145(const auto &x_4146) {
  return MakeNode(x_4146->name, x_4146->attr, x_4146->prop, x_4146->extern_id,
                  ListMap(x_4146->children, [&](const auto &x_4147) { return x_4145(x_4147); }));
}
Node node_to_fs_node_x_3667(const auto &x_4146) { return x_4145(x_4146); }
Node x_4148(const auto &x_4149) {
  return MakeNode(
      JsonToString(JsonMember("name", x_4149)), JsonToDict(JsonMember("attributes", x_4149)),
      JsonToDict(JsonMember("properties", x_4149)), JsonToInt(JsonMember("id", x_4149)),
      ListMap(JsonToList(JsonMember("children", x_4149)), [&](const auto &x_4150) { return x_4148(x_4150); }));
}
Node json_to_node_aux_x_3666(const auto &x_4149) { return x_4148(x_4149); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_3671) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_3672) {
      auto x_3673 = MakeRef(static_cast<int64_t>(0));
      auto x_3674 = FreshMetric();
      auto x_3675 = JsonOfString(InputLine(x_3672));
      auto x_3676 = JsonOfString(InputLine(x_3672));
      auto x_3677 = MakeStack();
      PushStack(x_3677, x_3675);
      PushStack(x_3677, x_3676);
      Assert(StringEqual(JsonToString(JsonMember("name", x_3675)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_3676)), "layout_init"));
      auto x_3680 = [&]() {
        auto x_3678 = json_to_node_aux_x_3666(JsonMember("node", x_3675));
        x_3678->parent = nullptr;
        x_3678->prev = nullptr;
        x_3678->next = nullptr;
        set_children_relation_x_3679(x_3678);
        return x_3678;
      }();
      auto x_3681 = json_to_layout_node_x_3668(JsonMember("node", x_3676));
      OutputChangeMetric(layout_size_x_3669(x_3681));
      InputChangeMetric(node_size_x_3670(x_3680));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3682) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3683(x_3680);
        x_3680->meta->pass_0_has_proc_time_table = true;
        x_3680->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3684) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3685(x_3680);
        x_3680->meta->pass_1_has_proc_time_table = true;
        x_3680->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      JsonToChannel(x_3671, [&]() {
        auto x_5957 = FreshJson();
        WriteJson(x_5957, "name", "PQ_D");
        WriteJson(x_5957, "diff_num", ReadRef(x_3673));
        WriteJson(x_5957, "read_count", MetricReadCount());
        WriteJson(x_5957, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_5957, "write_count", MetricWriteCount());
        WriteJson(x_5957, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_5957, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_5957, "input_change_count", MetricInputChangeCount());
        WriteJson(x_5957, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_5957, "overhead_time", MetricOverheadCount());
        WriteJson(x_5957, "eval_time", MetricEvalCount());
        WriteJson(x_5957, "html", "");
        WriteJson(x_5957, "command", StackToList(x_3677));
        return x_5957;
      }());
      OutputString(x_3671, "\n");
      ClearStack(x_3677);
      WriteRef(x_3673, IntAdd(ReadRef(x_3673), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_3672, [&](const auto &x_3686) {
        auto x_3687 = JsonOfString(x_3686);
        PushStack(x_3677, x_3687);
        std::string x_5959 = JsonToString(JsonMember("name", x_3687));
        if (x_5959 == "add") {
          return add_node_x_3691(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3690) { return JsonToInt(x_3690); }),
              x_3680, [&]() {
                auto x_3688 = json_to_node_aux_x_3666(JsonMember("node", x_3687));
                x_3688->parent = nullptr;
                x_3688->prev = nullptr;
                x_3688->next = nullptr;
                set_children_relation_x_3689(x_3688);
                return x_3688;
              }());
        } else if (x_5959 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_3692) {
            recalculate_internal_x_3693(MakeUnit());
            return MakeUnit();
          })));
          JsonToChannel(x_3671, [&]() {
            auto x_5958 = FreshJson();
            WriteJson(x_5958, "name", "PQ_D");
            WriteJson(x_5958, "diff_num", ReadRef(x_3673));
            WriteJson(x_5958, "read_count", MetricReadCount());
            WriteJson(x_5958, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_5958, "write_count", MetricWriteCount());
            WriteJson(x_5958, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_5958, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_5958, "input_change_count", MetricInputChangeCount());
            WriteJson(x_5958, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_5958, "overhead_time", MetricOverheadCount());
            WriteJson(x_5958, "eval_time", MetricEvalCount());
            WriteJson(x_5958, "html", "");
            WriteJson(x_5958, "command", StackToList(x_3677));
            return x_5958;
          }());
          OutputString(x_3671, "\n");
          ClearStack(x_3677);
          WriteRef(x_3673, IntAdd(ReadRef(x_3673), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5959 == "remove") {
          return remove_node_x_3695(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3694) { return JsonToInt(x_3694); }),
              x_3680, MakeUnit());
        } else if (x_5959 == "replace") {
          return replace_node_x_3699(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3698) { return JsonToInt(x_3698); }),
              x_3680, [&]() {
                auto x_3696 = json_to_node_aux_x_3666(JsonMember("node", x_3687));
                x_3696->parent = nullptr;
                x_3696->prev = nullptr;
                x_3696->next = nullptr;
                set_children_relation_x_3697(x_3696);
                return x_3696;
              }());
        } else if (x_5959 == "replace_value") {
          return replace_value_x_3701(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3700) { return JsonToInt(x_3700); }),
              x_3680,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3687)), JsonToString(JsonMember("key", x_3687))),
                       JsonToValue(JsonMember("value", x_3687))));
        } else if (x_5959 == "delete_value") {
          return delete_value_x_3703(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3702) { return JsonToInt(x_3702); }),
              x_3680, MakePair(JsonToString(JsonMember("type", x_3687)), JsonToString(JsonMember("key", x_3687))));
        } else if (x_5959 == "insert_value") {
          return insert_value_x_3705(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3704) { return JsonToInt(x_3704); }),
              x_3680,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3687)), JsonToString(JsonMember("key", x_3687))),
                       JsonToValue(JsonMember("value", x_3687))));
        } else if (x_5959 == "layout_remove") {
          return remove_layout_node_x_3707(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3706) { return JsonToInt(x_3706); }),
              x_3681, MakeUnit());
        } else if (x_5959 == "layout_add") {
          return add_layout_node_x_3709(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3708) { return JsonToInt(x_3708); }),
              x_3681, json_to_layout_node_x_3668(JsonMember("node", x_3687)));
        } else if (x_5959 == "layout_replace") {
          return replace_layout_node_x_3711(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3710) { return JsonToInt(x_3710); }),
              x_3681, json_to_layout_node_x_3668(JsonMember("node", x_3687)));
        } else if (x_5959 == "layout_info_changed") {
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