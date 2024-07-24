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
Unit var_modified_x_4379(const auto &x_4381);
auto eval_expr_x_4376(const auto &x_4403);
Unit var_modified_x_4374(const auto &x_4480);
auto eval_expr_x_4371(const auto &x_4486);
Unit var_modified_x_4369(const auto &x_4503);
auto eval_expr_x_4366(const auto &x_4517);
Unit var_modified_x_4364(const auto &x_4522);
auto eval_expr_x_4361(const auto &x_4536);
Unit var_modified_x_4359(const auto &x_4545);
auto eval_expr_x_4356(const auto &x_4551);
Unit var_modified_x_4354(const auto &x_4552);
auto eval_expr_x_4351(const auto &x_4558);
Unit var_modified_x_4349(const auto &x_4563);
auto eval_expr_x_4346(const auto &x_4573);
Unit var_modified_x_4344(const auto &x_4584);
auto eval_expr_x_4341(const auto &x_4590);
Unit var_modified_x_4339(const auto &x_4595);
auto eval_expr_x_4336(const auto &x_4605);
Unit var_modified_x_4334(const auto &x_4616);
auto eval_expr_x_4331(const auto &x_4626);
Unit var_modified_x_4329(const auto &x_4651);
auto eval_expr_x_4326(const auto &x_4665);
Unit var_modified_x_4324(const auto &x_4690);
auto eval_expr_x_4321(const auto &x_4696);
Unit var_modified_x_4319(const auto &x_4699);
auto eval_expr_x_4316(const auto &x_4711);
Unit var_modified_x_4314(const auto &x_4720);
auto eval_expr_x_4311(const auto &x_4732);
Unit var_modified_x_4309(const auto &x_4741);
auto eval_expr_x_4306(const auto &x_4751);
Unit var_modified_x_4304(const auto &x_4754);
auto eval_expr_x_4301(const auto &x_4764);
Unit var_modified_x_4299(const auto &x_4767);
auto eval_expr_x_4296(const auto &x_4781);
Unit var_modified_x_4294(const auto &x_4784);
auto eval_expr_x_4291(const auto &x_4798);
Unit var_modified_x_4287(const auto &x_4801);
auto eval_expr_x_4284(const auto &x_4815);
Unit var_modified_x_4282(const auto &x_4844);
auto eval_expr_x_4279(const auto &x_4858);
Unit var_modified_x_4277(const auto &x_4871);
auto eval_expr_x_4274(const auto &x_4885);
Unit var_modified_x_4272(const auto &x_4894);
auto eval_expr_x_4269(const auto &x_4900);
Unit var_modified_x_4267(const auto &x_4909);
auto eval_expr_x_4264(const auto &x_4919);
Unit var_modified_x_4262(const auto &x_5064);
auto eval_expr_x_4259(const auto &x_5070);
Unit var_modified_x_4257(const auto &x_5119);
auto eval_expr_x_4254(const auto &x_5129);
Unit var_modified_x_4252(const auto &x_5132);
auto eval_expr_x_4249(const auto &x_5138);
Unit var_modified_x_4247(const auto &x_5147);
auto eval_expr_x_4244(const auto &x_5161);
Unit var_modified_x_4242(const auto &x_5170);
auto eval_expr_x_4239(const auto &x_5184);
Unit var_modified_x_4237(const auto &x_5193);
auto eval_expr_x_4234(const auto &x_5205);
Unit var_modified_x_4232(const auto &x_5218);
auto eval_expr_x_4229(const auto &x_5224);
Unit var_modified_x_4227(const auto &x_5233);
auto eval_expr_x_4224(const auto &x_5243);
Unit var_modified_x_4222(const auto &x_5396);
auto eval_expr_x_4219(const auto &x_5402);
Unit var_modified_x_4217(const auto &x_5407);
auto eval_expr_x_4214(const auto &x_5413);
Unit var_modified_x_4212(const auto &x_5462);
auto eval_expr_x_4209(const auto &x_5468);
Unit var_modified_x_4207(const auto &x_5481);
auto eval_expr_x_4204(const auto &x_5491);
Unit var_modified_x_4200(const auto &x_5494);
auto eval_expr_x_4197(const auto &x_5502);
Unit var_modified_x_4195(const auto &x_5519);
auto eval_expr_x_4192(const auto &x_5525);
Unit var_modified_x_4190(const auto &x_5534);
auto eval_expr_x_4187(const auto &x_5544);
Unit var_modified_x_4185(const auto &x_5597);
auto eval_expr_x_4182(const auto &x_5609);
Unit var_modified_x_4180(const auto &x_5634);
auto eval_expr_x_4177(const auto &x_5642);
Unit var_modified_x_4175(const auto &x_5651);
auto eval_expr_x_4172(const auto &x_5661);
Unit var_modified_x_4170(const auto &x_5714);
auto eval_expr_x_4167(const auto &x_5726);
Unit var_modified_x_4165(const auto &x_5747);
auto eval_expr_x_4162(const auto &x_5753);
Unit var_modified_x_4160(const auto &x_5774);
auto eval_expr_x_4157(const auto &x_5780);
Unit var_modified_x_4155(const auto &x_5793);
auto eval_expr_x_4152(const auto &x_5803);
Unit var_modified_x_4150(const auto &x_5824);
auto eval_expr_x_4147(const auto &x_5830);
Unit var_modified_x_4145(const auto &x_5835);
auto eval_expr_x_4142(const auto &x_5841);
Unit eval_stmts_x_4046(const auto &x_4140);
Unit eval_stmts_x_4045(const auto &x_4202);
Unit eval_stmts_x_4044(const auto &x_4289);
Unit x_3704(const auto &x_3705, const auto &x_3706, const auto &x_3707);
Unit x_3711(const auto &x_3712, const auto &x_3713, const auto &x_3714);
Unit x_3718(const auto &x_3719, const auto &x_3720, const auto &x_3721);
Unit x_3725(const auto &x_3726, const auto &x_3727, const auto &x_3728);
Unit x_3772(const auto &x_3773, const auto &x_3774, const auto &x_3775);
Unit x_3817(const auto &x_3818, const auto &x_3819, const auto &x_3820);
Unit x_3900(const auto &x_3901, const auto &x_3902, const auto &x_3903);
Unit x_3986(const auto &x_3987);
Unit x_3994(const auto &x_3995, const auto &x_3996, const auto &x_3997);
Unit x_4036(const auto &x_4037);
Unit x_4048(const auto &x_4049, const auto &x_4050, const auto &x_4051);
Unit x_4098(const auto &x_4099);
Unit eval_stmts_x_3677(const auto &x_4106);
Unit eval_stmts_x_3675(const auto &x_4111);
Unit x_4117(const auto &x_4118);
int64_t x_4125(const auto &x_4126);
int64_t x_4128(const auto &x_4129);
LayoutNode x_4131(const auto &x_4132);
Node x_4134(const auto &x_4135);
Node x_4137(const auto &x_4138);
Unit var_modified_x_4379(const auto &x_4381) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4382) {
    auto x_5846 = [&](const auto &x_4383) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4384) {
        if (IsSome(x_4383->meta->bb_0_bb_time_table)) {
          auto x_4385 = UnSome(x_4383->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4385, x_4383, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5846(x_4381);
    MakeUnit();
    auto x_5847 = [&](const auto &x_4389) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4390) {
        if (IsSome(x_4389->meta->bb_0_bb_time_table)) {
          auto x_4391 = UnSome(x_4389->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4391, x_4389, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4381->next, [&](const auto &x_4388) { return MakeUnit(); },
        [&](const auto &x_4387) {
          auto x_5850 = x_5847;
          x_5850(x_4387);
          return MakeUnit();
        });
    auto x_5848 = [&](const auto &x_4393) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4394) {
        if (IsSome(x_4393->meta->bb_2_bb_time_table)) {
          auto x_4395 = UnSome(x_4393->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4395, x_4393, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5848(x_4381);
    MakeUnit();
    auto x_5849 = [&](const auto &x_4399) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4400) {
        if (IsSome(x_4399->meta->bb_2_bb_time_table)) {
          auto x_4401 = UnSome(x_4399->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4401, x_4399, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4381->next, [&](const auto &x_4398) { return MakeUnit(); },
        [&](const auto &x_4397) {
          auto x_5851 = x_5849;
          x_5851(x_4397);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4376(const auto &x_4403) {
  if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_4403->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_4403->parent != nullptr) &&
          (eq((x_4403->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_4403->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_4403->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_4403->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_4403->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_4374(const auto &x_4480) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4481) {
    ListIter(x_4480->children, [&](const auto &x_4482) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4483) {
        if (IsSome(x_4482->meta->bb_1_bb_time_table)) {
          auto x_4484 = UnSome(x_4482->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4484, x_4482, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4371(const auto &x_4486) {
  return (((!(x_4486->parent != nullptr)) || (x_4486->parent)->var_visible) &&
          (neq(x_4486->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_4486->var_inside_svg) && (!x_4486->var_disabled))));
}
Unit var_modified_x_4369(const auto &x_4503) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4504) {
    auto x_5852 = [&](const auto &x_4505) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4506) {
        if (IsSome(x_4505->meta->bb_1_bb_time_table)) {
          auto x_4507 = UnSome(x_4505->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4507, x_4505, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5852(x_4503);
    MakeUnit();
    ListIter(x_4503->children, [&](const auto &x_4509) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4510) {
        if (IsSome(x_4509->meta->bb_1_bb_time_table)) {
          auto x_4511 = UnSome(x_4509->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4511, x_4509, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5853 = [&](const auto &x_4513) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4514) {
        if (IsSome(x_4513->meta->bb_0_bb_time_table)) {
          auto x_4515 = UnSome(x_4513->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4515, x_4513, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5853(x_4503);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4366(const auto &x_4517) {
  if (eq(x_4517->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_4517->parent != nullptr) && (x_4517->parent)->var_disabled);
  }
}
Unit var_modified_x_4364(const auto &x_4522) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4523) {
    auto x_5854 = [&](const auto &x_4524) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4525) {
        if (IsSome(x_4524->meta->bb_1_bb_time_table)) {
          auto x_4526 = UnSome(x_4524->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4526, x_4524, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5854(x_4522);
    MakeUnit();
    ListIter(x_4522->children, [&](const auto &x_4528) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4529) {
        if (IsSome(x_4528->meta->bb_1_bb_time_table)) {
          auto x_4530 = UnSome(x_4528->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4530, x_4528, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5855 = [&](const auto &x_4532) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4533) {
        if (IsSome(x_4532->meta->bb_0_bb_time_table)) {
          auto x_4534 = UnSome(x_4532->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4534, x_4532, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5855(x_4522);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4361(const auto &x_4536) {
  return ((x_4536->parent != nullptr) && ((x_4536->parent)->var_is_svg_block || (x_4536->parent)->var_inside_svg));
}
Unit var_modified_x_4359(const auto &x_4545) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4546) {
    ListIter(x_4545->children, [&](const auto &x_4547) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4548) {
        if (IsSome(x_4547->meta->bb_1_bb_time_table)) {
          auto x_4549 = UnSome(x_4547->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4549, x_4547, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4356(const auto &x_4551) { return eq(x_4551->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_4354(const auto &x_4552) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4553) {
    auto x_5856 = [&](const auto &x_4554) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4555) {
        if (IsSome(x_4554->meta->bb_0_bb_time_table)) {
          auto x_4556 = UnSome(x_4554->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4556, x_4554, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5856(x_4552);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4351(const auto &x_4558) {
  return neq(x_4558->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4349(const auto &x_4563) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4564) {
    auto x_5857 = [&](const auto &x_4565) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4566) {
        if (IsSome(x_4565->meta->bb_1_bb_time_table)) {
          auto x_4567 = UnSome(x_4565->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4567, x_4565, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5857(x_4563);
    MakeUnit();
    auto x_5858 = [&](const auto &x_4569) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4570) {
        if (IsSome(x_4569->meta->bb_0_bb_time_table)) {
          auto x_4571 = UnSome(x_4569->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4571, x_4569, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5858(x_4563);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4346(const auto &x_4573) {
  if (!x_4573->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4573->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_4573->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4573->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4344(const auto &x_4584) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4585) {
    auto x_5859 = [&](const auto &x_4586) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4587) {
        if (IsSome(x_4586->meta->bb_0_bb_time_table)) {
          auto x_4588 = UnSome(x_4586->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4588, x_4586, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5859(x_4584);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4341(const auto &x_4590) {
  return neq(x_4590->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4339(const auto &x_4595) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4596) {
    auto x_5860 = [&](const auto &x_4597) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4598) {
        if (IsSome(x_4597->meta->bb_1_bb_time_table)) {
          auto x_4599 = UnSome(x_4597->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4599, x_4597, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5860(x_4595);
    MakeUnit();
    auto x_5861 = [&](const auto &x_4601) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4602) {
        if (IsSome(x_4601->meta->bb_0_bb_time_table)) {
          auto x_4603 = UnSome(x_4601->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4603, x_4601, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5861(x_4595);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4336(const auto &x_4605) {
  if (!x_4605->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4605->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_4605->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4605->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4334(const auto &x_4616) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4617) {
    ListIter(x_4616->children, [&](const auto &x_4618) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4619) {
        if (IsSome(x_4618->meta->bb_0_bb_time_table)) {
          auto x_4620 = UnSome(x_4618->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4620, x_4618, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    });
    ListIter(x_4616->children, [&](const auto &x_4622) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4623) {
        if (IsSome(x_4622->meta->bb_2_bb_time_table)) {
          auto x_4624 = UnSome(x_4622->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4624, x_4622, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4331(const auto &x_4626) {
  if ((x_4626->parent != nullptr) &&
      (eq((x_4626->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4626->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4626->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_4626->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4329(const auto &x_4651) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4652) {
    ListIter(x_4651->children, [&](const auto &x_4653) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4654) {
        if (IsSome(x_4653->meta->bb_0_bb_time_table)) {
          auto x_4655 = UnSome(x_4653->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4655, x_4653, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5862 = [&](const auto &x_4657) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4658) {
        if (IsSome(x_4657->meta->bb_2_bb_time_table)) {
          auto x_4659 = UnSome(x_4657->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4659, x_4657, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5862(x_4651);
    MakeUnit();
    ListIter(x_4651->children, [&](const auto &x_4661) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4662) {
        if (IsSome(x_4661->meta->bb_2_bb_time_table)) {
          auto x_4663 = UnSome(x_4661->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4663, x_4661, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4326(const auto &x_4665) {
  if ((x_4665->parent != nullptr) &&
      (eq((x_4665->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4665->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4665->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4324(const auto &x_4690) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4691) {
    ListIter(x_4690->children, [&](const auto &x_4692) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4693) {
        if (IsSome(x_4692->meta->bb_1_bb_time_table)) {
          auto x_4694 = UnSome(x_4692->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4694, x_4692, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4321(const auto &x_4696) {
  if (x_4696->has_prop_flex_direction) {
    return x_4696->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_4319(const auto &x_4699) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4700) {
    auto x_5863 = [&](const auto &x_4703) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4704) {
        if (IsSome(x_4703->meta->bb_1_bb_time_table)) {
          auto x_4705 = UnSome(x_4703->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4705, x_4703, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4699->next, [&](const auto &x_4702) { return MakeUnit(); },
        [&](const auto &x_4701) {
          auto x_5865 = x_5863;
          x_5865(x_4701);
          return MakeUnit();
        });
    auto x_5864 = [&](const auto &x_4707) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4708) {
        if (IsSome(x_4707->meta->bb_2_bb_time_table)) {
          auto x_4709 = UnSome(x_4707->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4709, x_4707, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5864(x_4699);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4316(const auto &x_4711) {
  return plus((x_4711->prev != nullptr) ? ((x_4711->prev)->var_flex_shrink_sum) : (0.), x_4711->var_flex_shrink);
}
Unit var_modified_x_4314(const auto &x_4720) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4721) {
    auto x_5866 = [&](const auto &x_4724) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4725) {
        if (IsSome(x_4724->meta->bb_1_bb_time_table)) {
          auto x_4726 = UnSome(x_4724->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4726, x_4724, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4720->next, [&](const auto &x_4723) { return MakeUnit(); },
        [&](const auto &x_4722) {
          auto x_5868 = x_5866;
          x_5868(x_4722);
          return MakeUnit();
        });
    auto x_5867 = [&](const auto &x_4728) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4729) {
        if (IsSome(x_4728->meta->bb_2_bb_time_table)) {
          auto x_4730 = UnSome(x_4728->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4730, x_4728, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5867(x_4720);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4311(const auto &x_4732) {
  return plus((x_4732->prev != nullptr) ? ((x_4732->prev)->var_flex_grow_sum) : (0.), x_4732->var_flex_grow);
}
Unit var_modified_x_4309(const auto &x_4741) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4742) {
    auto x_5869 = [&](const auto &x_4743) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4744) {
        if (IsSome(x_4743->meta->bb_1_bb_time_table)) {
          auto x_4745 = UnSome(x_4743->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4745, x_4743, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5869(x_4741);
    MakeUnit();
    auto x_5870 = [&](const auto &x_4747) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4748) {
        if (IsSome(x_4747->meta->bb_2_bb_time_table)) {
          auto x_4749 = UnSome(x_4747->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4749, x_4747, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5870(x_4741);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4306(const auto &x_4751) {
  if (x_4751->has_prop_flex_shrink) {
    return (x_4751->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4304(const auto &x_4754) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4755) {
    auto x_5871 = [&](const auto &x_4756) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4757) {
        if (IsSome(x_4756->meta->bb_1_bb_time_table)) {
          auto x_4758 = UnSome(x_4756->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4758, x_4756, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5871(x_4754);
    MakeUnit();
    auto x_5872 = [&](const auto &x_4760) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4761) {
        if (IsSome(x_4760->meta->bb_2_bb_time_table)) {
          auto x_4762 = UnSome(x_4760->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4762, x_4760, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5872(x_4754);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4301(const auto &x_4764) {
  if (x_4764->has_prop_flex_grow) {
    return (x_4764->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4299(const auto &x_4767) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4768) {
    auto x_5873 = [&](const auto &x_4769) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4770) {
        if (IsSome(x_4769->meta->bb_1_bb_time_table)) {
          auto x_4771 = UnSome(x_4769->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4771, x_4769, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5873(x_4767);
    MakeUnit();
    auto x_5874 = [&](const auto &x_4773) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4774) {
        if (IsSome(x_4773->meta->bb_0_bb_time_table)) {
          auto x_4775 = UnSome(x_4773->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4775, x_4773, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5874(x_4767);
    MakeUnit();
    auto x_5875 = [&](const auto &x_4777) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4778) {
        if (IsSome(x_4777->meta->bb_2_bb_time_table)) {
          auto x_4779 = UnSome(x_4777->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4779, x_4777, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5875(x_4767);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4296(const auto &x_4781) {
  if (x_4781->has_prop_position) {
    return x_4781->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_4294(const auto &x_4784) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4785) {
    auto x_5876 = [&](const auto &x_4786) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4787) {
        if (IsSome(x_4786->meta->bb_1_bb_time_table)) {
          auto x_4788 = UnSome(x_4786->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4788, x_4786, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5876(x_4784);
    MakeUnit();
    ListIter(x_4784->children, [&](const auto &x_4790) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4791) {
        if (IsSome(x_4790->meta->bb_1_bb_time_table)) {
          auto x_4792 = UnSome(x_4790->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4792, x_4790, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5877 = [&](const auto &x_4794) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4795) {
        if (IsSome(x_4794->meta->bb_0_bb_time_table)) {
          auto x_4796 = UnSome(x_4794->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4796, x_4794, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5877(x_4784);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4291(const auto &x_4798) {
  if (x_4798->has_prop_display) {
    return x_4798->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_4287(const auto &x_4801) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4802) {
    auto x_5878 = [&](const auto &x_4805) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4806) {
        if (IsSome(x_4805->meta->bb_0_bb_time_table)) {
          auto x_4807 = UnSome(x_4805->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4807, x_4805, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4801->next == nullptr) {
      auto x_5880 = x_5878;
      OptionMatch(
          x_4801->parent, [&](const auto &x_4804) { return MakeUnit(); },
          [&](const auto &x_4803) {
            auto x_5882 = x_5880;
            x_5882(x_4803);
            return MakeUnit();
          });
    }
    auto x_5879 = [&](const auto &x_4811) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4812) {
        if (IsSome(x_4811->meta->bb_0_bb_time_table)) {
          auto x_4813 = UnSome(x_4811->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4813, x_4811, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4801->next, [&](const auto &x_4810) { return MakeUnit(); },
        [&](const auto &x_4809) {
          auto x_5881 = x_5879;
          x_5881(x_4809);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4284(const auto &x_4815) {
  if (x_4815->prev != nullptr) {
    if (x_4815->var_line_break) {
      return plus((x_4815->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4815->prev)->var_intrinsic_current_line_height, x_4815->var_intrinsic_height_external));
    } else {
      return (x_4815->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4815->var_line_break) {
      return x_4815->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4282(const auto &x_4844) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4845) {
    auto x_5883 = [&](const auto &x_4848) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4849) {
        if (IsSome(x_4848->meta->bb_0_bb_time_table)) {
          auto x_4850 = UnSome(x_4848->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4850, x_4848, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4844->next == nullptr) {
      auto x_5885 = x_5883;
      OptionMatch(
          x_4844->parent, [&](const auto &x_4847) { return MakeUnit(); },
          [&](const auto &x_4846) {
            auto x_5887 = x_5885;
            x_5887(x_4846);
            return MakeUnit();
          });
    }
    auto x_5884 = [&](const auto &x_4854) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4855) {
        if (IsSome(x_4854->meta->bb_0_bb_time_table)) {
          auto x_4856 = UnSome(x_4854->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4856, x_4854, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4844->next, [&](const auto &x_4853) { return MakeUnit(); },
        [&](const auto &x_4852) {
          auto x_5886 = x_5884;
          x_5886(x_4852);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4279(const auto &x_4858) {
  if (x_4858->var_line_break) {
    return 0.;
  } else {
    return max(x_4858->var_intrinsic_height_external,
               (x_4858->prev != nullptr) ? ((x_4858->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4277(const auto &x_4871) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4872) {
    auto x_5888 = [&](const auto &x_4875) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4876) {
        if (IsSome(x_4875->meta->bb_0_bb_time_table)) {
          auto x_4877 = UnSome(x_4875->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4877, x_4875, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4871->next, [&](const auto &x_4874) { return MakeUnit(); },
        [&](const auto &x_4873) {
          auto x_5890 = x_5888;
          x_5890(x_4873);
          return MakeUnit();
        });
    auto x_5889 = [&](const auto &x_4881) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4882) {
        if (IsSome(x_4881->meta->bb_2_bb_time_table)) {
          auto x_4883 = UnSome(x_4881->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4883, x_4881, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4871->next == nullptr) {
      auto x_5891 = x_5889;
      OptionMatch(
          x_4871->parent, [&](const auto &x_4880) { return MakeUnit(); },
          [&](const auto &x_4879) {
            auto x_5892 = x_5891;
            x_5892(x_4879);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4274(const auto &x_4885) {
  return plus((x_4885->prev != nullptr) ? ((x_4885->prev)->var_intrinsic_height_sum) : (0.),
              x_4885->var_intrinsic_height_external);
}
Unit var_modified_x_4272(const auto &x_4894) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4895) {
    auto x_5893 = [&](const auto &x_4896) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4897) {
        if (IsSome(x_4896->meta->bb_0_bb_time_table)) {
          auto x_4898 = UnSome(x_4896->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4898, x_4896, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5893(x_4894);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4269(const auto &x_4900) {
  if (eq(x_4900->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4900->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4267(const auto &x_4909) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4910) {
    auto x_5894 = [&](const auto &x_4911) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4912) {
        if (IsSome(x_4911->meta->bb_0_bb_time_table)) {
          auto x_4913 = UnSome(x_4911->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4913, x_4911, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5894(x_4909);
    MakeUnit();
    auto x_5895 = [&](const auto &x_4915) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4916) {
        if (IsSome(x_4915->meta->bb_2_bb_time_table)) {
          auto x_4917 = UnSome(x_4915->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4917, x_4915, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5895(x_4909);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4264(const auto &x_4919) {
  if (eq(x_4919->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4919->var_inside_svg) {
      return 0.;
    } else {
      if (x_4919->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4919->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4919->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_4919->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_4919->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4919->var_height_expr.r.a0;
          } else {
            if (x_4919->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_4919->var_height_expr.r.a0;
            } else {
              return x_4919->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_4919->var_children_intrinsic_height,
              (eq(x_4919->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_4919->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4919->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4919->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_4919->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4919->var_has_height_attr &&
                                                  (x_4919->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4919->var_height_attr_expr.r.a0)
                                                     : ((x_4919->has_attr_viewBox)
                                                            ? (x_4919->attr_viewBox.r.a3)
                                                            : (mult((x_4919->attr_viewBox.r.a3),
                                                                    divide(x_4919->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4919->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4919->var_has_height_attr)
                                                            ? (x_4919->var_height_attr_expr.r.a0)
                                                            : ((x_4919->has_attr_image_height &&
                                                                (!x_4919->var_has_width_attr))
                                                                   ? (int_to_float(x_4919->attr_image_height))
                                                                   : ((neq(x_4919->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4919->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4919->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_4919->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_4919->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_4919->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4262(const auto &x_5064) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5065) {
    auto x_5896 = [&](const auto &x_5066) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5067) {
        if (IsSome(x_5066->meta->bb_2_bb_time_table)) {
          auto x_5068 = UnSome(x_5066->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5068, x_5066, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5896(x_5064);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4259(const auto &x_5070) {
  if (eq(x_5070->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5070->var_inside_svg || x_5070->var_disabled)) {
    return true;
  } else {
    if ((x_5070->parent != nullptr) && (x_5070->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_5070->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5070->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5070->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5070->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_5070->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4257(const auto &x_5119) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5120) {
    auto x_5897 = [&](const auto &x_5121) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5122) {
        if (IsSome(x_5121->meta->bb_0_bb_time_table)) {
          auto x_5123 = UnSome(x_5121->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5123, x_5121, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5897(x_5119);
    MakeUnit();
    auto x_5898 = [&](const auto &x_5125) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5126) {
        if (IsSome(x_5125->meta->bb_2_bb_time_table)) {
          auto x_5127 = UnSome(x_5125->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5127, x_5125, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5898(x_5119);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4254(const auto &x_5129) {
  if (x_5129->has_prop_height) {
    return x_5129->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4252(const auto &x_5132) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5133) {
    auto x_5899 = [&](const auto &x_5134) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5135) {
        if (IsSome(x_5134->meta->bb_0_bb_time_table)) {
          auto x_5136 = UnSome(x_5134->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5136, x_5134, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5899(x_5132);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4249(const auto &x_5138) {
  if (x_5138->last != nullptr) {
    return plus((x_5138->last)->var_finished_intrinsic_height_sum, (x_5138->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4247(const auto &x_5147) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5148) {
    auto x_5900 = [&](const auto &x_5151) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5152) {
        if (IsSome(x_5151->meta->bb_0_bb_time_table)) {
          auto x_5153 = UnSome(x_5151->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5153, x_5151, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5147->next, [&](const auto &x_5150) { return MakeUnit(); },
        [&](const auto &x_5149) {
          auto x_5902 = x_5900;
          x_5902(x_5149);
          return MakeUnit();
        });
    auto x_5901 = [&](const auto &x_5157) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5158) {
        if (IsSome(x_5157->meta->bb_2_bb_time_table)) {
          auto x_5159 = UnSome(x_5157->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5159, x_5157, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_5147->next == nullptr) {
      auto x_5903 = x_5901;
      OptionMatch(
          x_5147->parent, [&](const auto &x_5156) { return MakeUnit(); },
          [&](const auto &x_5155) {
            auto x_5904 = x_5903;
            x_5904(x_5155);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4244(const auto &x_5161) {
  return plus((x_5161->prev != nullptr) ? ((x_5161->prev)->var_intrinsic_width_sum) : (0.),
              x_5161->var_intrinsic_width_external);
}
Unit var_modified_x_4242(const auto &x_5170) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5171) {
    auto x_5905 = [&](const auto &x_5174) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5175) {
        if (IsSome(x_5174->meta->bb_0_bb_time_table)) {
          auto x_5176 = UnSome(x_5174->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5176, x_5174, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_5170->next == nullptr) {
      auto x_5907 = x_5905;
      OptionMatch(
          x_5170->parent, [&](const auto &x_5173) { return MakeUnit(); },
          [&](const auto &x_5172) {
            auto x_5909 = x_5907;
            x_5909(x_5172);
            return MakeUnit();
          });
    }
    auto x_5906 = [&](const auto &x_5180) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5181) {
        if (IsSome(x_5180->meta->bb_0_bb_time_table)) {
          auto x_5182 = UnSome(x_5180->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5182, x_5180, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5170->next, [&](const auto &x_5179) { return MakeUnit(); },
        [&](const auto &x_5178) {
          auto x_5908 = x_5906;
          x_5908(x_5178);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4239(const auto &x_5184) {
  return max(x_5184->var_intrinsic_current_line_width,
             (x_5184->prev != nullptr) ? ((x_5184->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4237(const auto &x_5193) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5194) {
    auto x_5910 = [&](const auto &x_5195) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5196) {
        if (IsSome(x_5195->meta->bb_0_bb_time_table)) {
          auto x_5197 = UnSome(x_5195->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5197, x_5195, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5910(x_5193);
    MakeUnit();
    auto x_5911 = [&](const auto &x_5201) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5202) {
        if (IsSome(x_5201->meta->bb_0_bb_time_table)) {
          auto x_5203 = UnSome(x_5201->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5203, x_5201, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5193->next, [&](const auto &x_5200) { return MakeUnit(); },
        [&](const auto &x_5199) {
          auto x_5912 = x_5911;
          x_5912(x_5199);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4234(const auto &x_5205) {
  return plus(x_5205->var_intrinsic_width_external,
              ((x_5205->prev != nullptr) && (!(x_5205->prev)->var_line_break))
                  ? ((x_5205->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_4232(const auto &x_5218) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5219) {
    auto x_5913 = [&](const auto &x_5220) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5221) {
        if (IsSome(x_5220->meta->bb_0_bb_time_table)) {
          auto x_5222 = UnSome(x_5220->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5222, x_5220, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5913(x_5218);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4229(const auto &x_5224) {
  if (eq(x_5224->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5224->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_4227(const auto &x_5233) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5234) {
    auto x_5914 = [&](const auto &x_5235) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5236) {
        if (IsSome(x_5235->meta->bb_0_bb_time_table)) {
          auto x_5237 = UnSome(x_5235->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5237, x_5235, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5914(x_5233);
    MakeUnit();
    auto x_5915 = [&](const auto &x_5239) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5240) {
        if (IsSome(x_5239->meta->bb_2_bb_time_table)) {
          auto x_5241 = UnSome(x_5239->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5241, x_5239, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5915(x_5233);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4224(const auto &x_5243) {
  if (eq(x_5243->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_5243->var_inside_svg) {
      return 0.;
    } else {
      if (x_5243->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5243->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_5243->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_5243->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_5243->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_5243->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_5243->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_5243->var_width_expr.r.a0;
          } else {
            return x_5243->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_5243->var_children_intrinsic_width,
              (eq(x_5243->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_5243->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5243->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_5243->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_5243->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_5243->var_has_width_attr &&
                                                  (x_5243->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_5243->var_width_attr_expr.r.a0)
                                                     : (((!x_5243->var_has_width_attr) && x_5243->has_attr_viewBox)
                                                            ? (x_5243->attr_viewBox.r.a2)
                                                            : (mult((x_5243->attr_viewBox.r.a2),
                                                                    divide(x_5243->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_5243->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_5243->var_has_width_attr)
                                                            ? (x_5243->var_width_attr_expr.r.a0)
                                                            : ((x_5243->has_attr_image_width &&
                                                                (!x_5243->var_has_height_attr))
                                                                   ? (int_to_float(x_5243->attr_image_width))
                                                                   : ((neq(x_5243->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_5243->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_5243->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_5243->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_5243->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_5243->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4222(const auto &x_5396) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5397) {
    auto x_5916 = [&](const auto &x_5398) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5399) {
        if (IsSome(x_5398->meta->bb_0_bb_time_table)) {
          auto x_5400 = UnSome(x_5398->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5400, x_5398, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5916(x_5396);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4219(const auto &x_5402) {
  if (x_5402->last != nullptr) {
    return (x_5402->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_4217(const auto &x_5407) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5408) {
    auto x_5917 = [&](const auto &x_5409) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5410) {
        if (IsSome(x_5409->meta->bb_2_bb_time_table)) {
          auto x_5411 = UnSome(x_5409->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5411, x_5409, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5917(x_5407);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4214(const auto &x_5413) {
  if (eq(x_5413->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5413->var_inside_svg || x_5413->var_disabled)) {
    return true;
  } else {
    if ((x_5413->parent != nullptr) && (x_5413->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5413->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5413->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5413->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5413->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_5413->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4212(const auto &x_5462) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5463) {
    auto x_5918 = [&](const auto &x_5464) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5465) {
        if (IsSome(x_5464->meta->bb_0_bb_time_table)) {
          auto x_5466 = UnSome(x_5464->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5466, x_5464, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5918(x_5462);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4209(const auto &x_5468) {
  if (eq(x_5468->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_5468->var_inside_svg) {
      return true;
    } else {
      if (x_5468->var_disabled) {
        return true;
      } else {if ( eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_5468->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_4207(const auto &x_5481) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5482) {
    auto x_5919 = [&](const auto &x_5483) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5484) {
        if (IsSome(x_5483->meta->bb_0_bb_time_table)) {
          auto x_5485 = UnSome(x_5483->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5485, x_5483, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5919(x_5481);
    MakeUnit();
    auto x_5920 = [&](const auto &x_5487) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5488) {
        if (IsSome(x_5487->meta->bb_2_bb_time_table)) {
          auto x_5489 = UnSome(x_5487->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5489, x_5487, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5920(x_5481);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4204(const auto &x_5491) {
  if (x_5491->has_prop_width) {
    return x_5491->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4200(const auto &x_5494) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5495) {
    auto x_5921 = [&](const auto &x_5498) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5499) {
        if (IsSome(x_5498->meta->bb_2_bb_time_table)) {
          auto x_5500 = UnSome(x_5498->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5500, x_5498, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5494->next, [&](const auto &x_5497) { return MakeUnit(); },
        [&](const auto &x_5496) {
          auto x_5922 = x_5921;
          x_5922(x_5496);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4197(const auto &x_5502) {
  if ((x_5502->prev != nullptr) && (!(x_5502->prev)->var_line_break)) {
    return max(x_5502->var_height_external, (x_5502->prev)->var_line_height);
  } else {
    return x_5502->var_height_external;
  }
}
Unit var_modified_x_4195(const auto &x_5519) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5520) {
    auto x_5923 = [&](const auto &x_5521) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5522) {
        if (IsSome(x_5521->meta->bb_2_bb_time_table)) {
          auto x_5523 = UnSome(x_5521->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5523, x_5521, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5923(x_5519);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4192(const auto &x_5525) {
  if (eq(x_5525->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5525->var_height_internal;
  }
}
Unit var_modified_x_4190(const auto &x_5534) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5535) {
    auto x_5924 = [&](const auto &x_5536) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5537) {
        if (IsSome(x_5536->meta->bb_2_bb_time_table)) {
          auto x_5538 = UnSome(x_5536->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5538, x_5536, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5924(x_5534);
    MakeUnit();
    ListIter(x_5534->children, [&](const auto &x_5540) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5541) {
        if (IsSome(x_5540->meta->bb_2_bb_time_table)) {
          auto x_5542 = UnSome(x_5540->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5542, x_5540, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4187(const auto &x_5544) {
  if (x_5544->var_intrinsic_height_is_height) {
    return x_5544->var_intrinsic_height_internal;
  } else {
    if ((x_5544->parent != nullptr) && (x_5544->parent)->var_is_flex_column) {
      return plus(x_5544->var_intrinsic_height_internal,
                  mult(x_5544->var_flex_amount, (x_5544->parent)->var_flex_unit));
    } else {
      if (x_5544->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5544->var_box_height, divide(x_5544->var_height_expr.r.a0, 100.));
      } else {
        return max(x_5544->var_box_height, x_5544->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_4185(const auto &x_5597) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5598) {
    ListIter(x_5597->children, [&](const auto &x_5599) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5600) {
        if (IsSome(x_5599->meta->bb_2_bb_time_table)) {
          auto x_5601 = UnSome(x_5599->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5601, x_5599, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5925 = [&](const auto &x_5605) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5606) {
        if (IsSome(x_5605->meta->bb_2_bb_time_table)) {
          auto x_5607 = UnSome(x_5605->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5607, x_5605, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5597->next, [&](const auto &x_5604) { return MakeUnit(); },
        [&](const auto &x_5603) {
          auto x_5926 = x_5925;
          x_5926(x_5603);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4182(const auto &x_5609) {
  if (x_5609->prev != nullptr) {
    if (x_5609->var_line_break || (x_5609->prev)->var_line_break) {
      return plus((x_5609->prev)->var_y, (x_5609->prev)->var_line_height);
    } else {
      return (x_5609->prev)->var_y;
    }
  } else {
    if (x_5609->parent != nullptr) {
      return (x_5609->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4180(const auto &x_5634) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5635) {
    auto x_5927 = [&](const auto &x_5638) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5639) {
        if (IsSome(x_5638->meta->bb_2_bb_time_table)) {
          auto x_5640 = UnSome(x_5638->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5640, x_5638, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5634->next, [&](const auto &x_5637) { return MakeUnit(); },
        [&](const auto &x_5636) {
          auto x_5928 = x_5927;
          x_5928(x_5636);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4177(const auto &x_5642) {
  if (eq(x_5642->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5642->var_width_internal;
  }
}
Unit var_modified_x_4175(const auto &x_5651) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5652) {
    auto x_5929 = [&](const auto &x_5653) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5654) {
        if (IsSome(x_5653->meta->bb_2_bb_time_table)) {
          auto x_5655 = UnSome(x_5653->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5655, x_5653, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5929(x_5651);
    MakeUnit();
    ListIter(x_5651->children, [&](const auto &x_5657) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5658) {
        if (IsSome(x_5657->meta->bb_2_bb_time_table)) {
          auto x_5659 = UnSome(x_5657->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5659, x_5657, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4172(const auto &x_5661) {
  if (x_5661->var_intrinsic_width_is_width) {
    return x_5661->var_intrinsic_width_internal;
  } else {
    if ((x_5661->parent != nullptr) && (x_5661->parent)->var_is_flex_row) {
      return plus(x_5661->var_intrinsic_width_internal, mult(x_5661->var_flex_amount, (x_5661->parent)->var_flex_unit));
    } else {
      if (x_5661->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5661->var_box_width, divide(x_5661->var_width_expr.r.a0, 100.));
      } else {
        return max(x_5661->var_box_width, x_5661->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_4170(const auto &x_5714) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5715) {
    ListIter(x_5714->children, [&](const auto &x_5716) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5717) {
        if (IsSome(x_5716->meta->bb_2_bb_time_table)) {
          auto x_5718 = UnSome(x_5716->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5718, x_5716, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5930 = [&](const auto &x_5722) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5723) {
        if (IsSome(x_5722->meta->bb_2_bb_time_table)) {
          auto x_5724 = UnSome(x_5722->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5724, x_5722, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5714->next, [&](const auto &x_5721) { return MakeUnit(); },
        [&](const auto &x_5720) {
          auto x_5931 = x_5930;
          x_5931(x_5720);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4167(const auto &x_5726) {
  if (x_5726->prev != nullptr) {
    if (x_5726->var_line_break || (x_5726->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_5726->prev)->var_x, (x_5726->prev)->var_width_external);
    }
  } else {
    if (x_5726->parent != nullptr) {
      return (x_5726->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4165(const auto &x_5747) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5748) {
    ListIter(x_5747->children, [&](const auto &x_5749) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5750) {
        if (IsSome(x_5749->meta->bb_2_bb_time_table)) {
          auto x_5751 = UnSome(x_5749->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5751, x_5749, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4162(const auto &x_5753) {
  if (gt(x_5753->var_left_over, 0.)) {
    return divide(x_5753->var_left_over, x_5753->var_flex_grow_sum);
  } else {
    return divide(x_5753->var_left_over, x_5753->var_flex_shrink_sum);
  }
}
Unit var_modified_x_4160(const auto &x_5774) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5775) {
    auto x_5932 = [&](const auto &x_5776) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5777) {
        if (IsSome(x_5776->meta->bb_2_bb_time_table)) {
          auto x_5778 = UnSome(x_5776->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5778, x_5776, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5932(x_5774);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4157(const auto &x_5780) {
  if ((x_5780->parent != nullptr) && gt((x_5780->parent)->var_left_over, 0.)) {
    return x_5780->var_flex_grow;
  } else {
    return x_5780->var_flex_shrink;
  }
}
Unit var_modified_x_4155(const auto &x_5793) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5794) {
    auto x_5933 = [&](const auto &x_5795) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5796) {
        if (IsSome(x_5795->meta->bb_2_bb_time_table)) {
          auto x_5797 = UnSome(x_5795->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5797, x_5795, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5933(x_5793);
    MakeUnit();
    ListIter(x_5793->children, [&](const auto &x_5799) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5800) {
        if (IsSome(x_5799->meta->bb_2_bb_time_table)) {
          auto x_5801 = UnSome(x_5799->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5801, x_5799, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4152(const auto &x_5803) {
  if (x_5803->var_is_flex_row) {
    return minus(x_5803->var_box_width, (x_5803->last != nullptr) ? ((x_5803->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_5803->var_box_height, (x_5803->last != nullptr) ? ((x_5803->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_4150(const auto &x_5824) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5825) {
    auto x_5934 = [&](const auto &x_5826) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5827) {
        if (IsSome(x_5826->meta->bb_2_bb_time_table)) {
          auto x_5828 = UnSome(x_5826->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5828, x_5826, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5934(x_5824);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4147(const auto &x_5830) {
  if (x_5830->parent != nullptr) {
    return (x_5830->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_4145(const auto &x_5835) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5836) {
    auto x_5935 = [&](const auto &x_5837) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5838) {
        if (IsSome(x_5837->meta->bb_2_bb_time_table)) {
          auto x_5839 = UnSome(x_5837->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5839, x_5837, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5935(x_5835);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4142(const auto &x_5841) {
  if (x_5841->parent != nullptr) {
    return (x_5841->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_4046(const auto &x_4140) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4141) {
    WriteMetric();
    auto x_4143 = eval_expr_x_4142(x_4140);
    if (x_4140->has_var_box_width) {
      auto x_4144 = x_4140->var_box_width;
      if (!EqualValue(x_4144, x_4143)) {
        var_modified_x_4145(x_4140);
      }
    }
    x_4140->has_var_box_width = true;
    x_4140->var_box_width = Asdouble(x_4143);
    WriteMetric();
    auto x_4148 = eval_expr_x_4147(x_4140);
    if (x_4140->has_var_box_height) {
      auto x_4149 = x_4140->var_box_height;
      if (!EqualValue(x_4149, x_4148)) {
        var_modified_x_4150(x_4140);
      }
    }
    x_4140->has_var_box_height = true;
    x_4140->var_box_height = Asdouble(x_4148);
    WriteMetric();
    auto x_4153 = eval_expr_x_4152(x_4140);
    if (x_4140->has_var_left_over) {
      auto x_4154 = x_4140->var_left_over;
      if (!EqualValue(x_4154, x_4153)) {
        var_modified_x_4155(x_4140);
      }
    }
    x_4140->has_var_left_over = true;
    x_4140->var_left_over = Asdouble(x_4153);
    WriteMetric();
    auto x_4158 = eval_expr_x_4157(x_4140);
    if (x_4140->has_var_flex_amount) {
      auto x_4159 = x_4140->var_flex_amount;
      if (!EqualValue(x_4159, x_4158)) {
        var_modified_x_4160(x_4140);
      }
    }
    x_4140->has_var_flex_amount = true;
    x_4140->var_flex_amount = Asdouble(x_4158);
    WriteMetric();
    auto x_4163 = eval_expr_x_4162(x_4140);
    if (x_4140->has_var_flex_unit) {
      auto x_4164 = x_4140->var_flex_unit;
      if (!EqualValue(x_4164, x_4163)) {
        var_modified_x_4165(x_4140);
      }
    }
    x_4140->has_var_flex_unit = true;
    x_4140->var_flex_unit = Asdouble(x_4163);
    WriteMetric();
    auto x_4168 = eval_expr_x_4167(x_4140);
    if (x_4140->has_var_x) {
      auto x_4169 = x_4140->var_x;
      if (!EqualValue(x_4169, x_4168)) {
        var_modified_x_4170(x_4140);
      }
    }
    x_4140->has_var_x = true;
    x_4140->var_x = Asdouble(x_4168);
    WriteMetric();
    auto x_4173 = eval_expr_x_4172(x_4140);
    if (x_4140->has_var_width_internal) {
      auto x_4174 = x_4140->var_width_internal;
      if (!EqualValue(x_4174, x_4173)) {
        var_modified_x_4175(x_4140);
      }
    }
    x_4140->has_var_width_internal = true;
    x_4140->var_width_internal = Asdouble(x_4173);
    WriteMetric();
    auto x_4178 = eval_expr_x_4177(x_4140);
    if (x_4140->has_var_width_external) {
      auto x_4179 = x_4140->var_width_external;
      if (!EqualValue(x_4179, x_4178)) {
        var_modified_x_4180(x_4140);
      }
    }
    x_4140->has_var_width_external = true;
    x_4140->var_width_external = Asdouble(x_4178);
    WriteMetric();
    auto x_4183 = eval_expr_x_4182(x_4140);
    if (x_4140->has_var_y) {
      auto x_4184 = x_4140->var_y;
      if (!EqualValue(x_4184, x_4183)) {
        var_modified_x_4185(x_4140);
      }
    }
    x_4140->has_var_y = true;
    x_4140->var_y = Asdouble(x_4183);
    WriteMetric();
    auto x_4188 = eval_expr_x_4187(x_4140);
    if (x_4140->has_var_height_internal) {
      auto x_4189 = x_4140->var_height_internal;
      if (!EqualValue(x_4189, x_4188)) {
        var_modified_x_4190(x_4140);
      }
    }
    x_4140->has_var_height_internal = true;
    x_4140->var_height_internal = Asdouble(x_4188);
    WriteMetric();
    auto x_4193 = eval_expr_x_4192(x_4140);
    if (x_4140->has_var_height_external) {
      auto x_4194 = x_4140->var_height_external;
      if (!EqualValue(x_4194, x_4193)) {
        var_modified_x_4195(x_4140);
      }
    }
    x_4140->has_var_height_external = true;
    x_4140->var_height_external = Asdouble(x_4193);
    WriteMetric();
    auto x_4198 = eval_expr_x_4197(x_4140);
    if (x_4140->has_var_line_height) {
      auto x_4199 = x_4140->var_line_height;
      if (!EqualValue(x_4199, x_4198)) {
        var_modified_x_4200(x_4140);
      }
    }
    x_4140->has_var_line_height = true;
    x_4140->var_line_height = Asdouble(x_4198);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4045(const auto &x_4202) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4203) {
    WriteMetric();
    auto x_4205 = eval_expr_x_4204(x_4202);
    if (x_4202->has_var_width_expr) {
      auto x_4206 = x_4202->var_width_expr;
      if (!EqualValue(x_4206, x_4205)) {
        var_modified_x_4207(x_4202);
      }
    }
    x_4202->has_var_width_expr = true;
    x_4202->var_width_expr = AsDEString(x_4205);
    WriteMetric();
    auto x_4210 = eval_expr_x_4209(x_4202);
    if (x_4202->has_var_is_default_case) {
      auto x_4211 = x_4202->var_is_default_case;
      if (!EqualValue(x_4211, x_4210)) {
        var_modified_x_4212(x_4202);
      }
    }
    x_4202->has_var_is_default_case = true;
    x_4202->var_is_default_case = Asbool(x_4210);
    WriteMetric();
    auto x_4215 = eval_expr_x_4214(x_4202);
    if (x_4202->has_var_intrinsic_width_is_width) {
      auto x_4216 = x_4202->var_intrinsic_width_is_width;
      if (!EqualValue(x_4216, x_4215)) {
        var_modified_x_4217(x_4202);
      }
    }
    x_4202->has_var_intrinsic_width_is_width = true;
    x_4202->var_intrinsic_width_is_width = Asbool(x_4215);
    WriteMetric();
    auto x_4220 = eval_expr_x_4219(x_4202);
    if (x_4202->has_var_children_intrinsic_width) {
      auto x_4221 = x_4202->var_children_intrinsic_width;
      if (!EqualValue(x_4221, x_4220)) {
        var_modified_x_4222(x_4202);
      }
    }
    x_4202->has_var_children_intrinsic_width = true;
    x_4202->var_children_intrinsic_width = Asdouble(x_4220);
    WriteMetric();
    auto x_4225 = eval_expr_x_4224(x_4202);
    if (x_4202->has_var_intrinsic_width_internal) {
      auto x_4226 = x_4202->var_intrinsic_width_internal;
      if (!EqualValue(x_4226, x_4225)) {
        var_modified_x_4227(x_4202);
      }
    }
    x_4202->has_var_intrinsic_width_internal = true;
    x_4202->var_intrinsic_width_internal = Asdouble(x_4225);
    WriteMetric();
    auto x_4230 = eval_expr_x_4229(x_4202);
    if (x_4202->has_var_intrinsic_width_external) {
      auto x_4231 = x_4202->var_intrinsic_width_external;
      if (!EqualValue(x_4231, x_4230)) {
        var_modified_x_4232(x_4202);
      }
    }
    x_4202->has_var_intrinsic_width_external = true;
    x_4202->var_intrinsic_width_external = Asdouble(x_4230);
    WriteMetric();
    auto x_4235 = eval_expr_x_4234(x_4202);
    if (x_4202->has_var_intrinsic_current_line_width) {
      auto x_4236 = x_4202->var_intrinsic_current_line_width;
      if (!EqualValue(x_4236, x_4235)) {
        var_modified_x_4237(x_4202);
      }
    }
    x_4202->has_var_intrinsic_current_line_width = true;
    x_4202->var_intrinsic_current_line_width = Asdouble(x_4235);
    WriteMetric();
    auto x_4240 = eval_expr_x_4239(x_4202);
    if (x_4202->has_var_intrinsic_width_max) {
      auto x_4241 = x_4202->var_intrinsic_width_max;
      if (!EqualValue(x_4241, x_4240)) {
        var_modified_x_4242(x_4202);
      }
    }
    x_4202->has_var_intrinsic_width_max = true;
    x_4202->var_intrinsic_width_max = Asdouble(x_4240);
    WriteMetric();
    auto x_4245 = eval_expr_x_4244(x_4202);
    if (x_4202->has_var_intrinsic_width_sum) {
      auto x_4246 = x_4202->var_intrinsic_width_sum;
      if (!EqualValue(x_4246, x_4245)) {
        var_modified_x_4247(x_4202);
      }
    }
    x_4202->has_var_intrinsic_width_sum = true;
    x_4202->var_intrinsic_width_sum = Asdouble(x_4245);
    WriteMetric();
    auto x_4250 = eval_expr_x_4249(x_4202);
    if (x_4202->has_var_children_intrinsic_height) {
      auto x_4251 = x_4202->var_children_intrinsic_height;
      if (!EqualValue(x_4251, x_4250)) {
        var_modified_x_4252(x_4202);
      }
    }
    x_4202->has_var_children_intrinsic_height = true;
    x_4202->var_children_intrinsic_height = Asdouble(x_4250);
    WriteMetric();
    auto x_4255 = eval_expr_x_4254(x_4202);
    if (x_4202->has_var_height_expr) {
      auto x_4256 = x_4202->var_height_expr;
      if (!EqualValue(x_4256, x_4255)) {
        var_modified_x_4257(x_4202);
      }
    }
    x_4202->has_var_height_expr = true;
    x_4202->var_height_expr = AsDEString(x_4255);
    WriteMetric();
    auto x_4260 = eval_expr_x_4259(x_4202);
    if (x_4202->has_var_intrinsic_height_is_height) {
      auto x_4261 = x_4202->var_intrinsic_height_is_height;
      if (!EqualValue(x_4261, x_4260)) {
        var_modified_x_4262(x_4202);
      }
    }
    x_4202->has_var_intrinsic_height_is_height = true;
    x_4202->var_intrinsic_height_is_height = Asbool(x_4260);
    WriteMetric();
    auto x_4265 = eval_expr_x_4264(x_4202);
    if (x_4202->has_var_intrinsic_height_internal) {
      auto x_4266 = x_4202->var_intrinsic_height_internal;
      if (!EqualValue(x_4266, x_4265)) {
        var_modified_x_4267(x_4202);
      }
    }
    x_4202->has_var_intrinsic_height_internal = true;
    x_4202->var_intrinsic_height_internal = Asdouble(x_4265);
    WriteMetric();
    auto x_4270 = eval_expr_x_4269(x_4202);
    if (x_4202->has_var_intrinsic_height_external) {
      auto x_4271 = x_4202->var_intrinsic_height_external;
      if (!EqualValue(x_4271, x_4270)) {
        var_modified_x_4272(x_4202);
      }
    }
    x_4202->has_var_intrinsic_height_external = true;
    x_4202->var_intrinsic_height_external = Asdouble(x_4270);
    WriteMetric();
    auto x_4275 = eval_expr_x_4274(x_4202);
    if (x_4202->has_var_intrinsic_height_sum) {
      auto x_4276 = x_4202->var_intrinsic_height_sum;
      if (!EqualValue(x_4276, x_4275)) {
        var_modified_x_4277(x_4202);
      }
    }
    x_4202->has_var_intrinsic_height_sum = true;
    x_4202->var_intrinsic_height_sum = Asdouble(x_4275);
    WriteMetric();
    auto x_4280 = eval_expr_x_4279(x_4202);
    if (x_4202->has_var_intrinsic_current_line_height) {
      auto x_4281 = x_4202->var_intrinsic_current_line_height;
      if (!EqualValue(x_4281, x_4280)) {
        var_modified_x_4282(x_4202);
      }
    }
    x_4202->has_var_intrinsic_current_line_height = true;
    x_4202->var_intrinsic_current_line_height = Asdouble(x_4280);
    WriteMetric();
    auto x_4285 = eval_expr_x_4284(x_4202);
    if (x_4202->has_var_finished_intrinsic_height_sum) {
      auto x_4286 = x_4202->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_4286, x_4285)) {
        var_modified_x_4287(x_4202);
      }
    }
    x_4202->has_var_finished_intrinsic_height_sum = true;
    x_4202->var_finished_intrinsic_height_sum = Asdouble(x_4285);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4044(const auto &x_4289) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4290) {
    WriteMetric();
    auto x_4292 = eval_expr_x_4291(x_4289);
    if (x_4289->has_var_display) {
      auto x_4293 = x_4289->var_display;
      if (!EqualValue(x_4293, x_4292)) {
        var_modified_x_4294(x_4289);
      }
    }
    x_4289->has_var_display = true;
    x_4289->var_display = AsDEString(x_4292);
    WriteMetric();
    auto x_4297 = eval_expr_x_4296(x_4289);
    if (x_4289->has_var_position) {
      auto x_4298 = x_4289->var_position;
      if (!EqualValue(x_4298, x_4297)) {
        var_modified_x_4299(x_4289);
      }
    }
    x_4289->has_var_position = true;
    x_4289->var_position = AsDEString(x_4297);
    WriteMetric();
    auto x_4302 = eval_expr_x_4301(x_4289);
    if (x_4289->has_var_flex_grow) {
      auto x_4303 = x_4289->var_flex_grow;
      if (!EqualValue(x_4303, x_4302)) {
        var_modified_x_4304(x_4289);
      }
    }
    x_4289->has_var_flex_grow = true;
    x_4289->var_flex_grow = Asdouble(x_4302);
    WriteMetric();
    auto x_4307 = eval_expr_x_4306(x_4289);
    if (x_4289->has_var_flex_shrink) {
      auto x_4308 = x_4289->var_flex_shrink;
      if (!EqualValue(x_4308, x_4307)) {
        var_modified_x_4309(x_4289);
      }
    }
    x_4289->has_var_flex_shrink = true;
    x_4289->var_flex_shrink = Asdouble(x_4307);
    WriteMetric();
    auto x_4312 = eval_expr_x_4311(x_4289);
    if (x_4289->has_var_flex_grow_sum) {
      auto x_4313 = x_4289->var_flex_grow_sum;
      if (!EqualValue(x_4313, x_4312)) {
        var_modified_x_4314(x_4289);
      }
    }
    x_4289->has_var_flex_grow_sum = true;
    x_4289->var_flex_grow_sum = Asdouble(x_4312);
    WriteMetric();
    auto x_4317 = eval_expr_x_4316(x_4289);
    if (x_4289->has_var_flex_shrink_sum) {
      auto x_4318 = x_4289->var_flex_shrink_sum;
      if (!EqualValue(x_4318, x_4317)) {
        var_modified_x_4319(x_4289);
      }
    }
    x_4289->has_var_flex_shrink_sum = true;
    x_4289->var_flex_shrink_sum = Asdouble(x_4317);
    WriteMetric();
    auto x_4322 = eval_expr_x_4321(x_4289);
    if (x_4289->has_var_flex_direction) {
      auto x_4323 = x_4289->var_flex_direction;
      if (!EqualValue(x_4323, x_4322)) {
        var_modified_x_4324(x_4289);
      }
    }
    x_4289->has_var_flex_direction = true;
    x_4289->var_flex_direction = AsDEString(x_4322);
    WriteMetric();
    auto x_4327 = eval_expr_x_4326(x_4289);
    if (x_4289->has_var_is_flex_row) {
      auto x_4328 = x_4289->var_is_flex_row;
      if (!EqualValue(x_4328, x_4327)) {
        var_modified_x_4329(x_4289);
      }
    }
    x_4289->has_var_is_flex_row = true;
    x_4289->var_is_flex_row = Asbool(x_4327);
    WriteMetric();
    auto x_4332 = eval_expr_x_4331(x_4289);
    if (x_4289->has_var_is_flex_column) {
      auto x_4333 = x_4289->var_is_flex_column;
      if (!EqualValue(x_4333, x_4332)) {
        var_modified_x_4334(x_4289);
      }
    }
    x_4289->has_var_is_flex_column = true;
    x_4289->var_is_flex_column = Asbool(x_4332);
    WriteMetric();
    auto x_4337 = eval_expr_x_4336(x_4289);
    if (x_4289->has_var_width_attr_expr) {
      auto x_4338 = x_4289->var_width_attr_expr;
      if (!EqualValue(x_4338, x_4337)) {
        var_modified_x_4339(x_4289);
      }
    }
    x_4289->has_var_width_attr_expr = true;
    x_4289->var_width_attr_expr = AsDEString(x_4337);
    WriteMetric();
    auto x_4342 = eval_expr_x_4341(x_4289);
    if (x_4289->has_var_has_width_attr) {
      auto x_4343 = x_4289->var_has_width_attr;
      if (!EqualValue(x_4343, x_4342)) {
        var_modified_x_4344(x_4289);
      }
    }
    x_4289->has_var_has_width_attr = true;
    x_4289->var_has_width_attr = Asbool(x_4342);
    WriteMetric();
    auto x_4347 = eval_expr_x_4346(x_4289);
    if (x_4289->has_var_height_attr_expr) {
      auto x_4348 = x_4289->var_height_attr_expr;
      if (!EqualValue(x_4348, x_4347)) {
        var_modified_x_4349(x_4289);
      }
    }
    x_4289->has_var_height_attr_expr = true;
    x_4289->var_height_attr_expr = AsDEString(x_4347);
    WriteMetric();
    auto x_4352 = eval_expr_x_4351(x_4289);
    if (x_4289->has_var_has_height_attr) {
      auto x_4353 = x_4289->var_has_height_attr;
      if (!EqualValue(x_4353, x_4352)) {
        var_modified_x_4354(x_4289);
      }
    }
    x_4289->has_var_has_height_attr = true;
    x_4289->var_has_height_attr = Asbool(x_4352);
    WriteMetric();
    auto x_4357 = eval_expr_x_4356(x_4289);
    if (x_4289->has_var_is_svg_block) {
      auto x_4358 = x_4289->var_is_svg_block;
      if (!EqualValue(x_4358, x_4357)) {
        var_modified_x_4359(x_4289);
      }
    }
    x_4289->has_var_is_svg_block = true;
    x_4289->var_is_svg_block = Asbool(x_4357);
    WriteMetric();
    auto x_4362 = eval_expr_x_4361(x_4289);
    if (x_4289->has_var_inside_svg) {
      auto x_4363 = x_4289->var_inside_svg;
      if (!EqualValue(x_4363, x_4362)) {
        var_modified_x_4364(x_4289);
      }
    }
    x_4289->has_var_inside_svg = true;
    x_4289->var_inside_svg = Asbool(x_4362);
    WriteMetric();
    auto x_4367 = eval_expr_x_4366(x_4289);
    if (x_4289->has_var_disabled) {
      auto x_4368 = x_4289->var_disabled;
      if (!EqualValue(x_4368, x_4367)) {
        var_modified_x_4369(x_4289);
      }
    }
    x_4289->has_var_disabled = true;
    x_4289->var_disabled = Asbool(x_4367);
    WriteMetric();
    auto x_4372 = eval_expr_x_4371(x_4289);
    if (x_4289->has_var_visible) {
      auto x_4373 = x_4289->var_visible;
      if (!EqualValue(x_4373, x_4372)) {
        var_modified_x_4374(x_4289);
      }
    }
    x_4289->has_var_visible = true;
    x_4289->var_visible = Asbool(x_4372);
    WriteMetric();
    auto x_4377 = eval_expr_x_4376(x_4289);
    if (x_4289->has_var_line_break) {
      auto x_4378 = x_4289->var_line_break;
      if (!EqualValue(x_4378, x_4377)) {
        var_modified_x_4379(x_4289);
      }
    }
    x_4289->has_var_line_break = true;
    x_4289->var_line_break = Asbool(x_4377);
    return MakeUnit();
  })));
}
Unit x_3704(const auto &x_3705, const auto &x_3706, const auto &x_3707) {
  auto x_3708 = ListHeadExn(x_3705);
  auto x_3709 = ListTailExn(x_3705);
  if (ListIsEmpty(x_3709)) {
    auto x_3710 = ListSplitN(x_3706->children, x_3708);
    OutputChangeMetric(IntAdd(layout_size_x_3661(ListNthExn(x_3706->children, x_3708)), layout_size_x_3661(x_3707)));
    x_3706->children = ListAppend(Zro(x_3710), Cons(x_3707, ListTailExn(Fst(x_3710))));
    return MakeUnit();
  } else {
    return x_3704(x_3709, ListNthExn(x_3706->children, x_3708), x_3707);
  }
}
Unit replace_layout_node_x_3703(const auto &x_3705, const auto &x_3706, const auto &x_3707) {
  return x_3704(x_3705, x_3706, x_3707);
}
Unit x_3711(const auto &x_3712, const auto &x_3713, const auto &x_3714) {
  auto x_3715 = ListHeadExn(x_3712);
  auto x_3716 = ListTailExn(x_3712);
  if (ListIsEmpty(x_3716)) {
    OutputChangeMetric(layout_size_x_3661(x_3714));
    auto x_3717 = ListSplitN(x_3713->children, x_3715);
    x_3713->children = ListAppend(Zro(x_3717), Cons(x_3714, Fst(x_3717)));
    return MakeUnit();
  } else {
    return x_3711(x_3716, ListNthExn(x_3713->children, x_3715), x_3714);
  }
}
Unit add_layout_node_x_3701(const auto &x_3712, const auto &x_3713, const auto &x_3714) {
  return x_3711(x_3712, x_3713, x_3714);
}
Unit x_3718(const auto &x_3719, const auto &x_3720, const auto &x_3721) {
  auto x_3722 = ListHeadExn(x_3719);
  auto x_3723 = ListTailExn(x_3719);
  if (ListIsEmpty(x_3723)) {
    OutputChangeMetric(layout_size_x_3661(ListNthExn(x_3720->children, x_3722)));
    auto x_3724 = ListSplitN(x_3720->children, x_3722);
    x_3720->children = ListAppend(Zro(x_3724), ListTailExn(Fst(x_3724)));
    return MakeUnit();
  } else {
    return x_3718(x_3723, ListNthExn(x_3720->children, x_3722), x_3721);
  }
}
Unit remove_layout_node_x_3699(const auto &x_3719, const auto &x_3720, const auto &x_3721) {
  return x_3718(x_3719, x_3720, x_3721);
}
Unit x_3725(const auto &x_3726, const auto &x_3727, const auto &x_3728) {
  return ListMatch(
      x_3726,
      [&](const auto &x_3731) {
        auto x_3732 = Zro(x_3728);
        auto x_3733 = Zro(x_3732);
        auto x_3734 = Fst(x_3732);
        auto x_3735 = Fst(x_3728);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5936 = x_3733;
        if (x_5936 == "attributes") {
          std::string x_5937 = x_3734;
          if (x_5937 == "width") {
            WriteMetric();
            x_3727->has_attr_width = true;
            x_3727->attr_width = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3736) {
              if (IsSome(x_3727->meta->bb_1_bb_time_table)) {
                auto x_3737 = UnSome(x_3727->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3737, x_3727, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5937 == "image_height") {
            WriteMetric();
            x_3727->has_attr_image_height = true;
            x_3727->attr_image_height = Asint64_t(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3739) {
              if (IsSome(x_3727->meta->bb_0_bb_time_table)) {
                auto x_3740 = UnSome(x_3727->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3740, x_3727, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5937 == "image_width") {
            WriteMetric();
            x_3727->has_attr_image_width = true;
            x_3727->attr_image_width = Asint64_t(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3742) {
              if (IsSome(x_3727->meta->bb_0_bb_time_table)) {
                auto x_3743 = UnSome(x_3727->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3743, x_3727, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5937 == "height") {
            WriteMetric();
            x_3727->has_attr_height = true;
            x_3727->attr_height = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3745) {
              if (IsSome(x_3727->meta->bb_1_bb_time_table)) {
                auto x_3746 = UnSome(x_3727->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3746, x_3727, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5937 == "viewBox") {
            WriteMetric();
            x_3727->has_attr_viewBox = true;
            x_3727->attr_viewBox = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3748) {
              if (IsSome(x_3727->meta->bb_0_bb_time_table)) {
                auto x_3749 = UnSome(x_3727->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3749, x_3727, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5936 == "properties") {
          std::string x_5938 = x_3734;
          if (x_5938 == "width") {
            WriteMetric();
            x_3727->has_prop_width = true;
            x_3727->prop_width = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3751) {
              if (IsSome(x_3727->meta->bb_0_bb_time_table)) {
                auto x_3752 = UnSome(x_3727->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3752, x_3727, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5938 == "flex-grow") {
            WriteMetric();
            x_3727->has_prop_flex_grow = true;
            x_3727->prop_flex_grow = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3754) {
              if (IsSome(x_3727->meta->bb_1_bb_time_table)) {
                auto x_3755 = UnSome(x_3727->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3755, x_3727, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5938 == "height") {
            WriteMetric();
            x_3727->has_prop_height = true;
            x_3727->prop_height = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3757) {
              if (IsSome(x_3727->meta->bb_0_bb_time_table)) {
                auto x_3758 = UnSome(x_3727->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3758, x_3727, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5938 == "display") {
            WriteMetric();
            x_3727->has_prop_display = true;
            x_3727->prop_display = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3760) {
              if (IsSome(x_3727->meta->bb_1_bb_time_table)) {
                auto x_3761 = UnSome(x_3727->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3761, x_3727, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5938 == "position") {
            WriteMetric();
            x_3727->has_prop_position = true;
            x_3727->prop_position = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3763) {
              if (IsSome(x_3727->meta->bb_1_bb_time_table)) {
                auto x_3764 = UnSome(x_3727->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3764, x_3727, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5938 == "flex-shrink") {
            WriteMetric();
            x_3727->has_prop_flex_shrink = true;
            x_3727->prop_flex_shrink = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3766) {
              if (IsSome(x_3727->meta->bb_1_bb_time_table)) {
                auto x_3767 = UnSome(x_3727->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3767, x_3727, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5938 == "flex-direction") {
            WriteMetric();
            x_3727->has_prop_flex_direction = true;
            x_3727->prop_flex_direction = AsDEString(x_3735);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3769) {
              if (IsSome(x_3727->meta->bb_1_bb_time_table)) {
                auto x_3770 = UnSome(x_3727->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3770, x_3727, MakeRecomputeBB(static_cast<int64_t>(0)));
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
      [&](const auto &x_3729, const auto &x_3730) {
        return x_3725(x_3730, ListNthExn(x_3727->children, x_3729), x_3728);
      });
}
Unit insert_value_x_3697(const auto &x_3726, const auto &x_3727, const auto &x_3728) {
  return x_3725(x_3726, x_3727, x_3728);
}
Unit x_3772(const auto &x_3773, const auto &x_3774, const auto &x_3775) {
  return ListMatch(
      x_3773,
      [&](const auto &x_3778) {
        auto x_3779 = Zro(x_3775);
        auto x_3780 = Fst(x_3775);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5939 = x_3779;
        if (x_5939 == "attributes") {
          std::string x_5940 = x_3780;
          if (x_5940 == "width") {
            WriteMetric();
            x_3774->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3781) {
              if (IsSome(x_3774->meta->bb_1_bb_time_table)) {
                auto x_3782 = UnSome(x_3774->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3782, x_3774, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5940 == "image_height") {
            WriteMetric();
            x_3774->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3784) {
              if (IsSome(x_3774->meta->bb_0_bb_time_table)) {
                auto x_3785 = UnSome(x_3774->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3785, x_3774, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5940 == "image_width") {
            WriteMetric();
            x_3774->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3787) {
              if (IsSome(x_3774->meta->bb_0_bb_time_table)) {
                auto x_3788 = UnSome(x_3774->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3788, x_3774, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5940 == "height") {
            WriteMetric();
            x_3774->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3790) {
              if (IsSome(x_3774->meta->bb_1_bb_time_table)) {
                auto x_3791 = UnSome(x_3774->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3791, x_3774, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5940 == "viewBox") {
            WriteMetric();
            x_3774->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3793) {
              if (IsSome(x_3774->meta->bb_0_bb_time_table)) {
                auto x_3794 = UnSome(x_3774->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3794, x_3774, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5939 == "properties") {
          std::string x_5941 = x_3780;
          if (x_5941 == "width") {
            WriteMetric();
            x_3774->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3796) {
              if (IsSome(x_3774->meta->bb_0_bb_time_table)) {
                auto x_3797 = UnSome(x_3774->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3797, x_3774, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5941 == "flex-grow") {
            WriteMetric();
            x_3774->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3799) {
              if (IsSome(x_3774->meta->bb_1_bb_time_table)) {
                auto x_3800 = UnSome(x_3774->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3800, x_3774, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5941 == "height") {
            WriteMetric();
            x_3774->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3802) {
              if (IsSome(x_3774->meta->bb_0_bb_time_table)) {
                auto x_3803 = UnSome(x_3774->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3803, x_3774, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5941 == "display") {
            WriteMetric();
            x_3774->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3805) {
              if (IsSome(x_3774->meta->bb_1_bb_time_table)) {
                auto x_3806 = UnSome(x_3774->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3806, x_3774, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5941 == "position") {
            WriteMetric();
            x_3774->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3808) {
              if (IsSome(x_3774->meta->bb_1_bb_time_table)) {
                auto x_3809 = UnSome(x_3774->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3809, x_3774, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5941 == "flex-shrink") {
            WriteMetric();
            x_3774->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3811) {
              if (IsSome(x_3774->meta->bb_1_bb_time_table)) {
                auto x_3812 = UnSome(x_3774->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3812, x_3774, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5941 == "flex-direction") {
            WriteMetric();
            x_3774->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3814) {
              if (IsSome(x_3774->meta->bb_1_bb_time_table)) {
                auto x_3815 = UnSome(x_3774->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3815, x_3774, MakeRecomputeBB(static_cast<int64_t>(0)));
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
      [&](const auto &x_3776, const auto &x_3777) {
        return x_3772(x_3777, ListNthExn(x_3774->children, x_3776), x_3775);
      });
}
Unit delete_value_x_3695(const auto &x_3773, const auto &x_3774, const auto &x_3775) {
  return x_3772(x_3773, x_3774, x_3775);
}
Unit x_3817(const auto &x_3818, const auto &x_3819, const auto &x_3820) {
  return ListMatch(
      x_3818,
      [&](const auto &x_3823) {
        auto x_3824 = Zro(x_3820);
        auto x_3825 = Zro(x_3824);
        auto x_3826 = Fst(x_3824);
        auto x_3827 = Fst(x_3820);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5942 = x_3825;
        if (x_5942 == "attributes") {
          std::string x_5943 = x_3826;
          if (x_5943 == "width") {
            WriteMetric();
            x_3819->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3828) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3829 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3829, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_attr_width = true;
            x_3819->attr_width = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3831) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3832 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3832, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5943 == "image_height") {
            WriteMetric();
            x_3819->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3834) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3835 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3835, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_attr_image_height = true;
            x_3819->attr_image_height = Asint64_t(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3837) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3838 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3838, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5943 == "image_width") {
            WriteMetric();
            x_3819->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3840) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3841 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3841, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_attr_image_width = true;
            x_3819->attr_image_width = Asint64_t(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3843) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3844 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3844, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5943 == "height") {
            WriteMetric();
            x_3819->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3846) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3847 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3847, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_attr_height = true;
            x_3819->attr_height = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3849) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3850 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3850, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5943 == "viewBox") {
            WriteMetric();
            x_3819->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3852) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3853 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3853, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_attr_viewBox = true;
            x_3819->attr_viewBox = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3855) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3856 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3856, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5942 == "properties") {
          std::string x_5944 = x_3826;
          if (x_5944 == "width") {
            WriteMetric();
            x_3819->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3858) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3859 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3859, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_prop_width = true;
            x_3819->prop_width = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3861) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3862 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3862, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5944 == "flex-grow") {
            WriteMetric();
            x_3819->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3864) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3865 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3865, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_prop_flex_grow = true;
            x_3819->prop_flex_grow = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3867) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3868 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3868, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5944 == "height") {
            WriteMetric();
            x_3819->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3870) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3871 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3871, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_prop_height = true;
            x_3819->prop_height = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3873) {
              if (IsSome(x_3819->meta->bb_0_bb_time_table)) {
                auto x_3874 = UnSome(x_3819->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3874, x_3819, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5944 == "display") {
            WriteMetric();
            x_3819->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3876) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3877 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3877, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_prop_display = true;
            x_3819->prop_display = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3879) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3880 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3880, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5944 == "position") {
            WriteMetric();
            x_3819->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3882) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3883 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3883, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_prop_position = true;
            x_3819->prop_position = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3885) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3886 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3886, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5944 == "flex-shrink") {
            WriteMetric();
            x_3819->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3888) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3889 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3889, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_prop_flex_shrink = true;
            x_3819->prop_flex_shrink = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3891) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3892 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3892, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5944 == "flex-direction") {
            WriteMetric();
            x_3819->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3894) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3895 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3895, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3819->has_prop_flex_direction = true;
            x_3819->prop_flex_direction = AsDEString(x_3827);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3897) {
              if (IsSome(x_3819->meta->bb_1_bb_time_table)) {
                auto x_3898 = UnSome(x_3819->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3898, x_3819, MakeRecomputeBB(static_cast<int64_t>(0)));
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
      [&](const auto &x_3821, const auto &x_3822) {
        return x_3817(x_3822, ListNthExn(x_3819->children, x_3821), x_3820);
      });
}
Unit replace_value_x_3693(const auto &x_3818, const auto &x_3819, const auto &x_3820) {
  return x_3817(x_3818, x_3819, x_3820);
}
Unit x_3900(const auto &x_3901, const auto &x_3902, const auto &x_3903) {
  auto x_3904 = ListHeadExn(x_3901);
  auto x_3905 = ListTailExn(x_3901);
  if (ListIsEmpty(x_3905)) {
    InputChangeMetric(IntAdd(node_size_x_3662(ListNthExn(x_3902->children, x_3904)), node_size_x_3662(x_3903)));
    auto x_3906 = ListSplitN(x_3902->children, x_3904);
    auto x_3907 = Zro(x_3906);
    auto x_3908 = Fst(x_3906);
    auto x_3909 = ListHeadExn(x_3908);
    auto x_3910 = ListTailExn(x_3908);
    x_3902->children = ListAppend(x_3907, x_3910);
    x_3909->meta->alive = false;
    OptionMatch(
        x_3909->prev, [&](const auto &x_3912) { return MakeUnit(); },
        [&](const auto &x_3911) {
          x_3911->next = ToPath(x_3909->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3909->next, [&](const auto &x_3914) { return MakeUnit(); },
        [&](const auto &x_3913) {
          x_3913->prev = ToPath(x_3909->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3907)) {
      x_3902->first = ToPath(ListHead(x_3910));
    }
    if (ListIsEmpty(x_3910)) {
      x_3902->last = ToPath(ListLast(x_3907));
    }
    OptionMatch(
        x_3909->next, [&](const auto &x_3919) { return MakeUnit(); },
        [&](const auto &x_3915) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3916) {
            if (IsSome(x_3915->meta->bb_1_bb_time_table)) {
              auto x_3917 = UnSome(x_3915->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3917, x_3915, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3902->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3920) {
        if (IsSome(x_3902->meta->bb_0_bb_time_table)) {
          auto x_3921 = UnSome(x_3902->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3921, x_3902, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3910)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3923) {
        if (IsSome(x_3902->meta->bb_0_bb_time_table)) {
          auto x_3924 = UnSome(x_3902->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3924, x_3902, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3909->next, [&](const auto &x_3930) { return MakeUnit(); },
        [&](const auto &x_3926) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3927) {
            if (IsSome(x_3926->meta->bb_0_bb_time_table)) {
              auto x_3928 = UnSome(x_3926->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3928, x_3926, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3902->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3931) {
        if (IsSome(x_3902->meta->bb_2_bb_time_table)) {
          auto x_3932 = UnSome(x_3902->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3932, x_3902, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3910)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3934) {
        if (IsSome(x_3902->meta->bb_2_bb_time_table)) {
          auto x_3935 = UnSome(x_3902->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3935, x_3902, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3909->next, [&](const auto &x_3941) { return MakeUnit(); },
        [&](const auto &x_3937) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3938) {
            if (IsSome(x_3937->meta->bb_2_bb_time_table)) {
              auto x_3939 = UnSome(x_3937->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3939, x_3937, MakeRecomputeBB(static_cast<int64_t>(2)));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    auto x_3942 = ListSplitN(x_3902->children, x_3904);
    auto x_3943 = Zro(x_3942);
    auto x_3944 = Fst(x_3942);
    x_3902->children = ListAppend(x_3943, Cons(x_3903, x_3944));
    if (ListIsEmpty(x_3943)) {
      x_3902->first = x_3903.get();
    }
    if (ListIsEmpty(x_3944)) {
      x_3902->last = x_3903.get();
    }
    OptionMatch(
        ListLast(x_3943),
        [&](const auto &x_3946) {
          x_3903->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3945) {
          x_3903->prev = x_3945.get();
          x_3945->next = x_3903.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3944),
        [&](const auto &x_3948) {
          x_3903->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3947) {
          x_3903->next = x_3947.get();
          x_3947->prev = x_3903.get();
          return MakeUnit();
        });
    x_3903->parent = x_3902.get();
    auto x_3949 = (x_3903->parent);
    if (IsSome(x_3949->meta->pass_0_proc_time_table)) {
      auto x_3952 = OptionMatch(
          x_3903->prev, [&](const auto &x_3951) { return NextTotalOrder(UnSome(x_3949->meta->bb_1_bb_time_table)); },
          [&](const auto &x_3950) { return NextTotalOrder(UnSome(x_3950->meta->pass_0_proc_time_table)); });
      x_3903->meta->pass_0_proc_time_table = x_3952;
      MetaWriteMetric();
      QueueForcePush(x_3952, x_3903, MakeRecomputeProc(static_cast<int64_t>(0)));
    }
    OptionMatch(
        x_3903->next, [&](const auto &x_3958) { return MakeUnit(); },
        [&](const auto &x_3954) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3955) {
            if (IsSome(x_3954->meta->bb_1_bb_time_table)) {
              auto x_3956 = UnSome(x_3954->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3956, x_3954, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_3902->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3959) {
        if (IsSome(x_3902->meta->bb_0_bb_time_table)) {
          auto x_3960 = UnSome(x_3902->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3960, x_3902, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3944)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3962) {
        if (IsSome(x_3902->meta->bb_0_bb_time_table)) {
          auto x_3963 = UnSome(x_3902->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3963, x_3902, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3903->next, [&](const auto &x_3969) { return MakeUnit(); },
        [&](const auto &x_3965) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3966) {
            if (IsSome(x_3965->meta->bb_0_bb_time_table)) {
              auto x_3967 = UnSome(x_3965->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3967, x_3965, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    auto x_3970 = (x_3903->parent);
    if (IsSome(x_3970->meta->pass_1_proc_time_table)) {
      auto x_3973 = OptionMatch(
          x_3903->prev, [&](const auto &x_3972) { return NextTotalOrder(UnSome(x_3970->meta->bb_2_bb_time_table)); },
          [&](const auto &x_3971) { return NextTotalOrder(UnSome(x_3971->meta->pass_1_proc_time_table)); });
      x_3903->meta->pass_1_proc_time_table = x_3973;
      MetaWriteMetric();
      QueueForcePush(x_3973, x_3903, MakeRecomputeProc(static_cast<int64_t>(1)));
    }
    if (ListIsSingleton(x_3902->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3975) {
        if (IsSome(x_3902->meta->bb_2_bb_time_table)) {
          auto x_3976 = UnSome(x_3902->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3976, x_3902, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3944)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3978) {
        if (IsSome(x_3902->meta->bb_2_bb_time_table)) {
          auto x_3979 = UnSome(x_3902->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3979, x_3902, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3903->next, [&](const auto &x_3985) { return MakeUnit(); },
        [&](const auto &x_3981) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3982) {
            if (IsSome(x_3981->meta->bb_2_bb_time_table)) {
              auto x_3983 = UnSome(x_3981->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3983, x_3981, MakeRecomputeBB(static_cast<int64_t>(2)));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3900(x_3905, ListNthExn(x_3902->children, x_3904), x_3903);
  }
}
Unit replace_node_x_3691(const auto &x_3901, const auto &x_3902, const auto &x_3903) {
  return x_3900(x_3901, x_3902, x_3903);
}
Unit x_3986(const auto &x_3987) {
  ListIter2(x_3987->children, [&](const auto &x_3988, const auto &x_3989) {
    x_3988->parent = x_3987.get();
    x_3989->parent = x_3987.get();
    x_3988->next = x_3989.get();
    x_3989->prev = x_3988.get();
    x_3986(x_3988);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3987->children),
      [&](const auto &x_3991) {
        x_3987->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3990) {
        x_3987->first = x_3990.get();
        x_3990->parent = x_3987.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3987->children),
      [&](const auto &x_3993) {
        x_3987->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3992) {
        x_3987->last = x_3992.get();
        x_3992->parent = x_3987.get();
        x_3986(x_3992);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3689(const auto &x_3987) { return x_3986(x_3987); }
Unit x_3994(const auto &x_3995, const auto &x_3996, const auto &x_3997) {
  auto x_3998 = ListHeadExn(x_3995);
  auto x_3999 = ListTailExn(x_3995);
  if (ListIsEmpty(x_3999)) {
    InputChangeMetric(node_size_x_3662(ListNthExn(x_3996->children, x_3998)));
    auto x_4000 = ListSplitN(x_3996->children, x_3998);
    auto x_4001 = Zro(x_4000);
    auto x_4002 = Fst(x_4000);
    auto x_4003 = ListHeadExn(x_4002);
    auto x_4004 = ListTailExn(x_4002);
    x_3996->children = ListAppend(x_4001, x_4004);
    x_4003->meta->alive = false;
    OptionMatch(
        x_4003->prev, [&](const auto &x_4006) { return MakeUnit(); },
        [&](const auto &x_4005) {
          x_4005->next = ToPath(x_4003->next);
          return MakeUnit();
        });
    OptionMatch(
        x_4003->next, [&](const auto &x_4008) { return MakeUnit(); },
        [&](const auto &x_4007) {
          x_4007->prev = ToPath(x_4003->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_4001)) {
      x_3996->first = ToPath(ListHead(x_4004));
    }
    if (ListIsEmpty(x_4004)) {
      x_3996->last = ToPath(ListLast(x_4001));
    }
    OptionMatch(
        x_4003->next, [&](const auto &x_4013) { return MakeUnit(); },
        [&](const auto &x_4009) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4010) {
            if (IsSome(x_4009->meta->bb_1_bb_time_table)) {
              auto x_4011 = UnSome(x_4009->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4011, x_4009, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3996->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4014) {
        if (IsSome(x_3996->meta->bb_0_bb_time_table)) {
          auto x_4015 = UnSome(x_3996->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4015, x_3996, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4004)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4017) {
        if (IsSome(x_3996->meta->bb_0_bb_time_table)) {
          auto x_4018 = UnSome(x_3996->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4018, x_3996, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4003->next, [&](const auto &x_4024) { return MakeUnit(); },
        [&](const auto &x_4020) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4021) {
            if (IsSome(x_4020->meta->bb_0_bb_time_table)) {
              auto x_4022 = UnSome(x_4020->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4022, x_4020, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3996->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4025) {
        if (IsSome(x_3996->meta->bb_2_bb_time_table)) {
          auto x_4026 = UnSome(x_3996->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4026, x_3996, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4004)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4028) {
        if (IsSome(x_3996->meta->bb_2_bb_time_table)) {
          auto x_4029 = UnSome(x_3996->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4029, x_3996, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4003->next, [&](const auto &x_4035) { return MakeUnit(); },
        [&](const auto &x_4031) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4032) {
            if (IsSome(x_4031->meta->bb_2_bb_time_table)) {
              auto x_4033 = UnSome(x_4031->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4033, x_4031, MakeRecomputeBB(static_cast<int64_t>(2)));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_3994(x_3999, ListNthExn(x_3996->children, x_3998), x_3997);
  }
}
Unit remove_node_x_3687(const auto &x_3995, const auto &x_3996, const auto &x_3997) {
  return x_3994(x_3995, x_3996, x_3997);
}
Unit x_4036(const auto &x_4037) {
  if (!QueueIsEmpty()) {
    auto x_4038 = QueuePeek();
    auto x_4039 = Zro(x_4038);
    auto x_4040 = Fst(x_4038);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_4040.n->meta->alive) {
      RFMatch(
          x_4040.rf,
          [&](const auto &x_4043) {
            auto x_5945 = x_4043;
            if (x_5945 == 0) {
              return eval_stmts_x_4044(x_4040.n);
            } else if (x_5945 == 1) {
              return eval_stmts_x_4045(x_4040.n);
            } else if (x_5945 == 2) {
              return eval_stmts_x_4046(x_4040.n);
            } else {
              Panic();
            }
          },
          [&](const auto &x_4041) {
            auto x_4042 = ReadRef(current_time);
            WriteRef(current_time, x_4039);
            [&]() {
              auto x_5946 = x_4041;
              if (x_5946 == 0) {
                eval_stmts_x_3675(x_4040.n);
                x_4040.n->meta->pass_0_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else if (x_5946 == 1) {
                eval_stmts_x_3677(x_4040.n);
                x_4040.n->meta->pass_1_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else {
                Panic();
              }
            }();
            WriteRef(current_time, x_4042);
            return MakeUnit();
          });
    }
    auto x_4047 = Zro(QueuePop());
    x_4036(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_3685(const auto &x_4037) { return x_4036(x_4037); }
Unit x_4048(const auto &x_4049, const auto &x_4050, const auto &x_4051) {
  auto x_4052 = ListHeadExn(x_4049);
  auto x_4053 = ListTailExn(x_4049);
  if (ListIsEmpty(x_4053)) {
    InputChangeMetric(node_size_x_3662(x_4051));
    auto x_4054 = ListSplitN(x_4050->children, x_4052);
    auto x_4055 = Zro(x_4054);
    auto x_4056 = Fst(x_4054);
    x_4050->children = ListAppend(x_4055, Cons(x_4051, x_4056));
    if (ListIsEmpty(x_4055)) {
      x_4050->first = x_4051.get();
    }
    if (ListIsEmpty(x_4056)) {
      x_4050->last = x_4051.get();
    }
    OptionMatch(
        ListLast(x_4055),
        [&](const auto &x_4058) {
          x_4051->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4057) {
          x_4051->prev = x_4057.get();
          x_4057->next = x_4051.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_4056),
        [&](const auto &x_4060) {
          x_4051->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4059) {
          x_4051->next = x_4059.get();
          x_4059->prev = x_4051.get();
          return MakeUnit();
        });
    x_4051->parent = x_4050.get();
    auto x_4061 = (x_4051->parent);
    if (IsSome(x_4061->meta->pass_0_proc_time_table)) {
      auto x_4064 = OptionMatch(
          x_4051->prev, [&](const auto &x_4063) { return NextTotalOrder(UnSome(x_4061->meta->bb_1_bb_time_table)); },
          [&](const auto &x_4062) { return NextTotalOrder(UnSome(x_4062->meta->pass_0_proc_time_table)); });
      x_4051->meta->pass_0_proc_time_table = x_4064;
      MetaWriteMetric();
      QueueForcePush(x_4064, x_4051, MakeRecomputeProc(static_cast<int64_t>(0)));
    }
    OptionMatch(
        x_4051->next, [&](const auto &x_4070) { return MakeUnit(); },
        [&](const auto &x_4066) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4067) {
            if (IsSome(x_4066->meta->bb_1_bb_time_table)) {
              auto x_4068 = UnSome(x_4066->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4068, x_4066, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_4050->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4071) {
        if (IsSome(x_4050->meta->bb_0_bb_time_table)) {
          auto x_4072 = UnSome(x_4050->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4072, x_4050, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4056)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4074) {
        if (IsSome(x_4050->meta->bb_0_bb_time_table)) {
          auto x_4075 = UnSome(x_4050->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4075, x_4050, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4051->next, [&](const auto &x_4081) { return MakeUnit(); },
        [&](const auto &x_4077) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4078) {
            if (IsSome(x_4077->meta->bb_0_bb_time_table)) {
              auto x_4079 = UnSome(x_4077->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4079, x_4077, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    auto x_4082 = (x_4051->parent);
    if (IsSome(x_4082->meta->pass_1_proc_time_table)) {
      auto x_4085 = OptionMatch(
          x_4051->prev, [&](const auto &x_4084) { return NextTotalOrder(UnSome(x_4082->meta->bb_2_bb_time_table)); },
          [&](const auto &x_4083) { return NextTotalOrder(UnSome(x_4083->meta->pass_1_proc_time_table)); });
      x_4051->meta->pass_1_proc_time_table = x_4085;
      MetaWriteMetric();
      QueueForcePush(x_4085, x_4051, MakeRecomputeProc(static_cast<int64_t>(1)));
    }
    if (ListIsSingleton(x_4050->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4087) {
        if (IsSome(x_4050->meta->bb_2_bb_time_table)) {
          auto x_4088 = UnSome(x_4050->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4088, x_4050, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4056)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4090) {
        if (IsSome(x_4050->meta->bb_2_bb_time_table)) {
          auto x_4091 = UnSome(x_4050->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4091, x_4050, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4051->next, [&](const auto &x_4097) { return MakeUnit(); },
        [&](const auto &x_4093) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4094) {
            if (IsSome(x_4093->meta->bb_2_bb_time_table)) {
              auto x_4095 = UnSome(x_4093->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4095, x_4093, MakeRecomputeBB(static_cast<int64_t>(2)));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_4048(x_4053, ListNthExn(x_4050->children, x_4052), x_4051);
  }
}
Unit add_node_x_3683(const auto &x_4049, const auto &x_4050, const auto &x_4051) {
  return x_4048(x_4049, x_4050, x_4051);
}
Unit x_4098(const auto &x_4099) {
  ListIter2(x_4099->children, [&](const auto &x_4100, const auto &x_4101) {
    x_4100->parent = x_4099.get();
    x_4101->parent = x_4099.get();
    x_4100->next = x_4101.get();
    x_4101->prev = x_4100.get();
    x_4098(x_4100);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4099->children),
      [&](const auto &x_4103) {
        x_4099->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4102) {
        x_4099->first = x_4102.get();
        x_4102->parent = x_4099.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4099->children),
      [&](const auto &x_4105) {
        x_4099->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4104) {
        x_4099->last = x_4104.get();
        x_4104->parent = x_4099.get();
        x_4098(x_4104);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3681(const auto &x_4099) { return x_4098(x_4099); }
Unit eval_stmts_x_3677(const auto &x_4106) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4107) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4108) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4106->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4046(x_4106);
      return MakeUnit();
    })));
    ListIter(x_4106->children, [&](const auto &x_4109) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4110) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3677(x_4109);
        x_4109->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3675(const auto &x_4111) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4112) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4113) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4111->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4044(x_4111);
      return MakeUnit();
    })));
    ListIter(x_4111->children, [&](const auto &x_4114) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4115) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3675(x_4114);
        x_4114->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4116) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4111->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4045(x_4111);
      return MakeUnit();
    })));
    return MakeUnit();
  })));
}
Unit x_4117(const auto &x_4118) {
  ListIter2(x_4118->children, [&](const auto &x_4119, const auto &x_4120) {
    x_4119->parent = x_4118.get();
    x_4120->parent = x_4118.get();
    x_4119->next = x_4120.get();
    x_4120->prev = x_4119.get();
    x_4117(x_4119);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4118->children),
      [&](const auto &x_4122) {
        x_4118->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4121) {
        x_4118->first = x_4121.get();
        x_4121->parent = x_4118.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4118->children),
      [&](const auto &x_4124) {
        x_4118->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4123) {
        x_4118->last = x_4123.get();
        x_4123->parent = x_4118.get();
        x_4117(x_4123);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3671(const auto &x_4118) { return x_4117(x_4118); }
int64_t x_4125(const auto &x_4126) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4126->children, [&](const auto &x_4127) { return x_4125(x_4127); }));
}
int64_t node_size_x_3662(const auto &x_4126) { return x_4125(x_4126); }
int64_t x_4128(const auto &x_4129) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4129->children, [&](const auto &x_4130) { return x_4128(x_4130); }));
}
int64_t layout_size_x_3661(const auto &x_4129) { return x_4128(x_4129); }
LayoutNode x_4131(const auto &x_4132) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_4132)), [&](const auto &x_4133) { return x_4131(x_4133); }));
}
LayoutNode json_to_layout_node_x_3660(const auto &x_4132) { return x_4131(x_4132); }
Node x_4134(const auto &x_4135) {
  return MakeNode(x_4135->name, x_4135->attr, x_4135->prop, x_4135->extern_id,
                  ListMap(x_4135->children, [&](const auto &x_4136) { return x_4134(x_4136); }));
}
Node node_to_fs_node_x_3659(const auto &x_4135) { return x_4134(x_4135); }
Node x_4137(const auto &x_4138) {
  return MakeNode(
      JsonToString(JsonMember("name", x_4138)), JsonToDict(JsonMember("attributes", x_4138)),
      JsonToDict(JsonMember("properties", x_4138)), JsonToInt(JsonMember("id", x_4138)),
      ListMap(JsonToList(JsonMember("children", x_4138)), [&](const auto &x_4139) { return x_4137(x_4139); }));
}
Node json_to_node_aux_x_3658(const auto &x_4138) { return x_4137(x_4138); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_3663) {
    PrintEndline("RUNNING PQ_D");
    return WithInFile("command.json", [&](const auto &x_3664) {
      auto x_3665 = MakeRef(static_cast<int64_t>(0));
      auto x_3666 = FreshMetric();
      auto x_3667 = JsonOfString(InputLine(x_3664));
      auto x_3668 = JsonOfString(InputLine(x_3664));
      auto x_3669 = MakeStack();
      PushStack(x_3669, x_3667);
      PushStack(x_3669, x_3668);
      Assert(StringEqual(JsonToString(JsonMember("name", x_3667)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_3668)), "layout_init"));
      auto x_3672 = [&]() {
        auto x_3670 = json_to_node_aux_x_3658(JsonMember("node", x_3667));
        x_3670->parent = nullptr;
        x_3670->prev = nullptr;
        x_3670->next = nullptr;
        set_children_relation_x_3671(x_3670);
        return x_3670;
      }();
      auto x_3673 = json_to_layout_node_x_3660(JsonMember("node", x_3668));
      OutputChangeMetric(layout_size_x_3661(x_3673));
      InputChangeMetric(node_size_x_3662(x_3672));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3674) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3675(x_3672);
        x_3672->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3676) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3677(x_3672);
        x_3672->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      JsonToChannel(x_3663, [&]() {
        auto x_5947 = FreshJson();
        WriteJson(x_5947, "name", "PQ_D");
        WriteJson(x_5947, "diff_num", ReadRef(x_3665));
        WriteJson(x_5947, "read_count", MetricReadCount());
        WriteJson(x_5947, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_5947, "write_count", MetricWriteCount());
        WriteJson(x_5947, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_5947, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_5947, "input_change_count", MetricInputChangeCount());
        WriteJson(x_5947, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_5947, "overhead_time", MetricOverheadCount());
        WriteJson(x_5947, "eval_time", MetricEvalCount());
        WriteJson(x_5947, "html", "");
        WriteJson(x_5947, "command", StackToList(x_3669));
        return x_5947;
      }());
      OutputString(x_3663, "\n");
      ClearStack(x_3669);
      WriteRef(x_3665, IntAdd(ReadRef(x_3665), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_3664, [&](const auto &x_3678) {
        auto x_3679 = JsonOfString(x_3678);
        PushStack(x_3669, x_3679);
        std::string x_5949 = JsonToString(JsonMember("name", x_3679));
        if (x_5949 == "add") {
          return add_node_x_3683(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3682) { return JsonToInt(x_3682); }),
              x_3672, [&]() {
                auto x_3680 = json_to_node_aux_x_3658(JsonMember("node", x_3679));
                x_3680->parent = nullptr;
                x_3680->prev = nullptr;
                x_3680->next = nullptr;
                set_children_relation_x_3681(x_3680);
                return x_3680;
              }());
        } else if (x_5949 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_3684) {
            recalculate_internal_x_3685(MakeUnit());
            return MakeUnit();
          })));
          JsonToChannel(x_3663, [&]() {
            auto x_5948 = FreshJson();
            WriteJson(x_5948, "name", "PQ_D");
            WriteJson(x_5948, "diff_num", ReadRef(x_3665));
            WriteJson(x_5948, "read_count", MetricReadCount());
            WriteJson(x_5948, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_5948, "write_count", MetricWriteCount());
            WriteJson(x_5948, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_5948, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_5948, "input_change_count", MetricInputChangeCount());
            WriteJson(x_5948, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_5948, "overhead_time", MetricOverheadCount());
            WriteJson(x_5948, "eval_time", MetricEvalCount());
            WriteJson(x_5948, "html", "");
            WriteJson(x_5948, "command", StackToList(x_3669));
            return x_5948;
          }());
          OutputString(x_3663, "\n");
          ClearStack(x_3669);
          WriteRef(x_3665, IntAdd(ReadRef(x_3665), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5949 == "remove") {
          return remove_node_x_3687(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3686) { return JsonToInt(x_3686); }),
              x_3672, MakeUnit());
        } else if (x_5949 == "replace") {
          return replace_node_x_3691(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3690) { return JsonToInt(x_3690); }),
              x_3672, [&]() {
                auto x_3688 = json_to_node_aux_x_3658(JsonMember("node", x_3679));
                x_3688->parent = nullptr;
                x_3688->prev = nullptr;
                x_3688->next = nullptr;
                set_children_relation_x_3689(x_3688);
                return x_3688;
              }());
        } else if (x_5949 == "replace_value") {
          return replace_value_x_3693(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3692) { return JsonToInt(x_3692); }),
              x_3672,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3679)), JsonToString(JsonMember("key", x_3679))),
                       JsonToValue(JsonMember("value", x_3679))));
        } else if (x_5949 == "delete_value") {
          return delete_value_x_3695(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3694) { return JsonToInt(x_3694); }),
              x_3672, MakePair(JsonToString(JsonMember("type", x_3679)), JsonToString(JsonMember("key", x_3679))));
        } else if (x_5949 == "insert_value") {
          return insert_value_x_3697(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3696) { return JsonToInt(x_3696); }),
              x_3672,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3679)), JsonToString(JsonMember("key", x_3679))),
                       JsonToValue(JsonMember("value", x_3679))));
        } else if (x_5949 == "layout_remove") {
          return remove_layout_node_x_3699(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3698) { return JsonToInt(x_3698); }),
              x_3673, MakeUnit());
        } else if (x_5949 == "layout_add") {
          return add_layout_node_x_3701(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3700) { return JsonToInt(x_3700); }),
              x_3673, json_to_layout_node_x_3660(JsonMember("node", x_3679)));
        } else if (x_5949 == "layout_replace") {
          return replace_layout_node_x_3703(
              ListMap(JsonToList(JsonMember("path", x_3679)), [&](const auto &x_3702) { return JsonToInt(x_3702); }),
              x_3673, json_to_layout_node_x_3660(JsonMember("node", x_3679)));
        } else if (x_5949 == "layout_info_changed") {
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