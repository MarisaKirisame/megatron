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
Unit var_modified_x_6251(const auto &x_6253);
auto eval_expr_x_6248(const auto &x_6271);
Unit var_modified_x_6246(const auto &x_6348);
auto eval_expr_x_6243(const auto &x_6353);
Unit var_modified_x_6241(const auto &x_6370);
auto eval_expr_x_6238(const auto &x_6381);
Unit var_modified_x_6236(const auto &x_6386);
auto eval_expr_x_6233(const auto &x_6397);
Unit var_modified_x_6231(const auto &x_6406);
auto eval_expr_x_6228(const auto &x_6411);
Unit var_modified_x_6226(const auto &x_6412);
auto eval_expr_x_6223(const auto &x_6417);
Unit var_modified_x_6221(const auto &x_6422);
auto eval_expr_x_6218(const auto &x_6430);
Unit var_modified_x_6216(const auto &x_6441);
auto eval_expr_x_6213(const auto &x_6446);
Unit var_modified_x_6211(const auto &x_6451);
auto eval_expr_x_6208(const auto &x_6459);
Unit var_modified_x_6206(const auto &x_6470);
auto eval_expr_x_6203(const auto &x_6478);
Unit var_modified_x_6201(const auto &x_6503);
auto eval_expr_x_6198(const auto &x_6514);
Unit var_modified_x_6196(const auto &x_6539);
auto eval_expr_x_6193(const auto &x_6544);
Unit var_modified_x_6191(const auto &x_6547);
auto eval_expr_x_6188(const auto &x_6557);
Unit var_modified_x_6186(const auto &x_6566);
auto eval_expr_x_6183(const auto &x_6576);
Unit var_modified_x_6181(const auto &x_6585);
auto eval_expr_x_6178(const auto &x_6593);
Unit var_modified_x_6176(const auto &x_6596);
auto eval_expr_x_6173(const auto &x_6604);
Unit var_modified_x_6171(const auto &x_6607);
auto eval_expr_x_6168(const auto &x_6618);
Unit var_modified_x_6166(const auto &x_6621);
auto eval_expr_x_6163(const auto &x_6632);
Unit var_modified_x_6159(const auto &x_6635);
auto eval_expr_x_6156(const auto &x_6647);
Unit var_modified_x_6154(const auto &x_6676);
auto eval_expr_x_6151(const auto &x_6688);
Unit var_modified_x_6149(const auto &x_6701);
auto eval_expr_x_6146(const auto &x_6713);
Unit var_modified_x_6144(const auto &x_6722);
auto eval_expr_x_6141(const auto &x_6727);
Unit var_modified_x_6139(const auto &x_6736);
auto eval_expr_x_6136(const auto &x_6744);
Unit var_modified_x_6134(const auto &x_6889);
auto eval_expr_x_6131(const auto &x_6894);
Unit var_modified_x_6129(const auto &x_6943);
auto eval_expr_x_6126(const auto &x_6951);
Unit var_modified_x_6124(const auto &x_6954);
auto eval_expr_x_6121(const auto &x_6959);
Unit var_modified_x_6119(const auto &x_6968);
auto eval_expr_x_6116(const auto &x_6980);
Unit var_modified_x_6114(const auto &x_6989);
auto eval_expr_x_6111(const auto &x_7001);
Unit var_modified_x_6109(const auto &x_7010);
auto eval_expr_x_6106(const auto &x_7020);
Unit var_modified_x_6104(const auto &x_7033);
auto eval_expr_x_6101(const auto &x_7038);
Unit var_modified_x_6099(const auto &x_7047);
auto eval_expr_x_6096(const auto &x_7055);
Unit var_modified_x_6094(const auto &x_7208);
auto eval_expr_x_6091(const auto &x_7213);
Unit var_modified_x_6089(const auto &x_7218);
auto eval_expr_x_6086(const auto &x_7223);
Unit var_modified_x_6084(const auto &x_7272);
auto eval_expr_x_6081(const auto &x_7277);
Unit var_modified_x_6079(const auto &x_7290);
auto eval_expr_x_6076(const auto &x_7298);
Unit var_modified_x_6072(const auto &x_7301);
auto eval_expr_x_6069(const auto &x_7308);
Unit var_modified_x_6067(const auto &x_7325);
auto eval_expr_x_6064(const auto &x_7330);
Unit var_modified_x_6062(const auto &x_7339);
auto eval_expr_x_6059(const auto &x_7347);
Unit var_modified_x_6057(const auto &x_7400);
auto eval_expr_x_6054(const auto &x_7410);
Unit var_modified_x_6052(const auto &x_7435);
auto eval_expr_x_6049(const auto &x_7442);
Unit var_modified_x_6047(const auto &x_7451);
auto eval_expr_x_6044(const auto &x_7459);
Unit var_modified_x_6042(const auto &x_7512);
auto eval_expr_x_6039(const auto &x_7522);
Unit var_modified_x_6037(const auto &x_7543);
auto eval_expr_x_6034(const auto &x_7548);
Unit var_modified_x_6032(const auto &x_7569);
auto eval_expr_x_6029(const auto &x_7574);
Unit var_modified_x_6027(const auto &x_7587);
auto eval_expr_x_6024(const auto &x_7595);
Unit var_modified_x_6022(const auto &x_7616);
auto eval_expr_x_6019(const auto &x_7621);
Unit var_modified_x_6017(const auto &x_7626);
auto eval_expr_x_6014(const auto &x_7631);
Unit eval_stmts_x_5930(const auto &x_6012);
Unit eval_stmts_x_5929(const auto &x_6074);
Unit eval_stmts_x_5928(const auto &x_6161);
Unit x_5657(const auto &x_5658, const auto &x_5659, const auto &x_5660);
Unit x_5664(const auto &x_5665, const auto &x_5666, const auto &x_5667);
Unit x_5671(const auto &x_5672, const auto &x_5673, const auto &x_5674);
Unit x_5678(const auto &x_5679, const auto &x_5680, const auto &x_5681);
Unit x_5713(const auto &x_5714, const auto &x_5715, const auto &x_5716);
Unit x_5746(const auto &x_5747, const auto &x_5748, const auto &x_5749);
Unit x_5805(const auto &x_5806, const auto &x_5807, const auto &x_5808);
Unit x_5877(const auto &x_5878);
Unit x_5885(const auto &x_5886, const auto &x_5887, const auto &x_5888);
Unit x_5920(const auto &x_5921);
Unit x_5932(const auto &x_5933, const auto &x_5934, const auto &x_5935);
Unit x_5975(const auto &x_5976);
Unit eval_stmts_x_5630(const auto &x_5983);
Unit eval_stmts_x_5629(const auto &x_5986);
Unit x_5989(const auto &x_5990);
int64_t x_5997(const auto &x_5998);
int64_t x_6000(const auto &x_6001);
LayoutNode x_6003(const auto &x_6004);
Node x_6006(const auto &x_6007);
Node x_6009(const auto &x_6010);
Unit var_modified_x_6251(const auto &x_6253) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6254) {
    auto x_7636 = [&](const auto &x_6255) {
      if (IsSome(x_6255->meta->bb_0_bb_time_table)) {
        auto x_6256 = UnSome(x_6255->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6256, x_6255, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7636(x_6253);
    MakeUnit();
    auto x_7637 = [&](const auto &x_6260) {
      if (IsSome(x_6260->meta->bb_0_bb_time_table)) {
        auto x_6261 = UnSome(x_6260->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6261, x_6260, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6253->next, [&](const auto &x_6259) { return MakeUnit(); },
        [&](const auto &x_6258) {
          auto x_7640 = x_7637;
          x_7640(x_6258);
          return MakeUnit();
        });
    auto x_7638 = [&](const auto &x_6263) {
      if (IsSome(x_6263->meta->bb_2_bb_time_table)) {
        auto x_6264 = UnSome(x_6263->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6264, x_6263, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7638(x_6253);
    MakeUnit();
    auto x_7639 = [&](const auto &x_6268) {
      if (IsSome(x_6268->meta->bb_2_bb_time_table)) {
        auto x_6269 = UnSome(x_6268->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6269, x_6268, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6253->next, [&](const auto &x_6267) { return MakeUnit(); },
        [&](const auto &x_6266) {
          auto x_7641 = x_7639;
          x_7641(x_6266);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6248(const auto &x_6271) {
  if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_6271->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_6271->parent != nullptr) &&
          (eq((x_6271->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_6271->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_6271->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_6271->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_6271->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_6246(const auto &x_6348) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6349) {
    ListIter(x_6348->children, [&](const auto &x_6350) {
      if (IsSome(x_6350->meta->bb_1_bb_time_table)) {
        auto x_6351 = UnSome(x_6350->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6351, x_6350, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6243(const auto &x_6353) {
  return (((!(x_6353->parent != nullptr)) || (x_6353->parent)->var_visible) &&
          (neq(x_6353->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_6353->var_inside_svg) && (!x_6353->var_disabled))));
}
Unit var_modified_x_6241(const auto &x_6370) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6371) {
    auto x_7642 = [&](const auto &x_6372) {
      if (IsSome(x_6372->meta->bb_1_bb_time_table)) {
        auto x_6373 = UnSome(x_6372->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6373, x_6372, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7642(x_6370);
    MakeUnit();
    ListIter(x_6370->children, [&](const auto &x_6375) {
      if (IsSome(x_6375->meta->bb_1_bb_time_table)) {
        auto x_6376 = UnSome(x_6375->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6376, x_6375, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    auto x_7643 = [&](const auto &x_6378) {
      if (IsSome(x_6378->meta->bb_0_bb_time_table)) {
        auto x_6379 = UnSome(x_6378->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6379, x_6378, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7643(x_6370);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6238(const auto &x_6381) {
  if (eq(x_6381->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_6381->parent != nullptr) && (x_6381->parent)->var_disabled);
  }
}
Unit var_modified_x_6236(const auto &x_6386) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6387) {
    auto x_7644 = [&](const auto &x_6388) {
      if (IsSome(x_6388->meta->bb_1_bb_time_table)) {
        auto x_6389 = UnSome(x_6388->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6389, x_6388, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7644(x_6386);
    MakeUnit();
    ListIter(x_6386->children, [&](const auto &x_6391) {
      if (IsSome(x_6391->meta->bb_1_bb_time_table)) {
        auto x_6392 = UnSome(x_6391->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6392, x_6391, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    auto x_7645 = [&](const auto &x_6394) {
      if (IsSome(x_6394->meta->bb_0_bb_time_table)) {
        auto x_6395 = UnSome(x_6394->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6395, x_6394, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7645(x_6386);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6233(const auto &x_6397) {
  return ((x_6397->parent != nullptr) && ((x_6397->parent)->var_is_svg_block || (x_6397->parent)->var_inside_svg));
}
Unit var_modified_x_6231(const auto &x_6406) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6407) {
    ListIter(x_6406->children, [&](const auto &x_6408) {
      if (IsSome(x_6408->meta->bb_1_bb_time_table)) {
        auto x_6409 = UnSome(x_6408->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6409, x_6408, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6228(const auto &x_6411) { return eq(x_6411->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_6226(const auto &x_6412) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6413) {
    auto x_7646 = [&](const auto &x_6414) {
      if (IsSome(x_6414->meta->bb_0_bb_time_table)) {
        auto x_6415 = UnSome(x_6414->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6415, x_6414, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7646(x_6412);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6223(const auto &x_6417) {
  return neq(x_6417->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_6221(const auto &x_6422) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6423) {
    auto x_7647 = [&](const auto &x_6424) {
      if (IsSome(x_6424->meta->bb_1_bb_time_table)) {
        auto x_6425 = UnSome(x_6424->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6425, x_6424, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7647(x_6422);
    MakeUnit();
    auto x_7648 = [&](const auto &x_6427) {
      if (IsSome(x_6427->meta->bb_0_bb_time_table)) {
        auto x_6428 = UnSome(x_6427->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6428, x_6427, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7648(x_6422);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6218(const auto &x_6430) {
  if (!x_6430->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_6430->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_6430->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_6430->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_6216(const auto &x_6441) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6442) {
    auto x_7649 = [&](const auto &x_6443) {
      if (IsSome(x_6443->meta->bb_0_bb_time_table)) {
        auto x_6444 = UnSome(x_6443->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6444, x_6443, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7649(x_6441);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6213(const auto &x_6446) {
  return neq(x_6446->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_6211(const auto &x_6451) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6452) {
    auto x_7650 = [&](const auto &x_6453) {
      if (IsSome(x_6453->meta->bb_1_bb_time_table)) {
        auto x_6454 = UnSome(x_6453->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6454, x_6453, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7650(x_6451);
    MakeUnit();
    auto x_7651 = [&](const auto &x_6456) {
      if (IsSome(x_6456->meta->bb_0_bb_time_table)) {
        auto x_6457 = UnSome(x_6456->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6457, x_6456, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7651(x_6451);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6208(const auto &x_6459) {
  if (!x_6459->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_6459->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_6459->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_6459->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_6206(const auto &x_6470) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6471) {
    ListIter(x_6470->children, [&](const auto &x_6472) {
      if (IsSome(x_6472->meta->bb_0_bb_time_table)) {
        auto x_6473 = UnSome(x_6472->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6473, x_6472, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    });
    ListIter(x_6470->children, [&](const auto &x_6475) {
      if (IsSome(x_6475->meta->bb_2_bb_time_table)) {
        auto x_6476 = UnSome(x_6475->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6476, x_6475, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6203(const auto &x_6478) {
  if ((x_6478->parent != nullptr) &&
      (eq((x_6478->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_6478->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_6478->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_6478->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6201(const auto &x_6503) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6504) {
    ListIter(x_6503->children, [&](const auto &x_6505) {
      if (IsSome(x_6505->meta->bb_0_bb_time_table)) {
        auto x_6506 = UnSome(x_6505->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6506, x_6505, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    });
    auto x_7652 = [&](const auto &x_6508) {
      if (IsSome(x_6508->meta->bb_2_bb_time_table)) {
        auto x_6509 = UnSome(x_6508->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6509, x_6508, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7652(x_6503);
    MakeUnit();
    ListIter(x_6503->children, [&](const auto &x_6511) {
      if (IsSome(x_6511->meta->bb_2_bb_time_table)) {
        auto x_6512 = UnSome(x_6511->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6512, x_6511, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6198(const auto &x_6514) {
  if ((x_6514->parent != nullptr) &&
      (eq((x_6514->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_6514->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_6514->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6196(const auto &x_6539) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6540) {
    ListIter(x_6539->children, [&](const auto &x_6541) {
      if (IsSome(x_6541->meta->bb_1_bb_time_table)) {
        auto x_6542 = UnSome(x_6541->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6542, x_6541, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6193(const auto &x_6544) {
  if (x_6544->has_prop_flex_direction) {
    return x_6544->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_6191(const auto &x_6547) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6548) {
    auto x_7653 = [&](const auto &x_6551) {
      if (IsSome(x_6551->meta->bb_1_bb_time_table)) {
        auto x_6552 = UnSome(x_6551->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6552, x_6551, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6547->next, [&](const auto &x_6550) { return MakeUnit(); },
        [&](const auto &x_6549) {
          auto x_7655 = x_7653;
          x_7655(x_6549);
          return MakeUnit();
        });
    auto x_7654 = [&](const auto &x_6554) {
      if (IsSome(x_6554->meta->bb_2_bb_time_table)) {
        auto x_6555 = UnSome(x_6554->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6555, x_6554, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7654(x_6547);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6188(const auto &x_6557) {
  return plus((x_6557->prev != nullptr) ? ((x_6557->prev)->var_flex_shrink_sum) : (0.), x_6557->var_flex_shrink);
}
Unit var_modified_x_6186(const auto &x_6566) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6567) {
    auto x_7656 = [&](const auto &x_6570) {
      if (IsSome(x_6570->meta->bb_1_bb_time_table)) {
        auto x_6571 = UnSome(x_6570->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6571, x_6570, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6566->next, [&](const auto &x_6569) { return MakeUnit(); },
        [&](const auto &x_6568) {
          auto x_7658 = x_7656;
          x_7658(x_6568);
          return MakeUnit();
        });
    auto x_7657 = [&](const auto &x_6573) {
      if (IsSome(x_6573->meta->bb_2_bb_time_table)) {
        auto x_6574 = UnSome(x_6573->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6574, x_6573, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7657(x_6566);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6183(const auto &x_6576) {
  return plus((x_6576->prev != nullptr) ? ((x_6576->prev)->var_flex_grow_sum) : (0.), x_6576->var_flex_grow);
}
Unit var_modified_x_6181(const auto &x_6585) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6586) {
    auto x_7659 = [&](const auto &x_6587) {
      if (IsSome(x_6587->meta->bb_1_bb_time_table)) {
        auto x_6588 = UnSome(x_6587->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6588, x_6587, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7659(x_6585);
    MakeUnit();
    auto x_7660 = [&](const auto &x_6590) {
      if (IsSome(x_6590->meta->bb_2_bb_time_table)) {
        auto x_6591 = UnSome(x_6590->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6591, x_6590, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7660(x_6585);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6178(const auto &x_6593) {
  if (x_6593->has_prop_flex_shrink) {
    return (x_6593->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6176(const auto &x_6596) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6597) {
    auto x_7661 = [&](const auto &x_6598) {
      if (IsSome(x_6598->meta->bb_1_bb_time_table)) {
        auto x_6599 = UnSome(x_6598->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6599, x_6598, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7661(x_6596);
    MakeUnit();
    auto x_7662 = [&](const auto &x_6601) {
      if (IsSome(x_6601->meta->bb_2_bb_time_table)) {
        auto x_6602 = UnSome(x_6601->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6602, x_6601, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7662(x_6596);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6173(const auto &x_6604) {
  if (x_6604->has_prop_flex_grow) {
    return (x_6604->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6171(const auto &x_6607) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6608) {
    auto x_7663 = [&](const auto &x_6609) {
      if (IsSome(x_6609->meta->bb_1_bb_time_table)) {
        auto x_6610 = UnSome(x_6609->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6610, x_6609, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7663(x_6607);
    MakeUnit();
    auto x_7664 = [&](const auto &x_6612) {
      if (IsSome(x_6612->meta->bb_0_bb_time_table)) {
        auto x_6613 = UnSome(x_6612->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6613, x_6612, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7664(x_6607);
    MakeUnit();
    auto x_7665 = [&](const auto &x_6615) {
      if (IsSome(x_6615->meta->bb_2_bb_time_table)) {
        auto x_6616 = UnSome(x_6615->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6616, x_6615, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7665(x_6607);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6168(const auto &x_6618) {
  if (x_6618->has_prop_position) {
    return x_6618->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_6166(const auto &x_6621) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6622) {
    auto x_7666 = [&](const auto &x_6623) {
      if (IsSome(x_6623->meta->bb_1_bb_time_table)) {
        auto x_6624 = UnSome(x_6623->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6624, x_6623, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    };
    x_7666(x_6621);
    MakeUnit();
    ListIter(x_6621->children, [&](const auto &x_6626) {
      if (IsSome(x_6626->meta->bb_1_bb_time_table)) {
        auto x_6627 = UnSome(x_6626->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6627, x_6626, MakeRecomputeBB("bb_1"));
      } else {
        return MakeUnit();
      }
    });
    auto x_7667 = [&](const auto &x_6629) {
      if (IsSome(x_6629->meta->bb_0_bb_time_table)) {
        auto x_6630 = UnSome(x_6629->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6630, x_6629, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7667(x_6621);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6163(const auto &x_6632) {
  if (x_6632->has_prop_display) {
    return x_6632->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_6159(const auto &x_6635) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6636) {
    auto x_7668 = [&](const auto &x_6639) {
      if (IsSome(x_6639->meta->bb_0_bb_time_table)) {
        auto x_6640 = UnSome(x_6639->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6640, x_6639, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    if (x_6635->next == nullptr) {
      auto x_7670 = x_7668;
      OptionMatch(
          x_6635->parent, [&](const auto &x_6638) { return MakeUnit(); },
          [&](const auto &x_6637) {
            auto x_7672 = x_7670;
            x_7672(x_6637);
            return MakeUnit();
          });
    }
    auto x_7669 = [&](const auto &x_6644) {
      if (IsSome(x_6644->meta->bb_0_bb_time_table)) {
        auto x_6645 = UnSome(x_6644->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6645, x_6644, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6635->next, [&](const auto &x_6643) { return MakeUnit(); },
        [&](const auto &x_6642) {
          auto x_7671 = x_7669;
          x_7671(x_6642);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6156(const auto &x_6647) {
  if (x_6647->prev != nullptr) {
    if (x_6647->var_line_break) {
      return plus((x_6647->prev)->var_finished_intrinsic_height_sum,
                  plus((x_6647->prev)->var_intrinsic_current_line_height, x_6647->var_intrinsic_height_external));
    } else {
      return (x_6647->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_6647->var_line_break) {
      return x_6647->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6154(const auto &x_6676) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6677) {
    auto x_7673 = [&](const auto &x_6680) {
      if (IsSome(x_6680->meta->bb_0_bb_time_table)) {
        auto x_6681 = UnSome(x_6680->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6681, x_6680, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    if (x_6676->next == nullptr) {
      auto x_7675 = x_7673;
      OptionMatch(
          x_6676->parent, [&](const auto &x_6679) { return MakeUnit(); },
          [&](const auto &x_6678) {
            auto x_7677 = x_7675;
            x_7677(x_6678);
            return MakeUnit();
          });
    }
    auto x_7674 = [&](const auto &x_6685) {
      if (IsSome(x_6685->meta->bb_0_bb_time_table)) {
        auto x_6686 = UnSome(x_6685->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6686, x_6685, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6676->next, [&](const auto &x_6684) { return MakeUnit(); },
        [&](const auto &x_6683) {
          auto x_7676 = x_7674;
          x_7676(x_6683);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6151(const auto &x_6688) {
  if (x_6688->var_line_break) {
    return 0.;
  } else {
    return max(x_6688->var_intrinsic_height_external,
               (x_6688->prev != nullptr) ? ((x_6688->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_6149(const auto &x_6701) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6702) {
    auto x_7678 = [&](const auto &x_6705) {
      if (IsSome(x_6705->meta->bb_0_bb_time_table)) {
        auto x_6706 = UnSome(x_6705->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6706, x_6705, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6701->next, [&](const auto &x_6704) { return MakeUnit(); },
        [&](const auto &x_6703) {
          auto x_7680 = x_7678;
          x_7680(x_6703);
          return MakeUnit();
        });
    auto x_7679 = [&](const auto &x_6710) {
      if (IsSome(x_6710->meta->bb_2_bb_time_table)) {
        auto x_6711 = UnSome(x_6710->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6711, x_6710, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    if (x_6701->next == nullptr) {
      auto x_7681 = x_7679;
      OptionMatch(
          x_6701->parent, [&](const auto &x_6709) { return MakeUnit(); },
          [&](const auto &x_6708) {
            auto x_7682 = x_7681;
            x_7682(x_6708);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_6146(const auto &x_6713) {
  return plus((x_6713->prev != nullptr) ? ((x_6713->prev)->var_intrinsic_height_sum) : (0.),
              x_6713->var_intrinsic_height_external);
}
Unit var_modified_x_6144(const auto &x_6722) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6723) {
    auto x_7683 = [&](const auto &x_6724) {
      if (IsSome(x_6724->meta->bb_0_bb_time_table)) {
        auto x_6725 = UnSome(x_6724->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6725, x_6724, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7683(x_6722);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6141(const auto &x_6727) {
  if (eq(x_6727->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_6727->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_6139(const auto &x_6736) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6737) {
    auto x_7684 = [&](const auto &x_6738) {
      if (IsSome(x_6738->meta->bb_0_bb_time_table)) {
        auto x_6739 = UnSome(x_6738->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6739, x_6738, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7684(x_6736);
    MakeUnit();
    auto x_7685 = [&](const auto &x_6741) {
      if (IsSome(x_6741->meta->bb_2_bb_time_table)) {
        auto x_6742 = UnSome(x_6741->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6742, x_6741, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7685(x_6736);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6136(const auto &x_6744) {
  if (eq(x_6744->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_6744->var_inside_svg) {
      return 0.;
    } else {
      if (x_6744->var_disabled) {
        return 0.;
      } else {
        if (neq(x_6744->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_6744->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_6744->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_6744->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_6744->var_height_expr.r.a0;
          } else {
            if (x_6744->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_6744->var_height_expr.r.a0;
            } else {
              return x_6744->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_6744->var_children_intrinsic_height,
              (eq(x_6744->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_6744->var_is_default_case)
                         ? (0.)
                         : ((eq(x_6744->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_6744->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_6744->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_6744->var_has_height_attr &&
                                                  (x_6744->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_6744->var_height_attr_expr.r.a0)
                                                     : ((x_6744->has_attr_viewBox)
                                                            ? (x_6744->attr_viewBox.r.a3)
                                                            : (mult((x_6744->attr_viewBox.r.a3),
                                                                    divide(x_6744->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_6744->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_6744->var_has_height_attr)
                                                            ? (x_6744->var_height_attr_expr.r.a0)
                                                            : ((x_6744->has_attr_image_height &&
                                                                (!x_6744->var_has_width_attr))
                                                                   ? (int_to_float(x_6744->attr_image_height))
                                                                   : ((neq(x_6744->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_6744->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_6744->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_6744->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_6744->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_6744->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6134(const auto &x_6889) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6890) {
    auto x_7686 = [&](const auto &x_6891) {
      if (IsSome(x_6891->meta->bb_2_bb_time_table)) {
        auto x_6892 = UnSome(x_6891->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6892, x_6891, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7686(x_6889);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6131(const auto &x_6894) {
  if (eq(x_6894->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_6894->var_inside_svg || x_6894->var_disabled)) {
    return true;
  } else {
    if ((x_6894->parent != nullptr) && (x_6894->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_6894->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_6894->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_6894->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_6894->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_6894->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6129(const auto &x_6943) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6944) {
    auto x_7687 = [&](const auto &x_6945) {
      if (IsSome(x_6945->meta->bb_0_bb_time_table)) {
        auto x_6946 = UnSome(x_6945->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6946, x_6945, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7687(x_6943);
    MakeUnit();
    auto x_7688 = [&](const auto &x_6948) {
      if (IsSome(x_6948->meta->bb_2_bb_time_table)) {
        auto x_6949 = UnSome(x_6948->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6949, x_6948, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7688(x_6943);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6126(const auto &x_6951) {
  if (x_6951->has_prop_height) {
    return x_6951->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_6124(const auto &x_6954) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6955) {
    auto x_7689 = [&](const auto &x_6956) {
      if (IsSome(x_6956->meta->bb_0_bb_time_table)) {
        auto x_6957 = UnSome(x_6956->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6957, x_6956, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7689(x_6954);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6121(const auto &x_6959) {
  if (x_6959->last != nullptr) {
    return plus((x_6959->last)->var_finished_intrinsic_height_sum, (x_6959->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6119(const auto &x_6968) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6969) {
    auto x_7690 = [&](const auto &x_6972) {
      if (IsSome(x_6972->meta->bb_0_bb_time_table)) {
        auto x_6973 = UnSome(x_6972->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6973, x_6972, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6968->next, [&](const auto &x_6971) { return MakeUnit(); },
        [&](const auto &x_6970) {
          auto x_7692 = x_7690;
          x_7692(x_6970);
          return MakeUnit();
        });
    auto x_7691 = [&](const auto &x_6977) {
      if (IsSome(x_6977->meta->bb_2_bb_time_table)) {
        auto x_6978 = UnSome(x_6977->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6978, x_6977, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    if (x_6968->next == nullptr) {
      auto x_7693 = x_7691;
      OptionMatch(
          x_6968->parent, [&](const auto &x_6976) { return MakeUnit(); },
          [&](const auto &x_6975) {
            auto x_7694 = x_7693;
            x_7694(x_6975);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_6116(const auto &x_6980) {
  return plus((x_6980->prev != nullptr) ? ((x_6980->prev)->var_intrinsic_width_sum) : (0.),
              x_6980->var_intrinsic_width_external);
}
Unit var_modified_x_6114(const auto &x_6989) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_6990) {
    auto x_7695 = [&](const auto &x_6993) {
      if (IsSome(x_6993->meta->bb_0_bb_time_table)) {
        auto x_6994 = UnSome(x_6993->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6994, x_6993, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    if (x_6989->next == nullptr) {
      auto x_7697 = x_7695;
      OptionMatch(
          x_6989->parent, [&](const auto &x_6992) { return MakeUnit(); },
          [&](const auto &x_6991) {
            auto x_7699 = x_7697;
            x_7699(x_6991);
            return MakeUnit();
          });
    }
    auto x_7696 = [&](const auto &x_6998) {
      if (IsSome(x_6998->meta->bb_0_bb_time_table)) {
        auto x_6999 = UnSome(x_6998->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_6999, x_6998, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_6989->next, [&](const auto &x_6997) { return MakeUnit(); },
        [&](const auto &x_6996) {
          auto x_7698 = x_7696;
          x_7698(x_6996);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6111(const auto &x_7001) {
  return max(x_7001->var_intrinsic_current_line_width,
             (x_7001->prev != nullptr) ? ((x_7001->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_6109(const auto &x_7010) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7011) {
    auto x_7700 = [&](const auto &x_7012) {
      if (IsSome(x_7012->meta->bb_0_bb_time_table)) {
        auto x_7013 = UnSome(x_7012->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7013, x_7012, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7700(x_7010);
    MakeUnit();
    auto x_7701 = [&](const auto &x_7017) {
      if (IsSome(x_7017->meta->bb_0_bb_time_table)) {
        auto x_7018 = UnSome(x_7017->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7018, x_7017, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_7010->next, [&](const auto &x_7016) { return MakeUnit(); },
        [&](const auto &x_7015) {
          auto x_7702 = x_7701;
          x_7702(x_7015);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6106(const auto &x_7020) {
  return plus(x_7020->var_intrinsic_width_external,
              ((x_7020->prev != nullptr) && (!(x_7020->prev)->var_line_break))
                  ? ((x_7020->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_6104(const auto &x_7033) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7034) {
    auto x_7703 = [&](const auto &x_7035) {
      if (IsSome(x_7035->meta->bb_0_bb_time_table)) {
        auto x_7036 = UnSome(x_7035->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7036, x_7035, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7703(x_7033);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6101(const auto &x_7038) {
  if (eq(x_7038->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_7038->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_6099(const auto &x_7047) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7048) {
    auto x_7704 = [&](const auto &x_7049) {
      if (IsSome(x_7049->meta->bb_0_bb_time_table)) {
        auto x_7050 = UnSome(x_7049->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7050, x_7049, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7704(x_7047);
    MakeUnit();
    auto x_7705 = [&](const auto &x_7052) {
      if (IsSome(x_7052->meta->bb_2_bb_time_table)) {
        auto x_7053 = UnSome(x_7052->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7053, x_7052, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7705(x_7047);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6096(const auto &x_7055) {
  if (eq(x_7055->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_7055->var_inside_svg) {
      return 0.;
    } else {
      if (x_7055->var_disabled) {
        return 0.;
      } else {
        if (neq(x_7055->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_7055->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_7055->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_7055->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_7055->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_7055->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_7055->var_width_expr.r.a0;
          } else {
            return x_7055->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_7055->var_children_intrinsic_width,
              (eq(x_7055->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_7055->var_is_default_case)
                         ? (0.)
                         : ((eq(x_7055->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_7055->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_7055->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_7055->var_has_width_attr &&
                                                  (x_7055->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_7055->var_width_attr_expr.r.a0)
                                                     : (((!x_7055->var_has_width_attr) && x_7055->has_attr_viewBox)
                                                            ? (x_7055->attr_viewBox.r.a2)
                                                            : (mult((x_7055->attr_viewBox.r.a2),
                                                                    divide(x_7055->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_7055->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_7055->var_has_width_attr)
                                                            ? (x_7055->var_width_attr_expr.r.a0)
                                                            : ((x_7055->has_attr_image_width &&
                                                                (!x_7055->var_has_height_attr))
                                                                   ? (int_to_float(x_7055->attr_image_width))
                                                                   : ((neq(x_7055->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_7055->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_7055->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_7055->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_7055->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_7055->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6094(const auto &x_7208) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7209) {
    auto x_7706 = [&](const auto &x_7210) {
      if (IsSome(x_7210->meta->bb_0_bb_time_table)) {
        auto x_7211 = UnSome(x_7210->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7211, x_7210, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7706(x_7208);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6091(const auto &x_7213) {
  if (x_7213->last != nullptr) {
    return (x_7213->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_6089(const auto &x_7218) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7219) {
    auto x_7707 = [&](const auto &x_7220) {
      if (IsSome(x_7220->meta->bb_2_bb_time_table)) {
        auto x_7221 = UnSome(x_7220->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7221, x_7220, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7707(x_7218);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6086(const auto &x_7223) {
  if (eq(x_7223->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_7223->var_inside_svg || x_7223->var_disabled)) {
    return true;
  } else {
    if ((x_7223->parent != nullptr) && (x_7223->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_7223->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_7223->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_7223->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_7223->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_7223->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6084(const auto &x_7272) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7273) {
    auto x_7708 = [&](const auto &x_7274) {
      if (IsSome(x_7274->meta->bb_0_bb_time_table)) {
        auto x_7275 = UnSome(x_7274->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7275, x_7274, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7708(x_7272);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6081(const auto &x_7277) {
  if (eq(x_7277->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_7277->var_inside_svg) {
      return true;
    } else {
      if (x_7277->var_disabled) {
        return true;
      } else {if ( eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_7277->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6079(const auto &x_7290) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7291) {
    auto x_7709 = [&](const auto &x_7292) {
      if (IsSome(x_7292->meta->bb_0_bb_time_table)) {
        auto x_7293 = UnSome(x_7292->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7293, x_7292, MakeRecomputeBB("bb_0"));
      } else {
        return MakeUnit();
      }
    };
    x_7709(x_7290);
    MakeUnit();
    auto x_7710 = [&](const auto &x_7295) {
      if (IsSome(x_7295->meta->bb_2_bb_time_table)) {
        auto x_7296 = UnSome(x_7295->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7296, x_7295, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7710(x_7290);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6076(const auto &x_7298) {
  if (x_7298->has_prop_width) {
    return x_7298->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_6072(const auto &x_7301) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7302) {
    auto x_7711 = [&](const auto &x_7305) {
      if (IsSome(x_7305->meta->bb_2_bb_time_table)) {
        auto x_7306 = UnSome(x_7305->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7306, x_7305, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_7301->next, [&](const auto &x_7304) { return MakeUnit(); },
        [&](const auto &x_7303) {
          auto x_7712 = x_7711;
          x_7712(x_7303);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6069(const auto &x_7308) {
  if ((x_7308->prev != nullptr) && (!(x_7308->prev)->var_line_break)) {
    return max(x_7308->var_height_external, (x_7308->prev)->var_line_height);
  } else {
    return x_7308->var_height_external;
  }
}
Unit var_modified_x_6067(const auto &x_7325) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7326) {
    auto x_7713 = [&](const auto &x_7327) {
      if (IsSome(x_7327->meta->bb_2_bb_time_table)) {
        auto x_7328 = UnSome(x_7327->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7328, x_7327, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7713(x_7325);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6064(const auto &x_7330) {
  if (eq(x_7330->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_7330->var_height_internal;
  }
}
Unit var_modified_x_6062(const auto &x_7339) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7340) {
    auto x_7714 = [&](const auto &x_7341) {
      if (IsSome(x_7341->meta->bb_2_bb_time_table)) {
        auto x_7342 = UnSome(x_7341->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7342, x_7341, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7714(x_7339);
    MakeUnit();
    ListIter(x_7339->children, [&](const auto &x_7344) {
      if (IsSome(x_7344->meta->bb_2_bb_time_table)) {
        auto x_7345 = UnSome(x_7344->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7345, x_7344, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6059(const auto &x_7347) {
  if (x_7347->var_intrinsic_height_is_height) {
    return x_7347->var_intrinsic_height_internal;
  } else {
    if ((x_7347->parent != nullptr) && (x_7347->parent)->var_is_flex_column) {
      return plus(x_7347->var_intrinsic_height_internal,
                  mult(x_7347->var_flex_amount, (x_7347->parent)->var_flex_unit));
    } else {
      if (x_7347->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_7347->var_box_height, divide(x_7347->var_height_expr.r.a0, 100.));
      } else {
        return max(x_7347->var_box_height, x_7347->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_6057(const auto &x_7400) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7401) {
    ListIter(x_7400->children, [&](const auto &x_7402) {
      if (IsSome(x_7402->meta->bb_2_bb_time_table)) {
        auto x_7403 = UnSome(x_7402->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7403, x_7402, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    auto x_7715 = [&](const auto &x_7407) {
      if (IsSome(x_7407->meta->bb_2_bb_time_table)) {
        auto x_7408 = UnSome(x_7407->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7408, x_7407, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_7400->next, [&](const auto &x_7406) { return MakeUnit(); },
        [&](const auto &x_7405) {
          auto x_7716 = x_7715;
          x_7716(x_7405);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6054(const auto &x_7410) {
  if (x_7410->prev != nullptr) {
    if (x_7410->var_line_break || (x_7410->prev)->var_line_break) {
      return plus((x_7410->prev)->var_y, (x_7410->prev)->var_line_height);
    } else {
      return (x_7410->prev)->var_y;
    }
  } else {
    if (x_7410->parent != nullptr) {
      return (x_7410->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6052(const auto &x_7435) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7436) {
    auto x_7717 = [&](const auto &x_7439) {
      if (IsSome(x_7439->meta->bb_2_bb_time_table)) {
        auto x_7440 = UnSome(x_7439->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7440, x_7439, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_7435->next, [&](const auto &x_7438) { return MakeUnit(); },
        [&](const auto &x_7437) {
          auto x_7718 = x_7717;
          x_7718(x_7437);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6049(const auto &x_7442) {
  if (eq(x_7442->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_7442->var_width_internal;
  }
}
Unit var_modified_x_6047(const auto &x_7451) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7452) {
    auto x_7719 = [&](const auto &x_7453) {
      if (IsSome(x_7453->meta->bb_2_bb_time_table)) {
        auto x_7454 = UnSome(x_7453->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7454, x_7453, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7719(x_7451);
    MakeUnit();
    ListIter(x_7451->children, [&](const auto &x_7456) {
      if (IsSome(x_7456->meta->bb_2_bb_time_table)) {
        auto x_7457 = UnSome(x_7456->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7457, x_7456, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6044(const auto &x_7459) {
  if (x_7459->var_intrinsic_width_is_width) {
    return x_7459->var_intrinsic_width_internal;
  } else {
    if ((x_7459->parent != nullptr) && (x_7459->parent)->var_is_flex_row) {
      return plus(x_7459->var_intrinsic_width_internal, mult(x_7459->var_flex_amount, (x_7459->parent)->var_flex_unit));
    } else {
      if (x_7459->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_7459->var_box_width, divide(x_7459->var_width_expr.r.a0, 100.));
      } else {
        return max(x_7459->var_box_width, x_7459->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_6042(const auto &x_7512) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7513) {
    ListIter(x_7512->children, [&](const auto &x_7514) {
      if (IsSome(x_7514->meta->bb_2_bb_time_table)) {
        auto x_7515 = UnSome(x_7514->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7515, x_7514, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    auto x_7720 = [&](const auto &x_7519) {
      if (IsSome(x_7519->meta->bb_2_bb_time_table)) {
        auto x_7520 = UnSome(x_7519->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7520, x_7519, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_7512->next, [&](const auto &x_7518) { return MakeUnit(); },
        [&](const auto &x_7517) {
          auto x_7721 = x_7720;
          x_7721(x_7517);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_6039(const auto &x_7522) {
  if (x_7522->prev != nullptr) {
    if (x_7522->var_line_break || (x_7522->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_7522->prev)->var_x, (x_7522->prev)->var_width_external);
    }
  } else {
    if (x_7522->parent != nullptr) {
      return (x_7522->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6037(const auto &x_7543) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7544) {
    ListIter(x_7543->children, [&](const auto &x_7545) {
      if (IsSome(x_7545->meta->bb_2_bb_time_table)) {
        auto x_7546 = UnSome(x_7545->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7546, x_7545, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6034(const auto &x_7548) {
  if (gt(x_7548->var_left_over, 0.)) {
    return divide(x_7548->var_left_over, x_7548->var_flex_grow_sum);
  } else {
    return divide(x_7548->var_left_over, x_7548->var_flex_shrink_sum);
  }
}
Unit var_modified_x_6032(const auto &x_7569) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7570) {
    auto x_7722 = [&](const auto &x_7571) {
      if (IsSome(x_7571->meta->bb_2_bb_time_table)) {
        auto x_7572 = UnSome(x_7571->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7572, x_7571, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7722(x_7569);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6029(const auto &x_7574) {
  if ((x_7574->parent != nullptr) && gt((x_7574->parent)->var_left_over, 0.)) {
    return x_7574->var_flex_grow;
  } else {
    return x_7574->var_flex_shrink;
  }
}
Unit var_modified_x_6027(const auto &x_7587) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7588) {
    auto x_7723 = [&](const auto &x_7589) {
      if (IsSome(x_7589->meta->bb_2_bb_time_table)) {
        auto x_7590 = UnSome(x_7589->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7590, x_7589, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7723(x_7587);
    MakeUnit();
    ListIter(x_7587->children, [&](const auto &x_7592) {
      if (IsSome(x_7592->meta->bb_2_bb_time_table)) {
        auto x_7593 = UnSome(x_7592->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7593, x_7592, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_6024(const auto &x_7595) {
  if (x_7595->var_is_flex_row) {
    return minus(x_7595->var_box_width, (x_7595->last != nullptr) ? ((x_7595->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_7595->var_box_height, (x_7595->last != nullptr) ? ((x_7595->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_6022(const auto &x_7616) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7617) {
    auto x_7724 = [&](const auto &x_7618) {
      if (IsSome(x_7618->meta->bb_2_bb_time_table)) {
        auto x_7619 = UnSome(x_7618->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7619, x_7618, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7724(x_7616);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6019(const auto &x_7621) {
  if (x_7621->parent != nullptr) {
    return (x_7621->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_6017(const auto &x_7626) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_7627) {
    auto x_7725 = [&](const auto &x_7628) {
      if (IsSome(x_7628->meta->bb_2_bb_time_table)) {
        auto x_7629 = UnSome(x_7628->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_7629, x_7628, MakeRecomputeBB("bb_2"));
      } else {
        return MakeUnit();
      }
    };
    x_7725(x_7626);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_6014(const auto &x_7631) {
  if (x_7631->parent != nullptr) {
    return (x_7631->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_5930(const auto &x_6012) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6013) {
    WriteMetric();
    auto x_6015 = eval_expr_x_6014(x_6012);
    if (x_6012->has_var_box_width) {
      auto x_6016 = x_6012->var_box_width;
      if (!EqualValue(x_6016, x_6015)) {
        var_modified_x_6017(x_6012);
      }
    }
    x_6012->has_var_box_width = true;
    x_6012->var_box_width = Asdouble(x_6015);
    WriteMetric();
    auto x_6020 = eval_expr_x_6019(x_6012);
    if (x_6012->has_var_box_height) {
      auto x_6021 = x_6012->var_box_height;
      if (!EqualValue(x_6021, x_6020)) {
        var_modified_x_6022(x_6012);
      }
    }
    x_6012->has_var_box_height = true;
    x_6012->var_box_height = Asdouble(x_6020);
    WriteMetric();
    auto x_6025 = eval_expr_x_6024(x_6012);
    if (x_6012->has_var_left_over) {
      auto x_6026 = x_6012->var_left_over;
      if (!EqualValue(x_6026, x_6025)) {
        var_modified_x_6027(x_6012);
      }
    }
    x_6012->has_var_left_over = true;
    x_6012->var_left_over = Asdouble(x_6025);
    WriteMetric();
    auto x_6030 = eval_expr_x_6029(x_6012);
    if (x_6012->has_var_flex_amount) {
      auto x_6031 = x_6012->var_flex_amount;
      if (!EqualValue(x_6031, x_6030)) {
        var_modified_x_6032(x_6012);
      }
    }
    x_6012->has_var_flex_amount = true;
    x_6012->var_flex_amount = Asdouble(x_6030);
    WriteMetric();
    auto x_6035 = eval_expr_x_6034(x_6012);
    if (x_6012->has_var_flex_unit) {
      auto x_6036 = x_6012->var_flex_unit;
      if (!EqualValue(x_6036, x_6035)) {
        var_modified_x_6037(x_6012);
      }
    }
    x_6012->has_var_flex_unit = true;
    x_6012->var_flex_unit = Asdouble(x_6035);
    WriteMetric();
    auto x_6040 = eval_expr_x_6039(x_6012);
    if (x_6012->has_var_x) {
      auto x_6041 = x_6012->var_x;
      if (!EqualValue(x_6041, x_6040)) {
        var_modified_x_6042(x_6012);
      }
    }
    x_6012->has_var_x = true;
    x_6012->var_x = Asdouble(x_6040);
    WriteMetric();
    auto x_6045 = eval_expr_x_6044(x_6012);
    if (x_6012->has_var_width_internal) {
      auto x_6046 = x_6012->var_width_internal;
      if (!EqualValue(x_6046, x_6045)) {
        var_modified_x_6047(x_6012);
      }
    }
    x_6012->has_var_width_internal = true;
    x_6012->var_width_internal = Asdouble(x_6045);
    WriteMetric();
    auto x_6050 = eval_expr_x_6049(x_6012);
    if (x_6012->has_var_width_external) {
      auto x_6051 = x_6012->var_width_external;
      if (!EqualValue(x_6051, x_6050)) {
        var_modified_x_6052(x_6012);
      }
    }
    x_6012->has_var_width_external = true;
    x_6012->var_width_external = Asdouble(x_6050);
    WriteMetric();
    auto x_6055 = eval_expr_x_6054(x_6012);
    if (x_6012->has_var_y) {
      auto x_6056 = x_6012->var_y;
      if (!EqualValue(x_6056, x_6055)) {
        var_modified_x_6057(x_6012);
      }
    }
    x_6012->has_var_y = true;
    x_6012->var_y = Asdouble(x_6055);
    WriteMetric();
    auto x_6060 = eval_expr_x_6059(x_6012);
    if (x_6012->has_var_height_internal) {
      auto x_6061 = x_6012->var_height_internal;
      if (!EqualValue(x_6061, x_6060)) {
        var_modified_x_6062(x_6012);
      }
    }
    x_6012->has_var_height_internal = true;
    x_6012->var_height_internal = Asdouble(x_6060);
    WriteMetric();
    auto x_6065 = eval_expr_x_6064(x_6012);
    if (x_6012->has_var_height_external) {
      auto x_6066 = x_6012->var_height_external;
      if (!EqualValue(x_6066, x_6065)) {
        var_modified_x_6067(x_6012);
      }
    }
    x_6012->has_var_height_external = true;
    x_6012->var_height_external = Asdouble(x_6065);
    WriteMetric();
    auto x_6070 = eval_expr_x_6069(x_6012);
    if (x_6012->has_var_line_height) {
      auto x_6071 = x_6012->var_line_height;
      if (!EqualValue(x_6071, x_6070)) {
        var_modified_x_6072(x_6012);
      }
    }
    x_6012->has_var_line_height = true;
    x_6012->var_line_height = Asdouble(x_6070);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_5929(const auto &x_6074) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6075) {
    WriteMetric();
    auto x_6077 = eval_expr_x_6076(x_6074);
    if (x_6074->has_var_width_expr) {
      auto x_6078 = x_6074->var_width_expr;
      if (!EqualValue(x_6078, x_6077)) {
        var_modified_x_6079(x_6074);
      }
    }
    x_6074->has_var_width_expr = true;
    x_6074->var_width_expr = AsDEString(x_6077);
    WriteMetric();
    auto x_6082 = eval_expr_x_6081(x_6074);
    if (x_6074->has_var_is_default_case) {
      auto x_6083 = x_6074->var_is_default_case;
      if (!EqualValue(x_6083, x_6082)) {
        var_modified_x_6084(x_6074);
      }
    }
    x_6074->has_var_is_default_case = true;
    x_6074->var_is_default_case = Asbool(x_6082);
    WriteMetric();
    auto x_6087 = eval_expr_x_6086(x_6074);
    if (x_6074->has_var_intrinsic_width_is_width) {
      auto x_6088 = x_6074->var_intrinsic_width_is_width;
      if (!EqualValue(x_6088, x_6087)) {
        var_modified_x_6089(x_6074);
      }
    }
    x_6074->has_var_intrinsic_width_is_width = true;
    x_6074->var_intrinsic_width_is_width = Asbool(x_6087);
    WriteMetric();
    auto x_6092 = eval_expr_x_6091(x_6074);
    if (x_6074->has_var_children_intrinsic_width) {
      auto x_6093 = x_6074->var_children_intrinsic_width;
      if (!EqualValue(x_6093, x_6092)) {
        var_modified_x_6094(x_6074);
      }
    }
    x_6074->has_var_children_intrinsic_width = true;
    x_6074->var_children_intrinsic_width = Asdouble(x_6092);
    WriteMetric();
    auto x_6097 = eval_expr_x_6096(x_6074);
    if (x_6074->has_var_intrinsic_width_internal) {
      auto x_6098 = x_6074->var_intrinsic_width_internal;
      if (!EqualValue(x_6098, x_6097)) {
        var_modified_x_6099(x_6074);
      }
    }
    x_6074->has_var_intrinsic_width_internal = true;
    x_6074->var_intrinsic_width_internal = Asdouble(x_6097);
    WriteMetric();
    auto x_6102 = eval_expr_x_6101(x_6074);
    if (x_6074->has_var_intrinsic_width_external) {
      auto x_6103 = x_6074->var_intrinsic_width_external;
      if (!EqualValue(x_6103, x_6102)) {
        var_modified_x_6104(x_6074);
      }
    }
    x_6074->has_var_intrinsic_width_external = true;
    x_6074->var_intrinsic_width_external = Asdouble(x_6102);
    WriteMetric();
    auto x_6107 = eval_expr_x_6106(x_6074);
    if (x_6074->has_var_intrinsic_current_line_width) {
      auto x_6108 = x_6074->var_intrinsic_current_line_width;
      if (!EqualValue(x_6108, x_6107)) {
        var_modified_x_6109(x_6074);
      }
    }
    x_6074->has_var_intrinsic_current_line_width = true;
    x_6074->var_intrinsic_current_line_width = Asdouble(x_6107);
    WriteMetric();
    auto x_6112 = eval_expr_x_6111(x_6074);
    if (x_6074->has_var_intrinsic_width_max) {
      auto x_6113 = x_6074->var_intrinsic_width_max;
      if (!EqualValue(x_6113, x_6112)) {
        var_modified_x_6114(x_6074);
      }
    }
    x_6074->has_var_intrinsic_width_max = true;
    x_6074->var_intrinsic_width_max = Asdouble(x_6112);
    WriteMetric();
    auto x_6117 = eval_expr_x_6116(x_6074);
    if (x_6074->has_var_intrinsic_width_sum) {
      auto x_6118 = x_6074->var_intrinsic_width_sum;
      if (!EqualValue(x_6118, x_6117)) {
        var_modified_x_6119(x_6074);
      }
    }
    x_6074->has_var_intrinsic_width_sum = true;
    x_6074->var_intrinsic_width_sum = Asdouble(x_6117);
    WriteMetric();
    auto x_6122 = eval_expr_x_6121(x_6074);
    if (x_6074->has_var_children_intrinsic_height) {
      auto x_6123 = x_6074->var_children_intrinsic_height;
      if (!EqualValue(x_6123, x_6122)) {
        var_modified_x_6124(x_6074);
      }
    }
    x_6074->has_var_children_intrinsic_height = true;
    x_6074->var_children_intrinsic_height = Asdouble(x_6122);
    WriteMetric();
    auto x_6127 = eval_expr_x_6126(x_6074);
    if (x_6074->has_var_height_expr) {
      auto x_6128 = x_6074->var_height_expr;
      if (!EqualValue(x_6128, x_6127)) {
        var_modified_x_6129(x_6074);
      }
    }
    x_6074->has_var_height_expr = true;
    x_6074->var_height_expr = AsDEString(x_6127);
    WriteMetric();
    auto x_6132 = eval_expr_x_6131(x_6074);
    if (x_6074->has_var_intrinsic_height_is_height) {
      auto x_6133 = x_6074->var_intrinsic_height_is_height;
      if (!EqualValue(x_6133, x_6132)) {
        var_modified_x_6134(x_6074);
      }
    }
    x_6074->has_var_intrinsic_height_is_height = true;
    x_6074->var_intrinsic_height_is_height = Asbool(x_6132);
    WriteMetric();
    auto x_6137 = eval_expr_x_6136(x_6074);
    if (x_6074->has_var_intrinsic_height_internal) {
      auto x_6138 = x_6074->var_intrinsic_height_internal;
      if (!EqualValue(x_6138, x_6137)) {
        var_modified_x_6139(x_6074);
      }
    }
    x_6074->has_var_intrinsic_height_internal = true;
    x_6074->var_intrinsic_height_internal = Asdouble(x_6137);
    WriteMetric();
    auto x_6142 = eval_expr_x_6141(x_6074);
    if (x_6074->has_var_intrinsic_height_external) {
      auto x_6143 = x_6074->var_intrinsic_height_external;
      if (!EqualValue(x_6143, x_6142)) {
        var_modified_x_6144(x_6074);
      }
    }
    x_6074->has_var_intrinsic_height_external = true;
    x_6074->var_intrinsic_height_external = Asdouble(x_6142);
    WriteMetric();
    auto x_6147 = eval_expr_x_6146(x_6074);
    if (x_6074->has_var_intrinsic_height_sum) {
      auto x_6148 = x_6074->var_intrinsic_height_sum;
      if (!EqualValue(x_6148, x_6147)) {
        var_modified_x_6149(x_6074);
      }
    }
    x_6074->has_var_intrinsic_height_sum = true;
    x_6074->var_intrinsic_height_sum = Asdouble(x_6147);
    WriteMetric();
    auto x_6152 = eval_expr_x_6151(x_6074);
    if (x_6074->has_var_intrinsic_current_line_height) {
      auto x_6153 = x_6074->var_intrinsic_current_line_height;
      if (!EqualValue(x_6153, x_6152)) {
        var_modified_x_6154(x_6074);
      }
    }
    x_6074->has_var_intrinsic_current_line_height = true;
    x_6074->var_intrinsic_current_line_height = Asdouble(x_6152);
    WriteMetric();
    auto x_6157 = eval_expr_x_6156(x_6074);
    if (x_6074->has_var_finished_intrinsic_height_sum) {
      auto x_6158 = x_6074->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_6158, x_6157)) {
        var_modified_x_6159(x_6074);
      }
    }
    x_6074->has_var_finished_intrinsic_height_sum = true;
    x_6074->var_finished_intrinsic_height_sum = Asdouble(x_6157);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_5928(const auto &x_6161) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_6162) {
    WriteMetric();
    auto x_6164 = eval_expr_x_6163(x_6161);
    if (x_6161->has_var_display) {
      auto x_6165 = x_6161->var_display;
      if (!EqualValue(x_6165, x_6164)) {
        var_modified_x_6166(x_6161);
      }
    }
    x_6161->has_var_display = true;
    x_6161->var_display = AsDEString(x_6164);
    WriteMetric();
    auto x_6169 = eval_expr_x_6168(x_6161);
    if (x_6161->has_var_position) {
      auto x_6170 = x_6161->var_position;
      if (!EqualValue(x_6170, x_6169)) {
        var_modified_x_6171(x_6161);
      }
    }
    x_6161->has_var_position = true;
    x_6161->var_position = AsDEString(x_6169);
    WriteMetric();
    auto x_6174 = eval_expr_x_6173(x_6161);
    if (x_6161->has_var_flex_grow) {
      auto x_6175 = x_6161->var_flex_grow;
      if (!EqualValue(x_6175, x_6174)) {
        var_modified_x_6176(x_6161);
      }
    }
    x_6161->has_var_flex_grow = true;
    x_6161->var_flex_grow = Asdouble(x_6174);
    WriteMetric();
    auto x_6179 = eval_expr_x_6178(x_6161);
    if (x_6161->has_var_flex_shrink) {
      auto x_6180 = x_6161->var_flex_shrink;
      if (!EqualValue(x_6180, x_6179)) {
        var_modified_x_6181(x_6161);
      }
    }
    x_6161->has_var_flex_shrink = true;
    x_6161->var_flex_shrink = Asdouble(x_6179);
    WriteMetric();
    auto x_6184 = eval_expr_x_6183(x_6161);
    if (x_6161->has_var_flex_grow_sum) {
      auto x_6185 = x_6161->var_flex_grow_sum;
      if (!EqualValue(x_6185, x_6184)) {
        var_modified_x_6186(x_6161);
      }
    }
    x_6161->has_var_flex_grow_sum = true;
    x_6161->var_flex_grow_sum = Asdouble(x_6184);
    WriteMetric();
    auto x_6189 = eval_expr_x_6188(x_6161);
    if (x_6161->has_var_flex_shrink_sum) {
      auto x_6190 = x_6161->var_flex_shrink_sum;
      if (!EqualValue(x_6190, x_6189)) {
        var_modified_x_6191(x_6161);
      }
    }
    x_6161->has_var_flex_shrink_sum = true;
    x_6161->var_flex_shrink_sum = Asdouble(x_6189);
    WriteMetric();
    auto x_6194 = eval_expr_x_6193(x_6161);
    if (x_6161->has_var_flex_direction) {
      auto x_6195 = x_6161->var_flex_direction;
      if (!EqualValue(x_6195, x_6194)) {
        var_modified_x_6196(x_6161);
      }
    }
    x_6161->has_var_flex_direction = true;
    x_6161->var_flex_direction = AsDEString(x_6194);
    WriteMetric();
    auto x_6199 = eval_expr_x_6198(x_6161);
    if (x_6161->has_var_is_flex_row) {
      auto x_6200 = x_6161->var_is_flex_row;
      if (!EqualValue(x_6200, x_6199)) {
        var_modified_x_6201(x_6161);
      }
    }
    x_6161->has_var_is_flex_row = true;
    x_6161->var_is_flex_row = Asbool(x_6199);
    WriteMetric();
    auto x_6204 = eval_expr_x_6203(x_6161);
    if (x_6161->has_var_is_flex_column) {
      auto x_6205 = x_6161->var_is_flex_column;
      if (!EqualValue(x_6205, x_6204)) {
        var_modified_x_6206(x_6161);
      }
    }
    x_6161->has_var_is_flex_column = true;
    x_6161->var_is_flex_column = Asbool(x_6204);
    WriteMetric();
    auto x_6209 = eval_expr_x_6208(x_6161);
    if (x_6161->has_var_width_attr_expr) {
      auto x_6210 = x_6161->var_width_attr_expr;
      if (!EqualValue(x_6210, x_6209)) {
        var_modified_x_6211(x_6161);
      }
    }
    x_6161->has_var_width_attr_expr = true;
    x_6161->var_width_attr_expr = AsDEString(x_6209);
    WriteMetric();
    auto x_6214 = eval_expr_x_6213(x_6161);
    if (x_6161->has_var_has_width_attr) {
      auto x_6215 = x_6161->var_has_width_attr;
      if (!EqualValue(x_6215, x_6214)) {
        var_modified_x_6216(x_6161);
      }
    }
    x_6161->has_var_has_width_attr = true;
    x_6161->var_has_width_attr = Asbool(x_6214);
    WriteMetric();
    auto x_6219 = eval_expr_x_6218(x_6161);
    if (x_6161->has_var_height_attr_expr) {
      auto x_6220 = x_6161->var_height_attr_expr;
      if (!EqualValue(x_6220, x_6219)) {
        var_modified_x_6221(x_6161);
      }
    }
    x_6161->has_var_height_attr_expr = true;
    x_6161->var_height_attr_expr = AsDEString(x_6219);
    WriteMetric();
    auto x_6224 = eval_expr_x_6223(x_6161);
    if (x_6161->has_var_has_height_attr) {
      auto x_6225 = x_6161->var_has_height_attr;
      if (!EqualValue(x_6225, x_6224)) {
        var_modified_x_6226(x_6161);
      }
    }
    x_6161->has_var_has_height_attr = true;
    x_6161->var_has_height_attr = Asbool(x_6224);
    WriteMetric();
    auto x_6229 = eval_expr_x_6228(x_6161);
    if (x_6161->has_var_is_svg_block) {
      auto x_6230 = x_6161->var_is_svg_block;
      if (!EqualValue(x_6230, x_6229)) {
        var_modified_x_6231(x_6161);
      }
    }
    x_6161->has_var_is_svg_block = true;
    x_6161->var_is_svg_block = Asbool(x_6229);
    WriteMetric();
    auto x_6234 = eval_expr_x_6233(x_6161);
    if (x_6161->has_var_inside_svg) {
      auto x_6235 = x_6161->var_inside_svg;
      if (!EqualValue(x_6235, x_6234)) {
        var_modified_x_6236(x_6161);
      }
    }
    x_6161->has_var_inside_svg = true;
    x_6161->var_inside_svg = Asbool(x_6234);
    WriteMetric();
    auto x_6239 = eval_expr_x_6238(x_6161);
    if (x_6161->has_var_disabled) {
      auto x_6240 = x_6161->var_disabled;
      if (!EqualValue(x_6240, x_6239)) {
        var_modified_x_6241(x_6161);
      }
    }
    x_6161->has_var_disabled = true;
    x_6161->var_disabled = Asbool(x_6239);
    WriteMetric();
    auto x_6244 = eval_expr_x_6243(x_6161);
    if (x_6161->has_var_visible) {
      auto x_6245 = x_6161->var_visible;
      if (!EqualValue(x_6245, x_6244)) {
        var_modified_x_6246(x_6161);
      }
    }
    x_6161->has_var_visible = true;
    x_6161->var_visible = Asbool(x_6244);
    WriteMetric();
    auto x_6249 = eval_expr_x_6248(x_6161);
    if (x_6161->has_var_line_break) {
      auto x_6250 = x_6161->var_line_break;
      if (!EqualValue(x_6250, x_6249)) {
        var_modified_x_6251(x_6161);
      }
    }
    x_6161->has_var_line_break = true;
    x_6161->var_line_break = Asbool(x_6249);
    return MakeUnit();
  })));
}
Unit x_5657(const auto &x_5658, const auto &x_5659, const auto &x_5660) {
  auto x_5661 = ListHeadExn(x_5658);
  auto x_5662 = ListTailExn(x_5658);
  if (ListIsEmpty(x_5662)) {
    auto x_5663 = ListSplitN(x_5659->children, x_5661);
    OutputChangeMetric(IntAdd(layout_size_x_5616(ListNthExn(x_5659->children, x_5661)), layout_size_x_5616(x_5660)));
    x_5659->children = ListAppend(Zro(x_5663), Cons(x_5660, ListTailExn(Fst(x_5663))));
    return MakeUnit();
  } else {
    return x_5657(x_5662, ListNthExn(x_5659->children, x_5661), x_5660);
  }
}
Unit replace_layout_node_x_5656(const auto &x_5658, const auto &x_5659, const auto &x_5660) {
  return x_5657(x_5658, x_5659, x_5660);
}
Unit x_5664(const auto &x_5665, const auto &x_5666, const auto &x_5667) {
  auto x_5668 = ListHeadExn(x_5665);
  auto x_5669 = ListTailExn(x_5665);
  if (ListIsEmpty(x_5669)) {
    OutputChangeMetric(layout_size_x_5616(x_5667));
    auto x_5670 = ListSplitN(x_5666->children, x_5668);
    x_5666->children = ListAppend(Zro(x_5670), Cons(x_5667, Fst(x_5670)));
    return MakeUnit();
  } else {
    return x_5664(x_5669, ListNthExn(x_5666->children, x_5668), x_5667);
  }
}
Unit add_layout_node_x_5654(const auto &x_5665, const auto &x_5666, const auto &x_5667) {
  return x_5664(x_5665, x_5666, x_5667);
}
Unit x_5671(const auto &x_5672, const auto &x_5673, const auto &x_5674) {
  auto x_5675 = ListHeadExn(x_5672);
  auto x_5676 = ListTailExn(x_5672);
  if (ListIsEmpty(x_5676)) {
    OutputChangeMetric(layout_size_x_5616(ListNthExn(x_5673->children, x_5675)));
    auto x_5677 = ListSplitN(x_5673->children, x_5675);
    x_5673->children = ListAppend(Zro(x_5677), ListTailExn(Fst(x_5677)));
    return MakeUnit();
  } else {
    return x_5671(x_5676, ListNthExn(x_5673->children, x_5675), x_5674);
  }
}
Unit remove_layout_node_x_5652(const auto &x_5672, const auto &x_5673, const auto &x_5674) {
  return x_5671(x_5672, x_5673, x_5674);
}
Unit x_5678(const auto &x_5679, const auto &x_5680, const auto &x_5681) {
  return ListMatch(
      x_5679,
      [&](const auto &x_5684) {
        auto x_5685 = Zro(x_5681);
        auto x_5686 = Zro(x_5685);
        auto x_5687 = Fst(x_5685);
        auto x_5688 = Fst(x_5681);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_7726 = x_5686;
        if (x_7726 == "attributes") {
          std::string x_7727 = x_5687;
          if (x_7727 == "width") {
            WriteMetric();
            x_5680->has_attr_width = true;
            x_5680->attr_width = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_1_bb_time_table)) {
              auto x_5689 = UnSome(x_5680->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5689, x_5680, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7727 == "image_height") {
            WriteMetric();
            x_5680->has_attr_image_height = true;
            x_5680->attr_image_height = Asint64_t(x_5688);
            if (IsSome(x_5680->meta->bb_0_bb_time_table)) {
              auto x_5691 = UnSome(x_5680->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5691, x_5680, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7727 == "image_width") {
            WriteMetric();
            x_5680->has_attr_image_width = true;
            x_5680->attr_image_width = Asint64_t(x_5688);
            if (IsSome(x_5680->meta->bb_0_bb_time_table)) {
              auto x_5693 = UnSome(x_5680->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5693, x_5680, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7727 == "height") {
            WriteMetric();
            x_5680->has_attr_height = true;
            x_5680->attr_height = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_1_bb_time_table)) {
              auto x_5695 = UnSome(x_5680->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5695, x_5680, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7727 == "viewBox") {
            WriteMetric();
            x_5680->has_attr_viewBox = true;
            x_5680->attr_viewBox = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_0_bb_time_table)) {
              auto x_5697 = UnSome(x_5680->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5697, x_5680, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7726 == "properties") {
          std::string x_7728 = x_5687;
          if (x_7728 == "width") {
            WriteMetric();
            x_5680->has_prop_width = true;
            x_5680->prop_width = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_0_bb_time_table)) {
              auto x_5699 = UnSome(x_5680->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5699, x_5680, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7728 == "flex-grow") {
            WriteMetric();
            x_5680->has_prop_flex_grow = true;
            x_5680->prop_flex_grow = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_1_bb_time_table)) {
              auto x_5701 = UnSome(x_5680->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5701, x_5680, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7728 == "height") {
            WriteMetric();
            x_5680->has_prop_height = true;
            x_5680->prop_height = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_0_bb_time_table)) {
              auto x_5703 = UnSome(x_5680->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5703, x_5680, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7728 == "display") {
            WriteMetric();
            x_5680->has_prop_display = true;
            x_5680->prop_display = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_1_bb_time_table)) {
              auto x_5705 = UnSome(x_5680->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5705, x_5680, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7728 == "position") {
            WriteMetric();
            x_5680->has_prop_position = true;
            x_5680->prop_position = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_1_bb_time_table)) {
              auto x_5707 = UnSome(x_5680->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5707, x_5680, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7728 == "flex-shrink") {
            WriteMetric();
            x_5680->has_prop_flex_shrink = true;
            x_5680->prop_flex_shrink = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_1_bb_time_table)) {
              auto x_5709 = UnSome(x_5680->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5709, x_5680, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7728 == "flex-direction") {
            WriteMetric();
            x_5680->has_prop_flex_direction = true;
            x_5680->prop_flex_direction = AsDEString(x_5688);
            if (IsSome(x_5680->meta->bb_1_bb_time_table)) {
              auto x_5711 = UnSome(x_5680->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5711, x_5680, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_5682, const auto &x_5683) {
        return x_5678(x_5683, ListNthExn(x_5680->children, x_5682), x_5681);
      });
}
Unit insert_value_x_5650(const auto &x_5679, const auto &x_5680, const auto &x_5681) {
  return x_5678(x_5679, x_5680, x_5681);
}
Unit x_5713(const auto &x_5714, const auto &x_5715, const auto &x_5716) {
  return ListMatch(
      x_5714,
      [&](const auto &x_5719) {
        auto x_5720 = Zro(x_5716);
        auto x_5721 = Fst(x_5716);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_7729 = x_5720;
        if (x_7729 == "attributes") {
          std::string x_7730 = x_5721;
          if (x_7730 == "width") {
            WriteMetric();
            x_5715->has_attr_width = false;
            if (IsSome(x_5715->meta->bb_1_bb_time_table)) {
              auto x_5722 = UnSome(x_5715->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5722, x_5715, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7730 == "image_height") {
            WriteMetric();
            x_5715->has_attr_image_height = false;
            if (IsSome(x_5715->meta->bb_0_bb_time_table)) {
              auto x_5724 = UnSome(x_5715->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5724, x_5715, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7730 == "image_width") {
            WriteMetric();
            x_5715->has_attr_image_width = false;
            if (IsSome(x_5715->meta->bb_0_bb_time_table)) {
              auto x_5726 = UnSome(x_5715->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5726, x_5715, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7730 == "height") {
            WriteMetric();
            x_5715->has_attr_height = false;
            if (IsSome(x_5715->meta->bb_1_bb_time_table)) {
              auto x_5728 = UnSome(x_5715->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5728, x_5715, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7730 == "viewBox") {
            WriteMetric();
            x_5715->has_attr_viewBox = false;
            if (IsSome(x_5715->meta->bb_0_bb_time_table)) {
              auto x_5730 = UnSome(x_5715->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5730, x_5715, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7729 == "properties") {
          std::string x_7731 = x_5721;
          if (x_7731 == "width") {
            WriteMetric();
            x_5715->has_prop_width = false;
            if (IsSome(x_5715->meta->bb_0_bb_time_table)) {
              auto x_5732 = UnSome(x_5715->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5732, x_5715, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7731 == "flex-grow") {
            WriteMetric();
            x_5715->has_prop_flex_grow = false;
            if (IsSome(x_5715->meta->bb_1_bb_time_table)) {
              auto x_5734 = UnSome(x_5715->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5734, x_5715, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7731 == "height") {
            WriteMetric();
            x_5715->has_prop_height = false;
            if (IsSome(x_5715->meta->bb_0_bb_time_table)) {
              auto x_5736 = UnSome(x_5715->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5736, x_5715, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7731 == "display") {
            WriteMetric();
            x_5715->has_prop_display = false;
            if (IsSome(x_5715->meta->bb_1_bb_time_table)) {
              auto x_5738 = UnSome(x_5715->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5738, x_5715, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7731 == "position") {
            WriteMetric();
            x_5715->has_prop_position = false;
            if (IsSome(x_5715->meta->bb_1_bb_time_table)) {
              auto x_5740 = UnSome(x_5715->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5740, x_5715, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7731 == "flex-shrink") {
            WriteMetric();
            x_5715->has_prop_flex_shrink = false;
            if (IsSome(x_5715->meta->bb_1_bb_time_table)) {
              auto x_5742 = UnSome(x_5715->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5742, x_5715, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7731 == "flex-direction") {
            WriteMetric();
            x_5715->has_prop_flex_direction = false;
            if (IsSome(x_5715->meta->bb_1_bb_time_table)) {
              auto x_5744 = UnSome(x_5715->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5744, x_5715, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_5717, const auto &x_5718) {
        return x_5713(x_5718, ListNthExn(x_5715->children, x_5717), x_5716);
      });
}
Unit delete_value_x_5648(const auto &x_5714, const auto &x_5715, const auto &x_5716) {
  return x_5713(x_5714, x_5715, x_5716);
}
Unit x_5746(const auto &x_5747, const auto &x_5748, const auto &x_5749) {
  return ListMatch(
      x_5747,
      [&](const auto &x_5752) {
        auto x_5753 = Zro(x_5749);
        auto x_5754 = Zro(x_5753);
        auto x_5755 = Fst(x_5753);
        auto x_5756 = Fst(x_5749);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_7732 = x_5754;
        if (x_7732 == "attributes") {
          std::string x_7733 = x_5755;
          if (x_7733 == "width") {
            WriteMetric();
            x_5748->has_attr_width = false;
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5757 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5757, x_5748, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_5748->has_attr_width = true;
            x_5748->attr_width = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5759 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5759, x_5748, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7733 == "image_height") {
            WriteMetric();
            x_5748->has_attr_image_height = false;
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5761 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5761, x_5748, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_5748->has_attr_image_height = true;
            x_5748->attr_image_height = Asint64_t(x_5756);
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5763 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5763, x_5748, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7733 == "image_width") {
            WriteMetric();
            x_5748->has_attr_image_width = false;
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5765 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5765, x_5748, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_5748->has_attr_image_width = true;
            x_5748->attr_image_width = Asint64_t(x_5756);
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5767 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5767, x_5748, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7733 == "height") {
            WriteMetric();
            x_5748->has_attr_height = false;
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5769 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5769, x_5748, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_5748->has_attr_height = true;
            x_5748->attr_height = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5771 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5771, x_5748, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7733 == "viewBox") {
            WriteMetric();
            x_5748->has_attr_viewBox = false;
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5773 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5773, x_5748, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_5748->has_attr_viewBox = true;
            x_5748->attr_viewBox = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5775 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5775, x_5748, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7732 == "properties") {
          std::string x_7734 = x_5755;
          if (x_7734 == "width") {
            WriteMetric();
            x_5748->has_prop_width = false;
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5777 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5777, x_5748, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_5748->has_prop_width = true;
            x_5748->prop_width = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5779 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5779, x_5748, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7734 == "flex-grow") {
            WriteMetric();
            x_5748->has_prop_flex_grow = false;
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5781 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5781, x_5748, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_5748->has_prop_flex_grow = true;
            x_5748->prop_flex_grow = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5783 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5783, x_5748, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7734 == "height") {
            WriteMetric();
            x_5748->has_prop_height = false;
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5785 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5785, x_5748, MakeRecomputeBB("bb_0"));
            }
            WriteMetric();
            x_5748->has_prop_height = true;
            x_5748->prop_height = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_0_bb_time_table)) {
              auto x_5787 = UnSome(x_5748->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5787, x_5748, MakeRecomputeBB("bb_0"));
            }
            return MakeUnit();
          } else if (x_7734 == "display") {
            WriteMetric();
            x_5748->has_prop_display = false;
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5789 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5789, x_5748, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_5748->has_prop_display = true;
            x_5748->prop_display = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5791 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5791, x_5748, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7734 == "position") {
            WriteMetric();
            x_5748->has_prop_position = false;
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5793 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5793, x_5748, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_5748->has_prop_position = true;
            x_5748->prop_position = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5795 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5795, x_5748, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7734 == "flex-shrink") {
            WriteMetric();
            x_5748->has_prop_flex_shrink = false;
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5797 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5797, x_5748, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_5748->has_prop_flex_shrink = true;
            x_5748->prop_flex_shrink = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5799 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5799, x_5748, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else if (x_7734 == "flex-direction") {
            WriteMetric();
            x_5748->has_prop_flex_direction = false;
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5801 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5801, x_5748, MakeRecomputeBB("bb_1"));
            }
            WriteMetric();
            x_5748->has_prop_flex_direction = true;
            x_5748->prop_flex_direction = AsDEString(x_5756);
            if (IsSome(x_5748->meta->bb_1_bb_time_table)) {
              auto x_5803 = UnSome(x_5748->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_5803, x_5748, MakeRecomputeBB("bb_1"));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_5750, const auto &x_5751) {
        return x_5746(x_5751, ListNthExn(x_5748->children, x_5750), x_5749);
      });
}
Unit replace_value_x_5646(const auto &x_5747, const auto &x_5748, const auto &x_5749) {
  return x_5746(x_5747, x_5748, x_5749);
}
Unit x_5805(const auto &x_5806, const auto &x_5807, const auto &x_5808) {
  auto x_5809 = ListHeadExn(x_5806);
  auto x_5810 = ListTailExn(x_5806);
  if (ListIsEmpty(x_5810)) {
    InputChangeMetric(IntAdd(node_size_x_5617(ListNthExn(x_5807->children, x_5809)), node_size_x_5617(x_5808)));
    auto x_5811 = ListSplitN(x_5807->children, x_5809);
    auto x_5812 = Zro(x_5811);
    auto x_5813 = Fst(x_5811);
    auto x_5814 = ListHeadExn(x_5813);
    auto x_5815 = ListTailExn(x_5813);
    x_5807->children = ListAppend(x_5812, x_5815);
    x_5814->meta->alive = false;
    OptionMatch(
        x_5814->prev, [&](const auto &x_5817) { return MakeUnit(); },
        [&](const auto &x_5816) {
          x_5816->next = ToPath(x_5814->next);
          return MakeUnit();
        });
    OptionMatch(
        x_5814->next, [&](const auto &x_5819) { return MakeUnit(); },
        [&](const auto &x_5818) {
          x_5818->prev = ToPath(x_5814->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_5812)) {
      x_5807->first = ToPath(ListHead(x_5815));
    }
    if (ListIsEmpty(x_5815)) {
      x_5807->last = ToPath(ListLast(x_5812));
    }
    OptionMatch(
        x_5814->next, [&](const auto &x_5823) { return MakeUnit(); },
        [&](const auto &x_5820) {
          if (IsSome(x_5820->meta->bb_1_bb_time_table)) {
            auto x_5821 = UnSome(x_5820->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5821, x_5820, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_5807->children)) {
      if (IsSome(x_5807->meta->bb_0_bb_time_table)) {
        auto x_5824 = UnSome(x_5807->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5824, x_5807, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_5815)) {
      if (IsSome(x_5807->meta->bb_0_bb_time_table)) {
        auto x_5826 = UnSome(x_5807->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5826, x_5807, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_5814->next, [&](const auto &x_5831) { return MakeUnit(); },
        [&](const auto &x_5828) {
          if (IsSome(x_5828->meta->bb_0_bb_time_table)) {
            auto x_5829 = UnSome(x_5828->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5829, x_5828, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_5807->children)) {
      if (IsSome(x_5807->meta->bb_2_bb_time_table)) {
        auto x_5832 = UnSome(x_5807->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5832, x_5807, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_5815)) {
      if (IsSome(x_5807->meta->bb_2_bb_time_table)) {
        auto x_5834 = UnSome(x_5807->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5834, x_5807, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_5814->next, [&](const auto &x_5839) { return MakeUnit(); },
        [&](const auto &x_5836) {
          if (IsSome(x_5836->meta->bb_2_bb_time_table)) {
            auto x_5837 = UnSome(x_5836->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5837, x_5836, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_5840 = ListSplitN(x_5807->children, x_5809);
    auto x_5841 = Zro(x_5840);
    auto x_5842 = Fst(x_5840);
    x_5807->children = ListAppend(x_5841, Cons(x_5808, x_5842));
    if (ListIsEmpty(x_5841)) {
      x_5807->first = x_5808.get();
    }
    if (ListIsEmpty(x_5842)) {
      x_5807->last = x_5808.get();
    }
    OptionMatch(
        ListLast(x_5841),
        [&](const auto &x_5844) {
          x_5808->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_5843) {
          x_5808->prev = x_5843.get();
          x_5843->next = x_5808.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_5842),
        [&](const auto &x_5846) {
          x_5808->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_5845) {
          x_5808->next = x_5845.get();
          x_5845->prev = x_5808.get();
          return MakeUnit();
        });
    x_5808->parent = x_5807.get();
    auto x_5847 = (x_5808->parent);
    if (IsSome(x_5847->meta->pass_0_proc_time_table)) {
      auto x_5850 = OptionMatch(
          x_5808->prev, [&](const auto &x_5849) { return NextTotalOrder(UnSome(x_5847->meta->bb_1_bb_time_table)); },
          [&](const auto &x_5848) { return NextTotalOrder(UnSome(x_5848->meta->pass_0_proc_time_table)); });
      x_5808->meta->pass_0_proc_time_table = x_5850;
      MetaWriteMetric();
      QueueForcePush(x_5850, x_5808, MakeRecomputeProc("pass_0"));
    }
    OptionMatch(
        x_5808->next, [&](const auto &x_5855) { return MakeUnit(); },
        [&](const auto &x_5852) {
          if (IsSome(x_5852->meta->bb_1_bb_time_table)) {
            auto x_5853 = UnSome(x_5852->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5853, x_5852, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_5807->children)) {
      if (IsSome(x_5807->meta->bb_0_bb_time_table)) {
        auto x_5856 = UnSome(x_5807->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5856, x_5807, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_5842)) {
      if (IsSome(x_5807->meta->bb_0_bb_time_table)) {
        auto x_5858 = UnSome(x_5807->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5858, x_5807, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_5808->next, [&](const auto &x_5863) { return MakeUnit(); },
        [&](const auto &x_5860) {
          if (IsSome(x_5860->meta->bb_0_bb_time_table)) {
            auto x_5861 = UnSome(x_5860->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5861, x_5860, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    auto x_5864 = (x_5808->parent);
    if (IsSome(x_5864->meta->pass_1_proc_time_table)) {
      auto x_5867 = OptionMatch(
          x_5808->prev, [&](const auto &x_5866) { return NextTotalOrder(UnSome(x_5864->meta->bb_2_bb_time_table)); },
          [&](const auto &x_5865) { return NextTotalOrder(UnSome(x_5865->meta->pass_1_proc_time_table)); });
      x_5808->meta->pass_1_proc_time_table = x_5867;
      MetaWriteMetric();
      QueueForcePush(x_5867, x_5808, MakeRecomputeProc("pass_1"));
    }
    if (ListIsSingleton(x_5807->children)) {
      if (IsSome(x_5807->meta->bb_2_bb_time_table)) {
        auto x_5869 = UnSome(x_5807->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5869, x_5807, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_5842)) {
      if (IsSome(x_5807->meta->bb_2_bb_time_table)) {
        auto x_5871 = UnSome(x_5807->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5871, x_5807, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_5808->next, [&](const auto &x_5876) { return MakeUnit(); },
        [&](const auto &x_5873) {
          if (IsSome(x_5873->meta->bb_2_bb_time_table)) {
            auto x_5874 = UnSome(x_5873->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5874, x_5873, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_5805(x_5810, ListNthExn(x_5807->children, x_5809), x_5808);
  }
}
Unit replace_node_x_5644(const auto &x_5806, const auto &x_5807, const auto &x_5808) {
  return x_5805(x_5806, x_5807, x_5808);
}
Unit x_5877(const auto &x_5878) {
  ListIter2(x_5878->children, [&](const auto &x_5879, const auto &x_5880) {
    x_5879->parent = x_5878.get();
    x_5880->parent = x_5878.get();
    x_5879->next = x_5880.get();
    x_5880->prev = x_5879.get();
    x_5877(x_5879);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_5878->children),
      [&](const auto &x_5882) {
        x_5878->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_5881) {
        x_5878->first = x_5881.get();
        x_5881->parent = x_5878.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_5878->children),
      [&](const auto &x_5884) {
        x_5878->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_5883) {
        x_5878->last = x_5883.get();
        x_5883->parent = x_5878.get();
        x_5877(x_5883);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_5642(const auto &x_5878) { return x_5877(x_5878); }
Unit x_5885(const auto &x_5886, const auto &x_5887, const auto &x_5888) {
  auto x_5889 = ListHeadExn(x_5886);
  auto x_5890 = ListTailExn(x_5886);
  if (ListIsEmpty(x_5890)) {
    InputChangeMetric(node_size_x_5617(ListNthExn(x_5887->children, x_5889)));
    auto x_5891 = ListSplitN(x_5887->children, x_5889);
    auto x_5892 = Zro(x_5891);
    auto x_5893 = Fst(x_5891);
    auto x_5894 = ListHeadExn(x_5893);
    auto x_5895 = ListTailExn(x_5893);
    x_5887->children = ListAppend(x_5892, x_5895);
    x_5894->meta->alive = false;
    OptionMatch(
        x_5894->prev, [&](const auto &x_5897) { return MakeUnit(); },
        [&](const auto &x_5896) {
          x_5896->next = ToPath(x_5894->next);
          return MakeUnit();
        });
    OptionMatch(
        x_5894->next, [&](const auto &x_5899) { return MakeUnit(); },
        [&](const auto &x_5898) {
          x_5898->prev = ToPath(x_5894->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_5892)) {
      x_5887->first = ToPath(ListHead(x_5895));
    }
    if (ListIsEmpty(x_5895)) {
      x_5887->last = ToPath(ListLast(x_5892));
    }
    OptionMatch(
        x_5894->next, [&](const auto &x_5903) { return MakeUnit(); },
        [&](const auto &x_5900) {
          if (IsSome(x_5900->meta->bb_1_bb_time_table)) {
            auto x_5901 = UnSome(x_5900->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5901, x_5900, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_5887->children)) {
      if (IsSome(x_5887->meta->bb_0_bb_time_table)) {
        auto x_5904 = UnSome(x_5887->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5904, x_5887, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_5895)) {
      if (IsSome(x_5887->meta->bb_0_bb_time_table)) {
        auto x_5906 = UnSome(x_5887->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5906, x_5887, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_5894->next, [&](const auto &x_5911) { return MakeUnit(); },
        [&](const auto &x_5908) {
          if (IsSome(x_5908->meta->bb_0_bb_time_table)) {
            auto x_5909 = UnSome(x_5908->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5909, x_5908, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_5887->children)) {
      if (IsSome(x_5887->meta->bb_2_bb_time_table)) {
        auto x_5912 = UnSome(x_5887->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5912, x_5887, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_5895)) {
      if (IsSome(x_5887->meta->bb_2_bb_time_table)) {
        auto x_5914 = UnSome(x_5887->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5914, x_5887, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_5894->next, [&](const auto &x_5919) { return MakeUnit(); },
        [&](const auto &x_5916) {
          if (IsSome(x_5916->meta->bb_2_bb_time_table)) {
            auto x_5917 = UnSome(x_5916->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5917, x_5916, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_5885(x_5890, ListNthExn(x_5887->children, x_5889), x_5888);
  }
}
Unit remove_node_x_5640(const auto &x_5886, const auto &x_5887, const auto &x_5888) {
  return x_5885(x_5886, x_5887, x_5888);
}
Unit x_5920(const auto &x_5921) {
  if (!QueueIsEmpty()) {
    auto x_5922 = QueuePeek();
    auto x_5923 = Zro(x_5922);
    auto x_5924 = Fst(x_5922);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_5924.n->meta->alive) {
      RFMatch(
          x_5924.rf,
          [&](const auto &x_5927) {
            std::string x_7735 = x_5927;
            if (x_7735 == "bb_1") {
              return eval_stmts_x_5928(x_5924.n);
            } else if (x_7735 == "bb_0") {
              return eval_stmts_x_5929(x_5924.n);
            } else if (x_7735 == "bb_2") {
              return eval_stmts_x_5930(x_5924.n);
            } else {
              Panic();
            }
          },
          [&](const auto &x_5925) {
            auto x_5926 = ReadRef(current_time);
            WriteRef(current_time, x_5923);
            [&]() {
              std::string x_7736 = x_5925;
              if (x_7736 == "pass_0") {
                eval_stmts_x_5629(x_5924.n);
                x_5924.n->meta->pass_0_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else if (x_7736 == "pass_1") {
                eval_stmts_x_5630(x_5924.n);
                x_5924.n->meta->pass_1_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else {
                Panic();
              }
            }();
            WriteRef(current_time, x_5926);
            return MakeUnit();
          });
    }
    auto x_5931 = Zro(QueuePop());
    x_5920(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_5638(const auto &x_5921) { return x_5920(x_5921); }
Unit x_5932(const auto &x_5933, const auto &x_5934, const auto &x_5935) {
  auto x_5936 = ListHeadExn(x_5933);
  auto x_5937 = ListTailExn(x_5933);
  if (ListIsEmpty(x_5937)) {
    InputChangeMetric(node_size_x_5617(x_5935));
    auto x_5938 = ListSplitN(x_5934->children, x_5936);
    auto x_5939 = Zro(x_5938);
    auto x_5940 = Fst(x_5938);
    x_5934->children = ListAppend(x_5939, Cons(x_5935, x_5940));
    if (ListIsEmpty(x_5939)) {
      x_5934->first = x_5935.get();
    }
    if (ListIsEmpty(x_5940)) {
      x_5934->last = x_5935.get();
    }
    OptionMatch(
        ListLast(x_5939),
        [&](const auto &x_5942) {
          x_5935->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_5941) {
          x_5935->prev = x_5941.get();
          x_5941->next = x_5935.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_5940),
        [&](const auto &x_5944) {
          x_5935->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_5943) {
          x_5935->next = x_5943.get();
          x_5943->prev = x_5935.get();
          return MakeUnit();
        });
    x_5935->parent = x_5934.get();
    auto x_5945 = (x_5935->parent);
    if (IsSome(x_5945->meta->pass_0_proc_time_table)) {
      auto x_5948 = OptionMatch(
          x_5935->prev, [&](const auto &x_5947) { return NextTotalOrder(UnSome(x_5945->meta->bb_1_bb_time_table)); },
          [&](const auto &x_5946) { return NextTotalOrder(UnSome(x_5946->meta->pass_0_proc_time_table)); });
      x_5935->meta->pass_0_proc_time_table = x_5948;
      MetaWriteMetric();
      QueueForcePush(x_5948, x_5935, MakeRecomputeProc("pass_0"));
    }
    OptionMatch(
        x_5935->next, [&](const auto &x_5953) { return MakeUnit(); },
        [&](const auto &x_5950) {
          if (IsSome(x_5950->meta->bb_1_bb_time_table)) {
            auto x_5951 = UnSome(x_5950->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5951, x_5950, MakeRecomputeBB("bb_1"));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_5934->children)) {
      if (IsSome(x_5934->meta->bb_0_bb_time_table)) {
        auto x_5954 = UnSome(x_5934->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5954, x_5934, MakeRecomputeBB("bb_0"));
      }
    }
    if (ListIsEmpty(x_5940)) {
      if (IsSome(x_5934->meta->bb_0_bb_time_table)) {
        auto x_5956 = UnSome(x_5934->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5956, x_5934, MakeRecomputeBB("bb_0"));
      }
    }
    OptionMatch(
        x_5935->next, [&](const auto &x_5961) { return MakeUnit(); },
        [&](const auto &x_5958) {
          if (IsSome(x_5958->meta->bb_0_bb_time_table)) {
            auto x_5959 = UnSome(x_5958->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5959, x_5958, MakeRecomputeBB("bb_0"));
          } else {
            return MakeUnit();
          }
        });
    auto x_5962 = (x_5935->parent);
    if (IsSome(x_5962->meta->pass_1_proc_time_table)) {
      auto x_5965 = OptionMatch(
          x_5935->prev, [&](const auto &x_5964) { return NextTotalOrder(UnSome(x_5962->meta->bb_2_bb_time_table)); },
          [&](const auto &x_5963) { return NextTotalOrder(UnSome(x_5963->meta->pass_1_proc_time_table)); });
      x_5935->meta->pass_1_proc_time_table = x_5965;
      MetaWriteMetric();
      QueueForcePush(x_5965, x_5935, MakeRecomputeProc("pass_1"));
    }
    if (ListIsSingleton(x_5934->children)) {
      if (IsSome(x_5934->meta->bb_2_bb_time_table)) {
        auto x_5967 = UnSome(x_5934->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5967, x_5934, MakeRecomputeBB("bb_2"));
      }
    }
    if (ListIsEmpty(x_5940)) {
      if (IsSome(x_5934->meta->bb_2_bb_time_table)) {
        auto x_5969 = UnSome(x_5934->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_5969, x_5934, MakeRecomputeBB("bb_2"));
      }
    }
    OptionMatch(
        x_5935->next, [&](const auto &x_5974) { return MakeUnit(); },
        [&](const auto &x_5971) {
          if (IsSome(x_5971->meta->bb_2_bb_time_table)) {
            auto x_5972 = UnSome(x_5971->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_5972, x_5971, MakeRecomputeBB("bb_2"));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_5932(x_5937, ListNthExn(x_5934->children, x_5936), x_5935);
  }
}
Unit add_node_x_5636(const auto &x_5933, const auto &x_5934, const auto &x_5935) {
  return x_5932(x_5933, x_5934, x_5935);
}
Unit x_5975(const auto &x_5976) {
  ListIter2(x_5976->children, [&](const auto &x_5977, const auto &x_5978) {
    x_5977->parent = x_5976.get();
    x_5978->parent = x_5976.get();
    x_5977->next = x_5978.get();
    x_5978->prev = x_5977.get();
    x_5975(x_5977);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_5976->children),
      [&](const auto &x_5980) {
        x_5976->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_5979) {
        x_5976->first = x_5979.get();
        x_5979->parent = x_5976.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_5976->children),
      [&](const auto &x_5982) {
        x_5976->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_5981) {
        x_5976->last = x_5981.get();
        x_5981->parent = x_5976.get();
        x_5975(x_5981);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_5634(const auto &x_5976) { return x_5975(x_5976); }
Unit eval_stmts_x_5630(const auto &x_5983) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_5984) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    x_5983->meta->bb_2_bb_time_table = ReadRef(current_time);
    eval_stmts_x_5930(x_5983);
    ListIter(x_5983->children, [&](const auto &x_5985) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_5630(x_5985);
      x_5985->meta->pass_1_proc_time_table = ReadRef(current_time);
      return MakeUnit();
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_5629(const auto &x_5986) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_5987) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    x_5986->meta->bb_1_bb_time_table = ReadRef(current_time);
    eval_stmts_x_5928(x_5986);
    ListIter(x_5986->children, [&](const auto &x_5988) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_5629(x_5988);
      x_5988->meta->pass_0_proc_time_table = ReadRef(current_time);
      return MakeUnit();
    });
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    x_5986->meta->bb_0_bb_time_table = ReadRef(current_time);
    eval_stmts_x_5929(x_5986);
    return MakeUnit();
  })));
}
Unit x_5989(const auto &x_5990) {
  ListIter2(x_5990->children, [&](const auto &x_5991, const auto &x_5992) {
    x_5991->parent = x_5990.get();
    x_5992->parent = x_5990.get();
    x_5991->next = x_5992.get();
    x_5992->prev = x_5991.get();
    x_5989(x_5991);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_5990->children),
      [&](const auto &x_5994) {
        x_5990->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_5993) {
        x_5990->first = x_5993.get();
        x_5993->parent = x_5990.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_5990->children),
      [&](const auto &x_5996) {
        x_5990->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_5995) {
        x_5990->last = x_5995.get();
        x_5995->parent = x_5990.get();
        x_5989(x_5995);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_5626(const auto &x_5990) { return x_5989(x_5990); }
int64_t x_5997(const auto &x_5998) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_5998->children, [&](const auto &x_5999) { return x_5997(x_5999); }));
}
int64_t node_size_x_5617(const auto &x_5998) { return x_5997(x_5998); }
int64_t x_6000(const auto &x_6001) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6001->children, [&](const auto &x_6002) { return x_6000(x_6002); }));
}
int64_t layout_size_x_5616(const auto &x_6001) { return x_6000(x_6001); }
LayoutNode x_6003(const auto &x_6004) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_6004)), [&](const auto &x_6005) { return x_6003(x_6005); }));
}
LayoutNode json_to_layout_node_x_5615(const auto &x_6004) { return x_6003(x_6004); }
Node x_6006(const auto &x_6007) {
  return MakeNode(x_6007->name, x_6007->attr, x_6007->prop, x_6007->extern_id,
                  ListMap(x_6007->children, [&](const auto &x_6008) { return x_6006(x_6008); }));
}
Node node_to_fs_node_x_5614(const auto &x_6007) { return x_6006(x_6007); }
Node x_6009(const auto &x_6010) {
  return MakeNode(
      JsonToString(JsonMember("name", x_6010)), JsonToDict(JsonMember("attributes", x_6010)),
      JsonToDict(JsonMember("properties", x_6010)), JsonToInt(JsonMember("id", x_6010)),
      ListMap(JsonToList(JsonMember("children", x_6010)), [&](const auto &x_6011) { return x_6009(x_6011); }));
}
Node json_to_node_aux_x_5613(const auto &x_6010) { return x_6009(x_6010); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_5618) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_5619) {
      auto x_5620 = MakeRef(static_cast<int64_t>(0));
      auto x_5621 = FreshMetric();
      auto x_5622 = JsonOfString(InputLine(x_5619));
      auto x_5623 = JsonOfString(InputLine(x_5619));
      auto x_5624 = MakeStack();
      PushStack(x_5624, x_5622);
      PushStack(x_5624, x_5623);
      Assert(StringEqual(JsonToString(JsonMember("name", x_5622)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_5623)), "layout_init"));
      auto x_5627 = [&]() {
        auto x_5625 = json_to_node_aux_x_5613(JsonMember("node", x_5622));
        x_5625->parent = nullptr;
        x_5625->prev = nullptr;
        x_5625->next = nullptr;
        set_children_relation_x_5626(x_5625);
        return x_5625;
      }();
      auto x_5628 = json_to_layout_node_x_5615(JsonMember("node", x_5623));
      OutputChangeMetric(layout_size_x_5616(x_5628));
      InputChangeMetric(node_size_x_5617(x_5627));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_5629(x_5627);
      x_5627->meta->pass_0_proc_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_5630(x_5627);
      x_5627->meta->pass_1_proc_time_table = ReadRef(current_time);
      JsonToChannel(x_5618, [&]() {
        auto x_7737 = FreshJson();
        WriteJson(x_7737, "name", "PQ_D");
        WriteJson(x_7737, "diff_num", ReadRef(x_5620));
        WriteJson(x_7737, "read_count", MetricReadCount());
        WriteJson(x_7737, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_7737, "write_count", MetricWriteCount());
        WriteJson(x_7737, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_7737, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_7737, "input_change_count", MetricInputChangeCount());
        WriteJson(x_7737, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_7737, "overhead_time", MetricOverheadCount());
        WriteJson(x_7737, "eval_time", MetricEvalCount());
        WriteJson(x_7737, "html", "");
        WriteJson(x_7737, "command", StackToList(x_5624));
        return x_7737;
      }());
      OutputString(x_5618, "\n");
      ClearStack(x_5624);
      WriteRef(x_5620, IntAdd(ReadRef(x_5620), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_5619, [&](const auto &x_5631) {
        auto x_5632 = JsonOfString(x_5631);
        PushStack(x_5624, x_5632);
        std::string x_7739 = JsonToString(JsonMember("name", x_5632));
        if (x_7739 == "add") {
          return add_node_x_5636(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5635) { return JsonToInt(x_5635); }),
              x_5627, [&]() {
                auto x_5633 = json_to_node_aux_x_5613(JsonMember("node", x_5632));
                x_5633->parent = nullptr;
                x_5633->prev = nullptr;
                x_5633->next = nullptr;
                set_children_relation_x_5634(x_5633);
                return x_5633;
              }());
        } else if (x_7739 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_5637) {
            recalculate_internal_x_5638(MakeUnit());
            return MakeUnit();
          })));
          JsonToChannel(x_5618, [&]() {
            auto x_7738 = FreshJson();
            WriteJson(x_7738, "name", "PQ_D");
            WriteJson(x_7738, "diff_num", ReadRef(x_5620));
            WriteJson(x_7738, "read_count", MetricReadCount());
            WriteJson(x_7738, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_7738, "write_count", MetricWriteCount());
            WriteJson(x_7738, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_7738, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_7738, "input_change_count", MetricInputChangeCount());
            WriteJson(x_7738, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_7738, "overhead_time", MetricOverheadCount());
            WriteJson(x_7738, "eval_time", MetricEvalCount());
            WriteJson(x_7738, "html", "");
            WriteJson(x_7738, "command", StackToList(x_5624));
            return x_7738;
          }());
          OutputString(x_5618, "\n");
          ClearStack(x_5624);
          WriteRef(x_5620, IntAdd(ReadRef(x_5620), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_7739 == "remove") {
          return remove_node_x_5640(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5639) { return JsonToInt(x_5639); }),
              x_5627, MakeUnit());
        } else if (x_7739 == "replace") {
          return replace_node_x_5644(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5643) { return JsonToInt(x_5643); }),
              x_5627, [&]() {
                auto x_5641 = json_to_node_aux_x_5613(JsonMember("node", x_5632));
                x_5641->parent = nullptr;
                x_5641->prev = nullptr;
                x_5641->next = nullptr;
                set_children_relation_x_5642(x_5641);
                return x_5641;
              }());
        } else if (x_7739 == "replace_value") {
          return replace_value_x_5646(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5645) { return JsonToInt(x_5645); }),
              x_5627,
              MakePair(MakePair(JsonToString(JsonMember("type", x_5632)), JsonToString(JsonMember("key", x_5632))),
                       JsonToValue(JsonMember("value", x_5632))));
        } else if (x_7739 == "delete_value") {
          return delete_value_x_5648(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5647) { return JsonToInt(x_5647); }),
              x_5627, MakePair(JsonToString(JsonMember("type", x_5632)), JsonToString(JsonMember("key", x_5632))));
        } else if (x_7739 == "insert_value") {
          return insert_value_x_5650(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5649) { return JsonToInt(x_5649); }),
              x_5627,
              MakePair(MakePair(JsonToString(JsonMember("type", x_5632)), JsonToString(JsonMember("key", x_5632))),
                       JsonToValue(JsonMember("value", x_5632))));
        } else if (x_7739 == "layout_remove") {
          return remove_layout_node_x_5652(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5651) { return JsonToInt(x_5651); }),
              x_5628, MakeUnit());
        } else if (x_7739 == "layout_add") {
          return add_layout_node_x_5654(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5653) { return JsonToInt(x_5653); }),
              x_5628, json_to_layout_node_x_5615(JsonMember("node", x_5632)));
        } else if (x_7739 == "layout_replace") {
          return replace_layout_node_x_5656(
              ListMap(JsonToList(JsonMember("path", x_5632)), [&](const auto &x_5655) { return JsonToInt(x_5655); }),
              x_5628, json_to_layout_node_x_5615(JsonMember("node", x_5632)));
        } else if (x_7739 == "layout_info_changed") {
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