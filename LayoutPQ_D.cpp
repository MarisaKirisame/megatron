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
Unit var_modified_x_3369(const auto &x_3371);
auto eval_expr_x_3366(const auto &x_3378);
Unit var_modified_x_3364(const auto &x_3388);
auto eval_expr_x_3361(const auto &x_3393);
Unit var_modified_x_3359(const auto &x_3399);
auto eval_expr_x_3356(const auto &x_3407);
Unit var_modified_x_3354(const auto &x_3435);
auto eval_expr_x_3351(const auto &x_3445);
Unit var_modified_x_3349(const auto &x_3459);
auto eval_expr_x_3346(const auto &x_3466);
Unit var_modified_x_3344(const auto &x_3472);
auto eval_expr_x_3341(const auto &x_3480);
Unit var_modified_x_3339(const auto &x_3508);
auto eval_expr_x_3336(const auto &x_3518);
Unit var_modified_x_3334(const auto &x_3530);
auto eval_expr_x_3331(const auto &x_3535);
Unit var_modified_x_3329(const auto &x_3547);
auto eval_expr_x_3326(const auto &x_3552);
Unit var_modified_x_3324(const auto &x_3560);
auto eval_expr_x_3321(const auto &x_3568);
Unit var_modified_x_3319(const auto &x_3580);
auto eval_expr_x_3316(const auto &x_3585);
Unit var_modified_x_3314(const auto &x_3589);
auto eval_expr_x_3311(const auto &x_3594);
Unit var_modified_x_3308(const auto &x_3598);
auto eval_expr_x_3305(const auto &x_3616);
Unit var_modified_x_3303(const auto &x_3662);
auto eval_expr_x_3300(const auto &x_3667);
Unit var_modified_x_3298(const auto &x_3677);
auto eval_expr_x_3295(const auto &x_3688);
Unit var_modified_x_3293(const auto &x_3692);
auto eval_expr_x_3290(const auto &x_3703);
Unit var_modified_x_3288(const auto &x_3709);
auto eval_expr_x_3285(const auto &x_3714);
Unit var_modified_x_3283(const auto &x_3716);
auto eval_expr_x_3280(const auto &x_3721);
Unit var_modified_x_3278(const auto &x_3725);
auto eval_expr_x_3275(const auto &x_3733);
Unit var_modified_x_3273(const auto &x_3745);
auto eval_expr_x_3270(const auto &x_3750);
Unit var_modified_x_3268(const auto &x_3754);
auto eval_expr_x_3265(const auto &x_3762);
Unit var_modified_x_3263(const auto &x_3774);
auto eval_expr_x_3260(const auto &x_3782);
Unit var_modified_x_3258(const auto &x_3796);
auto eval_expr_x_3255(const auto &x_3807);
Unit var_modified_x_3253(const auto &x_3823);
auto eval_expr_x_3250(const auto &x_3828);
Unit var_modified_x_3248(const auto &x_3832);
auto eval_expr_x_3245(const auto &x_3842);
Unit var_modified_x_3243(const auto &x_3848);
auto eval_expr_x_3240(const auto &x_3858);
Unit var_modified_x_3238(const auto &x_3864);
auto eval_expr_x_3235(const auto &x_3872);
Unit var_modified_x_3233(const auto &x_3876);
auto eval_expr_x_3230(const auto &x_3884);
Unit var_modified_x_3228(const auto &x_3888);
auto eval_expr_x_3225(const auto &x_3899);
Unit var_modified_x_3223(const auto &x_3903);
auto eval_expr_x_3220(const auto &x_3914);
Unit var_modified_x_3217(const auto &x_3918);
auto eval_expr_x_3214(const auto &x_3930);
Unit var_modified_x_3212(const auto &x_3946);
auto eval_expr_x_3209(const auto &x_3958);
Unit var_modified_x_3207(const auto &x_3966);
auto eval_expr_x_3204(const auto &x_3978);
Unit var_modified_x_3202(const auto &x_3984);
auto eval_expr_x_3199(const auto &x_3989);
Unit var_modified_x_3197(const auto &x_3995);
auto eval_expr_x_3194(const auto &x_4003);
Unit var_modified_x_3192(const auto &x_4083);
auto eval_expr_x_3189(const auto &x_4088);
Unit var_modified_x_3187(const auto &x_4114);
auto eval_expr_x_3184(const auto &x_4122);
Unit var_modified_x_3182(const auto &x_4126);
auto eval_expr_x_3179(const auto &x_4131);
Unit var_modified_x_3177(const auto &x_4137);
auto eval_expr_x_3174(const auto &x_4149);
Unit var_modified_x_3172(const auto &x_4155);
auto eval_expr_x_3169(const auto &x_4167);
Unit var_modified_x_3167(const auto &x_4173);
auto eval_expr_x_3164(const auto &x_4183);
Unit var_modified_x_3162(const auto &x_4191);
auto eval_expr_x_3159(const auto &x_4196);
Unit var_modified_x_3157(const auto &x_4202);
auto eval_expr_x_3154(const auto &x_4210);
Unit var_modified_x_3152(const auto &x_4294);
auto eval_expr_x_3149(const auto &x_4299);
Unit var_modified_x_3147(const auto &x_4303);
auto eval_expr_x_3144(const auto &x_4308);
Unit var_modified_x_3142(const auto &x_4334);
auto eval_expr_x_3139(const auto &x_4339);
Unit var_modified_x_3137(const auto &x_4347);
auto eval_expr_x_3134(const auto &x_4355);
Unit eval_stmts_x_3033(const auto &x_3132);
Unit eval_stmts_x_3032(const auto &x_3133);
Unit eval_stmts_x_3031(const auto &x_3219);
Unit eval_stmts_x_3030(const auto &x_3310);
Unit x_2756(const auto &x_2757, const auto &x_2758, const auto &x_2759);
Unit x_2763(const auto &x_2764, const auto &x_2765, const auto &x_2766);
Unit x_2770(const auto &x_2771, const auto &x_2772, const auto &x_2773);
Unit x_2777(const auto &x_2778, const auto &x_2779, const auto &x_2780);
Unit x_2812(const auto &x_2813, const auto &x_2814, const auto &x_2815);
Unit x_2845(const auto &x_2846, const auto &x_2847, const auto &x_2848);
Unit x_2904(const auto &x_2905, const auto &x_2906, const auto &x_2907);
Unit x_2982(const auto &x_2983);
Unit x_2990(const auto &x_2991, const auto &x_2992, const auto &x_2993);
Unit recalculate_x_2737(const auto &x_3025);
Unit x_3036(const auto &x_3037, const auto &x_3038, const auto &x_3039);
Unit x_3085(const auto &x_3086);
Unit eval_stmts_x_2730(const auto &x_3093);
Unit eval_stmts_x_2729(const auto &x_3101);
Unit x_3109(const auto &x_3110);
int64_t x_3117(const auto &x_3118);
int64_t x_3120(const auto &x_3121);
LayoutNode x_3123(const auto &x_3124);
Node x_3126(const auto &x_3127);
Node x_3129(const auto &x_3130);
Unit var_modified_x_3369(const auto &x_3371) {
  return RecordOverhead([&](const auto &x_3372) {
    OptionMatch(
        x_3371->next, [&](const auto &x_3374) { return MakeUnit(); },
        [&](const auto &x_3373) {
          auto x_3375 = x_3373;
          if (x_3375->meta->bb_3_has_bb_time_table) {
            if (!(x_3375->meta->bb_3_has_bb_dirtied && x_3375->meta->bb_3_bb_dirtied)) {
              x_3375->meta->bb_3_has_bb_dirtied = true;
              x_3375->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3375->meta->bb_3_bb_time_table, x_3375, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3366(const auto &x_3378) {
  return RecordEval([&](const auto &x_3379) {
    if ((x_3378->prev != nullptr) && (!(x_3378->prev)->var_line_break)) {
      return max(x_3378->var_height_external, (x_3378->prev)->var_line_height);
    } else {
      return x_3378->var_height_external;
    }
  });
}
Unit var_modified_x_3364(const auto &x_3388) {
  return RecordOverhead([&](const auto &x_3389) {
    auto x_3390 = x_3388;
    if (x_3390->meta->bb_3_has_bb_time_table) {
      if (!(x_3390->meta->bb_3_has_bb_dirtied && x_3390->meta->bb_3_bb_dirtied)) {
        x_3390->meta->bb_3_has_bb_dirtied = true;
        x_3390->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3390->meta->bb_3_bb_time_table, x_3390, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3361(const auto &x_3393) {
  return RecordEval([&](const auto &x_3394) {
    if (eq(x_3393->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_3393->var_height_internal;
    }
  });
}
Unit var_modified_x_3359(const auto &x_3399) {
  return RecordOverhead([&](const auto &x_3400) {
    auto x_3401 = x_3399;
    if (x_3401->meta->bb_3_has_bb_time_table) {
      if (!(x_3401->meta->bb_3_has_bb_dirtied && x_3401->meta->bb_3_bb_dirtied)) {
        x_3401->meta->bb_3_has_bb_dirtied = true;
        x_3401->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3401->meta->bb_3_bb_time_table, x_3401, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3399->children, [&](const auto &x_3404) {
      if (x_3404->meta->bb_3_has_bb_time_table) {
        if (!(x_3404->meta->bb_3_has_bb_dirtied && x_3404->meta->bb_3_bb_dirtied)) {
          x_3404->meta->bb_3_has_bb_dirtied = true;
          x_3404->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3404->meta->bb_3_bb_time_table, x_3404, static_cast<int64_t>(2));
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
auto eval_expr_x_3356(const auto &x_3407) {
  return RecordEval([&](const auto &x_3408) {
    if (x_3407->var_intrinsic_height_is_height) {
      return x_3407->var_intrinsic_height_internal;
    } else {
      if ((x_3407->parent != nullptr) && (x_3407->parent)->var_is_flex_column) {
        return plus(x_3407->var_intrinsic_height_internal,
                    mult(x_3407->var_flex_amount, (x_3407->parent)->var_flex_unit));
      } else {
        if (x_3407->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_3407->var_box_height, divide(x_3407->var_height_expr.r.a0, 100.));
        } else {
          return max(x_3407->var_box_height, x_3407->var_intrinsic_height_internal);
        }
      }
    }
  });
}
Unit var_modified_x_3354(const auto &x_3435) {
  return RecordOverhead([&](const auto &x_3436) {
    ListIter(x_3435->children, [&](const auto &x_3437) {
      if (x_3437->meta->bb_3_has_bb_time_table) {
        if (!(x_3437->meta->bb_3_has_bb_dirtied && x_3437->meta->bb_3_bb_dirtied)) {
          x_3437->meta->bb_3_has_bb_dirtied = true;
          x_3437->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3437->meta->bb_3_bb_time_table, x_3437, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_3435->next, [&](const auto &x_3441) { return MakeUnit(); },
        [&](const auto &x_3440) {
          auto x_3442 = x_3440;
          if (x_3442->meta->bb_3_has_bb_time_table) {
            if (!(x_3442->meta->bb_3_has_bb_dirtied && x_3442->meta->bb_3_bb_dirtied)) {
              x_3442->meta->bb_3_has_bb_dirtied = true;
              x_3442->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3442->meta->bb_3_bb_time_table, x_3442, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3351(const auto &x_3445) {
  return RecordEval([&](const auto &x_3446) {
    if (x_3445->prev != nullptr) {
      if (x_3445->var_line_break || (x_3445->prev)->var_line_break) {
        return plus((x_3445->prev)->var_y, (x_3445->prev)->var_line_height);
      } else {
        return (x_3445->prev)->var_y;
      }
    } else {
      if (x_3445->parent != nullptr) {
        return (x_3445->parent)->var_y;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_3349(const auto &x_3459) {
  return RecordOverhead([&](const auto &x_3460) {
    OptionMatch(
        x_3459->next, [&](const auto &x_3462) { return MakeUnit(); },
        [&](const auto &x_3461) {
          auto x_3463 = x_3461;
          if (x_3463->meta->bb_3_has_bb_time_table) {
            if (!(x_3463->meta->bb_3_has_bb_dirtied && x_3463->meta->bb_3_bb_dirtied)) {
              x_3463->meta->bb_3_has_bb_dirtied = true;
              x_3463->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3463->meta->bb_3_bb_time_table, x_3463, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3346(const auto &x_3466) {
  return RecordEval([&](const auto &x_3467) {
    if (eq(x_3466->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_3466->var_width_internal;
    }
  });
}
Unit var_modified_x_3344(const auto &x_3472) {
  return RecordOverhead([&](const auto &x_3473) {
    auto x_3474 = x_3472;
    if (x_3474->meta->bb_3_has_bb_time_table) {
      if (!(x_3474->meta->bb_3_has_bb_dirtied && x_3474->meta->bb_3_bb_dirtied)) {
        x_3474->meta->bb_3_has_bb_dirtied = true;
        x_3474->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3474->meta->bb_3_bb_time_table, x_3474, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3472->children, [&](const auto &x_3477) {
      if (x_3477->meta->bb_3_has_bb_time_table) {
        if (!(x_3477->meta->bb_3_has_bb_dirtied && x_3477->meta->bb_3_bb_dirtied)) {
          x_3477->meta->bb_3_has_bb_dirtied = true;
          x_3477->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3477->meta->bb_3_bb_time_table, x_3477, static_cast<int64_t>(2));
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
auto eval_expr_x_3341(const auto &x_3480) {
  return RecordEval([&](const auto &x_3481) {
    if (x_3480->var_intrinsic_width_is_width) {
      return x_3480->var_intrinsic_width_internal;
    } else {
      if ((x_3480->parent != nullptr) && (x_3480->parent)->var_is_flex_row) {
        return plus(x_3480->var_intrinsic_width_internal,
                    mult(x_3480->var_flex_amount, (x_3480->parent)->var_flex_unit));
      } else {
        if (x_3480->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
          return mult(x_3480->var_box_width, divide(x_3480->var_width_expr.r.a0, 100.));
        } else {
          return max(x_3480->var_box_width, x_3480->var_intrinsic_width_internal);
        }
      }
    }
  });
}
Unit var_modified_x_3339(const auto &x_3508) {
  return RecordOverhead([&](const auto &x_3509) {
    ListIter(x_3508->children, [&](const auto &x_3510) {
      if (x_3510->meta->bb_3_has_bb_time_table) {
        if (!(x_3510->meta->bb_3_has_bb_dirtied && x_3510->meta->bb_3_bb_dirtied)) {
          x_3510->meta->bb_3_has_bb_dirtied = true;
          x_3510->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3510->meta->bb_3_bb_time_table, x_3510, static_cast<int64_t>(2));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_3508->next, [&](const auto &x_3514) { return MakeUnit(); },
        [&](const auto &x_3513) {
          auto x_3515 = x_3513;
          if (x_3515->meta->bb_3_has_bb_time_table) {
            if (!(x_3515->meta->bb_3_has_bb_dirtied && x_3515->meta->bb_3_bb_dirtied)) {
              x_3515->meta->bb_3_has_bb_dirtied = true;
              x_3515->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3515->meta->bb_3_bb_time_table, x_3515, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3336(const auto &x_3518) {
  return RecordEval([&](const auto &x_3519) {
    if (x_3518->prev != nullptr) {
      if (x_3518->var_line_break || (x_3518->prev)->var_line_break) {
        return 0.;
      } else {
        return plus((x_3518->prev)->var_x, (x_3518->prev)->var_width_external);
      }
    } else {
      if (x_3518->parent != nullptr) {
        return (x_3518->parent)->var_x;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_3334(const auto &x_3530) {
  return RecordOverhead([&](const auto &x_3531) {
    ListIter(x_3530->children, [&](const auto &x_3532) {
      if (x_3532->meta->bb_3_has_bb_time_table) {
        if (!(x_3532->meta->bb_3_has_bb_dirtied && x_3532->meta->bb_3_bb_dirtied)) {
          x_3532->meta->bb_3_has_bb_dirtied = true;
          x_3532->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3532->meta->bb_3_bb_time_table, x_3532, static_cast<int64_t>(2));
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
auto eval_expr_x_3331(const auto &x_3535) {
  return RecordEval([&](const auto &x_3536) {
    if (gt(x_3535->var_left_over, 0.)) {
      return divide(x_3535->var_left_over, x_3535->var_flex_grow_sum);
    } else {
      return divide(x_3535->var_left_over, x_3535->var_flex_shrink_sum);
    }
  });
}
Unit var_modified_x_3329(const auto &x_3547) {
  return RecordOverhead([&](const auto &x_3548) {
    auto x_3549 = x_3547;
    if (x_3549->meta->bb_3_has_bb_time_table) {
      if (!(x_3549->meta->bb_3_has_bb_dirtied && x_3549->meta->bb_3_bb_dirtied)) {
        x_3549->meta->bb_3_has_bb_dirtied = true;
        x_3549->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3549->meta->bb_3_bb_time_table, x_3549, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3326(const auto &x_3552) {
  return RecordEval([&](const auto &x_3553) {
    if ((x_3552->parent != nullptr) && gt((x_3552->parent)->var_left_over, 0.)) {
      return x_3552->var_flex_grow;
    } else {
      return x_3552->var_flex_shrink;
    }
  });
}
Unit var_modified_x_3324(const auto &x_3560) {
  return RecordOverhead([&](const auto &x_3561) {
    auto x_3562 = x_3560;
    if (x_3562->meta->bb_3_has_bb_time_table) {
      if (!(x_3562->meta->bb_3_has_bb_dirtied && x_3562->meta->bb_3_bb_dirtied)) {
        x_3562->meta->bb_3_has_bb_dirtied = true;
        x_3562->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3562->meta->bb_3_bb_time_table, x_3562, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3560->children, [&](const auto &x_3565) {
      if (x_3565->meta->bb_3_has_bb_time_table) {
        if (!(x_3565->meta->bb_3_has_bb_dirtied && x_3565->meta->bb_3_bb_dirtied)) {
          x_3565->meta->bb_3_has_bb_dirtied = true;
          x_3565->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3565->meta->bb_3_bb_time_table, x_3565, static_cast<int64_t>(2));
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
auto eval_expr_x_3321(const auto &x_3568) {
  return RecordEval([&](const auto &x_3569) {
    if (x_3568->var_is_flex_row) {
      return minus(x_3568->var_box_width, (x_3568->last != nullptr) ? ((x_3568->last)->var_intrinsic_width_sum) : (0.));
    } else {
      return minus(x_3568->var_box_height,
                   (x_3568->last != nullptr) ? ((x_3568->last)->var_intrinsic_height_sum) : (0.));
    }
  });
}
Unit var_modified_x_3319(const auto &x_3580) {
  return RecordOverhead([&](const auto &x_3581) {
    auto x_3582 = x_3580;
    if (x_3582->meta->bb_3_has_bb_time_table) {
      if (!(x_3582->meta->bb_3_has_bb_dirtied && x_3582->meta->bb_3_bb_dirtied)) {
        x_3582->meta->bb_3_has_bb_dirtied = true;
        x_3582->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3582->meta->bb_3_bb_time_table, x_3582, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3316(const auto &x_3585) {
  return RecordEval([&](const auto &x_3586) {
    if (x_3585->parent != nullptr) {
      return (x_3585->parent)->var_height_internal;
    } else {
      return 1080.;
    }
  });
}
Unit var_modified_x_3314(const auto &x_3589) {
  return RecordOverhead([&](const auto &x_3590) {
    auto x_3591 = x_3589;
    if (x_3591->meta->bb_3_has_bb_time_table) {
      if (!(x_3591->meta->bb_3_has_bb_dirtied && x_3591->meta->bb_3_bb_dirtied)) {
        x_3591->meta->bb_3_has_bb_dirtied = true;
        x_3591->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3591->meta->bb_3_bb_time_table, x_3591, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3311(const auto &x_3594) {
  return RecordEval([&](const auto &x_3595) {
    if (x_3594->parent != nullptr) {
      return (x_3594->parent)->var_width_internal;
    } else {
      return 1920.;
    }
  });
}
Unit var_modified_x_3308(const auto &x_3598) {
  return RecordOverhead([&](const auto &x_3599) {
    auto x_3600 = x_3598;
    if (x_3600->meta->bb_0_has_bb_time_table) {
      if (!(x_3600->meta->bb_0_has_bb_dirtied && x_3600->meta->bb_0_bb_dirtied)) {
        x_3600->meta->bb_0_has_bb_dirtied = true;
        x_3600->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3600->meta->bb_0_bb_time_table, x_3600, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    OptionMatch(
        x_3598->next, [&](const auto &x_3604) { return MakeUnit(); },
        [&](const auto &x_3603) {
          auto x_3605 = x_3603;
          if (x_3605->meta->bb_0_has_bb_time_table) {
            if (!(x_3605->meta->bb_0_has_bb_dirtied && x_3605->meta->bb_0_bb_dirtied)) {
              x_3605->meta->bb_0_has_bb_dirtied = true;
              x_3605->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3605->meta->bb_0_bb_time_table, x_3605, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    auto x_3608 = x_3598;
    if (x_3608->meta->bb_3_has_bb_time_table) {
      if (!(x_3608->meta->bb_3_has_bb_dirtied && x_3608->meta->bb_3_bb_dirtied)) {
        x_3608->meta->bb_3_has_bb_dirtied = true;
        x_3608->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3608->meta->bb_3_bb_time_table, x_3608, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    OptionMatch(
        x_3598->next, [&](const auto &x_3612) { return MakeUnit(); },
        [&](const auto &x_3611) {
          auto x_3613 = x_3611;
          if (x_3613->meta->bb_3_has_bb_time_table) {
            if (!(x_3613->meta->bb_3_has_bb_dirtied && x_3613->meta->bb_3_bb_dirtied)) {
              x_3613->meta->bb_3_has_bb_dirtied = true;
              x_3613->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3613->meta->bb_3_bb_time_table, x_3613, static_cast<int64_t>(2));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3305(const auto &x_3616) {
  return RecordEval([&](const auto &x_3617) {
    if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return false;
    } else {
      if (eq(x_3616->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
        return false;
      } else {
        if ((x_3616->parent != nullptr) &&
            (eq((x_3616->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
             eq((x_3616->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
          return true;
        } else {
          if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
            return true;
          } else {
            if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
              return false;
            } else {
              if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
                return false;
              } else {
                if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                  if (eq(x_3616->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                    return false;
                  } else {
                    if (eq(x_3616->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                      return false;
                    } else {
                      if (eq(x_3616->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                        return true;
                      } else {
                        return true;
                      }
                    }
                  }
                } else {
                  if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                    return false;
                  } else {
                    if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                      return false;
                    } else {
                      if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                        return true;
                      } else {
                        if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                          return true;
                        } else {
                          if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                            return true;
                          } else {
                            if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                              return false;
                            } else {
                              if (eq(x_3616->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_3303(const auto &x_3662) {
  return RecordOverhead([&](const auto &x_3663) {
    ListIter(x_3662->children, [&](const auto &x_3664) {
      if (x_3664->meta->bb_1_has_bb_time_table) {
        if (!(x_3664->meta->bb_1_has_bb_dirtied && x_3664->meta->bb_1_bb_dirtied)) {
          x_3664->meta->bb_1_has_bb_dirtied = true;
          x_3664->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3664->meta->bb_1_bb_time_table, x_3664, static_cast<int64_t>(0));
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
auto eval_expr_x_3300(const auto &x_3667) {
  return RecordEval([&](const auto &x_3668) {
    return (((!(x_3667->parent != nullptr)) || (x_3667->parent)->var_visible) &&
            (neq(x_3667->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
             ((!x_3667->var_inside_svg) && (!x_3667->var_disabled))));
  });
}
Unit var_modified_x_3298(const auto &x_3677) {
  return RecordOverhead([&](const auto &x_3678) {
    auto x_3679 = x_3677;
    if (x_3679->meta->bb_1_has_bb_time_table) {
      if (!(x_3679->meta->bb_1_has_bb_dirtied && x_3679->meta->bb_1_bb_dirtied)) {
        x_3679->meta->bb_1_has_bb_dirtied = true;
        x_3679->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3679->meta->bb_1_bb_time_table, x_3679, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    ListIter(x_3677->children, [&](const auto &x_3682) {
      if (x_3682->meta->bb_1_has_bb_time_table) {
        if (!(x_3682->meta->bb_1_has_bb_dirtied && x_3682->meta->bb_1_bb_dirtied)) {
          x_3682->meta->bb_1_has_bb_dirtied = true;
          x_3682->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3682->meta->bb_1_bb_time_table, x_3682, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3685 = x_3677;
    if (x_3685->meta->bb_0_has_bb_time_table) {
      if (!(x_3685->meta->bb_0_has_bb_dirtied && x_3685->meta->bb_0_bb_dirtied)) {
        x_3685->meta->bb_0_has_bb_dirtied = true;
        x_3685->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3685->meta->bb_0_bb_time_table, x_3685, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3295(const auto &x_3688) {
  return RecordEval([&](const auto &x_3689) {
    if (eq(x_3688->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
      return true;
    } else {
      return ((x_3688->parent != nullptr) && (x_3688->parent)->var_disabled);
    }
  });
}
Unit var_modified_x_3293(const auto &x_3692) {
  return RecordOverhead([&](const auto &x_3693) {
    auto x_3694 = x_3692;
    if (x_3694->meta->bb_1_has_bb_time_table) {
      if (!(x_3694->meta->bb_1_has_bb_dirtied && x_3694->meta->bb_1_bb_dirtied)) {
        x_3694->meta->bb_1_has_bb_dirtied = true;
        x_3694->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3694->meta->bb_1_bb_time_table, x_3694, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    ListIter(x_3692->children, [&](const auto &x_3697) {
      if (x_3697->meta->bb_1_has_bb_time_table) {
        if (!(x_3697->meta->bb_1_has_bb_dirtied && x_3697->meta->bb_1_bb_dirtied)) {
          x_3697->meta->bb_1_has_bb_dirtied = true;
          x_3697->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3697->meta->bb_1_bb_time_table, x_3697, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3700 = x_3692;
    if (x_3700->meta->bb_0_has_bb_time_table) {
      if (!(x_3700->meta->bb_0_has_bb_dirtied && x_3700->meta->bb_0_bb_dirtied)) {
        x_3700->meta->bb_0_has_bb_dirtied = true;
        x_3700->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3700->meta->bb_0_bb_time_table, x_3700, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3290(const auto &x_3703) {
  return RecordEval([&](const auto &x_3704) {
    return ((x_3703->parent != nullptr) && ((x_3703->parent)->var_is_svg_block || (x_3703->parent)->var_inside_svg));
  });
}
Unit var_modified_x_3288(const auto &x_3709) {
  return RecordOverhead([&](const auto &x_3710) {
    ListIter(x_3709->children, [&](const auto &x_3711) {
      if (x_3711->meta->bb_1_has_bb_time_table) {
        if (!(x_3711->meta->bb_1_has_bb_dirtied && x_3711->meta->bb_1_bb_dirtied)) {
          x_3711->meta->bb_1_has_bb_dirtied = true;
          x_3711->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3711->meta->bb_1_bb_time_table, x_3711, static_cast<int64_t>(0));
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
auto eval_expr_x_3285(const auto &x_3714) {
  return RecordEval([&](const auto &x_3715) { return eq(x_3714->name, DEStringLit(DEStringCase::DSTRING_svg)); });
}
Unit var_modified_x_3283(const auto &x_3716) {
  return RecordOverhead([&](const auto &x_3717) {
    auto x_3718 = x_3716;
    if (x_3718->meta->bb_0_has_bb_time_table) {
      if (!(x_3718->meta->bb_0_has_bb_dirtied && x_3718->meta->bb_0_bb_dirtied)) {
        x_3718->meta->bb_0_has_bb_dirtied = true;
        x_3718->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3718->meta->bb_0_bb_time_table, x_3718, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3280(const auto &x_3721) {
  return RecordEval(
      [&](const auto &x_3722) { return neq(x_3721->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_3278(const auto &x_3725) {
  return RecordOverhead([&](const auto &x_3726) {
    auto x_3727 = x_3725;
    if (x_3727->meta->bb_1_has_bb_time_table) {
      if (!(x_3727->meta->bb_1_has_bb_dirtied && x_3727->meta->bb_1_bb_dirtied)) {
        x_3727->meta->bb_1_has_bb_dirtied = true;
        x_3727->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3727->meta->bb_1_bb_time_table, x_3727, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3730 = x_3725;
    if (x_3730->meta->bb_0_has_bb_time_table) {
      if (!(x_3730->meta->bb_0_has_bb_dirtied && x_3730->meta->bb_0_bb_dirtied)) {
        x_3730->meta->bb_0_has_bb_dirtied = true;
        x_3730->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3730->meta->bb_0_bb_time_table, x_3730, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3275(const auto &x_3733) {
  return RecordEval([&](const auto &x_3734) {
    if (!x_3733->has_attr_height) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_3733->attr_height.c == DEStringCase::DStringIsFloat) ||
          (x_3733->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_3733->attr_height;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_3273(const auto &x_3745) {
  return RecordOverhead([&](const auto &x_3746) {
    auto x_3747 = x_3745;
    if (x_3747->meta->bb_0_has_bb_time_table) {
      if (!(x_3747->meta->bb_0_has_bb_dirtied && x_3747->meta->bb_0_bb_dirtied)) {
        x_3747->meta->bb_0_has_bb_dirtied = true;
        x_3747->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3747->meta->bb_0_bb_time_table, x_3747, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3270(const auto &x_3750) {
  return RecordEval(
      [&](const auto &x_3751) { return neq(x_3750->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto)); });
}
Unit var_modified_x_3268(const auto &x_3754) {
  return RecordOverhead([&](const auto &x_3755) {
    auto x_3756 = x_3754;
    if (x_3756->meta->bb_1_has_bb_time_table) {
      if (!(x_3756->meta->bb_1_has_bb_dirtied && x_3756->meta->bb_1_bb_dirtied)) {
        x_3756->meta->bb_1_has_bb_dirtied = true;
        x_3756->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3756->meta->bb_1_bb_time_table, x_3756, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3759 = x_3754;
    if (x_3759->meta->bb_0_has_bb_time_table) {
      if (!(x_3759->meta->bb_0_has_bb_dirtied && x_3759->meta->bb_0_bb_dirtied)) {
        x_3759->meta->bb_0_has_bb_dirtied = true;
        x_3759->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3759->meta->bb_0_bb_time_table, x_3759, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3265(const auto &x_3762) {
  return RecordEval([&](const auto &x_3763) {
    if (!x_3762->has_attr_width) {
      return DEStringLit(DEStringCase::DSTRING_auto);
    } else {
      if ((x_3762->attr_width.c == DEStringCase::DStringIsFloat) ||
          (x_3762->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
        return x_3762->attr_width;
      } else {
        return DEStringLit(DEStringCase::DSTRING_auto);
      }
    }
  });
}
Unit var_modified_x_3263(const auto &x_3774) {
  return RecordOverhead([&](const auto &x_3775) {
    ListIter(x_3774->children, [&](const auto &x_3776) {
      if (x_3776->meta->bb_0_has_bb_time_table) {
        if (!(x_3776->meta->bb_0_has_bb_dirtied && x_3776->meta->bb_0_bb_dirtied)) {
          x_3776->meta->bb_0_has_bb_dirtied = true;
          x_3776->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3776->meta->bb_0_bb_time_table, x_3776, static_cast<int64_t>(1));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    ListIter(x_3774->children, [&](const auto &x_3779) {
      if (x_3779->meta->bb_3_has_bb_time_table) {
        if (!(x_3779->meta->bb_3_has_bb_dirtied && x_3779->meta->bb_3_bb_dirtied)) {
          x_3779->meta->bb_3_has_bb_dirtied = true;
          x_3779->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3779->meta->bb_3_bb_time_table, x_3779, static_cast<int64_t>(2));
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
auto eval_expr_x_3260(const auto &x_3782) {
  return RecordEval([&](const auto &x_3783) {
    if ((x_3782->parent != nullptr) &&
        (eq((x_3782->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_3782->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_3782->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
          eq((x_3782->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_3258(const auto &x_3796) {
  return RecordOverhead([&](const auto &x_3797) {
    ListIter(x_3796->children, [&](const auto &x_3798) {
      if (x_3798->meta->bb_0_has_bb_time_table) {
        if (!(x_3798->meta->bb_0_has_bb_dirtied && x_3798->meta->bb_0_bb_dirtied)) {
          x_3798->meta->bb_0_has_bb_dirtied = true;
          x_3798->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3798->meta->bb_0_bb_time_table, x_3798, static_cast<int64_t>(1));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3801 = x_3796;
    if (x_3801->meta->bb_3_has_bb_time_table) {
      if (!(x_3801->meta->bb_3_has_bb_dirtied && x_3801->meta->bb_3_bb_dirtied)) {
        x_3801->meta->bb_3_has_bb_dirtied = true;
        x_3801->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3801->meta->bb_3_bb_time_table, x_3801, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    ListIter(x_3796->children, [&](const auto &x_3804) {
      if (x_3804->meta->bb_3_has_bb_time_table) {
        if (!(x_3804->meta->bb_3_has_bb_dirtied && x_3804->meta->bb_3_bb_dirtied)) {
          x_3804->meta->bb_3_has_bb_dirtied = true;
          x_3804->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3804->meta->bb_3_bb_time_table, x_3804, static_cast<int64_t>(2));
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
auto eval_expr_x_3255(const auto &x_3807) {
  return RecordEval([&](const auto &x_3808) {
    if ((x_3807->parent != nullptr) &&
        (eq((x_3807->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
         eq((x_3807->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
      if (eq((x_3807->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
          eq((x_3807->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  });
}
Unit var_modified_x_3253(const auto &x_3823) {
  return RecordOverhead([&](const auto &x_3824) {
    ListIter(x_3823->children, [&](const auto &x_3825) {
      if (x_3825->meta->bb_1_has_bb_time_table) {
        if (!(x_3825->meta->bb_1_has_bb_dirtied && x_3825->meta->bb_1_bb_dirtied)) {
          x_3825->meta->bb_1_has_bb_dirtied = true;
          x_3825->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3825->meta->bb_1_bb_time_table, x_3825, static_cast<int64_t>(0));
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
auto eval_expr_x_3250(const auto &x_3828) {
  return RecordEval([&](const auto &x_3829) {
    if (x_3828->has_prop_flex_direction) {
      return x_3828->prop_flex_direction;
    } else {
      return DEStringLit(DEStringCase::DSTRING_);
    }
  });
}
Unit var_modified_x_3248(const auto &x_3832) {
  return RecordOverhead([&](const auto &x_3833) {
    OptionMatch(
        x_3832->next, [&](const auto &x_3835) { return MakeUnit(); },
        [&](const auto &x_3834) {
          auto x_3836 = x_3834;
          if (x_3836->meta->bb_1_has_bb_time_table) {
            if (!(x_3836->meta->bb_1_has_bb_dirtied && x_3836->meta->bb_1_bb_dirtied)) {
              x_3836->meta->bb_1_has_bb_dirtied = true;
              x_3836->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3836->meta->bb_1_bb_time_table, x_3836, static_cast<int64_t>(0));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    auto x_3839 = x_3832;
    if (x_3839->meta->bb_3_has_bb_time_table) {
      if (!(x_3839->meta->bb_3_has_bb_dirtied && x_3839->meta->bb_3_bb_dirtied)) {
        x_3839->meta->bb_3_has_bb_dirtied = true;
        x_3839->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3839->meta->bb_3_bb_time_table, x_3839, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3245(const auto &x_3842) {
  return RecordEval([&](const auto &x_3843) {
    return plus((x_3842->prev != nullptr) ? ((x_3842->prev)->var_flex_shrink_sum) : (0.), x_3842->var_flex_shrink);
  });
}
Unit var_modified_x_3243(const auto &x_3848) {
  return RecordOverhead([&](const auto &x_3849) {
    OptionMatch(
        x_3848->next, [&](const auto &x_3851) { return MakeUnit(); },
        [&](const auto &x_3850) {
          auto x_3852 = x_3850;
          if (x_3852->meta->bb_1_has_bb_time_table) {
            if (!(x_3852->meta->bb_1_has_bb_dirtied && x_3852->meta->bb_1_bb_dirtied)) {
              x_3852->meta->bb_1_has_bb_dirtied = true;
              x_3852->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3852->meta->bb_1_bb_time_table, x_3852, static_cast<int64_t>(0));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    auto x_3855 = x_3848;
    if (x_3855->meta->bb_3_has_bb_time_table) {
      if (!(x_3855->meta->bb_3_has_bb_dirtied && x_3855->meta->bb_3_bb_dirtied)) {
        x_3855->meta->bb_3_has_bb_dirtied = true;
        x_3855->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3855->meta->bb_3_bb_time_table, x_3855, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3240(const auto &x_3858) {
  return RecordEval([&](const auto &x_3859) {
    return plus((x_3858->prev != nullptr) ? ((x_3858->prev)->var_flex_grow_sum) : (0.), x_3858->var_flex_grow);
  });
}
Unit var_modified_x_3238(const auto &x_3864) {
  return RecordOverhead([&](const auto &x_3865) {
    auto x_3866 = x_3864;
    if (x_3866->meta->bb_1_has_bb_time_table) {
      if (!(x_3866->meta->bb_1_has_bb_dirtied && x_3866->meta->bb_1_bb_dirtied)) {
        x_3866->meta->bb_1_has_bb_dirtied = true;
        x_3866->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3866->meta->bb_1_bb_time_table, x_3866, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3869 = x_3864;
    if (x_3869->meta->bb_3_has_bb_time_table) {
      if (!(x_3869->meta->bb_3_has_bb_dirtied && x_3869->meta->bb_3_bb_dirtied)) {
        x_3869->meta->bb_3_has_bb_dirtied = true;
        x_3869->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3869->meta->bb_3_bb_time_table, x_3869, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3235(const auto &x_3872) {
  return RecordEval([&](const auto &x_3873) {
    if (x_3872->has_prop_flex_shrink) {
      return (x_3872->prop_flex_shrink.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3233(const auto &x_3876) {
  return RecordOverhead([&](const auto &x_3877) {
    auto x_3878 = x_3876;
    if (x_3878->meta->bb_1_has_bb_time_table) {
      if (!(x_3878->meta->bb_1_has_bb_dirtied && x_3878->meta->bb_1_bb_dirtied)) {
        x_3878->meta->bb_1_has_bb_dirtied = true;
        x_3878->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3878->meta->bb_1_bb_time_table, x_3878, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3881 = x_3876;
    if (x_3881->meta->bb_3_has_bb_time_table) {
      if (!(x_3881->meta->bb_3_has_bb_dirtied && x_3881->meta->bb_3_bb_dirtied)) {
        x_3881->meta->bb_3_has_bb_dirtied = true;
        x_3881->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3881->meta->bb_3_bb_time_table, x_3881, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3230(const auto &x_3884) {
  return RecordEval([&](const auto &x_3885) {
    if (x_3884->has_prop_flex_grow) {
      return (x_3884->prop_flex_grow.r.a0);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3228(const auto &x_3888) {
  return RecordOverhead([&](const auto &x_3889) {
    auto x_3890 = x_3888;
    if (x_3890->meta->bb_1_has_bb_time_table) {
      if (!(x_3890->meta->bb_1_has_bb_dirtied && x_3890->meta->bb_1_bb_dirtied)) {
        x_3890->meta->bb_1_has_bb_dirtied = true;
        x_3890->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3890->meta->bb_1_bb_time_table, x_3890, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    auto x_3893 = x_3888;
    if (x_3893->meta->bb_0_has_bb_time_table) {
      if (!(x_3893->meta->bb_0_has_bb_dirtied && x_3893->meta->bb_0_bb_dirtied)) {
        x_3893->meta->bb_0_has_bb_dirtied = true;
        x_3893->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3893->meta->bb_0_bb_time_table, x_3893, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_3896 = x_3888;
    if (x_3896->meta->bb_3_has_bb_time_table) {
      if (!(x_3896->meta->bb_3_has_bb_dirtied && x_3896->meta->bb_3_bb_dirtied)) {
        x_3896->meta->bb_3_has_bb_dirtied = true;
        x_3896->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3896->meta->bb_3_bb_time_table, x_3896, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3225(const auto &x_3899) {
  return RecordEval([&](const auto &x_3900) {
    if (x_3899->has_prop_position) {
      return x_3899->prop_position;
    } else {
      return DEStringLit(DEStringCase::DSTRING_static);
    }
  });
}
Unit var_modified_x_3223(const auto &x_3903) {
  return RecordOverhead([&](const auto &x_3904) {
    auto x_3905 = x_3903;
    if (x_3905->meta->bb_1_has_bb_time_table) {
      if (!(x_3905->meta->bb_1_has_bb_dirtied && x_3905->meta->bb_1_bb_dirtied)) {
        x_3905->meta->bb_1_has_bb_dirtied = true;
        x_3905->meta->bb_1_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3905->meta->bb_1_bb_time_table, x_3905, static_cast<int64_t>(0));
        MakeUnit();
      }
    }
    ListIter(x_3903->children, [&](const auto &x_3908) {
      if (x_3908->meta->bb_1_has_bb_time_table) {
        if (!(x_3908->meta->bb_1_has_bb_dirtied && x_3908->meta->bb_1_bb_dirtied)) {
          x_3908->meta->bb_1_has_bb_dirtied = true;
          x_3908->meta->bb_1_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3908->meta->bb_1_bb_time_table, x_3908, static_cast<int64_t>(0));
          return MakeUnit();
        } else {
          return MakeUnit();
        }
      } else {
        return MakeUnit();
      }
    });
    auto x_3911 = x_3903;
    if (x_3911->meta->bb_0_has_bb_time_table) {
      if (!(x_3911->meta->bb_0_has_bb_dirtied && x_3911->meta->bb_0_bb_dirtied)) {
        x_3911->meta->bb_0_has_bb_dirtied = true;
        x_3911->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3911->meta->bb_0_bb_time_table, x_3911, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3220(const auto &x_3914) {
  return RecordEval([&](const auto &x_3915) {
    if (x_3914->has_prop_display) {
      return x_3914->prop_display;
    } else {
      return DEStringLit(DEStringCase::DSTRING_block);
    }
  });
}
Unit var_modified_x_3217(const auto &x_3918) {
  return RecordOverhead([&](const auto &x_3919) {
    if (x_3918->next == nullptr) {
      OptionMatch(
          x_3918->parent, [&](const auto &x_3921) { return MakeUnit(); },
          [&](const auto &x_3920) {
            auto x_3922 = x_3920;
            if (x_3922->meta->bb_0_has_bb_time_table) {
              if (!(x_3922->meta->bb_0_has_bb_dirtied && x_3922->meta->bb_0_bb_dirtied)) {
                x_3922->meta->bb_0_has_bb_dirtied = true;
                x_3922->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3922->meta->bb_0_bb_time_table, x_3922, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_3918->next, [&](const auto &x_3926) { return MakeUnit(); },
        [&](const auto &x_3925) {
          auto x_3927 = x_3925;
          if (x_3927->meta->bb_0_has_bb_time_table) {
            if (!(x_3927->meta->bb_0_has_bb_dirtied && x_3927->meta->bb_0_bb_dirtied)) {
              x_3927->meta->bb_0_has_bb_dirtied = true;
              x_3927->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3927->meta->bb_0_bb_time_table, x_3927, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3214(const auto &x_3930) {
  return RecordEval([&](const auto &x_3931) {
    if (x_3930->prev != nullptr) {
      if (x_3930->var_line_break) {
        return plus((x_3930->prev)->var_finished_intrinsic_height_sum,
                    plus((x_3930->prev)->var_intrinsic_current_line_height, x_3930->var_intrinsic_height_external));
      } else {
        return (x_3930->prev)->var_finished_intrinsic_height_sum;
      }
    } else {
      if (x_3930->var_line_break) {
        return x_3930->var_intrinsic_height_external;
      } else {
        return 0.;
      }
    }
  });
}
Unit var_modified_x_3212(const auto &x_3946) {
  return RecordOverhead([&](const auto &x_3947) {
    if (x_3946->next == nullptr) {
      OptionMatch(
          x_3946->parent, [&](const auto &x_3949) { return MakeUnit(); },
          [&](const auto &x_3948) {
            auto x_3950 = x_3948;
            if (x_3950->meta->bb_0_has_bb_time_table) {
              if (!(x_3950->meta->bb_0_has_bb_dirtied && x_3950->meta->bb_0_bb_dirtied)) {
                x_3950->meta->bb_0_has_bb_dirtied = true;
                x_3950->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3950->meta->bb_0_bb_time_table, x_3950, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_3946->next, [&](const auto &x_3954) { return MakeUnit(); },
        [&](const auto &x_3953) {
          auto x_3955 = x_3953;
          if (x_3955->meta->bb_0_has_bb_time_table) {
            if (!(x_3955->meta->bb_0_has_bb_dirtied && x_3955->meta->bb_0_bb_dirtied)) {
              x_3955->meta->bb_0_has_bb_dirtied = true;
              x_3955->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3955->meta->bb_0_bb_time_table, x_3955, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3209(const auto &x_3958) {
  return RecordEval([&](const auto &x_3959) {
    if (x_3958->var_line_break) {
      return 0.;
    } else {
      return max(x_3958->var_intrinsic_height_external,
                 (x_3958->prev != nullptr) ? ((x_3958->prev)->var_intrinsic_current_line_height) : (0.));
    }
  });
}
Unit var_modified_x_3207(const auto &x_3966) {
  return RecordOverhead([&](const auto &x_3967) {
    OptionMatch(
        x_3966->next, [&](const auto &x_3969) { return MakeUnit(); },
        [&](const auto &x_3968) {
          auto x_3970 = x_3968;
          if (x_3970->meta->bb_0_has_bb_time_table) {
            if (!(x_3970->meta->bb_0_has_bb_dirtied && x_3970->meta->bb_0_bb_dirtied)) {
              x_3970->meta->bb_0_has_bb_dirtied = true;
              x_3970->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3970->meta->bb_0_bb_time_table, x_3970, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    if (x_3966->next == nullptr) {
      OptionMatch(
          x_3966->parent, [&](const auto &x_3974) { return MakeUnit(); },
          [&](const auto &x_3973) {
            auto x_3975 = x_3973;
            if (x_3975->meta->bb_3_has_bb_time_table) {
              if (!(x_3975->meta->bb_3_has_bb_dirtied && x_3975->meta->bb_3_bb_dirtied)) {
                x_3975->meta->bb_3_has_bb_dirtied = true;
                x_3975->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_3975->meta->bb_3_bb_time_table, x_3975, static_cast<int64_t>(2));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3204(const auto &x_3978) {
  return RecordEval([&](const auto &x_3979) {
    return plus((x_3978->prev != nullptr) ? ((x_3978->prev)->var_intrinsic_height_sum) : (0.),
                x_3978->var_intrinsic_height_external);
  });
}
Unit var_modified_x_3202(const auto &x_3984) {
  return RecordOverhead([&](const auto &x_3985) {
    auto x_3986 = x_3984;
    if (x_3986->meta->bb_0_has_bb_time_table) {
      if (!(x_3986->meta->bb_0_has_bb_dirtied && x_3986->meta->bb_0_bb_dirtied)) {
        x_3986->meta->bb_0_has_bb_dirtied = true;
        x_3986->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3986->meta->bb_0_bb_time_table, x_3986, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3199(const auto &x_3989) {
  return RecordEval([&](const auto &x_3990) {
    if (eq(x_3989->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_3989->var_intrinsic_height_internal;
    }
  });
}
Unit var_modified_x_3197(const auto &x_3995) {
  return RecordOverhead([&](const auto &x_3996) {
    auto x_3997 = x_3995;
    if (x_3997->meta->bb_0_has_bb_time_table) {
      if (!(x_3997->meta->bb_0_has_bb_dirtied && x_3997->meta->bb_0_bb_dirtied)) {
        x_3997->meta->bb_0_has_bb_dirtied = true;
        x_3997->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_3997->meta->bb_0_bb_time_table, x_3997, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_4000 = x_3995;
    if (x_4000->meta->bb_3_has_bb_time_table) {
      if (!(x_4000->meta->bb_3_has_bb_dirtied && x_4000->meta->bb_3_bb_dirtied)) {
        x_4000->meta->bb_3_has_bb_dirtied = true;
        x_4000->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4000->meta->bb_3_bb_time_table, x_4000, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3194(const auto &x_4003) {
  return RecordEval([&](const auto &x_4004) {
    if (eq(x_4003->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_4003->var_inside_svg) {
        return 0.;
      } else {
        if (x_4003->var_disabled) {
          return 0.;
        } else {
          if (neq(x_4003->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_4003->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               neq(x_4003->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
            if (x_4003->var_height_expr.c == DEStringCase::DHasSuffix_px) {
              return x_4003->var_height_expr.r.a0;
            } else {
              if (x_4003->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
                return x_4003->var_height_expr.r.a0;
              } else {
                return x_4003->var_height_expr.r.a0;
              }
            }
          } else {
            return plus(
                x_4003->var_children_intrinsic_height,
                (eq(x_4003->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (10.)
                    : ((x_4003->var_is_default_case)
                           ? (0.)
                           : ((eq(x_4003->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_4003->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_4003->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (10.)
                                         : ((eq(x_4003->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_4003->var_has_height_attr &&
                                                    (x_4003->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_4003->var_height_attr_expr.r.a0)
                                                       : ((x_4003->has_attr_viewBox)
                                                              ? (x_4003->attr_viewBox.r.a3)
                                                              : (mult(
                                                                    (x_4003->attr_viewBox.r.a3),
                                                                    divide(x_4003->var_height_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_4003->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_4003->var_has_height_attr)
                                                              ? (x_4003->var_height_attr_expr.r.a0)
                                                              : ((x_4003->has_attr_image_height &&
                                                                  (!x_4003->var_has_width_attr))
                                                                     ? (int_to_float(x_4003->attr_image_height))
                                                                     : ((neq(x_4003->attr_image_width,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult((x_4003->var_width_attr_expr.r.a0),
                                                                                    divide(
                                                                                        int_to_float(
                                                                                            x_4003->attr_image_height),
                                                                                        int_to_float(
                                                                                            x_4003->attr_image_width))))
                                                                            : (0.))))
                                                       : ((eq(x_4003->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (150.)
                                                              : ((eq(x_4003->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (150.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_3192(const auto &x_4083) {
  return RecordOverhead([&](const auto &x_4084) {
    auto x_4085 = x_4083;
    if (x_4085->meta->bb_3_has_bb_time_table) {
      if (!(x_4085->meta->bb_3_has_bb_dirtied && x_4085->meta->bb_3_bb_dirtied)) {
        x_4085->meta->bb_3_has_bb_dirtied = true;
        x_4085->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4085->meta->bb_3_bb_time_table, x_4085, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3189(const auto &x_4088) {
  return RecordEval([&](const auto &x_4089) {
    if (eq(x_4088->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_4088->var_inside_svg || x_4088->var_disabled)) {
      return true;
    } else {
      if ((x_4088->parent != nullptr) && (x_4088->parent)->var_is_flex_column) {
        return false;
      } else {
        if (eq(x_4088->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_4088->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_4088->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_4088->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
               eq(x_4088->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_3187(const auto &x_4114) {
  return RecordOverhead([&](const auto &x_4115) {
    auto x_4116 = x_4114;
    if (x_4116->meta->bb_0_has_bb_time_table) {
      if (!(x_4116->meta->bb_0_has_bb_dirtied && x_4116->meta->bb_0_bb_dirtied)) {
        x_4116->meta->bb_0_has_bb_dirtied = true;
        x_4116->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4116->meta->bb_0_bb_time_table, x_4116, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_4119 = x_4114;
    if (x_4119->meta->bb_3_has_bb_time_table) {
      if (!(x_4119->meta->bb_3_has_bb_dirtied && x_4119->meta->bb_3_bb_dirtied)) {
        x_4119->meta->bb_3_has_bb_dirtied = true;
        x_4119->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4119->meta->bb_3_bb_time_table, x_4119, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3184(const auto &x_4122) {
  return RecordEval([&](const auto &x_4123) {
    if (x_4122->has_prop_height) {
      return x_4122->prop_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit var_modified_x_3182(const auto &x_4126) {
  return RecordOverhead([&](const auto &x_4127) {
    auto x_4128 = x_4126;
    if (x_4128->meta->bb_0_has_bb_time_table) {
      if (!(x_4128->meta->bb_0_has_bb_dirtied && x_4128->meta->bb_0_bb_dirtied)) {
        x_4128->meta->bb_0_has_bb_dirtied = true;
        x_4128->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4128->meta->bb_0_bb_time_table, x_4128, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3179(const auto &x_4131) {
  return RecordEval([&](const auto &x_4132) {
    if (x_4131->last != nullptr) {
      return plus((x_4131->last)->var_finished_intrinsic_height_sum, (x_4131->last)->var_intrinsic_current_line_height);
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3177(const auto &x_4137) {
  return RecordOverhead([&](const auto &x_4138) {
    OptionMatch(
        x_4137->next, [&](const auto &x_4140) { return MakeUnit(); },
        [&](const auto &x_4139) {
          auto x_4141 = x_4139;
          if (x_4141->meta->bb_0_has_bb_time_table) {
            if (!(x_4141->meta->bb_0_has_bb_dirtied && x_4141->meta->bb_0_bb_dirtied)) {
              x_4141->meta->bb_0_has_bb_dirtied = true;
              x_4141->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_4141->meta->bb_0_bb_time_table, x_4141, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    if (x_4137->next == nullptr) {
      OptionMatch(
          x_4137->parent, [&](const auto &x_4145) { return MakeUnit(); },
          [&](const auto &x_4144) {
            auto x_4146 = x_4144;
            if (x_4146->meta->bb_3_has_bb_time_table) {
              if (!(x_4146->meta->bb_3_has_bb_dirtied && x_4146->meta->bb_3_bb_dirtied)) {
                x_4146->meta->bb_3_has_bb_dirtied = true;
                x_4146->meta->bb_3_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_4146->meta->bb_3_bb_time_table, x_4146, static_cast<int64_t>(2));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3174(const auto &x_4149) {
  return RecordEval([&](const auto &x_4150) {
    return plus((x_4149->prev != nullptr) ? ((x_4149->prev)->var_intrinsic_width_sum) : (0.),
                x_4149->var_intrinsic_width_external);
  });
}
Unit var_modified_x_3172(const auto &x_4155) {
  return RecordOverhead([&](const auto &x_4156) {
    if (x_4155->next == nullptr) {
      OptionMatch(
          x_4155->parent, [&](const auto &x_4158) { return MakeUnit(); },
          [&](const auto &x_4157) {
            auto x_4159 = x_4157;
            if (x_4159->meta->bb_0_has_bb_time_table) {
              if (!(x_4159->meta->bb_0_has_bb_dirtied && x_4159->meta->bb_0_bb_dirtied)) {
                x_4159->meta->bb_0_has_bb_dirtied = true;
                x_4159->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_4159->meta->bb_0_bb_time_table, x_4159, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          });
    }
    OptionMatch(
        x_4155->next, [&](const auto &x_4163) { return MakeUnit(); },
        [&](const auto &x_4162) {
          auto x_4164 = x_4162;
          if (x_4164->meta->bb_0_has_bb_time_table) {
            if (!(x_4164->meta->bb_0_has_bb_dirtied && x_4164->meta->bb_0_bb_dirtied)) {
              x_4164->meta->bb_0_has_bb_dirtied = true;
              x_4164->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_4164->meta->bb_0_bb_time_table, x_4164, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3169(const auto &x_4167) {
  return RecordEval([&](const auto &x_4168) {
    return max(x_4167->var_intrinsic_current_line_width,
               (x_4167->prev != nullptr) ? ((x_4167->prev)->var_intrinsic_width_max) : (0.));
  });
}
Unit var_modified_x_3167(const auto &x_4173) {
  return RecordOverhead([&](const auto &x_4174) {
    auto x_4175 = x_4173;
    if (x_4175->meta->bb_0_has_bb_time_table) {
      if (!(x_4175->meta->bb_0_has_bb_dirtied && x_4175->meta->bb_0_bb_dirtied)) {
        x_4175->meta->bb_0_has_bb_dirtied = true;
        x_4175->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4175->meta->bb_0_bb_time_table, x_4175, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    OptionMatch(
        x_4173->next, [&](const auto &x_4179) { return MakeUnit(); },
        [&](const auto &x_4178) {
          auto x_4180 = x_4178;
          if (x_4180->meta->bb_0_has_bb_time_table) {
            if (!(x_4180->meta->bb_0_has_bb_dirtied && x_4180->meta->bb_0_bb_dirtied)) {
              x_4180->meta->bb_0_has_bb_dirtied = true;
              x_4180->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_4180->meta->bb_0_bb_time_table, x_4180, static_cast<int64_t>(1));
              MakeUnit();
            }
          }
          return MakeUnit();
        });
    return MakeUnit();
  });
}
auto eval_expr_x_3164(const auto &x_4183) {
  return RecordEval([&](const auto &x_4184) {
    return plus(x_4183->var_intrinsic_width_external,
                ((x_4183->prev != nullptr) && (!(x_4183->prev)->var_line_break))
                    ? ((x_4183->prev)->var_intrinsic_current_line_width)
                    : (0.));
  });
}
Unit var_modified_x_3162(const auto &x_4191) {
  return RecordOverhead([&](const auto &x_4192) {
    auto x_4193 = x_4191;
    if (x_4193->meta->bb_0_has_bb_time_table) {
      if (!(x_4193->meta->bb_0_has_bb_dirtied && x_4193->meta->bb_0_bb_dirtied)) {
        x_4193->meta->bb_0_has_bb_dirtied = true;
        x_4193->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4193->meta->bb_0_bb_time_table, x_4193, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3159(const auto &x_4196) {
  return RecordEval([&](const auto &x_4197) {
    if (eq(x_4196->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return 0.;
    } else {
      return x_4196->var_intrinsic_width_internal;
    }
  });
}
Unit var_modified_x_3157(const auto &x_4202) {
  return RecordOverhead([&](const auto &x_4203) {
    auto x_4204 = x_4202;
    if (x_4204->meta->bb_0_has_bb_time_table) {
      if (!(x_4204->meta->bb_0_has_bb_dirtied && x_4204->meta->bb_0_bb_dirtied)) {
        x_4204->meta->bb_0_has_bb_dirtied = true;
        x_4204->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4204->meta->bb_0_bb_time_table, x_4204, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_4207 = x_4202;
    if (x_4207->meta->bb_3_has_bb_time_table) {
      if (!(x_4207->meta->bb_3_has_bb_dirtied && x_4207->meta->bb_3_bb_dirtied)) {
        x_4207->meta->bb_3_has_bb_dirtied = true;
        x_4207->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4207->meta->bb_3_bb_time_table, x_4207, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3154(const auto &x_4210) {
  return RecordEval([&](const auto &x_4211) {
    if (eq(x_4210->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return 0.;
    } else {
      if (x_4210->var_inside_svg) {
        return 0.;
      } else {
        if (x_4210->var_disabled) {
          return 0.;
        } else {
          if (neq(x_4210->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
              ((!(x_4210->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
               (neq(x_4210->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
                (neq(x_4210->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
                 (!(x_4210->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
            if (x_4210->var_width_expr.c == DEStringCase::DHasSuffix_px) {
              return x_4210->var_width_expr.r.a0;
            } else {
              return x_4210->var_width_expr.r.a0;
            }
          } else {
            return plus(
                x_4210->var_children_intrinsic_width,
                (eq(x_4210->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                    ? (100.)
                    : ((x_4210->var_is_default_case)
                           ? (0.)
                           : ((eq(x_4210->name, DEStringLit(DEStringCase::DSTRING_BR)) ||
                               eq(x_4210->name, DEStringLit(DEStringCase::DSTRING_HR)))
                                  ? (0.)
                                  : ((eq(x_4210->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                         ? (100.)
                                         : ((eq(x_4210->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                                ? ((x_4210->var_has_width_attr &&
                                                    (x_4210->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                       ? (x_4210->var_width_attr_expr.r.a0)
                                                       : (((!x_4210->var_has_width_attr) && x_4210->has_attr_viewBox)
                                                              ? (x_4210->attr_viewBox.r.a2)
                                                              : (mult((x_4210->attr_viewBox.r.a2),
                                                                      divide(x_4210->var_width_attr_expr.r.a0, 100.)))))
                                                : ((eq(x_4210->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                       ? ((x_4210->var_has_width_attr)
                                                              ? (x_4210->var_width_attr_expr.r.a0)
                                                              : ((x_4210->has_attr_image_width &&
                                                                  (!x_4210->var_has_height_attr))
                                                                     ? (int_to_float(x_4210->attr_image_width))
                                                                     : ((neq(x_4210->attr_image_height,
                                                                             static_cast<int64_t>(0)))
                                                                            ? (mult(
                                                                                  (x_4210->var_height_attr_expr.r.a0),
                                                                                  divide(
                                                                                      int_to_float(
                                                                                          x_4210->attr_image_width),
                                                                                      int_to_float(
                                                                                          x_4210->attr_image_height))))
                                                                            : (0.))))
                                                       : ((eq(x_4210->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                              ? (300.)
                                                              : ((eq(x_4210->name,
                                                                     DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                     ? (100.)
                                                                     : (300.)))))))));
          }
        }
      }
    }
  });
}
Unit var_modified_x_3152(const auto &x_4294) {
  return RecordOverhead([&](const auto &x_4295) {
    auto x_4296 = x_4294;
    if (x_4296->meta->bb_0_has_bb_time_table) {
      if (!(x_4296->meta->bb_0_has_bb_dirtied && x_4296->meta->bb_0_bb_dirtied)) {
        x_4296->meta->bb_0_has_bb_dirtied = true;
        x_4296->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4296->meta->bb_0_bb_time_table, x_4296, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3149(const auto &x_4299) {
  return RecordEval([&](const auto &x_4300) {
    if (x_4299->last != nullptr) {
      return (x_4299->last)->var_intrinsic_width_max;
    } else {
      return 0.;
    }
  });
}
Unit var_modified_x_3147(const auto &x_4303) {
  return RecordOverhead([&](const auto &x_4304) {
    auto x_4305 = x_4303;
    if (x_4305->meta->bb_3_has_bb_time_table) {
      if (!(x_4305->meta->bb_3_has_bb_dirtied && x_4305->meta->bb_3_bb_dirtied)) {
        x_4305->meta->bb_3_has_bb_dirtied = true;
        x_4305->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4305->meta->bb_3_bb_time_table, x_4305, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3144(const auto &x_4308) {
  return RecordEval([&](const auto &x_4309) {
    if (eq(x_4308->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
        (x_4308->var_inside_svg || x_4308->var_disabled)) {
      return true;
    } else {
      if ((x_4308->parent != nullptr) && (x_4308->parent)->var_is_flex_row) {
        return false;
      } else {
        if (eq(x_4308->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
            ((x_4308->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
             ((x_4308->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
              ((x_4308->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
               eq(x_4308->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
          return true;
        } else {
          return false;
        }
      }
    }
  });
}
Unit var_modified_x_3142(const auto &x_4334) {
  return RecordOverhead([&](const auto &x_4335) {
    auto x_4336 = x_4334;
    if (x_4336->meta->bb_0_has_bb_time_table) {
      if (!(x_4336->meta->bb_0_has_bb_dirtied && x_4336->meta->bb_0_bb_dirtied)) {
        x_4336->meta->bb_0_has_bb_dirtied = true;
        x_4336->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4336->meta->bb_0_bb_time_table, x_4336, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3139(const auto &x_4339) {
  return RecordEval([&](const auto &x_4340) {
    if (eq(x_4339->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
      return true;
    } else {
      if (x_4339->var_inside_svg) {
        return true;
      } else {
        if (x_4339->var_disabled) {
          return true;
        } else {if ( eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_I)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_NG_PLURALIZE)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_NG_VIEW)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_APP_ROOT)) || (eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_html)) || eq(x_4339->name,DEStringLit(DEStringCase::DSTRING_STRONG))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
            return true;
          } else {
            return false;
          }
        }
      }
    }
  });
}
Unit var_modified_x_3137(const auto &x_4347) {
  return RecordOverhead([&](const auto &x_4348) {
    auto x_4349 = x_4347;
    if (x_4349->meta->bb_0_has_bb_time_table) {
      if (!(x_4349->meta->bb_0_has_bb_dirtied && x_4349->meta->bb_0_bb_dirtied)) {
        x_4349->meta->bb_0_has_bb_dirtied = true;
        x_4349->meta->bb_0_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4349->meta->bb_0_bb_time_table, x_4349, static_cast<int64_t>(1));
        MakeUnit();
      }
    }
    auto x_4352 = x_4347;
    if (x_4352->meta->bb_3_has_bb_time_table) {
      if (!(x_4352->meta->bb_3_has_bb_dirtied && x_4352->meta->bb_3_bb_dirtied)) {
        x_4352->meta->bb_3_has_bb_dirtied = true;
        x_4352->meta->bb_3_bb_dirtied = true;
        MetaWriteMetric();
        QueueForcePush(x_4352->meta->bb_3_bb_time_table, x_4352, static_cast<int64_t>(2));
        MakeUnit();
      }
    }
    return MakeUnit();
  });
}
auto eval_expr_x_3134(const auto &x_4355) {
  return RecordEval([&](const auto &x_4356) {
    if (x_4355->has_prop_width) {
      return x_4355->prop_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  });
}
Unit eval_stmts_x_3033(const auto &x_3132) { return MakeUnit(); }
Unit eval_stmts_x_3032(const auto &x_3133) {
  WriteMetric();
  auto x_3135 = eval_expr_x_3134(x_3133);
  if (x_3133->has_var_width_expr) {
    if (!EqualValue(x_3133->var_width_expr, x_3135)) {
      var_modified_x_3137(x_3133);
    }
  }
  x_3133->has_var_width_expr = true;
  x_3133->var_width_expr = AsDEString(x_3135);
  WriteMetric();
  auto x_3140 = eval_expr_x_3139(x_3133);
  if (x_3133->has_var_is_default_case) {
    if (!EqualValue(x_3133->var_is_default_case, x_3140)) {
      var_modified_x_3142(x_3133);
    }
  }
  x_3133->has_var_is_default_case = true;
  x_3133->var_is_default_case = Asbool(x_3140);
  WriteMetric();
  auto x_3145 = eval_expr_x_3144(x_3133);
  if (x_3133->has_var_intrinsic_width_is_width) {
    if (!EqualValue(x_3133->var_intrinsic_width_is_width, x_3145)) {
      var_modified_x_3147(x_3133);
    }
  }
  x_3133->has_var_intrinsic_width_is_width = true;
  x_3133->var_intrinsic_width_is_width = Asbool(x_3145);
  WriteMetric();
  auto x_3150 = eval_expr_x_3149(x_3133);
  if (x_3133->has_var_children_intrinsic_width) {
    if (!EqualValue(x_3133->var_children_intrinsic_width, x_3150)) {
      var_modified_x_3152(x_3133);
    }
  }
  x_3133->has_var_children_intrinsic_width = true;
  x_3133->var_children_intrinsic_width = Asdouble(x_3150);
  WriteMetric();
  auto x_3155 = eval_expr_x_3154(x_3133);
  if (x_3133->has_var_intrinsic_width_internal) {
    if (!EqualValue(x_3133->var_intrinsic_width_internal, x_3155)) {
      var_modified_x_3157(x_3133);
    }
  }
  x_3133->has_var_intrinsic_width_internal = true;
  x_3133->var_intrinsic_width_internal = Asdouble(x_3155);
  WriteMetric();
  auto x_3160 = eval_expr_x_3159(x_3133);
  if (x_3133->has_var_intrinsic_width_external) {
    if (!EqualValue(x_3133->var_intrinsic_width_external, x_3160)) {
      var_modified_x_3162(x_3133);
    }
  }
  x_3133->has_var_intrinsic_width_external = true;
  x_3133->var_intrinsic_width_external = Asdouble(x_3160);
  WriteMetric();
  auto x_3165 = eval_expr_x_3164(x_3133);
  if (x_3133->has_var_intrinsic_current_line_width) {
    if (!EqualValue(x_3133->var_intrinsic_current_line_width, x_3165)) {
      var_modified_x_3167(x_3133);
    }
  }
  x_3133->has_var_intrinsic_current_line_width = true;
  x_3133->var_intrinsic_current_line_width = Asdouble(x_3165);
  WriteMetric();
  auto x_3170 = eval_expr_x_3169(x_3133);
  if (x_3133->has_var_intrinsic_width_max) {
    if (!EqualValue(x_3133->var_intrinsic_width_max, x_3170)) {
      var_modified_x_3172(x_3133);
    }
  }
  x_3133->has_var_intrinsic_width_max = true;
  x_3133->var_intrinsic_width_max = Asdouble(x_3170);
  WriteMetric();
  auto x_3175 = eval_expr_x_3174(x_3133);
  if (x_3133->has_var_intrinsic_width_sum) {
    if (!EqualValue(x_3133->var_intrinsic_width_sum, x_3175)) {
      var_modified_x_3177(x_3133);
    }
  }
  x_3133->has_var_intrinsic_width_sum = true;
  x_3133->var_intrinsic_width_sum = Asdouble(x_3175);
  WriteMetric();
  auto x_3180 = eval_expr_x_3179(x_3133);
  if (x_3133->has_var_children_intrinsic_height) {
    if (!EqualValue(x_3133->var_children_intrinsic_height, x_3180)) {
      var_modified_x_3182(x_3133);
    }
  }
  x_3133->has_var_children_intrinsic_height = true;
  x_3133->var_children_intrinsic_height = Asdouble(x_3180);
  WriteMetric();
  auto x_3185 = eval_expr_x_3184(x_3133);
  if (x_3133->has_var_height_expr) {
    if (!EqualValue(x_3133->var_height_expr, x_3185)) {
      var_modified_x_3187(x_3133);
    }
  }
  x_3133->has_var_height_expr = true;
  x_3133->var_height_expr = AsDEString(x_3185);
  WriteMetric();
  auto x_3190 = eval_expr_x_3189(x_3133);
  if (x_3133->has_var_intrinsic_height_is_height) {
    if (!EqualValue(x_3133->var_intrinsic_height_is_height, x_3190)) {
      var_modified_x_3192(x_3133);
    }
  }
  x_3133->has_var_intrinsic_height_is_height = true;
  x_3133->var_intrinsic_height_is_height = Asbool(x_3190);
  WriteMetric();
  auto x_3195 = eval_expr_x_3194(x_3133);
  if (x_3133->has_var_intrinsic_height_internal) {
    if (!EqualValue(x_3133->var_intrinsic_height_internal, x_3195)) {
      var_modified_x_3197(x_3133);
    }
  }
  x_3133->has_var_intrinsic_height_internal = true;
  x_3133->var_intrinsic_height_internal = Asdouble(x_3195);
  WriteMetric();
  auto x_3200 = eval_expr_x_3199(x_3133);
  if (x_3133->has_var_intrinsic_height_external) {
    if (!EqualValue(x_3133->var_intrinsic_height_external, x_3200)) {
      var_modified_x_3202(x_3133);
    }
  }
  x_3133->has_var_intrinsic_height_external = true;
  x_3133->var_intrinsic_height_external = Asdouble(x_3200);
  WriteMetric();
  auto x_3205 = eval_expr_x_3204(x_3133);
  if (x_3133->has_var_intrinsic_height_sum) {
    if (!EqualValue(x_3133->var_intrinsic_height_sum, x_3205)) {
      var_modified_x_3207(x_3133);
    }
  }
  x_3133->has_var_intrinsic_height_sum = true;
  x_3133->var_intrinsic_height_sum = Asdouble(x_3205);
  WriteMetric();
  auto x_3210 = eval_expr_x_3209(x_3133);
  if (x_3133->has_var_intrinsic_current_line_height) {
    if (!EqualValue(x_3133->var_intrinsic_current_line_height, x_3210)) {
      var_modified_x_3212(x_3133);
    }
  }
  x_3133->has_var_intrinsic_current_line_height = true;
  x_3133->var_intrinsic_current_line_height = Asdouble(x_3210);
  WriteMetric();
  auto x_3215 = eval_expr_x_3214(x_3133);
  if (x_3133->has_var_finished_intrinsic_height_sum) {
    if (!EqualValue(x_3133->var_finished_intrinsic_height_sum, x_3215)) {
      var_modified_x_3217(x_3133);
    }
  }
  x_3133->has_var_finished_intrinsic_height_sum = true;
  x_3133->var_finished_intrinsic_height_sum = Asdouble(x_3215);
  return MakeUnit();
}
Unit eval_stmts_x_3031(const auto &x_3219) {
  WriteMetric();
  auto x_3221 = eval_expr_x_3220(x_3219);
  if (x_3219->has_var_display) {
    if (!EqualValue(x_3219->var_display, x_3221)) {
      var_modified_x_3223(x_3219);
    }
  }
  x_3219->has_var_display = true;
  x_3219->var_display = AsDEString(x_3221);
  WriteMetric();
  auto x_3226 = eval_expr_x_3225(x_3219);
  if (x_3219->has_var_position) {
    if (!EqualValue(x_3219->var_position, x_3226)) {
      var_modified_x_3228(x_3219);
    }
  }
  x_3219->has_var_position = true;
  x_3219->var_position = AsDEString(x_3226);
  WriteMetric();
  auto x_3231 = eval_expr_x_3230(x_3219);
  if (x_3219->has_var_flex_grow) {
    if (!EqualValue(x_3219->var_flex_grow, x_3231)) {
      var_modified_x_3233(x_3219);
    }
  }
  x_3219->has_var_flex_grow = true;
  x_3219->var_flex_grow = Asdouble(x_3231);
  WriteMetric();
  auto x_3236 = eval_expr_x_3235(x_3219);
  if (x_3219->has_var_flex_shrink) {
    if (!EqualValue(x_3219->var_flex_shrink, x_3236)) {
      var_modified_x_3238(x_3219);
    }
  }
  x_3219->has_var_flex_shrink = true;
  x_3219->var_flex_shrink = Asdouble(x_3236);
  WriteMetric();
  auto x_3241 = eval_expr_x_3240(x_3219);
  if (x_3219->has_var_flex_grow_sum) {
    if (!EqualValue(x_3219->var_flex_grow_sum, x_3241)) {
      var_modified_x_3243(x_3219);
    }
  }
  x_3219->has_var_flex_grow_sum = true;
  x_3219->var_flex_grow_sum = Asdouble(x_3241);
  WriteMetric();
  auto x_3246 = eval_expr_x_3245(x_3219);
  if (x_3219->has_var_flex_shrink_sum) {
    if (!EqualValue(x_3219->var_flex_shrink_sum, x_3246)) {
      var_modified_x_3248(x_3219);
    }
  }
  x_3219->has_var_flex_shrink_sum = true;
  x_3219->var_flex_shrink_sum = Asdouble(x_3246);
  WriteMetric();
  auto x_3251 = eval_expr_x_3250(x_3219);
  if (x_3219->has_var_flex_direction) {
    if (!EqualValue(x_3219->var_flex_direction, x_3251)) {
      var_modified_x_3253(x_3219);
    }
  }
  x_3219->has_var_flex_direction = true;
  x_3219->var_flex_direction = AsDEString(x_3251);
  WriteMetric();
  auto x_3256 = eval_expr_x_3255(x_3219);
  if (x_3219->has_var_is_flex_row) {
    if (!EqualValue(x_3219->var_is_flex_row, x_3256)) {
      var_modified_x_3258(x_3219);
    }
  }
  x_3219->has_var_is_flex_row = true;
  x_3219->var_is_flex_row = Asbool(x_3256);
  WriteMetric();
  auto x_3261 = eval_expr_x_3260(x_3219);
  if (x_3219->has_var_is_flex_column) {
    if (!EqualValue(x_3219->var_is_flex_column, x_3261)) {
      var_modified_x_3263(x_3219);
    }
  }
  x_3219->has_var_is_flex_column = true;
  x_3219->var_is_flex_column = Asbool(x_3261);
  WriteMetric();
  auto x_3266 = eval_expr_x_3265(x_3219);
  if (x_3219->has_var_width_attr_expr) {
    if (!EqualValue(x_3219->var_width_attr_expr, x_3266)) {
      var_modified_x_3268(x_3219);
    }
  }
  x_3219->has_var_width_attr_expr = true;
  x_3219->var_width_attr_expr = AsDEString(x_3266);
  WriteMetric();
  auto x_3271 = eval_expr_x_3270(x_3219);
  if (x_3219->has_var_has_width_attr) {
    if (!EqualValue(x_3219->var_has_width_attr, x_3271)) {
      var_modified_x_3273(x_3219);
    }
  }
  x_3219->has_var_has_width_attr = true;
  x_3219->var_has_width_attr = Asbool(x_3271);
  WriteMetric();
  auto x_3276 = eval_expr_x_3275(x_3219);
  if (x_3219->has_var_height_attr_expr) {
    if (!EqualValue(x_3219->var_height_attr_expr, x_3276)) {
      var_modified_x_3278(x_3219);
    }
  }
  x_3219->has_var_height_attr_expr = true;
  x_3219->var_height_attr_expr = AsDEString(x_3276);
  WriteMetric();
  auto x_3281 = eval_expr_x_3280(x_3219);
  if (x_3219->has_var_has_height_attr) {
    if (!EqualValue(x_3219->var_has_height_attr, x_3281)) {
      var_modified_x_3283(x_3219);
    }
  }
  x_3219->has_var_has_height_attr = true;
  x_3219->var_has_height_attr = Asbool(x_3281);
  WriteMetric();
  auto x_3286 = eval_expr_x_3285(x_3219);
  if (x_3219->has_var_is_svg_block) {
    if (!EqualValue(x_3219->var_is_svg_block, x_3286)) {
      var_modified_x_3288(x_3219);
    }
  }
  x_3219->has_var_is_svg_block = true;
  x_3219->var_is_svg_block = Asbool(x_3286);
  WriteMetric();
  auto x_3291 = eval_expr_x_3290(x_3219);
  if (x_3219->has_var_inside_svg) {
    if (!EqualValue(x_3219->var_inside_svg, x_3291)) {
      var_modified_x_3293(x_3219);
    }
  }
  x_3219->has_var_inside_svg = true;
  x_3219->var_inside_svg = Asbool(x_3291);
  WriteMetric();
  auto x_3296 = eval_expr_x_3295(x_3219);
  if (x_3219->has_var_disabled) {
    if (!EqualValue(x_3219->var_disabled, x_3296)) {
      var_modified_x_3298(x_3219);
    }
  }
  x_3219->has_var_disabled = true;
  x_3219->var_disabled = Asbool(x_3296);
  WriteMetric();
  auto x_3301 = eval_expr_x_3300(x_3219);
  if (x_3219->has_var_visible) {
    if (!EqualValue(x_3219->var_visible, x_3301)) {
      var_modified_x_3303(x_3219);
    }
  }
  x_3219->has_var_visible = true;
  x_3219->var_visible = Asbool(x_3301);
  WriteMetric();
  auto x_3306 = eval_expr_x_3305(x_3219);
  if (x_3219->has_var_line_break) {
    if (!EqualValue(x_3219->var_line_break, x_3306)) {
      var_modified_x_3308(x_3219);
    }
  }
  x_3219->has_var_line_break = true;
  x_3219->var_line_break = Asbool(x_3306);
  return MakeUnit();
}
Unit eval_stmts_x_3030(const auto &x_3310) {
  WriteMetric();
  auto x_3312 = eval_expr_x_3311(x_3310);
  if (x_3310->has_var_box_width) {
    if (!EqualValue(x_3310->var_box_width, x_3312)) {
      var_modified_x_3314(x_3310);
    }
  }
  x_3310->has_var_box_width = true;
  x_3310->var_box_width = Asdouble(x_3312);
  WriteMetric();
  auto x_3317 = eval_expr_x_3316(x_3310);
  if (x_3310->has_var_box_height) {
    if (!EqualValue(x_3310->var_box_height, x_3317)) {
      var_modified_x_3319(x_3310);
    }
  }
  x_3310->has_var_box_height = true;
  x_3310->var_box_height = Asdouble(x_3317);
  WriteMetric();
  auto x_3322 = eval_expr_x_3321(x_3310);
  if (x_3310->has_var_left_over) {
    if (!EqualValue(x_3310->var_left_over, x_3322)) {
      var_modified_x_3324(x_3310);
    }
  }
  x_3310->has_var_left_over = true;
  x_3310->var_left_over = Asdouble(x_3322);
  WriteMetric();
  auto x_3327 = eval_expr_x_3326(x_3310);
  if (x_3310->has_var_flex_amount) {
    if (!EqualValue(x_3310->var_flex_amount, x_3327)) {
      var_modified_x_3329(x_3310);
    }
  }
  x_3310->has_var_flex_amount = true;
  x_3310->var_flex_amount = Asdouble(x_3327);
  WriteMetric();
  auto x_3332 = eval_expr_x_3331(x_3310);
  if (x_3310->has_var_flex_unit) {
    if (!EqualValue(x_3310->var_flex_unit, x_3332)) {
      var_modified_x_3334(x_3310);
    }
  }
  x_3310->has_var_flex_unit = true;
  x_3310->var_flex_unit = Asdouble(x_3332);
  WriteMetric();
  auto x_3337 = eval_expr_x_3336(x_3310);
  if (x_3310->has_var_x) {
    if (!EqualValue(x_3310->var_x, x_3337)) {
      var_modified_x_3339(x_3310);
    }
  }
  x_3310->has_var_x = true;
  x_3310->var_x = Asdouble(x_3337);
  WriteMetric();
  auto x_3342 = eval_expr_x_3341(x_3310);
  if (x_3310->has_var_width_internal) {
    if (!EqualValue(x_3310->var_width_internal, x_3342)) {
      var_modified_x_3344(x_3310);
    }
  }
  x_3310->has_var_width_internal = true;
  x_3310->var_width_internal = Asdouble(x_3342);
  WriteMetric();
  auto x_3347 = eval_expr_x_3346(x_3310);
  if (x_3310->has_var_width_external) {
    if (!EqualValue(x_3310->var_width_external, x_3347)) {
      var_modified_x_3349(x_3310);
    }
  }
  x_3310->has_var_width_external = true;
  x_3310->var_width_external = Asdouble(x_3347);
  WriteMetric();
  auto x_3352 = eval_expr_x_3351(x_3310);
  if (x_3310->has_var_y) {
    if (!EqualValue(x_3310->var_y, x_3352)) {
      var_modified_x_3354(x_3310);
    }
  }
  x_3310->has_var_y = true;
  x_3310->var_y = Asdouble(x_3352);
  WriteMetric();
  auto x_3357 = eval_expr_x_3356(x_3310);
  if (x_3310->has_var_height_internal) {
    if (!EqualValue(x_3310->var_height_internal, x_3357)) {
      var_modified_x_3359(x_3310);
    }
  }
  x_3310->has_var_height_internal = true;
  x_3310->var_height_internal = Asdouble(x_3357);
  WriteMetric();
  auto x_3362 = eval_expr_x_3361(x_3310);
  if (x_3310->has_var_height_external) {
    if (!EqualValue(x_3310->var_height_external, x_3362)) {
      var_modified_x_3364(x_3310);
    }
  }
  x_3310->has_var_height_external = true;
  x_3310->var_height_external = Asdouble(x_3362);
  WriteMetric();
  auto x_3367 = eval_expr_x_3366(x_3310);
  if (x_3310->has_var_line_height) {
    if (!EqualValue(x_3310->var_line_height, x_3367)) {
      var_modified_x_3369(x_3310);
    }
  }
  x_3310->has_var_line_height = true;
  x_3310->var_line_height = Asdouble(x_3367);
  return MakeUnit();
}
Unit x_2756(const auto &x_2757, const auto &x_2758, const auto &x_2759) {
  auto x_2760 = ListHeadExn(x_2757);
  auto x_2761 = ListTailExn(x_2757);
  if (ListIsEmpty(x_2761)) {
    auto x_2762 = ListSplitN(x_2758->children, x_2760);
    OutputChangeMetric(IntAdd(layout_size_x_2716(ListNthExn(x_2758->children, x_2760)), layout_size_x_2716(x_2759)));
    x_2758->children = ListAppend(Zro(x_2762), Cons(x_2759, ListTailExn(Fst(x_2762))));
    return MakeUnit();
  } else {
    return x_2756(x_2761, ListNthExn(x_2758->children, x_2760), x_2759);
  }
}
Unit replace_layout_node_x_2755(const auto &x_2757, const auto &x_2758, const auto &x_2759) {
  return x_2756(x_2757, x_2758, x_2759);
}
Unit x_2763(const auto &x_2764, const auto &x_2765, const auto &x_2766) {
  auto x_2767 = ListHeadExn(x_2764);
  auto x_2768 = ListTailExn(x_2764);
  if (ListIsEmpty(x_2768)) {
    OutputChangeMetric(layout_size_x_2716(x_2766));
    auto x_2769 = ListSplitN(x_2765->children, x_2767);
    x_2765->children = ListAppend(Zro(x_2769), Cons(x_2766, Fst(x_2769)));
    return MakeUnit();
  } else {
    return x_2763(x_2768, ListNthExn(x_2765->children, x_2767), x_2766);
  }
}
Unit add_layout_node_x_2753(const auto &x_2764, const auto &x_2765, const auto &x_2766) {
  return x_2763(x_2764, x_2765, x_2766);
}
Unit x_2770(const auto &x_2771, const auto &x_2772, const auto &x_2773) {
  auto x_2774 = ListHeadExn(x_2771);
  auto x_2775 = ListTailExn(x_2771);
  if (ListIsEmpty(x_2775)) {
    OutputChangeMetric(layout_size_x_2716(ListNthExn(x_2772->children, x_2774)));
    auto x_2776 = ListSplitN(x_2772->children, x_2774);
    x_2772->children = ListAppend(Zro(x_2776), ListTailExn(Fst(x_2776)));
    return MakeUnit();
  } else {
    return x_2770(x_2775, ListNthExn(x_2772->children, x_2774), x_2773);
  }
}
Unit remove_layout_node_x_2751(const auto &x_2771, const auto &x_2772, const auto &x_2773) {
  return x_2770(x_2771, x_2772, x_2773);
}
Unit x_2777(const auto &x_2778, const auto &x_2779, const auto &x_2780) {
  return ListMatch(
      x_2778,
      [&](const auto &x_2783) {
        auto x_2784 = Zro(x_2780);
        auto x_2785 = Zro(x_2784);
        auto x_2786 = Fst(x_2784);
        auto x_2787 = Fst(x_2780);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4449 = x_2785;
        if (x_4449 == "attributes") {
          std::string x_4450 = x_2786;
          if (x_4450 == "width") {
            WriteMetric();
            x_2779->has_attr_width = true;
            x_2779->attr_width = AsDEString(x_2787);
            if (x_2779->meta->bb_1_has_bb_time_table) {
              if (!(x_2779->meta->bb_1_has_bb_dirtied && x_2779->meta->bb_1_bb_dirtied)) {
                x_2779->meta->bb_1_has_bb_dirtied = true;
                x_2779->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_1_bb_time_table, x_2779, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4450 == "image_height") {
            WriteMetric();
            x_2779->has_attr_image_height = true;
            x_2779->attr_image_height = Asint64_t(x_2787);
            if (x_2779->meta->bb_0_has_bb_time_table) {
              if (!(x_2779->meta->bb_0_has_bb_dirtied && x_2779->meta->bb_0_bb_dirtied)) {
                x_2779->meta->bb_0_has_bb_dirtied = true;
                x_2779->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_0_bb_time_table, x_2779, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4450 == "image_width") {
            WriteMetric();
            x_2779->has_attr_image_width = true;
            x_2779->attr_image_width = Asint64_t(x_2787);
            if (x_2779->meta->bb_0_has_bb_time_table) {
              if (!(x_2779->meta->bb_0_has_bb_dirtied && x_2779->meta->bb_0_bb_dirtied)) {
                x_2779->meta->bb_0_has_bb_dirtied = true;
                x_2779->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_0_bb_time_table, x_2779, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4450 == "height") {
            WriteMetric();
            x_2779->has_attr_height = true;
            x_2779->attr_height = AsDEString(x_2787);
            if (x_2779->meta->bb_1_has_bb_time_table) {
              if (!(x_2779->meta->bb_1_has_bb_dirtied && x_2779->meta->bb_1_bb_dirtied)) {
                x_2779->meta->bb_1_has_bb_dirtied = true;
                x_2779->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_1_bb_time_table, x_2779, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4450 == "viewBox") {
            WriteMetric();
            x_2779->has_attr_viewBox = true;
            x_2779->attr_viewBox = AsDEString(x_2787);
            if (x_2779->meta->bb_0_has_bb_time_table) {
              if (!(x_2779->meta->bb_0_has_bb_dirtied && x_2779->meta->bb_0_bb_dirtied)) {
                x_2779->meta->bb_0_has_bb_dirtied = true;
                x_2779->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_0_bb_time_table, x_2779, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4449 == "properties") {
          std::string x_4451 = x_2786;
          if (x_4451 == "width") {
            WriteMetric();
            x_2779->has_prop_width = true;
            x_2779->prop_width = AsDEString(x_2787);
            if (x_2779->meta->bb_0_has_bb_time_table) {
              if (!(x_2779->meta->bb_0_has_bb_dirtied && x_2779->meta->bb_0_bb_dirtied)) {
                x_2779->meta->bb_0_has_bb_dirtied = true;
                x_2779->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_0_bb_time_table, x_2779, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "flex-grow") {
            WriteMetric();
            x_2779->has_prop_flex_grow = true;
            x_2779->prop_flex_grow = AsDEString(x_2787);
            if (x_2779->meta->bb_1_has_bb_time_table) {
              if (!(x_2779->meta->bb_1_has_bb_dirtied && x_2779->meta->bb_1_bb_dirtied)) {
                x_2779->meta->bb_1_has_bb_dirtied = true;
                x_2779->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_1_bb_time_table, x_2779, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "height") {
            WriteMetric();
            x_2779->has_prop_height = true;
            x_2779->prop_height = AsDEString(x_2787);
            if (x_2779->meta->bb_0_has_bb_time_table) {
              if (!(x_2779->meta->bb_0_has_bb_dirtied && x_2779->meta->bb_0_bb_dirtied)) {
                x_2779->meta->bb_0_has_bb_dirtied = true;
                x_2779->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_0_bb_time_table, x_2779, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "display") {
            WriteMetric();
            x_2779->has_prop_display = true;
            x_2779->prop_display = AsDEString(x_2787);
            if (x_2779->meta->bb_1_has_bb_time_table) {
              if (!(x_2779->meta->bb_1_has_bb_dirtied && x_2779->meta->bb_1_bb_dirtied)) {
                x_2779->meta->bb_1_has_bb_dirtied = true;
                x_2779->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_1_bb_time_table, x_2779, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "position") {
            WriteMetric();
            x_2779->has_prop_position = true;
            x_2779->prop_position = AsDEString(x_2787);
            if (x_2779->meta->bb_1_has_bb_time_table) {
              if (!(x_2779->meta->bb_1_has_bb_dirtied && x_2779->meta->bb_1_bb_dirtied)) {
                x_2779->meta->bb_1_has_bb_dirtied = true;
                x_2779->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_1_bb_time_table, x_2779, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "flex-shrink") {
            WriteMetric();
            x_2779->has_prop_flex_shrink = true;
            x_2779->prop_flex_shrink = AsDEString(x_2787);
            if (x_2779->meta->bb_1_has_bb_time_table) {
              if (!(x_2779->meta->bb_1_has_bb_dirtied && x_2779->meta->bb_1_bb_dirtied)) {
                x_2779->meta->bb_1_has_bb_dirtied = true;
                x_2779->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_1_bb_time_table, x_2779, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4451 == "flex-direction") {
            WriteMetric();
            x_2779->has_prop_flex_direction = true;
            x_2779->prop_flex_direction = AsDEString(x_2787);
            if (x_2779->meta->bb_1_has_bb_time_table) {
              if (!(x_2779->meta->bb_1_has_bb_dirtied && x_2779->meta->bb_1_bb_dirtied)) {
                x_2779->meta->bb_1_has_bb_dirtied = true;
                x_2779->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2779->meta->bb_1_bb_time_table, x_2779, static_cast<int64_t>(0));
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
      [&](const auto &x_2781, const auto &x_2782) {
        return x_2777(x_2782, ListNthExn(x_2779->children, x_2781), x_2780);
      });
}
Unit insert_value_x_2749(const auto &x_2778, const auto &x_2779, const auto &x_2780) {
  return x_2777(x_2778, x_2779, x_2780);
}
Unit x_2812(const auto &x_2813, const auto &x_2814, const auto &x_2815) {
  return ListMatch(
      x_2813,
      [&](const auto &x_2818) {
        auto x_2819 = Zro(x_2815);
        auto x_2820 = Fst(x_2815);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4452 = x_2819;
        if (x_4452 == "attributes") {
          std::string x_4453 = x_2820;
          if (x_4453 == "width") {
            WriteMetric();
            x_2814->has_attr_width = false;
            if (x_2814->meta->bb_1_has_bb_time_table) {
              if (!(x_2814->meta->bb_1_has_bb_dirtied && x_2814->meta->bb_1_bb_dirtied)) {
                x_2814->meta->bb_1_has_bb_dirtied = true;
                x_2814->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_1_bb_time_table, x_2814, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4453 == "image_height") {
            WriteMetric();
            x_2814->has_attr_image_height = false;
            if (x_2814->meta->bb_0_has_bb_time_table) {
              if (!(x_2814->meta->bb_0_has_bb_dirtied && x_2814->meta->bb_0_bb_dirtied)) {
                x_2814->meta->bb_0_has_bb_dirtied = true;
                x_2814->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_0_bb_time_table, x_2814, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4453 == "image_width") {
            WriteMetric();
            x_2814->has_attr_image_width = false;
            if (x_2814->meta->bb_0_has_bb_time_table) {
              if (!(x_2814->meta->bb_0_has_bb_dirtied && x_2814->meta->bb_0_bb_dirtied)) {
                x_2814->meta->bb_0_has_bb_dirtied = true;
                x_2814->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_0_bb_time_table, x_2814, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4453 == "height") {
            WriteMetric();
            x_2814->has_attr_height = false;
            if (x_2814->meta->bb_1_has_bb_time_table) {
              if (!(x_2814->meta->bb_1_has_bb_dirtied && x_2814->meta->bb_1_bb_dirtied)) {
                x_2814->meta->bb_1_has_bb_dirtied = true;
                x_2814->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_1_bb_time_table, x_2814, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4453 == "viewBox") {
            WriteMetric();
            x_2814->has_attr_viewBox = false;
            if (x_2814->meta->bb_0_has_bb_time_table) {
              if (!(x_2814->meta->bb_0_has_bb_dirtied && x_2814->meta->bb_0_bb_dirtied)) {
                x_2814->meta->bb_0_has_bb_dirtied = true;
                x_2814->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_0_bb_time_table, x_2814, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4452 == "properties") {
          std::string x_4454 = x_2820;
          if (x_4454 == "width") {
            WriteMetric();
            x_2814->has_prop_width = false;
            if (x_2814->meta->bb_0_has_bb_time_table) {
              if (!(x_2814->meta->bb_0_has_bb_dirtied && x_2814->meta->bb_0_bb_dirtied)) {
                x_2814->meta->bb_0_has_bb_dirtied = true;
                x_2814->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_0_bb_time_table, x_2814, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "flex-grow") {
            WriteMetric();
            x_2814->has_prop_flex_grow = false;
            if (x_2814->meta->bb_1_has_bb_time_table) {
              if (!(x_2814->meta->bb_1_has_bb_dirtied && x_2814->meta->bb_1_bb_dirtied)) {
                x_2814->meta->bb_1_has_bb_dirtied = true;
                x_2814->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_1_bb_time_table, x_2814, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "height") {
            WriteMetric();
            x_2814->has_prop_height = false;
            if (x_2814->meta->bb_0_has_bb_time_table) {
              if (!(x_2814->meta->bb_0_has_bb_dirtied && x_2814->meta->bb_0_bb_dirtied)) {
                x_2814->meta->bb_0_has_bb_dirtied = true;
                x_2814->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_0_bb_time_table, x_2814, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "display") {
            WriteMetric();
            x_2814->has_prop_display = false;
            if (x_2814->meta->bb_1_has_bb_time_table) {
              if (!(x_2814->meta->bb_1_has_bb_dirtied && x_2814->meta->bb_1_bb_dirtied)) {
                x_2814->meta->bb_1_has_bb_dirtied = true;
                x_2814->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_1_bb_time_table, x_2814, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "position") {
            WriteMetric();
            x_2814->has_prop_position = false;
            if (x_2814->meta->bb_1_has_bb_time_table) {
              if (!(x_2814->meta->bb_1_has_bb_dirtied && x_2814->meta->bb_1_bb_dirtied)) {
                x_2814->meta->bb_1_has_bb_dirtied = true;
                x_2814->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_1_bb_time_table, x_2814, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "flex-shrink") {
            WriteMetric();
            x_2814->has_prop_flex_shrink = false;
            if (x_2814->meta->bb_1_has_bb_time_table) {
              if (!(x_2814->meta->bb_1_has_bb_dirtied && x_2814->meta->bb_1_bb_dirtied)) {
                x_2814->meta->bb_1_has_bb_dirtied = true;
                x_2814->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_1_bb_time_table, x_2814, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4454 == "flex-direction") {
            WriteMetric();
            x_2814->has_prop_flex_direction = false;
            if (x_2814->meta->bb_1_has_bb_time_table) {
              if (!(x_2814->meta->bb_1_has_bb_dirtied && x_2814->meta->bb_1_bb_dirtied)) {
                x_2814->meta->bb_1_has_bb_dirtied = true;
                x_2814->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2814->meta->bb_1_bb_time_table, x_2814, static_cast<int64_t>(0));
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
      [&](const auto &x_2816, const auto &x_2817) {
        return x_2812(x_2817, ListNthExn(x_2814->children, x_2816), x_2815);
      });
}
Unit delete_value_x_2747(const auto &x_2813, const auto &x_2814, const auto &x_2815) {
  return x_2812(x_2813, x_2814, x_2815);
}
Unit x_2845(const auto &x_2846, const auto &x_2847, const auto &x_2848) {
  return ListMatch(
      x_2846,
      [&](const auto &x_2851) {
        auto x_2852 = Zro(x_2848);
        auto x_2853 = Zro(x_2852);
        auto x_2854 = Fst(x_2852);
        auto x_2855 = Fst(x_2848);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_4455 = x_2853;
        if (x_4455 == "attributes") {
          std::string x_4456 = x_2854;
          if (x_4456 == "width") {
            WriteMetric();
            x_2847->has_attr_width = false;
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_attr_width = true;
            x_2847->attr_width = AsDEString(x_2855);
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4456 == "image_height") {
            WriteMetric();
            x_2847->has_attr_image_height = false;
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_attr_image_height = true;
            x_2847->attr_image_height = Asint64_t(x_2855);
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4456 == "image_width") {
            WriteMetric();
            x_2847->has_attr_image_width = false;
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_attr_image_width = true;
            x_2847->attr_image_width = Asint64_t(x_2855);
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4456 == "height") {
            WriteMetric();
            x_2847->has_attr_height = false;
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_attr_height = true;
            x_2847->attr_height = AsDEString(x_2855);
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4456 == "viewBox") {
            WriteMetric();
            x_2847->has_attr_viewBox = false;
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_attr_viewBox = true;
            x_2847->attr_viewBox = AsDEString(x_2855);
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_4455 == "properties") {
          std::string x_4457 = x_2854;
          if (x_4457 == "width") {
            WriteMetric();
            x_2847->has_prop_width = false;
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_prop_width = true;
            x_2847->prop_width = AsDEString(x_2855);
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4457 == "flex-grow") {
            WriteMetric();
            x_2847->has_prop_flex_grow = false;
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_prop_flex_grow = true;
            x_2847->prop_flex_grow = AsDEString(x_2855);
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4457 == "height") {
            WriteMetric();
            x_2847->has_prop_height = false;
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_prop_height = true;
            x_2847->prop_height = AsDEString(x_2855);
            if (x_2847->meta->bb_0_has_bb_time_table) {
              if (!(x_2847->meta->bb_0_has_bb_dirtied && x_2847->meta->bb_0_bb_dirtied)) {
                x_2847->meta->bb_0_has_bb_dirtied = true;
                x_2847->meta->bb_0_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_0_bb_time_table, x_2847, static_cast<int64_t>(1));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4457 == "display") {
            WriteMetric();
            x_2847->has_prop_display = false;
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_prop_display = true;
            x_2847->prop_display = AsDEString(x_2855);
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4457 == "position") {
            WriteMetric();
            x_2847->has_prop_position = false;
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_prop_position = true;
            x_2847->prop_position = AsDEString(x_2855);
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4457 == "flex-shrink") {
            WriteMetric();
            x_2847->has_prop_flex_shrink = false;
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_prop_flex_shrink = true;
            x_2847->prop_flex_shrink = AsDEString(x_2855);
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            return MakeUnit();
          } else if (x_4457 == "flex-direction") {
            WriteMetric();
            x_2847->has_prop_flex_direction = false;
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
                MakeUnit();
              }
            }
            WriteMetric();
            x_2847->has_prop_flex_direction = true;
            x_2847->prop_flex_direction = AsDEString(x_2855);
            if (x_2847->meta->bb_1_has_bb_time_table) {
              if (!(x_2847->meta->bb_1_has_bb_dirtied && x_2847->meta->bb_1_bb_dirtied)) {
                x_2847->meta->bb_1_has_bb_dirtied = true;
                x_2847->meta->bb_1_bb_dirtied = true;
                MetaWriteMetric();
                QueueForcePush(x_2847->meta->bb_1_bb_time_table, x_2847, static_cast<int64_t>(0));
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
      [&](const auto &x_2849, const auto &x_2850) {
        return x_2845(x_2850, ListNthExn(x_2847->children, x_2849), x_2848);
      });
}
Unit replace_value_x_2745(const auto &x_2846, const auto &x_2847, const auto &x_2848) {
  return x_2845(x_2846, x_2847, x_2848);
}
Unit x_2904(const auto &x_2905, const auto &x_2906, const auto &x_2907) {
  auto x_2908 = ListHeadExn(x_2905);
  auto x_2909 = ListTailExn(x_2905);
  if (ListIsEmpty(x_2909)) {
    InputChangeMetric(IntAdd(node_size_x_2717(ListNthExn(x_2906->children, x_2908)), node_size_x_2717(x_2907)));
    auto x_2910 = ListSplitN(x_2906->children, x_2908);
    auto x_2911 = Zro(x_2910);
    auto x_2912 = Fst(x_2910);
    auto x_2913 = ListHeadExn(x_2912);
    auto x_2914 = ListTailExn(x_2912);
    x_2906->children = ListAppend(x_2911, x_2914);
    x_2913->meta->alive = false;
    OptionMatch(
        x_2913->prev, [&](const auto &x_2916) { return MakeUnit(); },
        [&](const auto &x_2915) {
          x_2915->next = ToPath(x_2913->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2913->next, [&](const auto &x_2918) { return MakeUnit(); },
        [&](const auto &x_2917) {
          x_2917->prev = ToPath(x_2913->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2911)) {
      x_2906->first = ToPath(ListHead(x_2914));
    }
    if (ListIsEmpty(x_2914)) {
      x_2906->last = ToPath(ListLast(x_2911));
    }
    OptionMatch(
        x_2913->next, [&](const auto &x_2922) { return MakeUnit(); },
        [&](const auto &x_2919) {
          if (x_2919->meta->bb_1_has_bb_time_table) {
            if (!(x_2919->meta->bb_1_has_bb_dirtied && x_2919->meta->bb_1_bb_dirtied)) {
              x_2919->meta->bb_1_has_bb_dirtied = true;
              x_2919->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2919->meta->bb_1_bb_time_table, x_2919, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2906->children)) {
      if (x_2906->meta->bb_0_has_bb_time_table) {
        if (!(x_2906->meta->bb_0_has_bb_dirtied && x_2906->meta->bb_0_bb_dirtied)) {
          x_2906->meta->bb_0_has_bb_dirtied = true;
          x_2906->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_0_bb_time_table, x_2906, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2914)) {
      if (x_2906->meta->bb_0_has_bb_time_table) {
        if (!(x_2906->meta->bb_0_has_bb_dirtied && x_2906->meta->bb_0_bb_dirtied)) {
          x_2906->meta->bb_0_has_bb_dirtied = true;
          x_2906->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_0_bb_time_table, x_2906, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2913->next, [&](const auto &x_2930) { return MakeUnit(); },
        [&](const auto &x_2927) {
          if (x_2927->meta->bb_0_has_bb_time_table) {
            if (!(x_2927->meta->bb_0_has_bb_dirtied && x_2927->meta->bb_0_bb_dirtied)) {
              x_2927->meta->bb_0_has_bb_dirtied = true;
              x_2927->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2927->meta->bb_0_bb_time_table, x_2927, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2906->children)) {
      if (x_2906->meta->bb_3_has_bb_time_table) {
        if (!(x_2906->meta->bb_3_has_bb_dirtied && x_2906->meta->bb_3_bb_dirtied)) {
          x_2906->meta->bb_3_has_bb_dirtied = true;
          x_2906->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_3_bb_time_table, x_2906, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2914)) {
      if (x_2906->meta->bb_3_has_bb_time_table) {
        if (!(x_2906->meta->bb_3_has_bb_dirtied && x_2906->meta->bb_3_bb_dirtied)) {
          x_2906->meta->bb_3_has_bb_dirtied = true;
          x_2906->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_3_bb_time_table, x_2906, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2913->next, [&](const auto &x_2938) { return MakeUnit(); },
        [&](const auto &x_2935) {
          if (x_2935->meta->bb_3_has_bb_time_table) {
            if (!(x_2935->meta->bb_3_has_bb_dirtied && x_2935->meta->bb_3_bb_dirtied)) {
              x_2935->meta->bb_3_has_bb_dirtied = true;
              x_2935->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2935->meta->bb_3_bb_time_table, x_2935, static_cast<int64_t>(2));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_2939 = ListSplitN(x_2906->children, x_2908);
    auto x_2940 = Zro(x_2939);
    auto x_2941 = Fst(x_2939);
    x_2906->children = ListAppend(x_2940, Cons(x_2907, x_2941));
    if (ListIsEmpty(x_2940)) {
      x_2906->first = x_2907.get();
    }
    if (ListIsEmpty(x_2941)) {
      x_2906->last = x_2907.get();
    }
    OptionMatch(
        ListLast(x_2940),
        [&](const auto &x_2943) {
          x_2907->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2942) {
          x_2907->prev = x_2942.get();
          x_2942->next = x_2907.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_2941),
        [&](const auto &x_2945) {
          x_2907->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2944) {
          x_2907->next = x_2944.get();
          x_2944->prev = x_2907.get();
          return MakeUnit();
        });
    x_2907->parent = x_2906.get();
    RecordOverhead([&](const auto &x_2946) {
      auto x_2947 = (x_2907->parent);
      if (x_2947->meta->bb_0_has_bb_time_table) {
        auto x_2952 = OptionMatch(
            x_2907->prev, [&](const auto &x_2951) { return NextTotalOrder(x_2947->meta->bb_1_bb_time_table); },
            [&](const auto &x_2948) {
              if (x_2948->meta->bb_0_has_bb_time_table) {
                return NextTotalOrder(x_2948->meta->bb_0_bb_time_table);
              } else {
                return NextTotalOrder(x_2948->meta->bb_1_bb_time_table);
              }
            });
        x_2907->meta->bb_1_has_bb_dirtied = true;
        x_2907->meta->bb_1_bb_dirtied = true;
        x_2907->meta->bb_1_has_bb_time_table = true;
        x_2907->meta->bb_1_bb_time_table = x_2952;
        MetaWriteMetric();
        QueueForcePush(x_2952, x_2907, static_cast<int64_t>(3));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_2907->next, [&](const auto &x_2957) { return MakeUnit(); },
        [&](const auto &x_2954) {
          if (x_2954->meta->bb_1_has_bb_time_table) {
            if (!(x_2954->meta->bb_1_has_bb_dirtied && x_2954->meta->bb_1_bb_dirtied)) {
              x_2954->meta->bb_1_has_bb_dirtied = true;
              x_2954->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2954->meta->bb_1_bb_time_table, x_2954, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_2906->children)) {
      if (x_2906->meta->bb_0_has_bb_time_table) {
        if (!(x_2906->meta->bb_0_has_bb_dirtied && x_2906->meta->bb_0_bb_dirtied)) {
          x_2906->meta->bb_0_has_bb_dirtied = true;
          x_2906->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_0_bb_time_table, x_2906, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2941)) {
      if (x_2906->meta->bb_0_has_bb_time_table) {
        if (!(x_2906->meta->bb_0_has_bb_dirtied && x_2906->meta->bb_0_bb_dirtied)) {
          x_2906->meta->bb_0_has_bb_dirtied = true;
          x_2906->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_0_bb_time_table, x_2906, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2907->next, [&](const auto &x_2965) { return MakeUnit(); },
        [&](const auto &x_2962) {
          if (x_2962->meta->bb_0_has_bb_time_table) {
            if (!(x_2962->meta->bb_0_has_bb_dirtied && x_2962->meta->bb_0_bb_dirtied)) {
              x_2962->meta->bb_0_has_bb_dirtied = true;
              x_2962->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2962->meta->bb_0_bb_time_table, x_2962, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    RecordOverhead([&](const auto &x_2966) {
      auto x_2967 = (x_2907->parent);
      if (x_2967->meta->bb_2_has_bb_time_table) {
        auto x_2972 = OptionMatch(
            x_2907->prev, [&](const auto &x_2971) { return NextTotalOrder(x_2967->meta->bb_3_bb_time_table); },
            [&](const auto &x_2968) {
              if (x_2968->meta->bb_2_has_bb_time_table) {
                return NextTotalOrder(x_2968->meta->bb_2_bb_time_table);
              } else {
                return NextTotalOrder(x_2968->meta->bb_3_bb_time_table);
              }
            });
        x_2907->meta->bb_3_has_bb_dirtied = true;
        x_2907->meta->bb_3_bb_dirtied = true;
        x_2907->meta->bb_3_has_bb_time_table = true;
        x_2907->meta->bb_3_bb_time_table = x_2972;
        MetaWriteMetric();
        QueueForcePush(x_2972, x_2907, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    if (ListIsSingleton(x_2906->children)) {
      if (x_2906->meta->bb_3_has_bb_time_table) {
        if (!(x_2906->meta->bb_3_has_bb_dirtied && x_2906->meta->bb_3_bb_dirtied)) {
          x_2906->meta->bb_3_has_bb_dirtied = true;
          x_2906->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_3_bb_time_table, x_2906, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_2941)) {
      if (x_2906->meta->bb_3_has_bb_time_table) {
        if (!(x_2906->meta->bb_3_has_bb_dirtied && x_2906->meta->bb_3_bb_dirtied)) {
          x_2906->meta->bb_3_has_bb_dirtied = true;
          x_2906->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2906->meta->bb_3_bb_time_table, x_2906, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2907->next, [&](const auto &x_2981) { return MakeUnit(); },
        [&](const auto &x_2978) {
          if (x_2978->meta->bb_3_has_bb_time_table) {
            if (!(x_2978->meta->bb_3_has_bb_dirtied && x_2978->meta->bb_3_bb_dirtied)) {
              x_2978->meta->bb_3_has_bb_dirtied = true;
              x_2978->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_2978->meta->bb_3_bb_time_table, x_2978, static_cast<int64_t>(2));
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
    return x_2904(x_2909, ListNthExn(x_2906->children, x_2908), x_2907);
  }
}
Unit replace_node_x_2743(const auto &x_2905, const auto &x_2906, const auto &x_2907) {
  return x_2904(x_2905, x_2906, x_2907);
}
Unit x_2982(const auto &x_2983) {
  ListIter2(x_2983->children, [&](const auto &x_2984, const auto &x_2985) {
    x_2984->parent = x_2983.get();
    x_2985->parent = x_2983.get();
    x_2984->next = x_2985.get();
    x_2985->prev = x_2984.get();
    x_2982(x_2984);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2983->children),
      [&](const auto &x_2987) {
        x_2983->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2986) {
        x_2983->first = x_2986.get();
        x_2986->parent = x_2983.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2983->children),
      [&](const auto &x_2989) {
        x_2983->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2988) {
        x_2983->last = x_2988.get();
        x_2988->parent = x_2983.get();
        x_2982(x_2988);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2741(const auto &x_2983) { return x_2982(x_2983); }
Unit x_2990(const auto &x_2991, const auto &x_2992, const auto &x_2993) {
  auto x_2994 = ListHeadExn(x_2991);
  auto x_2995 = ListTailExn(x_2991);
  if (ListIsEmpty(x_2995)) {
    InputChangeMetric(node_size_x_2717(ListNthExn(x_2992->children, x_2994)));
    auto x_2996 = ListSplitN(x_2992->children, x_2994);
    auto x_2997 = Zro(x_2996);
    auto x_2998 = Fst(x_2996);
    auto x_2999 = ListHeadExn(x_2998);
    auto x_3000 = ListTailExn(x_2998);
    x_2992->children = ListAppend(x_2997, x_3000);
    x_2999->meta->alive = false;
    OptionMatch(
        x_2999->prev, [&](const auto &x_3002) { return MakeUnit(); },
        [&](const auto &x_3001) {
          x_3001->next = ToPath(x_2999->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2999->next, [&](const auto &x_3004) { return MakeUnit(); },
        [&](const auto &x_3003) {
          x_3003->prev = ToPath(x_2999->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2997)) {
      x_2992->first = ToPath(ListHead(x_3000));
    }
    if (ListIsEmpty(x_3000)) {
      x_2992->last = ToPath(ListLast(x_2997));
    }
    OptionMatch(
        x_2999->next, [&](const auto &x_3008) { return MakeUnit(); },
        [&](const auto &x_3005) {
          if (x_3005->meta->bb_1_has_bb_time_table) {
            if (!(x_3005->meta->bb_1_has_bb_dirtied && x_3005->meta->bb_1_bb_dirtied)) {
              x_3005->meta->bb_1_has_bb_dirtied = true;
              x_3005->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3005->meta->bb_1_bb_time_table, x_3005, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2992->children)) {
      if (x_2992->meta->bb_0_has_bb_time_table) {
        if (!(x_2992->meta->bb_0_has_bb_dirtied && x_2992->meta->bb_0_bb_dirtied)) {
          x_2992->meta->bb_0_has_bb_dirtied = true;
          x_2992->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2992->meta->bb_0_bb_time_table, x_2992, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_3000)) {
      if (x_2992->meta->bb_0_has_bb_time_table) {
        if (!(x_2992->meta->bb_0_has_bb_dirtied && x_2992->meta->bb_0_bb_dirtied)) {
          x_2992->meta->bb_0_has_bb_dirtied = true;
          x_2992->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2992->meta->bb_0_bb_time_table, x_2992, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2999->next, [&](const auto &x_3016) { return MakeUnit(); },
        [&](const auto &x_3013) {
          if (x_3013->meta->bb_0_has_bb_time_table) {
            if (!(x_3013->meta->bb_0_has_bb_dirtied && x_3013->meta->bb_0_bb_dirtied)) {
              x_3013->meta->bb_0_has_bb_dirtied = true;
              x_3013->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3013->meta->bb_0_bb_time_table, x_3013, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_2992->children)) {
      if (x_2992->meta->bb_3_has_bb_time_table) {
        if (!(x_2992->meta->bb_3_has_bb_dirtied && x_2992->meta->bb_3_bb_dirtied)) {
          x_2992->meta->bb_3_has_bb_dirtied = true;
          x_2992->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2992->meta->bb_3_bb_time_table, x_2992, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_3000)) {
      if (x_2992->meta->bb_3_has_bb_time_table) {
        if (!(x_2992->meta->bb_3_has_bb_dirtied && x_2992->meta->bb_3_bb_dirtied)) {
          x_2992->meta->bb_3_has_bb_dirtied = true;
          x_2992->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_2992->meta->bb_3_bb_time_table, x_2992, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_2999->next, [&](const auto &x_3024) { return MakeUnit(); },
        [&](const auto &x_3021) {
          if (x_3021->meta->bb_3_has_bb_time_table) {
            if (!(x_3021->meta->bb_3_has_bb_dirtied && x_3021->meta->bb_3_bb_dirtied)) {
              x_3021->meta->bb_3_has_bb_dirtied = true;
              x_3021->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3021->meta->bb_3_bb_time_table, x_3021, static_cast<int64_t>(2));
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
    return x_2990(x_2995, ListNthExn(x_2992->children, x_2994), x_2993);
  }
}
Unit remove_node_x_2739(const auto &x_2991, const auto &x_2992, const auto &x_2993) {
  return x_2990(x_2991, x_2992, x_2993);
}
Unit recalculate_x_2737(const auto &x_3025) {
  return RecordOverhead([&](const auto &x_3026) {
    while (!QueueIsEmpty()) {
      auto x_3027 = QueuePop();
      auto x_3028 = Zro(x_3027);
      auto x_3029 = Fst(x_3027);
      MetaReadMetric();
      MetricQueueSize(QueueSize());
      if (x_3029.n->meta->alive) {
        [&]() {
          auto x_4458 = x_3029.rf;
          if (x_4458 == 2) {
            eval_stmts_x_3030(x_3029.n);
            x_3029.n->meta->bb_3_has_bb_dirtied = true;
            x_3029.n->meta->bb_3_bb_dirtied = false;
            return MakeUnit();
          } else if (x_4458 == 0) {
            eval_stmts_x_3031(x_3029.n);
            x_3029.n->meta->bb_1_has_bb_dirtied = true;
            x_3029.n->meta->bb_1_bb_dirtied = false;
            return MakeUnit();
          } else if (x_4458 == 1) {
            eval_stmts_x_3032(x_3029.n);
            x_3029.n->meta->bb_0_has_bb_dirtied = true;
            x_3029.n->meta->bb_0_bb_dirtied = false;
            return MakeUnit();
          } else if (x_4458 == 5) {
            eval_stmts_x_3033(x_3029.n);
            x_3029.n->meta->bb_2_has_bb_dirtied = true;
            x_3029.n->meta->bb_2_bb_dirtied = false;
            return MakeUnit();
          } else if (x_4458 == 3) {
            WriteRef(current_time, x_3028);
            eval_stmts_x_2729(x_3029.n);
            WriteRef(current_time, ReadRef(current_time));
            return MakeUnit();
          } else if (x_4458 == 4) {
            WriteRef(current_time, x_3028);
            eval_stmts_x_2730(x_3029.n);
            WriteRef(current_time, ReadRef(current_time));
            return MakeUnit();
          } else {
            Panic();
          }
        }();
      }
      MakeUnit();
    }
    return MakeUnit();
  });
}
Unit x_3036(const auto &x_3037, const auto &x_3038, const auto &x_3039) {
  auto x_3040 = ListHeadExn(x_3037);
  auto x_3041 = ListTailExn(x_3037);
  if (ListIsEmpty(x_3041)) {
    InputChangeMetric(node_size_x_2717(x_3039));
    auto x_3042 = ListSplitN(x_3038->children, x_3040);
    auto x_3043 = Zro(x_3042);
    auto x_3044 = Fst(x_3042);
    x_3038->children = ListAppend(x_3043, Cons(x_3039, x_3044));
    if (ListIsEmpty(x_3043)) {
      x_3038->first = x_3039.get();
    }
    if (ListIsEmpty(x_3044)) {
      x_3038->last = x_3039.get();
    }
    OptionMatch(
        ListLast(x_3043),
        [&](const auto &x_3046) {
          x_3039->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3045) {
          x_3039->prev = x_3045.get();
          x_3045->next = x_3039.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3044),
        [&](const auto &x_3048) {
          x_3039->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3047) {
          x_3039->next = x_3047.get();
          x_3047->prev = x_3039.get();
          return MakeUnit();
        });
    x_3039->parent = x_3038.get();
    RecordOverhead([&](const auto &x_3049) {
      auto x_3050 = (x_3039->parent);
      if (x_3050->meta->bb_0_has_bb_time_table) {
        auto x_3055 = OptionMatch(
            x_3039->prev, [&](const auto &x_3054) { return NextTotalOrder(x_3050->meta->bb_1_bb_time_table); },
            [&](const auto &x_3051) {
              if (x_3051->meta->bb_0_has_bb_time_table) {
                return NextTotalOrder(x_3051->meta->bb_0_bb_time_table);
              } else {
                return NextTotalOrder(x_3051->meta->bb_1_bb_time_table);
              }
            });
        x_3039->meta->bb_1_has_bb_dirtied = true;
        x_3039->meta->bb_1_bb_dirtied = true;
        x_3039->meta->bb_1_has_bb_time_table = true;
        x_3039->meta->bb_1_bb_time_table = x_3055;
        MetaWriteMetric();
        QueueForcePush(x_3055, x_3039, static_cast<int64_t>(3));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    OptionMatch(
        x_3039->next, [&](const auto &x_3060) { return MakeUnit(); },
        [&](const auto &x_3057) {
          if (x_3057->meta->bb_1_has_bb_time_table) {
            if (!(x_3057->meta->bb_1_has_bb_dirtied && x_3057->meta->bb_1_bb_dirtied)) {
              x_3057->meta->bb_1_has_bb_dirtied = true;
              x_3057->meta->bb_1_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3057->meta->bb_1_bb_time_table, x_3057, static_cast<int64_t>(0));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3038->children)) {
      if (x_3038->meta->bb_0_has_bb_time_table) {
        if (!(x_3038->meta->bb_0_has_bb_dirtied && x_3038->meta->bb_0_bb_dirtied)) {
          x_3038->meta->bb_0_has_bb_dirtied = true;
          x_3038->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3038->meta->bb_0_bb_time_table, x_3038, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_3044)) {
      if (x_3038->meta->bb_0_has_bb_time_table) {
        if (!(x_3038->meta->bb_0_has_bb_dirtied && x_3038->meta->bb_0_bb_dirtied)) {
          x_3038->meta->bb_0_has_bb_dirtied = true;
          x_3038->meta->bb_0_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3038->meta->bb_0_bb_time_table, x_3038, static_cast<int64_t>(1));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_3039->next, [&](const auto &x_3068) { return MakeUnit(); },
        [&](const auto &x_3065) {
          if (x_3065->meta->bb_0_has_bb_time_table) {
            if (!(x_3065->meta->bb_0_has_bb_dirtied && x_3065->meta->bb_0_bb_dirtied)) {
              x_3065->meta->bb_0_has_bb_dirtied = true;
              x_3065->meta->bb_0_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3065->meta->bb_0_bb_time_table, x_3065, static_cast<int64_t>(1));
              return MakeUnit();
            } else {
              return MakeUnit();
            }
          } else {
            return MakeUnit();
          }
        });
    RecordOverhead([&](const auto &x_3069) {
      auto x_3070 = (x_3039->parent);
      if (x_3070->meta->bb_2_has_bb_time_table) {
        auto x_3075 = OptionMatch(
            x_3039->prev, [&](const auto &x_3074) { return NextTotalOrder(x_3070->meta->bb_3_bb_time_table); },
            [&](const auto &x_3071) {
              if (x_3071->meta->bb_2_has_bb_time_table) {
                return NextTotalOrder(x_3071->meta->bb_2_bb_time_table);
              } else {
                return NextTotalOrder(x_3071->meta->bb_3_bb_time_table);
              }
            });
        x_3039->meta->bb_3_has_bb_dirtied = true;
        x_3039->meta->bb_3_bb_dirtied = true;
        x_3039->meta->bb_3_has_bb_time_table = true;
        x_3039->meta->bb_3_bb_time_table = x_3075;
        MetaWriteMetric();
        QueueForcePush(x_3075, x_3039, static_cast<int64_t>(4));
        return MakeUnit();
      } else {
        return MakeUnit();
      }
    });
    if (ListIsSingleton(x_3038->children)) {
      if (x_3038->meta->bb_3_has_bb_time_table) {
        if (!(x_3038->meta->bb_3_has_bb_dirtied && x_3038->meta->bb_3_bb_dirtied)) {
          x_3038->meta->bb_3_has_bb_dirtied = true;
          x_3038->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3038->meta->bb_3_bb_time_table, x_3038, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    if (ListIsEmpty(x_3044)) {
      if (x_3038->meta->bb_3_has_bb_time_table) {
        if (!(x_3038->meta->bb_3_has_bb_dirtied && x_3038->meta->bb_3_bb_dirtied)) {
          x_3038->meta->bb_3_has_bb_dirtied = true;
          x_3038->meta->bb_3_bb_dirtied = true;
          MetaWriteMetric();
          QueueForcePush(x_3038->meta->bb_3_bb_time_table, x_3038, static_cast<int64_t>(2));
          MakeUnit();
        }
      }
    }
    OptionMatch(
        x_3039->next, [&](const auto &x_3084) { return MakeUnit(); },
        [&](const auto &x_3081) {
          if (x_3081->meta->bb_3_has_bb_time_table) {
            if (!(x_3081->meta->bb_3_has_bb_dirtied && x_3081->meta->bb_3_bb_dirtied)) {
              x_3081->meta->bb_3_has_bb_dirtied = true;
              x_3081->meta->bb_3_bb_dirtied = true;
              MetaWriteMetric();
              QueueForcePush(x_3081->meta->bb_3_bb_time_table, x_3081, static_cast<int64_t>(2));
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
    return x_3036(x_3041, ListNthExn(x_3038->children, x_3040), x_3039);
  }
}
Unit add_node_x_2736(const auto &x_3037, const auto &x_3038, const auto &x_3039) {
  return x_3036(x_3037, x_3038, x_3039);
}
Unit x_3085(const auto &x_3086) {
  ListIter2(x_3086->children, [&](const auto &x_3087, const auto &x_3088) {
    x_3087->parent = x_3086.get();
    x_3088->parent = x_3086.get();
    x_3087->next = x_3088.get();
    x_3088->prev = x_3087.get();
    x_3085(x_3087);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3086->children),
      [&](const auto &x_3090) {
        x_3086->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3089) {
        x_3086->first = x_3089.get();
        x_3089->parent = x_3086.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3086->children),
      [&](const auto &x_3092) {
        x_3086->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3091) {
        x_3086->last = x_3091.get();
        x_3091->parent = x_3086.get();
        x_3085(x_3091);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2734(const auto &x_3086) { return x_3085(x_3086); }
Unit eval_stmts_x_2730(const auto &x_3093) {
  RecordOverhead([&](const auto &x_3094) {
    x_3093->meta->bb_3_has_bb_time_table = true;
    x_3093->meta->bb_3_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3095) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3030(x_3093);
  RecordOverhead([&](const auto &x_3096) {
    x_3093->meta->bb_3_has_bb_dirtied = true;
    x_3093->meta->bb_3_bb_dirtied = false;
    return MakeUnit();
  });
  ListIter(x_3093->children, [&](const auto &x_3097) { return eval_stmts_x_2730(x_3097); });
  RecordOverhead([&](const auto &x_3098) {
    x_3093->meta->bb_2_has_bb_time_table = true;
    x_3093->meta->bb_2_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3099) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3033(x_3093);
  RecordOverhead([&](const auto &x_3100) {
    x_3093->meta->bb_2_has_bb_dirtied = true;
    x_3093->meta->bb_2_bb_dirtied = false;
    return MakeUnit();
  });
  return MakeUnit();
}
Unit eval_stmts_x_2729(const auto &x_3101) {
  RecordOverhead([&](const auto &x_3102) {
    x_3101->meta->bb_1_has_bb_time_table = true;
    x_3101->meta->bb_1_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3103) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3031(x_3101);
  RecordOverhead([&](const auto &x_3104) {
    x_3101->meta->bb_1_has_bb_dirtied = true;
    x_3101->meta->bb_1_bb_dirtied = false;
    return MakeUnit();
  });
  ListIter(x_3101->children, [&](const auto &x_3105) { return eval_stmts_x_2729(x_3105); });
  RecordOverhead([&](const auto &x_3106) {
    x_3101->meta->bb_0_has_bb_time_table = true;
    x_3101->meta->bb_0_bb_time_table = ReadRef(current_time);
    return MakeUnit();
  });
  RecordOverhead([&](const auto &x_3107) { return WriteRef(current_time, NextTotalOrder(ReadRef(current_time))); });
  eval_stmts_x_3032(x_3101);
  RecordOverhead([&](const auto &x_3108) {
    x_3101->meta->bb_0_has_bb_dirtied = true;
    x_3101->meta->bb_0_bb_dirtied = false;
    return MakeUnit();
  });
  return MakeUnit();
}
Unit x_3109(const auto &x_3110) {
  ListIter2(x_3110->children, [&](const auto &x_3111, const auto &x_3112) {
    x_3111->parent = x_3110.get();
    x_3112->parent = x_3110.get();
    x_3111->next = x_3112.get();
    x_3112->prev = x_3111.get();
    x_3109(x_3111);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3110->children),
      [&](const auto &x_3114) {
        x_3110->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3113) {
        x_3110->first = x_3113.get();
        x_3113->parent = x_3110.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3110->children),
      [&](const auto &x_3116) {
        x_3110->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3115) {
        x_3110->last = x_3115.get();
        x_3115->parent = x_3110.get();
        x_3109(x_3115);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2726(const auto &x_3110) { return x_3109(x_3110); }
int64_t x_3117(const auto &x_3118) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3118->children, [&](const auto &x_3119) { return x_3117(x_3119); }));
}
int64_t node_size_x_2717(const auto &x_3118) { return x_3117(x_3118); }
int64_t x_3120(const auto &x_3121) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3121->children, [&](const auto &x_3122) { return x_3120(x_3122); }));
}
int64_t layout_size_x_2716(const auto &x_3121) { return x_3120(x_3121); }
LayoutNode x_3123(const auto &x_3124) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_3124)), [&](const auto &x_3125) { return x_3123(x_3125); }));
}
LayoutNode json_to_layout_node_x_2715(const auto &x_3124) { return x_3123(x_3124); }
Node x_3126(const auto &x_3127) {
  return MakeNode(x_3127->name, x_3127->attr, x_3127->prop, x_3127->extern_id,
                  ListMap(x_3127->children, [&](const auto &x_3128) { return x_3126(x_3128); }));
}
Node node_to_fs_node_x_2714(const auto &x_3127) { return x_3126(x_3127); }
Node x_3129(const auto &x_3130) {
  return MakeNode(
      JsonToString(JsonMember("name", x_3130)), JsonToDict(JsonMember("attributes", x_3130)),
      JsonToDict(JsonMember("properties", x_3130)), JsonToInt(JsonMember("id", x_3130)),
      ListMap(JsonToList(JsonMember("children", x_3130)), [&](const auto &x_3131) { return x_3129(x_3131); }));
}
Node json_to_node_aux_x_2713(const auto &x_3130) { return x_3129(x_3130); }
int main() {
  WithOutFile("espn.out", [&](const auto &x_2718) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_2719) {
      auto x_2720 = MakeRef(static_cast<int64_t>(0));
      auto x_2722 = JsonOfString(InputLine(x_2719));
      auto x_2723 = JsonOfString(InputLine(x_2719));
      auto x_2724 = MakeStack();
      PushStack(x_2724, x_2722);
      PushStack(x_2724, x_2723);
      Assert(StringEqual(JsonToString(JsonMember("name", x_2722)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_2723)), "layout_init"));
      auto x_2727 = [&]() {
        auto x_2725 = json_to_node_aux_x_2713(JsonMember("node", x_2722));
        x_2725->parent = nullptr;
        x_2725->prev = nullptr;
        x_2725->next = nullptr;
        set_children_relation_x_2726(x_2725);
        return x_2725;
      }();
      auto x_2728 = json_to_layout_node_x_2715(JsonMember("node", x_2723));
      OutputChangeMetric(layout_size_x_2716(x_2728));
      InputChangeMetric(node_size_x_2717(x_2727));
      eval_stmts_x_2729(x_2727);
      eval_stmts_x_2730(x_2727);
      JsonToChannel(x_2718, [&]() {
        auto x_4459 = FreshJson();
        WriteJson(x_4459, "name", "PQ_D");
        WriteJson(x_4459, "diff_num", ReadRef(x_2720));
        WriteJson(x_4459, "read_count", MetricReadCount());
        WriteJson(x_4459, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_4459, "write_count", MetricWriteCount());
        WriteJson(x_4459, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_4459, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_4459, "input_change_count", MetricInputChangeCount());
        WriteJson(x_4459, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_4459, "overhead_time", MetricOverheadTime());
        WriteJson(x_4459, "overhead_l2m", MetricOverheadL2m());
        WriteJson(x_4459, "eval_time", MetricEvalCount());
        WriteJson(x_4459, "html", "");
        WriteJson(x_4459, "command", StackToList(x_2724));
        return x_4459;
      }());
      OutputString(x_2718, "\n");
      ClearStack(x_2724);
      WriteRef(x_2720, IntAdd(ReadRef(x_2720), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_2719, [&](const auto &x_2731) {
        auto x_2732 = JsonOfString(x_2731);
        PushStack(x_2724, x_2732);
        std::string x_4461 = JsonToString(JsonMember("name", x_2732));
        if (x_4461 == "add") {
          return add_node_x_2736(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2735) { return JsonToInt(x_2735); }),
              x_2727, [&]() {
                auto x_2733 = json_to_node_aux_x_2713(JsonMember("node", x_2732));
                x_2733->parent = nullptr;
                x_2733->prev = nullptr;
                x_2733->next = nullptr;
                set_children_relation_x_2734(x_2733);
                return x_2733;
              }());
        } else if (x_4461 == "recalculate") {
          recalculate_x_2737(x_2727);
          JsonToChannel(x_2718, [&]() {
            auto x_4460 = FreshJson();
            WriteJson(x_4460, "name", "PQ_D");
            WriteJson(x_4460, "diff_num", ReadRef(x_2720));
            WriteJson(x_4460, "read_count", MetricReadCount());
            WriteJson(x_4460, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_4460, "write_count", MetricWriteCount());
            WriteJson(x_4460, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_4460, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_4460, "input_change_count", MetricInputChangeCount());
            WriteJson(x_4460, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_4460, "overhead_time", MetricOverheadTime());
            WriteJson(x_4460, "overhead_l2m", MetricOverheadL2m());
            WriteJson(x_4460, "eval_time", MetricEvalCount());
            WriteJson(x_4460, "html", "");
            WriteJson(x_4460, "command", StackToList(x_2724));
            return x_4460;
          }());
          OutputString(x_2718, "\n");
          ClearStack(x_2724);
          WriteRef(x_2720, IntAdd(ReadRef(x_2720), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_4461 == "remove") {
          return remove_node_x_2739(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2738) { return JsonToInt(x_2738); }),
              x_2727, MakeUnit());
        } else if (x_4461 == "replace") {
          return replace_node_x_2743(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2742) { return JsonToInt(x_2742); }),
              x_2727, [&]() {
                auto x_2740 = json_to_node_aux_x_2713(JsonMember("node", x_2732));
                x_2740->parent = nullptr;
                x_2740->prev = nullptr;
                x_2740->next = nullptr;
                set_children_relation_x_2741(x_2740);
                return x_2740;
              }());
        } else if (x_4461 == "replace_value") {
          return replace_value_x_2745(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2744) { return JsonToInt(x_2744); }),
              x_2727,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2732)), JsonToString(JsonMember("key", x_2732))),
                       JsonToValue(JsonMember("value", x_2732))));
        } else if (x_4461 == "delete_value") {
          return delete_value_x_2747(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2746) { return JsonToInt(x_2746); }),
              x_2727, MakePair(JsonToString(JsonMember("type", x_2732)), JsonToString(JsonMember("key", x_2732))));
        } else if (x_4461 == "insert_value") {
          return insert_value_x_2749(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2748) { return JsonToInt(x_2748); }),
              x_2727,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2732)), JsonToString(JsonMember("key", x_2732))),
                       JsonToValue(JsonMember("value", x_2732))));
        } else if (x_4461 == "layout_remove") {
          return remove_layout_node_x_2751(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2750) { return JsonToInt(x_2750); }),
              x_2728, MakeUnit());
        } else if (x_4461 == "layout_add") {
          return add_layout_node_x_2753(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2752) { return JsonToInt(x_2752); }),
              x_2728, json_to_layout_node_x_2715(JsonMember("node", x_2732)));
        } else if (x_4461 == "layout_replace") {
          return replace_layout_node_x_2755(
              ListMap(JsonToList(JsonMember("path", x_2732)), [&](const auto &x_2754) { return JsonToInt(x_2754); }),
              x_2728, json_to_layout_node_x_2715(JsonMember("node", x_2732)));
        } else if (x_4461 == "layout_info_changed") {
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