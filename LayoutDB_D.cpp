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
Unit var_modified_x_4282(const auto &x_4292);
auto eval_expr_x_4279(const auto &x_4297);
Unit var_modified_x_4277(const auto &x_4314);
auto eval_expr_x_4274(const auto &x_4317);
Unit var_modified_x_4272(const auto &x_4326);
auto eval_expr_x_4269(const auto &x_4330);
Unit var_modified_x_4267(const auto &x_4383);
auto eval_expr_x_4264(const auto &x_4389);
Unit var_modified_x_4262(const auto &x_4414);
auto eval_expr_x_4259(const auto &x_4419);
Unit var_modified_x_4257(const auto &x_4428);
auto eval_expr_x_4254(const auto &x_4432);
Unit var_modified_x_4252(const auto &x_4485);
auto eval_expr_x_4249(const auto &x_4491);
Unit var_modified_x_4247(const auto &x_4512);
auto eval_expr_x_4244(const auto &x_4515);
Unit var_modified_x_4242(const auto &x_4536);
auto eval_expr_x_4239(const auto &x_4539);
Unit var_modified_x_4237(const auto &x_4552);
auto eval_expr_x_4234(const auto &x_4556);
Unit var_modified_x_4232(const auto &x_4577);
auto eval_expr_x_4229(const auto &x_4580);
Unit var_modified_x_4227(const auto &x_4585);
auto eval_expr_x_4224(const auto &x_4588);
Unit var_modified_x_4220(const auto &x_4593);
auto eval_expr_x_4217(const auto &x_4603);
Unit var_modified_x_4215(const auto &x_4680);
auto eval_expr_x_4212(const auto &x_4683);
Unit var_modified_x_4210(const auto &x_4700);
auto eval_expr_x_4207(const auto &x_4705);
Unit var_modified_x_4205(const auto &x_4710);
auto eval_expr_x_4202(const auto &x_4715);
Unit var_modified_x_4200(const auto &x_4724);
auto eval_expr_x_4197(const auto &x_4727);
Unit var_modified_x_4195(const auto &x_4728);
auto eval_expr_x_4192(const auto &x_4731);
Unit var_modified_x_4190(const auto &x_4736);
auto eval_expr_x_4187(const auto &x_4740);
Unit var_modified_x_4185(const auto &x_4751);
auto eval_expr_x_4182(const auto &x_4754);
Unit var_modified_x_4180(const auto &x_4759);
auto eval_expr_x_4177(const auto &x_4763);
Unit var_modified_x_4175(const auto &x_4774);
auto eval_expr_x_4172(const auto &x_4778);
Unit var_modified_x_4170(const auto &x_4803);
auto eval_expr_x_4167(const auto &x_4808);
Unit var_modified_x_4165(const auto &x_4833);
auto eval_expr_x_4162(const auto &x_4836);
Unit var_modified_x_4160(const auto &x_4839);
auto eval_expr_x_4157(const auto &x_4845);
Unit var_modified_x_4155(const auto &x_4854);
auto eval_expr_x_4152(const auto &x_4860);
Unit var_modified_x_4150(const auto &x_4869);
auto eval_expr_x_4147(const auto &x_4873);
Unit var_modified_x_4145(const auto &x_4876);
auto eval_expr_x_4142(const auto &x_4880);
Unit var_modified_x_4140(const auto &x_4883);
auto eval_expr_x_4137(const auto &x_4888);
Unit var_modified_x_4135(const auto &x_4891);
auto eval_expr_x_4132(const auto &x_4896);
Unit var_modified_x_4128(const auto &x_4899);
auto eval_expr_x_4125(const auto &x_4907);
Unit var_modified_x_4123(const auto &x_4936);
auto eval_expr_x_4120(const auto &x_4944);
Unit var_modified_x_4118(const auto &x_4957);
auto eval_expr_x_4115(const auto &x_4965);
Unit var_modified_x_4113(const auto &x_4974);
auto eval_expr_x_4110(const auto &x_4977);
Unit var_modified_x_4108(const auto &x_4986);
auto eval_expr_x_4105(const auto &x_4990);
Unit var_modified_x_4103(const auto &x_5135);
auto eval_expr_x_4100(const auto &x_5138);
Unit var_modified_x_4098(const auto &x_5187);
auto eval_expr_x_4095(const auto &x_5191);
Unit var_modified_x_4093(const auto &x_5194);
auto eval_expr_x_4090(const auto &x_5197);
Unit var_modified_x_4088(const auto &x_5206);
auto eval_expr_x_4085(const auto &x_5214);
Unit var_modified_x_4083(const auto &x_5223);
auto eval_expr_x_4080(const auto &x_5231);
Unit var_modified_x_4078(const auto &x_5240);
auto eval_expr_x_4075(const auto &x_5246);
Unit var_modified_x_4073(const auto &x_5259);
auto eval_expr_x_4070(const auto &x_5262);
Unit var_modified_x_4068(const auto &x_5271);
auto eval_expr_x_4065(const auto &x_5275);
Unit var_modified_x_4063(const auto &x_5428);
auto eval_expr_x_4060(const auto &x_5431);
Unit var_modified_x_4058(const auto &x_5436);
auto eval_expr_x_4055(const auto &x_5439);
Unit var_modified_x_4053(const auto &x_5488);
auto eval_expr_x_4050(const auto &x_5491);
Unit var_modified_x_4048(const auto &x_5504);
auto eval_expr_x_4045(const auto &x_5508);
Unit eval_stmts_x_3986(const auto &x_4043);
Unit eval_stmts_x_3984(const auto &x_4130);
Unit eval_stmts_x_3980(const auto &x_4222);
Unit x_4284(const auto &x_4285);
Unit x_4288(const auto &x_4289);
Unit x_3861(const auto &x_3862, const auto &x_3863, const auto &x_3864);
Unit x_3868(const auto &x_3869, const auto &x_3870, const auto &x_3871);
Unit x_3875(const auto &x_3876, const auto &x_3877, const auto &x_3878);
Unit x_3882(const auto &x_3883, const auto &x_3884, const auto &x_3885);
Unit x_3894(const auto &x_3895, const auto &x_3896, const auto &x_3897);
Unit x_3903(const auto &x_3904, const auto &x_3905, const auto &x_3906);
Unit x_3914(const auto &x_3915, const auto &x_3916, const auto &x_3917);
Unit x_3949(const auto &x_3950);
Unit x_3957(const auto &x_3958, const auto &x_3959, const auto &x_3960);
Unit x_3978(const auto &x_3979);
Unit x_3982(const auto &x_3983);
Unit x_3987(const auto &x_3988, const auto &x_3989, const auto &x_3990);
Unit x_4006(const auto &x_4007);
Unit eval_stmts_x_3833(const auto &x_4014);
Unit eval_stmts_x_3832(const auto &x_4017);
Unit x_4020(const auto &x_4021);
int64_t x_4028(const auto &x_4029);
int64_t x_4031(const auto &x_4032);
LayoutNode x_4034(const auto &x_4035);
Node x_4037(const auto &x_4038);
Node x_4040(const auto &x_4041);
Unit var_modified_x_4282(const auto &x_4292) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4293) {
    auto x_5511 = [&](const auto &x_4296) {
      if (x_4296->meta->pass_1_proc_inited) {
        x_4296->meta->bb_2_has_bb_dirtied = true;
        x_4296->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4296);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4292->next, [&](const auto &x_4295) { return MakeUnit(); },
        [&](const auto &x_4294) {
          auto x_5512 = x_5511;
          x_5512(x_4294);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4279(const auto &x_4297) {
  if ((x_4297->prev != nullptr) && (!(x_4297->prev)->var_line_break)) {
    return max(x_4297->var_height_external, (x_4297->prev)->var_line_height);
  } else {
    return x_4297->var_height_external;
  }
}
Unit var_modified_x_4277(const auto &x_4314) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4315) {
    auto x_5513 = [&](const auto &x_4316) {
      if (x_4316->meta->pass_1_proc_inited) {
        x_4316->meta->bb_2_has_bb_dirtied = true;
        x_4316->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4316);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5513(x_4314);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4274(const auto &x_4317) {
  if (eq(x_4317->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4317->var_height_internal;
  }
}
Unit var_modified_x_4272(const auto &x_4326) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4327) {
    auto x_5514 = [&](const auto &x_4328) {
      if (x_4328->meta->pass_1_proc_inited) {
        x_4328->meta->bb_2_has_bb_dirtied = true;
        x_4328->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4328);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5514(x_4326);
    MakeUnit();
    ListIter(x_4326->children, [&](const auto &x_4329) {
      if (x_4329->meta->pass_1_proc_inited) {
        x_4329->meta->bb_2_has_bb_dirtied = true;
        x_4329->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4329);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4269(const auto &x_4330) {
  if (x_4330->var_intrinsic_height_is_height) {
    return x_4330->var_intrinsic_height_internal;
  } else {
    if ((x_4330->parent != nullptr) && (x_4330->parent)->var_is_flex_column) {
      return plus(x_4330->var_intrinsic_height_internal,
                  mult(x_4330->var_flex_amount, (x_4330->parent)->var_flex_unit));
    } else {
      if (x_4330->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_4330->var_box_height, divide(x_4330->var_height_expr.r.a0, 100.));
      } else {
        return max(x_4330->var_box_height, x_4330->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_4267(const auto &x_4383) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4384) {
    ListIter(x_4383->children, [&](const auto &x_4385) {
      if (x_4385->meta->pass_1_proc_inited) {
        x_4385->meta->bb_2_has_bb_dirtied = true;
        x_4385->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4385);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_5515 = [&](const auto &x_4388) {
      if (x_4388->meta->pass_1_proc_inited) {
        x_4388->meta->bb_2_has_bb_dirtied = true;
        x_4388->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4388);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4383->next, [&](const auto &x_4387) { return MakeUnit(); },
        [&](const auto &x_4386) {
          auto x_5516 = x_5515;
          x_5516(x_4386);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4264(const auto &x_4389) {
  if (x_4389->prev != nullptr) {
    if (x_4389->var_line_break || (x_4389->prev)->var_line_break) {
      return plus((x_4389->prev)->var_y, (x_4389->prev)->var_line_height);
    } else {
      return (x_4389->prev)->var_y;
    }
  } else {
    if (x_4389->parent != nullptr) {
      return (x_4389->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4262(const auto &x_4414) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4415) {
    auto x_5517 = [&](const auto &x_4418) {
      if (x_4418->meta->pass_1_proc_inited) {
        x_4418->meta->bb_2_has_bb_dirtied = true;
        x_4418->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4418);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4414->next, [&](const auto &x_4417) { return MakeUnit(); },
        [&](const auto &x_4416) {
          auto x_5518 = x_5517;
          x_5518(x_4416);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4259(const auto &x_4419) {
  if (eq(x_4419->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4419->var_width_internal;
  }
}
Unit var_modified_x_4257(const auto &x_4428) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4429) {
    auto x_5519 = [&](const auto &x_4430) {
      if (x_4430->meta->pass_1_proc_inited) {
        x_4430->meta->bb_2_has_bb_dirtied = true;
        x_4430->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4430);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5519(x_4428);
    MakeUnit();
    ListIter(x_4428->children, [&](const auto &x_4431) {
      if (x_4431->meta->pass_1_proc_inited) {
        x_4431->meta->bb_2_has_bb_dirtied = true;
        x_4431->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4431);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4254(const auto &x_4432) {
  if (x_4432->var_intrinsic_width_is_width) {
    return x_4432->var_intrinsic_width_internal;
  } else {
    if ((x_4432->parent != nullptr) && (x_4432->parent)->var_is_flex_row) {
      return plus(x_4432->var_intrinsic_width_internal, mult(x_4432->var_flex_amount, (x_4432->parent)->var_flex_unit));
    } else {
      if (x_4432->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_4432->var_box_width, divide(x_4432->var_width_expr.r.a0, 100.));
      } else {
        return max(x_4432->var_box_width, x_4432->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_4252(const auto &x_4485) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4486) {
    ListIter(x_4485->children, [&](const auto &x_4487) {
      if (x_4487->meta->pass_1_proc_inited) {
        x_4487->meta->bb_2_has_bb_dirtied = true;
        x_4487->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4487);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_5520 = [&](const auto &x_4490) {
      if (x_4490->meta->pass_1_proc_inited) {
        x_4490->meta->bb_2_has_bb_dirtied = true;
        x_4490->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4490);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4485->next, [&](const auto &x_4489) { return MakeUnit(); },
        [&](const auto &x_4488) {
          auto x_5521 = x_5520;
          x_5521(x_4488);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4249(const auto &x_4491) {
  if (x_4491->prev != nullptr) {
    if (x_4491->var_line_break || (x_4491->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_4491->prev)->var_x, (x_4491->prev)->var_width_external);
    }
  } else {
    if (x_4491->parent != nullptr) {
      return (x_4491->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4247(const auto &x_4512) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4513) {
    ListIter(x_4512->children, [&](const auto &x_4514) {
      if (x_4514->meta->pass_1_proc_inited) {
        x_4514->meta->bb_2_has_bb_dirtied = true;
        x_4514->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4514);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4244(const auto &x_4515) {
  if (gt(x_4515->var_left_over, 0.)) {
    return divide(x_4515->var_left_over, x_4515->var_flex_grow_sum);
  } else {
    return divide(x_4515->var_left_over, x_4515->var_flex_shrink_sum);
  }
}
Unit var_modified_x_4242(const auto &x_4536) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4537) {
    auto x_5522 = [&](const auto &x_4538) {
      if (x_4538->meta->pass_1_proc_inited) {
        x_4538->meta->bb_2_has_bb_dirtied = true;
        x_4538->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4538);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5522(x_4536);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4239(const auto &x_4539) {
  if ((x_4539->parent != nullptr) && gt((x_4539->parent)->var_left_over, 0.)) {
    return x_4539->var_flex_grow;
  } else {
    return x_4539->var_flex_shrink;
  }
}
Unit var_modified_x_4237(const auto &x_4552) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4553) {
    auto x_5523 = [&](const auto &x_4554) {
      if (x_4554->meta->pass_1_proc_inited) {
        x_4554->meta->bb_2_has_bb_dirtied = true;
        x_4554->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4554);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5523(x_4552);
    MakeUnit();
    ListIter(x_4552->children, [&](const auto &x_4555) {
      if (x_4555->meta->pass_1_proc_inited) {
        x_4555->meta->bb_2_has_bb_dirtied = true;
        x_4555->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4555);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4234(const auto &x_4556) {
  if (x_4556->var_is_flex_row) {
    return minus(x_4556->var_box_width, (x_4556->last != nullptr) ? ((x_4556->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_4556->var_box_height, (x_4556->last != nullptr) ? ((x_4556->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_4232(const auto &x_4577) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4578) {
    auto x_5524 = [&](const auto &x_4579) {
      if (x_4579->meta->pass_1_proc_inited) {
        x_4579->meta->bb_2_has_bb_dirtied = true;
        x_4579->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4579);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5524(x_4577);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4229(const auto &x_4580) {
  if (x_4580->parent != nullptr) {
    return (x_4580->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_4227(const auto &x_4585) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4586) {
    auto x_5525 = [&](const auto &x_4587) {
      if (x_4587->meta->pass_1_proc_inited) {
        x_4587->meta->bb_2_has_bb_dirtied = true;
        x_4587->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4587);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5525(x_4585);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4224(const auto &x_4588) {
  if (x_4588->parent != nullptr) {
    return (x_4588->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_4220(const auto &x_4593) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4594) {
    auto x_5526 = [&](const auto &x_4595) {
      if (x_4595->meta->pass_0_proc_inited) {
        x_4595->meta->bb_0_has_bb_dirtied = true;
        x_4595->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4595);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5526(x_4593);
    MakeUnit();
    auto x_5527 = [&](const auto &x_4598) {
      if (x_4598->meta->pass_0_proc_inited) {
        x_4598->meta->bb_0_has_bb_dirtied = true;
        x_4598->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4598);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4593->next, [&](const auto &x_4597) { return MakeUnit(); },
        [&](const auto &x_4596) {
          auto x_5530 = x_5527;
          x_5530(x_4596);
          return MakeUnit();
        });
    auto x_5528 = [&](const auto &x_4599) {
      if (x_4599->meta->pass_1_proc_inited) {
        x_4599->meta->bb_2_has_bb_dirtied = true;
        x_4599->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4599);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5528(x_4593);
    MakeUnit();
    auto x_5529 = [&](const auto &x_4602) {
      if (x_4602->meta->pass_1_proc_inited) {
        x_4602->meta->bb_2_has_bb_dirtied = true;
        x_4602->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4602);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4593->next, [&](const auto &x_4601) { return MakeUnit(); },
        [&](const auto &x_4600) {
          auto x_5531 = x_5529;
          x_5531(x_4600);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4217(const auto &x_4603) {
  if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_4603->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_4603->parent != nullptr) &&
          (eq((x_4603->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_4603->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_4603->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_4603->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_4603->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_4215(const auto &x_4680) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4681) {
    ListIter(x_4680->children, [&](const auto &x_4682) {
      if (x_4682->meta->pass_0_proc_inited) {
        x_4682->meta->bb_1_has_bb_dirtied = true;
        x_4682->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4682);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4212(const auto &x_4683) {
  return (((!(x_4683->parent != nullptr)) || (x_4683->parent)->var_visible) &&
          (neq(x_4683->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_4683->var_inside_svg) && (!x_4683->var_disabled))));
}
Unit var_modified_x_4210(const auto &x_4700) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4701) {
    auto x_5532 = [&](const auto &x_4702) {
      if (x_4702->meta->pass_0_proc_inited) {
        x_4702->meta->bb_1_has_bb_dirtied = true;
        x_4702->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4702);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5532(x_4700);
    MakeUnit();
    ListIter(x_4700->children, [&](const auto &x_4703) {
      if (x_4703->meta->pass_0_proc_inited) {
        x_4703->meta->bb_1_has_bb_dirtied = true;
        x_4703->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4703);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_5533 = [&](const auto &x_4704) {
      if (x_4704->meta->pass_0_proc_inited) {
        x_4704->meta->bb_0_has_bb_dirtied = true;
        x_4704->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4704);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5533(x_4700);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4207(const auto &x_4705) {
  if (eq(x_4705->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_4705->parent != nullptr) && (x_4705->parent)->var_disabled);
  }
}
Unit var_modified_x_4205(const auto &x_4710) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4711) {
    auto x_5534 = [&](const auto &x_4712) {
      if (x_4712->meta->pass_0_proc_inited) {
        x_4712->meta->bb_1_has_bb_dirtied = true;
        x_4712->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4712);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5534(x_4710);
    MakeUnit();
    ListIter(x_4710->children, [&](const auto &x_4713) {
      if (x_4713->meta->pass_0_proc_inited) {
        x_4713->meta->bb_1_has_bb_dirtied = true;
        x_4713->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4713);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_5535 = [&](const auto &x_4714) {
      if (x_4714->meta->pass_0_proc_inited) {
        x_4714->meta->bb_0_has_bb_dirtied = true;
        x_4714->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4714);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5535(x_4710);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4202(const auto &x_4715) {
  return ((x_4715->parent != nullptr) && ((x_4715->parent)->var_is_svg_block || (x_4715->parent)->var_inside_svg));
}
Unit var_modified_x_4200(const auto &x_4724) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4725) {
    ListIter(x_4724->children, [&](const auto &x_4726) {
      if (x_4726->meta->pass_0_proc_inited) {
        x_4726->meta->bb_1_has_bb_dirtied = true;
        x_4726->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4726);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4197(const auto &x_4727) { return eq(x_4727->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_4195(const auto &x_4728) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4729) {
    auto x_5536 = [&](const auto &x_4730) {
      if (x_4730->meta->pass_0_proc_inited) {
        x_4730->meta->bb_0_has_bb_dirtied = true;
        x_4730->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4730);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5536(x_4728);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4192(const auto &x_4731) {
  return neq(x_4731->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4190(const auto &x_4736) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4737) {
    auto x_5537 = [&](const auto &x_4738) {
      if (x_4738->meta->pass_0_proc_inited) {
        x_4738->meta->bb_1_has_bb_dirtied = true;
        x_4738->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4738);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5537(x_4736);
    MakeUnit();
    auto x_5538 = [&](const auto &x_4739) {
      if (x_4739->meta->pass_0_proc_inited) {
        x_4739->meta->bb_0_has_bb_dirtied = true;
        x_4739->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4739);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5538(x_4736);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4187(const auto &x_4740) {
  if (!x_4740->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4740->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_4740->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4740->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4185(const auto &x_4751) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4752) {
    auto x_5539 = [&](const auto &x_4753) {
      if (x_4753->meta->pass_0_proc_inited) {
        x_4753->meta->bb_0_has_bb_dirtied = true;
        x_4753->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4753);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5539(x_4751);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4182(const auto &x_4754) {
  return neq(x_4754->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4180(const auto &x_4759) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4760) {
    auto x_5540 = [&](const auto &x_4761) {
      if (x_4761->meta->pass_0_proc_inited) {
        x_4761->meta->bb_1_has_bb_dirtied = true;
        x_4761->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4761);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5540(x_4759);
    MakeUnit();
    auto x_5541 = [&](const auto &x_4762) {
      if (x_4762->meta->pass_0_proc_inited) {
        x_4762->meta->bb_0_has_bb_dirtied = true;
        x_4762->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4762);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5541(x_4759);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4177(const auto &x_4763) {
  if (!x_4763->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4763->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_4763->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4763->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4175(const auto &x_4774) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4775) {
    ListIter(x_4774->children, [&](const auto &x_4776) {
      if (x_4776->meta->pass_0_proc_inited) {
        x_4776->meta->bb_0_has_bb_dirtied = true;
        x_4776->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4776);
      } else {
        return MetaWriteMetric();
      }
    });
    ListIter(x_4774->children, [&](const auto &x_4777) {
      if (x_4777->meta->pass_1_proc_inited) {
        x_4777->meta->bb_2_has_bb_dirtied = true;
        x_4777->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4777);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4172(const auto &x_4778) {
  if ((x_4778->parent != nullptr) &&
      (eq((x_4778->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4778->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4778->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_4778->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4170(const auto &x_4803) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4804) {
    ListIter(x_4803->children, [&](const auto &x_4805) {
      if (x_4805->meta->pass_0_proc_inited) {
        x_4805->meta->bb_0_has_bb_dirtied = true;
        x_4805->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4805);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_5542 = [&](const auto &x_4806) {
      if (x_4806->meta->pass_1_proc_inited) {
        x_4806->meta->bb_2_has_bb_dirtied = true;
        x_4806->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4806);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5542(x_4803);
    MakeUnit();
    ListIter(x_4803->children, [&](const auto &x_4807) {
      if (x_4807->meta->pass_1_proc_inited) {
        x_4807->meta->bb_2_has_bb_dirtied = true;
        x_4807->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4807);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4167(const auto &x_4808) {
  if ((x_4808->parent != nullptr) &&
      (eq((x_4808->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4808->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4808->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4165(const auto &x_4833) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4834) {
    ListIter(x_4833->children, [&](const auto &x_4835) {
      if (x_4835->meta->pass_0_proc_inited) {
        x_4835->meta->bb_1_has_bb_dirtied = true;
        x_4835->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4835);
      } else {
        return MetaWriteMetric();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4162(const auto &x_4836) {
  if (x_4836->has_prop_flex_direction) {
    return x_4836->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_4160(const auto &x_4839) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4840) {
    auto x_5543 = [&](const auto &x_4843) {
      if (x_4843->meta->pass_0_proc_inited) {
        x_4843->meta->bb_1_has_bb_dirtied = true;
        x_4843->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4843);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4839->next, [&](const auto &x_4842) { return MakeUnit(); },
        [&](const auto &x_4841) {
          auto x_5545 = x_5543;
          x_5545(x_4841);
          return MakeUnit();
        });
    auto x_5544 = [&](const auto &x_4844) {
      if (x_4844->meta->pass_1_proc_inited) {
        x_4844->meta->bb_2_has_bb_dirtied = true;
        x_4844->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4844);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5544(x_4839);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4157(const auto &x_4845) {
  return plus((x_4845->prev != nullptr) ? ((x_4845->prev)->var_flex_shrink_sum) : (0.), x_4845->var_flex_shrink);
}
Unit var_modified_x_4155(const auto &x_4854) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4855) {
    auto x_5546 = [&](const auto &x_4858) {
      if (x_4858->meta->pass_0_proc_inited) {
        x_4858->meta->bb_1_has_bb_dirtied = true;
        x_4858->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4858);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4854->next, [&](const auto &x_4857) { return MakeUnit(); },
        [&](const auto &x_4856) {
          auto x_5548 = x_5546;
          x_5548(x_4856);
          return MakeUnit();
        });
    auto x_5547 = [&](const auto &x_4859) {
      if (x_4859->meta->pass_1_proc_inited) {
        x_4859->meta->bb_2_has_bb_dirtied = true;
        x_4859->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4859);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5547(x_4854);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4152(const auto &x_4860) {
  return plus((x_4860->prev != nullptr) ? ((x_4860->prev)->var_flex_grow_sum) : (0.), x_4860->var_flex_grow);
}
Unit var_modified_x_4150(const auto &x_4869) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4870) {
    auto x_5549 = [&](const auto &x_4871) {
      if (x_4871->meta->pass_0_proc_inited) {
        x_4871->meta->bb_1_has_bb_dirtied = true;
        x_4871->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4871);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5549(x_4869);
    MakeUnit();
    auto x_5550 = [&](const auto &x_4872) {
      if (x_4872->meta->pass_1_proc_inited) {
        x_4872->meta->bb_2_has_bb_dirtied = true;
        x_4872->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4872);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5550(x_4869);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4147(const auto &x_4873) {
  if (x_4873->has_prop_flex_shrink) {
    return (x_4873->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4145(const auto &x_4876) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4877) {
    auto x_5551 = [&](const auto &x_4878) {
      if (x_4878->meta->pass_0_proc_inited) {
        x_4878->meta->bb_1_has_bb_dirtied = true;
        x_4878->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4878);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5551(x_4876);
    MakeUnit();
    auto x_5552 = [&](const auto &x_4879) {
      if (x_4879->meta->pass_1_proc_inited) {
        x_4879->meta->bb_2_has_bb_dirtied = true;
        x_4879->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4879);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5552(x_4876);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4142(const auto &x_4880) {
  if (x_4880->has_prop_flex_grow) {
    return (x_4880->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4140(const auto &x_4883) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4884) {
    auto x_5553 = [&](const auto &x_4885) {
      if (x_4885->meta->pass_0_proc_inited) {
        x_4885->meta->bb_1_has_bb_dirtied = true;
        x_4885->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4885);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5553(x_4883);
    MakeUnit();
    auto x_5554 = [&](const auto &x_4886) {
      if (x_4886->meta->pass_0_proc_inited) {
        x_4886->meta->bb_0_has_bb_dirtied = true;
        x_4886->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4886);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5554(x_4883);
    MakeUnit();
    auto x_5555 = [&](const auto &x_4887) {
      if (x_4887->meta->pass_1_proc_inited) {
        x_4887->meta->bb_2_has_bb_dirtied = true;
        x_4887->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4887);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5555(x_4883);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4137(const auto &x_4888) {
  if (x_4888->has_prop_position) {
    return x_4888->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_4135(const auto &x_4891) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4892) {
    auto x_5556 = [&](const auto &x_4893) {
      if (x_4893->meta->pass_0_proc_inited) {
        x_4893->meta->bb_1_has_bb_dirtied = true;
        x_4893->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4893);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5556(x_4891);
    MakeUnit();
    ListIter(x_4891->children, [&](const auto &x_4894) {
      if (x_4894->meta->pass_0_proc_inited) {
        x_4894->meta->bb_1_has_bb_dirtied = true;
        x_4894->meta->bb_1_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4894);
      } else {
        return MetaWriteMetric();
      }
    });
    auto x_5557 = [&](const auto &x_4895) {
      if (x_4895->meta->pass_0_proc_inited) {
        x_4895->meta->bb_0_has_bb_dirtied = true;
        x_4895->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4895);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5557(x_4891);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4132(const auto &x_4896) {
  if (x_4896->has_prop_display) {
    return x_4896->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_4128(const auto &x_4899) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4900) {
    auto x_5558 = [&](const auto &x_4903) {
      if (x_4903->meta->pass_0_proc_inited) {
        x_4903->meta->bb_0_has_bb_dirtied = true;
        x_4903->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4903);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_4899->next == nullptr) {
      auto x_5560 = x_5558;
      OptionMatch(
          x_4899->parent, [&](const auto &x_4902) { return MakeUnit(); },
          [&](const auto &x_4901) {
            auto x_5562 = x_5560;
            x_5562(x_4901);
            return MakeUnit();
          });
    }
    auto x_5559 = [&](const auto &x_4906) {
      if (x_4906->meta->pass_0_proc_inited) {
        x_4906->meta->bb_0_has_bb_dirtied = true;
        x_4906->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4906);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4899->next, [&](const auto &x_4905) { return MakeUnit(); },
        [&](const auto &x_4904) {
          auto x_5561 = x_5559;
          x_5561(x_4904);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4125(const auto &x_4907) {
  if (x_4907->prev != nullptr) {
    if (x_4907->var_line_break) {
      return plus((x_4907->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4907->prev)->var_intrinsic_current_line_height, x_4907->var_intrinsic_height_external));
    } else {
      return (x_4907->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4907->var_line_break) {
      return x_4907->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4123(const auto &x_4936) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4937) {
    auto x_5563 = [&](const auto &x_4940) {
      if (x_4940->meta->pass_0_proc_inited) {
        x_4940->meta->bb_0_has_bb_dirtied = true;
        x_4940->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4940);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_4936->next == nullptr) {
      auto x_5565 = x_5563;
      OptionMatch(
          x_4936->parent, [&](const auto &x_4939) { return MakeUnit(); },
          [&](const auto &x_4938) {
            auto x_5567 = x_5565;
            x_5567(x_4938);
            return MakeUnit();
          });
    }
    auto x_5564 = [&](const auto &x_4943) {
      if (x_4943->meta->pass_0_proc_inited) {
        x_4943->meta->bb_0_has_bb_dirtied = true;
        x_4943->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4943);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4936->next, [&](const auto &x_4942) { return MakeUnit(); },
        [&](const auto &x_4941) {
          auto x_5566 = x_5564;
          x_5566(x_4941);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4120(const auto &x_4944) {
  if (x_4944->var_line_break) {
    return 0.;
  } else {
    return max(x_4944->var_intrinsic_height_external,
               (x_4944->prev != nullptr) ? ((x_4944->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4118(const auto &x_4957) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4958) {
    auto x_5568 = [&](const auto &x_4961) {
      if (x_4961->meta->pass_0_proc_inited) {
        x_4961->meta->bb_0_has_bb_dirtied = true;
        x_4961->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4961);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_4957->next, [&](const auto &x_4960) { return MakeUnit(); },
        [&](const auto &x_4959) {
          auto x_5570 = x_5568;
          x_5570(x_4959);
          return MakeUnit();
        });
    auto x_5569 = [&](const auto &x_4964) {
      if (x_4964->meta->pass_1_proc_inited) {
        x_4964->meta->bb_2_has_bb_dirtied = true;
        x_4964->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4964);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_4957->next == nullptr) {
      auto x_5571 = x_5569;
      OptionMatch(
          x_4957->parent, [&](const auto &x_4963) { return MakeUnit(); },
          [&](const auto &x_4962) {
            auto x_5572 = x_5571;
            x_5572(x_4962);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4115(const auto &x_4965) {
  return plus((x_4965->prev != nullptr) ? ((x_4965->prev)->var_intrinsic_height_sum) : (0.),
              x_4965->var_intrinsic_height_external);
}
Unit var_modified_x_4113(const auto &x_4974) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4975) {
    auto x_5573 = [&](const auto &x_4976) {
      if (x_4976->meta->pass_0_proc_inited) {
        x_4976->meta->bb_0_has_bb_dirtied = true;
        x_4976->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4976);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5573(x_4974);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4110(const auto &x_4977) {
  if (eq(x_4977->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4977->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4108(const auto &x_4986) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4987) {
    auto x_5574 = [&](const auto &x_4988) {
      if (x_4988->meta->pass_0_proc_inited) {
        x_4988->meta->bb_0_has_bb_dirtied = true;
        x_4988->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_4988);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5574(x_4986);
    MakeUnit();
    auto x_5575 = [&](const auto &x_4989) {
      if (x_4989->meta->pass_1_proc_inited) {
        x_4989->meta->bb_2_has_bb_dirtied = true;
        x_4989->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_4989);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5575(x_4986);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4105(const auto &x_4990) {
  if (eq(x_4990->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4990->var_inside_svg) {
      return 0.;
    } else {
      if (x_4990->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4990->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4990->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_4990->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_4990->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4990->var_height_expr.r.a0;
          } else {
            if (x_4990->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_4990->var_height_expr.r.a0;
            } else {
              return x_4990->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_4990->var_children_intrinsic_height,
              (eq(x_4990->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_4990->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4990->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4990->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_4990->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4990->var_has_height_attr &&
                                                  (x_4990->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4990->var_height_attr_expr.r.a0)
                                                     : ((x_4990->has_attr_viewBox)
                                                            ? (x_4990->attr_viewBox.r.a3)
                                                            : (mult((x_4990->attr_viewBox.r.a3),
                                                                    divide(x_4990->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4990->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4990->var_has_height_attr)
                                                            ? (x_4990->var_height_attr_expr.r.a0)
                                                            : ((x_4990->has_attr_image_height &&
                                                                (!x_4990->var_has_width_attr))
                                                                   ? (int_to_float(x_4990->attr_image_height))
                                                                   : ((neq(x_4990->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4990->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4990->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_4990->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_4990->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_4990->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4103(const auto &x_5135) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5136) {
    auto x_5576 = [&](const auto &x_5137) {
      if (x_5137->meta->pass_1_proc_inited) {
        x_5137->meta->bb_2_has_bb_dirtied = true;
        x_5137->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_5137);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5576(x_5135);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4100(const auto &x_5138) {
  if (eq(x_5138->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5138->var_inside_svg || x_5138->var_disabled)) {
    return true;
  } else {
    if ((x_5138->parent != nullptr) && (x_5138->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_5138->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5138->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5138->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5138->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_5138->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4098(const auto &x_5187) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5188) {
    auto x_5577 = [&](const auto &x_5189) {
      if (x_5189->meta->pass_0_proc_inited) {
        x_5189->meta->bb_0_has_bb_dirtied = true;
        x_5189->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5189);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5577(x_5187);
    MakeUnit();
    auto x_5578 = [&](const auto &x_5190) {
      if (x_5190->meta->pass_1_proc_inited) {
        x_5190->meta->bb_2_has_bb_dirtied = true;
        x_5190->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_5190);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5578(x_5187);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4095(const auto &x_5191) {
  if (x_5191->has_prop_height) {
    return x_5191->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4093(const auto &x_5194) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5195) {
    auto x_5579 = [&](const auto &x_5196) {
      if (x_5196->meta->pass_0_proc_inited) {
        x_5196->meta->bb_0_has_bb_dirtied = true;
        x_5196->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5196);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5579(x_5194);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4090(const auto &x_5197) {
  if (x_5197->last != nullptr) {
    return plus((x_5197->last)->var_finished_intrinsic_height_sum, (x_5197->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4088(const auto &x_5206) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5207) {
    auto x_5580 = [&](const auto &x_5210) {
      if (x_5210->meta->pass_0_proc_inited) {
        x_5210->meta->bb_0_has_bb_dirtied = true;
        x_5210->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5210);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_5206->next, [&](const auto &x_5209) { return MakeUnit(); },
        [&](const auto &x_5208) {
          auto x_5582 = x_5580;
          x_5582(x_5208);
          return MakeUnit();
        });
    auto x_5581 = [&](const auto &x_5213) {
      if (x_5213->meta->pass_1_proc_inited) {
        x_5213->meta->bb_2_has_bb_dirtied = true;
        x_5213->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_5213);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_5206->next == nullptr) {
      auto x_5583 = x_5581;
      OptionMatch(
          x_5206->parent, [&](const auto &x_5212) { return MakeUnit(); },
          [&](const auto &x_5211) {
            auto x_5584 = x_5583;
            x_5584(x_5211);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4085(const auto &x_5214) {
  return plus((x_5214->prev != nullptr) ? ((x_5214->prev)->var_intrinsic_width_sum) : (0.),
              x_5214->var_intrinsic_width_external);
}
Unit var_modified_x_4083(const auto &x_5223) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5224) {
    auto x_5585 = [&](const auto &x_5227) {
      if (x_5227->meta->pass_0_proc_inited) {
        x_5227->meta->bb_0_has_bb_dirtied = true;
        x_5227->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5227);
      } else {
        return MetaWriteMetric();
      }
    };
    if (x_5223->next == nullptr) {
      auto x_5587 = x_5585;
      OptionMatch(
          x_5223->parent, [&](const auto &x_5226) { return MakeUnit(); },
          [&](const auto &x_5225) {
            auto x_5589 = x_5587;
            x_5589(x_5225);
            return MakeUnit();
          });
    }
    auto x_5586 = [&](const auto &x_5230) {
      if (x_5230->meta->pass_0_proc_inited) {
        x_5230->meta->bb_0_has_bb_dirtied = true;
        x_5230->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5230);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_5223->next, [&](const auto &x_5229) { return MakeUnit(); },
        [&](const auto &x_5228) {
          auto x_5588 = x_5586;
          x_5588(x_5228);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4080(const auto &x_5231) {
  return max(x_5231->var_intrinsic_current_line_width,
             (x_5231->prev != nullptr) ? ((x_5231->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4078(const auto &x_5240) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5241) {
    auto x_5590 = [&](const auto &x_5242) {
      if (x_5242->meta->pass_0_proc_inited) {
        x_5242->meta->bb_0_has_bb_dirtied = true;
        x_5242->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5242);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5590(x_5240);
    MakeUnit();
    auto x_5591 = [&](const auto &x_5245) {
      if (x_5245->meta->pass_0_proc_inited) {
        x_5245->meta->bb_0_has_bb_dirtied = true;
        x_5245->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5245);
      } else {
        return MetaWriteMetric();
      }
    };
    OptionMatch(
        x_5240->next, [&](const auto &x_5244) { return MakeUnit(); },
        [&](const auto &x_5243) {
          auto x_5592 = x_5591;
          x_5592(x_5243);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4075(const auto &x_5246) {
  return plus(x_5246->var_intrinsic_width_external,
              ((x_5246->prev != nullptr) && (!(x_5246->prev)->var_line_break))
                  ? ((x_5246->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_4073(const auto &x_5259) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5260) {
    auto x_5593 = [&](const auto &x_5261) {
      if (x_5261->meta->pass_0_proc_inited) {
        x_5261->meta->bb_0_has_bb_dirtied = true;
        x_5261->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5261);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5593(x_5259);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4070(const auto &x_5262) {
  if (eq(x_5262->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5262->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_4068(const auto &x_5271) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5272) {
    auto x_5594 = [&](const auto &x_5273) {
      if (x_5273->meta->pass_0_proc_inited) {
        x_5273->meta->bb_0_has_bb_dirtied = true;
        x_5273->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5273);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5594(x_5271);
    MakeUnit();
    auto x_5595 = [&](const auto &x_5274) {
      if (x_5274->meta->pass_1_proc_inited) {
        x_5274->meta->bb_2_has_bb_dirtied = true;
        x_5274->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_5274);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5595(x_5271);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4065(const auto &x_5275) {
  if (eq(x_5275->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_5275->var_inside_svg) {
      return 0.;
    } else {
      if (x_5275->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5275->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_5275->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_5275->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_5275->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_5275->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_5275->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_5275->var_width_expr.r.a0;
          } else {
            return x_5275->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_5275->var_children_intrinsic_width,
              (eq(x_5275->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_5275->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5275->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_5275->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_5275->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_5275->var_has_width_attr &&
                                                  (x_5275->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_5275->var_width_attr_expr.r.a0)
                                                     : (((!x_5275->var_has_width_attr) && x_5275->has_attr_viewBox)
                                                            ? (x_5275->attr_viewBox.r.a2)
                                                            : (mult((x_5275->attr_viewBox.r.a2),
                                                                    divide(x_5275->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_5275->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_5275->var_has_width_attr)
                                                            ? (x_5275->var_width_attr_expr.r.a0)
                                                            : ((x_5275->has_attr_image_width &&
                                                                (!x_5275->var_has_height_attr))
                                                                   ? (int_to_float(x_5275->attr_image_width))
                                                                   : ((neq(x_5275->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_5275->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_5275->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_5275->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_5275->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_5275->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4063(const auto &x_5428) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5429) {
    auto x_5596 = [&](const auto &x_5430) {
      if (x_5430->meta->pass_0_proc_inited) {
        x_5430->meta->bb_0_has_bb_dirtied = true;
        x_5430->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5430);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5596(x_5428);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4060(const auto &x_5431) {
  if (x_5431->last != nullptr) {
    return (x_5431->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_4058(const auto &x_5436) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5437) {
    auto x_5597 = [&](const auto &x_5438) {
      if (x_5438->meta->pass_1_proc_inited) {
        x_5438->meta->bb_2_has_bb_dirtied = true;
        x_5438->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_5438);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5597(x_5436);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4055(const auto &x_5439) {
  if (eq(x_5439->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5439->var_inside_svg || x_5439->var_disabled)) {
    return true;
  } else {
    if ((x_5439->parent != nullptr) && (x_5439->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5439->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5439->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5439->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5439->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_5439->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4053(const auto &x_5488) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5489) {
    auto x_5598 = [&](const auto &x_5490) {
      if (x_5490->meta->pass_0_proc_inited) {
        x_5490->meta->bb_0_has_bb_dirtied = true;
        x_5490->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5490);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5598(x_5488);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4050(const auto &x_5491) {
  if (eq(x_5491->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_5491->var_inside_svg) {
      return true;
    } else {
      if (x_5491->var_disabled) {
        return true;
      } else {if ( eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_5491->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_4048(const auto &x_5504) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5505) {
    auto x_5599 = [&](const auto &x_5506) {
      if (x_5506->meta->pass_0_proc_inited) {
        x_5506->meta->bb_0_has_bb_dirtied = true;
        x_5506->meta->bb_0_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3893(x_5506);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5599(x_5504);
    MakeUnit();
    auto x_5600 = [&](const auto &x_5507) {
      if (x_5507->meta->pass_1_proc_inited) {
        x_5507->meta->bb_2_has_bb_dirtied = true;
        x_5507->meta->bb_2_bb_dirtied = true;
        return set_recursive_proc_dirtied_x_3933(x_5507);
      } else {
        return MetaWriteMetric();
      }
    };
    x_5600(x_5504);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4045(const auto &x_5508) {
  if (x_5508->has_prop_width) {
    return x_5508->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_3986(const auto &x_4043) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4044) {
    WriteMetric();
    auto x_4046 = eval_expr_x_4045(x_4043);
    if (x_4043->has_var_width_expr) {
      auto x_4047 = x_4043->var_width_expr;
      if (!EqualValue(x_4047, x_4046)) {
        var_modified_x_4048(x_4043);
      }
    }
    x_4043->has_var_width_expr = true;
    x_4043->var_width_expr = AsDEString(x_4046);
    WriteMetric();
    auto x_4051 = eval_expr_x_4050(x_4043);
    if (x_4043->has_var_is_default_case) {
      auto x_4052 = x_4043->var_is_default_case;
      if (!EqualValue(x_4052, x_4051)) {
        var_modified_x_4053(x_4043);
      }
    }
    x_4043->has_var_is_default_case = true;
    x_4043->var_is_default_case = Asbool(x_4051);
    WriteMetric();
    auto x_4056 = eval_expr_x_4055(x_4043);
    if (x_4043->has_var_intrinsic_width_is_width) {
      auto x_4057 = x_4043->var_intrinsic_width_is_width;
      if (!EqualValue(x_4057, x_4056)) {
        var_modified_x_4058(x_4043);
      }
    }
    x_4043->has_var_intrinsic_width_is_width = true;
    x_4043->var_intrinsic_width_is_width = Asbool(x_4056);
    WriteMetric();
    auto x_4061 = eval_expr_x_4060(x_4043);
    if (x_4043->has_var_children_intrinsic_width) {
      auto x_4062 = x_4043->var_children_intrinsic_width;
      if (!EqualValue(x_4062, x_4061)) {
        var_modified_x_4063(x_4043);
      }
    }
    x_4043->has_var_children_intrinsic_width = true;
    x_4043->var_children_intrinsic_width = Asdouble(x_4061);
    WriteMetric();
    auto x_4066 = eval_expr_x_4065(x_4043);
    if (x_4043->has_var_intrinsic_width_internal) {
      auto x_4067 = x_4043->var_intrinsic_width_internal;
      if (!EqualValue(x_4067, x_4066)) {
        var_modified_x_4068(x_4043);
      }
    }
    x_4043->has_var_intrinsic_width_internal = true;
    x_4043->var_intrinsic_width_internal = Asdouble(x_4066);
    WriteMetric();
    auto x_4071 = eval_expr_x_4070(x_4043);
    if (x_4043->has_var_intrinsic_width_external) {
      auto x_4072 = x_4043->var_intrinsic_width_external;
      if (!EqualValue(x_4072, x_4071)) {
        var_modified_x_4073(x_4043);
      }
    }
    x_4043->has_var_intrinsic_width_external = true;
    x_4043->var_intrinsic_width_external = Asdouble(x_4071);
    WriteMetric();
    auto x_4076 = eval_expr_x_4075(x_4043);
    if (x_4043->has_var_intrinsic_current_line_width) {
      auto x_4077 = x_4043->var_intrinsic_current_line_width;
      if (!EqualValue(x_4077, x_4076)) {
        var_modified_x_4078(x_4043);
      }
    }
    x_4043->has_var_intrinsic_current_line_width = true;
    x_4043->var_intrinsic_current_line_width = Asdouble(x_4076);
    WriteMetric();
    auto x_4081 = eval_expr_x_4080(x_4043);
    if (x_4043->has_var_intrinsic_width_max) {
      auto x_4082 = x_4043->var_intrinsic_width_max;
      if (!EqualValue(x_4082, x_4081)) {
        var_modified_x_4083(x_4043);
      }
    }
    x_4043->has_var_intrinsic_width_max = true;
    x_4043->var_intrinsic_width_max = Asdouble(x_4081);
    WriteMetric();
    auto x_4086 = eval_expr_x_4085(x_4043);
    if (x_4043->has_var_intrinsic_width_sum) {
      auto x_4087 = x_4043->var_intrinsic_width_sum;
      if (!EqualValue(x_4087, x_4086)) {
        var_modified_x_4088(x_4043);
      }
    }
    x_4043->has_var_intrinsic_width_sum = true;
    x_4043->var_intrinsic_width_sum = Asdouble(x_4086);
    WriteMetric();
    auto x_4091 = eval_expr_x_4090(x_4043);
    if (x_4043->has_var_children_intrinsic_height) {
      auto x_4092 = x_4043->var_children_intrinsic_height;
      if (!EqualValue(x_4092, x_4091)) {
        var_modified_x_4093(x_4043);
      }
    }
    x_4043->has_var_children_intrinsic_height = true;
    x_4043->var_children_intrinsic_height = Asdouble(x_4091);
    WriteMetric();
    auto x_4096 = eval_expr_x_4095(x_4043);
    if (x_4043->has_var_height_expr) {
      auto x_4097 = x_4043->var_height_expr;
      if (!EqualValue(x_4097, x_4096)) {
        var_modified_x_4098(x_4043);
      }
    }
    x_4043->has_var_height_expr = true;
    x_4043->var_height_expr = AsDEString(x_4096);
    WriteMetric();
    auto x_4101 = eval_expr_x_4100(x_4043);
    if (x_4043->has_var_intrinsic_height_is_height) {
      auto x_4102 = x_4043->var_intrinsic_height_is_height;
      if (!EqualValue(x_4102, x_4101)) {
        var_modified_x_4103(x_4043);
      }
    }
    x_4043->has_var_intrinsic_height_is_height = true;
    x_4043->var_intrinsic_height_is_height = Asbool(x_4101);
    WriteMetric();
    auto x_4106 = eval_expr_x_4105(x_4043);
    if (x_4043->has_var_intrinsic_height_internal) {
      auto x_4107 = x_4043->var_intrinsic_height_internal;
      if (!EqualValue(x_4107, x_4106)) {
        var_modified_x_4108(x_4043);
      }
    }
    x_4043->has_var_intrinsic_height_internal = true;
    x_4043->var_intrinsic_height_internal = Asdouble(x_4106);
    WriteMetric();
    auto x_4111 = eval_expr_x_4110(x_4043);
    if (x_4043->has_var_intrinsic_height_external) {
      auto x_4112 = x_4043->var_intrinsic_height_external;
      if (!EqualValue(x_4112, x_4111)) {
        var_modified_x_4113(x_4043);
      }
    }
    x_4043->has_var_intrinsic_height_external = true;
    x_4043->var_intrinsic_height_external = Asdouble(x_4111);
    WriteMetric();
    auto x_4116 = eval_expr_x_4115(x_4043);
    if (x_4043->has_var_intrinsic_height_sum) {
      auto x_4117 = x_4043->var_intrinsic_height_sum;
      if (!EqualValue(x_4117, x_4116)) {
        var_modified_x_4118(x_4043);
      }
    }
    x_4043->has_var_intrinsic_height_sum = true;
    x_4043->var_intrinsic_height_sum = Asdouble(x_4116);
    WriteMetric();
    auto x_4121 = eval_expr_x_4120(x_4043);
    if (x_4043->has_var_intrinsic_current_line_height) {
      auto x_4122 = x_4043->var_intrinsic_current_line_height;
      if (!EqualValue(x_4122, x_4121)) {
        var_modified_x_4123(x_4043);
      }
    }
    x_4043->has_var_intrinsic_current_line_height = true;
    x_4043->var_intrinsic_current_line_height = Asdouble(x_4121);
    WriteMetric();
    auto x_4126 = eval_expr_x_4125(x_4043);
    if (x_4043->has_var_finished_intrinsic_height_sum) {
      auto x_4127 = x_4043->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_4127, x_4126)) {
        var_modified_x_4128(x_4043);
      }
    }
    x_4043->has_var_finished_intrinsic_height_sum = true;
    x_4043->var_finished_intrinsic_height_sum = Asdouble(x_4126);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3984(const auto &x_4130) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4131) {
    WriteMetric();
    auto x_4133 = eval_expr_x_4132(x_4130);
    if (x_4130->has_var_display) {
      auto x_4134 = x_4130->var_display;
      if (!EqualValue(x_4134, x_4133)) {
        var_modified_x_4135(x_4130);
      }
    }
    x_4130->has_var_display = true;
    x_4130->var_display = AsDEString(x_4133);
    WriteMetric();
    auto x_4138 = eval_expr_x_4137(x_4130);
    if (x_4130->has_var_position) {
      auto x_4139 = x_4130->var_position;
      if (!EqualValue(x_4139, x_4138)) {
        var_modified_x_4140(x_4130);
      }
    }
    x_4130->has_var_position = true;
    x_4130->var_position = AsDEString(x_4138);
    WriteMetric();
    auto x_4143 = eval_expr_x_4142(x_4130);
    if (x_4130->has_var_flex_grow) {
      auto x_4144 = x_4130->var_flex_grow;
      if (!EqualValue(x_4144, x_4143)) {
        var_modified_x_4145(x_4130);
      }
    }
    x_4130->has_var_flex_grow = true;
    x_4130->var_flex_grow = Asdouble(x_4143);
    WriteMetric();
    auto x_4148 = eval_expr_x_4147(x_4130);
    if (x_4130->has_var_flex_shrink) {
      auto x_4149 = x_4130->var_flex_shrink;
      if (!EqualValue(x_4149, x_4148)) {
        var_modified_x_4150(x_4130);
      }
    }
    x_4130->has_var_flex_shrink = true;
    x_4130->var_flex_shrink = Asdouble(x_4148);
    WriteMetric();
    auto x_4153 = eval_expr_x_4152(x_4130);
    if (x_4130->has_var_flex_grow_sum) {
      auto x_4154 = x_4130->var_flex_grow_sum;
      if (!EqualValue(x_4154, x_4153)) {
        var_modified_x_4155(x_4130);
      }
    }
    x_4130->has_var_flex_grow_sum = true;
    x_4130->var_flex_grow_sum = Asdouble(x_4153);
    WriteMetric();
    auto x_4158 = eval_expr_x_4157(x_4130);
    if (x_4130->has_var_flex_shrink_sum) {
      auto x_4159 = x_4130->var_flex_shrink_sum;
      if (!EqualValue(x_4159, x_4158)) {
        var_modified_x_4160(x_4130);
      }
    }
    x_4130->has_var_flex_shrink_sum = true;
    x_4130->var_flex_shrink_sum = Asdouble(x_4158);
    WriteMetric();
    auto x_4163 = eval_expr_x_4162(x_4130);
    if (x_4130->has_var_flex_direction) {
      auto x_4164 = x_4130->var_flex_direction;
      if (!EqualValue(x_4164, x_4163)) {
        var_modified_x_4165(x_4130);
      }
    }
    x_4130->has_var_flex_direction = true;
    x_4130->var_flex_direction = AsDEString(x_4163);
    WriteMetric();
    auto x_4168 = eval_expr_x_4167(x_4130);
    if (x_4130->has_var_is_flex_row) {
      auto x_4169 = x_4130->var_is_flex_row;
      if (!EqualValue(x_4169, x_4168)) {
        var_modified_x_4170(x_4130);
      }
    }
    x_4130->has_var_is_flex_row = true;
    x_4130->var_is_flex_row = Asbool(x_4168);
    WriteMetric();
    auto x_4173 = eval_expr_x_4172(x_4130);
    if (x_4130->has_var_is_flex_column) {
      auto x_4174 = x_4130->var_is_flex_column;
      if (!EqualValue(x_4174, x_4173)) {
        var_modified_x_4175(x_4130);
      }
    }
    x_4130->has_var_is_flex_column = true;
    x_4130->var_is_flex_column = Asbool(x_4173);
    WriteMetric();
    auto x_4178 = eval_expr_x_4177(x_4130);
    if (x_4130->has_var_width_attr_expr) {
      auto x_4179 = x_4130->var_width_attr_expr;
      if (!EqualValue(x_4179, x_4178)) {
        var_modified_x_4180(x_4130);
      }
    }
    x_4130->has_var_width_attr_expr = true;
    x_4130->var_width_attr_expr = AsDEString(x_4178);
    WriteMetric();
    auto x_4183 = eval_expr_x_4182(x_4130);
    if (x_4130->has_var_has_width_attr) {
      auto x_4184 = x_4130->var_has_width_attr;
      if (!EqualValue(x_4184, x_4183)) {
        var_modified_x_4185(x_4130);
      }
    }
    x_4130->has_var_has_width_attr = true;
    x_4130->var_has_width_attr = Asbool(x_4183);
    WriteMetric();
    auto x_4188 = eval_expr_x_4187(x_4130);
    if (x_4130->has_var_height_attr_expr) {
      auto x_4189 = x_4130->var_height_attr_expr;
      if (!EqualValue(x_4189, x_4188)) {
        var_modified_x_4190(x_4130);
      }
    }
    x_4130->has_var_height_attr_expr = true;
    x_4130->var_height_attr_expr = AsDEString(x_4188);
    WriteMetric();
    auto x_4193 = eval_expr_x_4192(x_4130);
    if (x_4130->has_var_has_height_attr) {
      auto x_4194 = x_4130->var_has_height_attr;
      if (!EqualValue(x_4194, x_4193)) {
        var_modified_x_4195(x_4130);
      }
    }
    x_4130->has_var_has_height_attr = true;
    x_4130->var_has_height_attr = Asbool(x_4193);
    WriteMetric();
    auto x_4198 = eval_expr_x_4197(x_4130);
    if (x_4130->has_var_is_svg_block) {
      auto x_4199 = x_4130->var_is_svg_block;
      if (!EqualValue(x_4199, x_4198)) {
        var_modified_x_4200(x_4130);
      }
    }
    x_4130->has_var_is_svg_block = true;
    x_4130->var_is_svg_block = Asbool(x_4198);
    WriteMetric();
    auto x_4203 = eval_expr_x_4202(x_4130);
    if (x_4130->has_var_inside_svg) {
      auto x_4204 = x_4130->var_inside_svg;
      if (!EqualValue(x_4204, x_4203)) {
        var_modified_x_4205(x_4130);
      }
    }
    x_4130->has_var_inside_svg = true;
    x_4130->var_inside_svg = Asbool(x_4203);
    WriteMetric();
    auto x_4208 = eval_expr_x_4207(x_4130);
    if (x_4130->has_var_disabled) {
      auto x_4209 = x_4130->var_disabled;
      if (!EqualValue(x_4209, x_4208)) {
        var_modified_x_4210(x_4130);
      }
    }
    x_4130->has_var_disabled = true;
    x_4130->var_disabled = Asbool(x_4208);
    WriteMetric();
    auto x_4213 = eval_expr_x_4212(x_4130);
    if (x_4130->has_var_visible) {
      auto x_4214 = x_4130->var_visible;
      if (!EqualValue(x_4214, x_4213)) {
        var_modified_x_4215(x_4130);
      }
    }
    x_4130->has_var_visible = true;
    x_4130->var_visible = Asbool(x_4213);
    WriteMetric();
    auto x_4218 = eval_expr_x_4217(x_4130);
    if (x_4130->has_var_line_break) {
      auto x_4219 = x_4130->var_line_break;
      if (!EqualValue(x_4219, x_4218)) {
        var_modified_x_4220(x_4130);
      }
    }
    x_4130->has_var_line_break = true;
    x_4130->var_line_break = Asbool(x_4218);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3980(const auto &x_4222) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4223) {
    WriteMetric();
    auto x_4225 = eval_expr_x_4224(x_4222);
    if (x_4222->has_var_box_width) {
      auto x_4226 = x_4222->var_box_width;
      if (!EqualValue(x_4226, x_4225)) {
        var_modified_x_4227(x_4222);
      }
    }
    x_4222->has_var_box_width = true;
    x_4222->var_box_width = Asdouble(x_4225);
    WriteMetric();
    auto x_4230 = eval_expr_x_4229(x_4222);
    if (x_4222->has_var_box_height) {
      auto x_4231 = x_4222->var_box_height;
      if (!EqualValue(x_4231, x_4230)) {
        var_modified_x_4232(x_4222);
      }
    }
    x_4222->has_var_box_height = true;
    x_4222->var_box_height = Asdouble(x_4230);
    WriteMetric();
    auto x_4235 = eval_expr_x_4234(x_4222);
    if (x_4222->has_var_left_over) {
      auto x_4236 = x_4222->var_left_over;
      if (!EqualValue(x_4236, x_4235)) {
        var_modified_x_4237(x_4222);
      }
    }
    x_4222->has_var_left_over = true;
    x_4222->var_left_over = Asdouble(x_4235);
    WriteMetric();
    auto x_4240 = eval_expr_x_4239(x_4222);
    if (x_4222->has_var_flex_amount) {
      auto x_4241 = x_4222->var_flex_amount;
      if (!EqualValue(x_4241, x_4240)) {
        var_modified_x_4242(x_4222);
      }
    }
    x_4222->has_var_flex_amount = true;
    x_4222->var_flex_amount = Asdouble(x_4240);
    WriteMetric();
    auto x_4245 = eval_expr_x_4244(x_4222);
    if (x_4222->has_var_flex_unit) {
      auto x_4246 = x_4222->var_flex_unit;
      if (!EqualValue(x_4246, x_4245)) {
        var_modified_x_4247(x_4222);
      }
    }
    x_4222->has_var_flex_unit = true;
    x_4222->var_flex_unit = Asdouble(x_4245);
    WriteMetric();
    auto x_4250 = eval_expr_x_4249(x_4222);
    if (x_4222->has_var_x) {
      auto x_4251 = x_4222->var_x;
      if (!EqualValue(x_4251, x_4250)) {
        var_modified_x_4252(x_4222);
      }
    }
    x_4222->has_var_x = true;
    x_4222->var_x = Asdouble(x_4250);
    WriteMetric();
    auto x_4255 = eval_expr_x_4254(x_4222);
    if (x_4222->has_var_width_internal) {
      auto x_4256 = x_4222->var_width_internal;
      if (!EqualValue(x_4256, x_4255)) {
        var_modified_x_4257(x_4222);
      }
    }
    x_4222->has_var_width_internal = true;
    x_4222->var_width_internal = Asdouble(x_4255);
    WriteMetric();
    auto x_4260 = eval_expr_x_4259(x_4222);
    if (x_4222->has_var_width_external) {
      auto x_4261 = x_4222->var_width_external;
      if (!EqualValue(x_4261, x_4260)) {
        var_modified_x_4262(x_4222);
      }
    }
    x_4222->has_var_width_external = true;
    x_4222->var_width_external = Asdouble(x_4260);
    WriteMetric();
    auto x_4265 = eval_expr_x_4264(x_4222);
    if (x_4222->has_var_y) {
      auto x_4266 = x_4222->var_y;
      if (!EqualValue(x_4266, x_4265)) {
        var_modified_x_4267(x_4222);
      }
    }
    x_4222->has_var_y = true;
    x_4222->var_y = Asdouble(x_4265);
    WriteMetric();
    auto x_4270 = eval_expr_x_4269(x_4222);
    if (x_4222->has_var_height_internal) {
      auto x_4271 = x_4222->var_height_internal;
      if (!EqualValue(x_4271, x_4270)) {
        var_modified_x_4272(x_4222);
      }
    }
    x_4222->has_var_height_internal = true;
    x_4222->var_height_internal = Asdouble(x_4270);
    WriteMetric();
    auto x_4275 = eval_expr_x_4274(x_4222);
    if (x_4222->has_var_height_external) {
      auto x_4276 = x_4222->var_height_external;
      if (!EqualValue(x_4276, x_4275)) {
        var_modified_x_4277(x_4222);
      }
    }
    x_4222->has_var_height_external = true;
    x_4222->var_height_external = Asdouble(x_4275);
    WriteMetric();
    auto x_4280 = eval_expr_x_4279(x_4222);
    if (x_4222->has_var_line_height) {
      auto x_4281 = x_4222->var_line_height;
      if (!EqualValue(x_4281, x_4280)) {
        var_modified_x_4282(x_4222);
      }
    }
    x_4222->has_var_line_height = true;
    x_4222->var_line_height = Asdouble(x_4280);
    return MakeUnit();
  })));
}
Unit x_4284(const auto &x_4285) {
  MetaWriteMetric();
  if (!x_4285->meta->pass_1_recursive_proc_dirtied) {
    x_4285->meta->pass_1_has_recursive_proc_dirtied = true;
    x_4285->meta->pass_1_recursive_proc_dirtied = true;
    return OptionMatch(
        x_4285->parent, [&](const auto &x_4287) { return MakeUnit(); },
        [&](const auto &x_4286) { return x_4284(x_4286); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_3933(const auto &x_4285) { return x_4284(x_4285); }
Unit x_4288(const auto &x_4289) {
  MetaWriteMetric();
  if (!x_4289->meta->pass_0_recursive_proc_dirtied) {
    x_4289->meta->pass_0_has_recursive_proc_dirtied = true;
    x_4289->meta->pass_0_recursive_proc_dirtied = true;
    return OptionMatch(
        x_4289->parent, [&](const auto &x_4291) { return MakeUnit(); },
        [&](const auto &x_4290) { return x_4288(x_4290); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_3893(const auto &x_4289) { return x_4288(x_4289); }
Unit x_3861(const auto &x_3862, const auto &x_3863, const auto &x_3864) {
  auto x_3865 = ListHeadExn(x_3862);
  auto x_3866 = ListTailExn(x_3862);
  if (ListIsEmpty(x_3866)) {
    auto x_3867 = ListSplitN(x_3863->children, x_3865);
    OutputChangeMetric(IntAdd(layout_size_x_3819(ListNthExn(x_3863->children, x_3865)), layout_size_x_3819(x_3864)));
    x_3863->children = ListAppend(Zro(x_3867), Cons(x_3864, ListTailExn(Fst(x_3867))));
    return MakeUnit();
  } else {
    return x_3861(x_3866, ListNthExn(x_3863->children, x_3865), x_3864);
  }
}
Unit replace_layout_node_x_3860(const auto &x_3862, const auto &x_3863, const auto &x_3864) {
  return x_3861(x_3862, x_3863, x_3864);
}
Unit x_3868(const auto &x_3869, const auto &x_3870, const auto &x_3871) {
  auto x_3872 = ListHeadExn(x_3869);
  auto x_3873 = ListTailExn(x_3869);
  if (ListIsEmpty(x_3873)) {
    OutputChangeMetric(layout_size_x_3819(x_3871));
    auto x_3874 = ListSplitN(x_3870->children, x_3872);
    x_3870->children = ListAppend(Zro(x_3874), Cons(x_3871, Fst(x_3874)));
    return MakeUnit();
  } else {
    return x_3868(x_3873, ListNthExn(x_3870->children, x_3872), x_3871);
  }
}
Unit add_layout_node_x_3858(const auto &x_3869, const auto &x_3870, const auto &x_3871) {
  return x_3868(x_3869, x_3870, x_3871);
}
Unit x_3875(const auto &x_3876, const auto &x_3877, const auto &x_3878) {
  auto x_3879 = ListHeadExn(x_3876);
  auto x_3880 = ListTailExn(x_3876);
  if (ListIsEmpty(x_3880)) {
    OutputChangeMetric(layout_size_x_3819(ListNthExn(x_3877->children, x_3879)));
    auto x_3881 = ListSplitN(x_3877->children, x_3879);
    x_3877->children = ListAppend(Zro(x_3881), ListTailExn(Fst(x_3881)));
    return MakeUnit();
  } else {
    return x_3875(x_3880, ListNthExn(x_3877->children, x_3879), x_3878);
  }
}
Unit remove_layout_node_x_3856(const auto &x_3876, const auto &x_3877, const auto &x_3878) {
  return x_3875(x_3876, x_3877, x_3878);
}
Unit x_3882(const auto &x_3883, const auto &x_3884, const auto &x_3885) {
  return ListMatch(
      x_3883,
      [&](const auto &x_3888) {
        auto x_3889 = Zro(x_3885);
        auto x_3890 = Zro(x_3889);
        auto x_3891 = Fst(x_3889);
        auto x_3892 = Fst(x_3885);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5601 = x_3890;
        if (x_5601 == "attributes") {
          std::string x_5602 = x_3891;
          if (x_5602 == "width") {
            WriteMetric();
            x_3884->has_attr_width = true;
            x_3884->attr_width = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_1_has_bb_dirtied = true;
              x_3884->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5602 == "image_height") {
            WriteMetric();
            x_3884->has_attr_image_height = true;
            x_3884->attr_image_height = Asint64_t(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_0_has_bb_dirtied = true;
              x_3884->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5602 == "image_width") {
            WriteMetric();
            x_3884->has_attr_image_width = true;
            x_3884->attr_image_width = Asint64_t(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_0_has_bb_dirtied = true;
              x_3884->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5602 == "height") {
            WriteMetric();
            x_3884->has_attr_height = true;
            x_3884->attr_height = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_1_has_bb_dirtied = true;
              x_3884->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5602 == "viewBox") {
            WriteMetric();
            x_3884->has_attr_viewBox = true;
            x_3884->attr_viewBox = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_0_has_bb_dirtied = true;
              x_3884->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5601 == "properties") {
          std::string x_5603 = x_3891;
          if (x_5603 == "width") {
            WriteMetric();
            x_3884->has_prop_width = true;
            x_3884->prop_width = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_0_has_bb_dirtied = true;
              x_3884->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5603 == "flex-grow") {
            WriteMetric();
            x_3884->has_prop_flex_grow = true;
            x_3884->prop_flex_grow = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_1_has_bb_dirtied = true;
              x_3884->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5603 == "height") {
            WriteMetric();
            x_3884->has_prop_height = true;
            x_3884->prop_height = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_0_has_bb_dirtied = true;
              x_3884->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5603 == "display") {
            WriteMetric();
            x_3884->has_prop_display = true;
            x_3884->prop_display = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_1_has_bb_dirtied = true;
              x_3884->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5603 == "position") {
            WriteMetric();
            x_3884->has_prop_position = true;
            x_3884->prop_position = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_1_has_bb_dirtied = true;
              x_3884->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5603 == "flex-shrink") {
            WriteMetric();
            x_3884->has_prop_flex_shrink = true;
            x_3884->prop_flex_shrink = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_1_has_bb_dirtied = true;
              x_3884->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5603 == "flex-direction") {
            WriteMetric();
            x_3884->has_prop_flex_direction = true;
            x_3884->prop_flex_direction = AsDEString(x_3892);
            if (x_3884->meta->pass_0_proc_inited) {
              x_3884->meta->bb_1_has_bb_dirtied = true;
              x_3884->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3884);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3886, const auto &x_3887) {
        return x_3882(x_3887, ListNthExn(x_3884->children, x_3886), x_3885);
      });
}
Unit insert_value_x_3854(const auto &x_3883, const auto &x_3884, const auto &x_3885) {
  return x_3882(x_3883, x_3884, x_3885);
}
Unit x_3894(const auto &x_3895, const auto &x_3896, const auto &x_3897) {
  return ListMatch(
      x_3895,
      [&](const auto &x_3900) {
        auto x_3901 = Zro(x_3897);
        auto x_3902 = Fst(x_3897);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5604 = x_3901;
        if (x_5604 == "attributes") {
          std::string x_5605 = x_3902;
          if (x_5605 == "width") {
            WriteMetric();
            x_3896->has_attr_width = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_1_has_bb_dirtied = true;
              x_3896->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5605 == "image_height") {
            WriteMetric();
            x_3896->has_attr_image_height = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_0_has_bb_dirtied = true;
              x_3896->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5605 == "image_width") {
            WriteMetric();
            x_3896->has_attr_image_width = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_0_has_bb_dirtied = true;
              x_3896->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5605 == "height") {
            WriteMetric();
            x_3896->has_attr_height = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_1_has_bb_dirtied = true;
              x_3896->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5605 == "viewBox") {
            WriteMetric();
            x_3896->has_attr_viewBox = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_0_has_bb_dirtied = true;
              x_3896->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5604 == "properties") {
          std::string x_5606 = x_3902;
          if (x_5606 == "width") {
            WriteMetric();
            x_3896->has_prop_width = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_0_has_bb_dirtied = true;
              x_3896->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5606 == "flex-grow") {
            WriteMetric();
            x_3896->has_prop_flex_grow = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_1_has_bb_dirtied = true;
              x_3896->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5606 == "height") {
            WriteMetric();
            x_3896->has_prop_height = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_0_has_bb_dirtied = true;
              x_3896->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5606 == "display") {
            WriteMetric();
            x_3896->has_prop_display = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_1_has_bb_dirtied = true;
              x_3896->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5606 == "position") {
            WriteMetric();
            x_3896->has_prop_position = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_1_has_bb_dirtied = true;
              x_3896->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5606 == "flex-shrink") {
            WriteMetric();
            x_3896->has_prop_flex_shrink = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_1_has_bb_dirtied = true;
              x_3896->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5606 == "flex-direction") {
            WriteMetric();
            x_3896->has_prop_flex_direction = false;
            if (x_3896->meta->pass_0_proc_inited) {
              x_3896->meta->bb_1_has_bb_dirtied = true;
              x_3896->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3896);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3898, const auto &x_3899) {
        return x_3894(x_3899, ListNthExn(x_3896->children, x_3898), x_3897);
      });
}
Unit delete_value_x_3852(const auto &x_3895, const auto &x_3896, const auto &x_3897) {
  return x_3894(x_3895, x_3896, x_3897);
}
Unit x_3903(const auto &x_3904, const auto &x_3905, const auto &x_3906) {
  return ListMatch(
      x_3904,
      [&](const auto &x_3909) {
        auto x_3910 = Zro(x_3906);
        auto x_3911 = Zro(x_3910);
        auto x_3912 = Fst(x_3910);
        auto x_3913 = Fst(x_3906);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5607 = x_3911;
        if (x_5607 == "attributes") {
          std::string x_5608 = x_3912;
          if (x_5608 == "width") {
            WriteMetric();
            x_3905->has_attr_width = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_attr_width = true;
            x_3905->attr_width = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5608 == "image_height") {
            WriteMetric();
            x_3905->has_attr_image_height = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_attr_image_height = true;
            x_3905->attr_image_height = Asint64_t(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5608 == "image_width") {
            WriteMetric();
            x_3905->has_attr_image_width = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_attr_image_width = true;
            x_3905->attr_image_width = Asint64_t(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5608 == "height") {
            WriteMetric();
            x_3905->has_attr_height = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_attr_height = true;
            x_3905->attr_height = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5608 == "viewBox") {
            WriteMetric();
            x_3905->has_attr_viewBox = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_attr_viewBox = true;
            x_3905->attr_viewBox = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5607 == "properties") {
          std::string x_5609 = x_3912;
          if (x_5609 == "width") {
            WriteMetric();
            x_3905->has_prop_width = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_prop_width = true;
            x_3905->prop_width = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5609 == "flex-grow") {
            WriteMetric();
            x_3905->has_prop_flex_grow = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_prop_flex_grow = true;
            x_3905->prop_flex_grow = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5609 == "height") {
            WriteMetric();
            x_3905->has_prop_height = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_prop_height = true;
            x_3905->prop_height = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_0_has_bb_dirtied = true;
              x_3905->meta->bb_0_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5609 == "display") {
            WriteMetric();
            x_3905->has_prop_display = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_prop_display = true;
            x_3905->prop_display = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5609 == "position") {
            WriteMetric();
            x_3905->has_prop_position = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_prop_position = true;
            x_3905->prop_position = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5609 == "flex-shrink") {
            WriteMetric();
            x_3905->has_prop_flex_shrink = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_prop_flex_shrink = true;
            x_3905->prop_flex_shrink = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_5609 == "flex-direction") {
            WriteMetric();
            x_3905->has_prop_flex_direction = false;
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            x_3905->has_prop_flex_direction = true;
            x_3905->prop_flex_direction = AsDEString(x_3913);
            if (x_3905->meta->pass_0_proc_inited) {
              x_3905->meta->bb_1_has_bb_dirtied = true;
              x_3905->meta->bb_1_bb_dirtied = true;
              set_recursive_proc_dirtied_x_3893(x_3905);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3907, const auto &x_3908) {
        return x_3903(x_3908, ListNthExn(x_3905->children, x_3907), x_3906);
      });
}
Unit replace_value_x_3850(const auto &x_3904, const auto &x_3905, const auto &x_3906) {
  return x_3903(x_3904, x_3905, x_3906);
}
Unit x_3914(const auto &x_3915, const auto &x_3916, const auto &x_3917) {
  auto x_3918 = ListHeadExn(x_3915);
  auto x_3919 = ListTailExn(x_3915);
  if (ListIsEmpty(x_3919)) {
    InputChangeMetric(IntAdd(node_size_x_3820(ListNthExn(x_3916->children, x_3918)), node_size_x_3820(x_3917)));
    auto x_3920 = ListSplitN(x_3916->children, x_3918);
    auto x_3921 = Zro(x_3920);
    auto x_3922 = Fst(x_3920);
    auto x_3923 = ListHeadExn(x_3922);
    auto x_3924 = ListTailExn(x_3922);
    x_3916->children = ListAppend(x_3921, x_3924);
    OptionMatch(
        x_3923->prev, [&](const auto &x_3926) { return MakeUnit(); },
        [&](const auto &x_3925) {
          x_3925->next = ToPath(x_3923->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3923->next, [&](const auto &x_3928) { return MakeUnit(); },
        [&](const auto &x_3927) {
          x_3927->prev = ToPath(x_3923->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3921)) {
      x_3916->first = ToPath(ListHead(x_3924));
    }
    if (ListIsEmpty(x_3924)) {
      x_3916->last = ToPath(ListLast(x_3921));
    }
    OptionMatch(
        x_3923->next, [&](const auto &x_3930) { return MakeUnit(); },
        [&](const auto &x_3929) {
          if (x_3929->meta->pass_0_proc_inited) {
            x_3929->meta->bb_1_has_bb_dirtied = true;
            x_3929->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_3929);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3916->children)) {
      if (x_3916->meta->pass_0_proc_inited) {
        x_3916->meta->bb_0_has_bb_dirtied = true;
        x_3916->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3924)) {
      if (x_3916->meta->pass_0_proc_inited) {
        x_3916->meta->bb_0_has_bb_dirtied = true;
        x_3916->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3923->next, [&](const auto &x_3932) { return MakeUnit(); },
        [&](const auto &x_3931) {
          if (x_3931->meta->pass_0_proc_inited) {
            x_3931->meta->bb_0_has_bb_dirtied = true;
            x_3931->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_3931);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3916->children)) {
      if (x_3916->meta->pass_1_proc_inited) {
        x_3916->meta->bb_2_has_bb_dirtied = true;
        x_3916->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3924)) {
      if (x_3916->meta->pass_1_proc_inited) {
        x_3916->meta->bb_2_has_bb_dirtied = true;
        x_3916->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3923->next, [&](const auto &x_3935) { return MakeUnit(); },
        [&](const auto &x_3934) {
          if (x_3934->meta->pass_1_proc_inited) {
            x_3934->meta->bb_2_has_bb_dirtied = true;
            x_3934->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3933(x_3934);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    auto x_3936 = ListSplitN(x_3916->children, x_3918);
    auto x_3937 = Zro(x_3936);
    auto x_3938 = Fst(x_3936);
    x_3916->children = ListAppend(x_3937, Cons(x_3917, x_3938));
    if (ListIsEmpty(x_3937)) {
      x_3916->first = x_3917.get();
    }
    if (ListIsEmpty(x_3938)) {
      x_3916->last = x_3917.get();
    }
    OptionMatch(
        ListLast(x_3937),
        [&](const auto &x_3940) {
          x_3917->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3939) {
          x_3917->prev = x_3939.get();
          x_3939->next = x_3917.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3938),
        [&](const auto &x_3942) {
          x_3917->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3941) {
          x_3917->next = x_3941.get();
          x_3941->prev = x_3917.get();
          return MakeUnit();
        });
    x_3917->parent = x_3916.get();
    x_3917->meta->pass_0_has_recursive_proc_dirtied = true;
    x_3917->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_3893(x_3917);
    OptionMatch(
        x_3917->next, [&](const auto &x_3944) { return MakeUnit(); },
        [&](const auto &x_3943) {
          if (x_3943->meta->pass_0_proc_inited) {
            x_3943->meta->bb_1_has_bb_dirtied = true;
            x_3943->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_3943);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_3916->children)) {
      if (x_3916->meta->pass_0_proc_inited) {
        x_3916->meta->bb_0_has_bb_dirtied = true;
        x_3916->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3938)) {
      if (x_3916->meta->pass_0_proc_inited) {
        x_3916->meta->bb_0_has_bb_dirtied = true;
        x_3916->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3917->next, [&](const auto &x_3946) { return MakeUnit(); },
        [&](const auto &x_3945) {
          if (x_3945->meta->pass_0_proc_inited) {
            x_3945->meta->bb_0_has_bb_dirtied = true;
            x_3945->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_3945);
          } else {
            return MetaWriteMetric();
          }
        });
    x_3917->meta->pass_1_has_recursive_proc_dirtied = true;
    x_3917->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_3933(x_3917);
    if (ListIsSingleton(x_3916->children)) {
      if (x_3916->meta->pass_1_proc_inited) {
        x_3916->meta->bb_2_has_bb_dirtied = true;
        x_3916->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3938)) {
      if (x_3916->meta->pass_1_proc_inited) {
        x_3916->meta->bb_2_has_bb_dirtied = true;
        x_3916->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3916);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3917->next, [&](const auto &x_3948) { return MakeUnit(); },
        [&](const auto &x_3947) {
          if (x_3947->meta->pass_1_proc_inited) {
            x_3947->meta->bb_2_has_bb_dirtied = true;
            x_3947->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3933(x_3947);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3914(x_3919, ListNthExn(x_3916->children, x_3918), x_3917);
  }
}
Unit replace_node_x_3848(const auto &x_3915, const auto &x_3916, const auto &x_3917) {
  return x_3914(x_3915, x_3916, x_3917);
}
Unit x_3949(const auto &x_3950) {
  ListIter2(x_3950->children, [&](const auto &x_3951, const auto &x_3952) {
    x_3951->parent = x_3950.get();
    x_3952->parent = x_3950.get();
    x_3951->next = x_3952.get();
    x_3952->prev = x_3951.get();
    x_3949(x_3951);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3950->children),
      [&](const auto &x_3954) {
        x_3950->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3953) {
        x_3950->first = x_3953.get();
        x_3953->parent = x_3950.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3950->children),
      [&](const auto &x_3956) {
        x_3950->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3955) {
        x_3950->last = x_3955.get();
        x_3955->parent = x_3950.get();
        x_3949(x_3955);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3846(const auto &x_3950) { return x_3949(x_3950); }
Unit x_3957(const auto &x_3958, const auto &x_3959, const auto &x_3960) {
  auto x_3961 = ListHeadExn(x_3958);
  auto x_3962 = ListTailExn(x_3958);
  if (ListIsEmpty(x_3962)) {
    InputChangeMetric(node_size_x_3820(ListNthExn(x_3959->children, x_3961)));
    auto x_3963 = ListSplitN(x_3959->children, x_3961);
    auto x_3964 = Zro(x_3963);
    auto x_3965 = Fst(x_3963);
    auto x_3966 = ListHeadExn(x_3965);
    auto x_3967 = ListTailExn(x_3965);
    x_3959->children = ListAppend(x_3964, x_3967);
    OptionMatch(
        x_3966->prev, [&](const auto &x_3969) { return MakeUnit(); },
        [&](const auto &x_3968) {
          x_3968->next = ToPath(x_3966->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3966->next, [&](const auto &x_3971) { return MakeUnit(); },
        [&](const auto &x_3970) {
          x_3970->prev = ToPath(x_3966->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3964)) {
      x_3959->first = ToPath(ListHead(x_3967));
    }
    if (ListIsEmpty(x_3967)) {
      x_3959->last = ToPath(ListLast(x_3964));
    }
    OptionMatch(
        x_3966->next, [&](const auto &x_3973) { return MakeUnit(); },
        [&](const auto &x_3972) {
          if (x_3972->meta->pass_0_proc_inited) {
            x_3972->meta->bb_1_has_bb_dirtied = true;
            x_3972->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_3972);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3959->children)) {
      if (x_3959->meta->pass_0_proc_inited) {
        x_3959->meta->bb_0_has_bb_dirtied = true;
        x_3959->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3959);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3967)) {
      if (x_3959->meta->pass_0_proc_inited) {
        x_3959->meta->bb_0_has_bb_dirtied = true;
        x_3959->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3959);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3966->next, [&](const auto &x_3975) { return MakeUnit(); },
        [&](const auto &x_3974) {
          if (x_3974->meta->pass_0_proc_inited) {
            x_3974->meta->bb_0_has_bb_dirtied = true;
            x_3974->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_3974);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3959->children)) {
      if (x_3959->meta->pass_1_proc_inited) {
        x_3959->meta->bb_2_has_bb_dirtied = true;
        x_3959->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3959);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3967)) {
      if (x_3959->meta->pass_1_proc_inited) {
        x_3959->meta->bb_2_has_bb_dirtied = true;
        x_3959->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3959);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3966->next, [&](const auto &x_3977) { return MakeUnit(); },
        [&](const auto &x_3976) {
          if (x_3976->meta->pass_1_proc_inited) {
            x_3976->meta->bb_2_has_bb_dirtied = true;
            x_3976->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3933(x_3976);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_3957(x_3962, ListNthExn(x_3959->children, x_3961), x_3960);
  }
}
Unit remove_node_x_3844(const auto &x_3958, const auto &x_3959, const auto &x_3960) {
  return x_3957(x_3958, x_3959, x_3960);
}
Unit x_3978(const auto &x_3979) {
  MetaReadMetric();
  if (x_3979->meta->pass_1_recursive_proc_dirtied) {
    if (x_3979->meta->pass_1_proc_inited) {
      if (x_3979->meta->bb_2_bb_dirtied) {
        eval_stmts_x_3980(x_3979);
        x_3979->meta->bb_2_has_bb_dirtied = true;
        x_3979->meta->bb_2_bb_dirtied = false;
      }
      ListIter(x_3979->children, [&](const auto &x_3981) { return x_3978(x_3981); });
      MakeUnit();
    } else {
      x_3979->meta->pass_1_proc_inited = true;
      eval_stmts_x_3833(x_3979);
    }
  }
  x_3979->meta->pass_1_has_recursive_proc_dirtied = true;
  x_3979->meta->pass_1_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_3842(const auto &x_3979) { return x_3978(x_3979); }
Unit x_3982(const auto &x_3983) {
  MetaReadMetric();
  if (x_3983->meta->pass_0_recursive_proc_dirtied) {
    if (x_3983->meta->pass_0_proc_inited) {
      if (x_3983->meta->bb_1_bb_dirtied) {
        eval_stmts_x_3984(x_3983);
        x_3983->meta->bb_1_has_bb_dirtied = true;
        x_3983->meta->bb_1_bb_dirtied = false;
      }
      ListIter(x_3983->children, [&](const auto &x_3985) { return x_3982(x_3985); });
      if (x_3983->meta->bb_0_bb_dirtied) {
        eval_stmts_x_3986(x_3983);
        x_3983->meta->bb_0_has_bb_dirtied = true;
        x_3983->meta->bb_0_bb_dirtied = false;
      }
      MakeUnit();
    } else {
      x_3983->meta->pass_0_proc_inited = true;
      eval_stmts_x_3832(x_3983);
    }
  }
  x_3983->meta->pass_0_has_recursive_proc_dirtied = true;
  x_3983->meta->pass_0_recursive_proc_dirtied = false;
  return MakeUnit();
}
Unit recalculate_internal_x_3841(const auto &x_3983) { return x_3982(x_3983); }
Unit x_3987(const auto &x_3988, const auto &x_3989, const auto &x_3990) {
  auto x_3991 = ListHeadExn(x_3988);
  auto x_3992 = ListTailExn(x_3988);
  if (ListIsEmpty(x_3992)) {
    InputChangeMetric(node_size_x_3820(x_3990));
    auto x_3993 = ListSplitN(x_3989->children, x_3991);
    auto x_3994 = Zro(x_3993);
    auto x_3995 = Fst(x_3993);
    x_3989->children = ListAppend(x_3994, Cons(x_3990, x_3995));
    if (ListIsEmpty(x_3994)) {
      x_3989->first = x_3990.get();
    }
    if (ListIsEmpty(x_3995)) {
      x_3989->last = x_3990.get();
    }
    OptionMatch(
        ListLast(x_3994),
        [&](const auto &x_3997) {
          x_3990->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3996) {
          x_3990->prev = x_3996.get();
          x_3996->next = x_3990.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3995),
        [&](const auto &x_3999) {
          x_3990->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3998) {
          x_3990->next = x_3998.get();
          x_3998->prev = x_3990.get();
          return MakeUnit();
        });
    x_3990->parent = x_3989.get();
    x_3990->meta->pass_0_has_recursive_proc_dirtied = true;
    x_3990->meta->pass_0_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_3893(x_3990);
    OptionMatch(
        x_3990->next, [&](const auto &x_4001) { return MakeUnit(); },
        [&](const auto &x_4000) {
          if (x_4000->meta->pass_0_proc_inited) {
            x_4000->meta->bb_1_has_bb_dirtied = true;
            x_4000->meta->bb_1_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_4000);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_3989->children)) {
      if (x_3989->meta->pass_0_proc_inited) {
        x_3989->meta->bb_0_has_bb_dirtied = true;
        x_3989->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3989);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3995)) {
      if (x_3989->meta->pass_0_proc_inited) {
        x_3989->meta->bb_0_has_bb_dirtied = true;
        x_3989->meta->bb_0_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3893(x_3989);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3990->next, [&](const auto &x_4003) { return MakeUnit(); },
        [&](const auto &x_4002) {
          if (x_4002->meta->pass_0_proc_inited) {
            x_4002->meta->bb_0_has_bb_dirtied = true;
            x_4002->meta->bb_0_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3893(x_4002);
          } else {
            return MetaWriteMetric();
          }
        });
    x_3990->meta->pass_1_has_recursive_proc_dirtied = true;
    x_3990->meta->pass_1_recursive_proc_dirtied = false;
    set_recursive_proc_dirtied_x_3933(x_3990);
    if (ListIsSingleton(x_3989->children)) {
      if (x_3989->meta->pass_1_proc_inited) {
        x_3989->meta->bb_2_has_bb_dirtied = true;
        x_3989->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3989);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3995)) {
      if (x_3989->meta->pass_1_proc_inited) {
        x_3989->meta->bb_2_has_bb_dirtied = true;
        x_3989->meta->bb_2_bb_dirtied = true;
        set_recursive_proc_dirtied_x_3933(x_3989);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3990->next, [&](const auto &x_4005) { return MakeUnit(); },
        [&](const auto &x_4004) {
          if (x_4004->meta->pass_1_proc_inited) {
            x_4004->meta->bb_2_has_bb_dirtied = true;
            x_4004->meta->bb_2_bb_dirtied = true;
            return set_recursive_proc_dirtied_x_3933(x_4004);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_3987(x_3992, ListNthExn(x_3989->children, x_3991), x_3990);
  }
}
Unit add_node_x_3839(const auto &x_3988, const auto &x_3989, const auto &x_3990) {
  return x_3987(x_3988, x_3989, x_3990);
}
Unit x_4006(const auto &x_4007) {
  ListIter2(x_4007->children, [&](const auto &x_4008, const auto &x_4009) {
    x_4008->parent = x_4007.get();
    x_4009->parent = x_4007.get();
    x_4008->next = x_4009.get();
    x_4009->prev = x_4008.get();
    x_4006(x_4008);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4007->children),
      [&](const auto &x_4011) {
        x_4007->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4010) {
        x_4007->first = x_4010.get();
        x_4010->parent = x_4007.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4007->children),
      [&](const auto &x_4013) {
        x_4007->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4012) {
        x_4007->last = x_4012.get();
        x_4012->parent = x_4007.get();
        x_4006(x_4012);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3837(const auto &x_4007) { return x_4006(x_4007); }
Unit eval_stmts_x_3833(const auto &x_4014) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4015) {
    x_4014->meta->bb_2_has_bb_dirtied = true;
    x_4014->meta->bb_2_bb_dirtied = false;
    eval_stmts_x_3980(x_4014);
    ListIter(x_4014->children, [&](const auto &x_4016) {
      x_4016->meta->pass_1_proc_inited = true;
      x_4016->meta->pass_1_has_recursive_proc_dirtied = true;
      x_4016->meta->pass_1_recursive_proc_dirtied = false;
      eval_stmts_x_3833(x_4016);
      return MakeUnit();
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3832(const auto &x_4017) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4018) {
    x_4017->meta->bb_1_has_bb_dirtied = true;
    x_4017->meta->bb_1_bb_dirtied = false;
    eval_stmts_x_3984(x_4017);
    ListIter(x_4017->children, [&](const auto &x_4019) {
      x_4019->meta->pass_0_proc_inited = true;
      x_4019->meta->pass_0_has_recursive_proc_dirtied = true;
      x_4019->meta->pass_0_recursive_proc_dirtied = false;
      eval_stmts_x_3832(x_4019);
      return MakeUnit();
    });
    x_4017->meta->bb_0_has_bb_dirtied = true;
    x_4017->meta->bb_0_bb_dirtied = false;
    eval_stmts_x_3986(x_4017);
    return MakeUnit();
  })));
}
Unit x_4020(const auto &x_4021) {
  ListIter2(x_4021->children, [&](const auto &x_4022, const auto &x_4023) {
    x_4022->parent = x_4021.get();
    x_4023->parent = x_4021.get();
    x_4022->next = x_4023.get();
    x_4023->prev = x_4022.get();
    x_4020(x_4022);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4021->children),
      [&](const auto &x_4025) {
        x_4021->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4024) {
        x_4021->first = x_4024.get();
        x_4024->parent = x_4021.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4021->children),
      [&](const auto &x_4027) {
        x_4021->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4026) {
        x_4021->last = x_4026.get();
        x_4026->parent = x_4021.get();
        x_4020(x_4026);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3829(const auto &x_4021) { return x_4020(x_4021); }
int64_t x_4028(const auto &x_4029) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4029->children, [&](const auto &x_4030) { return x_4028(x_4030); }));
}
int64_t node_size_x_3820(const auto &x_4029) { return x_4028(x_4029); }
int64_t x_4031(const auto &x_4032) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4032->children, [&](const auto &x_4033) { return x_4031(x_4033); }));
}
int64_t layout_size_x_3819(const auto &x_4032) { return x_4031(x_4032); }
LayoutNode x_4034(const auto &x_4035) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_4035)), [&](const auto &x_4036) { return x_4034(x_4036); }));
}
LayoutNode json_to_layout_node_x_3818(const auto &x_4035) { return x_4034(x_4035); }
Node x_4037(const auto &x_4038) {
  return MakeNode(x_4038->name, x_4038->attr, x_4038->prop, x_4038->extern_id,
                  ListMap(x_4038->children, [&](const auto &x_4039) { return x_4037(x_4039); }));
}
Node node_to_fs_node_x_3817(const auto &x_4038) { return x_4037(x_4038); }
Node x_4040(const auto &x_4041) {
  return MakeNode(
      JsonToString(JsonMember("name", x_4041)), JsonToDict(JsonMember("attributes", x_4041)),
      JsonToDict(JsonMember("properties", x_4041)), JsonToInt(JsonMember("id", x_4041)),
      ListMap(JsonToList(JsonMember("children", x_4041)), [&](const auto &x_4042) { return x_4040(x_4042); }));
}
Node json_to_node_aux_x_3816(const auto &x_4041) { return x_4040(x_4041); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_3821) {
    PrintEndline("RUNNING DB_D");
    return WithInFile("command.json", [&](const auto &x_3822) {
      auto x_3823 = MakeRef(static_cast<int64_t>(0));
      auto x_3824 = FreshMetric();
      auto x_3825 = JsonOfString(InputLine(x_3822));
      auto x_3826 = JsonOfString(InputLine(x_3822));
      auto x_3827 = MakeStack();
      PushStack(x_3827, x_3825);
      PushStack(x_3827, x_3826);
      Assert(StringEqual(JsonToString(JsonMember("name", x_3825)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_3826)), "layout_init"));
      auto x_3830 = [&]() {
        auto x_3828 = json_to_node_aux_x_3816(JsonMember("node", x_3825));
        x_3828->parent = nullptr;
        x_3828->prev = nullptr;
        x_3828->next = nullptr;
        set_children_relation_x_3829(x_3828);
        return x_3828;
      }();
      auto x_3831 = json_to_layout_node_x_3818(JsonMember("node", x_3826));
      OutputChangeMetric(layout_size_x_3819(x_3831));
      InputChangeMetric(node_size_x_3820(x_3830));
      x_3830->meta->pass_0_proc_inited = true;
      x_3830->meta->pass_0_has_recursive_proc_dirtied = true;
      x_3830->meta->pass_0_recursive_proc_dirtied = false;
      eval_stmts_x_3832(x_3830);
      x_3830->meta->pass_1_proc_inited = true;
      x_3830->meta->pass_1_has_recursive_proc_dirtied = true;
      x_3830->meta->pass_1_recursive_proc_dirtied = false;
      eval_stmts_x_3833(x_3830);
      JsonToChannel(x_3821, [&]() {
        auto x_5610 = FreshJson();
        WriteJson(x_5610, "name", "DB_D");
        WriteJson(x_5610, "diff_num", ReadRef(x_3823));
        WriteJson(x_5610, "read_count", MetricReadCount());
        WriteJson(x_5610, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_5610, "write_count", MetricWriteCount());
        WriteJson(x_5610, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_5610, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_5610, "input_change_count", MetricInputChangeCount());
        WriteJson(x_5610, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_5610, "overhead_time", MetricOverheadCount());
        WriteJson(x_5610, "eval_time", MetricEvalCount());
        WriteJson(x_5610, "html", "");
        WriteJson(x_5610, "command", StackToList(x_3827));
        return x_5610;
      }());
      OutputString(x_3821, "\n");
      ClearStack(x_3827);
      WriteRef(x_3823, IntAdd(ReadRef(x_3823), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_3822, [&](const auto &x_3834) {
        auto x_3835 = JsonOfString(x_3834);
        PushStack(x_3827, x_3835);
        std::string x_5612 = JsonToString(JsonMember("name", x_3835));
        if (x_5612 == "add") {
          return add_node_x_3839(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3838) { return JsonToInt(x_3838); }),
              x_3830, [&]() {
                auto x_3836 = json_to_node_aux_x_3816(JsonMember("node", x_3835));
                x_3836->parent = nullptr;
                x_3836->prev = nullptr;
                x_3836->next = nullptr;
                set_children_relation_x_3837(x_3836);
                return x_3836;
              }());
        } else if (x_5612 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_3840) {
            recalculate_internal_x_3841(x_3830);
            recalculate_internal_x_3842(x_3830);
            return MakeUnit();
          })));
          JsonToChannel(x_3821, [&]() {
            auto x_5611 = FreshJson();
            WriteJson(x_5611, "name", "DB_D");
            WriteJson(x_5611, "diff_num", ReadRef(x_3823));
            WriteJson(x_5611, "read_count", MetricReadCount());
            WriteJson(x_5611, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_5611, "write_count", MetricWriteCount());
            WriteJson(x_5611, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_5611, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_5611, "input_change_count", MetricInputChangeCount());
            WriteJson(x_5611, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_5611, "overhead_time", MetricOverheadCount());
            WriteJson(x_5611, "eval_time", MetricEvalCount());
            WriteJson(x_5611, "html", "");
            WriteJson(x_5611, "command", StackToList(x_3827));
            return x_5611;
          }());
          OutputString(x_3821, "\n");
          ClearStack(x_3827);
          WriteRef(x_3823, IntAdd(ReadRef(x_3823), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5612 == "remove") {
          return remove_node_x_3844(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3843) { return JsonToInt(x_3843); }),
              x_3830, MakeUnit());
        } else if (x_5612 == "replace") {
          return replace_node_x_3848(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3847) { return JsonToInt(x_3847); }),
              x_3830, [&]() {
                auto x_3845 = json_to_node_aux_x_3816(JsonMember("node", x_3835));
                x_3845->parent = nullptr;
                x_3845->prev = nullptr;
                x_3845->next = nullptr;
                set_children_relation_x_3846(x_3845);
                return x_3845;
              }());
        } else if (x_5612 == "replace_value") {
          return replace_value_x_3850(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3849) { return JsonToInt(x_3849); }),
              x_3830,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3835)), JsonToString(JsonMember("key", x_3835))),
                       JsonToValue(JsonMember("value", x_3835))));
        } else if (x_5612 == "delete_value") {
          return delete_value_x_3852(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3851) { return JsonToInt(x_3851); }),
              x_3830, MakePair(JsonToString(JsonMember("type", x_3835)), JsonToString(JsonMember("key", x_3835))));
        } else if (x_5612 == "insert_value") {
          return insert_value_x_3854(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3853) { return JsonToInt(x_3853); }),
              x_3830,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3835)), JsonToString(JsonMember("key", x_3835))),
                       JsonToValue(JsonMember("value", x_3835))));
        } else if (x_5612 == "layout_remove") {
          return remove_layout_node_x_3856(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3855) { return JsonToInt(x_3855); }),
              x_3831, MakeUnit());
        } else if (x_5612 == "layout_add") {
          return add_layout_node_x_3858(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3857) { return JsonToInt(x_3857); }),
              x_3831, json_to_layout_node_x_3818(JsonMember("node", x_3835)));
        } else if (x_5612 == "layout_replace") {
          return replace_layout_node_x_3860(
              ListMap(JsonToList(JsonMember("path", x_3835)), [&](const auto &x_3859) { return JsonToInt(x_3859); }),
              x_3831, json_to_layout_node_x_3818(JsonMember("node", x_3835)));
        } else if (x_5612 == "layout_info_changed") {
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