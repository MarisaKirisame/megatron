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
Unit var_modified_x_4391(const auto &x_4393);
auto eval_expr_x_4388(const auto &x_4415);
Unit var_modified_x_4386(const auto &x_4492);
auto eval_expr_x_4383(const auto &x_4498);
Unit var_modified_x_4381(const auto &x_4515);
auto eval_expr_x_4378(const auto &x_4529);
Unit var_modified_x_4376(const auto &x_4534);
auto eval_expr_x_4373(const auto &x_4548);
Unit var_modified_x_4371(const auto &x_4557);
auto eval_expr_x_4368(const auto &x_4563);
Unit var_modified_x_4366(const auto &x_4564);
auto eval_expr_x_4363(const auto &x_4570);
Unit var_modified_x_4361(const auto &x_4575);
auto eval_expr_x_4358(const auto &x_4585);
Unit var_modified_x_4356(const auto &x_4596);
auto eval_expr_x_4353(const auto &x_4602);
Unit var_modified_x_4351(const auto &x_4607);
auto eval_expr_x_4348(const auto &x_4617);
Unit var_modified_x_4346(const auto &x_4628);
auto eval_expr_x_4343(const auto &x_4638);
Unit var_modified_x_4341(const auto &x_4663);
auto eval_expr_x_4338(const auto &x_4677);
Unit var_modified_x_4336(const auto &x_4702);
auto eval_expr_x_4333(const auto &x_4708);
Unit var_modified_x_4331(const auto &x_4711);
auto eval_expr_x_4328(const auto &x_4723);
Unit var_modified_x_4326(const auto &x_4732);
auto eval_expr_x_4323(const auto &x_4744);
Unit var_modified_x_4321(const auto &x_4753);
auto eval_expr_x_4318(const auto &x_4763);
Unit var_modified_x_4316(const auto &x_4766);
auto eval_expr_x_4313(const auto &x_4776);
Unit var_modified_x_4311(const auto &x_4779);
auto eval_expr_x_4308(const auto &x_4793);
Unit var_modified_x_4306(const auto &x_4796);
auto eval_expr_x_4303(const auto &x_4810);
Unit var_modified_x_4299(const auto &x_4813);
auto eval_expr_x_4296(const auto &x_4827);
Unit var_modified_x_4294(const auto &x_4856);
auto eval_expr_x_4291(const auto &x_4870);
Unit var_modified_x_4289(const auto &x_4883);
auto eval_expr_x_4286(const auto &x_4897);
Unit var_modified_x_4284(const auto &x_4906);
auto eval_expr_x_4281(const auto &x_4912);
Unit var_modified_x_4279(const auto &x_4921);
auto eval_expr_x_4276(const auto &x_4931);
Unit var_modified_x_4274(const auto &x_5076);
auto eval_expr_x_4271(const auto &x_5082);
Unit var_modified_x_4269(const auto &x_5131);
auto eval_expr_x_4266(const auto &x_5141);
Unit var_modified_x_4264(const auto &x_5144);
auto eval_expr_x_4261(const auto &x_5150);
Unit var_modified_x_4259(const auto &x_5159);
auto eval_expr_x_4256(const auto &x_5173);
Unit var_modified_x_4254(const auto &x_5182);
auto eval_expr_x_4251(const auto &x_5196);
Unit var_modified_x_4249(const auto &x_5205);
auto eval_expr_x_4246(const auto &x_5217);
Unit var_modified_x_4244(const auto &x_5230);
auto eval_expr_x_4241(const auto &x_5236);
Unit var_modified_x_4239(const auto &x_5245);
auto eval_expr_x_4236(const auto &x_5255);
Unit var_modified_x_4234(const auto &x_5408);
auto eval_expr_x_4231(const auto &x_5414);
Unit var_modified_x_4229(const auto &x_5419);
auto eval_expr_x_4226(const auto &x_5425);
Unit var_modified_x_4224(const auto &x_5474);
auto eval_expr_x_4221(const auto &x_5480);
Unit var_modified_x_4219(const auto &x_5493);
auto eval_expr_x_4216(const auto &x_5503);
Unit var_modified_x_4212(const auto &x_5506);
auto eval_expr_x_4209(const auto &x_5514);
Unit var_modified_x_4207(const auto &x_5531);
auto eval_expr_x_4204(const auto &x_5537);
Unit var_modified_x_4202(const auto &x_5546);
auto eval_expr_x_4199(const auto &x_5556);
Unit var_modified_x_4197(const auto &x_5609);
auto eval_expr_x_4194(const auto &x_5621);
Unit var_modified_x_4192(const auto &x_5646);
auto eval_expr_x_4189(const auto &x_5654);
Unit var_modified_x_4187(const auto &x_5663);
auto eval_expr_x_4184(const auto &x_5673);
Unit var_modified_x_4182(const auto &x_5726);
auto eval_expr_x_4179(const auto &x_5738);
Unit var_modified_x_4177(const auto &x_5759);
auto eval_expr_x_4174(const auto &x_5765);
Unit var_modified_x_4172(const auto &x_5786);
auto eval_expr_x_4169(const auto &x_5792);
Unit var_modified_x_4167(const auto &x_5805);
auto eval_expr_x_4164(const auto &x_5815);
Unit var_modified_x_4162(const auto &x_5836);
auto eval_expr_x_4159(const auto &x_5842);
Unit var_modified_x_4157(const auto &x_5847);
auto eval_expr_x_4154(const auto &x_5853);
Unit eval_stmts_x_4056(const auto &x_4152);
Unit eval_stmts_x_4055(const auto &x_4214);
Unit eval_stmts_x_4054(const auto &x_4301);
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
Unit x_4058(const auto &x_4059, const auto &x_4060, const auto &x_4061);
Unit x_4110(const auto &x_4111);
Unit eval_stmts_x_3685(const auto &x_4118);
Unit eval_stmts_x_3683(const auto &x_4123);
Unit x_4129(const auto &x_4130);
int64_t x_4137(const auto &x_4138);
int64_t x_4140(const auto &x_4141);
LayoutNode x_4143(const auto &x_4144);
Node x_4146(const auto &x_4147);
Node x_4149(const auto &x_4150);
Unit var_modified_x_4391(const auto &x_4393) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4394) {
    auto x_5858 = [&](const auto &x_4395) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4396) {
        if (IsSome(x_4395->meta->bb_0_bb_time_table)) {
          auto x_4397 = UnSome(x_4395->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4397, x_4395, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5858(x_4393);
    MakeUnit();
    auto x_5859 = [&](const auto &x_4401) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4402) {
        if (IsSome(x_4401->meta->bb_0_bb_time_table)) {
          auto x_4403 = UnSome(x_4401->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4403, x_4401, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4393->next, [&](const auto &x_4400) { return MakeUnit(); },
        [&](const auto &x_4399) {
          auto x_5862 = x_5859;
          x_5862(x_4399);
          return MakeUnit();
        });
    auto x_5860 = [&](const auto &x_4405) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4406) {
        if (IsSome(x_4405->meta->bb_2_bb_time_table)) {
          auto x_4407 = UnSome(x_4405->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4407, x_4405, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5860(x_4393);
    MakeUnit();
    auto x_5861 = [&](const auto &x_4411) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4412) {
        if (IsSome(x_4411->meta->bb_2_bb_time_table)) {
          auto x_4413 = UnSome(x_4411->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4413, x_4411, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4393->next, [&](const auto &x_4410) { return MakeUnit(); },
        [&](const auto &x_4409) {
          auto x_5863 = x_5861;
          x_5863(x_4409);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4388(const auto &x_4415) {
  if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_4415->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_4415->parent != nullptr) &&
          (eq((x_4415->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_4415->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_4415->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_4415->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_4415->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_4386(const auto &x_4492) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4493) {
    ListIter(x_4492->children, [&](const auto &x_4494) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4495) {
        if (IsSome(x_4494->meta->bb_1_bb_time_table)) {
          auto x_4496 = UnSome(x_4494->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4496, x_4494, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4383(const auto &x_4498) {
  return (((!(x_4498->parent != nullptr)) || (x_4498->parent)->var_visible) &&
          (neq(x_4498->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_4498->var_inside_svg) && (!x_4498->var_disabled))));
}
Unit var_modified_x_4381(const auto &x_4515) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4516) {
    auto x_5864 = [&](const auto &x_4517) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4518) {
        if (IsSome(x_4517->meta->bb_1_bb_time_table)) {
          auto x_4519 = UnSome(x_4517->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4519, x_4517, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5864(x_4515);
    MakeUnit();
    ListIter(x_4515->children, [&](const auto &x_4521) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4522) {
        if (IsSome(x_4521->meta->bb_1_bb_time_table)) {
          auto x_4523 = UnSome(x_4521->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4523, x_4521, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5865 = [&](const auto &x_4525) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4526) {
        if (IsSome(x_4525->meta->bb_0_bb_time_table)) {
          auto x_4527 = UnSome(x_4525->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4527, x_4525, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5865(x_4515);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4378(const auto &x_4529) {
  if (eq(x_4529->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_4529->parent != nullptr) && (x_4529->parent)->var_disabled);
  }
}
Unit var_modified_x_4376(const auto &x_4534) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4535) {
    auto x_5866 = [&](const auto &x_4536) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4537) {
        if (IsSome(x_4536->meta->bb_1_bb_time_table)) {
          auto x_4538 = UnSome(x_4536->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4538, x_4536, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5866(x_4534);
    MakeUnit();
    ListIter(x_4534->children, [&](const auto &x_4540) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4541) {
        if (IsSome(x_4540->meta->bb_1_bb_time_table)) {
          auto x_4542 = UnSome(x_4540->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4542, x_4540, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5867 = [&](const auto &x_4544) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4545) {
        if (IsSome(x_4544->meta->bb_0_bb_time_table)) {
          auto x_4546 = UnSome(x_4544->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4546, x_4544, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5867(x_4534);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4373(const auto &x_4548) {
  return ((x_4548->parent != nullptr) && ((x_4548->parent)->var_is_svg_block || (x_4548->parent)->var_inside_svg));
}
Unit var_modified_x_4371(const auto &x_4557) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4558) {
    ListIter(x_4557->children, [&](const auto &x_4559) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4560) {
        if (IsSome(x_4559->meta->bb_1_bb_time_table)) {
          auto x_4561 = UnSome(x_4559->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4561, x_4559, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4368(const auto &x_4563) { return eq(x_4563->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_4366(const auto &x_4564) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4565) {
    auto x_5868 = [&](const auto &x_4566) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4567) {
        if (IsSome(x_4566->meta->bb_0_bb_time_table)) {
          auto x_4568 = UnSome(x_4566->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4568, x_4566, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5868(x_4564);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4363(const auto &x_4570) {
  return neq(x_4570->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4361(const auto &x_4575) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4576) {
    auto x_5869 = [&](const auto &x_4577) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4578) {
        if (IsSome(x_4577->meta->bb_1_bb_time_table)) {
          auto x_4579 = UnSome(x_4577->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4579, x_4577, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5869(x_4575);
    MakeUnit();
    auto x_5870 = [&](const auto &x_4581) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4582) {
        if (IsSome(x_4581->meta->bb_0_bb_time_table)) {
          auto x_4583 = UnSome(x_4581->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4583, x_4581, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5870(x_4575);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4358(const auto &x_4585) {
  if (!x_4585->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4585->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_4585->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4585->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4356(const auto &x_4596) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4597) {
    auto x_5871 = [&](const auto &x_4598) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4599) {
        if (IsSome(x_4598->meta->bb_0_bb_time_table)) {
          auto x_4600 = UnSome(x_4598->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4600, x_4598, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5871(x_4596);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4353(const auto &x_4602) {
  return neq(x_4602->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_4351(const auto &x_4607) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4608) {
    auto x_5872 = [&](const auto &x_4609) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4610) {
        if (IsSome(x_4609->meta->bb_1_bb_time_table)) {
          auto x_4611 = UnSome(x_4609->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4611, x_4609, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5872(x_4607);
    MakeUnit();
    auto x_5873 = [&](const auto &x_4613) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4614) {
        if (IsSome(x_4613->meta->bb_0_bb_time_table)) {
          auto x_4615 = UnSome(x_4613->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4615, x_4613, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5873(x_4607);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4348(const auto &x_4617) {
  if (!x_4617->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_4617->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_4617->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_4617->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_4346(const auto &x_4628) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4629) {
    ListIter(x_4628->children, [&](const auto &x_4630) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4631) {
        if (IsSome(x_4630->meta->bb_0_bb_time_table)) {
          auto x_4632 = UnSome(x_4630->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4632, x_4630, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    });
    ListIter(x_4628->children, [&](const auto &x_4634) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4635) {
        if (IsSome(x_4634->meta->bb_2_bb_time_table)) {
          auto x_4636 = UnSome(x_4634->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4636, x_4634, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4343(const auto &x_4638) {
  if ((x_4638->parent != nullptr) &&
      (eq((x_4638->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4638->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4638->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_4638->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4341(const auto &x_4663) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4664) {
    ListIter(x_4663->children, [&](const auto &x_4665) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4666) {
        if (IsSome(x_4665->meta->bb_0_bb_time_table)) {
          auto x_4667 = UnSome(x_4665->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4667, x_4665, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5874 = [&](const auto &x_4669) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4670) {
        if (IsSome(x_4669->meta->bb_2_bb_time_table)) {
          auto x_4671 = UnSome(x_4669->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4671, x_4669, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5874(x_4663);
    MakeUnit();
    ListIter(x_4663->children, [&](const auto &x_4673) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4674) {
        if (IsSome(x_4673->meta->bb_2_bb_time_table)) {
          auto x_4675 = UnSome(x_4673->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4675, x_4673, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4338(const auto &x_4677) {
  if ((x_4677->parent != nullptr) &&
      (eq((x_4677->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_4677->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_4677->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4336(const auto &x_4702) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4703) {
    ListIter(x_4702->children, [&](const auto &x_4704) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4705) {
        if (IsSome(x_4704->meta->bb_1_bb_time_table)) {
          auto x_4706 = UnSome(x_4704->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4706, x_4704, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4333(const auto &x_4708) {
  if (x_4708->has_prop_flex_direction) {
    return x_4708->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_4331(const auto &x_4711) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4712) {
    auto x_5875 = [&](const auto &x_4715) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4716) {
        if (IsSome(x_4715->meta->bb_1_bb_time_table)) {
          auto x_4717 = UnSome(x_4715->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4717, x_4715, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4711->next, [&](const auto &x_4714) { return MakeUnit(); },
        [&](const auto &x_4713) {
          auto x_5877 = x_5875;
          x_5877(x_4713);
          return MakeUnit();
        });
    auto x_5876 = [&](const auto &x_4719) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4720) {
        if (IsSome(x_4719->meta->bb_2_bb_time_table)) {
          auto x_4721 = UnSome(x_4719->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4721, x_4719, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5876(x_4711);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4328(const auto &x_4723) {
  return plus((x_4723->prev != nullptr) ? ((x_4723->prev)->var_flex_shrink_sum) : (0.), x_4723->var_flex_shrink);
}
Unit var_modified_x_4326(const auto &x_4732) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4733) {
    auto x_5878 = [&](const auto &x_4736) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4737) {
        if (IsSome(x_4736->meta->bb_1_bb_time_table)) {
          auto x_4738 = UnSome(x_4736->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4738, x_4736, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4732->next, [&](const auto &x_4735) { return MakeUnit(); },
        [&](const auto &x_4734) {
          auto x_5880 = x_5878;
          x_5880(x_4734);
          return MakeUnit();
        });
    auto x_5879 = [&](const auto &x_4740) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4741) {
        if (IsSome(x_4740->meta->bb_2_bb_time_table)) {
          auto x_4742 = UnSome(x_4740->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4742, x_4740, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5879(x_4732);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4323(const auto &x_4744) {
  return plus((x_4744->prev != nullptr) ? ((x_4744->prev)->var_flex_grow_sum) : (0.), x_4744->var_flex_grow);
}
Unit var_modified_x_4321(const auto &x_4753) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4754) {
    auto x_5881 = [&](const auto &x_4755) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4756) {
        if (IsSome(x_4755->meta->bb_1_bb_time_table)) {
          auto x_4757 = UnSome(x_4755->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4757, x_4755, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5881(x_4753);
    MakeUnit();
    auto x_5882 = [&](const auto &x_4759) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4760) {
        if (IsSome(x_4759->meta->bb_2_bb_time_table)) {
          auto x_4761 = UnSome(x_4759->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4761, x_4759, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5882(x_4753);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4318(const auto &x_4763) {
  if (x_4763->has_prop_flex_shrink) {
    return (x_4763->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4316(const auto &x_4766) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4767) {
    auto x_5883 = [&](const auto &x_4768) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4769) {
        if (IsSome(x_4768->meta->bb_1_bb_time_table)) {
          auto x_4770 = UnSome(x_4768->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4770, x_4768, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5883(x_4766);
    MakeUnit();
    auto x_5884 = [&](const auto &x_4772) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4773) {
        if (IsSome(x_4772->meta->bb_2_bb_time_table)) {
          auto x_4774 = UnSome(x_4772->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4774, x_4772, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5884(x_4766);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4313(const auto &x_4776) {
  if (x_4776->has_prop_flex_grow) {
    return (x_4776->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4311(const auto &x_4779) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4780) {
    auto x_5885 = [&](const auto &x_4781) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4782) {
        if (IsSome(x_4781->meta->bb_1_bb_time_table)) {
          auto x_4783 = UnSome(x_4781->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4783, x_4781, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5885(x_4779);
    MakeUnit();
    auto x_5886 = [&](const auto &x_4785) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4786) {
        if (IsSome(x_4785->meta->bb_0_bb_time_table)) {
          auto x_4787 = UnSome(x_4785->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4787, x_4785, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5886(x_4779);
    MakeUnit();
    auto x_5887 = [&](const auto &x_4789) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4790) {
        if (IsSome(x_4789->meta->bb_2_bb_time_table)) {
          auto x_4791 = UnSome(x_4789->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4791, x_4789, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5887(x_4779);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4308(const auto &x_4793) {
  if (x_4793->has_prop_position) {
    return x_4793->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_4306(const auto &x_4796) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4797) {
    auto x_5888 = [&](const auto &x_4798) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4799) {
        if (IsSome(x_4798->meta->bb_1_bb_time_table)) {
          auto x_4800 = UnSome(x_4798->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4800, x_4798, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5888(x_4796);
    MakeUnit();
    ListIter(x_4796->children, [&](const auto &x_4802) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4803) {
        if (IsSome(x_4802->meta->bb_1_bb_time_table)) {
          auto x_4804 = UnSome(x_4802->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4804, x_4802, MakeRecomputeBB(static_cast<int64_t>(0)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5889 = [&](const auto &x_4806) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4807) {
        if (IsSome(x_4806->meta->bb_0_bb_time_table)) {
          auto x_4808 = UnSome(x_4806->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4808, x_4806, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5889(x_4796);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4303(const auto &x_4810) {
  if (x_4810->has_prop_display) {
    return x_4810->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_4299(const auto &x_4813) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4814) {
    auto x_5890 = [&](const auto &x_4817) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4818) {
        if (IsSome(x_4817->meta->bb_0_bb_time_table)) {
          auto x_4819 = UnSome(x_4817->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4819, x_4817, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4813->next == nullptr) {
      auto x_5892 = x_5890;
      OptionMatch(
          x_4813->parent, [&](const auto &x_4816) { return MakeUnit(); },
          [&](const auto &x_4815) {
            auto x_5894 = x_5892;
            x_5894(x_4815);
            return MakeUnit();
          });
    }
    auto x_5891 = [&](const auto &x_4823) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4824) {
        if (IsSome(x_4823->meta->bb_0_bb_time_table)) {
          auto x_4825 = UnSome(x_4823->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4825, x_4823, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4813->next, [&](const auto &x_4822) { return MakeUnit(); },
        [&](const auto &x_4821) {
          auto x_5893 = x_5891;
          x_5893(x_4821);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4296(const auto &x_4827) {
  if (x_4827->prev != nullptr) {
    if (x_4827->var_line_break) {
      return plus((x_4827->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4827->prev)->var_intrinsic_current_line_height, x_4827->var_intrinsic_height_external));
    } else {
      return (x_4827->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4827->var_line_break) {
      return x_4827->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4294(const auto &x_4856) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4857) {
    auto x_5895 = [&](const auto &x_4860) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4861) {
        if (IsSome(x_4860->meta->bb_0_bb_time_table)) {
          auto x_4862 = UnSome(x_4860->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4862, x_4860, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4856->next == nullptr) {
      auto x_5897 = x_5895;
      OptionMatch(
          x_4856->parent, [&](const auto &x_4859) { return MakeUnit(); },
          [&](const auto &x_4858) {
            auto x_5899 = x_5897;
            x_5899(x_4858);
            return MakeUnit();
          });
    }
    auto x_5896 = [&](const auto &x_4866) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4867) {
        if (IsSome(x_4866->meta->bb_0_bb_time_table)) {
          auto x_4868 = UnSome(x_4866->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4868, x_4866, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4856->next, [&](const auto &x_4865) { return MakeUnit(); },
        [&](const auto &x_4864) {
          auto x_5898 = x_5896;
          x_5898(x_4864);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4291(const auto &x_4870) {
  if (x_4870->var_line_break) {
    return 0.;
  } else {
    return max(x_4870->var_intrinsic_height_external,
               (x_4870->prev != nullptr) ? ((x_4870->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4289(const auto &x_4883) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4884) {
    auto x_5900 = [&](const auto &x_4887) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4888) {
        if (IsSome(x_4887->meta->bb_0_bb_time_table)) {
          auto x_4889 = UnSome(x_4887->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4889, x_4887, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_4883->next, [&](const auto &x_4886) { return MakeUnit(); },
        [&](const auto &x_4885) {
          auto x_5902 = x_5900;
          x_5902(x_4885);
          return MakeUnit();
        });
    auto x_5901 = [&](const auto &x_4893) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4894) {
        if (IsSome(x_4893->meta->bb_2_bb_time_table)) {
          auto x_4895 = UnSome(x_4893->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4895, x_4893, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_4883->next == nullptr) {
      auto x_5903 = x_5901;
      OptionMatch(
          x_4883->parent, [&](const auto &x_4892) { return MakeUnit(); },
          [&](const auto &x_4891) {
            auto x_5904 = x_5903;
            x_5904(x_4891);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4286(const auto &x_4897) {
  return plus((x_4897->prev != nullptr) ? ((x_4897->prev)->var_intrinsic_height_sum) : (0.),
              x_4897->var_intrinsic_height_external);
}
Unit var_modified_x_4284(const auto &x_4906) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4907) {
    auto x_5905 = [&](const auto &x_4908) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4909) {
        if (IsSome(x_4908->meta->bb_0_bb_time_table)) {
          auto x_4910 = UnSome(x_4908->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4910, x_4908, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5905(x_4906);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4281(const auto &x_4912) {
  if (eq(x_4912->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_4912->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4279(const auto &x_4921) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4922) {
    auto x_5906 = [&](const auto &x_4923) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4924) {
        if (IsSome(x_4923->meta->bb_0_bb_time_table)) {
          auto x_4925 = UnSome(x_4923->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4925, x_4923, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5906(x_4921);
    MakeUnit();
    auto x_5907 = [&](const auto &x_4927) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4928) {
        if (IsSome(x_4927->meta->bb_2_bb_time_table)) {
          auto x_4929 = UnSome(x_4927->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4929, x_4927, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5907(x_4921);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4276(const auto &x_4931) {
  if (eq(x_4931->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_4931->var_inside_svg) {
      return 0.;
    } else {
      if (x_4931->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4931->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_4931->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_4931->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_4931->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_4931->var_height_expr.r.a0;
          } else {
            if (x_4931->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_4931->var_height_expr.r.a0;
            } else {
              return x_4931->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_4931->var_children_intrinsic_height,
              (eq(x_4931->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_4931->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4931->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_4931->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_4931->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_4931->var_has_height_attr &&
                                                  (x_4931->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_4931->var_height_attr_expr.r.a0)
                                                     : ((x_4931->has_attr_viewBox)
                                                            ? (x_4931->attr_viewBox.r.a3)
                                                            : (mult((x_4931->attr_viewBox.r.a3),
                                                                    divide(x_4931->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_4931->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_4931->var_has_height_attr)
                                                            ? (x_4931->var_height_attr_expr.r.a0)
                                                            : ((x_4931->has_attr_image_height &&
                                                                (!x_4931->var_has_width_attr))
                                                                   ? (int_to_float(x_4931->attr_image_height))
                                                                   : ((neq(x_4931->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_4931->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_4931->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_4931->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_4931->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_4931->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4274(const auto &x_5076) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5077) {
    auto x_5908 = [&](const auto &x_5078) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5079) {
        if (IsSome(x_5078->meta->bb_2_bb_time_table)) {
          auto x_5080 = UnSome(x_5078->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5080, x_5078, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5908(x_5076);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4271(const auto &x_5082) {
  if (eq(x_5082->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5082->var_inside_svg || x_5082->var_disabled)) {
    return true;
  } else {
    if ((x_5082->parent != nullptr) && (x_5082->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_5082->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5082->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5082->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5082->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_5082->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4269(const auto &x_5131) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5132) {
    auto x_5909 = [&](const auto &x_5133) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5134) {
        if (IsSome(x_5133->meta->bb_0_bb_time_table)) {
          auto x_5135 = UnSome(x_5133->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5135, x_5133, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5909(x_5131);
    MakeUnit();
    auto x_5910 = [&](const auto &x_5137) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5138) {
        if (IsSome(x_5137->meta->bb_2_bb_time_table)) {
          auto x_5139 = UnSome(x_5137->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5139, x_5137, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5910(x_5131);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4266(const auto &x_5141) {
  if (x_5141->has_prop_height) {
    return x_5141->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4264(const auto &x_5144) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5145) {
    auto x_5911 = [&](const auto &x_5146) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5147) {
        if (IsSome(x_5146->meta->bb_0_bb_time_table)) {
          auto x_5148 = UnSome(x_5146->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5148, x_5146, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5911(x_5144);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4261(const auto &x_5150) {
  if (x_5150->last != nullptr) {
    return plus((x_5150->last)->var_finished_intrinsic_height_sum, (x_5150->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4259(const auto &x_5159) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5160) {
    auto x_5912 = [&](const auto &x_5163) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5164) {
        if (IsSome(x_5163->meta->bb_0_bb_time_table)) {
          auto x_5165 = UnSome(x_5163->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5165, x_5163, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5159->next, [&](const auto &x_5162) { return MakeUnit(); },
        [&](const auto &x_5161) {
          auto x_5914 = x_5912;
          x_5914(x_5161);
          return MakeUnit();
        });
    auto x_5913 = [&](const auto &x_5169) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5170) {
        if (IsSome(x_5169->meta->bb_2_bb_time_table)) {
          auto x_5171 = UnSome(x_5169->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5171, x_5169, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_5159->next == nullptr) {
      auto x_5915 = x_5913;
      OptionMatch(
          x_5159->parent, [&](const auto &x_5168) { return MakeUnit(); },
          [&](const auto &x_5167) {
            auto x_5916 = x_5915;
            x_5916(x_5167);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4256(const auto &x_5173) {
  return plus((x_5173->prev != nullptr) ? ((x_5173->prev)->var_intrinsic_width_sum) : (0.),
              x_5173->var_intrinsic_width_external);
}
Unit var_modified_x_4254(const auto &x_5182) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5183) {
    auto x_5917 = [&](const auto &x_5186) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5187) {
        if (IsSome(x_5186->meta->bb_0_bb_time_table)) {
          auto x_5188 = UnSome(x_5186->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5188, x_5186, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_5182->next == nullptr) {
      auto x_5919 = x_5917;
      OptionMatch(
          x_5182->parent, [&](const auto &x_5185) { return MakeUnit(); },
          [&](const auto &x_5184) {
            auto x_5921 = x_5919;
            x_5921(x_5184);
            return MakeUnit();
          });
    }
    auto x_5918 = [&](const auto &x_5192) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5193) {
        if (IsSome(x_5192->meta->bb_0_bb_time_table)) {
          auto x_5194 = UnSome(x_5192->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5194, x_5192, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5182->next, [&](const auto &x_5191) { return MakeUnit(); },
        [&](const auto &x_5190) {
          auto x_5920 = x_5918;
          x_5920(x_5190);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4251(const auto &x_5196) {
  return max(x_5196->var_intrinsic_current_line_width,
             (x_5196->prev != nullptr) ? ((x_5196->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4249(const auto &x_5205) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5206) {
    auto x_5922 = [&](const auto &x_5207) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5208) {
        if (IsSome(x_5207->meta->bb_0_bb_time_table)) {
          auto x_5209 = UnSome(x_5207->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5209, x_5207, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5922(x_5205);
    MakeUnit();
    auto x_5923 = [&](const auto &x_5213) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5214) {
        if (IsSome(x_5213->meta->bb_0_bb_time_table)) {
          auto x_5215 = UnSome(x_5213->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5215, x_5213, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5205->next, [&](const auto &x_5212) { return MakeUnit(); },
        [&](const auto &x_5211) {
          auto x_5924 = x_5923;
          x_5924(x_5211);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4246(const auto &x_5217) {
  return plus(x_5217->var_intrinsic_width_external,
              ((x_5217->prev != nullptr) && (!(x_5217->prev)->var_line_break))
                  ? ((x_5217->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_4244(const auto &x_5230) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5231) {
    auto x_5925 = [&](const auto &x_5232) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5233) {
        if (IsSome(x_5232->meta->bb_0_bb_time_table)) {
          auto x_5234 = UnSome(x_5232->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5234, x_5232, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5925(x_5230);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4241(const auto &x_5236) {
  if (eq(x_5236->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5236->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_4239(const auto &x_5245) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5246) {
    auto x_5926 = [&](const auto &x_5247) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5248) {
        if (IsSome(x_5247->meta->bb_0_bb_time_table)) {
          auto x_5249 = UnSome(x_5247->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5249, x_5247, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5926(x_5245);
    MakeUnit();
    auto x_5927 = [&](const auto &x_5251) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5252) {
        if (IsSome(x_5251->meta->bb_2_bb_time_table)) {
          auto x_5253 = UnSome(x_5251->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5253, x_5251, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5927(x_5245);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4236(const auto &x_5255) {
  if (eq(x_5255->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_5255->var_inside_svg) {
      return 0.;
    } else {
      if (x_5255->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5255->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_5255->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_5255->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_5255->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_5255->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_5255->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_5255->var_width_expr.r.a0;
          } else {
            return x_5255->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_5255->var_children_intrinsic_width,
              (eq(x_5255->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_5255->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5255->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_5255->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_5255->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_5255->var_has_width_attr &&
                                                  (x_5255->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_5255->var_width_attr_expr.r.a0)
                                                     : (((!x_5255->var_has_width_attr) && x_5255->has_attr_viewBox)
                                                            ? (x_5255->attr_viewBox.r.a2)
                                                            : (mult((x_5255->attr_viewBox.r.a2),
                                                                    divide(x_5255->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_5255->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_5255->var_has_width_attr)
                                                            ? (x_5255->var_width_attr_expr.r.a0)
                                                            : ((x_5255->has_attr_image_width &&
                                                                (!x_5255->var_has_height_attr))
                                                                   ? (int_to_float(x_5255->attr_image_width))
                                                                   : ((neq(x_5255->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_5255->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_5255->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_5255->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_5255->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_5255->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4234(const auto &x_5408) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5409) {
    auto x_5928 = [&](const auto &x_5410) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5411) {
        if (IsSome(x_5410->meta->bb_0_bb_time_table)) {
          auto x_5412 = UnSome(x_5410->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5412, x_5410, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5928(x_5408);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4231(const auto &x_5414) {
  if (x_5414->last != nullptr) {
    return (x_5414->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_4229(const auto &x_5419) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5420) {
    auto x_5929 = [&](const auto &x_5421) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5422) {
        if (IsSome(x_5421->meta->bb_2_bb_time_table)) {
          auto x_5423 = UnSome(x_5421->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5423, x_5421, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5929(x_5419);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4226(const auto &x_5425) {
  if (eq(x_5425->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_5425->var_inside_svg || x_5425->var_disabled)) {
    return true;
  } else {
    if ((x_5425->parent != nullptr) && (x_5425->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5425->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_5425->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_5425->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_5425->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_5425->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4224(const auto &x_5474) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5475) {
    auto x_5930 = [&](const auto &x_5476) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5477) {
        if (IsSome(x_5476->meta->bb_0_bb_time_table)) {
          auto x_5478 = UnSome(x_5476->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5478, x_5476, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5930(x_5474);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4221(const auto &x_5480) {
  if (eq(x_5480->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_5480->var_inside_svg) {
      return true;
    } else {
      if (x_5480->var_disabled) {
        return true;
      } else {if ( eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_5480->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_4219(const auto &x_5493) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5494) {
    auto x_5931 = [&](const auto &x_5495) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5496) {
        if (IsSome(x_5495->meta->bb_0_bb_time_table)) {
          auto x_5497 = UnSome(x_5495->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5497, x_5495, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5931(x_5493);
    MakeUnit();
    auto x_5932 = [&](const auto &x_5499) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5500) {
        if (IsSome(x_5499->meta->bb_2_bb_time_table)) {
          auto x_5501 = UnSome(x_5499->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5501, x_5499, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5932(x_5493);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4216(const auto &x_5503) {
  if (x_5503->has_prop_width) {
    return x_5503->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_4212(const auto &x_5506) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5507) {
    auto x_5933 = [&](const auto &x_5510) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5511) {
        if (IsSome(x_5510->meta->bb_2_bb_time_table)) {
          auto x_5512 = UnSome(x_5510->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5512, x_5510, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5506->next, [&](const auto &x_5509) { return MakeUnit(); },
        [&](const auto &x_5508) {
          auto x_5934 = x_5933;
          x_5934(x_5508);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4209(const auto &x_5514) {
  if ((x_5514->prev != nullptr) && (!(x_5514->prev)->var_line_break)) {
    return max(x_5514->var_height_external, (x_5514->prev)->var_line_height);
  } else {
    return x_5514->var_height_external;
  }
}
Unit var_modified_x_4207(const auto &x_5531) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5532) {
    auto x_5935 = [&](const auto &x_5533) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5534) {
        if (IsSome(x_5533->meta->bb_2_bb_time_table)) {
          auto x_5535 = UnSome(x_5533->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5535, x_5533, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5935(x_5531);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4204(const auto &x_5537) {
  if (eq(x_5537->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5537->var_height_internal;
  }
}
Unit var_modified_x_4202(const auto &x_5546) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5547) {
    auto x_5936 = [&](const auto &x_5548) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5549) {
        if (IsSome(x_5548->meta->bb_2_bb_time_table)) {
          auto x_5550 = UnSome(x_5548->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5550, x_5548, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5936(x_5546);
    MakeUnit();
    ListIter(x_5546->children, [&](const auto &x_5552) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5553) {
        if (IsSome(x_5552->meta->bb_2_bb_time_table)) {
          auto x_5554 = UnSome(x_5552->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5554, x_5552, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4199(const auto &x_5556) {
  if (x_5556->var_intrinsic_height_is_height) {
    return x_5556->var_intrinsic_height_internal;
  } else {
    if ((x_5556->parent != nullptr) && (x_5556->parent)->var_is_flex_column) {
      return plus(x_5556->var_intrinsic_height_internal,
                  mult(x_5556->var_flex_amount, (x_5556->parent)->var_flex_unit));
    } else {
      if (x_5556->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5556->var_box_height, divide(x_5556->var_height_expr.r.a0, 100.));
      } else {
        return max(x_5556->var_box_height, x_5556->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_4197(const auto &x_5609) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5610) {
    ListIter(x_5609->children, [&](const auto &x_5611) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5612) {
        if (IsSome(x_5611->meta->bb_2_bb_time_table)) {
          auto x_5613 = UnSome(x_5611->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5613, x_5611, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5937 = [&](const auto &x_5617) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5618) {
        if (IsSome(x_5617->meta->bb_2_bb_time_table)) {
          auto x_5619 = UnSome(x_5617->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5619, x_5617, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5609->next, [&](const auto &x_5616) { return MakeUnit(); },
        [&](const auto &x_5615) {
          auto x_5938 = x_5937;
          x_5938(x_5615);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4194(const auto &x_5621) {
  if (x_5621->prev != nullptr) {
    if (x_5621->var_line_break || (x_5621->prev)->var_line_break) {
      return plus((x_5621->prev)->var_y, (x_5621->prev)->var_line_height);
    } else {
      return (x_5621->prev)->var_y;
    }
  } else {
    if (x_5621->parent != nullptr) {
      return (x_5621->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4192(const auto &x_5646) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5647) {
    auto x_5939 = [&](const auto &x_5650) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5651) {
        if (IsSome(x_5650->meta->bb_2_bb_time_table)) {
          auto x_5652 = UnSome(x_5650->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5652, x_5650, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5646->next, [&](const auto &x_5649) { return MakeUnit(); },
        [&](const auto &x_5648) {
          auto x_5940 = x_5939;
          x_5940(x_5648);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4189(const auto &x_5654) {
  if (eq(x_5654->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_5654->var_width_internal;
  }
}
Unit var_modified_x_4187(const auto &x_5663) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5664) {
    auto x_5941 = [&](const auto &x_5665) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5666) {
        if (IsSome(x_5665->meta->bb_2_bb_time_table)) {
          auto x_5667 = UnSome(x_5665->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5667, x_5665, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5941(x_5663);
    MakeUnit();
    ListIter(x_5663->children, [&](const auto &x_5669) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5670) {
        if (IsSome(x_5669->meta->bb_2_bb_time_table)) {
          auto x_5671 = UnSome(x_5669->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5671, x_5669, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4184(const auto &x_5673) {
  if (x_5673->var_intrinsic_width_is_width) {
    return x_5673->var_intrinsic_width_internal;
  } else {
    if ((x_5673->parent != nullptr) && (x_5673->parent)->var_is_flex_row) {
      return plus(x_5673->var_intrinsic_width_internal, mult(x_5673->var_flex_amount, (x_5673->parent)->var_flex_unit));
    } else {
      if (x_5673->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_5673->var_box_width, divide(x_5673->var_width_expr.r.a0, 100.));
      } else {
        return max(x_5673->var_box_width, x_5673->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_4182(const auto &x_5726) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5727) {
    ListIter(x_5726->children, [&](const auto &x_5728) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5729) {
        if (IsSome(x_5728->meta->bb_2_bb_time_table)) {
          auto x_5730 = UnSome(x_5728->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5730, x_5728, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_5942 = [&](const auto &x_5734) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5735) {
        if (IsSome(x_5734->meta->bb_2_bb_time_table)) {
          auto x_5736 = UnSome(x_5734->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5736, x_5734, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_5726->next, [&](const auto &x_5733) { return MakeUnit(); },
        [&](const auto &x_5732) {
          auto x_5943 = x_5942;
          x_5943(x_5732);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4179(const auto &x_5738) {
  if (x_5738->prev != nullptr) {
    if (x_5738->var_line_break || (x_5738->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_5738->prev)->var_x, (x_5738->prev)->var_width_external);
    }
  } else {
    if (x_5738->parent != nullptr) {
      return (x_5738->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4177(const auto &x_5759) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5760) {
    ListIter(x_5759->children, [&](const auto &x_5761) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5762) {
        if (IsSome(x_5761->meta->bb_2_bb_time_table)) {
          auto x_5763 = UnSome(x_5761->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5763, x_5761, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4174(const auto &x_5765) {
  if (gt(x_5765->var_left_over, 0.)) {
    return divide(x_5765->var_left_over, x_5765->var_flex_grow_sum);
  } else {
    return divide(x_5765->var_left_over, x_5765->var_flex_shrink_sum);
  }
}
Unit var_modified_x_4172(const auto &x_5786) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5787) {
    auto x_5944 = [&](const auto &x_5788) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5789) {
        if (IsSome(x_5788->meta->bb_2_bb_time_table)) {
          auto x_5790 = UnSome(x_5788->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5790, x_5788, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5944(x_5786);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4169(const auto &x_5792) {
  if ((x_5792->parent != nullptr) && gt((x_5792->parent)->var_left_over, 0.)) {
    return x_5792->var_flex_grow;
  } else {
    return x_5792->var_flex_shrink;
  }
}
Unit var_modified_x_4167(const auto &x_5805) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5806) {
    auto x_5945 = [&](const auto &x_5807) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5808) {
        if (IsSome(x_5807->meta->bb_2_bb_time_table)) {
          auto x_5809 = UnSome(x_5807->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5809, x_5807, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5945(x_5805);
    MakeUnit();
    ListIter(x_5805->children, [&](const auto &x_5811) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5812) {
        if (IsSome(x_5811->meta->bb_2_bb_time_table)) {
          auto x_5813 = UnSome(x_5811->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5813, x_5811, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4164(const auto &x_5815) {
  if (x_5815->var_is_flex_row) {
    return minus(x_5815->var_box_width, (x_5815->last != nullptr) ? ((x_5815->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_5815->var_box_height, (x_5815->last != nullptr) ? ((x_5815->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_4162(const auto &x_5836) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5837) {
    auto x_5946 = [&](const auto &x_5838) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5839) {
        if (IsSome(x_5838->meta->bb_2_bb_time_table)) {
          auto x_5840 = UnSome(x_5838->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5840, x_5838, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5946(x_5836);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4159(const auto &x_5842) {
  if (x_5842->parent != nullptr) {
    return (x_5842->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_4157(const auto &x_5847) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5848) {
    auto x_5947 = [&](const auto &x_5849) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_5850) {
        if (IsSome(x_5849->meta->bb_2_bb_time_table)) {
          auto x_5851 = UnSome(x_5849->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_5851, x_5849, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_5947(x_5847);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4154(const auto &x_5853) {
  if (x_5853->parent != nullptr) {
    return (x_5853->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_4056(const auto &x_4152) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4153) {
    WriteMetric();
    auto x_4155 = eval_expr_x_4154(x_4152);
    if (x_4152->has_var_box_width) {
      auto x_4156 = x_4152->var_box_width;
      if (!EqualValue(x_4156, x_4155)) {
        var_modified_x_4157(x_4152);
      }
    }
    x_4152->has_var_box_width = true;
    x_4152->var_box_width = Asdouble(x_4155);
    WriteMetric();
    auto x_4160 = eval_expr_x_4159(x_4152);
    if (x_4152->has_var_box_height) {
      auto x_4161 = x_4152->var_box_height;
      if (!EqualValue(x_4161, x_4160)) {
        var_modified_x_4162(x_4152);
      }
    }
    x_4152->has_var_box_height = true;
    x_4152->var_box_height = Asdouble(x_4160);
    WriteMetric();
    auto x_4165 = eval_expr_x_4164(x_4152);
    if (x_4152->has_var_left_over) {
      auto x_4166 = x_4152->var_left_over;
      if (!EqualValue(x_4166, x_4165)) {
        var_modified_x_4167(x_4152);
      }
    }
    x_4152->has_var_left_over = true;
    x_4152->var_left_over = Asdouble(x_4165);
    WriteMetric();
    auto x_4170 = eval_expr_x_4169(x_4152);
    if (x_4152->has_var_flex_amount) {
      auto x_4171 = x_4152->var_flex_amount;
      if (!EqualValue(x_4171, x_4170)) {
        var_modified_x_4172(x_4152);
      }
    }
    x_4152->has_var_flex_amount = true;
    x_4152->var_flex_amount = Asdouble(x_4170);
    WriteMetric();
    auto x_4175 = eval_expr_x_4174(x_4152);
    if (x_4152->has_var_flex_unit) {
      auto x_4176 = x_4152->var_flex_unit;
      if (!EqualValue(x_4176, x_4175)) {
        var_modified_x_4177(x_4152);
      }
    }
    x_4152->has_var_flex_unit = true;
    x_4152->var_flex_unit = Asdouble(x_4175);
    WriteMetric();
    auto x_4180 = eval_expr_x_4179(x_4152);
    if (x_4152->has_var_x) {
      auto x_4181 = x_4152->var_x;
      if (!EqualValue(x_4181, x_4180)) {
        var_modified_x_4182(x_4152);
      }
    }
    x_4152->has_var_x = true;
    x_4152->var_x = Asdouble(x_4180);
    WriteMetric();
    auto x_4185 = eval_expr_x_4184(x_4152);
    if (x_4152->has_var_width_internal) {
      auto x_4186 = x_4152->var_width_internal;
      if (!EqualValue(x_4186, x_4185)) {
        var_modified_x_4187(x_4152);
      }
    }
    x_4152->has_var_width_internal = true;
    x_4152->var_width_internal = Asdouble(x_4185);
    WriteMetric();
    auto x_4190 = eval_expr_x_4189(x_4152);
    if (x_4152->has_var_width_external) {
      auto x_4191 = x_4152->var_width_external;
      if (!EqualValue(x_4191, x_4190)) {
        var_modified_x_4192(x_4152);
      }
    }
    x_4152->has_var_width_external = true;
    x_4152->var_width_external = Asdouble(x_4190);
    WriteMetric();
    auto x_4195 = eval_expr_x_4194(x_4152);
    if (x_4152->has_var_y) {
      auto x_4196 = x_4152->var_y;
      if (!EqualValue(x_4196, x_4195)) {
        var_modified_x_4197(x_4152);
      }
    }
    x_4152->has_var_y = true;
    x_4152->var_y = Asdouble(x_4195);
    WriteMetric();
    auto x_4200 = eval_expr_x_4199(x_4152);
    if (x_4152->has_var_height_internal) {
      auto x_4201 = x_4152->var_height_internal;
      if (!EqualValue(x_4201, x_4200)) {
        var_modified_x_4202(x_4152);
      }
    }
    x_4152->has_var_height_internal = true;
    x_4152->var_height_internal = Asdouble(x_4200);
    WriteMetric();
    auto x_4205 = eval_expr_x_4204(x_4152);
    if (x_4152->has_var_height_external) {
      auto x_4206 = x_4152->var_height_external;
      if (!EqualValue(x_4206, x_4205)) {
        var_modified_x_4207(x_4152);
      }
    }
    x_4152->has_var_height_external = true;
    x_4152->var_height_external = Asdouble(x_4205);
    WriteMetric();
    auto x_4210 = eval_expr_x_4209(x_4152);
    if (x_4152->has_var_line_height) {
      auto x_4211 = x_4152->var_line_height;
      if (!EqualValue(x_4211, x_4210)) {
        var_modified_x_4212(x_4152);
      }
    }
    x_4152->has_var_line_height = true;
    x_4152->var_line_height = Asdouble(x_4210);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4055(const auto &x_4214) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4215) {
    WriteMetric();
    auto x_4217 = eval_expr_x_4216(x_4214);
    if (x_4214->has_var_width_expr) {
      auto x_4218 = x_4214->var_width_expr;
      if (!EqualValue(x_4218, x_4217)) {
        var_modified_x_4219(x_4214);
      }
    }
    x_4214->has_var_width_expr = true;
    x_4214->var_width_expr = AsDEString(x_4217);
    WriteMetric();
    auto x_4222 = eval_expr_x_4221(x_4214);
    if (x_4214->has_var_is_default_case) {
      auto x_4223 = x_4214->var_is_default_case;
      if (!EqualValue(x_4223, x_4222)) {
        var_modified_x_4224(x_4214);
      }
    }
    x_4214->has_var_is_default_case = true;
    x_4214->var_is_default_case = Asbool(x_4222);
    WriteMetric();
    auto x_4227 = eval_expr_x_4226(x_4214);
    if (x_4214->has_var_intrinsic_width_is_width) {
      auto x_4228 = x_4214->var_intrinsic_width_is_width;
      if (!EqualValue(x_4228, x_4227)) {
        var_modified_x_4229(x_4214);
      }
    }
    x_4214->has_var_intrinsic_width_is_width = true;
    x_4214->var_intrinsic_width_is_width = Asbool(x_4227);
    WriteMetric();
    auto x_4232 = eval_expr_x_4231(x_4214);
    if (x_4214->has_var_children_intrinsic_width) {
      auto x_4233 = x_4214->var_children_intrinsic_width;
      if (!EqualValue(x_4233, x_4232)) {
        var_modified_x_4234(x_4214);
      }
    }
    x_4214->has_var_children_intrinsic_width = true;
    x_4214->var_children_intrinsic_width = Asdouble(x_4232);
    WriteMetric();
    auto x_4237 = eval_expr_x_4236(x_4214);
    if (x_4214->has_var_intrinsic_width_internal) {
      auto x_4238 = x_4214->var_intrinsic_width_internal;
      if (!EqualValue(x_4238, x_4237)) {
        var_modified_x_4239(x_4214);
      }
    }
    x_4214->has_var_intrinsic_width_internal = true;
    x_4214->var_intrinsic_width_internal = Asdouble(x_4237);
    WriteMetric();
    auto x_4242 = eval_expr_x_4241(x_4214);
    if (x_4214->has_var_intrinsic_width_external) {
      auto x_4243 = x_4214->var_intrinsic_width_external;
      if (!EqualValue(x_4243, x_4242)) {
        var_modified_x_4244(x_4214);
      }
    }
    x_4214->has_var_intrinsic_width_external = true;
    x_4214->var_intrinsic_width_external = Asdouble(x_4242);
    WriteMetric();
    auto x_4247 = eval_expr_x_4246(x_4214);
    if (x_4214->has_var_intrinsic_current_line_width) {
      auto x_4248 = x_4214->var_intrinsic_current_line_width;
      if (!EqualValue(x_4248, x_4247)) {
        var_modified_x_4249(x_4214);
      }
    }
    x_4214->has_var_intrinsic_current_line_width = true;
    x_4214->var_intrinsic_current_line_width = Asdouble(x_4247);
    WriteMetric();
    auto x_4252 = eval_expr_x_4251(x_4214);
    if (x_4214->has_var_intrinsic_width_max) {
      auto x_4253 = x_4214->var_intrinsic_width_max;
      if (!EqualValue(x_4253, x_4252)) {
        var_modified_x_4254(x_4214);
      }
    }
    x_4214->has_var_intrinsic_width_max = true;
    x_4214->var_intrinsic_width_max = Asdouble(x_4252);
    WriteMetric();
    auto x_4257 = eval_expr_x_4256(x_4214);
    if (x_4214->has_var_intrinsic_width_sum) {
      auto x_4258 = x_4214->var_intrinsic_width_sum;
      if (!EqualValue(x_4258, x_4257)) {
        var_modified_x_4259(x_4214);
      }
    }
    x_4214->has_var_intrinsic_width_sum = true;
    x_4214->var_intrinsic_width_sum = Asdouble(x_4257);
    WriteMetric();
    auto x_4262 = eval_expr_x_4261(x_4214);
    if (x_4214->has_var_children_intrinsic_height) {
      auto x_4263 = x_4214->var_children_intrinsic_height;
      if (!EqualValue(x_4263, x_4262)) {
        var_modified_x_4264(x_4214);
      }
    }
    x_4214->has_var_children_intrinsic_height = true;
    x_4214->var_children_intrinsic_height = Asdouble(x_4262);
    WriteMetric();
    auto x_4267 = eval_expr_x_4266(x_4214);
    if (x_4214->has_var_height_expr) {
      auto x_4268 = x_4214->var_height_expr;
      if (!EqualValue(x_4268, x_4267)) {
        var_modified_x_4269(x_4214);
      }
    }
    x_4214->has_var_height_expr = true;
    x_4214->var_height_expr = AsDEString(x_4267);
    WriteMetric();
    auto x_4272 = eval_expr_x_4271(x_4214);
    if (x_4214->has_var_intrinsic_height_is_height) {
      auto x_4273 = x_4214->var_intrinsic_height_is_height;
      if (!EqualValue(x_4273, x_4272)) {
        var_modified_x_4274(x_4214);
      }
    }
    x_4214->has_var_intrinsic_height_is_height = true;
    x_4214->var_intrinsic_height_is_height = Asbool(x_4272);
    WriteMetric();
    auto x_4277 = eval_expr_x_4276(x_4214);
    if (x_4214->has_var_intrinsic_height_internal) {
      auto x_4278 = x_4214->var_intrinsic_height_internal;
      if (!EqualValue(x_4278, x_4277)) {
        var_modified_x_4279(x_4214);
      }
    }
    x_4214->has_var_intrinsic_height_internal = true;
    x_4214->var_intrinsic_height_internal = Asdouble(x_4277);
    WriteMetric();
    auto x_4282 = eval_expr_x_4281(x_4214);
    if (x_4214->has_var_intrinsic_height_external) {
      auto x_4283 = x_4214->var_intrinsic_height_external;
      if (!EqualValue(x_4283, x_4282)) {
        var_modified_x_4284(x_4214);
      }
    }
    x_4214->has_var_intrinsic_height_external = true;
    x_4214->var_intrinsic_height_external = Asdouble(x_4282);
    WriteMetric();
    auto x_4287 = eval_expr_x_4286(x_4214);
    if (x_4214->has_var_intrinsic_height_sum) {
      auto x_4288 = x_4214->var_intrinsic_height_sum;
      if (!EqualValue(x_4288, x_4287)) {
        var_modified_x_4289(x_4214);
      }
    }
    x_4214->has_var_intrinsic_height_sum = true;
    x_4214->var_intrinsic_height_sum = Asdouble(x_4287);
    WriteMetric();
    auto x_4292 = eval_expr_x_4291(x_4214);
    if (x_4214->has_var_intrinsic_current_line_height) {
      auto x_4293 = x_4214->var_intrinsic_current_line_height;
      if (!EqualValue(x_4293, x_4292)) {
        var_modified_x_4294(x_4214);
      }
    }
    x_4214->has_var_intrinsic_current_line_height = true;
    x_4214->var_intrinsic_current_line_height = Asdouble(x_4292);
    WriteMetric();
    auto x_4297 = eval_expr_x_4296(x_4214);
    if (x_4214->has_var_finished_intrinsic_height_sum) {
      auto x_4298 = x_4214->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_4298, x_4297)) {
        var_modified_x_4299(x_4214);
      }
    }
    x_4214->has_var_finished_intrinsic_height_sum = true;
    x_4214->var_finished_intrinsic_height_sum = Asdouble(x_4297);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_4054(const auto &x_4301) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4302) {
    WriteMetric();
    auto x_4304 = eval_expr_x_4303(x_4301);
    if (x_4301->has_var_display) {
      auto x_4305 = x_4301->var_display;
      if (!EqualValue(x_4305, x_4304)) {
        var_modified_x_4306(x_4301);
      }
    }
    x_4301->has_var_display = true;
    x_4301->var_display = AsDEString(x_4304);
    WriteMetric();
    auto x_4309 = eval_expr_x_4308(x_4301);
    if (x_4301->has_var_position) {
      auto x_4310 = x_4301->var_position;
      if (!EqualValue(x_4310, x_4309)) {
        var_modified_x_4311(x_4301);
      }
    }
    x_4301->has_var_position = true;
    x_4301->var_position = AsDEString(x_4309);
    WriteMetric();
    auto x_4314 = eval_expr_x_4313(x_4301);
    if (x_4301->has_var_flex_grow) {
      auto x_4315 = x_4301->var_flex_grow;
      if (!EqualValue(x_4315, x_4314)) {
        var_modified_x_4316(x_4301);
      }
    }
    x_4301->has_var_flex_grow = true;
    x_4301->var_flex_grow = Asdouble(x_4314);
    WriteMetric();
    auto x_4319 = eval_expr_x_4318(x_4301);
    if (x_4301->has_var_flex_shrink) {
      auto x_4320 = x_4301->var_flex_shrink;
      if (!EqualValue(x_4320, x_4319)) {
        var_modified_x_4321(x_4301);
      }
    }
    x_4301->has_var_flex_shrink = true;
    x_4301->var_flex_shrink = Asdouble(x_4319);
    WriteMetric();
    auto x_4324 = eval_expr_x_4323(x_4301);
    if (x_4301->has_var_flex_grow_sum) {
      auto x_4325 = x_4301->var_flex_grow_sum;
      if (!EqualValue(x_4325, x_4324)) {
        var_modified_x_4326(x_4301);
      }
    }
    x_4301->has_var_flex_grow_sum = true;
    x_4301->var_flex_grow_sum = Asdouble(x_4324);
    WriteMetric();
    auto x_4329 = eval_expr_x_4328(x_4301);
    if (x_4301->has_var_flex_shrink_sum) {
      auto x_4330 = x_4301->var_flex_shrink_sum;
      if (!EqualValue(x_4330, x_4329)) {
        var_modified_x_4331(x_4301);
      }
    }
    x_4301->has_var_flex_shrink_sum = true;
    x_4301->var_flex_shrink_sum = Asdouble(x_4329);
    WriteMetric();
    auto x_4334 = eval_expr_x_4333(x_4301);
    if (x_4301->has_var_flex_direction) {
      auto x_4335 = x_4301->var_flex_direction;
      if (!EqualValue(x_4335, x_4334)) {
        var_modified_x_4336(x_4301);
      }
    }
    x_4301->has_var_flex_direction = true;
    x_4301->var_flex_direction = AsDEString(x_4334);
    WriteMetric();
    auto x_4339 = eval_expr_x_4338(x_4301);
    if (x_4301->has_var_is_flex_row) {
      auto x_4340 = x_4301->var_is_flex_row;
      if (!EqualValue(x_4340, x_4339)) {
        var_modified_x_4341(x_4301);
      }
    }
    x_4301->has_var_is_flex_row = true;
    x_4301->var_is_flex_row = Asbool(x_4339);
    WriteMetric();
    auto x_4344 = eval_expr_x_4343(x_4301);
    if (x_4301->has_var_is_flex_column) {
      auto x_4345 = x_4301->var_is_flex_column;
      if (!EqualValue(x_4345, x_4344)) {
        var_modified_x_4346(x_4301);
      }
    }
    x_4301->has_var_is_flex_column = true;
    x_4301->var_is_flex_column = Asbool(x_4344);
    WriteMetric();
    auto x_4349 = eval_expr_x_4348(x_4301);
    if (x_4301->has_var_width_attr_expr) {
      auto x_4350 = x_4301->var_width_attr_expr;
      if (!EqualValue(x_4350, x_4349)) {
        var_modified_x_4351(x_4301);
      }
    }
    x_4301->has_var_width_attr_expr = true;
    x_4301->var_width_attr_expr = AsDEString(x_4349);
    WriteMetric();
    auto x_4354 = eval_expr_x_4353(x_4301);
    if (x_4301->has_var_has_width_attr) {
      auto x_4355 = x_4301->var_has_width_attr;
      if (!EqualValue(x_4355, x_4354)) {
        var_modified_x_4356(x_4301);
      }
    }
    x_4301->has_var_has_width_attr = true;
    x_4301->var_has_width_attr = Asbool(x_4354);
    WriteMetric();
    auto x_4359 = eval_expr_x_4358(x_4301);
    if (x_4301->has_var_height_attr_expr) {
      auto x_4360 = x_4301->var_height_attr_expr;
      if (!EqualValue(x_4360, x_4359)) {
        var_modified_x_4361(x_4301);
      }
    }
    x_4301->has_var_height_attr_expr = true;
    x_4301->var_height_attr_expr = AsDEString(x_4359);
    WriteMetric();
    auto x_4364 = eval_expr_x_4363(x_4301);
    if (x_4301->has_var_has_height_attr) {
      auto x_4365 = x_4301->var_has_height_attr;
      if (!EqualValue(x_4365, x_4364)) {
        var_modified_x_4366(x_4301);
      }
    }
    x_4301->has_var_has_height_attr = true;
    x_4301->var_has_height_attr = Asbool(x_4364);
    WriteMetric();
    auto x_4369 = eval_expr_x_4368(x_4301);
    if (x_4301->has_var_is_svg_block) {
      auto x_4370 = x_4301->var_is_svg_block;
      if (!EqualValue(x_4370, x_4369)) {
        var_modified_x_4371(x_4301);
      }
    }
    x_4301->has_var_is_svg_block = true;
    x_4301->var_is_svg_block = Asbool(x_4369);
    WriteMetric();
    auto x_4374 = eval_expr_x_4373(x_4301);
    if (x_4301->has_var_inside_svg) {
      auto x_4375 = x_4301->var_inside_svg;
      if (!EqualValue(x_4375, x_4374)) {
        var_modified_x_4376(x_4301);
      }
    }
    x_4301->has_var_inside_svg = true;
    x_4301->var_inside_svg = Asbool(x_4374);
    WriteMetric();
    auto x_4379 = eval_expr_x_4378(x_4301);
    if (x_4301->has_var_disabled) {
      auto x_4380 = x_4301->var_disabled;
      if (!EqualValue(x_4380, x_4379)) {
        var_modified_x_4381(x_4301);
      }
    }
    x_4301->has_var_disabled = true;
    x_4301->var_disabled = Asbool(x_4379);
    WriteMetric();
    auto x_4384 = eval_expr_x_4383(x_4301);
    if (x_4301->has_var_visible) {
      auto x_4385 = x_4301->var_visible;
      if (!EqualValue(x_4385, x_4384)) {
        var_modified_x_4386(x_4301);
      }
    }
    x_4301->has_var_visible = true;
    x_4301->var_visible = Asbool(x_4384);
    WriteMetric();
    auto x_4389 = eval_expr_x_4388(x_4301);
    if (x_4301->has_var_line_break) {
      auto x_4390 = x_4301->var_line_break;
      if (!EqualValue(x_4390, x_4389)) {
        var_modified_x_4391(x_4301);
      }
    }
    x_4301->has_var_line_break = true;
    x_4301->var_line_break = Asbool(x_4389);
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
        std::string x_5948 = x_3741;
        if (x_5948 == "attributes") {
          std::string x_5949 = x_3742;
          if (x_5949 == "width") {
            WriteMetric();
            x_3735->has_attr_width = true;
            x_3735->attr_width = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3744) {
              if (IsSome(x_3735->meta->bb_1_bb_time_table)) {
                auto x_3745 = UnSome(x_3735->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3745, x_3735, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "image_height") {
            WriteMetric();
            x_3735->has_attr_image_height = true;
            x_3735->attr_image_height = Asint64_t(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3747) {
              if (IsSome(x_3735->meta->bb_0_bb_time_table)) {
                auto x_3748 = UnSome(x_3735->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3748, x_3735, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "image_width") {
            WriteMetric();
            x_3735->has_attr_image_width = true;
            x_3735->attr_image_width = Asint64_t(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3750) {
              if (IsSome(x_3735->meta->bb_0_bb_time_table)) {
                auto x_3751 = UnSome(x_3735->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3751, x_3735, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "height") {
            WriteMetric();
            x_3735->has_attr_height = true;
            x_3735->attr_height = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3753) {
              if (IsSome(x_3735->meta->bb_1_bb_time_table)) {
                auto x_3754 = UnSome(x_3735->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3754, x_3735, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5949 == "viewBox") {
            WriteMetric();
            x_3735->has_attr_viewBox = true;
            x_3735->attr_viewBox = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3756) {
              if (IsSome(x_3735->meta->bb_0_bb_time_table)) {
                auto x_3757 = UnSome(x_3735->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3757, x_3735, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5948 == "properties") {
          std::string x_5950 = x_3742;
          if (x_5950 == "width") {
            WriteMetric();
            x_3735->has_prop_width = true;
            x_3735->prop_width = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3759) {
              if (IsSome(x_3735->meta->bb_0_bb_time_table)) {
                auto x_3760 = UnSome(x_3735->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3760, x_3735, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5950 == "flex-grow") {
            WriteMetric();
            x_3735->has_prop_flex_grow = true;
            x_3735->prop_flex_grow = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3762) {
              if (IsSome(x_3735->meta->bb_1_bb_time_table)) {
                auto x_3763 = UnSome(x_3735->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3763, x_3735, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5950 == "height") {
            WriteMetric();
            x_3735->has_prop_height = true;
            x_3735->prop_height = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3765) {
              if (IsSome(x_3735->meta->bb_0_bb_time_table)) {
                auto x_3766 = UnSome(x_3735->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3766, x_3735, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5950 == "display") {
            WriteMetric();
            x_3735->has_prop_display = true;
            x_3735->prop_display = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3768) {
              if (IsSome(x_3735->meta->bb_1_bb_time_table)) {
                auto x_3769 = UnSome(x_3735->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3769, x_3735, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5950 == "position") {
            WriteMetric();
            x_3735->has_prop_position = true;
            x_3735->prop_position = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3771) {
              if (IsSome(x_3735->meta->bb_1_bb_time_table)) {
                auto x_3772 = UnSome(x_3735->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3772, x_3735, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5950 == "flex-shrink") {
            WriteMetric();
            x_3735->has_prop_flex_shrink = true;
            x_3735->prop_flex_shrink = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3774) {
              if (IsSome(x_3735->meta->bb_1_bb_time_table)) {
                auto x_3775 = UnSome(x_3735->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3775, x_3735, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5950 == "flex-direction") {
            WriteMetric();
            x_3735->has_prop_flex_direction = true;
            x_3735->prop_flex_direction = AsDEString(x_3743);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3777) {
              if (IsSome(x_3735->meta->bb_1_bb_time_table)) {
                auto x_3778 = UnSome(x_3735->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3778, x_3735, MakeRecomputeBB(static_cast<int64_t>(0)));
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
        std::string x_5951 = x_3787;
        if (x_5951 == "attributes") {
          std::string x_5952 = x_3788;
          if (x_5952 == "width") {
            WriteMetric();
            x_3782->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3789) {
              if (IsSome(x_3782->meta->bb_1_bb_time_table)) {
                auto x_3790 = UnSome(x_3782->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3790, x_3782, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "image_height") {
            WriteMetric();
            x_3782->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3792) {
              if (IsSome(x_3782->meta->bb_0_bb_time_table)) {
                auto x_3793 = UnSome(x_3782->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3793, x_3782, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "image_width") {
            WriteMetric();
            x_3782->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3795) {
              if (IsSome(x_3782->meta->bb_0_bb_time_table)) {
                auto x_3796 = UnSome(x_3782->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3796, x_3782, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "height") {
            WriteMetric();
            x_3782->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3798) {
              if (IsSome(x_3782->meta->bb_1_bb_time_table)) {
                auto x_3799 = UnSome(x_3782->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3799, x_3782, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5952 == "viewBox") {
            WriteMetric();
            x_3782->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3801) {
              if (IsSome(x_3782->meta->bb_0_bb_time_table)) {
                auto x_3802 = UnSome(x_3782->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3802, x_3782, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5951 == "properties") {
          std::string x_5953 = x_3788;
          if (x_5953 == "width") {
            WriteMetric();
            x_3782->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3804) {
              if (IsSome(x_3782->meta->bb_0_bb_time_table)) {
                auto x_3805 = UnSome(x_3782->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3805, x_3782, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5953 == "flex-grow") {
            WriteMetric();
            x_3782->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3807) {
              if (IsSome(x_3782->meta->bb_1_bb_time_table)) {
                auto x_3808 = UnSome(x_3782->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3808, x_3782, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5953 == "height") {
            WriteMetric();
            x_3782->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3810) {
              if (IsSome(x_3782->meta->bb_0_bb_time_table)) {
                auto x_3811 = UnSome(x_3782->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3811, x_3782, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5953 == "display") {
            WriteMetric();
            x_3782->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3813) {
              if (IsSome(x_3782->meta->bb_1_bb_time_table)) {
                auto x_3814 = UnSome(x_3782->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3814, x_3782, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5953 == "position") {
            WriteMetric();
            x_3782->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3816) {
              if (IsSome(x_3782->meta->bb_1_bb_time_table)) {
                auto x_3817 = UnSome(x_3782->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3817, x_3782, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5953 == "flex-shrink") {
            WriteMetric();
            x_3782->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3819) {
              if (IsSome(x_3782->meta->bb_1_bb_time_table)) {
                auto x_3820 = UnSome(x_3782->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3820, x_3782, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5953 == "flex-direction") {
            WriteMetric();
            x_3782->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3822) {
              if (IsSome(x_3782->meta->bb_1_bb_time_table)) {
                auto x_3823 = UnSome(x_3782->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3823, x_3782, MakeRecomputeBB(static_cast<int64_t>(0)));
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
        std::string x_5954 = x_3833;
        if (x_5954 == "attributes") {
          std::string x_5955 = x_3834;
          if (x_5955 == "width") {
            WriteMetric();
            x_3827->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3836) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3837 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3837, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_width = true;
            x_3827->attr_width = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3839) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3840 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3840, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "image_height") {
            WriteMetric();
            x_3827->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3842) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3843 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3843, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_image_height = true;
            x_3827->attr_image_height = Asint64_t(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3845) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3846 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3846, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "image_width") {
            WriteMetric();
            x_3827->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3848) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3849 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3849, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_image_width = true;
            x_3827->attr_image_width = Asint64_t(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3851) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3852 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3852, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "height") {
            WriteMetric();
            x_3827->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3854) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3855 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3855, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_height = true;
            x_3827->attr_height = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3857) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3858 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3858, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5955 == "viewBox") {
            WriteMetric();
            x_3827->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3860) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3861 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3861, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_attr_viewBox = true;
            x_3827->attr_viewBox = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3863) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3864 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3864, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5954 == "properties") {
          std::string x_5956 = x_3834;
          if (x_5956 == "width") {
            WriteMetric();
            x_3827->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3866) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3867 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3867, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_width = true;
            x_3827->prop_width = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3869) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3870 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3870, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5956 == "flex-grow") {
            WriteMetric();
            x_3827->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3872) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3873 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3873, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_flex_grow = true;
            x_3827->prop_flex_grow = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3875) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3876 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3876, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5956 == "height") {
            WriteMetric();
            x_3827->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3878) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3879 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3879, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_height = true;
            x_3827->prop_height = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3881) {
              if (IsSome(x_3827->meta->bb_0_bb_time_table)) {
                auto x_3882 = UnSome(x_3827->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3882, x_3827, MakeRecomputeBB(static_cast<int64_t>(1)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5956 == "display") {
            WriteMetric();
            x_3827->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3884) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3885 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3885, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_display = true;
            x_3827->prop_display = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3887) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3888 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3888, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5956 == "position") {
            WriteMetric();
            x_3827->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3890) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3891 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3891, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_position = true;
            x_3827->prop_position = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3893) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3894 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3894, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5956 == "flex-shrink") {
            WriteMetric();
            x_3827->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3896) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3897 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3897, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_flex_shrink = true;
            x_3827->prop_flex_shrink = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3899) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3900 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3900, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_5956 == "flex-direction") {
            WriteMetric();
            x_3827->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3902) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3903 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3903, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_3827->has_prop_flex_direction = true;
            x_3827->prop_flex_direction = AsDEString(x_3835);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_3905) {
              if (IsSome(x_3827->meta->bb_1_bb_time_table)) {
                auto x_3906 = UnSome(x_3827->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_3906, x_3827, MakeRecomputeBB(static_cast<int64_t>(0)));
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
            if (IsSome(x_3923->meta->bb_1_bb_time_table)) {
              auto x_3925 = UnSome(x_3923->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3925, x_3923, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3928) {
        if (IsSome(x_3910->meta->bb_0_bb_time_table)) {
          auto x_3929 = UnSome(x_3910->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3929, x_3910, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3918)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3931) {
        if (IsSome(x_3910->meta->bb_0_bb_time_table)) {
          auto x_3932 = UnSome(x_3910->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3932, x_3910, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3917->next, [&](const auto &x_3938) { return MakeUnit(); },
        [&](const auto &x_3934) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3935) {
            if (IsSome(x_3934->meta->bb_0_bb_time_table)) {
              auto x_3936 = UnSome(x_3934->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3936, x_3934, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3939) {
        if (IsSome(x_3910->meta->bb_2_bb_time_table)) {
          auto x_3940 = UnSome(x_3910->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3940, x_3910, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3918)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3942) {
        if (IsSome(x_3910->meta->bb_2_bb_time_table)) {
          auto x_3943 = UnSome(x_3910->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3943, x_3910, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3917->next, [&](const auto &x_3949) { return MakeUnit(); },
        [&](const auto &x_3945) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3946) {
            if (IsSome(x_3945->meta->bb_2_bb_time_table)) {
              auto x_3947 = UnSome(x_3945->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3947, x_3945, MakeRecomputeBB(static_cast<int64_t>(2)));
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
      if (IsSome(x_3958->meta->pass_0_proc_time_table)) {
        auto x_3961 = OptionMatch(
            x_3911->prev, [&](const auto &x_3960) { return NextTotalOrder(UnSome(x_3958->meta->bb_1_bb_time_table)); },
            [&](const auto &x_3959) { return NextTotalOrder(UnSome(x_3959->meta->pass_0_proc_time_table)); });
        x_3911->meta->pass_0_proc_time_table = x_3961;
        MetaWriteMetric();
        return QueueForcePush(x_3961, x_3911, MakeRecomputeProc(static_cast<int64_t>(0)));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_3911->next, [&](const auto &x_3967) { return MakeUnit(); },
        [&](const auto &x_3963) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3964) {
            if (IsSome(x_3963->meta->bb_1_bb_time_table)) {
              auto x_3965 = UnSome(x_3963->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3965, x_3963, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3968) {
        if (IsSome(x_3910->meta->bb_0_bb_time_table)) {
          auto x_3969 = UnSome(x_3910->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3969, x_3910, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3952)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3971) {
        if (IsSome(x_3910->meta->bb_0_bb_time_table)) {
          auto x_3972 = UnSome(x_3910->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3972, x_3910, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3911->next, [&](const auto &x_3978) { return MakeUnit(); },
        [&](const auto &x_3974) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3975) {
            if (IsSome(x_3974->meta->bb_0_bb_time_table)) {
              auto x_3976 = UnSome(x_3974->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3976, x_3974, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_3979) {
      auto x_3980 = (x_3911->parent);
      if (IsSome(x_3980->meta->pass_1_proc_time_table)) {
        auto x_3983 = OptionMatch(
            x_3911->prev, [&](const auto &x_3982) { return NextTotalOrder(UnSome(x_3980->meta->bb_2_bb_time_table)); },
            [&](const auto &x_3981) { return NextTotalOrder(UnSome(x_3981->meta->pass_1_proc_time_table)); });
        x_3911->meta->pass_1_proc_time_table = x_3983;
        MetaWriteMetric();
        return QueueForcePush(x_3983, x_3911, MakeRecomputeProc(static_cast<int64_t>(1)));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_3910->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3985) {
        if (IsSome(x_3910->meta->bb_2_bb_time_table)) {
          auto x_3986 = UnSome(x_3910->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3986, x_3910, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_3952)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3988) {
        if (IsSome(x_3910->meta->bb_2_bb_time_table)) {
          auto x_3989 = UnSome(x_3910->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_3989, x_3910, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_3911->next, [&](const auto &x_3995) { return MakeUnit(); },
        [&](const auto &x_3991) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_3992) {
            if (IsSome(x_3991->meta->bb_2_bb_time_table)) {
              auto x_3993 = UnSome(x_3991->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_3993, x_3991, MakeRecomputeBB(static_cast<int64_t>(2)));
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
            if (IsSome(x_4019->meta->bb_1_bb_time_table)) {
              auto x_4021 = UnSome(x_4019->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4021, x_4019, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_4006->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4024) {
        if (IsSome(x_4006->meta->bb_0_bb_time_table)) {
          auto x_4025 = UnSome(x_4006->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4025, x_4006, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4014)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4027) {
        if (IsSome(x_4006->meta->bb_0_bb_time_table)) {
          auto x_4028 = UnSome(x_4006->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4028, x_4006, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4013->next, [&](const auto &x_4034) { return MakeUnit(); },
        [&](const auto &x_4030) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4031) {
            if (IsSome(x_4030->meta->bb_0_bb_time_table)) {
              auto x_4032 = UnSome(x_4030->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4032, x_4030, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_4006->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4035) {
        if (IsSome(x_4006->meta->bb_2_bb_time_table)) {
          auto x_4036 = UnSome(x_4006->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4036, x_4006, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4014)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4038) {
        if (IsSome(x_4006->meta->bb_2_bb_time_table)) {
          auto x_4039 = UnSome(x_4006->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4039, x_4006, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4013->next, [&](const auto &x_4045) { return MakeUnit(); },
        [&](const auto &x_4041) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4042) {
            if (IsSome(x_4041->meta->bb_2_bb_time_table)) {
              auto x_4043 = UnSome(x_4041->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4043, x_4041, MakeRecomputeBB(static_cast<int64_t>(2)));
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
      RFMatch(
          x_4050.rf,
          [&](const auto &x_4053) {
            auto x_5957 = x_4053;
            if (x_5957 == 0) {
              return eval_stmts_x_4054(x_4050.n);
            } else if (x_5957 == 1) {
              return eval_stmts_x_4055(x_4050.n);
            } else if (x_5957 == 2) {
              return eval_stmts_x_4056(x_4050.n);
            } else {
              Panic();
            }
          },
          [&](const auto &x_4051) {
            auto x_4052 = ReadRef(current_time);
            WriteRef(current_time, x_4049);
            [&]() {
              auto x_5958 = x_4051;
              if (x_5958 == 0) {
                eval_stmts_x_3683(x_4050.n);
                x_4050.n->meta->pass_0_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else if (x_5958 == 1) {
                eval_stmts_x_3685(x_4050.n);
                x_4050.n->meta->pass_1_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else {
                Panic();
              }
            }();
            WriteRef(current_time, x_4052);
            return MakeUnit();
          });
    }
    auto x_4057 = Zro(QueuePop());
    x_4046(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_3693(const auto &x_4047) { return x_4046(x_4047); }
Unit x_4058(const auto &x_4059, const auto &x_4060, const auto &x_4061) {
  auto x_4062 = ListHeadExn(x_4059);
  auto x_4063 = ListTailExn(x_4059);
  if (ListIsEmpty(x_4063)) {
    InputChangeMetric(node_size_x_3670(x_4061));
    auto x_4064 = ListSplitN(x_4060->children, x_4062);
    auto x_4065 = Zro(x_4064);
    auto x_4066 = Fst(x_4064);
    x_4060->children = ListAppend(x_4065, Cons(x_4061, x_4066));
    if (ListIsEmpty(x_4065)) {
      x_4060->first = x_4061.get();
    }
    if (ListIsEmpty(x_4066)) {
      x_4060->last = x_4061.get();
    }
    OptionMatch(
        ListLast(x_4065),
        [&](const auto &x_4068) {
          x_4061->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4067) {
          x_4061->prev = x_4067.get();
          x_4067->next = x_4061.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_4066),
        [&](const auto &x_4070) {
          x_4061->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_4069) {
          x_4061->next = x_4069.get();
          x_4069->prev = x_4061.get();
          return MakeUnit();
        });
    x_4061->parent = x_4060.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4071) {
      auto x_4072 = (x_4061->parent);
      if (IsSome(x_4072->meta->pass_0_proc_time_table)) {
        auto x_4075 = OptionMatch(
            x_4061->prev, [&](const auto &x_4074) { return NextTotalOrder(UnSome(x_4072->meta->bb_1_bb_time_table)); },
            [&](const auto &x_4073) { return NextTotalOrder(UnSome(x_4073->meta->pass_0_proc_time_table)); });
        x_4061->meta->pass_0_proc_time_table = x_4075;
        MetaWriteMetric();
        return QueueForcePush(x_4075, x_4061, MakeRecomputeProc(static_cast<int64_t>(0)));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_4061->next, [&](const auto &x_4081) { return MakeUnit(); },
        [&](const auto &x_4077) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4078) {
            if (IsSome(x_4077->meta->bb_1_bb_time_table)) {
              auto x_4079 = UnSome(x_4077->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4079, x_4077, MakeRecomputeBB(static_cast<int64_t>(0)));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_4060->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4082) {
        if (IsSome(x_4060->meta->bb_0_bb_time_table)) {
          auto x_4083 = UnSome(x_4060->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4083, x_4060, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4066)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4085) {
        if (IsSome(x_4060->meta->bb_0_bb_time_table)) {
          auto x_4086 = UnSome(x_4060->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4086, x_4060, MakeRecomputeBB(static_cast<int64_t>(1)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4061->next, [&](const auto &x_4092) { return MakeUnit(); },
        [&](const auto &x_4088) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4089) {
            if (IsSome(x_4088->meta->bb_0_bb_time_table)) {
              auto x_4090 = UnSome(x_4088->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4090, x_4088, MakeRecomputeBB(static_cast<int64_t>(1)));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4093) {
      auto x_4094 = (x_4061->parent);
      if (IsSome(x_4094->meta->pass_1_proc_time_table)) {
        auto x_4097 = OptionMatch(
            x_4061->prev, [&](const auto &x_4096) { return NextTotalOrder(UnSome(x_4094->meta->bb_2_bb_time_table)); },
            [&](const auto &x_4095) { return NextTotalOrder(UnSome(x_4095->meta->pass_1_proc_time_table)); });
        x_4061->meta->pass_1_proc_time_table = x_4097;
        MetaWriteMetric();
        return QueueForcePush(x_4097, x_4061, MakeRecomputeProc(static_cast<int64_t>(1)));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_4060->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4099) {
        if (IsSome(x_4060->meta->bb_2_bb_time_table)) {
          auto x_4100 = UnSome(x_4060->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4100, x_4060, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_4066)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_4102) {
        if (IsSome(x_4060->meta->bb_2_bb_time_table)) {
          auto x_4103 = UnSome(x_4060->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_4103, x_4060, MakeRecomputeBB(static_cast<int64_t>(2)));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_4061->next, [&](const auto &x_4109) { return MakeUnit(); },
        [&](const auto &x_4105) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_4106) {
            if (IsSome(x_4105->meta->bb_2_bb_time_table)) {
              auto x_4107 = UnSome(x_4105->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_4107, x_4105, MakeRecomputeBB(static_cast<int64_t>(2)));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_4058(x_4063, ListNthExn(x_4060->children, x_4062), x_4061);
  }
}
Unit add_node_x_3691(const auto &x_4059, const auto &x_4060, const auto &x_4061) {
  return x_4058(x_4059, x_4060, x_4061);
}
Unit x_4110(const auto &x_4111) {
  ListIter2(x_4111->children, [&](const auto &x_4112, const auto &x_4113) {
    x_4112->parent = x_4111.get();
    x_4113->parent = x_4111.get();
    x_4112->next = x_4113.get();
    x_4113->prev = x_4112.get();
    x_4110(x_4112);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4111->children),
      [&](const auto &x_4115) {
        x_4111->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4114) {
        x_4111->first = x_4114.get();
        x_4114->parent = x_4111.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4111->children),
      [&](const auto &x_4117) {
        x_4111->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4116) {
        x_4111->last = x_4116.get();
        x_4116->parent = x_4111.get();
        x_4110(x_4116);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3689(const auto &x_4111) { return x_4110(x_4111); }
Unit eval_stmts_x_3685(const auto &x_4118) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4119) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4120) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4118->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4056(x_4118);
      return MakeUnit();
    })));
    ListIter(x_4118->children, [&](const auto &x_4121) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4122) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3685(x_4121);
        x_4121->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3683(const auto &x_4123) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4124) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4125) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4123->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4054(x_4123);
      return MakeUnit();
    })));
    ListIter(x_4123->children, [&](const auto &x_4126) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_4127) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3683(x_4126);
        x_4126->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_4128) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_4123->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_4055(x_4123);
      return MakeUnit();
    })));
    return MakeUnit();
  })));
}
Unit x_4129(const auto &x_4130) {
  ListIter2(x_4130->children, [&](const auto &x_4131, const auto &x_4132) {
    x_4131->parent = x_4130.get();
    x_4132->parent = x_4130.get();
    x_4131->next = x_4132.get();
    x_4132->prev = x_4131.get();
    x_4129(x_4131);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4130->children),
      [&](const auto &x_4134) {
        x_4130->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4133) {
        x_4130->first = x_4133.get();
        x_4133->parent = x_4130.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4130->children),
      [&](const auto &x_4136) {
        x_4130->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4135) {
        x_4130->last = x_4135.get();
        x_4135->parent = x_4130.get();
        x_4129(x_4135);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3679(const auto &x_4130) { return x_4129(x_4130); }
int64_t x_4137(const auto &x_4138) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4138->children, [&](const auto &x_4139) { return x_4137(x_4139); }));
}
int64_t node_size_x_3670(const auto &x_4138) { return x_4137(x_4138); }
int64_t x_4140(const auto &x_4141) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4141->children, [&](const auto &x_4142) { return x_4140(x_4142); }));
}
int64_t layout_size_x_3669(const auto &x_4141) { return x_4140(x_4141); }
LayoutNode x_4143(const auto &x_4144) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_4144)), [&](const auto &x_4145) { return x_4143(x_4145); }));
}
LayoutNode json_to_layout_node_x_3668(const auto &x_4144) { return x_4143(x_4144); }
Node x_4146(const auto &x_4147) {
  return MakeNode(x_4147->name, x_4147->attr, x_4147->prop, x_4147->extern_id,
                  ListMap(x_4147->children, [&](const auto &x_4148) { return x_4146(x_4148); }));
}
Node node_to_fs_node_x_3667(const auto &x_4147) { return x_4146(x_4147); }
Node x_4149(const auto &x_4150) {
  return MakeNode(
      JsonToString(JsonMember("name", x_4150)), JsonToDict(JsonMember("attributes", x_4150)),
      JsonToDict(JsonMember("properties", x_4150)), JsonToInt(JsonMember("id", x_4150)),
      ListMap(JsonToList(JsonMember("children", x_4150)), [&](const auto &x_4151) { return x_4149(x_4151); }));
}
Node json_to_node_aux_x_3666(const auto &x_4150) { return x_4149(x_4150); }
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
        x_3680->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_3684) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_3685(x_3680);
        x_3680->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      JsonToChannel(x_3671, [&]() {
        auto x_5959 = FreshJson();
        WriteJson(x_5959, "name", "PQ_D");
        WriteJson(x_5959, "diff_num", ReadRef(x_3673));
        WriteJson(x_5959, "read_count", MetricReadCount());
        WriteJson(x_5959, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_5959, "write_count", MetricWriteCount());
        WriteJson(x_5959, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_5959, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_5959, "input_change_count", MetricInputChangeCount());
        WriteJson(x_5959, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_5959, "overhead_time", MetricOverheadCount());
        WriteJson(x_5959, "eval_time", MetricEvalCount());
        WriteJson(x_5959, "html", "");
        WriteJson(x_5959, "command", StackToList(x_3677));
        return x_5959;
      }());
      OutputString(x_3671, "\n");
      ClearStack(x_3677);
      WriteRef(x_3673, IntAdd(ReadRef(x_3673), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_3672, [&](const auto &x_3686) {
        auto x_3687 = JsonOfString(x_3686);
        PushStack(x_3677, x_3687);
        std::string x_5961 = JsonToString(JsonMember("name", x_3687));
        if (x_5961 == "add") {
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
        } else if (x_5961 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_3692) {
            recalculate_internal_x_3693(MakeUnit());
            return MakeUnit();
          })));
          JsonToChannel(x_3671, [&]() {
            auto x_5960 = FreshJson();
            WriteJson(x_5960, "name", "PQ_D");
            WriteJson(x_5960, "diff_num", ReadRef(x_3673));
            WriteJson(x_5960, "read_count", MetricReadCount());
            WriteJson(x_5960, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_5960, "write_count", MetricWriteCount());
            WriteJson(x_5960, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_5960, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_5960, "input_change_count", MetricInputChangeCount());
            WriteJson(x_5960, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_5960, "overhead_time", MetricOverheadCount());
            WriteJson(x_5960, "eval_time", MetricEvalCount());
            WriteJson(x_5960, "html", "");
            WriteJson(x_5960, "command", StackToList(x_3677));
            return x_5960;
          }());
          OutputString(x_3671, "\n");
          ClearStack(x_3677);
          WriteRef(x_3673, IntAdd(ReadRef(x_3673), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5961 == "remove") {
          return remove_node_x_3695(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3694) { return JsonToInt(x_3694); }),
              x_3680, MakeUnit());
        } else if (x_5961 == "replace") {
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
        } else if (x_5961 == "replace_value") {
          return replace_value_x_3701(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3700) { return JsonToInt(x_3700); }),
              x_3680,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3687)), JsonToString(JsonMember("key", x_3687))),
                       JsonToValue(JsonMember("value", x_3687))));
        } else if (x_5961 == "delete_value") {
          return delete_value_x_3703(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3702) { return JsonToInt(x_3702); }),
              x_3680, MakePair(JsonToString(JsonMember("type", x_3687)), JsonToString(JsonMember("key", x_3687))));
        } else if (x_5961 == "insert_value") {
          return insert_value_x_3705(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3704) { return JsonToInt(x_3704); }),
              x_3680,
              MakePair(MakePair(JsonToString(JsonMember("type", x_3687)), JsonToString(JsonMember("key", x_3687))),
                       JsonToValue(JsonMember("value", x_3687))));
        } else if (x_5961 == "layout_remove") {
          return remove_layout_node_x_3707(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3706) { return JsonToInt(x_3706); }),
              x_3681, MakeUnit());
        } else if (x_5961 == "layout_add") {
          return add_layout_node_x_3709(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3708) { return JsonToInt(x_3708); }),
              x_3681, json_to_layout_node_x_3668(JsonMember("node", x_3687)));
        } else if (x_5961 == "layout_replace") {
          return replace_layout_node_x_3711(
              ListMap(JsonToList(JsonMember("path", x_3687)), [&](const auto &x_3710) { return JsonToInt(x_3710); }),
              x_3681, json_to_layout_node_x_3668(JsonMember("node", x_3687)));
        } else if (x_5961 == "layout_info_changed") {
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