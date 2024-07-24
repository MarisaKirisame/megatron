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
Unit var_modified_x_463(const auto &x_465);
auto eval_expr_x_460(const auto &x_470);
Unit var_modified_x_458(const auto &x_487);
auto eval_expr_x_455(const auto &x_490);
Unit var_modified_x_453(const auto &x_499);
auto eval_expr_x_450(const auto &x_503);
Unit var_modified_x_448(const auto &x_556);
auto eval_expr_x_445(const auto &x_562);
Unit var_modified_x_443(const auto &x_587);
auto eval_expr_x_440(const auto &x_592);
Unit var_modified_x_438(const auto &x_601);
auto eval_expr_x_435(const auto &x_605);
Unit var_modified_x_433(const auto &x_658);
auto eval_expr_x_430(const auto &x_664);
Unit var_modified_x_428(const auto &x_685);
auto eval_expr_x_425(const auto &x_688);
Unit var_modified_x_423(const auto &x_709);
auto eval_expr_x_420(const auto &x_712);
Unit var_modified_x_418(const auto &x_725);
auto eval_expr_x_415(const auto &x_729);
Unit var_modified_x_413(const auto &x_750);
auto eval_expr_x_410(const auto &x_753);
Unit var_modified_x_408(const auto &x_758);
auto eval_expr_x_405(const auto &x_761);
Unit var_modified_x_401(const auto &x_766);
auto eval_expr_x_398(const auto &x_776);
Unit var_modified_x_396(const auto &x_853);
auto eval_expr_x_393(const auto &x_856);
Unit var_modified_x_391(const auto &x_873);
auto eval_expr_x_388(const auto &x_878);
Unit var_modified_x_386(const auto &x_883);
auto eval_expr_x_383(const auto &x_888);
Unit var_modified_x_381(const auto &x_897);
auto eval_expr_x_378(const auto &x_900);
Unit var_modified_x_376(const auto &x_901);
auto eval_expr_x_373(const auto &x_904);
Unit var_modified_x_371(const auto &x_909);
auto eval_expr_x_368(const auto &x_913);
Unit var_modified_x_366(const auto &x_924);
auto eval_expr_x_363(const auto &x_927);
Unit var_modified_x_361(const auto &x_932);
auto eval_expr_x_358(const auto &x_936);
Unit var_modified_x_356(const auto &x_947);
auto eval_expr_x_353(const auto &x_951);
Unit var_modified_x_351(const auto &x_976);
auto eval_expr_x_348(const auto &x_981);
Unit var_modified_x_346(const auto &x_1006);
auto eval_expr_x_343(const auto &x_1009);
Unit var_modified_x_341(const auto &x_1012);
auto eval_expr_x_338(const auto &x_1018);
Unit var_modified_x_336(const auto &x_1027);
auto eval_expr_x_333(const auto &x_1033);
Unit var_modified_x_331(const auto &x_1042);
auto eval_expr_x_328(const auto &x_1046);
Unit var_modified_x_326(const auto &x_1049);
auto eval_expr_x_323(const auto &x_1053);
Unit var_modified_x_321(const auto &x_1056);
auto eval_expr_x_318(const auto &x_1061);
Unit var_modified_x_316(const auto &x_1064);
auto eval_expr_x_313(const auto &x_1069);
Unit var_modified_x_309(const auto &x_1072);
auto eval_expr_x_306(const auto &x_1080);
Unit var_modified_x_304(const auto &x_1109);
auto eval_expr_x_301(const auto &x_1117);
Unit var_modified_x_299(const auto &x_1130);
auto eval_expr_x_296(const auto &x_1138);
Unit var_modified_x_294(const auto &x_1147);
auto eval_expr_x_291(const auto &x_1150);
Unit var_modified_x_289(const auto &x_1159);
auto eval_expr_x_286(const auto &x_1163);
Unit var_modified_x_284(const auto &x_1308);
auto eval_expr_x_281(const auto &x_1311);
Unit var_modified_x_279(const auto &x_1360);
auto eval_expr_x_276(const auto &x_1364);
Unit var_modified_x_274(const auto &x_1367);
auto eval_expr_x_271(const auto &x_1370);
Unit var_modified_x_269(const auto &x_1379);
auto eval_expr_x_266(const auto &x_1387);
Unit var_modified_x_264(const auto &x_1396);
auto eval_expr_x_261(const auto &x_1404);
Unit var_modified_x_259(const auto &x_1413);
auto eval_expr_x_256(const auto &x_1419);
Unit var_modified_x_254(const auto &x_1432);
auto eval_expr_x_251(const auto &x_1435);
Unit var_modified_x_249(const auto &x_1444);
auto eval_expr_x_246(const auto &x_1448);
Unit var_modified_x_244(const auto &x_1601);
auto eval_expr_x_241(const auto &x_1604);
Unit var_modified_x_239(const auto &x_1609);
auto eval_expr_x_236(const auto &x_1612);
Unit var_modified_x_234(const auto &x_1661);
auto eval_expr_x_231(const auto &x_1664);
Unit var_modified_x_229(const auto &x_1677);
auto eval_expr_x_226(const auto &x_1681);
Unit eval_stmts_x_200(const auto &x_224);
Unit eval_stmts_x_196(const auto &x_311);
Unit eval_stmts_x_190(const auto &x_403);
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48);
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55);
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62);
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69);
Unit x_77(const auto &x_78, const auto &x_79, const auto &x_80);
Unit x_86(const auto &x_87, const auto &x_88, const auto &x_89);
Unit x_97(const auto &x_98, const auto &x_99, const auto &x_100);
Unit x_131(const auto &x_132);
Unit x_139(const auto &x_140, const auto &x_141, const auto &x_142);
Unit x_160(const auto &x_161, const auto &x_162, const auto &x_163);
Unit x_179(const auto &x_180);
Unit eval_stmts_x_19(const auto &x_187);
Unit eval_stmts_x_17(const auto &x_193);
Unit x_201(const auto &x_202);
int64_t x_209(const auto &x_210);
int64_t x_212(const auto &x_213);
LayoutNode x_215(const auto &x_216);
Node x_218(const auto &x_219);
Node x_221(const auto &x_222);
Unit var_modified_x_463(const auto &x_465) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_466) { return MakeUnit(); })));
}
auto eval_expr_x_460(const auto &x_470) {
  if ((x_470->prev != nullptr) && (!(x_470->prev)->var_line_break)) {
    return max(x_470->var_height_external, (x_470->prev)->var_line_height);
  } else {
    return x_470->var_height_external;
  }
}
Unit var_modified_x_458(const auto &x_487) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_488) { return MakeUnit(); })));
}
auto eval_expr_x_455(const auto &x_490) {
  if (eq(x_490->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_490->var_height_internal;
  }
}
Unit var_modified_x_453(const auto &x_499) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_500) { return MakeUnit(); })));
}
auto eval_expr_x_450(const auto &x_503) {
  if (x_503->var_intrinsic_height_is_height) {
    return x_503->var_intrinsic_height_internal;
  } else {
    if ((x_503->parent != nullptr) && (x_503->parent)->var_is_flex_column) {
      return plus(x_503->var_intrinsic_height_internal, mult(x_503->var_flex_amount, (x_503->parent)->var_flex_unit));
    } else {
      if (x_503->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_503->var_box_height, divide(x_503->var_height_expr.r.a0, 100.));
      } else {
        return max(x_503->var_box_height, x_503->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_448(const auto &x_556) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_557) { return MakeUnit(); })));
}
auto eval_expr_x_445(const auto &x_562) {
  if (x_562->prev != nullptr) {
    if (x_562->var_line_break || (x_562->prev)->var_line_break) {
      return plus((x_562->prev)->var_y, (x_562->prev)->var_line_height);
    } else {
      return (x_562->prev)->var_y;
    }
  } else {
    if (x_562->parent != nullptr) {
      return (x_562->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_443(const auto &x_587) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_588) { return MakeUnit(); })));
}
auto eval_expr_x_440(const auto &x_592) {
  if (eq(x_592->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_592->var_width_internal;
  }
}
Unit var_modified_x_438(const auto &x_601) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_602) { return MakeUnit(); })));
}
auto eval_expr_x_435(const auto &x_605) {
  if (x_605->var_intrinsic_width_is_width) {
    return x_605->var_intrinsic_width_internal;
  } else {
    if ((x_605->parent != nullptr) && (x_605->parent)->var_is_flex_row) {
      return plus(x_605->var_intrinsic_width_internal, mult(x_605->var_flex_amount, (x_605->parent)->var_flex_unit));
    } else {
      if (x_605->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE) {
        return mult(x_605->var_box_width, divide(x_605->var_width_expr.r.a0, 100.));
      } else {
        return max(x_605->var_box_width, x_605->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_433(const auto &x_658) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_659) { return MakeUnit(); })));
}
auto eval_expr_x_430(const auto &x_664) {
  if (x_664->prev != nullptr) {
    if (x_664->var_line_break || (x_664->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_664->prev)->var_x, (x_664->prev)->var_width_external);
    }
  } else {
    if (x_664->parent != nullptr) {
      return (x_664->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_428(const auto &x_685) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_686) { return MakeUnit(); })));
}
auto eval_expr_x_425(const auto &x_688) {
  if (gt(x_688->var_left_over, 0.)) {
    return divide(x_688->var_left_over, x_688->var_flex_grow_sum);
  } else {
    return divide(x_688->var_left_over, x_688->var_flex_shrink_sum);
  }
}
Unit var_modified_x_423(const auto &x_709) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_710) { return MakeUnit(); })));
}
auto eval_expr_x_420(const auto &x_712) {
  if ((x_712->parent != nullptr) && gt((x_712->parent)->var_left_over, 0.)) {
    return x_712->var_flex_grow;
  } else {
    return x_712->var_flex_shrink;
  }
}
Unit var_modified_x_418(const auto &x_725) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_726) { return MakeUnit(); })));
}
auto eval_expr_x_415(const auto &x_729) {
  if (x_729->var_is_flex_row) {
    return minus(x_729->var_box_width, (x_729->last != nullptr) ? ((x_729->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_729->var_box_height, (x_729->last != nullptr) ? ((x_729->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_413(const auto &x_750) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_751) { return MakeUnit(); })));
}
auto eval_expr_x_410(const auto &x_753) {
  if (x_753->parent != nullptr) {
    return (x_753->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_408(const auto &x_758) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_759) { return MakeUnit(); })));
}
auto eval_expr_x_405(const auto &x_761) {
  if (x_761->parent != nullptr) {
    return (x_761->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_401(const auto &x_766) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_767) { return MakeUnit(); })));
}
auto eval_expr_x_398(const auto &x_776) {
  if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return false;
  } else {
    if (eq(x_776->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
      return false;
    } else {
      if ((x_776->parent != nullptr) &&
          (eq((x_776->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
           eq((x_776->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
        return true;
      } else {
        if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_block))) {
          return true;
        } else {
          if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_inline))) {
            return false;
          } else {
            if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_inline_block))) {
              return false;
            } else {
              if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_flex))) {
                if (eq(x_776->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
                  return false;
                } else {
                  if (eq(x_776->prop_flex_direction, DEStringLit(DEStringCase::DSTRING_column))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex))) {
                  return false;
                } else {
                  if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_contents))) {
                    return false;
                  } else {
                    if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_table))) {
                      return true;
                    } else {
                      if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_table_row_group))) {
                        return true;
                      } else {
                        if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_table_row))) {
                          return true;
                        } else {
                          if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_table_cell))) {
                            return false;
                          } else {
                            if (eq(x_776->var_display, DEStringLit(DEStringCase::DSTRING_list_item))) {
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
Unit var_modified_x_396(const auto &x_853) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_854) { return MakeUnit(); })));
}
auto eval_expr_x_393(const auto &x_856) {
  return (((!(x_856->parent != nullptr)) || (x_856->parent)->var_visible) &&
          (neq(x_856->var_display, DEStringLit(DEStringCase::DSTRING_none)) &&
           ((!x_856->var_inside_svg) && (!x_856->var_disabled))));
}
Unit var_modified_x_391(const auto &x_873) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_874) { return MakeUnit(); })));
}
auto eval_expr_x_388(const auto &x_878) {
  if (eq(x_878->name, DEStringLit(DEStringCase::DSTRING_NOSCRIPT))) {
    return true;
  } else {
    return ((x_878->parent != nullptr) && (x_878->parent)->var_disabled);
  }
}
Unit var_modified_x_386(const auto &x_883) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_884) { return MakeUnit(); })));
}
auto eval_expr_x_383(const auto &x_888) {
  return ((x_888->parent != nullptr) && ((x_888->parent)->var_is_svg_block || (x_888->parent)->var_inside_svg));
}
Unit var_modified_x_381(const auto &x_897) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_898) { return MakeUnit(); })));
}
auto eval_expr_x_378(const auto &x_900) { return eq(x_900->name, DEStringLit(DEStringCase::DSTRING_svg)); }
Unit var_modified_x_376(const auto &x_901) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_902) { return MakeUnit(); })));
}
auto eval_expr_x_373(const auto &x_904) {
  return neq(x_904->var_height_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_371(const auto &x_909) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_910) { return MakeUnit(); })));
}
auto eval_expr_x_368(const auto &x_913) {
  if (!x_913->has_attr_height) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_913->attr_height.c == DEStringCase::DStringIsFloat) ||
        (x_913->attr_height.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_913->attr_height;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_366(const auto &x_924) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_925) { return MakeUnit(); })));
}
auto eval_expr_x_363(const auto &x_927) {
  return neq(x_927->var_width_attr_expr, DEStringLit(DEStringCase::DSTRING_auto));
}
Unit var_modified_x_361(const auto &x_932) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_933) { return MakeUnit(); })));
}
auto eval_expr_x_358(const auto &x_936) {
  if (!x_936->has_attr_width) {
    return DEStringLit(DEStringCase::DSTRING_auto);
  } else {
    if ((x_936->attr_width.c == DEStringCase::DStringIsFloat) ||
        (x_936->attr_width.c == DEStringCase::DHasSuffix_PERCENTAGE)) {
      return x_936->attr_width;
    } else {
      return DEStringLit(DEStringCase::DSTRING_auto);
    }
  }
}
Unit var_modified_x_356(const auto &x_947) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_948) { return MakeUnit(); })));
}
auto eval_expr_x_353(const auto &x_951) {
  if ((x_951->parent != nullptr) &&
      (eq((x_951->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_951->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_951->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column)) ||
        eq((x_951->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_column_reverse))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_351(const auto &x_976) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_977) { return MakeUnit(); })));
}
auto eval_expr_x_348(const auto &x_981) {
  if ((x_981->parent != nullptr) &&
      (eq((x_981->parent)->var_display, DEStringLit(DEStringCase::DSTRING_flex)) ||
       eq((x_981->parent)->var_display, DEStringLit(DEStringCase::DSTRING_inline_flex)))) {
    if (eq((x_981->parent)->var_flex_direction, DEStringLit(DEStringCase::DSTRING_row))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_346(const auto &x_1006) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1007) { return MakeUnit(); })));
}
auto eval_expr_x_343(const auto &x_1009) {
  if (x_1009->has_prop_flex_direction) {
    return x_1009->prop_flex_direction;
  } else {
    return DEStringLit(DEStringCase::DSTRING_);
  }
}
Unit var_modified_x_341(const auto &x_1012) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1013) { return MakeUnit(); })));
}
auto eval_expr_x_338(const auto &x_1018) {
  return plus((x_1018->prev != nullptr) ? ((x_1018->prev)->var_flex_shrink_sum) : (0.), x_1018->var_flex_shrink);
}
Unit var_modified_x_336(const auto &x_1027) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1028) { return MakeUnit(); })));
}
auto eval_expr_x_333(const auto &x_1033) {
  return plus((x_1033->prev != nullptr) ? ((x_1033->prev)->var_flex_grow_sum) : (0.), x_1033->var_flex_grow);
}
Unit var_modified_x_331(const auto &x_1042) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1043) { return MakeUnit(); })));
}
auto eval_expr_x_328(const auto &x_1046) {
  if (x_1046->has_prop_flex_shrink) {
    return (x_1046->prop_flex_shrink.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_326(const auto &x_1049) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1050) { return MakeUnit(); })));
}
auto eval_expr_x_323(const auto &x_1053) {
  if (x_1053->has_prop_flex_grow) {
    return (x_1053->prop_flex_grow.r.a0);
  } else {
    return 0.;
  }
}
Unit var_modified_x_321(const auto &x_1056) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1057) { return MakeUnit(); })));
}
auto eval_expr_x_318(const auto &x_1061) {
  if (x_1061->has_prop_position) {
    return x_1061->prop_position;
  } else {
    return DEStringLit(DEStringCase::DSTRING_static);
  }
}
Unit var_modified_x_316(const auto &x_1064) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1065) { return MakeUnit(); })));
}
auto eval_expr_x_313(const auto &x_1069) {
  if (x_1069->has_prop_display) {
    return x_1069->prop_display;
  } else {
    return DEStringLit(DEStringCase::DSTRING_block);
  }
}
Unit var_modified_x_309(const auto &x_1072) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1073) { return MakeUnit(); })));
}
auto eval_expr_x_306(const auto &x_1080) {
  if (x_1080->prev != nullptr) {
    if (x_1080->var_line_break) {
      return plus((x_1080->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1080->prev)->var_intrinsic_current_line_height, x_1080->var_intrinsic_height_external));
    } else {
      return (x_1080->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1080->var_line_break) {
      return x_1080->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_304(const auto &x_1109) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1110) { return MakeUnit(); })));
}
auto eval_expr_x_301(const auto &x_1117) {
  if (x_1117->var_line_break) {
    return 0.;
  } else {
    return max(x_1117->var_intrinsic_height_external,
               (x_1117->prev != nullptr) ? ((x_1117->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_299(const auto &x_1130) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1131) { return MakeUnit(); })));
}
auto eval_expr_x_296(const auto &x_1138) {
  return plus((x_1138->prev != nullptr) ? ((x_1138->prev)->var_intrinsic_height_sum) : (0.),
              x_1138->var_intrinsic_height_external);
}
Unit var_modified_x_294(const auto &x_1147) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1148) { return MakeUnit(); })));
}
auto eval_expr_x_291(const auto &x_1150) {
  if (eq(x_1150->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1150->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_289(const auto &x_1159) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1160) { return MakeUnit(); })));
}
auto eval_expr_x_286(const auto &x_1163) {
  if (eq(x_1163->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1163->var_inside_svg) {
      return 0.;
    } else {
      if (x_1163->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1163->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1163->var_height_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             neq(x_1163->var_height_expr, DEStringLit(DEStringCase::DSTRING_fit_content)))) {
          if (x_1163->var_height_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1163->var_height_expr.r.a0;
          } else {
            if (x_1163->var_height_expr.c == DEStringCase::DHasSuffix_ch) {
              return x_1163->var_height_expr.r.a0;
            } else {
              return x_1163->var_height_expr.r.a0;
            }
          }
        } else {
          return plus(
              x_1163->var_children_intrinsic_height,
              (eq(x_1163->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (10.)
                  : ((x_1163->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1163->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1163->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (10.)
                                       : ((eq(x_1163->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1163->var_has_height_attr &&
                                                  (x_1163->var_height_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1163->var_height_attr_expr.r.a0)
                                                     : ((x_1163->has_attr_viewBox)
                                                            ? (x_1163->attr_viewBox.r.a3)
                                                            : (mult((x_1163->attr_viewBox.r.a3),
                                                                    divide(x_1163->var_height_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1163->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1163->var_has_height_attr)
                                                            ? (x_1163->var_height_attr_expr.r.a0)
                                                            : ((x_1163->has_attr_image_height &&
                                                                (!x_1163->var_has_width_attr))
                                                                   ? (int_to_float(x_1163->attr_image_height))
                                                                   : ((neq(x_1163->attr_image_width,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1163->var_width_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1163->attr_image_height),
                                                                                       int_to_float(
                                                                                           x_1163->attr_image_width))))
                                                                          : (0.))))
                                                     : ((eq(x_1163->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (150.)
                                                            : ((eq(x_1163->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_284(const auto &x_1308) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1309) { return MakeUnit(); })));
}
auto eval_expr_x_281(const auto &x_1311) {
  if (eq(x_1311->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1311->var_inside_svg || x_1311->var_disabled)) {
    return true;
  } else {
    if ((x_1311->parent != nullptr) && (x_1311->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1311->var_height_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1311->var_height_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1311->var_height_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1311->var_height_expr.c == DEStringCase::DHasSuffix_lh) ||
             eq(x_1311->var_height_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_279(const auto &x_1360) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1361) { return MakeUnit(); })));
}
auto eval_expr_x_276(const auto &x_1364) {
  if (x_1364->has_prop_height) {
    return x_1364->prop_height;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit var_modified_x_274(const auto &x_1367) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1368) { return MakeUnit(); })));
}
auto eval_expr_x_271(const auto &x_1370) {
  if (x_1370->last != nullptr) {
    return plus((x_1370->last)->var_finished_intrinsic_height_sum, (x_1370->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_269(const auto &x_1379) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1380) { return MakeUnit(); })));
}
auto eval_expr_x_266(const auto &x_1387) {
  return plus((x_1387->prev != nullptr) ? ((x_1387->prev)->var_intrinsic_width_sum) : (0.),
              x_1387->var_intrinsic_width_external);
}
Unit var_modified_x_264(const auto &x_1396) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1397) { return MakeUnit(); })));
}
auto eval_expr_x_261(const auto &x_1404) {
  return max(x_1404->var_intrinsic_current_line_width,
             (x_1404->prev != nullptr) ? ((x_1404->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_259(const auto &x_1413) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1414) { return MakeUnit(); })));
}
auto eval_expr_x_256(const auto &x_1419) {
  return plus(x_1419->var_intrinsic_width_external,
              ((x_1419->prev != nullptr) && (!(x_1419->prev)->var_line_break))
                  ? ((x_1419->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_254(const auto &x_1432) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1433) { return MakeUnit(); })));
}
auto eval_expr_x_251(const auto &x_1435) {
  if (eq(x_1435->var_position, DEStringLit(DEStringCase::DSTRING_absolute))) {
    return 0.;
  } else {
    return x_1435->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_249(const auto &x_1444) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1445) { return MakeUnit(); })));
}
auto eval_expr_x_246(const auto &x_1448) {
  if (eq(x_1448->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return 0.;
  } else {
    if (x_1448->var_inside_svg) {
      return 0.;
    } else {
      if (x_1448->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1448->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) &&
            ((!(x_1448->var_width_expr.c == DEStringCase::DHasSuffix_PERCENTAGE)) &&
             (neq(x_1448->var_width_expr, DEStringLit(DEStringCase::DSTRING_fit_content)) &&
              (neq(x_1448->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)) &&
               (!(x_1448->var_width_expr.c == DEStringCase::DHasPrefix_calc)))))) {
          if (x_1448->var_width_expr.c == DEStringCase::DHasSuffix_px) {
            return x_1448->var_width_expr.r.a0;
          } else {
            return x_1448->var_width_expr.r.a0;
          }
        } else {
          return plus(
              x_1448->var_children_intrinsic_width,
              (eq(x_1448->name, DEStringLit(DEStringCase::DSTRING_SLASHtext)))
                  ? (100.)
                  : ((x_1448->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1448->name, DEStringLit(DEStringCase::DSTRING_BR)))
                                ? (0.)
                                : ((eq(x_1448->name, DEStringLit(DEStringCase::DSTRING_INPUT)))
                                       ? (100.)
                                       : ((eq(x_1448->name, DEStringLit(DEStringCase::DSTRING_svg)))
                                              ? ((x_1448->var_has_width_attr &&
                                                  (x_1448->var_width_attr_expr.c == DEStringCase::DStringIsFloat))
                                                     ? (x_1448->var_width_attr_expr.r.a0)
                                                     : (((!x_1448->var_has_width_attr) && x_1448->has_attr_viewBox)
                                                            ? (x_1448->attr_viewBox.r.a2)
                                                            : (mult((x_1448->attr_viewBox.r.a2),
                                                                    divide(x_1448->var_width_attr_expr.r.a0, 100.)))))
                                              : ((eq(x_1448->name, DEStringLit(DEStringCase::DSTRING_IMG)))
                                                     ? ((x_1448->var_has_width_attr)
                                                            ? (x_1448->var_width_attr_expr.r.a0)
                                                            : ((x_1448->has_attr_image_width &&
                                                                (!x_1448->var_has_height_attr))
                                                                   ? (int_to_float(x_1448->attr_image_width))
                                                                   : ((neq(x_1448->attr_image_height,
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                (x_1448->var_height_attr_expr.r.a0),
                                                                                divide(int_to_float(
                                                                                           x_1448->attr_image_width),
                                                                                       int_to_float(
                                                                                           x_1448->attr_image_height))))
                                                                          : (0.))))
                                                     : ((eq(x_1448->name, DEStringLit(DEStringCase::DSTRING_IFRAME)))
                                                            ? (300.)
                                                            : ((eq(x_1448->name,
                                                                   DEStringLit(DEStringCase::DSTRING_TEXTAREA)))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_244(const auto &x_1601) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1602) { return MakeUnit(); })));
}
auto eval_expr_x_241(const auto &x_1604) {
  if (x_1604->last != nullptr) {
    return (x_1604->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_239(const auto &x_1609) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1610) { return MakeUnit(); })));
}
auto eval_expr_x_236(const auto &x_1612) {
  if (eq(x_1612->var_display, DEStringLit(DEStringCase::DSTRING_none)) ||
      (x_1612->var_inside_svg || x_1612->var_disabled)) {
    return true;
  } else {
    if ((x_1612->parent != nullptr) && (x_1612->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1612->var_width_expr, DEStringLit(DEStringCase::DSTRING_auto)) ||
          ((x_1612->var_width_expr.c == DEStringCase::DHasSuffix_px) ||
           ((x_1612->var_width_expr.c == DEStringCase::DHasSuffix_ch) ||
            ((x_1612->var_width_expr.c == DEStringCase::DHasPrefix_calc) ||
             eq(x_1612->var_width_expr, DEStringLit(DEStringCase::DSTRING_max_content)))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_234(const auto &x_1661) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1662) { return MakeUnit(); })));
}
auto eval_expr_x_231(const auto &x_1664) {
  if (eq(x_1664->var_display, DEStringLit(DEStringCase::DSTRING_none))) {
    return true;
  } else {
    if (x_1664->var_inside_svg) {
      return true;
    } else {
      if (x_1664->var_disabled) {
        return true;
      } else {if ( eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SLASHdocument)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SLASHshadow_root)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_DIV)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_HTML)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_BODY)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_BUTTON)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_FOOTER)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SELECT)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SECTION)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_FORM)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_CENTER)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_TD)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_TR)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_TBODY)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_TABLE)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SPAN)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_FONT)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_A)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_ARTICLE)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_P)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_U)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_UL)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_B)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_H1)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_H2)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_H3)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_H4)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_DT)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_DD)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_DL)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_LI)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_LABEL)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_OL)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_NAV)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_HEADER)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_HEAD)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SOURCE)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_PICTURE)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_FIGURE)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_FIGCAPTION)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_MAIN)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_REACT_PARTIAL)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_QUERY_BUILDER)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_MODAL_DIALOG)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SCROLLABLE_REGION)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_DIALOG_HELPER)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_AUTO_CHECK)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_TOOL_TIP)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_CUSTOM_SCOPES)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_QBSEARCH_INPUT)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_INCLUDE_FRAGMENT)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_COOKIE_CONSENT_LINK)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_FULLSTORY_CAPTURE)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_GHCC_CONSENT)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_GLOBAL_BANNER)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_ACTIVE_GLOBAL_BANNERS)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_CARD_SKEW)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_EM)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_ASIDE)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_AUDIO)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SUP)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_TIME)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_ABBR)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SMALL)) || (eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_SLOT)) || eq(x_1664->name,DEStringLit(DEStringCase::DSTRING_I)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_229(const auto &x_1677) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_1678) { return MakeUnit(); })));
}
auto eval_expr_x_226(const auto &x_1681) {
  if (x_1681->has_prop_width) {
    return x_1681->prop_width;
  } else {
    return DEStringLit(DEStringCase::DSTRING_auto);
  }
}
Unit eval_stmts_x_200(const auto &x_224) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_225) {
    WriteMetric();
    auto x_227 = eval_expr_x_226(x_224);
    if (x_224->has_var_width_expr) {
      auto x_228 = x_224->var_width_expr;
      if (!EqualValue(x_228, x_227)) {
        var_modified_x_229(x_224);
      }
    }
    x_224->has_var_width_expr = true;
    x_224->var_width_expr = AsDEString(x_227);
    WriteMetric();
    auto x_232 = eval_expr_x_231(x_224);
    if (x_224->has_var_is_default_case) {
      auto x_233 = x_224->var_is_default_case;
      if (!EqualValue(x_233, x_232)) {
        var_modified_x_234(x_224);
      }
    }
    x_224->has_var_is_default_case = true;
    x_224->var_is_default_case = Asbool(x_232);
    WriteMetric();
    auto x_237 = eval_expr_x_236(x_224);
    if (x_224->has_var_intrinsic_width_is_width) {
      auto x_238 = x_224->var_intrinsic_width_is_width;
      if (!EqualValue(x_238, x_237)) {
        var_modified_x_239(x_224);
      }
    }
    x_224->has_var_intrinsic_width_is_width = true;
    x_224->var_intrinsic_width_is_width = Asbool(x_237);
    WriteMetric();
    auto x_242 = eval_expr_x_241(x_224);
    if (x_224->has_var_children_intrinsic_width) {
      auto x_243 = x_224->var_children_intrinsic_width;
      if (!EqualValue(x_243, x_242)) {
        var_modified_x_244(x_224);
      }
    }
    x_224->has_var_children_intrinsic_width = true;
    x_224->var_children_intrinsic_width = Asdouble(x_242);
    WriteMetric();
    auto x_247 = eval_expr_x_246(x_224);
    if (x_224->has_var_intrinsic_width_internal) {
      auto x_248 = x_224->var_intrinsic_width_internal;
      if (!EqualValue(x_248, x_247)) {
        var_modified_x_249(x_224);
      }
    }
    x_224->has_var_intrinsic_width_internal = true;
    x_224->var_intrinsic_width_internal = Asdouble(x_247);
    WriteMetric();
    auto x_252 = eval_expr_x_251(x_224);
    if (x_224->has_var_intrinsic_width_external) {
      auto x_253 = x_224->var_intrinsic_width_external;
      if (!EqualValue(x_253, x_252)) {
        var_modified_x_254(x_224);
      }
    }
    x_224->has_var_intrinsic_width_external = true;
    x_224->var_intrinsic_width_external = Asdouble(x_252);
    WriteMetric();
    auto x_257 = eval_expr_x_256(x_224);
    if (x_224->has_var_intrinsic_current_line_width) {
      auto x_258 = x_224->var_intrinsic_current_line_width;
      if (!EqualValue(x_258, x_257)) {
        var_modified_x_259(x_224);
      }
    }
    x_224->has_var_intrinsic_current_line_width = true;
    x_224->var_intrinsic_current_line_width = Asdouble(x_257);
    WriteMetric();
    auto x_262 = eval_expr_x_261(x_224);
    if (x_224->has_var_intrinsic_width_max) {
      auto x_263 = x_224->var_intrinsic_width_max;
      if (!EqualValue(x_263, x_262)) {
        var_modified_x_264(x_224);
      }
    }
    x_224->has_var_intrinsic_width_max = true;
    x_224->var_intrinsic_width_max = Asdouble(x_262);
    WriteMetric();
    auto x_267 = eval_expr_x_266(x_224);
    if (x_224->has_var_intrinsic_width_sum) {
      auto x_268 = x_224->var_intrinsic_width_sum;
      if (!EqualValue(x_268, x_267)) {
        var_modified_x_269(x_224);
      }
    }
    x_224->has_var_intrinsic_width_sum = true;
    x_224->var_intrinsic_width_sum = Asdouble(x_267);
    WriteMetric();
    auto x_272 = eval_expr_x_271(x_224);
    if (x_224->has_var_children_intrinsic_height) {
      auto x_273 = x_224->var_children_intrinsic_height;
      if (!EqualValue(x_273, x_272)) {
        var_modified_x_274(x_224);
      }
    }
    x_224->has_var_children_intrinsic_height = true;
    x_224->var_children_intrinsic_height = Asdouble(x_272);
    WriteMetric();
    auto x_277 = eval_expr_x_276(x_224);
    if (x_224->has_var_height_expr) {
      auto x_278 = x_224->var_height_expr;
      if (!EqualValue(x_278, x_277)) {
        var_modified_x_279(x_224);
      }
    }
    x_224->has_var_height_expr = true;
    x_224->var_height_expr = AsDEString(x_277);
    WriteMetric();
    auto x_282 = eval_expr_x_281(x_224);
    if (x_224->has_var_intrinsic_height_is_height) {
      auto x_283 = x_224->var_intrinsic_height_is_height;
      if (!EqualValue(x_283, x_282)) {
        var_modified_x_284(x_224);
      }
    }
    x_224->has_var_intrinsic_height_is_height = true;
    x_224->var_intrinsic_height_is_height = Asbool(x_282);
    WriteMetric();
    auto x_287 = eval_expr_x_286(x_224);
    if (x_224->has_var_intrinsic_height_internal) {
      auto x_288 = x_224->var_intrinsic_height_internal;
      if (!EqualValue(x_288, x_287)) {
        var_modified_x_289(x_224);
      }
    }
    x_224->has_var_intrinsic_height_internal = true;
    x_224->var_intrinsic_height_internal = Asdouble(x_287);
    WriteMetric();
    auto x_292 = eval_expr_x_291(x_224);
    if (x_224->has_var_intrinsic_height_external) {
      auto x_293 = x_224->var_intrinsic_height_external;
      if (!EqualValue(x_293, x_292)) {
        var_modified_x_294(x_224);
      }
    }
    x_224->has_var_intrinsic_height_external = true;
    x_224->var_intrinsic_height_external = Asdouble(x_292);
    WriteMetric();
    auto x_297 = eval_expr_x_296(x_224);
    if (x_224->has_var_intrinsic_height_sum) {
      auto x_298 = x_224->var_intrinsic_height_sum;
      if (!EqualValue(x_298, x_297)) {
        var_modified_x_299(x_224);
      }
    }
    x_224->has_var_intrinsic_height_sum = true;
    x_224->var_intrinsic_height_sum = Asdouble(x_297);
    WriteMetric();
    auto x_302 = eval_expr_x_301(x_224);
    if (x_224->has_var_intrinsic_current_line_height) {
      auto x_303 = x_224->var_intrinsic_current_line_height;
      if (!EqualValue(x_303, x_302)) {
        var_modified_x_304(x_224);
      }
    }
    x_224->has_var_intrinsic_current_line_height = true;
    x_224->var_intrinsic_current_line_height = Asdouble(x_302);
    WriteMetric();
    auto x_307 = eval_expr_x_306(x_224);
    if (x_224->has_var_finished_intrinsic_height_sum) {
      auto x_308 = x_224->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_308, x_307)) {
        var_modified_x_309(x_224);
      }
    }
    x_224->has_var_finished_intrinsic_height_sum = true;
    x_224->var_finished_intrinsic_height_sum = Asdouble(x_307);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_196(const auto &x_311) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_312) {
    WriteMetric();
    auto x_314 = eval_expr_x_313(x_311);
    if (x_311->has_var_display) {
      auto x_315 = x_311->var_display;
      if (!EqualValue(x_315, x_314)) {
        var_modified_x_316(x_311);
      }
    }
    x_311->has_var_display = true;
    x_311->var_display = AsDEString(x_314);
    WriteMetric();
    auto x_319 = eval_expr_x_318(x_311);
    if (x_311->has_var_position) {
      auto x_320 = x_311->var_position;
      if (!EqualValue(x_320, x_319)) {
        var_modified_x_321(x_311);
      }
    }
    x_311->has_var_position = true;
    x_311->var_position = AsDEString(x_319);
    WriteMetric();
    auto x_324 = eval_expr_x_323(x_311);
    if (x_311->has_var_flex_grow) {
      auto x_325 = x_311->var_flex_grow;
      if (!EqualValue(x_325, x_324)) {
        var_modified_x_326(x_311);
      }
    }
    x_311->has_var_flex_grow = true;
    x_311->var_flex_grow = Asdouble(x_324);
    WriteMetric();
    auto x_329 = eval_expr_x_328(x_311);
    if (x_311->has_var_flex_shrink) {
      auto x_330 = x_311->var_flex_shrink;
      if (!EqualValue(x_330, x_329)) {
        var_modified_x_331(x_311);
      }
    }
    x_311->has_var_flex_shrink = true;
    x_311->var_flex_shrink = Asdouble(x_329);
    WriteMetric();
    auto x_334 = eval_expr_x_333(x_311);
    if (x_311->has_var_flex_grow_sum) {
      auto x_335 = x_311->var_flex_grow_sum;
      if (!EqualValue(x_335, x_334)) {
        var_modified_x_336(x_311);
      }
    }
    x_311->has_var_flex_grow_sum = true;
    x_311->var_flex_grow_sum = Asdouble(x_334);
    WriteMetric();
    auto x_339 = eval_expr_x_338(x_311);
    if (x_311->has_var_flex_shrink_sum) {
      auto x_340 = x_311->var_flex_shrink_sum;
      if (!EqualValue(x_340, x_339)) {
        var_modified_x_341(x_311);
      }
    }
    x_311->has_var_flex_shrink_sum = true;
    x_311->var_flex_shrink_sum = Asdouble(x_339);
    WriteMetric();
    auto x_344 = eval_expr_x_343(x_311);
    if (x_311->has_var_flex_direction) {
      auto x_345 = x_311->var_flex_direction;
      if (!EqualValue(x_345, x_344)) {
        var_modified_x_346(x_311);
      }
    }
    x_311->has_var_flex_direction = true;
    x_311->var_flex_direction = AsDEString(x_344);
    WriteMetric();
    auto x_349 = eval_expr_x_348(x_311);
    if (x_311->has_var_is_flex_row) {
      auto x_350 = x_311->var_is_flex_row;
      if (!EqualValue(x_350, x_349)) {
        var_modified_x_351(x_311);
      }
    }
    x_311->has_var_is_flex_row = true;
    x_311->var_is_flex_row = Asbool(x_349);
    WriteMetric();
    auto x_354 = eval_expr_x_353(x_311);
    if (x_311->has_var_is_flex_column) {
      auto x_355 = x_311->var_is_flex_column;
      if (!EqualValue(x_355, x_354)) {
        var_modified_x_356(x_311);
      }
    }
    x_311->has_var_is_flex_column = true;
    x_311->var_is_flex_column = Asbool(x_354);
    WriteMetric();
    auto x_359 = eval_expr_x_358(x_311);
    if (x_311->has_var_width_attr_expr) {
      auto x_360 = x_311->var_width_attr_expr;
      if (!EqualValue(x_360, x_359)) {
        var_modified_x_361(x_311);
      }
    }
    x_311->has_var_width_attr_expr = true;
    x_311->var_width_attr_expr = AsDEString(x_359);
    WriteMetric();
    auto x_364 = eval_expr_x_363(x_311);
    if (x_311->has_var_has_width_attr) {
      auto x_365 = x_311->var_has_width_attr;
      if (!EqualValue(x_365, x_364)) {
        var_modified_x_366(x_311);
      }
    }
    x_311->has_var_has_width_attr = true;
    x_311->var_has_width_attr = Asbool(x_364);
    WriteMetric();
    auto x_369 = eval_expr_x_368(x_311);
    if (x_311->has_var_height_attr_expr) {
      auto x_370 = x_311->var_height_attr_expr;
      if (!EqualValue(x_370, x_369)) {
        var_modified_x_371(x_311);
      }
    }
    x_311->has_var_height_attr_expr = true;
    x_311->var_height_attr_expr = AsDEString(x_369);
    WriteMetric();
    auto x_374 = eval_expr_x_373(x_311);
    if (x_311->has_var_has_height_attr) {
      auto x_375 = x_311->var_has_height_attr;
      if (!EqualValue(x_375, x_374)) {
        var_modified_x_376(x_311);
      }
    }
    x_311->has_var_has_height_attr = true;
    x_311->var_has_height_attr = Asbool(x_374);
    WriteMetric();
    auto x_379 = eval_expr_x_378(x_311);
    if (x_311->has_var_is_svg_block) {
      auto x_380 = x_311->var_is_svg_block;
      if (!EqualValue(x_380, x_379)) {
        var_modified_x_381(x_311);
      }
    }
    x_311->has_var_is_svg_block = true;
    x_311->var_is_svg_block = Asbool(x_379);
    WriteMetric();
    auto x_384 = eval_expr_x_383(x_311);
    if (x_311->has_var_inside_svg) {
      auto x_385 = x_311->var_inside_svg;
      if (!EqualValue(x_385, x_384)) {
        var_modified_x_386(x_311);
      }
    }
    x_311->has_var_inside_svg = true;
    x_311->var_inside_svg = Asbool(x_384);
    WriteMetric();
    auto x_389 = eval_expr_x_388(x_311);
    if (x_311->has_var_disabled) {
      auto x_390 = x_311->var_disabled;
      if (!EqualValue(x_390, x_389)) {
        var_modified_x_391(x_311);
      }
    }
    x_311->has_var_disabled = true;
    x_311->var_disabled = Asbool(x_389);
    WriteMetric();
    auto x_394 = eval_expr_x_393(x_311);
    if (x_311->has_var_visible) {
      auto x_395 = x_311->var_visible;
      if (!EqualValue(x_395, x_394)) {
        var_modified_x_396(x_311);
      }
    }
    x_311->has_var_visible = true;
    x_311->var_visible = Asbool(x_394);
    WriteMetric();
    auto x_399 = eval_expr_x_398(x_311);
    if (x_311->has_var_line_break) {
      auto x_400 = x_311->var_line_break;
      if (!EqualValue(x_400, x_399)) {
        var_modified_x_401(x_311);
      }
    }
    x_311->has_var_line_break = true;
    x_311->var_line_break = Asbool(x_399);
    return MakeUnit();
  })));
}
Unit eval_stmts_x_190(const auto &x_403) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_404) {
    WriteMetric();
    auto x_406 = eval_expr_x_405(x_403);
    if (x_403->has_var_box_width) {
      auto x_407 = x_403->var_box_width;
      if (!EqualValue(x_407, x_406)) {
        var_modified_x_408(x_403);
      }
    }
    x_403->has_var_box_width = true;
    x_403->var_box_width = Asdouble(x_406);
    WriteMetric();
    auto x_411 = eval_expr_x_410(x_403);
    if (x_403->has_var_box_height) {
      auto x_412 = x_403->var_box_height;
      if (!EqualValue(x_412, x_411)) {
        var_modified_x_413(x_403);
      }
    }
    x_403->has_var_box_height = true;
    x_403->var_box_height = Asdouble(x_411);
    WriteMetric();
    auto x_416 = eval_expr_x_415(x_403);
    if (x_403->has_var_left_over) {
      auto x_417 = x_403->var_left_over;
      if (!EqualValue(x_417, x_416)) {
        var_modified_x_418(x_403);
      }
    }
    x_403->has_var_left_over = true;
    x_403->var_left_over = Asdouble(x_416);
    WriteMetric();
    auto x_421 = eval_expr_x_420(x_403);
    if (x_403->has_var_flex_amount) {
      auto x_422 = x_403->var_flex_amount;
      if (!EqualValue(x_422, x_421)) {
        var_modified_x_423(x_403);
      }
    }
    x_403->has_var_flex_amount = true;
    x_403->var_flex_amount = Asdouble(x_421);
    WriteMetric();
    auto x_426 = eval_expr_x_425(x_403);
    if (x_403->has_var_flex_unit) {
      auto x_427 = x_403->var_flex_unit;
      if (!EqualValue(x_427, x_426)) {
        var_modified_x_428(x_403);
      }
    }
    x_403->has_var_flex_unit = true;
    x_403->var_flex_unit = Asdouble(x_426);
    WriteMetric();
    auto x_431 = eval_expr_x_430(x_403);
    if (x_403->has_var_x) {
      auto x_432 = x_403->var_x;
      if (!EqualValue(x_432, x_431)) {
        var_modified_x_433(x_403);
      }
    }
    x_403->has_var_x = true;
    x_403->var_x = Asdouble(x_431);
    WriteMetric();
    auto x_436 = eval_expr_x_435(x_403);
    if (x_403->has_var_width_internal) {
      auto x_437 = x_403->var_width_internal;
      if (!EqualValue(x_437, x_436)) {
        var_modified_x_438(x_403);
      }
    }
    x_403->has_var_width_internal = true;
    x_403->var_width_internal = Asdouble(x_436);
    WriteMetric();
    auto x_441 = eval_expr_x_440(x_403);
    if (x_403->has_var_width_external) {
      auto x_442 = x_403->var_width_external;
      if (!EqualValue(x_442, x_441)) {
        var_modified_x_443(x_403);
      }
    }
    x_403->has_var_width_external = true;
    x_403->var_width_external = Asdouble(x_441);
    WriteMetric();
    auto x_446 = eval_expr_x_445(x_403);
    if (x_403->has_var_y) {
      auto x_447 = x_403->var_y;
      if (!EqualValue(x_447, x_446)) {
        var_modified_x_448(x_403);
      }
    }
    x_403->has_var_y = true;
    x_403->var_y = Asdouble(x_446);
    WriteMetric();
    auto x_451 = eval_expr_x_450(x_403);
    if (x_403->has_var_height_internal) {
      auto x_452 = x_403->var_height_internal;
      if (!EqualValue(x_452, x_451)) {
        var_modified_x_453(x_403);
      }
    }
    x_403->has_var_height_internal = true;
    x_403->var_height_internal = Asdouble(x_451);
    WriteMetric();
    auto x_456 = eval_expr_x_455(x_403);
    if (x_403->has_var_height_external) {
      auto x_457 = x_403->var_height_external;
      if (!EqualValue(x_457, x_456)) {
        var_modified_x_458(x_403);
      }
    }
    x_403->has_var_height_external = true;
    x_403->var_height_external = Asdouble(x_456);
    WriteMetric();
    auto x_461 = eval_expr_x_460(x_403);
    if (x_403->has_var_line_height) {
      auto x_462 = x_403->var_line_height;
      if (!EqualValue(x_462, x_461)) {
        var_modified_x_463(x_403);
      }
    }
    x_403->has_var_line_height = true;
    x_403->var_line_height = Asdouble(x_461);
    return MakeUnit();
  })));
}
Unit x_45(const auto &x_46, const auto &x_47, const auto &x_48) {
  auto x_49 = ListHeadExn(x_46);
  auto x_50 = ListTailExn(x_46);
  if (ListIsEmpty(x_50)) {
    auto x_51 = ListSplitN(x_47->children, x_49);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_47->children, x_49)), layout_size_x_3(x_48)));
    x_47->children = ListAppend(Zro(x_51), Cons(x_48, ListTailExn(Fst(x_51))));
    return MakeUnit();
  } else {
    return x_45(x_50, ListNthExn(x_47->children, x_49), x_48);
  }
}
Unit replace_layout_node_x_44(const auto &x_46, const auto &x_47, const auto &x_48) { return x_45(x_46, x_47, x_48); }
Unit x_52(const auto &x_53, const auto &x_54, const auto &x_55) {
  auto x_56 = ListHeadExn(x_53);
  auto x_57 = ListTailExn(x_53);
  if (ListIsEmpty(x_57)) {
    OutputChangeMetric(layout_size_x_3(x_55));
    auto x_58 = ListSplitN(x_54->children, x_56);
    x_54->children = ListAppend(Zro(x_58), Cons(x_55, Fst(x_58)));
    return MakeUnit();
  } else {
    return x_52(x_57, ListNthExn(x_54->children, x_56), x_55);
  }
}
Unit add_layout_node_x_42(const auto &x_53, const auto &x_54, const auto &x_55) { return x_52(x_53, x_54, x_55); }
Unit x_59(const auto &x_60, const auto &x_61, const auto &x_62) {
  auto x_63 = ListHeadExn(x_60);
  auto x_64 = ListTailExn(x_60);
  if (ListIsEmpty(x_64)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_61->children, x_63)));
    auto x_65 = ListSplitN(x_61->children, x_63);
    x_61->children = ListAppend(Zro(x_65), ListTailExn(Fst(x_65)));
    return MakeUnit();
  } else {
    return x_59(x_64, ListNthExn(x_61->children, x_63), x_62);
  }
}
Unit remove_layout_node_x_40(const auto &x_60, const auto &x_61, const auto &x_62) { return x_59(x_60, x_61, x_62); }
Unit x_66(const auto &x_67, const auto &x_68, const auto &x_69) {
  return ListMatch(
      x_67,
      [&](const auto &x_72) {
        auto x_73 = Zro(x_69);
        auto x_74 = Zro(x_73);
        auto x_75 = Fst(x_73);
        auto x_76 = Fst(x_69);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1684 = x_74;
        if (x_1684 == "attributes") {
          std::string x_1685 = x_75;
          if (x_1685 == "width") {
            WriteMetric();
            x_68->has_attr_width = true;
            x_68->attr_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1685 == "image_height") {
            WriteMetric();
            x_68->has_attr_image_height = true;
            x_68->attr_image_height = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1685 == "image_width") {
            WriteMetric();
            x_68->has_attr_image_width = true;
            x_68->attr_image_width = Asint64_t(x_76);
            return MakeUnit();
          } else if (x_1685 == "height") {
            WriteMetric();
            x_68->has_attr_height = true;
            x_68->attr_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1685 == "viewBox") {
            WriteMetric();
            x_68->has_attr_viewBox = true;
            x_68->attr_viewBox = AsDEString(x_76);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1684 == "properties") {
          std::string x_1686 = x_75;
          if (x_1686 == "width") {
            WriteMetric();
            x_68->has_prop_width = true;
            x_68->prop_width = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1686 == "flex-grow") {
            WriteMetric();
            x_68->has_prop_flex_grow = true;
            x_68->prop_flex_grow = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1686 == "height") {
            WriteMetric();
            x_68->has_prop_height = true;
            x_68->prop_height = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1686 == "display") {
            WriteMetric();
            x_68->has_prop_display = true;
            x_68->prop_display = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1686 == "position") {
            WriteMetric();
            x_68->has_prop_position = true;
            x_68->prop_position = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1686 == "flex-shrink") {
            WriteMetric();
            x_68->has_prop_flex_shrink = true;
            x_68->prop_flex_shrink = AsDEString(x_76);
            return MakeUnit();
          } else if (x_1686 == "flex-direction") {
            WriteMetric();
            x_68->has_prop_flex_direction = true;
            x_68->prop_flex_direction = AsDEString(x_76);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_70, const auto &x_71) { return x_66(x_71, ListNthExn(x_68->children, x_70), x_69); });
}
Unit insert_value_x_38(const auto &x_67, const auto &x_68, const auto &x_69) { return x_66(x_67, x_68, x_69); }
Unit x_77(const auto &x_78, const auto &x_79, const auto &x_80) {
  return ListMatch(
      x_78,
      [&](const auto &x_83) {
        auto x_84 = Zro(x_80);
        auto x_85 = Fst(x_80);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1687 = x_84;
        if (x_1687 == "attributes") {
          std::string x_1688 = x_85;
          if (x_1688 == "width") {
            WriteMetric();
            x_79->has_attr_width = false;
            return MakeUnit();
          } else if (x_1688 == "image_height") {
            WriteMetric();
            x_79->has_attr_image_height = false;
            return MakeUnit();
          } else if (x_1688 == "image_width") {
            WriteMetric();
            x_79->has_attr_image_width = false;
            return MakeUnit();
          } else if (x_1688 == "height") {
            WriteMetric();
            x_79->has_attr_height = false;
            return MakeUnit();
          } else if (x_1688 == "viewBox") {
            WriteMetric();
            x_79->has_attr_viewBox = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1687 == "properties") {
          std::string x_1689 = x_85;
          if (x_1689 == "width") {
            WriteMetric();
            x_79->has_prop_width = false;
            return MakeUnit();
          } else if (x_1689 == "flex-grow") {
            WriteMetric();
            x_79->has_prop_flex_grow = false;
            return MakeUnit();
          } else if (x_1689 == "height") {
            WriteMetric();
            x_79->has_prop_height = false;
            return MakeUnit();
          } else if (x_1689 == "display") {
            WriteMetric();
            x_79->has_prop_display = false;
            return MakeUnit();
          } else if (x_1689 == "position") {
            WriteMetric();
            x_79->has_prop_position = false;
            return MakeUnit();
          } else if (x_1689 == "flex-shrink") {
            WriteMetric();
            x_79->has_prop_flex_shrink = false;
            return MakeUnit();
          } else if (x_1689 == "flex-direction") {
            WriteMetric();
            x_79->has_prop_flex_direction = false;
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_81, const auto &x_82) { return x_77(x_82, ListNthExn(x_79->children, x_81), x_80); });
}
Unit delete_value_x_36(const auto &x_78, const auto &x_79, const auto &x_80) { return x_77(x_78, x_79, x_80); }
Unit x_86(const auto &x_87, const auto &x_88, const auto &x_89) {
  return ListMatch(
      x_87,
      [&](const auto &x_92) {
        auto x_93 = Zro(x_89);
        auto x_94 = Zro(x_93);
        auto x_95 = Fst(x_93);
        auto x_96 = Fst(x_89);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1690 = x_94;
        if (x_1690 == "attributes") {
          std::string x_1691 = x_95;
          if (x_1691 == "width") {
            WriteMetric();
            x_88->has_attr_width = false;
            WriteMetric();
            x_88->has_attr_width = true;
            x_88->attr_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1691 == "image_height") {
            WriteMetric();
            x_88->has_attr_image_height = false;
            WriteMetric();
            x_88->has_attr_image_height = true;
            x_88->attr_image_height = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1691 == "image_width") {
            WriteMetric();
            x_88->has_attr_image_width = false;
            WriteMetric();
            x_88->has_attr_image_width = true;
            x_88->attr_image_width = Asint64_t(x_96);
            return MakeUnit();
          } else if (x_1691 == "height") {
            WriteMetric();
            x_88->has_attr_height = false;
            WriteMetric();
            x_88->has_attr_height = true;
            x_88->attr_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1691 == "viewBox") {
            WriteMetric();
            x_88->has_attr_viewBox = false;
            WriteMetric();
            x_88->has_attr_viewBox = true;
            x_88->attr_viewBox = AsDEString(x_96);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1690 == "properties") {
          std::string x_1692 = x_95;
          if (x_1692 == "width") {
            WriteMetric();
            x_88->has_prop_width = false;
            WriteMetric();
            x_88->has_prop_width = true;
            x_88->prop_width = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1692 == "flex-grow") {
            WriteMetric();
            x_88->has_prop_flex_grow = false;
            WriteMetric();
            x_88->has_prop_flex_grow = true;
            x_88->prop_flex_grow = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1692 == "height") {
            WriteMetric();
            x_88->has_prop_height = false;
            WriteMetric();
            x_88->has_prop_height = true;
            x_88->prop_height = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1692 == "display") {
            WriteMetric();
            x_88->has_prop_display = false;
            WriteMetric();
            x_88->has_prop_display = true;
            x_88->prop_display = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1692 == "position") {
            WriteMetric();
            x_88->has_prop_position = false;
            WriteMetric();
            x_88->has_prop_position = true;
            x_88->prop_position = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1692 == "flex-shrink") {
            WriteMetric();
            x_88->has_prop_flex_shrink = false;
            WriteMetric();
            x_88->has_prop_flex_shrink = true;
            x_88->prop_flex_shrink = AsDEString(x_96);
            return MakeUnit();
          } else if (x_1692 == "flex-direction") {
            WriteMetric();
            x_88->has_prop_flex_direction = false;
            WriteMetric();
            x_88->has_prop_flex_direction = true;
            x_88->prop_flex_direction = AsDEString(x_96);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_90, const auto &x_91) { return x_86(x_91, ListNthExn(x_88->children, x_90), x_89); });
}
Unit replace_value_x_34(const auto &x_87, const auto &x_88, const auto &x_89) { return x_86(x_87, x_88, x_89); }
Unit x_97(const auto &x_98, const auto &x_99, const auto &x_100) {
  auto x_101 = ListHeadExn(x_98);
  auto x_102 = ListTailExn(x_98);
  if (ListIsEmpty(x_102)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_99->children, x_101)), node_size_x_4(x_100)));
    auto x_103 = ListSplitN(x_99->children, x_101);
    auto x_104 = Zro(x_103);
    auto x_105 = Fst(x_103);
    auto x_106 = ListHeadExn(x_105);
    auto x_107 = ListTailExn(x_105);
    x_99->children = ListAppend(x_104, x_107);
    OptionMatch(
        x_106->prev, [&](const auto &x_109) { return MakeUnit(); },
        [&](const auto &x_108) {
          x_108->next = ToPath(x_106->next);
          return MakeUnit();
        });
    OptionMatch(
        x_106->next, [&](const auto &x_111) { return MakeUnit(); },
        [&](const auto &x_110) {
          x_110->prev = ToPath(x_106->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_104)) {
      x_99->first = ToPath(ListHead(x_107));
    }
    if (ListIsEmpty(x_107)) {
      x_99->last = ToPath(ListLast(x_104));
    }
    MakeUnit();
    auto x_118 = ListSplitN(x_99->children, x_101);
    auto x_119 = Zro(x_118);
    auto x_120 = Fst(x_118);
    x_99->children = ListAppend(x_119, Cons(x_100, x_120));
    if (ListIsEmpty(x_119)) {
      x_99->first = x_100.get();
    }
    if (ListIsEmpty(x_120)) {
      x_99->last = x_100.get();
    }
    OptionMatch(
        ListLast(x_119),
        [&](const auto &x_122) {
          x_100->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_121) {
          x_100->prev = x_121.get();
          x_121->next = x_100.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_120),
        [&](const auto &x_124) {
          x_100->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_123) {
          x_100->next = x_123.get();
          x_123->prev = x_100.get();
          return MakeUnit();
        });
    x_100->parent = x_99.get();
    MakeUnit();
    return MakeUnit();
  } else {
    return x_97(x_102, ListNthExn(x_99->children, x_101), x_100);
  }
}
Unit replace_node_x_32(const auto &x_98, const auto &x_99, const auto &x_100) { return x_97(x_98, x_99, x_100); }
Unit x_131(const auto &x_132) {
  ListIter2(x_132->children, [&](const auto &x_133, const auto &x_134) {
    x_133->parent = x_132.get();
    x_134->parent = x_132.get();
    x_133->next = x_134.get();
    x_134->prev = x_133.get();
    x_131(x_133);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_132->children),
      [&](const auto &x_136) {
        x_132->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_135) {
        x_132->first = x_135.get();
        x_135->parent = x_132.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_132->children),
      [&](const auto &x_138) {
        x_132->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_137) {
        x_132->last = x_137.get();
        x_137->parent = x_132.get();
        x_131(x_137);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_30(const auto &x_132) { return x_131(x_132); }
Unit x_139(const auto &x_140, const auto &x_141, const auto &x_142) {
  auto x_143 = ListHeadExn(x_140);
  auto x_144 = ListTailExn(x_140);
  if (ListIsEmpty(x_144)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_141->children, x_143)));
    auto x_145 = ListSplitN(x_141->children, x_143);
    auto x_146 = Zro(x_145);
    auto x_147 = Fst(x_145);
    auto x_148 = ListHeadExn(x_147);
    auto x_149 = ListTailExn(x_147);
    x_141->children = ListAppend(x_146, x_149);
    OptionMatch(
        x_148->prev, [&](const auto &x_151) { return MakeUnit(); },
        [&](const auto &x_150) {
          x_150->next = ToPath(x_148->next);
          return MakeUnit();
        });
    OptionMatch(
        x_148->next, [&](const auto &x_153) { return MakeUnit(); },
        [&](const auto &x_152) {
          x_152->prev = ToPath(x_148->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_146)) {
      x_141->first = ToPath(ListHead(x_149));
    }
    if (ListIsEmpty(x_149)) {
      x_141->last = ToPath(ListLast(x_146));
    }
    return MakeUnit();
  } else {
    return x_139(x_144, ListNthExn(x_141->children, x_143), x_142);
  }
}
Unit remove_node_x_28(const auto &x_140, const auto &x_141, const auto &x_142) { return x_139(x_140, x_141, x_142); }
Unit x_160(const auto &x_161, const auto &x_162, const auto &x_163) {
  auto x_164 = ListHeadExn(x_161);
  auto x_165 = ListTailExn(x_161);
  if (ListIsEmpty(x_165)) {
    InputChangeMetric(node_size_x_4(x_163));
    auto x_166 = ListSplitN(x_162->children, x_164);
    auto x_167 = Zro(x_166);
    auto x_168 = Fst(x_166);
    x_162->children = ListAppend(x_167, Cons(x_163, x_168));
    if (ListIsEmpty(x_167)) {
      x_162->first = x_163.get();
    }
    if (ListIsEmpty(x_168)) {
      x_162->last = x_163.get();
    }
    OptionMatch(
        ListLast(x_167),
        [&](const auto &x_170) {
          x_163->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_169) {
          x_163->prev = x_169.get();
          x_169->next = x_163.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_168),
        [&](const auto &x_172) {
          x_163->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_171) {
          x_163->next = x_171.get();
          x_171->prev = x_163.get();
          return MakeUnit();
        });
    x_163->parent = x_162.get();
    return MakeUnit();
  } else {
    return x_160(x_165, ListNthExn(x_162->children, x_164), x_163);
  }
}
Unit add_node_x_25(const auto &x_161, const auto &x_162, const auto &x_163) { return x_160(x_161, x_162, x_163); }
Unit x_179(const auto &x_180) {
  ListIter2(x_180->children, [&](const auto &x_181, const auto &x_182) {
    x_181->parent = x_180.get();
    x_182->parent = x_180.get();
    x_181->next = x_182.get();
    x_182->prev = x_181.get();
    x_179(x_181);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_180->children),
      [&](const auto &x_184) {
        x_180->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_183) {
        x_180->first = x_183.get();
        x_183->parent = x_180.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_180->children),
      [&](const auto &x_186) {
        x_180->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_185) {
        x_180->last = x_185.get();
        x_185->parent = x_180.get();
        x_179(x_185);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_23(const auto &x_180) { return x_179(x_180); }
Unit eval_stmts_x_19(const auto &x_187) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_188) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_189) { return eval_stmts_x_190(x_187); })));
    ListIter(x_187->children, [&](const auto &x_191) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_192) { return eval_stmts_x_19(x_191); })));
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_17(const auto &x_193) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_194) {
    MetricRecordOverhead(Zro(Timed([&](const auto &x_195) { return eval_stmts_x_196(x_193); })));
    ListIter(x_193->children, [&](const auto &x_197) {
      return MetricRecordOverhead(Zro(Timed([&](const auto &x_198) { return eval_stmts_x_17(x_197); })));
    });
    MetricRecordOverhead(Zro(Timed([&](const auto &x_199) { return eval_stmts_x_200(x_193); })));
    return MakeUnit();
  })));
}
Unit x_201(const auto &x_202) {
  ListIter2(x_202->children, [&](const auto &x_203, const auto &x_204) {
    x_203->parent = x_202.get();
    x_204->parent = x_202.get();
    x_203->next = x_204.get();
    x_204->prev = x_203.get();
    x_201(x_203);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_202->children),
      [&](const auto &x_206) {
        x_202->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_205) {
        x_202->first = x_205.get();
        x_205->parent = x_202.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_202->children),
      [&](const auto &x_208) {
        x_202->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_207) {
        x_202->last = x_207.get();
        x_207->parent = x_202.get();
        x_201(x_207);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_202) { return x_201(x_202); }
int64_t x_209(const auto &x_210) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_210->children, [&](const auto &x_211) { return x_209(x_211); }));
}
int64_t node_size_x_4(const auto &x_210) { return x_209(x_210); }
int64_t x_212(const auto &x_213) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_213->children, [&](const auto &x_214) { return x_212(x_214); }));
}
int64_t layout_size_x_3(const auto &x_213) { return x_212(x_213); }
LayoutNode x_215(const auto &x_216) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_216)), [&](const auto &x_217) { return x_215(x_217); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_216) { return x_215(x_216); }
Node x_218(const auto &x_219) {
  return MakeNode(x_219->name, x_219->attr, x_219->prop, x_219->extern_id,
                  ListMap(x_219->children, [&](const auto &x_220) { return x_218(x_220); }));
}
Node node_to_fs_node_x_1(const auto &x_219) { return x_218(x_219); }
Node x_221(const auto &x_222) {
  return MakeNode(JsonToString(JsonMember("name", x_222)), JsonToDict(JsonMember("attributes", x_222)),
                  JsonToDict(JsonMember("properties", x_222)), JsonToInt(JsonMember("id", x_222)),
                  ListMap(JsonToList(JsonMember("children", x_222)), [&](const auto &x_223) { return x_221(x_223); }));
}
Node json_to_node_aux_x_0(const auto &x_222) { return x_221(x_222); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_5) {
    PrintEndline("RUNNING FS_D");
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
      MetricRecordOverhead(Zro(Timed([&](const auto &x_16) { return eval_stmts_x_17(x_14); })));
      MetricRecordOverhead(Zro(Timed([&](const auto &x_18) { return eval_stmts_x_19(x_14); })));
      JsonToChannel(x_5, [&]() {
        auto x_1693 = FreshJson();
        WriteJson(x_1693, "name", "FS_D");
        WriteJson(x_1693, "diff_num", ReadRef(x_7));
        WriteJson(x_1693, "read_count", MetricReadCount());
        WriteJson(x_1693, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_1693, "write_count", MetricWriteCount());
        WriteJson(x_1693, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_1693, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_1693, "input_change_count", MetricInputChangeCount());
        WriteJson(x_1693, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_1693, "overhead_time", MetricOverheadCount());
        WriteJson(x_1693, "eval_time", MetricEvalCount());
        WriteJson(x_1693, "html", "");
        WriteJson(x_1693, "command", StackToList(x_11));
        return x_1693;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_20) {
        auto x_21 = JsonOfString(x_20);
        PushStack(x_11, x_21);
        std::string x_1695 = JsonToString(JsonMember("name", x_21));
        if (x_1695 == "add") {
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
        } else if (x_1695 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_26) {
            eval_stmts_x_17(x_14);
            eval_stmts_x_19(x_14);
            return MakeUnit();
          })));
          JsonToChannel(x_5, [&]() {
            auto x_1694 = FreshJson();
            WriteJson(x_1694, "name", "FS_D");
            WriteJson(x_1694, "diff_num", ReadRef(x_7));
            WriteJson(x_1694, "read_count", MetricReadCount());
            WriteJson(x_1694, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_1694, "write_count", MetricWriteCount());
            WriteJson(x_1694, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_1694, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_1694, "input_change_count", MetricInputChangeCount());
            WriteJson(x_1694, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_1694, "overhead_time", MetricOverheadCount());
            WriteJson(x_1694, "eval_time", MetricEvalCount());
            WriteJson(x_1694, "html", "");
            WriteJson(x_1694, "command", StackToList(x_11));
            return x_1694;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1695 == "remove") {
          return remove_node_x_28(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_27) { return JsonToInt(x_27); }), x_14,
              MakeUnit());
        } else if (x_1695 == "replace") {
          return replace_node_x_32(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_31) { return JsonToInt(x_31); }), x_14,
              [&]() {
                auto x_29 = json_to_node_aux_x_0(JsonMember("node", x_21));
                x_29->parent = nullptr;
                x_29->prev = nullptr;
                x_29->next = nullptr;
                set_children_relation_x_30(x_29);
                return x_29;
              }());
        } else if (x_1695 == "replace_value") {
          return replace_value_x_34(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_33) { return JsonToInt(x_33); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1695 == "delete_value") {
          return delete_value_x_36(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_35) { return JsonToInt(x_35); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))));
        } else if (x_1695 == "insert_value") {
          return insert_value_x_38(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_37) { return JsonToInt(x_37); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_21)), JsonToString(JsonMember("key", x_21))),
                       JsonToValue(JsonMember("value", x_21))));
        } else if (x_1695 == "layout_remove") {
          return remove_layout_node_x_40(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_39) { return JsonToInt(x_39); }), x_15,
              MakeUnit());
        } else if (x_1695 == "layout_add") {
          return add_layout_node_x_42(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_41) { return JsonToInt(x_41); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1695 == "layout_replace") {
          return replace_layout_node_x_44(
              ListMap(JsonToList(JsonMember("path", x_21)), [&](const auto &x_43) { return JsonToInt(x_43); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_21)));
        } else if (x_1695 == "layout_info_changed") {
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