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
Unit var_modified_x_627(const auto &x_723);
auto eval_expr_x_624(const auto &x_745);
Unit var_modified_x_622(const auto &x_822);
auto eval_expr_x_619(const auto &x_828);
Unit var_modified_x_617(const auto &x_845);
auto eval_expr_x_614(const auto &x_859);
Unit var_modified_x_612(const auto &x_864);
auto eval_expr_x_609(const auto &x_878);
Unit var_modified_x_607(const auto &x_887);
auto eval_expr_x_604(const auto &x_893);
Unit var_modified_x_602(const auto &x_894);
auto eval_expr_x_599(const auto &x_900);
Unit var_modified_x_597(const auto &x_905);
auto eval_expr_x_594(const auto &x_915);
Unit var_modified_x_592(const auto &x_926);
auto eval_expr_x_589(const auto &x_932);
Unit var_modified_x_587(const auto &x_937);
auto eval_expr_x_584(const auto &x_947);
Unit var_modified_x_582(const auto &x_958);
auto eval_expr_x_579(const auto &x_968);
Unit var_modified_x_577(const auto &x_993);
auto eval_expr_x_574(const auto &x_1007);
Unit var_modified_x_572(const auto &x_1032);
auto eval_expr_x_569(const auto &x_1038);
Unit var_modified_x_567(const auto &x_1041);
auto eval_expr_x_564(const auto &x_1053);
Unit var_modified_x_562(const auto &x_1062);
auto eval_expr_x_559(const auto &x_1074);
Unit var_modified_x_557(const auto &x_1083);
auto eval_expr_x_554(const auto &x_1093);
Unit var_modified_x_552(const auto &x_1096);
auto eval_expr_x_549(const auto &x_1106);
Unit var_modified_x_547(const auto &x_1109);
auto eval_expr_x_544(const auto &x_1123);
Unit var_modified_x_542(const auto &x_1126);
auto eval_expr_x_539(const auto &x_1140);
Unit var_modified_x_535(const auto &x_1143);
auto eval_expr_x_532(const auto &x_1157);
Unit var_modified_x_530(const auto &x_1186);
auto eval_expr_x_527(const auto &x_1200);
Unit var_modified_x_525(const auto &x_1213);
auto eval_expr_x_522(const auto &x_1227);
Unit var_modified_x_520(const auto &x_1236);
auto eval_expr_x_517(const auto &x_1242);
Unit var_modified_x_515(const auto &x_1251);
auto eval_expr_x_512(const auto &x_1261);
Unit var_modified_x_510(const auto &x_1406);
auto eval_expr_x_507(const auto &x_1412);
Unit var_modified_x_505(const auto &x_1461);
auto eval_expr_x_502(const auto &x_1471);
Unit var_modified_x_500(const auto &x_1474);
auto eval_expr_x_497(const auto &x_1480);
Unit var_modified_x_495(const auto &x_1489);
auto eval_expr_x_492(const auto &x_1503);
Unit var_modified_x_490(const auto &x_1512);
auto eval_expr_x_487(const auto &x_1526);
Unit var_modified_x_485(const auto &x_1535);
auto eval_expr_x_482(const auto &x_1547);
Unit var_modified_x_480(const auto &x_1560);
auto eval_expr_x_477(const auto &x_1566);
Unit var_modified_x_475(const auto &x_1575);
auto eval_expr_x_472(const auto &x_1585);
Unit var_modified_x_470(const auto &x_1738);
auto eval_expr_x_467(const auto &x_1744);
Unit var_modified_x_465(const auto &x_1749);
auto eval_expr_x_462(const auto &x_1755);
Unit var_modified_x_460(const auto &x_1804);
auto eval_expr_x_457(const auto &x_1810);
Unit var_modified_x_455(const auto &x_1823);
auto eval_expr_x_452(const auto &x_1833);
Unit var_modified_x_448(const auto &x_1836);
auto eval_expr_x_445(const auto &x_1844);
Unit var_modified_x_443(const auto &x_1861);
auto eval_expr_x_440(const auto &x_1867);
Unit var_modified_x_438(const auto &x_1876);
auto eval_expr_x_435(const auto &x_1886);
Unit var_modified_x_433(const auto &x_1939);
auto eval_expr_x_430(const auto &x_1951);
Unit var_modified_x_428(const auto &x_1976);
auto eval_expr_x_425(const auto &x_1984);
Unit var_modified_x_423(const auto &x_1993);
auto eval_expr_x_420(const auto &x_2003);
Unit var_modified_x_418(const auto &x_2056);
auto eval_expr_x_415(const auto &x_2068);
Unit var_modified_x_413(const auto &x_2089);
auto eval_expr_x_410(const auto &x_2095);
Unit var_modified_x_408(const auto &x_2116);
auto eval_expr_x_405(const auto &x_2122);
Unit var_modified_x_403(const auto &x_2135);
auto eval_expr_x_400(const auto &x_2145);
Unit var_modified_x_398(const auto &x_2166);
auto eval_expr_x_395(const auto &x_2172);
Unit var_modified_x_393(const auto &x_2177);
auto eval_expr_x_390(const auto &x_2183);
Unit x_54(const auto &x_55, const auto &x_56, const auto &x_57);
Unit x_61(const auto &x_62, const auto &x_63, const auto &x_64);
Unit x_68(const auto &x_69, const auto &x_70, const auto &x_71);
Unit x_75(const auto &x_76, const auto &x_77, const auto &x_78);
Unit x_122(const auto &x_123, const auto &x_124, const auto &x_125);
Unit x_167(const auto &x_168, const auto &x_169, const auto &x_170);
Unit x_250(const auto &x_251, const auto &x_252, const auto &x_253);
Unit x_338(const auto &x_339);
Unit x_346(const auto &x_347, const auto &x_348, const auto &x_349);
Unit eval_stmts_x_32(const auto &x_388);
Unit eval_stmts_x_31(const auto &x_450);
Unit eval_stmts_x_30(const auto &x_537);
Unit x_629(const auto &x_630, const auto &x_631, const auto &x_632);
Unit x_681(const auto &x_682);
Unit eval_stmts_x_19(const auto &x_689);
Unit eval_stmts_x_17(const auto &x_694);
Unit x_700(const auto &x_701);
int64_t x_708(const auto &x_709);
int64_t x_711(const auto &x_712);
LayoutNode x_714(const auto &x_715);
Node x_717(const auto &x_718);
Node x_720(const auto &x_721);
Unit var_modified_x_627(const auto &x_723) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_724) {
    auto x_2188 = [&](const auto &x_725) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_726) {
        if (x_725->meta->bb_0_has_bb_time_table) {
          auto x_727 = x_725->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_727, x_725, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2188(x_723);
    MakeUnit();
    auto x_2189 = [&](const auto &x_731) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_732) {
        if (x_731->meta->bb_0_has_bb_time_table) {
          auto x_733 = x_731->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_733, x_731, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_723->next, [&](const auto &x_730) { return MakeUnit(); },
        [&](const auto &x_729) {
          auto x_2192 = x_2189;
          x_2192(x_729);
          return MakeUnit();
        });
    auto x_2190 = [&](const auto &x_735) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_736) {
        if (x_735->meta->bb_2_has_bb_time_table) {
          auto x_737 = x_735->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_737, x_735, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2190(x_723);
    MakeUnit();
    auto x_2191 = [&](const auto &x_741) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_742) {
        if (x_741->meta->bb_2_has_bb_time_table) {
          auto x_743 = x_741->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_743, x_741, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_723->next, [&](const auto &x_740) { return MakeUnit(); },
        [&](const auto &x_739) {
          auto x_2193 = x_2191;
          x_2193(x_739);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_624(const auto &x_745) {
  if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_745->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_745->parent != nullptr) &&
          (eq((x_745->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_745->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_745->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_745->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_745->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_622(const auto &x_822) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_823) {
    ListIter(x_822->children, [&](const auto &x_824) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_825) {
        if (x_824->meta->bb_1_has_bb_time_table) {
          auto x_826 = x_824->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_826, x_824, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_619(const auto &x_828) {
  return (((!(x_828->parent != nullptr)) || (x_828->parent)->var_visible) &&
          (neq(x_828->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_828->var_inside_svg) && (!x_828->var_disabled))));
}
Unit var_modified_x_617(const auto &x_845) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_846) {
    auto x_2194 = [&](const auto &x_847) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_848) {
        if (x_847->meta->bb_1_has_bb_time_table) {
          auto x_849 = x_847->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_849, x_847, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2194(x_845);
    MakeUnit();
    ListIter(x_845->children, [&](const auto &x_851) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_852) {
        if (x_851->meta->bb_1_has_bb_time_table) {
          auto x_853 = x_851->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_853, x_851, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2195 = [&](const auto &x_855) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_856) {
        if (x_855->meta->bb_0_has_bb_time_table) {
          auto x_857 = x_855->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_857, x_855, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2195(x_845);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_614(const auto &x_859) {
  if (eq(x_859->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_859->parent != nullptr) && (x_859->parent)->var_disabled);
  }
}
Unit var_modified_x_612(const auto &x_864) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_865) {
    auto x_2196 = [&](const auto &x_866) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_867) {
        if (x_866->meta->bb_1_has_bb_time_table) {
          auto x_868 = x_866->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_868, x_866, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2196(x_864);
    MakeUnit();
    ListIter(x_864->children, [&](const auto &x_870) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_871) {
        if (x_870->meta->bb_1_has_bb_time_table) {
          auto x_872 = x_870->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_872, x_870, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2197 = [&](const auto &x_874) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_875) {
        if (x_874->meta->bb_0_has_bb_time_table) {
          auto x_876 = x_874->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_876, x_874, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2197(x_864);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_609(const auto &x_878) {
  return ((x_878->parent != nullptr) && ((x_878->parent)->var_is_svg_block || (x_878->parent)->var_inside_svg));
}
Unit var_modified_x_607(const auto &x_887) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_888) {
    ListIter(x_887->children, [&](const auto &x_889) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_890) {
        if (x_889->meta->bb_1_has_bb_time_table) {
          auto x_891 = x_889->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_891, x_889, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_604(const auto &x_893) { return eq(x_893->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_602(const auto &x_894) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_895) {
    auto x_2198 = [&](const auto &x_896) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_897) {
        if (x_896->meta->bb_0_has_bb_time_table) {
          auto x_898 = x_896->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_898, x_896, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2198(x_894);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_599(const auto &x_900) {
  return neq(x_900->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_597(const auto &x_905) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_906) {
    auto x_2199 = [&](const auto &x_907) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_908) {
        if (x_907->meta->bb_1_has_bb_time_table) {
          auto x_909 = x_907->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_909, x_907, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2199(x_905);
    MakeUnit();
    auto x_2200 = [&](const auto &x_911) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_912) {
        if (x_911->meta->bb_0_has_bb_time_table) {
          auto x_913 = x_911->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_913, x_911, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2200(x_905);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_594(const auto &x_915) {
  if (!x_915->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_915->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_915->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_915->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_592(const auto &x_926) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_927) {
    auto x_2201 = [&](const auto &x_928) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_929) {
        if (x_928->meta->bb_0_has_bb_time_table) {
          auto x_930 = x_928->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_930, x_928, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2201(x_926);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_589(const auto &x_932) {
  return neq(x_932->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_587(const auto &x_937) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_938) {
    auto x_2202 = [&](const auto &x_939) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_940) {
        if (x_939->meta->bb_1_has_bb_time_table) {
          auto x_941 = x_939->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_941, x_939, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2202(x_937);
    MakeUnit();
    auto x_2203 = [&](const auto &x_943) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_944) {
        if (x_943->meta->bb_0_has_bb_time_table) {
          auto x_945 = x_943->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_945, x_943, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2203(x_937);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_584(const auto &x_947) {
  if (!x_947->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_947->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_947->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_947->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_582(const auto &x_958) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_959) {
    ListIter(x_958->children, [&](const auto &x_960) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_961) {
        if (x_960->meta->bb_0_has_bb_time_table) {
          auto x_962 = x_960->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_962, x_960, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    ListIter(x_958->children, [&](const auto &x_964) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_965) {
        if (x_964->meta->bb_2_has_bb_time_table) {
          auto x_966 = x_964->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_966, x_964, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_579(const auto &x_968) {
  if ((x_968->parent != nullptr) &&
      (eq((x_968->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_968->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_968->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_968->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_577(const auto &x_993) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_994) {
    ListIter(x_993->children, [&](const auto &x_995) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_996) {
        if (x_995->meta->bb_0_has_bb_time_table) {
          auto x_997 = x_995->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_997, x_995, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2204 = [&](const auto &x_999) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1000) {
        if (x_999->meta->bb_2_has_bb_time_table) {
          auto x_1001 = x_999->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1001, x_999, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2204(x_993);
    MakeUnit();
    ListIter(x_993->children, [&](const auto &x_1003) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1004) {
        if (x_1003->meta->bb_2_has_bb_time_table) {
          auto x_1005 = x_1003->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1005, x_1003, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_574(const auto &x_1007) {
  if ((x_1007->parent != nullptr) &&
      (eq((x_1007->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_1007->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_1007->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_572(const auto &x_1032) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1033) {
    ListIter(x_1032->children, [&](const auto &x_1034) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1035) {
        if (x_1034->meta->bb_1_has_bb_time_table) {
          auto x_1036 = x_1034->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1036, x_1034, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_569(const auto &x_1038) {
  if (x_1038->has_prop_flex_direction) {
    return x_1038->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_567(const auto &x_1041) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1042) {
    auto x_2205 = [&](const auto &x_1045) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1046) {
        if (x_1045->meta->bb_1_has_bb_time_table) {
          auto x_1047 = x_1045->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1047, x_1045, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1041->next, [&](const auto &x_1044) { return MakeUnit(); },
        [&](const auto &x_1043) {
          auto x_2207 = x_2205;
          x_2207(x_1043);
          return MakeUnit();
        });
    auto x_2206 = [&](const auto &x_1049) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1050) {
        if (x_1049->meta->bb_2_has_bb_time_table) {
          auto x_1051 = x_1049->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1051, x_1049, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2206(x_1041);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_564(const auto &x_1053) {
  return plus((x_1053->prev != nullptr) ? ((x_1053->prev)->var_flex_shrink_sum) : (0.), x_1053->var_flex_shrink);
}
Unit var_modified_x_562(const auto &x_1062) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1063) {
    auto x_2208 = [&](const auto &x_1066) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1067) {
        if (x_1066->meta->bb_1_has_bb_time_table) {
          auto x_1068 = x_1066->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1068, x_1066, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1062->next, [&](const auto &x_1065) { return MakeUnit(); },
        [&](const auto &x_1064) {
          auto x_2210 = x_2208;
          x_2210(x_1064);
          return MakeUnit();
        });
    auto x_2209 = [&](const auto &x_1070) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1071) {
        if (x_1070->meta->bb_2_has_bb_time_table) {
          auto x_1072 = x_1070->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1072, x_1070, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2209(x_1062);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_559(const auto &x_1074) {
  return plus((x_1074->prev != nullptr) ? ((x_1074->prev)->var_flex_grow_sum) : (0.), x_1074->var_flex_grow);
}
Unit var_modified_x_557(const auto &x_1083) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1084) {
    auto x_2211 = [&](const auto &x_1085) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1086) {
        if (x_1085->meta->bb_1_has_bb_time_table) {
          auto x_1087 = x_1085->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1087, x_1085, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2211(x_1083);
    MakeUnit();
    auto x_2212 = [&](const auto &x_1089) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1090) {
        if (x_1089->meta->bb_2_has_bb_time_table) {
          auto x_1091 = x_1089->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1091, x_1089, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2212(x_1083);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_554(const auto &x_1093) {
  if (x_1093->has_prop_flex_shrink) {
    return (x_1093->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_552(const auto &x_1096) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1097) {
    auto x_2213 = [&](const auto &x_1098) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1099) {
        if (x_1098->meta->bb_1_has_bb_time_table) {
          auto x_1100 = x_1098->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1100, x_1098, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2213(x_1096);
    MakeUnit();
    auto x_2214 = [&](const auto &x_1102) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1103) {
        if (x_1102->meta->bb_2_has_bb_time_table) {
          auto x_1104 = x_1102->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1104, x_1102, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2214(x_1096);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_549(const auto &x_1106) {
  if (x_1106->has_prop_flex_grow) {
    return (x_1106->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_547(const auto &x_1109) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1110) {
    auto x_2215 = [&](const auto &x_1111) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1112) {
        if (x_1111->meta->bb_1_has_bb_time_table) {
          auto x_1113 = x_1111->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1113, x_1111, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2215(x_1109);
    MakeUnit();
    auto x_2216 = [&](const auto &x_1115) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1116) {
        if (x_1115->meta->bb_0_has_bb_time_table) {
          auto x_1117 = x_1115->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1117, x_1115, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2216(x_1109);
    MakeUnit();
    auto x_2217 = [&](const auto &x_1119) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1120) {
        if (x_1119->meta->bb_2_has_bb_time_table) {
          auto x_1121 = x_1119->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1121, x_1119, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2217(x_1109);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_544(const auto &x_1123) {
  if (x_1123->has_prop_position) {
    return x_1123->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_542(const auto &x_1126) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1127) {
    auto x_2218 = [&](const auto &x_1128) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1129) {
        if (x_1128->meta->bb_1_has_bb_time_table) {
          auto x_1130 = x_1128->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1130, x_1128, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2218(x_1126);
    MakeUnit();
    ListIter(x_1126->children, [&](const auto &x_1132) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1133) {
        if (x_1132->meta->bb_1_has_bb_time_table) {
          auto x_1134 = x_1132->meta->bb_1_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1134, x_1132, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2219 = [&](const auto &x_1136) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1137) {
        if (x_1136->meta->bb_0_has_bb_time_table) {
          auto x_1138 = x_1136->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1138, x_1136, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2219(x_1126);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_539(const auto &x_1140) {
  if (x_1140->has_prop_display) {
    return x_1140->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_535(const auto &x_1143) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1144) {
    auto x_2220 = [&](const auto &x_1147) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1148) {
        if (x_1147->meta->bb_0_has_bb_time_table) {
          auto x_1149 = x_1147->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1149, x_1147, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1143->next == nullptr) {
      auto x_2222 = x_2220;
      OptionMatch(
          x_1143->parent, [&](const auto &x_1146) { return MakeUnit(); },
          [&](const auto &x_1145) {
            auto x_2224 = x_2222;
            x_2224(x_1145);
            return MakeUnit();
          });
    }
    auto x_2221 = [&](const auto &x_1153) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1154) {
        if (x_1153->meta->bb_0_has_bb_time_table) {
          auto x_1155 = x_1153->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1155, x_1153, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1143->next, [&](const auto &x_1152) { return MakeUnit(); },
        [&](const auto &x_1151) {
          auto x_2223 = x_2221;
          x_2223(x_1151);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_532(const auto &x_1157) {
  if (x_1157->prev != nullptr) {
    if (x_1157->var_line_break) {
      return plus((x_1157->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1157->prev)->var_intrinsic_current_line_height, x_1157->var_intrinsic_height_external));
    } else {
      return (x_1157->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1157->var_line_break) {
      return x_1157->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_530(const auto &x_1186) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1187) {
    auto x_2225 = [&](const auto &x_1190) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1191) {
        if (x_1190->meta->bb_0_has_bb_time_table) {
          auto x_1192 = x_1190->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1192, x_1190, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1186->next == nullptr) {
      auto x_2227 = x_2225;
      OptionMatch(
          x_1186->parent, [&](const auto &x_1189) { return MakeUnit(); },
          [&](const auto &x_1188) {
            auto x_2229 = x_2227;
            x_2229(x_1188);
            return MakeUnit();
          });
    }
    auto x_2226 = [&](const auto &x_1196) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1197) {
        if (x_1196->meta->bb_0_has_bb_time_table) {
          auto x_1198 = x_1196->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1198, x_1196, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1186->next, [&](const auto &x_1195) { return MakeUnit(); },
        [&](const auto &x_1194) {
          auto x_2228 = x_2226;
          x_2228(x_1194);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_527(const auto &x_1200) {
  if (x_1200->var_line_break) {
    return 0.;
  } else {
    return max(x_1200->var_intrinsic_height_external,
               (x_1200->prev != nullptr) ? ((x_1200->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_525(const auto &x_1213) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1214) {
    auto x_2230 = [&](const auto &x_1217) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1218) {
        if (x_1217->meta->bb_0_has_bb_time_table) {
          auto x_1219 = x_1217->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1219, x_1217, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1213->next, [&](const auto &x_1216) { return MakeUnit(); },
        [&](const auto &x_1215) {
          auto x_2232 = x_2230;
          x_2232(x_1215);
          return MakeUnit();
        });
    auto x_2231 = [&](const auto &x_1223) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1224) {
        if (x_1223->meta->bb_2_has_bb_time_table) {
          auto x_1225 = x_1223->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1225, x_1223, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1213->next == nullptr) {
      auto x_2233 = x_2231;
      OptionMatch(
          x_1213->parent, [&](const auto &x_1222) { return MakeUnit(); },
          [&](const auto &x_1221) {
            auto x_2234 = x_2233;
            x_2234(x_1221);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_522(const auto &x_1227) {
  return plus((x_1227->prev != nullptr) ? ((x_1227->prev)->var_intrinsic_height_sum) : (0.),
              x_1227->var_intrinsic_height_external);
}
Unit var_modified_x_520(const auto &x_1236) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1237) {
    auto x_2235 = [&](const auto &x_1238) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1239) {
        if (x_1238->meta->bb_0_has_bb_time_table) {
          auto x_1240 = x_1238->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1240, x_1238, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2235(x_1236);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_517(const auto &x_1242) {
  if (eq(x_1242->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1242->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_515(const auto &x_1251) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1252) {
    auto x_2236 = [&](const auto &x_1253) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1254) {
        if (x_1253->meta->bb_0_has_bb_time_table) {
          auto x_1255 = x_1253->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1255, x_1253, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2236(x_1251);
    MakeUnit();
    auto x_2237 = [&](const auto &x_1257) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1258) {
        if (x_1257->meta->bb_2_has_bb_time_table) {
          auto x_1259 = x_1257->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1259, x_1257, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2237(x_1251);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_512(const auto &x_1261) {
  if (eq(x_1261->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1261->var_inside_svg) {
      return 0.;
    } else {
      if (x_1261->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1261->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1261->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_1261->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_1261->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1261->var_height_expr.r.a0;
          } else {
            if (x_1261->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_1261->var_height_expr.r.a0;
            } else {
              return x_1261->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_1261->var_children_intrinsic_height,
              (eq(x_1261->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_1261->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1261->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1261->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_1261->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1261->var_has_height_attr &&
                                                  (x_1261->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1261->var_height_attr_expr.r.a0)
                                                     : ((x_1261->has_attr_viewBox)
                                                            ? (x_1261->attr_viewBox.r.a3)
                                                            : (mult((x_1261->attr_viewBox.r.a3),
                                                                    divide(x_1261->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1261->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1261->var_has_height_attr)
                                                            ? (x_1261->var_height_attr_expr.r.a0)
                                                            : ((x_1261->has_attr_image_height &&
                                                                (!x_1261->var_has_width_attr))
                                                                   ? (int_to_float(x_1261->attr_image_height))
                                                                   : ((neq(x_1261->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1261->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1261->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_1261->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_1261->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_1261->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_510(const auto &x_1406) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1407) {
    auto x_2238 = [&](const auto &x_1408) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1409) {
        if (x_1408->meta->bb_2_has_bb_time_table) {
          auto x_1410 = x_1408->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1410, x_1408, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2238(x_1406);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_507(const auto &x_1412) {
  if (eq(x_1412->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1412->var_inside_svg || x_1412->var_disabled)) {
    return true;
  } else {
    if ((x_1412->parent != nullptr) && (x_1412->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1412->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1412->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1412->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1412->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1412->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_505(const auto &x_1461) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1462) {
    auto x_2239 = [&](const auto &x_1463) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1464) {
        if (x_1463->meta->bb_0_has_bb_time_table) {
          auto x_1465 = x_1463->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1465, x_1463, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2239(x_1461);
    MakeUnit();
    auto x_2240 = [&](const auto &x_1467) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1468) {
        if (x_1467->meta->bb_2_has_bb_time_table) {
          auto x_1469 = x_1467->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1469, x_1467, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2240(x_1461);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_502(const auto &x_1471) {
  if (x_1471->has_prop_height) {
    return x_1471->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_500(const auto &x_1474) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1475) {
    auto x_2241 = [&](const auto &x_1476) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1477) {
        if (x_1476->meta->bb_0_has_bb_time_table) {
          auto x_1478 = x_1476->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1478, x_1476, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2241(x_1474);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_497(const auto &x_1480) {
  if (x_1480->last != nullptr) {
    return plus((x_1480->last)->var_finished_intrinsic_height_sum, (x_1480->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_495(const auto &x_1489) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1490) {
    auto x_2242 = [&](const auto &x_1493) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1494) {
        if (x_1493->meta->bb_0_has_bb_time_table) {
          auto x_1495 = x_1493->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1495, x_1493, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1489->next, [&](const auto &x_1492) { return MakeUnit(); },
        [&](const auto &x_1491) {
          auto x_2244 = x_2242;
          x_2244(x_1491);
          return MakeUnit();
        });
    auto x_2243 = [&](const auto &x_1499) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1500) {
        if (x_1499->meta->bb_2_has_bb_time_table) {
          auto x_1501 = x_1499->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1501, x_1499, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1489->next == nullptr) {
      auto x_2245 = x_2243;
      OptionMatch(
          x_1489->parent, [&](const auto &x_1498) { return MakeUnit(); },
          [&](const auto &x_1497) {
            auto x_2246 = x_2245;
            x_2246(x_1497);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_492(const auto &x_1503) {
  return plus((x_1503->prev != nullptr) ? ((x_1503->prev)->var_intrinsic_width_sum) : (0.),
              x_1503->var_intrinsic_width_external);
}
Unit var_modified_x_490(const auto &x_1512) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1513) {
    auto x_2247 = [&](const auto &x_1516) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1517) {
        if (x_1516->meta->bb_0_has_bb_time_table) {
          auto x_1518 = x_1516->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1518, x_1516, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1512->next == nullptr) {
      auto x_2249 = x_2247;
      OptionMatch(
          x_1512->parent, [&](const auto &x_1515) { return MakeUnit(); },
          [&](const auto &x_1514) {
            auto x_2251 = x_2249;
            x_2251(x_1514);
            return MakeUnit();
          });
    }
    auto x_2248 = [&](const auto &x_1522) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1523) {
        if (x_1522->meta->bb_0_has_bb_time_table) {
          auto x_1524 = x_1522->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1524, x_1522, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1512->next, [&](const auto &x_1521) { return MakeUnit(); },
        [&](const auto &x_1520) {
          auto x_2250 = x_2248;
          x_2250(x_1520);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_487(const auto &x_1526) {
  return max(x_1526->var_intrinsic_current_line_width,
             (x_1526->prev != nullptr) ? ((x_1526->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_485(const auto &x_1535) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1536) {
    auto x_2252 = [&](const auto &x_1537) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1538) {
        if (x_1537->meta->bb_0_has_bb_time_table) {
          auto x_1539 = x_1537->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1539, x_1537, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2252(x_1535);
    MakeUnit();
    auto x_2253 = [&](const auto &x_1543) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1544) {
        if (x_1543->meta->bb_0_has_bb_time_table) {
          auto x_1545 = x_1543->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1545, x_1543, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1535->next, [&](const auto &x_1542) { return MakeUnit(); },
        [&](const auto &x_1541) {
          auto x_2254 = x_2253;
          x_2254(x_1541);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_482(const auto &x_1547) {
  return plus(x_1547->var_intrinsic_width_external,
              ((x_1547->prev != nullptr) && (!(x_1547->prev)->var_line_break))
                  ? ((x_1547->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_480(const auto &x_1560) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1561) {
    auto x_2255 = [&](const auto &x_1562) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1563) {
        if (x_1562->meta->bb_0_has_bb_time_table) {
          auto x_1564 = x_1562->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1564, x_1562, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2255(x_1560);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_477(const auto &x_1566) {
  if (eq(x_1566->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1566->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_475(const auto &x_1575) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1576) {
    auto x_2256 = [&](const auto &x_1577) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1578) {
        if (x_1577->meta->bb_0_has_bb_time_table) {
          auto x_1579 = x_1577->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1579, x_1577, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2256(x_1575);
    MakeUnit();
    auto x_2257 = [&](const auto &x_1581) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1582) {
        if (x_1581->meta->bb_2_has_bb_time_table) {
          auto x_1583 = x_1581->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1583, x_1581, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2257(x_1575);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_472(const auto &x_1585) {
  if (eq(x_1585->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1585->var_inside_svg) {
      return 0.;
    } else {
      if (x_1585->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1585->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1585->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1585->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1585->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1585->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1585->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1585->var_width_expr.r.a0;
          } else {
            return x_1585->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1585->var_children_intrinsic_width,
              (eq(x_1585->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1585->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1585->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1585->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1585->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1585->var_has_width_attr &&
                                                  (x_1585->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1585->var_width_attr_expr.r.a0)
                                                     : (((!x_1585->var_has_width_attr) && x_1585->has_attr_viewBox)
                                                            ? (x_1585->attr_viewBox.r.a2)
                                                            : (mult((x_1585->attr_viewBox.r.a2),
                                                                    divide(x_1585->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1585->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1585->var_has_width_attr)
                                                            ? (x_1585->var_width_attr_expr.r.a0)
                                                            : ((x_1585->has_attr_image_width &&
                                                                (!x_1585->var_has_height_attr))
                                                                   ? (int_to_float(x_1585->attr_image_width))
                                                                   : ((neq(x_1585->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1585->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1585->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1585->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1585->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1585->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_470(const auto &x_1738) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1739) {
    auto x_2258 = [&](const auto &x_1740) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1741) {
        if (x_1740->meta->bb_0_has_bb_time_table) {
          auto x_1742 = x_1740->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1742, x_1740, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2258(x_1738);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_467(const auto &x_1744) {
  if (x_1744->last != nullptr) {
    return (x_1744->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_465(const auto &x_1749) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1750) {
    auto x_2259 = [&](const auto &x_1751) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1752) {
        if (x_1751->meta->bb_2_has_bb_time_table) {
          auto x_1753 = x_1751->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1753, x_1751, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2259(x_1749);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_462(const auto &x_1755) {
  if (eq(x_1755->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1755->var_inside_svg || x_1755->var_disabled)) {
    return true;
  } else {
    if ((x_1755->parent != nullptr) && (x_1755->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1755->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1755->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1755->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1755->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1755->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_460(const auto &x_1804) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1805) {
    auto x_2260 = [&](const auto &x_1806) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1807) {
        if (x_1806->meta->bb_0_has_bb_time_table) {
          auto x_1808 = x_1806->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1808, x_1806, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2260(x_1804);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_457(const auto &x_1810) {
  if (eq(x_1810->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1810->var_inside_svg) {
      return true;
    } else {
      if (x_1810->var_disabled) {
        return true;
      } else {if ( eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_1810->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_455(const auto &x_1823) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1824) {
    auto x_2261 = [&](const auto &x_1825) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1826) {
        if (x_1825->meta->bb_0_has_bb_time_table) {
          auto x_1827 = x_1825->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1827, x_1825, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2261(x_1823);
    MakeUnit();
    auto x_2262 = [&](const auto &x_1829) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1830) {
        if (x_1829->meta->bb_2_has_bb_time_table) {
          auto x_1831 = x_1829->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1831, x_1829, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2262(x_1823);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_452(const auto &x_1833) {
  if (x_1833->has_prop_width) {
    return x_1833->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_448(const auto &x_1836) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1837) {
    auto x_2263 = [&](const auto &x_1840) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1841) {
        if (x_1840->meta->bb_2_has_bb_time_table) {
          auto x_1842 = x_1840->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1842, x_1840, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1836->next, [&](const auto &x_1839) { return MakeUnit(); },
        [&](const auto &x_1838) {
          auto x_2264 = x_2263;
          x_2264(x_1838);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_445(const auto &x_1844) {
  if ((x_1844->prev != nullptr) && (!(x_1844->prev)->var_line_break)) {
    return max(x_1844->var_height_external, (x_1844->prev)->var_line_height);
  } else {
    return x_1844->var_height_external;
  }
}
Unit var_modified_x_443(const auto &x_1861) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1862) {
    auto x_2265 = [&](const auto &x_1863) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1864) {
        if (x_1863->meta->bb_2_has_bb_time_table) {
          auto x_1865 = x_1863->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1865, x_1863, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2265(x_1861);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_440(const auto &x_1867) {
  if (eq(x_1867->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1867->var_height_internal;
  }
}
Unit var_modified_x_438(const auto &x_1876) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1877) {
    auto x_2266 = [&](const auto &x_1878) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1879) {
        if (x_1878->meta->bb_2_has_bb_time_table) {
          auto x_1880 = x_1878->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1880, x_1878, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2266(x_1876);
    MakeUnit();
    ListIter(x_1876->children, [&](const auto &x_1882) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1883) {
        if (x_1882->meta->bb_2_has_bb_time_table) {
          auto x_1884 = x_1882->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1884, x_1882, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_435(const auto &x_1886) {
  if (x_1886->var_intrinsic_height_is_height) {
    return x_1886->var_intrinsic_height_internal;
  } else {
    if ((x_1886->parent != nullptr) && (x_1886->parent)->var_is_flex_column) {
      return plus(x_1886->var_intrinsic_height_internal,
                  mult(x_1886->var_flex_amount, (x_1886->parent)->var_flex_unit));
    } else {
      if (x_1886->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_1886->var_box_height, divide(x_1886->var_height_expr.r.a0, 100.));
      } else {
        return max(x_1886->var_box_height, x_1886->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_433(const auto &x_1939) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1940) {
    ListIter(x_1939->children, [&](const auto &x_1941) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1942) {
        if (x_1941->meta->bb_2_has_bb_time_table) {
          auto x_1943 = x_1941->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1943, x_1941, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2267 = [&](const auto &x_1947) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1948) {
        if (x_1947->meta->bb_2_has_bb_time_table) {
          auto x_1949 = x_1947->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1949, x_1947, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1939->next, [&](const auto &x_1946) { return MakeUnit(); },
        [&](const auto &x_1945) {
          auto x_2268 = x_2267;
          x_2268(x_1945);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_430(const auto &x_1951) {
  if (x_1951->prev != nullptr) {
    if (x_1951->var_line_break || (x_1951->prev)->var_line_break) {
      return plus((x_1951->prev)->var_y, (x_1951->prev)->var_line_height);
    } else {
      return (x_1951->prev)->var_y;
    }
  } else {
    if (x_1951->parent != nullptr) {
      return (x_1951->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_428(const auto &x_1976) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1977) {
    auto x_2269 = [&](const auto &x_1980) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1981) {
        if (x_1980->meta->bb_2_has_bb_time_table) {
          auto x_1982 = x_1980->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1982, x_1980, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1976->next, [&](const auto &x_1979) { return MakeUnit(); },
        [&](const auto &x_1978) {
          auto x_2270 = x_2269;
          x_2270(x_1978);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_425(const auto &x_1984) {
  if (eq(x_1984->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1984->var_width_internal;
  }
}
Unit var_modified_x_423(const auto &x_1993) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1994) {
    auto x_2271 = [&](const auto &x_1995) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1996) {
        if (x_1995->meta->bb_2_has_bb_time_table) {
          auto x_1997 = x_1995->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_1997, x_1995, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2271(x_1993);
    MakeUnit();
    ListIter(x_1993->children, [&](const auto &x_1999) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2000) {
        if (x_1999->meta->bb_2_has_bb_time_table) {
          auto x_2001 = x_1999->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2001, x_1999, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_420(const auto &x_2003) {
  if (x_2003->var_intrinsic_width_is_width) {
    return x_2003->var_intrinsic_width_internal;
  } else {
    if ((x_2003->parent != nullptr) && (x_2003->parent)->var_is_flex_row) {
      return plus(x_2003->var_intrinsic_width_internal, mult(x_2003->var_flex_amount, (x_2003->parent)->var_flex_unit));
    } else {
      if (x_2003->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2003->var_box_width, divide(x_2003->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2003->var_box_width, x_2003->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_418(const auto &x_2056) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2057) {
    ListIter(x_2056->children, [&](const auto &x_2058) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2059) {
        if (x_2058->meta->bb_2_has_bb_time_table) {
          auto x_2060 = x_2058->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2060, x_2058, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2272 = [&](const auto &x_2064) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2065) {
        if (x_2064->meta->bb_2_has_bb_time_table) {
          auto x_2066 = x_2064->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2066, x_2064, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_2056->next, [&](const auto &x_2063) { return MakeUnit(); },
        [&](const auto &x_2062) {
          auto x_2273 = x_2272;
          x_2273(x_2062);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_415(const auto &x_2068) {
  if (x_2068->prev != nullptr) {
    if (x_2068->var_line_break || (x_2068->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2068->prev)->var_x, (x_2068->prev)->var_width_external);
    }
  } else {
    if (x_2068->parent != nullptr) {
      return (x_2068->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_413(const auto &x_2089) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2090) {
    ListIter(x_2089->children, [&](const auto &x_2091) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2092) {
        if (x_2091->meta->bb_2_has_bb_time_table) {
          auto x_2093 = x_2091->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2093, x_2091, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_410(const auto &x_2095) {
  if (gt(x_2095->var_left_over, 0.)) {
    return divide(x_2095->var_left_over, x_2095->var_flex_grow_sum);
  } else {
    return divide(x_2095->var_left_over, x_2095->var_flex_shrink_sum);
  }
}
Unit var_modified_x_408(const auto &x_2116) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2117) {
    auto x_2274 = [&](const auto &x_2118) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2119) {
        if (x_2118->meta->bb_2_has_bb_time_table) {
          auto x_2120 = x_2118->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2120, x_2118, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2274(x_2116);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_405(const auto &x_2122) {
  if ((x_2122->parent != nullptr) && gt((x_2122->parent)->var_left_over, 0.)) {
    return x_2122->var_flex_grow;
  } else {
    return x_2122->var_flex_shrink;
  }
}
Unit var_modified_x_403(const auto &x_2135) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2136) {
    auto x_2275 = [&](const auto &x_2137) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2138) {
        if (x_2137->meta->bb_2_has_bb_time_table) {
          auto x_2139 = x_2137->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2139, x_2137, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2275(x_2135);
    MakeUnit();
    ListIter(x_2135->children, [&](const auto &x_2141) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2142) {
        if (x_2141->meta->bb_2_has_bb_time_table) {
          auto x_2143 = x_2141->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2143, x_2141, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_400(const auto &x_2145) {
  if (x_2145->var_is_flex_row) {
    return minus(x_2145->var_box_width, (x_2145->last != nullptr) ? ((x_2145->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2145->var_box_height, (x_2145->last != nullptr) ? ((x_2145->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_398(const auto &x_2166) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2167) {
    auto x_2276 = [&](const auto &x_2168) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2169) {
        if (x_2168->meta->bb_2_has_bb_time_table) {
          auto x_2170 = x_2168->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2170, x_2168, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2276(x_2166);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_395(const auto &x_2172) {
  if (x_2172->parent != nullptr) {
    return (x_2172->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_393(const auto &x_2177) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2178) {
    auto x_2277 = [&](const auto &x_2179) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2180) {
        if (x_2179->meta->bb_2_has_bb_time_table) {
          auto x_2181 = x_2179->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_2181, x_2179, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2277(x_2177);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_390(const auto &x_2183) {
  if (x_2183->parent != nullptr) {
    return (x_2183->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit x_54(const auto &x_55, const auto &x_56, const auto &x_57) {
  auto x_58 = ListHeadExn(x_55);
  auto x_59 = ListTailExn(x_55);
  if (ListIsEmpty(x_59)) {
    auto x_60 = ListSplitN(x_56->children, x_58);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_56->children, x_58)), layout_size_x_3(x_57)));
    x_56->children = ListAppend(Zro(x_60), Cons(x_57, ListTailExn(Fst(x_60))));
    return MakeUnit();
  } else {
    return x_54(x_59, ListNthExn(x_56->children, x_58), x_57);
  }
}
Unit replace_layout_node_x_53(const auto &x_55, const auto &x_56, const auto &x_57) { return x_54(x_55, x_56, x_57); }
Unit x_61(const auto &x_62, const auto &x_63, const auto &x_64) {
  auto x_65 = ListHeadExn(x_62);
  auto x_66 = ListTailExn(x_62);
  if (ListIsEmpty(x_66)) {
    OutputChangeMetric(layout_size_x_3(x_64));
    auto x_67 = ListSplitN(x_63->children, x_65);
    x_63->children = ListAppend(Zro(x_67), Cons(x_64, Fst(x_67)));
    return MakeUnit();
  } else {
    return x_61(x_66, ListNthExn(x_63->children, x_65), x_64);
  }
}
Unit add_layout_node_x_51(const auto &x_62, const auto &x_63, const auto &x_64) { return x_61(x_62, x_63, x_64); }
Unit x_68(const auto &x_69, const auto &x_70, const auto &x_71) {
  auto x_72 = ListHeadExn(x_69);
  auto x_73 = ListTailExn(x_69);
  if (ListIsEmpty(x_73)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_70->children, x_72)));
    auto x_74 = ListSplitN(x_70->children, x_72);
    x_70->children = ListAppend(Zro(x_74), ListTailExn(Fst(x_74)));
    return MakeUnit();
  } else {
    return x_68(x_73, ListNthExn(x_70->children, x_72), x_71);
  }
}
Unit remove_layout_node_x_49(const auto &x_69, const auto &x_70, const auto &x_71) { return x_68(x_69, x_70, x_71); }
Unit x_75(const auto &x_76, const auto &x_77, const auto &x_78) {
  return ListMatch(
      x_76,
      [&](const auto &x_81) {
        auto x_82 = Zro(x_78);
        auto x_83 = Zro(x_82);
        auto x_84 = Fst(x_82);
        auto x_85 = Fst(x_78);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2278 = x_83;
        if (x_2278 == "attributes") {
          std::string x_2279 = x_84;
          if (x_2279 == "width") {
            WriteMetric();
            x_77->has_attr_width = true;
            x_77->attr_width = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_86) {
              if (x_77->meta->bb_1_has_bb_time_table) {
                auto x_87 = x_77->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_87, x_77, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2279 == "image_height") {
            WriteMetric();
            x_77->has_attr_image_height = true;
            x_77->attr_image_height = Asint64_t(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_89) {
              if (x_77->meta->bb_0_has_bb_time_table) {
                auto x_90 = x_77->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_90, x_77, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2279 == "image_width") {
            WriteMetric();
            x_77->has_attr_image_width = true;
            x_77->attr_image_width = Asint64_t(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_92) {
              if (x_77->meta->bb_0_has_bb_time_table) {
                auto x_93 = x_77->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_93, x_77, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2279 == "height") {
            WriteMetric();
            x_77->has_attr_height = true;
            x_77->attr_height = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_95) {
              if (x_77->meta->bb_1_has_bb_time_table) {
                auto x_96 = x_77->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_96, x_77, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2279 == "viewBox") {
            WriteMetric();
            x_77->has_attr_viewBox = true;
            x_77->attr_viewBox = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_98) {
              if (x_77->meta->bb_0_has_bb_time_table) {
                auto x_99 = x_77->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_99, x_77, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2278 == "properties") {
          std::string x_2280 = x_84;
          if (x_2280 == "width") {
            WriteMetric();
            x_77->has_prop_width = true;
            x_77->prop_width = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_101) {
              if (x_77->meta->bb_0_has_bb_time_table) {
                auto x_102 = x_77->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_102, x_77, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2280 == "flex-grow") {
            WriteMetric();
            x_77->has_prop_flex_grow = true;
            x_77->prop_flex_grow = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_104) {
              if (x_77->meta->bb_1_has_bb_time_table) {
                auto x_105 = x_77->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_105, x_77, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2280 == "height") {
            WriteMetric();
            x_77->has_prop_height = true;
            x_77->prop_height = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_107) {
              if (x_77->meta->bb_0_has_bb_time_table) {
                auto x_108 = x_77->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_108, x_77, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2280 == "display") {
            WriteMetric();
            x_77->has_prop_display = true;
            x_77->prop_display = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_110) {
              if (x_77->meta->bb_1_has_bb_time_table) {
                auto x_111 = x_77->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_111, x_77, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2280 == "position") {
            WriteMetric();
            x_77->has_prop_position = true;
            x_77->prop_position = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_113) {
              if (x_77->meta->bb_1_has_bb_time_table) {
                auto x_114 = x_77->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_114, x_77, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2280 == "flex-shrink") {
            WriteMetric();
            x_77->has_prop_flex_shrink = true;
            x_77->prop_flex_shrink = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_116) {
              if (x_77->meta->bb_1_has_bb_time_table) {
                auto x_117 = x_77->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_117, x_77, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2280 == "flex-direction") {
            WriteMetric();
            x_77->has_prop_flex_direction = true;
            x_77->prop_flex_direction = AsDEString(x_85);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_119) {
              if (x_77->meta->bb_1_has_bb_time_table) {
                auto x_120 = x_77->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_120, x_77, static_cast<int64_t>(0));
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
      [&](const auto &x_79, const auto &x_80) { return x_75(x_80, ListNthExn(x_77->children, x_79), x_78); });
}
Unit insert_value_x_47(const auto &x_76, const auto &x_77, const auto &x_78) { return x_75(x_76, x_77, x_78); }
Unit x_122(const auto &x_123, const auto &x_124, const auto &x_125) {
  return ListMatch(
      x_123,
      [&](const auto &x_128) {
        auto x_129 = Zro(x_125);
        auto x_130 = Fst(x_125);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2281 = x_129;
        if (x_2281 == "attributes") {
          std::string x_2282 = x_130;
          if (x_2282 == "width") {
            WriteMetric();
            x_124->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_131) {
              if (x_124->meta->bb_1_has_bb_time_table) {
                auto x_132 = x_124->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_132, x_124, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "image_height") {
            WriteMetric();
            x_124->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_134) {
              if (x_124->meta->bb_0_has_bb_time_table) {
                auto x_135 = x_124->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_135, x_124, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "image_width") {
            WriteMetric();
            x_124->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_137) {
              if (x_124->meta->bb_0_has_bb_time_table) {
                auto x_138 = x_124->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_138, x_124, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "height") {
            WriteMetric();
            x_124->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_140) {
              if (x_124->meta->bb_1_has_bb_time_table) {
                auto x_141 = x_124->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_141, x_124, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "viewBox") {
            WriteMetric();
            x_124->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_143) {
              if (x_124->meta->bb_0_has_bb_time_table) {
                auto x_144 = x_124->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_144, x_124, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2281 == "properties") {
          std::string x_2283 = x_130;
          if (x_2283 == "width") {
            WriteMetric();
            x_124->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_146) {
              if (x_124->meta->bb_0_has_bb_time_table) {
                auto x_147 = x_124->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_147, x_124, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "flex-grow") {
            WriteMetric();
            x_124->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_149) {
              if (x_124->meta->bb_1_has_bb_time_table) {
                auto x_150 = x_124->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_150, x_124, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "height") {
            WriteMetric();
            x_124->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_152) {
              if (x_124->meta->bb_0_has_bb_time_table) {
                auto x_153 = x_124->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_153, x_124, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "display") {
            WriteMetric();
            x_124->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_155) {
              if (x_124->meta->bb_1_has_bb_time_table) {
                auto x_156 = x_124->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_156, x_124, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "position") {
            WriteMetric();
            x_124->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_158) {
              if (x_124->meta->bb_1_has_bb_time_table) {
                auto x_159 = x_124->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_159, x_124, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "flex-shrink") {
            WriteMetric();
            x_124->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_161) {
              if (x_124->meta->bb_1_has_bb_time_table) {
                auto x_162 = x_124->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_162, x_124, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "flex-direction") {
            WriteMetric();
            x_124->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_164) {
              if (x_124->meta->bb_1_has_bb_time_table) {
                auto x_165 = x_124->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_165, x_124, static_cast<int64_t>(0));
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
      [&](const auto &x_126, const auto &x_127) { return x_122(x_127, ListNthExn(x_124->children, x_126), x_125); });
}
Unit delete_value_x_45(const auto &x_123, const auto &x_124, const auto &x_125) { return x_122(x_123, x_124, x_125); }
Unit x_167(const auto &x_168, const auto &x_169, const auto &x_170) {
  return ListMatch(
      x_168,
      [&](const auto &x_173) {
        auto x_174 = Zro(x_170);
        auto x_175 = Zro(x_174);
        auto x_176 = Fst(x_174);
        auto x_177 = Fst(x_170);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2284 = x_175;
        if (x_2284 == "attributes") {
          std::string x_2285 = x_176;
          if (x_2285 == "width") {
            WriteMetric();
            x_169->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_178) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_179 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_179, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_attr_width = true;
            x_169->attr_width = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_181) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_182 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_182, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "image_height") {
            WriteMetric();
            x_169->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_184) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_185 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_185, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_attr_image_height = true;
            x_169->attr_image_height = Asint64_t(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_187) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_188 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_188, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "image_width") {
            WriteMetric();
            x_169->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_190) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_191 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_191, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_attr_image_width = true;
            x_169->attr_image_width = Asint64_t(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_193) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_194 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_194, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "height") {
            WriteMetric();
            x_169->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_196) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_197 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_197, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_attr_height = true;
            x_169->attr_height = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_199) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_200 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_200, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "viewBox") {
            WriteMetric();
            x_169->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_202) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_203 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_203, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_attr_viewBox = true;
            x_169->attr_viewBox = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_205) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_206 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_206, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2284 == "properties") {
          std::string x_2286 = x_176;
          if (x_2286 == "width") {
            WriteMetric();
            x_169->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_208) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_209 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_209, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_prop_width = true;
            x_169->prop_width = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_211) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_212 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_212, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "flex-grow") {
            WriteMetric();
            x_169->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_214) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_215 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_215, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_prop_flex_grow = true;
            x_169->prop_flex_grow = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_217) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_218 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_218, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "height") {
            WriteMetric();
            x_169->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_220) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_221 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_221, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_prop_height = true;
            x_169->prop_height = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_223) {
              if (x_169->meta->bb_0_has_bb_time_table) {
                auto x_224 = x_169->meta->bb_0_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_224, x_169, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "display") {
            WriteMetric();
            x_169->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_226) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_227 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_227, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_prop_display = true;
            x_169->prop_display = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_229) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_230 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_230, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "position") {
            WriteMetric();
            x_169->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_232) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_233 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_233, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_prop_position = true;
            x_169->prop_position = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_235) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_236 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_236, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "flex-shrink") {
            WriteMetric();
            x_169->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_238) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_239 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_239, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_prop_flex_shrink = true;
            x_169->prop_flex_shrink = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_241) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_242 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_242, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "flex-direction") {
            WriteMetric();
            x_169->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_244) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_245 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_245, x_169, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_169->has_prop_flex_direction = true;
            x_169->prop_flex_direction = AsDEString(x_177);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_247) {
              if (x_169->meta->bb_1_has_bb_time_table) {
                auto x_248 = x_169->meta->bb_1_bb_time_table;
                MetaWriteMetric();
                return QueuePush(x_248, x_169, static_cast<int64_t>(0));
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
      [&](const auto &x_171, const auto &x_172) { return x_167(x_172, ListNthExn(x_169->children, x_171), x_170); });
}
Unit replace_value_x_43(const auto &x_168, const auto &x_169, const auto &x_170) { return x_167(x_168, x_169, x_170); }
Unit x_250(const auto &x_251, const auto &x_252, const auto &x_253) {
  auto x_254 = ListHeadExn(x_251);
  auto x_255 = ListTailExn(x_251);
  if (ListIsEmpty(x_255)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_252->children, x_254)), node_size_x_4(x_253)));
    auto x_256 = ListSplitN(x_252->children, x_254);
    auto x_257 = Zro(x_256);
    auto x_258 = Fst(x_256);
    auto x_259 = ListHeadExn(x_258);
    auto x_260 = ListTailExn(x_258);
    x_252->children = ListAppend(x_257, x_260);
    x_259->meta->alive = false;
    OptionMatch(
        x_259->prev, [&](const auto &x_262) { return MakeUnit(); },
        [&](const auto &x_261) {
          x_261->next = ToPath(x_259->next);
          return MakeUnit();
        });
    OptionMatch(
        x_259->next, [&](const auto &x_264) { return MakeUnit(); },
        [&](const auto &x_263) {
          x_263->prev = ToPath(x_259->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_257)) {
      x_252->first = ToPath(ListHead(x_260));
    }
    if (ListIsEmpty(x_260)) {
      x_252->last = ToPath(ListLast(x_257));
    }
    OptionMatch(
        x_259->next, [&](const auto &x_269) { return MakeUnit(); },
        [&](const auto &x_265) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_266) {
            if (x_265->meta->bb_1_has_bb_time_table) {
              auto x_267 = x_265->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_267, x_265, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_252->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_270) {
        if (x_252->meta->bb_0_has_bb_time_table) {
          auto x_271 = x_252->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_271, x_252, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_260)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_273) {
        if (x_252->meta->bb_0_has_bb_time_table) {
          auto x_274 = x_252->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_274, x_252, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_259->next, [&](const auto &x_280) { return MakeUnit(); },
        [&](const auto &x_276) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_277) {
            if (x_276->meta->bb_0_has_bb_time_table) {
              auto x_278 = x_276->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_278, x_276, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_252->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_281) {
        if (x_252->meta->bb_2_has_bb_time_table) {
          auto x_282 = x_252->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_282, x_252, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_260)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_284) {
        if (x_252->meta->bb_2_has_bb_time_table) {
          auto x_285 = x_252->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_285, x_252, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_259->next, [&](const auto &x_291) { return MakeUnit(); },
        [&](const auto &x_287) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_288) {
            if (x_287->meta->bb_2_has_bb_time_table) {
              auto x_289 = x_287->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_289, x_287, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    auto x_292 = ListSplitN(x_252->children, x_254);
    auto x_293 = Zro(x_292);
    auto x_294 = Fst(x_292);
    x_252->children = ListAppend(x_293, Cons(x_253, x_294));
    if (ListIsEmpty(x_293)) {
      x_252->first = x_253.get();
    }
    if (ListIsEmpty(x_294)) {
      x_252->last = x_253.get();
    }
    OptionMatch(
        ListLast(x_293),
        [&](const auto &x_296) {
          x_253->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_295) {
          x_253->prev = x_295.get();
          x_295->next = x_253.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_294),
        [&](const auto &x_298) {
          x_253->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_297) {
          x_253->next = x_297.get();
          x_297->prev = x_253.get();
          return MakeUnit();
        });
    x_253->parent = x_252.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_299) {
      auto x_300 = (x_253->parent);
      if (x_300->meta->pass_0_has_proc_time_table) {
        auto x_303 = OptionMatch(
            x_253->prev, [&](const auto &x_302) { return NextTotalOrder(x_300->meta->bb_1_bb_time_table); },
            [&](const auto &x_301) { return NextTotalOrder(x_301->meta->pass_0_proc_time_table); });
        x_253->meta->pass_0_has_proc_time_table = true;
        x_253->meta->pass_0_proc_time_table = x_303;
        MetaWriteMetric();
        return QueueForcePush(x_303, x_253, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_253->next, [&](const auto &x_309) { return MakeUnit(); },
        [&](const auto &x_305) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_306) {
            if (x_305->meta->bb_1_has_bb_time_table) {
              auto x_307 = x_305->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_307, x_305, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_252->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_310) {
        if (x_252->meta->bb_0_has_bb_time_table) {
          auto x_311 = x_252->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_311, x_252, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_294)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_313) {
        if (x_252->meta->bb_0_has_bb_time_table) {
          auto x_314 = x_252->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_314, x_252, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_253->next, [&](const auto &x_320) { return MakeUnit(); },
        [&](const auto &x_316) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_317) {
            if (x_316->meta->bb_0_has_bb_time_table) {
              auto x_318 = x_316->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_318, x_316, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_321) {
      auto x_322 = (x_253->parent);
      if (x_322->meta->pass_1_has_proc_time_table) {
        auto x_325 = OptionMatch(
            x_253->prev, [&](const auto &x_324) { return NextTotalOrder(x_322->meta->bb_2_bb_time_table); },
            [&](const auto &x_323) { return NextTotalOrder(x_323->meta->pass_1_proc_time_table); });
        x_253->meta->pass_1_has_proc_time_table = true;
        x_253->meta->pass_1_proc_time_table = x_325;
        MetaWriteMetric();
        return QueueForcePush(x_325, x_253, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_252->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_327) {
        if (x_252->meta->bb_2_has_bb_time_table) {
          auto x_328 = x_252->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_328, x_252, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_294)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_330) {
        if (x_252->meta->bb_2_has_bb_time_table) {
          auto x_331 = x_252->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_331, x_252, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_253->next, [&](const auto &x_337) { return MakeUnit(); },
        [&](const auto &x_333) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_334) {
            if (x_333->meta->bb_2_has_bb_time_table) {
              auto x_335 = x_333->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_335, x_333, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_250(x_255, ListNthExn(x_252->children, x_254), x_253);
  }
}
Unit replace_node_x_41(const auto &x_251, const auto &x_252, const auto &x_253) { return x_250(x_251, x_252, x_253); }
Unit x_338(const auto &x_339) {
  ListIter2(x_339->children, [&](const auto &x_340, const auto &x_341) {
    x_340->parent = x_339.get();
    x_341->parent = x_339.get();
    x_340->next = x_341.get();
    x_341->prev = x_340.get();
    x_338(x_340);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_339->children),
      [&](const auto &x_343) {
        x_339->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_342) {
        x_339->first = x_342.get();
        x_342->parent = x_339.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_339->children),
      [&](const auto &x_345) {
        x_339->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_344) {
        x_339->last = x_344.get();
        x_344->parent = x_339.get();
        x_338(x_344);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_39(const auto &x_339) { return x_338(x_339); }
Unit x_346(const auto &x_347, const auto &x_348, const auto &x_349) {
  auto x_350 = ListHeadExn(x_347);
  auto x_351 = ListTailExn(x_347);
  if (ListIsEmpty(x_351)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_348->children, x_350)));
    auto x_352 = ListSplitN(x_348->children, x_350);
    auto x_353 = Zro(x_352);
    auto x_354 = Fst(x_352);
    auto x_355 = ListHeadExn(x_354);
    auto x_356 = ListTailExn(x_354);
    x_348->children = ListAppend(x_353, x_356);
    x_355->meta->alive = false;
    OptionMatch(
        x_355->prev, [&](const auto &x_358) { return MakeUnit(); },
        [&](const auto &x_357) {
          x_357->next = ToPath(x_355->next);
          return MakeUnit();
        });
    OptionMatch(
        x_355->next, [&](const auto &x_360) { return MakeUnit(); },
        [&](const auto &x_359) {
          x_359->prev = ToPath(x_355->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_353)) {
      x_348->first = ToPath(ListHead(x_356));
    }
    if (ListIsEmpty(x_356)) {
      x_348->last = ToPath(ListLast(x_353));
    }
    OptionMatch(
        x_355->next, [&](const auto &x_365) { return MakeUnit(); },
        [&](const auto &x_361) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_362) {
            if (x_361->meta->bb_1_has_bb_time_table) {
              auto x_363 = x_361->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_363, x_361, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_348->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_366) {
        if (x_348->meta->bb_0_has_bb_time_table) {
          auto x_367 = x_348->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_367, x_348, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_356)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_369) {
        if (x_348->meta->bb_0_has_bb_time_table) {
          auto x_370 = x_348->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_370, x_348, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_355->next, [&](const auto &x_376) { return MakeUnit(); },
        [&](const auto &x_372) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_373) {
            if (x_372->meta->bb_0_has_bb_time_table) {
              auto x_374 = x_372->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_374, x_372, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_348->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_377) {
        if (x_348->meta->bb_2_has_bb_time_table) {
          auto x_378 = x_348->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_378, x_348, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_356)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_380) {
        if (x_348->meta->bb_2_has_bb_time_table) {
          auto x_381 = x_348->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_381, x_348, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_355->next, [&](const auto &x_387) { return MakeUnit(); },
        [&](const auto &x_383) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_384) {
            if (x_383->meta->bb_2_has_bb_time_table) {
              auto x_385 = x_383->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_385, x_383, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_346(x_351, ListNthExn(x_348->children, x_350), x_349);
  }
}
Unit remove_node_x_37(const auto &x_347, const auto &x_348, const auto &x_349) { return x_346(x_347, x_348, x_349); }
Unit eval_stmts_x_32(const auto &x_388) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_389) {
    WriteMetric();
    auto x_391 = eval_expr_x_390(x_388);
    if (x_388->has_var_box_width) {
      auto x_392 = x_388->var_box_width;
      if (!EqualValue(x_392, x_391)) {
        var_modified_x_393(x_388);
      }
    }
    x_388->has_var_box_width = true;
    x_388->var_box_width = Asdouble(x_391);
    WriteMetric();
    auto x_396 = eval_expr_x_395(x_388);
    if (x_388->has_var_box_height) {
      auto x_397 = x_388->var_box_height;
      if (!EqualValue(x_397, x_396)) {
        var_modified_x_398(x_388);
      }
    }
    x_388->has_var_box_height = true;
    x_388->var_box_height = Asdouble(x_396);
    WriteMetric();
    auto x_401 = eval_expr_x_400(x_388);
    if (x_388->has_var_left_over) {
      auto x_402 = x_388->var_left_over;
      if (!EqualValue(x_402, x_401)) {
        var_modified_x_403(x_388);
      }
    }
    x_388->has_var_left_over = true;
    x_388->var_left_over = Asdouble(x_401);
    WriteMetric();
    auto x_406 = eval_expr_x_405(x_388);
    if (x_388->has_var_flex_amount) {
      auto x_407 = x_388->var_flex_amount;
      if (!EqualValue(x_407, x_406)) {
        var_modified_x_408(x_388);
      }
    }
    x_388->has_var_flex_amount = true;
    x_388->var_flex_amount = Asdouble(x_406);
    WriteMetric();
    auto x_411 = eval_expr_x_410(x_388);
    if (x_388->has_var_flex_unit) {
      auto x_412 = x_388->var_flex_unit;
      if (!EqualValue(x_412, x_411)) {
        var_modified_x_413(x_388);
      }
    }
    x_388->has_var_flex_unit = true;
    x_388->var_flex_unit = Asdouble(x_411);
    WriteMetric();
    auto x_416 = eval_expr_x_415(x_388);
    if (x_388->has_var_x) {
      auto x_417 = x_388->var_x;
      if (!EqualValue(x_417, x_416)) {
        var_modified_x_418(x_388);
      }
    }
    x_388->has_var_x = true;
    x_388->var_x = Asdouble(x_416);
    WriteMetric();
    auto x_421 = eval_expr_x_420(x_388);
    if (x_388->has_var_width_internal) {
      auto x_422 = x_388->var_width_internal;
      if (!EqualValue(x_422, x_421)) {
        var_modified_x_423(x_388);
      }
    }
    x_388->has_var_width_internal = true;
    x_388->var_width_internal = Asdouble(x_421);
    WriteMetric();
    auto x_426 = eval_expr_x_425(x_388);
    if (x_388->has_var_width_external) {
      auto x_427 = x_388->var_width_external;
      if (!EqualValue(x_427, x_426)) {
        var_modified_x_428(x_388);
      }
    }
    x_388->has_var_width_external = true;
    x_388->var_width_external = Asdouble(x_426);
    WriteMetric();
    auto x_431 = eval_expr_x_430(x_388);
    if (x_388->has_var_y) {
      auto x_432 = x_388->var_y;
      if (!EqualValue(x_432, x_431)) {
        var_modified_x_433(x_388);
      }
    }
    x_388->has_var_y = true;
    x_388->var_y = Asdouble(x_431);
    WriteMetric();
    auto x_436 = eval_expr_x_435(x_388);
    if (x_388->has_var_height_internal) {
      auto x_437 = x_388->var_height_internal;
      if (!EqualValue(x_437, x_436)) {
        var_modified_x_438(x_388);
      }
    }
    x_388->has_var_height_internal = true;
    x_388->var_height_internal = Asdouble(x_436);
    WriteMetric();
    auto x_441 = eval_expr_x_440(x_388);
    if (x_388->has_var_height_external) {
      auto x_442 = x_388->var_height_external;
      if (!EqualValue(x_442, x_441)) {
        var_modified_x_443(x_388);
      }
    }
    x_388->has_var_height_external = true;
    x_388->var_height_external = Asdouble(x_441);
    WriteMetric();
    auto x_446 = eval_expr_x_445(x_388);
    if (x_388->has_var_line_height) {
      auto x_447 = x_388->var_line_height;
      if (!EqualValue(x_447, x_446)) {
        var_modified_x_448(x_388);
      }
    }
    x_388->has_var_line_height = true;
    x_388->var_line_height = Asdouble(x_446);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_31(const auto &x_450) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_451) {
    WriteMetric();
    auto x_453 = eval_expr_x_452(x_450);
    if (x_450->has_var_width_expr) {
      auto x_454 = x_450->var_width_expr;
      if (!EqualValue(x_454, x_453)) {
        var_modified_x_455(x_450);
      }
    }
    x_450->has_var_width_expr = true;
    x_450->var_width_expr = AsDEString(x_453);
    WriteMetric();
    auto x_458 = eval_expr_x_457(x_450);
    if (x_450->has_var_is_default_case) {
      auto x_459 = x_450->var_is_default_case;
      if (!EqualValue(x_459, x_458)) {
        var_modified_x_460(x_450);
      }
    }
    x_450->has_var_is_default_case = true;
    x_450->var_is_default_case = Asbool(x_458);
    WriteMetric();
    auto x_463 = eval_expr_x_462(x_450);
    if (x_450->has_var_intrinsic_width_is_width) {
      auto x_464 = x_450->var_intrinsic_width_is_width;
      if (!EqualValue(x_464, x_463)) {
        var_modified_x_465(x_450);
      }
    }
    x_450->has_var_intrinsic_width_is_width = true;
    x_450->var_intrinsic_width_is_width = Asbool(x_463);
    WriteMetric();
    auto x_468 = eval_expr_x_467(x_450);
    if (x_450->has_var_children_intrinsic_width) {
      auto x_469 = x_450->var_children_intrinsic_width;
      if (!EqualValue(x_469, x_468)) {
        var_modified_x_470(x_450);
      }
    }
    x_450->has_var_children_intrinsic_width = true;
    x_450->var_children_intrinsic_width = Asdouble(x_468);
    WriteMetric();
    auto x_473 = eval_expr_x_472(x_450);
    if (x_450->has_var_intrinsic_width_internal) {
      auto x_474 = x_450->var_intrinsic_width_internal;
      if (!EqualValue(x_474, x_473)) {
        var_modified_x_475(x_450);
      }
    }
    x_450->has_var_intrinsic_width_internal = true;
    x_450->var_intrinsic_width_internal = Asdouble(x_473);
    WriteMetric();
    auto x_478 = eval_expr_x_477(x_450);
    if (x_450->has_var_intrinsic_width_external) {
      auto x_479 = x_450->var_intrinsic_width_external;
      if (!EqualValue(x_479, x_478)) {
        var_modified_x_480(x_450);
      }
    }
    x_450->has_var_intrinsic_width_external = true;
    x_450->var_intrinsic_width_external = Asdouble(x_478);
    WriteMetric();
    auto x_483 = eval_expr_x_482(x_450);
    if (x_450->has_var_intrinsic_current_line_width) {
      auto x_484 = x_450->var_intrinsic_current_line_width;
      if (!EqualValue(x_484, x_483)) {
        var_modified_x_485(x_450);
      }
    }
    x_450->has_var_intrinsic_current_line_width = true;
    x_450->var_intrinsic_current_line_width = Asdouble(x_483);
    WriteMetric();
    auto x_488 = eval_expr_x_487(x_450);
    if (x_450->has_var_intrinsic_width_max) {
      auto x_489 = x_450->var_intrinsic_width_max;
      if (!EqualValue(x_489, x_488)) {
        var_modified_x_490(x_450);
      }
    }
    x_450->has_var_intrinsic_width_max = true;
    x_450->var_intrinsic_width_max = Asdouble(x_488);
    WriteMetric();
    auto x_493 = eval_expr_x_492(x_450);
    if (x_450->has_var_intrinsic_width_sum) {
      auto x_494 = x_450->var_intrinsic_width_sum;
      if (!EqualValue(x_494, x_493)) {
        var_modified_x_495(x_450);
      }
    }
    x_450->has_var_intrinsic_width_sum = true;
    x_450->var_intrinsic_width_sum = Asdouble(x_493);
    WriteMetric();
    auto x_498 = eval_expr_x_497(x_450);
    if (x_450->has_var_children_intrinsic_height) {
      auto x_499 = x_450->var_children_intrinsic_height;
      if (!EqualValue(x_499, x_498)) {
        var_modified_x_500(x_450);
      }
    }
    x_450->has_var_children_intrinsic_height = true;
    x_450->var_children_intrinsic_height = Asdouble(x_498);
    WriteMetric();
    auto x_503 = eval_expr_x_502(x_450);
    if (x_450->has_var_height_expr) {
      auto x_504 = x_450->var_height_expr;
      if (!EqualValue(x_504, x_503)) {
        var_modified_x_505(x_450);
      }
    }
    x_450->has_var_height_expr = true;
    x_450->var_height_expr = AsDEString(x_503);
    WriteMetric();
    auto x_508 = eval_expr_x_507(x_450);
    if (x_450->has_var_intrinsic_height_is_height) {
      auto x_509 = x_450->var_intrinsic_height_is_height;
      if (!EqualValue(x_509, x_508)) {
        var_modified_x_510(x_450);
      }
    }
    x_450->has_var_intrinsic_height_is_height = true;
    x_450->var_intrinsic_height_is_height = Asbool(x_508);
    WriteMetric();
    auto x_513 = eval_expr_x_512(x_450);
    if (x_450->has_var_intrinsic_height_internal) {
      auto x_514 = x_450->var_intrinsic_height_internal;
      if (!EqualValue(x_514, x_513)) {
        var_modified_x_515(x_450);
      }
    }
    x_450->has_var_intrinsic_height_internal = true;
    x_450->var_intrinsic_height_internal = Asdouble(x_513);
    WriteMetric();
    auto x_518 = eval_expr_x_517(x_450);
    if (x_450->has_var_intrinsic_height_external) {
      auto x_519 = x_450->var_intrinsic_height_external;
      if (!EqualValue(x_519, x_518)) {
        var_modified_x_520(x_450);
      }
    }
    x_450->has_var_intrinsic_height_external = true;
    x_450->var_intrinsic_height_external = Asdouble(x_518);
    WriteMetric();
    auto x_523 = eval_expr_x_522(x_450);
    if (x_450->has_var_intrinsic_height_sum) {
      auto x_524 = x_450->var_intrinsic_height_sum;
      if (!EqualValue(x_524, x_523)) {
        var_modified_x_525(x_450);
      }
    }
    x_450->has_var_intrinsic_height_sum = true;
    x_450->var_intrinsic_height_sum = Asdouble(x_523);
    WriteMetric();
    auto x_528 = eval_expr_x_527(x_450);
    if (x_450->has_var_intrinsic_current_line_height) {
      auto x_529 = x_450->var_intrinsic_current_line_height;
      if (!EqualValue(x_529, x_528)) {
        var_modified_x_530(x_450);
      }
    }
    x_450->has_var_intrinsic_current_line_height = true;
    x_450->var_intrinsic_current_line_height = Asdouble(x_528);
    WriteMetric();
    auto x_533 = eval_expr_x_532(x_450);
    if (x_450->has_var_finished_intrinsic_height_sum) {
      auto x_534 = x_450->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_534, x_533)) {
        var_modified_x_535(x_450);
      }
    }
    x_450->has_var_finished_intrinsic_height_sum = true;
    x_450->var_finished_intrinsic_height_sum = Asdouble(x_533);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_30(const auto &x_537) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_538) {
    WriteMetric();
    auto x_540 = eval_expr_x_539(x_537);
    if (x_537->has_var_display) {
      auto x_541 = x_537->var_display;
      if (!EqualValue(x_541, x_540)) {
        var_modified_x_542(x_537);
      }
    }
    x_537->has_var_display = true;
    x_537->var_display = AsDEString(x_540);
    WriteMetric();
    auto x_545 = eval_expr_x_544(x_537);
    if (x_537->has_var_position) {
      auto x_546 = x_537->var_position;
      if (!EqualValue(x_546, x_545)) {
        var_modified_x_547(x_537);
      }
    }
    x_537->has_var_position = true;
    x_537->var_position = AsDEString(x_545);
    WriteMetric();
    auto x_550 = eval_expr_x_549(x_537);
    if (x_537->has_var_flex_grow) {
      auto x_551 = x_537->var_flex_grow;
      if (!EqualValue(x_551, x_550)) {
        var_modified_x_552(x_537);
      }
    }
    x_537->has_var_flex_grow = true;
    x_537->var_flex_grow = Asdouble(x_550);
    WriteMetric();
    auto x_555 = eval_expr_x_554(x_537);
    if (x_537->has_var_flex_shrink) {
      auto x_556 = x_537->var_flex_shrink;
      if (!EqualValue(x_556, x_555)) {
        var_modified_x_557(x_537);
      }
    }
    x_537->has_var_flex_shrink = true;
    x_537->var_flex_shrink = Asdouble(x_555);
    WriteMetric();
    auto x_560 = eval_expr_x_559(x_537);
    if (x_537->has_var_flex_grow_sum) {
      auto x_561 = x_537->var_flex_grow_sum;
      if (!EqualValue(x_561, x_560)) {
        var_modified_x_562(x_537);
      }
    }
    x_537->has_var_flex_grow_sum = true;
    x_537->var_flex_grow_sum = Asdouble(x_560);
    WriteMetric();
    auto x_565 = eval_expr_x_564(x_537);
    if (x_537->has_var_flex_shrink_sum) {
      auto x_566 = x_537->var_flex_shrink_sum;
      if (!EqualValue(x_566, x_565)) {
        var_modified_x_567(x_537);
      }
    }
    x_537->has_var_flex_shrink_sum = true;
    x_537->var_flex_shrink_sum = Asdouble(x_565);
    WriteMetric();
    auto x_570 = eval_expr_x_569(x_537);
    if (x_537->has_var_flex_direction) {
      auto x_571 = x_537->var_flex_direction;
      if (!EqualValue(x_571, x_570)) {
        var_modified_x_572(x_537);
      }
    }
    x_537->has_var_flex_direction = true;
    x_537->var_flex_direction = AsDEString(x_570);
    WriteMetric();
    auto x_575 = eval_expr_x_574(x_537);
    if (x_537->has_var_is_flex_row) {
      auto x_576 = x_537->var_is_flex_row;
      if (!EqualValue(x_576, x_575)) {
        var_modified_x_577(x_537);
      }
    }
    x_537->has_var_is_flex_row = true;
    x_537->var_is_flex_row = Asbool(x_575);
    WriteMetric();
    auto x_580 = eval_expr_x_579(x_537);
    if (x_537->has_var_is_flex_column) {
      auto x_581 = x_537->var_is_flex_column;
      if (!EqualValue(x_581, x_580)) {
        var_modified_x_582(x_537);
      }
    }
    x_537->has_var_is_flex_column = true;
    x_537->var_is_flex_column = Asbool(x_580);
    WriteMetric();
    auto x_585 = eval_expr_x_584(x_537);
    if (x_537->has_var_width_attr_expr) {
      auto x_586 = x_537->var_width_attr_expr;
      if (!EqualValue(x_586, x_585)) {
        var_modified_x_587(x_537);
      }
    }
    x_537->has_var_width_attr_expr = true;
    x_537->var_width_attr_expr = AsDEString(x_585);
    WriteMetric();
    auto x_590 = eval_expr_x_589(x_537);
    if (x_537->has_var_has_width_attr) {
      auto x_591 = x_537->var_has_width_attr;
      if (!EqualValue(x_591, x_590)) {
        var_modified_x_592(x_537);
      }
    }
    x_537->has_var_has_width_attr = true;
    x_537->var_has_width_attr = Asbool(x_590);
    WriteMetric();
    auto x_595 = eval_expr_x_594(x_537);
    if (x_537->has_var_height_attr_expr) {
      auto x_596 = x_537->var_height_attr_expr;
      if (!EqualValue(x_596, x_595)) {
        var_modified_x_597(x_537);
      }
    }
    x_537->has_var_height_attr_expr = true;
    x_537->var_height_attr_expr = AsDEString(x_595);
    WriteMetric();
    auto x_600 = eval_expr_x_599(x_537);
    if (x_537->has_var_has_height_attr) {
      auto x_601 = x_537->var_has_height_attr;
      if (!EqualValue(x_601, x_600)) {
        var_modified_x_602(x_537);
      }
    }
    x_537->has_var_has_height_attr = true;
    x_537->var_has_height_attr = Asbool(x_600);
    WriteMetric();
    auto x_605 = eval_expr_x_604(x_537);
    if (x_537->has_var_is_svg_block) {
      auto x_606 = x_537->var_is_svg_block;
      if (!EqualValue(x_606, x_605)) {
        var_modified_x_607(x_537);
      }
    }
    x_537->has_var_is_svg_block = true;
    x_537->var_is_svg_block = Asbool(x_605);
    WriteMetric();
    auto x_610 = eval_expr_x_609(x_537);
    if (x_537->has_var_inside_svg) {
      auto x_611 = x_537->var_inside_svg;
      if (!EqualValue(x_611, x_610)) {
        var_modified_x_612(x_537);
      }
    }
    x_537->has_var_inside_svg = true;
    x_537->var_inside_svg = Asbool(x_610);
    WriteMetric();
    auto x_615 = eval_expr_x_614(x_537);
    if (x_537->has_var_disabled) {
      auto x_616 = x_537->var_disabled;
      if (!EqualValue(x_616, x_615)) {
        var_modified_x_617(x_537);
      }
    }
    x_537->has_var_disabled = true;
    x_537->var_disabled = Asbool(x_615);
    WriteMetric();
    auto x_620 = eval_expr_x_619(x_537);
    if (x_537->has_var_visible) {
      auto x_621 = x_537->var_visible;
      if (!EqualValue(x_621, x_620)) {
        var_modified_x_622(x_537);
      }
    }
    x_537->has_var_visible = true;
    x_537->var_visible = Asbool(x_620);
    WriteMetric();
    auto x_625 = eval_expr_x_624(x_537);
    if (x_537->has_var_line_break) {
      auto x_626 = x_537->var_line_break;
      if (!EqualValue(x_626, x_625)) {
        var_modified_x_627(x_537);
      }
    }
    x_537->has_var_line_break = true;
    x_537->var_line_break = Asbool(x_625);
    return MakeUnit();
  })));
}
Unit x_629(const auto &x_630, const auto &x_631, const auto &x_632) {
  auto x_633 = ListHeadExn(x_630);
  auto x_634 = ListTailExn(x_630);
  if (ListIsEmpty(x_634)) {
    InputChangeMetric(node_size_x_4(x_632));
    auto x_635 = ListSplitN(x_631->children, x_633);
    auto x_636 = Zro(x_635);
    auto x_637 = Fst(x_635);
    x_631->children = ListAppend(x_636, Cons(x_632, x_637));
    if (ListIsEmpty(x_636)) {
      x_631->first = x_632.get();
    }
    if (ListIsEmpty(x_637)) {
      x_631->last = x_632.get();
    }
    OptionMatch(
        ListLast(x_636),
        [&](const auto &x_639) {
          x_632->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_638) {
          x_632->prev = x_638.get();
          x_638->next = x_632.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_637),
        [&](const auto &x_641) {
          x_632->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_640) {
          x_632->next = x_640.get();
          x_640->prev = x_632.get();
          return MakeUnit();
        });
    x_632->parent = x_631.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_642) {
      auto x_643 = (x_632->parent);
      if (x_643->meta->pass_0_has_proc_time_table) {
        auto x_646 = OptionMatch(
            x_632->prev, [&](const auto &x_645) { return NextTotalOrder(x_643->meta->bb_1_bb_time_table); },
            [&](const auto &x_644) { return NextTotalOrder(x_644->meta->pass_0_proc_time_table); });
        x_632->meta->pass_0_has_proc_time_table = true;
        x_632->meta->pass_0_proc_time_table = x_646;
        MetaWriteMetric();
        return QueueForcePush(x_646, x_632, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_632->next, [&](const auto &x_652) { return MakeUnit(); },
        [&](const auto &x_648) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_649) {
            if (x_648->meta->bb_1_has_bb_time_table) {
              auto x_650 = x_648->meta->bb_1_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_650, x_648, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_631->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_653) {
        if (x_631->meta->bb_0_has_bb_time_table) {
          auto x_654 = x_631->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_654, x_631, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_637)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_656) {
        if (x_631->meta->bb_0_has_bb_time_table) {
          auto x_657 = x_631->meta->bb_0_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_657, x_631, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_632->next, [&](const auto &x_663) { return MakeUnit(); },
        [&](const auto &x_659) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_660) {
            if (x_659->meta->bb_0_has_bb_time_table) {
              auto x_661 = x_659->meta->bb_0_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_661, x_659, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_664) {
      auto x_665 = (x_632->parent);
      if (x_665->meta->pass_1_has_proc_time_table) {
        auto x_668 = OptionMatch(
            x_632->prev, [&](const auto &x_667) { return NextTotalOrder(x_665->meta->bb_2_bb_time_table); },
            [&](const auto &x_666) { return NextTotalOrder(x_666->meta->pass_1_proc_time_table); });
        x_632->meta->pass_1_has_proc_time_table = true;
        x_632->meta->pass_1_proc_time_table = x_668;
        MetaWriteMetric();
        return QueueForcePush(x_668, x_632, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_631->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_670) {
        if (x_631->meta->bb_2_has_bb_time_table) {
          auto x_671 = x_631->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_671, x_631, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_637)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_673) {
        if (x_631->meta->bb_2_has_bb_time_table) {
          auto x_674 = x_631->meta->bb_2_bb_time_table;
          MetaWriteMetric();
          return QueuePush(x_674, x_631, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_632->next, [&](const auto &x_680) { return MakeUnit(); },
        [&](const auto &x_676) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_677) {
            if (x_676->meta->bb_2_has_bb_time_table) {
              auto x_678 = x_676->meta->bb_2_bb_time_table;
              MetaWriteMetric();
              return QueuePush(x_678, x_676, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_629(x_634, ListNthExn(x_631->children, x_633), x_632);
  }
}
Unit add_node_x_25(const auto &x_630, const auto &x_631, const auto &x_632) { return x_629(x_630, x_631, x_632); }
Unit x_681(const auto &x_682) {
  ListIter2(x_682->children, [&](const auto &x_683, const auto &x_684) {
    x_683->parent = x_682.get();
    x_684->parent = x_682.get();
    x_683->next = x_684.get();
    x_684->prev = x_683.get();
    x_681(x_683);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_682->children),
      [&](const auto &x_686) {
        x_682->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_685) {
        x_682->first = x_685.get();
        x_685->parent = x_682.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_682->children),
      [&](const auto &x_688) {
        x_682->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_687) {
        x_682->last = x_687.get();
        x_687->parent = x_682.get();
        x_681(x_687);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_23(const auto &x_682) { return x_681(x_682); }
Unit eval_stmts_x_19(const auto &x_689) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_690) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_691) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_689->meta->bb_2_has_bb_time_table = true;
      x_689->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_32(x_689);
      return MakeUnit();
    })));
    ListIter(x_689->children, [&](const auto &x_692) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_693) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_19(x_692);
        x_692->meta->pass_1_has_proc_time_table = true;
        x_692->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_17(const auto &x_694) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_695) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_696) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_694->meta->bb_1_has_bb_time_table = true;
      x_694->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_30(x_694);
      return MakeUnit();
    })));
    ListIter(x_694->children, [&](const auto &x_697) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_698) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_17(x_697);
        x_697->meta->pass_0_has_proc_time_table = true;
        x_697->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_699) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_694->meta->bb_0_has_bb_time_table = true;
      x_694->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_31(x_694);
      return MakeUnit();
    })));
    return MakeUnit();
  })));
}
Unit x_700(const auto &x_701) {
  ListIter2(x_701->children, [&](const auto &x_702, const auto &x_703) {
    x_702->parent = x_701.get();
    x_703->parent = x_701.get();
    x_702->next = x_703.get();
    x_703->prev = x_702.get();
    x_700(x_702);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_701->children),
      [&](const auto &x_705) {
        x_701->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_704) {
        x_701->first = x_704.get();
        x_704->parent = x_701.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_701->children),
      [&](const auto &x_707) {
        x_701->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_706) {
        x_701->last = x_706.get();
        x_706->parent = x_701.get();
        x_700(x_706);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_701) { return x_700(x_701); }
int64_t x_708(const auto &x_709) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_709->children, [&](const auto &x_710) { return x_708(x_710); }));
}
int64_t node_size_x_4(const auto &x_709) { return x_708(x_709); }
int64_t x_711(const auto &x_712) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_712->children, [&](const auto &x_713) { return x_711(x_713); }));
}
int64_t layout_size_x_3(const auto &x_712) { return x_711(x_712); }
LayoutNode x_714(const auto &x_715) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_715)), [&](const auto &x_716) { return x_714(x_716); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_715) { return x_714(x_715); }
Node x_717(const auto &x_718) {
  return MakeNode(x_718->name, x_718->attr, x_718->prop, x_718->extern_id,
                  ListMap(x_718->children, [&](const auto &x_719) { return x_717(x_719); }));
}
Node node_to_fs_node_x_1(const auto &x_718) { return x_717(x_718); }
Node x_720(const auto &x_721) {
  return MakeNode(JsonToString(JsonMember("name", x_721)), JsonToDict(JsonMember("attributes", x_721)),
                  JsonToDict(JsonMember("properties", x_721)), JsonToInt(JsonMember("id", x_721)),
                  ListMap(JsonToList(JsonMember("children", x_721)), [&](const auto &x_722) { return x_720(x_722); }));
}
Node json_to_node_aux_x_0(const auto &x_721) { return x_720(x_721); }
int main() {
  WithOutFile("espn.out", [&](const auto &x_5) {
    PrintEndline("RUNNING PQ_D");
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
      MetricRecordOverhead(Zro(Timed([&](const auto &x_16) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_17(x_14);
        x_14->meta->pass_0_has_proc_time_table = true;
        x_14->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_18) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_19(x_14);
        x_14->meta->pass_1_has_proc_time_table = true;
        x_14->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      JsonToChannel(x_5, [&]() {
        auto x_2287 = FreshJson();
        WriteJson(x_2287, "name", "PQ_D");
        WriteJson(x_2287, "diff_num", ReadRef(x_7));
        WriteJson(x_2287, "read_count", MetricReadCount());
        WriteJson(x_2287, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_2287, "write_count", MetricWriteCount());
        WriteJson(x_2287, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_2287, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_2287, "input_change_count", MetricInputChangeCount());
        WriteJson(x_2287, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_2287, "overhead_time", MetricOverheadCount());
        WriteJson(x_2287, "eval_time", MetricEvalCount());
        WriteJson(x_2287, "html", "");
        WriteJson(x_2287, "command", StackToList(x_11));
        return x_2287;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_2289 = JsonToString(JsonMember("name", x_21));
        if (x_2289 == "add") {
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
        } else if (x_2289 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_26) {
            while (!QueueIsEmpty()) {
              auto x_27 = QueuePeek();
              auto x_28 = Zro(x_27);
              auto x_29 = Fst(x_27);
              MetaReadMetric();
              MetricQueueSize(QueueSize());
              if (x_29.n->meta->alive) {
                [&]() {
                  auto x_2290 = x_29.rf;
                  if (x_2290 == 0) {
                    return eval_stmts_x_30(x_29.n);
                  } else if (x_2290 == 1) {
                    return eval_stmts_x_31(x_29.n);
                  } else if (x_2290 == 2) {
                    return eval_stmts_x_32(x_29.n);
                  } else if (x_2290 == 3) {
                    auto x_33 = ReadRef(current_time);
                    WriteRef(current_time, x_28);
                    eval_stmts_x_17(x_29.n);
                    x_29.n->meta->pass_0_has_proc_time_table = true;
                    x_29.n->meta->pass_0_proc_time_table = ReadRef(current_time);
                    WriteRef(current_time, x_33);
                    return MakeUnit();
                  } else if (x_2290 == 4) {
                    auto x_34 = ReadRef(current_time);
                    WriteRef(current_time, x_28);
                    eval_stmts_x_19(x_29.n);
                    x_29.n->meta->pass_1_has_proc_time_table = true;
                    x_29.n->meta->pass_1_proc_time_table = ReadRef(current_time);
                    WriteRef(current_time, x_34);
                    return MakeUnit();
                  } else {
                    Panic();
                  }
                }();
              }
              auto x_35 = Zro(QueuePop());
              MakeUnit();
              MakeUnit();
            }
            return MakeUnit();
          })));
          JsonToChannel(x_5, [&]() {
            auto x_2288 = FreshJson();
            WriteJson(x_2288, "name", "PQ_D");
            WriteJson(x_2288, "diff_num", ReadRef(x_7));
            WriteJson(x_2288, "read_count", MetricReadCount());
            WriteJson(x_2288, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_2288, "write_count", MetricWriteCount());
            WriteJson(x_2288, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_2288, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_2288, "input_change_count", MetricInputChangeCount());
            WriteJson(x_2288, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_2288, "overhead_time", MetricOverheadCount());
            WriteJson(x_2288, "eval_time", MetricEvalCount());
            WriteJson(x_2288, "html", "");
            WriteJson(x_2288, "command", StackToList(x_11));
            return x_2288;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_2289 == "remove") {
          return remove_node_x_37(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_36) { return JsonToInt(x_36); }), x_14,
              MakeUnit());
        } else if (x_2289 == "replace") {
          return replace_node_x_41(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_40) { return JsonToInt(x_40); }), x_14,
              [&]() {
                auto x_38 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_38->parent = nullptr;
                x_38->prev = nullptr;
                x_38->next = nullptr;
                set_children_relation_x_39(x_38);
                return x_38;
              }());
        } else if (x_2289 == "replace_value") {
          return replace_value_x_43(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_42) { return JsonToInt(x_42); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_2289 == "delete_value") {
          return delete_value_x_45(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_44) { return JsonToInt(x_44); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_2289 == "insert_value") {
          return insert_value_x_47(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_46) { return JsonToInt(x_46); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_2289 == "layout_remove") {
          return remove_layout_node_x_49(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_48) { return JsonToInt(x_48); }), x_15,
              MakeUnit());
        } else if (x_2289 == "layout_add") {
          return add_layout_node_x_51(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_50) { return JsonToInt(x_50); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_2289 == "layout_replace") {
          return replace_layout_node_x_53(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_52) { return JsonToInt(x_52); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_2289 == "layout_info_changed") {
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