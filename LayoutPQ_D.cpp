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
Unit var_modified_x_3367(const auto &x_3369);
auto eval_expr_x_3364(const auto &x_3376);
Unit var_modified_x_3362(const auto &x_3386);
auto eval_expr_x_3359(const auto &x_3391);
Unit var_modified_x_3357(const auto &x_3397);
auto eval_expr_x_3354(const auto &x_3405);
Unit var_modified_x_3352(const auto &x_3433);
auto eval_expr_x_3349(const auto &x_3443);
Unit var_modified_x_3347(const auto &x_3457);
auto eval_expr_x_3344(const auto &x_3464);
Unit var_modified_x_3342(const auto &x_3470);
auto eval_expr_x_3339(const auto &x_3478);
Unit var_modified_x_3337(const auto &x_3506);
auto eval_expr_x_3334(const auto &x_3516);
Unit var_modified_x_3332(const auto &x_3528);
auto eval_expr_x_3329(const auto &x_3533);
Unit var_modified_x_3327(const auto &x_3545);
auto eval_expr_x_3324(const auto &x_3550);
Unit var_modified_x_3322(const auto &x_3558);
auto eval_expr_x_3319(const auto &x_3566);
Unit var_modified_x_3317(const auto &x_3578);
auto eval_expr_x_3314(const auto &x_3583);
Unit var_modified_x_3312(const auto &x_3587);
auto eval_expr_x_3309(const auto &x_3592);
Unit var_modified_x_3306(const auto &x_3596);
auto eval_expr_x_3303(const auto &x_3614);
Unit var_modified_x_3301(const auto &x_3660);
auto eval_expr_x_3298(const auto &x_3665);
Unit var_modified_x_3296(const auto &x_3675);
auto eval_expr_x_3293(const auto &x_3686);
Unit var_modified_x_3291(const auto &x_3690);
auto eval_expr_x_3288(const auto &x_3701);
Unit var_modified_x_3286(const auto &x_3707);
auto eval_expr_x_3283(const auto &x_3712);
Unit var_modified_x_3281(const auto &x_3714);
auto eval_expr_x_3278(const auto &x_3719);
Unit var_modified_x_3276(const auto &x_3723);
auto eval_expr_x_3273(const auto &x_3731);
Unit var_modified_x_3271(const auto &x_3743);
auto eval_expr_x_3268(const auto &x_3748);
Unit var_modified_x_3266(const auto &x_3752);
auto eval_expr_x_3263(const auto &x_3760);
Unit var_modified_x_3261(const auto &x_3772);
auto eval_expr_x_3258(const auto &x_3780);
Unit var_modified_x_3256(const auto &x_3794);
auto eval_expr_x_3253(const auto &x_3805);
Unit var_modified_x_3251(const auto &x_3821);
auto eval_expr_x_3248(const auto &x_3826);
Unit var_modified_x_3246(const auto &x_3830);
auto eval_expr_x_3243(const auto &x_3840);
Unit var_modified_x_3241(const auto &x_3846);
auto eval_expr_x_3238(const auto &x_3856);
Unit var_modified_x_3236(const auto &x_3862);
auto eval_expr_x_3233(const auto &x_3870);
Unit var_modified_x_3231(const auto &x_3874);
auto eval_expr_x_3228(const auto &x_3882);
Unit var_modified_x_3226(const auto &x_3886);
auto eval_expr_x_3223(const auto &x_3897);
Unit var_modified_x_3221(const auto &x_3901);
auto eval_expr_x_3218(const auto &x_3912);
Unit var_modified_x_3215(const auto &x_3916);
auto eval_expr_x_3212(const auto &x_3928);
Unit var_modified_x_3210(const auto &x_3944);
auto eval_expr_x_3207(const auto &x_3956);
Unit var_modified_x_3205(const auto &x_3964);
auto eval_expr_x_3202(const auto &x_3976);
Unit var_modified_x_3200(const auto &x_3982);
auto eval_expr_x_3197(const auto &x_3987);
Unit var_modified_x_3195(const auto &x_3993);
auto eval_expr_x_3192(const auto &x_4001);
Unit var_modified_x_3190(const auto &x_4081);
auto eval_expr_x_3187(const auto &x_4086);
Unit var_modified_x_3185(const auto &x_4112);
auto eval_expr_x_3182(const auto &x_4120);
Unit var_modified_x_3180(const auto &x_4124);
auto eval_expr_x_3177(const auto &x_4129);
Unit var_modified_x_3175(const auto &x_4135);
auto eval_expr_x_3172(const auto &x_4147);
Unit var_modified_x_3170(const auto &x_4153);
auto eval_expr_x_3167(const auto &x_4165);
Unit var_modified_x_3165(const auto &x_4171);
auto eval_expr_x_3162(const auto &x_4181);
Unit var_modified_x_3160(const auto &x_4189);
auto eval_expr_x_3157(const auto &x_4194);
Unit var_modified_x_3155(const auto &x_4200);
auto eval_expr_x_3152(const auto &x_4208);
Unit var_modified_x_3150(const auto &x_4292);
auto eval_expr_x_3147(const auto &x_4297);
Unit var_modified_x_3145(const auto &x_4301);
auto eval_expr_x_3142(const auto &x_4306);
Unit var_modified_x_3140(const auto &x_4332);
auto eval_expr_x_3137(const auto &x_4337);
Unit var_modified_x_3135(const auto &x_4345);
auto eval_expr_x_3132(const auto &x_4353);
Unit eval_stmts_x_3031(const auto &x_3130);
Unit eval_stmts_x_3030(const auto &x_3131);
Unit eval_stmts_x_3029(const auto &x_3217);
Unit eval_stmts_x_3028(const auto &x_3308);
Unit x_2755(const auto &x_2756, const auto &x_2757, const auto &x_2758);
Unit x_2762(const auto &x_2763, const auto &x_2764, const auto &x_2765);
Unit x_2769(const auto &x_2770, const auto &x_2771, const auto &x_2772);
Unit x_2776(const auto &x_2777, const auto &x_2778, const auto &x_2779);
Unit x_2811(const auto &x_2812, const auto &x_2813, const auto &x_2814);
Unit x_2844(const auto &x_2845, const auto &x_2846, const auto &x_2847);
Unit x_2903(const auto &x_2904, const auto &x_2905, const auto &x_2906);
Unit x_2981(const auto &x_2982);
Unit x_2989(const auto &x_2990, const auto &x_2991, const auto &x_2992);
Unit recalculate_x_2736(const auto &x_3024);
Unit x_3034(const auto &x_3035, const auto &x_3036, const auto &x_3037);
Unit x_3083(const auto &x_3084);
Unit eval_stmts_x_2729(const auto &x_3091);
Unit eval_stmts_x_2728(const auto &x_3099);
Unit x_3107(const auto &x_3108);
int64_t x_3115(const auto &x_3116);
int64_t x_3118(const auto &x_3119);
LayoutNode x_3121(const auto &x_3122);
Node x_3124(const auto &x_3125);
Node x_3127(const auto &x_3128);
Unit var_modified_x_3367(const auto &x_3369) {
  return RecordOverhead([&](const auto &x_3370) {
    OptionMatch(
        x_3369->next, [&](const auto &x_3372) { return MakeUnit(); },
        [&](const auto &x_3371) {
          auto x_3373 = x_3371;
          if (x_3373->meta->bb_3_has_bb_time_table) {
            if (!(x_3373->meta->bb_3_has_bb_dirtied && x_3373->meta->bb_3_bb_dirtied)) {
              x_3373->meta->bb_3_has_bb_dirtied = true;
              x_3373->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3373->meta->bb_3_bb_time_table, x_3373, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3364(const auto &x_3376) {
  return RecordEval([&](const auto &x_3377) {
    if ((x_3376->prev != nullptr) && (!(x_3376->prev)->var_line_break)) {
      return max(x_3376->var_height_external, (x_3376->prev)->var_line_height);
    } else {
      return x_3376->var_height_external;
    }
  });
}
Unit var_modified_x_3362(const auto &x_3386) {
  return RecordOverhead([&](const auto &x_3387) {
    auto x_3388 = x_3386;
    if (x_3388->meta->bb_3_has_bb_time_table) {
      if (!(x_3388->meta->bb_3_has_bb_dirtied && x_3388->meta->bb_3_bb_dirtied)) {
        x_3388->meta->bb_3_has_bb_dirtied = true;
        x_3388->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3388->meta->bb_3_bb_time_table, x_3388, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3359(const auto &x_3391) {
  return RecordEval([&](const auto &x_3392) {
    if (eq(x_3391->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_3391->var_height_internal;
    }
  });
}
Unit var_modified_x_3357(const auto &x_3397) {
  return RecordOverhead([&](const auto &x_3398) {
    auto x_3399 = x_3397;
    if (x_3399->meta->bb_3_has_bb_time_table) {
      if (!(x_3399->meta->bb_3_has_bb_dirtied && x_3399->meta->bb_3_bb_dirtied)) {
        x_3399->meta->bb_3_has_bb_dirtied = true;
        x_3399->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3399->meta->bb_3_bb_time_table, x_3399, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3397->children, [&](const auto &x_3402) {
      if (x_3402->meta->bb_3_has_bb_time_table) {
        if (!(x_3402->meta->bb_3_has_bb_dirtied && x_3402->meta->bb_3_bb_dirtied)) {
          x_3402->meta->bb_3_has_bb_dirtied = true;
          x_3402->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3402->meta->bb_3_bb_time_table, x_3402, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3354(const auto &x_3405) {
  return RecordEval([&](const auto &x_3406) {
    if (x_3405->var_intrinsic_height_is_height) {
      return x_3405->var_intrinsic_height_internal;
    } else {
      if ((x_3405->parent != nullptr) && (x_3405->parent)->var_is_flex_column) {
        return plus(x_3405->var_intrinsic_height_internal,
                    mult(x_3405->var_flex_amount, (x_3405->parent)->var_flex_unit));
      } else {
        if (x_3405->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_3405->var_box_height, divide(x_3405->var_height_expr.r.a0, 100.));
        } else {
          return max(x_3405->var_box_height, x_3405->var_intrinsic_height_internal);
        }
      }
    }
  });
}
Unit var_modified_x_3352(const auto &x_3433) {
  return RecordOverhead([&](const auto &x_3434) {
    ListIter(x_3433->children, [&](const auto &x_3435) {
      if (x_3435->meta->bb_3_has_bb_time_table) {
        if (!(x_3435->meta->bb_3_has_bb_dirtied && x_3435->meta->bb_3_bb_dirtied)) {
          x_3435->meta->bb_3_has_bb_dirtied = true;
          x_3435->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3435->meta->bb_3_bb_time_table, x_3435, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_3433->next, [&](const auto &x_3439) { return MakeUnit(); },
        [&](const auto &x_3438) {
          auto x_3440 = x_3438;
          if (x_3440->meta->bb_3_has_bb_time_table) {
            if (!(x_3440->meta->bb_3_has_bb_dirtied && x_3440->meta->bb_3_bb_dirtied)) {
              x_3440->meta->bb_3_has_bb_dirtied = true;
              x_3440->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3440->meta->bb_3_bb_time_table, x_3440, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3349(const auto &x_3443) {
  return RecordEval([&](const auto &x_3444) {
    if (x_3443->prev != nullptr) {
      if (x_3443->var_line_break || (x_3443->prev)->var_line_break) {
        return plus((x_3443->prev)->var_y, (x_3443->prev)->var_line_height);
      } else {
        return (x_3443->prev)->var_y;
      }
    } else {
      if (x_3443->parent != nullptr) {
        return (x_3443->parent)->var_y;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_3347(const auto &x_3457) {
  return RecordOverhead([&](const auto &x_3458) {
    OptionMatch(
        x_3457->next, [&](const auto &x_3460) { return MakeUnit(); },
        [&](const auto &x_3459) {
          auto x_3461 = x_3459;
          if (x_3461->meta->bb_3_has_bb_time_table) {
            if (!(x_3461->meta->bb_3_has_bb_dirtied && x_3461->meta->bb_3_bb_dirtied)) {
              x_3461->meta->bb_3_has_bb_dirtied = true;
              x_3461->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3461->meta->bb_3_bb_time_table, x_3461, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3344(const auto &x_3464) {
  return RecordEval([&](const auto &x_3465) {
    if (eq(x_3464->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_3464->var_width_internal;
    }
  });
}
Unit var_modified_x_3342(const auto &x_3470) {
  return RecordOverhead([&](const auto &x_3471) {
    auto x_3472 = x_3470;
    if (x_3472->meta->bb_3_has_bb_time_table) {
      if (!(x_3472->meta->bb_3_has_bb_dirtied && x_3472->meta->bb_3_bb_dirtied)) {
        x_3472->meta->bb_3_has_bb_dirtied = true;
        x_3472->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3472->meta->bb_3_bb_time_table, x_3472, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3470->children, [&](const auto &x_3475) {
      if (x_3475->meta->bb_3_has_bb_time_table) {
        if (!(x_3475->meta->bb_3_has_bb_dirtied && x_3475->meta->bb_3_bb_dirtied)) {
          x_3475->meta->bb_3_has_bb_dirtied = true;
          x_3475->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3475->meta->bb_3_bb_time_table, x_3475, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3339(const auto &x_3478) {
  return RecordEval([&](const auto &x_3479) {
    if (x_3478->var_intrinsic_width_is_width) {
      return x_3478->var_intrinsic_width_internal;
    } else {
      if ((x_3478->parent != nullptr) && (x_3478->parent)->var_is_flex_row) {
        return plus(x_3478->var_intrinsic_width_internal,
                    mult(x_3478->var_flex_amount, (x_3478->parent)->var_flex_unit));
      } else {
        if (x_3478->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_3478->var_box_width, divide(x_3478->var_width_expr.r.a0, 100.));
        } else {
          return max(x_3478->var_box_width, x_3478->var_intrinsic_width_internal);
        }
      }
    }
  });
}
Unit var_modified_x_3337(const auto &x_3506) {
  return RecordOverhead([&](const auto &x_3507) {
    ListIter(x_3506->children, [&](const auto &x_3508) {
      if (x_3508->meta->bb_3_has_bb_time_table) {
        if (!(x_3508->meta->bb_3_has_bb_dirtied && x_3508->meta->bb_3_bb_dirtied)) {
          x_3508->meta->bb_3_has_bb_dirtied = true;
          x_3508->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3508->meta->bb_3_bb_time_table, x_3508, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_3506->next, [&](const auto &x_3512) { return MakeUnit(); },
        [&](const auto &x_3511) {
          auto x_3513 = x_3511;
          if (x_3513->meta->bb_3_has_bb_time_table) {
            if (!(x_3513->meta->bb_3_has_bb_dirtied && x_3513->meta->bb_3_bb_dirtied)) {
              x_3513->meta->bb_3_has_bb_dirtied = true;
              x_3513->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3513->meta->bb_3_bb_time_table, x_3513, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3334(const auto &x_3516) {
  return RecordEval([&](const auto &x_3517) {
    if (x_3516->prev != nullptr) {
      if (x_3516->var_line_break || (x_3516->prev)->var_line_break) {
        return 0.;
      } else {
        return plus((x_3516->prev)->var_x, (x_3516->prev)->var_width_external);
      }
    } else {
      if (x_3516->parent != nullptr) {
        return (x_3516->parent)->var_x;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_3332(const auto &x_3528) {
  return RecordOverhead([&](const auto &x_3529) {
    ListIter(x_3528->children, [&](const auto &x_3530) {
      if (x_3530->meta->bb_3_has_bb_time_table) {
        if (!(x_3530->meta->bb_3_has_bb_dirtied && x_3530->meta->bb_3_bb_dirtied)) {
          x_3530->meta->bb_3_has_bb_dirtied = true;
          x_3530->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3530->meta->bb_3_bb_time_table, x_3530, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3329(const auto &x_3533) {
  return RecordEval([&](const auto &x_3534) {
    if (gt(x_3533->var_left_over, 0.)) {
      return divide(x_3533->var_left_over, x_3533->var_flex_grow_sum);
    } else {
      return divide(x_3533->var_left_over, x_3533->var_flex_shrink_sum);
    }
  });
}
Unit var_modified_x_3327(const auto &x_3545) {
  return RecordOverhead([&](const auto &x_3546) {
    auto x_3547 = x_3545;
    if (x_3547->meta->bb_3_has_bb_time_table) {
      if (!(x_3547->meta->bb_3_has_bb_dirtied && x_3547->meta->bb_3_bb_dirtied)) {
        x_3547->meta->bb_3_has_bb_dirtied = true;
        x_3547->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3547->meta->bb_3_bb_time_table, x_3547, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3324(const auto &x_3550) {
  return RecordEval([&](const auto &x_3551) {
    if ((x_3550->parent != nullptr) && gt((x_3550->parent)->var_left_over, 0.)) {
      return x_3550->var_flex_grow;
    } else {
      return x_3550->var_flex_shrink;
    }
  });
}
Unit var_modified_x_3322(const auto &x_3558) {
  return RecordOverhead([&](const auto &x_3559) {
    auto x_3560 = x_3558;
    if (x_3560->meta->bb_3_has_bb_time_table) {
      if (!(x_3560->meta->bb_3_has_bb_dirtied && x_3560->meta->bb_3_bb_dirtied)) {
        x_3560->meta->bb_3_has_bb_dirtied = true;
        x_3560->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3560->meta->bb_3_bb_time_table, x_3560, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3558->children, [&](const auto &x_3563) {
      if (x_3563->meta->bb_3_has_bb_time_table) {
        if (!(x_3563->meta->bb_3_has_bb_dirtied && x_3563->meta->bb_3_bb_dirtied)) {
          x_3563->meta->bb_3_has_bb_dirtied = true;
          x_3563->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3563->meta->bb_3_bb_time_table, x_3563, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3319(const auto &x_3566) {
  return RecordEval([&](const auto &x_3567) {
    if (x_3566->var_is_flex_row) {
      return minus(x_3566->var_box_width, (x_3566->last != nullptr) ? ((x_3566->last)->var_intrinsic_width_sum) : (0.));
    } else {
      return minus(x_3566->var_box_height,
                   (x_3566->last != nullptr) ? ((x_3566->last)->var_intrinsic_height_sum) : (0.));
    }
  });
}
Unit var_modified_x_3317(const auto &x_3578) {
  return RecordOverhead([&](const auto &x_3579) {
    auto x_3580 = x_3578;
    if (x_3580->meta->bb_3_has_bb_time_table) {
      if (!(x_3580->meta->bb_3_has_bb_dirtied && x_3580->meta->bb_3_bb_dirtied)) {
        x_3580->meta->bb_3_has_bb_dirtied = true;
        x_3580->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3580->meta->bb_3_bb_time_table, x_3580, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3314(const auto &x_3583) {
  return RecordEval([&](const auto &x_3584) {
    if (x_3583->parent != nullptr) {
      return (x_3583->parent)->var_height_internal;
    } else {
      return 1080.;
    }
  });
}
Unit var_modified_x_3312(const auto &x_3587) {
  return RecordOverhead([&](const auto &x_3588) {
    auto x_3589 = x_3587;
    if (x_3589->meta->bb_3_has_bb_time_table) {
      if (!(x_3589->meta->bb_3_has_bb_dirtied && x_3589->meta->bb_3_bb_dirtied)) {
        x_3589->meta->bb_3_has_bb_dirtied = true;
        x_3589->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3589->meta->bb_3_bb_time_table, x_3589, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3309(const auto &x_3592) {
  return RecordEval([&](const auto &x_3593) {
    if (x_3592->parent != nullptr) {
      return (x_3592->parent)->var_width_internal;
    } else {
      return 1920.;
    }
  });
}
Unit var_modified_x_3306(const auto &x_3596) {
  return RecordOverhead([&](const auto &x_3597) {
    auto x_3598 = x_3596;
    if (x_3598->meta->bb_0_has_bb_time_table) {
      if (!(x_3598->meta->bb_0_has_bb_dirtied && x_3598->meta->bb_0_bb_dirtied)) {
        x_3598->meta->bb_0_has_bb_dirtied = true;
        x_3598->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3598->meta->bb_0_bb_time_table, x_3598, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    OptionMatch(
        x_3596->next, [&](const auto &x_3602) { return MakeUnit(); },
        [&](const auto &x_3601) {
          auto x_3603 = x_3601;
          if (x_3603->meta->bb_0_has_bb_time_table) {
            if (!(x_3603->meta->bb_0_has_bb_dirtied && x_3603->meta->bb_0_bb_dirtied)) {
              x_3603->meta->bb_0_has_bb_dirtied = true;
              x_3603->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3603->meta->bb_0_bb_time_table, x_3603, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    auto x_3606 = x_3596;
    if (x_3606->meta->bb_3_has_bb_time_table) {
      if (!(x_3606->meta->bb_3_has_bb_dirtied && x_3606->meta->bb_3_bb_dirtied)) {
        x_3606->meta->bb_3_has_bb_dirtied = true;
        x_3606->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3606->meta->bb_3_bb_time_table, x_3606, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    OptionMatch(
        x_3596->next, [&](const auto &x_3610) { return MakeUnit(); },
        [&](const auto &x_3609) {
          auto x_3611 = x_3609;
          if (x_3611->meta->bb_3_has_bb_time_table) {
            if (!(x_3611->meta->bb_3_has_bb_dirtied && x_3611->meta->bb_3_bb_dirtied)) {
              x_3611->meta->bb_3_has_bb_dirtied = true;
              x_3611->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3611->meta->bb_3_bb_time_table, x_3611, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3303(const auto &x_3614) {
  return RecordEval([&](const auto &x_3615) {
    if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return false;
    } else {
      if (eq(x_3614->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
        return false;
      } else {
        if ((x_3614->parent != nullptr) &&
            (eq((x_3614->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
             eq((x_3614->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
          return true;
        } else {
          if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
            return true;
          } else {
            if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
              return false;
            } else {
              if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
                return false;
              } else {
                if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                  if (eq(x_3614->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                    return false;
                  } else {
                    if (eq(x_3614->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                      return false;
                    } else {
                      if (eq(x_3614->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                        return true;
                      } else {
                        return true;
                      }
                    }
                  }
                } else {
                  if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                    return false;
                  } else {
                    if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                      return false;
                    } else {
                      if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                        return true;
                      } else {
                        if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                          return true;
                        } else {
                          if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                            return true;
                          } else {
                            if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                              return false;
                            } else {
                              if (eq(x_3614->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_3301(const auto &x_3660) {
  return RecordOverhead([&](const auto &x_3661) {
    ListIter(x_3660->children, [&](const auto &x_3662) {
      if (x_3662->meta->bb_1_has_bb_time_table) {
        if (!(x_3662->meta->bb_1_has_bb_dirtied && x_3662->meta->bb_1_bb_dirtied)) {
          x_3662->meta->bb_1_has_bb_dirtied = true;
          x_3662->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3662->meta->bb_1_bb_time_table, x_3662, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3298(const auto &x_3665) {
  return RecordEval([&](const auto &x_3666) {
    return (((!(x_3665->parent != nullptr)) || (x_3665->parent)->var_visible) &&
            (neq(x_3665->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
             ((!x_3665->var_inside_svg) && (!x_3665->var_disabled))));
  });
}
Unit var_modified_x_3296(const auto &x_3675) {
  return RecordOverhead([&](const auto &x_3676) {
    auto x_3677 = x_3675;
    if (x_3677->meta->bb_1_has_bb_time_table) {
      if (!(x_3677->meta->bb_1_has_bb_dirtied && x_3677->meta->bb_1_bb_dirtied)) {
        x_3677->meta->bb_1_has_bb_dirtied = true;
        x_3677->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3677->meta->bb_1_bb_time_table, x_3677, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    ListIter(x_3675->children, [&](const auto &x_3680) {
      if (x_3680->meta->bb_1_has_bb_time_table) {
        if (!(x_3680->meta->bb_1_has_bb_dirtied && x_3680->meta->bb_1_bb_dirtied)) {
          x_3680->meta->bb_1_has_bb_dirtied = true;
          x_3680->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3680->meta->bb_1_bb_time_table, x_3680, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3683 = x_3675;
    if (x_3683->meta->bb_0_has_bb_time_table) {
      if (!(x_3683->meta->bb_0_has_bb_dirtied && x_3683->meta->bb_0_bb_dirtied)) {
        x_3683->meta->bb_0_has_bb_dirtied = true;
        x_3683->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3683->meta->bb_0_bb_time_table, x_3683, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3293(const auto &x_3686) {
  return RecordEval([&](const auto &x_3687) {
    if (eq(x_3686->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
      return true;
    } else {
      return ((x_3686->parent != nullptr) && (x_3686->parent)->var_disabled);
    }
  });
}
Unit var_modified_x_3291(const auto &x_3690) {
  return RecordOverhead([&](const auto &x_3691) {
    auto x_3692 = x_3690;
    if (x_3692->meta->bb_1_has_bb_time_table) {
      if (!(x_3692->meta->bb_1_has_bb_dirtied && x_3692->meta->bb_1_bb_dirtied)) {
        x_3692->meta->bb_1_has_bb_dirtied = true;
        x_3692->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3692->meta->bb_1_bb_time_table, x_3692, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    ListIter(x_3690->children, [&](const auto &x_3695) {
      if (x_3695->meta->bb_1_has_bb_time_table) {
        if (!(x_3695->meta->bb_1_has_bb_dirtied && x_3695->meta->bb_1_bb_dirtied)) {
          x_3695->meta->bb_1_has_bb_dirtied = true;
          x_3695->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3695->meta->bb_1_bb_time_table, x_3695, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3698 = x_3690;
    if (x_3698->meta->bb_0_has_bb_time_table) {
      if (!(x_3698->meta->bb_0_has_bb_dirtied && x_3698->meta->bb_0_bb_dirtied)) {
        x_3698->meta->bb_0_has_bb_dirtied = true;
        x_3698->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3698->meta->bb_0_bb_time_table, x_3698, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3288(const auto &x_3701) {
  return RecordEval([&](const auto &x_3702) {
    return ((x_3701->parent != nullptr) && ((x_3701->parent)->var_is_svg_block || (x_3701->parent)->var_inside_svg));
  });
}
Unit var_modified_x_3286(const auto &x_3707) {
  return RecordOverhead([&](const auto &x_3708) {
    ListIter(x_3707->children, [&](const auto &x_3709) {
      if (x_3709->meta->bb_1_has_bb_time_table) {
        if (!(x_3709->meta->bb_1_has_bb_dirtied && x_3709->meta->bb_1_bb_dirtied)) {
          x_3709->meta->bb_1_has_bb_dirtied = true;
          x_3709->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3709->meta->bb_1_bb_time_table, x_3709, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3283(const auto &x_3712) {
  return RecordEval([&](const auto &x_3713) { return eq(x_3712->name, DEStringLit(DEStringCase::DSTRING_svg)); });
}
Unit var_modified_x_3281(const auto &x_3714) {
  return RecordOverhead([&](const auto &x_3715) {
    auto x_3716 = x_3714;
    if (x_3716->meta->bb_0_has_bb_time_table) {
      if (!(x_3716->meta->bb_0_has_bb_dirtied && x_3716->meta->bb_0_bb_dirtied)) {
        x_3716->meta->bb_0_has_bb_dirtied = true;
        x_3716->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3716->meta->bb_0_bb_time_table, x_3716, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3278(const auto &x_3719) {
  return RecordEval(
      [&](const auto &x_3720) { return neq(x_3719->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_3276(const auto &x_3723) {
  return RecordOverhead([&](const auto &x_3724) {
    auto x_3725 = x_3723;
    if (x_3725->meta->bb_1_has_bb_time_table) {
      if (!(x_3725->meta->bb_1_has_bb_dirtied && x_3725->meta->bb_1_bb_dirtied)) {
        x_3725->meta->bb_1_has_bb_dirtied = true;
        x_3725->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3725->meta->bb_1_bb_time_table, x_3725, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3728 = x_3723;
    if (x_3728->meta->bb_0_has_bb_time_table) {
      if (!(x_3728->meta->bb_0_has_bb_dirtied && x_3728->meta->bb_0_bb_dirtied)) {
        x_3728->meta->bb_0_has_bb_dirtied = true;
        x_3728->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3728->meta->bb_0_bb_time_table, x_3728, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3273(const auto &x_3731) {
  return RecordEval([&](const auto &x_3732) {
    if (!x_3731->has_attr_height) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_3731->attr_height.c == DEStringCase::DStringIsFloat) ||
          (x_3731->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_3731->attr_height;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_3271(const auto &x_3743) {
  return RecordOverhead([&](const auto &x_3744) {
    auto x_3745 = x_3743;
    if (x_3745->meta->bb_0_has_bb_time_table) {
      if (!(x_3745->meta->bb_0_has_bb_dirtied && x_3745->meta->bb_0_bb_dirtied)) {
        x_3745->meta->bb_0_has_bb_dirtied = true;
        x_3745->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3745->meta->bb_0_bb_time_table, x_3745, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3268(const auto &x_3748) {
  return RecordEval(
      [&](const auto &x_3749) { return neq(x_3748->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_3266(const auto &x_3752) {
  return RecordOverhead([&](const auto &x_3753) {
    auto x_3754 = x_3752;
    if (x_3754->meta->bb_1_has_bb_time_table) {
      if (!(x_3754->meta->bb_1_has_bb_dirtied && x_3754->meta->bb_1_bb_dirtied)) {
        x_3754->meta->bb_1_has_bb_dirtied = true;
        x_3754->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3754->meta->bb_1_bb_time_table, x_3754, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3757 = x_3752;
    if (x_3757->meta->bb_0_has_bb_time_table) {
      if (!(x_3757->meta->bb_0_has_bb_dirtied && x_3757->meta->bb_0_bb_dirtied)) {
        x_3757->meta->bb_0_has_bb_dirtied = true;
        x_3757->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3757->meta->bb_0_bb_time_table, x_3757, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3263(const auto &x_3760) {
  return RecordEval([&](const auto &x_3761) {
    if (!x_3760->has_attr_width) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_3760->attr_width.c == DEStringCase::DStringIsFloat) ||
          (x_3760->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_3760->attr_width;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_3261(const auto &x_3772) {
  return RecordOverhead([&](const auto &x_3773) {
    ListIter(x_3772->children, [&](const auto &x_3774) {
      if (x_3774->meta->bb_0_has_bb_time_table) {
        if (!(x_3774->meta->bb_0_has_bb_dirtied && x_3774->meta->bb_0_bb_dirtied)) {
          x_3774->meta->bb_0_has_bb_dirtied = true;
          x_3774->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3774->meta->bb_0_bb_time_table, x_3774, static_cast<int64_t>(1));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    ListIter(x_3772->children, [&](const auto &x_3777) {
      if (x_3777->meta->bb_3_has_bb_time_table) {
        if (!(x_3777->meta->bb_3_has_bb_dirtied && x_3777->meta->bb_3_bb_dirtied)) {
          x_3777->meta->bb_3_has_bb_dirtied = true;
          x_3777->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3777->meta->bb_3_bb_time_table, x_3777, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3258(const auto &x_3780) {
  return RecordEval([&](const auto &x_3781) {
    if ((x_3780->parent != nullptr) &&
        (eq((x_3780->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_3780->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_3780->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
          eq((x_3780->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_3256(const auto &x_3794) {
  return RecordOverhead([&](const auto &x_3795) {
    ListIter(x_3794->children, [&](const auto &x_3796) {
      if (x_3796->meta->bb_0_has_bb_time_table) {
        if (!(x_3796->meta->bb_0_has_bb_dirtied && x_3796->meta->bb_0_bb_dirtied)) {
          x_3796->meta->bb_0_has_bb_dirtied = true;
          x_3796->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3796->meta->bb_0_bb_time_table, x_3796, static_cast<int64_t>(1));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3799 = x_3794;
    if (x_3799->meta->bb_3_has_bb_time_table) {
      if (!(x_3799->meta->bb_3_has_bb_dirtied && x_3799->meta->bb_3_bb_dirtied)) {
        x_3799->meta->bb_3_has_bb_dirtied = true;
        x_3799->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3799->meta->bb_3_bb_time_table, x_3799, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3794->children, [&](const auto &x_3802) {
      if (x_3802->meta->bb_3_has_bb_time_table) {
        if (!(x_3802->meta->bb_3_has_bb_dirtied && x_3802->meta->bb_3_bb_dirtied)) {
          x_3802->meta->bb_3_has_bb_dirtied = true;
          x_3802->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3802->meta->bb_3_bb_time_table, x_3802, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3253(const auto &x_3805) {
  return RecordEval([&](const auto &x_3806) {
    if ((x_3805->parent != nullptr) &&
        (eq((x_3805->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_3805->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_3805->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
          eq((x_3805->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_3251(const auto &x_3821) {
  return RecordOverhead([&](const auto &x_3822) {
    ListIter(x_3821->children, [&](const auto &x_3823) {
      if (x_3823->meta->bb_1_has_bb_time_table) {
        if (!(x_3823->meta->bb_1_has_bb_dirtied && x_3823->meta->bb_1_bb_dirtied)) {
          x_3823->meta->bb_1_has_bb_dirtied = true;
          x_3823->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3823->meta->bb_1_bb_time_table, x_3823, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  });
}
auto eval_expr_x_3248(const auto &x_3826) {
  return RecordEval([&](const auto &x_3827) {
    if (x_3826->has_prop_flex_direction) {
      return x_3826->prop_flex_direction;
    } else {
      return DEStringLit(DEStringCase::DSTRING_);
    }
  });
}
Unit var_modified_x_3246(const auto &x_3830) {
  return RecordOverhead([&](const auto &x_3831) {
    OptionMatch(
        x_3830->next, [&](const auto &x_3833) { return MakeUnit(); },
        [&](const auto &x_3832) {
          auto x_3834 = x_3832;
          if (x_3834->meta->bb_1_has_bb_time_table) {
            if (!(x_3834->meta->bb_1_has_bb_dirtied && x_3834->meta->bb_1_bb_dirtied)) {
              x_3834->meta->bb_1_has_bb_dirtied = true;
              x_3834->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3834->meta->bb_1_bb_time_table, x_3834, static_cast<int64_t>(0));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    auto x_3837 = x_3830;
    if (x_3837->meta->bb_3_has_bb_time_table) {
      if (!(x_3837->meta->bb_3_has_bb_dirtied && x_3837->meta->bb_3_bb_dirtied)) {
        x_3837->meta->bb_3_has_bb_dirtied = true;
        x_3837->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3837->meta->bb_3_bb_time_table, x_3837, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3243(const auto &x_3840) {
  return RecordEval([&](const auto &x_3841) {
    return plus((x_3840->prev != nullptr) ? ((x_3840->prev)->var_flex_shrink_sum) : (0.), x_3840->var_flex_shrink);
  });
}
Unit var_modified_x_3241(const auto &x_3846) {
  return RecordOverhead([&](const auto &x_3847) {
    OptionMatch(
        x_3846->next, [&](const auto &x_3849) { return MakeUnit(); },
        [&](const auto &x_3848) {
          auto x_3850 = x_3848;
          if (x_3850->meta->bb_1_has_bb_time_table) {
            if (!(x_3850->meta->bb_1_has_bb_dirtied && x_3850->meta->bb_1_bb_dirtied)) {
              x_3850->meta->bb_1_has_bb_dirtied = true;
              x_3850->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3850->meta->bb_1_bb_time_table, x_3850, static_cast<int64_t>(0));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    auto x_3853 = x_3846;
    if (x_3853->meta->bb_3_has_bb_time_table) {
      if (!(x_3853->meta->bb_3_has_bb_dirtied && x_3853->meta->bb_3_bb_dirtied)) {
        x_3853->meta->bb_3_has_bb_dirtied = true;
        x_3853->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3853->meta->bb_3_bb_time_table, x_3853, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3238(const auto &x_3856) {
  return RecordEval([&](const auto &x_3857) {
    return plus((x_3856->prev != nullptr) ? ((x_3856->prev)->var_flex_grow_sum) : (0.), x_3856->var_flex_grow);
  });
}
Unit var_modified_x_3236(const auto &x_3862) {
  return RecordOverhead([&](const auto &x_3863) {
    auto x_3864 = x_3862;
    if (x_3864->meta->bb_1_has_bb_time_table) {
      if (!(x_3864->meta->bb_1_has_bb_dirtied && x_3864->meta->bb_1_bb_dirtied)) {
        x_3864->meta->bb_1_has_bb_dirtied = true;
        x_3864->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3864->meta->bb_1_bb_time_table, x_3864, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3867 = x_3862;
    if (x_3867->meta->bb_3_has_bb_time_table) {
      if (!(x_3867->meta->bb_3_has_bb_dirtied && x_3867->meta->bb_3_bb_dirtied)) {
        x_3867->meta->bb_3_has_bb_dirtied = true;
        x_3867->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3867->meta->bb_3_bb_time_table, x_3867, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3233(const auto &x_3870) {
  return RecordEval([&](const auto &x_3871) {
    if (x_3870->has_prop_flex_shrink) {
      return (x_3870->prop_flex_shrink.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3231(const auto &x_3874) {
  return RecordOverhead([&](const auto &x_3875) {
    auto x_3876 = x_3874;
    if (x_3876->meta->bb_1_has_bb_time_table) {
      if (!(x_3876->meta->bb_1_has_bb_dirtied && x_3876->meta->bb_1_bb_dirtied)) {
        x_3876->meta->bb_1_has_bb_dirtied = true;
        x_3876->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3876->meta->bb_1_bb_time_table, x_3876, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3879 = x_3874;
    if (x_3879->meta->bb_3_has_bb_time_table) {
      if (!(x_3879->meta->bb_3_has_bb_dirtied && x_3879->meta->bb_3_bb_dirtied)) {
        x_3879->meta->bb_3_has_bb_dirtied = true;
        x_3879->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3879->meta->bb_3_bb_time_table, x_3879, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3228(const auto &x_3882) {
  return RecordEval([&](const auto &x_3883) {
    if (x_3882->has_prop_flex_grow) {
      return (x_3882->prop_flex_grow.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3226(const auto &x_3886) {
  return RecordOverhead([&](const auto &x_3887) {
    auto x_3888 = x_3886;
    if (x_3888->meta->bb_1_has_bb_time_table) {
      if (!(x_3888->meta->bb_1_has_bb_dirtied && x_3888->meta->bb_1_bb_dirtied)) {
        x_3888->meta->bb_1_has_bb_dirtied = true;
        x_3888->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3888->meta->bb_1_bb_time_table, x_3888, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3891 = x_3886;
    if (x_3891->meta->bb_0_has_bb_time_table) {
      if (!(x_3891->meta->bb_0_has_bb_dirtied && x_3891->meta->bb_0_bb_dirtied)) {
        x_3891->meta->bb_0_has_bb_dirtied = true;
        x_3891->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3891->meta->bb_0_bb_time_table, x_3891, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_3894 = x_3886;
    if (x_3894->meta->bb_3_has_bb_time_table) {
      if (!(x_3894->meta->bb_3_has_bb_dirtied && x_3894->meta->bb_3_bb_dirtied)) {
        x_3894->meta->bb_3_has_bb_dirtied = true;
        x_3894->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3894->meta->bb_3_bb_time_table, x_3894, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3223(const auto &x_3897) {
  return RecordEval([&](const auto &x_3898) {
    if (x_3897->has_prop_position) {
      return x_3897->prop_position;
    } else {
      return DEStringLit(DEStringCase::DSTRING_static);
    }
  });
}
Unit var_modified_x_3221(const auto &x_3901) {
  return RecordOverhead([&](const auto &x_3902) {
    auto x_3903 = x_3901;
    if (x_3903->meta->bb_1_has_bb_time_table) {
      if (!(x_3903->meta->bb_1_has_bb_dirtied && x_3903->meta->bb_1_bb_dirtied)) {
        x_3903->meta->bb_1_has_bb_dirtied = true;
        x_3903->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3903->meta->bb_1_bb_time_table, x_3903, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    ListIter(x_3901->children, [&](const auto &x_3906) {
      if (x_3906->meta->bb_1_has_bb_time_table) {
        if (!(x_3906->meta->bb_1_has_bb_dirtied && x_3906->meta->bb_1_bb_dirtied)) {
          x_3906->meta->bb_1_has_bb_dirtied = true;
          x_3906->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3906->meta->bb_1_bb_time_table, x_3906, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3909 = x_3901;
    if (x_3909->meta->bb_0_has_bb_time_table) {
      if (!(x_3909->meta->bb_0_has_bb_dirtied && x_3909->meta->bb_0_bb_dirtied)) {
        x_3909->meta->bb_0_has_bb_dirtied = true;
        x_3909->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3909->meta->bb_0_bb_time_table, x_3909, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3218(const auto &x_3912) {
  return RecordEval([&](const auto &x_3913) {
    if (x_3912->has_prop_display) {
      return x_3912->prop_display;
    } else {
      return DEStringLit(DEStringCase::DSTRING_block);
    }
  });
}
Unit var_modified_x_3215(const auto &x_3916) {
  return RecordOverhead([&](const auto &x_3917) {
    if (x_3916->next == nullptr) {
      OptionMatch(
          x_3916->parent, [&](const auto &x_3919) { return MakeUnit(); },
          [&](const auto &x_3918) {
            auto x_3920 = x_3918;
            if (x_3920->meta->bb_0_has_bb_time_table) {
              if (!(x_3920->meta->bb_0_has_bb_dirtied && x_3920->meta->bb_0_bb_dirtied)) {
                x_3920->meta->bb_0_has_bb_dirtied = true;
                x_3920->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3920->meta->bb_0_bb_time_table, x_3920, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_3916->next, [&](const auto &x_3924) { return MakeUnit(); },
        [&](const auto &x_3923) {
          auto x_3925 = x_3923;
          if (x_3925->meta->bb_0_has_bb_time_table) {
            if (!(x_3925->meta->bb_0_has_bb_dirtied && x_3925->meta->bb_0_bb_dirtied)) {
              x_3925->meta->bb_0_has_bb_dirtied = true;
              x_3925->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3925->meta->bb_0_bb_time_table, x_3925, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3212(const auto &x_3928) {
  return RecordEval([&](const auto &x_3929) {
    if (x_3928->prev != nullptr) {
      if (x_3928->var_line_break) {
        return plus((x_3928->prev)->var_finished_intrinsic_height_sum,
                    plus((x_3928->prev)->var_intrinsic_current_line_height, x_3928->var_intrinsic_height_external));
      } else {
        return (x_3928->prev)->var_finished_intrinsic_height_sum;
      }
    } else {
      if (x_3928->var_line_break) {
        return x_3928->var_intrinsic_height_external;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_3210(const auto &x_3944) {
  return RecordOverhead([&](const auto &x_3945) {
    if (x_3944->next == nullptr) {
      OptionMatch(
          x_3944->parent, [&](const auto &x_3947) { return MakeUnit(); },
          [&](const auto &x_3946) {
            auto x_3948 = x_3946;
            if (x_3948->meta->bb_0_has_bb_time_table) {
              if (!(x_3948->meta->bb_0_has_bb_dirtied && x_3948->meta->bb_0_bb_dirtied)) {
                x_3948->meta->bb_0_has_bb_dirtied = true;
                x_3948->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3948->meta->bb_0_bb_time_table, x_3948, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_3944->next, [&](const auto &x_3952) { return MakeUnit(); },
        [&](const auto &x_3951) {
          auto x_3953 = x_3951;
          if (x_3953->meta->bb_0_has_bb_time_table) {
            if (!(x_3953->meta->bb_0_has_bb_dirtied && x_3953->meta->bb_0_bb_dirtied)) {
              x_3953->meta->bb_0_has_bb_dirtied = true;
              x_3953->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3953->meta->bb_0_bb_time_table, x_3953, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3207(const auto &x_3956) {
  return RecordEval([&](const auto &x_3957) {
    if (x_3956->var_line_break) {
      return 0.;
    } else {
      return max(x_3956->var_intrinsic_height_external,
                 (x_3956->prev != nullptr) ? ((x_3956->prev)->var_intrinsic_current_line_height) : (0.));
    }
  });
}
Unit var_modified_x_3205(const auto &x_3964) {
  return RecordOverhead([&](const auto &x_3965) {
    OptionMatch(
        x_3964->next, [&](const auto &x_3967) { return MakeUnit(); },
        [&](const auto &x_3966) {
          auto x_3968 = x_3966;
          if (x_3968->meta->bb_0_has_bb_time_table) {
            if (!(x_3968->meta->bb_0_has_bb_dirtied && x_3968->meta->bb_0_bb_dirtied)) {
              x_3968->meta->bb_0_has_bb_dirtied = true;
              x_3968->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3968->meta->bb_0_bb_time_table, x_3968, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    if (x_3964->next == nullptr) {
      OptionMatch(
          x_3964->parent, [&](const auto &x_3972) { return MakeUnit(); },
          [&](const auto &x_3971) {
            auto x_3973 = x_3971;
            if (x_3973->meta->bb_3_has_bb_time_table) {
              if (!(x_3973->meta->bb_3_has_bb_dirtied && x_3973->meta->bb_3_bb_dirtied)) {
                x_3973->meta->bb_3_has_bb_dirtied = true;
                x_3973->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3973->meta->bb_3_bb_time_table, x_3973, static_cast<int64_t>(2));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3202(const auto &x_3976) {
  return RecordEval([&](const auto &x_3977) {
    return plus((x_3976->prev != nullptr) ? ((x_3976->prev)->var_intrinsic_height_sum) : (0.),
                x_3976->var_intrinsic_height_external);
  });
}
Unit var_modified_x_3200(const auto &x_3982) {
  return RecordOverhead([&](const auto &x_3983) {
    auto x_3984 = x_3982;
    if (x_3984->meta->bb_0_has_bb_time_table) {
      if (!(x_3984->meta->bb_0_has_bb_dirtied && x_3984->meta->bb_0_bb_dirtied)) {
        x_3984->meta->bb_0_has_bb_dirtied = true;
        x_3984->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3984->meta->bb_0_bb_time_table, x_3984, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3197(const auto &x_3987) {
  return RecordEval([&](const auto &x_3988) {
    if (eq(x_3987->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_3987->var_intrinsic_height_internal;
    }
  });
}
Unit var_modified_x_3195(const auto &x_3993) {
  return RecordOverhead([&](const auto &x_3994) {
    auto x_3995 = x_3993;
    if (x_3995->meta->bb_0_has_bb_time_table) {
      if (!(x_3995->meta->bb_0_has_bb_dirtied && x_3995->meta->bb_0_bb_dirtied)) {
        x_3995->meta->bb_0_has_bb_dirtied = true;
        x_3995->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3995->meta->bb_0_bb_time_table, x_3995, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_3998 = x_3993;
    if (x_3998->meta->bb_3_has_bb_time_table) {
      if (!(x_3998->meta->bb_3_has_bb_dirtied && x_3998->meta->bb_3_bb_dirtied)) {
        x_3998->meta->bb_3_has_bb_dirtied = true;
        x_3998->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3998->meta->bb_3_bb_time_table, x_3998, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3192(const auto &x_4001) {
  return RecordEval([&](const auto &x_4002) {
    if (eq(x_4001->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_4001->var_inside_svg) {
        return 0.;
      } else {
        if (x_4001->var_disabled) {
          return 0.;
        } else {
          if (neq(x_4001->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_4001->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               neq(x_4001->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
            if (x_4001->var_height_expr.c == DEStringCase::DHasSuffix_px) {
              return x_4001->var_height_expr.r.a0;
            } else {
              if (x_4001->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
                return x_4001->var_height_expr.r.a0;
              } else {
                return x_4001->var_height_expr.r.a0;
              }
            }
          } else {
            return plus(
                x_4001->var_children_intrinsic_height,
                (eq(x_4001->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (10.)
                    : ((x_4001->var_is_default_case)
                           ? (0.)
                           : ((eq(x_4001->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_4001->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_4001->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (10.)
                                         : ((eq(x_4001->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_4001->var_has_height_attr &&
                                                    (x_4001->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_4001->var_height_attr_expr.r.a0)
                                                       : ((x_4001->has_attr_viewBox)
                                                              ? (x_4001->attr_viewBox.r.a3)
                                                              : (mult(
                                                                    (x_4001->attr_viewBox.r.a3),
                                                                    divide(x_4001->var_height_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_4001->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_4001->var_has_height_attr)
                                                              ? (x_4001->var_height_attr_expr.r.a0)
                                                              : ((x_4001->has_attr_image_height &&
                                                                  (!x_4001->var_has_width_attr))
                                                                     ? (int_to_float(x_4001->attr_image_height))
                                                                     : ((neq(x_4001->attr_image_width,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult((x_4001->var_width_attr_expr.r.a0),
                                                                                    divide(
                                                                                        int_to_float(
                                                                                            x_4001->attr_image_height),
                                                                                        int_to_float(
                                                                                            x_4001->attr_image_width))))
                                                                            : (0.))))
                                                       : ((eq(x_4001->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (150.)
                                                              : ((eq(x_4001->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (150.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_3190(const auto &x_4081) {
  return RecordOverhead([&](const auto &x_4082) {
    auto x_4083 = x_4081;
    if (x_4083->meta->bb_3_has_bb_time_table) {
      if (!(x_4083->meta->bb_3_has_bb_dirtied && x_4083->meta->bb_3_bb_dirtied)) {
        x_4083->meta->bb_3_has_bb_dirtied = true;
        x_4083->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4083->meta->bb_3_bb_time_table, x_4083, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3187(const auto &x_4086) {
  return RecordEval([&](const auto &x_4087) {
    if (eq(x_4086->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_4086->var_inside_svg || x_4086->var_disabled)) {
      return true;
    } else {
      if ((x_4086->parent != nullptr) && (x_4086->parent)->var_is_flex_column) {
        return false;
      } else {
        if (eq(x_4086->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_4086->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_4086->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_4086->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
               eq(x_4086->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_3185(const auto &x_4112) {
  return RecordOverhead([&](const auto &x_4113) {
    auto x_4114 = x_4112;
    if (x_4114->meta->bb_0_has_bb_time_table) {
      if (!(x_4114->meta->bb_0_has_bb_dirtied && x_4114->meta->bb_0_bb_dirtied)) {
        x_4114->meta->bb_0_has_bb_dirtied = true;
        x_4114->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4114->meta->bb_0_bb_time_table, x_4114, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_4117 = x_4112;
    if (x_4117->meta->bb_3_has_bb_time_table) {
      if (!(x_4117->meta->bb_3_has_bb_dirtied && x_4117->meta->bb_3_bb_dirtied)) {
        x_4117->meta->bb_3_has_bb_dirtied = true;
        x_4117->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4117->meta->bb_3_bb_time_table, x_4117, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3182(const auto &x_4120) {
  return RecordEval([&](const auto &x_4121) {
    if (x_4120->has_prop_height) {
      return x_4120->prop_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit var_modified_x_3180(const auto &x_4124) {
  return RecordOverhead([&](const auto &x_4125) {
    auto x_4126 = x_4124;
    if (x_4126->meta->bb_0_has_bb_time_table) {
      if (!(x_4126->meta->bb_0_has_bb_dirtied && x_4126->meta->bb_0_bb_dirtied)) {
        x_4126->meta->bb_0_has_bb_dirtied = true;
        x_4126->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4126->meta->bb_0_bb_time_table, x_4126, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3177(const auto &x_4129) {
  return RecordEval([&](const auto &x_4130) {
    if (x_4129->last != nullptr) {
      return plus((x_4129->last)->var_finished_intrinsic_height_sum, (x_4129->last)->var_intrinsic_current_line_height);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3175(const auto &x_4135) {
  return RecordOverhead([&](const auto &x_4136) {
    OptionMatch(
        x_4135->next, [&](const auto &x_4138) { return MakeUnit(); },
        [&](const auto &x_4137) {
          auto x_4139 = x_4137;
          if (x_4139->meta->bb_0_has_bb_time_table) {
            if (!(x_4139->meta->bb_0_has_bb_dirtied && x_4139->meta->bb_0_bb_dirtied)) {
              x_4139->meta->bb_0_has_bb_dirtied = true;
              x_4139->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_4139->meta->bb_0_bb_time_table, x_4139, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    if (x_4135->next == nullptr) {
      OptionMatch(
          x_4135->parent, [&](const auto &x_4143) { return MakeUnit(); },
          [&](const auto &x_4142) {
            auto x_4144 = x_4142;
            if (x_4144->meta->bb_3_has_bb_time_table) {
              if (!(x_4144->meta->bb_3_has_bb_dirtied && x_4144->meta->bb_3_bb_dirtied)) {
                x_4144->meta->bb_3_has_bb_dirtied = true;
                x_4144->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_4144->meta->bb_3_bb_time_table, x_4144, static_cast<int64_t>(2));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3172(const auto &x_4147) {
  return RecordEval([&](const auto &x_4148) {
    return plus((x_4147->prev != nullptr) ? ((x_4147->prev)->var_intrinsic_width_sum) : (0.),
                x_4147->var_intrinsic_width_external);
  });
}
Unit var_modified_x_3170(const auto &x_4153) {
  return RecordOverhead([&](const auto &x_4154) {
    if (x_4153->next == nullptr) {
      OptionMatch(
          x_4153->parent, [&](const auto &x_4156) { return MakeUnit(); },
          [&](const auto &x_4155) {
            auto x_4157 = x_4155;
            if (x_4157->meta->bb_0_has_bb_time_table) {
              if (!(x_4157->meta->bb_0_has_bb_dirtied && x_4157->meta->bb_0_bb_dirtied)) {
                x_4157->meta->bb_0_has_bb_dirtied = true;
                x_4157->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_4157->meta->bb_0_bb_time_table, x_4157, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_4153->next, [&](const auto &x_4161) { return MakeUnit(); },
        [&](const auto &x_4160) {
          auto x_4162 = x_4160;
          if (x_4162->meta->bb_0_has_bb_time_table) {
            if (!(x_4162->meta->bb_0_has_bb_dirtied && x_4162->meta->bb_0_bb_dirtied)) {
              x_4162->meta->bb_0_has_bb_dirtied = true;
              x_4162->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_4162->meta->bb_0_bb_time_table, x_4162, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3167(const auto &x_4165) {
  return RecordEval([&](const auto &x_4166) {
    return max(x_4165->var_intrinsic_current_line_width,
               (x_4165->prev != nullptr) ? ((x_4165->prev)->var_intrinsic_width_max) : (0.));
  });
}
Unit var_modified_x_3165(const auto &x_4171) {
  return RecordOverhead([&](const auto &x_4172) {
    auto x_4173 = x_4171;
    if (x_4173->meta->bb_0_has_bb_time_table) {
      if (!(x_4173->meta->bb_0_has_bb_dirtied && x_4173->meta->bb_0_bb_dirtied)) {
        x_4173->meta->bb_0_has_bb_dirtied = true;
        x_4173->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4173->meta->bb_0_bb_time_table, x_4173, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    OptionMatch(
        x_4171->next, [&](const auto &x_4177) { return MakeUnit(); },
        [&](const auto &x_4176) {
          auto x_4178 = x_4176;
          if (x_4178->meta->bb_0_has_bb_time_table) {
            if (!(x_4178->meta->bb_0_has_bb_dirtied && x_4178->meta->bb_0_bb_dirtied)) {
              x_4178->meta->bb_0_has_bb_dirtied = true;
              x_4178->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_4178->meta->bb_0_bb_time_table, x_4178, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3162(const auto &x_4181) {
  return RecordEval([&](const auto &x_4182) {
    return plus(x_4181->var_intrinsic_width_external,
                ((x_4181->prev != nullptr) && (!(x_4181->prev)->var_line_break))
                    ? ((x_4181->prev)->var_intrinsic_current_line_width)
                    : (0.));
  });
}
Unit var_modified_x_3160(const auto &x_4189) {
  return RecordOverhead([&](const auto &x_4190) {
    auto x_4191 = x_4189;
    if (x_4191->meta->bb_0_has_bb_time_table) {
      if (!(x_4191->meta->bb_0_has_bb_dirtied && x_4191->meta->bb_0_bb_dirtied)) {
        x_4191->meta->bb_0_has_bb_dirtied = true;
        x_4191->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4191->meta->bb_0_bb_time_table, x_4191, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3157(const auto &x_4194) {
  return RecordEval([&](const auto &x_4195) {
    if (eq(x_4194->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_4194->var_intrinsic_width_internal;
    }
  });
}
Unit var_modified_x_3155(const auto &x_4200) {
  return RecordOverhead([&](const auto &x_4201) {
    auto x_4202 = x_4200;
    if (x_4202->meta->bb_0_has_bb_time_table) {
      if (!(x_4202->meta->bb_0_has_bb_dirtied && x_4202->meta->bb_0_bb_dirtied)) {
        x_4202->meta->bb_0_has_bb_dirtied = true;
        x_4202->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4202->meta->bb_0_bb_time_table, x_4202, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_4205 = x_4200;
    if (x_4205->meta->bb_3_has_bb_time_table) {
      if (!(x_4205->meta->bb_3_has_bb_dirtied && x_4205->meta->bb_3_bb_dirtied)) {
        x_4205->meta->bb_3_has_bb_dirtied = true;
        x_4205->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4205->meta->bb_3_bb_time_table, x_4205, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3152(const auto &x_4208) {
  return RecordEval([&](const auto &x_4209) {
    if (eq(x_4208->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_4208->var_inside_svg) {
        return 0.;
      } else {
        if (x_4208->var_disabled) {
          return 0.;
        } else {
          if (neq(x_4208->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_4208->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               (neq(x_4208->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
                (neq(x_4208->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
                 (!(x_4208->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
            if (x_4208->var_width_expr.c == DEStringCase::DHasSuffix_px) {
              return x_4208->var_width_expr.r.a0;
            } else {
              return x_4208->var_width_expr.r.a0;
            }
          } else {
            return plus(
                x_4208->var_children_intrinsic_width,
                (eq(x_4208->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (100.)
                    : ((x_4208->var_is_default_case)
                           ? (0.)
                           : ((eq(x_4208->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_4208->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_4208->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (100.)
                                         : ((eq(x_4208->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_4208->var_has_width_attr &&
                                                    (x_4208->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_4208->var_width_attr_expr.r.a0)
                                                       : (((!x_4208->var_has_width_attr) && x_4208->has_attr_viewBox)
                                                              ? (x_4208->attr_viewBox.r.a2)
                                                              : (mult((x_4208->attr_viewBox.r.a2),
                                                                      divide(x_4208->var_width_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_4208->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_4208->var_has_width_attr)
                                                              ? (x_4208->var_width_attr_expr.r.a0)
                                                              : ((x_4208->has_attr_image_width &&
                                                                  (!x_4208->var_has_height_attr))
                                                                     ? (int_to_float(x_4208->attr_image_width))
                                                                     : ((neq(x_4208->attr_image_height,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(
                                                                                  (x_4208->var_height_attr_expr.r.a0),
                                                                                  divide(
                                                                                      int_to_float(
                                                                                          x_4208->attr_image_width),
                                                                                      int_to_float(
                                                                                          x_4208->attr_image_height))))
                                                                            : (0.))))
                                                       : ((eq(x_4208->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (300.)
                                                              : ((eq(x_4208->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (300.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_3150(const auto &x_4292) {
  return RecordOverhead([&](const auto &x_4293) {
    auto x_4294 = x_4292;
    if (x_4294->meta->bb_0_has_bb_time_table) {
      if (!(x_4294->meta->bb_0_has_bb_dirtied && x_4294->meta->bb_0_bb_dirtied)) {
        x_4294->meta->bb_0_has_bb_dirtied = true;
        x_4294->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4294->meta->bb_0_bb_time_table, x_4294, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3147(const auto &x_4297) {
  return RecordEval([&](const auto &x_4298) {
    if (x_4297->last != nullptr) {
      return (x_4297->last)->var_intrinsic_width_max;
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3145(const auto &x_4301) {
  return RecordOverhead([&](const auto &x_4302) {
    auto x_4303 = x_4301;
    if (x_4303->meta->bb_3_has_bb_time_table) {
      if (!(x_4303->meta->bb_3_has_bb_dirtied && x_4303->meta->bb_3_bb_dirtied)) {
        x_4303->meta->bb_3_has_bb_dirtied = true;
        x_4303->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4303->meta->bb_3_bb_time_table, x_4303, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3142(const auto &x_4306) {
  return RecordEval([&](const auto &x_4307) {
    if (eq(x_4306->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_4306->var_inside_svg || x_4306->var_disabled)) {
      return true;
    } else {
      if ((x_4306->parent != nullptr) && (x_4306->parent)->var_is_flex_row) {
        return false;
      } else {
        if (eq(x_4306->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_4306->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_4306->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_4306->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
               eq(x_4306->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_3140(const auto &x_4332) {
  return RecordOverhead([&](const auto &x_4333) {
    auto x_4334 = x_4332;
    if (x_4334->meta->bb_0_has_bb_time_table) {
      if (!(x_4334->meta->bb_0_has_bb_dirtied && x_4334->meta->bb_0_bb_dirtied)) {
        x_4334->meta->bb_0_has_bb_dirtied = true;
        x_4334->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4334->meta->bb_0_bb_time_table, x_4334, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3137(const auto &x_4337) {
  return RecordEval([&](const auto &x_4338) {
    if (eq(x_4337->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return true;
    } else {
      if (x_4337->var_inside_svg) {
        return true;
      } else {
        if (x_4337->var_disabled) {
          return true;
        } else {if ( eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_html)) || eq(x_4337->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
            return true;
          } else {
            return false;
          }
        }
      }
    }
  });
}
Unit var_modified_x_3135(const auto &x_4345) {
  return RecordOverhead([&](const auto &x_4346) {
    auto x_4347 = x_4345;
    if (x_4347->meta->bb_0_has_bb_time_table) {
      if (!(x_4347->meta->bb_0_has_bb_dirtied && x_4347->meta->bb_0_bb_dirtied)) {
        x_4347->meta->bb_0_has_bb_dirtied = true;
        x_4347->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4347->meta->bb_0_bb_time_table, x_4347, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_4350 = x_4345;
    if (x_4350->meta->bb_3_has_bb_time_table) {
      if (!(x_4350->meta->bb_3_has_bb_dirtied && x_4350->meta->bb_3_bb_dirtied)) {
        x_4350->meta->bb_3_has_bb_dirtied = true;
        x_4350->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4350->meta->bb_3_bb_time_table, x_4350, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3132(const auto &x_4353) {
  return RecordEval([&](const auto &x_4354) {
    if (x_4353->has_prop_width) {
      return x_4353->prop_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit eval_stmts_x_3031(const auto &x_3130) { return MakeUnit(); }
Unit eval_stmts_x_3030(const auto &x_3131) {
  WriteMetric();
  auto x_3133 = eval_expr_x_3132(x_3131);
  if (x_3131->has_var_width_expr) {
    if (!EqualValue(x_3131->var_width_expr, x_3133)) {
      var_modified_x_3135(x_3131);
    }
  }
  x_3131->has_var_width_expr = true;
  x_3131->var_width_expr = AsDEString(x_3133);
  WriteMetric();
  auto x_3138 = eval_expr_x_3137(x_3131);
  if (x_3131->has_var_is_default_case) {
    if (!EqualValue(x_3131->var_is_default_case, x_3138)) {
      var_modified_x_3140(x_3131);
    }
  }
  x_3131->has_var_is_default_case = true;
  x_3131->var_is_default_case = Asbool(x_3138);
  WriteMetric();
  auto x_3143 = eval_expr_x_3142(x_3131);
  if (x_3131->has_var_intrinsic_width_is_width) {
    if (!EqualValue(x_3131->var_intrinsic_width_is_width, x_3143)) {
      var_modified_x_3145(x_3131);
    }
  }
  x_3131->has_var_intrinsic_width_is_width = true;
  x_3131->var_intrinsic_width_is_width = Asbool(x_3143);
  WriteMetric();
  auto x_3148 = eval_expr_x_3147(x_3131);
  if (x_3131->has_var_children_intrinsic_width) {
    if (!EqualValue(x_3131->var_children_intrinsic_width, x_3148)) {
      var_modified_x_3150(x_3131);
    }
  }
  x_3131->has_var_children_intrinsic_width = true;
  x_3131->var_children_intrinsic_width = Asdouble(x_3148);
  WriteMetric();
  auto x_3153 = eval_expr_x_3152(x_3131);
  if (x_3131->has_var_intrinsic_width_internal) {
    if (!EqualValue(x_3131->var_intrinsic_width_internal, x_3153)) {
      var_modified_x_3155(x_3131);
    }
  }
  x_3131->has_var_intrinsic_width_internal = true;
  x_3131->var_intrinsic_width_internal = Asdouble(x_3153);
  WriteMetric();
  auto x_3158 = eval_expr_x_3157(x_3131);
  if (x_3131->has_var_intrinsic_width_external) {
    if (!EqualValue(x_3131->var_intrinsic_width_external, x_3158)) {
      var_modified_x_3160(x_3131);
    }
  }
  x_3131->has_var_intrinsic_width_external = true;
  x_3131->var_intrinsic_width_external = Asdouble(x_3158);
  WriteMetric();
  auto x_3163 = eval_expr_x_3162(x_3131);
  if (x_3131->has_var_intrinsic_current_line_width) {
    if (!EqualValue(x_3131->var_intrinsic_current_line_width, x_3163)) {
      var_modified_x_3165(x_3131);
    }
  }
  x_3131->has_var_intrinsic_current_line_width = true;
  x_3131->var_intrinsic_current_line_width = Asdouble(x_3163);
  WriteMetric();
  auto x_3168 = eval_expr_x_3167(x_3131);
  if (x_3131->has_var_intrinsic_width_max) {
    if (!EqualValue(x_3131->var_intrinsic_width_max, x_3168)) {
      var_modified_x_3170(x_3131);
    }
  }
  x_3131->has_var_intrinsic_width_max = true;
  x_3131->var_intrinsic_width_max = Asdouble(x_3168);
  WriteMetric();
  auto x_3173 = eval_expr_x_3172(x_3131);
  if (x_3131->has_var_intrinsic_width_sum) {
    if (!EqualValue(x_3131->var_intrinsic_width_sum, x_3173)) {
      var_modified_x_3175(x_3131);
    }
  }
  x_3131->has_var_intrinsic_width_sum = true;
  x_3131->var_intrinsic_width_sum = Asdouble(x_3173);
  WriteMetric();
  auto x_3178 = eval_expr_x_3177(x_3131);
  if (x_3131->has_var_children_intrinsic_height) {
    if (!EqualValue(x_3131->var_children_intrinsic_height, x_3178)) {
      var_modified_x_3180(x_3131);
    }
  }
  x_3131->has_var_children_intrinsic_height = true;
  x_3131->var_children_intrinsic_height = Asdouble(x_3178);
  WriteMetric();
  auto x_3183 = eval_expr_x_3182(x_3131);
  if (x_3131->has_var_height_expr) {
    if (!EqualValue(x_3131->var_height_expr, x_3183)) {
      var_modified_x_3185(x_3131);
    }
  }
  x_3131->has_var_height_expr = true;
  x_3131->var_height_expr = AsDEString(x_3183);
  WriteMetric();
  auto x_3188 = eval_expr_x_3187(x_3131);
  if (x_3131->has_var_intrinsic_height_is_height) {
    if (!EqualValue(x_3131->var_intrinsic_height_is_height, x_3188)) {
      var_modified_x_3190(x_3131);
    }
  }
  x_3131->has_var_intrinsic_height_is_height = true;
  x_3131->var_intrinsic_height_is_height = Asbool(x_3188);
  WriteMetric();
  auto x_3193 = eval_expr_x_3192(x_3131);
  if (x_3131->has_var_intrinsic_height_internal) {
    if (!EqualValue(x_3131->var_intrinsic_height_internal, x_3193)) {
      var_modified_x_3195(x_3131);
    }
  }
  x_3131->has_var_intrinsic_height_internal = true;
  x_3131->var_intrinsic_height_internal = Asdouble(x_3193);
  WriteMetric();
  auto x_3198 = eval_expr_x_3197(x_3131);
  if (x_3131->has_var_intrinsic_height_external) {
    if (!EqualValue(x_3131->var_intrinsic_height_external, x_3198)) {
      var_modified_x_3200(x_3131);
    }
  }
  x_3131->has_var_intrinsic_height_external = true;
  x_3131->var_intrinsic_height_external = Asdouble(x_3198);
  WriteMetric();
  auto x_3203 = eval_expr_x_3202(x_3131);
  if (x_3131->has_var_intrinsic_height_sum) {
    if (!EqualValue(x_3131->var_intrinsic_height_sum, x_3203)) {
      var_modified_x_3205(x_3131);
    }
  }
  x_3131->has_var_intrinsic_height_sum = true;
  x_3131->var_intrinsic_height_sum = Asdouble(x_3203);
  WriteMetric();
  auto x_3208 = eval_expr_x_3207(x_3131);
  if (x_3131->has_var_intrinsic_current_line_height) {
    if (!EqualValue(x_3131->var_intrinsic_current_line_height, x_3208)) {
      var_modified_x_3210(x_3131);
    }
  }
  x_3131->has_var_intrinsic_current_line_height = true;
  x_3131->var_intrinsic_current_line_height = Asdouble(x_3208);
  WriteMetric();
  auto x_3213 = eval_expr_x_3212(x_3131);
  if (x_3131->has_var_finished_intrinsic_height_sum) {
    if (!EqualValue(x_3131->var_finished_intrinsic_height_sum, x_3213)) {
      var_modified_x_3215(x_3131);
    }
  }
  x_3131->has_var_finished_intrinsic_height_sum = true;
  x_3131->var_finished_intrinsic_height_sum = Asdouble(x_3213);
  return MakeUnit();
}
Unit eval_stmts_x_3029(const auto &x_3217) {
  WriteMetric();
  auto x_3219 = eval_expr_x_3218(x_3217);
  if (x_3217->has_var_display) {
    if (!EqualValue(x_3217->var_display, x_3219)) {
      var_modified_x_3221(x_3217);
    }
  }
  x_3217->has_var_display = true;
  x_3217->var_display = AsDEString(x_3219);
  WriteMetric();
  auto x_3224 = eval_expr_x_3223(x_3217);
  if (x_3217->has_var_position) {
    if (!EqualValue(x_3217->var_position, x_3224)) {
      var_modified_x_3226(x_3217);
    }
  }
  x_3217->has_var_position = true;
  x_3217->var_position = AsDEString(x_3224);
  WriteMetric();
  auto x_3229 = eval_expr_x_3228(x_3217);
  if (x_3217->has_var_flex_grow) {
    if (!EqualValue(x_3217->var_flex_grow, x_3229)) {
      var_modified_x_3231(x_3217);
    }
  }
  x_3217->has_var_flex_grow = true;
  x_3217->var_flex_grow = Asdouble(x_3229);
  WriteMetric();
  auto x_3234 = eval_expr_x_3233(x_3217);
  if (x_3217->has_var_flex_shrink) {
    if (!EqualValue(x_3217->var_flex_shrink, x_3234)) {
      var_modified_x_3236(x_3217);
    }
  }
  x_3217->has_var_flex_shrink = true;
  x_3217->var_flex_shrink = Asdouble(x_3234);
  WriteMetric();
  auto x_3239 = eval_expr_x_3238(x_3217);
  if (x_3217->has_var_flex_grow_sum) {
    if (!EqualValue(x_3217->var_flex_grow_sum, x_3239)) {
      var_modified_x_3241(x_3217);
    }
  }
  x_3217->has_var_flex_grow_sum = true;
  x_3217->var_flex_grow_sum = Asdouble(x_3239);
  WriteMetric();
  auto x_3244 = eval_expr_x_3243(x_3217);
  if (x_3217->has_var_flex_shrink_sum) {
    if (!EqualValue(x_3217->var_flex_shrink_sum, x_3244)) {
      var_modified_x_3246(x_3217);
    }
  }
  x_3217->has_var_flex_shrink_sum = true;
  x_3217->var_flex_shrink_sum = Asdouble(x_3244);
  WriteMetric();
  auto x_3249 = eval_expr_x_3248(x_3217);
  if (x_3217->has_var_flex_direction) {
    if (!EqualValue(x_3217->var_flex_direction, x_3249)) {
      var_modified_x_3251(x_3217);
    }
  }
  x_3217->has_var_flex_direction = true;
  x_3217->var_flex_direction = AsDEString(x_3249);
  WriteMetric();
  auto x_3254 = eval_expr_x_3253(x_3217);
  if (x_3217->has_var_is_flex_row) {
    if (!EqualValue(x_3217->var_is_flex_row, x_3254)) {
      var_modified_x_3256(x_3217);
    }
  }
  x_3217->has_var_is_flex_row = true;
  x_3217->var_is_flex_row = Asbool(x_3254);
  WriteMetric();
  auto x_3259 = eval_expr_x_3258(x_3217);
  if (x_3217->has_var_is_flex_column) {
    if (!EqualValue(x_3217->var_is_flex_column, x_3259)) {
      var_modified_x_3261(x_3217);
    }
  }
  x_3217->has_var_is_flex_column = true;
  x_3217->var_is_flex_column = Asbool(x_3259);
  WriteMetric();
  auto x_3264 = eval_expr_x_3263(x_3217);
  if (x_3217->has_var_width_attr_expr) {
    if (!EqualValue(x_3217->var_width_attr_expr, x_3264)) {
      var_modified_x_3266(x_3217);
    }
  }
  x_3217->has_var_width_attr_expr = true;
  x_3217->var_width_attr_expr = AsDEString(x_3264);
  WriteMetric();
  auto x_3269 = eval_expr_x_3268(x_3217);
  if (x_3217->has_var_has_width_attr) {
    if (!EqualValue(x_3217->var_has_width_attr, x_3269)) {
      var_modified_x_3271(x_3217);
    }
  }
  x_3217->has_var_has_width_attr = true;
  x_3217->var_has_width_attr = Asbool(x_3269);
  WriteMetric();
  auto x_3274 = eval_expr_x_3273(x_3217);
  if (x_3217->has_var_height_attr_expr) {
    if (!EqualValue(x_3217->var_height_attr_expr, x_3274)) {
      var_modified_x_3276(x_3217);
    }
  }
  x_3217->has_var_height_attr_expr = true;
  x_3217->var_height_attr_expr = AsDEString(x_3274);
  WriteMetric();
  auto x_3279 = eval_expr_x_3278(x_3217);
  if (x_3217->has_var_has_height_attr) {
    if (!EqualValue(x_3217->var_has_height_attr, x_3279)) {
      var_modified_x_3281(x_3217);
    }
  }
  x_3217->has_var_has_height_attr = true;
  x_3217->var_has_height_attr = Asbool(x_3279);
  WriteMetric();
  auto x_3284 = eval_expr_x_3283(x_3217);
  if (x_3217->has_var_is_svg_block) {
    if (!EqualValue(x_3217->var_is_svg_block, x_3284)) {
      var_modified_x_3286(x_3217);
    }
  }
  x_3217->has_var_is_svg_block = true;
  x_3217->var_is_svg_block = Asbool(x_3284);
  WriteMetric();
  auto x_3289 = eval_expr_x_3288(x_3217);
  if (x_3217->has_var_inside_svg) {
    if (!EqualValue(x_3217->var_inside_svg, x_3289)) {
      var_modified_x_3291(x_3217);
    }
  }
  x_3217->has_var_inside_svg = true;
  x_3217->var_inside_svg = Asbool(x_3289);
  WriteMetric();
  auto x_3294 = eval_expr_x_3293(x_3217);
  if (x_3217->has_var_disabled) {
    if (!EqualValue(x_3217->var_disabled, x_3294)) {
      var_modified_x_3296(x_3217);
    }
  }
  x_3217->has_var_disabled = true;
  x_3217->var_disabled = Asbool(x_3294);
  WriteMetric();
  auto x_3299 = eval_expr_x_3298(x_3217);
  if (x_3217->has_var_visible) {
    if (!EqualValue(x_3217->var_visible, x_3299)) {
      var_modified_x_3301(x_3217);
    }
  }
  x_3217->has_var_visible = true;
  x_3217->var_visible = Asbool(x_3299);
  WriteMetric();
  auto x_3304 = eval_expr_x_3303(x_3217);
  if (x_3217->has_var_line_break) {
    if (!EqualValue(x_3217->var_line_break, x_3304)) {
      var_modified_x_3306(x_3217);
    }
  }
  x_3217->has_var_line_break = true;
  x_3217->var_line_break = Asbool(x_3304);
  return MakeUnit();
}
Unit eval_stmts_x_3028(const auto &x_3308) {
  WriteMetric();
  auto x_3310 = eval_expr_x_3309(x_3308);
  if (x_3308->has_var_box_width) {
    if (!EqualValue(x_3308->var_box_width, x_3310)) {
      var_modified_x_3312(x_3308);
    }
  }
  x_3308->has_var_box_width = true;
  x_3308->var_box_width = Asdouble(x_3310);
  WriteMetric();
  auto x_3315 = eval_expr_x_3314(x_3308);
  if (x_3308->has_var_box_height) {
    if (!EqualValue(x_3308->var_box_height, x_3315)) {
      var_modified_x_3317(x_3308);
    }
  }
  x_3308->has_var_box_height = true;
  x_3308->var_box_height = Asdouble(x_3315);
  WriteMetric();
  auto x_3320 = eval_expr_x_3319(x_3308);
  if (x_3308->has_var_left_over) {
    if (!EqualValue(x_3308->var_left_over, x_3320)) {
      var_modified_x_3322(x_3308);
    }
  }
  x_3308->has_var_left_over = true;
  x_3308->var_left_over = Asdouble(x_3320);
  WriteMetric();
  auto x_3325 = eval_expr_x_3324(x_3308);
  if (x_3308->has_var_flex_amount) {
    if (!EqualValue(x_3308->var_flex_amount, x_3325)) {
      var_modified_x_3327(x_3308);
    }
  }
  x_3308->has_var_flex_amount = true;
  x_3308->var_flex_amount = Asdouble(x_3325);
  WriteMetric();
  auto x_3330 = eval_expr_x_3329(x_3308);
  if (x_3308->has_var_flex_unit) {
    if (!EqualValue(x_3308->var_flex_unit, x_3330)) {
      var_modified_x_3332(x_3308);
    }
  }
  x_3308->has_var_flex_unit = true;
  x_3308->var_flex_unit = Asdouble(x_3330);
  WriteMetric();
  auto x_3335 = eval_expr_x_3334(x_3308);
  if (x_3308->has_var_x) {
    if (!EqualValue(x_3308->var_x, x_3335)) {
      var_modified_x_3337(x_3308);
    }
  }
  x_3308->has_var_x = true;
  x_3308->var_x = Asdouble(x_3335);
  WriteMetric();
  auto x_3340 = eval_expr_x_3339(x_3308);
  if (x_3308->has_var_width_internal) {
    if (!EqualValue(x_3308->var_width_internal, x_3340)) {
      var_modified_x_3342(x_3308);
    }
  }
  x_3308->has_var_width_internal = true;
  x_3308->var_width_internal = Asdouble(x_3340);
  WriteMetric();
  auto x_3345 = eval_expr_x_3344(x_3308);
  if (x_3308->has_var_width_external) {
    if (!EqualValue(x_3308->var_width_external, x_3345)) {
      var_modified_x_3347(x_3308);
    }
  }
  x_3308->has_var_width_external = true;
  x_3308->var_width_external = Asdouble(x_3345);
  WriteMetric();
  auto x_3350 = eval_expr_x_3349(x_3308);
  if (x_3308->has_var_y) {
    if (!EqualValue(x_3308->var_y, x_3350)) {
      var_modified_x_3352(x_3308);
    }
  }
  x_3308->has_var_y = true;
  x_3308->var_y = Asdouble(x_3350);
  WriteMetric();
  auto x_3355 = eval_expr_x_3354(x_3308);
  if (x_3308->has_var_height_internal) {
    if (!EqualValue(x_3308->var_height_internal, x_3355)) {
      var_modified_x_3357(x_3308);
    }
  }
  x_3308->has_var_height_internal = true;
  x_3308->var_height_internal = Asdouble(x_3355);
  WriteMetric();
  auto x_3360 = eval_expr_x_3359(x_3308);
  if (x_3308->has_var_height_external) {
    if (!EqualValue(x_3308->var_height_external, x_3360)) {
      var_modified_x_3362(x_3308);
    }
  }
  x_3308->has_var_height_external = true;
  x_3308->var_height_external = Asdouble(x_3360);
  WriteMetric();
  auto x_3365 = eval_expr_x_3364(x_3308);
  if (x_3308->has_var_line_height) {
    if (!EqualValue(x_3308->var_line_height, x_3365)) {
      var_modified_x_3367(x_3308);
    }
  }
  x_3308->has_var_line_height = true;
  x_3308->var_line_height = Asdouble(x_3365);
  return MakeUnit();
}
Unit x_2755(const auto &x_2756, const auto &x_2757, const auto &x_2758) {
  auto x_2759 = ListHeadExn(x_2756);
  auto x_2760 = ListTailExn(x_2756);
  if (ListIsEmpty(x_2760)) {
    auto x_2761 = ListSplitN(x_2757->children, x_2759);
    OutputChangeMetric(IntAdd(layout_size_x_2715(ListNthExn(x_2757->children, x_2759)), layout_size_x_2715(x_2758)));
    x_2757->children = ListAppend(Zro(x_2761), Cons(x_2758, ListTailExn(Fst(x_2761))));
    return MakeUnit();
  } else {
    return x_2755(x_2760, ListNthExn(x_2757->children, x_2759), x_2758);
  }
}
Unit replace_layout_node_x_2754(const auto &x_2756, const auto &x_2757, const auto &x_2758) {
  return x_2755(x_2756, x_2757, x_2758);
}
Unit x_2762(const auto &x_2763, const auto &x_2764, const auto &x_2765) {
  auto x_2766 = ListHeadExn(x_2763);
  auto x_2767 = ListTailExn(x_2763);
  if (ListIsEmpty(x_2767)) {
    OutputChangeMetric(layout_size_x_2715(x_2765));
    auto x_2768 = ListSplitN(x_2764->children, x_2766);
    x_2764->children = ListAppend(Zro(x_2768), Cons(x_2765, Fst(x_2768)));
    return MakeUnit();
  } else {
    return x_2762(x_2767, ListNthExn(x_2764->children, x_2766), x_2765);
  }
}
Unit add_layout_node_x_2752(const auto &x_2763, const auto &x_2764, const auto &x_2765) {
  return x_2762(x_2763, x_2764, x_2765);
}
Unit x_2769(const auto &x_2770, const auto &x_2771, const auto &x_2772) {
  auto x_2773 = ListHeadExn(x_2770);
  auto x_2774 = ListTailExn(x_2770);
  if (ListIsEmpty(x_2774)) {
    OutputChangeMetric(layout_size_x_2715(ListNthExn(x_2771->children, x_2773)));
    auto x_2775 = ListSplitN(x_2771->children, x_2773);
    x_2771->children = ListAppend(Zro(x_2775), ListTailExn(Fst(x_2775)));
    return MakeUnit();
  } else {
    return x_2769(x_2774, ListNthExn(x_2771->children, x_2773), x_2772);
  }
}
Unit remove_layout_node_x_2750(const auto &x_2770, const auto &x_2771, const auto &x_2772) {
  return x_2769(x_2770, x_2771, x_2772);
}
Unit x_2776(const auto &x_2777, const auto &x_2778, const auto &x_2779) {
  return ListMatch(
      x_2777,
      [&](const auto &x_2782) {
        auto x_2783 = Zro(x_2779);
        auto x_2784 = Zro(x_2783);
        auto x_2785 = Fst(x_2783);
        auto x_2786 = Fst(x_2779);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4447 = x_2784;
        if (x_4447 == "attributes") {
          std::string x_4448 = x_2785;
          if (x_4448 == "width") {
            WriteMetric();
            x_2778->has_attr_width = true;
            x_2778->attr_width = AsDEString(x_2786);
            if (x_2778->meta->bb_1_has_bb_time_table) {
              if (!(x_2778->meta->bb_1_has_bb_dirtied && x_2778->meta->bb_1_bb_dirtied)) {
                x_2778->meta->bb_1_has_bb_dirtied = true;
                x_2778->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_1_bb_time_table, x_2778, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4448 == "image_height") {
            WriteMetric();
            x_2778->has_attr_image_height = true;
            x_2778->attr_image_height = Asint64_t(x_2786);
            if (x_2778->meta->bb_0_has_bb_time_table) {
              if (!(x_2778->meta->bb_0_has_bb_dirtied && x_2778->meta->bb_0_bb_dirtied)) {
                x_2778->meta->bb_0_has_bb_dirtied = true;
                x_2778->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_0_bb_time_table, x_2778, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4448 == "image_width") {
            WriteMetric();
            x_2778->has_attr_image_width = true;
            x_2778->attr_image_width = Asint64_t(x_2786);
            if (x_2778->meta->bb_0_has_bb_time_table) {
              if (!(x_2778->meta->bb_0_has_bb_dirtied && x_2778->meta->bb_0_bb_dirtied)) {
                x_2778->meta->bb_0_has_bb_dirtied = true;
                x_2778->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_0_bb_time_table, x_2778, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4448 == "height") {
            WriteMetric();
            x_2778->has_attr_height = true;
            x_2778->attr_height = AsDEString(x_2786);
            if (x_2778->meta->bb_1_has_bb_time_table) {
              if (!(x_2778->meta->bb_1_has_bb_dirtied && x_2778->meta->bb_1_bb_dirtied)) {
                x_2778->meta->bb_1_has_bb_dirtied = true;
                x_2778->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_1_bb_time_table, x_2778, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4448 == "viewBox") {
            WriteMetric();
            x_2778->has_attr_viewBox = true;
            x_2778->attr_viewBox = AsDEString(x_2786);
            if (x_2778->meta->bb_0_has_bb_time_table) {
              if (!(x_2778->meta->bb_0_has_bb_dirtied && x_2778->meta->bb_0_bb_dirtied)) {
                x_2778->meta->bb_0_has_bb_dirtied = true;
                x_2778->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_0_bb_time_table, x_2778, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4447 == "properties") {
          std::string x_4449 = x_2785;
          if (x_4449 == "width") {
            WriteMetric();
            x_2778->has_prop_width = true;
            x_2778->prop_width = AsDEString(x_2786);
            if (x_2778->meta->bb_0_has_bb_time_table) {
              if (!(x_2778->meta->bb_0_has_bb_dirtied && x_2778->meta->bb_0_bb_dirtied)) {
                x_2778->meta->bb_0_has_bb_dirtied = true;
                x_2778->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_0_bb_time_table, x_2778, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4449 == "flex-grow") {
            WriteMetric();
            x_2778->has_prop_flex_grow = true;
            x_2778->prop_flex_grow = AsDEString(x_2786);
            if (x_2778->meta->bb_1_has_bb_time_table) {
              if (!(x_2778->meta->bb_1_has_bb_dirtied && x_2778->meta->bb_1_bb_dirtied)) {
                x_2778->meta->bb_1_has_bb_dirtied = true;
                x_2778->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_1_bb_time_table, x_2778, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4449 == "height") {
            WriteMetric();
            x_2778->has_prop_height = true;
            x_2778->prop_height = AsDEString(x_2786);
            if (x_2778->meta->bb_0_has_bb_time_table) {
              if (!(x_2778->meta->bb_0_has_bb_dirtied && x_2778->meta->bb_0_bb_dirtied)) {
                x_2778->meta->bb_0_has_bb_dirtied = true;
                x_2778->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_0_bb_time_table, x_2778, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4449 == "display") {
            WriteMetric();
            x_2778->has_prop_display = true;
            x_2778->prop_display = AsDEString(x_2786);
            if (x_2778->meta->bb_1_has_bb_time_table) {
              if (!(x_2778->meta->bb_1_has_bb_dirtied && x_2778->meta->bb_1_bb_dirtied)) {
                x_2778->meta->bb_1_has_bb_dirtied = true;
                x_2778->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_1_bb_time_table, x_2778, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4449 == "position") {
            WriteMetric();
            x_2778->has_prop_position = true;
            x_2778->prop_position = AsDEString(x_2786);
            if (x_2778->meta->bb_1_has_bb_time_table) {
              if (!(x_2778->meta->bb_1_has_bb_dirtied && x_2778->meta->bb_1_bb_dirtied)) {
                x_2778->meta->bb_1_has_bb_dirtied = true;
                x_2778->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_1_bb_time_table, x_2778, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4449 == "flex-shrink") {
            WriteMetric();
            x_2778->has_prop_flex_shrink = true;
            x_2778->prop_flex_shrink = AsDEString(x_2786);
            if (x_2778->meta->bb_1_has_bb_time_table) {
              if (!(x_2778->meta->bb_1_has_bb_dirtied && x_2778->meta->bb_1_bb_dirtied)) {
                x_2778->meta->bb_1_has_bb_dirtied = true;
                x_2778->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_1_bb_time_table, x_2778, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4449 == "flex-direction") {
            WriteMetric();
            x_2778->has_prop_flex_direction = true;
            x_2778->prop_flex_direction = AsDEString(x_2786);
            if (x_2778->meta->bb_1_has_bb_time_table) {
              if (!(x_2778->meta->bb_1_has_bb_dirtied && x_2778->meta->bb_1_bb_dirtied)) {
                x_2778->meta->bb_1_has_bb_dirtied = true;
                x_2778->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2778->meta->bb_1_bb_time_table, x_2778, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2780, const auto &x_2781) {
        return x_2776(x_2781, ListNthExn(x_2778->children, x_2780), x_2779);
      });
}
Unit insert_value_x_2748(const auto &x_2777, const auto &x_2778, const auto &x_2779) {
  return x_2776(x_2777, x_2778, x_2779);
}
Unit x_2811(const auto &x_2812, const auto &x_2813, const auto &x_2814) {
  return ListMatch(
      x_2812,
      [&](const auto &x_2817) {
        auto x_2818 = Zro(x_2814);
        auto x_2819 = Fst(x_2814);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4450 = x_2818;
        if (x_4450 == "attributes") {
          std::string x_4451 = x_2819;
          if (x_4451 == "width") {
            WriteMetric();
            x_2813->has_attr_width = false;
            if (x_2813->meta->bb_1_has_bb_time_table) {
              if (!(x_2813->meta->bb_1_has_bb_dirtied && x_2813->meta->bb_1_bb_dirtied)) {
                x_2813->meta->bb_1_has_bb_dirtied = true;
                x_2813->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_1_bb_time_table, x_2813, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "image_height") {
            WriteMetric();
            x_2813->has_attr_image_height = false;
            if (x_2813->meta->bb_0_has_bb_time_table) {
              if (!(x_2813->meta->bb_0_has_bb_dirtied && x_2813->meta->bb_0_bb_dirtied)) {
                x_2813->meta->bb_0_has_bb_dirtied = true;
                x_2813->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_0_bb_time_table, x_2813, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "image_width") {
            WriteMetric();
            x_2813->has_attr_image_width = false;
            if (x_2813->meta->bb_0_has_bb_time_table) {
              if (!(x_2813->meta->bb_0_has_bb_dirtied && x_2813->meta->bb_0_bb_dirtied)) {
                x_2813->meta->bb_0_has_bb_dirtied = true;
                x_2813->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_0_bb_time_table, x_2813, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "height") {
            WriteMetric();
            x_2813->has_attr_height = false;
            if (x_2813->meta->bb_1_has_bb_time_table) {
              if (!(x_2813->meta->bb_1_has_bb_dirtied && x_2813->meta->bb_1_bb_dirtied)) {
                x_2813->meta->bb_1_has_bb_dirtied = true;
                x_2813->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_1_bb_time_table, x_2813, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "viewBox") {
            WriteMetric();
            x_2813->has_attr_viewBox = false;
            if (x_2813->meta->bb_0_has_bb_time_table) {
              if (!(x_2813->meta->bb_0_has_bb_dirtied && x_2813->meta->bb_0_bb_dirtied)) {
                x_2813->meta->bb_0_has_bb_dirtied = true;
                x_2813->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_0_bb_time_table, x_2813, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4450 == "properties") {
          std::string x_4452 = x_2819;
          if (x_4452 == "width") {
            WriteMetric();
            x_2813->has_prop_width = false;
            if (x_2813->meta->bb_0_has_bb_time_table) {
              if (!(x_2813->meta->bb_0_has_bb_dirtied && x_2813->meta->bb_0_bb_dirtied)) {
                x_2813->meta->bb_0_has_bb_dirtied = true;
                x_2813->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_0_bb_time_table, x_2813, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4452 == "flex-grow") {
            WriteMetric();
            x_2813->has_prop_flex_grow = false;
            if (x_2813->meta->bb_1_has_bb_time_table) {
              if (!(x_2813->meta->bb_1_has_bb_dirtied && x_2813->meta->bb_1_bb_dirtied)) {
                x_2813->meta->bb_1_has_bb_dirtied = true;
                x_2813->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_1_bb_time_table, x_2813, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4452 == "height") {
            WriteMetric();
            x_2813->has_prop_height = false;
            if (x_2813->meta->bb_0_has_bb_time_table) {
              if (!(x_2813->meta->bb_0_has_bb_dirtied && x_2813->meta->bb_0_bb_dirtied)) {
                x_2813->meta->bb_0_has_bb_dirtied = true;
                x_2813->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_0_bb_time_table, x_2813, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4452 == "display") {
            WriteMetric();
            x_2813->has_prop_display = false;
            if (x_2813->meta->bb_1_has_bb_time_table) {
              if (!(x_2813->meta->bb_1_has_bb_dirtied && x_2813->meta->bb_1_bb_dirtied)) {
                x_2813->meta->bb_1_has_bb_dirtied = true;
                x_2813->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_1_bb_time_table, x_2813, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4452 == "position") {
            WriteMetric();
            x_2813->has_prop_position = false;
            if (x_2813->meta->bb_1_has_bb_time_table) {
              if (!(x_2813->meta->bb_1_has_bb_dirtied && x_2813->meta->bb_1_bb_dirtied)) {
                x_2813->meta->bb_1_has_bb_dirtied = true;
                x_2813->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_1_bb_time_table, x_2813, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4452 == "flex-shrink") {
            WriteMetric();
            x_2813->has_prop_flex_shrink = false;
            if (x_2813->meta->bb_1_has_bb_time_table) {
              if (!(x_2813->meta->bb_1_has_bb_dirtied && x_2813->meta->bb_1_bb_dirtied)) {
                x_2813->meta->bb_1_has_bb_dirtied = true;
                x_2813->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_1_bb_time_table, x_2813, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4452 == "flex-direction") {
            WriteMetric();
            x_2813->has_prop_flex_direction = false;
            if (x_2813->meta->bb_1_has_bb_time_table) {
              if (!(x_2813->meta->bb_1_has_bb_dirtied && x_2813->meta->bb_1_bb_dirtied)) {
                x_2813->meta->bb_1_has_bb_dirtied = true;
                x_2813->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2813->meta->bb_1_bb_time_table, x_2813, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2815, const auto &x_2816) {
        return x_2811(x_2816, ListNthExn(x_2813->children, x_2815), x_2814);
      });
}
Unit delete_value_x_2746(const auto &x_2812, const auto &x_2813, const auto &x_2814) {
  return x_2811(x_2812, x_2813, x_2814);
}
Unit x_2844(const auto &x_2845, const auto &x_2846, const auto &x_2847) {
  return ListMatch(
      x_2845,
      [&](const auto &x_2850) {
        auto x_2851 = Zro(x_2847);
        auto x_2852 = Zro(x_2851);
        auto x_2853 = Fst(x_2851);
        auto x_2854 = Fst(x_2847);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4453 = x_2852;
        if (x_4453 == "attributes") {
          std::string x_4454 = x_2853;
          if (x_4454 == "width") {
            WriteMetric();
            x_2846->has_attr_width = false;
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_attr_width = true;
            x_2846->attr_width = AsDEString(x_2854);
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "image_height") {
            WriteMetric();
            x_2846->has_attr_image_height = false;
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_attr_image_height = true;
            x_2846->attr_image_height = Asint64_t(x_2854);
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "image_width") {
            WriteMetric();
            x_2846->has_attr_image_width = false;
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_attr_image_width = true;
            x_2846->attr_image_width = Asint64_t(x_2854);
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "height") {
            WriteMetric();
            x_2846->has_attr_height = false;
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_attr_height = true;
            x_2846->attr_height = AsDEString(x_2854);
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "viewBox") {
            WriteMetric();
            x_2846->has_attr_viewBox = false;
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_attr_viewBox = true;
            x_2846->attr_viewBox = AsDEString(x_2854);
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4453 == "properties") {
          std::string x_4455 = x_2853;
          if (x_4455 == "width") {
            WriteMetric();
            x_2846->has_prop_width = false;
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_prop_width = true;
            x_2846->prop_width = AsDEString(x_2854);
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4455 == "flex-grow") {
            WriteMetric();
            x_2846->has_prop_flex_grow = false;
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_prop_flex_grow = true;
            x_2846->prop_flex_grow = AsDEString(x_2854);
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4455 == "height") {
            WriteMetric();
            x_2846->has_prop_height = false;
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_prop_height = true;
            x_2846->prop_height = AsDEString(x_2854);
            if (x_2846->meta->bb_0_has_bb_time_table) {
              if (!(x_2846->meta->bb_0_has_bb_dirtied && x_2846->meta->bb_0_bb_dirtied)) {
                x_2846->meta->bb_0_has_bb_dirtied = true;
                x_2846->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_0_bb_time_table, x_2846, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4455 == "display") {
            WriteMetric();
            x_2846->has_prop_display = false;
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_prop_display = true;
            x_2846->prop_display = AsDEString(x_2854);
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4455 == "position") {
            WriteMetric();
            x_2846->has_prop_position = false;
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_prop_position = true;
            x_2846->prop_position = AsDEString(x_2854);
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4455 == "flex-shrink") {
            WriteMetric();
            x_2846->has_prop_flex_shrink = false;
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_prop_flex_shrink = true;
            x_2846->prop_flex_shrink = AsDEString(x_2854);
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4455 == "flex-direction") {
            WriteMetric();
            x_2846->has_prop_flex_direction = false;
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2846->has_prop_flex_direction = true;
            x_2846->prop_flex_direction = AsDEString(x_2854);
            if (x_2846->meta->bb_1_has_bb_time_table) {
              if (!(x_2846->meta->bb_1_has_bb_dirtied && x_2846->meta->bb_1_bb_dirtied)) {
                x_2846->meta->bb_1_has_bb_dirtied = true;
                x_2846->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2846->meta->bb_1_bb_time_table, x_2846, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2848, const auto &x_2849) {
        return x_2844(x_2849, ListNthExn(x_2846->children, x_2848), x_2847);
      });
}
Unit replace_value_x_2744(const auto &x_2845, const auto &x_2846, const auto &x_2847) {
  return x_2844(x_2845, x_2846, x_2847);
}
Unit x_2903(const auto &x_2904, const auto &x_2905, const auto &x_2906) {
  auto x_2907 = ListHeadExn(x_2904);
  auto x_2908 = ListTailExn(x_2904);
  if (ListIsEmpty(x_2908)) {
    InputChangeMetric(IntAdd(node_size_x_2716(ListNthExn(x_2905->children, x_2907)), node_size_x_2716(x_2906)));
    auto x_2909 = ListSplitN(x_2905->children, x_2907);
    auto x_2910 = Zro(x_2909);
    auto x_2911 = Fst(x_2909);
    auto x_2912 = ListHeadExn(x_2911);
    auto x_2913 = ListTailExn(x_2911);
    x_2905->children = ListAppend(x_2910, x_2913);
    x_2912->meta->alive = false;
    OptionMatch(
        x_2912->prev, [&](const auto &x_2915) { return MakeUnit(); },
        [&](const auto &x_2914) {
          x_2914->next = ToPath(x_2912->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2912->next, [&](const auto &x_2917) { return MakeUnit(); },
        [&](const auto &x_2916) {
          x_2916->prev = ToPath(x_2912->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2910)) {
      x_2905->first = ToPath(ListHead(x_2913));
    }
    if (ListIsEmpty(x_2913)) {
      x_2905->last = ToPath(ListLast(x_2910));
    }
    OptionMatch(
        x_2912->next, [&](const auto &x_2921) { return MakeUnit(); },
        [&](const auto &x_2918) {
          if (x_2918->meta->bb_1_has_bb_time_table) {
            if (!(x_2918->meta->bb_1_has_bb_dirtied && x_2918->meta->bb_1_bb_dirtied)) {
              x_2918->meta->bb_1_has_bb_dirtied = true;
              x_2918->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2918->meta->bb_1_bb_time_table, x_2918, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2905->children)) {
      if (x_2905->meta->bb_0_has_bb_time_table) {
        if (!(x_2905->meta->bb_0_has_bb_dirtied && x_2905->meta->bb_0_bb_dirtied)) {
          x_2905->meta->bb_0_has_bb_dirtied = true;
          x_2905->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_0_bb_time_table, x_2905, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2913)) {
      if (x_2905->meta->bb_0_has_bb_time_table) {
        if (!(x_2905->meta->bb_0_has_bb_dirtied && x_2905->meta->bb_0_bb_dirtied)) {
          x_2905->meta->bb_0_has_bb_dirtied = true;
          x_2905->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_0_bb_time_table, x_2905, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2912->next, [&](const auto &x_2929) { return MakeUnit(); },
        [&](const auto &x_2926) {
          if (x_2926->meta->bb_0_has_bb_time_table) {
            if (!(x_2926->meta->bb_0_has_bb_dirtied && x_2926->meta->bb_0_bb_dirtied)) {
              x_2926->meta->bb_0_has_bb_dirtied = true;
              x_2926->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2926->meta->bb_0_bb_time_table, x_2926, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2905->children)) {
      if (x_2905->meta->bb_3_has_bb_time_table) {
        if (!(x_2905->meta->bb_3_has_bb_dirtied && x_2905->meta->bb_3_bb_dirtied)) {
          x_2905->meta->bb_3_has_bb_dirtied = true;
          x_2905->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_3_bb_time_table, x_2905, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2913)) {
      if (x_2905->meta->bb_3_has_bb_time_table) {
        if (!(x_2905->meta->bb_3_has_bb_dirtied && x_2905->meta->bb_3_bb_dirtied)) {
          x_2905->meta->bb_3_has_bb_dirtied = true;
          x_2905->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_3_bb_time_table, x_2905, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2912->next, [&](const auto &x_2937) { return MakeUnit(); },
        [&](const auto &x_2934) {
          if (x_2934->meta->bb_3_has_bb_time_table) {
            if (!(x_2934->meta->bb_3_has_bb_dirtied && x_2934->meta->bb_3_bb_dirtied)) {
              x_2934->meta->bb_3_has_bb_dirtied = true;
              x_2934->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2934->meta->bb_3_bb_time_table, x_2934, static_cast<int64_t>(2));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_2938 = ListSplitN(x_2905->children, x_2907);
    auto x_2939 = Zro(x_2938);
    auto x_2940 = Fst(x_2938);
    x_2905->children = ListAppend(x_2939, Cons(x_2906, x_2940));
    if (ListIsEmpty(x_2939)) {
      x_2905->first = x_2906.get();
    }
    if (ListIsEmpty(x_2940)) {
      x_2905->last = x_2906.get();
    }
    OptionMatch(
        ListLast(x_2939),
        [&](const auto &x_2942) {
          x_2906->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2941) {
          x_2906->prev = x_2941.get();
          x_2941->next = x_2906.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_2940),
        [&](const auto &x_2944) {
          x_2906->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2943) {
          x_2906->next = x_2943.get();
          x_2943->prev = x_2906.get();
          return MakeUnit();
        });
    x_2906->parent = x_2905.get();
    RecordOverhead([&](const auto &x_2945) {
      auto x_2946 = (x_2906->parent);
      if (x_2946->meta->bb_0_has_bb_time_table) {
        auto x_2951 = OptionMatch(
            x_2906->prev, [&](const auto &x_2950) { return NextTotalOrder(x_2946->meta->bb_1_bb_time_table); },
            [&](const auto &x_2947) {
              if (x_2947->meta->bb_0_has_bb_time_table) {
                return NextTotalOrder(x_2947->meta->bb_0_bb_time_table);
              } else {
                return NextTotalOrder(x_2947->meta->bb_1_bb_time_table);
              }
            });
        x_2906->meta->bb_1_has_bb_dirtied = true;
        x_2906->meta->bb_1_bb_dirtied = true;
        x_2906->meta->bb_1_has_bb_time_table = true;
        x_2906->meta->bb_1_bb_time_table = x_2951;
        MetaWriteMetric();
        QueueForcePush(x_2951, x_2906, static_cast<int64_t>(3));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_2906->next, [&](const auto &x_2956) { return MakeUnit(); },
        [&](const auto &x_2953) {
          if (x_2953->meta->bb_1_has_bb_time_table) {
            if (!(x_2953->meta->bb_1_has_bb_dirtied && x_2953->meta->bb_1_bb_dirtied)) {
              x_2953->meta->bb_1_has_bb_dirtied = true;
              x_2953->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2953->meta->bb_1_bb_time_table, x_2953, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_2905->children)) {
      if (x_2905->meta->bb_0_has_bb_time_table) {
        if (!(x_2905->meta->bb_0_has_bb_dirtied && x_2905->meta->bb_0_bb_dirtied)) {
          x_2905->meta->bb_0_has_bb_dirtied = true;
          x_2905->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_0_bb_time_table, x_2905, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2940)) {
      if (x_2905->meta->bb_0_has_bb_time_table) {
        if (!(x_2905->meta->bb_0_has_bb_dirtied && x_2905->meta->bb_0_bb_dirtied)) {
          x_2905->meta->bb_0_has_bb_dirtied = true;
          x_2905->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_0_bb_time_table, x_2905, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2906->next, [&](const auto &x_2964) { return MakeUnit(); },
        [&](const auto &x_2961) {
          if (x_2961->meta->bb_0_has_bb_time_table) {
            if (!(x_2961->meta->bb_0_has_bb_dirtied && x_2961->meta->bb_0_bb_dirtied)) {
              x_2961->meta->bb_0_has_bb_dirtied = true;
              x_2961->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2961->meta->bb_0_bb_time_table, x_2961, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    RecordOverhead([&](const auto &x_2965) {
      auto x_2966 = (x_2906->parent);
      if (x_2966->meta->bb_2_has_bb_time_table) {
        auto x_2971 = OptionMatch(
            x_2906->prev, [&](const auto &x_2970) { return NextTotalOrder(x_2966->meta->bb_3_bb_time_table); },
            [&](const auto &x_2967) {
              if (x_2967->meta->bb_2_has_bb_time_table) {
                return NextTotalOrder(x_2967->meta->bb_2_bb_time_table);
              } else {
                return NextTotalOrder(x_2967->meta->bb_3_bb_time_table);
              }
            });
        x_2906->meta->bb_3_has_bb_dirtied = true;
        x_2906->meta->bb_3_bb_dirtied = true;
        x_2906->meta->bb_3_has_bb_time_table = true;
        x_2906->meta->bb_3_bb_time_table = x_2971;
        MetaWriteMetric();
        QueueForcePush(x_2971, x_2906, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    if (ListIsSingleton(x_2905->children)) {
      if (x_2905->meta->bb_3_has_bb_time_table) {
        if (!(x_2905->meta->bb_3_has_bb_dirtied && x_2905->meta->bb_3_bb_dirtied)) {
          x_2905->meta->bb_3_has_bb_dirtied = true;
          x_2905->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_3_bb_time_table, x_2905, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2940)) {
      if (x_2905->meta->bb_3_has_bb_time_table) {
        if (!(x_2905->meta->bb_3_has_bb_dirtied && x_2905->meta->bb_3_bb_dirtied)) {
          x_2905->meta->bb_3_has_bb_dirtied = true;
          x_2905->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2905->meta->bb_3_bb_time_table, x_2905, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2906->next, [&](const auto &x_2980) { return MakeUnit(); },
        [&](const auto &x_2977) {
          if (x_2977->meta->bb_3_has_bb_time_table) {
            if (!(x_2977->meta->bb_3_has_bb_dirtied && x_2977->meta->bb_3_bb_dirtied)) {
              x_2977->meta->bb_3_has_bb_dirtied = true;
              x_2977->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2977->meta->bb_3_bb_time_table, x_2977, static_cast<int64_t>(2));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_2903(x_2908, ListNthExn(x_2905->children, x_2907), x_2906);
  }
}
Unit replace_node_x_2742(const auto &x_2904, const auto &x_2905, const auto &x_2906) {
  return x_2903(x_2904, x_2905, x_2906);
}
Unit x_2981(const auto &x_2982) {
  ListIter2(x_2982->children, [&](const auto &x_2983, const auto &x_2984) {
    x_2983->parent = x_2982.get();
    x_2984->parent = x_2982.get();
    x_2983->next = x_2984.get();
    x_2984->prev = x_2983.get();
    x_2981(x_2983);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2982->children),
      [&](const auto &x_2986) {
        x_2982->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2985) {
        x_2982->first = x_2985.get();
        x_2985->parent = x_2982.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2982->children),
      [&](const auto &x_2988) {
        x_2982->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2987) {
        x_2982->last = x_2987.get();
        x_2987->parent = x_2982.get();
        x_2981(x_2987);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2740(const auto &x_2982) { return x_2981(x_2982); }
Unit x_2989(const auto &x_2990, const auto &x_2991, const auto &x_2992) {
  auto x_2993 = ListHeadExn(x_2990);
  auto x_2994 = ListTailExn(x_2990);
  if (ListIsEmpty(x_2994)) {
    InputChangeMetric(node_size_x_2716(ListNthExn(x_2991->children, x_2993)));
    auto x_2995 = ListSplitN(x_2991->children, x_2993);
    auto x_2996 = Zro(x_2995);
    auto x_2997 = Fst(x_2995);
    auto x_2998 = ListHeadExn(x_2997);
    auto x_2999 = ListTailExn(x_2997);
    x_2991->children = ListAppend(x_2996, x_2999);
    x_2998->meta->alive = false;
    OptionMatch(
        x_2998->prev, [&](const auto &x_3001) { return MakeUnit(); },
        [&](const auto &x_3000) {
          x_3000->next = ToPath(x_2998->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2998->next, [&](const auto &x_3003) { return MakeUnit(); },
        [&](const auto &x_3002) {
          x_3002->prev = ToPath(x_2998->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2996)) {
      x_2991->first = ToPath(ListHead(x_2999));
    }
    if (ListIsEmpty(x_2999)) {
      x_2991->last = ToPath(ListLast(x_2996));
    }
    OptionMatch(
        x_2998->next, [&](const auto &x_3007) { return MakeUnit(); },
        [&](const auto &x_3004) {
          if (x_3004->meta->bb_1_has_bb_time_table) {
            if (!(x_3004->meta->bb_1_has_bb_dirtied && x_3004->meta->bb_1_bb_dirtied)) {
              x_3004->meta->bb_1_has_bb_dirtied = true;
              x_3004->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3004->meta->bb_1_bb_time_table, x_3004, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2991->children)) {
      if (x_2991->meta->bb_0_has_bb_time_table) {
        if (!(x_2991->meta->bb_0_has_bb_dirtied && x_2991->meta->bb_0_bb_dirtied)) {
          x_2991->meta->bb_0_has_bb_dirtied = true;
          x_2991->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2991->meta->bb_0_bb_time_table, x_2991, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2999)) {
      if (x_2991->meta->bb_0_has_bb_time_table) {
        if (!(x_2991->meta->bb_0_has_bb_dirtied && x_2991->meta->bb_0_bb_dirtied)) {
          x_2991->meta->bb_0_has_bb_dirtied = true;
          x_2991->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2991->meta->bb_0_bb_time_table, x_2991, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2998->next, [&](const auto &x_3015) { return MakeUnit(); },
        [&](const auto &x_3012) {
          if (x_3012->meta->bb_0_has_bb_time_table) {
            if (!(x_3012->meta->bb_0_has_bb_dirtied && x_3012->meta->bb_0_bb_dirtied)) {
              x_3012->meta->bb_0_has_bb_dirtied = true;
              x_3012->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3012->meta->bb_0_bb_time_table, x_3012, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2991->children)) {
      if (x_2991->meta->bb_3_has_bb_time_table) {
        if (!(x_2991->meta->bb_3_has_bb_dirtied && x_2991->meta->bb_3_bb_dirtied)) {
          x_2991->meta->bb_3_has_bb_dirtied = true;
          x_2991->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2991->meta->bb_3_bb_time_table, x_2991, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2999)) {
      if (x_2991->meta->bb_3_has_bb_time_table) {
        if (!(x_2991->meta->bb_3_has_bb_dirtied && x_2991->meta->bb_3_bb_dirtied)) {
          x_2991->meta->bb_3_has_bb_dirtied = true;
          x_2991->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2991->meta->bb_3_bb_time_table, x_2991, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2998->next, [&](const auto &x_3023) { return MakeUnit(); },
        [&](const auto &x_3020) {
          if (x_3020->meta->bb_3_has_bb_time_table) {
            if (!(x_3020->meta->bb_3_has_bb_dirtied && x_3020->meta->bb_3_bb_dirtied)) {
              x_3020->meta->bb_3_has_bb_dirtied = true;
              x_3020->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3020->meta->bb_3_bb_time_table, x_3020, static_cast<int64_t>(2));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_2989(x_2994, ListNthExn(x_2991->children, x_2993), x_2992);
  }
}
Unit remove_node_x_2738(const auto &x_2990, const auto &x_2991, const auto &x_2992) {
  return x_2989(x_2990, x_2991, x_2992);
}
Unit recalculate_x_2736(const auto &x_3024) {
  StartRecordOverhead();
  while (!QueueIsEmpty()) {
    auto x_3025 = QueuePop();
    auto x_3026 = Zro(x_3025);
    auto x_3027 = Fst(x_3025);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_3027.n->meta->alive) {
      [&]() {
        auto x_4456 = x_3027.rf;
        if (x_4456 == 2) {
          StopRecordOverhead();
          eval_stmts_x_3028(x_3027.n);
          StartRecordOverhead();
          x_3027.n->meta->bb_3_has_bb_dirtied = true;
          x_3027.n->meta->bb_3_bb_dirtied = false;
          return MakeUnit();
        } else if (x_4456 == 0) {
          StopRecordOverhead();
          eval_stmts_x_3029(x_3027.n);
          StartRecordOverhead();
          x_3027.n->meta->bb_1_has_bb_dirtied = true;
          x_3027.n->meta->bb_1_bb_dirtied = false;
          return MakeUnit();
        } else if (x_4456 == 1) {
          StopRecordOverhead();
          eval_stmts_x_3030(x_3027.n);
          StartRecordOverhead();
          x_3027.n->meta->bb_0_has_bb_dirtied = true;
          x_3027.n->meta->bb_0_bb_dirtied = false;
          return MakeUnit();
        } else if (x_4456 == 5) {
          StopRecordOverhead();
          eval_stmts_x_3031(x_3027.n);
          StartRecordOverhead();
          x_3027.n->meta->bb_2_has_bb_dirtied = true;
          x_3027.n->meta->bb_2_bb_dirtied = false;
          return MakeUnit();
        } else if (x_4456 == 3) {
          WriteRef(current_time, x_3026);
          StopRecordOverhead();
          eval_stmts_x_2728(x_3027.n);
          StartRecordOverhead();
          WriteRef(current_time, ReadRef(current_time));
          return MakeUnit();
        } else if (x_4456 == 4) {
          WriteRef(current_time, x_3026);
          StopRecordOverhead();
          eval_stmts_x_2729(x_3027.n);
          StartRecordOverhead();
          WriteRef(current_time, ReadRef(current_time));
          return MakeUnit();
        } else {
          Panic();
        }
      }();
    }
    MakeUnit();
  }
  StopRecordOverhead();
  return MakeUnit();
}
Unit x_3034(const auto &x_3035, const auto &x_3036, const auto &x_3037) {
  auto x_3038 = ListHeadExn(x_3035);
  auto x_3039 = ListTailExn(x_3035);
  if (ListIsEmpty(x_3039)) {
    InputChangeMetric(node_size_x_2716(x_3037));
    auto x_3040 = ListSplitN(x_3036->children, x_3038);
    auto x_3041 = Zro(x_3040);
    auto x_3042 = Fst(x_3040);
    x_3036->children = ListAppend(x_3041, Cons(x_3037, x_3042));
    if (ListIsEmpty(x_3041)) {
      x_3036->first = x_3037.get();
    }
    if (ListIsEmpty(x_3042)) {
      x_3036->last = x_3037.get();
    }
    OptionMatch(
        ListLast(x_3041),
        [&](const auto &x_3044) {
          x_3037->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3043) {
          x_3037->prev = x_3043.get();
          x_3043->next = x_3037.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3042),
        [&](const auto &x_3046) {
          x_3037->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3045) {
          x_3037->next = x_3045.get();
          x_3045->prev = x_3037.get();
          return MakeUnit();
        });
    x_3037->parent = x_3036.get();
    RecordOverhead([&](const auto &x_3047) {
      auto x_3048 = (x_3037->parent);
      if (x_3048->meta->bb_0_has_bb_time_table) {
        auto x_3053 = OptionMatch(
            x_3037->prev, [&](const auto &x_3052) { return NextTotalOrder(x_3048->meta->bb_1_bb_time_table); },
            [&](const auto &x_3049) {
              if (x_3049->meta->bb_0_has_bb_time_table) {
                return NextTotalOrder(x_3049->meta->bb_0_bb_time_table);
              } else {
                return NextTotalOrder(x_3049->meta->bb_1_bb_time_table);
              }
            });
        x_3037->meta->bb_1_has_bb_dirtied = true;
        x_3037->meta->bb_1_bb_dirtied = true;
        x_3037->meta->bb_1_has_bb_time_table = true;
        x_3037->meta->bb_1_bb_time_table = x_3053;
        MetaWriteMetric();
        QueueForcePush(x_3053, x_3037, static_cast<int64_t>(3));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_3037->next, [&](const auto &x_3058) { return MakeUnit(); },
        [&](const auto &x_3055) {
          if (x_3055->meta->bb_1_has_bb_time_table) {
            if (!(x_3055->meta->bb_1_has_bb_dirtied && x_3055->meta->bb_1_bb_dirtied)) {
              x_3055->meta->bb_1_has_bb_dirtied = true;
              x_3055->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3055->meta->bb_1_bb_time_table, x_3055, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3036->children)) {
      if (x_3036->meta->bb_0_has_bb_time_table) {
        if (!(x_3036->meta->bb_0_has_bb_dirtied && x_3036->meta->bb_0_bb_dirtied)) {
          x_3036->meta->bb_0_has_bb_dirtied = true;
          x_3036->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3036->meta->bb_0_bb_time_table, x_3036, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_3042)) {
      if (x_3036->meta->bb_0_has_bb_time_table) {
        if (!(x_3036->meta->bb_0_has_bb_dirtied && x_3036->meta->bb_0_bb_dirtied)) {
          x_3036->meta->bb_0_has_bb_dirtied = true;
          x_3036->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3036->meta->bb_0_bb_time_table, x_3036, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_3037->next, [&](const auto &x_3066) { return MakeUnit(); },
        [&](const auto &x_3063) {
          if (x_3063->meta->bb_0_has_bb_time_table) {
            if (!(x_3063->meta->bb_0_has_bb_dirtied && x_3063->meta->bb_0_bb_dirtied)) {
              x_3063->meta->bb_0_has_bb_dirtied = true;
              x_3063->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3063->meta->bb_0_bb_time_table, x_3063, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    RecordOverhead([&](const auto &x_3067) {
      auto x_3068 = (x_3037->parent);
      if (x_3068->meta->bb_2_has_bb_time_table) {
        auto x_3073 = OptionMatch(
            x_3037->prev, [&](const auto &x_3072) { return NextTotalOrder(x_3068->meta->bb_3_bb_time_table); },
            [&](const auto &x_3069) {
              if (x_3069->meta->bb_2_has_bb_time_table) {
                return NextTotalOrder(x_3069->meta->bb_2_bb_time_table);
              } else {
                return NextTotalOrder(x_3069->meta->bb_3_bb_time_table);
              }
            });
        x_3037->meta->bb_3_has_bb_dirtied = true;
        x_3037->meta->bb_3_bb_dirtied = true;
        x_3037->meta->bb_3_has_bb_time_table = true;
        x_3037->meta->bb_3_bb_time_table = x_3073;
        MetaWriteMetric();
        QueueForcePush(x_3073, x_3037, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    if (ListIsSingleton(x_3036->children)) {
      if (x_3036->meta->bb_3_has_bb_time_table) {
        if (!(x_3036->meta->bb_3_has_bb_dirtied && x_3036->meta->bb_3_bb_dirtied)) {
          x_3036->meta->bb_3_has_bb_dirtied = true;
          x_3036->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3036->meta->bb_3_bb_time_table, x_3036, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_3042)) {
      if (x_3036->meta->bb_3_has_bb_time_table) {
        if (!(x_3036->meta->bb_3_has_bb_dirtied && x_3036->meta->bb_3_bb_dirtied)) {
          x_3036->meta->bb_3_has_bb_dirtied = true;
          x_3036->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3036->meta->bb_3_bb_time_table, x_3036, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_3037->next, [&](const auto &x_3082) { return MakeUnit(); },
        [&](const auto &x_3079) {
          if (x_3079->meta->bb_3_has_bb_time_table) {
            if (!(x_3079->meta->bb_3_has_bb_dirtied && x_3079->meta->bb_3_bb_dirtied)) {
              x_3079->meta->bb_3_has_bb_dirtied = true;
              x_3079->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3079->meta->bb_3_bb_time_table, x_3079, static_cast<int64_t>(2));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_3034(x_3039, ListNthExn(x_3036->children, x_3038), x_3037);
  }
}
Unit add_node_x_2735(const auto &x_3035, const auto &x_3036, const auto &x_3037) {
  return x_3034(x_3035, x_3036, x_3037);
}
Unit x_3083(const auto &x_3084) {
  ListIter2(x_3084->children, [&](const auto &x_3085, const auto &x_3086) {
    x_3085->parent = x_3084.get();
    x_3086->parent = x_3084.get();
    x_3085->next = x_3086.get();
    x_3086->prev = x_3085.get();
    x_3083(x_3085);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3084->children),
      [&](const auto &x_3088) {
        x_3084->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3087) {
        x_3084->first = x_3087.get();
        x_3087->parent = x_3084.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3084->children),
      [&](const auto &x_3090) {
        x_3084->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3089) {
        x_3084->last = x_3089.get();
        x_3089->parent = x_3084.get();
        x_3083(x_3089);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2733(const auto &x_3084) { return x_3083(x_3084); }
Unit eval_stmts_x_2729(const auto &x_3091) {
  RecordOverhead([&](const auto &x_3092) {
    x_3091->meta->bb_3_has_bb_time_table = true;
    x_3091->meta->bb_3_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3093) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3028(x_3091);
  RecordOverhead([&](const auto &x_3094) {
    x_3091->meta->bb_3_has_bb_dirtied = true;
    x_3091->meta->bb_3_bb_dirtied = false;
    return MakeUnit();
  });
  ListIter(x_3091->children, [&](const auto &x_3095) { return eval_stmts_x_2729(x_3095); });
  RecordOverhead([&](const auto &x_3096) {
    x_3091->meta->bb_2_has_bb_time_table = true;
    x_3091->meta->bb_2_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3097) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3031(x_3091);
  RecordOverhead([&](const auto &x_3098) {
    x_3091->meta->bb_2_has_bb_dirtied = true;
    x_3091->meta->bb_2_bb_dirtied = false;
    return MakeUnit();
  });
  return MakeUnit();
}
Unit eval_stmts_x_2728(const auto &x_3099) {
  RecordOverhead([&](const auto &x_3100) {
    x_3099->meta->bb_1_has_bb_time_table = true;
    x_3099->meta->bb_1_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3101) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3029(x_3099);
  RecordOverhead([&](const auto &x_3102) {
    x_3099->meta->bb_1_has_bb_dirtied = true;
    x_3099->meta->bb_1_bb_dirtied = false;
    return MakeUnit();
  });
  ListIter(x_3099->children, [&](const auto &x_3103) { return eval_stmts_x_2728(x_3103); });
  RecordOverhead([&](const auto &x_3104) {
    x_3099->meta->bb_0_has_bb_time_table = true;
    x_3099->meta->bb_0_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3105) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3030(x_3099);
  RecordOverhead([&](const auto &x_3106) {
    x_3099->meta->bb_0_has_bb_dirtied = true;
    x_3099->meta->bb_0_bb_dirtied = false;
    return MakeUnit();
  });
  return MakeUnit();
}
Unit x_3107(const auto &x_3108) {
  ListIter2(x_3108->children, [&](const auto &x_3109, const auto &x_3110) {
    x_3109->parent = x_3108.get();
    x_3110->parent = x_3108.get();
    x_3109->next = x_3110.get();
    x_3110->prev = x_3109.get();
    x_3107(x_3109);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3108->children),
      [&](const auto &x_3112) {
        x_3108->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3111) {
        x_3108->first = x_3111.get();
        x_3111->parent = x_3108.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3108->children),
      [&](const auto &x_3114) {
        x_3108->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3113) {
        x_3108->last = x_3113.get();
        x_3113->parent = x_3108.get();
        x_3107(x_3113);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2725(const auto &x_3108) { return x_3107(x_3108); }
int64_t x_3115(const auto &x_3116) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3116->children, [&](const auto &x_3117) { return x_3115(x_3117); }));
}
int64_t node_size_x_2716(const auto &x_3116) { return x_3115(x_3116); }
int64_t x_3118(const auto &x_3119) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3119->children, [&](const auto &x_3120) { return x_3118(x_3120); }));
}
int64_t layout_size_x_2715(const auto &x_3119) { return x_3118(x_3119); }
LayoutNode x_3121(const auto &x_3122) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_3122)), [&](const auto &x_3123) { return x_3121(x_3123); }));
}
LayoutNode json_to_layout_node_x_2714(const auto &x_3122) { return x_3121(x_3122); }
Node x_3124(const auto &x_3125) {
  return MakeNode(x_3125->name, x_3125->attr, x_3125->prop, x_3125->extern_id,
                  ListMap(x_3125->children, [&](const auto &x_3126) { return x_3124(x_3126); }));
}
Node node_to_fs_node_x_2713(const auto &x_3125) { return x_3124(x_3125); }
Node x_3127(const auto &x_3128) {
  return MakeNode(
      JsonToString(JsonMember("name", x_3128)), JsonToDict(JsonMember("attributes", x_3128)),
      JsonToDict(JsonMember("properties", x_3128)), JsonToInt(JsonMember("id", x_3128)),
      ListMap(JsonToList(JsonMember("children", x_3128)), [&](const auto &x_3129) { return x_3127(x_3129); }));
}
Node json_to_node_aux_x_2712(const auto &x_3128) { return x_3127(x_3128); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_2717) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_2718) {
      auto x_2719 = MakeRef(static_cast<int64_t>(0));
      auto x_2721 = JsonOfString(InputLine(x_2718));
      auto x_2722 = JsonOfString(InputLine(x_2718));
      auto x_2723 = MakeStack();
      PushStack(x_2723, x_2721);
      PushStack(x_2723, x_2722);
      Assert(StringEqual(JsonToString(JsonMember("name", x_2721)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_2722)), "layout_init"));
      auto x_2726 = [&]() {
        auto x_2724 = json_to_node_aux_x_2712(JsonMember("node", x_2721));
        x_2724->parent = nullptr;
        x_2724->prev = nullptr;
        x_2724->next = nullptr;
        set_children_relation_x_2725(x_2724);
        return x_2724;
      }();
      auto x_2727 = json_to_layout_node_x_2714(JsonMember("node", x_2722));
      OutputChangeMetric(layout_size_x_2715(x_2727));
      InputChangeMetric(node_size_x_2716(x_2726));
      eval_stmts_x_2728(x_2726);
      eval_stmts_x_2729(x_2726);
      JsonToChannel(x_2717, [&]() {
        auto x_4457 = FreshJson();
        WriteJson(x_4457, "name", "PQ_D");
        WriteJson(x_4457, "diff_num", ReadRef(x_2719));
        WriteJson(x_4457, "read_count", MetricReadCount());
        WriteJson(x_4457, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_4457, "write_count", MetricWriteCount());
        WriteJson(x_4457, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_4457, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_4457, "input_change_count", MetricInputChangeCount());
        WriteJson(x_4457, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_4457, "overhead_time", MetricOverheadTime());
        WriteJson(x_4457, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_4457, "eval_time", MetricEvalCount());
        WriteJson(x_4457, "html", "");
        WriteJson(x_4457, "command", StackToList(x_2723));
        return x_4457;
      }());
      OutputString(x_2717, "\n");
      ClearStack(x_2723);
      WriteRef(x_2719, IntAdd(ReadRef(x_2719), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_2718, [&](const auto &x_2730) {
        auto x_2731 = JsonOfString(x_2730);
        PushStack(x_2723, x_2731);
        std::string x_4459 = JsonToString(JsonMember("name", x_2731));
        if (x_4459 == "add") {
          return add_node_x_2735(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2734) { return JsonToInt(x_2734); }),
              x_2726, [&]() {
                auto x_2732 = json_to_node_aux_x_2712(JsonMember("node", x_2731));
                x_2732->parent = nullptr;
                x_2732->prev = nullptr;
                x_2732->next = nullptr;
                set_children_relation_x_2733(x_2732);
                return x_2732;
              }());
        } else if (x_4459 == "recalculate") {
          recalculate_x_2736(x_2726);
          JsonToChannel(x_2717, [&]() {
            auto x_4458 = FreshJson();
            WriteJson(x_4458, "name", "PQ_D");
            WriteJson(x_4458, "diff_num", ReadRef(x_2719));
            WriteJson(x_4458, "read_count", MetricReadCount());
            WriteJson(x_4458, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_4458, "write_count", MetricWriteCount());
            WriteJson(x_4458, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_4458, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_4458, "input_change_count", MetricInputChangeCount());
            WriteJson(x_4458, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_4458, "overhead_time", MetricOverheadTime());
            WriteJson(x_4458, "overhead_l2m", MetricOverheadL2m());
            WriteJson(x_4458, "eval_time", MetricEvalCount());
            WriteJson(x_4458, "html", "");
            WriteJson(x_4458, "command", StackToList(x_2723));
            return x_4458;
          }());
          OutputString(x_2717, "\n");
          ClearStack(x_2723);
          WriteRef(x_2719, IntAdd(ReadRef(x_2719), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_4459 == "remove") {
          return remove_node_x_2738(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2737) { return JsonToInt(x_2737); }),
              x_2726, MakeUnit());
        } else if (x_4459 == "replace") {
          return replace_node_x_2742(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2741) { return JsonToInt(x_2741); }),
              x_2726, [&]() {
                auto x_2739 = json_to_node_aux_x_2712(JsonMember("node", x_2731));
                x_2739->parent = nullptr;
                x_2739->prev = nullptr;
                x_2739->next = nullptr;
                set_children_relation_x_2740(x_2739);
                return x_2739;
              }());
        } else if (x_4459 == "replace_value") {
          return replace_value_x_2744(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2743) { return JsonToInt(x_2743); }),
              x_2726,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2731)), JsonToString(JsonMember("key", x_2731))),
                       JsonToValue(JsonMember("value", x_2731))));
        } else if (x_4459 == "delete_value") {
          return delete_value_x_2746(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2745) { return JsonToInt(x_2745); }),
              x_2726, MakePair(JsonToString(JsonMember("type", x_2731)), JsonToString(JsonMember("key", x_2731))));
        } else if (x_4459 == "insert_value") {
          return insert_value_x_2748(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2747) { return JsonToInt(x_2747); }),
              x_2726,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2731)), JsonToString(JsonMember("key", x_2731))),
                       JsonToValue(JsonMember("value", x_2731))));
        } else if (x_4459 == "layout_remove") {
          return remove_layout_node_x_2750(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2749) { return JsonToInt(x_2749); }),
              x_2727, MakeUnit());
        } else if (x_4459 == "layout_add") {
          return add_layout_node_x_2752(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2751) { return JsonToInt(x_2751); }),
              x_2727, json_to_layout_node_x_2714(JsonMember("node", x_2731)));
        } else if (x_4459 == "layout_replace") {
          return replace_layout_node_x_2754(
              ListMap(JsonToList(JsonMember("path", x_2731)), [&](const auto &x_2753) { return JsonToInt(x_2753); }),
              x_2727, json_to_layout_node_x_2714(JsonMember("node", x_2731)));
        } else if (x_4459 == "layout_info_changed") {
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