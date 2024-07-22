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
struct MetaNode {};

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
Unit var_modified_x_2583(const auto &x_2585);
auto eval_expr_x_2580(const auto &x_2590);
Unit var_modified_x_2578(const auto &x_2607);
auto eval_expr_x_2575(const auto &x_2610);
Unit var_modified_x_2573(const auto &x_2619);
auto eval_expr_x_2570(const auto &x_2623);
Unit var_modified_x_2568(const auto &x_2676);
auto eval_expr_x_2565(const auto &x_2682);
Unit var_modified_x_2563(const auto &x_2707);
auto eval_expr_x_2560(const auto &x_2712);
Unit var_modified_x_2558(const auto &x_2721);
auto eval_expr_x_2555(const auto &x_2725);
Unit var_modified_x_2553(const auto &x_2778);
auto eval_expr_x_2550(const auto &x_2784);
Unit var_modified_x_2548(const auto &x_2805);
auto eval_expr_x_2545(const auto &x_2808);
Unit var_modified_x_2543(const auto &x_2829);
auto eval_expr_x_2540(const auto &x_2832);
Unit var_modified_x_2538(const auto &x_2845);
auto eval_expr_x_2535(const auto &x_2849);
Unit var_modified_x_2533(const auto &x_2870);
auto eval_expr_x_2530(const auto &x_2873);
Unit var_modified_x_2528(const auto &x_2878);
auto eval_expr_x_2525(const auto &x_2881);
Unit var_modified_x_2521(const auto &x_2886);
auto eval_expr_x_2518(const auto &x_2896);
Unit var_modified_x_2516(const auto &x_2973);
auto eval_expr_x_2513(const auto &x_2976);
Unit var_modified_x_2511(const auto &x_2993);
auto eval_expr_x_2508(const auto &x_2998);
Unit var_modified_x_2506(const auto &x_3003);
auto eval_expr_x_2503(const auto &x_3008);
Unit var_modified_x_2501(const auto &x_3017);
auto eval_expr_x_2498(const auto &x_3020);
Unit var_modified_x_2496(const auto &x_3021);
auto eval_expr_x_2493(const auto &x_3024);
Unit var_modified_x_2491(const auto &x_3029);
auto eval_expr_x_2488(const auto &x_3033);
Unit var_modified_x_2486(const auto &x_3044);
auto eval_expr_x_2483(const auto &x_3047);
Unit var_modified_x_2481(const auto &x_3052);
auto eval_expr_x_2478(const auto &x_3056);
Unit var_modified_x_2476(const auto &x_3067);
auto eval_expr_x_2473(const auto &x_3071);
Unit var_modified_x_2471(const auto &x_3096);
auto eval_expr_x_2468(const auto &x_3101);
Unit var_modified_x_2466(const auto &x_3126);
auto eval_expr_x_2463(const auto &x_3129);
Unit var_modified_x_2461(const auto &x_3132);
auto eval_expr_x_2458(const auto &x_3138);
Unit var_modified_x_2456(const auto &x_3147);
auto eval_expr_x_2453(const auto &x_3153);
Unit var_modified_x_2451(const auto &x_3162);
auto eval_expr_x_2448(const auto &x_3166);
Unit var_modified_x_2446(const auto &x_3169);
auto eval_expr_x_2443(const auto &x_3173);
Unit var_modified_x_2441(const auto &x_3176);
auto eval_expr_x_2438(const auto &x_3181);
Unit var_modified_x_2436(const auto &x_3184);
auto eval_expr_x_2433(const auto &x_3189);
Unit var_modified_x_2429(const auto &x_3192);
auto eval_expr_x_2426(const auto &x_3200);
Unit var_modified_x_2424(const auto &x_3229);
auto eval_expr_x_2421(const auto &x_3237);
Unit var_modified_x_2419(const auto &x_3250);
auto eval_expr_x_2416(const auto &x_3258);
Unit var_modified_x_2414(const auto &x_3267);
auto eval_expr_x_2411(const auto &x_3270);
Unit var_modified_x_2409(const auto &x_3279);
auto eval_expr_x_2406(const auto &x_3283);
Unit var_modified_x_2404(const auto &x_3428);
auto eval_expr_x_2401(const auto &x_3431);
Unit var_modified_x_2399(const auto &x_3480);
auto eval_expr_x_2396(const auto &x_3484);
Unit var_modified_x_2394(const auto &x_3487);
auto eval_expr_x_2391(const auto &x_3490);
Unit var_modified_x_2389(const auto &x_3499);
auto eval_expr_x_2386(const auto &x_3507);
Unit var_modified_x_2384(const auto &x_3516);
auto eval_expr_x_2381(const auto &x_3524);
Unit var_modified_x_2379(const auto &x_3533);
auto eval_expr_x_2376(const auto &x_3539);
Unit var_modified_x_2374(const auto &x_3552);
auto eval_expr_x_2371(const auto &x_3555);
Unit var_modified_x_2369(const auto &x_3564);
auto eval_expr_x_2366(const auto &x_3568);
Unit var_modified_x_2364(const auto &x_3721);
auto eval_expr_x_2361(const auto &x_3724);
Unit var_modified_x_2359(const auto &x_3729);
auto eval_expr_x_2356(const auto &x_3732);
Unit var_modified_x_2354(const auto &x_3781);
auto eval_expr_x_2351(const auto &x_3784);
Unit var_modified_x_2349(const auto &x_3797);
auto eval_expr_x_2346(const auto &x_3801);
Unit eval_stmts_x_2320(const auto &x_2344);
Unit eval_stmts_x_2318(const auto &x_2431);
Unit eval_stmts_x_2314(const auto &x_2523);
Unit x_2170(const auto &x_2171, const auto &x_2172, const auto &x_2173);
Unit x_2177(const auto &x_2178, const auto &x_2179, const auto &x_2180);
Unit x_2184(const auto &x_2185, const auto &x_2186, const auto &x_2187);
Unit x_2191(const auto &x_2192, const auto &x_2193, const auto &x_2194);
Unit x_2202(const auto &x_2203, const auto &x_2204, const auto &x_2205);
Unit x_2211(const auto &x_2212, const auto &x_2213, const auto &x_2214);
Unit x_2222(const auto &x_2223, const auto &x_2224, const auto &x_2225);
Unit x_2256(const auto &x_2257);
Unit x_2264(const auto &x_2265, const auto &x_2266, const auto &x_2267);
Unit x_2285(const auto &x_2286, const auto &x_2287, const auto &x_2288);
Unit x_2304(const auto &x_2305);
Unit eval_stmts_x_2144(const auto &x_2312);
Unit eval_stmts_x_2143(const auto &x_2316);
Unit x_2321(const auto &x_2322);
int64_t x_2329(const auto &x_2330);
int64_t x_2332(const auto &x_2333);
LayoutNode x_2335(const auto &x_2336);
Node x_2338(const auto &x_2339);
Node x_2341(const auto &x_2342);
Unit var_modified_x_2583(const auto &x_2585) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2586) { return MakeUnit(); })));
}
auto eval_expr_x_2580(const auto &x_2590) {
  if ((x_2590->prev != nullptr) && (!(x_2590->prev)->var_line_break)) {
    return max(x_2590->var_height_external, (x_2590->prev)->var_line_height);
  } else {
    return x_2590->var_height_external;
  }
}
Unit var_modified_x_2578(const auto &x_2607) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2608) { return MakeUnit(); })));
}
auto eval_expr_x_2575(const auto &x_2610) {
  if (eq(x_2610->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2610->var_height_internal;
  }
}
Unit var_modified_x_2573(const auto &x_2619) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2620) { return MakeUnit(); })));
}
auto eval_expr_x_2570(const auto &x_2623) {
  if (x_2623->var_intrinsic_height_is_height) {
    return x_2623->var_intrinsic_height_internal;
  } else {
    if ((x_2623->parent != nullptr) && (x_2623->parent)->var_is_flex_column) {
      return plus(x_2623->var_intrinsic_height_internal,
                  mult(x_2623->var_flex_amount, (x_2623->parent)->var_flex_unit));
    } else {
      if (x_2623->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2623->var_box_height, divide(x_2623->var_height_expr.r.a0, 100.));
      } else {
        return max(x_2623->var_box_height, x_2623->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_2568(const auto &x_2676) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2677) { return MakeUnit(); })));
}
auto eval_expr_x_2565(const auto &x_2682) {
  if (x_2682->prev != nullptr) {
    if (x_2682->var_line_break || (x_2682->prev)->var_line_break) {
      return plus((x_2682->prev)->var_y, (x_2682->prev)->var_line_height);
    } else {
      return (x_2682->prev)->var_y;
    }
  } else {
    if (x_2682->parent != nullptr) {
      return (x_2682->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2563(const auto &x_2707) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2708) { return MakeUnit(); })));
}
auto eval_expr_x_2560(const auto &x_2712) {
  if (eq(x_2712->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2712->var_width_internal;
  }
}
Unit var_modified_x_2558(const auto &x_2721) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2722) { return MakeUnit(); })));
}
auto eval_expr_x_2555(const auto &x_2725) {
  if (x_2725->var_intrinsic_width_is_width) {
    return x_2725->var_intrinsic_width_internal;
  } else {
    if ((x_2725->parent != nullptr) && (x_2725->parent)->var_is_flex_row) {
      return plus(x_2725->var_intrinsic_width_internal, mult(x_2725->var_flex_amount, (x_2725->parent)->var_flex_unit));
    } else {
      if (x_2725->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2725->var_box_width, divide(x_2725->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2725->var_box_width, x_2725->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_2553(const auto &x_2778) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2779) { return MakeUnit(); })));
}
auto eval_expr_x_2550(const auto &x_2784) {
  if (x_2784->prev != nullptr) {
    if (x_2784->var_line_break || (x_2784->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2784->prev)->var_x, (x_2784->prev)->var_width_external);
    }
  } else {
    if (x_2784->parent != nullptr) {
      return (x_2784->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2548(const auto &x_2805) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2806) { return MakeUnit(); })));
}
auto eval_expr_x_2545(const auto &x_2808) {
  if (gt(x_2808->var_left_over, 0.)) {
    return divide(x_2808->var_left_over, x_2808->var_flex_grow_sum);
  } else {
    return divide(x_2808->var_left_over, x_2808->var_flex_shrink_sum);
  }
}
Unit var_modified_x_2543(const auto &x_2829) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2830) { return MakeUnit(); })));
}
auto eval_expr_x_2540(const auto &x_2832) {
  if ((x_2832->parent != nullptr) && gt((x_2832->parent)->var_left_over, 0.)) {
    return x_2832->var_flex_grow;
  } else {
    return x_2832->var_flex_shrink;
  }
}
Unit var_modified_x_2538(const auto &x_2845) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2846) { return MakeUnit(); })));
}
auto eval_expr_x_2535(const auto &x_2849) {
  if (x_2849->var_is_flex_row) {
    return minus(x_2849->var_box_width, (x_2849->last != nullptr) ? ((x_2849->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2849->var_box_height, (x_2849->last != nullptr) ? ((x_2849->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_2533(const auto &x_2870) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2871) { return MakeUnit(); })));
}
auto eval_expr_x_2530(const auto &x_2873) {
  if (x_2873->parent != nullptr) {
    return (x_2873->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_2528(const auto &x_2878) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2879) { return MakeUnit(); })));
}
auto eval_expr_x_2525(const auto &x_2881) {
  if (x_2881->parent != nullptr) {
    return (x_2881->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_2521(const auto &x_2886) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2887) { return MakeUnit(); })));
}
auto eval_expr_x_2518(const auto &x_2896) {
  if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_2896->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_2896->parent != nullptr) &&
          (eq((x_2896->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_2896->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_2896->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_2896->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_2896->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_2516(const auto &x_2973) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2974) { return MakeUnit(); })));
}
auto eval_expr_x_2513(const auto &x_2976) {
  return (((!(x_2976->parent != nullptr)) || (x_2976->parent)->var_visible) &&
          (neq(x_2976->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_2976->var_inside_svg) && (!x_2976->var_disabled))));
}
Unit var_modified_x_2511(const auto &x_2993) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2994) { return MakeUnit(); })));
}
auto eval_expr_x_2508(const auto &x_2998) {
  if (eq(x_2998->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_2998->parent != nullptr) && (x_2998->parent)->var_disabled);
  }
}
Unit var_modified_x_2506(const auto &x_3003) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3004) { return MakeUnit(); })));
}
auto eval_expr_x_2503(const auto &x_3008) {
  return ((x_3008->parent != nullptr) && ((x_3008->parent)->var_is_svg_block || (x_3008->parent)->var_inside_svg));
}
Unit var_modified_x_2501(const auto &x_3017) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3018) { return MakeUnit(); })));
}
auto eval_expr_x_2498(const auto &x_3020) { return eq(x_3020->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_2496(const auto &x_3021) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3022) { return MakeUnit(); })));
}
auto eval_expr_x_2493(const auto &x_3024) {
  return neq(x_3024->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2491(const auto &x_3029) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3030) { return MakeUnit(); })));
}
auto eval_expr_x_2488(const auto &x_3033) {
  if (!x_3033->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3033->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_3033->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3033->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2486(const auto &x_3044) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3045) { return MakeUnit(); })));
}
auto eval_expr_x_2483(const auto &x_3047) {
  return neq(x_3047->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2481(const auto &x_3052) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3053) { return MakeUnit(); })));
}
auto eval_expr_x_2478(const auto &x_3056) {
  if (!x_3056->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3056->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_3056->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3056->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2476(const auto &x_3067) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3068) { return MakeUnit(); })));
}
auto eval_expr_x_2473(const auto &x_3071) {
  if ((x_3071->parent != nullptr) &&
      (eq((x_3071->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3071->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3071->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_3071->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2471(const auto &x_3096) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3097) { return MakeUnit(); })));
}
auto eval_expr_x_2468(const auto &x_3101) {
  if ((x_3101->parent != nullptr) &&
      (eq((x_3101->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3101->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3101->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2466(const auto &x_3126) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3127) { return MakeUnit(); })));
}
auto eval_expr_x_2463(const auto &x_3129) {
  if (x_3129->has_prop_flex_direction) {
    return x_3129->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_2461(const auto &x_3132) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3133) { return MakeUnit(); })));
}
auto eval_expr_x_2458(const auto &x_3138) {
  return plus((x_3138->prev != nullptr) ? ((x_3138->prev)->var_flex_shrink_sum) : (0.), x_3138->var_flex_shrink);
}
Unit var_modified_x_2456(const auto &x_3147) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3148) { return MakeUnit(); })));
}
auto eval_expr_x_2453(const auto &x_3153) {
  return plus((x_3153->prev != nullptr) ? ((x_3153->prev)->var_flex_grow_sum) : (0.), x_3153->var_flex_grow);
}
Unit var_modified_x_2451(const auto &x_3162) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3163) { return MakeUnit(); })));
}
auto eval_expr_x_2448(const auto &x_3166) {
  if (x_3166->has_prop_flex_shrink) {
    return (x_3166->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2446(const auto &x_3169) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3170) { return MakeUnit(); })));
}
auto eval_expr_x_2443(const auto &x_3173) {
  if (x_3173->has_prop_flex_grow) {
    return (x_3173->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2441(const auto &x_3176) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3177) { return MakeUnit(); })));
}
auto eval_expr_x_2438(const auto &x_3181) {
  if (x_3181->has_prop_position) {
    return x_3181->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_2436(const auto &x_3184) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3185) { return MakeUnit(); })));
}
auto eval_expr_x_2433(const auto &x_3189) {
  if (x_3189->has_prop_display) {
    return x_3189->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_2429(const auto &x_3192) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3193) { return MakeUnit(); })));
}
auto eval_expr_x_2426(const auto &x_3200) {
  if (x_3200->prev != nullptr) {
    if (x_3200->var_line_break) {
      return plus((x_3200->prev)->var_finished_intrinsic_height_sum,
                  plus((x_3200->prev)->var_intrinsic_current_line_height, x_3200->var_intrinsic_height_external));
    } else {
      return (x_3200->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_3200->var_line_break) {
      return x_3200->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2424(const auto &x_3229) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3230) { return MakeUnit(); })));
}
auto eval_expr_x_2421(const auto &x_3237) {
  if (x_3237->var_line_break) {
    return 0.;
  } else {
    return max(x_3237->var_intrinsic_height_external,
               (x_3237->prev != nullptr) ? ((x_3237->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_2419(const auto &x_3250) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3251) { return MakeUnit(); })));
}
auto eval_expr_x_2416(const auto &x_3258) {
  return plus((x_3258->prev != nullptr) ? ((x_3258->prev)->var_intrinsic_height_sum) : (0.),
              x_3258->var_intrinsic_height_external);
}
Unit var_modified_x_2414(const auto &x_3267) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3268) { return MakeUnit(); })));
}
auto eval_expr_x_2411(const auto &x_3270) {
  if (eq(x_3270->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3270->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_2409(const auto &x_3279) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3280) { return MakeUnit(); })));
}
auto eval_expr_x_2406(const auto &x_3283) {
  if (eq(x_3283->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3283->var_inside_svg) {
      return 0.;
    } else {
      if (x_3283->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3283->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3283->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_3283->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_3283->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3283->var_height_expr.r.a0;
          } else {
            if (x_3283->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_3283->var_height_expr.r.a0;
            } else {
              return x_3283->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_3283->var_children_intrinsic_height,
              (eq(x_3283->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_3283->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3283->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3283->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_3283->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3283->var_has_height_attr &&
                                                  (x_3283->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3283->var_height_attr_expr.r.a0)
                                                     : ((x_3283->has_attr_viewBox)
                                                            ? (x_3283->attr_viewBox.r.a3)
                                                            : (mult((x_3283->attr_viewBox.r.a3),
                                                                    divide(x_3283->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3283->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3283->var_has_height_attr)
                                                            ? (x_3283->var_height_attr_expr.r.a0)
                                                            : ((x_3283->has_attr_image_height &&
                                                                (!x_3283->var_has_width_attr))
                                                                   ? (int_to_float(x_3283->attr_image_height))
                                                                   : ((neq(x_3283->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3283->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3283->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_3283->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_3283->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_3283->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2404(const auto &x_3428) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3429) { return MakeUnit(); })));
}
auto eval_expr_x_2401(const auto &x_3431) {
  if (eq(x_3431->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3431->var_inside_svg || x_3431->var_disabled)) {
    return true;
  } else {
    if ((x_3431->parent != nullptr) && (x_3431->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3431->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3431->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3431->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3431->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_3431->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2399(const auto &x_3480) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3481) { return MakeUnit(); })));
}
auto eval_expr_x_2396(const auto &x_3484) {
  if (x_3484->has_prop_height) {
    return x_3484->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_2394(const auto &x_3487) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3488) { return MakeUnit(); })));
}
auto eval_expr_x_2391(const auto &x_3490) {
  if (x_3490->last != nullptr) {
    return plus((x_3490->last)->var_finished_intrinsic_height_sum, (x_3490->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2389(const auto &x_3499) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3500) { return MakeUnit(); })));
}
auto eval_expr_x_2386(const auto &x_3507) {
  return plus((x_3507->prev != nullptr) ? ((x_3507->prev)->var_intrinsic_width_sum) : (0.),
              x_3507->var_intrinsic_width_external);
}
Unit var_modified_x_2384(const auto &x_3516) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3517) { return MakeUnit(); })));
}
auto eval_expr_x_2381(const auto &x_3524) {
  return max(x_3524->var_intrinsic_current_line_width,
             (x_3524->prev != nullptr) ? ((x_3524->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_2379(const auto &x_3533) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3534) { return MakeUnit(); })));
}
auto eval_expr_x_2376(const auto &x_3539) {
  return plus(x_3539->var_intrinsic_width_external,
              ((x_3539->prev != nullptr) && (!(x_3539->prev)->var_line_break))
                  ? ((x_3539->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_2374(const auto &x_3552) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3553) { return MakeUnit(); })));
}
auto eval_expr_x_2371(const auto &x_3555) {
  if (eq(x_3555->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3555->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_2369(const auto &x_3564) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3565) { return MakeUnit(); })));
}
auto eval_expr_x_2366(const auto &x_3568) {
  if (eq(x_3568->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3568->var_inside_svg) {
      return 0.;
    } else {
      if (x_3568->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3568->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3568->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_3568->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_3568->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_3568->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_3568->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3568->var_width_expr.r.a0;
          } else {
            return x_3568->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_3568->var_children_intrinsic_width,
              (eq(x_3568->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_3568->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3568->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3568->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_3568->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3568->var_has_width_attr &&
                                                  (x_3568->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3568->var_width_attr_expr.r.a0)
                                                     : (((!x_3568->var_has_width_attr) && x_3568->has_attr_viewBox)
                                                            ? (x_3568->attr_viewBox.r.a2)
                                                            : (mult((x_3568->attr_viewBox.r.a2),
                                                                    divide(x_3568->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3568->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3568->var_has_width_attr)
                                                            ? (x_3568->var_width_attr_expr.r.a0)
                                                            : ((x_3568->has_attr_image_width &&
                                                                (!x_3568->var_has_height_attr))
                                                                   ? (int_to_float(x_3568->attr_image_width))
                                                                   : ((neq(x_3568->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3568->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3568->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_3568->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_3568->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_3568->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2364(const auto &x_3721) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3722) { return MakeUnit(); })));
}
auto eval_expr_x_2361(const auto &x_3724) {
  if (x_3724->last != nullptr) {
    return (x_3724->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_2359(const auto &x_3729) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3730) { return MakeUnit(); })));
}
auto eval_expr_x_2356(const auto &x_3732) {
  if (eq(x_3732->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3732->var_inside_svg || x_3732->var_disabled)) {
    return true;
  } else {
    if ((x_3732->parent != nullptr) && (x_3732->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3732->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3732->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3732->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3732->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_3732->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2354(const auto &x_3781) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3782) { return MakeUnit(); })));
}
auto eval_expr_x_2351(const auto &x_3784) {
  if (eq(x_3784->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_3784->var_inside_svg) {
      return true;
    } else {
      if (x_3784->var_disabled) {
        return true;
      } else {if ( eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_3784->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_2349(const auto &x_3797) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3798) { return MakeUnit(); })));
}
auto eval_expr_x_2346(const auto &x_3801) {
  if (x_3801->has_prop_width) {
    return x_3801->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_2320(const auto &x_2344) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2345) {
    WriteMetric();
    auto x_2347 = eval_expr_x_2346(x_2344);
    if (x_2344->has_var_width_expr) {
      auto x_2348 = x_2344->var_width_expr;
      if (!EqualValue(x_2348, x_2347)) {
        var_modified_x_2349(x_2344);
      }
    }
    x_2344->has_var_width_expr = true;
    x_2344->var_width_expr = AsDEString(x_2347);
    WriteMetric();
    auto x_2352 = eval_expr_x_2351(x_2344);
    if (x_2344->has_var_is_default_case) {
      auto x_2353 = x_2344->var_is_default_case;
      if (!EqualValue(x_2353, x_2352)) {
        var_modified_x_2354(x_2344);
      }
    }
    x_2344->has_var_is_default_case = true;
    x_2344->var_is_default_case = Asbool(x_2352);
    WriteMetric();
    auto x_2357 = eval_expr_x_2356(x_2344);
    if (x_2344->has_var_intrinsic_width_is_width) {
      auto x_2358 = x_2344->var_intrinsic_width_is_width;
      if (!EqualValue(x_2358, x_2357)) {
        var_modified_x_2359(x_2344);
      }
    }
    x_2344->has_var_intrinsic_width_is_width = true;
    x_2344->var_intrinsic_width_is_width = Asbool(x_2357);
    WriteMetric();
    auto x_2362 = eval_expr_x_2361(x_2344);
    if (x_2344->has_var_children_intrinsic_width) {
      auto x_2363 = x_2344->var_children_intrinsic_width;
      if (!EqualValue(x_2363, x_2362)) {
        var_modified_x_2364(x_2344);
      }
    }
    x_2344->has_var_children_intrinsic_width = true;
    x_2344->var_children_intrinsic_width = Asdouble(x_2362);
    WriteMetric();
    auto x_2367 = eval_expr_x_2366(x_2344);
    if (x_2344->has_var_intrinsic_width_internal) {
      auto x_2368 = x_2344->var_intrinsic_width_internal;
      if (!EqualValue(x_2368, x_2367)) {
        var_modified_x_2369(x_2344);
      }
    }
    x_2344->has_var_intrinsic_width_internal = true;
    x_2344->var_intrinsic_width_internal = Asdouble(x_2367);
    WriteMetric();
    auto x_2372 = eval_expr_x_2371(x_2344);
    if (x_2344->has_var_intrinsic_width_external) {
      auto x_2373 = x_2344->var_intrinsic_width_external;
      if (!EqualValue(x_2373, x_2372)) {
        var_modified_x_2374(x_2344);
      }
    }
    x_2344->has_var_intrinsic_width_external = true;
    x_2344->var_intrinsic_width_external = Asdouble(x_2372);
    WriteMetric();
    auto x_2377 = eval_expr_x_2376(x_2344);
    if (x_2344->has_var_intrinsic_current_line_width) {
      auto x_2378 = x_2344->var_intrinsic_current_line_width;
      if (!EqualValue(x_2378, x_2377)) {
        var_modified_x_2379(x_2344);
      }
    }
    x_2344->has_var_intrinsic_current_line_width = true;
    x_2344->var_intrinsic_current_line_width = Asdouble(x_2377);
    WriteMetric();
    auto x_2382 = eval_expr_x_2381(x_2344);
    if (x_2344->has_var_intrinsic_width_max) {
      auto x_2383 = x_2344->var_intrinsic_width_max;
      if (!EqualValue(x_2383, x_2382)) {
        var_modified_x_2384(x_2344);
      }
    }
    x_2344->has_var_intrinsic_width_max = true;
    x_2344->var_intrinsic_width_max = Asdouble(x_2382);
    WriteMetric();
    auto x_2387 = eval_expr_x_2386(x_2344);
    if (x_2344->has_var_intrinsic_width_sum) {
      auto x_2388 = x_2344->var_intrinsic_width_sum;
      if (!EqualValue(x_2388, x_2387)) {
        var_modified_x_2389(x_2344);
      }
    }
    x_2344->has_var_intrinsic_width_sum = true;
    x_2344->var_intrinsic_width_sum = Asdouble(x_2387);
    WriteMetric();
    auto x_2392 = eval_expr_x_2391(x_2344);
    if (x_2344->has_var_children_intrinsic_height) {
      auto x_2393 = x_2344->var_children_intrinsic_height;
      if (!EqualValue(x_2393, x_2392)) {
        var_modified_x_2394(x_2344);
      }
    }
    x_2344->has_var_children_intrinsic_height = true;
    x_2344->var_children_intrinsic_height = Asdouble(x_2392);
    WriteMetric();
    auto x_2397 = eval_expr_x_2396(x_2344);
    if (x_2344->has_var_height_expr) {
      auto x_2398 = x_2344->var_height_expr;
      if (!EqualValue(x_2398, x_2397)) {
        var_modified_x_2399(x_2344);
      }
    }
    x_2344->has_var_height_expr = true;
    x_2344->var_height_expr = AsDEString(x_2397);
    WriteMetric();
    auto x_2402 = eval_expr_x_2401(x_2344);
    if (x_2344->has_var_intrinsic_height_is_height) {
      auto x_2403 = x_2344->var_intrinsic_height_is_height;
      if (!EqualValue(x_2403, x_2402)) {
        var_modified_x_2404(x_2344);
      }
    }
    x_2344->has_var_intrinsic_height_is_height = true;
    x_2344->var_intrinsic_height_is_height = Asbool(x_2402);
    WriteMetric();
    auto x_2407 = eval_expr_x_2406(x_2344);
    if (x_2344->has_var_intrinsic_height_internal) {
      auto x_2408 = x_2344->var_intrinsic_height_internal;
      if (!EqualValue(x_2408, x_2407)) {
        var_modified_x_2409(x_2344);
      }
    }
    x_2344->has_var_intrinsic_height_internal = true;
    x_2344->var_intrinsic_height_internal = Asdouble(x_2407);
    WriteMetric();
    auto x_2412 = eval_expr_x_2411(x_2344);
    if (x_2344->has_var_intrinsic_height_external) {
      auto x_2413 = x_2344->var_intrinsic_height_external;
      if (!EqualValue(x_2413, x_2412)) {
        var_modified_x_2414(x_2344);
      }
    }
    x_2344->has_var_intrinsic_height_external = true;
    x_2344->var_intrinsic_height_external = Asdouble(x_2412);
    WriteMetric();
    auto x_2417 = eval_expr_x_2416(x_2344);
    if (x_2344->has_var_intrinsic_height_sum) {
      auto x_2418 = x_2344->var_intrinsic_height_sum;
      if (!EqualValue(x_2418, x_2417)) {
        var_modified_x_2419(x_2344);
      }
    }
    x_2344->has_var_intrinsic_height_sum = true;
    x_2344->var_intrinsic_height_sum = Asdouble(x_2417);
    WriteMetric();
    auto x_2422 = eval_expr_x_2421(x_2344);
    if (x_2344->has_var_intrinsic_current_line_height) {
      auto x_2423 = x_2344->var_intrinsic_current_line_height;
      if (!EqualValue(x_2423, x_2422)) {
        var_modified_x_2424(x_2344);
      }
    }
    x_2344->has_var_intrinsic_current_line_height = true;
    x_2344->var_intrinsic_current_line_height = Asdouble(x_2422);
    WriteMetric();
    auto x_2427 = eval_expr_x_2426(x_2344);
    if (x_2344->has_var_finished_intrinsic_height_sum) {
      auto x_2428 = x_2344->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_2428, x_2427)) {
        var_modified_x_2429(x_2344);
      }
    }
    x_2344->has_var_finished_intrinsic_height_sum = true;
    x_2344->var_finished_intrinsic_height_sum = Asdouble(x_2427);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_2318(const auto &x_2431) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2432) {
    WriteMetric();
    auto x_2434 = eval_expr_x_2433(x_2431);
    if (x_2431->has_var_display) {
      auto x_2435 = x_2431->var_display;
      if (!EqualValue(x_2435, x_2434)) {
        var_modified_x_2436(x_2431);
      }
    }
    x_2431->has_var_display = true;
    x_2431->var_display = AsDEString(x_2434);
    WriteMetric();
    auto x_2439 = eval_expr_x_2438(x_2431);
    if (x_2431->has_var_position) {
      auto x_2440 = x_2431->var_position;
      if (!EqualValue(x_2440, x_2439)) {
        var_modified_x_2441(x_2431);
      }
    }
    x_2431->has_var_position = true;
    x_2431->var_position = AsDEString(x_2439);
    WriteMetric();
    auto x_2444 = eval_expr_x_2443(x_2431);
    if (x_2431->has_var_flex_grow) {
      auto x_2445 = x_2431->var_flex_grow;
      if (!EqualValue(x_2445, x_2444)) {
        var_modified_x_2446(x_2431);
      }
    }
    x_2431->has_var_flex_grow = true;
    x_2431->var_flex_grow = Asdouble(x_2444);
    WriteMetric();
    auto x_2449 = eval_expr_x_2448(x_2431);
    if (x_2431->has_var_flex_shrink) {
      auto x_2450 = x_2431->var_flex_shrink;
      if (!EqualValue(x_2450, x_2449)) {
        var_modified_x_2451(x_2431);
      }
    }
    x_2431->has_var_flex_shrink = true;
    x_2431->var_flex_shrink = Asdouble(x_2449);
    WriteMetric();
    auto x_2454 = eval_expr_x_2453(x_2431);
    if (x_2431->has_var_flex_grow_sum) {
      auto x_2455 = x_2431->var_flex_grow_sum;
      if (!EqualValue(x_2455, x_2454)) {
        var_modified_x_2456(x_2431);
      }
    }
    x_2431->has_var_flex_grow_sum = true;
    x_2431->var_flex_grow_sum = Asdouble(x_2454);
    WriteMetric();
    auto x_2459 = eval_expr_x_2458(x_2431);
    if (x_2431->has_var_flex_shrink_sum) {
      auto x_2460 = x_2431->var_flex_shrink_sum;
      if (!EqualValue(x_2460, x_2459)) {
        var_modified_x_2461(x_2431);
      }
    }
    x_2431->has_var_flex_shrink_sum = true;
    x_2431->var_flex_shrink_sum = Asdouble(x_2459);
    WriteMetric();
    auto x_2464 = eval_expr_x_2463(x_2431);
    if (x_2431->has_var_flex_direction) {
      auto x_2465 = x_2431->var_flex_direction;
      if (!EqualValue(x_2465, x_2464)) {
        var_modified_x_2466(x_2431);
      }
    }
    x_2431->has_var_flex_direction = true;
    x_2431->var_flex_direction = AsDEString(x_2464);
    WriteMetric();
    auto x_2469 = eval_expr_x_2468(x_2431);
    if (x_2431->has_var_is_flex_row) {
      auto x_2470 = x_2431->var_is_flex_row;
      if (!EqualValue(x_2470, x_2469)) {
        var_modified_x_2471(x_2431);
      }
    }
    x_2431->has_var_is_flex_row = true;
    x_2431->var_is_flex_row = Asbool(x_2469);
    WriteMetric();
    auto x_2474 = eval_expr_x_2473(x_2431);
    if (x_2431->has_var_is_flex_column) {
      auto x_2475 = x_2431->var_is_flex_column;
      if (!EqualValue(x_2475, x_2474)) {
        var_modified_x_2476(x_2431);
      }
    }
    x_2431->has_var_is_flex_column = true;
    x_2431->var_is_flex_column = Asbool(x_2474);
    WriteMetric();
    auto x_2479 = eval_expr_x_2478(x_2431);
    if (x_2431->has_var_width_attr_expr) {
      auto x_2480 = x_2431->var_width_attr_expr;
      if (!EqualValue(x_2480, x_2479)) {
        var_modified_x_2481(x_2431);
      }
    }
    x_2431->has_var_width_attr_expr = true;
    x_2431->var_width_attr_expr = AsDEString(x_2479);
    WriteMetric();
    auto x_2484 = eval_expr_x_2483(x_2431);
    if (x_2431->has_var_has_width_attr) {
      auto x_2485 = x_2431->var_has_width_attr;
      if (!EqualValue(x_2485, x_2484)) {
        var_modified_x_2486(x_2431);
      }
    }
    x_2431->has_var_has_width_attr = true;
    x_2431->var_has_width_attr = Asbool(x_2484);
    WriteMetric();
    auto x_2489 = eval_expr_x_2488(x_2431);
    if (x_2431->has_var_height_attr_expr) {
      auto x_2490 = x_2431->var_height_attr_expr;
      if (!EqualValue(x_2490, x_2489)) {
        var_modified_x_2491(x_2431);
      }
    }
    x_2431->has_var_height_attr_expr = true;
    x_2431->var_height_attr_expr = AsDEString(x_2489);
    WriteMetric();
    auto x_2494 = eval_expr_x_2493(x_2431);
    if (x_2431->has_var_has_height_attr) {
      auto x_2495 = x_2431->var_has_height_attr;
      if (!EqualValue(x_2495, x_2494)) {
        var_modified_x_2496(x_2431);
      }
    }
    x_2431->has_var_has_height_attr = true;
    x_2431->var_has_height_attr = Asbool(x_2494);
    WriteMetric();
    auto x_2499 = eval_expr_x_2498(x_2431);
    if (x_2431->has_var_is_svg_block) {
      auto x_2500 = x_2431->var_is_svg_block;
      if (!EqualValue(x_2500, x_2499)) {
        var_modified_x_2501(x_2431);
      }
    }
    x_2431->has_var_is_svg_block = true;
    x_2431->var_is_svg_block = Asbool(x_2499);
    WriteMetric();
    auto x_2504 = eval_expr_x_2503(x_2431);
    if (x_2431->has_var_inside_svg) {
      auto x_2505 = x_2431->var_inside_svg;
      if (!EqualValue(x_2505, x_2504)) {
        var_modified_x_2506(x_2431);
      }
    }
    x_2431->has_var_inside_svg = true;
    x_2431->var_inside_svg = Asbool(x_2504);
    WriteMetric();
    auto x_2509 = eval_expr_x_2508(x_2431);
    if (x_2431->has_var_disabled) {
      auto x_2510 = x_2431->var_disabled;
      if (!EqualValue(x_2510, x_2509)) {
        var_modified_x_2511(x_2431);
      }
    }
    x_2431->has_var_disabled = true;
    x_2431->var_disabled = Asbool(x_2509);
    WriteMetric();
    auto x_2514 = eval_expr_x_2513(x_2431);
    if (x_2431->has_var_visible) {
      auto x_2515 = x_2431->var_visible;
      if (!EqualValue(x_2515, x_2514)) {
        var_modified_x_2516(x_2431);
      }
    }
    x_2431->has_var_visible = true;
    x_2431->var_visible = Asbool(x_2514);
    WriteMetric();
    auto x_2519 = eval_expr_x_2518(x_2431);
    if (x_2431->has_var_line_break) {
      auto x_2520 = x_2431->var_line_break;
      if (!EqualValue(x_2520, x_2519)) {
        var_modified_x_2521(x_2431);
      }
    }
    x_2431->has_var_line_break = true;
    x_2431->var_line_break = Asbool(x_2519);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_2314(const auto &x_2523) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2524) {
    WriteMetric();
    auto x_2526 = eval_expr_x_2525(x_2523);
    if (x_2523->has_var_box_width) {
      auto x_2527 = x_2523->var_box_width;
      if (!EqualValue(x_2527, x_2526)) {
        var_modified_x_2528(x_2523);
      }
    }
    x_2523->has_var_box_width = true;
    x_2523->var_box_width = Asdouble(x_2526);
    WriteMetric();
    auto x_2531 = eval_expr_x_2530(x_2523);
    if (x_2523->has_var_box_height) {
      auto x_2532 = x_2523->var_box_height;
      if (!EqualValue(x_2532, x_2531)) {
        var_modified_x_2533(x_2523);
      }
    }
    x_2523->has_var_box_height = true;
    x_2523->var_box_height = Asdouble(x_2531);
    WriteMetric();
    auto x_2536 = eval_expr_x_2535(x_2523);
    if (x_2523->has_var_left_over) {
      auto x_2537 = x_2523->var_left_over;
      if (!EqualValue(x_2537, x_2536)) {
        var_modified_x_2538(x_2523);
      }
    }
    x_2523->has_var_left_over = true;
    x_2523->var_left_over = Asdouble(x_2536);
    WriteMetric();
    auto x_2541 = eval_expr_x_2540(x_2523);
    if (x_2523->has_var_flex_amount) {
      auto x_2542 = x_2523->var_flex_amount;
      if (!EqualValue(x_2542, x_2541)) {
        var_modified_x_2543(x_2523);
      }
    }
    x_2523->has_var_flex_amount = true;
    x_2523->var_flex_amount = Asdouble(x_2541);
    WriteMetric();
    auto x_2546 = eval_expr_x_2545(x_2523);
    if (x_2523->has_var_flex_unit) {
      auto x_2547 = x_2523->var_flex_unit;
      if (!EqualValue(x_2547, x_2546)) {
        var_modified_x_2548(x_2523);
      }
    }
    x_2523->has_var_flex_unit = true;
    x_2523->var_flex_unit = Asdouble(x_2546);
    WriteMetric();
    auto x_2551 = eval_expr_x_2550(x_2523);
    if (x_2523->has_var_x) {
      auto x_2552 = x_2523->var_x;
      if (!EqualValue(x_2552, x_2551)) {
        var_modified_x_2553(x_2523);
      }
    }
    x_2523->has_var_x = true;
    x_2523->var_x = Asdouble(x_2551);
    WriteMetric();
    auto x_2556 = eval_expr_x_2555(x_2523);
    if (x_2523->has_var_width_internal) {
      auto x_2557 = x_2523->var_width_internal;
      if (!EqualValue(x_2557, x_2556)) {
        var_modified_x_2558(x_2523);
      }
    }
    x_2523->has_var_width_internal = true;
    x_2523->var_width_internal = Asdouble(x_2556);
    WriteMetric();
    auto x_2561 = eval_expr_x_2560(x_2523);
    if (x_2523->has_var_width_external) {
      auto x_2562 = x_2523->var_width_external;
      if (!EqualValue(x_2562, x_2561)) {
        var_modified_x_2563(x_2523);
      }
    }
    x_2523->has_var_width_external = true;
    x_2523->var_width_external = Asdouble(x_2561);
    WriteMetric();
    auto x_2566 = eval_expr_x_2565(x_2523);
    if (x_2523->has_var_y) {
      auto x_2567 = x_2523->var_y;
      if (!EqualValue(x_2567, x_2566)) {
        var_modified_x_2568(x_2523);
      }
    }
    x_2523->has_var_y = true;
    x_2523->var_y = Asdouble(x_2566);
    WriteMetric();
    auto x_2571 = eval_expr_x_2570(x_2523);
    if (x_2523->has_var_height_internal) {
      auto x_2572 = x_2523->var_height_internal;
      if (!EqualValue(x_2572, x_2571)) {
        var_modified_x_2573(x_2523);
      }
    }
    x_2523->has_var_height_internal = true;
    x_2523->var_height_internal = Asdouble(x_2571);
    WriteMetric();
    auto x_2576 = eval_expr_x_2575(x_2523);
    if (x_2523->has_var_height_external) {
      auto x_2577 = x_2523->var_height_external;
      if (!EqualValue(x_2577, x_2576)) {
        var_modified_x_2578(x_2523);
      }
    }
    x_2523->has_var_height_external = true;
    x_2523->var_height_external = Asdouble(x_2576);
    WriteMetric();
    auto x_2581 = eval_expr_x_2580(x_2523);
    if (x_2523->has_var_line_height) {
      auto x_2582 = x_2523->var_line_height;
      if (!EqualValue(x_2582, x_2581)) {
        var_modified_x_2583(x_2523);
      }
    }
    x_2523->has_var_line_height = true;
    x_2523->var_line_height = Asdouble(x_2581);
    return MakeUnit();
  })));
}
Unit x_2170(const auto &x_2171, const auto &x_2172, const auto &x_2173) {
  auto x_2174 = ListHeadExn(x_2171);
  auto x_2175 = ListTailExn(x_2171);
  if (ListIsEmpty(x_2175)) {
    auto x_2176 = ListSplitN(x_2172->children, x_2174);
    OutputChangeMetric(IntAdd(layout_size_x_2130(ListNthExn(x_2172->children, x_2174)), layout_size_x_2130(x_2173)));
    x_2172->children = ListAppend(Zro(x_2176), Cons(x_2173, ListTailExn(Fst(x_2176))));
    return MakeUnit();
  } else {
    return x_2170(x_2175, ListNthExn(x_2172->children, x_2174), x_2173);
  }
}
Unit replace_layout_node_x_2169(const auto &x_2171, const auto &x_2172, const auto &x_2173) {
  return x_2170(x_2171, x_2172, x_2173);
}
Unit x_2177(const auto &x_2178, const auto &x_2179, const auto &x_2180) {
  auto x_2181 = ListHeadExn(x_2178);
  auto x_2182 = ListTailExn(x_2178);
  if (ListIsEmpty(x_2182)) {
    OutputChangeMetric(layout_size_x_2130(x_2180));
    auto x_2183 = ListSplitN(x_2179->children, x_2181);
    x_2179->children = ListAppend(Zro(x_2183), Cons(x_2180, Fst(x_2183)));
    return MakeUnit();
  } else {
    return x_2177(x_2182, ListNthExn(x_2179->children, x_2181), x_2180);
  }
}
Unit add_layout_node_x_2167(const auto &x_2178, const auto &x_2179, const auto &x_2180) {
  return x_2177(x_2178, x_2179, x_2180);
}
Unit x_2184(const auto &x_2185, const auto &x_2186, const auto &x_2187) {
  auto x_2188 = ListHeadExn(x_2185);
  auto x_2189 = ListTailExn(x_2185);
  if (ListIsEmpty(x_2189)) {
    OutputChangeMetric(layout_size_x_2130(ListNthExn(x_2186->children, x_2188)));
    auto x_2190 = ListSplitN(x_2186->children, x_2188);
    x_2186->children = ListAppend(Zro(x_2190), ListTailExn(Fst(x_2190)));
    return MakeUnit();
  } else {
    return x_2184(x_2189, ListNthExn(x_2186->children, x_2188), x_2187);
  }
}
Unit remove_layout_node_x_2165(const auto &x_2185, const auto &x_2186, const auto &x_2187) {
  return x_2184(x_2185, x_2186, x_2187);
}
Unit x_2191(const auto &x_2192, const auto &x_2193, const auto &x_2194) {
  return ListMatch(
      x_2192,
      [&](const auto &x_2197) {
        auto x_2198 = Zro(x_2194);
        auto x_2199 = Zro(x_2198);
        auto x_2200 = Fst(x_2198);
        auto x_2201 = Fst(x_2194);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3804 = x_2199;
        if (x_3804 == "attributes") {
          std::string x_3805 = x_2200;
          if (x_3805 == "width") {
            WriteMetric();
            x_2193->has_attr_width = true;
            x_2193->attr_width = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3805 == "image_height") {
            WriteMetric();
            x_2193->has_attr_image_height = true;
            x_2193->attr_image_height = Asint64_t(x_2201);
            return MakeUnit();
          } else if (x_3805 == "image_width") {
            WriteMetric();
            x_2193->has_attr_image_width = true;
            x_2193->attr_image_width = Asint64_t(x_2201);
            return MakeUnit();
          } else if (x_3805 == "height") {
            WriteMetric();
            x_2193->has_attr_height = true;
            x_2193->attr_height = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3805 == "viewBox") {
            WriteMetric();
            x_2193->has_attr_viewBox = true;
            x_2193->attr_viewBox = AsDEString(x_2201);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3804 == "properties") {
          std::string x_3806 = x_2200;
          if (x_3806 == "width") {
            WriteMetric();
            x_2193->has_prop_width = true;
            x_2193->prop_width = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3806 == "flex-grow") {
            WriteMetric();
            x_2193->has_prop_flex_grow = true;
            x_2193->prop_flex_grow = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3806 == "height") {
            WriteMetric();
            x_2193->has_prop_height = true;
            x_2193->prop_height = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3806 == "display") {
            WriteMetric();
            x_2193->has_prop_display = true;
            x_2193->prop_display = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3806 == "position") {
            WriteMetric();
            x_2193->has_prop_position = true;
            x_2193->prop_position = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3806 == "flex-shrink") {
            WriteMetric();
            x_2193->has_prop_flex_shrink = true;
            x_2193->prop_flex_shrink = AsDEString(x_2201);
            return MakeUnit();
          } else if (x_3806 == "flex-direction") {
            WriteMetric();
            x_2193->has_prop_flex_direction = true;
            x_2193->prop_flex_direction = AsDEString(x_2201);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2195, const auto &x_2196) {
        return x_2191(x_2196, ListNthExn(x_2193->children, x_2195), x_2194);
      });
}
Unit insert_value_x_2163(const auto &x_2192, const auto &x_2193, const auto &x_2194) {
  return x_2191(x_2192, x_2193, x_2194);
}
Unit x_2202(const auto &x_2203, const auto &x_2204, const auto &x_2205) {
  return ListMatch(
      x_2203,
      [&](const auto &x_2208) {
        auto x_2209 = Zro(x_2205);
        auto x_2210 = Fst(x_2205);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3807 = x_2209;
        if (x_3807 == "attributes") {
          std::string x_3808 = x_2210;
          if (x_3808 == "width") {
            WriteMetric();
            x_2204->has_attr_width = false;
            return MakeUnit();
          } else if (x_3808 == "image_height") {
            WriteMetric();
            x_2204->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_3808 == "image_width") {
            WriteMetric();
            x_2204->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_3808 == "height") {
            WriteMetric();
            x_2204->has_attr_height = false;
            return MakeUnit();
          } else if (x_3808 == "viewBox") {
            WriteMetric();
            x_2204->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3807 == "properties") {
          std::string x_3809 = x_2210;
          if (x_3809 == "width") {
            WriteMetric();
            x_2204->has_prop_width = false;
            return MakeUnit();
          } else if (x_3809 == "flex-grow") {
            WriteMetric();
            x_2204->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_3809 == "height") {
            WriteMetric();
            x_2204->has_prop_height = false;
            return MakeUnit();
          } else if (x_3809 == "display") {
            WriteMetric();
            x_2204->has_prop_display = false;
            return MakeUnit();
          } else if (x_3809 == "position") {
            WriteMetric();
            x_2204->has_prop_position = false;
            return MakeUnit();
          } else if (x_3809 == "flex-shrink") {
            WriteMetric();
            x_2204->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_3809 == "flex-direction") {
            WriteMetric();
            x_2204->has_prop_flex_direction = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2206, const auto &x_2207) {
        return x_2202(x_2207, ListNthExn(x_2204->children, x_2206), x_2205);
      });
}
Unit delete_value_x_2161(const auto &x_2203, const auto &x_2204, const auto &x_2205) {
  return x_2202(x_2203, x_2204, x_2205);
}
Unit x_2211(const auto &x_2212, const auto &x_2213, const auto &x_2214) {
  return ListMatch(
      x_2212,
      [&](const auto &x_2217) {
        auto x_2218 = Zro(x_2214);
        auto x_2219 = Zro(x_2218);
        auto x_2220 = Fst(x_2218);
        auto x_2221 = Fst(x_2214);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3810 = x_2219;
        if (x_3810 == "attributes") {
          std::string x_3811 = x_2220;
          if (x_3811 == "width") {
            WriteMetric();
            x_2213->has_attr_width = false;
            WriteMetric();
            x_2213->has_attr_width = true;
            x_2213->attr_width = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3811 == "image_height") {
            WriteMetric();
            x_2213->has_attr_image_height = false;
            WriteMetric();
            x_2213->has_attr_image_height = true;
            x_2213->attr_image_height = Asint64_t(x_2221);
            return MakeUnit();
          } else if (x_3811 == "image_width") {
            WriteMetric();
            x_2213->has_attr_image_width = false;
            WriteMetric();
            x_2213->has_attr_image_width = true;
            x_2213->attr_image_width = Asint64_t(x_2221);
            return MakeUnit();
          } else if (x_3811 == "height") {
            WriteMetric();
            x_2213->has_attr_height = false;
            WriteMetric();
            x_2213->has_attr_height = true;
            x_2213->attr_height = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3811 == "viewBox") {
            WriteMetric();
            x_2213->has_attr_viewBox = false;
            WriteMetric();
            x_2213->has_attr_viewBox = true;
            x_2213->attr_viewBox = AsDEString(x_2221);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3810 == "properties") {
          std::string x_3812 = x_2220;
          if (x_3812 == "width") {
            WriteMetric();
            x_2213->has_prop_width = false;
            WriteMetric();
            x_2213->has_prop_width = true;
            x_2213->prop_width = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3812 == "flex-grow") {
            WriteMetric();
            x_2213->has_prop_flex_grow = false;
            WriteMetric();
            x_2213->has_prop_flex_grow = true;
            x_2213->prop_flex_grow = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3812 == "height") {
            WriteMetric();
            x_2213->has_prop_height = false;
            WriteMetric();
            x_2213->has_prop_height = true;
            x_2213->prop_height = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3812 == "display") {
            WriteMetric();
            x_2213->has_prop_display = false;
            WriteMetric();
            x_2213->has_prop_display = true;
            x_2213->prop_display = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3812 == "position") {
            WriteMetric();
            x_2213->has_prop_position = false;
            WriteMetric();
            x_2213->has_prop_position = true;
            x_2213->prop_position = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3812 == "flex-shrink") {
            WriteMetric();
            x_2213->has_prop_flex_shrink = false;
            WriteMetric();
            x_2213->has_prop_flex_shrink = true;
            x_2213->prop_flex_shrink = AsDEString(x_2221);
            return MakeUnit();
          } else if (x_3812 == "flex-direction") {
            WriteMetric();
            x_2213->has_prop_flex_direction = false;
            WriteMetric();
            x_2213->has_prop_flex_direction = true;
            x_2213->prop_flex_direction = AsDEString(x_2221);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2215, const auto &x_2216) {
        return x_2211(x_2216, ListNthExn(x_2213->children, x_2215), x_2214);
      });
}
Unit replace_value_x_2159(const auto &x_2212, const auto &x_2213, const auto &x_2214) {
  return x_2211(x_2212, x_2213, x_2214);
}
Unit x_2222(const auto &x_2223, const auto &x_2224, const auto &x_2225) {
  auto x_2226 = ListHeadExn(x_2223);
  auto x_2227 = ListTailExn(x_2223);
  if (ListIsEmpty(x_2227)) {
    InputChangeMetric(IntAdd(node_size_x_2131(ListNthExn(x_2224->children, x_2226)), node_size_x_2131(x_2225)));
    auto x_2228 = ListSplitN(x_2224->children, x_2226);
    auto x_2229 = Zro(x_2228);
    auto x_2230 = Fst(x_2228);
    auto x_2231 = ListHeadExn(x_2230);
    auto x_2232 = ListTailExn(x_2230);
    x_2224->children = ListAppend(x_2229, x_2232);
    OptionMatch(
        x_2231->prev, [&](const auto &x_2234) { return MakeUnit(); },
        [&](const auto &x_2233) {
          x_2233->next = ToPath(x_2231->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2231->next, [&](const auto &x_2236) { return MakeUnit(); },
        [&](const auto &x_2235) {
          x_2235->prev = ToPath(x_2231->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2229)) {
      x_2224->first = ToPath(ListHead(x_2232));
    }
    if (ListIsEmpty(x_2232)) {
      x_2224->last = ToPath(ListLast(x_2229));
    }
    MakeUnit();
    auto x_2243 = ListSplitN(x_2224->children, x_2226);
    auto x_2244 = Zro(x_2243);
    auto x_2245 = Fst(x_2243);
    x_2224->children = ListAppend(x_2244, Cons(x_2225, x_2245));
    if (ListIsEmpty(x_2244)) {
      x_2224->first = x_2225.get();
    }
    if (ListIsEmpty(x_2245)) {
      x_2224->last = x_2225.get();
    }
    OptionMatch(
        ListLast(x_2244),
        [&](const auto &x_2247) {
          x_2225->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2246) {
          x_2225->prev = x_2246.get();
          x_2246->next = x_2225.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_2245),
        [&](const auto &x_2249) {
          x_2225->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2248) {
          x_2225->next = x_2248.get();
          x_2248->prev = x_2225.get();
          return MakeUnit();
        });
    x_2225->parent = x_2224.get();
    MakeUnit();
    return MakeUnit();
  } else {
    return x_2222(x_2227, ListNthExn(x_2224->children, x_2226), x_2225);
  }
}
Unit replace_node_x_2157(const auto &x_2223, const auto &x_2224, const auto &x_2225) {
  return x_2222(x_2223, x_2224, x_2225);
}
Unit x_2256(const auto &x_2257) {
  ListIter2(x_2257->children, [&](const auto &x_2258, const auto &x_2259) {
    x_2258->parent = x_2257.get();
    x_2259->parent = x_2257.get();
    x_2258->next = x_2259.get();
    x_2259->prev = x_2258.get();
    x_2256(x_2258);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2257->children),
      [&](const auto &x_2261) {
        x_2257->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2260) {
        x_2257->first = x_2260.get();
        x_2260->parent = x_2257.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2257->children),
      [&](const auto &x_2263) {
        x_2257->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2262) {
        x_2257->last = x_2262.get();
        x_2262->parent = x_2257.get();
        x_2256(x_2262);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2155(const auto &x_2257) { return x_2256(x_2257); }
Unit x_2264(const auto &x_2265, const auto &x_2266, const auto &x_2267) {
  auto x_2268 = ListHeadExn(x_2265);
  auto x_2269 = ListTailExn(x_2265);
  if (ListIsEmpty(x_2269)) {
    InputChangeMetric(node_size_x_2131(ListNthExn(x_2266->children, x_2268)));
    auto x_2270 = ListSplitN(x_2266->children, x_2268);
    auto x_2271 = Zro(x_2270);
    auto x_2272 = Fst(x_2270);
    auto x_2273 = ListHeadExn(x_2272);
    auto x_2274 = ListTailExn(x_2272);
    x_2266->children = ListAppend(x_2271, x_2274);
    OptionMatch(
        x_2273->prev, [&](const auto &x_2276) { return MakeUnit(); },
        [&](const auto &x_2275) {
          x_2275->next = ToPath(x_2273->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2273->next, [&](const auto &x_2278) { return MakeUnit(); },
        [&](const auto &x_2277) {
          x_2277->prev = ToPath(x_2273->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2271)) {
      x_2266->first = ToPath(ListHead(x_2274));
    }
    if (ListIsEmpty(x_2274)) {
      x_2266->last = ToPath(ListLast(x_2271));
    }
    return MakeUnit();
  } else {
    return x_2264(x_2269, ListNthExn(x_2266->children, x_2268), x_2267);
  }
}
Unit remove_node_x_2153(const auto &x_2265, const auto &x_2266, const auto &x_2267) {
  return x_2264(x_2265, x_2266, x_2267);
}
Unit x_2285(const auto &x_2286, const auto &x_2287, const auto &x_2288) {
  auto x_2289 = ListHeadExn(x_2286);
  auto x_2290 = ListTailExn(x_2286);
  if (ListIsEmpty(x_2290)) {
    InputChangeMetric(node_size_x_2131(x_2288));
    auto x_2291 = ListSplitN(x_2287->children, x_2289);
    auto x_2292 = Zro(x_2291);
    auto x_2293 = Fst(x_2291);
    x_2287->children = ListAppend(x_2292, Cons(x_2288, x_2293));
    if (ListIsEmpty(x_2292)) {
      x_2287->first = x_2288.get();
    }
    if (ListIsEmpty(x_2293)) {
      x_2287->last = x_2288.get();
    }
    OptionMatch(
        ListLast(x_2292),
        [&](const auto &x_2295) {
          x_2288->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2294) {
          x_2288->prev = x_2294.get();
          x_2294->next = x_2288.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_2293),
        [&](const auto &x_2297) {
          x_2288->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2296) {
          x_2288->next = x_2296.get();
          x_2296->prev = x_2288.get();
          return MakeUnit();
        });
    x_2288->parent = x_2287.get();
    return MakeUnit();
  } else {
    return x_2285(x_2290, ListNthExn(x_2287->children, x_2289), x_2288);
  }
}
Unit add_node_x_2150(const auto &x_2286, const auto &x_2287, const auto &x_2288) {
  return x_2285(x_2286, x_2287, x_2288);
}
Unit x_2304(const auto &x_2305) {
  ListIter2(x_2305->children, [&](const auto &x_2306, const auto &x_2307) {
    x_2306->parent = x_2305.get();
    x_2307->parent = x_2305.get();
    x_2306->next = x_2307.get();
    x_2307->prev = x_2306.get();
    x_2304(x_2306);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2305->children),
      [&](const auto &x_2309) {
        x_2305->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2308) {
        x_2305->first = x_2308.get();
        x_2308->parent = x_2305.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2305->children),
      [&](const auto &x_2311) {
        x_2305->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2310) {
        x_2305->last = x_2310.get();
        x_2310->parent = x_2305.get();
        x_2304(x_2310);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2148(const auto &x_2305) { return x_2304(x_2305); }
Unit eval_stmts_x_2144(const auto &x_2312) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2313) {
    eval_stmts_x_2314(x_2312);
    ListIter(x_2312->children, [&](const auto &x_2315) { return eval_stmts_x_2144(x_2315); });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_2143(const auto &x_2316) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2317) {
    eval_stmts_x_2318(x_2316);
    ListIter(x_2316->children, [&](const auto &x_2319) { return eval_stmts_x_2143(x_2319); });
    eval_stmts_x_2320(x_2316);
    return MakeUnit();
  })));
}
Unit x_2321(const auto &x_2322) {
  ListIter2(x_2322->children, [&](const auto &x_2323, const auto &x_2324) {
    x_2323->parent = x_2322.get();
    x_2324->parent = x_2322.get();
    x_2323->next = x_2324.get();
    x_2324->prev = x_2323.get();
    x_2321(x_2323);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2322->children),
      [&](const auto &x_2326) {
        x_2322->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2325) {
        x_2322->first = x_2325.get();
        x_2325->parent = x_2322.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2322->children),
      [&](const auto &x_2328) {
        x_2322->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2327) {
        x_2322->last = x_2327.get();
        x_2327->parent = x_2322.get();
        x_2321(x_2327);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2140(const auto &x_2322) { return x_2321(x_2322); }
int64_t x_2329(const auto &x_2330) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_2330->children, [&](const auto &x_2331) { return x_2329(x_2331); }));
}
int64_t node_size_x_2131(const auto &x_2330) { return x_2329(x_2330); }
int64_t x_2332(const auto &x_2333) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_2333->children, [&](const auto &x_2334) { return x_2332(x_2334); }));
}
int64_t layout_size_x_2130(const auto &x_2333) { return x_2332(x_2333); }
LayoutNode x_2335(const auto &x_2336) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_2336)), [&](const auto &x_2337) { return x_2335(x_2337); }));
}
LayoutNode json_to_layout_node_x_2129(const auto &x_2336) { return x_2335(x_2336); }
Node x_2338(const auto &x_2339) {
  return MakeNode(x_2339->name, x_2339->attr, x_2339->prop, x_2339->extern_id,
                  ListMap(x_2339->children, [&](const auto &x_2340) { return x_2338(x_2340); }));
}
Node node_to_fs_node_x_2128(const auto &x_2339) { return x_2338(x_2339); }
Node x_2341(const auto &x_2342) {
  return MakeNode(
      JsonToString(JsonMember("name", x_2342)), JsonToDict(JsonMember("attributes", x_2342)),
      JsonToDict(JsonMember("properties", x_2342)), JsonToInt(JsonMember("id", x_2342)),
      ListMap(JsonToList(JsonMember("children", x_2342)), [&](const auto &x_2343) { return x_2341(x_2343); }));
}
Node json_to_node_aux_x_2127(const auto &x_2342) { return x_2341(x_2342); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_2132) {
    PrintEndline("RUNNING FS_D");
    return WithInFile("command.json", [&](const auto &x_2133) {
      auto x_2134 = MakeRef(static_cast<int64_t>(0));
      auto x_2135 = FreshMetric();
      auto x_2136 = JsonOfString(InputLine(x_2133));
      auto x_2137 = JsonOfString(InputLine(x_2133));
      auto x_2138 = MakeStack();
      PushStack(x_2138, x_2136);
      PushStack(x_2138, x_2137);
      Assert(StringEqual(JsonToString(JsonMember("name", x_2136)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_2137)), "layout_init"));
      auto x_2141 = [&]() {
        auto x_2139 = json_to_node_aux_x_2127(JsonMember("node", x_2136));
        x_2139->parent = nullptr;
        x_2139->prev = nullptr;
        x_2139->next = nullptr;
        set_children_relation_x_2140(x_2139);
        return x_2139;
      }();
      auto x_2142 = json_to_layout_node_x_2129(JsonMember("node", x_2137));
      OutputChangeMetric(layout_size_x_2130(x_2142));
      InputChangeMetric(node_size_x_2131(x_2141));
      eval_stmts_x_2143(x_2141);
      eval_stmts_x_2144(x_2141);
      JsonToChannel(x_2132, [&]() {
        auto x_3813 = FreshJson();
        WriteJson(x_3813, "name", "FS_D");
        WriteJson(x_3813, "diff_num", ReadRef(x_2134));
        WriteJson(x_3813, "read_count", MetricReadCount());
        WriteJson(x_3813, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_3813, "write_count", MetricWriteCount());
        WriteJson(x_3813, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_3813, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_3813, "input_change_count", MetricInputChangeCount());
        WriteJson(x_3813, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_3813, "overhead_time", MetricOverheadCount());
        WriteJson(x_3813, "eval_time", MetricEvalCount());
        WriteJson(x_3813, "html", "");
        WriteJson(x_3813, "command", StackToList(x_2138));
        return x_3813;
      }());
      OutputString(x_2132, "\n");
      ClearStack(x_2138);
      WriteRef(x_2134, IntAdd(ReadRef(x_2134), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_2133, [&](const auto &x_2145) {
        auto x_2146 = JsonOfString(x_2145);
        PushStack(x_2138, x_2146);
        std::string x_3815 = JsonToString(JsonMember("name", x_2146));
        if (x_3815 == "add") {
          return add_node_x_2150(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2149) { return JsonToInt(x_2149); }),
              x_2141, [&]() {
                auto x_2147 = json_to_node_aux_x_2127(JsonMember("node", x_2146));
                x_2147->parent = nullptr;
                x_2147->prev = nullptr;
                x_2147->next = nullptr;
                set_children_relation_x_2148(x_2147);
                return x_2147;
              }());
        } else if (x_3815 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_2151) {
            eval_stmts_x_2143(x_2141);
            eval_stmts_x_2144(x_2141);
            return MakeUnit();
          })));
          JsonToChannel(x_2132, [&]() {
            auto x_3814 = FreshJson();
            WriteJson(x_3814, "name", "FS_D");
            WriteJson(x_3814, "diff_num", ReadRef(x_2134));
            WriteJson(x_3814, "read_count", MetricReadCount());
            WriteJson(x_3814, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_3814, "write_count", MetricWriteCount());
            WriteJson(x_3814, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_3814, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_3814, "input_change_count", MetricInputChangeCount());
            WriteJson(x_3814, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_3814, "overhead_time", MetricOverheadCount());
            WriteJson(x_3814, "eval_time", MetricEvalCount());
            WriteJson(x_3814, "html", "");
            WriteJson(x_3814, "command", StackToList(x_2138));
            return x_3814;
          }());
          OutputString(x_2132, "\n");
          ClearStack(x_2138);
          WriteRef(x_2134, IntAdd(ReadRef(x_2134), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_3815 == "remove") {
          return remove_node_x_2153(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2152) { return JsonToInt(x_2152); }),
              x_2141, MakeUnit());
        } else if (x_3815 == "replace") {
          return replace_node_x_2157(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2156) { return JsonToInt(x_2156); }),
              x_2141, [&]() {
                auto x_2154 = json_to_node_aux_x_2127(JsonMember("node", x_2146));
                x_2154->parent = nullptr;
                x_2154->prev = nullptr;
                x_2154->next = nullptr;
                set_children_relation_x_2155(x_2154);
                return x_2154;
              }());
        } else if (x_3815 == "replace_value") {
          return replace_value_x_2159(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2158) { return JsonToInt(x_2158); }),
              x_2141,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2146)), JsonToString(JsonMember("key", x_2146))),
                       JsonToValue(JsonMember("value", x_2146))));
        } else if (x_3815 == "delete_value") {
          return delete_value_x_2161(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2160) { return JsonToInt(x_2160); }),
              x_2141, MakePair(JsonToString(JsonMember("type", x_2146)), JsonToString(JsonMember("key", x_2146))));
        } else if (x_3815 == "insert_value") {
          return insert_value_x_2163(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2162) { return JsonToInt(x_2162); }),
              x_2141,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2146)), JsonToString(JsonMember("key", x_2146))),
                       JsonToValue(JsonMember("value", x_2146))));
        } else if (x_3815 == "layout_remove") {
          return remove_layout_node_x_2165(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2164) { return JsonToInt(x_2164); }),
              x_2142, MakeUnit());
        } else if (x_3815 == "layout_add") {
          return add_layout_node_x_2167(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2166) { return JsonToInt(x_2166); }),
              x_2142, json_to_layout_node_x_2129(JsonMember("node", x_2146)));
        } else if (x_3815 == "layout_replace") {
          return replace_layout_node_x_2169(
              ListMap(JsonToList(JsonMember("path", x_2146)), [&](const auto &x_2168) { return JsonToInt(x_2168); }),
              x_2142, json_to_layout_node_x_2129(JsonMember("node", x_2146)));
        } else if (x_3815 == "layout_info_changed") {
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