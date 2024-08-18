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
Unit x_2026(const auto &x_2027);
Unit x_2030(const auto &x_2031);
Unit var_modified_x_715(const auto &x_717);
auto eval_expr_x_712(const auto &x_724);
Unit var_modified_x_710(const auto &x_741);
auto eval_expr_x_707(const auto &x_745);
Unit var_modified_x_705(const auto &x_754);
auto eval_expr_x_702(const auto &x_760);
Unit var_modified_x_700(const auto &x_813);
auto eval_expr_x_697(const auto &x_821);
Unit var_modified_x_695(const auto &x_846);
auto eval_expr_x_692(const auto &x_852);
Unit var_modified_x_690(const auto &x_861);
auto eval_expr_x_687(const auto &x_867);
Unit var_modified_x_685(const auto &x_920);
auto eval_expr_x_682(const auto &x_928);
Unit var_modified_x_680(const auto &x_949);
auto eval_expr_x_677(const auto &x_953);
Unit var_modified_x_675(const auto &x_974);
auto eval_expr_x_672(const auto &x_978);
Unit var_modified_x_670(const auto &x_991);
auto eval_expr_x_667(const auto &x_997);
Unit var_modified_x_665(const auto &x_1018);
auto eval_expr_x_662(const auto &x_1022);
Unit var_modified_x_660(const auto &x_1027);
auto eval_expr_x_657(const auto &x_1031);
Unit var_modified_x_653(const auto &x_1036);
auto eval_expr_x_650(const auto &x_1051);
Unit var_modified_x_648(const auto &x_1130);
auto eval_expr_x_645(const auto &x_1134);
Unit var_modified_x_643(const auto &x_1151);
auto eval_expr_x_640(const auto &x_1159);
Unit var_modified_x_638(const auto &x_1164);
auto eval_expr_x_635(const auto &x_1172);
Unit var_modified_x_633(const auto &x_1181);
auto eval_expr_x_630(const auto &x_1185);
Unit var_modified_x_628(const auto &x_1186);
auto eval_expr_x_625(const auto &x_1190);
Unit var_modified_x_623(const auto &x_1195);
auto eval_expr_x_620(const auto &x_1201);
Unit var_modified_x_618(const auto &x_1212);
auto eval_expr_x_615(const auto &x_1216);
Unit var_modified_x_613(const auto &x_1221);
auto eval_expr_x_610(const auto &x_1227);
Unit var_modified_x_608(const auto &x_1238);
auto eval_expr_x_605(const auto &x_1244);
Unit var_modified_x_603(const auto &x_1269);
auto eval_expr_x_600(const auto &x_1277);
Unit var_modified_x_598(const auto &x_1306);
auto eval_expr_x_595(const auto &x_1310);
Unit var_modified_x_593(const auto &x_1313);
auto eval_expr_x_590(const auto &x_1321);
Unit var_modified_x_588(const auto &x_1330);
auto eval_expr_x_585(const auto &x_1338);
Unit var_modified_x_583(const auto &x_1347);
auto eval_expr_x_580(const auto &x_1353);
Unit var_modified_x_578(const auto &x_1356);
auto eval_expr_x_575(const auto &x_1362);
Unit var_modified_x_573(const auto &x_1365);
auto eval_expr_x_570(const auto &x_1373);
Unit var_modified_x_568(const auto &x_1376);
auto eval_expr_x_565(const auto &x_1384);
Unit var_modified_x_561(const auto &x_1387);
auto eval_expr_x_558(const auto &x_1397);
Unit var_modified_x_556(const auto &x_1426);
auto eval_expr_x_553(const auto &x_1436);
Unit var_modified_x_551(const auto &x_1449);
auto eval_expr_x_548(const auto &x_1459);
Unit var_modified_x_546(const auto &x_1468);
auto eval_expr_x_543(const auto &x_1472);
Unit var_modified_x_541(const auto &x_1481);
auto eval_expr_x_538(const auto &x_1487);
Unit var_modified_x_536(const auto &x_1632);
auto eval_expr_x_533(const auto &x_1636);
Unit var_modified_x_531(const auto &x_1685);
auto eval_expr_x_528(const auto &x_1691);
Unit var_modified_x_526(const auto &x_1694);
auto eval_expr_x_523(const auto &x_1698);
Unit var_modified_x_521(const auto &x_1707);
auto eval_expr_x_518(const auto &x_1717);
Unit var_modified_x_516(const auto &x_1726);
auto eval_expr_x_513(const auto &x_1736);
Unit var_modified_x_511(const auto &x_1745);
auto eval_expr_x_508(const auto &x_1753);
Unit var_modified_x_506(const auto &x_1766);
auto eval_expr_x_503(const auto &x_1770);
Unit var_modified_x_501(const auto &x_1779);
auto eval_expr_x_498(const auto &x_1785);
Unit var_modified_x_496(const auto &x_1938);
auto eval_expr_x_493(const auto &x_1942);
Unit var_modified_x_491(const auto &x_1947);
auto eval_expr_x_488(const auto &x_1951);
Unit var_modified_x_486(const auto &x_2000);
auto eval_expr_x_483(const auto &x_2004);
Unit var_modified_x_481(const auto &x_2017);
auto eval_expr_x_478(const auto &x_2023);
Unit eval_stmts_x_452(const auto &x_476);
Unit eval_stmts_x_448(const auto &x_563);
Unit eval_stmts_x_442(const auto &x_655);
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48);
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55);
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62);
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69);
Unit x_113(const auto &x_114, const auto &x_115, const auto &x_116);
Unit x_158(const auto &x_159, const auto &x_160, const auto &x_161);
Unit x_241(const auto &x_242, const auto &x_243, const auto &x_244);
Unit x_329(const auto &x_330);
Unit x_337(const auto &x_338, const auto &x_339, const auto &x_340);
Unit x_379(const auto &x_380, const auto &x_381, const auto &x_382);
Unit x_431(const auto &x_432);
Unit eval_stmts_x_19(const auto &x_439);
Unit eval_stmts_x_17(const auto &x_445);
Unit x_453(const auto &x_454);
int64_t x_461(const auto &x_462);
int64_t x_464(const auto &x_465);
LayoutNode x_467(const auto &x_468);
Node x_470(const auto &x_471);
Node x_473(const auto &x_474);
Unit x_2026(const auto &x_2027) {
  MetaWriteMetric();
  if (!x_2027->meta->pass_0_recursive_proc_dirtied) {
    x_2027->meta->pass_0_has_recursive_proc_dirtied = true;
    x_2027->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2027->parent, [&](const auto &x_2029) { return MakeUnit(); },
        [&](const auto &x_2028) {
          if (x_2027->meta->IsRC) {
            return x_2026(x_2028);
          } else {
            return MakeUnit();
          }
        });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1040(const auto &x_2027) { return x_2026(x_2027); }
Unit x_2030(const auto &x_2031) {
  MetaWriteMetric();
  if (!x_2031->meta->pass_1_recursive_proc_dirtied) {
    x_2031->meta->pass_1_has_recursive_proc_dirtied = true;
    x_2031->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_2031->parent, [&](const auto &x_2033) { return MakeUnit(); },
        [&](const auto &x_2032) {
          if (x_2031->meta->IsRC) {
            return x_2030(x_2032);
          } else {
            return MakeUnit();
          }
        });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_723(const auto &x_2031) { return x_2030(x_2031); }
Unit var_modified_x_715(const auto &x_717) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_718) {
    auto x_2034 = [&](const auto &x_721) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_722) {
        if (x_721->meta->pass_1_proc_inited) {
          x_721->meta->bb_2_has_bb_dirtied = true;
          x_721->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_721);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_717->next, [&](const auto &x_720) { return MakeUnit(); },
        [&](const auto &x_719) {
          auto x_2035 = x_2034;
          x_2035(x_719);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_712(const auto &x_724) {
  if ((x_724->prev != nullptr) && (!(x_724->prev)->var_line_break)) {
    return max(x_724->var_height_external, (x_724->prev)->var_line_height);
  } else {
    return x_724->var_height_external;
  }
}
Unit var_modified_x_710(const auto &x_741) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_742) {
    auto x_2036 = [&](const auto &x_743) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_744) {
        if (x_743->meta->pass_1_proc_inited) {
          x_743->meta->bb_2_has_bb_dirtied = true;
          x_743->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_743);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2036(x_741);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_707(const auto &x_745) {
  if (eq(x_745->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_745->var_height_internal;
  }
}
Unit var_modified_x_705(const auto &x_754) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_755) {
    auto x_2037 = [&](const auto &x_756) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_757) {
        if (x_756->meta->pass_1_proc_inited) {
          x_756->meta->bb_2_has_bb_dirtied = true;
          x_756->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_756);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2037(x_754);
    MakeUnit();
    ListIter(x_754->children, [&](const auto &x_758) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_759) {
        if (x_758->meta->pass_1_proc_inited) {
          x_758->meta->bb_2_has_bb_dirtied = true;
          x_758->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_758);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_702(const auto &x_760) {
  if (x_760->var_intrinsic_height_is_height) {
    return x_760->var_intrinsic_height_internal;
  } else {
    if ((x_760->parent != nullptr) && (x_760->parent)->var_is_flex_column) {
      return plus(x_760->var_intrinsic_height_internal, mult(x_760->var_flex_amount, (x_760->parent)->var_flex_unit));
    } else {
      if (x_760->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_760->var_box_height, divide(x_760->var_height_expr.r.a0, 100.));
      } else {
        return max(x_760->var_box_height, x_760->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_700(const auto &x_813) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_814) {
    ListIter(x_813->children, [&](const auto &x_815) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_816) {
        if (x_815->meta->pass_1_proc_inited) {
          x_815->meta->bb_2_has_bb_dirtied = true;
          x_815->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_815);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2038 = [&](const auto &x_819) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_820) {
        if (x_819->meta->pass_1_proc_inited) {
          x_819->meta->bb_2_has_bb_dirtied = true;
          x_819->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_819);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_813->next, [&](const auto &x_818) { return MakeUnit(); },
        [&](const auto &x_817) {
          auto x_2039 = x_2038;
          x_2039(x_817);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_697(const auto &x_821) {
  if (x_821->prev != nullptr) {
    if (x_821->var_line_break || (x_821->prev)->var_line_break) {
      return plus((x_821->prev)->var_y, (x_821->prev)->var_line_height);
    } else {
      return (x_821->prev)->var_y;
    }
  } else {
    if (x_821->parent != nullptr) {
      return (x_821->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_695(const auto &x_846) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_847) {
    auto x_2040 = [&](const auto &x_850) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_851) {
        if (x_850->meta->pass_1_proc_inited) {
          x_850->meta->bb_2_has_bb_dirtied = true;
          x_850->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_850);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_846->next, [&](const auto &x_849) { return MakeUnit(); },
        [&](const auto &x_848) {
          auto x_2041 = x_2040;
          x_2041(x_848);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_692(const auto &x_852) {
  if (eq(x_852->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_852->var_width_internal;
  }
}
Unit var_modified_x_690(const auto &x_861) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_862) {
    auto x_2042 = [&](const auto &x_863) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_864) {
        if (x_863->meta->pass_1_proc_inited) {
          x_863->meta->bb_2_has_bb_dirtied = true;
          x_863->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_863);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2042(x_861);
    MakeUnit();
    ListIter(x_861->children, [&](const auto &x_865) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_866) {
        if (x_865->meta->pass_1_proc_inited) {
          x_865->meta->bb_2_has_bb_dirtied = true;
          x_865->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_865);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_687(const auto &x_867) {
  if (x_867->var_intrinsic_width_is_width) {
    return x_867->var_intrinsic_width_internal;
  } else {
    if ((x_867->parent != nullptr) && (x_867->parent)->var_is_flex_row) {
      return plus(x_867->var_intrinsic_width_internal, mult(x_867->var_flex_amount, (x_867->parent)->var_flex_unit));
    } else {
      if (x_867->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_867->var_box_width, divide(x_867->var_width_expr.r.a0, 100.));
      } else {
        return max(x_867->var_box_width, x_867->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_685(const auto &x_920) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_921) {
    ListIter(x_920->children, [&](const auto &x_922) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_923) {
        if (x_922->meta->pass_1_proc_inited) {
          x_922->meta->bb_2_has_bb_dirtied = true;
          x_922->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_922);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2043 = [&](const auto &x_926) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_927) {
        if (x_926->meta->pass_1_proc_inited) {
          x_926->meta->bb_2_has_bb_dirtied = true;
          x_926->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_926);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_920->next, [&](const auto &x_925) { return MakeUnit(); },
        [&](const auto &x_924) {
          auto x_2044 = x_2043;
          x_2044(x_924);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_682(const auto &x_928) {
  if (x_928->prev != nullptr) {
    if (x_928->var_line_break || (x_928->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_928->prev)->var_x, (x_928->prev)->var_width_external);
    }
  } else {
    if (x_928->parent != nullptr) {
      return (x_928->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_680(const auto &x_949) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_950) {
    ListIter(x_949->children, [&](const auto &x_951) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_952) {
        if (x_951->meta->pass_1_proc_inited) {
          x_951->meta->bb_2_has_bb_dirtied = true;
          x_951->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_951);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_677(const auto &x_953) {
  if (gt(x_953->var_left_over, 0.)) {
    return divide(x_953->var_left_over, x_953->var_flex_grow_sum);
  } else {
    return divide(x_953->var_left_over, x_953->var_flex_shrink_sum);
  }
}
Unit var_modified_x_675(const auto &x_974) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_975) {
    auto x_2045 = [&](const auto &x_976) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_977) {
        if (x_976->meta->pass_1_proc_inited) {
          x_976->meta->bb_2_has_bb_dirtied = true;
          x_976->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_976);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2045(x_974);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_672(const auto &x_978) {
  if ((x_978->parent != nullptr) && gt((x_978->parent)->var_left_over, 0.)) {
    return x_978->var_flex_grow;
  } else {
    return x_978->var_flex_shrink;
  }
}
Unit var_modified_x_670(const auto &x_991) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_992) {
    auto x_2046 = [&](const auto &x_993) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_994) {
        if (x_993->meta->pass_1_proc_inited) {
          x_993->meta->bb_2_has_bb_dirtied = true;
          x_993->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_993);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2046(x_991);
    MakeUnit();
    ListIter(x_991->children, [&](const auto &x_995) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_996) {
        if (x_995->meta->pass_1_proc_inited) {
          x_995->meta->bb_2_has_bb_dirtied = true;
          x_995->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_995);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_667(const auto &x_997) {
  if (x_997->var_is_flex_row) {
    return minus(x_997->var_box_width, (x_997->last != nullptr) ? ((x_997->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_997->var_box_height, (x_997->last != nullptr) ? ((x_997->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_665(const auto &x_1018) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1019) {
    auto x_2047 = [&](const auto &x_1020) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1021) {
        if (x_1020->meta->pass_1_proc_inited) {
          x_1020->meta->bb_2_has_bb_dirtied = true;
          x_1020->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1020);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2047(x_1018);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_662(const auto &x_1022) {
  if (x_1022->parent != nullptr) {
    return (x_1022->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_660(const auto &x_1027) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1028) {
    auto x_2048 = [&](const auto &x_1029) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1030) {
        if (x_1029->meta->pass_1_proc_inited) {
          x_1029->meta->bb_2_has_bb_dirtied = true;
          x_1029->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1029);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2048(x_1027);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_657(const auto &x_1031) {
  if (x_1031->parent != nullptr) {
    return (x_1031->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_653(const auto &x_1036) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1037) {
    auto x_2049 = [&](const auto &x_1038) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1039) {
        if (x_1038->meta->pass_0_proc_inited) {
          x_1038->meta->bb_0_has_bb_dirtied = true;
          x_1038->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1038);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2049(x_1036);
    MakeUnit();
    auto x_2050 = [&](const auto &x_1043) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1044) {
        if (x_1043->meta->pass_0_proc_inited) {
          x_1043->meta->bb_0_has_bb_dirtied = true;
          x_1043->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1043);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1036->next, [&](const auto &x_1042) { return MakeUnit(); },
        [&](const auto &x_1041) {
          auto x_2053 = x_2050;
          x_2053(x_1041);
          return MakeUnit();
        });
    auto x_2051 = [&](const auto &x_1045) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1046) {
        if (x_1045->meta->pass_1_proc_inited) {
          x_1045->meta->bb_2_has_bb_dirtied = true;
          x_1045->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1045);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2051(x_1036);
    MakeUnit();
    auto x_2052 = [&](const auto &x_1049) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1050) {
        if (x_1049->meta->pass_1_proc_inited) {
          x_1049->meta->bb_2_has_bb_dirtied = true;
          x_1049->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1049);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1036->next, [&](const auto &x_1048) { return MakeUnit(); },
        [&](const auto &x_1047) {
          auto x_2054 = x_2052;
          x_2054(x_1047);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_650(const auto &x_1051) {
  if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_1051->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_1051->parent != nullptr) &&
          (eq((x_1051->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_1051->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_1051->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_1051->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_1051->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_1051->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_648(const auto &x_1130) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1131) {
    ListIter(x_1130->children, [&](const auto &x_1132) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1133) {
        if (x_1132->meta->pass_0_proc_inited) {
          x_1132->meta->bb_1_has_bb_dirtied = true;
          x_1132->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1132);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_645(const auto &x_1134) {
  return (((!(x_1134->parent != nullptr)) || (x_1134->parent)->var_visible) &&
          (neq(x_1134->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_1134->var_inside_svg) && (!x_1134->var_disabled))));
}
Unit var_modified_x_643(const auto &x_1151) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1152) {
    auto x_2055 = [&](const auto &x_1153) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1154) {
        if (x_1153->meta->pass_0_proc_inited) {
          x_1153->meta->bb_1_has_bb_dirtied = true;
          x_1153->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1153);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2055(x_1151);
    MakeUnit();
    ListIter(x_1151->children, [&](const auto &x_1155) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1156) {
        if (x_1155->meta->pass_0_proc_inited) {
          x_1155->meta->bb_1_has_bb_dirtied = true;
          x_1155->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1155);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2056 = [&](const auto &x_1157) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1158) {
        if (x_1157->meta->pass_0_proc_inited) {
          x_1157->meta->bb_0_has_bb_dirtied = true;
          x_1157->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1157);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2056(x_1151);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_640(const auto &x_1159) {
  if (eq(x_1159->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_1159->parent != nullptr) && (x_1159->parent)->var_disabled);
  }
}
Unit var_modified_x_638(const auto &x_1164) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1165) {
    auto x_2057 = [&](const auto &x_1166) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1167) {
        if (x_1166->meta->pass_0_proc_inited) {
          x_1166->meta->bb_1_has_bb_dirtied = true;
          x_1166->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1166);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2057(x_1164);
    MakeUnit();
    ListIter(x_1164->children, [&](const auto &x_1168) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1169) {
        if (x_1168->meta->pass_0_proc_inited) {
          x_1168->meta->bb_1_has_bb_dirtied = true;
          x_1168->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1168);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2058 = [&](const auto &x_1170) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1171) {
        if (x_1170->meta->pass_0_proc_inited) {
          x_1170->meta->bb_0_has_bb_dirtied = true;
          x_1170->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1170);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2058(x_1164);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_635(const auto &x_1172) {
  return ((x_1172->parent != nullptr) && ((x_1172->parent)->var_is_svg_block || (x_1172->parent)->var_inside_svg));
}
Unit var_modified_x_633(const auto &x_1181) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1182) {
    ListIter(x_1181->children, [&](const auto &x_1183) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1184) {
        if (x_1183->meta->pass_0_proc_inited) {
          x_1183->meta->bb_1_has_bb_dirtied = true;
          x_1183->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1183);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_630(const auto &x_1185) { return eq(x_1185->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_628(const auto &x_1186) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1187) {
    auto x_2059 = [&](const auto &x_1188) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1189) {
        if (x_1188->meta->pass_0_proc_inited) {
          x_1188->meta->bb_0_has_bb_dirtied = true;
          x_1188->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1188);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2059(x_1186);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_625(const auto &x_1190) {
  return neq(x_1190->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_623(const auto &x_1195) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1196) {
    auto x_2060 = [&](const auto &x_1197) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1198) {
        if (x_1197->meta->pass_0_proc_inited) {
          x_1197->meta->bb_1_has_bb_dirtied = true;
          x_1197->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1197);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2060(x_1195);
    MakeUnit();
    auto x_2061 = [&](const auto &x_1199) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1200) {
        if (x_1199->meta->pass_0_proc_inited) {
          x_1199->meta->bb_0_has_bb_dirtied = true;
          x_1199->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1199);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2061(x_1195);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_620(const auto &x_1201) {
  if (!x_1201->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_1201->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_1201->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_1201->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_618(const auto &x_1212) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1213) {
    auto x_2062 = [&](const auto &x_1214) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1215) {
        if (x_1214->meta->pass_0_proc_inited) {
          x_1214->meta->bb_0_has_bb_dirtied = true;
          x_1214->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1214);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2062(x_1212);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_615(const auto &x_1216) {
  return neq(x_1216->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_613(const auto &x_1221) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1222) {
    auto x_2063 = [&](const auto &x_1223) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1224) {
        if (x_1223->meta->pass_0_proc_inited) {
          x_1223->meta->bb_1_has_bb_dirtied = true;
          x_1223->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1223);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2063(x_1221);
    MakeUnit();
    auto x_2064 = [&](const auto &x_1225) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1226) {
        if (x_1225->meta->pass_0_proc_inited) {
          x_1225->meta->bb_0_has_bb_dirtied = true;
          x_1225->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1225);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2064(x_1221);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_610(const auto &x_1227) {
  if (!x_1227->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_1227->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_1227->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_1227->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_608(const auto &x_1238) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1239) {
    ListIter(x_1238->children, [&](const auto &x_1240) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1241) {
        if (x_1240->meta->pass_0_proc_inited) {
          x_1240->meta->bb_0_has_bb_dirtied = true;
          x_1240->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1240);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    ListIter(x_1238->children, [&](const auto &x_1242) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1243) {
        if (x_1242->meta->pass_1_proc_inited) {
          x_1242->meta->bb_2_has_bb_dirtied = true;
          x_1242->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1242);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_605(const auto &x_1244) {
  if ((x_1244->parent != nullptr) &&
      (eq((x_1244->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_1244->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_1244->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_1244->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_603(const auto &x_1269) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1270) {
    ListIter(x_1269->children, [&](const auto &x_1271) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1272) {
        if (x_1271->meta->pass_0_proc_inited) {
          x_1271->meta->bb_0_has_bb_dirtied = true;
          x_1271->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1271);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2065 = [&](const auto &x_1273) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1274) {
        if (x_1273->meta->pass_1_proc_inited) {
          x_1273->meta->bb_2_has_bb_dirtied = true;
          x_1273->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1273);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2065(x_1269);
    MakeUnit();
    ListIter(x_1269->children, [&](const auto &x_1275) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1276) {
        if (x_1275->meta->pass_1_proc_inited) {
          x_1275->meta->bb_2_has_bb_dirtied = true;
          x_1275->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1275);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_600(const auto &x_1277) {
  if ((x_1277->parent != nullptr) &&
      (eq((x_1277->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_1277->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_1277->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_1277->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_598(const auto &x_1306) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1307) {
    ListIter(x_1306->children, [&](const auto &x_1308) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1309) {
        if (x_1308->meta->pass_0_proc_inited) {
          x_1308->meta->bb_1_has_bb_dirtied = true;
          x_1308->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1308);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    return MakeUnit();
  }));
}
auto eval_expr_x_595(const auto &x_1310) {
  if (x_1310->has_prop_flex_direction) {
    return x_1310->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_593(const auto &x_1313) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1314) {
    auto x_2066 = [&](const auto &x_1317) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1318) {
        if (x_1317->meta->pass_0_proc_inited) {
          x_1317->meta->bb_1_has_bb_dirtied = true;
          x_1317->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1317);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1313->next, [&](const auto &x_1316) { return MakeUnit(); },
        [&](const auto &x_1315) {
          auto x_2068 = x_2066;
          x_2068(x_1315);
          return MakeUnit();
        });
    auto x_2067 = [&](const auto &x_1319) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1320) {
        if (x_1319->meta->pass_1_proc_inited) {
          x_1319->meta->bb_2_has_bb_dirtied = true;
          x_1319->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1319);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2067(x_1313);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_590(const auto &x_1321) {
  return plus((x_1321->prev != nullptr) ? ((x_1321->prev)->var_flex_shrink_sum) : (0.), x_1321->var_flex_shrink);
}
Unit var_modified_x_588(const auto &x_1330) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1331) {
    auto x_2069 = [&](const auto &x_1334) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1335) {
        if (x_1334->meta->pass_0_proc_inited) {
          x_1334->meta->bb_1_has_bb_dirtied = true;
          x_1334->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1334);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1330->next, [&](const auto &x_1333) { return MakeUnit(); },
        [&](const auto &x_1332) {
          auto x_2071 = x_2069;
          x_2071(x_1332);
          return MakeUnit();
        });
    auto x_2070 = [&](const auto &x_1336) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1337) {
        if (x_1336->meta->pass_1_proc_inited) {
          x_1336->meta->bb_2_has_bb_dirtied = true;
          x_1336->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1336);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2070(x_1330);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_585(const auto &x_1338) {
  return plus((x_1338->prev != nullptr) ? ((x_1338->prev)->var_flex_grow_sum) : (0.), x_1338->var_flex_grow);
}
Unit var_modified_x_583(const auto &x_1347) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1348) {
    auto x_2072 = [&](const auto &x_1349) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1350) {
        if (x_1349->meta->pass_0_proc_inited) {
          x_1349->meta->bb_1_has_bb_dirtied = true;
          x_1349->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1349);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2072(x_1347);
    MakeUnit();
    auto x_2073 = [&](const auto &x_1351) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1352) {
        if (x_1351->meta->pass_1_proc_inited) {
          x_1351->meta->bb_2_has_bb_dirtied = true;
          x_1351->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1351);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2073(x_1347);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_580(const auto &x_1353) {
  if (x_1353->has_prop_flex_shrink) {
    return (x_1353->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_578(const auto &x_1356) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1357) {
    auto x_2074 = [&](const auto &x_1358) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1359) {
        if (x_1358->meta->pass_0_proc_inited) {
          x_1358->meta->bb_1_has_bb_dirtied = true;
          x_1358->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1358);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2074(x_1356);
    MakeUnit();
    auto x_2075 = [&](const auto &x_1360) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1361) {
        if (x_1360->meta->pass_1_proc_inited) {
          x_1360->meta->bb_2_has_bb_dirtied = true;
          x_1360->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1360);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2075(x_1356);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_575(const auto &x_1362) {
  if (x_1362->has_prop_flex_grow) {
    return (x_1362->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_573(const auto &x_1365) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1366) {
    auto x_2076 = [&](const auto &x_1367) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1368) {
        if (x_1367->meta->pass_0_proc_inited) {
          x_1367->meta->bb_1_has_bb_dirtied = true;
          x_1367->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1367);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2076(x_1365);
    MakeUnit();
    auto x_2077 = [&](const auto &x_1369) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1370) {
        if (x_1369->meta->pass_0_proc_inited) {
          x_1369->meta->bb_0_has_bb_dirtied = true;
          x_1369->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1369);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2077(x_1365);
    MakeUnit();
    auto x_2078 = [&](const auto &x_1371) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1372) {
        if (x_1371->meta->pass_1_proc_inited) {
          x_1371->meta->bb_2_has_bb_dirtied = true;
          x_1371->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1371);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2078(x_1365);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_570(const auto &x_1373) {
  if (x_1373->has_prop_position) {
    return x_1373->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_568(const auto &x_1376) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1377) {
    auto x_2079 = [&](const auto &x_1378) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1379) {
        if (x_1378->meta->pass_0_proc_inited) {
          x_1378->meta->bb_1_has_bb_dirtied = true;
          x_1378->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1378);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2079(x_1376);
    MakeUnit();
    ListIter(x_1376->children, [&](const auto &x_1380) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1381) {
        if (x_1380->meta->pass_0_proc_inited) {
          x_1380->meta->bb_1_has_bb_dirtied = true;
          x_1380->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1380);
        } else {
          return MetaWriteMetric();
        }
      }));
    });
    auto x_2080 = [&](const auto &x_1382) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1383) {
        if (x_1382->meta->pass_0_proc_inited) {
          x_1382->meta->bb_0_has_bb_dirtied = true;
          x_1382->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1382);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2080(x_1376);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_565(const auto &x_1384) {
  if (x_1384->has_prop_display) {
    return x_1384->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_561(const auto &x_1387) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1388) {
    auto x_2081 = [&](const auto &x_1391) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1392) {
        if (x_1391->meta->pass_0_proc_inited) {
          x_1391->meta->bb_0_has_bb_dirtied = true;
          x_1391->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1391);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_1387->next == nullptr) {
      auto x_2083 = x_2081;
      OptionMatch(
          x_1387->parent, [&](const auto &x_1390) { return MakeUnit(); },
          [&](const auto &x_1389) {
            auto x_2085 = x_2083;
            x_2085(x_1389);
            return MakeUnit();
          });
    }
    auto x_2082 = [&](const auto &x_1395) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1396) {
        if (x_1395->meta->pass_0_proc_inited) {
          x_1395->meta->bb_0_has_bb_dirtied = true;
          x_1395->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1395);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1387->next, [&](const auto &x_1394) { return MakeUnit(); },
        [&](const auto &x_1393) {
          auto x_2084 = x_2082;
          x_2084(x_1393);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_558(const auto &x_1397) {
  if (x_1397->prev != nullptr) {
    if (x_1397->var_line_break) {
      return plus((x_1397->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1397->prev)->var_intrinsic_current_line_height, x_1397->var_intrinsic_height_external));
    } else {
      return (x_1397->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1397->var_line_break) {
      return x_1397->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_556(const auto &x_1426) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1427) {
    auto x_2086 = [&](const auto &x_1430) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1431) {
        if (x_1430->meta->pass_0_proc_inited) {
          x_1430->meta->bb_0_has_bb_dirtied = true;
          x_1430->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1430);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_1426->next == nullptr) {
      auto x_2088 = x_2086;
      OptionMatch(
          x_1426->parent, [&](const auto &x_1429) { return MakeUnit(); },
          [&](const auto &x_1428) {
            auto x_2090 = x_2088;
            x_2090(x_1428);
            return MakeUnit();
          });
    }
    auto x_2087 = [&](const auto &x_1434) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1435) {
        if (x_1434->meta->pass_0_proc_inited) {
          x_1434->meta->bb_0_has_bb_dirtied = true;
          x_1434->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1434);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1426->next, [&](const auto &x_1433) { return MakeUnit(); },
        [&](const auto &x_1432) {
          auto x_2089 = x_2087;
          x_2089(x_1432);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_553(const auto &x_1436) {
  if (x_1436->var_line_break) {
    return 0.;
  } else {
    return max(x_1436->var_intrinsic_height_external,
               (x_1436->prev != nullptr) ? ((x_1436->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_551(const auto &x_1449) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1450) {
    auto x_2091 = [&](const auto &x_1453) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1454) {
        if (x_1453->meta->pass_0_proc_inited) {
          x_1453->meta->bb_0_has_bb_dirtied = true;
          x_1453->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1453);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1449->next, [&](const auto &x_1452) { return MakeUnit(); },
        [&](const auto &x_1451) {
          auto x_2093 = x_2091;
          x_2093(x_1451);
          return MakeUnit();
        });
    auto x_2092 = [&](const auto &x_1457) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1458) {
        if (x_1457->meta->pass_1_proc_inited) {
          x_1457->meta->bb_2_has_bb_dirtied = true;
          x_1457->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1457);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_1449->next == nullptr) {
      auto x_2094 = x_2092;
      OptionMatch(
          x_1449->parent, [&](const auto &x_1456) { return MakeUnit(); },
          [&](const auto &x_1455) {
            auto x_2095 = x_2094;
            x_2095(x_1455);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_548(const auto &x_1459) {
  return plus((x_1459->prev != nullptr) ? ((x_1459->prev)->var_intrinsic_height_sum) : (0.),
              x_1459->var_intrinsic_height_external);
}
Unit var_modified_x_546(const auto &x_1468) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1469) {
    auto x_2096 = [&](const auto &x_1470) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1471) {
        if (x_1470->meta->pass_0_proc_inited) {
          x_1470->meta->bb_0_has_bb_dirtied = true;
          x_1470->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1470);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2096(x_1468);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_543(const auto &x_1472) {
  if (eq(x_1472->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1472->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_541(const auto &x_1481) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1482) {
    auto x_2097 = [&](const auto &x_1483) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1484) {
        if (x_1483->meta->pass_0_proc_inited) {
          x_1483->meta->bb_0_has_bb_dirtied = true;
          x_1483->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1483);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2097(x_1481);
    MakeUnit();
    auto x_2098 = [&](const auto &x_1485) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1486) {
        if (x_1485->meta->pass_1_proc_inited) {
          x_1485->meta->bb_2_has_bb_dirtied = true;
          x_1485->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1485);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2098(x_1481);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_538(const auto &x_1487) {
  if (eq(x_1487->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1487->var_inside_svg) {
      return 0.;
    } else {
      if (x_1487->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1487->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1487->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_1487->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_1487->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1487->var_height_expr.r.a0;
          } else {
            if (x_1487->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_1487->var_height_expr.r.a0;
            } else {
              return x_1487->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_1487->var_children_intrinsic_height,
              (eq(x_1487->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_1487->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1487->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1487->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_1487->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1487->var_has_height_attr &&
                                                  (x_1487->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1487->var_height_attr_expr.r.a0)
                                                     : ((x_1487->has_attr_viewBox)
                                                            ? (x_1487->attr_viewBox.r.a3)
                                                            : (mult((x_1487->attr_viewBox.r.a3),
                                                                    divide(x_1487->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1487->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1487->var_has_height_attr)
                                                            ? (x_1487->var_height_attr_expr.r.a0)
                                                            : ((x_1487->has_attr_image_height &&
                                                                (!x_1487->var_has_width_attr))
                                                                   ? (int_to_float(x_1487->attr_image_height))
                                                                   : ((neq(x_1487->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1487->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1487->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_1487->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_1487->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_1487->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_536(const auto &x_1632) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1633) {
    auto x_2099 = [&](const auto &x_1634) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1635) {
        if (x_1634->meta->pass_1_proc_inited) {
          x_1634->meta->bb_2_has_bb_dirtied = true;
          x_1634->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1634);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2099(x_1632);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_533(const auto &x_1636) {
  if (eq(x_1636->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1636->var_inside_svg || x_1636->var_disabled)) {
    return true;
  } else {
    if ((x_1636->parent != nullptr) && (x_1636->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1636->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1636->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1636->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1636->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1636->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_531(const auto &x_1685) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1686) {
    auto x_2100 = [&](const auto &x_1687) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1688) {
        if (x_1687->meta->pass_0_proc_inited) {
          x_1687->meta->bb_0_has_bb_dirtied = true;
          x_1687->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1687);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2100(x_1685);
    MakeUnit();
    auto x_2101 = [&](const auto &x_1689) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1690) {
        if (x_1689->meta->pass_1_proc_inited) {
          x_1689->meta->bb_2_has_bb_dirtied = true;
          x_1689->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1689);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2101(x_1685);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_528(const auto &x_1691) {
  if (x_1691->has_prop_height) {
    return x_1691->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_526(const auto &x_1694) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1695) {
    auto x_2102 = [&](const auto &x_1696) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1697) {
        if (x_1696->meta->pass_0_proc_inited) {
          x_1696->meta->bb_0_has_bb_dirtied = true;
          x_1696->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1696);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2102(x_1694);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_523(const auto &x_1698) {
  if (x_1698->last != nullptr) {
    return plus((x_1698->last)->var_finished_intrinsic_height_sum, (x_1698->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_521(const auto &x_1707) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1708) {
    auto x_2103 = [&](const auto &x_1711) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1712) {
        if (x_1711->meta->pass_0_proc_inited) {
          x_1711->meta->bb_0_has_bb_dirtied = true;
          x_1711->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1711);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1707->next, [&](const auto &x_1710) { return MakeUnit(); },
        [&](const auto &x_1709) {
          auto x_2105 = x_2103;
          x_2105(x_1709);
          return MakeUnit();
        });
    auto x_2104 = [&](const auto &x_1715) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1716) {
        if (x_1715->meta->pass_1_proc_inited) {
          x_1715->meta->bb_2_has_bb_dirtied = true;
          x_1715->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1715);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_1707->next == nullptr) {
      auto x_2106 = x_2104;
      OptionMatch(
          x_1707->parent, [&](const auto &x_1714) { return MakeUnit(); },
          [&](const auto &x_1713) {
            auto x_2107 = x_2106;
            x_2107(x_1713);
            return MakeUnit();
          });
    }
    return MakeUnit();
  }));
}
auto eval_expr_x_518(const auto &x_1717) {
  return plus((x_1717->prev != nullptr) ? ((x_1717->prev)->var_intrinsic_width_sum) : (0.),
              x_1717->var_intrinsic_width_external);
}
Unit var_modified_x_516(const auto &x_1726) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1727) {
    auto x_2108 = [&](const auto &x_1730) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1731) {
        if (x_1730->meta->pass_0_proc_inited) {
          x_1730->meta->bb_0_has_bb_dirtied = true;
          x_1730->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1730);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    if (x_1726->next == nullptr) {
      auto x_2110 = x_2108;
      OptionMatch(
          x_1726->parent, [&](const auto &x_1729) { return MakeUnit(); },
          [&](const auto &x_1728) {
            auto x_2112 = x_2110;
            x_2112(x_1728);
            return MakeUnit();
          });
    }
    auto x_2109 = [&](const auto &x_1734) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1735) {
        if (x_1734->meta->pass_0_proc_inited) {
          x_1734->meta->bb_0_has_bb_dirtied = true;
          x_1734->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1734);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1726->next, [&](const auto &x_1733) { return MakeUnit(); },
        [&](const auto &x_1732) {
          auto x_2111 = x_2109;
          x_2111(x_1732);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_513(const auto &x_1736) {
  return max(x_1736->var_intrinsic_current_line_width,
             (x_1736->prev != nullptr) ? ((x_1736->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_511(const auto &x_1745) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1746) {
    auto x_2113 = [&](const auto &x_1747) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1748) {
        if (x_1747->meta->pass_0_proc_inited) {
          x_1747->meta->bb_0_has_bb_dirtied = true;
          x_1747->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1747);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2113(x_1745);
    MakeUnit();
    auto x_2114 = [&](const auto &x_1751) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1752) {
        if (x_1751->meta->pass_0_proc_inited) {
          x_1751->meta->bb_0_has_bb_dirtied = true;
          x_1751->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1751);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    OptionMatch(
        x_1745->next, [&](const auto &x_1750) { return MakeUnit(); },
        [&](const auto &x_1749) {
          auto x_2115 = x_2114;
          x_2115(x_1749);
          return MakeUnit();
        });
    return MakeUnit();
  }));
}
auto eval_expr_x_508(const auto &x_1753) {
  return plus(x_1753->var_intrinsic_width_external,
              ((x_1753->prev != nullptr) && (!(x_1753->prev)->var_line_break))
                  ? ((x_1753->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_506(const auto &x_1766) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1767) {
    auto x_2116 = [&](const auto &x_1768) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1769) {
        if (x_1768->meta->pass_0_proc_inited) {
          x_1768->meta->bb_0_has_bb_dirtied = true;
          x_1768->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1768);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2116(x_1766);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_503(const auto &x_1770) {
  if (eq(x_1770->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1770->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_501(const auto &x_1779) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1780) {
    auto x_2117 = [&](const auto &x_1781) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1782) {
        if (x_1781->meta->pass_0_proc_inited) {
          x_1781->meta->bb_0_has_bb_dirtied = true;
          x_1781->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1781);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2117(x_1779);
    MakeUnit();
    auto x_2118 = [&](const auto &x_1783) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1784) {
        if (x_1783->meta->pass_1_proc_inited) {
          x_1783->meta->bb_2_has_bb_dirtied = true;
          x_1783->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1783);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2118(x_1779);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_498(const auto &x_1785) {
  if (eq(x_1785->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1785->var_inside_svg) {
      return 0.;
    } else {
      if (x_1785->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1785->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1785->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1785->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1785->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1785->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1785->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1785->var_width_expr.r.a0;
          } else {
            return x_1785->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1785->var_children_intrinsic_width,
              (eq(x_1785->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1785->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1785->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1785->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1785->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1785->var_has_width_attr &&
                                                  (x_1785->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1785->var_width_attr_expr.r.a0)
                                                     : (((!x_1785->var_has_width_attr) && x_1785->has_attr_viewBox)
                                                            ? (x_1785->attr_viewBox.r.a2)
                                                            : (mult((x_1785->attr_viewBox.r.a2),
                                                                    divide(x_1785->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1785->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1785->var_has_width_attr)
                                                            ? (x_1785->var_width_attr_expr.r.a0)
                                                            : ((x_1785->has_attr_image_width &&
                                                                (!x_1785->var_has_height_attr))
                                                                   ? (int_to_float(x_1785->attr_image_width))
                                                                   : ((neq(x_1785->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1785->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1785->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1785->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1785->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1785->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_496(const auto &x_1938) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1939) {
    auto x_2119 = [&](const auto &x_1940) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1941) {
        if (x_1940->meta->pass_0_proc_inited) {
          x_1940->meta->bb_0_has_bb_dirtied = true;
          x_1940->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_1940);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2119(x_1938);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_493(const auto &x_1942) {
  if (x_1942->last != nullptr) {
    return (x_1942->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_491(const auto &x_1947) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_1948) {
    auto x_2120 = [&](const auto &x_1949) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_1950) {
        if (x_1949->meta->pass_1_proc_inited) {
          x_1949->meta->bb_2_has_bb_dirtied = true;
          x_1949->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_1949);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2120(x_1947);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_488(const auto &x_1951) {
  if (eq(x_1951->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1951->var_inside_svg || x_1951->var_disabled)) {
    return true;
  } else {
    if ((x_1951->parent != nullptr) && (x_1951->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1951->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1951->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1951->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1951->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1951->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_486(const auto &x_2000) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2001) {
    auto x_2121 = [&](const auto &x_2002) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2003) {
        if (x_2002->meta->pass_0_proc_inited) {
          x_2002->meta->bb_0_has_bb_dirtied = true;
          x_2002->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_2002);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2121(x_2000);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_483(const auto &x_2004) {
  if (eq(x_2004->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_2004->var_inside_svg) {
      return true;
    } else {
      if (x_2004->var_disabled) {
        return true;
      } else {if ( eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_2004->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_481(const auto &x_2017) {
  return MetricRecordOverhead(TimedOnly([&](const auto &x_2018) {
    auto x_2122 = [&](const auto &x_2019) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2020) {
        if (x_2019->meta->pass_0_proc_inited) {
          x_2019->meta->bb_0_has_bb_dirtied = true;
          x_2019->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_1040(x_2019);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2122(x_2017);
    MakeUnit();
    auto x_2123 = [&](const auto &x_2021) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_2022) {
        if (x_2021->meta->pass_1_proc_inited) {
          x_2021->meta->bb_2_has_bb_dirtied = true;
          x_2021->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_723(x_2021);
        } else {
          return MetaWriteMetric();
        }
      }));
    };
    x_2123(x_2017);
    MakeUnit();
    return MakeUnit();
  }));
}
auto eval_expr_x_478(const auto &x_2023) {
  if (x_2023->has_prop_width) {
    return x_2023->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_452(const auto &x_476) {
  return MetricRecordEval(TimedOnly([&](const auto &x_477) {
    WriteMetric();
    auto x_479 = eval_expr_x_478(x_476);
    if (x_476->has_var_width_expr) {
      auto x_480 = x_476->var_width_expr;
      if (!EqualValue(x_480, x_479)) {
        var_modified_x_481(x_476);
      }
    }
    x_476->has_var_width_expr = true;
    x_476->var_width_expr = AsDEString(x_479);
    WriteMetric();
    auto x_484 = eval_expr_x_483(x_476);
    if (x_476->has_var_is_default_case) {
      auto x_485 = x_476->var_is_default_case;
      if (!EqualValue(x_485, x_484)) {
        var_modified_x_486(x_476);
      }
    }
    x_476->has_var_is_default_case = true;
    x_476->var_is_default_case = Asbool(x_484);
    WriteMetric();
    auto x_489 = eval_expr_x_488(x_476);
    if (x_476->has_var_intrinsic_width_is_width) {
      auto x_490 = x_476->var_intrinsic_width_is_width;
      if (!EqualValue(x_490, x_489)) {
        var_modified_x_491(x_476);
      }
    }
    x_476->has_var_intrinsic_width_is_width = true;
    x_476->var_intrinsic_width_is_width = Asbool(x_489);
    WriteMetric();
    auto x_494 = eval_expr_x_493(x_476);
    if (x_476->has_var_children_intrinsic_width) {
      auto x_495 = x_476->var_children_intrinsic_width;
      if (!EqualValue(x_495, x_494)) {
        var_modified_x_496(x_476);
      }
    }
    x_476->has_var_children_intrinsic_width = true;
    x_476->var_children_intrinsic_width = Asdouble(x_494);
    WriteMetric();
    auto x_499 = eval_expr_x_498(x_476);
    if (x_476->has_var_intrinsic_width_internal) {
      auto x_500 = x_476->var_intrinsic_width_internal;
      if (!EqualValue(x_500, x_499)) {
        var_modified_x_501(x_476);
      }
    }
    x_476->has_var_intrinsic_width_internal = true;
    x_476->var_intrinsic_width_internal = Asdouble(x_499);
    WriteMetric();
    auto x_504 = eval_expr_x_503(x_476);
    if (x_476->has_var_intrinsic_width_external) {
      auto x_505 = x_476->var_intrinsic_width_external;
      if (!EqualValue(x_505, x_504)) {
        var_modified_x_506(x_476);
      }
    }
    x_476->has_var_intrinsic_width_external = true;
    x_476->var_intrinsic_width_external = Asdouble(x_504);
    WriteMetric();
    auto x_509 = eval_expr_x_508(x_476);
    if (x_476->has_var_intrinsic_current_line_width) {
      auto x_510 = x_476->var_intrinsic_current_line_width;
      if (!EqualValue(x_510, x_509)) {
        var_modified_x_511(x_476);
      }
    }
    x_476->has_var_intrinsic_current_line_width = true;
    x_476->var_intrinsic_current_line_width = Asdouble(x_509);
    WriteMetric();
    auto x_514 = eval_expr_x_513(x_476);
    if (x_476->has_var_intrinsic_width_max) {
      auto x_515 = x_476->var_intrinsic_width_max;
      if (!EqualValue(x_515, x_514)) {
        var_modified_x_516(x_476);
      }
    }
    x_476->has_var_intrinsic_width_max = true;
    x_476->var_intrinsic_width_max = Asdouble(x_514);
    WriteMetric();
    auto x_519 = eval_expr_x_518(x_476);
    if (x_476->has_var_intrinsic_width_sum) {
      auto x_520 = x_476->var_intrinsic_width_sum;
      if (!EqualValue(x_520, x_519)) {
        var_modified_x_521(x_476);
      }
    }
    x_476->has_var_intrinsic_width_sum = true;
    x_476->var_intrinsic_width_sum = Asdouble(x_519);
    WriteMetric();
    auto x_524 = eval_expr_x_523(x_476);
    if (x_476->has_var_children_intrinsic_height) {
      auto x_525 = x_476->var_children_intrinsic_height;
      if (!EqualValue(x_525, x_524)) {
        var_modified_x_526(x_476);
      }
    }
    x_476->has_var_children_intrinsic_height = true;
    x_476->var_children_intrinsic_height = Asdouble(x_524);
    WriteMetric();
    auto x_529 = eval_expr_x_528(x_476);
    if (x_476->has_var_height_expr) {
      auto x_530 = x_476->var_height_expr;
      if (!EqualValue(x_530, x_529)) {
        var_modified_x_531(x_476);
      }
    }
    x_476->has_var_height_expr = true;
    x_476->var_height_expr = AsDEString(x_529);
    WriteMetric();
    auto x_534 = eval_expr_x_533(x_476);
    if (x_476->has_var_intrinsic_height_is_height) {
      auto x_535 = x_476->var_intrinsic_height_is_height;
      if (!EqualValue(x_535, x_534)) {
        var_modified_x_536(x_476);
      }
    }
    x_476->has_var_intrinsic_height_is_height = true;
    x_476->var_intrinsic_height_is_height = Asbool(x_534);
    WriteMetric();
    auto x_539 = eval_expr_x_538(x_476);
    if (x_476->has_var_intrinsic_height_internal) {
      auto x_540 = x_476->var_intrinsic_height_internal;
      if (!EqualValue(x_540, x_539)) {
        var_modified_x_541(x_476);
      }
    }
    x_476->has_var_intrinsic_height_internal = true;
    x_476->var_intrinsic_height_internal = Asdouble(x_539);
    WriteMetric();
    auto x_544 = eval_expr_x_543(x_476);
    if (x_476->has_var_intrinsic_height_external) {
      auto x_545 = x_476->var_intrinsic_height_external;
      if (!EqualValue(x_545, x_544)) {
        var_modified_x_546(x_476);
      }
    }
    x_476->has_var_intrinsic_height_external = true;
    x_476->var_intrinsic_height_external = Asdouble(x_544);
    WriteMetric();
    auto x_549 = eval_expr_x_548(x_476);
    if (x_476->has_var_intrinsic_height_sum) {
      auto x_550 = x_476->var_intrinsic_height_sum;
      if (!EqualValue(x_550, x_549)) {
        var_modified_x_551(x_476);
      }
    }
    x_476->has_var_intrinsic_height_sum = true;
    x_476->var_intrinsic_height_sum = Asdouble(x_549);
    WriteMetric();
    auto x_554 = eval_expr_x_553(x_476);
    if (x_476->has_var_intrinsic_current_line_height) {
      auto x_555 = x_476->var_intrinsic_current_line_height;
      if (!EqualValue(x_555, x_554)) {
        var_modified_x_556(x_476);
      }
    }
    x_476->has_var_intrinsic_current_line_height = true;
    x_476->var_intrinsic_current_line_height = Asdouble(x_554);
    WriteMetric();
    auto x_559 = eval_expr_x_558(x_476);
    if (x_476->has_var_finished_intrinsic_height_sum) {
      auto x_560 = x_476->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_560, x_559)) {
        var_modified_x_561(x_476);
      }
    }
    x_476->has_var_finished_intrinsic_height_sum = true;
    x_476->var_finished_intrinsic_height_sum = Asdouble(x_559);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_448(const auto &x_563) {
  return MetricRecordEval(TimedOnly([&](const auto &x_564) {
    WriteMetric();
    auto x_566 = eval_expr_x_565(x_563);
    if (x_563->has_var_display) {
      auto x_567 = x_563->var_display;
      if (!EqualValue(x_567, x_566)) {
        var_modified_x_568(x_563);
      }
    }
    x_563->has_var_display = true;
    x_563->var_display = AsDEString(x_566);
    WriteMetric();
    auto x_571 = eval_expr_x_570(x_563);
    if (x_563->has_var_position) {
      auto x_572 = x_563->var_position;
      if (!EqualValue(x_572, x_571)) {
        var_modified_x_573(x_563);
      }
    }
    x_563->has_var_position = true;
    x_563->var_position = AsDEString(x_571);
    WriteMetric();
    auto x_576 = eval_expr_x_575(x_563);
    if (x_563->has_var_flex_grow) {
      auto x_577 = x_563->var_flex_grow;
      if (!EqualValue(x_577, x_576)) {
        var_modified_x_578(x_563);
      }
    }
    x_563->has_var_flex_grow = true;
    x_563->var_flex_grow = Asdouble(x_576);
    WriteMetric();
    auto x_581 = eval_expr_x_580(x_563);
    if (x_563->has_var_flex_shrink) {
      auto x_582 = x_563->var_flex_shrink;
      if (!EqualValue(x_582, x_581)) {
        var_modified_x_583(x_563);
      }
    }
    x_563->has_var_flex_shrink = true;
    x_563->var_flex_shrink = Asdouble(x_581);
    WriteMetric();
    auto x_586 = eval_expr_x_585(x_563);
    if (x_563->has_var_flex_grow_sum) {
      auto x_587 = x_563->var_flex_grow_sum;
      if (!EqualValue(x_587, x_586)) {
        var_modified_x_588(x_563);
      }
    }
    x_563->has_var_flex_grow_sum = true;
    x_563->var_flex_grow_sum = Asdouble(x_586);
    WriteMetric();
    auto x_591 = eval_expr_x_590(x_563);
    if (x_563->has_var_flex_shrink_sum) {
      auto x_592 = x_563->var_flex_shrink_sum;
      if (!EqualValue(x_592, x_591)) {
        var_modified_x_593(x_563);
      }
    }
    x_563->has_var_flex_shrink_sum = true;
    x_563->var_flex_shrink_sum = Asdouble(x_591);
    WriteMetric();
    auto x_596 = eval_expr_x_595(x_563);
    if (x_563->has_var_flex_direction) {
      auto x_597 = x_563->var_flex_direction;
      if (!EqualValue(x_597, x_596)) {
        var_modified_x_598(x_563);
      }
    }
    x_563->has_var_flex_direction = true;
    x_563->var_flex_direction = AsDEString(x_596);
    WriteMetric();
    auto x_601 = eval_expr_x_600(x_563);
    if (x_563->has_var_is_flex_row) {
      auto x_602 = x_563->var_is_flex_row;
      if (!EqualValue(x_602, x_601)) {
        var_modified_x_603(x_563);
      }
    }
    x_563->has_var_is_flex_row = true;
    x_563->var_is_flex_row = Asbool(x_601);
    WriteMetric();
    auto x_606 = eval_expr_x_605(x_563);
    if (x_563->has_var_is_flex_column) {
      auto x_607 = x_563->var_is_flex_column;
      if (!EqualValue(x_607, x_606)) {
        var_modified_x_608(x_563);
      }
    }
    x_563->has_var_is_flex_column = true;
    x_563->var_is_flex_column = Asbool(x_606);
    WriteMetric();
    auto x_611 = eval_expr_x_610(x_563);
    if (x_563->has_var_width_attr_expr) {
      auto x_612 = x_563->var_width_attr_expr;
      if (!EqualValue(x_612, x_611)) {
        var_modified_x_613(x_563);
      }
    }
    x_563->has_var_width_attr_expr = true;
    x_563->var_width_attr_expr = AsDEString(x_611);
    WriteMetric();
    auto x_616 = eval_expr_x_615(x_563);
    if (x_563->has_var_has_width_attr) {
      auto x_617 = x_563->var_has_width_attr;
      if (!EqualValue(x_617, x_616)) {
        var_modified_x_618(x_563);
      }
    }
    x_563->has_var_has_width_attr = true;
    x_563->var_has_width_attr = Asbool(x_616);
    WriteMetric();
    auto x_621 = eval_expr_x_620(x_563);
    if (x_563->has_var_height_attr_expr) {
      auto x_622 = x_563->var_height_attr_expr;
      if (!EqualValue(x_622, x_621)) {
        var_modified_x_623(x_563);
      }
    }
    x_563->has_var_height_attr_expr = true;
    x_563->var_height_attr_expr = AsDEString(x_621);
    WriteMetric();
    auto x_626 = eval_expr_x_625(x_563);
    if (x_563->has_var_has_height_attr) {
      auto x_627 = x_563->var_has_height_attr;
      if (!EqualValue(x_627, x_626)) {
        var_modified_x_628(x_563);
      }
    }
    x_563->has_var_has_height_attr = true;
    x_563->var_has_height_attr = Asbool(x_626);
    WriteMetric();
    auto x_631 = eval_expr_x_630(x_563);
    if (x_563->has_var_is_svg_block) {
      auto x_632 = x_563->var_is_svg_block;
      if (!EqualValue(x_632, x_631)) {
        var_modified_x_633(x_563);
      }
    }
    x_563->has_var_is_svg_block = true;
    x_563->var_is_svg_block = Asbool(x_631);
    WriteMetric();
    auto x_636 = eval_expr_x_635(x_563);
    if (x_563->has_var_inside_svg) {
      auto x_637 = x_563->var_inside_svg;
      if (!EqualValue(x_637, x_636)) {
        var_modified_x_638(x_563);
      }
    }
    x_563->has_var_inside_svg = true;
    x_563->var_inside_svg = Asbool(x_636);
    WriteMetric();
    auto x_641 = eval_expr_x_640(x_563);
    if (x_563->has_var_disabled) {
      auto x_642 = x_563->var_disabled;
      if (!EqualValue(x_642, x_641)) {
        var_modified_x_643(x_563);
      }
    }
    x_563->has_var_disabled = true;
    x_563->var_disabled = Asbool(x_641);
    WriteMetric();
    auto x_646 = eval_expr_x_645(x_563);
    if (x_563->has_var_visible) {
      auto x_647 = x_563->var_visible;
      if (!EqualValue(x_647, x_646)) {
        var_modified_x_648(x_563);
      }
    }
    x_563->has_var_visible = true;
    x_563->var_visible = Asbool(x_646);
    WriteMetric();
    auto x_651 = eval_expr_x_650(x_563);
    if (x_563->has_var_line_break) {
      auto x_652 = x_563->var_line_break;
      if (!EqualValue(x_652, x_651)) {
        var_modified_x_653(x_563);
      }
    }
    x_563->has_var_line_break = true;
    x_563->var_line_break = Asbool(x_651);
    return MakeUnit();
  }));
}
Unit eval_stmts_x_442(const auto &x_655) {
  return MetricRecordEval(TimedOnly([&](const auto &x_656) {
    WriteMetric();
    auto x_658 = eval_expr_x_657(x_655);
    if (x_655->has_var_box_width) {
      auto x_659 = x_655->var_box_width;
      if (!EqualValue(x_659, x_658)) {
        var_modified_x_660(x_655);
      }
    }
    x_655->has_var_box_width = true;
    x_655->var_box_width = Asdouble(x_658);
    WriteMetric();
    auto x_663 = eval_expr_x_662(x_655);
    if (x_655->has_var_box_height) {
      auto x_664 = x_655->var_box_height;
      if (!EqualValue(x_664, x_663)) {
        var_modified_x_665(x_655);
      }
    }
    x_655->has_var_box_height = true;
    x_655->var_box_height = Asdouble(x_663);
    WriteMetric();
    auto x_668 = eval_expr_x_667(x_655);
    if (x_655->has_var_left_over) {
      auto x_669 = x_655->var_left_over;
      if (!EqualValue(x_669, x_668)) {
        var_modified_x_670(x_655);
      }
    }
    x_655->has_var_left_over = true;
    x_655->var_left_over = Asdouble(x_668);
    WriteMetric();
    auto x_673 = eval_expr_x_672(x_655);
    if (x_655->has_var_flex_amount) {
      auto x_674 = x_655->var_flex_amount;
      if (!EqualValue(x_674, x_673)) {
        var_modified_x_675(x_655);
      }
    }
    x_655->has_var_flex_amount = true;
    x_655->var_flex_amount = Asdouble(x_673);
    WriteMetric();
    auto x_678 = eval_expr_x_677(x_655);
    if (x_655->has_var_flex_unit) {
      auto x_679 = x_655->var_flex_unit;
      if (!EqualValue(x_679, x_678)) {
        var_modified_x_680(x_655);
      }
    }
    x_655->has_var_flex_unit = true;
    x_655->var_flex_unit = Asdouble(x_678);
    WriteMetric();
    auto x_683 = eval_expr_x_682(x_655);
    if (x_655->has_var_x) {
      auto x_684 = x_655->var_x;
      if (!EqualValue(x_684, x_683)) {
        var_modified_x_685(x_655);
      }
    }
    x_655->has_var_x = true;
    x_655->var_x = Asdouble(x_683);
    WriteMetric();
    auto x_688 = eval_expr_x_687(x_655);
    if (x_655->has_var_width_internal) {
      auto x_689 = x_655->var_width_internal;
      if (!EqualValue(x_689, x_688)) {
        var_modified_x_690(x_655);
      }
    }
    x_655->has_var_width_internal = true;
    x_655->var_width_internal = Asdouble(x_688);
    WriteMetric();
    auto x_693 = eval_expr_x_692(x_655);
    if (x_655->has_var_width_external) {
      auto x_694 = x_655->var_width_external;
      if (!EqualValue(x_694, x_693)) {
        var_modified_x_695(x_655);
      }
    }
    x_655->has_var_width_external = true;
    x_655->var_width_external = Asdouble(x_693);
    WriteMetric();
    auto x_698 = eval_expr_x_697(x_655);
    if (x_655->has_var_y) {
      auto x_699 = x_655->var_y;
      if (!EqualValue(x_699, x_698)) {
        var_modified_x_700(x_655);
      }
    }
    x_655->has_var_y = true;
    x_655->var_y = Asdouble(x_698);
    WriteMetric();
    auto x_703 = eval_expr_x_702(x_655);
    if (x_655->has_var_height_internal) {
      auto x_704 = x_655->var_height_internal;
      if (!EqualValue(x_704, x_703)) {
        var_modified_x_705(x_655);
      }
    }
    x_655->has_var_height_internal = true;
    x_655->var_height_internal = Asdouble(x_703);
    WriteMetric();
    auto x_708 = eval_expr_x_707(x_655);
    if (x_655->has_var_height_external) {
      auto x_709 = x_655->var_height_external;
      if (!EqualValue(x_709, x_708)) {
        var_modified_x_710(x_655);
      }
    }
    x_655->has_var_height_external = true;
    x_655->var_height_external = Asdouble(x_708);
    WriteMetric();
    auto x_713 = eval_expr_x_712(x_655);
    if (x_655->has_var_line_height) {
      auto x_714 = x_655->var_line_height;
      if (!EqualValue(x_714, x_713)) {
        var_modified_x_715(x_655);
      }
    }
    x_655->has_var_line_height = true;
    x_655->var_line_height = Asdouble(x_713);
    return MakeUnit();
  }));
}
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48) {
  auto x_49 = ListHeadExn(x_46);
  auto x_50 = ListTailExn(x_46);
  if (ListIsEmpty(x_50)) {
    auto x_51 = ListSplitN(x_47->children, x_49);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_47->children, x_49)), layout_size_x_3(x_48)));
    x_47->children = ListAppend(Zro(x_51), Cons(x_48, ListTailExn(Fst(x_51))));
    return MakeUnit();
  } else {
    return x_45(x_50, ListNthExn(x_47->children, x_49), x_48);
  }
}
Unit replace_layout_node_x_44(const auto &x_46, const auto &x_47, const auto &x_48) { return x_45(x_46, x_47, x_48); }
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55) {
  auto x_56 = ListHeadExn(x_53);
  auto x_57 = ListTailExn(x_53);
  if (ListIsEmpty(x_57)) {
    OutputChangeMetric(layout_size_x_3(x_55));
    auto x_58 = ListSplitN(x_54->children, x_56);
    x_54->children = ListAppend(Zro(x_58), Cons(x_55, Fst(x_58)));
    return MakeUnit();
  } else {
    return x_52(x_57, ListNthExn(x_54->children, x_56), x_55);
  }
}
Unit add_layout_node_x_42(const auto &x_53, const auto &x_54, const auto &x_55) { return x_52(x_53, x_54, x_55); }
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62) {
  auto x_63 = ListHeadExn(x_60);
  auto x_64 = ListTailExn(x_60);
  if (ListIsEmpty(x_64)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_61->children, x_63)));
    auto x_65 = ListSplitN(x_61->children, x_63);
    x_61->children = ListAppend(Zro(x_65), ListTailExn(Fst(x_65)));
    return MakeUnit();
  } else {
    return x_59(x_64, ListNthExn(x_61->children, x_63), x_62);
  }
}
Unit remove_layout_node_x_40(const auto &x_60, const auto &x_61, const auto &x_62) { return x_59(x_60, x_61, x_62); }
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69) {
  return ListMatch(
      x_67,
      [&](const auto &x_72) {
        auto x_73 = Zro(x_69);
        auto x_74 = Zro(x_73);
        auto x_75 = Fst(x_73);
        auto x_76 = Fst(x_69);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2124 = x_74;
        if (x_2124 == "attributes") {
          std::string x_2125 = x_75;
          if (x_2125 == "width") {
            WriteMetric();
            x_68->has_attr_width = true;
            x_68->attr_width = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_77) {
              if (x_68->meta->bb_1_has_bb_time_table) {
                auto x_78 = x_68->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_78, x_68, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2125 == "image_height") {
            WriteMetric();
            x_68->has_attr_image_height = true;
            x_68->attr_image_height = Asint64_t(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_80) {
              if (x_68->meta->bb_0_has_bb_time_table) {
                auto x_81 = x_68->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_81, x_68, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2125 == "image_width") {
            WriteMetric();
            x_68->has_attr_image_width = true;
            x_68->attr_image_width = Asint64_t(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_83) {
              if (x_68->meta->bb_0_has_bb_time_table) {
                auto x_84 = x_68->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_84, x_68, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2125 == "height") {
            WriteMetric();
            x_68->has_attr_height = true;
            x_68->attr_height = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_86) {
              if (x_68->meta->bb_1_has_bb_time_table) {
                auto x_87 = x_68->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_87, x_68, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2125 == "viewBox") {
            WriteMetric();
            x_68->has_attr_viewBox = true;
            x_68->attr_viewBox = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_89) {
              if (x_68->meta->bb_0_has_bb_time_table) {
                auto x_90 = x_68->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_90, x_68, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2124 == "properties") {
          std::string x_2126 = x_75;
          if (x_2126 == "width") {
            WriteMetric();
            x_68->has_prop_width = true;
            x_68->prop_width = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_92) {
              if (x_68->meta->bb_0_has_bb_time_table) {
                auto x_93 = x_68->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_93, x_68, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2126 == "flex-grow") {
            WriteMetric();
            x_68->has_prop_flex_grow = true;
            x_68->prop_flex_grow = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_95) {
              if (x_68->meta->bb_1_has_bb_time_table) {
                auto x_96 = x_68->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_96, x_68, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2126 == "height") {
            WriteMetric();
            x_68->has_prop_height = true;
            x_68->prop_height = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_98) {
              if (x_68->meta->bb_0_has_bb_time_table) {
                auto x_99 = x_68->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_99, x_68, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2126 == "display") {
            WriteMetric();
            x_68->has_prop_display = true;
            x_68->prop_display = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_101) {
              if (x_68->meta->bb_1_has_bb_time_table) {
                auto x_102 = x_68->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_102, x_68, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2126 == "position") {
            WriteMetric();
            x_68->has_prop_position = true;
            x_68->prop_position = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_104) {
              if (x_68->meta->bb_1_has_bb_time_table) {
                auto x_105 = x_68->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_105, x_68, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2126 == "flex-shrink") {
            WriteMetric();
            x_68->has_prop_flex_shrink = true;
            x_68->prop_flex_shrink = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_107) {
              if (x_68->meta->bb_1_has_bb_time_table) {
                auto x_108 = x_68->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_108, x_68, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2126 == "flex-direction") {
            WriteMetric();
            x_68->has_prop_flex_direction = true;
            x_68->prop_flex_direction = AsDEString(x_76);
            MetricRecordOverhead(TimedOnly([&](const auto &x_110) {
              if (x_68->meta->bb_1_has_bb_time_table) {
                auto x_111 = x_68->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_111, x_68, static_cast<int64_t>(0));
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
      [&](const auto &x_70, const auto &x_71) { return x_66(x_71, ListNthExn(x_68->children, x_70), x_69); });
}
Unit insert_value_x_38(const auto &x_67, const auto &x_68, const auto &x_69) { return x_66(x_67, x_68, x_69); }
Unit x_113(const auto &x_114, const auto &x_115, const auto &x_116) {
  return ListMatch(
      x_114,
      [&](const auto &x_119) {
        auto x_120 = Zro(x_116);
        auto x_121 = Fst(x_116);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2127 = x_120;
        if (x_2127 == "attributes") {
          std::string x_2128 = x_121;
          if (x_2128 == "width") {
            WriteMetric();
            x_115->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_122) {
              if (x_115->meta->bb_1_has_bb_time_table) {
                auto x_123 = x_115->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_123, x_115, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2128 == "image_height") {
            WriteMetric();
            x_115->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_125) {
              if (x_115->meta->bb_0_has_bb_time_table) {
                auto x_126 = x_115->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_126, x_115, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2128 == "image_width") {
            WriteMetric();
            x_115->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_128) {
              if (x_115->meta->bb_0_has_bb_time_table) {
                auto x_129 = x_115->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_129, x_115, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2128 == "height") {
            WriteMetric();
            x_115->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_131) {
              if (x_115->meta->bb_1_has_bb_time_table) {
                auto x_132 = x_115->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_132, x_115, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2128 == "viewBox") {
            WriteMetric();
            x_115->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_134) {
              if (x_115->meta->bb_0_has_bb_time_table) {
                auto x_135 = x_115->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_135, x_115, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2127 == "properties") {
          std::string x_2129 = x_121;
          if (x_2129 == "width") {
            WriteMetric();
            x_115->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_137) {
              if (x_115->meta->bb_0_has_bb_time_table) {
                auto x_138 = x_115->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_138, x_115, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2129 == "flex-grow") {
            WriteMetric();
            x_115->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_140) {
              if (x_115->meta->bb_1_has_bb_time_table) {
                auto x_141 = x_115->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_141, x_115, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2129 == "height") {
            WriteMetric();
            x_115->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_143) {
              if (x_115->meta->bb_0_has_bb_time_table) {
                auto x_144 = x_115->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_144, x_115, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2129 == "display") {
            WriteMetric();
            x_115->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_146) {
              if (x_115->meta->bb_1_has_bb_time_table) {
                auto x_147 = x_115->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_147, x_115, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2129 == "position") {
            WriteMetric();
            x_115->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_149) {
              if (x_115->meta->bb_1_has_bb_time_table) {
                auto x_150 = x_115->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_150, x_115, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2129 == "flex-shrink") {
            WriteMetric();
            x_115->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_152) {
              if (x_115->meta->bb_1_has_bb_time_table) {
                auto x_153 = x_115->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_153, x_115, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2129 == "flex-direction") {
            WriteMetric();
            x_115->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_155) {
              if (x_115->meta->bb_1_has_bb_time_table) {
                auto x_156 = x_115->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_156, x_115, static_cast<int64_t>(0));
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
      [&](const auto &x_117, const auto &x_118) { return x_113(x_118, ListNthExn(x_115->children, x_117), x_116); });
}
Unit delete_value_x_36(const auto &x_114, const auto &x_115, const auto &x_116) { return x_113(x_114, x_115, x_116); }
Unit x_158(const auto &x_159, const auto &x_160, const auto &x_161) {
  return ListMatch(
      x_159,
      [&](const auto &x_164) {
        auto x_165 = Zro(x_161);
        auto x_166 = Zro(x_165);
        auto x_167 = Fst(x_165);
        auto x_168 = Fst(x_161);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2130 = x_166;
        if (x_2130 == "attributes") {
          std::string x_2131 = x_167;
          if (x_2131 == "width") {
            WriteMetric();
            x_160->has_attr_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_169) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_170 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_170, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_attr_width = true;
            x_160->attr_width = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_172) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_173 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_173, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2131 == "image_height") {
            WriteMetric();
            x_160->has_attr_image_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_175) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_176 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_176, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_attr_image_height = true;
            x_160->attr_image_height = Asint64_t(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_178) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_179 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_179, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2131 == "image_width") {
            WriteMetric();
            x_160->has_attr_image_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_181) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_182 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_182, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_attr_image_width = true;
            x_160->attr_image_width = Asint64_t(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_184) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_185 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_185, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2131 == "height") {
            WriteMetric();
            x_160->has_attr_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_187) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_188 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_188, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_attr_height = true;
            x_160->attr_height = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_190) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_191 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_191, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2131 == "viewBox") {
            WriteMetric();
            x_160->has_attr_viewBox = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_193) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_194 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_194, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_attr_viewBox = true;
            x_160->attr_viewBox = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_196) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_197 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_197, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2130 == "properties") {
          std::string x_2132 = x_167;
          if (x_2132 == "width") {
            WriteMetric();
            x_160->has_prop_width = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_199) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_200 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_200, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_prop_width = true;
            x_160->prop_width = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_202) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_203 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_203, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2132 == "flex-grow") {
            WriteMetric();
            x_160->has_prop_flex_grow = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_205) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_206 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_206, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_prop_flex_grow = true;
            x_160->prop_flex_grow = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_208) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_209 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_209, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2132 == "height") {
            WriteMetric();
            x_160->has_prop_height = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_211) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_212 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_212, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_prop_height = true;
            x_160->prop_height = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_214) {
              if (x_160->meta->bb_0_has_bb_time_table) {
                auto x_215 = x_160->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_215, x_160, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2132 == "display") {
            WriteMetric();
            x_160->has_prop_display = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_217) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_218 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_218, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_prop_display = true;
            x_160->prop_display = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_220) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_221 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_221, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2132 == "position") {
            WriteMetric();
            x_160->has_prop_position = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_223) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_224 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_224, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_prop_position = true;
            x_160->prop_position = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_226) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_227 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_227, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2132 == "flex-shrink") {
            WriteMetric();
            x_160->has_prop_flex_shrink = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_229) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_230 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_230, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_prop_flex_shrink = true;
            x_160->prop_flex_shrink = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_232) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_233 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_233, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            return MakeUnit();
          } else if (x_2132 == "flex-direction") {
            WriteMetric();
            x_160->has_prop_flex_direction = false;
            MetricRecordOverhead(TimedOnly([&](const auto &x_235) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_236 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_236, x_160, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            }));
            WriteMetric();
            x_160->has_prop_flex_direction = true;
            x_160->prop_flex_direction = AsDEString(x_168);
            MetricRecordOverhead(TimedOnly([&](const auto &x_238) {
              if (x_160->meta->bb_1_has_bb_time_table) {
                auto x_239 = x_160->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_239, x_160, static_cast<int64_t>(0));
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
      [&](const auto &x_162, const auto &x_163) { return x_158(x_163, ListNthExn(x_160->children, x_162), x_161); });
}
Unit replace_value_x_34(const auto &x_159, const auto &x_160, const auto &x_161) { return x_158(x_159, x_160, x_161); }
Unit x_241(const auto &x_242, const auto &x_243, const auto &x_244) {
  auto x_245 = ListHeadExn(x_242);
  auto x_246 = ListTailExn(x_242);
  if (ListIsEmpty(x_246)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_243->children, x_245)), node_size_x_4(x_244)));
    auto x_247 = ListSplitN(x_243->children, x_245);
    auto x_248 = Zro(x_247);
    auto x_249 = Fst(x_247);
    auto x_250 = ListHeadExn(x_249);
    auto x_251 = ListTailExn(x_249);
    x_243->children = ListAppend(x_248, x_251);
    x_250->meta->alive = false;
    OptionMatch(
        x_250->prev, [&](const auto &x_253) { return MakeUnit(); },
        [&](const auto &x_252) {
          x_252->next = ToPath(x_250->next);
          return MakeUnit();
        });
    OptionMatch(
        x_250->next, [&](const auto &x_255) { return MakeUnit(); },
        [&](const auto &x_254) {
          x_254->prev = ToPath(x_250->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_248)) {
      x_243->first = ToPath(ListHead(x_251));
    }
    if (ListIsEmpty(x_251)) {
      x_243->last = ToPath(ListLast(x_248));
    }
    OptionMatch(
        x_250->next, [&](const auto &x_260) { return MakeUnit(); },
        [&](const auto &x_256) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_257) {
            if (x_256->meta->bb_1_has_bb_time_table) {
              auto x_258 = x_256->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_258, x_256, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_243->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_261) {
        if (x_243->meta->bb_0_has_bb_time_table) {
          auto x_262 = x_243->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_262, x_243, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_251)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_264) {
        if (x_243->meta->bb_0_has_bb_time_table) {
          auto x_265 = x_243->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_265, x_243, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_250->next, [&](const auto &x_271) { return MakeUnit(); },
        [&](const auto &x_267) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_268) {
            if (x_267->meta->bb_0_has_bb_time_table) {
              auto x_269 = x_267->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_269, x_267, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_243->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_272) {
        if (x_243->meta->bb_2_has_bb_time_table) {
          auto x_273 = x_243->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_273, x_243, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_251)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_275) {
        if (x_243->meta->bb_2_has_bb_time_table) {
          auto x_276 = x_243->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_276, x_243, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_250->next, [&](const auto &x_282) { return MakeUnit(); },
        [&](const auto &x_278) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_279) {
            if (x_278->meta->bb_2_has_bb_time_table) {
              auto x_280 = x_278->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_280, x_278, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          }));
        });
    MakeUnit();
    auto x_283 = ListSplitN(x_243->children, x_245);
    auto x_284 = Zro(x_283);
    auto x_285 = Fst(x_283);
    x_243->children = ListAppend(x_284, Cons(x_244, x_285));
    if (ListIsEmpty(x_284)) {
      x_243->first = x_244.get();
    }
    if (ListIsEmpty(x_285)) {
      x_243->last = x_244.get();
    }
    OptionMatch(
        ListLast(x_284),
        [&](const auto &x_287) {
          x_244->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_286) {
          x_244->prev = x_286.get();
          x_286->next = x_244.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_285),
        [&](const auto &x_289) {
          x_244->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_288) {
          x_244->next = x_288.get();
          x_288->prev = x_244.get();
          return MakeUnit();
        });
    x_244->parent = x_243.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_290) {
      auto x_291 = (x_244->parent);
      if (x_291->meta->pass_0_has_proc_time_table) {
        auto x_294 = OptionMatch(
            x_244->prev, [&](const auto &x_293) { return NextTotalOrder(x_291->meta->bb_1_bb_time_table); },
            [&](const auto &x_292) { return NextTotalOrder(x_292->meta->pass_0_proc_time_table); });
        x_244->meta->pass_0_has_proc_time_table = true;
        x_244->meta->pass_0_proc_time_table = x_294;
        MetaWriteMetric();
        return QueueForcePush(x_294, x_244, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    }));
    OptionMatch(
        x_244->next, [&](const auto &x_300) { return MakeUnit(); },
        [&](const auto &x_296) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_297) {
            if (x_296->meta->bb_1_has_bb_time_table) {
              auto x_298 = x_296->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_298, x_296, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsSingleton(x_243->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_301) {
        if (x_243->meta->bb_0_has_bb_time_table) {
          auto x_302 = x_243->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_302, x_243, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_285)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_304) {
        if (x_243->meta->bb_0_has_bb_time_table) {
          auto x_305 = x_243->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_305, x_243, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_244->next, [&](const auto &x_311) { return MakeUnit(); },
        [&](const auto &x_307) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_308) {
            if (x_307->meta->bb_0_has_bb_time_table) {
              auto x_309 = x_307->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_309, x_307, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_312) {
      auto x_313 = (x_244->parent);
      if (x_313->meta->pass_1_has_proc_time_table) {
        auto x_316 = OptionMatch(
            x_244->prev, [&](const auto &x_315) { return NextTotalOrder(x_313->meta->bb_2_bb_time_table); },
            [&](const auto &x_314) { return NextTotalOrder(x_314->meta->pass_1_proc_time_table); });
        x_244->meta->pass_1_has_proc_time_table = true;
        x_244->meta->pass_1_proc_time_table = x_316;
        MetaWriteMetric();
        return QueueForcePush(x_316, x_244, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    }));
    if (ListIsSingleton(x_243->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_318) {
        if (x_243->meta->bb_2_has_bb_time_table) {
          auto x_319 = x_243->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_319, x_243, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_285)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_321) {
        if (x_243->meta->bb_2_has_bb_time_table) {
          auto x_322 = x_243->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_322, x_243, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_244->next, [&](const auto &x_328) { return MakeUnit(); },
        [&](const auto &x_324) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_325) {
            if (x_324->meta->bb_2_has_bb_time_table) {
              auto x_326 = x_324->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_326, x_324, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          }));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_241(x_246, ListNthExn(x_243->children, x_245), x_244);
  }
}
Unit replace_node_x_32(const auto &x_242, const auto &x_243, const auto &x_244) { return x_241(x_242, x_243, x_244); }
Unit x_329(const auto &x_330) {
  ListIter2(x_330->children, [&](const auto &x_331, const auto &x_332) {
    x_331->parent = x_330.get();
    x_332->parent = x_330.get();
    x_331->next = x_332.get();
    x_332->prev = x_331.get();
    x_329(x_331);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_330->children),
      [&](const auto &x_334) {
        x_330->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_333) {
        x_330->first = x_333.get();
        x_333->parent = x_330.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_330->children),
      [&](const auto &x_336) {
        x_330->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_335) {
        x_330->last = x_335.get();
        x_335->parent = x_330.get();
        x_329(x_335);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_30(const auto &x_330) { return x_329(x_330); }
Unit x_337(const auto &x_338, const auto &x_339, const auto &x_340) {
  auto x_341 = ListHeadExn(x_338);
  auto x_342 = ListTailExn(x_338);
  if (ListIsEmpty(x_342)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_339->children, x_341)));
    auto x_343 = ListSplitN(x_339->children, x_341);
    auto x_344 = Zro(x_343);
    auto x_345 = Fst(x_343);
    auto x_346 = ListHeadExn(x_345);
    auto x_347 = ListTailExn(x_345);
    x_339->children = ListAppend(x_344, x_347);
    x_346->meta->alive = false;
    OptionMatch(
        x_346->prev, [&](const auto &x_349) { return MakeUnit(); },
        [&](const auto &x_348) {
          x_348->next = ToPath(x_346->next);
          return MakeUnit();
        });
    OptionMatch(
        x_346->next, [&](const auto &x_351) { return MakeUnit(); },
        [&](const auto &x_350) {
          x_350->prev = ToPath(x_346->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_344)) {
      x_339->first = ToPath(ListHead(x_347));
    }
    if (ListIsEmpty(x_347)) {
      x_339->last = ToPath(ListLast(x_344));
    }
    OptionMatch(
        x_346->next, [&](const auto &x_356) { return MakeUnit(); },
        [&](const auto &x_352) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_353) {
            if (x_352->meta->bb_1_has_bb_time_table) {
              auto x_354 = x_352->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_354, x_352, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_339->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_357) {
        if (x_339->meta->bb_0_has_bb_time_table) {
          auto x_358 = x_339->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_358, x_339, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_347)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_360) {
        if (x_339->meta->bb_0_has_bb_time_table) {
          auto x_361 = x_339->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_361, x_339, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_346->next, [&](const auto &x_367) { return MakeUnit(); },
        [&](const auto &x_363) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_364) {
            if (x_363->meta->bb_0_has_bb_time_table) {
              auto x_365 = x_363->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_365, x_363, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsEmpty(x_339->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_368) {
        if (x_339->meta->bb_2_has_bb_time_table) {
          auto x_369 = x_339->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_369, x_339, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_347)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_371) {
        if (x_339->meta->bb_2_has_bb_time_table) {
          auto x_372 = x_339->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_372, x_339, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_346->next, [&](const auto &x_378) { return MakeUnit(); },
        [&](const auto &x_374) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_375) {
            if (x_374->meta->bb_2_has_bb_time_table) {
              auto x_376 = x_374->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_376, x_374, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          }));
        });
    return MakeUnit();
  } else {
    return x_337(x_342, ListNthExn(x_339->children, x_341), x_340);
  }
}
Unit remove_node_x_28(const auto &x_338, const auto &x_339, const auto &x_340) { return x_337(x_338, x_339, x_340); }
Unit x_379(const auto &x_380, const auto &x_381, const auto &x_382) {
  auto x_383 = ListHeadExn(x_380);
  auto x_384 = ListTailExn(x_380);
  if (ListIsEmpty(x_384)) {
    InputChangeMetric(node_size_x_4(x_382));
    auto x_385 = ListSplitN(x_381->children, x_383);
    auto x_386 = Zro(x_385);
    auto x_387 = Fst(x_385);
    x_381->children = ListAppend(x_386, Cons(x_382, x_387));
    if (ListIsEmpty(x_386)) {
      x_381->first = x_382.get();
    }
    if (ListIsEmpty(x_387)) {
      x_381->last = x_382.get();
    }
    OptionMatch(
        ListLast(x_386),
        [&](const auto &x_389) {
          x_382->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_388) {
          x_382->prev = x_388.get();
          x_388->next = x_382.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_387),
        [&](const auto &x_391) {
          x_382->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_390) {
          x_382->next = x_390.get();
          x_390->prev = x_382.get();
          return MakeUnit();
        });
    x_382->parent = x_381.get();
    MetricRecordOverhead(TimedOnly([&](const auto &x_392) {
      auto x_393 = (x_382->parent);
      if (x_393->meta->pass_0_has_proc_time_table) {
        auto x_396 = OptionMatch(
            x_382->prev, [&](const auto &x_395) { return NextTotalOrder(x_393->meta->bb_1_bb_time_table); },
            [&](const auto &x_394) { return NextTotalOrder(x_394->meta->pass_0_proc_time_table); });
        x_382->meta->pass_0_has_proc_time_table = true;
        x_382->meta->pass_0_proc_time_table = x_396;
        MetaWriteMetric();
        return QueueForcePush(x_396, x_382, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    }));
    OptionMatch(
        x_382->next, [&](const auto &x_402) { return MakeUnit(); },
        [&](const auto &x_398) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_399) {
            if (x_398->meta->bb_1_has_bb_time_table) {
              auto x_400 = x_398->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_400, x_398, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          }));
        });
    if (ListIsSingleton(x_381->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_403) {
        if (x_381->meta->bb_0_has_bb_time_table) {
          auto x_404 = x_381->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_404, x_381, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_387)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_406) {
        if (x_381->meta->bb_0_has_bb_time_table) {
          auto x_407 = x_381->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_407, x_381, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_382->next, [&](const auto &x_413) { return MakeUnit(); },
        [&](const auto &x_409) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_410) {
            if (x_409->meta->bb_0_has_bb_time_table) {
              auto x_411 = x_409->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_411, x_409, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          }));
        });
    MetricRecordOverhead(TimedOnly([&](const auto &x_414) {
      auto x_415 = (x_382->parent);
      if (x_415->meta->pass_1_has_proc_time_table) {
        auto x_418 = OptionMatch(
            x_382->prev, [&](const auto &x_417) { return NextTotalOrder(x_415->meta->bb_2_bb_time_table); },
            [&](const auto &x_416) { return NextTotalOrder(x_416->meta->pass_1_proc_time_table); });
        x_382->meta->pass_1_has_proc_time_table = true;
        x_382->meta->pass_1_proc_time_table = x_418;
        MetaWriteMetric();
        return QueueForcePush(x_418, x_382, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    }));
    if (ListIsSingleton(x_381->children)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_420) {
        if (x_381->meta->bb_2_has_bb_time_table) {
          auto x_421 = x_381->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_421, x_381, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    if (ListIsEmpty(x_387)) {
      MetricRecordOverhead(TimedOnly([&](const auto &x_423) {
        if (x_381->meta->bb_2_has_bb_time_table) {
          auto x_424 = x_381->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_424, x_381, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      }));
    }
    OptionMatch(
        x_382->next, [&](const auto &x_430) { return MakeUnit(); },
        [&](const auto &x_426) {
          return MetricRecordOverhead(TimedOnly([&](const auto &x_427) {
            if (x_426->meta->bb_2_has_bb_time_table) {
              auto x_428 = x_426->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_428, x_426, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          }));
        });
    return MakeUnit();
  } else {
    return x_379(x_384, ListNthExn(x_381->children, x_383), x_382);
  }
}
Unit add_node_x_25(const auto &x_380, const auto &x_381, const auto &x_382) { return x_379(x_380, x_381, x_382); }
Unit x_431(const auto &x_432) {
  ListIter2(x_432->children, [&](const auto &x_433, const auto &x_434) {
    x_433->parent = x_432.get();
    x_434->parent = x_432.get();
    x_433->next = x_434.get();
    x_434->prev = x_433.get();
    x_431(x_433);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_432->children),
      [&](const auto &x_436) {
        x_432->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_435) {
        x_432->first = x_435.get();
        x_435->parent = x_432.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_432->children),
      [&](const auto &x_438) {
        x_432->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_437) {
        x_432->last = x_437.get();
        x_437->parent = x_432.get();
        x_431(x_437);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_23(const auto &x_432) { return x_431(x_432); }
Unit eval_stmts_x_19(const auto &x_439) {
  return MetricRecordEval(TimedOnly([&](const auto &x_440) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_441) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_439->meta->bb_2_has_bb_time_table = true;
      x_439->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_442(x_439);
      return MakeUnit();
    }));
    ListIter(x_439->children, [&](const auto &x_443) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_444) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_19(x_443);
        x_443->meta->pass_1_has_proc_time_table = true;
        x_443->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      }));
    });
    return MakeUnit();
  }));
}
Unit eval_stmts_x_17(const auto &x_445) {
  return MetricRecordEval(TimedOnly([&](const auto &x_446) {
    MetricRecordOverhead(TimedOnly([&](const auto &x_447) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_445->meta->bb_1_has_bb_time_table = true;
      x_445->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_448(x_445);
      return MakeUnit();
    }));
    ListIter(x_445->children, [&](const auto &x_449) {
      return MetricRecordOverhead(TimedOnly([&](const auto &x_450) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_17(x_449);
        x_449->meta->pass_0_has_proc_time_table = true;
        x_449->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      }));
    });
    MetricRecordOverhead(TimedOnly([&](const auto &x_451) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_445->meta->bb_0_has_bb_time_table = true;
      x_445->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_452(x_445);
      return MakeUnit();
    }));
    return MakeUnit();
  }));
}
Unit x_453(const auto &x_454) {
  ListIter2(x_454->children, [&](const auto &x_455, const auto &x_456) {
    x_455->parent = x_454.get();
    x_456->parent = x_454.get();
    x_455->next = x_456.get();
    x_456->prev = x_455.get();
    x_453(x_455);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_454->children),
      [&](const auto &x_458) {
        x_454->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_457) {
        x_454->first = x_457.get();
        x_457->parent = x_454.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_454->children),
      [&](const auto &x_460) {
        x_454->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_459) {
        x_454->last = x_459.get();
        x_459->parent = x_454.get();
        x_453(x_459);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_454) { return x_453(x_454); }
int64_t x_461(const auto &x_462) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_462->children, [&](const auto &x_463) { return x_461(x_463); }));
}
int64_t node_size_x_4(const auto &x_462) { return x_461(x_462); }
int64_t x_464(const auto &x_465) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_465->children, [&](const auto &x_466) { return x_464(x_466); }));
}
int64_t layout_size_x_3(const auto &x_465) { return x_464(x_465); }
LayoutNode x_467(const auto &x_468) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_468)), [&](const auto &x_469) { return x_467(x_469); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_468) { return x_467(x_468); }
Node x_470(const auto &x_471) {
  return MakeNode(x_471->name, x_471->attr, x_471->prop, x_471->extern_id,
                  ListMap(x_471->children, [&](const auto &x_472) { return x_470(x_472); }));
}
Node node_to_fs_node_x_1(const auto &x_471) { return x_470(x_471); }
Node x_473(const auto &x_474) {
  return MakeNode(JsonToString(JsonMember("name", x_474)), JsonToDict(JsonMember("attributes", x_474)),
                  JsonToDict(JsonMember("properties", x_474)), JsonToInt(JsonMember("id", x_474)),
                  ListMap(JsonToList(JsonMember("children", x_474)), [&](const auto &x_475) { return x_473(x_475); }));
}
Node json_to_node_aux_x_0(const auto &x_474) { return x_473(x_474); }
int main() {
  WithOutFile("espn.out", [&](const auto &x_5) {
    PrintEndline("RUNNING HB_D");
    return WithInFile("command.json", [&](const auto &x_6) {
      auto x_7 = MakeRef(static_cast<int64_t>(0));
      auto x_8 = FreshMetric();
      auto x_9 = JsonOfString(InputLine(x_6));
      auto x_10 = JsonOfString(InputLine(x_6));
      auto x_11 = MakeStack();
      PushStack(x_11, x_9);
      PushStack(x_11, x_10);
      Assert(StringEqual(JsonToString(JsonMember("name", x_9)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_10)), "layout_init"));
      auto x_14 = [&]() {
        auto x_12 = json_to_node_aux_x_0(JsonMember("node", x_9));
        x_12->parent = nullptr;
        x_12->prev = nullptr;
        x_12->next = nullptr;
        set_children_relation_x_13(x_12);
        return x_12;
      }();
      auto x_15 = json_to_layout_node_x_2(JsonMember("node", x_10));
      OutputChangeMetric(layout_size_x_3(x_15));
      InputChangeMetric(node_size_x_4(x_14));
      MetricRecordOverhead(TimedOnly([&](const auto &x_16) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_17(x_14);
        x_14->meta->pass_0_has_proc_time_table = true;
        x_14->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      }));
      MetricRecordOverhead(TimedOnly([&](const auto &x_18) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_19(x_14);
        x_14->meta->pass_1_has_proc_time_table = true;
        x_14->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      }));
      JsonToChannel(x_5, [&]() {
        auto x_2133 = FreshJson();
        WriteJson(x_2133, "name", "HB_D");
        WriteJson(x_2133, "diff_num", ReadRef(x_7));
        WriteJson(x_2133, "read_count", MetricReadCount());
        WriteJson(x_2133, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_2133, "write_count", MetricWriteCount());
        WriteJson(x_2133, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_2133, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_2133, "input_change_count", MetricInputChangeCount());
        WriteJson(x_2133, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_2133, "overhead_time", MetricOverheadCount());
        WriteJson(x_2133, "eval_time", MetricEvalCount());
        WriteJson(x_2133, "html", "");
        WriteJson(x_2133, "command", StackToList(x_11));
        return x_2133;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_2135 = JsonToString(JsonMember("name", x_21));
        if (x_2135 == "add") {
          return add_node_x_25(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_24) { return JsonToInt(x_24); }), x_14,
              [&]() {
                auto x_22 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_22->parent = nullptr;
                x_22->prev = nullptr;
                x_22->next = nullptr;
                set_children_relation_x_23(x_22);
                return x_22;
              }());
        } else if (x_2135 == "recalculate") {
          MetricRecordOverhead(TimedOnly([&](const auto &x_26) { Panic(); }));
          JsonToChannel(x_5, [&]() {
            auto x_2134 = FreshJson();
            WriteJson(x_2134, "name", "HB_D");
            WriteJson(x_2134, "diff_num", ReadRef(x_7));
            WriteJson(x_2134, "read_count", MetricReadCount());
            WriteJson(x_2134, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_2134, "write_count", MetricWriteCount());
            WriteJson(x_2134, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_2134, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_2134, "input_change_count", MetricInputChangeCount());
            WriteJson(x_2134, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_2134, "overhead_time", MetricOverheadCount());
            WriteJson(x_2134, "eval_time", MetricEvalCount());
            WriteJson(x_2134, "html", "");
            WriteJson(x_2134, "command", StackToList(x_11));
            return x_2134;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_2135 == "remove") {
          return remove_node_x_28(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_27) { return JsonToInt(x_27); }), x_14,
              MakeUnit());
        } else if (x_2135 == "replace") {
          return replace_node_x_32(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_31) { return JsonToInt(x_31); }), x_14,
              [&]() {
                auto x_29 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_29->parent = nullptr;
                x_29->prev = nullptr;
                x_29->next = nullptr;
                set_children_relation_x_30(x_29);
                return x_29;
              }());
        } else if (x_2135 == "replace_value") {
          return replace_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_2135 == "delete_value") {
          return delete_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_2135 == "insert_value") {
          return insert_value_x_38(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_2135 == "layout_remove") {
          return remove_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              MakeUnit());
        } else if (x_2135 == "layout_add") {
          return add_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_2135 == "layout_replace") {
          return replace_layout_node_x_44(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_43) { return JsonToInt(x_43); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_2135 == "layout_info_changed") {
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