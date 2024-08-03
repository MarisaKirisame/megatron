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
struct Meta {};

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
Unit var_modified_x_2764(const auto &x_2766);
auto eval_expr_x_2761(const auto &x_2771);
Unit var_modified_x_2759(const auto &x_2788);
auto eval_expr_x_2756(const auto &x_2791);
Unit var_modified_x_2754(const auto &x_2800);
auto eval_expr_x_2751(const auto &x_2804);
Unit var_modified_x_2749(const auto &x_2857);
auto eval_expr_x_2746(const auto &x_2863);
Unit var_modified_x_2744(const auto &x_2888);
auto eval_expr_x_2741(const auto &x_2893);
Unit var_modified_x_2739(const auto &x_2902);
auto eval_expr_x_2736(const auto &x_2906);
Unit var_modified_x_2734(const auto &x_2959);
auto eval_expr_x_2731(const auto &x_2965);
Unit var_modified_x_2729(const auto &x_2986);
auto eval_expr_x_2726(const auto &x_2989);
Unit var_modified_x_2724(const auto &x_3010);
auto eval_expr_x_2721(const auto &x_3013);
Unit var_modified_x_2719(const auto &x_3026);
auto eval_expr_x_2716(const auto &x_3030);
Unit var_modified_x_2714(const auto &x_3051);
auto eval_expr_x_2711(const auto &x_3054);
Unit var_modified_x_2709(const auto &x_3059);
auto eval_expr_x_2706(const auto &x_3062);
Unit var_modified_x_2702(const auto &x_3067);
auto eval_expr_x_2699(const auto &x_3077);
Unit var_modified_x_2697(const auto &x_3156);
auto eval_expr_x_2694(const auto &x_3159);
Unit var_modified_x_2692(const auto &x_3176);
auto eval_expr_x_2689(const auto &x_3181);
Unit var_modified_x_2687(const auto &x_3186);
auto eval_expr_x_2684(const auto &x_3191);
Unit var_modified_x_2682(const auto &x_3200);
auto eval_expr_x_2679(const auto &x_3203);
Unit var_modified_x_2677(const auto &x_3204);
auto eval_expr_x_2674(const auto &x_3207);
Unit var_modified_x_2672(const auto &x_3212);
auto eval_expr_x_2669(const auto &x_3216);
Unit var_modified_x_2667(const auto &x_3227);
auto eval_expr_x_2664(const auto &x_3230);
Unit var_modified_x_2662(const auto &x_3235);
auto eval_expr_x_2659(const auto &x_3239);
Unit var_modified_x_2657(const auto &x_3250);
auto eval_expr_x_2654(const auto &x_3254);
Unit var_modified_x_2652(const auto &x_3279);
auto eval_expr_x_2649(const auto &x_3284);
Unit var_modified_x_2647(const auto &x_3313);
auto eval_expr_x_2644(const auto &x_3316);
Unit var_modified_x_2642(const auto &x_3319);
auto eval_expr_x_2639(const auto &x_3325);
Unit var_modified_x_2637(const auto &x_3334);
auto eval_expr_x_2634(const auto &x_3340);
Unit var_modified_x_2632(const auto &x_3349);
auto eval_expr_x_2629(const auto &x_3353);
Unit var_modified_x_2627(const auto &x_3356);
auto eval_expr_x_2624(const auto &x_3360);
Unit var_modified_x_2622(const auto &x_3363);
auto eval_expr_x_2619(const auto &x_3368);
Unit var_modified_x_2617(const auto &x_3371);
auto eval_expr_x_2614(const auto &x_3376);
Unit var_modified_x_2610(const auto &x_3379);
auto eval_expr_x_2607(const auto &x_3387);
Unit var_modified_x_2605(const auto &x_3416);
auto eval_expr_x_2602(const auto &x_3424);
Unit var_modified_x_2600(const auto &x_3437);
auto eval_expr_x_2597(const auto &x_3445);
Unit var_modified_x_2595(const auto &x_3454);
auto eval_expr_x_2592(const auto &x_3457);
Unit var_modified_x_2590(const auto &x_3466);
auto eval_expr_x_2587(const auto &x_3470);
Unit var_modified_x_2585(const auto &x_3615);
auto eval_expr_x_2582(const auto &x_3618);
Unit var_modified_x_2580(const auto &x_3667);
auto eval_expr_x_2577(const auto &x_3671);
Unit var_modified_x_2575(const auto &x_3674);
auto eval_expr_x_2572(const auto &x_3677);
Unit var_modified_x_2570(const auto &x_3686);
auto eval_expr_x_2567(const auto &x_3694);
Unit var_modified_x_2565(const auto &x_3703);
auto eval_expr_x_2562(const auto &x_3711);
Unit var_modified_x_2560(const auto &x_3720);
auto eval_expr_x_2557(const auto &x_3726);
Unit var_modified_x_2555(const auto &x_3739);
auto eval_expr_x_2552(const auto &x_3742);
Unit var_modified_x_2550(const auto &x_3751);
auto eval_expr_x_2547(const auto &x_3755);
Unit var_modified_x_2545(const auto &x_3908);
auto eval_expr_x_2542(const auto &x_3911);
Unit var_modified_x_2540(const auto &x_3916);
auto eval_expr_x_2537(const auto &x_3919);
Unit var_modified_x_2535(const auto &x_3968);
auto eval_expr_x_2532(const auto &x_3971);
Unit var_modified_x_2530(const auto &x_3984);
auto eval_expr_x_2527(const auto &x_3988);
Unit eval_stmts_x_2501(const auto &x_2525);
Unit eval_stmts_x_2497(const auto &x_2612);
Unit eval_stmts_x_2491(const auto &x_2704);
Unit x_2342(const auto &x_2343, const auto &x_2344, const auto &x_2345);
Unit x_2349(const auto &x_2350, const auto &x_2351, const auto &x_2352);
Unit x_2356(const auto &x_2357, const auto &x_2358, const auto &x_2359);
Unit x_2363(const auto &x_2364, const auto &x_2365, const auto &x_2366);
Unit x_2374(const auto &x_2375, const auto &x_2376, const auto &x_2377);
Unit x_2383(const auto &x_2384, const auto &x_2385, const auto &x_2386);
Unit x_2394(const auto &x_2395, const auto &x_2396, const auto &x_2397);
Unit x_2430(const auto &x_2431);
Unit x_2438(const auto &x_2439, const auto &x_2440, const auto &x_2441);
Unit x_2459(const auto &x_2460, const auto &x_2461, const auto &x_2462);
Unit x_2480(const auto &x_2481);
Unit eval_stmts_x_2316(const auto &x_2488);
Unit eval_stmts_x_2314(const auto &x_2494);
Unit x_2502(const auto &x_2503);
int64_t x_2510(const auto &x_2511);
int64_t x_2513(const auto &x_2514);
LayoutNode x_2516(const auto &x_2517);
Node x_2519(const auto &x_2520);
Node x_2522(const auto &x_2523);
Unit var_modified_x_2764(const auto &x_2766) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2767) { return MakeUnit(); })));
}
auto eval_expr_x_2761(const auto &x_2771) {
  if ((x_2771->prev != nullptr) && (!(x_2771->prev)->var_line_break)) {
    return max(x_2771->var_height_external, (x_2771->prev)->var_line_height);
  } else {
    return x_2771->var_height_external;
  }
}
Unit var_modified_x_2759(const auto &x_2788) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2789) { return MakeUnit(); })));
}
auto eval_expr_x_2756(const auto &x_2791) {
  if (eq(x_2791->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2791->var_height_internal;
  }
}
Unit var_modified_x_2754(const auto &x_2800) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2801) { return MakeUnit(); })));
}
auto eval_expr_x_2751(const auto &x_2804) {
  if (x_2804->var_intrinsic_height_is_height) {
    return x_2804->var_intrinsic_height_internal;
  } else {
    if ((x_2804->parent != nullptr) && (x_2804->parent)->var_is_flex_column) {
      return plus(x_2804->var_intrinsic_height_internal,
                  mult(x_2804->var_flex_amount, (x_2804->parent)->var_flex_unit));
    } else {
      if (x_2804->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2804->var_box_height, divide(x_2804->var_height_expr.r.a0, 100.));
      } else {
        return max(x_2804->var_box_height, x_2804->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_2749(const auto &x_2857) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2858) { return MakeUnit(); })));
}
auto eval_expr_x_2746(const auto &x_2863) {
  if (x_2863->prev != nullptr) {
    if (x_2863->var_line_break || (x_2863->prev)->var_line_break) {
      return plus((x_2863->prev)->var_y, (x_2863->prev)->var_line_height);
    } else {
      return (x_2863->prev)->var_y;
    }
  } else {
    if (x_2863->parent != nullptr) {
      return (x_2863->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2744(const auto &x_2888) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2889) { return MakeUnit(); })));
}
auto eval_expr_x_2741(const auto &x_2893) {
  if (eq(x_2893->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_2893->var_width_internal;
  }
}
Unit var_modified_x_2739(const auto &x_2902) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2903) { return MakeUnit(); })));
}
auto eval_expr_x_2736(const auto &x_2906) {
  if (x_2906->var_intrinsic_width_is_width) {
    return x_2906->var_intrinsic_width_internal;
  } else {
    if ((x_2906->parent != nullptr) && (x_2906->parent)->var_is_flex_row) {
      return plus(x_2906->var_intrinsic_width_internal, mult(x_2906->var_flex_amount, (x_2906->parent)->var_flex_unit));
    } else {
      if (x_2906->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_2906->var_box_width, divide(x_2906->var_width_expr.r.a0, 100.));
      } else {
        return max(x_2906->var_box_width, x_2906->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_2734(const auto &x_2959) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2960) { return MakeUnit(); })));
}
auto eval_expr_x_2731(const auto &x_2965) {
  if (x_2965->prev != nullptr) {
    if (x_2965->var_line_break || (x_2965->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2965->prev)->var_x, (x_2965->prev)->var_width_external);
    }
  } else {
    if (x_2965->parent != nullptr) {
      return (x_2965->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2729(const auto &x_2986) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_2987) { return MakeUnit(); })));
}
auto eval_expr_x_2726(const auto &x_2989) {
  if (gt(x_2989->var_left_over, 0.)) {
    return divide(x_2989->var_left_over, x_2989->var_flex_grow_sum);
  } else {
    return divide(x_2989->var_left_over, x_2989->var_flex_shrink_sum);
  }
}
Unit var_modified_x_2724(const auto &x_3010) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3011) { return MakeUnit(); })));
}
auto eval_expr_x_2721(const auto &x_3013) {
  if ((x_3013->parent != nullptr) && gt((x_3013->parent)->var_left_over, 0.)) {
    return x_3013->var_flex_grow;
  } else {
    return x_3013->var_flex_shrink;
  }
}
Unit var_modified_x_2719(const auto &x_3026) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3027) { return MakeUnit(); })));
}
auto eval_expr_x_2716(const auto &x_3030) {
  if (x_3030->var_is_flex_row) {
    return minus(x_3030->var_box_width, (x_3030->last != nullptr) ? ((x_3030->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_3030->var_box_height, (x_3030->last != nullptr) ? ((x_3030->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_2714(const auto &x_3051) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3052) { return MakeUnit(); })));
}
auto eval_expr_x_2711(const auto &x_3054) {
  if (x_3054->parent != nullptr) {
    return (x_3054->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_2709(const auto &x_3059) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3060) { return MakeUnit(); })));
}
auto eval_expr_x_2706(const auto &x_3062) {
  if (x_3062->parent != nullptr) {
    return (x_3062->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_2702(const auto &x_3067) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3068) { return MakeUnit(); })));
}
auto eval_expr_x_2699(const auto &x_3077) {
  if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_3077->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_3077->parent != nullptr) &&
          (eq((x_3077->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_3077->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_3077->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_3077->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
                    return false;
                  } else {
                    if (eq(x_3077->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                      return true;
                    } else {
                      return true;
                    }
                  }
                }
              } else {
                if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_3077->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_2697(const auto &x_3156) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3157) { return MakeUnit(); })));
}
auto eval_expr_x_2694(const auto &x_3159) {
  return (((!(x_3159->parent != nullptr)) || (x_3159->parent)->var_visible) &&
          (neq(x_3159->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_3159->var_inside_svg) && (!x_3159->var_disabled))));
}
Unit var_modified_x_2692(const auto &x_3176) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3177) { return MakeUnit(); })));
}
auto eval_expr_x_2689(const auto &x_3181) {
  if (eq(x_3181->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_3181->parent != nullptr) && (x_3181->parent)->var_disabled);
  }
}
Unit var_modified_x_2687(const auto &x_3186) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3187) { return MakeUnit(); })));
}
auto eval_expr_x_2684(const auto &x_3191) {
  return ((x_3191->parent != nullptr) && ((x_3191->parent)->var_is_svg_block || (x_3191->parent)->var_inside_svg));
}
Unit var_modified_x_2682(const auto &x_3200) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3201) { return MakeUnit(); })));
}
auto eval_expr_x_2679(const auto &x_3203) { return eq(x_3203->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_2677(const auto &x_3204) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3205) { return MakeUnit(); })));
}
auto eval_expr_x_2674(const auto &x_3207) {
  return neq(x_3207->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2672(const auto &x_3212) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3213) { return MakeUnit(); })));
}
auto eval_expr_x_2669(const auto &x_3216) {
  if (!x_3216->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3216->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_3216->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3216->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2667(const auto &x_3227) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3228) { return MakeUnit(); })));
}
auto eval_expr_x_2664(const auto &x_3230) {
  return neq(x_3230->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_2662(const auto &x_3235) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3236) { return MakeUnit(); })));
}
auto eval_expr_x_2659(const auto &x_3239) {
  if (!x_3239->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_3239->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_3239->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_3239->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_2657(const auto &x_3250) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3251) { return MakeUnit(); })));
}
auto eval_expr_x_2654(const auto &x_3254) {
  if ((x_3254->parent != nullptr) &&
      (eq((x_3254->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3254->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3254->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_3254->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2652(const auto &x_3279) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3280) { return MakeUnit(); })));
}
auto eval_expr_x_2649(const auto &x_3284) {
  if ((x_3284->parent != nullptr) &&
      (eq((x_3284->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_3284->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_3284->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row)) ||
        eq((x_3284->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_2647(const auto &x_3313) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3314) { return MakeUnit(); })));
}
auto eval_expr_x_2644(const auto &x_3316) {
  if (x_3316->has_prop_flex_direction) {
    return x_3316->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_2642(const auto &x_3319) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3320) { return MakeUnit(); })));
}
auto eval_expr_x_2639(const auto &x_3325) {
  return plus((x_3325->prev != nullptr) ? ((x_3325->prev)->var_flex_shrink_sum) : (0.), x_3325->var_flex_shrink);
}
Unit var_modified_x_2637(const auto &x_3334) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3335) { return MakeUnit(); })));
}
auto eval_expr_x_2634(const auto &x_3340) {
  return plus((x_3340->prev != nullptr) ? ((x_3340->prev)->var_flex_grow_sum) : (0.), x_3340->var_flex_grow);
}
Unit var_modified_x_2632(const auto &x_3349) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3350) { return MakeUnit(); })));
}
auto eval_expr_x_2629(const auto &x_3353) {
  if (x_3353->has_prop_flex_shrink) {
    return (x_3353->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2627(const auto &x_3356) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3357) { return MakeUnit(); })));
}
auto eval_expr_x_2624(const auto &x_3360) {
  if (x_3360->has_prop_flex_grow) {
    return (x_3360->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2622(const auto &x_3363) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3364) { return MakeUnit(); })));
}
auto eval_expr_x_2619(const auto &x_3368) {
  if (x_3368->has_prop_position) {
    return x_3368->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_2617(const auto &x_3371) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3372) { return MakeUnit(); })));
}
auto eval_expr_x_2614(const auto &x_3376) {
  if (x_3376->has_prop_display) {
    return x_3376->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_2610(const auto &x_3379) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3380) { return MakeUnit(); })));
}
auto eval_expr_x_2607(const auto &x_3387) {
  if (x_3387->prev != nullptr) {
    if (x_3387->var_line_break) {
      return plus((x_3387->prev)->var_finished_intrinsic_height_sum,
                  plus((x_3387->prev)->var_intrinsic_current_line_height, x_3387->var_intrinsic_height_external));
    } else {
      return (x_3387->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_3387->var_line_break) {
      return x_3387->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2605(const auto &x_3416) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3417) { return MakeUnit(); })));
}
auto eval_expr_x_2602(const auto &x_3424) {
  if (x_3424->var_line_break) {
    return 0.;
  } else {
    return max(x_3424->var_intrinsic_height_external,
               (x_3424->prev != nullptr) ? ((x_3424->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_2600(const auto &x_3437) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3438) { return MakeUnit(); })));
}
auto eval_expr_x_2597(const auto &x_3445) {
  return plus((x_3445->prev != nullptr) ? ((x_3445->prev)->var_intrinsic_height_sum) : (0.),
              x_3445->var_intrinsic_height_external);
}
Unit var_modified_x_2595(const auto &x_3454) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3455) { return MakeUnit(); })));
}
auto eval_expr_x_2592(const auto &x_3457) {
  if (eq(x_3457->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3457->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_2590(const auto &x_3466) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3467) { return MakeUnit(); })));
}
auto eval_expr_x_2587(const auto &x_3470) {
  if (eq(x_3470->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3470->var_inside_svg) {
      return 0.;
    } else {
      if (x_3470->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3470->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3470->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_3470->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_3470->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3470->var_height_expr.r.a0;
          } else {
            if (x_3470->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_3470->var_height_expr.r.a0;
            } else {
              return x_3470->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_3470->var_children_intrinsic_height,
              (eq(x_3470->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_3470->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3470->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3470->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_3470->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3470->var_has_height_attr &&
                                                  (x_3470->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3470->var_height_attr_expr.r.a0)
                                                     : ((x_3470->has_attr_viewBox)
                                                            ? (x_3470->attr_viewBox.r.a3)
                                                            : (mult((x_3470->attr_viewBox.r.a3),
                                                                    divide(x_3470->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3470->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3470->var_has_height_attr)
                                                            ? (x_3470->var_height_attr_expr.r.a0)
                                                            : ((x_3470->has_attr_image_height &&
                                                                (!x_3470->var_has_width_attr))
                                                                   ? (int_to_float(x_3470->attr_image_height))
                                                                   : ((neq(x_3470->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3470->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3470->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_3470->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_3470->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_3470->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2585(const auto &x_3615) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3616) { return MakeUnit(); })));
}
auto eval_expr_x_2582(const auto &x_3618) {
  if (eq(x_3618->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3618->var_inside_svg || x_3618->var_disabled)) {
    return true;
  } else {
    if ((x_3618->parent != nullptr) && (x_3618->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3618->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3618->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3618->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3618->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_3618->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2580(const auto &x_3667) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3668) { return MakeUnit(); })));
}
auto eval_expr_x_2577(const auto &x_3671) {
  if (x_3671->has_prop_height) {
    return x_3671->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_2575(const auto &x_3674) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3675) { return MakeUnit(); })));
}
auto eval_expr_x_2572(const auto &x_3677) {
  if (x_3677->last != nullptr) {
    return plus((x_3677->last)->var_finished_intrinsic_height_sum, (x_3677->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_2570(const auto &x_3686) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3687) { return MakeUnit(); })));
}
auto eval_expr_x_2567(const auto &x_3694) {
  return plus((x_3694->prev != nullptr) ? ((x_3694->prev)->var_intrinsic_width_sum) : (0.),
              x_3694->var_intrinsic_width_external);
}
Unit var_modified_x_2565(const auto &x_3703) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3704) { return MakeUnit(); })));
}
auto eval_expr_x_2562(const auto &x_3711) {
  return max(x_3711->var_intrinsic_current_line_width,
             (x_3711->prev != nullptr) ? ((x_3711->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_2560(const auto &x_3720) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3721) { return MakeUnit(); })));
}
auto eval_expr_x_2557(const auto &x_3726) {
  return plus(x_3726->var_intrinsic_width_external,
              ((x_3726->prev != nullptr) && (!(x_3726->prev)->var_line_break))
                  ? ((x_3726->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_2555(const auto &x_3739) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3740) { return MakeUnit(); })));
}
auto eval_expr_x_2552(const auto &x_3742) {
  if (eq(x_3742->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_3742->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_2550(const auto &x_3751) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3752) { return MakeUnit(); })));
}
auto eval_expr_x_2547(const auto &x_3755) {
  if (eq(x_3755->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_3755->var_inside_svg) {
      return 0.;
    } else {
      if (x_3755->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3755->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_3755->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_3755->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_3755->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_3755->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_3755->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_3755->var_width_expr.r.a0;
          } else {
            return x_3755->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_3755->var_children_intrinsic_width,
              (eq(x_3755->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_3755->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3755->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_3755->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_3755->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_3755->var_has_width_attr &&
                                                  (x_3755->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_3755->var_width_attr_expr.r.a0)
                                                     : (((!x_3755->var_has_width_attr) && x_3755->has_attr_viewBox)
                                                            ? (x_3755->attr_viewBox.r.a2)
                                                            : (mult((x_3755->attr_viewBox.r.a2),
                                                                    divide(x_3755->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_3755->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_3755->var_has_width_attr)
                                                            ? (x_3755->var_width_attr_expr.r.a0)
                                                            : ((x_3755->has_attr_image_width &&
                                                                (!x_3755->var_has_height_attr))
                                                                   ? (int_to_float(x_3755->attr_image_width))
                                                                   : ((neq(x_3755->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_3755->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_3755->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_3755->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_3755->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_3755->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_2545(const auto &x_3908) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3909) { return MakeUnit(); })));
}
auto eval_expr_x_2542(const auto &x_3911) {
  if (x_3911->last != nullptr) {
    return (x_3911->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_2540(const auto &x_3916) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3917) { return MakeUnit(); })));
}
auto eval_expr_x_2537(const auto &x_3919) {
  if (eq(x_3919->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_3919->var_inside_svg || x_3919->var_disabled)) {
    return true;
  } else {
    if ((x_3919->parent != nullptr) && (x_3919->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3919->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_3919->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_3919->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_3919->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_3919->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_2535(const auto &x_3968) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3969) { return MakeUnit(); })));
}
auto eval_expr_x_2532(const auto &x_3971) {
  if (eq(x_3971->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_3971->var_inside_svg) {
      return true;
    } else {
      if (x_3971->var_disabled) {
        return true;
      } else {if ( eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_3971->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_2530(const auto &x_3984) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_3985) { return MakeUnit(); })));
}
auto eval_expr_x_2527(const auto &x_3988) {
  if (x_3988->has_prop_width) {
    return x_3988->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_2501(const auto &x_2525) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2526) {
    WriteMetric();
    auto x_2528 = eval_expr_x_2527(x_2525);
    if (x_2525->has_var_width_expr) {
      auto x_2529 = x_2525->var_width_expr;
      if (!EqualValue(x_2529, x_2528)) {
        var_modified_x_2530(x_2525);
      }
    }
    x_2525->has_var_width_expr = true;
    x_2525->var_width_expr = AsDEString(x_2528);
    WriteMetric();
    auto x_2533 = eval_expr_x_2532(x_2525);
    if (x_2525->has_var_is_default_case) {
      auto x_2534 = x_2525->var_is_default_case;
      if (!EqualValue(x_2534, x_2533)) {
        var_modified_x_2535(x_2525);
      }
    }
    x_2525->has_var_is_default_case = true;
    x_2525->var_is_default_case = Asbool(x_2533);
    WriteMetric();
    auto x_2538 = eval_expr_x_2537(x_2525);
    if (x_2525->has_var_intrinsic_width_is_width) {
      auto x_2539 = x_2525->var_intrinsic_width_is_width;
      if (!EqualValue(x_2539, x_2538)) {
        var_modified_x_2540(x_2525);
      }
    }
    x_2525->has_var_intrinsic_width_is_width = true;
    x_2525->var_intrinsic_width_is_width = Asbool(x_2538);
    WriteMetric();
    auto x_2543 = eval_expr_x_2542(x_2525);
    if (x_2525->has_var_children_intrinsic_width) {
      auto x_2544 = x_2525->var_children_intrinsic_width;
      if (!EqualValue(x_2544, x_2543)) {
        var_modified_x_2545(x_2525);
      }
    }
    x_2525->has_var_children_intrinsic_width = true;
    x_2525->var_children_intrinsic_width = Asdouble(x_2543);
    WriteMetric();
    auto x_2548 = eval_expr_x_2547(x_2525);
    if (x_2525->has_var_intrinsic_width_internal) {
      auto x_2549 = x_2525->var_intrinsic_width_internal;
      if (!EqualValue(x_2549, x_2548)) {
        var_modified_x_2550(x_2525);
      }
    }
    x_2525->has_var_intrinsic_width_internal = true;
    x_2525->var_intrinsic_width_internal = Asdouble(x_2548);
    WriteMetric();
    auto x_2553 = eval_expr_x_2552(x_2525);
    if (x_2525->has_var_intrinsic_width_external) {
      auto x_2554 = x_2525->var_intrinsic_width_external;
      if (!EqualValue(x_2554, x_2553)) {
        var_modified_x_2555(x_2525);
      }
    }
    x_2525->has_var_intrinsic_width_external = true;
    x_2525->var_intrinsic_width_external = Asdouble(x_2553);
    WriteMetric();
    auto x_2558 = eval_expr_x_2557(x_2525);
    if (x_2525->has_var_intrinsic_current_line_width) {
      auto x_2559 = x_2525->var_intrinsic_current_line_width;
      if (!EqualValue(x_2559, x_2558)) {
        var_modified_x_2560(x_2525);
      }
    }
    x_2525->has_var_intrinsic_current_line_width = true;
    x_2525->var_intrinsic_current_line_width = Asdouble(x_2558);
    WriteMetric();
    auto x_2563 = eval_expr_x_2562(x_2525);
    if (x_2525->has_var_intrinsic_width_max) {
      auto x_2564 = x_2525->var_intrinsic_width_max;
      if (!EqualValue(x_2564, x_2563)) {
        var_modified_x_2565(x_2525);
      }
    }
    x_2525->has_var_intrinsic_width_max = true;
    x_2525->var_intrinsic_width_max = Asdouble(x_2563);
    WriteMetric();
    auto x_2568 = eval_expr_x_2567(x_2525);
    if (x_2525->has_var_intrinsic_width_sum) {
      auto x_2569 = x_2525->var_intrinsic_width_sum;
      if (!EqualValue(x_2569, x_2568)) {
        var_modified_x_2570(x_2525);
      }
    }
    x_2525->has_var_intrinsic_width_sum = true;
    x_2525->var_intrinsic_width_sum = Asdouble(x_2568);
    WriteMetric();
    auto x_2573 = eval_expr_x_2572(x_2525);
    if (x_2525->has_var_children_intrinsic_height) {
      auto x_2574 = x_2525->var_children_intrinsic_height;
      if (!EqualValue(x_2574, x_2573)) {
        var_modified_x_2575(x_2525);
      }
    }
    x_2525->has_var_children_intrinsic_height = true;
    x_2525->var_children_intrinsic_height = Asdouble(x_2573);
    WriteMetric();
    auto x_2578 = eval_expr_x_2577(x_2525);
    if (x_2525->has_var_height_expr) {
      auto x_2579 = x_2525->var_height_expr;
      if (!EqualValue(x_2579, x_2578)) {
        var_modified_x_2580(x_2525);
      }
    }
    x_2525->has_var_height_expr = true;
    x_2525->var_height_expr = AsDEString(x_2578);
    WriteMetric();
    auto x_2583 = eval_expr_x_2582(x_2525);
    if (x_2525->has_var_intrinsic_height_is_height) {
      auto x_2584 = x_2525->var_intrinsic_height_is_height;
      if (!EqualValue(x_2584, x_2583)) {
        var_modified_x_2585(x_2525);
      }
    }
    x_2525->has_var_intrinsic_height_is_height = true;
    x_2525->var_intrinsic_height_is_height = Asbool(x_2583);
    WriteMetric();
    auto x_2588 = eval_expr_x_2587(x_2525);
    if (x_2525->has_var_intrinsic_height_internal) {
      auto x_2589 = x_2525->var_intrinsic_height_internal;
      if (!EqualValue(x_2589, x_2588)) {
        var_modified_x_2590(x_2525);
      }
    }
    x_2525->has_var_intrinsic_height_internal = true;
    x_2525->var_intrinsic_height_internal = Asdouble(x_2588);
    WriteMetric();
    auto x_2593 = eval_expr_x_2592(x_2525);
    if (x_2525->has_var_intrinsic_height_external) {
      auto x_2594 = x_2525->var_intrinsic_height_external;
      if (!EqualValue(x_2594, x_2593)) {
        var_modified_x_2595(x_2525);
      }
    }
    x_2525->has_var_intrinsic_height_external = true;
    x_2525->var_intrinsic_height_external = Asdouble(x_2593);
    WriteMetric();
    auto x_2598 = eval_expr_x_2597(x_2525);
    if (x_2525->has_var_intrinsic_height_sum) {
      auto x_2599 = x_2525->var_intrinsic_height_sum;
      if (!EqualValue(x_2599, x_2598)) {
        var_modified_x_2600(x_2525);
      }
    }
    x_2525->has_var_intrinsic_height_sum = true;
    x_2525->var_intrinsic_height_sum = Asdouble(x_2598);
    WriteMetric();
    auto x_2603 = eval_expr_x_2602(x_2525);
    if (x_2525->has_var_intrinsic_current_line_height) {
      auto x_2604 = x_2525->var_intrinsic_current_line_height;
      if (!EqualValue(x_2604, x_2603)) {
        var_modified_x_2605(x_2525);
      }
    }
    x_2525->has_var_intrinsic_current_line_height = true;
    x_2525->var_intrinsic_current_line_height = Asdouble(x_2603);
    WriteMetric();
    auto x_2608 = eval_expr_x_2607(x_2525);
    if (x_2525->has_var_finished_intrinsic_height_sum) {
      auto x_2609 = x_2525->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_2609, x_2608)) {
        var_modified_x_2610(x_2525);
      }
    }
    x_2525->has_var_finished_intrinsic_height_sum = true;
    x_2525->var_finished_intrinsic_height_sum = Asdouble(x_2608);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_2497(const auto &x_2612) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2613) {
    WriteMetric();
    auto x_2615 = eval_expr_x_2614(x_2612);
    if (x_2612->has_var_display) {
      auto x_2616 = x_2612->var_display;
      if (!EqualValue(x_2616, x_2615)) {
        var_modified_x_2617(x_2612);
      }
    }
    x_2612->has_var_display = true;
    x_2612->var_display = AsDEString(x_2615);
    WriteMetric();
    auto x_2620 = eval_expr_x_2619(x_2612);
    if (x_2612->has_var_position) {
      auto x_2621 = x_2612->var_position;
      if (!EqualValue(x_2621, x_2620)) {
        var_modified_x_2622(x_2612);
      }
    }
    x_2612->has_var_position = true;
    x_2612->var_position = AsDEString(x_2620);
    WriteMetric();
    auto x_2625 = eval_expr_x_2624(x_2612);
    if (x_2612->has_var_flex_grow) {
      auto x_2626 = x_2612->var_flex_grow;
      if (!EqualValue(x_2626, x_2625)) {
        var_modified_x_2627(x_2612);
      }
    }
    x_2612->has_var_flex_grow = true;
    x_2612->var_flex_grow = Asdouble(x_2625);
    WriteMetric();
    auto x_2630 = eval_expr_x_2629(x_2612);
    if (x_2612->has_var_flex_shrink) {
      auto x_2631 = x_2612->var_flex_shrink;
      if (!EqualValue(x_2631, x_2630)) {
        var_modified_x_2632(x_2612);
      }
    }
    x_2612->has_var_flex_shrink = true;
    x_2612->var_flex_shrink = Asdouble(x_2630);
    WriteMetric();
    auto x_2635 = eval_expr_x_2634(x_2612);
    if (x_2612->has_var_flex_grow_sum) {
      auto x_2636 = x_2612->var_flex_grow_sum;
      if (!EqualValue(x_2636, x_2635)) {
        var_modified_x_2637(x_2612);
      }
    }
    x_2612->has_var_flex_grow_sum = true;
    x_2612->var_flex_grow_sum = Asdouble(x_2635);
    WriteMetric();
    auto x_2640 = eval_expr_x_2639(x_2612);
    if (x_2612->has_var_flex_shrink_sum) {
      auto x_2641 = x_2612->var_flex_shrink_sum;
      if (!EqualValue(x_2641, x_2640)) {
        var_modified_x_2642(x_2612);
      }
    }
    x_2612->has_var_flex_shrink_sum = true;
    x_2612->var_flex_shrink_sum = Asdouble(x_2640);
    WriteMetric();
    auto x_2645 = eval_expr_x_2644(x_2612);
    if (x_2612->has_var_flex_direction) {
      auto x_2646 = x_2612->var_flex_direction;
      if (!EqualValue(x_2646, x_2645)) {
        var_modified_x_2647(x_2612);
      }
    }
    x_2612->has_var_flex_direction = true;
    x_2612->var_flex_direction = AsDEString(x_2645);
    WriteMetric();
    auto x_2650 = eval_expr_x_2649(x_2612);
    if (x_2612->has_var_is_flex_row) {
      auto x_2651 = x_2612->var_is_flex_row;
      if (!EqualValue(x_2651, x_2650)) {
        var_modified_x_2652(x_2612);
      }
    }
    x_2612->has_var_is_flex_row = true;
    x_2612->var_is_flex_row = Asbool(x_2650);
    WriteMetric();
    auto x_2655 = eval_expr_x_2654(x_2612);
    if (x_2612->has_var_is_flex_column) {
      auto x_2656 = x_2612->var_is_flex_column;
      if (!EqualValue(x_2656, x_2655)) {
        var_modified_x_2657(x_2612);
      }
    }
    x_2612->has_var_is_flex_column = true;
    x_2612->var_is_flex_column = Asbool(x_2655);
    WriteMetric();
    auto x_2660 = eval_expr_x_2659(x_2612);
    if (x_2612->has_var_width_attr_expr) {
      auto x_2661 = x_2612->var_width_attr_expr;
      if (!EqualValue(x_2661, x_2660)) {
        var_modified_x_2662(x_2612);
      }
    }
    x_2612->has_var_width_attr_expr = true;
    x_2612->var_width_attr_expr = AsDEString(x_2660);
    WriteMetric();
    auto x_2665 = eval_expr_x_2664(x_2612);
    if (x_2612->has_var_has_width_attr) {
      auto x_2666 = x_2612->var_has_width_attr;
      if (!EqualValue(x_2666, x_2665)) {
        var_modified_x_2667(x_2612);
      }
    }
    x_2612->has_var_has_width_attr = true;
    x_2612->var_has_width_attr = Asbool(x_2665);
    WriteMetric();
    auto x_2670 = eval_expr_x_2669(x_2612);
    if (x_2612->has_var_height_attr_expr) {
      auto x_2671 = x_2612->var_height_attr_expr;
      if (!EqualValue(x_2671, x_2670)) {
        var_modified_x_2672(x_2612);
      }
    }
    x_2612->has_var_height_attr_expr = true;
    x_2612->var_height_attr_expr = AsDEString(x_2670);
    WriteMetric();
    auto x_2675 = eval_expr_x_2674(x_2612);
    if (x_2612->has_var_has_height_attr) {
      auto x_2676 = x_2612->var_has_height_attr;
      if (!EqualValue(x_2676, x_2675)) {
        var_modified_x_2677(x_2612);
      }
    }
    x_2612->has_var_has_height_attr = true;
    x_2612->var_has_height_attr = Asbool(x_2675);
    WriteMetric();
    auto x_2680 = eval_expr_x_2679(x_2612);
    if (x_2612->has_var_is_svg_block) {
      auto x_2681 = x_2612->var_is_svg_block;
      if (!EqualValue(x_2681, x_2680)) {
        var_modified_x_2682(x_2612);
      }
    }
    x_2612->has_var_is_svg_block = true;
    x_2612->var_is_svg_block = Asbool(x_2680);
    WriteMetric();
    auto x_2685 = eval_expr_x_2684(x_2612);
    if (x_2612->has_var_inside_svg) {
      auto x_2686 = x_2612->var_inside_svg;
      if (!EqualValue(x_2686, x_2685)) {
        var_modified_x_2687(x_2612);
      }
    }
    x_2612->has_var_inside_svg = true;
    x_2612->var_inside_svg = Asbool(x_2685);
    WriteMetric();
    auto x_2690 = eval_expr_x_2689(x_2612);
    if (x_2612->has_var_disabled) {
      auto x_2691 = x_2612->var_disabled;
      if (!EqualValue(x_2691, x_2690)) {
        var_modified_x_2692(x_2612);
      }
    }
    x_2612->has_var_disabled = true;
    x_2612->var_disabled = Asbool(x_2690);
    WriteMetric();
    auto x_2695 = eval_expr_x_2694(x_2612);
    if (x_2612->has_var_visible) {
      auto x_2696 = x_2612->var_visible;
      if (!EqualValue(x_2696, x_2695)) {
        var_modified_x_2697(x_2612);
      }
    }
    x_2612->has_var_visible = true;
    x_2612->var_visible = Asbool(x_2695);
    WriteMetric();
    auto x_2700 = eval_expr_x_2699(x_2612);
    if (x_2612->has_var_line_break) {
      auto x_2701 = x_2612->var_line_break;
      if (!EqualValue(x_2701, x_2700)) {
        var_modified_x_2702(x_2612);
      }
    }
    x_2612->has_var_line_break = true;
    x_2612->var_line_break = Asbool(x_2700);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_2491(const auto &x_2704) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2705) {
    WriteMetric();
    auto x_2707 = eval_expr_x_2706(x_2704);
    if (x_2704->has_var_box_width) {
      auto x_2708 = x_2704->var_box_width;
      if (!EqualValue(x_2708, x_2707)) {
        var_modified_x_2709(x_2704);
      }
    }
    x_2704->has_var_box_width = true;
    x_2704->var_box_width = Asdouble(x_2707);
    WriteMetric();
    auto x_2712 = eval_expr_x_2711(x_2704);
    if (x_2704->has_var_box_height) {
      auto x_2713 = x_2704->var_box_height;
      if (!EqualValue(x_2713, x_2712)) {
        var_modified_x_2714(x_2704);
      }
    }
    x_2704->has_var_box_height = true;
    x_2704->var_box_height = Asdouble(x_2712);
    WriteMetric();
    auto x_2717 = eval_expr_x_2716(x_2704);
    if (x_2704->has_var_left_over) {
      auto x_2718 = x_2704->var_left_over;
      if (!EqualValue(x_2718, x_2717)) {
        var_modified_x_2719(x_2704);
      }
    }
    x_2704->has_var_left_over = true;
    x_2704->var_left_over = Asdouble(x_2717);
    WriteMetric();
    auto x_2722 = eval_expr_x_2721(x_2704);
    if (x_2704->has_var_flex_amount) {
      auto x_2723 = x_2704->var_flex_amount;
      if (!EqualValue(x_2723, x_2722)) {
        var_modified_x_2724(x_2704);
      }
    }
    x_2704->has_var_flex_amount = true;
    x_2704->var_flex_amount = Asdouble(x_2722);
    WriteMetric();
    auto x_2727 = eval_expr_x_2726(x_2704);
    if (x_2704->has_var_flex_unit) {
      auto x_2728 = x_2704->var_flex_unit;
      if (!EqualValue(x_2728, x_2727)) {
        var_modified_x_2729(x_2704);
      }
    }
    x_2704->has_var_flex_unit = true;
    x_2704->var_flex_unit = Asdouble(x_2727);
    WriteMetric();
    auto x_2732 = eval_expr_x_2731(x_2704);
    if (x_2704->has_var_x) {
      auto x_2733 = x_2704->var_x;
      if (!EqualValue(x_2733, x_2732)) {
        var_modified_x_2734(x_2704);
      }
    }
    x_2704->has_var_x = true;
    x_2704->var_x = Asdouble(x_2732);
    WriteMetric();
    auto x_2737 = eval_expr_x_2736(x_2704);
    if (x_2704->has_var_width_internal) {
      auto x_2738 = x_2704->var_width_internal;
      if (!EqualValue(x_2738, x_2737)) {
        var_modified_x_2739(x_2704);
      }
    }
    x_2704->has_var_width_internal = true;
    x_2704->var_width_internal = Asdouble(x_2737);
    WriteMetric();
    auto x_2742 = eval_expr_x_2741(x_2704);
    if (x_2704->has_var_width_external) {
      auto x_2743 = x_2704->var_width_external;
      if (!EqualValue(x_2743, x_2742)) {
        var_modified_x_2744(x_2704);
      }
    }
    x_2704->has_var_width_external = true;
    x_2704->var_width_external = Asdouble(x_2742);
    WriteMetric();
    auto x_2747 = eval_expr_x_2746(x_2704);
    if (x_2704->has_var_y) {
      auto x_2748 = x_2704->var_y;
      if (!EqualValue(x_2748, x_2747)) {
        var_modified_x_2749(x_2704);
      }
    }
    x_2704->has_var_y = true;
    x_2704->var_y = Asdouble(x_2747);
    WriteMetric();
    auto x_2752 = eval_expr_x_2751(x_2704);
    if (x_2704->has_var_height_internal) {
      auto x_2753 = x_2704->var_height_internal;
      if (!EqualValue(x_2753, x_2752)) {
        var_modified_x_2754(x_2704);
      }
    }
    x_2704->has_var_height_internal = true;
    x_2704->var_height_internal = Asdouble(x_2752);
    WriteMetric();
    auto x_2757 = eval_expr_x_2756(x_2704);
    if (x_2704->has_var_height_external) {
      auto x_2758 = x_2704->var_height_external;
      if (!EqualValue(x_2758, x_2757)) {
        var_modified_x_2759(x_2704);
      }
    }
    x_2704->has_var_height_external = true;
    x_2704->var_height_external = Asdouble(x_2757);
    WriteMetric();
    auto x_2762 = eval_expr_x_2761(x_2704);
    if (x_2704->has_var_line_height) {
      auto x_2763 = x_2704->var_line_height;
      if (!EqualValue(x_2763, x_2762)) {
        var_modified_x_2764(x_2704);
      }
    }
    x_2704->has_var_line_height = true;
    x_2704->var_line_height = Asdouble(x_2762);
    return MakeUnit();
  })));
}
Unit x_2342(const auto &x_2343, const auto &x_2344, const auto &x_2345) {
  auto x_2346 = ListHeadExn(x_2343);
  auto x_2347 = ListTailExn(x_2343);
  if (ListIsEmpty(x_2347)) {
    auto x_2348 = ListSplitN(x_2344->children, x_2346);
    OutputChangeMetric(IntAdd(layout_size_x_2300(ListNthExn(x_2344->children, x_2346)), layout_size_x_2300(x_2345)));
    x_2344->children = ListAppend(Zro(x_2348), Cons(x_2345, ListTailExn(Fst(x_2348))));
    return MakeUnit();
  } else {
    return x_2342(x_2347, ListNthExn(x_2344->children, x_2346), x_2345);
  }
}
Unit replace_layout_node_x_2341(const auto &x_2343, const auto &x_2344, const auto &x_2345) {
  return x_2342(x_2343, x_2344, x_2345);
}
Unit x_2349(const auto &x_2350, const auto &x_2351, const auto &x_2352) {
  auto x_2353 = ListHeadExn(x_2350);
  auto x_2354 = ListTailExn(x_2350);
  if (ListIsEmpty(x_2354)) {
    OutputChangeMetric(layout_size_x_2300(x_2352));
    auto x_2355 = ListSplitN(x_2351->children, x_2353);
    x_2351->children = ListAppend(Zro(x_2355), Cons(x_2352, Fst(x_2355)));
    return MakeUnit();
  } else {
    return x_2349(x_2354, ListNthExn(x_2351->children, x_2353), x_2352);
  }
}
Unit add_layout_node_x_2339(const auto &x_2350, const auto &x_2351, const auto &x_2352) {
  return x_2349(x_2350, x_2351, x_2352);
}
Unit x_2356(const auto &x_2357, const auto &x_2358, const auto &x_2359) {
  auto x_2360 = ListHeadExn(x_2357);
  auto x_2361 = ListTailExn(x_2357);
  if (ListIsEmpty(x_2361)) {
    OutputChangeMetric(layout_size_x_2300(ListNthExn(x_2358->children, x_2360)));
    auto x_2362 = ListSplitN(x_2358->children, x_2360);
    x_2358->children = ListAppend(Zro(x_2362), ListTailExn(Fst(x_2362)));
    return MakeUnit();
  } else {
    return x_2356(x_2361, ListNthExn(x_2358->children, x_2360), x_2359);
  }
}
Unit remove_layout_node_x_2337(const auto &x_2357, const auto &x_2358, const auto &x_2359) {
  return x_2356(x_2357, x_2358, x_2359);
}
Unit x_2363(const auto &x_2364, const auto &x_2365, const auto &x_2366) {
  return ListMatch(
      x_2364,
      [&](const auto &x_2369) {
        auto x_2370 = Zro(x_2366);
        auto x_2371 = Zro(x_2370);
        auto x_2372 = Fst(x_2370);
        auto x_2373 = Fst(x_2366);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3991 = x_2371;
        if (x_3991 == "attributes") {
          std::string x_3992 = x_2372;
          if (x_3992 == "width") {
            WriteMetric();
            x_2365->has_attr_width = true;
            x_2365->attr_width = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3992 == "image_height") {
            WriteMetric();
            x_2365->has_attr_image_height = true;
            x_2365->attr_image_height = Asint64_t(x_2373);
            return MakeUnit();
          } else if (x_3992 == "image_width") {
            WriteMetric();
            x_2365->has_attr_image_width = true;
            x_2365->attr_image_width = Asint64_t(x_2373);
            return MakeUnit();
          } else if (x_3992 == "height") {
            WriteMetric();
            x_2365->has_attr_height = true;
            x_2365->attr_height = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3992 == "viewBox") {
            WriteMetric();
            x_2365->has_attr_viewBox = true;
            x_2365->attr_viewBox = AsDEString(x_2373);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3991 == "properties") {
          std::string x_3993 = x_2372;
          if (x_3993 == "width") {
            WriteMetric();
            x_2365->has_prop_width = true;
            x_2365->prop_width = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3993 == "flex-grow") {
            WriteMetric();
            x_2365->has_prop_flex_grow = true;
            x_2365->prop_flex_grow = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3993 == "height") {
            WriteMetric();
            x_2365->has_prop_height = true;
            x_2365->prop_height = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3993 == "display") {
            WriteMetric();
            x_2365->has_prop_display = true;
            x_2365->prop_display = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3993 == "position") {
            WriteMetric();
            x_2365->has_prop_position = true;
            x_2365->prop_position = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3993 == "flex-shrink") {
            WriteMetric();
            x_2365->has_prop_flex_shrink = true;
            x_2365->prop_flex_shrink = AsDEString(x_2373);
            return MakeUnit();
          } else if (x_3993 == "flex-direction") {
            WriteMetric();
            x_2365->has_prop_flex_direction = true;
            x_2365->prop_flex_direction = AsDEString(x_2373);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2367, const auto &x_2368) {
        return x_2363(x_2368, ListNthExn(x_2365->children, x_2367), x_2366);
      });
}
Unit insert_value_x_2335(const auto &x_2364, const auto &x_2365, const auto &x_2366) {
  return x_2363(x_2364, x_2365, x_2366);
}
Unit x_2374(const auto &x_2375, const auto &x_2376, const auto &x_2377) {
  return ListMatch(
      x_2375,
      [&](const auto &x_2380) {
        auto x_2381 = Zro(x_2377);
        auto x_2382 = Fst(x_2377);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3994 = x_2381;
        if (x_3994 == "attributes") {
          std::string x_3995 = x_2382;
          if (x_3995 == "width") {
            WriteMetric();
            x_2376->has_attr_width = false;
            return MakeUnit();
          } else if (x_3995 == "image_height") {
            WriteMetric();
            x_2376->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_3995 == "image_width") {
            WriteMetric();
            x_2376->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_3995 == "height") {
            WriteMetric();
            x_2376->has_attr_height = false;
            return MakeUnit();
          } else if (x_3995 == "viewBox") {
            WriteMetric();
            x_2376->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3994 == "properties") {
          std::string x_3996 = x_2382;
          if (x_3996 == "width") {
            WriteMetric();
            x_2376->has_prop_width = false;
            return MakeUnit();
          } else if (x_3996 == "flex-grow") {
            WriteMetric();
            x_2376->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_3996 == "height") {
            WriteMetric();
            x_2376->has_prop_height = false;
            return MakeUnit();
          } else if (x_3996 == "display") {
            WriteMetric();
            x_2376->has_prop_display = false;
            return MakeUnit();
          } else if (x_3996 == "position") {
            WriteMetric();
            x_2376->has_prop_position = false;
            return MakeUnit();
          } else if (x_3996 == "flex-shrink") {
            WriteMetric();
            x_2376->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_3996 == "flex-direction") {
            WriteMetric();
            x_2376->has_prop_flex_direction = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2378, const auto &x_2379) {
        return x_2374(x_2379, ListNthExn(x_2376->children, x_2378), x_2377);
      });
}
Unit delete_value_x_2333(const auto &x_2375, const auto &x_2376, const auto &x_2377) {
  return x_2374(x_2375, x_2376, x_2377);
}
Unit x_2383(const auto &x_2384, const auto &x_2385, const auto &x_2386) {
  return ListMatch(
      x_2384,
      [&](const auto &x_2389) {
        auto x_2390 = Zro(x_2386);
        auto x_2391 = Zro(x_2390);
        auto x_2392 = Fst(x_2390);
        auto x_2393 = Fst(x_2386);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3997 = x_2391;
        if (x_3997 == "attributes") {
          std::string x_3998 = x_2392;
          if (x_3998 == "width") {
            WriteMetric();
            x_2385->has_attr_width = false;
            WriteMetric();
            x_2385->has_attr_width = true;
            x_2385->attr_width = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3998 == "image_height") {
            WriteMetric();
            x_2385->has_attr_image_height = false;
            WriteMetric();
            x_2385->has_attr_image_height = true;
            x_2385->attr_image_height = Asint64_t(x_2393);
            return MakeUnit();
          } else if (x_3998 == "image_width") {
            WriteMetric();
            x_2385->has_attr_image_width = false;
            WriteMetric();
            x_2385->has_attr_image_width = true;
            x_2385->attr_image_width = Asint64_t(x_2393);
            return MakeUnit();
          } else if (x_3998 == "height") {
            WriteMetric();
            x_2385->has_attr_height = false;
            WriteMetric();
            x_2385->has_attr_height = true;
            x_2385->attr_height = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3998 == "viewBox") {
            WriteMetric();
            x_2385->has_attr_viewBox = false;
            WriteMetric();
            x_2385->has_attr_viewBox = true;
            x_2385->attr_viewBox = AsDEString(x_2393);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3997 == "properties") {
          std::string x_3999 = x_2392;
          if (x_3999 == "width") {
            WriteMetric();
            x_2385->has_prop_width = false;
            WriteMetric();
            x_2385->has_prop_width = true;
            x_2385->prop_width = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3999 == "flex-grow") {
            WriteMetric();
            x_2385->has_prop_flex_grow = false;
            WriteMetric();
            x_2385->has_prop_flex_grow = true;
            x_2385->prop_flex_grow = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3999 == "height") {
            WriteMetric();
            x_2385->has_prop_height = false;
            WriteMetric();
            x_2385->has_prop_height = true;
            x_2385->prop_height = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3999 == "display") {
            WriteMetric();
            x_2385->has_prop_display = false;
            WriteMetric();
            x_2385->has_prop_display = true;
            x_2385->prop_display = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3999 == "position") {
            WriteMetric();
            x_2385->has_prop_position = false;
            WriteMetric();
            x_2385->has_prop_position = true;
            x_2385->prop_position = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3999 == "flex-shrink") {
            WriteMetric();
            x_2385->has_prop_flex_shrink = false;
            WriteMetric();
            x_2385->has_prop_flex_shrink = true;
            x_2385->prop_flex_shrink = AsDEString(x_2393);
            return MakeUnit();
          } else if (x_3999 == "flex-direction") {
            WriteMetric();
            x_2385->has_prop_flex_direction = false;
            WriteMetric();
            x_2385->has_prop_flex_direction = true;
            x_2385->prop_flex_direction = AsDEString(x_2393);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_2387, const auto &x_2388) {
        return x_2383(x_2388, ListNthExn(x_2385->children, x_2387), x_2386);
      });
}
Unit replace_value_x_2331(const auto &x_2384, const auto &x_2385, const auto &x_2386) {
  return x_2383(x_2384, x_2385, x_2386);
}
Unit x_2394(const auto &x_2395, const auto &x_2396, const auto &x_2397) {
  auto x_2398 = ListHeadExn(x_2395);
  auto x_2399 = ListTailExn(x_2395);
  if (ListIsEmpty(x_2399)) {
    InputChangeMetric(IntAdd(node_size_x_2301(ListNthExn(x_2396->children, x_2398)), node_size_x_2301(x_2397)));
    auto x_2400 = ListSplitN(x_2396->children, x_2398);
    auto x_2401 = Zro(x_2400);
    auto x_2402 = Fst(x_2400);
    auto x_2403 = ListHeadExn(x_2402);
    auto x_2404 = ListTailExn(x_2402);
    x_2396->children = ListAppend(x_2401, x_2404);
    OptionMatch(
        x_2403->prev, [&](const auto &x_2406) { return MakeUnit(); },
        [&](const auto &x_2405) {
          x_2405->next = ToPath(x_2403->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2403->next, [&](const auto &x_2408) { return MakeUnit(); },
        [&](const auto &x_2407) {
          x_2407->prev = ToPath(x_2403->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2401)) {
      x_2396->first = ToPath(ListHead(x_2404));
    }
    if (ListIsEmpty(x_2404)) {
      x_2396->last = ToPath(ListLast(x_2401));
    }
    MakeUnit();
    auto x_2415 = ListSplitN(x_2396->children, x_2398);
    auto x_2416 = Zro(x_2415);
    auto x_2417 = Fst(x_2415);
    x_2396->children = ListAppend(x_2416, Cons(x_2397, x_2417));
    if (ListIsEmpty(x_2416)) {
      x_2396->first = x_2397.get();
    }
    if (ListIsEmpty(x_2417)) {
      x_2396->last = x_2397.get();
    }
    OptionMatch(
        ListLast(x_2416),
        [&](const auto &x_2419) {
          x_2397->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2418) {
          x_2397->prev = x_2418.get();
          x_2418->next = x_2397.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_2417),
        [&](const auto &x_2421) {
          x_2397->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2420) {
          x_2397->next = x_2420.get();
          x_2420->prev = x_2397.get();
          return MakeUnit();
        });
    x_2397->parent = x_2396.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_2422) { return MakeUnit(); })));
    MetricRecordOverhead(Zro(Timed([&](const auto &x_2427) { return MakeUnit(); })));
    MakeUnit();
    return MakeUnit();
  } else {
    return x_2394(x_2399, ListNthExn(x_2396->children, x_2398), x_2397);
  }
}
Unit replace_node_x_2329(const auto &x_2395, const auto &x_2396, const auto &x_2397) {
  return x_2394(x_2395, x_2396, x_2397);
}
Unit x_2430(const auto &x_2431) {
  ListIter2(x_2431->children, [&](const auto &x_2432, const auto &x_2433) {
    x_2432->parent = x_2431.get();
    x_2433->parent = x_2431.get();
    x_2432->next = x_2433.get();
    x_2433->prev = x_2432.get();
    x_2430(x_2432);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2431->children),
      [&](const auto &x_2435) {
        x_2431->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2434) {
        x_2431->first = x_2434.get();
        x_2434->parent = x_2431.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2431->children),
      [&](const auto &x_2437) {
        x_2431->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2436) {
        x_2431->last = x_2436.get();
        x_2436->parent = x_2431.get();
        x_2430(x_2436);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2327(const auto &x_2431) { return x_2430(x_2431); }
Unit x_2438(const auto &x_2439, const auto &x_2440, const auto &x_2441) {
  auto x_2442 = ListHeadExn(x_2439);
  auto x_2443 = ListTailExn(x_2439);
  if (ListIsEmpty(x_2443)) {
    InputChangeMetric(node_size_x_2301(ListNthExn(x_2440->children, x_2442)));
    auto x_2444 = ListSplitN(x_2440->children, x_2442);
    auto x_2445 = Zro(x_2444);
    auto x_2446 = Fst(x_2444);
    auto x_2447 = ListHeadExn(x_2446);
    auto x_2448 = ListTailExn(x_2446);
    x_2440->children = ListAppend(x_2445, x_2448);
    OptionMatch(
        x_2447->prev, [&](const auto &x_2450) { return MakeUnit(); },
        [&](const auto &x_2449) {
          x_2449->next = ToPath(x_2447->next);
          return MakeUnit();
        });
    OptionMatch(
        x_2447->next, [&](const auto &x_2452) { return MakeUnit(); },
        [&](const auto &x_2451) {
          x_2451->prev = ToPath(x_2447->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_2445)) {
      x_2440->first = ToPath(ListHead(x_2448));
    }
    if (ListIsEmpty(x_2448)) {
      x_2440->last = ToPath(ListLast(x_2445));
    }
    return MakeUnit();
  } else {
    return x_2438(x_2443, ListNthExn(x_2440->children, x_2442), x_2441);
  }
}
Unit remove_node_x_2325(const auto &x_2439, const auto &x_2440, const auto &x_2441) {
  return x_2438(x_2439, x_2440, x_2441);
}
Unit x_2459(const auto &x_2460, const auto &x_2461, const auto &x_2462) {
  auto x_2463 = ListHeadExn(x_2460);
  auto x_2464 = ListTailExn(x_2460);
  if (ListIsEmpty(x_2464)) {
    InputChangeMetric(node_size_x_2301(x_2462));
    auto x_2465 = ListSplitN(x_2461->children, x_2463);
    auto x_2466 = Zro(x_2465);
    auto x_2467 = Fst(x_2465);
    x_2461->children = ListAppend(x_2466, Cons(x_2462, x_2467));
    if (ListIsEmpty(x_2466)) {
      x_2461->first = x_2462.get();
    }
    if (ListIsEmpty(x_2467)) {
      x_2461->last = x_2462.get();
    }
    OptionMatch(
        ListLast(x_2466),
        [&](const auto &x_2469) {
          x_2462->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2468) {
          x_2462->prev = x_2468.get();
          x_2468->next = x_2462.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_2467),
        [&](const auto &x_2471) {
          x_2462->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_2470) {
          x_2462->next = x_2470.get();
          x_2470->prev = x_2462.get();
          return MakeUnit();
        });
    x_2462->parent = x_2461.get();
    MetricRecordOverhead(Zro(Timed([&](const auto &x_2472) { return MakeUnit(); })));
    MetricRecordOverhead(Zro(Timed([&](const auto &x_2477) { return MakeUnit(); })));
    return MakeUnit();
  } else {
    return x_2459(x_2464, ListNthExn(x_2461->children, x_2463), x_2462);
  }
}
Unit add_node_x_2322(const auto &x_2460, const auto &x_2461, const auto &x_2462) {
  return x_2459(x_2460, x_2461, x_2462);
}
Unit x_2480(const auto &x_2481) {
  ListIter2(x_2481->children, [&](const auto &x_2482, const auto &x_2483) {
    x_2482->parent = x_2481.get();
    x_2483->parent = x_2481.get();
    x_2482->next = x_2483.get();
    x_2483->prev = x_2482.get();
    x_2480(x_2482);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2481->children),
      [&](const auto &x_2485) {
        x_2481->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2484) {
        x_2481->first = x_2484.get();
        x_2484->parent = x_2481.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2481->children),
      [&](const auto &x_2487) {
        x_2481->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2486) {
        x_2481->last = x_2486.get();
        x_2486->parent = x_2481.get();
        x_2480(x_2486);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2320(const auto &x_2481) { return x_2480(x_2481); }
Unit eval_stmts_x_2316(const auto &x_2488) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2489) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_2490) { return eval_stmts_x_2491(x_2488); })));
    ListIter(x_2488->children, [&](const auto &x_2492) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2493) { return eval_stmts_x_2316(x_2492); })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_2314(const auto &x_2494) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_2495) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_2496) { return eval_stmts_x_2497(x_2494); })));
    ListIter(x_2494->children, [&](const auto &x_2498) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_2499) { return eval_stmts_x_2314(x_2498); })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_2500) { return eval_stmts_x_2501(x_2494); })));
    return MakeUnit();
  })));
}
Unit x_2502(const auto &x_2503) {
  ListIter2(x_2503->children, [&](const auto &x_2504, const auto &x_2505) {
    x_2504->parent = x_2503.get();
    x_2505->parent = x_2503.get();
    x_2504->next = x_2505.get();
    x_2505->prev = x_2504.get();
    x_2502(x_2504);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_2503->children),
      [&](const auto &x_2507) {
        x_2503->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2506) {
        x_2503->first = x_2506.get();
        x_2506->parent = x_2503.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_2503->children),
      [&](const auto &x_2509) {
        x_2503->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_2508) {
        x_2503->last = x_2508.get();
        x_2508->parent = x_2503.get();
        x_2502(x_2508);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_2310(const auto &x_2503) { return x_2502(x_2503); }
int64_t x_2510(const auto &x_2511) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_2511->children, [&](const auto &x_2512) { return x_2510(x_2512); }));
}
int64_t node_size_x_2301(const auto &x_2511) { return x_2510(x_2511); }
int64_t x_2513(const auto &x_2514) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_2514->children, [&](const auto &x_2515) { return x_2513(x_2515); }));
}
int64_t layout_size_x_2300(const auto &x_2514) { return x_2513(x_2514); }
LayoutNode x_2516(const auto &x_2517) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_2517)), [&](const auto &x_2518) { return x_2516(x_2518); }));
}
LayoutNode json_to_layout_node_x_2299(const auto &x_2517) { return x_2516(x_2517); }
Node x_2519(const auto &x_2520) {
  return MakeNode(x_2520->name, x_2520->attr, x_2520->prop, x_2520->extern_id,
                  ListMap(x_2520->children, [&](const auto &x_2521) { return x_2519(x_2521); }));
}
Node node_to_fs_node_x_2298(const auto &x_2520) { return x_2519(x_2520); }
Node x_2522(const auto &x_2523) {
  return MakeNode(
      JsonToString(JsonMember("name", x_2523)), JsonToDict(JsonMember("attributes", x_2523)),
      JsonToDict(JsonMember("properties", x_2523)), JsonToInt(JsonMember("id", x_2523)),
      ListMap(JsonToList(JsonMember("children", x_2523)), [&](const auto &x_2524) { return x_2522(x_2524); }));
}
Node json_to_node_aux_x_2297(const auto &x_2523) { return x_2522(x_2523); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_2302) {
    PrintEndline("RUNNING FS_D");
    return WithInFile("command.json", [&](const auto &x_2303) {
      auto x_2304 = MakeRef(static_cast<int64_t>(0));
      auto x_2305 = FreshMetric();
      auto x_2306 = JsonOfString(InputLine(x_2303));
      auto x_2307 = JsonOfString(InputLine(x_2303));
      auto x_2308 = MakeStack();
      PushStack(x_2308, x_2306);
      PushStack(x_2308, x_2307);
      Assert(StringEqual(JsonToString(JsonMember("name", x_2306)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_2307)), "layout_init"));
      auto x_2311 = [&]() {
        auto x_2309 = json_to_node_aux_x_2297(JsonMember("node", x_2306));
        x_2309->parent = nullptr;
        x_2309->prev = nullptr;
        x_2309->next = nullptr;
        set_children_relation_x_2310(x_2309);
        return x_2309;
      }();
      auto x_2312 = json_to_layout_node_x_2299(JsonMember("node", x_2307));
      OutputChangeMetric(layout_size_x_2300(x_2312));
      InputChangeMetric(node_size_x_2301(x_2311));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_2313) { return eval_stmts_x_2314(x_2311); })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_2315) { return eval_stmts_x_2316(x_2311); })));
      JsonToChannel(x_2302, [&]() {
        auto x_4000 = FreshJson();
        WriteJson(x_4000, "name", "FS_D");
        WriteJson(x_4000, "diff_num", ReadRef(x_2304));
        WriteJson(x_4000, "read_count", MetricReadCount());
        WriteJson(x_4000, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_4000, "write_count", MetricWriteCount());
        WriteJson(x_4000, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_4000, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_4000, "input_change_count", MetricInputChangeCount());
        WriteJson(x_4000, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_4000, "overhead_time", MetricOverheadCount());
        WriteJson(x_4000, "eval_time", MetricEvalCount());
        WriteJson(x_4000, "html", "");
        WriteJson(x_4000, "command", StackToList(x_2308));
        return x_4000;
      }());
      OutputString(x_2302, "\n");
      ClearStack(x_2308);
      WriteRef(x_2304, IntAdd(ReadRef(x_2304), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_2303, [&](const auto &x_2317) {
        auto x_2318 = JsonOfString(x_2317);
        PushStack(x_2308, x_2318);
        std::string x_4002 = JsonToString(JsonMember("name", x_2318));
        if (x_4002 == "add") {
          return add_node_x_2322(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2321) { return JsonToInt(x_2321); }),
              x_2311, [&]() {
                auto x_2319 = json_to_node_aux_x_2297(JsonMember("node", x_2318));
                x_2319->parent = nullptr;
                x_2319->prev = nullptr;
                x_2319->next = nullptr;
                set_children_relation_x_2320(x_2319);
                return x_2319;
              }());
        } else if (x_4002 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_2323) {
            eval_stmts_x_2314(x_2311);
            eval_stmts_x_2316(x_2311);
            return MakeUnit();
          })));
          JsonToChannel(x_2302, [&]() {
            auto x_4001 = FreshJson();
            WriteJson(x_4001, "name", "FS_D");
            WriteJson(x_4001, "diff_num", ReadRef(x_2304));
            WriteJson(x_4001, "read_count", MetricReadCount());
            WriteJson(x_4001, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_4001, "write_count", MetricWriteCount());
            WriteJson(x_4001, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_4001, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_4001, "input_change_count", MetricInputChangeCount());
            WriteJson(x_4001, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_4001, "overhead_time", MetricOverheadCount());
            WriteJson(x_4001, "eval_time", MetricEvalCount());
            WriteJson(x_4001, "html", "");
            WriteJson(x_4001, "command", StackToList(x_2308));
            return x_4001;
          }());
          OutputString(x_2302, "\n");
          ClearStack(x_2308);
          WriteRef(x_2304, IntAdd(ReadRef(x_2304), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_4002 == "remove") {
          return remove_node_x_2325(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2324) { return JsonToInt(x_2324); }),
              x_2311, MakeUnit());
        } else if (x_4002 == "replace") {
          return replace_node_x_2329(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2328) { return JsonToInt(x_2328); }),
              x_2311, [&]() {
                auto x_2326 = json_to_node_aux_x_2297(JsonMember("node", x_2318));
                x_2326->parent = nullptr;
                x_2326->prev = nullptr;
                x_2326->next = nullptr;
                set_children_relation_x_2327(x_2326);
                return x_2326;
              }());
        } else if (x_4002 == "replace_value") {
          return replace_value_x_2331(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2330) { return JsonToInt(x_2330); }),
              x_2311,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2318)), JsonToString(JsonMember("key", x_2318))),
                       JsonToValue(JsonMember("value", x_2318))));
        } else if (x_4002 == "delete_value") {
          return delete_value_x_2333(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2332) { return JsonToInt(x_2332); }),
              x_2311, MakePair(JsonToString(JsonMember("type", x_2318)), JsonToString(JsonMember("key", x_2318))));
        } else if (x_4002 == "insert_value") {
          return insert_value_x_2335(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2334) { return JsonToInt(x_2334); }),
              x_2311,
              MakePair(MakePair(JsonToString(JsonMember("type", x_2318)), JsonToString(JsonMember("key", x_2318))),
                       JsonToValue(JsonMember("value", x_2318))));
        } else if (x_4002 == "layout_remove") {
          return remove_layout_node_x_2337(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2336) { return JsonToInt(x_2336); }),
              x_2312, MakeUnit());
        } else if (x_4002 == "layout_add") {
          return add_layout_node_x_2339(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2338) { return JsonToInt(x_2338); }),
              x_2312, json_to_layout_node_x_2299(JsonMember("node", x_2318)));
        } else if (x_4002 == "layout_replace") {
          return replace_layout_node_x_2341(
              ListMap(JsonToList(JsonMember("path", x_2318)), [&](const auto &x_2340) { return JsonToInt(x_2340); }),
              x_2312, json_to_layout_node_x_2299(JsonMember("node", x_2318)));
        } else if (x_4002 == "layout_info_changed") {
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