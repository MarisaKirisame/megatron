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
  std::optional<TotalOrder> bb_1_bb_time_table;
  std::optional<TotalOrder> bb_0_bb_time_table;
  std::optional<TotalOrder> bb_2_bb_time_table;
  std::optional<TotalOrder> pass_0_proc_time_table;
  std::optional<TotalOrder> pass_1_proc_time_table;
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
Unit var_modified_x_4145(const auto &x_4147);
auto eval_expr_x_4142(const auto &x_4165);
Unit var_modified_x_4140(const auto &x_4242);
auto eval_expr_x_4137(const auto &x_4247);
Unit var_modified_x_4135(const auto &x_4264);
auto eval_expr_x_4132(const auto &x_4275);
Unit var_modified_x_4130(const auto &x_4280);
auto eval_expr_x_4127(const auto &x_4291);
Unit var_modified_x_4125(const auto &x_4300);
auto eval_expr_x_4122(const auto &x_4305);
Unit var_modified_x_4120(const auto &x_4306);
auto eval_expr_x_4117(const auto &x_4311);
Unit var_modified_x_4115(const auto &x_4316);
auto eval_expr_x_4112(const auto &x_4324);
Unit var_modified_x_4110(const auto &x_4335);
auto eval_expr_x_4107(const auto &x_4340);
Unit var_modified_x_4105(const auto &x_4345);
auto eval_expr_x_4102(const auto &x_4353);
Unit var_modified_x_4100(const auto &x_4364);
auto eval_expr_x_4097(const auto &x_4372);
Unit var_modified_x_4095(const auto &x_4397);
auto eval_expr_x_4092(const auto &x_4408);
Unit var_modified_x_4090(const auto &x_4433);
auto eval_expr_x_4087(const auto &x_4438);
Unit var_modified_x_4085(const auto &x_4441);
auto eval_expr_x_4082(const auto &x_4451);
Unit var_modified_x_4080(const auto &x_4460);
auto eval_expr_x_4077(const auto &x_4470);
Unit var_modified_x_4075(const auto &x_4479);
auto eval_expr_x_4072(const auto &x_4487);
Unit var_modified_x_4070(const auto &x_4490);
auto eval_expr_x_4067(const auto &x_4498);
Unit var_modified_x_4065(const auto &x_4501);
auto eval_expr_x_4062(const auto &x_4512);
Unit var_modified_x_4060(const auto &x_4515);
auto eval_expr_x_4057(const auto &x_4526);
Unit var_modified_x_4053(const auto &x_4529);
auto eval_expr_x_4050(const auto &x_4541);
Unit var_modified_x_4048(const auto &x_4570);
auto eval_expr_x_4045(const auto &x_4582);
Unit var_modified_x_4043(const auto &x_4595);
auto eval_expr_x_4040(const auto &x_4607);
Unit var_modified_x_4038(const auto &x_4616);
auto eval_expr_x_4035(const auto &x_4621);
Unit var_modified_x_4033(const auto &x_4630);
auto eval_expr_x_4030(const auto &x_4638);
Unit var_modified_x_4028(const auto &x_4783);
auto eval_expr_x_4025(const auto &x_4788);
Unit var_modified_x_4023(const auto &x_4837);
auto eval_expr_x_4020(const auto &x_4845);
Unit var_modified_x_4018(const auto &x_4848);
auto eval_expr_x_4015(const auto &x_4853);
Unit var_modified_x_4013(const auto &x_4862);
auto eval_expr_x_4010(const auto &x_4874);
Unit var_modified_x_4008(const auto &x_4883);
auto eval_expr_x_4005(const auto &x_4895);
Unit var_modified_x_4003(const auto &x_4904);
auto eval_expr_x_4000(const auto &x_4914);
Unit var_modified_x_3998(const auto &x_4927);
auto eval_expr_x_3995(const auto &x_4932);
Unit var_modified_x_3993(const auto &x_4941);
auto eval_expr_x_3990(const auto &x_4949);
Unit var_modified_x_3988(const auto &x_5102);
auto eval_expr_x_3985(const auto &x_5107);
Unit var_modified_x_3983(const auto &x_5112);
auto eval_expr_x_3980(const auto &x_5117);
Unit var_modified_x_3978(const auto &x_5166);
auto eval_expr_x_3975(const auto &x_5171);
Unit var_modified_x_3973(const auto &x_5184);
auto eval_expr_x_3970(const auto &x_5192);
Unit var_modified_x_3966(const auto &x_5195);
auto eval_expr_x_3963(const auto &x_5202);
Unit var_modified_x_3961(const auto &x_5219);
auto eval_expr_x_3958(const auto &x_5224);
Unit var_modified_x_3956(const auto &x_5233);
auto eval_expr_x_3953(const auto &x_5241);
Unit var_modified_x_3951(const auto &x_5294);
auto eval_expr_x_3948(const auto &x_5304);
Unit var_modified_x_3946(const auto &x_5329);
auto eval_expr_x_3943(const auto &x_5336);
Unit var_modified_x_3941(const auto &x_5345);
auto eval_expr_x_3938(const auto &x_5353);
Unit var_modified_x_3936(const auto &x_5406);
auto eval_expr_x_3933(const auto &x_5416);
Unit var_modified_x_3931(const auto &x_5437);
auto eval_expr_x_3928(const auto &x_5442);
Unit var_modified_x_3926(const auto &x_5463);
auto eval_expr_x_3923(const auto &x_5468);
Unit var_modified_x_3921(const auto &x_5481);
auto eval_expr_x_3918(const auto &x_5489);
Unit var_modified_x_3916(const auto &x_5510);
auto eval_expr_x_3913(const auto &x_5515);
Unit var_modified_x_3911(const auto &x_5520);
auto eval_expr_x_3908(const auto &x_5525);
Unit eval_stmts_x_3819(const auto &x_3906);
Unit eval_stmts_x_3818(const auto &x_3968);
Unit eval_stmts_x_3817(const auto &x_4055);
Unit x_3546(const auto &x_3547, const auto &x_3548, const auto &x_3549);
Unit x_3553(const auto &x_3554, const auto &x_3555, const auto &x_3556);
Unit x_3560(const auto &x_3561, const auto &x_3562, const auto &x_3563);
Unit x_3567(const auto &x_3568, const auto &x_3569, const auto &x_3570);
Unit x_3602(const auto &x_3603, const auto &x_3604, const auto &x_3605);
Unit x_3635(const auto &x_3636, const auto &x_3637, const auto &x_3638);
Unit x_3694(const auto &x_3695, const auto &x_3696, const auto &x_3697);
Unit x_3766(const auto &x_3767);
Unit x_3774(const auto &x_3775, const auto &x_3776, const auto &x_3777);
Unit x_3809(const auto &x_3810);
Unit x_3821(const auto &x_3822, const auto &x_3823, const auto &x_3824);
Unit x_3864(const auto &x_3865);
Unit eval_stmts_x_3519(const auto &x_3872);
Unit eval_stmts_x_3517(const auto &x_3877);
Unit x_3883(const auto &x_3884);
int64_t x_3891(const auto &x_3892);
int64_t x_3894(const auto &x_3895);
LayoutNode x_3897(const auto &x_3898);
Node x_3900(const auto &x_3901);
Node x_3903(const auto &x_3904);
Unit var_modified_x_4145(const auto &x_4147) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4148) {
    auto x_5530 = [&](const auto &x_4149) {
      if (IsSome(x_4149->meta->bb_0_bb_time_table)) {
        auto x_4150 = UnSome(x_4149->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4150, x_4149, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5530(x_4147);
    MakeUnit();
    auto x_5531 = [&](const auto &x_4154) {
      if (IsSome(x_4154->meta->bb_0_bb_time_table)) {
        auto x_4155 = UnSome(x_4154->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4155, x_4154, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4147->next, [&](const auto &x_4153) { return MakeUnit(); },
        [&](const auto &x_4152) {
          auto x_5534 = x_5531;
          x_5534(x_4152);
          return MakeUnit();
        });
    auto x_5532 = [&](const auto &x_4157) {
      if (IsSome(x_4157->meta->bb_2_bb_time_table)) {
        auto x_4158 = UnSome(x_4157->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4158, x_4157, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5532(x_4147);
    MakeUnit();
    auto x_5533 = [&](const auto &x_4162) {
      if (IsSome(x_4162->meta->bb_2_bb_time_table)) {
        auto x_4163 = UnSome(x_4162->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4163, x_4162, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4147->next, [&](const auto &x_4161) { return MakeUnit(); },
        [&](const auto &x_4160) {
          auto x_5535 = x_5533;
          x_5535(x_4160);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4142(const auto &x_4165) {
  if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_4165->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_4165->parent != nullptr) &&
          (eq((x_4165->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_4165->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_4165->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_4165->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_4165->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_4140(const auto &x_4242) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4243) {
    ListIter(x_4242->children, [&](const auto &x_4244) {
      if (IsSome(x_4244->meta->bb_1_bb_time_table)) {
        auto x_4245 = UnSome(x_4244->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4245, x_4244, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4137(const auto &x_4247) {
  return (((!(x_4247->parent != nullptr)) || (x_4247->parent)->var_visible) &&
          (neq(x_4247->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_4247->var_inside_svg) && (!x_4247->var_disabled))));
}
Unit var_modified_x_4135(const auto &x_4264) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4265) {
    auto x_5536 = [&](const auto &x_4266) {
      if (IsSome(x_4266->meta->bb_1_bb_time_table)) {
        auto x_4267 = UnSome(x_4266->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4267, x_4266, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5536(x_4264);
    MakeUnit();
    ListIter(x_4264->children, [&](const auto &x_4269) {
      if (IsSome(x_4269->meta->bb_1_bb_time_table)) {
        auto x_4270 = UnSome(x_4269->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4270, x_4269, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    auto x_5537 = [&](const auto &x_4272) {
      if (IsSome(x_4272->meta->bb_0_bb_time_table)) {
        auto x_4273 = UnSome(x_4272->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4273, x_4272, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5537(x_4264);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4132(const auto &x_4275) {
  if (eq(x_4275->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_4275->parent != nullptr) && (x_4275->parent)->var_disabled);
  }
}
Unit var_modified_x_4130(const auto &x_4280) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4281) {
    auto x_5538 = [&](const auto &x_4282) {
      if (IsSome(x_4282->meta->bb_1_bb_time_table)) {
        auto x_4283 = UnSome(x_4282->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4283, x_4282, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5538(x_4280);
    MakeUnit();
    ListIter(x_4280->children, [&](const auto &x_4285) {
      if (IsSome(x_4285->meta->bb_1_bb_time_table)) {
        auto x_4286 = UnSome(x_4285->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4286, x_4285, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    auto x_5539 = [&](const auto &x_4288) {
      if (IsSome(x_4288->meta->bb_0_bb_time_table)) {
        auto x_4289 = UnSome(x_4288->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4289, x_4288, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5539(x_4280);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4127(const auto &x_4291) {
  return ((x_4291->parent != nullptr) && ((x_4291->parent)->var_is_svg_block || (x_4291->parent)->var_inside_svg));
}
Unit var_modified_x_4125(const auto &x_4300) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4301) {
    ListIter(x_4300->children, [&](const auto &x_4302) {
      if (IsSome(x_4302->meta->bb_1_bb_time_table)) {
        auto x_4303 = UnSome(x_4302->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4303, x_4302, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4122(const auto &x_4305) { return eq(x_4305->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_4120(const auto &x_4306) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4307) {
    auto x_5540 = [&](const auto &x_4308) {
      if (IsSome(x_4308->meta->bb_0_bb_time_table)) {
        auto x_4309 = UnSome(x_4308->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4309, x_4308, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5540(x_4306);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4117(const auto &x_4311) {
  return neq(x_4311->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4115(const auto &x_4316) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4317) {
    auto x_5541 = [&](const auto &x_4318) {
      if (IsSome(x_4318->meta->bb_1_bb_time_table)) {
        auto x_4319 = UnSome(x_4318->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4319, x_4318, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5541(x_4316);
    MakeUnit();
    auto x_5542 = [&](const auto &x_4321) {
      if (IsSome(x_4321->meta->bb_0_bb_time_table)) {
        auto x_4322 = UnSome(x_4321->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4322, x_4321, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5542(x_4316);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4112(const auto &x_4324) {
  if (!x_4324->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4324->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_4324->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4324->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4110(const auto &x_4335) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4336) {
    auto x_5543 = [&](const auto &x_4337) {
      if (IsSome(x_4337->meta->bb_0_bb_time_table)) {
        auto x_4338 = UnSome(x_4337->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4338, x_4337, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5543(x_4335);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4107(const auto &x_4340) {
  return neq(x_4340->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4105(const auto &x_4345) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4346) {
    auto x_5544 = [&](const auto &x_4347) {
      if (IsSome(x_4347->meta->bb_1_bb_time_table)) {
        auto x_4348 = UnSome(x_4347->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4348, x_4347, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5544(x_4345);
    MakeUnit();
    auto x_5545 = [&](const auto &x_4350) {
      if (IsSome(x_4350->meta->bb_0_bb_time_table)) {
        auto x_4351 = UnSome(x_4350->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4351, x_4350, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5545(x_4345);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4102(const auto &x_4353) {
  if (!x_4353->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4353->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_4353->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4353->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4100(const auto &x_4364) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4365) {
    ListIter(x_4364->children, [&](const auto &x_4366) {
      if (IsSome(x_4366->meta->bb_0_bb_time_table)) {
        auto x_4367 = UnSome(x_4366->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4367, x_4366, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    });
    ListIter(x_4364->children, [&](const auto &x_4369) {
      if (IsSome(x_4369->meta->bb_2_bb_time_table)) {
        auto x_4370 = UnSome(x_4369->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4370, x_4369, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4097(const auto &x_4372) {
  if ((x_4372->parent != nullptr) &&
      (eq((x_4372->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4372->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4372->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_4372->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4095(const auto &x_4397) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4398) {
    ListIter(x_4397->children, [&](const auto &x_4399) {
      if (IsSome(x_4399->meta->bb_0_bb_time_table)) {
        auto x_4400 = UnSome(x_4399->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4400, x_4399, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    });
    auto x_5546 = [&](const auto &x_4402) {
      if (IsSome(x_4402->meta->bb_2_bb_time_table)) {
        auto x_4403 = UnSome(x_4402->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4403, x_4402, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5546(x_4397);
    MakeUnit();
    ListIter(x_4397->children, [&](const auto &x_4405) {
      if (IsSome(x_4405->meta->bb_2_bb_time_table)) {
        auto x_4406 = UnSome(x_4405->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4406, x_4405, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4092(const auto &x_4408) {
  if ((x_4408->parent != nullptr) &&
      (eq((x_4408->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4408->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4408->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4090(const auto &x_4433) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4434) {
    ListIter(x_4433->children, [&](const auto &x_4435) {
      if (IsSome(x_4435->meta->bb_1_bb_time_table)) {
        auto x_4436 = UnSome(x_4435->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4436, x_4435, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4087(const auto &x_4438) {
  if (x_4438->has_prop_flex_direction) {
    return x_4438->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_4085(const auto &x_4441) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4442) {
    auto x_5547 = [&](const auto &x_4445) {
      if (IsSome(x_4445->meta->bb_1_bb_time_table)) {
        auto x_4446 = UnSome(x_4445->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4446, x_4445, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4441->next, [&](const auto &x_4444) { return MakeUnit(); },
        [&](const auto &x_4443) {
          auto x_5549 = x_5547;
          x_5549(x_4443);
          return MakeUnit();
        });
    auto x_5548 = [&](const auto &x_4448) {
      if (IsSome(x_4448->meta->bb_2_bb_time_table)) {
        auto x_4449 = UnSome(x_4448->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4449, x_4448, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5548(x_4441);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4082(const auto &x_4451) {
  return plus((x_4451->prev != nullptr) ? ((x_4451->prev)->var_flex_shrink_sum) : (0.), x_4451->var_flex_shrink);
}
Unit var_modified_x_4080(const auto &x_4460) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4461) {
    auto x_5550 = [&](const auto &x_4464) {
      if (IsSome(x_4464->meta->bb_1_bb_time_table)) {
        auto x_4465 = UnSome(x_4464->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4465, x_4464, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4460->next, [&](const auto &x_4463) { return MakeUnit(); },
        [&](const auto &x_4462) {
          auto x_5552 = x_5550;
          x_5552(x_4462);
          return MakeUnit();
        });
    auto x_5551 = [&](const auto &x_4467) {
      if (IsSome(x_4467->meta->bb_2_bb_time_table)) {
        auto x_4468 = UnSome(x_4467->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4468, x_4467, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5551(x_4460);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4077(const auto &x_4470) {
  return plus((x_4470->prev != nullptr) ? ((x_4470->prev)->var_flex_grow_sum) : (0.), x_4470->var_flex_grow);
}
Unit var_modified_x_4075(const auto &x_4479) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4480) {
    auto x_5553 = [&](const auto &x_4481) {
      if (IsSome(x_4481->meta->bb_1_bb_time_table)) {
        auto x_4482 = UnSome(x_4481->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4482, x_4481, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5553(x_4479);
    MakeUnit();
    auto x_5554 = [&](const auto &x_4484) {
      if (IsSome(x_4484->meta->bb_2_bb_time_table)) {
        auto x_4485 = UnSome(x_4484->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4485, x_4484, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5554(x_4479);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4072(const auto &x_4487) {
  if (x_4487->has_prop_flex_shrink) {
    return (x_4487->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4070(const auto &x_4490) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4491) {
    auto x_5555 = [&](const auto &x_4492) {
      if (IsSome(x_4492->meta->bb_1_bb_time_table)) {
        auto x_4493 = UnSome(x_4492->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4493, x_4492, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5555(x_4490);
    MakeUnit();
    auto x_5556 = [&](const auto &x_4495) {
      if (IsSome(x_4495->meta->bb_2_bb_time_table)) {
        auto x_4496 = UnSome(x_4495->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4496, x_4495, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5556(x_4490);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4067(const auto &x_4498) {
  if (x_4498->has_prop_flex_grow) {
    return (x_4498->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4065(const auto &x_4501) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4502) {
    auto x_5557 = [&](const auto &x_4503) {
      if (IsSome(x_4503->meta->bb_1_bb_time_table)) {
        auto x_4504 = UnSome(x_4503->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4504, x_4503, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5557(x_4501);
    MakeUnit();
    auto x_5558 = [&](const auto &x_4506) {
      if (IsSome(x_4506->meta->bb_0_bb_time_table)) {
        auto x_4507 = UnSome(x_4506->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4507, x_4506, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5558(x_4501);
    MakeUnit();
    auto x_5559 = [&](const auto &x_4509) {
      if (IsSome(x_4509->meta->bb_2_bb_time_table)) {
        auto x_4510 = UnSome(x_4509->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4510, x_4509, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5559(x_4501);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4062(const auto &x_4512) {
  if (x_4512->has_prop_position) {
    return x_4512->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_4060(const auto &x_4515) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4516) {
    auto x_5560 = [&](const auto &x_4517) {
      if (IsSome(x_4517->meta->bb_1_bb_time_table)) {
        auto x_4518 = UnSome(x_4517->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4518, x_4517, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_5560(x_4515);
    MakeUnit();
    ListIter(x_4515->children, [&](const auto &x_4520) {
      if (IsSome(x_4520->meta->bb_1_bb_time_table)) {
        auto x_4521 = UnSome(x_4520->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4521, x_4520, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    auto x_5561 = [&](const auto &x_4523) {
      if (IsSome(x_4523->meta->bb_0_bb_time_table)) {
        auto x_4524 = UnSome(x_4523->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4524, x_4523, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5561(x_4515);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4057(const auto &x_4526) {
  if (x_4526->has_prop_display) {
    return x_4526->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_4053(const auto &x_4529) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4530) {
    auto x_5562 = [&](const auto &x_4533) {
      if (IsSome(x_4533->meta->bb_0_bb_time_table)) {
        auto x_4534 = UnSome(x_4533->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4534, x_4533, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    if (x_4529->next == nullptr) {
      auto x_5564 = x_5562;
      OptionMatch(
          x_4529->parent, [&](const auto &x_4532) { return MakeUnit(); },
          [&](const auto &x_4531) {
            auto x_5566 = x_5564;
            x_5566(x_4531);
            return MakeUnit();
          });
    }
    auto x_5563 = [&](const auto &x_4538) {
      if (IsSome(x_4538->meta->bb_0_bb_time_table)) {
        auto x_4539 = UnSome(x_4538->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4539, x_4538, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4529->next, [&](const auto &x_4537) { return MakeUnit(); },
        [&](const auto &x_4536) {
          auto x_5565 = x_5563;
          x_5565(x_4536);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4050(const auto &x_4541) {
  if (x_4541->prev != nullptr) {
    if (x_4541->var_line_break) {
      return plus((x_4541->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4541->prev)->var_intrinsic_current_line_height, x_4541->var_intrinsic_height_external));
    } else {
      return (x_4541->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4541->var_line_break) {
      return x_4541->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4048(const auto &x_4570) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4571) {
    auto x_5567 = [&](const auto &x_4574) {
      if (IsSome(x_4574->meta->bb_0_bb_time_table)) {
        auto x_4575 = UnSome(x_4574->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4575, x_4574, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    if (x_4570->next == nullptr) {
      auto x_5569 = x_5567;
      OptionMatch(
          x_4570->parent, [&](const auto &x_4573) { return MakeUnit(); },
          [&](const auto &x_4572) {
            auto x_5571 = x_5569;
            x_5571(x_4572);
            return MakeUnit();
          });
    }
    auto x_5568 = [&](const auto &x_4579) {
      if (IsSome(x_4579->meta->bb_0_bb_time_table)) {
        auto x_4580 = UnSome(x_4579->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4580, x_4579, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4570->next, [&](const auto &x_4578) { return MakeUnit(); },
        [&](const auto &x_4577) {
          auto x_5570 = x_5568;
          x_5570(x_4577);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4045(const auto &x_4582) {
  if (x_4582->var_line_break) {
    return 0.;
  } else {
    return max(x_4582->var_intrinsic_height_external,
               (x_4582->prev != nullptr) ? ((x_4582->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4043(const auto &x_4595) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4596) {
    auto x_5572 = [&](const auto &x_4599) {
      if (IsSome(x_4599->meta->bb_0_bb_time_table)) {
        auto x_4600 = UnSome(x_4599->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4600, x_4599, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4595->next, [&](const auto &x_4598) { return MakeUnit(); },
        [&](const auto &x_4597) {
          auto x_5574 = x_5572;
          x_5574(x_4597);
          return MakeUnit();
        });
    auto x_5573 = [&](const auto &x_4604) {
      if (IsSome(x_4604->meta->bb_2_bb_time_table)) {
        auto x_4605 = UnSome(x_4604->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4605, x_4604, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    if (x_4595->next == nullptr) {
      auto x_5575 = x_5573;
      OptionMatch(
          x_4595->parent, [&](const auto &x_4603) { return MakeUnit(); },
          [&](const auto &x_4602) {
            auto x_5576 = x_5575;
            x_5576(x_4602);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4040(const auto &x_4607) {
  return plus((x_4607->prev != nullptr) ? ((x_4607->prev)->var_intrinsic_height_sum) : (0.),
              x_4607->var_intrinsic_height_external);
}
Unit var_modified_x_4038(const auto &x_4616) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4617) {
    auto x_5577 = [&](const auto &x_4618) {
      if (IsSome(x_4618->meta->bb_0_bb_time_table)) {
        auto x_4619 = UnSome(x_4618->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4619, x_4618, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5577(x_4616);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4035(const auto &x_4621) {
  if (eq(x_4621->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4621->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4033(const auto &x_4630) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4631) {
    auto x_5578 = [&](const auto &x_4632) {
      if (IsSome(x_4632->meta->bb_0_bb_time_table)) {
        auto x_4633 = UnSome(x_4632->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4633, x_4632, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5578(x_4630);
    MakeUnit();
    auto x_5579 = [&](const auto &x_4635) {
      if (IsSome(x_4635->meta->bb_2_bb_time_table)) {
        auto x_4636 = UnSome(x_4635->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4636, x_4635, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5579(x_4630);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4030(const auto &x_4638) {
  if (eq(x_4638->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4638->var_inside_svg) {
      return 0.;
    } else {
      if (x_4638->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4638->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4638->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_4638->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_4638->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4638->var_height_expr.r.a0;
          } else {
            if (x_4638->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_4638->var_height_expr.r.a0;
            } else {
              return x_4638->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_4638->var_children_intrinsic_height,
              (eq(x_4638->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_4638->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4638->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4638->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_4638->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4638->var_has_height_attr &&
                                                  (x_4638->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4638->var_height_attr_expr.r.a0)
                                                     : ((x_4638->has_attr_viewBox)
                                                            ? (x_4638->attr_viewBox.r.a3)
                                                            : (mult((x_4638->attr_viewBox.r.a3),
                                                                    divide(x_4638->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4638->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4638->var_has_height_attr)
                                                            ? (x_4638->var_height_attr_expr.r.a0)
                                                            : ((x_4638->has_attr_image_height &&
                                                                (!x_4638->var_has_width_attr))
                                                                   ? (int_to_float(x_4638->attr_image_height))
                                                                   : ((neq(x_4638->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4638->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4638->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_4638->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_4638->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_4638->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4028(const auto &x_4783) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4784) {
    auto x_5580 = [&](const auto &x_4785) {
      if (IsSome(x_4785->meta->bb_2_bb_time_table)) {
        auto x_4786 = UnSome(x_4785->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4786, x_4785, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5580(x_4783);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4025(const auto &x_4788) {
  if (eq(x_4788->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_4788->var_inside_svg || x_4788->var_disabled)) {
    return true;
  } else {
    if ((x_4788->parent != nullptr) && (x_4788->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_4788->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_4788->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_4788->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_4788->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_4788->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4023(const auto &x_4837) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4838) {
    auto x_5581 = [&](const auto &x_4839) {
      if (IsSome(x_4839->meta->bb_0_bb_time_table)) {
        auto x_4840 = UnSome(x_4839->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4840, x_4839, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5581(x_4837);
    MakeUnit();
    auto x_5582 = [&](const auto &x_4842) {
      if (IsSome(x_4842->meta->bb_2_bb_time_table)) {
        auto x_4843 = UnSome(x_4842->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4843, x_4842, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5582(x_4837);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4020(const auto &x_4845) {
  if (x_4845->has_prop_height) {
    return x_4845->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4018(const auto &x_4848) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4849) {
    auto x_5583 = [&](const auto &x_4850) {
      if (IsSome(x_4850->meta->bb_0_bb_time_table)) {
        auto x_4851 = UnSome(x_4850->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4851, x_4850, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5583(x_4848);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4015(const auto &x_4853) {
  if (x_4853->last != nullptr) {
    return plus((x_4853->last)->var_finished_intrinsic_height_sum, (x_4853->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4013(const auto &x_4862) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4863) {
    auto x_5584 = [&](const auto &x_4866) {
      if (IsSome(x_4866->meta->bb_0_bb_time_table)) {
        auto x_4867 = UnSome(x_4866->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4867, x_4866, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4862->next, [&](const auto &x_4865) { return MakeUnit(); },
        [&](const auto &x_4864) {
          auto x_5586 = x_5584;
          x_5586(x_4864);
          return MakeUnit();
        });
    auto x_5585 = [&](const auto &x_4871) {
      if (IsSome(x_4871->meta->bb_2_bb_time_table)) {
        auto x_4872 = UnSome(x_4871->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4872, x_4871, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    if (x_4862->next == nullptr) {
      auto x_5587 = x_5585;
      OptionMatch(
          x_4862->parent, [&](const auto &x_4870) { return MakeUnit(); },
          [&](const auto &x_4869) {
            auto x_5588 = x_5587;
            x_5588(x_4869);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4010(const auto &x_4874) {
  return plus((x_4874->prev != nullptr) ? ((x_4874->prev)->var_intrinsic_width_sum) : (0.),
              x_4874->var_intrinsic_width_external);
}
Unit var_modified_x_4008(const auto &x_4883) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4884) {
    auto x_5589 = [&](const auto &x_4887) {
      if (IsSome(x_4887->meta->bb_0_bb_time_table)) {
        auto x_4888 = UnSome(x_4887->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4888, x_4887, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    if (x_4883->next == nullptr) {
      auto x_5591 = x_5589;
      OptionMatch(
          x_4883->parent, [&](const auto &x_4886) { return MakeUnit(); },
          [&](const auto &x_4885) {
            auto x_5593 = x_5591;
            x_5593(x_4885);
            return MakeUnit();
          });
    }
    auto x_5590 = [&](const auto &x_4892) {
      if (IsSome(x_4892->meta->bb_0_bb_time_table)) {
        auto x_4893 = UnSome(x_4892->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4893, x_4892, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4883->next, [&](const auto &x_4891) { return MakeUnit(); },
        [&](const auto &x_4890) {
          auto x_5592 = x_5590;
          x_5592(x_4890);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4005(const auto &x_4895) {
  return max(x_4895->var_intrinsic_current_line_width,
             (x_4895->prev != nullptr) ? ((x_4895->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4003(const auto &x_4904) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4905) {
    auto x_5594 = [&](const auto &x_4906) {
      if (IsSome(x_4906->meta->bb_0_bb_time_table)) {
        auto x_4907 = UnSome(x_4906->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4907, x_4906, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5594(x_4904);
    MakeUnit();
    auto x_5595 = [&](const auto &x_4911) {
      if (IsSome(x_4911->meta->bb_0_bb_time_table)) {
        auto x_4912 = UnSome(x_4911->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4912, x_4911, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4904->next, [&](const auto &x_4910) { return MakeUnit(); },
        [&](const auto &x_4909) {
          auto x_5596 = x_5595;
          x_5596(x_4909);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4000(const auto &x_4914) {
  return plus(x_4914->var_intrinsic_width_external,
              ((x_4914->prev != nullptr) && (!(x_4914->prev)->var_line_break))
                  ? ((x_4914->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_3998(const auto &x_4927) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4928) {
    auto x_5597 = [&](const auto &x_4929) {
      if (IsSome(x_4929->meta->bb_0_bb_time_table)) {
        auto x_4930 = UnSome(x_4929->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4930, x_4929, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5597(x_4927);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3995(const auto &x_4932) {
  if (eq(x_4932->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4932->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_3993(const auto &x_4941) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4942) {
    auto x_5598 = [&](const auto &x_4943) {
      if (IsSome(x_4943->meta->bb_0_bb_time_table)) {
        auto x_4944 = UnSome(x_4943->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4944, x_4943, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5598(x_4941);
    MakeUnit();
    auto x_5599 = [&](const auto &x_4946) {
      if (IsSome(x_4946->meta->bb_2_bb_time_table)) {
        auto x_4947 = UnSome(x_4946->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4947, x_4946, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5599(x_4941);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3990(const auto &x_4949) {
  if (eq(x_4949->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4949->var_inside_svg) {
      return 0.;
    } else {
      if (x_4949->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4949->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4949->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_4949->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_4949->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_4949->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_4949->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4949->var_width_expr.r.a0;
          } else {
            return x_4949->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_4949->var_children_intrinsic_width,
              (eq(x_4949->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_4949->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4949->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4949->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_4949->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4949->var_has_width_attr &&
                                                  (x_4949->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4949->var_width_attr_expr.r.a0)
                                                     : (((!x_4949->var_has_width_attr) && x_4949->has_attr_viewBox)
                                                            ? (x_4949->attr_viewBox.r.a2)
                                                            : (mult((x_4949->attr_viewBox.r.a2),
                                                                    divide(x_4949->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4949->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4949->var_has_width_attr)
                                                            ? (x_4949->var_width_attr_expr.r.a0)
                                                            : ((x_4949->has_attr_image_width &&
                                                                (!x_4949->var_has_height_attr))
                                                                   ? (int_to_float(x_4949->attr_image_width))
                                                                   : ((neq(x_4949->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4949->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4949->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_4949->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_4949->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_4949->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3988(const auto &x_5102) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5103) {
    auto x_5600 = [&](const auto &x_5104) {
      if (IsSome(x_5104->meta->bb_0_bb_time_table)) {
        auto x_5105 = UnSome(x_5104->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5105, x_5104, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5600(x_5102);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3985(const auto &x_5107) {
  if (x_5107->last != nullptr) {
    return (x_5107->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_3983(const auto &x_5112) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5113) {
    auto x_5601 = [&](const auto &x_5114) {
      if (IsSome(x_5114->meta->bb_2_bb_time_table)) {
        auto x_5115 = UnSome(x_5114->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5115, x_5114, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5601(x_5112);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3980(const auto &x_5117) {
  if (eq(x_5117->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5117->var_inside_svg || x_5117->var_disabled)) {
    return true;
  } else {
    if ((x_5117->parent != nullptr) && (x_5117->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5117->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5117->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5117->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5117->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_5117->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3978(const auto &x_5166) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5167) {
    auto x_5602 = [&](const auto &x_5168) {
      if (IsSome(x_5168->meta->bb_0_bb_time_table)) {
        auto x_5169 = UnSome(x_5168->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5169, x_5168, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5602(x_5166);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3975(const auto &x_5171) {
  if (eq(x_5171->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_5171->var_inside_svg) {
      return true;
    } else {
      if (x_5171->var_disabled) {
        return true;
      } else {if ( eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_5171->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_3973(const auto &x_5184) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5185) {
    auto x_5603 = [&](const auto &x_5186) {
      if (IsSome(x_5186->meta->bb_0_bb_time_table)) {
        auto x_5187 = UnSome(x_5186->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5187, x_5186, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_5603(x_5184);
    MakeUnit();
    auto x_5604 = [&](const auto &x_5189) {
      if (IsSome(x_5189->meta->bb_2_bb_time_table)) {
        auto x_5190 = UnSome(x_5189->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5190, x_5189, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5604(x_5184);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3970(const auto &x_5192) {
  if (x_5192->has_prop_width) {
    return x_5192->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_3966(const auto &x_5195) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5196) {
    auto x_5605 = [&](const auto &x_5199) {
      if (IsSome(x_5199->meta->bb_2_bb_time_table)) {
        auto x_5200 = UnSome(x_5199->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5200, x_5199, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5195->next, [&](const auto &x_5198) { return MakeUnit(); },
        [&](const auto &x_5197) {
          auto x_5606 = x_5605;
          x_5606(x_5197);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3963(const auto &x_5202) {
  if ((x_5202->prev != nullptr) && (!(x_5202->prev)->var_line_break)) {
    return max(x_5202->var_height_external, (x_5202->prev)->var_line_height);
  } else {
    return x_5202->var_height_external;
  }
}
Unit var_modified_x_3961(const auto &x_5219) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5220) {
    auto x_5607 = [&](const auto &x_5221) {
      if (IsSome(x_5221->meta->bb_2_bb_time_table)) {
        auto x_5222 = UnSome(x_5221->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5222, x_5221, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5607(x_5219);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3958(const auto &x_5224) {
  if (eq(x_5224->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5224->var_height_internal;
  }
}
Unit var_modified_x_3956(const auto &x_5233) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5234) {
    auto x_5608 = [&](const auto &x_5235) {
      if (IsSome(x_5235->meta->bb_2_bb_time_table)) {
        auto x_5236 = UnSome(x_5235->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5236, x_5235, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5608(x_5233);
    MakeUnit();
    ListIter(x_5233->children, [&](const auto &x_5238) {
      if (IsSome(x_5238->meta->bb_2_bb_time_table)) {
        auto x_5239 = UnSome(x_5238->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5239, x_5238, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3953(const auto &x_5241) {
  if (x_5241->var_intrinsic_height_is_height) {
    return x_5241->var_intrinsic_height_internal;
  } else {
    if ((x_5241->parent != nullptr) && (x_5241->parent)->var_is_flex_column) {
      return plus(x_5241->var_intrinsic_height_internal,
                  mult(x_5241->var_flex_amount, (x_5241->parent)->var_flex_unit));
    } else {
      if (x_5241->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5241->var_box_height, divide(x_5241->var_height_expr.r.a0, 100.));
      } else {
        return max(x_5241->var_box_height, x_5241->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_3951(const auto &x_5294) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5295) {
    ListIter(x_5294->children, [&](const auto &x_5296) {
      if (IsSome(x_5296->meta->bb_2_bb_time_table)) {
        auto x_5297 = UnSome(x_5296->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5297, x_5296, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    auto x_5609 = [&](const auto &x_5301) {
      if (IsSome(x_5301->meta->bb_2_bb_time_table)) {
        auto x_5302 = UnSome(x_5301->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5302, x_5301, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5294->next, [&](const auto &x_5300) { return MakeUnit(); },
        [&](const auto &x_5299) {
          auto x_5610 = x_5609;
          x_5610(x_5299);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3948(const auto &x_5304) {
  if (x_5304->prev != nullptr) {
    if (x_5304->var_line_break || (x_5304->prev)->var_line_break) {
      return plus((x_5304->prev)->var_y, (x_5304->prev)->var_line_height);
    } else {
      return (x_5304->prev)->var_y;
    }
  } else {
    if (x_5304->parent != nullptr) {
      return (x_5304->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3946(const auto &x_5329) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5330) {
    auto x_5611 = [&](const auto &x_5333) {
      if (IsSome(x_5333->meta->bb_2_bb_time_table)) {
        auto x_5334 = UnSome(x_5333->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5334, x_5333, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5329->next, [&](const auto &x_5332) { return MakeUnit(); },
        [&](const auto &x_5331) {
          auto x_5612 = x_5611;
          x_5612(x_5331);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3943(const auto &x_5336) {
  if (eq(x_5336->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5336->var_width_internal;
  }
}
Unit var_modified_x_3941(const auto &x_5345) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5346) {
    auto x_5613 = [&](const auto &x_5347) {
      if (IsSome(x_5347->meta->bb_2_bb_time_table)) {
        auto x_5348 = UnSome(x_5347->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5348, x_5347, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5613(x_5345);
    MakeUnit();
    ListIter(x_5345->children, [&](const auto &x_5350) {
      if (IsSome(x_5350->meta->bb_2_bb_time_table)) {
        auto x_5351 = UnSome(x_5350->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5351, x_5350, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3938(const auto &x_5353) {
  if (x_5353->var_intrinsic_width_is_width) {
    return x_5353->var_intrinsic_width_internal;
  } else {
    if ((x_5353->parent != nullptr) && (x_5353->parent)->var_is_flex_row) {
      return plus(x_5353->var_intrinsic_width_internal, mult(x_5353->var_flex_amount, (x_5353->parent)->var_flex_unit));
    } else {
      if (x_5353->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5353->var_box_width, divide(x_5353->var_width_expr.r.a0, 100.));
      } else {
        return max(x_5353->var_box_width, x_5353->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_3936(const auto &x_5406) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5407) {
    ListIter(x_5406->children, [&](const auto &x_5408) {
      if (IsSome(x_5408->meta->bb_2_bb_time_table)) {
        auto x_5409 = UnSome(x_5408->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5409, x_5408, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    auto x_5614 = [&](const auto &x_5413) {
      if (IsSome(x_5413->meta->bb_2_bb_time_table)) {
        auto x_5414 = UnSome(x_5413->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5414, x_5413, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5406->next, [&](const auto &x_5412) { return MakeUnit(); },
        [&](const auto &x_5411) {
          auto x_5615 = x_5614;
          x_5615(x_5411);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3933(const auto &x_5416) {
  if (x_5416->prev != nullptr) {
    if (x_5416->var_line_break || (x_5416->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_5416->prev)->var_x, (x_5416->prev)->var_width_external);
    }
  } else {
    if (x_5416->parent != nullptr) {
      return (x_5416->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3931(const auto &x_5437) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5438) {
    ListIter(x_5437->children, [&](const auto &x_5439) {
      if (IsSome(x_5439->meta->bb_2_bb_time_table)) {
        auto x_5440 = UnSome(x_5439->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5440, x_5439, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3928(const auto &x_5442) {
  if (gt(x_5442->var_left_over, 0.)) {
    return divide(x_5442->var_left_over, x_5442->var_flex_grow_sum);
  } else {
    return divide(x_5442->var_left_over, x_5442->var_flex_shrink_sum);
  }
}
Unit var_modified_x_3926(const auto &x_5463) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5464) {
    auto x_5616 = [&](const auto &x_5465) {
      if (IsSome(x_5465->meta->bb_2_bb_time_table)) {
        auto x_5466 = UnSome(x_5465->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5466, x_5465, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5616(x_5463);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3923(const auto &x_5468) {
  if ((x_5468->parent != nullptr) && gt((x_5468->parent)->var_left_over, 0.)) {
    return x_5468->var_flex_grow;
  } else {
    return x_5468->var_flex_shrink;
  }
}
Unit var_modified_x_3921(const auto &x_5481) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5482) {
    auto x_5617 = [&](const auto &x_5483) {
      if (IsSome(x_5483->meta->bb_2_bb_time_table)) {
        auto x_5484 = UnSome(x_5483->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5484, x_5483, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5617(x_5481);
    MakeUnit();
    ListIter(x_5481->children, [&](const auto &x_5486) {
      if (IsSome(x_5486->meta->bb_2_bb_time_table)) {
        auto x_5487 = UnSome(x_5486->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5487, x_5486, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3918(const auto &x_5489) {
  if (x_5489->var_is_flex_row) {
    return minus(x_5489->var_box_width, (x_5489->last != nullptr) ? ((x_5489->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_5489->var_box_height, (x_5489->last != nullptr) ? ((x_5489->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_3916(const auto &x_5510) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5511) {
    auto x_5618 = [&](const auto &x_5512) {
      if (IsSome(x_5512->meta->bb_2_bb_time_table)) {
        auto x_5513 = UnSome(x_5512->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5513, x_5512, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5618(x_5510);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3913(const auto &x_5515) {
  if (x_5515->parent != nullptr) {
    return (x_5515->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_3911(const auto &x_5520) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5521) {
    auto x_5619 = [&](const auto &x_5522) {
      if (IsSome(x_5522->meta->bb_2_bb_time_table)) {
        auto x_5523 = UnSome(x_5522->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5523, x_5522, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_5619(x_5520);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3908(const auto &x_5525) {
  if (x_5525->parent != nullptr) {
    return (x_5525->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_3819(const auto &x_3906) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3907) {
    WriteMetric();
    auto x_3909 = eval_expr_x_3908(x_3906);
    if (x_3906->has_var_box_width) {
      auto x_3910 = x_3906->var_box_width;
      if (!EqualValue(x_3910, x_3909)) {
        var_modified_x_3911(x_3906);
      }
    }
    x_3906->has_var_box_width = true;
    x_3906->var_box_width = Asdouble(x_3909);
    WriteMetric();
    auto x_3914 = eval_expr_x_3913(x_3906);
    if (x_3906->has_var_box_height) {
      auto x_3915 = x_3906->var_box_height;
      if (!EqualValue(x_3915, x_3914)) {
        var_modified_x_3916(x_3906);
      }
    }
    x_3906->has_var_box_height = true;
    x_3906->var_box_height = Asdouble(x_3914);
    WriteMetric();
    auto x_3919 = eval_expr_x_3918(x_3906);
    if (x_3906->has_var_left_over) {
      auto x_3920 = x_3906->var_left_over;
      if (!EqualValue(x_3920, x_3919)) {
        var_modified_x_3921(x_3906);
      }
    }
    x_3906->has_var_left_over = true;
    x_3906->var_left_over = Asdouble(x_3919);
    WriteMetric();
    auto x_3924 = eval_expr_x_3923(x_3906);
    if (x_3906->has_var_flex_amount) {
      auto x_3925 = x_3906->var_flex_amount;
      if (!EqualValue(x_3925, x_3924)) {
        var_modified_x_3926(x_3906);
      }
    }
    x_3906->has_var_flex_amount = true;
    x_3906->var_flex_amount = Asdouble(x_3924);
    WriteMetric();
    auto x_3929 = eval_expr_x_3928(x_3906);
    if (x_3906->has_var_flex_unit) {
      auto x_3930 = x_3906->var_flex_unit;
      if (!EqualValue(x_3930, x_3929)) {
        var_modified_x_3931(x_3906);
      }
    }
    x_3906->has_var_flex_unit = true;
    x_3906->var_flex_unit = Asdouble(x_3929);
    WriteMetric();
    auto x_3934 = eval_expr_x_3933(x_3906);
    if (x_3906->has_var_x) {
      auto x_3935 = x_3906->var_x;
      if (!EqualValue(x_3935, x_3934)) {
        var_modified_x_3936(x_3906);
      }
    }
    x_3906->has_var_x = true;
    x_3906->var_x = Asdouble(x_3934);
    WriteMetric();
    auto x_3939 = eval_expr_x_3938(x_3906);
    if (x_3906->has_var_width_internal) {
      auto x_3940 = x_3906->var_width_internal;
      if (!EqualValue(x_3940, x_3939)) {
        var_modified_x_3941(x_3906);
      }
    }
    x_3906->has_var_width_internal = true;
    x_3906->var_width_internal = Asdouble(x_3939);
    WriteMetric();
    auto x_3944 = eval_expr_x_3943(x_3906);
    if (x_3906->has_var_width_external) {
      auto x_3945 = x_3906->var_width_external;
      if (!EqualValue(x_3945, x_3944)) {
        var_modified_x_3946(x_3906);
      }
    }
    x_3906->has_var_width_external = true;
    x_3906->var_width_external = Asdouble(x_3944);
    WriteMetric();
    auto x_3949 = eval_expr_x_3948(x_3906);
    if (x_3906->has_var_y) {
      auto x_3950 = x_3906->var_y;
      if (!EqualValue(x_3950, x_3949)) {
        var_modified_x_3951(x_3906);
      }
    }
    x_3906->has_var_y = true;
    x_3906->var_y = Asdouble(x_3949);
    WriteMetric();
    auto x_3954 = eval_expr_x_3953(x_3906);
    if (x_3906->has_var_height_internal) {
      auto x_3955 = x_3906->var_height_internal;
      if (!EqualValue(x_3955, x_3954)) {
        var_modified_x_3956(x_3906);
      }
    }
    x_3906->has_var_height_internal = true;
    x_3906->var_height_internal = Asdouble(x_3954);
    WriteMetric();
    auto x_3959 = eval_expr_x_3958(x_3906);
    if (x_3906->has_var_height_external) {
      auto x_3960 = x_3906->var_height_external;
      if (!EqualValue(x_3960, x_3959)) {
        var_modified_x_3961(x_3906);
      }
    }
    x_3906->has_var_height_external = true;
    x_3906->var_height_external = Asdouble(x_3959);
    WriteMetric();
    auto x_3964 = eval_expr_x_3963(x_3906);
    if (x_3906->has_var_line_height) {
      auto x_3965 = x_3906->var_line_height;
      if (!EqualValue(x_3965, x_3964)) {
        var_modified_x_3966(x_3906);
      }
    }
    x_3906->has_var_line_height = true;
    x_3906->var_line_height = Asdouble(x_3964);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3818(const auto &x_3968) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3969) {
    WriteMetric();
    auto x_3971 = eval_expr_x_3970(x_3968);
    if (x_3968->has_var_width_expr) {
      auto x_3972 = x_3968->var_width_expr;
      if (!EqualValue(x_3972, x_3971)) {
        var_modified_x_3973(x_3968);
      }
    }
    x_3968->has_var_width_expr = true;
    x_3968->var_width_expr = AsDEString(x_3971);
    WriteMetric();
    auto x_3976 = eval_expr_x_3975(x_3968);
    if (x_3968->has_var_is_default_case) {
      auto x_3977 = x_3968->var_is_default_case;
      if (!EqualValue(x_3977, x_3976)) {
        var_modified_x_3978(x_3968);
      }
    }
    x_3968->has_var_is_default_case = true;
    x_3968->var_is_default_case = Asbool(x_3976);
    WriteMetric();
    auto x_3981 = eval_expr_x_3980(x_3968);
    if (x_3968->has_var_intrinsic_width_is_width) {
      auto x_3982 = x_3968->var_intrinsic_width_is_width;
      if (!EqualValue(x_3982, x_3981)) {
        var_modified_x_3983(x_3968);
      }
    }
    x_3968->has_var_intrinsic_width_is_width = true;
    x_3968->var_intrinsic_width_is_width = Asbool(x_3981);
    WriteMetric();
    auto x_3986 = eval_expr_x_3985(x_3968);
    if (x_3968->has_var_children_intrinsic_width) {
      auto x_3987 = x_3968->var_children_intrinsic_width;
      if (!EqualValue(x_3987, x_3986)) {
        var_modified_x_3988(x_3968);
      }
    }
    x_3968->has_var_children_intrinsic_width = true;
    x_3968->var_children_intrinsic_width = Asdouble(x_3986);
    WriteMetric();
    auto x_3991 = eval_expr_x_3990(x_3968);
    if (x_3968->has_var_intrinsic_width_internal) {
      auto x_3992 = x_3968->var_intrinsic_width_internal;
      if (!EqualValue(x_3992, x_3991)) {
        var_modified_x_3993(x_3968);
      }
    }
    x_3968->has_var_intrinsic_width_internal = true;
    x_3968->var_intrinsic_width_internal = Asdouble(x_3991);
    WriteMetric();
    auto x_3996 = eval_expr_x_3995(x_3968);
    if (x_3968->has_var_intrinsic_width_external) {
      auto x_3997 = x_3968->var_intrinsic_width_external;
      if (!EqualValue(x_3997, x_3996)) {
        var_modified_x_3998(x_3968);
      }
    }
    x_3968->has_var_intrinsic_width_external = true;
    x_3968->var_intrinsic_width_external = Asdouble(x_3996);
    WriteMetric();
    auto x_4001 = eval_expr_x_4000(x_3968);
    if (x_3968->has_var_intrinsic_current_line_width) {
      auto x_4002 = x_3968->var_intrinsic_current_line_width;
      if (!EqualValue(x_4002, x_4001)) {
        var_modified_x_4003(x_3968);
      }
    }
    x_3968->has_var_intrinsic_current_line_width = true;
    x_3968->var_intrinsic_current_line_width = Asdouble(x_4001);
    WriteMetric();
    auto x_4006 = eval_expr_x_4005(x_3968);
    if (x_3968->has_var_intrinsic_width_max) {
      auto x_4007 = x_3968->var_intrinsic_width_max;
      if (!EqualValue(x_4007, x_4006)) {
        var_modified_x_4008(x_3968);
      }
    }
    x_3968->has_var_intrinsic_width_max = true;
    x_3968->var_intrinsic_width_max = Asdouble(x_4006);
    WriteMetric();
    auto x_4011 = eval_expr_x_4010(x_3968);
    if (x_3968->has_var_intrinsic_width_sum) {
      auto x_4012 = x_3968->var_intrinsic_width_sum;
      if (!EqualValue(x_4012, x_4011)) {
        var_modified_x_4013(x_3968);
      }
    }
    x_3968->has_var_intrinsic_width_sum = true;
    x_3968->var_intrinsic_width_sum = Asdouble(x_4011);
    WriteMetric();
    auto x_4016 = eval_expr_x_4015(x_3968);
    if (x_3968->has_var_children_intrinsic_height) {
      auto x_4017 = x_3968->var_children_intrinsic_height;
      if (!EqualValue(x_4017, x_4016)) {
        var_modified_x_4018(x_3968);
      }
    }
    x_3968->has_var_children_intrinsic_height = true;
    x_3968->var_children_intrinsic_height = Asdouble(x_4016);
    WriteMetric();
    auto x_4021 = eval_expr_x_4020(x_3968);
    if (x_3968->has_var_height_expr) {
      auto x_4022 = x_3968->var_height_expr;
      if (!EqualValue(x_4022, x_4021)) {
        var_modified_x_4023(x_3968);
      }
    }
    x_3968->has_var_height_expr = true;
    x_3968->var_height_expr = AsDEString(x_4021);
    WriteMetric();
    auto x_4026 = eval_expr_x_4025(x_3968);
    if (x_3968->has_var_intrinsic_height_is_height) {
      auto x_4027 = x_3968->var_intrinsic_height_is_height;
      if (!EqualValue(x_4027, x_4026)) {
        var_modified_x_4028(x_3968);
      }
    }
    x_3968->has_var_intrinsic_height_is_height = true;
    x_3968->var_intrinsic_height_is_height = Asbool(x_4026);
    WriteMetric();
    auto x_4031 = eval_expr_x_4030(x_3968);
    if (x_3968->has_var_intrinsic_height_internal) {
      auto x_4032 = x_3968->var_intrinsic_height_internal;
      if (!EqualValue(x_4032, x_4031)) {
        var_modified_x_4033(x_3968);
      }
    }
    x_3968->has_var_intrinsic_height_internal = true;
    x_3968->var_intrinsic_height_internal = Asdouble(x_4031);
    WriteMetric();
    auto x_4036 = eval_expr_x_4035(x_3968);
    if (x_3968->has_var_intrinsic_height_external) {
      auto x_4037 = x_3968->var_intrinsic_height_external;
      if (!EqualValue(x_4037, x_4036)) {
        var_modified_x_4038(x_3968);
      }
    }
    x_3968->has_var_intrinsic_height_external = true;
    x_3968->var_intrinsic_height_external = Asdouble(x_4036);
    WriteMetric();
    auto x_4041 = eval_expr_x_4040(x_3968);
    if (x_3968->has_var_intrinsic_height_sum) {
      auto x_4042 = x_3968->var_intrinsic_height_sum;
      if (!EqualValue(x_4042, x_4041)) {
        var_modified_x_4043(x_3968);
      }
    }
    x_3968->has_var_intrinsic_height_sum = true;
    x_3968->var_intrinsic_height_sum = Asdouble(x_4041);
    WriteMetric();
    auto x_4046 = eval_expr_x_4045(x_3968);
    if (x_3968->has_var_intrinsic_current_line_height) {
      auto x_4047 = x_3968->var_intrinsic_current_line_height;
      if (!EqualValue(x_4047, x_4046)) {
        var_modified_x_4048(x_3968);
      }
    }
    x_3968->has_var_intrinsic_current_line_height = true;
    x_3968->var_intrinsic_current_line_height = Asdouble(x_4046);
    WriteMetric();
    auto x_4051 = eval_expr_x_4050(x_3968);
    if (x_3968->has_var_finished_intrinsic_height_sum) {
      auto x_4052 = x_3968->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_4052, x_4051)) {
        var_modified_x_4053(x_3968);
      }
    }
    x_3968->has_var_finished_intrinsic_height_sum = true;
    x_3968->var_finished_intrinsic_height_sum = Asdouble(x_4051);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3817(const auto &x_4055) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4056) {
    WriteMetric();
    auto x_4058 = eval_expr_x_4057(x_4055);
    if (x_4055->has_var_display) {
      auto x_4059 = x_4055->var_display;
      if (!EqualValue(x_4059, x_4058)) {
        var_modified_x_4060(x_4055);
      }
    }
    x_4055->has_var_display = true;
    x_4055->var_display = AsDEString(x_4058);
    WriteMetric();
    auto x_4063 = eval_expr_x_4062(x_4055);
    if (x_4055->has_var_position) {
      auto x_4064 = x_4055->var_position;
      if (!EqualValue(x_4064, x_4063)) {
        var_modified_x_4065(x_4055);
      }
    }
    x_4055->has_var_position = true;
    x_4055->var_position = AsDEString(x_4063);
    WriteMetric();
    auto x_4068 = eval_expr_x_4067(x_4055);
    if (x_4055->has_var_flex_grow) {
      auto x_4069 = x_4055->var_flex_grow;
      if (!EqualValue(x_4069, x_4068)) {
        var_modified_x_4070(x_4055);
      }
    }
    x_4055->has_var_flex_grow = true;
    x_4055->var_flex_grow = Asdouble(x_4068);
    WriteMetric();
    auto x_4073 = eval_expr_x_4072(x_4055);
    if (x_4055->has_var_flex_shrink) {
      auto x_4074 = x_4055->var_flex_shrink;
      if (!EqualValue(x_4074, x_4073)) {
        var_modified_x_4075(x_4055);
      }
    }
    x_4055->has_var_flex_shrink = true;
    x_4055->var_flex_shrink = Asdouble(x_4073);
    WriteMetric();
    auto x_4078 = eval_expr_x_4077(x_4055);
    if (x_4055->has_var_flex_grow_sum) {
      auto x_4079 = x_4055->var_flex_grow_sum;
      if (!EqualValue(x_4079, x_4078)) {
        var_modified_x_4080(x_4055);
      }
    }
    x_4055->has_var_flex_grow_sum = true;
    x_4055->var_flex_grow_sum = Asdouble(x_4078);
    WriteMetric();
    auto x_4083 = eval_expr_x_4082(x_4055);
    if (x_4055->has_var_flex_shrink_sum) {
      auto x_4084 = x_4055->var_flex_shrink_sum;
      if (!EqualValue(x_4084, x_4083)) {
        var_modified_x_4085(x_4055);
      }
    }
    x_4055->has_var_flex_shrink_sum = true;
    x_4055->var_flex_shrink_sum = Asdouble(x_4083);
    WriteMetric();
    auto x_4088 = eval_expr_x_4087(x_4055);
    if (x_4055->has_var_flex_direction) {
      auto x_4089 = x_4055->var_flex_direction;
      if (!EqualValue(x_4089, x_4088)) {
        var_modified_x_4090(x_4055);
      }
    }
    x_4055->has_var_flex_direction = true;
    x_4055->var_flex_direction = AsDEString(x_4088);
    WriteMetric();
    auto x_4093 = eval_expr_x_4092(x_4055);
    if (x_4055->has_var_is_flex_row) {
      auto x_4094 = x_4055->var_is_flex_row;
      if (!EqualValue(x_4094, x_4093)) {
        var_modified_x_4095(x_4055);
      }
    }
    x_4055->has_var_is_flex_row = true;
    x_4055->var_is_flex_row = Asbool(x_4093);
    WriteMetric();
    auto x_4098 = eval_expr_x_4097(x_4055);
    if (x_4055->has_var_is_flex_column) {
      auto x_4099 = x_4055->var_is_flex_column;
      if (!EqualValue(x_4099, x_4098)) {
        var_modified_x_4100(x_4055);
      }
    }
    x_4055->has_var_is_flex_column = true;
    x_4055->var_is_flex_column = Asbool(x_4098);
    WriteMetric();
    auto x_4103 = eval_expr_x_4102(x_4055);
    if (x_4055->has_var_width_attr_expr) {
      auto x_4104 = x_4055->var_width_attr_expr;
      if (!EqualValue(x_4104, x_4103)) {
        var_modified_x_4105(x_4055);
      }
    }
    x_4055->has_var_width_attr_expr = true;
    x_4055->var_width_attr_expr = AsDEString(x_4103);
    WriteMetric();
    auto x_4108 = eval_expr_x_4107(x_4055);
    if (x_4055->has_var_has_width_attr) {
      auto x_4109 = x_4055->var_has_width_attr;
      if (!EqualValue(x_4109, x_4108)) {
        var_modified_x_4110(x_4055);
      }
    }
    x_4055->has_var_has_width_attr = true;
    x_4055->var_has_width_attr = Asbool(x_4108);
    WriteMetric();
    auto x_4113 = eval_expr_x_4112(x_4055);
    if (x_4055->has_var_height_attr_expr) {
      auto x_4114 = x_4055->var_height_attr_expr;
      if (!EqualValue(x_4114, x_4113)) {
        var_modified_x_4115(x_4055);
      }
    }
    x_4055->has_var_height_attr_expr = true;
    x_4055->var_height_attr_expr = AsDEString(x_4113);
    WriteMetric();
    auto x_4118 = eval_expr_x_4117(x_4055);
    if (x_4055->has_var_has_height_attr) {
      auto x_4119 = x_4055->var_has_height_attr;
      if (!EqualValue(x_4119, x_4118)) {
        var_modified_x_4120(x_4055);
      }
    }
    x_4055->has_var_has_height_attr = true;
    x_4055->var_has_height_attr = Asbool(x_4118);
    WriteMetric();
    auto x_4123 = eval_expr_x_4122(x_4055);
    if (x_4055->has_var_is_svg_block) {
      auto x_4124 = x_4055->var_is_svg_block;
      if (!EqualValue(x_4124, x_4123)) {
        var_modified_x_4125(x_4055);
      }
    }
    x_4055->has_var_is_svg_block = true;
    x_4055->var_is_svg_block = Asbool(x_4123);
    WriteMetric();
    auto x_4128 = eval_expr_x_4127(x_4055);
    if (x_4055->has_var_inside_svg) {
      auto x_4129 = x_4055->var_inside_svg;
      if (!EqualValue(x_4129, x_4128)) {
        var_modified_x_4130(x_4055);
      }
    }
    x_4055->has_var_inside_svg = true;
    x_4055->var_inside_svg = Asbool(x_4128);
    WriteMetric();
    auto x_4133 = eval_expr_x_4132(x_4055);
    if (x_4055->has_var_disabled) {
      auto x_4134 = x_4055->var_disabled;
      if (!EqualValue(x_4134, x_4133)) {
        var_modified_x_4135(x_4055);
      }
    }
    x_4055->has_var_disabled = true;
    x_4055->var_disabled = Asbool(x_4133);
    WriteMetric();
    auto x_4138 = eval_expr_x_4137(x_4055);
    if (x_4055->has_var_visible) {
      auto x_4139 = x_4055->var_visible;
      if (!EqualValue(x_4139, x_4138)) {
        var_modified_x_4140(x_4055);
      }
    }
    x_4055->has_var_visible = true;
    x_4055->var_visible = Asbool(x_4138);
    WriteMetric();
    auto x_4143 = eval_expr_x_4142(x_4055);
    if (x_4055->has_var_line_break) {
      auto x_4144 = x_4055->var_line_break;
      if (!EqualValue(x_4144, x_4143)) {
        var_modified_x_4145(x_4055);
      }
    }
    x_4055->has_var_line_break = true;
    x_4055->var_line_break = Asbool(x_4143);
    return MakeUnit();
  })));
}
Unit x_3546(const auto &x_3547, const auto &x_3548, const auto &x_3549) {
  auto x_3550 = ListHeadExn(x_3547);
  auto x_3551 = ListTailExn(x_3547);
  if (ListIsEmpty(x_3551)) {
    auto x_3552 = ListSplitN(x_3548->children, x_3550);
    OutputChangeMetric(IntAdd(layout_size_x_3503(ListNthExn(x_3548->children, x_3550)), layout_size_x_3503(x_3549)));
    x_3548->children = ListAppend(Zro(x_3552), Cons(x_3549, ListTailExn(Fst(x_3552))));
    return MakeUnit();
  } else {
    return x_3546(x_3551, ListNthExn(x_3548->children, x_3550), x_3549);
  }
}
Unit replace_layout_node_x_3545(const auto &x_3547, const auto &x_3548, const auto &x_3549) {
  return x_3546(x_3547, x_3548, x_3549);
}
Unit x_3553(const auto &x_3554, const auto &x_3555, const auto &x_3556) {
  auto x_3557 = ListHeadExn(x_3554);
  auto x_3558 = ListTailExn(x_3554);
  if (ListIsEmpty(x_3558)) {
    OutputChangeMetric(layout_size_x_3503(x_3556));
    auto x_3559 = ListSplitN(x_3555->children, x_3557);
    x_3555->children = ListAppend(Zro(x_3559), Cons(x_3556, Fst(x_3559)));
    return MakeUnit();
  } else {
    return x_3553(x_3558, ListNthExn(x_3555->children, x_3557), x_3556);
  }
}
Unit add_layout_node_x_3543(const auto &x_3554, const auto &x_3555, const auto &x_3556) {
  return x_3553(x_3554, x_3555, x_3556);
}
Unit x_3560(const auto &x_3561, const auto &x_3562, const auto &x_3563) {
  auto x_3564 = ListHeadExn(x_3561);
  auto x_3565 = ListTailExn(x_3561);
  if (ListIsEmpty(x_3565)) {
    OutputChangeMetric(layout_size_x_3503(ListNthExn(x_3562->children, x_3564)));
    auto x_3566 = ListSplitN(x_3562->children, x_3564);
    x_3562->children = ListAppend(Zro(x_3566), ListTailExn(Fst(x_3566)));
    return MakeUnit();
  } else {
    return x_3560(x_3565, ListNthExn(x_3562->children, x_3564), x_3563);
  }
}
Unit remove_layout_node_x_3541(const auto &x_3561, const auto &x_3562, const auto &x_3563) {
  return x_3560(x_3561, x_3562, x_3563);
}
Unit x_3567(const auto &x_3568, const auto &x_3569, const auto &x_3570) {
  return ListMatch(
      x_3568,
      [&](const auto &x_3573) {
        auto x_3574 = Zro(x_3570);
        auto x_3575 = Zro(x_3574);
        auto x_3576 = Fst(x_3574);
        auto x_3577 = Fst(x_3570);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5620 = x_3575;
        if (x_5620 == "attributes") {
          std::string x_5621 = x_3576;
          if (x_5621 == "width") {
            WriteMetric();
            x_3569->has_attr_width = true;
            x_3569->attr_width = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_1_bb_time_table)) {
              auto x_3578 = UnSome(x_3569->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3578, x_3569, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5621 == "image_height") {
            WriteMetric();
            x_3569->has_attr_image_height = true;
            x_3569->attr_image_height = Asint64_t(x_3577);
            if (IsSome(x_3569->meta->bb_0_bb_time_table)) {
              auto x_3580 = UnSome(x_3569->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3580, x_3569, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5621 == "image_width") {
            WriteMetric();
            x_3569->has_attr_image_width = true;
            x_3569->attr_image_width = Asint64_t(x_3577);
            if (IsSome(x_3569->meta->bb_0_bb_time_table)) {
              auto x_3582 = UnSome(x_3569->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3582, x_3569, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5621 == "height") {
            WriteMetric();
            x_3569->has_attr_height = true;
            x_3569->attr_height = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_1_bb_time_table)) {
              auto x_3584 = UnSome(x_3569->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3584, x_3569, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5621 == "viewBox") {
            WriteMetric();
            x_3569->has_attr_viewBox = true;
            x_3569->attr_viewBox = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_0_bb_time_table)) {
              auto x_3586 = UnSome(x_3569->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3586, x_3569, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5620 == "properties") {
          std::string x_5622 = x_3576;
          if (x_5622 == "width") {
            WriteMetric();
            x_3569->has_prop_width = true;
            x_3569->prop_width = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_0_bb_time_table)) {
              auto x_3588 = UnSome(x_3569->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3588, x_3569, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5622 == "flex-grow") {
            WriteMetric();
            x_3569->has_prop_flex_grow = true;
            x_3569->prop_flex_grow = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_1_bb_time_table)) {
              auto x_3590 = UnSome(x_3569->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3590, x_3569, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5622 == "height") {
            WriteMetric();
            x_3569->has_prop_height = true;
            x_3569->prop_height = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_0_bb_time_table)) {
              auto x_3592 = UnSome(x_3569->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3592, x_3569, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5622 == "display") {
            WriteMetric();
            x_3569->has_prop_display = true;
            x_3569->prop_display = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_1_bb_time_table)) {
              auto x_3594 = UnSome(x_3569->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3594, x_3569, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5622 == "position") {
            WriteMetric();
            x_3569->has_prop_position = true;
            x_3569->prop_position = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_1_bb_time_table)) {
              auto x_3596 = UnSome(x_3569->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3596, x_3569, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5622 == "flex-shrink") {
            WriteMetric();
            x_3569->has_prop_flex_shrink = true;
            x_3569->prop_flex_shrink = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_1_bb_time_table)) {
              auto x_3598 = UnSome(x_3569->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3598, x_3569, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5622 == "flex-direction") {
            WriteMetric();
            x_3569->has_prop_flex_direction = true;
            x_3569->prop_flex_direction = AsDEString(x_3577);
            if (IsSome(x_3569->meta->bb_1_bb_time_table)) {
              auto x_3600 = UnSome(x_3569->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3600, x_3569, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3571, const auto &x_3572) {
        return x_3567(x_3572, ListNthExn(x_3569->children, x_3571), x_3570);
      });
}
Unit insert_value_x_3539(const auto &x_3568, const auto &x_3569, const auto &x_3570) {
  return x_3567(x_3568, x_3569, x_3570);
}
Unit x_3602(const auto &x_3603, const auto &x_3604, const auto &x_3605) {
  return ListMatch(
      x_3603,
      [&](const auto &x_3608) {
        auto x_3609 = Zro(x_3605);
        auto x_3610 = Fst(x_3605);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5623 = x_3609;
        if (x_5623 == "attributes") {
          std::string x_5624 = x_3610;
          if (x_5624 == "width") {
            WriteMetric();
            x_3604->has_attr_width = false;
            if (IsSome(x_3604->meta->bb_1_bb_time_table)) {
              auto x_3611 = UnSome(x_3604->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3611, x_3604, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5624 == "image_height") {
            WriteMetric();
            x_3604->has_attr_image_height = false;
            if (IsSome(x_3604->meta->bb_0_bb_time_table)) {
              auto x_3613 = UnSome(x_3604->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3613, x_3604, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5624 == "image_width") {
            WriteMetric();
            x_3604->has_attr_image_width = false;
            if (IsSome(x_3604->meta->bb_0_bb_time_table)) {
              auto x_3615 = UnSome(x_3604->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3615, x_3604, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5624 == "height") {
            WriteMetric();
            x_3604->has_attr_height = false;
            if (IsSome(x_3604->meta->bb_1_bb_time_table)) {
              auto x_3617 = UnSome(x_3604->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3617, x_3604, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5624 == "viewBox") {
            WriteMetric();
            x_3604->has_attr_viewBox = false;
            if (IsSome(x_3604->meta->bb_0_bb_time_table)) {
              auto x_3619 = UnSome(x_3604->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3619, x_3604, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5623 == "properties") {
          std::string x_5625 = x_3610;
          if (x_5625 == "width") {
            WriteMetric();
            x_3604->has_prop_width = false;
            if (IsSome(x_3604->meta->bb_0_bb_time_table)) {
              auto x_3621 = UnSome(x_3604->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3621, x_3604, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5625 == "flex-grow") {
            WriteMetric();
            x_3604->has_prop_flex_grow = false;
            if (IsSome(x_3604->meta->bb_1_bb_time_table)) {
              auto x_3623 = UnSome(x_3604->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3623, x_3604, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5625 == "height") {
            WriteMetric();
            x_3604->has_prop_height = false;
            if (IsSome(x_3604->meta->bb_0_bb_time_table)) {
              auto x_3625 = UnSome(x_3604->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3625, x_3604, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5625 == "display") {
            WriteMetric();
            x_3604->has_prop_display = false;
            if (IsSome(x_3604->meta->bb_1_bb_time_table)) {
              auto x_3627 = UnSome(x_3604->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3627, x_3604, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5625 == "position") {
            WriteMetric();
            x_3604->has_prop_position = false;
            if (IsSome(x_3604->meta->bb_1_bb_time_table)) {
              auto x_3629 = UnSome(x_3604->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3629, x_3604, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5625 == "flex-shrink") {
            WriteMetric();
            x_3604->has_prop_flex_shrink = false;
            if (IsSome(x_3604->meta->bb_1_bb_time_table)) {
              auto x_3631 = UnSome(x_3604->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3631, x_3604, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5625 == "flex-direction") {
            WriteMetric();
            x_3604->has_prop_flex_direction = false;
            if (IsSome(x_3604->meta->bb_1_bb_time_table)) {
              auto x_3633 = UnSome(x_3604->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3633, x_3604, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3606, const auto &x_3607) {
        return x_3602(x_3607, ListNthExn(x_3604->children, x_3606), x_3605);
      });
}
Unit delete_value_x_3537(const auto &x_3603, const auto &x_3604, const auto &x_3605) {
  return x_3602(x_3603, x_3604, x_3605);
}
Unit x_3635(const auto &x_3636, const auto &x_3637, const auto &x_3638) {
  return ListMatch(
      x_3636,
      [&](const auto &x_3641) {
        auto x_3642 = Zro(x_3638);
        auto x_3643 = Zro(x_3642);
        auto x_3644 = Fst(x_3642);
        auto x_3645 = Fst(x_3638);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5626 = x_3643;
        if (x_5626 == "attributes") {
          std::string x_5627 = x_3644;
          if (x_5627 == "width") {
            WriteMetric();
            x_3637->has_attr_width = false;
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3646 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3646, x_3637, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_3637->has_attr_width = true;
            x_3637->attr_width = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3648 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3648, x_3637, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5627 == "image_height") {
            WriteMetric();
            x_3637->has_attr_image_height = false;
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3650 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3650, x_3637, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_3637->has_attr_image_height = true;
            x_3637->attr_image_height = Asint64_t(x_3645);
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3652 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3652, x_3637, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5627 == "image_width") {
            WriteMetric();
            x_3637->has_attr_image_width = false;
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3654 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3654, x_3637, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_3637->has_attr_image_width = true;
            x_3637->attr_image_width = Asint64_t(x_3645);
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3656 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3656, x_3637, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5627 == "height") {
            WriteMetric();
            x_3637->has_attr_height = false;
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3658 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3658, x_3637, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_3637->has_attr_height = true;
            x_3637->attr_height = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3660 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3660, x_3637, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5627 == "viewBox") {
            WriteMetric();
            x_3637->has_attr_viewBox = false;
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3662 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3662, x_3637, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_3637->has_attr_viewBox = true;
            x_3637->attr_viewBox = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3664 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3664, x_3637, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5626 == "properties") {
          std::string x_5628 = x_3644;
          if (x_5628 == "width") {
            WriteMetric();
            x_3637->has_prop_width = false;
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3666 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3666, x_3637, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_3637->has_prop_width = true;
            x_3637->prop_width = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3668 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3668, x_3637, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5628 == "flex-grow") {
            WriteMetric();
            x_3637->has_prop_flex_grow = false;
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3670 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3670, x_3637, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_3637->has_prop_flex_grow = true;
            x_3637->prop_flex_grow = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3672 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3672, x_3637, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5628 == "height") {
            WriteMetric();
            x_3637->has_prop_height = false;
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3674 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3674, x_3637, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_3637->has_prop_height = true;
            x_3637->prop_height = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_0_bb_time_table)) {
              auto x_3676 = UnSome(x_3637->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3676, x_3637, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_5628 == "display") {
            WriteMetric();
            x_3637->has_prop_display = false;
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3678 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3678, x_3637, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_3637->has_prop_display = true;
            x_3637->prop_display = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3680 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3680, x_3637, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5628 == "position") {
            WriteMetric();
            x_3637->has_prop_position = false;
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3682 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3682, x_3637, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_3637->has_prop_position = true;
            x_3637->prop_position = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3684 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3684, x_3637, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5628 == "flex-shrink") {
            WriteMetric();
            x_3637->has_prop_flex_shrink = false;
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3686 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3686, x_3637, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_3637->has_prop_flex_shrink = true;
            x_3637->prop_flex_shrink = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3688 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3688, x_3637, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_5628 == "flex-direction") {
            WriteMetric();
            x_3637->has_prop_flex_direction = false;
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3690 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3690, x_3637, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_3637->has_prop_flex_direction = true;
            x_3637->prop_flex_direction = AsDEString(x_3645);
            if (IsSome(x_3637->meta->bb_1_bb_time_table)) {
              auto x_3692 = UnSome(x_3637->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3692, x_3637, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3639, const auto &x_3640) {
        return x_3635(x_3640, ListNthExn(x_3637->children, x_3639), x_3638);
      });
}
Unit replace_value_x_3535(const auto &x_3636, const auto &x_3637, const auto &x_3638) {
  return x_3635(x_3636, x_3637, x_3638);
}
Unit x_3694(const auto &x_3695, const auto &x_3696, const auto &x_3697) {
  auto x_3698 = ListHeadExn(x_3695);
  auto x_3699 = ListTailExn(x_3695);
  if (ListIsEmpty(x_3699)) {
    InputChangeMetric(IntAdd(node_size_x_3504(ListNthExn(x_3696->children, x_3698)), node_size_x_3504(x_3697)));
    auto x_3700 = ListSplitN(x_3696->children, x_3698);
    auto x_3701 = Zro(x_3700);
    auto x_3702 = Fst(x_3700);
    auto x_3703 = ListHeadExn(x_3702);
    auto x_3704 = ListTailExn(x_3702);
    x_3696->children = ListAppend(x_3701, x_3704);
    x_3703->meta->alive = false;
    OptionMatch(
        x_3703->prev, [&](const auto &x_3706) { return MakeUnit(); },
        [&](const auto &x_3705) {
          x_3705->next = ToPath(x_3703->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3703->next, [&](const auto &x_3708) { return MakeUnit(); },
        [&](const auto &x_3707) {
          x_3707->prev = ToPath(x_3703->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3701)) {
      x_3696->first = ToPath(ListHead(x_3704));
    }
    if (ListIsEmpty(x_3704)) {
      x_3696->last = ToPath(ListLast(x_3701));
    }
    OptionMatch(
        x_3703->next, [&](const auto &x_3712) { return MakeUnit(); },
        [&](const auto &x_3709) {
          if (IsSome(x_3709->meta->bb_1_bb_time_table)) {
            auto x_3710 = UnSome(x_3709->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3710, x_3709, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3696->children)) {
      if (IsSome(x_3696->meta->bb_0_bb_time_table)) {
        auto x_3713 = UnSome(x_3696->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3713, x_3696, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_3704)) {
      if (IsSome(x_3696->meta->bb_0_bb_time_table)) {
        auto x_3715 = UnSome(x_3696->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3715, x_3696, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_3703->next, [&](const auto &x_3720) { return MakeUnit(); },
        [&](const auto &x_3717) {
          if (IsSome(x_3717->meta->bb_0_bb_time_table)) {
            auto x_3718 = UnSome(x_3717->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3718, x_3717, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3696->children)) {
      if (IsSome(x_3696->meta->bb_2_bb_time_table)) {
        auto x_3721 = UnSome(x_3696->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3721, x_3696, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_3704)) {
      if (IsSome(x_3696->meta->bb_2_bb_time_table)) {
        auto x_3723 = UnSome(x_3696->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3723, x_3696, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_3703->next, [&](const auto &x_3728) { return MakeUnit(); },
        [&](const auto &x_3725) {
          if (IsSome(x_3725->meta->bb_2_bb_time_table)) {
            auto x_3726 = UnSome(x_3725->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3726, x_3725, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_3729 = ListSplitN(x_3696->children, x_3698);
    auto x_3730 = Zro(x_3729);
    auto x_3731 = Fst(x_3729);
    x_3696->children = ListAppend(x_3730, Cons(x_3697, x_3731));
    if (ListIsEmpty(x_3730)) {
      x_3696->first = x_3697.get();
    }
    if (ListIsEmpty(x_3731)) {
      x_3696->last = x_3697.get();
    }
    OptionMatch(
        ListLast(x_3730),
        [&](const auto &x_3733) {
          x_3697->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3732) {
          x_3697->prev = x_3732.get();
          x_3732->next = x_3697.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3731),
        [&](const auto &x_3735) {
          x_3697->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3734) {
          x_3697->next = x_3734.get();
          x_3734->prev = x_3697.get();
          return MakeUnit();
        });
    x_3697->parent = x_3696.get();
    auto x_3736 = (x_3697->parent);
    if (IsSome(x_3736->meta->pass_0_proc_time_table)) {
      auto x_3739 = OptionMatch(
          x_3697->prev, [&](const auto &x_3738) { return NextTotalOrder(UnSome(x_3736->meta->bb_1_bb_time_table)); },
          [&](const auto &x_3737) { return NextTotalOrder(UnSome(x_3737->meta->pass_0_proc_time_table)); });
      x_3697->meta->pass_0_proc_time_table = x_3739;
      MetaWriteMetric();
      QueueForcePush(x_3739, x_3697, MakeRecomputeProc("pass_0"));
    }
    OptionMatch(
        x_3697->next, [&](const auto &x_3744) { return MakeUnit(); },
        [&](const auto &x_3741) {
          if (IsSome(x_3741->meta->bb_1_bb_time_table)) {
            auto x_3742 = UnSome(x_3741->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3742, x_3741, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3696->children)) {
      if (IsSome(x_3696->meta->bb_0_bb_time_table)) {
        auto x_3745 = UnSome(x_3696->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3745, x_3696, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_3731)) {
      if (IsSome(x_3696->meta->bb_0_bb_time_table)) {
        auto x_3747 = UnSome(x_3696->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3747, x_3696, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_3697->next, [&](const auto &x_3752) { return MakeUnit(); },
        [&](const auto &x_3749) {
          if (IsSome(x_3749->meta->bb_0_bb_time_table)) {
            auto x_3750 = UnSome(x_3749->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3750, x_3749, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    auto x_3753 = (x_3697->parent);
    if (IsSome(x_3753->meta->pass_1_proc_time_table)) {
      auto x_3756 = OptionMatch(
          x_3697->prev, [&](const auto &x_3755) { return NextTotalOrder(UnSome(x_3753->meta->bb_2_bb_time_table)); },
          [&](const auto &x_3754) { return NextTotalOrder(UnSome(x_3754->meta->pass_1_proc_time_table)); });
      x_3697->meta->pass_1_proc_time_table = x_3756;
      MetaWriteMetric();
      QueueForcePush(x_3756, x_3697, MakeRecomputeProc("pass_1"));
    }
    if (ListIsSingleton(x_3696->children)) {
      if (IsSome(x_3696->meta->bb_2_bb_time_table)) {
        auto x_3758 = UnSome(x_3696->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3758, x_3696, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_3731)) {
      if (IsSome(x_3696->meta->bb_2_bb_time_table)) {
        auto x_3760 = UnSome(x_3696->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3760, x_3696, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_3697->next, [&](const auto &x_3765) { return MakeUnit(); },
        [&](const auto &x_3762) {
          if (IsSome(x_3762->meta->bb_2_bb_time_table)) {
            auto x_3763 = UnSome(x_3762->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3763, x_3762, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3694(x_3699, ListNthExn(x_3696->children, x_3698), x_3697);
  }
}
Unit replace_node_x_3533(const auto &x_3695, const auto &x_3696, const auto &x_3697) {
  return x_3694(x_3695, x_3696, x_3697);
}
Unit x_3766(const auto &x_3767) {
  ListIter2(x_3767->children, [&](const auto &x_3768, const auto &x_3769) {
    x_3768->parent = x_3767.get();
    x_3769->parent = x_3767.get();
    x_3768->next = x_3769.get();
    x_3769->prev = x_3768.get();
    x_3766(x_3768);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3767->children),
      [&](const auto &x_3771) {
        x_3767->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3770) {
        x_3767->first = x_3770.get();
        x_3770->parent = x_3767.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3767->children),
      [&](const auto &x_3773) {
        x_3767->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3772) {
        x_3767->last = x_3772.get();
        x_3772->parent = x_3767.get();
        x_3766(x_3772);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3531(const auto &x_3767) { return x_3766(x_3767); }
Unit x_3774(const auto &x_3775, const auto &x_3776, const auto &x_3777) {
  auto x_3778 = ListHeadExn(x_3775);
  auto x_3779 = ListTailExn(x_3775);
  if (ListIsEmpty(x_3779)) {
    InputChangeMetric(node_size_x_3504(ListNthExn(x_3776->children, x_3778)));
    auto x_3780 = ListSplitN(x_3776->children, x_3778);
    auto x_3781 = Zro(x_3780);
    auto x_3782 = Fst(x_3780);
    auto x_3783 = ListHeadExn(x_3782);
    auto x_3784 = ListTailExn(x_3782);
    x_3776->children = ListAppend(x_3781, x_3784);
    x_3783->meta->alive = false;
    OptionMatch(
        x_3783->prev, [&](const auto &x_3786) { return MakeUnit(); },
        [&](const auto &x_3785) {
          x_3785->next = ToPath(x_3783->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3783->next, [&](const auto &x_3788) { return MakeUnit(); },
        [&](const auto &x_3787) {
          x_3787->prev = ToPath(x_3783->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3781)) {
      x_3776->first = ToPath(ListHead(x_3784));
    }
    if (ListIsEmpty(x_3784)) {
      x_3776->last = ToPath(ListLast(x_3781));
    }
    OptionMatch(
        x_3783->next, [&](const auto &x_3792) { return MakeUnit(); },
        [&](const auto &x_3789) {
          if (IsSome(x_3789->meta->bb_1_bb_time_table)) {
            auto x_3790 = UnSome(x_3789->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3790, x_3789, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3776->children)) {
      if (IsSome(x_3776->meta->bb_0_bb_time_table)) {
        auto x_3793 = UnSome(x_3776->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3793, x_3776, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_3784)) {
      if (IsSome(x_3776->meta->bb_0_bb_time_table)) {
        auto x_3795 = UnSome(x_3776->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3795, x_3776, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_3783->next, [&](const auto &x_3800) { return MakeUnit(); },
        [&](const auto &x_3797) {
          if (IsSome(x_3797->meta->bb_0_bb_time_table)) {
            auto x_3798 = UnSome(x_3797->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3798, x_3797, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3776->children)) {
      if (IsSome(x_3776->meta->bb_2_bb_time_table)) {
        auto x_3801 = UnSome(x_3776->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3801, x_3776, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_3784)) {
      if (IsSome(x_3776->meta->bb_2_bb_time_table)) {
        auto x_3803 = UnSome(x_3776->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3803, x_3776, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_3783->next, [&](const auto &x_3808) { return MakeUnit(); },
        [&](const auto &x_3805) {
          if (IsSome(x_3805->meta->bb_2_bb_time_table)) {
            auto x_3806 = UnSome(x_3805->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3806, x_3805, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_3774(x_3779, ListNthExn(x_3776->children, x_3778), x_3777);
  }
}
Unit remove_node_x_3529(const auto &x_3775, const auto &x_3776, const auto &x_3777) {
  return x_3774(x_3775, x_3776, x_3777);
}
Unit x_3809(const auto &x_3810) {
  if (!QueueIsEmpty()) {
    auto x_3811 = QueuePeek();
    auto x_3812 = Zro(x_3811);
    auto x_3813 = Fst(x_3811);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_3813.n->meta->alive) {
      RFMatch(
          x_3813.rf,
          [&](const auto &x_3816) {
            std::string x_5629 = x_3816;
            if (x_5629 == "bb_1") {
              return eval_stmts_x_3817(x_3813.n);
            } else if (x_5629 == "bb_0") {
              return eval_stmts_x_3818(x_3813.n);
            } else if (x_5629 == "bb_2") {
              return eval_stmts_x_3819(x_3813.n);
            } else {
              Panic();
            }
          },
          [&](const auto &x_3814) {
            auto x_3815 = ReadRef(current_time);
            WriteRef(current_time, x_3812);
            [&]() {
              std::string x_5630 = x_3814;
              if (x_5630 == "pass_0") {
                eval_stmts_x_3517(x_3813.n);
                x_3813.n->meta->pass_0_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else if (x_5630 == "pass_1") {
                eval_stmts_x_3519(x_3813.n);
                x_3813.n->meta->pass_1_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else {
                Panic();
              }
            }();
            WriteRef(current_time, x_3815);
            return MakeUnit();
          });
    }
    auto x_3820 = Zro(QueuePop());
    x_3809(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_3527(const auto &x_3810) { return x_3809(x_3810); }
Unit x_3821(const auto &x_3822, const auto &x_3823, const auto &x_3824) {
  auto x_3825 = ListHeadExn(x_3822);
  auto x_3826 = ListTailExn(x_3822);
  if (ListIsEmpty(x_3826)) {
    InputChangeMetric(node_size_x_3504(x_3824));
    auto x_3827 = ListSplitN(x_3823->children, x_3825);
    auto x_3828 = Zro(x_3827);
    auto x_3829 = Fst(x_3827);
    x_3823->children = ListAppend(x_3828, Cons(x_3824, x_3829));
    if (ListIsEmpty(x_3828)) {
      x_3823->first = x_3824.get();
    }
    if (ListIsEmpty(x_3829)) {
      x_3823->last = x_3824.get();
    }
    OptionMatch(
        ListLast(x_3828),
        [&](const auto &x_3831) {
          x_3824->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3830) {
          x_3824->prev = x_3830.get();
          x_3830->next = x_3824.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3829),
        [&](const auto &x_3833) {
          x_3824->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3832) {
          x_3824->next = x_3832.get();
          x_3832->prev = x_3824.get();
          return MakeUnit();
        });
    x_3824->parent = x_3823.get();
    auto x_3834 = (x_3824->parent);
    if (IsSome(x_3834->meta->pass_0_proc_time_table)) {
      auto x_3837 = OptionMatch(
          x_3824->prev, [&](const auto &x_3836) { return NextTotalOrder(UnSome(x_3834->meta->bb_1_bb_time_table)); },
          [&](const auto &x_3835) { return NextTotalOrder(UnSome(x_3835->meta->pass_0_proc_time_table)); });
      x_3824->meta->pass_0_proc_time_table = x_3837;
      MetaWriteMetric();
      QueueForcePush(x_3837, x_3824, MakeRecomputeProc("pass_0"));
    }
    OptionMatch(
        x_3824->next, [&](const auto &x_3842) { return MakeUnit(); },
        [&](const auto &x_3839) {
          if (IsSome(x_3839->meta->bb_1_bb_time_table)) {
            auto x_3840 = UnSome(x_3839->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3840, x_3839, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3823->children)) {
      if (IsSome(x_3823->meta->bb_0_bb_time_table)) {
        auto x_3843 = UnSome(x_3823->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3843, x_3823, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_3829)) {
      if (IsSome(x_3823->meta->bb_0_bb_time_table)) {
        auto x_3845 = UnSome(x_3823->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3845, x_3823, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_3824->next, [&](const auto &x_3850) { return MakeUnit(); },
        [&](const auto &x_3847) {
          if (IsSome(x_3847->meta->bb_0_bb_time_table)) {
            auto x_3848 = UnSome(x_3847->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3848, x_3847, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    auto x_3851 = (x_3824->parent);
    if (IsSome(x_3851->meta->pass_1_proc_time_table)) {
      auto x_3854 = OptionMatch(
          x_3824->prev, [&](const auto &x_3853) { return NextTotalOrder(UnSome(x_3851->meta->bb_2_bb_time_table)); },
          [&](const auto &x_3852) { return NextTotalOrder(UnSome(x_3852->meta->pass_1_proc_time_table)); });
      x_3824->meta->pass_1_proc_time_table = x_3854;
      MetaWriteMetric();
      QueueForcePush(x_3854, x_3824, MakeRecomputeProc("pass_1"));
    }
    if (ListIsSingleton(x_3823->children)) {
      if (IsSome(x_3823->meta->bb_2_bb_time_table)) {
        auto x_3856 = UnSome(x_3823->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3856, x_3823, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_3829)) {
      if (IsSome(x_3823->meta->bb_2_bb_time_table)) {
        auto x_3858 = UnSome(x_3823->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3858, x_3823, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_3824->next, [&](const auto &x_3863) { return MakeUnit(); },
        [&](const auto &x_3860) {
          if (IsSome(x_3860->meta->bb_2_bb_time_table)) {
            auto x_3861 = UnSome(x_3860->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3861, x_3860, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_3821(x_3826, ListNthExn(x_3823->children, x_3825), x_3824);
  }
}
Unit add_node_x_3525(const auto &x_3822, const auto &x_3823, const auto &x_3824) {
  return x_3821(x_3822, x_3823, x_3824);
}
Unit x_3864(const auto &x_3865) {
  ListIter2(x_3865->children, [&](const auto &x_3866, const auto &x_3867) {
    x_3866->parent = x_3865.get();
    x_3867->parent = x_3865.get();
    x_3866->next = x_3867.get();
    x_3867->prev = x_3866.get();
    x_3864(x_3866);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3865->children),
      [&](const auto &x_3869) {
        x_3865->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3868) {
        x_3865->first = x_3868.get();
        x_3868->parent = x_3865.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3865->children),
      [&](const auto &x_3871) {
        x_3865->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3870) {
        x_3865->last = x_3870.get();
        x_3870->parent = x_3865.get();
        x_3864(x_3870);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3523(const auto &x_3865) { return x_3864(x_3865); }
Unit eval_stmts_x_3519(const auto &x_3872) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3873) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_3874) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_3872->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_3819(x_3872);
      return MakeUnit();
    })));
    ListIter(x_3872->children, [&](const auto &x_3875) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3876) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3519(x_3875);
        x_3875->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3517(const auto &x_3877) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3878) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_3879) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_3877->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_3817(x_3877);
      return MakeUnit();
    })));
    ListIter(x_3877->children, [&](const auto &x_3880) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_3881) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3517(x_3880);
        x_3880->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_3882) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_3877->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_3818(x_3877);
      return MakeUnit();
    })));
    return MakeUnit();
  })));
}
Unit x_3883(const auto &x_3884) {
  ListIter2(x_3884->children, [&](const auto &x_3885, const auto &x_3886) {
    x_3885->parent = x_3884.get();
    x_3886->parent = x_3884.get();
    x_3885->next = x_3886.get();
    x_3886->prev = x_3885.get();
    x_3883(x_3885);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3884->children),
      [&](const auto &x_3888) {
        x_3884->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3887) {
        x_3884->first = x_3887.get();
        x_3887->parent = x_3884.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3884->children),
      [&](const auto &x_3890) {
        x_3884->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3889) {
        x_3884->last = x_3889.get();
        x_3889->parent = x_3884.get();
        x_3883(x_3889);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3513(const auto &x_3884) { return x_3883(x_3884); }
int64_t x_3891(const auto &x_3892) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3892->children, [&](const auto &x_3893) { return x_3891(x_3893); }));
}
int64_t node_size_x_3504(const auto &x_3892) { return x_3891(x_3892); }
int64_t x_3894(const auto &x_3895) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3895->children, [&](const auto &x_3896) { return x_3894(x_3896); }));
}
int64_t layout_size_x_3503(const auto &x_3895) { return x_3894(x_3895); }
LayoutNode x_3897(const auto &x_3898) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_3898)), [&](const auto &x_3899) { return x_3897(x_3899); }));
}
LayoutNode json_to_layout_node_x_3502(const auto &x_3898) { return x_3897(x_3898); }
Node x_3900(const auto &x_3901) {
  return MakeNode(x_3901->name, x_3901->attr, x_3901->prop, x_3901->extern_id,
                  ListMap(x_3901->children, [&](const auto &x_3902) { return x_3900(x_3902); }));
}
Node node_to_fs_node_x_3501(const auto &x_3901) { return x_3900(x_3901); }
Node x_3903(const auto &x_3904) {
  return MakeNode(
      JsonToString(JsonMember("name", x_3904)), JsonToDict(JsonMember("attributes", x_3904)),
      JsonToDict(JsonMember("properties", x_3904)), JsonToInt(JsonMember("id", x_3904)),
      ListMap(JsonToList(JsonMember("children", x_3904)), [&](const auto &x_3905) { return x_3903(x_3905); }));
}
Node json_to_node_aux_x_3500(const auto &x_3904) { return x_3903(x_3904); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_3505) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_3506) {
      auto x_3507 = MakeRef(static_cast<int64_t>(0));
      auto x_3508 = FreshMetric();
      auto x_3509 = JsonOfString(InputLine(x_3506));
      auto x_3510 = JsonOfString(InputLine(x_3506));
      auto x_3511 = MakeStack();
      PushStack(x_3511, x_3509);
      PushStack(x_3511, x_3510);
      Assert(StringEqual(JsonToString(JsonMember("name", x_3509)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_3510)), "layout_init"));
      auto x_3514 = [&]() {
        auto x_3512 = json_to_node_aux_x_3500(JsonMember("node", x_3509));
        x_3512->parent = nullptr;
        x_3512->prev = nullptr;
        x_3512->next = nullptr;
        set_children_relation_x_3513(x_3512);
        return x_3512;
      }();
      auto x_3515 = json_to_layout_node_x_3502(JsonMember("node", x_3510));
      OutputChangeMetric(layout_size_x_3503(x_3515));
      InputChangeMetric(node_size_x_3504(x_3514));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3516) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3517(x_3514);
        x_3514->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3518) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3519(x_3514);
        x_3514->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      JsonToChannel(x_3505, [&]() {
        auto x_5631 = FreshJson();
        WriteJson(x_5631, "name", "PQ_D");
        WriteJson(x_5631, "diff_num", ReadRef(x_3507));
        WriteJson(x_5631, "read_count", MetricReadCount());
        WriteJson(x_5631, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_5631, "write_count", MetricWriteCount());
        WriteJson(x_5631, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_5631, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_5631, "input_change_count", MetricInputChangeCount());
        WriteJson(x_5631, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_5631, "overhead_time", MetricOverheadCount());
        WriteJson(x_5631, "eval_time", MetricEvalCount());
        WriteJson(x_5631, "html", "");
        WriteJson(x_5631, "command", StackToList(x_3511));
        return x_5631;
      }());
      OutputString(x_3505, "\n");
      ClearStack(x_3511);
      WriteRef(x_3507, IntAdd(ReadRef(x_3507), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_3506, [&](const auto &x_3520) {
        auto x_3521 = JsonOfString(x_3520);
        PushStack(x_3511, x_3521);
        std::string x_5633 = JsonToString(JsonMember("name", x_3521));
        if (x_5633 == "add") {
          return add_node_x_3525(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3524) { return JsonToInt(x_3524); }),
              x_3514, [&]() {
                auto x_3522 = json_to_node_aux_x_3500(JsonMember("node", x_3521));
                x_3522->parent = nullptr;
                x_3522->prev = nullptr;
                x_3522->next = nullptr;
                set_children_relation_x_3523(x_3522);
                return x_3522;
              }());
        } else if (x_5633 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_3526) {
            recalculate_internal_x_3527(MakeUnit());
            return MakeUnit();
          })));
          JsonToChannel(x_3505, [&]() {
            auto x_5632 = FreshJson();
            WriteJson(x_5632, "name", "PQ_D");
            WriteJson(x_5632, "diff_num", ReadRef(x_3507));
            WriteJson(x_5632, "read_count", MetricReadCount());
            WriteJson(x_5632, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_5632, "write_count", MetricWriteCount());
            WriteJson(x_5632, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_5632, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_5632, "input_change_count", MetricInputChangeCount());
            WriteJson(x_5632, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_5632, "overhead_time", MetricOverheadCount());
            WriteJson(x_5632, "eval_time", MetricEvalCount());
            WriteJson(x_5632, "html", "");
            WriteJson(x_5632, "command", StackToList(x_3511));
            return x_5632;
          }());
          OutputString(x_3505, "\n");
          ClearStack(x_3511);
          WriteRef(x_3507, IntAdd(ReadRef(x_3507), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5633 == "remove") {
          return remove_node_x_3529(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3528) { return JsonToInt(x_3528); }),
              x_3514, MakeUnit());
        } else if (x_5633 == "replace") {
          return replace_node_x_3533(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3532) { return JsonToInt(x_3532); }),
              x_3514, [&]() {
                auto x_3530 = json_to_node_aux_x_3500(JsonMember("node", x_3521));
                x_3530->parent = nullptr;
                x_3530->prev = nullptr;
                x_3530->next = nullptr;
                set_children_relation_x_3531(x_3530);
                return x_3530;
              }());
        } else if (x_5633 == "replace_value") {
          return replace_value_x_3535(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3534) { return JsonToInt(x_3534); }),
              x_3514,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3521)), JsonToString(JsonMember("key", x_3521))),
                       JsonToValue(JsonMember("value", x_3521))));
        } else if (x_5633 == "delete_value") {
          return delete_value_x_3537(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3536) { return JsonToInt(x_3536); }),
              x_3514, MakePair(JsonToString(JsonMember("type", x_3521)), JsonToString(JsonMember("key", x_3521))));
        } else if (x_5633 == "insert_value") {
          return insert_value_x_3539(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3538) { return JsonToInt(x_3538); }),
              x_3514,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3521)), JsonToString(JsonMember("key", x_3521))),
                       JsonToValue(JsonMember("value", x_3521))));
        } else if (x_5633 == "layout_remove") {
          return remove_layout_node_x_3541(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3540) { return JsonToInt(x_3540); }),
              x_3515, MakeUnit());
        } else if (x_5633 == "layout_add") {
          return add_layout_node_x_3543(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3542) { return JsonToInt(x_3542); }),
              x_3515, json_to_layout_node_x_3502(JsonMember("node", x_3521)));
        } else if (x_5633 == "layout_replace") {
          return replace_layout_node_x_3545(
              ListMap(JsonToList(JsonMember("path", x_3521)), [&](const auto &x_3544) { return JsonToInt(x_3544); }),
              x_3515, json_to_layout_node_x_3502(JsonMember("node", x_3521)));
        } else if (x_5633 == "layout_info_changed") {
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