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
Unit var_modified_x_724(const auto &x_726);
auto eval_expr_x_721(const auto &x_748);
Unit var_modified_x_719(const auto &x_825);
auto eval_expr_x_716(const auto &x_831);
Unit var_modified_x_714(const auto &x_848);
auto eval_expr_x_711(const auto &x_862);
Unit var_modified_x_709(const auto &x_867);
auto eval_expr_x_706(const auto &x_881);
Unit var_modified_x_704(const auto &x_890);
auto eval_expr_x_701(const auto &x_896);
Unit var_modified_x_699(const auto &x_897);
auto eval_expr_x_696(const auto &x_903);
Unit var_modified_x_694(const auto &x_908);
auto eval_expr_x_691(const auto &x_918);
Unit var_modified_x_689(const auto &x_929);
auto eval_expr_x_686(const auto &x_935);
Unit var_modified_x_684(const auto &x_940);
auto eval_expr_x_681(const auto &x_950);
Unit var_modified_x_679(const auto &x_961);
auto eval_expr_x_676(const auto &x_971);
Unit var_modified_x_674(const auto &x_996);
auto eval_expr_x_671(const auto &x_1010);
Unit var_modified_x_669(const auto &x_1035);
auto eval_expr_x_666(const auto &x_1041);
Unit var_modified_x_664(const auto &x_1044);
auto eval_expr_x_661(const auto &x_1056);
Unit var_modified_x_659(const auto &x_1065);
auto eval_expr_x_656(const auto &x_1077);
Unit var_modified_x_654(const auto &x_1086);
auto eval_expr_x_651(const auto &x_1096);
Unit var_modified_x_649(const auto &x_1099);
auto eval_expr_x_646(const auto &x_1109);
Unit var_modified_x_644(const auto &x_1112);
auto eval_expr_x_641(const auto &x_1126);
Unit var_modified_x_639(const auto &x_1129);
auto eval_expr_x_636(const auto &x_1143);
Unit var_modified_x_632(const auto &x_1146);
auto eval_expr_x_629(const auto &x_1160);
Unit var_modified_x_627(const auto &x_1189);
auto eval_expr_x_624(const auto &x_1203);
Unit var_modified_x_622(const auto &x_1216);
auto eval_expr_x_619(const auto &x_1230);
Unit var_modified_x_617(const auto &x_1239);
auto eval_expr_x_614(const auto &x_1245);
Unit var_modified_x_612(const auto &x_1254);
auto eval_expr_x_609(const auto &x_1264);
Unit var_modified_x_607(const auto &x_1409);
auto eval_expr_x_604(const auto &x_1415);
Unit var_modified_x_602(const auto &x_1464);
auto eval_expr_x_599(const auto &x_1474);
Unit var_modified_x_597(const auto &x_1477);
auto eval_expr_x_594(const auto &x_1483);
Unit var_modified_x_592(const auto &x_1492);
auto eval_expr_x_589(const auto &x_1506);
Unit var_modified_x_587(const auto &x_1515);
auto eval_expr_x_584(const auto &x_1529);
Unit var_modified_x_582(const auto &x_1538);
auto eval_expr_x_579(const auto &x_1550);
Unit var_modified_x_577(const auto &x_1563);
auto eval_expr_x_574(const auto &x_1569);
Unit var_modified_x_572(const auto &x_1578);
auto eval_expr_x_569(const auto &x_1588);
Unit var_modified_x_567(const auto &x_1741);
auto eval_expr_x_564(const auto &x_1747);
Unit var_modified_x_562(const auto &x_1752);
auto eval_expr_x_559(const auto &x_1758);
Unit var_modified_x_557(const auto &x_1807);
auto eval_expr_x_554(const auto &x_1813);
Unit var_modified_x_552(const auto &x_1826);
auto eval_expr_x_549(const auto &x_1836);
Unit var_modified_x_545(const auto &x_1839);
auto eval_expr_x_542(const auto &x_1847);
Unit var_modified_x_540(const auto &x_1864);
auto eval_expr_x_537(const auto &x_1870);
Unit var_modified_x_535(const auto &x_1879);
auto eval_expr_x_532(const auto &x_1889);
Unit var_modified_x_530(const auto &x_1942);
auto eval_expr_x_527(const auto &x_1954);
Unit var_modified_x_525(const auto &x_1979);
auto eval_expr_x_522(const auto &x_1987);
Unit var_modified_x_520(const auto &x_1996);
auto eval_expr_x_517(const auto &x_2006);
Unit var_modified_x_515(const auto &x_2059);
auto eval_expr_x_512(const auto &x_2071);
Unit var_modified_x_510(const auto &x_2092);
auto eval_expr_x_507(const auto &x_2098);
Unit var_modified_x_505(const auto &x_2119);
auto eval_expr_x_502(const auto &x_2125);
Unit var_modified_x_500(const auto &x_2138);
auto eval_expr_x_497(const auto &x_2148);
Unit var_modified_x_495(const auto &x_2169);
auto eval_expr_x_492(const auto &x_2175);
Unit var_modified_x_490(const auto &x_2180);
auto eval_expr_x_487(const auto &x_2186);
Unit eval_stmts_x_387(const auto &x_485);
Unit eval_stmts_x_386(const auto &x_547);
Unit eval_stmts_x_385(const auto &x_634);
Unit x_46(const auto &x_47, const auto &x_48, const auto &x_49);
Unit x_53(const auto &x_54, const auto &x_55, const auto &x_56);
Unit x_60(const auto &x_61, const auto &x_62, const auto &x_63);
Unit x_67(const auto &x_68, const auto &x_69, const auto &x_70);
Unit x_114(const auto &x_115, const auto &x_116, const auto &x_117);
Unit x_159(const auto &x_160, const auto &x_161, const auto &x_162);
Unit x_242(const auto &x_243, const auto &x_244, const auto &x_245);
Unit x_330(const auto &x_331);
Unit x_338(const auto &x_339, const auto &x_340, const auto &x_341);
Unit x_380(const auto &x_381);
Unit x_391(const auto &x_392, const auto &x_393, const auto &x_394);
Unit x_443(const auto &x_444);
Unit eval_stmts_x_19(const auto &x_451);
Unit eval_stmts_x_17(const auto &x_456);
Unit x_462(const auto &x_463);
int64_t x_470(const auto &x_471);
int64_t x_473(const auto &x_474);
LayoutNode x_476(const auto &x_477);
Node x_479(const auto &x_480);
Node x_482(const auto &x_483);
Unit var_modified_x_724(const auto &x_726) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_727) {
    auto x_2191 = [&](const auto &x_728) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_729) {
        if (IsSome(x_728->meta->bb_0_bb_time_table)) {
          auto x_730 = UnSome(x_728->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_730, x_728, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2191(x_726);
    MakeUnit();
    auto x_2192 = [&](const auto &x_734) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_735) {
        if (IsSome(x_734->meta->bb_0_bb_time_table)) {
          auto x_736 = UnSome(x_734->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_736, x_734, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_726->next, [&](const auto &x_733) { return MakeUnit(); },
        [&](const auto &x_732) {
          auto x_2195 = x_2192;
          x_2195(x_732);
          return MakeUnit();
        });
    auto x_2193 = [&](const auto &x_738) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_739) {
        if (IsSome(x_738->meta->bb_2_bb_time_table)) {
          auto x_740 = UnSome(x_738->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_740, x_738, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2193(x_726);
    MakeUnit();
    auto x_2194 = [&](const auto &x_744) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_745) {
        if (IsSome(x_744->meta->bb_2_bb_time_table)) {
          auto x_746 = UnSome(x_744->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_746, x_744, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_726->next, [&](const auto &x_743) { return MakeUnit(); },
        [&](const auto &x_742) {
          auto x_2196 = x_2194;
          x_2196(x_742);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_721(const auto &x_748) {
  if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_748->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_748->parent != nullptr) &&
          (eq((x_748->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_748->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_748->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_748->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_748->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_719(const auto &x_825) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_826) {
    ListIter(x_825->children, [&](const auto &x_827) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_828) {
        if (IsSome(x_827->meta->bb_1_bb_time_table)) {
          auto x_829 = UnSome(x_827->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_829, x_827, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_716(const auto &x_831) {
  return (((!(x_831->parent != nullptr)) || (x_831->parent)->var_visible) &&
          (neq(x_831->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_831->var_inside_svg) && (!x_831->var_disabled))));
}
Unit var_modified_x_714(const auto &x_848) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_849) {
    auto x_2197 = [&](const auto &x_850) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_851) {
        if (IsSome(x_850->meta->bb_1_bb_time_table)) {
          auto x_852 = UnSome(x_850->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_852, x_850, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2197(x_848);
    MakeUnit();
    ListIter(x_848->children, [&](const auto &x_854) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_855) {
        if (IsSome(x_854->meta->bb_1_bb_time_table)) {
          auto x_856 = UnSome(x_854->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_856, x_854, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2198 = [&](const auto &x_858) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_859) {
        if (IsSome(x_858->meta->bb_0_bb_time_table)) {
          auto x_860 = UnSome(x_858->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_860, x_858, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2198(x_848);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_711(const auto &x_862) {
  if (eq(x_862->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_862->parent != nullptr) && (x_862->parent)->var_disabled);
  }
}
Unit var_modified_x_709(const auto &x_867) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_868) {
    auto x_2199 = [&](const auto &x_869) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_870) {
        if (IsSome(x_869->meta->bb_1_bb_time_table)) {
          auto x_871 = UnSome(x_869->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_871, x_869, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2199(x_867);
    MakeUnit();
    ListIter(x_867->children, [&](const auto &x_873) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_874) {
        if (IsSome(x_873->meta->bb_1_bb_time_table)) {
          auto x_875 = UnSome(x_873->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_875, x_873, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2200 = [&](const auto &x_877) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_878) {
        if (IsSome(x_877->meta->bb_0_bb_time_table)) {
          auto x_879 = UnSome(x_877->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_879, x_877, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2200(x_867);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_706(const auto &x_881) {
  return ((x_881->parent != nullptr) && ((x_881->parent)->var_is_svg_block || (x_881->parent)->var_inside_svg));
}
Unit var_modified_x_704(const auto &x_890) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_891) {
    ListIter(x_890->children, [&](const auto &x_892) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_893) {
        if (IsSome(x_892->meta->bb_1_bb_time_table)) {
          auto x_894 = UnSome(x_892->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_894, x_892, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_701(const auto &x_896) { return eq(x_896->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_699(const auto &x_897) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_898) {
    auto x_2201 = [&](const auto &x_899) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_900) {
        if (IsSome(x_899->meta->bb_0_bb_time_table)) {
          auto x_901 = UnSome(x_899->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_901, x_899, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2201(x_897);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_696(const auto &x_903) {
  return neq(x_903->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_694(const auto &x_908) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_909) {
    auto x_2202 = [&](const auto &x_910) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_911) {
        if (IsSome(x_910->meta->bb_1_bb_time_table)) {
          auto x_912 = UnSome(x_910->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_912, x_910, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2202(x_908);
    MakeUnit();
    auto x_2203 = [&](const auto &x_914) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_915) {
        if (IsSome(x_914->meta->bb_0_bb_time_table)) {
          auto x_916 = UnSome(x_914->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_916, x_914, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2203(x_908);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_691(const auto &x_918) {
  if (!x_918->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_918->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_918->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_918->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_689(const auto &x_929) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_930) {
    auto x_2204 = [&](const auto &x_931) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_932) {
        if (IsSome(x_931->meta->bb_0_bb_time_table)) {
          auto x_933 = UnSome(x_931->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_933, x_931, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2204(x_929);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_686(const auto &x_935) {
  return neq(x_935->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_684(const auto &x_940) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_941) {
    auto x_2205 = [&](const auto &x_942) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_943) {
        if (IsSome(x_942->meta->bb_1_bb_time_table)) {
          auto x_944 = UnSome(x_942->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_944, x_942, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2205(x_940);
    MakeUnit();
    auto x_2206 = [&](const auto &x_946) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_947) {
        if (IsSome(x_946->meta->bb_0_bb_time_table)) {
          auto x_948 = UnSome(x_946->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_948, x_946, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2206(x_940);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_681(const auto &x_950) {
  if (!x_950->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_950->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_950->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_950->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_679(const auto &x_961) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_962) {
    ListIter(x_961->children, [&](const auto &x_963) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_964) {
        if (IsSome(x_963->meta->bb_0_bb_time_table)) {
          auto x_965 = UnSome(x_963->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_965, x_963, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    ListIter(x_961->children, [&](const auto &x_967) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_968) {
        if (IsSome(x_967->meta->bb_2_bb_time_table)) {
          auto x_969 = UnSome(x_967->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_969, x_967, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_676(const auto &x_971) {
  if ((x_971->parent != nullptr) &&
      (eq((x_971->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_971->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_971->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_971->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_674(const auto &x_996) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_997) {
    ListIter(x_996->children, [&](const auto &x_998) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_999) {
        if (IsSome(x_998->meta->bb_0_bb_time_table)) {
          auto x_1000 = UnSome(x_998->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1000, x_998, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2207 = [&](const auto &x_1002) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1003) {
        if (IsSome(x_1002->meta->bb_2_bb_time_table)) {
          auto x_1004 = UnSome(x_1002->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1004, x_1002, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2207(x_996);
    MakeUnit();
    ListIter(x_996->children, [&](const auto &x_1006) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1007) {
        if (IsSome(x_1006->meta->bb_2_bb_time_table)) {
          auto x_1008 = UnSome(x_1006->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1008, x_1006, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_671(const auto &x_1010) {
  if ((x_1010->parent != nullptr) &&
      (eq((x_1010->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_1010->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_1010->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_669(const auto &x_1035) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1036) {
    ListIter(x_1035->children, [&](const auto &x_1037) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1038) {
        if (IsSome(x_1037->meta->bb_1_bb_time_table)) {
          auto x_1039 = UnSome(x_1037->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1039, x_1037, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_666(const auto &x_1041) {
  if (x_1041->has_prop_flex_direction) {
    return x_1041->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_664(const auto &x_1044) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1045) {
    auto x_2208 = [&](const auto &x_1048) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1049) {
        if (IsSome(x_1048->meta->bb_1_bb_time_table)) {
          auto x_1050 = UnSome(x_1048->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1050, x_1048, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1044->next, [&](const auto &x_1047) { return MakeUnit(); },
        [&](const auto &x_1046) {
          auto x_2210 = x_2208;
          x_2210(x_1046);
          return MakeUnit();
        });
    auto x_2209 = [&](const auto &x_1052) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1053) {
        if (IsSome(x_1052->meta->bb_2_bb_time_table)) {
          auto x_1054 = UnSome(x_1052->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1054, x_1052, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2209(x_1044);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_661(const auto &x_1056) {
  return plus((x_1056->prev != nullptr) ? ((x_1056->prev)->var_flex_shrink_sum) : (0.), x_1056->var_flex_shrink);
}
Unit var_modified_x_659(const auto &x_1065) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1066) {
    auto x_2211 = [&](const auto &x_1069) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1070) {
        if (IsSome(x_1069->meta->bb_1_bb_time_table)) {
          auto x_1071 = UnSome(x_1069->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1071, x_1069, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1065->next, [&](const auto &x_1068) { return MakeUnit(); },
        [&](const auto &x_1067) {
          auto x_2213 = x_2211;
          x_2213(x_1067);
          return MakeUnit();
        });
    auto x_2212 = [&](const auto &x_1073) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1074) {
        if (IsSome(x_1073->meta->bb_2_bb_time_table)) {
          auto x_1075 = UnSome(x_1073->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1075, x_1073, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2212(x_1065);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_656(const auto &x_1077) {
  return plus((x_1077->prev != nullptr) ? ((x_1077->prev)->var_flex_grow_sum) : (0.), x_1077->var_flex_grow);
}
Unit var_modified_x_654(const auto &x_1086) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1087) {
    auto x_2214 = [&](const auto &x_1088) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1089) {
        if (IsSome(x_1088->meta->bb_1_bb_time_table)) {
          auto x_1090 = UnSome(x_1088->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1090, x_1088, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2214(x_1086);
    MakeUnit();
    auto x_2215 = [&](const auto &x_1092) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1093) {
        if (IsSome(x_1092->meta->bb_2_bb_time_table)) {
          auto x_1094 = UnSome(x_1092->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1094, x_1092, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2215(x_1086);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_651(const auto &x_1096) {
  if (x_1096->has_prop_flex_shrink) {
    return (x_1096->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_649(const auto &x_1099) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1100) {
    auto x_2216 = [&](const auto &x_1101) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1102) {
        if (IsSome(x_1101->meta->bb_1_bb_time_table)) {
          auto x_1103 = UnSome(x_1101->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1103, x_1101, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2216(x_1099);
    MakeUnit();
    auto x_2217 = [&](const auto &x_1105) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1106) {
        if (IsSome(x_1105->meta->bb_2_bb_time_table)) {
          auto x_1107 = UnSome(x_1105->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1107, x_1105, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2217(x_1099);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_646(const auto &x_1109) {
  if (x_1109->has_prop_flex_grow) {
    return (x_1109->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_644(const auto &x_1112) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1113) {
    auto x_2218 = [&](const auto &x_1114) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1115) {
        if (IsSome(x_1114->meta->bb_1_bb_time_table)) {
          auto x_1116 = UnSome(x_1114->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1116, x_1114, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2218(x_1112);
    MakeUnit();
    auto x_2219 = [&](const auto &x_1118) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1119) {
        if (IsSome(x_1118->meta->bb_0_bb_time_table)) {
          auto x_1120 = UnSome(x_1118->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1120, x_1118, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2219(x_1112);
    MakeUnit();
    auto x_2220 = [&](const auto &x_1122) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1123) {
        if (IsSome(x_1122->meta->bb_2_bb_time_table)) {
          auto x_1124 = UnSome(x_1122->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1124, x_1122, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2220(x_1112);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_641(const auto &x_1126) {
  if (x_1126->has_prop_position) {
    return x_1126->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_639(const auto &x_1129) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1130) {
    auto x_2221 = [&](const auto &x_1131) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1132) {
        if (IsSome(x_1131->meta->bb_1_bb_time_table)) {
          auto x_1133 = UnSome(x_1131->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1133, x_1131, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2221(x_1129);
    MakeUnit();
    ListIter(x_1129->children, [&](const auto &x_1135) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1136) {
        if (IsSome(x_1135->meta->bb_1_bb_time_table)) {
          auto x_1137 = UnSome(x_1135->meta->bb_1_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1137, x_1135, static_cast<int64_t>(0));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2222 = [&](const auto &x_1139) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1140) {
        if (IsSome(x_1139->meta->bb_0_bb_time_table)) {
          auto x_1141 = UnSome(x_1139->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1141, x_1139, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2222(x_1129);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_636(const auto &x_1143) {
  if (x_1143->has_prop_display) {
    return x_1143->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_632(const auto &x_1146) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1147) {
    auto x_2223 = [&](const auto &x_1150) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1151) {
        if (IsSome(x_1150->meta->bb_0_bb_time_table)) {
          auto x_1152 = UnSome(x_1150->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1152, x_1150, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1146->next == nullptr) {
      auto x_2225 = x_2223;
      OptionMatch(
          x_1146->parent, [&](const auto &x_1149) { return MakeUnit(); },
          [&](const auto &x_1148) {
            auto x_2227 = x_2225;
            x_2227(x_1148);
            return MakeUnit();
          });
    }
    auto x_2224 = [&](const auto &x_1156) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1157) {
        if (IsSome(x_1156->meta->bb_0_bb_time_table)) {
          auto x_1158 = UnSome(x_1156->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1158, x_1156, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1146->next, [&](const auto &x_1155) { return MakeUnit(); },
        [&](const auto &x_1154) {
          auto x_2226 = x_2224;
          x_2226(x_1154);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_629(const auto &x_1160) {
  if (x_1160->prev != nullptr) {
    if (x_1160->var_line_break) {
      return plus((x_1160->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1160->prev)->var_intrinsic_current_line_height, x_1160->var_intrinsic_height_external));
    } else {
      return (x_1160->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1160->var_line_break) {
      return x_1160->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_627(const auto &x_1189) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1190) {
    auto x_2228 = [&](const auto &x_1193) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1194) {
        if (IsSome(x_1193->meta->bb_0_bb_time_table)) {
          auto x_1195 = UnSome(x_1193->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1195, x_1193, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1189->next == nullptr) {
      auto x_2230 = x_2228;
      OptionMatch(
          x_1189->parent, [&](const auto &x_1192) { return MakeUnit(); },
          [&](const auto &x_1191) {
            auto x_2232 = x_2230;
            x_2232(x_1191);
            return MakeUnit();
          });
    }
    auto x_2229 = [&](const auto &x_1199) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1200) {
        if (IsSome(x_1199->meta->bb_0_bb_time_table)) {
          auto x_1201 = UnSome(x_1199->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1201, x_1199, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1189->next, [&](const auto &x_1198) { return MakeUnit(); },
        [&](const auto &x_1197) {
          auto x_2231 = x_2229;
          x_2231(x_1197);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_624(const auto &x_1203) {
  if (x_1203->var_line_break) {
    return 0.;
  } else {
    return max(x_1203->var_intrinsic_height_external,
               (x_1203->prev != nullptr) ? ((x_1203->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_622(const auto &x_1216) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1217) {
    auto x_2233 = [&](const auto &x_1220) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1221) {
        if (IsSome(x_1220->meta->bb_0_bb_time_table)) {
          auto x_1222 = UnSome(x_1220->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1222, x_1220, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1216->next, [&](const auto &x_1219) { return MakeUnit(); },
        [&](const auto &x_1218) {
          auto x_2235 = x_2233;
          x_2235(x_1218);
          return MakeUnit();
        });
    auto x_2234 = [&](const auto &x_1226) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1227) {
        if (IsSome(x_1226->meta->bb_2_bb_time_table)) {
          auto x_1228 = UnSome(x_1226->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1228, x_1226, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1216->next == nullptr) {
      auto x_2236 = x_2234;
      OptionMatch(
          x_1216->parent, [&](const auto &x_1225) { return MakeUnit(); },
          [&](const auto &x_1224) {
            auto x_2237 = x_2236;
            x_2237(x_1224);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_619(const auto &x_1230) {
  return plus((x_1230->prev != nullptr) ? ((x_1230->prev)->var_intrinsic_height_sum) : (0.),
              x_1230->var_intrinsic_height_external);
}
Unit var_modified_x_617(const auto &x_1239) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1240) {
    auto x_2238 = [&](const auto &x_1241) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1242) {
        if (IsSome(x_1241->meta->bb_0_bb_time_table)) {
          auto x_1243 = UnSome(x_1241->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1243, x_1241, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2238(x_1239);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_614(const auto &x_1245) {
  if (eq(x_1245->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1245->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_612(const auto &x_1254) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1255) {
    auto x_2239 = [&](const auto &x_1256) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1257) {
        if (IsSome(x_1256->meta->bb_0_bb_time_table)) {
          auto x_1258 = UnSome(x_1256->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1258, x_1256, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2239(x_1254);
    MakeUnit();
    auto x_2240 = [&](const auto &x_1260) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1261) {
        if (IsSome(x_1260->meta->bb_2_bb_time_table)) {
          auto x_1262 = UnSome(x_1260->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1262, x_1260, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2240(x_1254);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_609(const auto &x_1264) {
  if (eq(x_1264->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1264->var_inside_svg) {
      return 0.;
    } else {
      if (x_1264->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1264->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1264->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_1264->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_1264->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1264->var_height_expr.r.a0;
          } else {
            if (x_1264->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_1264->var_height_expr.r.a0;
            } else {
              return x_1264->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_1264->var_children_intrinsic_height,
              (eq(x_1264->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_1264->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1264->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1264->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_1264->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1264->var_has_height_attr &&
                                                  (x_1264->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1264->var_height_attr_expr.r.a0)
                                                     : ((x_1264->has_attr_viewBox)
                                                            ? (x_1264->attr_viewBox.r.a3)
                                                            : (mult((x_1264->attr_viewBox.r.a3),
                                                                    divide(x_1264->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1264->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1264->var_has_height_attr)
                                                            ? (x_1264->var_height_attr_expr.r.a0)
                                                            : ((x_1264->has_attr_image_height &&
                                                                (!x_1264->var_has_width_attr))
                                                                   ? (int_to_float(x_1264->attr_image_height))
                                                                   : ((neq(x_1264->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1264->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1264->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_1264->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_1264->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_1264->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_607(const auto &x_1409) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1410) {
    auto x_2241 = [&](const auto &x_1411) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1412) {
        if (IsSome(x_1411->meta->bb_2_bb_time_table)) {
          auto x_1413 = UnSome(x_1411->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1413, x_1411, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2241(x_1409);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_604(const auto &x_1415) {
  if (eq(x_1415->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1415->var_inside_svg || x_1415->var_disabled)) {
    return true;
  } else {
    if ((x_1415->parent != nullptr) && (x_1415->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1415->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1415->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1415->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1415->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1415->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_602(const auto &x_1464) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1465) {
    auto x_2242 = [&](const auto &x_1466) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1467) {
        if (IsSome(x_1466->meta->bb_0_bb_time_table)) {
          auto x_1468 = UnSome(x_1466->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1468, x_1466, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2242(x_1464);
    MakeUnit();
    auto x_2243 = [&](const auto &x_1470) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1471) {
        if (IsSome(x_1470->meta->bb_2_bb_time_table)) {
          auto x_1472 = UnSome(x_1470->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1472, x_1470, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2243(x_1464);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_599(const auto &x_1474) {
  if (x_1474->has_prop_height) {
    return x_1474->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_597(const auto &x_1477) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1478) {
    auto x_2244 = [&](const auto &x_1479) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1480) {
        if (IsSome(x_1479->meta->bb_0_bb_time_table)) {
          auto x_1481 = UnSome(x_1479->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1481, x_1479, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2244(x_1477);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_594(const auto &x_1483) {
  if (x_1483->last != nullptr) {
    return plus((x_1483->last)->var_finished_intrinsic_height_sum, (x_1483->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_592(const auto &x_1492) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1493) {
    auto x_2245 = [&](const auto &x_1496) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1497) {
        if (IsSome(x_1496->meta->bb_0_bb_time_table)) {
          auto x_1498 = UnSome(x_1496->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1498, x_1496, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1492->next, [&](const auto &x_1495) { return MakeUnit(); },
        [&](const auto &x_1494) {
          auto x_2247 = x_2245;
          x_2247(x_1494);
          return MakeUnit();
        });
    auto x_2246 = [&](const auto &x_1502) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1503) {
        if (IsSome(x_1502->meta->bb_2_bb_time_table)) {
          auto x_1504 = UnSome(x_1502->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1504, x_1502, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1492->next == nullptr) {
      auto x_2248 = x_2246;
      OptionMatch(
          x_1492->parent, [&](const auto &x_1501) { return MakeUnit(); },
          [&](const auto &x_1500) {
            auto x_2249 = x_2248;
            x_2249(x_1500);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_589(const auto &x_1506) {
  return plus((x_1506->prev != nullptr) ? ((x_1506->prev)->var_intrinsic_width_sum) : (0.),
              x_1506->var_intrinsic_width_external);
}
Unit var_modified_x_587(const auto &x_1515) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1516) {
    auto x_2250 = [&](const auto &x_1519) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1520) {
        if (IsSome(x_1519->meta->bb_0_bb_time_table)) {
          auto x_1521 = UnSome(x_1519->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1521, x_1519, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    if (x_1515->next == nullptr) {
      auto x_2252 = x_2250;
      OptionMatch(
          x_1515->parent, [&](const auto &x_1518) { return MakeUnit(); },
          [&](const auto &x_1517) {
            auto x_2254 = x_2252;
            x_2254(x_1517);
            return MakeUnit();
          });
    }
    auto x_2251 = [&](const auto &x_1525) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1526) {
        if (IsSome(x_1525->meta->bb_0_bb_time_table)) {
          auto x_1527 = UnSome(x_1525->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1527, x_1525, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1515->next, [&](const auto &x_1524) { return MakeUnit(); },
        [&](const auto &x_1523) {
          auto x_2253 = x_2251;
          x_2253(x_1523);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_584(const auto &x_1529) {
  return max(x_1529->var_intrinsic_current_line_width,
             (x_1529->prev != nullptr) ? ((x_1529->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_582(const auto &x_1538) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1539) {
    auto x_2255 = [&](const auto &x_1540) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1541) {
        if (IsSome(x_1540->meta->bb_0_bb_time_table)) {
          auto x_1542 = UnSome(x_1540->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1542, x_1540, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2255(x_1538);
    MakeUnit();
    auto x_2256 = [&](const auto &x_1546) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1547) {
        if (IsSome(x_1546->meta->bb_0_bb_time_table)) {
          auto x_1548 = UnSome(x_1546->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1548, x_1546, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1538->next, [&](const auto &x_1545) { return MakeUnit(); },
        [&](const auto &x_1544) {
          auto x_2257 = x_2256;
          x_2257(x_1544);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_579(const auto &x_1550) {
  return plus(x_1550->var_intrinsic_width_external,
              ((x_1550->prev != nullptr) && (!(x_1550->prev)->var_line_break))
                  ? ((x_1550->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_577(const auto &x_1563) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1564) {
    auto x_2258 = [&](const auto &x_1565) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1566) {
        if (IsSome(x_1565->meta->bb_0_bb_time_table)) {
          auto x_1567 = UnSome(x_1565->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1567, x_1565, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2258(x_1563);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_574(const auto &x_1569) {
  if (eq(x_1569->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1569->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_572(const auto &x_1578) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1579) {
    auto x_2259 = [&](const auto &x_1580) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1581) {
        if (IsSome(x_1580->meta->bb_0_bb_time_table)) {
          auto x_1582 = UnSome(x_1580->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1582, x_1580, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2259(x_1578);
    MakeUnit();
    auto x_2260 = [&](const auto &x_1584) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1585) {
        if (IsSome(x_1584->meta->bb_2_bb_time_table)) {
          auto x_1586 = UnSome(x_1584->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1586, x_1584, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2260(x_1578);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_569(const auto &x_1588) {
  if (eq(x_1588->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1588->var_inside_svg) {
      return 0.;
    } else {
      if (x_1588->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1588->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1588->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1588->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1588->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1588->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1588->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1588->var_width_expr.r.a0;
          } else {
            return x_1588->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1588->var_children_intrinsic_width,
              (eq(x_1588->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1588->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1588->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1588->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1588->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1588->var_has_width_attr &&
                                                  (x_1588->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1588->var_width_attr_expr.r.a0)
                                                     : (((!x_1588->var_has_width_attr) && x_1588->has_attr_viewBox)
                                                            ? (x_1588->attr_viewBox.r.a2)
                                                            : (mult((x_1588->attr_viewBox.r.a2),
                                                                    divide(x_1588->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1588->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1588->var_has_width_attr)
                                                            ? (x_1588->var_width_attr_expr.r.a0)
                                                            : ((x_1588->has_attr_image_width &&
                                                                (!x_1588->var_has_height_attr))
                                                                   ? (int_to_float(x_1588->attr_image_width))
                                                                   : ((neq(x_1588->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1588->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1588->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1588->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1588->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1588->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_567(const auto &x_1741) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1742) {
    auto x_2261 = [&](const auto &x_1743) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1744) {
        if (IsSome(x_1743->meta->bb_0_bb_time_table)) {
          auto x_1745 = UnSome(x_1743->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1745, x_1743, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2261(x_1741);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_564(const auto &x_1747) {
  if (x_1747->last != nullptr) {
    return (x_1747->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_562(const auto &x_1752) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1753) {
    auto x_2262 = [&](const auto &x_1754) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1755) {
        if (IsSome(x_1754->meta->bb_2_bb_time_table)) {
          auto x_1756 = UnSome(x_1754->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1756, x_1754, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2262(x_1752);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_559(const auto &x_1758) {
  if (eq(x_1758->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1758->var_inside_svg || x_1758->var_disabled)) {
    return true;
  } else {
    if ((x_1758->parent != nullptr) && (x_1758->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1758->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1758->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1758->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1758->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1758->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_557(const auto &x_1807) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1808) {
    auto x_2263 = [&](const auto &x_1809) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1810) {
        if (IsSome(x_1809->meta->bb_0_bb_time_table)) {
          auto x_1811 = UnSome(x_1809->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1811, x_1809, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2263(x_1807);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_554(const auto &x_1813) {
  if (eq(x_1813->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1813->var_inside_svg) {
      return true;
    } else {
      if (x_1813->var_disabled) {
        return true;
      } else {if ( eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_1813->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_552(const auto &x_1826) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1827) {
    auto x_2264 = [&](const auto &x_1828) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1829) {
        if (IsSome(x_1828->meta->bb_0_bb_time_table)) {
          auto x_1830 = UnSome(x_1828->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1830, x_1828, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2264(x_1826);
    MakeUnit();
    auto x_2265 = [&](const auto &x_1832) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1833) {
        if (IsSome(x_1832->meta->bb_2_bb_time_table)) {
          auto x_1834 = UnSome(x_1832->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1834, x_1832, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2265(x_1826);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_549(const auto &x_1836) {
  if (x_1836->has_prop_width) {
    return x_1836->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_545(const auto &x_1839) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1840) {
    auto x_2266 = [&](const auto &x_1843) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1844) {
        if (IsSome(x_1843->meta->bb_2_bb_time_table)) {
          auto x_1845 = UnSome(x_1843->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1845, x_1843, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1839->next, [&](const auto &x_1842) { return MakeUnit(); },
        [&](const auto &x_1841) {
          auto x_2267 = x_2266;
          x_2267(x_1841);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_542(const auto &x_1847) {
  if ((x_1847->prev != nullptr) && (!(x_1847->prev)->var_line_break)) {
    return max(x_1847->var_height_external, (x_1847->prev)->var_line_height);
  } else {
    return x_1847->var_height_external;
  }
}
Unit var_modified_x_540(const auto &x_1864) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1865) {
    auto x_2268 = [&](const auto &x_1866) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1867) {
        if (IsSome(x_1866->meta->bb_2_bb_time_table)) {
          auto x_1868 = UnSome(x_1866->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1868, x_1866, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2268(x_1864);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_537(const auto &x_1870) {
  if (eq(x_1870->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1870->var_height_internal;
  }
}
Unit var_modified_x_535(const auto &x_1879) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1880) {
    auto x_2269 = [&](const auto &x_1881) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1882) {
        if (IsSome(x_1881->meta->bb_2_bb_time_table)) {
          auto x_1883 = UnSome(x_1881->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1883, x_1881, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2269(x_1879);
    MakeUnit();
    ListIter(x_1879->children, [&](const auto &x_1885) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1886) {
        if (IsSome(x_1885->meta->bb_2_bb_time_table)) {
          auto x_1887 = UnSome(x_1885->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1887, x_1885, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_532(const auto &x_1889) {
  if (x_1889->var_intrinsic_height_is_height) {
    return x_1889->var_intrinsic_height_internal;
  } else {
    if ((x_1889->parent != nullptr) && (x_1889->parent)->var_is_flex_column) {
      return plus(x_1889->var_intrinsic_height_internal,
                  mult(x_1889->var_flex_amount, (x_1889->parent)->var_flex_unit));
    } else {
      if (x_1889->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_1889->var_box_height, divide(x_1889->var_height_expr.r.a0, 100.));
      } else {
        return max(x_1889->var_box_height, x_1889->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_530(const auto &x_1942) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1943) {
    ListIter(x_1942->children, [&](const auto &x_1944) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1945) {
        if (IsSome(x_1944->meta->bb_2_bb_time_table)) {
          auto x_1946 = UnSome(x_1944->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1946, x_1944, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2270 = [&](const auto &x_1950) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1951) {
        if (IsSome(x_1950->meta->bb_2_bb_time_table)) {
          auto x_1952 = UnSome(x_1950->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1952, x_1950, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1942->next, [&](const auto &x_1949) { return MakeUnit(); },
        [&](const auto &x_1948) {
          auto x_2271 = x_2270;
          x_2271(x_1948);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_527(const auto &x_1954) {
  if (x_1954->prev != nullptr) {
    if (x_1954->var_line_break || (x_1954->prev)->var_line_break) {
      return plus((x_1954->prev)->var_y, (x_1954->prev)->var_line_height);
    } else {
      return (x_1954->prev)->var_y;
    }
  } else {
    if (x_1954->parent != nullptr) {
      return (x_1954->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_525(const auto &x_1979) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1980) {
    auto x_2272 = [&](const auto &x_1983) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1984) {
        if (IsSome(x_1983->meta->bb_2_bb_time_table)) {
          auto x_1985 = UnSome(x_1983->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_1985, x_1983, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_1979->next, [&](const auto &x_1982) { return MakeUnit(); },
        [&](const auto &x_1981) {
          auto x_2273 = x_2272;
          x_2273(x_1981);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_522(const auto &x_1987) {
  if (eq(x_1987->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1987->var_width_internal;
  }
}
Unit var_modified_x_520(const auto &x_1996) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1997) {
    auto x_2274 = [&](const auto &x_1998) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_1999) {
        if (IsSome(x_1998->meta->bb_2_bb_time_table)) {
          auto x_2000 = UnSome(x_1998->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2000, x_1998, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2274(x_1996);
    MakeUnit();
    ListIter(x_1996->children, [&](const auto &x_2002) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2003) {
        if (IsSome(x_2002->meta->bb_2_bb_time_table)) {
          auto x_2004 = UnSome(x_2002->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2004, x_2002, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_517(const auto &x_2006) {
  if (x_2006->var_intrinsic_width_is_width) {
    return x_2006->var_intrinsic_width_internal;
  } else {
    if ((x_2006->parent != nullptr) && (x_2006->parent)->var_is_flex_row) {
      return plus(x_2006->var_intrinsic_width_internal, mult(x_2006->var_flex_amount, (x_2006->parent)->var_flex_unit));
    } else {
      if (x_2006->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2006->var_box_width, divide(x_2006->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2006->var_box_width, x_2006->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_515(const auto &x_2059) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2060) {
    ListIter(x_2059->children, [&](const auto &x_2061) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2062) {
        if (IsSome(x_2061->meta->bb_2_bb_time_table)) {
          auto x_2063 = UnSome(x_2061->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2063, x_2061, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    auto x_2275 = [&](const auto &x_2067) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2068) {
        if (IsSome(x_2067->meta->bb_2_bb_time_table)) {
          auto x_2069 = UnSome(x_2067->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2069, x_2067, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    OptionMatch(
        x_2059->next, [&](const auto &x_2066) { return MakeUnit(); },
        [&](const auto &x_2065) {
          auto x_2276 = x_2275;
          x_2276(x_2065);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_512(const auto &x_2071) {
  if (x_2071->prev != nullptr) {
    if (x_2071->var_line_break || (x_2071->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2071->prev)->var_x, (x_2071->prev)->var_width_external);
    }
  } else {
    if (x_2071->parent != nullptr) {
      return (x_2071->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_510(const auto &x_2092) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2093) {
    ListIter(x_2092->children, [&](const auto &x_2094) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2095) {
        if (IsSome(x_2094->meta->bb_2_bb_time_table)) {
          auto x_2096 = UnSome(x_2094->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2096, x_2094, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_507(const auto &x_2098) {
  if (gt(x_2098->var_left_over, 0.)) {
    return divide(x_2098->var_left_over, x_2098->var_flex_grow_sum);
  } else {
    return divide(x_2098->var_left_over, x_2098->var_flex_shrink_sum);
  }
}
Unit var_modified_x_505(const auto &x_2119) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2120) {
    auto x_2277 = [&](const auto &x_2121) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2122) {
        if (IsSome(x_2121->meta->bb_2_bb_time_table)) {
          auto x_2123 = UnSome(x_2121->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2123, x_2121, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2277(x_2119);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_502(const auto &x_2125) {
  if ((x_2125->parent != nullptr) && gt((x_2125->parent)->var_left_over, 0.)) {
    return x_2125->var_flex_grow;
  } else {
    return x_2125->var_flex_shrink;
  }
}
Unit var_modified_x_500(const auto &x_2138) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2139) {
    auto x_2278 = [&](const auto &x_2140) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2141) {
        if (IsSome(x_2140->meta->bb_2_bb_time_table)) {
          auto x_2142 = UnSome(x_2140->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2142, x_2140, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2278(x_2138);
    MakeUnit();
    ListIter(x_2138->children, [&](const auto &x_2144) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2145) {
        if (IsSome(x_2144->meta->bb_2_bb_time_table)) {
          auto x_2146 = UnSome(x_2144->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2146, x_2144, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_497(const auto &x_2148) {
  if (x_2148->var_is_flex_row) {
    return minus(x_2148->var_box_width, (x_2148->last != nullptr) ? ((x_2148->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2148->var_box_height, (x_2148->last != nullptr) ? ((x_2148->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_495(const auto &x_2169) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2170) {
    auto x_2279 = [&](const auto &x_2171) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2172) {
        if (IsSome(x_2171->meta->bb_2_bb_time_table)) {
          auto x_2173 = UnSome(x_2171->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2173, x_2171, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2279(x_2169);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_492(const auto &x_2175) {
  if (x_2175->parent != nullptr) {
    return (x_2175->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_490(const auto &x_2180) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2181) {
    auto x_2280 = [&](const auto &x_2182) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2183) {
        if (IsSome(x_2182->meta->bb_2_bb_time_table)) {
          auto x_2184 = UnSome(x_2182->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_2184, x_2182, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    };
    x_2280(x_2180);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_487(const auto &x_2186) {
  if (x_2186->parent != nullptr) {
    return (x_2186->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_387(const auto &x_485) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_486) {
    WriteMetric();
    auto x_488 = eval_expr_x_487(x_485);
    if (x_485->has_var_box_width) {
      auto x_489 = x_485->var_box_width;
      if (!EqualValue(x_489, x_488)) {
        var_modified_x_490(x_485);
      }
    }
    x_485->has_var_box_width = true;
    x_485->var_box_width = Asdouble(x_488);
    WriteMetric();
    auto x_493 = eval_expr_x_492(x_485);
    if (x_485->has_var_box_height) {
      auto x_494 = x_485->var_box_height;
      if (!EqualValue(x_494, x_493)) {
        var_modified_x_495(x_485);
      }
    }
    x_485->has_var_box_height = true;
    x_485->var_box_height = Asdouble(x_493);
    WriteMetric();
    auto x_498 = eval_expr_x_497(x_485);
    if (x_485->has_var_left_over) {
      auto x_499 = x_485->var_left_over;
      if (!EqualValue(x_499, x_498)) {
        var_modified_x_500(x_485);
      }
    }
    x_485->has_var_left_over = true;
    x_485->var_left_over = Asdouble(x_498);
    WriteMetric();
    auto x_503 = eval_expr_x_502(x_485);
    if (x_485->has_var_flex_amount) {
      auto x_504 = x_485->var_flex_amount;
      if (!EqualValue(x_504, x_503)) {
        var_modified_x_505(x_485);
      }
    }
    x_485->has_var_flex_amount = true;
    x_485->var_flex_amount = Asdouble(x_503);
    WriteMetric();
    auto x_508 = eval_expr_x_507(x_485);
    if (x_485->has_var_flex_unit) {
      auto x_509 = x_485->var_flex_unit;
      if (!EqualValue(x_509, x_508)) {
        var_modified_x_510(x_485);
      }
    }
    x_485->has_var_flex_unit = true;
    x_485->var_flex_unit = Asdouble(x_508);
    WriteMetric();
    auto x_513 = eval_expr_x_512(x_485);
    if (x_485->has_var_x) {
      auto x_514 = x_485->var_x;
      if (!EqualValue(x_514, x_513)) {
        var_modified_x_515(x_485);
      }
    }
    x_485->has_var_x = true;
    x_485->var_x = Asdouble(x_513);
    WriteMetric();
    auto x_518 = eval_expr_x_517(x_485);
    if (x_485->has_var_width_internal) {
      auto x_519 = x_485->var_width_internal;
      if (!EqualValue(x_519, x_518)) {
        var_modified_x_520(x_485);
      }
    }
    x_485->has_var_width_internal = true;
    x_485->var_width_internal = Asdouble(x_518);
    WriteMetric();
    auto x_523 = eval_expr_x_522(x_485);
    if (x_485->has_var_width_external) {
      auto x_524 = x_485->var_width_external;
      if (!EqualValue(x_524, x_523)) {
        var_modified_x_525(x_485);
      }
    }
    x_485->has_var_width_external = true;
    x_485->var_width_external = Asdouble(x_523);
    WriteMetric();
    auto x_528 = eval_expr_x_527(x_485);
    if (x_485->has_var_y) {
      auto x_529 = x_485->var_y;
      if (!EqualValue(x_529, x_528)) {
        var_modified_x_530(x_485);
      }
    }
    x_485->has_var_y = true;
    x_485->var_y = Asdouble(x_528);
    WriteMetric();
    auto x_533 = eval_expr_x_532(x_485);
    if (x_485->has_var_height_internal) {
      auto x_534 = x_485->var_height_internal;
      if (!EqualValue(x_534, x_533)) {
        var_modified_x_535(x_485);
      }
    }
    x_485->has_var_height_internal = true;
    x_485->var_height_internal = Asdouble(x_533);
    WriteMetric();
    auto x_538 = eval_expr_x_537(x_485);
    if (x_485->has_var_height_external) {
      auto x_539 = x_485->var_height_external;
      if (!EqualValue(x_539, x_538)) {
        var_modified_x_540(x_485);
      }
    }
    x_485->has_var_height_external = true;
    x_485->var_height_external = Asdouble(x_538);
    WriteMetric();
    auto x_543 = eval_expr_x_542(x_485);
    if (x_485->has_var_line_height) {
      auto x_544 = x_485->var_line_height;
      if (!EqualValue(x_544, x_543)) {
        var_modified_x_545(x_485);
      }
    }
    x_485->has_var_line_height = true;
    x_485->var_line_height = Asdouble(x_543);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_386(const auto &x_547) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_548) {
    WriteMetric();
    auto x_550 = eval_expr_x_549(x_547);
    if (x_547->has_var_width_expr) {
      auto x_551 = x_547->var_width_expr;
      if (!EqualValue(x_551, x_550)) {
        var_modified_x_552(x_547);
      }
    }
    x_547->has_var_width_expr = true;
    x_547->var_width_expr = AsDEString(x_550);
    WriteMetric();
    auto x_555 = eval_expr_x_554(x_547);
    if (x_547->has_var_is_default_case) {
      auto x_556 = x_547->var_is_default_case;
      if (!EqualValue(x_556, x_555)) {
        var_modified_x_557(x_547);
      }
    }
    x_547->has_var_is_default_case = true;
    x_547->var_is_default_case = Asbool(x_555);
    WriteMetric();
    auto x_560 = eval_expr_x_559(x_547);
    if (x_547->has_var_intrinsic_width_is_width) {
      auto x_561 = x_547->var_intrinsic_width_is_width;
      if (!EqualValue(x_561, x_560)) {
        var_modified_x_562(x_547);
      }
    }
    x_547->has_var_intrinsic_width_is_width = true;
    x_547->var_intrinsic_width_is_width = Asbool(x_560);
    WriteMetric();
    auto x_565 = eval_expr_x_564(x_547);
    if (x_547->has_var_children_intrinsic_width) {
      auto x_566 = x_547->var_children_intrinsic_width;
      if (!EqualValue(x_566, x_565)) {
        var_modified_x_567(x_547);
      }
    }
    x_547->has_var_children_intrinsic_width = true;
    x_547->var_children_intrinsic_width = Asdouble(x_565);
    WriteMetric();
    auto x_570 = eval_expr_x_569(x_547);
    if (x_547->has_var_intrinsic_width_internal) {
      auto x_571 = x_547->var_intrinsic_width_internal;
      if (!EqualValue(x_571, x_570)) {
        var_modified_x_572(x_547);
      }
    }
    x_547->has_var_intrinsic_width_internal = true;
    x_547->var_intrinsic_width_internal = Asdouble(x_570);
    WriteMetric();
    auto x_575 = eval_expr_x_574(x_547);
    if (x_547->has_var_intrinsic_width_external) {
      auto x_576 = x_547->var_intrinsic_width_external;
      if (!EqualValue(x_576, x_575)) {
        var_modified_x_577(x_547);
      }
    }
    x_547->has_var_intrinsic_width_external = true;
    x_547->var_intrinsic_width_external = Asdouble(x_575);
    WriteMetric();
    auto x_580 = eval_expr_x_579(x_547);
    if (x_547->has_var_intrinsic_current_line_width) {
      auto x_581 = x_547->var_intrinsic_current_line_width;
      if (!EqualValue(x_581, x_580)) {
        var_modified_x_582(x_547);
      }
    }
    x_547->has_var_intrinsic_current_line_width = true;
    x_547->var_intrinsic_current_line_width = Asdouble(x_580);
    WriteMetric();
    auto x_585 = eval_expr_x_584(x_547);
    if (x_547->has_var_intrinsic_width_max) {
      auto x_586 = x_547->var_intrinsic_width_max;
      if (!EqualValue(x_586, x_585)) {
        var_modified_x_587(x_547);
      }
    }
    x_547->has_var_intrinsic_width_max = true;
    x_547->var_intrinsic_width_max = Asdouble(x_585);
    WriteMetric();
    auto x_590 = eval_expr_x_589(x_547);
    if (x_547->has_var_intrinsic_width_sum) {
      auto x_591 = x_547->var_intrinsic_width_sum;
      if (!EqualValue(x_591, x_590)) {
        var_modified_x_592(x_547);
      }
    }
    x_547->has_var_intrinsic_width_sum = true;
    x_547->var_intrinsic_width_sum = Asdouble(x_590);
    WriteMetric();
    auto x_595 = eval_expr_x_594(x_547);
    if (x_547->has_var_children_intrinsic_height) {
      auto x_596 = x_547->var_children_intrinsic_height;
      if (!EqualValue(x_596, x_595)) {
        var_modified_x_597(x_547);
      }
    }
    x_547->has_var_children_intrinsic_height = true;
    x_547->var_children_intrinsic_height = Asdouble(x_595);
    WriteMetric();
    auto x_600 = eval_expr_x_599(x_547);
    if (x_547->has_var_height_expr) {
      auto x_601 = x_547->var_height_expr;
      if (!EqualValue(x_601, x_600)) {
        var_modified_x_602(x_547);
      }
    }
    x_547->has_var_height_expr = true;
    x_547->var_height_expr = AsDEString(x_600);
    WriteMetric();
    auto x_605 = eval_expr_x_604(x_547);
    if (x_547->has_var_intrinsic_height_is_height) {
      auto x_606 = x_547->var_intrinsic_height_is_height;
      if (!EqualValue(x_606, x_605)) {
        var_modified_x_607(x_547);
      }
    }
    x_547->has_var_intrinsic_height_is_height = true;
    x_547->var_intrinsic_height_is_height = Asbool(x_605);
    WriteMetric();
    auto x_610 = eval_expr_x_609(x_547);
    if (x_547->has_var_intrinsic_height_internal) {
      auto x_611 = x_547->var_intrinsic_height_internal;
      if (!EqualValue(x_611, x_610)) {
        var_modified_x_612(x_547);
      }
    }
    x_547->has_var_intrinsic_height_internal = true;
    x_547->var_intrinsic_height_internal = Asdouble(x_610);
    WriteMetric();
    auto x_615 = eval_expr_x_614(x_547);
    if (x_547->has_var_intrinsic_height_external) {
      auto x_616 = x_547->var_intrinsic_height_external;
      if (!EqualValue(x_616, x_615)) {
        var_modified_x_617(x_547);
      }
    }
    x_547->has_var_intrinsic_height_external = true;
    x_547->var_intrinsic_height_external = Asdouble(x_615);
    WriteMetric();
    auto x_620 = eval_expr_x_619(x_547);
    if (x_547->has_var_intrinsic_height_sum) {
      auto x_621 = x_547->var_intrinsic_height_sum;
      if (!EqualValue(x_621, x_620)) {
        var_modified_x_622(x_547);
      }
    }
    x_547->has_var_intrinsic_height_sum = true;
    x_547->var_intrinsic_height_sum = Asdouble(x_620);
    WriteMetric();
    auto x_625 = eval_expr_x_624(x_547);
    if (x_547->has_var_intrinsic_current_line_height) {
      auto x_626 = x_547->var_intrinsic_current_line_height;
      if (!EqualValue(x_626, x_625)) {
        var_modified_x_627(x_547);
      }
    }
    x_547->has_var_intrinsic_current_line_height = true;
    x_547->var_intrinsic_current_line_height = Asdouble(x_625);
    WriteMetric();
    auto x_630 = eval_expr_x_629(x_547);
    if (x_547->has_var_finished_intrinsic_height_sum) {
      auto x_631 = x_547->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_631, x_630)) {
        var_modified_x_632(x_547);
      }
    }
    x_547->has_var_finished_intrinsic_height_sum = true;
    x_547->var_finished_intrinsic_height_sum = Asdouble(x_630);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_385(const auto &x_634) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_635) {
    WriteMetric();
    auto x_637 = eval_expr_x_636(x_634);
    if (x_634->has_var_display) {
      auto x_638 = x_634->var_display;
      if (!EqualValue(x_638, x_637)) {
        var_modified_x_639(x_634);
      }
    }
    x_634->has_var_display = true;
    x_634->var_display = AsDEString(x_637);
    WriteMetric();
    auto x_642 = eval_expr_x_641(x_634);
    if (x_634->has_var_position) {
      auto x_643 = x_634->var_position;
      if (!EqualValue(x_643, x_642)) {
        var_modified_x_644(x_634);
      }
    }
    x_634->has_var_position = true;
    x_634->var_position = AsDEString(x_642);
    WriteMetric();
    auto x_647 = eval_expr_x_646(x_634);
    if (x_634->has_var_flex_grow) {
      auto x_648 = x_634->var_flex_grow;
      if (!EqualValue(x_648, x_647)) {
        var_modified_x_649(x_634);
      }
    }
    x_634->has_var_flex_grow = true;
    x_634->var_flex_grow = Asdouble(x_647);
    WriteMetric();
    auto x_652 = eval_expr_x_651(x_634);
    if (x_634->has_var_flex_shrink) {
      auto x_653 = x_634->var_flex_shrink;
      if (!EqualValue(x_653, x_652)) {
        var_modified_x_654(x_634);
      }
    }
    x_634->has_var_flex_shrink = true;
    x_634->var_flex_shrink = Asdouble(x_652);
    WriteMetric();
    auto x_657 = eval_expr_x_656(x_634);
    if (x_634->has_var_flex_grow_sum) {
      auto x_658 = x_634->var_flex_grow_sum;
      if (!EqualValue(x_658, x_657)) {
        var_modified_x_659(x_634);
      }
    }
    x_634->has_var_flex_grow_sum = true;
    x_634->var_flex_grow_sum = Asdouble(x_657);
    WriteMetric();
    auto x_662 = eval_expr_x_661(x_634);
    if (x_634->has_var_flex_shrink_sum) {
      auto x_663 = x_634->var_flex_shrink_sum;
      if (!EqualValue(x_663, x_662)) {
        var_modified_x_664(x_634);
      }
    }
    x_634->has_var_flex_shrink_sum = true;
    x_634->var_flex_shrink_sum = Asdouble(x_662);
    WriteMetric();
    auto x_667 = eval_expr_x_666(x_634);
    if (x_634->has_var_flex_direction) {
      auto x_668 = x_634->var_flex_direction;
      if (!EqualValue(x_668, x_667)) {
        var_modified_x_669(x_634);
      }
    }
    x_634->has_var_flex_direction = true;
    x_634->var_flex_direction = AsDEString(x_667);
    WriteMetric();
    auto x_672 = eval_expr_x_671(x_634);
    if (x_634->has_var_is_flex_row) {
      auto x_673 = x_634->var_is_flex_row;
      if (!EqualValue(x_673, x_672)) {
        var_modified_x_674(x_634);
      }
    }
    x_634->has_var_is_flex_row = true;
    x_634->var_is_flex_row = Asbool(x_672);
    WriteMetric();
    auto x_677 = eval_expr_x_676(x_634);
    if (x_634->has_var_is_flex_column) {
      auto x_678 = x_634->var_is_flex_column;
      if (!EqualValue(x_678, x_677)) {
        var_modified_x_679(x_634);
      }
    }
    x_634->has_var_is_flex_column = true;
    x_634->var_is_flex_column = Asbool(x_677);
    WriteMetric();
    auto x_682 = eval_expr_x_681(x_634);
    if (x_634->has_var_width_attr_expr) {
      auto x_683 = x_634->var_width_attr_expr;
      if (!EqualValue(x_683, x_682)) {
        var_modified_x_684(x_634);
      }
    }
    x_634->has_var_width_attr_expr = true;
    x_634->var_width_attr_expr = AsDEString(x_682);
    WriteMetric();
    auto x_687 = eval_expr_x_686(x_634);
    if (x_634->has_var_has_width_attr) {
      auto x_688 = x_634->var_has_width_attr;
      if (!EqualValue(x_688, x_687)) {
        var_modified_x_689(x_634);
      }
    }
    x_634->has_var_has_width_attr = true;
    x_634->var_has_width_attr = Asbool(x_687);
    WriteMetric();
    auto x_692 = eval_expr_x_691(x_634);
    if (x_634->has_var_height_attr_expr) {
      auto x_693 = x_634->var_height_attr_expr;
      if (!EqualValue(x_693, x_692)) {
        var_modified_x_694(x_634);
      }
    }
    x_634->has_var_height_attr_expr = true;
    x_634->var_height_attr_expr = AsDEString(x_692);
    WriteMetric();
    auto x_697 = eval_expr_x_696(x_634);
    if (x_634->has_var_has_height_attr) {
      auto x_698 = x_634->var_has_height_attr;
      if (!EqualValue(x_698, x_697)) {
        var_modified_x_699(x_634);
      }
    }
    x_634->has_var_has_height_attr = true;
    x_634->var_has_height_attr = Asbool(x_697);
    WriteMetric();
    auto x_702 = eval_expr_x_701(x_634);
    if (x_634->has_var_is_svg_block) {
      auto x_703 = x_634->var_is_svg_block;
      if (!EqualValue(x_703, x_702)) {
        var_modified_x_704(x_634);
      }
    }
    x_634->has_var_is_svg_block = true;
    x_634->var_is_svg_block = Asbool(x_702);
    WriteMetric();
    auto x_707 = eval_expr_x_706(x_634);
    if (x_634->has_var_inside_svg) {
      auto x_708 = x_634->var_inside_svg;
      if (!EqualValue(x_708, x_707)) {
        var_modified_x_709(x_634);
      }
    }
    x_634->has_var_inside_svg = true;
    x_634->var_inside_svg = Asbool(x_707);
    WriteMetric();
    auto x_712 = eval_expr_x_711(x_634);
    if (x_634->has_var_disabled) {
      auto x_713 = x_634->var_disabled;
      if (!EqualValue(x_713, x_712)) {
        var_modified_x_714(x_634);
      }
    }
    x_634->has_var_disabled = true;
    x_634->var_disabled = Asbool(x_712);
    WriteMetric();
    auto x_717 = eval_expr_x_716(x_634);
    if (x_634->has_var_visible) {
      auto x_718 = x_634->var_visible;
      if (!EqualValue(x_718, x_717)) {
        var_modified_x_719(x_634);
      }
    }
    x_634->has_var_visible = true;
    x_634->var_visible = Asbool(x_717);
    WriteMetric();
    auto x_722 = eval_expr_x_721(x_634);
    if (x_634->has_var_line_break) {
      auto x_723 = x_634->var_line_break;
      if (!EqualValue(x_723, x_722)) {
        var_modified_x_724(x_634);
      }
    }
    x_634->has_var_line_break = true;
    x_634->var_line_break = Asbool(x_722);
    return MakeUnit();
  })));
}
Unit x_46(const auto &x_47, const auto &x_48, const auto &x_49) {
  auto x_50 = ListHeadExn(x_47);
  auto x_51 = ListTailExn(x_47);
  if (ListIsEmpty(x_51)) {
    auto x_52 = ListSplitN(x_48->children, x_50);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_48->children, x_50)), layout_size_x_3(x_49)));
    x_48->children = ListAppend(Zro(x_52), Cons(x_49, ListTailExn(Fst(x_52))));
    return MakeUnit();
  } else {
    return x_46(x_51, ListNthExn(x_48->children, x_50), x_49);
  }
}
Unit replace_layout_node_x_45(const auto &x_47, const auto &x_48, const auto &x_49) { return x_46(x_47, x_48, x_49); }
Unit x_53(const auto &x_54, const auto &x_55, const auto &x_56) {
  auto x_57 = ListHeadExn(x_54);
  auto x_58 = ListTailExn(x_54);
  if (ListIsEmpty(x_58)) {
    OutputChangeMetric(layout_size_x_3(x_56));
    auto x_59 = ListSplitN(x_55->children, x_57);
    x_55->children = ListAppend(Zro(x_59), Cons(x_56, Fst(x_59)));
    return MakeUnit();
  } else {
    return x_53(x_58, ListNthExn(x_55->children, x_57), x_56);
  }
}
Unit add_layout_node_x_43(const auto &x_54, const auto &x_55, const auto &x_56) { return x_53(x_54, x_55, x_56); }
Unit x_60(const auto &x_61, const auto &x_62, const auto &x_63) {
  auto x_64 = ListHeadExn(x_61);
  auto x_65 = ListTailExn(x_61);
  if (ListIsEmpty(x_65)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_62->children, x_64)));
    auto x_66 = ListSplitN(x_62->children, x_64);
    x_62->children = ListAppend(Zro(x_66), ListTailExn(Fst(x_66)));
    return MakeUnit();
  } else {
    return x_60(x_65, ListNthExn(x_62->children, x_64), x_63);
  }
}
Unit remove_layout_node_x_41(const auto &x_61, const auto &x_62, const auto &x_63) { return x_60(x_61, x_62, x_63); }
Unit x_67(const auto &x_68, const auto &x_69, const auto &x_70) {
  return ListMatch(
      x_68,
      [&](const auto &x_73) {
        auto x_74 = Zro(x_70);
        auto x_75 = Zro(x_74);
        auto x_76 = Fst(x_74);
        auto x_77 = Fst(x_70);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2281 = x_75;
        if (x_2281 == "attributes") {
          std::string x_2282 = x_76;
          if (x_2282 == "width") {
            WriteMetric();
            x_69->has_attr_width = true;
            x_69->attr_width = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_78) {
              if (IsSome(x_69->meta->bb_1_bb_time_table)) {
                auto x_79 = UnSome(x_69->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_79, x_69, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "image_height") {
            WriteMetric();
            x_69->has_attr_image_height = true;
            x_69->attr_image_height = Asint64_t(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_81) {
              if (IsSome(x_69->meta->bb_0_bb_time_table)) {
                auto x_82 = UnSome(x_69->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_82, x_69, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "image_width") {
            WriteMetric();
            x_69->has_attr_image_width = true;
            x_69->attr_image_width = Asint64_t(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_84) {
              if (IsSome(x_69->meta->bb_0_bb_time_table)) {
                auto x_85 = UnSome(x_69->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_85, x_69, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "height") {
            WriteMetric();
            x_69->has_attr_height = true;
            x_69->attr_height = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_87) {
              if (IsSome(x_69->meta->bb_1_bb_time_table)) {
                auto x_88 = UnSome(x_69->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_88, x_69, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2282 == "viewBox") {
            WriteMetric();
            x_69->has_attr_viewBox = true;
            x_69->attr_viewBox = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_90) {
              if (IsSome(x_69->meta->bb_0_bb_time_table)) {
                auto x_91 = UnSome(x_69->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_91, x_69, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2281 == "properties") {
          std::string x_2283 = x_76;
          if (x_2283 == "width") {
            WriteMetric();
            x_69->has_prop_width = true;
            x_69->prop_width = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_93) {
              if (IsSome(x_69->meta->bb_0_bb_time_table)) {
                auto x_94 = UnSome(x_69->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_94, x_69, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "flex-grow") {
            WriteMetric();
            x_69->has_prop_flex_grow = true;
            x_69->prop_flex_grow = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_96) {
              if (IsSome(x_69->meta->bb_1_bb_time_table)) {
                auto x_97 = UnSome(x_69->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_97, x_69, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "height") {
            WriteMetric();
            x_69->has_prop_height = true;
            x_69->prop_height = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_99) {
              if (IsSome(x_69->meta->bb_0_bb_time_table)) {
                auto x_100 = UnSome(x_69->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_100, x_69, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "display") {
            WriteMetric();
            x_69->has_prop_display = true;
            x_69->prop_display = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_102) {
              if (IsSome(x_69->meta->bb_1_bb_time_table)) {
                auto x_103 = UnSome(x_69->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_103, x_69, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "position") {
            WriteMetric();
            x_69->has_prop_position = true;
            x_69->prop_position = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_105) {
              if (IsSome(x_69->meta->bb_1_bb_time_table)) {
                auto x_106 = UnSome(x_69->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_106, x_69, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "flex-shrink") {
            WriteMetric();
            x_69->has_prop_flex_shrink = true;
            x_69->prop_flex_shrink = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_108) {
              if (IsSome(x_69->meta->bb_1_bb_time_table)) {
                auto x_109 = UnSome(x_69->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_109, x_69, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2283 == "flex-direction") {
            WriteMetric();
            x_69->has_prop_flex_direction = true;
            x_69->prop_flex_direction = AsDEString(x_77);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_111) {
              if (IsSome(x_69->meta->bb_1_bb_time_table)) {
                auto x_112 = UnSome(x_69->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_112, x_69, static_cast<int64_t>(0));
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
      [&](const auto &x_71, const auto &x_72) { return x_67(x_72, ListNthExn(x_69->children, x_71), x_70); });
}
Unit insert_value_x_39(const auto &x_68, const auto &x_69, const auto &x_70) { return x_67(x_68, x_69, x_70); }
Unit x_114(const auto &x_115, const auto &x_116, const auto &x_117) {
  return ListMatch(
      x_115,
      [&](const auto &x_120) {
        auto x_121 = Zro(x_117);
        auto x_122 = Fst(x_117);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2284 = x_121;
        if (x_2284 == "attributes") {
          std::string x_2285 = x_122;
          if (x_2285 == "width") {
            WriteMetric();
            x_116->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_123) {
              if (IsSome(x_116->meta->bb_1_bb_time_table)) {
                auto x_124 = UnSome(x_116->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_124, x_116, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "image_height") {
            WriteMetric();
            x_116->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_126) {
              if (IsSome(x_116->meta->bb_0_bb_time_table)) {
                auto x_127 = UnSome(x_116->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_127, x_116, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "image_width") {
            WriteMetric();
            x_116->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_129) {
              if (IsSome(x_116->meta->bb_0_bb_time_table)) {
                auto x_130 = UnSome(x_116->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_130, x_116, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "height") {
            WriteMetric();
            x_116->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_132) {
              if (IsSome(x_116->meta->bb_1_bb_time_table)) {
                auto x_133 = UnSome(x_116->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_133, x_116, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2285 == "viewBox") {
            WriteMetric();
            x_116->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_135) {
              if (IsSome(x_116->meta->bb_0_bb_time_table)) {
                auto x_136 = UnSome(x_116->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_136, x_116, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2284 == "properties") {
          std::string x_2286 = x_122;
          if (x_2286 == "width") {
            WriteMetric();
            x_116->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_138) {
              if (IsSome(x_116->meta->bb_0_bb_time_table)) {
                auto x_139 = UnSome(x_116->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_139, x_116, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "flex-grow") {
            WriteMetric();
            x_116->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_141) {
              if (IsSome(x_116->meta->bb_1_bb_time_table)) {
                auto x_142 = UnSome(x_116->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_142, x_116, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "height") {
            WriteMetric();
            x_116->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_144) {
              if (IsSome(x_116->meta->bb_0_bb_time_table)) {
                auto x_145 = UnSome(x_116->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_145, x_116, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "display") {
            WriteMetric();
            x_116->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_147) {
              if (IsSome(x_116->meta->bb_1_bb_time_table)) {
                auto x_148 = UnSome(x_116->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_148, x_116, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "position") {
            WriteMetric();
            x_116->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_150) {
              if (IsSome(x_116->meta->bb_1_bb_time_table)) {
                auto x_151 = UnSome(x_116->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_151, x_116, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "flex-shrink") {
            WriteMetric();
            x_116->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_153) {
              if (IsSome(x_116->meta->bb_1_bb_time_table)) {
                auto x_154 = UnSome(x_116->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_154, x_116, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2286 == "flex-direction") {
            WriteMetric();
            x_116->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_156) {
              if (IsSome(x_116->meta->bb_1_bb_time_table)) {
                auto x_157 = UnSome(x_116->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_157, x_116, static_cast<int64_t>(0));
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
      [&](const auto &x_118, const auto &x_119) { return x_114(x_119, ListNthExn(x_116->children, x_118), x_117); });
}
Unit delete_value_x_37(const auto &x_115, const auto &x_116, const auto &x_117) { return x_114(x_115, x_116, x_117); }
Unit x_159(const auto &x_160, const auto &x_161, const auto &x_162) {
  return ListMatch(
      x_160,
      [&](const auto &x_165) {
        auto x_166 = Zro(x_162);
        auto x_167 = Zro(x_166);
        auto x_168 = Fst(x_166);
        auto x_169 = Fst(x_162);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_2287 = x_167;
        if (x_2287 == "attributes") {
          std::string x_2288 = x_168;
          if (x_2288 == "width") {
            WriteMetric();
            x_161->has_attr_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_170) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_171 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_171, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_attr_width = true;
            x_161->attr_width = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_173) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_174 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_174, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2288 == "image_height") {
            WriteMetric();
            x_161->has_attr_image_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_176) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_177 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_177, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_attr_image_height = true;
            x_161->attr_image_height = Asint64_t(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_179) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_180 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_180, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2288 == "image_width") {
            WriteMetric();
            x_161->has_attr_image_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_182) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_183 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_183, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_attr_image_width = true;
            x_161->attr_image_width = Asint64_t(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_185) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_186 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_186, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2288 == "height") {
            WriteMetric();
            x_161->has_attr_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_188) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_189 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_189, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_attr_height = true;
            x_161->attr_height = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_191) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_192 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_192, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2288 == "viewBox") {
            WriteMetric();
            x_161->has_attr_viewBox = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_194) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_195 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_195, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_attr_viewBox = true;
            x_161->attr_viewBox = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_197) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_198 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_198, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_2287 == "properties") {
          std::string x_2289 = x_168;
          if (x_2289 == "width") {
            WriteMetric();
            x_161->has_prop_width = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_200) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_201 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_201, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_prop_width = true;
            x_161->prop_width = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_203) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_204 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_204, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2289 == "flex-grow") {
            WriteMetric();
            x_161->has_prop_flex_grow = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_206) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_207 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_207, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_prop_flex_grow = true;
            x_161->prop_flex_grow = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_209) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_210 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_210, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2289 == "height") {
            WriteMetric();
            x_161->has_prop_height = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_212) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_213 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_213, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_prop_height = true;
            x_161->prop_height = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_215) {
              if (IsSome(x_161->meta->bb_0_bb_time_table)) {
                auto x_216 = UnSome(x_161->meta->bb_0_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_216, x_161, static_cast<int64_t>(1));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2289 == "display") {
            WriteMetric();
            x_161->has_prop_display = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_218) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_219 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_219, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_prop_display = true;
            x_161->prop_display = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_221) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_222 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_222, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2289 == "position") {
            WriteMetric();
            x_161->has_prop_position = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_224) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_225 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_225, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_prop_position = true;
            x_161->prop_position = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_227) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_228 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_228, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2289 == "flex-shrink") {
            WriteMetric();
            x_161->has_prop_flex_shrink = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_230) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_231 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_231, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_prop_flex_shrink = true;
            x_161->prop_flex_shrink = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_233) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_234 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_234, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            return MakeUnit();
          } else if (x_2289 == "flex-direction") {
            WriteMetric();
            x_161->has_prop_flex_direction = false;
            MetricRecordOverhead(Zro(Timed([&](const auto &x_236) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_237 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_237, x_161, static_cast<int64_t>(0));
              } else {
                return MakeUnit();
              }
            })));
            WriteMetric();
            x_161->has_prop_flex_direction = true;
            x_161->prop_flex_direction = AsDEString(x_169);
            MetricRecordOverhead(Zro(Timed([&](const auto &x_239) {
              if (IsSome(x_161->meta->bb_1_bb_time_table)) {
                auto x_240 = UnSome(x_161->meta->bb_1_bb_time_table);
                MetaWriteMetric();
                return QueuePush(x_240, x_161, static_cast<int64_t>(0));
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
      [&](const auto &x_163, const auto &x_164) { return x_159(x_164, ListNthExn(x_161->children, x_163), x_162); });
}
Unit replace_value_x_35(const auto &x_160, const auto &x_161, const auto &x_162) { return x_159(x_160, x_161, x_162); }
Unit x_242(const auto &x_243, const auto &x_244, const auto &x_245) {
  auto x_246 = ListHeadExn(x_243);
  auto x_247 = ListTailExn(x_243);
  if (ListIsEmpty(x_247)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_244->children, x_246)), node_size_x_4(x_245)));
    auto x_248 = ListSplitN(x_244->children, x_246);
    auto x_249 = Zro(x_248);
    auto x_250 = Fst(x_248);
    auto x_251 = ListHeadExn(x_250);
    auto x_252 = ListTailExn(x_250);
    x_244->children = ListAppend(x_249, x_252);
    x_251->meta->alive = false;
    OptionMatch(
        x_251->prev, [&](const auto &x_254) { return MakeUnit(); },
        [&](const auto &x_253) {
          x_253->next = ToPath(x_251->next);
          return MakeUnit();
        });
    OptionMatch(
        x_251->next, [&](const auto &x_256) { return MakeUnit(); },
        [&](const auto &x_255) {
          x_255->prev = ToPath(x_251->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_249)) {
      x_244->first = ToPath(ListHead(x_252));
    }
    if (ListIsEmpty(x_252)) {
      x_244->last = ToPath(ListLast(x_249));
    }
    OptionMatch(
        x_251->next, [&](const auto &x_261) { return MakeUnit(); },
        [&](const auto &x_257) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_258) {
            if (IsSome(x_257->meta->bb_1_bb_time_table)) {
              auto x_259 = UnSome(x_257->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_259, x_257, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_244->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_262) {
        if (IsSome(x_244->meta->bb_0_bb_time_table)) {
          auto x_263 = UnSome(x_244->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_263, x_244, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_252)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_265) {
        if (IsSome(x_244->meta->bb_0_bb_time_table)) {
          auto x_266 = UnSome(x_244->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_266, x_244, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_251->next, [&](const auto &x_272) { return MakeUnit(); },
        [&](const auto &x_268) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_269) {
            if (IsSome(x_268->meta->bb_0_bb_time_table)) {
              auto x_270 = UnSome(x_268->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_270, x_268, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_244->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_273) {
        if (IsSome(x_244->meta->bb_2_bb_time_table)) {
          auto x_274 = UnSome(x_244->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_274, x_244, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_252)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_276) {
        if (IsSome(x_244->meta->bb_2_bb_time_table)) {
          auto x_277 = UnSome(x_244->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_277, x_244, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_251->next, [&](const auto &x_283) { return MakeUnit(); },
        [&](const auto &x_279) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_280) {
            if (IsSome(x_279->meta->bb_2_bb_time_table)) {
              auto x_281 = UnSome(x_279->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_281, x_279, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    auto x_284 = ListSplitN(x_244->children, x_246);
    auto x_285 = Zro(x_284);
    auto x_286 = Fst(x_284);
    x_244->children = ListAppend(x_285, Cons(x_245, x_286));
    if (ListIsEmpty(x_285)) {
      x_244->first = x_245.get();
    }
    if (ListIsEmpty(x_286)) {
      x_244->last = x_245.get();
    }
    OptionMatch(
        ListLast(x_285),
        [&](const auto &x_288) {
          x_245->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_287) {
          x_245->prev = x_287.get();
          x_287->next = x_245.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_286),
        [&](const auto &x_290) {
          x_245->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_289) {
          x_245->next = x_289.get();
          x_289->prev = x_245.get();
          return MakeUnit();
        });
    x_245->parent = x_244.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_291) {
      auto x_292 = (x_245->parent);
      if (IsSome(x_292->meta->pass_0_proc_time_table)) {
        auto x_295 = OptionMatch(
            x_245->prev, [&](const auto &x_294) { return NextTotalOrder(UnSome(x_292->meta->bb_1_bb_time_table)); },
            [&](const auto &x_293) { return NextTotalOrder(UnSome(x_293->meta->pass_0_proc_time_table)); });
        x_245->meta->pass_0_proc_time_table = x_295;
        MetaWriteMetric();
        return QueueForcePush(x_295, x_245, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_245->next, [&](const auto &x_301) { return MakeUnit(); },
        [&](const auto &x_297) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_298) {
            if (IsSome(x_297->meta->bb_1_bb_time_table)) {
              auto x_299 = UnSome(x_297->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_299, x_297, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_244->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_302) {
        if (IsSome(x_244->meta->bb_0_bb_time_table)) {
          auto x_303 = UnSome(x_244->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_303, x_244, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_286)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_305) {
        if (IsSome(x_244->meta->bb_0_bb_time_table)) {
          auto x_306 = UnSome(x_244->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_306, x_244, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_245->next, [&](const auto &x_312) { return MakeUnit(); },
        [&](const auto &x_308) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_309) {
            if (IsSome(x_308->meta->bb_0_bb_time_table)) {
              auto x_310 = UnSome(x_308->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_310, x_308, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_313) {
      auto x_314 = (x_245->parent);
      if (IsSome(x_314->meta->pass_1_proc_time_table)) {
        auto x_317 = OptionMatch(
            x_245->prev, [&](const auto &x_316) { return NextTotalOrder(UnSome(x_314->meta->bb_2_bb_time_table)); },
            [&](const auto &x_315) { return NextTotalOrder(UnSome(x_315->meta->pass_1_proc_time_table)); });
        x_245->meta->pass_1_proc_time_table = x_317;
        MetaWriteMetric();
        return QueueForcePush(x_317, x_245, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_244->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_319) {
        if (IsSome(x_244->meta->bb_2_bb_time_table)) {
          auto x_320 = UnSome(x_244->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_320, x_244, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_286)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_322) {
        if (IsSome(x_244->meta->bb_2_bb_time_table)) {
          auto x_323 = UnSome(x_244->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_323, x_244, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_245->next, [&](const auto &x_329) { return MakeUnit(); },
        [&](const auto &x_325) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_326) {
            if (IsSome(x_325->meta->bb_2_bb_time_table)) {
              auto x_327 = UnSome(x_325->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_327, x_325, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_242(x_247, ListNthExn(x_244->children, x_246), x_245);
  }
}
Unit replace_node_x_33(const auto &x_243, const auto &x_244, const auto &x_245) { return x_242(x_243, x_244, x_245); }
Unit x_330(const auto &x_331) {
  ListIter2(x_331->children, [&](const auto &x_332, const auto &x_333) {
    x_332->parent = x_331.get();
    x_333->parent = x_331.get();
    x_332->next = x_333.get();
    x_333->prev = x_332.get();
    x_330(x_332);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_331->children),
      [&](const auto &x_335) {
        x_331->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_334) {
        x_331->first = x_334.get();
        x_334->parent = x_331.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_331->children),
      [&](const auto &x_337) {
        x_331->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_336) {
        x_331->last = x_336.get();
        x_336->parent = x_331.get();
        x_330(x_336);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_31(const auto &x_331) { return x_330(x_331); }
Unit x_338(const auto &x_339, const auto &x_340, const auto &x_341) {
  auto x_342 = ListHeadExn(x_339);
  auto x_343 = ListTailExn(x_339);
  if (ListIsEmpty(x_343)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_340->children, x_342)));
    auto x_344 = ListSplitN(x_340->children, x_342);
    auto x_345 = Zro(x_344);
    auto x_346 = Fst(x_344);
    auto x_347 = ListHeadExn(x_346);
    auto x_348 = ListTailExn(x_346);
    x_340->children = ListAppend(x_345, x_348);
    x_347->meta->alive = false;
    OptionMatch(
        x_347->prev, [&](const auto &x_350) { return MakeUnit(); },
        [&](const auto &x_349) {
          x_349->next = ToPath(x_347->next);
          return MakeUnit();
        });
    OptionMatch(
        x_347->next, [&](const auto &x_352) { return MakeUnit(); },
        [&](const auto &x_351) {
          x_351->prev = ToPath(x_347->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_345)) {
      x_340->first = ToPath(ListHead(x_348));
    }
    if (ListIsEmpty(x_348)) {
      x_340->last = ToPath(ListLast(x_345));
    }
    OptionMatch(
        x_347->next, [&](const auto &x_357) { return MakeUnit(); },
        [&](const auto &x_353) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_354) {
            if (IsSome(x_353->meta->bb_1_bb_time_table)) {
              auto x_355 = UnSome(x_353->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_355, x_353, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_340->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_358) {
        if (IsSome(x_340->meta->bb_0_bb_time_table)) {
          auto x_359 = UnSome(x_340->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_359, x_340, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_348)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_361) {
        if (IsSome(x_340->meta->bb_0_bb_time_table)) {
          auto x_362 = UnSome(x_340->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_362, x_340, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_347->next, [&](const auto &x_368) { return MakeUnit(); },
        [&](const auto &x_364) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_365) {
            if (IsSome(x_364->meta->bb_0_bb_time_table)) {
              auto x_366 = UnSome(x_364->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_366, x_364, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsEmpty(x_340->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_369) {
        if (IsSome(x_340->meta->bb_2_bb_time_table)) {
          auto x_370 = UnSome(x_340->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_370, x_340, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_348)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_372) {
        if (IsSome(x_340->meta->bb_2_bb_time_table)) {
          auto x_373 = UnSome(x_340->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_373, x_340, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_347->next, [&](const auto &x_379) { return MakeUnit(); },
        [&](const auto &x_375) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_376) {
            if (IsSome(x_375->meta->bb_2_bb_time_table)) {
              auto x_377 = UnSome(x_375->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_377, x_375, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_338(x_343, ListNthExn(x_340->children, x_342), x_341);
  }
}
Unit remove_node_x_29(const auto &x_339, const auto &x_340, const auto &x_341) { return x_338(x_339, x_340, x_341); }
Unit x_380(const auto &x_381) {
  if (!QueueIsEmpty()) {
    auto x_382 = QueuePeek();
    auto x_383 = Zro(x_382);
    auto x_384 = Fst(x_382);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_384.n->meta->alive) {
      [&]() {
        auto x_2290 = x_384.rf;
        if (x_2290 == 0) {
          return eval_stmts_x_385(x_384.n);
        } else if (x_2290 == 1) {
          return eval_stmts_x_386(x_384.n);
        } else if (x_2290 == 2) {
          return eval_stmts_x_387(x_384.n);
        } else if (x_2290 == 3) {
          auto x_388 = ReadRef(current_time);
          WriteRef(current_time, x_383);
          eval_stmts_x_17(x_384.n);
          x_384.n->meta->pass_0_proc_time_table = ReadRef(current_time);
          WriteRef(current_time, x_388);
          return MakeUnit();
        } else if (x_2290 == 4) {
          auto x_389 = ReadRef(current_time);
          WriteRef(current_time, x_383);
          eval_stmts_x_19(x_384.n);
          x_384.n->meta->pass_1_proc_time_table = ReadRef(current_time);
          WriteRef(current_time, x_389);
          return MakeUnit();
        } else {
          Panic();
        }
      }();
    }
    auto x_390 = Zro(QueuePop());
    x_380(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_27(const auto &x_381) { return x_380(x_381); }
Unit x_391(const auto &x_392, const auto &x_393, const auto &x_394) {
  auto x_395 = ListHeadExn(x_392);
  auto x_396 = ListTailExn(x_392);
  if (ListIsEmpty(x_396)) {
    InputChangeMetric(node_size_x_4(x_394));
    auto x_397 = ListSplitN(x_393->children, x_395);
    auto x_398 = Zro(x_397);
    auto x_399 = Fst(x_397);
    x_393->children = ListAppend(x_398, Cons(x_394, x_399));
    if (ListIsEmpty(x_398)) {
      x_393->first = x_394.get();
    }
    if (ListIsEmpty(x_399)) {
      x_393->last = x_394.get();
    }
    OptionMatch(
        ListLast(x_398),
        [&](const auto &x_401) {
          x_394->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_400) {
          x_394->prev = x_400.get();
          x_400->next = x_394.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_399),
        [&](const auto &x_403) {
          x_394->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_402) {
          x_394->next = x_402.get();
          x_402->prev = x_394.get();
          return MakeUnit();
        });
    x_394->parent = x_393.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_404) {
      auto x_405 = (x_394->parent);
      if (IsSome(x_405->meta->pass_0_proc_time_table)) {
        auto x_408 = OptionMatch(
            x_394->prev, [&](const auto &x_407) { return NextTotalOrder(UnSome(x_405->meta->bb_1_bb_time_table)); },
            [&](const auto &x_406) { return NextTotalOrder(UnSome(x_406->meta->pass_0_proc_time_table)); });
        x_394->meta->pass_0_proc_time_table = x_408;
        MetaWriteMetric();
        return QueueForcePush(x_408, x_394, static_cast<int64_t>(3));
      } else {
        return MakeUnit();
      }
    })));
    OptionMatch(
        x_394->next, [&](const auto &x_414) { return MakeUnit(); },
        [&](const auto &x_410) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_411) {
            if (IsSome(x_410->meta->bb_1_bb_time_table)) {
              auto x_412 = UnSome(x_410->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_412, x_410, static_cast<int64_t>(0));
            } else {
              return MakeUnit();
            }
          })));
        });
    if (ListIsSingleton(x_393->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_415) {
        if (IsSome(x_393->meta->bb_0_bb_time_table)) {
          auto x_416 = UnSome(x_393->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_416, x_393, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_399)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_418) {
        if (IsSome(x_393->meta->bb_0_bb_time_table)) {
          auto x_419 = UnSome(x_393->meta->bb_0_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_419, x_393, static_cast<int64_t>(1));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_394->next, [&](const auto &x_425) { return MakeUnit(); },
        [&](const auto &x_421) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_422) {
            if (IsSome(x_421->meta->bb_0_bb_time_table)) {
              auto x_423 = UnSome(x_421->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_423, x_421, static_cast<int64_t>(1));
            } else {
              return MakeUnit();
            }
          })));
        });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_426) {
      auto x_427 = (x_394->parent);
      if (IsSome(x_427->meta->pass_1_proc_time_table)) {
        auto x_430 = OptionMatch(
            x_394->prev, [&](const auto &x_429) { return NextTotalOrder(UnSome(x_427->meta->bb_2_bb_time_table)); },
            [&](const auto &x_428) { return NextTotalOrder(UnSome(x_428->meta->pass_1_proc_time_table)); });
        x_394->meta->pass_1_proc_time_table = x_430;
        MetaWriteMetric();
        return QueueForcePush(x_430, x_394, static_cast<int64_t>(4));
      } else {
        return MakeUnit();
      }
    })));
    if (ListIsSingleton(x_393->children)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_432) {
        if (IsSome(x_393->meta->bb_2_bb_time_table)) {
          auto x_433 = UnSome(x_393->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_433, x_393, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    if (ListIsEmpty(x_399)) {
      MetricRecordOverhead(Zro(Timed([&](const auto &x_435) {
        if (IsSome(x_393->meta->bb_2_bb_time_table)) {
          auto x_436 = UnSome(x_393->meta->bb_2_bb_time_table);
          MetaWriteMetric();
          return QueuePush(x_436, x_393, static_cast<int64_t>(2));
        } else {
          return MakeUnit();
        }
      })));
    }
    OptionMatch(
        x_394->next, [&](const auto &x_442) { return MakeUnit(); },
        [&](const auto &x_438) {
          return MetricRecordOverhead(Zro(Timed([&](const auto &x_439) {
            if (IsSome(x_438->meta->bb_2_bb_time_table)) {
              auto x_440 = UnSome(x_438->meta->bb_2_bb_time_table);
              MetaWriteMetric();
              return QueuePush(x_440, x_438, static_cast<int64_t>(2));
            } else {
              return MakeUnit();
            }
          })));
        });
    return MakeUnit();
  } else {
    return x_391(x_396, ListNthExn(x_393->children, x_395), x_394);
  }
}
Unit add_node_x_25(const auto &x_392, const auto &x_393, const auto &x_394) { return x_391(x_392, x_393, x_394); }
Unit x_443(const auto &x_444) {
  ListIter2(x_444->children, [&](const auto &x_445, const auto &x_446) {
    x_445->parent = x_444.get();
    x_446->parent = x_444.get();
    x_445->next = x_446.get();
    x_446->prev = x_445.get();
    x_443(x_445);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_444->children),
      [&](const auto &x_448) {
        x_444->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_447) {
        x_444->first = x_447.get();
        x_447->parent = x_444.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_444->children),
      [&](const auto &x_450) {
        x_444->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_449) {
        x_444->last = x_449.get();
        x_449->parent = x_444.get();
        x_443(x_449);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_23(const auto &x_444) { return x_443(x_444); }
Unit eval_stmts_x_19(const auto &x_451) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_452) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_453) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_451->meta->bb_2_bb_time_table = ReadRef(current_time);
      eval_stmts_x_387(x_451);
      return MakeUnit();
    })));
    ListIter(x_451->children, [&](const auto &x_454) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_455) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_19(x_454);
        x_454->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_17(const auto &x_456) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_457) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_458) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_456->meta->bb_1_bb_time_table = ReadRef(current_time);
      eval_stmts_x_385(x_456);
      return MakeUnit();
    })));
    ListIter(x_456->children, [&](const auto &x_459) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_460) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_17(x_459);
        x_459->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_461) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      x_456->meta->bb_0_bb_time_table = ReadRef(current_time);
      eval_stmts_x_386(x_456);
      return MakeUnit();
    })));
    return MakeUnit();
  })));
}
Unit x_462(const auto &x_463) {
  ListIter2(x_463->children, [&](const auto &x_464, const auto &x_465) {
    x_464->parent = x_463.get();
    x_465->parent = x_463.get();
    x_464->next = x_465.get();
    x_465->prev = x_464.get();
    x_462(x_464);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_463->children),
      [&](const auto &x_467) {
        x_463->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_466) {
        x_463->first = x_466.get();
        x_466->parent = x_463.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_463->children),
      [&](const auto &x_469) {
        x_463->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_468) {
        x_463->last = x_468.get();
        x_468->parent = x_463.get();
        x_462(x_468);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_463) { return x_462(x_463); }
int64_t x_470(const auto &x_471) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_471->children, [&](const auto &x_472) { return x_470(x_472); }));
}
int64_t node_size_x_4(const auto &x_471) { return x_470(x_471); }
int64_t x_473(const auto &x_474) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_474->children, [&](const auto &x_475) { return x_473(x_475); }));
}
int64_t layout_size_x_3(const auto &x_474) { return x_473(x_474); }
LayoutNode x_476(const auto &x_477) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_477)), [&](const auto &x_478) { return x_476(x_478); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_477) { return x_476(x_477); }
Node x_479(const auto &x_480) {
  return MakeNode(x_480->name, x_480->attr, x_480->prop, x_480->extern_id,
                  ListMap(x_480->children, [&](const auto &x_481) { return x_479(x_481); }));
}
Node node_to_fs_node_x_1(const auto &x_480) { return x_479(x_480); }
Node x_482(const auto &x_483) {
  return MakeNode(JsonToString(JsonMember("name", x_483)), JsonToDict(JsonMember("attributes", x_483)),
                  JsonToDict(JsonMember("properties", x_483)), JsonToInt(JsonMember("id", x_483)),
                  ListMap(JsonToList(JsonMember("children", x_483)), [&](const auto &x_484) { return x_482(x_484); }));
}
Node json_to_node_aux_x_0(const auto &x_483) { return x_482(x_483); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_5) {
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
        x_14->meta->pass_0_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_18) {
        WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
        eval_stmts_x_19(x_14);
        x_14->meta->pass_1_proc_time_table = ReadRef(current_time);
        return MakeUnit();
      })));
      JsonToChannel(x_5, [&]() {
        auto x_2291 = FreshJson();
        WriteJson(x_2291, "name", "PQ_D");
        WriteJson(x_2291, "diff_num", ReadRef(x_7));
        WriteJson(x_2291, "read_count", MetricReadCount());
        WriteJson(x_2291, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_2291, "write_count", MetricWriteCount());
        WriteJson(x_2291, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_2291, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_2291, "input_change_count", MetricInputChangeCount());
        WriteJson(x_2291, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_2291, "overhead_time", MetricOverheadCount());
        WriteJson(x_2291, "eval_time", MetricEvalCount());
        WriteJson(x_2291, "html", "");
        WriteJson(x_2291, "command", StackToList(x_11));
        return x_2291;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_2293 = JsonToString(JsonMember("name", x_21));
        if (x_2293 == "add") {
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
        } else if (x_2293 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_26) {
            recalculate_internal_x_27(MakeUnit());
            return MakeUnit();
          })));
          JsonToChannel(x_5, [&]() {
            auto x_2292 = FreshJson();
            WriteJson(x_2292, "name", "PQ_D");
            WriteJson(x_2292, "diff_num", ReadRef(x_7));
            WriteJson(x_2292, "read_count", MetricReadCount());
            WriteJson(x_2292, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_2292, "write_count", MetricWriteCount());
            WriteJson(x_2292, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_2292, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_2292, "input_change_count", MetricInputChangeCount());
            WriteJson(x_2292, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_2292, "overhead_time", MetricOverheadCount());
            WriteJson(x_2292, "eval_time", MetricEvalCount());
            WriteJson(x_2292, "html", "");
            WriteJson(x_2292, "command", StackToList(x_11));
            return x_2292;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_2293 == "remove") {
          return remove_node_x_29(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_28) { return JsonToInt(x_28); }), x_14,
              MakeUnit());
        } else if (x_2293 == "replace") {
          return replace_node_x_33(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_32) { return JsonToInt(x_32); }), x_14,
              [&]() {
                auto x_30 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_30->parent = nullptr;
                x_30->prev = nullptr;
                x_30->next = nullptr;
                set_children_relation_x_31(x_30);
                return x_30;
              }());
        } else if (x_2293 == "replace_value") {
          return replace_value_x_35(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_34) { return JsonToInt(x_34); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_2293 == "delete_value") {
          return delete_value_x_37(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_36) { return JsonToInt(x_36); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_2293 == "insert_value") {
          return insert_value_x_39(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_38) { return JsonToInt(x_38); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_2293 == "layout_remove") {
          return remove_layout_node_x_41(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_40) { return JsonToInt(x_40); }), x_15,
              MakeUnit());
        } else if (x_2293 == "layout_add") {
          return add_layout_node_x_43(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_42) { return JsonToInt(x_42); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_2293 == "layout_replace") {
          return replace_layout_node_x_45(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_44) { return JsonToInt(x_44); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_2293 == "layout_info_changed") {
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