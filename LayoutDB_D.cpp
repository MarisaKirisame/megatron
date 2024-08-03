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
  bool bb_1_has_bb_dirtied = false;
  bool bb_1_bb_dirtied;
  bool bb_0_has_bb_dirtied = false;
  bool bb_0_bb_dirtied;
  bool bb_2_has_bb_dirtied = false;
  bool bb_2_bb_dirtied;
  bool pass_0_proc_inited = false;
  bool pass_0_has_recursive_proc_dirtied = false;
  bool pass_0_recursive_proc_dirtied;
  bool pass_1_proc_inited = false;
  bool pass_1_has_recursive_proc_dirtied = false;
  bool pass_1_recursive_proc_dirtied;
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
Unit var_modified_x_4556(const auto &x_4566);
auto eval_expr_x_4553(const auto &x_4572);
Unit var_modified_x_4551(const auto &x_4589);
auto eval_expr_x_4548(const auto &x_4593);
Unit var_modified_x_4546(const auto &x_4602);
auto eval_expr_x_4543(const auto &x_4608);
Unit var_modified_x_4541(const auto &x_4661);
auto eval_expr_x_4538(const auto &x_4669);
Unit var_modified_x_4536(const auto &x_4694);
auto eval_expr_x_4533(const auto &x_4700);
Unit var_modified_x_4531(const auto &x_4709);
auto eval_expr_x_4528(const auto &x_4715);
Unit var_modified_x_4526(const auto &x_4768);
auto eval_expr_x_4523(const auto &x_4776);
Unit var_modified_x_4521(const auto &x_4797);
auto eval_expr_x_4518(const auto &x_4801);
Unit var_modified_x_4516(const auto &x_4822);
auto eval_expr_x_4513(const auto &x_4826);
Unit var_modified_x_4511(const auto &x_4839);
auto eval_expr_x_4508(const auto &x_4845);
Unit var_modified_x_4506(const auto &x_4866);
auto eval_expr_x_4503(const auto &x_4870);
Unit var_modified_x_4501(const auto &x_4875);
auto eval_expr_x_4498(const auto &x_4879);
Unit var_modified_x_4494(const auto &x_4884);
auto eval_expr_x_4491(const auto &x_4898);
Unit var_modified_x_4489(const auto &x_4977);
auto eval_expr_x_4486(const auto &x_4981);
Unit var_modified_x_4484(const auto &x_4998);
auto eval_expr_x_4481(const auto &x_5006);
Unit var_modified_x_4479(const auto &x_5011);
auto eval_expr_x_4476(const auto &x_5019);
Unit var_modified_x_4474(const auto &x_5028);
auto eval_expr_x_4471(const auto &x_5032);
Unit var_modified_x_4469(const auto &x_5033);
auto eval_expr_x_4466(const auto &x_5037);
Unit var_modified_x_4464(const auto &x_5042);
auto eval_expr_x_4461(const auto &x_5048);
Unit var_modified_x_4459(const auto &x_5059);
auto eval_expr_x_4456(const auto &x_5063);
Unit var_modified_x_4454(const auto &x_5068);
auto eval_expr_x_4451(const auto &x_5074);
Unit var_modified_x_4449(const auto &x_5085);
auto eval_expr_x_4446(const auto &x_5091);
Unit var_modified_x_4444(const auto &x_5116);
auto eval_expr_x_4441(const auto &x_5124);
Unit var_modified_x_4439(const auto &x_5153);
auto eval_expr_x_4436(const auto &x_5157);
Unit var_modified_x_4434(const auto &x_5160);
auto eval_expr_x_4431(const auto &x_5168);
Unit var_modified_x_4429(const auto &x_5177);
auto eval_expr_x_4426(const auto &x_5185);
Unit var_modified_x_4424(const auto &x_5194);
auto eval_expr_x_4421(const auto &x_5200);
Unit var_modified_x_4419(const auto &x_5203);
auto eval_expr_x_4416(const auto &x_5209);
Unit var_modified_x_4414(const auto &x_5212);
auto eval_expr_x_4411(const auto &x_5220);
Unit var_modified_x_4409(const auto &x_5223);
auto eval_expr_x_4406(const auto &x_5231);
Unit var_modified_x_4402(const auto &x_5234);
auto eval_expr_x_4399(const auto &x_5244);
Unit var_modified_x_4397(const auto &x_5273);
auto eval_expr_x_4394(const auto &x_5283);
Unit var_modified_x_4392(const auto &x_5296);
auto eval_expr_x_4389(const auto &x_5306);
Unit var_modified_x_4387(const auto &x_5315);
auto eval_expr_x_4384(const auto &x_5319);
Unit var_modified_x_4382(const auto &x_5328);
auto eval_expr_x_4379(const auto &x_5334);
Unit var_modified_x_4377(const auto &x_5479);
auto eval_expr_x_4374(const auto &x_5483);
Unit var_modified_x_4372(const auto &x_5532);
auto eval_expr_x_4369(const auto &x_5538);
Unit var_modified_x_4367(const auto &x_5541);
auto eval_expr_x_4364(const auto &x_5545);
Unit var_modified_x_4362(const auto &x_5554);
auto eval_expr_x_4359(const auto &x_5564);
Unit var_modified_x_4357(const auto &x_5573);
auto eval_expr_x_4354(const auto &x_5583);
Unit var_modified_x_4352(const auto &x_5592);
auto eval_expr_x_4349(const auto &x_5600);
Unit var_modified_x_4347(const auto &x_5613);
auto eval_expr_x_4344(const auto &x_5617);
Unit var_modified_x_4342(const auto &x_5626);
auto eval_expr_x_4339(const auto &x_5632);
Unit var_modified_x_4337(const auto &x_5785);
auto eval_expr_x_4334(const auto &x_5789);
Unit var_modified_x_4332(const auto &x_5794);
auto eval_expr_x_4329(const auto &x_5798);
Unit var_modified_x_4327(const auto &x_5847);
auto eval_expr_x_4324(const auto &x_5851);
Unit var_modified_x_4322(const auto &x_5864);
auto eval_expr_x_4319(const auto &x_5870);
Unit eval_stmts_x_4246(const auto &x_4317);
Unit eval_stmts_x_4244(const auto &x_4404);
Unit eval_stmts_x_4240(const auto &x_4496);
Unit x_4558(const auto &x_4559);
Unit x_4562(const auto &x_4563);
Unit x_4050(const auto &x_4051, const auto &x_4052, const auto &x_4053);
Unit x_4057(const auto &x_4058, const auto &x_4059, const auto &x_4060);
Unit x_4064(const auto &x_4065, const auto &x_4066, const auto &x_4067);
Unit x_4071(const auto &x_4072, const auto &x_4073, const auto &x_4074);
Unit x_4095(const auto &x_4096, const auto &x_4097, const auto &x_4098);
Unit x_4116(const auto &x_4117, const auto &x_4118, const auto &x_4119);
Unit x_4151(const auto &x_4152, const auto &x_4153, const auto &x_4154);
Unit x_4202(const auto &x_4203);
Unit x_4210(const auto &x_4211, const auto &x_4212, const auto &x_4213);
Unit x_4238(const auto &x_4239);
Unit x_4242(const auto &x_4243);
Unit x_4247(const auto &x_4248, const auto &x_4249, const auto &x_4250);
Unit x_4275(const auto &x_4276);
Unit eval_stmts_x_4022(const auto &x_4283);
Unit eval_stmts_x_4020(const auto &x_4288);
Unit x_4294(const auto &x_4295);
int64_t x_4302(const auto &x_4303);
int64_t x_4305(const auto &x_4306);
LayoutNode x_4308(const auto &x_4309);
Node x_4311(const auto &x_4312);
Node x_4314(const auto &x_4315);
Unit var_modified_x_4556(const auto &x_4566) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4567) {
    auto x_5873 = [&](const auto &x_4570) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4571) {
        if (x_4570->meta->pass_1_proc_inited) {
          x_4570->meta->bb_2_has_bb_dirtied = true;
          x_4570->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4570);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_4566->next, [&](const auto &x_4569) { return MakeUnit(); },
        [&](const auto &x_4568) {
          auto x_5874 = x_5873;
          x_5874(x_4568);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4553(const auto &x_4572) {
  if ((x_4572->prev != nullptr) && (!(x_4572->prev)->var_line_break)) {
    return max(x_4572->var_height_external, (x_4572->prev)->var_line_height);
  } else {
    return x_4572->var_height_external;
  }
}
Unit var_modified_x_4551(const auto &x_4589) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4590) {
    auto x_5875 = [&](const auto &x_4591) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4592) {
        if (x_4591->meta->pass_1_proc_inited) {
          x_4591->meta->bb_2_has_bb_dirtied = true;
          x_4591->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4591);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5875(x_4589);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4548(const auto &x_4593) {
  if (eq(x_4593->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4593->var_height_internal;
  }
}
Unit var_modified_x_4546(const auto &x_4602) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4603) {
    auto x_5876 = [&](const auto &x_4604) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4605) {
        if (x_4604->meta->pass_1_proc_inited) {
          x_4604->meta->bb_2_has_bb_dirtied = true;
          x_4604->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4604);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5876(x_4602);
    MakeUnit();
    ListIter(x_4602->children, [&](const auto &x_4606) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4607) {
        if (x_4606->meta->pass_1_proc_inited) {
          x_4606->meta->bb_2_has_bb_dirtied = true;
          x_4606->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4606);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4543(const auto &x_4608) {
  if (x_4608->var_intrinsic_height_is_height) {
    return x_4608->var_intrinsic_height_internal;
  } else {
    if ((x_4608->parent != nullptr) && (x_4608->parent)->var_is_flex_column) {
      return plus(x_4608->var_intrinsic_height_internal,
                  mult(x_4608->var_flex_amount, (x_4608->parent)->var_flex_unit));
    } else {
      if (x_4608->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_4608->var_box_height, divide(x_4608->var_height_expr.r.a0, 100.));
      } else {
        return max(x_4608->var_box_height, x_4608->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_4541(const auto &x_4661) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4662) {
    ListIter(x_4661->children, [&](const auto &x_4663) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4664) {
        if (x_4663->meta->pass_1_proc_inited) {
          x_4663->meta->bb_2_has_bb_dirtied = true;
          x_4663->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4663);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_5877 = [&](const auto &x_4667) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4668) {
        if (x_4667->meta->pass_1_proc_inited) {
          x_4667->meta->bb_2_has_bb_dirtied = true;
          x_4667->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4667);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_4661->next, [&](const auto &x_4666) { return MakeUnit(); },
        [&](const auto &x_4665) {
          auto x_5878 = x_5877;
          x_5878(x_4665);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4538(const auto &x_4669) {
  if (x_4669->prev != nullptr) {
    if (x_4669->var_line_break || (x_4669->prev)->var_line_break) {
      return plus((x_4669->prev)->var_y, (x_4669->prev)->var_line_height);
    } else {
      return (x_4669->prev)->var_y;
    }
  } else {
    if (x_4669->parent != nullptr) {
      return (x_4669->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4536(const auto &x_4694) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4695) {
    auto x_5879 = [&](const auto &x_4698) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4699) {
        if (x_4698->meta->pass_1_proc_inited) {
          x_4698->meta->bb_2_has_bb_dirtied = true;
          x_4698->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4698);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_4694->next, [&](const auto &x_4697) { return MakeUnit(); },
        [&](const auto &x_4696) {
          auto x_5880 = x_5879;
          x_5880(x_4696);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4533(const auto &x_4700) {
  if (eq(x_4700->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4700->var_width_internal;
  }
}
Unit var_modified_x_4531(const auto &x_4709) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4710) {
    auto x_5881 = [&](const auto &x_4711) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4712) {
        if (x_4711->meta->pass_1_proc_inited) {
          x_4711->meta->bb_2_has_bb_dirtied = true;
          x_4711->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4711);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5881(x_4709);
    MakeUnit();
    ListIter(x_4709->children, [&](const auto &x_4713) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4714) {
        if (x_4713->meta->pass_1_proc_inited) {
          x_4713->meta->bb_2_has_bb_dirtied = true;
          x_4713->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4713);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4528(const auto &x_4715) {
  if (x_4715->var_intrinsic_width_is_width) {
    return x_4715->var_intrinsic_width_internal;
  } else {
    if ((x_4715->parent != nullptr) && (x_4715->parent)->var_is_flex_row) {
      return plus(x_4715->var_intrinsic_width_internal, mult(x_4715->var_flex_amount, (x_4715->parent)->var_flex_unit));
    } else {
      if (x_4715->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_4715->var_box_width, divide(x_4715->var_width_expr.r.a0, 100.));
      } else {
        return max(x_4715->var_box_width, x_4715->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_4526(const auto &x_4768) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4769) {
    ListIter(x_4768->children, [&](const auto &x_4770) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4771) {
        if (x_4770->meta->pass_1_proc_inited) {
          x_4770->meta->bb_2_has_bb_dirtied = true;
          x_4770->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4770);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_5882 = [&](const auto &x_4774) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4775) {
        if (x_4774->meta->pass_1_proc_inited) {
          x_4774->meta->bb_2_has_bb_dirtied = true;
          x_4774->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4774);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_4768->next, [&](const auto &x_4773) { return MakeUnit(); },
        [&](const auto &x_4772) {
          auto x_5883 = x_5882;
          x_5883(x_4772);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4523(const auto &x_4776) {
  if (x_4776->prev != nullptr) {
    if (x_4776->var_line_break || (x_4776->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_4776->prev)->var_x, (x_4776->prev)->var_width_external);
    }
  } else {
    if (x_4776->parent != nullptr) {
      return (x_4776->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4521(const auto &x_4797) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4798) {
    ListIter(x_4797->children, [&](const auto &x_4799) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4800) {
        if (x_4799->meta->pass_1_proc_inited) {
          x_4799->meta->bb_2_has_bb_dirtied = true;
          x_4799->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4799);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4518(const auto &x_4801) {
  if (gt(x_4801->var_left_over, 0.)) {
    return divide(x_4801->var_left_over, x_4801->var_flex_grow_sum);
  } else {
    return divide(x_4801->var_left_over, x_4801->var_flex_shrink_sum);
  }
}
Unit var_modified_x_4516(const auto &x_4822) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4823) {
    auto x_5884 = [&](const auto &x_4824) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4825) {
        if (x_4824->meta->pass_1_proc_inited) {
          x_4824->meta->bb_2_has_bb_dirtied = true;
          x_4824->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4824);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5884(x_4822);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4513(const auto &x_4826) {
  if ((x_4826->parent != nullptr) && gt((x_4826->parent)->var_left_over, 0.)) {
    return x_4826->var_flex_grow;
  } else {
    return x_4826->var_flex_shrink;
  }
}
Unit var_modified_x_4511(const auto &x_4839) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4840) {
    auto x_5885 = [&](const auto &x_4841) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4842) {
        if (x_4841->meta->pass_1_proc_inited) {
          x_4841->meta->bb_2_has_bb_dirtied = true;
          x_4841->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4841);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5885(x_4839);
    MakeUnit();
    ListIter(x_4839->children, [&](const auto &x_4843) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4844) {
        if (x_4843->meta->pass_1_proc_inited) {
          x_4843->meta->bb_2_has_bb_dirtied = true;
          x_4843->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4843);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4508(const auto &x_4845) {
  if (x_4845->var_is_flex_row) {
    return minus(x_4845->var_box_width, (x_4845->last != nullptr) ? ((x_4845->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_4845->var_box_height, (x_4845->last != nullptr) ? ((x_4845->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_4506(const auto &x_4866) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4867) {
    auto x_5886 = [&](const auto &x_4868) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4869) {
        if (x_4868->meta->pass_1_proc_inited) {
          x_4868->meta->bb_2_has_bb_dirtied = true;
          x_4868->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4868);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5886(x_4866);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4503(const auto &x_4870) {
  if (x_4870->parent != nullptr) {
    return (x_4870->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_4501(const auto &x_4875) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4876) {
    auto x_5887 = [&](const auto &x_4877) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4878) {
        if (x_4877->meta->pass_1_proc_inited) {
          x_4877->meta->bb_2_has_bb_dirtied = true;
          x_4877->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4877);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5887(x_4875);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4498(const auto &x_4879) {
  if (x_4879->parent != nullptr) {
    return (x_4879->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_4494(const auto &x_4884) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4885) {
    auto x_5888 = [&](const auto &x_4886) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4887) {
        if (x_4886->meta->pass_0_proc_inited) {
          x_4886->meta->bb_0_has_bb_dirtied = true;
          x_4886->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4886);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5888(x_4884);
    MakeUnit();
    auto x_5889 = [&](const auto &x_4890) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4891) {
        if (x_4890->meta->pass_0_proc_inited) {
          x_4890->meta->bb_0_has_bb_dirtied = true;
          x_4890->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4890);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_4884->next, [&](const auto &x_4889) { return MakeUnit(); },
        [&](const auto &x_4888) {
          auto x_5892 = x_5889;
          x_5892(x_4888);
          return MakeUnit();
        });
    auto x_5890 = [&](const auto &x_4892) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4893) {
        if (x_4892->meta->pass_1_proc_inited) {
          x_4892->meta->bb_2_has_bb_dirtied = true;
          x_4892->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4892);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5890(x_4884);
    MakeUnit();
    auto x_5891 = [&](const auto &x_4896) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4897) {
        if (x_4896->meta->pass_1_proc_inited) {
          x_4896->meta->bb_2_has_bb_dirtied = true;
          x_4896->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4896);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_4884->next, [&](const auto &x_4895) { return MakeUnit(); },
        [&](const auto &x_4894) {
          auto x_5893 = x_5891;
          x_5893(x_4894);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4491(const auto &x_4898) {
  if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_4898->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_4898->parent != nullptr) &&
          (eq((x_4898->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_4898->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_4898->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_4898->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_4898->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_4898->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_4489(const auto &x_4977) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4978) {
    ListIter(x_4977->children, [&](const auto &x_4979) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4980) {
        if (x_4979->meta->pass_0_proc_inited) {
          x_4979->meta->bb_1_has_bb_dirtied = true;
          x_4979->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4979);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4486(const auto &x_4981) {
  return (((!(x_4981->parent != nullptr)) || (x_4981->parent)->var_visible) &&
          (neq(x_4981->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_4981->var_inside_svg) && (!x_4981->var_disabled))));
}
Unit var_modified_x_4484(const auto &x_4998) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4999) {
    auto x_5894 = [&](const auto &x_5000) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5001) {
        if (x_5000->meta->pass_0_proc_inited) {
          x_5000->meta->bb_1_has_bb_dirtied = true;
          x_5000->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5000);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5894(x_4998);
    MakeUnit();
    ListIter(x_4998->children, [&](const auto &x_5002) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5003) {
        if (x_5002->meta->pass_0_proc_inited) {
          x_5002->meta->bb_1_has_bb_dirtied = true;
          x_5002->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5002);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_5895 = [&](const auto &x_5004) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5005) {
        if (x_5004->meta->pass_0_proc_inited) {
          x_5004->meta->bb_0_has_bb_dirtied = true;
          x_5004->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5004);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5895(x_4998);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4481(const auto &x_5006) {
  if (eq(x_5006->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_5006->parent != nullptr) && (x_5006->parent)->var_disabled);
  }
}
Unit var_modified_x_4479(const auto &x_5011) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5012) {
    auto x_5896 = [&](const auto &x_5013) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5014) {
        if (x_5013->meta->pass_0_proc_inited) {
          x_5013->meta->bb_1_has_bb_dirtied = true;
          x_5013->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5013);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5896(x_5011);
    MakeUnit();
    ListIter(x_5011->children, [&](const auto &x_5015) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5016) {
        if (x_5015->meta->pass_0_proc_inited) {
          x_5015->meta->bb_1_has_bb_dirtied = true;
          x_5015->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5015);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_5897 = [&](const auto &x_5017) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5018) {
        if (x_5017->meta->pass_0_proc_inited) {
          x_5017->meta->bb_0_has_bb_dirtied = true;
          x_5017->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5017);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5897(x_5011);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4476(const auto &x_5019) {
  return ((x_5019->parent != nullptr) && ((x_5019->parent)->var_is_svg_block || (x_5019->parent)->var_inside_svg));
}
Unit var_modified_x_4474(const auto &x_5028) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5029) {
    ListIter(x_5028->children, [&](const auto &x_5030) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5031) {
        if (x_5030->meta->pass_0_proc_inited) {
          x_5030->meta->bb_1_has_bb_dirtied = true;
          x_5030->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5030);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4471(const auto &x_5032) { return eq(x_5032->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_4469(const auto &x_5033) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5034) {
    auto x_5898 = [&](const auto &x_5035) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5036) {
        if (x_5035->meta->pass_0_proc_inited) {
          x_5035->meta->bb_0_has_bb_dirtied = true;
          x_5035->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5035);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5898(x_5033);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4466(const auto &x_5037) {
  return neq(x_5037->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4464(const auto &x_5042) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5043) {
    auto x_5899 = [&](const auto &x_5044) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5045) {
        if (x_5044->meta->pass_0_proc_inited) {
          x_5044->meta->bb_1_has_bb_dirtied = true;
          x_5044->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5044);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5899(x_5042);
    MakeUnit();
    auto x_5900 = [&](const auto &x_5046) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5047) {
        if (x_5046->meta->pass_0_proc_inited) {
          x_5046->meta->bb_0_has_bb_dirtied = true;
          x_5046->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5046);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5900(x_5042);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4461(const auto &x_5048) {
  if (!x_5048->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_5048->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_5048->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_5048->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4459(const auto &x_5059) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5060) {
    auto x_5901 = [&](const auto &x_5061) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5062) {
        if (x_5061->meta->pass_0_proc_inited) {
          x_5061->meta->bb_0_has_bb_dirtied = true;
          x_5061->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5061);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5901(x_5059);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4456(const auto &x_5063) {
  return neq(x_5063->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4454(const auto &x_5068) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5069) {
    auto x_5902 = [&](const auto &x_5070) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5071) {
        if (x_5070->meta->pass_0_proc_inited) {
          x_5070->meta->bb_1_has_bb_dirtied = true;
          x_5070->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5070);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5902(x_5068);
    MakeUnit();
    auto x_5903 = [&](const auto &x_5072) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5073) {
        if (x_5072->meta->pass_0_proc_inited) {
          x_5072->meta->bb_0_has_bb_dirtied = true;
          x_5072->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5072);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5903(x_5068);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4451(const auto &x_5074) {
  if (!x_5074->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_5074->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_5074->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_5074->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4449(const auto &x_5085) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5086) {
    ListIter(x_5085->children, [&](const auto &x_5087) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5088) {
        if (x_5087->meta->pass_0_proc_inited) {
          x_5087->meta->bb_0_has_bb_dirtied = true;
          x_5087->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5087);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    ListIter(x_5085->children, [&](const auto &x_5089) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5090) {
        if (x_5089->meta->pass_1_proc_inited) {
          x_5089->meta->bb_2_has_bb_dirtied = true;
          x_5089->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5089);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4446(const auto &x_5091) {
  if ((x_5091->parent != nullptr) &&
      (eq((x_5091->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_5091->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_5091->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_5091->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4444(const auto &x_5116) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5117) {
    ListIter(x_5116->children, [&](const auto &x_5118) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5119) {
        if (x_5118->meta->pass_0_proc_inited) {
          x_5118->meta->bb_0_has_bb_dirtied = true;
          x_5118->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5118);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_5904 = [&](const auto &x_5120) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5121) {
        if (x_5120->meta->pass_1_proc_inited) {
          x_5120->meta->bb_2_has_bb_dirtied = true;
          x_5120->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5120);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5904(x_5116);
    MakeUnit();
    ListIter(x_5116->children, [&](const auto &x_5122) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5123) {
        if (x_5122->meta->pass_1_proc_inited) {
          x_5122->meta->bb_2_has_bb_dirtied = true;
          x_5122->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5122);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4441(const auto &x_5124) {
  if ((x_5124->parent != nullptr) &&
      (eq((x_5124->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_5124->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_5124->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_5124->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4439(const auto &x_5153) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5154) {
    ListIter(x_5153->children, [&](const auto &x_5155) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5156) {
        if (x_5155->meta->pass_0_proc_inited) {
          x_5155->meta->bb_1_has_bb_dirtied = true;
          x_5155->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5155);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4436(const auto &x_5157) {
  if (x_5157->has_prop_flex_direction) {
    return x_5157->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_4434(const auto &x_5160) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5161) {
    auto x_5905 = [&](const auto &x_5164) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5165) {
        if (x_5164->meta->pass_0_proc_inited) {
          x_5164->meta->bb_1_has_bb_dirtied = true;
          x_5164->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5164);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5160->next, [&](const auto &x_5163) { return MakeUnit(); },
        [&](const auto &x_5162) {
          auto x_5907 = x_5905;
          x_5907(x_5162);
          return MakeUnit();
        });
    auto x_5906 = [&](const auto &x_5166) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5167) {
        if (x_5166->meta->pass_1_proc_inited) {
          x_5166->meta->bb_2_has_bb_dirtied = true;
          x_5166->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5166);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5906(x_5160);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4431(const auto &x_5168) {
  return plus((x_5168->prev != nullptr) ? ((x_5168->prev)->var_flex_shrink_sum) : (0.), x_5168->var_flex_shrink);
}
Unit var_modified_x_4429(const auto &x_5177) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5178) {
    auto x_5908 = [&](const auto &x_5181) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5182) {
        if (x_5181->meta->pass_0_proc_inited) {
          x_5181->meta->bb_1_has_bb_dirtied = true;
          x_5181->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5181);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5177->next, [&](const auto &x_5180) { return MakeUnit(); },
        [&](const auto &x_5179) {
          auto x_5910 = x_5908;
          x_5910(x_5179);
          return MakeUnit();
        });
    auto x_5909 = [&](const auto &x_5183) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5184) {
        if (x_5183->meta->pass_1_proc_inited) {
          x_5183->meta->bb_2_has_bb_dirtied = true;
          x_5183->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5183);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5909(x_5177);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4426(const auto &x_5185) {
  return plus((x_5185->prev != nullptr) ? ((x_5185->prev)->var_flex_grow_sum) : (0.), x_5185->var_flex_grow);
}
Unit var_modified_x_4424(const auto &x_5194) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5195) {
    auto x_5911 = [&](const auto &x_5196) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5197) {
        if (x_5196->meta->pass_0_proc_inited) {
          x_5196->meta->bb_1_has_bb_dirtied = true;
          x_5196->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5196);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5911(x_5194);
    MakeUnit();
    auto x_5912 = [&](const auto &x_5198) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5199) {
        if (x_5198->meta->pass_1_proc_inited) {
          x_5198->meta->bb_2_has_bb_dirtied = true;
          x_5198->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5198);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5912(x_5194);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4421(const auto &x_5200) {
  if (x_5200->has_prop_flex_shrink) {
    return (x_5200->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4419(const auto &x_5203) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5204) {
    auto x_5913 = [&](const auto &x_5205) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5206) {
        if (x_5205->meta->pass_0_proc_inited) {
          x_5205->meta->bb_1_has_bb_dirtied = true;
          x_5205->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5205);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5913(x_5203);
    MakeUnit();
    auto x_5914 = [&](const auto &x_5207) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5208) {
        if (x_5207->meta->pass_1_proc_inited) {
          x_5207->meta->bb_2_has_bb_dirtied = true;
          x_5207->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5207);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5914(x_5203);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4416(const auto &x_5209) {
  if (x_5209->has_prop_flex_grow) {
    return (x_5209->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4414(const auto &x_5212) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5213) {
    auto x_5915 = [&](const auto &x_5214) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5215) {
        if (x_5214->meta->pass_0_proc_inited) {
          x_5214->meta->bb_1_has_bb_dirtied = true;
          x_5214->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5214);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5915(x_5212);
    MakeUnit();
    auto x_5916 = [&](const auto &x_5216) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5217) {
        if (x_5216->meta->pass_0_proc_inited) {
          x_5216->meta->bb_0_has_bb_dirtied = true;
          x_5216->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5216);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5916(x_5212);
    MakeUnit();
    auto x_5917 = [&](const auto &x_5218) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5219) {
        if (x_5218->meta->pass_1_proc_inited) {
          x_5218->meta->bb_2_has_bb_dirtied = true;
          x_5218->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5218);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5917(x_5212);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4411(const auto &x_5220) {
  if (x_5220->has_prop_position) {
    return x_5220->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_4409(const auto &x_5223) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5224) {
    auto x_5918 = [&](const auto &x_5225) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5226) {
        if (x_5225->meta->pass_0_proc_inited) {
          x_5225->meta->bb_1_has_bb_dirtied = true;
          x_5225->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5225);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5918(x_5223);
    MakeUnit();
    ListIter(x_5223->children, [&](const auto &x_5227) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5228) {
        if (x_5227->meta->pass_0_proc_inited) {
          x_5227->meta->bb_1_has_bb_dirtied = true;
          x_5227->meta->bb_1_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5227);
        } else {
          return MetaWriteMetric();
        }
      })));
    });
    auto x_5919 = [&](const auto &x_5229) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5230) {
        if (x_5229->meta->pass_0_proc_inited) {
          x_5229->meta->bb_0_has_bb_dirtied = true;
          x_5229->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5229);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5919(x_5223);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4406(const auto &x_5231) {
  if (x_5231->has_prop_display) {
    return x_5231->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_4402(const auto &x_5234) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5235) {
    auto x_5920 = [&](const auto &x_5238) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5239) {
        if (x_5238->meta->pass_0_proc_inited) {
          x_5238->meta->bb_0_has_bb_dirtied = true;
          x_5238->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5238);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_5234->next == nullptr) {
      auto x_5922 = x_5920;
      OptionMatch(
          x_5234->parent, [&](const auto &x_5237) { return MakeUnit(); },
          [&](const auto &x_5236) {
            auto x_5924 = x_5922;
            x_5924(x_5236);
            return MakeUnit();
          });
    }
    auto x_5921 = [&](const auto &x_5242) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5243) {
        if (x_5242->meta->pass_0_proc_inited) {
          x_5242->meta->bb_0_has_bb_dirtied = true;
          x_5242->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5242);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5234->next, [&](const auto &x_5241) { return MakeUnit(); },
        [&](const auto &x_5240) {
          auto x_5923 = x_5921;
          x_5923(x_5240);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4399(const auto &x_5244) {
  if (x_5244->prev != nullptr) {
    if (x_5244->var_line_break) {
      return plus((x_5244->prev)->var_finished_intrinsic_height_sum,
                  plus((x_5244->prev)->var_intrinsic_current_line_height, x_5244->var_intrinsic_height_external));
    } else {
      return (x_5244->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_5244->var_line_break) {
      return x_5244->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4397(const auto &x_5273) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5274) {
    auto x_5925 = [&](const auto &x_5277) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5278) {
        if (x_5277->meta->pass_0_proc_inited) {
          x_5277->meta->bb_0_has_bb_dirtied = true;
          x_5277->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5277);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_5273->next == nullptr) {
      auto x_5927 = x_5925;
      OptionMatch(
          x_5273->parent, [&](const auto &x_5276) { return MakeUnit(); },
          [&](const auto &x_5275) {
            auto x_5929 = x_5927;
            x_5929(x_5275);
            return MakeUnit();
          });
    }
    auto x_5926 = [&](const auto &x_5281) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5282) {
        if (x_5281->meta->pass_0_proc_inited) {
          x_5281->meta->bb_0_has_bb_dirtied = true;
          x_5281->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5281);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5273->next, [&](const auto &x_5280) { return MakeUnit(); },
        [&](const auto &x_5279) {
          auto x_5928 = x_5926;
          x_5928(x_5279);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4394(const auto &x_5283) {
  if (x_5283->var_line_break) {
    return 0.;
  } else {
    return max(x_5283->var_intrinsic_height_external,
               (x_5283->prev != nullptr) ? ((x_5283->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4392(const auto &x_5296) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5297) {
    auto x_5930 = [&](const auto &x_5300) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5301) {
        if (x_5300->meta->pass_0_proc_inited) {
          x_5300->meta->bb_0_has_bb_dirtied = true;
          x_5300->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5300);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5296->next, [&](const auto &x_5299) { return MakeUnit(); },
        [&](const auto &x_5298) {
          auto x_5932 = x_5930;
          x_5932(x_5298);
          return MakeUnit();
        });
    auto x_5931 = [&](const auto &x_5304) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5305) {
        if (x_5304->meta->pass_1_proc_inited) {
          x_5304->meta->bb_2_has_bb_dirtied = true;
          x_5304->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5304);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_5296->next == nullptr) {
      auto x_5933 = x_5931;
      OptionMatch(
          x_5296->parent, [&](const auto &x_5303) { return MakeUnit(); },
          [&](const auto &x_5302) {
            auto x_5934 = x_5933;
            x_5934(x_5302);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4389(const auto &x_5306) {
  return plus((x_5306->prev != nullptr) ? ((x_5306->prev)->var_intrinsic_height_sum) : (0.),
              x_5306->var_intrinsic_height_external);
}
Unit var_modified_x_4387(const auto &x_5315) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5316) {
    auto x_5935 = [&](const auto &x_5317) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5318) {
        if (x_5317->meta->pass_0_proc_inited) {
          x_5317->meta->bb_0_has_bb_dirtied = true;
          x_5317->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5317);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5935(x_5315);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4384(const auto &x_5319) {
  if (eq(x_5319->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5319->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4382(const auto &x_5328) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5329) {
    auto x_5936 = [&](const auto &x_5330) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5331) {
        if (x_5330->meta->pass_0_proc_inited) {
          x_5330->meta->bb_0_has_bb_dirtied = true;
          x_5330->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5330);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5936(x_5328);
    MakeUnit();
    auto x_5937 = [&](const auto &x_5332) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5333) {
        if (x_5332->meta->pass_1_proc_inited) {
          x_5332->meta->bb_2_has_bb_dirtied = true;
          x_5332->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5332);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5937(x_5328);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4379(const auto &x_5334) {
  if (eq(x_5334->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_5334->var_inside_svg) {
      return 0.;
    } else {
      if (x_5334->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5334->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_5334->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_5334->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_5334->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_5334->var_height_expr.r.a0;
          } else {
            if (x_5334->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_5334->var_height_expr.r.a0;
            } else {
              return x_5334->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_5334->var_children_intrinsic_height,
              (eq(x_5334->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_5334->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5334->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_5334->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_5334->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_5334->var_has_height_attr &&
                                                  (x_5334->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_5334->var_height_attr_expr.r.a0)
                                                     : ((x_5334->has_attr_viewBox)
                                                            ? (x_5334->attr_viewBox.r.a3)
                                                            : (mult((x_5334->attr_viewBox.r.a3),
                                                                    divide(x_5334->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_5334->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_5334->var_has_height_attr)
                                                            ? (x_5334->var_height_attr_expr.r.a0)
                                                            : ((x_5334->has_attr_image_height &&
                                                                (!x_5334->var_has_width_attr))
                                                                   ? (int_to_float(x_5334->attr_image_height))
                                                                   : ((neq(x_5334->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_5334->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_5334->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_5334->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_5334->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_5334->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4377(const auto &x_5479) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5480) {
    auto x_5938 = [&](const auto &x_5481) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5482) {
        if (x_5481->meta->pass_1_proc_inited) {
          x_5481->meta->bb_2_has_bb_dirtied = true;
          x_5481->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5481);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5938(x_5479);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4374(const auto &x_5483) {
  if (eq(x_5483->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5483->var_inside_svg || x_5483->var_disabled)) {
    return true;
  } else {
    if ((x_5483->parent != nullptr) && (x_5483->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_5483->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5483->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5483->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5483->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_5483->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4372(const auto &x_5532) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5533) {
    auto x_5939 = [&](const auto &x_5534) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5535) {
        if (x_5534->meta->pass_0_proc_inited) {
          x_5534->meta->bb_0_has_bb_dirtied = true;
          x_5534->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5534);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5939(x_5532);
    MakeUnit();
    auto x_5940 = [&](const auto &x_5536) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5537) {
        if (x_5536->meta->pass_1_proc_inited) {
          x_5536->meta->bb_2_has_bb_dirtied = true;
          x_5536->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5536);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5940(x_5532);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4369(const auto &x_5538) {
  if (x_5538->has_prop_height) {
    return x_5538->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4367(const auto &x_5541) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5542) {
    auto x_5941 = [&](const auto &x_5543) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5544) {
        if (x_5543->meta->pass_0_proc_inited) {
          x_5543->meta->bb_0_has_bb_dirtied = true;
          x_5543->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5543);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5941(x_5541);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4364(const auto &x_5545) {
  if (x_5545->last != nullptr) {
    return plus((x_5545->last)->var_finished_intrinsic_height_sum, (x_5545->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4362(const auto &x_5554) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5555) {
    auto x_5942 = [&](const auto &x_5558) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5559) {
        if (x_5558->meta->pass_0_proc_inited) {
          x_5558->meta->bb_0_has_bb_dirtied = true;
          x_5558->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5558);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5554->next, [&](const auto &x_5557) { return MakeUnit(); },
        [&](const auto &x_5556) {
          auto x_5944 = x_5942;
          x_5944(x_5556);
          return MakeUnit();
        });
    auto x_5943 = [&](const auto &x_5562) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5563) {
        if (x_5562->meta->pass_1_proc_inited) {
          x_5562->meta->bb_2_has_bb_dirtied = true;
          x_5562->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5562);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_5554->next == nullptr) {
      auto x_5945 = x_5943;
      OptionMatch(
          x_5554->parent, [&](const auto &x_5561) { return MakeUnit(); },
          [&](const auto &x_5560) {
            auto x_5946 = x_5945;
            x_5946(x_5560);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4359(const auto &x_5564) {
  return plus((x_5564->prev != nullptr) ? ((x_5564->prev)->var_intrinsic_width_sum) : (0.),
              x_5564->var_intrinsic_width_external);
}
Unit var_modified_x_4357(const auto &x_5573) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5574) {
    auto x_5947 = [&](const auto &x_5577) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5578) {
        if (x_5577->meta->pass_0_proc_inited) {
          x_5577->meta->bb_0_has_bb_dirtied = true;
          x_5577->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5577);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    if (x_5573->next == nullptr) {
      auto x_5949 = x_5947;
      OptionMatch(
          x_5573->parent, [&](const auto &x_5576) { return MakeUnit(); },
          [&](const auto &x_5575) {
            auto x_5951 = x_5949;
            x_5951(x_5575);
            return MakeUnit();
          });
    }
    auto x_5948 = [&](const auto &x_5581) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5582) {
        if (x_5581->meta->pass_0_proc_inited) {
          x_5581->meta->bb_0_has_bb_dirtied = true;
          x_5581->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5581);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5573->next, [&](const auto &x_5580) { return MakeUnit(); },
        [&](const auto &x_5579) {
          auto x_5950 = x_5948;
          x_5950(x_5579);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4354(const auto &x_5583) {
  return max(x_5583->var_intrinsic_current_line_width,
             (x_5583->prev != nullptr) ? ((x_5583->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4352(const auto &x_5592) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5593) {
    auto x_5952 = [&](const auto &x_5594) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5595) {
        if (x_5594->meta->pass_0_proc_inited) {
          x_5594->meta->bb_0_has_bb_dirtied = true;
          x_5594->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5594);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5952(x_5592);
    MakeUnit();
    auto x_5953 = [&](const auto &x_5598) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5599) {
        if (x_5598->meta->pass_0_proc_inited) {
          x_5598->meta->bb_0_has_bb_dirtied = true;
          x_5598->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5598);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    OptionMatch(
        x_5592->next, [&](const auto &x_5597) { return MakeUnit(); },
        [&](const auto &x_5596) {
          auto x_5954 = x_5953;
          x_5954(x_5596);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4349(const auto &x_5600) {
  return plus(x_5600->var_intrinsic_width_external,
              ((x_5600->prev != nullptr) && (!(x_5600->prev)->var_line_break))
                  ? ((x_5600->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_4347(const auto &x_5613) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5614) {
    auto x_5955 = [&](const auto &x_5615) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5616) {
        if (x_5615->meta->pass_0_proc_inited) {
          x_5615->meta->bb_0_has_bb_dirtied = true;
          x_5615->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5615);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5955(x_5613);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4344(const auto &x_5617) {
  if (eq(x_5617->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5617->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_4342(const auto &x_5626) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5627) {
    auto x_5956 = [&](const auto &x_5628) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5629) {
        if (x_5628->meta->pass_0_proc_inited) {
          x_5628->meta->bb_0_has_bb_dirtied = true;
          x_5628->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5628);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5956(x_5626);
    MakeUnit();
    auto x_5957 = [&](const auto &x_5630) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5631) {
        if (x_5630->meta->pass_1_proc_inited) {
          x_5630->meta->bb_2_has_bb_dirtied = true;
          x_5630->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5630);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5957(x_5626);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4339(const auto &x_5632) {
  if (eq(x_5632->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_5632->var_inside_svg) {
      return 0.;
    } else {
      if (x_5632->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5632->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_5632->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_5632->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_5632->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_5632->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_5632->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_5632->var_width_expr.r.a0;
          } else {
            return x_5632->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_5632->var_children_intrinsic_width,
              (eq(x_5632->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_5632->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5632->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_5632->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_5632->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_5632->var_has_width_attr &&
                                                  (x_5632->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_5632->var_width_attr_expr.r.a0)
                                                     : (((!x_5632->var_has_width_attr) && x_5632->has_attr_viewBox)
                                                            ? (x_5632->attr_viewBox.r.a2)
                                                            : (mult((x_5632->attr_viewBox.r.a2),
                                                                    divide(x_5632->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_5632->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_5632->var_has_width_attr)
                                                            ? (x_5632->var_width_attr_expr.r.a0)
                                                            : ((x_5632->has_attr_image_width &&
                                                                (!x_5632->var_has_height_attr))
                                                                   ? (int_to_float(x_5632->attr_image_width))
                                                                   : ((neq(x_5632->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_5632->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_5632->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_5632->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_5632->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_5632->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4337(const auto &x_5785) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5786) {
    auto x_5958 = [&](const auto &x_5787) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5788) {
        if (x_5787->meta->pass_0_proc_inited) {
          x_5787->meta->bb_0_has_bb_dirtied = true;
          x_5787->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5787);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5958(x_5785);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4334(const auto &x_5789) {
  if (x_5789->last != nullptr) {
    return (x_5789->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_4332(const auto &x_5794) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5795) {
    auto x_5959 = [&](const auto &x_5796) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5797) {
        if (x_5796->meta->pass_1_proc_inited) {
          x_5796->meta->bb_2_has_bb_dirtied = true;
          x_5796->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5796);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5959(x_5794);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4329(const auto &x_5798) {
  if (eq(x_5798->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5798->var_inside_svg || x_5798->var_disabled)) {
    return true;
  } else {
    if ((x_5798->parent != nullptr) && (x_5798->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5798->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5798->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5798->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5798->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_5798->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4327(const auto &x_5847) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5848) {
    auto x_5960 = [&](const auto &x_5849) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5850) {
        if (x_5849->meta->pass_0_proc_inited) {
          x_5849->meta->bb_0_has_bb_dirtied = true;
          x_5849->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5849);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5960(x_5847);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4324(const auto &x_5851) {
  if (eq(x_5851->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_5851->var_inside_svg) {
      return true;
    } else {
      if (x_5851->var_disabled) {
        return true;
      } else {if ( eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_5851->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_4322(const auto &x_5864) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5865) {
    auto x_5961 = [&](const auto &x_5866) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5867) {
        if (x_5866->meta->pass_0_proc_inited) {
          x_5866->meta->bb_0_has_bb_dirtied = true;
          x_5866->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_5866);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5961(x_5864);
    MakeUnit();
    auto x_5962 = [&](const auto &x_5868) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5869) {
        if (x_5868->meta->pass_1_proc_inited) {
          x_5868->meta->bb_2_has_bb_dirtied = true;
          x_5868->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_5868);
        } else {
          return MetaWriteMetric();
        }
      })));
    };
    x_5962(x_5864);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4319(const auto &x_5870) {
  if (x_5870->has_prop_width) {
    return x_5870->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_4246(const auto &x_4317) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4318) {
    WriteMetric();
    auto x_4320 = eval_expr_x_4319(x_4317);
    if (x_4317->has_var_width_expr) {
      auto x_4321 = x_4317->var_width_expr;
      if (!EqualValue(x_4321, x_4320)) {
        var_modified_x_4322(x_4317);
      }
    }
    x_4317->has_var_width_expr = true;
    x_4317->var_width_expr = AsDEString(x_4320);
    WriteMetric();
    auto x_4325 = eval_expr_x_4324(x_4317);
    if (x_4317->has_var_is_default_case) {
      auto x_4326 = x_4317->var_is_default_case;
      if (!EqualValue(x_4326, x_4325)) {
        var_modified_x_4327(x_4317);
      }
    }
    x_4317->has_var_is_default_case = true;
    x_4317->var_is_default_case = Asbool(x_4325);
    WriteMetric();
    auto x_4330 = eval_expr_x_4329(x_4317);
    if (x_4317->has_var_intrinsic_width_is_width) {
      auto x_4331 = x_4317->var_intrinsic_width_is_width;
      if (!EqualValue(x_4331, x_4330)) {
        var_modified_x_4332(x_4317);
      }
    }
    x_4317->has_var_intrinsic_width_is_width = true;
    x_4317->var_intrinsic_width_is_width = Asbool(x_4330);
    WriteMetric();
    auto x_4335 = eval_expr_x_4334(x_4317);
    if (x_4317->has_var_children_intrinsic_width) {
      auto x_4336 = x_4317->var_children_intrinsic_width;
      if (!EqualValue(x_4336, x_4335)) {
        var_modified_x_4337(x_4317);
      }
    }
    x_4317->has_var_children_intrinsic_width = true;
    x_4317->var_children_intrinsic_width = Asdouble(x_4335);
    WriteMetric();
    auto x_4340 = eval_expr_x_4339(x_4317);
    if (x_4317->has_var_intrinsic_width_internal) {
      auto x_4341 = x_4317->var_intrinsic_width_internal;
      if (!EqualValue(x_4341, x_4340)) {
        var_modified_x_4342(x_4317);
      }
    }
    x_4317->has_var_intrinsic_width_internal = true;
    x_4317->var_intrinsic_width_internal = Asdouble(x_4340);
    WriteMetric();
    auto x_4345 = eval_expr_x_4344(x_4317);
    if (x_4317->has_var_intrinsic_width_external) {
      auto x_4346 = x_4317->var_intrinsic_width_external;
      if (!EqualValue(x_4346, x_4345)) {
        var_modified_x_4347(x_4317);
      }
    }
    x_4317->has_var_intrinsic_width_external = true;
    x_4317->var_intrinsic_width_external = Asdouble(x_4345);
    WriteMetric();
    auto x_4350 = eval_expr_x_4349(x_4317);
    if (x_4317->has_var_intrinsic_current_line_width) {
      auto x_4351 = x_4317->var_intrinsic_current_line_width;
      if (!EqualValue(x_4351, x_4350)) {
        var_modified_x_4352(x_4317);
      }
    }
    x_4317->has_var_intrinsic_current_line_width = true;
    x_4317->var_intrinsic_current_line_width = Asdouble(x_4350);
    WriteMetric();
    auto x_4355 = eval_expr_x_4354(x_4317);
    if (x_4317->has_var_intrinsic_width_max) {
      auto x_4356 = x_4317->var_intrinsic_width_max;
      if (!EqualValue(x_4356, x_4355)) {
        var_modified_x_4357(x_4317);
      }
    }
    x_4317->has_var_intrinsic_width_max = true;
    x_4317->var_intrinsic_width_max = Asdouble(x_4355);
    WriteMetric();
    auto x_4360 = eval_expr_x_4359(x_4317);
    if (x_4317->has_var_intrinsic_width_sum) {
      auto x_4361 = x_4317->var_intrinsic_width_sum;
      if (!EqualValue(x_4361, x_4360)) {
        var_modified_x_4362(x_4317);
      }
    }
    x_4317->has_var_intrinsic_width_sum = true;
    x_4317->var_intrinsic_width_sum = Asdouble(x_4360);
    WriteMetric();
    auto x_4365 = eval_expr_x_4364(x_4317);
    if (x_4317->has_var_children_intrinsic_height) {
      auto x_4366 = x_4317->var_children_intrinsic_height;
      if (!EqualValue(x_4366, x_4365)) {
        var_modified_x_4367(x_4317);
      }
    }
    x_4317->has_var_children_intrinsic_height = true;
    x_4317->var_children_intrinsic_height = Asdouble(x_4365);
    WriteMetric();
    auto x_4370 = eval_expr_x_4369(x_4317);
    if (x_4317->has_var_height_expr) {
      auto x_4371 = x_4317->var_height_expr;
      if (!EqualValue(x_4371, x_4370)) {
        var_modified_x_4372(x_4317);
      }
    }
    x_4317->has_var_height_expr = true;
    x_4317->var_height_expr = AsDEString(x_4370);
    WriteMetric();
    auto x_4375 = eval_expr_x_4374(x_4317);
    if (x_4317->has_var_intrinsic_height_is_height) {
      auto x_4376 = x_4317->var_intrinsic_height_is_height;
      if (!EqualValue(x_4376, x_4375)) {
        var_modified_x_4377(x_4317);
      }
    }
    x_4317->has_var_intrinsic_height_is_height = true;
    x_4317->var_intrinsic_height_is_height = Asbool(x_4375);
    WriteMetric();
    auto x_4380 = eval_expr_x_4379(x_4317);
    if (x_4317->has_var_intrinsic_height_internal) {
      auto x_4381 = x_4317->var_intrinsic_height_internal;
      if (!EqualValue(x_4381, x_4380)) {
        var_modified_x_4382(x_4317);
      }
    }
    x_4317->has_var_intrinsic_height_internal = true;
    x_4317->var_intrinsic_height_internal = Asdouble(x_4380);
    WriteMetric();
    auto x_4385 = eval_expr_x_4384(x_4317);
    if (x_4317->has_var_intrinsic_height_external) {
      auto x_4386 = x_4317->var_intrinsic_height_external;
      if (!EqualValue(x_4386, x_4385)) {
        var_modified_x_4387(x_4317);
      }
    }
    x_4317->has_var_intrinsic_height_external = true;
    x_4317->var_intrinsic_height_external = Asdouble(x_4385);
    WriteMetric();
    auto x_4390 = eval_expr_x_4389(x_4317);
    if (x_4317->has_var_intrinsic_height_sum) {
      auto x_4391 = x_4317->var_intrinsic_height_sum;
      if (!EqualValue(x_4391, x_4390)) {
        var_modified_x_4392(x_4317);
      }
    }
    x_4317->has_var_intrinsic_height_sum = true;
    x_4317->var_intrinsic_height_sum = Asdouble(x_4390);
    WriteMetric();
    auto x_4395 = eval_expr_x_4394(x_4317);
    if (x_4317->has_var_intrinsic_current_line_height) {
      auto x_4396 = x_4317->var_intrinsic_current_line_height;
      if (!EqualValue(x_4396, x_4395)) {
        var_modified_x_4397(x_4317);
      }
    }
    x_4317->has_var_intrinsic_current_line_height = true;
    x_4317->var_intrinsic_current_line_height = Asdouble(x_4395);
    WriteMetric();
    auto x_4400 = eval_expr_x_4399(x_4317);
    if (x_4317->has_var_finished_intrinsic_height_sum) {
      auto x_4401 = x_4317->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_4401, x_4400)) {
        var_modified_x_4402(x_4317);
      }
    }
    x_4317->has_var_finished_intrinsic_height_sum = true;
    x_4317->var_finished_intrinsic_height_sum = Asdouble(x_4400);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4244(const auto &x_4404) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4405) {
    WriteMetric();
    auto x_4407 = eval_expr_x_4406(x_4404);
    if (x_4404->has_var_display) {
      auto x_4408 = x_4404->var_display;
      if (!EqualValue(x_4408, x_4407)) {
        var_modified_x_4409(x_4404);
      }
    }
    x_4404->has_var_display = true;
    x_4404->var_display = AsDEString(x_4407);
    WriteMetric();
    auto x_4412 = eval_expr_x_4411(x_4404);
    if (x_4404->has_var_position) {
      auto x_4413 = x_4404->var_position;
      if (!EqualValue(x_4413, x_4412)) {
        var_modified_x_4414(x_4404);
      }
    }
    x_4404->has_var_position = true;
    x_4404->var_position = AsDEString(x_4412);
    WriteMetric();
    auto x_4417 = eval_expr_x_4416(x_4404);
    if (x_4404->has_var_flex_grow) {
      auto x_4418 = x_4404->var_flex_grow;
      if (!EqualValue(x_4418, x_4417)) {
        var_modified_x_4419(x_4404);
      }
    }
    x_4404->has_var_flex_grow = true;
    x_4404->var_flex_grow = Asdouble(x_4417);
    WriteMetric();
    auto x_4422 = eval_expr_x_4421(x_4404);
    if (x_4404->has_var_flex_shrink) {
      auto x_4423 = x_4404->var_flex_shrink;
      if (!EqualValue(x_4423, x_4422)) {
        var_modified_x_4424(x_4404);
      }
    }
    x_4404->has_var_flex_shrink = true;
    x_4404->var_flex_shrink = Asdouble(x_4422);
    WriteMetric();
    auto x_4427 = eval_expr_x_4426(x_4404);
    if (x_4404->has_var_flex_grow_sum) {
      auto x_4428 = x_4404->var_flex_grow_sum;
      if (!EqualValue(x_4428, x_4427)) {
        var_modified_x_4429(x_4404);
      }
    }
    x_4404->has_var_flex_grow_sum = true;
    x_4404->var_flex_grow_sum = Asdouble(x_4427);
    WriteMetric();
    auto x_4432 = eval_expr_x_4431(x_4404);
    if (x_4404->has_var_flex_shrink_sum) {
      auto x_4433 = x_4404->var_flex_shrink_sum;
      if (!EqualValue(x_4433, x_4432)) {
        var_modified_x_4434(x_4404);
      }
    }
    x_4404->has_var_flex_shrink_sum = true;
    x_4404->var_flex_shrink_sum = Asdouble(x_4432);
    WriteMetric();
    auto x_4437 = eval_expr_x_4436(x_4404);
    if (x_4404->has_var_flex_direction) {
      auto x_4438 = x_4404->var_flex_direction;
      if (!EqualValue(x_4438, x_4437)) {
        var_modified_x_4439(x_4404);
      }
    }
    x_4404->has_var_flex_direction = true;
    x_4404->var_flex_direction = AsDEString(x_4437);
    WriteMetric();
    auto x_4442 = eval_expr_x_4441(x_4404);
    if (x_4404->has_var_is_flex_row) {
      auto x_4443 = x_4404->var_is_flex_row;
      if (!EqualValue(x_4443, x_4442)) {
        var_modified_x_4444(x_4404);
      }
    }
    x_4404->has_var_is_flex_row = true;
    x_4404->var_is_flex_row = Asbool(x_4442);
    WriteMetric();
    auto x_4447 = eval_expr_x_4446(x_4404);
    if (x_4404->has_var_is_flex_column) {
      auto x_4448 = x_4404->var_is_flex_column;
      if (!EqualValue(x_4448, x_4447)) {
        var_modified_x_4449(x_4404);
      }
    }
    x_4404->has_var_is_flex_column = true;
    x_4404->var_is_flex_column = Asbool(x_4447);
    WriteMetric();
    auto x_4452 = eval_expr_x_4451(x_4404);
    if (x_4404->has_var_width_attr_expr) {
      auto x_4453 = x_4404->var_width_attr_expr;
      if (!EqualValue(x_4453, x_4452)) {
        var_modified_x_4454(x_4404);
      }
    }
    x_4404->has_var_width_attr_expr = true;
    x_4404->var_width_attr_expr = AsDEString(x_4452);
    WriteMetric();
    auto x_4457 = eval_expr_x_4456(x_4404);
    if (x_4404->has_var_has_width_attr) {
      auto x_4458 = x_4404->var_has_width_attr;
      if (!EqualValue(x_4458, x_4457)) {
        var_modified_x_4459(x_4404);
      }
    }
    x_4404->has_var_has_width_attr = true;
    x_4404->var_has_width_attr = Asbool(x_4457);
    WriteMetric();
    auto x_4462 = eval_expr_x_4461(x_4404);
    if (x_4404->has_var_height_attr_expr) {
      auto x_4463 = x_4404->var_height_attr_expr;
      if (!EqualValue(x_4463, x_4462)) {
        var_modified_x_4464(x_4404);
      }
    }
    x_4404->has_var_height_attr_expr = true;
    x_4404->var_height_attr_expr = AsDEString(x_4462);
    WriteMetric();
    auto x_4467 = eval_expr_x_4466(x_4404);
    if (x_4404->has_var_has_height_attr) {
      auto x_4468 = x_4404->var_has_height_attr;
      if (!EqualValue(x_4468, x_4467)) {
        var_modified_x_4469(x_4404);
      }
    }
    x_4404->has_var_has_height_attr = true;
    x_4404->var_has_height_attr = Asbool(x_4467);
    WriteMetric();
    auto x_4472 = eval_expr_x_4471(x_4404);
    if (x_4404->has_var_is_svg_block) {
      auto x_4473 = x_4404->var_is_svg_block;
      if (!EqualValue(x_4473, x_4472)) {
        var_modified_x_4474(x_4404);
      }
    }
    x_4404->has_var_is_svg_block = true;
    x_4404->var_is_svg_block = Asbool(x_4472);
    WriteMetric();
    auto x_4477 = eval_expr_x_4476(x_4404);
    if (x_4404->has_var_inside_svg) {
      auto x_4478 = x_4404->var_inside_svg;
      if (!EqualValue(x_4478, x_4477)) {
        var_modified_x_4479(x_4404);
      }
    }
    x_4404->has_var_inside_svg = true;
    x_4404->var_inside_svg = Asbool(x_4477);
    WriteMetric();
    auto x_4482 = eval_expr_x_4481(x_4404);
    if (x_4404->has_var_disabled) {
      auto x_4483 = x_4404->var_disabled;
      if (!EqualValue(x_4483, x_4482)) {
        var_modified_x_4484(x_4404);
      }
    }
    x_4404->has_var_disabled = true;
    x_4404->var_disabled = Asbool(x_4482);
    WriteMetric();
    auto x_4487 = eval_expr_x_4486(x_4404);
    if (x_4404->has_var_visible) {
      auto x_4488 = x_4404->var_visible;
      if (!EqualValue(x_4488, x_4487)) {
        var_modified_x_4489(x_4404);
      }
    }
    x_4404->has_var_visible = true;
    x_4404->var_visible = Asbool(x_4487);
    WriteMetric();
    auto x_4492 = eval_expr_x_4491(x_4404);
    if (x_4404->has_var_line_break) {
      auto x_4493 = x_4404->var_line_break;
      if (!EqualValue(x_4493, x_4492)) {
        var_modified_x_4494(x_4404);
      }
    }
    x_4404->has_var_line_break = true;
    x_4404->var_line_break = Asbool(x_4492);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4240(const auto &x_4496) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4497) {
    WriteMetric();
    auto x_4499 = eval_expr_x_4498(x_4496);
    if (x_4496->has_var_box_width) {
      auto x_4500 = x_4496->var_box_width;
      if (!EqualValue(x_4500, x_4499)) {
        var_modified_x_4501(x_4496);
      }
    }
    x_4496->has_var_box_width = true;
    x_4496->var_box_width = Asdouble(x_4499);
    WriteMetric();
    auto x_4504 = eval_expr_x_4503(x_4496);
    if (x_4496->has_var_box_height) {
      auto x_4505 = x_4496->var_box_height;
      if (!EqualValue(x_4505, x_4504)) {
        var_modified_x_4506(x_4496);
      }
    }
    x_4496->has_var_box_height = true;
    x_4496->var_box_height = Asdouble(x_4504);
    WriteMetric();
    auto x_4509 = eval_expr_x_4508(x_4496);
    if (x_4496->has_var_left_over) {
      auto x_4510 = x_4496->var_left_over;
      if (!EqualValue(x_4510, x_4509)) {
        var_modified_x_4511(x_4496);
      }
    }
    x_4496->has_var_left_over = true;
    x_4496->var_left_over = Asdouble(x_4509);
    WriteMetric();
    auto x_4514 = eval_expr_x_4513(x_4496);
    if (x_4496->has_var_flex_amount) {
      auto x_4515 = x_4496->var_flex_amount;
      if (!EqualValue(x_4515, x_4514)) {
        var_modified_x_4516(x_4496);
      }
    }
    x_4496->has_var_flex_amount = true;
    x_4496->var_flex_amount = Asdouble(x_4514);
    WriteMetric();
    auto x_4519 = eval_expr_x_4518(x_4496);
    if (x_4496->has_var_flex_unit) {
      auto x_4520 = x_4496->var_flex_unit;
      if (!EqualValue(x_4520, x_4519)) {
        var_modified_x_4521(x_4496);
      }
    }
    x_4496->has_var_flex_unit = true;
    x_4496->var_flex_unit = Asdouble(x_4519);
    WriteMetric();
    auto x_4524 = eval_expr_x_4523(x_4496);
    if (x_4496->has_var_x) {
      auto x_4525 = x_4496->var_x;
      if (!EqualValue(x_4525, x_4524)) {
        var_modified_x_4526(x_4496);
      }
    }
    x_4496->has_var_x = true;
    x_4496->var_x = Asdouble(x_4524);
    WriteMetric();
    auto x_4529 = eval_expr_x_4528(x_4496);
    if (x_4496->has_var_width_internal) {
      auto x_4530 = x_4496->var_width_internal;
      if (!EqualValue(x_4530, x_4529)) {
        var_modified_x_4531(x_4496);
      }
    }
    x_4496->has_var_width_internal = true;
    x_4496->var_width_internal = Asdouble(x_4529);
    WriteMetric();
    auto x_4534 = eval_expr_x_4533(x_4496);
    if (x_4496->has_var_width_external) {
      auto x_4535 = x_4496->var_width_external;
      if (!EqualValue(x_4535, x_4534)) {
        var_modified_x_4536(x_4496);
      }
    }
    x_4496->has_var_width_external = true;
    x_4496->var_width_external = Asdouble(x_4534);
    WriteMetric();
    auto x_4539 = eval_expr_x_4538(x_4496);
    if (x_4496->has_var_y) {
      auto x_4540 = x_4496->var_y;
      if (!EqualValue(x_4540, x_4539)) {
        var_modified_x_4541(x_4496);
      }
    }
    x_4496->has_var_y = true;
    x_4496->var_y = Asdouble(x_4539);
    WriteMetric();
    auto x_4544 = eval_expr_x_4543(x_4496);
    if (x_4496->has_var_height_internal) {
      auto x_4545 = x_4496->var_height_internal;
      if (!EqualValue(x_4545, x_4544)) {
        var_modified_x_4546(x_4496);
      }
    }
    x_4496->has_var_height_internal = true;
    x_4496->var_height_internal = Asdouble(x_4544);
    WriteMetric();
    auto x_4549 = eval_expr_x_4548(x_4496);
    if (x_4496->has_var_height_external) {
      auto x_4550 = x_4496->var_height_external;
      if (!EqualValue(x_4550, x_4549)) {
        var_modified_x_4551(x_4496);
      }
    }
    x_4496->has_var_height_external = true;
    x_4496->var_height_external = Asdouble(x_4549);
    WriteMetric();
    auto x_4554 = eval_expr_x_4553(x_4496);
    if (x_4496->has_var_line_height) {
      auto x_4555 = x_4496->var_line_height;
      if (!EqualValue(x_4555, x_4554)) {
        var_modified_x_4556(x_4496);
      }
    }
    x_4496->has_var_line_height = true;
    x_4496->var_line_height = Asdouble(x_4554);
    return MakeUnit();
  })));
}
Unit x_4558(const auto &x_4559) {
  MetaWriteMetric();
  if (!x_4559->meta->pass_1_recursive_proc_dirtied) {
    x_4559->meta->pass_1_has_recursive_proc_dirtied = true;
    x_4559->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_4559->parent, [&](const auto &x_4561) { return MakeUnit(); },
        [&](const auto &x_4560) { return x_4558(x_4560); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_4175(const auto &x_4559) { return x_4558(x_4559); }
Unit x_4562(const auto &x_4563) {
  MetaWriteMetric();
  if (!x_4563->meta->pass_0_recursive_proc_dirtied) {
    x_4563->meta->pass_0_has_recursive_proc_dirtied = true;
    x_4563->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_4563->parent, [&](const auto &x_4565) { return MakeUnit(); },
        [&](const auto &x_4564) { return x_4562(x_4564); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_4083(const auto &x_4563) { return x_4562(x_4563); }
Unit x_4050(const auto &x_4051, const auto &x_4052, const auto &x_4053) {
  auto x_4054 = ListHeadExn(x_4051);
  auto x_4055 = ListTailExn(x_4051);
  if (ListIsEmpty(x_4055)) {
    auto x_4056 = ListSplitN(x_4052->children, x_4054);
    OutputChangeMetric(IntAdd(layout_size_x_4006(ListNthExn(x_4052->children, x_4054)), layout_size_x_4006(x_4053)));
    x_4052->children = ListAppend(Zro(x_4056), Cons(x_4053, ListTailExn(Fst(x_4056))));
    return MakeUnit();
  } else {
    return x_4050(x_4055, ListNthExn(x_4052->children, x_4054), x_4053);
  }
}
Unit replace_layout_node_x_4049(const auto &x_4051, const auto &x_4052, const auto &x_4053) {
  return x_4050(x_4051, x_4052, x_4053);
}
Unit x_4057(const auto &x_4058, const auto &x_4059, const auto &x_4060) {
  auto x_4061 = ListHeadExn(x_4058);
  auto x_4062 = ListTailExn(x_4058);
  if (ListIsEmpty(x_4062)) {
    OutputChangeMetric(layout_size_x_4006(x_4060));
    auto x_4063 = ListSplitN(x_4059->children, x_4061);
    x_4059->children = ListAppend(Zro(x_4063), Cons(x_4060, Fst(x_4063)));
    return MakeUnit();
  } else {
    return x_4057(x_4062, ListNthExn(x_4059->children, x_4061), x_4060);
  }
}
Unit add_layout_node_x_4047(const auto &x_4058, const auto &x_4059, const auto &x_4060) {
  return x_4057(x_4058, x_4059, x_4060);
}
Unit x_4064(const auto &x_4065, const auto &x_4066, const auto &x_4067) {
  auto x_4068 = ListHeadExn(x_4065);
  auto x_4069 = ListTailExn(x_4065);
  if (ListIsEmpty(x_4069)) {
    OutputChangeMetric(layout_size_x_4006(ListNthExn(x_4066->children, x_4068)));
    auto x_4070 = ListSplitN(x_4066->children, x_4068);
    x_4066->children = ListAppend(Zro(x_4070), ListTailExn(Fst(x_4070)));
    return MakeUnit();
  } else {
    return x_4064(x_4069, ListNthExn(x_4066->children, x_4068), x_4067);
  }
}
Unit remove_layout_node_x_4045(const auto &x_4065, const auto &x_4066, const auto &x_4067) {
  return x_4064(x_4065, x_4066, x_4067);
}
Unit x_4071(const auto &x_4072, const auto &x_4073, const auto &x_4074) {
  return ListMatch(
      x_4072,
      [&](const auto &x_4077) {
        auto x_4078 = Zro(x_4074);
        auto x_4079 = Zro(x_4078);
        auto x_4080 = Fst(x_4078);
        auto x_4081 = Fst(x_4074);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5963 = x_4079;
        if (x_5963 == "attributes") {
          std::string x_5964 = x_4080;
          if (x_5964 == "width") {
            WriteMetric();
            x_4073->has_attr_width = true;
            x_4073->attr_width = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4082) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_1_has_bb_dirtied = true;
                x_4073->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5964 == "image_height") {
            WriteMetric();
            x_4073->has_attr_image_height = true;
            x_4073->attr_image_height = Asint64_t(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4084) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_0_has_bb_dirtied = true;
                x_4073->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5964 == "image_width") {
            WriteMetric();
            x_4073->has_attr_image_width = true;
            x_4073->attr_image_width = Asint64_t(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4085) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_0_has_bb_dirtied = true;
                x_4073->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5964 == "height") {
            WriteMetric();
            x_4073->has_attr_height = true;
            x_4073->attr_height = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4086) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_1_has_bb_dirtied = true;
                x_4073->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5964 == "viewBox") {
            WriteMetric();
            x_4073->has_attr_viewBox = true;
            x_4073->attr_viewBox = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4087) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_0_has_bb_dirtied = true;
                x_4073->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5963 == "properties") {
          std::string x_5965 = x_4080;
          if (x_5965 == "width") {
            WriteMetric();
            x_4073->has_prop_width = true;
            x_4073->prop_width = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4088) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_0_has_bb_dirtied = true;
                x_4073->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5965 == "flex-grow") {
            WriteMetric();
            x_4073->has_prop_flex_grow = true;
            x_4073->prop_flex_grow = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4089) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_1_has_bb_dirtied = true;
                x_4073->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5965 == "height") {
            WriteMetric();
            x_4073->has_prop_height = true;
            x_4073->prop_height = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4090) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_0_has_bb_dirtied = true;
                x_4073->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5965 == "display") {
            WriteMetric();
            x_4073->has_prop_display = true;
            x_4073->prop_display = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4091) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_1_has_bb_dirtied = true;
                x_4073->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5965 == "position") {
            WriteMetric();
            x_4073->has_prop_position = true;
            x_4073->prop_position = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4092) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_1_has_bb_dirtied = true;
                x_4073->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5965 == "flex-shrink") {
            WriteMetric();
            x_4073->has_prop_flex_shrink = true;
            x_4073->prop_flex_shrink = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4093) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_1_has_bb_dirtied = true;
                x_4073->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5965 == "flex-direction") {
            WriteMetric();
            x_4073->has_prop_flex_direction = true;
            x_4073->prop_flex_direction = AsDEString(x_4081);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4094) {
              if (x_4073->meta->pass_0_proc_inited) {
                x_4073->meta->bb_1_has_bb_dirtied = true;
                x_4073->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4073);
              } else {
                return MetaWriteMetric();
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
      [&](const auto &x_4075, const auto &x_4076) {
        return x_4071(x_4076, ListNthExn(x_4073->children, x_4075), x_4074);
      });
}
Unit insert_value_x_4043(const auto &x_4072, const auto &x_4073, const auto &x_4074) {
  return x_4071(x_4072, x_4073, x_4074);
}
Unit x_4095(const auto &x_4096, const auto &x_4097, const auto &x_4098) {
  return ListMatch(
      x_4096,
      [&](const auto &x_4101) {
        auto x_4102 = Zro(x_4098);
        auto x_4103 = Fst(x_4098);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5966 = x_4102;
        if (x_5966 == "attributes") {
          std::string x_5967 = x_4103;
          if (x_5967 == "width") {
            WriteMetric();
            x_4097->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4104) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_1_has_bb_dirtied = true;
                x_4097->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5967 == "image_height") {
            WriteMetric();
            x_4097->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4105) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_0_has_bb_dirtied = true;
                x_4097->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5967 == "image_width") {
            WriteMetric();
            x_4097->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4106) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_0_has_bb_dirtied = true;
                x_4097->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5967 == "height") {
            WriteMetric();
            x_4097->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4107) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_1_has_bb_dirtied = true;
                x_4097->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5967 == "viewBox") {
            WriteMetric();
            x_4097->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4108) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_0_has_bb_dirtied = true;
                x_4097->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5966 == "properties") {
          std::string x_5968 = x_4103;
          if (x_5968 == "width") {
            WriteMetric();
            x_4097->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4109) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_0_has_bb_dirtied = true;
                x_4097->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5968 == "flex-grow") {
            WriteMetric();
            x_4097->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4110) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_1_has_bb_dirtied = true;
                x_4097->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5968 == "height") {
            WriteMetric();
            x_4097->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4111) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_0_has_bb_dirtied = true;
                x_4097->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5968 == "display") {
            WriteMetric();
            x_4097->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4112) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_1_has_bb_dirtied = true;
                x_4097->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5968 == "position") {
            WriteMetric();
            x_4097->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4113) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_1_has_bb_dirtied = true;
                x_4097->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5968 == "flex-shrink") {
            WriteMetric();
            x_4097->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4114) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_1_has_bb_dirtied = true;
                x_4097->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5968 == "flex-direction") {
            WriteMetric();
            x_4097->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4115) {
              if (x_4097->meta->pass_0_proc_inited) {
                x_4097->meta->bb_1_has_bb_dirtied = true;
                x_4097->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4097);
              } else {
                return MetaWriteMetric();
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
      [&](const auto &x_4099, const auto &x_4100) {
        return x_4095(x_4100, ListNthExn(x_4097->children, x_4099), x_4098);
      });
}
Unit delete_value_x_4041(const auto &x_4096, const auto &x_4097, const auto &x_4098) {
  return x_4095(x_4096, x_4097, x_4098);
}
Unit x_4116(const auto &x_4117, const auto &x_4118, const auto &x_4119) {
  return ListMatch(
      x_4117,
      [&](const auto &x_4122) {
        auto x_4123 = Zro(x_4119);
        auto x_4124 = Zro(x_4123);
        auto x_4125 = Fst(x_4123);
        auto x_4126 = Fst(x_4119);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5969 = x_4124;
        if (x_5969 == "attributes") {
          std::string x_5970 = x_4125;
          if (x_5970 == "width") {
            WriteMetric();
            x_4118->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4127) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_attr_width = true;
            x_4118->attr_width = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4128) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5970 == "image_height") {
            WriteMetric();
            x_4118->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4129) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_attr_image_height = true;
            x_4118->attr_image_height = Asint64_t(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4130) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5970 == "image_width") {
            WriteMetric();
            x_4118->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4131) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_attr_image_width = true;
            x_4118->attr_image_width = Asint64_t(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4132) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5970 == "height") {
            WriteMetric();
            x_4118->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4133) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_attr_height = true;
            x_4118->attr_height = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4134) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5970 == "viewBox") {
            WriteMetric();
            x_4118->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4135) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_attr_viewBox = true;
            x_4118->attr_viewBox = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4136) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5969 == "properties") {
          std::string x_5971 = x_4125;
          if (x_5971 == "width") {
            WriteMetric();
            x_4118->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4137) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_prop_width = true;
            x_4118->prop_width = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4138) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5971 == "flex-grow") {
            WriteMetric();
            x_4118->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4139) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_prop_flex_grow = true;
            x_4118->prop_flex_grow = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4140) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5971 == "height") {
            WriteMetric();
            x_4118->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4141) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_prop_height = true;
            x_4118->prop_height = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4142) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_0_has_bb_dirtied = true;
                x_4118->meta->bb_0_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5971 == "display") {
            WriteMetric();
            x_4118->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4143) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_prop_display = true;
            x_4118->prop_display = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4144) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5971 == "position") {
            WriteMetric();
            x_4118->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4145) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_prop_position = true;
            x_4118->prop_position = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4146) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5971 == "flex-shrink") {
            WriteMetric();
            x_4118->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4147) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_prop_flex_shrink = true;
            x_4118->prop_flex_shrink = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4148) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            return MakeUnit();
          } else if (x_5971 == "flex-direction") {
            WriteMetric();
            x_4118->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4149) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
              }
            })));
            WriteMetric();
            x_4118->has_prop_flex_direction = true;
            x_4118->prop_flex_direction = AsDEString(x_4126);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_4150) {
              if (x_4118->meta->pass_0_proc_inited) {
                x_4118->meta->bb_1_has_bb_dirtied = true;
                x_4118->meta->bb_1_bb_dirtied = true;
                return set_recursive_proc_dirtied_x_4083(x_4118);
              } else {
                return MetaWriteMetric();
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
      [&](const auto &x_4120, const auto &x_4121) {
        return x_4116(x_4121, ListNthExn(x_4118->children, x_4120), x_4119);
      });
}
Unit replace_value_x_4039(const auto &x_4117, const auto &x_4118, const auto &x_4119) {
  return x_4116(x_4117, x_4118, x_4119);
}
Unit x_4151(const auto &x_4152, const auto &x_4153, const auto &x_4154) {
  auto x_4155 = ListHeadExn(x_4152);
  auto x_4156 = ListTailExn(x_4152);
  if (ListIsEmpty(x_4156)) {
    InputChangeMetric(IntAdd(node_size_x_4007(ListNthExn(x_4153->children, x_4155)), node_size_x_4007(x_4154)));
    auto x_4157 = ListSplitN(x_4153->children, x_4155);
    auto x_4158 = Zro(x_4157);
    auto x_4159 = Fst(x_4157);
    auto x_4160 = ListHeadExn(x_4159);
    auto x_4161 = ListTailExn(x_4159);
    x_4153->children = ListAppend(x_4158, x_4161);
    OptionMatch(
        x_4160->prev, [&](const auto &x_4163) { return MakeUnit(); },
        [&](const auto &x_4162) {
          x_4162->next = ToPath(x_4160->next);
          return MakeUnit();
        });
    OptionMatch(
        x_4160->next, [&](const auto &x_4165) { return MakeUnit(); },
        [&](const auto &x_4164) {
          x_4164->prev = ToPath(x_4160->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_4158)) {
      x_4153->first = ToPath(ListHead(x_4161));
    }
    if (ListIsEmpty(x_4161)) {
      x_4153->last = ToPath(ListLast(x_4158));
    }
    OptionMatch(
        x_4160->next, [&](const auto &x_4168) { return MakeUnit(); },
        [&](const auto &x_4166) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4167) {
            if (x_4166->meta->pass_0_proc_inited) {
              x_4166->meta->bb_1_has_bb_dirtied = true;
              x_4166->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4166);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_4153->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4169) {
        if (x_4153->meta->pass_0_proc_inited) {
          x_4153->meta->bb_0_has_bb_dirtied = true;
          x_4153->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4161)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4170) {
        if (x_4153->meta->pass_0_proc_inited) {
          x_4153->meta->bb_0_has_bb_dirtied = true;
          x_4153->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4160->next, [&](const auto &x_4173) { return MakeUnit(); },
        [&](const auto &x_4171) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4172) {
            if (x_4171->meta->pass_0_proc_inited) {
              x_4171->meta->bb_0_has_bb_dirtied = true;
              x_4171->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4171);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_4153->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4174) {
        if (x_4153->meta->pass_1_proc_inited) {
          x_4153->meta->bb_2_has_bb_dirtied = true;
          x_4153->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4161)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4176) {
        if (x_4153->meta->pass_1_proc_inited) {
          x_4153->meta->bb_2_has_bb_dirtied = true;
          x_4153->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4160->next, [&](const auto &x_4179) { return MakeUnit(); },
        [&](const auto &x_4177) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4178) {
            if (x_4177->meta->pass_1_proc_inited) {
              x_4177->meta->bb_2_has_bb_dirtied = true;
              x_4177->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4175(x_4177);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MakeUnit();
    auto x_4180 = ListSplitN(x_4153->children, x_4155);
    auto x_4181 = Zro(x_4180);
    auto x_4182 = Fst(x_4180);
    x_4153->children = ListAppend(x_4181, Cons(x_4154, x_4182));
    if (ListIsEmpty(x_4181)) {
      x_4153->first = x_4154.get();
    }
    if (ListIsEmpty(x_4182)) {
      x_4153->last = x_4154.get();
    }
    OptionMatch(
        ListLast(x_4181),
        [&](const auto &x_4184) {
          x_4154->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4183) {
          x_4154->prev = x_4183.get();
          x_4183->next = x_4154.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_4182),
        [&](const auto &x_4186) {
          x_4154->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4185) {
          x_4154->next = x_4185.get();
          x_4185->prev = x_4154.get();
          return MakeUnit();
        });
    x_4154->parent = x_4153.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4187) {
      x_4154->meta->pass_0_has_recursive_proc_dirtied = true;
      x_4154->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_4083(x_4154);
    })));
    OptionMatch(
        x_4154->next, [&](const auto &x_4190) { return MakeUnit(); },
        [&](const auto &x_4188) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4189) {
            if (x_4188->meta->pass_0_proc_inited) {
              x_4188->meta->bb_1_has_bb_dirtied = true;
              x_4188->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4188);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsSingleton(x_4153->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4191) {
        if (x_4153->meta->pass_0_proc_inited) {
          x_4153->meta->bb_0_has_bb_dirtied = true;
          x_4153->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4182)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4192) {
        if (x_4153->meta->pass_0_proc_inited) {
          x_4153->meta->bb_0_has_bb_dirtied = true;
          x_4153->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4154->next, [&](const auto &x_4195) { return MakeUnit(); },
        [&](const auto &x_4193) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4194) {
            if (x_4193->meta->pass_0_proc_inited) {
              x_4193->meta->bb_0_has_bb_dirtied = true;
              x_4193->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4193);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4196) {
      x_4154->meta->pass_1_has_recursive_proc_dirtied = true;
      x_4154->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_4175(x_4154);
    })));
    if (ListIsSingleton(x_4153->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4197) {
        if (x_4153->meta->pass_1_proc_inited) {
          x_4153->meta->bb_2_has_bb_dirtied = true;
          x_4153->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4182)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4198) {
        if (x_4153->meta->pass_1_proc_inited) {
          x_4153->meta->bb_2_has_bb_dirtied = true;
          x_4153->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4153);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4154->next, [&](const auto &x_4201) { return MakeUnit(); },
        [&](const auto &x_4199) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4200) {
            if (x_4199->meta->pass_1_proc_inited) {
              x_4199->meta->bb_2_has_bb_dirtied = true;
              x_4199->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4175(x_4199);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_4151(x_4156, ListNthExn(x_4153->children, x_4155), x_4154);
  }
}
Unit replace_node_x_4037(const auto &x_4152, const auto &x_4153, const auto &x_4154) {
  return x_4151(x_4152, x_4153, x_4154);
}
Unit x_4202(const auto &x_4203) {
  ListIter2(x_4203->children, [&](const auto &x_4204, const auto &x_4205) {
    x_4204->parent = x_4203.get();
    x_4205->parent = x_4203.get();
    x_4204->next = x_4205.get();
    x_4205->prev = x_4204.get();
    x_4202(x_4204);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4203->children),
      [&](const auto &x_4207) {
        x_4203->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4206) {
        x_4203->first = x_4206.get();
        x_4206->parent = x_4203.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4203->children),
      [&](const auto &x_4209) {
        x_4203->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4208) {
        x_4203->last = x_4208.get();
        x_4208->parent = x_4203.get();
        x_4202(x_4208);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_4035(const auto &x_4203) { return x_4202(x_4203); }
Unit x_4210(const auto &x_4211, const auto &x_4212, const auto &x_4213) {
  auto x_4214 = ListHeadExn(x_4211);
  auto x_4215 = ListTailExn(x_4211);
  if (ListIsEmpty(x_4215)) {
    InputChangeMetric(node_size_x_4007(ListNthExn(x_4212->children, x_4214)));
    auto x_4216 = ListSplitN(x_4212->children, x_4214);
    auto x_4217 = Zro(x_4216);
    auto x_4218 = Fst(x_4216);
    auto x_4219 = ListHeadExn(x_4218);
    auto x_4220 = ListTailExn(x_4218);
    x_4212->children = ListAppend(x_4217, x_4220);
    OptionMatch(
        x_4219->prev, [&](const auto &x_4222) { return MakeUnit(); },
        [&](const auto &x_4221) {
          x_4221->next = ToPath(x_4219->next);
          return MakeUnit();
        });
    OptionMatch(
        x_4219->next, [&](const auto &x_4224) { return MakeUnit(); },
        [&](const auto &x_4223) {
          x_4223->prev = ToPath(x_4219->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_4217)) {
      x_4212->first = ToPath(ListHead(x_4220));
    }
    if (ListIsEmpty(x_4220)) {
      x_4212->last = ToPath(ListLast(x_4217));
    }
    OptionMatch(
        x_4219->next, [&](const auto &x_4227) { return MakeUnit(); },
        [&](const auto &x_4225) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4226) {
            if (x_4225->meta->pass_0_proc_inited) {
              x_4225->meta->bb_1_has_bb_dirtied = true;
              x_4225->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4225);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_4212->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4228) {
        if (x_4212->meta->pass_0_proc_inited) {
          x_4212->meta->bb_0_has_bb_dirtied = true;
          x_4212->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4212);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4220)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4229) {
        if (x_4212->meta->pass_0_proc_inited) {
          x_4212->meta->bb_0_has_bb_dirtied = true;
          x_4212->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4212);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4219->next, [&](const auto &x_4232) { return MakeUnit(); },
        [&](const auto &x_4230) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4231) {
            if (x_4230->meta->pass_0_proc_inited) {
              x_4230->meta->bb_0_has_bb_dirtied = true;
              x_4230->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4230);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsEmpty(x_4212->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4233) {
        if (x_4212->meta->pass_1_proc_inited) {
          x_4212->meta->bb_2_has_bb_dirtied = true;
          x_4212->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4212);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4220)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4234) {
        if (x_4212->meta->pass_1_proc_inited) {
          x_4212->meta->bb_2_has_bb_dirtied = true;
          x_4212->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4212);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4219->next, [&](const auto &x_4237) { return MakeUnit(); },
        [&](const auto &x_4235) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4236) {
            if (x_4235->meta->pass_1_proc_inited) {
              x_4235->meta->bb_2_has_bb_dirtied = true;
              x_4235->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4175(x_4235);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_4210(x_4215, ListNthExn(x_4212->children, x_4214), x_4213);
  }
}
Unit remove_node_x_4033(const auto &x_4211, const auto &x_4212, const auto &x_4213) {
  return x_4210(x_4211, x_4212, x_4213);
}
Unit x_4238(const auto &x_4239) {
  MetaReadMetric();
  if (x_4239->meta->pass_1_recursive_proc_dirtied) {
    if (x_4239->meta->pass_1_proc_inited) {
      if (x_4239->meta->bb_2_bb_dirtied) {
        eval_stmts_x_4240(x_4239);
        x_4239->meta->bb_2_has_bb_dirtied = true;
        x_4239->meta->bb_2_bb_dirtied = false;
      }
      ListIter(x_4239->children, [&](const auto &x_4241) { return x_4238(x_4241); });
      MakeUnit();
    } else {
      x_4239->meta->pass_1_proc_inited = true;
      eval_stmts_x_4022(x_4239);
    }
  }
  x_4239->meta->pass_1_has_recursive_proc_dirtied = true;
  x_4239->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_4031(const auto &x_4239) { return x_4238(x_4239); }
Unit x_4242(const auto &x_4243) {
  MetaReadMetric();
  if (x_4243->meta->pass_0_recursive_proc_dirtied) {
    if (x_4243->meta->pass_0_proc_inited) {
      if (x_4243->meta->bb_1_bb_dirtied) {
        eval_stmts_x_4244(x_4243);
        x_4243->meta->bb_1_has_bb_dirtied = true;
        x_4243->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_4243->children, [&](const auto &x_4245) { return x_4242(x_4245); });
      if (x_4243->meta->bb_0_bb_dirtied) {
        eval_stmts_x_4246(x_4243);
        x_4243->meta->bb_0_has_bb_dirtied = true;
        x_4243->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_4243->meta->pass_0_proc_inited = true;
      eval_stmts_x_4020(x_4243);
    }
  }
  x_4243->meta->pass_0_has_recursive_proc_dirtied = true;
  x_4243->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_4030(const auto &x_4243) { return x_4242(x_4243); }
Unit x_4247(const auto &x_4248, const auto &x_4249, const auto &x_4250) {
  auto x_4251 = ListHeadExn(x_4248);
  auto x_4252 = ListTailExn(x_4248);
  if (ListIsEmpty(x_4252)) {
    InputChangeMetric(node_size_x_4007(x_4250));
    auto x_4253 = ListSplitN(x_4249->children, x_4251);
    auto x_4254 = Zro(x_4253);
    auto x_4255 = Fst(x_4253);
    x_4249->children = ListAppend(x_4254, Cons(x_4250, x_4255));
    if (ListIsEmpty(x_4254)) {
      x_4249->first = x_4250.get();
    }
    if (ListIsEmpty(x_4255)) {
      x_4249->last = x_4250.get();
    }
    OptionMatch(
        ListLast(x_4254),
        [&](const auto &x_4257) {
          x_4250->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4256) {
          x_4250->prev = x_4256.get();
          x_4256->next = x_4250.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_4255),
        [&](const auto &x_4259) {
          x_4250->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4258) {
          x_4250->next = x_4258.get();
          x_4258->prev = x_4250.get();
          return MakeUnit();
        });
    x_4250->parent = x_4249.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4260) {
      x_4250->meta->pass_0_has_recursive_proc_dirtied = true;
      x_4250->meta->pass_0_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_4083(x_4250);
    })));
    OptionMatch(
        x_4250->next, [&](const auto &x_4263) { return MakeUnit(); },
        [&](const auto &x_4261) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4262) {
            if (x_4261->meta->pass_0_proc_inited) {
              x_4261->meta->bb_1_has_bb_dirtied = true;
              x_4261->meta->bb_1_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4261);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    if (ListIsSingleton(x_4249->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4264) {
        if (x_4249->meta->pass_0_proc_inited) {
          x_4249->meta->bb_0_has_bb_dirtied = true;
          x_4249->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4249);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4255)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4265) {
        if (x_4249->meta->pass_0_proc_inited) {
          x_4249->meta->bb_0_has_bb_dirtied = true;
          x_4249->meta->bb_0_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4083(x_4249);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4250->next, [&](const auto &x_4268) { return MakeUnit(); },
        [&](const auto &x_4266) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4267) {
            if (x_4266->meta->pass_0_proc_inited) {
              x_4266->meta->bb_0_has_bb_dirtied = true;
              x_4266->meta->bb_0_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4083(x_4266);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4269) {
      x_4250->meta->pass_1_has_recursive_proc_dirtied = true;
      x_4250->meta->pass_1_recursive_proc_dirtied = false;
      return set_recursive_proc_dirtied_x_4175(x_4250);
    })));
    if (ListIsSingleton(x_4249->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4270) {
        if (x_4249->meta->pass_1_proc_inited) {
          x_4249->meta->bb_2_has_bb_dirtied = true;
          x_4249->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4249);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    if (ListIsEmpty(x_4255)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4271) {
        if (x_4249->meta->pass_1_proc_inited) {
          x_4249->meta->bb_2_has_bb_dirtied = true;
          x_4249->meta->bb_2_bb_dirtied = true;
          return set_recursive_proc_dirtied_x_4175(x_4249);
        } else {
          return MetaWriteMetric();
        }
      })));
    }
    OptionMatch(
        x_4250->next, [&](const auto &x_4274) { return MakeUnit(); },
        [&](const auto &x_4272) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4273) {
            if (x_4272->meta->pass_1_proc_inited) {
              x_4272->meta->bb_2_has_bb_dirtied = true;
              x_4272->meta->bb_2_bb_dirtied = true;
              return set_recursive_proc_dirtied_x_4175(x_4272);
            } else {
              return MetaWriteMetric();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_4247(x_4252, ListNthExn(x_4249->children, x_4251), x_4250);
  }
}
Unit add_node_x_4028(const auto &x_4248, const auto &x_4249, const auto &x_4250) {
  return x_4247(x_4248, x_4249, x_4250);
}
Unit x_4275(const auto &x_4276) {
  ListIter2(x_4276->children, [&](const auto &x_4277, const auto &x_4278) {
    x_4277->parent = x_4276.get();
    x_4278->parent = x_4276.get();
    x_4277->next = x_4278.get();
    x_4278->prev = x_4277.get();
    x_4275(x_4277);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4276->children),
      [&](const auto &x_4280) {
        x_4276->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4279) {
        x_4276->first = x_4279.get();
        x_4279->parent = x_4276.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4276->children),
      [&](const auto &x_4282) {
        x_4276->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4281) {
        x_4276->last = x_4281.get();
        x_4281->parent = x_4276.get();
        x_4275(x_4281);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_4026(const auto &x_4276) { return x_4275(x_4276); }
Unit eval_stmts_x_4022(const auto &x_4283) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4284) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4285) {
      x_4283->meta->bb_2_has_bb_dirtied = true;
      x_4283->meta->bb_2_bb_dirtied = false;
      return eval_stmts_x_4240(x_4283);
    })));
    ListIter(x_4283->children, [&](const auto &x_4286) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4287) {
        x_4286->meta->pass_1_proc_inited = true;
        x_4286->meta->pass_1_has_recursive_proc_dirtied = true;
        x_4286->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_4022(x_4286);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4020(const auto &x_4288) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4289) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4290) {
      x_4288->meta->bb_1_has_bb_dirtied = true;
      x_4288->meta->bb_1_bb_dirtied = false;
      return eval_stmts_x_4244(x_4288);
    })));
    ListIter(x_4288->children, [&](const auto &x_4291) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4292) {
        x_4291->meta->pass_0_proc_inited = true;
        x_4291->meta->pass_0_has_recursive_proc_dirtied = true;
        x_4291->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_4020(x_4291);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4293) {
      x_4288->meta->bb_0_has_bb_dirtied = true;
      x_4288->meta->bb_0_bb_dirtied = false;
      return eval_stmts_x_4246(x_4288);
    })));
    return MakeUnit();
  })));
}
Unit x_4294(const auto &x_4295) {
  ListIter2(x_4295->children, [&](const auto &x_4296, const auto &x_4297) {
    x_4296->parent = x_4295.get();
    x_4297->parent = x_4295.get();
    x_4296->next = x_4297.get();
    x_4297->prev = x_4296.get();
    x_4294(x_4296);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4295->children),
      [&](const auto &x_4299) {
        x_4295->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4298) {
        x_4295->first = x_4298.get();
        x_4298->parent = x_4295.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4295->children),
      [&](const auto &x_4301) {
        x_4295->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4300) {
        x_4295->last = x_4300.get();
        x_4300->parent = x_4295.get();
        x_4294(x_4300);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_4016(const auto &x_4295) { return x_4294(x_4295); }
int64_t x_4302(const auto &x_4303) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4303->children, [&](const auto &x_4304) { return x_4302(x_4304); }));
}
int64_t node_size_x_4007(const auto &x_4303) { return x_4302(x_4303); }
int64_t x_4305(const auto &x_4306) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4306->children, [&](const auto &x_4307) { return x_4305(x_4307); }));
}
int64_t layout_size_x_4006(const auto &x_4306) { return x_4305(x_4306); }
LayoutNode x_4308(const auto &x_4309) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_4309)), [&](const auto &x_4310) { return x_4308(x_4310); }));
}
LayoutNode json_to_layout_node_x_4005(const auto &x_4309) { return x_4308(x_4309); }
Node x_4311(const auto &x_4312) {
  return MakeNode(x_4312->name, x_4312->attr, x_4312->prop, x_4312->extern_id,
                  ListMap(x_4312->children, [&](const auto &x_4313) { return x_4311(x_4313); }));
}
Node node_to_fs_node_x_4004(const auto &x_4312) { return x_4311(x_4312); }
Node x_4314(const auto &x_4315) {
  return MakeNode(
      JsonToString(JsonMember("name", x_4315)), JsonToDict(JsonMember("attributes", x_4315)),
      JsonToDict(JsonMember("properties", x_4315)), JsonToInt(JsonMember("id", x_4315)),
      ListMap(JsonToList(JsonMember("children", x_4315)), [&](const auto &x_4316) { return x_4314(x_4316); }));
}
Node json_to_node_aux_x_4003(const auto &x_4315) { return x_4314(x_4315); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_4008) {
    PrintEndline("RUNNING DB_D");
    return WithInFile("command.json", [&](const auto &x_4009) {
      auto x_4010 = MakeRef(static_cast<int64_t>(0));
      auto x_4011 = FreshMetric();
      auto x_4012 = JsonOfString(InputLine(x_4009));
      auto x_4013 = JsonOfString(InputLine(x_4009));
      auto x_4014 = MakeStack();
      PushStack(x_4014, x_4012);
      PushStack(x_4014, x_4013);
      Assert(StringEqual(JsonToString(JsonMember("name", x_4012)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_4013)), "layout_init"));
      auto x_4017 = [&]() {
        auto x_4015 = json_to_node_aux_x_4003(JsonMember("node", x_4012));
        x_4015->parent = nullptr;
        x_4015->prev = nullptr;
        x_4015->next = nullptr;
        set_children_relation_x_4016(x_4015);
        return x_4015;
      }();
      auto x_4018 = json_to_layout_node_x_4005(JsonMember("node", x_4013));
      OutputChangeMetric(layout_size_x_4006(x_4018));
      InputChangeMetric(node_size_x_4007(x_4017));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4019) {
        x_4017->meta->pass_0_proc_inited = true;
        x_4017->meta->pass_0_has_recursive_proc_dirtied = true;
        x_4017->meta->pass_0_recursive_proc_dirtied = false;
        eval_stmts_x_4020(x_4017);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4021) {
        x_4017->meta->pass_1_proc_inited = true;
        x_4017->meta->pass_1_has_recursive_proc_dirtied = true;
        x_4017->meta->pass_1_recursive_proc_dirtied = false;
        eval_stmts_x_4022(x_4017);
        return MakeUnit();
      })));
      JsonToChannel(x_4008, [&]() {
        auto x_5972 = FreshJson();
        WriteJson(x_5972, "name", "DB_D");
        WriteJson(x_5972, "diff_num", ReadRef(x_4010));
        WriteJson(x_5972, "read_count", MetricReadCount());
        WriteJson(x_5972, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_5972, "write_count", MetricWriteCount());
        WriteJson(x_5972, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_5972, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_5972, "input_change_count", MetricInputChangeCount());
        WriteJson(x_5972, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_5972, "overhead_time", MetricOverheadCount());
        WriteJson(x_5972, "eval_time", MetricEvalCount());
        WriteJson(x_5972, "html", "");
        WriteJson(x_5972, "command", StackToList(x_4014));
        return x_5972;
      }());
      OutputString(x_4008, "\n");
      ClearStack(x_4014);
      WriteRef(x_4010, IntAdd(ReadRef(x_4010), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_4009, [&](const auto &x_4023) {
        auto x_4024 = JsonOfString(x_4023);
        PushStack(x_4014, x_4024);
        std::string x_5974 = JsonToString(JsonMember("name", x_4024));
        if (x_5974 == "add") {
          return add_node_x_4028(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4027) { return JsonToInt(x_4027); }),
              x_4017, [&]() {
                auto x_4025 = json_to_node_aux_x_4003(JsonMember("node", x_4024));
                x_4025->parent = nullptr;
                x_4025->prev = nullptr;
                x_4025->next = nullptr;
                set_children_relation_x_4026(x_4025);
                return x_4025;
              }());
        } else if (x_5974 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_4029) {
            recalculate_internal_x_4030(x_4017);
            recalculate_internal_x_4031(x_4017);
            return MakeUnit();
          })));
          JsonToChannel(x_4008, [&]() {
            auto x_5973 = FreshJson();
            WriteJson(x_5973, "name", "DB_D");
            WriteJson(x_5973, "diff_num", ReadRef(x_4010));
            WriteJson(x_5973, "read_count", MetricReadCount());
            WriteJson(x_5973, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_5973, "write_count", MetricWriteCount());
            WriteJson(x_5973, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_5973, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_5973, "input_change_count", MetricInputChangeCount());
            WriteJson(x_5973, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_5973, "overhead_time", MetricOverheadCount());
            WriteJson(x_5973, "eval_time", MetricEvalCount());
            WriteJson(x_5973, "html", "");
            WriteJson(x_5973, "command", StackToList(x_4014));
            return x_5973;
          }());
          OutputString(x_4008, "\n");
          ClearStack(x_4014);
          WriteRef(x_4010, IntAdd(ReadRef(x_4010), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5974 == "remove") {
          return remove_node_x_4033(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4032) { return JsonToInt(x_4032); }),
              x_4017, MakeUnit());
        } else if (x_5974 == "replace") {
          return replace_node_x_4037(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4036) { return JsonToInt(x_4036); }),
              x_4017, [&]() {
                auto x_4034 = json_to_node_aux_x_4003(JsonMember("node", x_4024));
                x_4034->parent = nullptr;
                x_4034->prev = nullptr;
                x_4034->next = nullptr;
                set_children_relation_x_4035(x_4034);
                return x_4034;
              }());
        } else if (x_5974 == "replace_value") {
          return replace_value_x_4039(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4038) { return JsonToInt(x_4038); }),
              x_4017,
              MakePair(MakePair(JsonToString(JsonMember("type", x_4024)), JsonToString(JsonMember("key", x_4024))),
                       JsonToValue(JsonMember("value", x_4024))));
        } else if (x_5974 == "delete_value") {
          return delete_value_x_4041(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4040) { return JsonToInt(x_4040); }),
              x_4017, MakePair(JsonToString(JsonMember("type", x_4024)), JsonToString(JsonMember("key", x_4024))));
        } else if (x_5974 == "insert_value") {
          return insert_value_x_4043(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4042) { return JsonToInt(x_4042); }),
              x_4017,
              MakePair(MakePair(JsonToString(JsonMember("type", x_4024)), JsonToString(JsonMember("key", x_4024))),
                       JsonToValue(JsonMember("value", x_4024))));
        } else if (x_5974 == "layout_remove") {
          return remove_layout_node_x_4045(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4044) { return JsonToInt(x_4044); }),
              x_4018, MakeUnit());
        } else if (x_5974 == "layout_add") {
          return add_layout_node_x_4047(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4046) { return JsonToInt(x_4046); }),
              x_4018, json_to_layout_node_x_4005(JsonMember("node", x_4024)));
        } else if (x_5974 == "layout_replace") {
          return replace_layout_node_x_4049(
              ListMap(JsonToList(JsonMember("path", x_4024)), [&](const auto &x_4048) { return JsonToInt(x_4048); }),
              x_4018, json_to_layout_node_x_4005(JsonMember("node", x_4024)));
        } else if (x_5974 == "layout_info_changed") {
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