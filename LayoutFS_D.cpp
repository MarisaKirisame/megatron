#include "header.h"
struct MetaNode {};
using Meta = std::shared_ptr<MetaNode>;
struct Content : std::enable_shared_from_this<Content> {
  Content *parent = nullptr;
  Content *prev = nullptr;
  Content *next = nullptr;
  Content *first = nullptr;
  Content *last = nullptr;
  int64_t extern_id;
  List<Node> children;
  std::string name;
  std::unordered_map<std::string, Value> attr;
  std::unordered_map<std::string, Value> prop;
  Meta meta = std::make_shared<MetaNode>();
  Content(const std::string &name, std::unordered_map<std::string, Value> &&attr,
          std::unordered_map<std::string, Value> &&prop, int64_t extern_id, const List<Node> &children)
      : name(name), attr(std::move(attr)), prop(std::move(prop)), extern_id(extern_id), children(children) {}
  Content(const std::string &name, const std::unordered_map<std::string, Value> &attr,
          const std::unordered_map<std::string, Value> &prop, int64_t extern_id, const List<Node> &children)
      : name(name), attr(attr), prop(prop), extern_id(extern_id), children(children) {}
  bool var_visible;
  bool has_var_visible = false;
  bool var_inside_svg;
  bool has_var_inside_svg = false;
  std::string var_height_expr;
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
  std::string var_width_attr_expr;
  bool has_var_width_attr_expr = false;
  double var_intrinsic_height_internal;
  bool has_var_intrinsic_height_internal = false;
  std::string var_flex_direction;
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
  std::string var_display;
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
  std::string var_position;
  bool has_var_position = false;
  std::string var_height_attr_expr;
  bool has_var_height_attr_expr = false;
  double var_height_external;
  bool has_var_height_external = false;
  std::string var_width_expr;
  bool has_var_width_expr = false;
  double var_intrinsic_width_internal;
  bool has_var_intrinsic_width_internal = false;
};
#include "header_continued.h"
Unit var_modified_x_450(const auto &x_452);
auto eval_expr_x_447(const auto &x_456);
Unit var_modified_x_445(const auto &x_473);
auto eval_expr_x_442(const auto &x_475);
Unit var_modified_x_440(const auto &x_484);
auto eval_expr_x_437(const auto &x_487);
Unit var_modified_x_435(const auto &x_540);
auto eval_expr_x_432(const auto &x_545);
Unit var_modified_x_430(const auto &x_570);
auto eval_expr_x_427(const auto &x_574);
Unit var_modified_x_425(const auto &x_583);
auto eval_expr_x_422(const auto &x_586);
Unit var_modified_x_420(const auto &x_639);
auto eval_expr_x_417(const auto &x_644);
Unit var_modified_x_415(const auto &x_665);
auto eval_expr_x_412(const auto &x_667);
Unit var_modified_x_410(const auto &x_688);
auto eval_expr_x_407(const auto &x_690);
Unit var_modified_x_405(const auto &x_703);
auto eval_expr_x_402(const auto &x_706);
Unit var_modified_x_400(const auto &x_727);
auto eval_expr_x_397(const auto &x_729);
Unit var_modified_x_395(const auto &x_734);
auto eval_expr_x_392(const auto &x_736);
Unit var_modified_x_389(const auto &x_741);
auto eval_expr_x_386(const auto &x_750);
Unit var_modified_x_384(const auto &x_827);
auto eval_expr_x_381(const auto &x_829);
Unit var_modified_x_379(const auto &x_846);
auto eval_expr_x_376(const auto &x_850);
Unit var_modified_x_374(const auto &x_855);
auto eval_expr_x_371(const auto &x_859);
Unit var_modified_x_369(const auto &x_868);
auto eval_expr_x_366(const auto &x_870);
Unit var_modified_x_364(const auto &x_871);
auto eval_expr_x_361(const auto &x_873);
Unit var_modified_x_359(const auto &x_878);
auto eval_expr_x_356(const auto &x_881);
Unit var_modified_x_354(const auto &x_892);
auto eval_expr_x_351(const auto &x_894);
Unit var_modified_x_349(const auto &x_899);
auto eval_expr_x_346(const auto &x_902);
Unit var_modified_x_344(const auto &x_913);
auto eval_expr_x_341(const auto &x_916);
Unit var_modified_x_339(const auto &x_941);
auto eval_expr_x_336(const auto &x_945);
Unit var_modified_x_334(const auto &x_970);
auto eval_expr_x_331(const auto &x_972);
Unit var_modified_x_329(const auto &x_975);
auto eval_expr_x_326(const auto &x_980);
Unit var_modified_x_324(const auto &x_989);
auto eval_expr_x_321(const auto &x_994);
Unit var_modified_x_319(const auto &x_1003);
auto eval_expr_x_316(const auto &x_1006);
Unit var_modified_x_314(const auto &x_1009);
auto eval_expr_x_311(const auto &x_1012);
Unit var_modified_x_309(const auto &x_1015);
auto eval_expr_x_306(const auto &x_1019);
Unit var_modified_x_304(const auto &x_1022);
auto eval_expr_x_301(const auto &x_1026);
Unit var_modified_x_298(const auto &x_1029);
auto eval_expr_x_295(const auto &x_1036);
Unit var_modified_x_293(const auto &x_1065);
auto eval_expr_x_290(const auto &x_1072);
Unit var_modified_x_288(const auto &x_1085);
auto eval_expr_x_285(const auto &x_1092);
Unit var_modified_x_283(const auto &x_1101);
auto eval_expr_x_280(const auto &x_1103);
Unit var_modified_x_278(const auto &x_1112);
auto eval_expr_x_275(const auto &x_1115);
Unit var_modified_x_273(const auto &x_1260);
auto eval_expr_x_270(const auto &x_1262);
Unit var_modified_x_268(const auto &x_1311);
auto eval_expr_x_265(const auto &x_1314);
Unit var_modified_x_263(const auto &x_1317);
auto eval_expr_x_260(const auto &x_1319);
Unit var_modified_x_258(const auto &x_1328);
auto eval_expr_x_255(const auto &x_1335);
Unit var_modified_x_253(const auto &x_1344);
auto eval_expr_x_250(const auto &x_1351);
Unit var_modified_x_248(const auto &x_1360);
auto eval_expr_x_245(const auto &x_1365);
Unit var_modified_x_243(const auto &x_1378);
auto eval_expr_x_240(const auto &x_1380);
Unit var_modified_x_238(const auto &x_1389);
auto eval_expr_x_235(const auto &x_1392);
Unit var_modified_x_233(const auto &x_1545);
auto eval_expr_x_230(const auto &x_1547);
Unit var_modified_x_228(const auto &x_1552);
auto eval_expr_x_225(const auto &x_1554);
Unit var_modified_x_223(const auto &x_1603);
auto eval_expr_x_220(const auto &x_1605);
Unit var_modified_x_218(const auto &x_1618);
auto eval_expr_x_215(const auto &x_1621);
Unit eval_stmts_x_190(const auto &x_214);
Unit eval_stmts_x_188(const auto &x_300);
Unit eval_stmts_x_185(const auto &x_391);
Unit x_42(const auto &x_43, const auto &x_44, const auto &x_45);
Unit x_49(const auto &x_50, const auto &x_51, const auto &x_52);
Unit x_56(const auto &x_57, const auto &x_58, const auto &x_59);
Unit x_63(const auto &x_64, const auto &x_65, const auto &x_66);
Unit x_74(const auto &x_75, const auto &x_76, const auto &x_77);
Unit x_83(const auto &x_84, const auto &x_85, const auto &x_86);
Unit x_94(const auto &x_95, const auto &x_96, const auto &x_97);
Unit x_128(const auto &x_129);
Unit x_136(const auto &x_137, const auto &x_138, const auto &x_139);
Unit x_157(const auto &x_158, const auto &x_159, const auto &x_160);
Unit x_176(const auto &x_177);
Unit eval_stmts_x_17(const auto &x_184);
Unit eval_stmts_x_16(const auto &x_187);
Unit x_191(const auto &x_192);
int64_t x_199(const auto &x_200);
int64_t x_202(const auto &x_203);
LayoutNode x_205(const auto &x_206);
Node x_208(const auto &x_209);
Node x_211(const auto &x_212);
Unit var_modified_x_450(const auto &x_452) { return MakeUnit(); }
auto eval_expr_x_447(const auto &x_456) {
  if (((x_456->prev != nullptr) && (!(x_456->prev)->var_line_break))) {
    return max(x_456->var_height_external, (x_456->prev)->var_line_height);
  } else {
    return x_456->var_height_external;
  }
}
Unit var_modified_x_445(const auto &x_473) { return MakeUnit(); }
auto eval_expr_x_442(const auto &x_475) {
  if (eq(x_475->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_475->var_height_internal;
  }
}
Unit var_modified_x_440(const auto &x_484) { return MakeUnit(); }
auto eval_expr_x_437(const auto &x_487) {
  if (x_487->var_intrinsic_height_is_height) {
    return x_487->var_intrinsic_height_internal;
  } else {
    if (((x_487->parent != nullptr) && (x_487->parent)->var_is_flex_column)) {
      return plus(x_487->var_intrinsic_height_internal, mult(x_487->var_flex_amount, (x_487->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_487->var_height_expr, std::string("%"))) {
        return mult(x_487->var_box_height,
                    divide(string_to_float(strip_suffix(x_487->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_487->var_box_height, x_487->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_435(const auto &x_540) { return MakeUnit(); }
auto eval_expr_x_432(const auto &x_545) {
  if ((x_545->prev != nullptr)) {
    if ((x_545->var_line_break || (x_545->prev)->var_line_break)) {
      return plus((x_545->prev)->var_y, (x_545->prev)->var_line_height);
    } else {
      return (x_545->prev)->var_y;
    }
  } else {
    if ((x_545->parent != nullptr)) {
      return (x_545->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_430(const auto &x_570) { return MakeUnit(); }
auto eval_expr_x_427(const auto &x_574) {
  if (eq(x_574->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_574->var_width_internal;
  }
}
Unit var_modified_x_425(const auto &x_583) { return MakeUnit(); }
auto eval_expr_x_422(const auto &x_586) {
  if (x_586->var_intrinsic_width_is_width) {
    return x_586->var_intrinsic_width_internal;
  } else {
    if (((x_586->parent != nullptr) && (x_586->parent)->var_is_flex_row)) {
      return plus(x_586->var_intrinsic_width_internal, mult(x_586->var_flex_amount, (x_586->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_586->var_width_expr, std::string("%"))) {
        return mult(x_586->var_box_width,
                    divide(string_to_float(strip_suffix(x_586->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_586->var_box_width, x_586->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_420(const auto &x_639) { return MakeUnit(); }
auto eval_expr_x_417(const auto &x_644) {
  if ((x_644->prev != nullptr)) {
    if ((x_644->var_line_break || (x_644->prev)->var_line_break)) {
      return 0.;
    } else {
      return plus((x_644->prev)->var_x, (x_644->prev)->var_width_external);
    }
  } else {
    if ((x_644->parent != nullptr)) {
      return (x_644->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_415(const auto &x_665) { return MakeUnit(); }
auto eval_expr_x_412(const auto &x_667) {
  if (gt(x_667->var_left_over, 0.)) {
    return divide(x_667->var_left_over, x_667->var_flex_grow_sum);
  } else {
    return divide(x_667->var_left_over, x_667->var_flex_shrink_sum);
  }
}
Unit var_modified_x_410(const auto &x_688) { return MakeUnit(); }
auto eval_expr_x_407(const auto &x_690) {
  if (((x_690->parent != nullptr) && gt((x_690->parent)->var_left_over, 0.))) {
    return x_690->var_flex_grow;
  } else {
    return x_690->var_flex_shrink;
  }
}
Unit var_modified_x_405(const auto &x_703) { return MakeUnit(); }
auto eval_expr_x_402(const auto &x_706) {
  if (x_706->var_is_flex_row) {
    return minus(x_706->var_box_width, ((x_706->last != nullptr)) ? ((x_706->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_706->var_box_height, ((x_706->last != nullptr)) ? ((x_706->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_400(const auto &x_727) { return MakeUnit(); }
auto eval_expr_x_397(const auto &x_729) {
  if ((x_729->parent != nullptr)) {
    return (x_729->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_395(const auto &x_734) { return MakeUnit(); }
auto eval_expr_x_392(const auto &x_736) {
  if ((x_736->parent != nullptr)) {
    return (x_736->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_389(const auto &x_741) { return MakeUnit(); }
auto eval_expr_x_386(const auto &x_750) {
  if (eq(x_750->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_750->var_position, std::string("absolute"))) {
      return false;
    } else {
      if (((x_750->parent != nullptr) &&
           (eq((x_750->parent)->var_display, std::string("flex")) ||
            eq((x_750->parent)->var_display, std::string("inline-flex"))))) {
        return true;
      } else {
        if (eq(x_750->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_750->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_750->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_750->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_750, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_750, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_750->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_750->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_750->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_750->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_750->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_750->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_750->var_display, std::string("list-item"))) {
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
Unit var_modified_x_384(const auto &x_827) { return MakeUnit(); }
auto eval_expr_x_381(const auto &x_829) {
  return (((!(x_829->parent != nullptr)) || (x_829->parent)->var_visible) &&
          (neq(x_829->var_display, std::string("none")) && ((!x_829->var_inside_svg) && (!x_829->var_disabled))));
}
Unit var_modified_x_379(const auto &x_846) { return MakeUnit(); }
auto eval_expr_x_376(const auto &x_850) {
  if (eq(x_850->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_850->parent != nullptr) && (x_850->parent)->var_disabled);
  }
}
Unit var_modified_x_374(const auto &x_855) { return MakeUnit(); }
auto eval_expr_x_371(const auto &x_859) {
  return ((x_859->parent != nullptr) && ((x_859->parent)->var_is_svg_block || (x_859->parent)->var_inside_svg));
}
Unit var_modified_x_369(const auto &x_868) { return MakeUnit(); }
auto eval_expr_x_366(const auto &x_870) { return eq(x_870->name, std::string("svg")); }
Unit var_modified_x_364(const auto &x_871) { return MakeUnit(); }
auto eval_expr_x_361(const auto &x_873) { return neq(x_873->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_359(const auto &x_878) { return MakeUnit(); }
auto eval_expr_x_356(const auto &x_881) {
  if ((!HasAttr(x_881, std::string("height")))) {
    return std::string("auto");
  } else {
    if ((string_is_float(GetAttr<std::string>(x_881, std::string("height"))) ||
         has_suffix(GetAttr<std::string>(x_881, std::string("height")), std::string("%")))) {
      return GetAttr<std::string>(x_881, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_354(const auto &x_892) { return MakeUnit(); }
auto eval_expr_x_351(const auto &x_894) { return neq(x_894->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_349(const auto &x_899) { return MakeUnit(); }
auto eval_expr_x_346(const auto &x_902) {
  if ((!HasAttr(x_902, std::string("width")))) {
    return std::string("auto");
  } else {
    if ((string_is_float(GetAttr<std::string>(x_902, std::string("width"))) ||
         has_suffix(GetAttr<std::string>(x_902, std::string("width")), std::string("%")))) {
      return GetAttr<std::string>(x_902, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_344(const auto &x_913) { return MakeUnit(); }
auto eval_expr_x_341(const auto &x_916) {
  if (((x_916->parent != nullptr) &&
       (eq((x_916->parent)->var_display, std::string("flex")) ||
        eq((x_916->parent)->var_display, std::string("inline-flex"))))) {
    if ((eq((x_916->parent)->var_flex_direction, std::string("column")) ||
         eq((x_916->parent)->var_flex_direction, std::string("column-reverse")))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_339(const auto &x_941) { return MakeUnit(); }
auto eval_expr_x_336(const auto &x_945) {
  if (((x_945->parent != nullptr) &&
       (eq((x_945->parent)->var_display, std::string("flex")) ||
        eq((x_945->parent)->var_display, std::string("inline-flex"))))) {
    if (eq((x_945->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_334(const auto &x_970) { return MakeUnit(); }
auto eval_expr_x_331(const auto &x_972) {
  if (HasProp(x_972, std::string("flex-direction"))) {
    return GetProp<std::string>(x_972, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_329(const auto &x_975) { return MakeUnit(); }
auto eval_expr_x_326(const auto &x_980) {
  return plus(((x_980->prev != nullptr)) ? ((x_980->prev)->var_flex_shrink_sum) : (0.), x_980->var_flex_shrink);
}
Unit var_modified_x_324(const auto &x_989) { return MakeUnit(); }
auto eval_expr_x_321(const auto &x_994) {
  return plus(((x_994->prev != nullptr)) ? ((x_994->prev)->var_flex_grow_sum) : (0.), x_994->var_flex_grow);
}
Unit var_modified_x_319(const auto &x_1003) { return MakeUnit(); }
auto eval_expr_x_316(const auto &x_1006) {
  if (HasProp(x_1006, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_1006, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_314(const auto &x_1009) { return MakeUnit(); }
auto eval_expr_x_311(const auto &x_1012) {
  if (HasProp(x_1012, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_1012, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_309(const auto &x_1015) { return MakeUnit(); }
auto eval_expr_x_306(const auto &x_1019) {
  if (HasProp(x_1019, std::string("position"))) {
    return GetProp<std::string>(x_1019, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_304(const auto &x_1022) { return MakeUnit(); }
auto eval_expr_x_301(const auto &x_1026) {
  if (HasProp(x_1026, std::string("display"))) {
    return GetProp<std::string>(x_1026, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_298(const auto &x_1029) { return MakeUnit(); }
auto eval_expr_x_295(const auto &x_1036) {
  if ((x_1036->prev != nullptr)) {
    if (x_1036->var_line_break) {
      return plus((x_1036->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1036->prev)->var_intrinsic_current_line_height, x_1036->var_intrinsic_height_external));
    } else {
      return (x_1036->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1036->var_line_break) {
      return x_1036->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_293(const auto &x_1065) { return MakeUnit(); }
auto eval_expr_x_290(const auto &x_1072) {
  if (x_1072->var_line_break) {
    return 0.;
  } else {
    return max(x_1072->var_intrinsic_height_external,
               ((x_1072->prev != nullptr)) ? ((x_1072->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_288(const auto &x_1085) { return MakeUnit(); }
auto eval_expr_x_285(const auto &x_1092) {
  return plus(((x_1092->prev != nullptr)) ? ((x_1092->prev)->var_intrinsic_height_sum) : (0.),
              x_1092->var_intrinsic_height_external);
}
Unit var_modified_x_283(const auto &x_1101) { return MakeUnit(); }
auto eval_expr_x_280(const auto &x_1103) {
  if (eq(x_1103->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1103->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_278(const auto &x_1112) { return MakeUnit(); }
auto eval_expr_x_275(const auto &x_1115) {
  if (eq(x_1115->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_1115->var_inside_svg) {
      return 0.;
    } else {
      if (x_1115->var_disabled) {
        return 0.;
      } else {
        if ((neq(x_1115->var_height_expr, std::string("auto")) &&
             ((!has_suffix(x_1115->var_height_expr, std::string("%"))) &&
              neq(x_1115->var_height_expr, std::string("fit-content"))))) {
          if (has_suffix(x_1115->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_1115->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_1115->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_1115->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_1115->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_1115->var_children_intrinsic_height,
              (eq(x_1115->name, std::string("#text")))
                  ? (10.)
                  : ((x_1115->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1115->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_1115->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_1115->name, std::string("svg")))
                                              ? (((x_1115->var_has_height_attr &&
                                                   string_is_float(x_1115->var_height_attr_expr)))
                                                     ? (string_to_float(x_1115->var_height_attr_expr))
                                                     : ((HasAttr(x_1115, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_1115, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_1115,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_1115->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_1115->name, std::string("IMG")))
                                                     ? ((x_1115->var_has_height_attr)
                                                            ? (string_to_float(x_1115->var_height_attr_expr))
                                                            : (((HasAttr(x_1115, std::string("image_height")) &&
                                                                 (!x_1115->var_has_width_attr)))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_1115, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_1115,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_1115->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1115,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1115,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_1115->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_1115->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_273(const auto &x_1260) { return MakeUnit(); }
auto eval_expr_x_270(const auto &x_1262) {
  if ((eq(x_1262->var_display, std::string("none")) || (x_1262->var_inside_svg || x_1262->var_disabled))) {
    return true;
  } else {
    if (((x_1262->parent != nullptr) && (x_1262->parent)->var_is_flex_column)) {
      return false;
    } else {
      if ((eq(x_1262->var_height_expr, std::string("auto")) ||
           (has_suffix(x_1262->var_height_expr, std::string("px")) ||
            (has_suffix(x_1262->var_height_expr, std::string("ch")) ||
             (has_suffix(x_1262->var_height_expr, std::string("lh")) ||
              eq(x_1262->var_height_expr, std::string("max-content"))))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_268(const auto &x_1311) { return MakeUnit(); }
auto eval_expr_x_265(const auto &x_1314) {
  if (HasProp(x_1314, std::string("height"))) {
    return GetProp<std::string>(x_1314, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_263(const auto &x_1317) { return MakeUnit(); }
auto eval_expr_x_260(const auto &x_1319) {
  if ((x_1319->last != nullptr)) {
    return plus((x_1319->last)->var_finished_intrinsic_height_sum, (x_1319->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_258(const auto &x_1328) { return MakeUnit(); }
auto eval_expr_x_255(const auto &x_1335) {
  return plus(((x_1335->prev != nullptr)) ? ((x_1335->prev)->var_intrinsic_width_sum) : (0.),
              x_1335->var_intrinsic_width_external);
}
Unit var_modified_x_253(const auto &x_1344) { return MakeUnit(); }
auto eval_expr_x_250(const auto &x_1351) {
  return max(x_1351->var_intrinsic_current_line_width,
             ((x_1351->prev != nullptr)) ? ((x_1351->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_248(const auto &x_1360) { return MakeUnit(); }
auto eval_expr_x_245(const auto &x_1365) {
  return plus(x_1365->var_intrinsic_width_external,
              (((x_1365->prev != nullptr) && (!(x_1365->prev)->var_line_break)))
                  ? ((x_1365->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_243(const auto &x_1378) { return MakeUnit(); }
auto eval_expr_x_240(const auto &x_1380) {
  if (eq(x_1380->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1380->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_238(const auto &x_1389) { return MakeUnit(); }
auto eval_expr_x_235(const auto &x_1392) {
  if (eq(x_1392->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_1392->var_inside_svg) {
      return 0.;
    } else {
      if (x_1392->var_disabled) {
        return 0.;
      } else {
        if ((neq(x_1392->var_width_expr, std::string("auto")) &&
             ((!has_suffix(x_1392->var_width_expr, std::string("%"))) &&
              (neq(x_1392->var_width_expr, std::string("fit-content")) &&
               (neq(x_1392->var_width_expr, std::string("max-content")) &&
                (!has_prefix(x_1392->var_width_expr, std::string("calc")))))))) {
          if (has_suffix(x_1392->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_1392->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_1392->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_1392->var_children_intrinsic_width,
              (eq(x_1392->name, std::string("#text")))
                  ? (100.)
                  : ((x_1392->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1392->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_1392->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_1392->name, std::string("svg")))
                                              ? (((x_1392->var_has_width_attr &&
                                                   string_is_float(x_1392->var_width_attr_expr)))
                                                     ? (string_to_float(x_1392->var_width_attr_expr))
                                                     : ((((!x_1392->var_has_width_attr) &&
                                                          HasAttr(x_1392, std::string("viewBox"))))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_1392, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_1392,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_1392->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_1392->name, std::string("IMG")))
                                                     ? ((x_1392->var_has_width_attr)
                                                            ? (string_to_float(x_1392->var_width_attr_expr))
                                                            : (((HasAttr(x_1392, std::string("image_width")) &&
                                                                 (!x_1392->var_has_height_attr)))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_1392, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_1392, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_1392->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1392,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1392,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_1392->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_1392->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_233(const auto &x_1545) { return MakeUnit(); }
auto eval_expr_x_230(const auto &x_1547) {
  if ((x_1547->last != nullptr)) {
    return (x_1547->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_228(const auto &x_1552) { return MakeUnit(); }
auto eval_expr_x_225(const auto &x_1554) {
  if ((eq(x_1554->var_display, std::string("none")) || (x_1554->var_inside_svg || x_1554->var_disabled))) {
    return true;
  } else {
    if (((x_1554->parent != nullptr) && (x_1554->parent)->var_is_flex_row)) {
      return false;
    } else {
      if ((eq(x_1554->var_width_expr, std::string("auto")) ||
           (has_suffix(x_1554->var_width_expr, std::string("px")) ||
            (has_suffix(x_1554->var_width_expr, std::string("ch")) ||
             (has_prefix(x_1554->var_width_expr, std::string("calc(")) ||
              eq(x_1554->var_width_expr, std::string("max-content"))))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_223(const auto &x_1603) { return MakeUnit(); }
auto eval_expr_x_220(const auto &x_1605) {
  if (eq(x_1605->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_1605->var_inside_svg) {
      return true;
    } else {
      if (x_1605->var_disabled) {
        return true;
      } else {if ((eq(x_1605->name,std::string("#document")) || (eq(x_1605->name,std::string("#shadow-root")) || (eq(x_1605->name,std::string("DIV")) || (eq(x_1605->name,std::string("HTML")) || (eq(x_1605->name,std::string("BODY")) || (eq(x_1605->name,std::string("BUTTON")) || (eq(x_1605->name,std::string("FOOTER")) || (eq(x_1605->name,std::string("SELECT")) || (eq(x_1605->name,std::string("SECTION")) || (eq(x_1605->name,std::string("FORM")) || (eq(x_1605->name,std::string("CENTER")) || (eq(x_1605->name,std::string("TD")) || (eq(x_1605->name,std::string("TR")) || (eq(x_1605->name,std::string("TBODY")) || (eq(x_1605->name,std::string("TABLE")) || (eq(x_1605->name,std::string("SPAN")) || (eq(x_1605->name,std::string("FONT")) || (eq(x_1605->name,std::string("A")) || (eq(x_1605->name,std::string("ARTICLE")) || (eq(x_1605->name,std::string("P")) || (eq(x_1605->name,std::string("U")) || (eq(x_1605->name,std::string("UL")) || (eq(x_1605->name,std::string("B")) || (eq(x_1605->name,std::string("H1")) || (eq(x_1605->name,std::string("H2")) || (eq(x_1605->name,std::string("H3")) || (eq(x_1605->name,std::string("H4")) || (eq(x_1605->name,std::string("DT")) || (eq(x_1605->name,std::string("DD")) || (eq(x_1605->name,std::string("DL")) || (eq(x_1605->name,std::string("LI")) || (eq(x_1605->name,std::string("LABEL")) || (eq(x_1605->name,std::string("OL")) || (eq(x_1605->name,std::string("NAV")) || (eq(x_1605->name,std::string("HEADER")) || (eq(x_1605->name,std::string("HEAD")) || (eq(x_1605->name,std::string("SOURCE")) || (eq(x_1605->name,std::string("PICTURE")) || (eq(x_1605->name,std::string("FIGURE")) || (eq(x_1605->name,std::string("FIGCAPTION")) || (eq(x_1605->name,std::string("MAIN")) || (eq(x_1605->name,std::string("REACT-PARTIAL")) || (eq(x_1605->name,std::string("QUERY-BUILDER")) || (eq(x_1605->name,std::string("MODAL-DIALOG")) || (eq(x_1605->name,std::string("SCROLLABLE-REGION")) || (eq(x_1605->name,std::string("DIALOG-HELPER")) || (eq(x_1605->name,std::string("AUTO-CHECK")) || (eq(x_1605->name,std::string("TOOL-TIP")) || (eq(x_1605->name,std::string("CUSTOM-SCOPES")) || (eq(x_1605->name,std::string("QBSEARCH-INPUT")) || (eq(x_1605->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_1605->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_1605->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_1605->name,std::string("GHCC-CONSENT")) || (eq(x_1605->name,std::string("GLOBAL-BANNER")) || (eq(x_1605->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_1605->name,std::string("CARD-SKEW")) || (eq(x_1605->name,std::string("EM")) || (eq(x_1605->name,std::string("ASIDE")) || (eq(x_1605->name,std::string("AUDIO")) || (eq(x_1605->name,std::string("SUP")) || (eq(x_1605->name,std::string("TIME")) || (eq(x_1605->name,std::string("ABBR")) || (eq(x_1605->name,std::string("SMALL")) || (eq(x_1605->name,std::string("SLOT")) || eq(x_1605->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_218(const auto &x_1618) { return MakeUnit(); }
auto eval_expr_x_215(const auto &x_1621) {
  if (HasProp(x_1621, std::string("width"))) {
    return GetProp<std::string>(x_1621, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_190(const auto &x_214) {
  WriteMetric();
  auto x_216 = eval_expr_x_215(x_214);
  if (x_214->has_var_width_expr) {
    auto x_217 = x_214->var_width_expr;
    if ((!EqualValue(x_217, x_216))) {
      var_modified_x_218(x_214);
    }
  }
  x_214->has_var_width_expr = true;
  x_214->var_width_expr = x_216;
  WriteMetric();
  auto x_221 = eval_expr_x_220(x_214);
  if (x_214->has_var_is_default_case) {
    auto x_222 = x_214->var_is_default_case;
    if ((!EqualValue(x_222, x_221))) {
      var_modified_x_223(x_214);
    }
  }
  x_214->has_var_is_default_case = true;
  x_214->var_is_default_case = x_221;
  WriteMetric();
  auto x_226 = eval_expr_x_225(x_214);
  if (x_214->has_var_intrinsic_width_is_width) {
    auto x_227 = x_214->var_intrinsic_width_is_width;
    if ((!EqualValue(x_227, x_226))) {
      var_modified_x_228(x_214);
    }
  }
  x_214->has_var_intrinsic_width_is_width = true;
  x_214->var_intrinsic_width_is_width = x_226;
  WriteMetric();
  auto x_231 = eval_expr_x_230(x_214);
  if (x_214->has_var_children_intrinsic_width) {
    auto x_232 = x_214->var_children_intrinsic_width;
    if ((!EqualValue(x_232, x_231))) {
      var_modified_x_233(x_214);
    }
  }
  x_214->has_var_children_intrinsic_width = true;
  x_214->var_children_intrinsic_width = x_231;
  WriteMetric();
  auto x_236 = eval_expr_x_235(x_214);
  if (x_214->has_var_intrinsic_width_internal) {
    auto x_237 = x_214->var_intrinsic_width_internal;
    if ((!EqualValue(x_237, x_236))) {
      var_modified_x_238(x_214);
    }
  }
  x_214->has_var_intrinsic_width_internal = true;
  x_214->var_intrinsic_width_internal = x_236;
  WriteMetric();
  auto x_241 = eval_expr_x_240(x_214);
  if (x_214->has_var_intrinsic_width_external) {
    auto x_242 = x_214->var_intrinsic_width_external;
    if ((!EqualValue(x_242, x_241))) {
      var_modified_x_243(x_214);
    }
  }
  x_214->has_var_intrinsic_width_external = true;
  x_214->var_intrinsic_width_external = x_241;
  WriteMetric();
  auto x_246 = eval_expr_x_245(x_214);
  if (x_214->has_var_intrinsic_current_line_width) {
    auto x_247 = x_214->var_intrinsic_current_line_width;
    if ((!EqualValue(x_247, x_246))) {
      var_modified_x_248(x_214);
    }
  }
  x_214->has_var_intrinsic_current_line_width = true;
  x_214->var_intrinsic_current_line_width = x_246;
  WriteMetric();
  auto x_251 = eval_expr_x_250(x_214);
  if (x_214->has_var_intrinsic_width_max) {
    auto x_252 = x_214->var_intrinsic_width_max;
    if ((!EqualValue(x_252, x_251))) {
      var_modified_x_253(x_214);
    }
  }
  x_214->has_var_intrinsic_width_max = true;
  x_214->var_intrinsic_width_max = x_251;
  WriteMetric();
  auto x_256 = eval_expr_x_255(x_214);
  if (x_214->has_var_intrinsic_width_sum) {
    auto x_257 = x_214->var_intrinsic_width_sum;
    if ((!EqualValue(x_257, x_256))) {
      var_modified_x_258(x_214);
    }
  }
  x_214->has_var_intrinsic_width_sum = true;
  x_214->var_intrinsic_width_sum = x_256;
  WriteMetric();
  auto x_261 = eval_expr_x_260(x_214);
  if (x_214->has_var_children_intrinsic_height) {
    auto x_262 = x_214->var_children_intrinsic_height;
    if ((!EqualValue(x_262, x_261))) {
      var_modified_x_263(x_214);
    }
  }
  x_214->has_var_children_intrinsic_height = true;
  x_214->var_children_intrinsic_height = x_261;
  WriteMetric();
  auto x_266 = eval_expr_x_265(x_214);
  if (x_214->has_var_height_expr) {
    auto x_267 = x_214->var_height_expr;
    if ((!EqualValue(x_267, x_266))) {
      var_modified_x_268(x_214);
    }
  }
  x_214->has_var_height_expr = true;
  x_214->var_height_expr = x_266;
  WriteMetric();
  auto x_271 = eval_expr_x_270(x_214);
  if (x_214->has_var_intrinsic_height_is_height) {
    auto x_272 = x_214->var_intrinsic_height_is_height;
    if ((!EqualValue(x_272, x_271))) {
      var_modified_x_273(x_214);
    }
  }
  x_214->has_var_intrinsic_height_is_height = true;
  x_214->var_intrinsic_height_is_height = x_271;
  WriteMetric();
  auto x_276 = eval_expr_x_275(x_214);
  if (x_214->has_var_intrinsic_height_internal) {
    auto x_277 = x_214->var_intrinsic_height_internal;
    if ((!EqualValue(x_277, x_276))) {
      var_modified_x_278(x_214);
    }
  }
  x_214->has_var_intrinsic_height_internal = true;
  x_214->var_intrinsic_height_internal = x_276;
  WriteMetric();
  auto x_281 = eval_expr_x_280(x_214);
  if (x_214->has_var_intrinsic_height_external) {
    auto x_282 = x_214->var_intrinsic_height_external;
    if ((!EqualValue(x_282, x_281))) {
      var_modified_x_283(x_214);
    }
  }
  x_214->has_var_intrinsic_height_external = true;
  x_214->var_intrinsic_height_external = x_281;
  WriteMetric();
  auto x_286 = eval_expr_x_285(x_214);
  if (x_214->has_var_intrinsic_height_sum) {
    auto x_287 = x_214->var_intrinsic_height_sum;
    if ((!EqualValue(x_287, x_286))) {
      var_modified_x_288(x_214);
    }
  }
  x_214->has_var_intrinsic_height_sum = true;
  x_214->var_intrinsic_height_sum = x_286;
  WriteMetric();
  auto x_291 = eval_expr_x_290(x_214);
  if (x_214->has_var_intrinsic_current_line_height) {
    auto x_292 = x_214->var_intrinsic_current_line_height;
    if ((!EqualValue(x_292, x_291))) {
      var_modified_x_293(x_214);
    }
  }
  x_214->has_var_intrinsic_current_line_height = true;
  x_214->var_intrinsic_current_line_height = x_291;
  WriteMetric();
  auto x_296 = eval_expr_x_295(x_214);
  if (x_214->has_var_finished_intrinsic_height_sum) {
    auto x_297 = x_214->var_finished_intrinsic_height_sum;
    if ((!EqualValue(x_297, x_296))) {
      var_modified_x_298(x_214);
    }
  }
  x_214->has_var_finished_intrinsic_height_sum = true;
  x_214->var_finished_intrinsic_height_sum = x_296;
  return MakeUnit();
}
Unit eval_stmts_x_188(const auto &x_300) {
  WriteMetric();
  auto x_302 = eval_expr_x_301(x_300);
  if (x_300->has_var_display) {
    auto x_303 = x_300->var_display;
    if ((!EqualValue(x_303, x_302))) {
      var_modified_x_304(x_300);
    }
  }
  x_300->has_var_display = true;
  x_300->var_display = x_302;
  WriteMetric();
  auto x_307 = eval_expr_x_306(x_300);
  if (x_300->has_var_position) {
    auto x_308 = x_300->var_position;
    if ((!EqualValue(x_308, x_307))) {
      var_modified_x_309(x_300);
    }
  }
  x_300->has_var_position = true;
  x_300->var_position = x_307;
  WriteMetric();
  auto x_312 = eval_expr_x_311(x_300);
  if (x_300->has_var_flex_grow) {
    auto x_313 = x_300->var_flex_grow;
    if ((!EqualValue(x_313, x_312))) {
      var_modified_x_314(x_300);
    }
  }
  x_300->has_var_flex_grow = true;
  x_300->var_flex_grow = x_312;
  WriteMetric();
  auto x_317 = eval_expr_x_316(x_300);
  if (x_300->has_var_flex_shrink) {
    auto x_318 = x_300->var_flex_shrink;
    if ((!EqualValue(x_318, x_317))) {
      var_modified_x_319(x_300);
    }
  }
  x_300->has_var_flex_shrink = true;
  x_300->var_flex_shrink = x_317;
  WriteMetric();
  auto x_322 = eval_expr_x_321(x_300);
  if (x_300->has_var_flex_grow_sum) {
    auto x_323 = x_300->var_flex_grow_sum;
    if ((!EqualValue(x_323, x_322))) {
      var_modified_x_324(x_300);
    }
  }
  x_300->has_var_flex_grow_sum = true;
  x_300->var_flex_grow_sum = x_322;
  WriteMetric();
  auto x_327 = eval_expr_x_326(x_300);
  if (x_300->has_var_flex_shrink_sum) {
    auto x_328 = x_300->var_flex_shrink_sum;
    if ((!EqualValue(x_328, x_327))) {
      var_modified_x_329(x_300);
    }
  }
  x_300->has_var_flex_shrink_sum = true;
  x_300->var_flex_shrink_sum = x_327;
  WriteMetric();
  auto x_332 = eval_expr_x_331(x_300);
  if (x_300->has_var_flex_direction) {
    auto x_333 = x_300->var_flex_direction;
    if ((!EqualValue(x_333, x_332))) {
      var_modified_x_334(x_300);
    }
  }
  x_300->has_var_flex_direction = true;
  x_300->var_flex_direction = x_332;
  WriteMetric();
  auto x_337 = eval_expr_x_336(x_300);
  if (x_300->has_var_is_flex_row) {
    auto x_338 = x_300->var_is_flex_row;
    if ((!EqualValue(x_338, x_337))) {
      var_modified_x_339(x_300);
    }
  }
  x_300->has_var_is_flex_row = true;
  x_300->var_is_flex_row = x_337;
  WriteMetric();
  auto x_342 = eval_expr_x_341(x_300);
  if (x_300->has_var_is_flex_column) {
    auto x_343 = x_300->var_is_flex_column;
    if ((!EqualValue(x_343, x_342))) {
      var_modified_x_344(x_300);
    }
  }
  x_300->has_var_is_flex_column = true;
  x_300->var_is_flex_column = x_342;
  WriteMetric();
  auto x_347 = eval_expr_x_346(x_300);
  if (x_300->has_var_width_attr_expr) {
    auto x_348 = x_300->var_width_attr_expr;
    if ((!EqualValue(x_348, x_347))) {
      var_modified_x_349(x_300);
    }
  }
  x_300->has_var_width_attr_expr = true;
  x_300->var_width_attr_expr = x_347;
  WriteMetric();
  auto x_352 = eval_expr_x_351(x_300);
  if (x_300->has_var_has_width_attr) {
    auto x_353 = x_300->var_has_width_attr;
    if ((!EqualValue(x_353, x_352))) {
      var_modified_x_354(x_300);
    }
  }
  x_300->has_var_has_width_attr = true;
  x_300->var_has_width_attr = x_352;
  WriteMetric();
  auto x_357 = eval_expr_x_356(x_300);
  if (x_300->has_var_height_attr_expr) {
    auto x_358 = x_300->var_height_attr_expr;
    if ((!EqualValue(x_358, x_357))) {
      var_modified_x_359(x_300);
    }
  }
  x_300->has_var_height_attr_expr = true;
  x_300->var_height_attr_expr = x_357;
  WriteMetric();
  auto x_362 = eval_expr_x_361(x_300);
  if (x_300->has_var_has_height_attr) {
    auto x_363 = x_300->var_has_height_attr;
    if ((!EqualValue(x_363, x_362))) {
      var_modified_x_364(x_300);
    }
  }
  x_300->has_var_has_height_attr = true;
  x_300->var_has_height_attr = x_362;
  WriteMetric();
  auto x_367 = eval_expr_x_366(x_300);
  if (x_300->has_var_is_svg_block) {
    auto x_368 = x_300->var_is_svg_block;
    if ((!EqualValue(x_368, x_367))) {
      var_modified_x_369(x_300);
    }
  }
  x_300->has_var_is_svg_block = true;
  x_300->var_is_svg_block = x_367;
  WriteMetric();
  auto x_372 = eval_expr_x_371(x_300);
  if (x_300->has_var_inside_svg) {
    auto x_373 = x_300->var_inside_svg;
    if ((!EqualValue(x_373, x_372))) {
      var_modified_x_374(x_300);
    }
  }
  x_300->has_var_inside_svg = true;
  x_300->var_inside_svg = x_372;
  WriteMetric();
  auto x_377 = eval_expr_x_376(x_300);
  if (x_300->has_var_disabled) {
    auto x_378 = x_300->var_disabled;
    if ((!EqualValue(x_378, x_377))) {
      var_modified_x_379(x_300);
    }
  }
  x_300->has_var_disabled = true;
  x_300->var_disabled = x_377;
  WriteMetric();
  auto x_382 = eval_expr_x_381(x_300);
  if (x_300->has_var_visible) {
    auto x_383 = x_300->var_visible;
    if ((!EqualValue(x_383, x_382))) {
      var_modified_x_384(x_300);
    }
  }
  x_300->has_var_visible = true;
  x_300->var_visible = x_382;
  WriteMetric();
  auto x_387 = eval_expr_x_386(x_300);
  if (x_300->has_var_line_break) {
    auto x_388 = x_300->var_line_break;
    if ((!EqualValue(x_388, x_387))) {
      var_modified_x_389(x_300);
    }
  }
  x_300->has_var_line_break = true;
  x_300->var_line_break = x_387;
  return MakeUnit();
}
Unit eval_stmts_x_185(const auto &x_391) {
  WriteMetric();
  auto x_393 = eval_expr_x_392(x_391);
  if (x_391->has_var_box_width) {
    auto x_394 = x_391->var_box_width;
    if ((!EqualValue(x_394, x_393))) {
      var_modified_x_395(x_391);
    }
  }
  x_391->has_var_box_width = true;
  x_391->var_box_width = x_393;
  WriteMetric();
  auto x_398 = eval_expr_x_397(x_391);
  if (x_391->has_var_box_height) {
    auto x_399 = x_391->var_box_height;
    if ((!EqualValue(x_399, x_398))) {
      var_modified_x_400(x_391);
    }
  }
  x_391->has_var_box_height = true;
  x_391->var_box_height = x_398;
  WriteMetric();
  auto x_403 = eval_expr_x_402(x_391);
  if (x_391->has_var_left_over) {
    auto x_404 = x_391->var_left_over;
    if ((!EqualValue(x_404, x_403))) {
      var_modified_x_405(x_391);
    }
  }
  x_391->has_var_left_over = true;
  x_391->var_left_over = x_403;
  WriteMetric();
  auto x_408 = eval_expr_x_407(x_391);
  if (x_391->has_var_flex_amount) {
    auto x_409 = x_391->var_flex_amount;
    if ((!EqualValue(x_409, x_408))) {
      var_modified_x_410(x_391);
    }
  }
  x_391->has_var_flex_amount = true;
  x_391->var_flex_amount = x_408;
  WriteMetric();
  auto x_413 = eval_expr_x_412(x_391);
  if (x_391->has_var_flex_unit) {
    auto x_414 = x_391->var_flex_unit;
    if ((!EqualValue(x_414, x_413))) {
      var_modified_x_415(x_391);
    }
  }
  x_391->has_var_flex_unit = true;
  x_391->var_flex_unit = x_413;
  WriteMetric();
  auto x_418 = eval_expr_x_417(x_391);
  if (x_391->has_var_x) {
    auto x_419 = x_391->var_x;
    if ((!EqualValue(x_419, x_418))) {
      var_modified_x_420(x_391);
    }
  }
  x_391->has_var_x = true;
  x_391->var_x = x_418;
  WriteMetric();
  auto x_423 = eval_expr_x_422(x_391);
  if (x_391->has_var_width_internal) {
    auto x_424 = x_391->var_width_internal;
    if ((!EqualValue(x_424, x_423))) {
      var_modified_x_425(x_391);
    }
  }
  x_391->has_var_width_internal = true;
  x_391->var_width_internal = x_423;
  WriteMetric();
  auto x_428 = eval_expr_x_427(x_391);
  if (x_391->has_var_width_external) {
    auto x_429 = x_391->var_width_external;
    if ((!EqualValue(x_429, x_428))) {
      var_modified_x_430(x_391);
    }
  }
  x_391->has_var_width_external = true;
  x_391->var_width_external = x_428;
  WriteMetric();
  auto x_433 = eval_expr_x_432(x_391);
  if (x_391->has_var_y) {
    auto x_434 = x_391->var_y;
    if ((!EqualValue(x_434, x_433))) {
      var_modified_x_435(x_391);
    }
  }
  x_391->has_var_y = true;
  x_391->var_y = x_433;
  WriteMetric();
  auto x_438 = eval_expr_x_437(x_391);
  if (x_391->has_var_height_internal) {
    auto x_439 = x_391->var_height_internal;
    if ((!EqualValue(x_439, x_438))) {
      var_modified_x_440(x_391);
    }
  }
  x_391->has_var_height_internal = true;
  x_391->var_height_internal = x_438;
  WriteMetric();
  auto x_443 = eval_expr_x_442(x_391);
  if (x_391->has_var_height_external) {
    auto x_444 = x_391->var_height_external;
    if ((!EqualValue(x_444, x_443))) {
      var_modified_x_445(x_391);
    }
  }
  x_391->has_var_height_external = true;
  x_391->var_height_external = x_443;
  WriteMetric();
  auto x_448 = eval_expr_x_447(x_391);
  if (x_391->has_var_line_height) {
    auto x_449 = x_391->var_line_height;
    if ((!EqualValue(x_449, x_448))) {
      var_modified_x_450(x_391);
    }
  }
  x_391->has_var_line_height = true;
  x_391->var_line_height = x_448;
  return MakeUnit();
}
Unit x_42(const auto &x_43, const auto &x_44, const auto &x_45) {
  auto x_46 = ListHeadExn(x_43);
  auto x_47 = ListTailExn(x_43);
  if (ListIsEmpty(x_47)) {
    auto x_48 = ListSplitN(x_44->children, x_46);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_44->children, x_46)), layout_size_x_3(x_45)));
    x_44->children = ListAppend(Zro(x_48), Cons(x_45, ListTailExn(Fst(x_48))));
    return MakeUnit();
  } else {
    return x_42(x_47, ListNthExn(x_44->children, x_46), x_45);
  }
}
Unit replace_layout_node_x_41(const auto &x_43, const auto &x_44, const auto &x_45) { return x_42(x_43, x_44, x_45); }
Unit x_49(const auto &x_50, const auto &x_51, const auto &x_52) {
  auto x_53 = ListHeadExn(x_50);
  auto x_54 = ListTailExn(x_50);
  if (ListIsEmpty(x_54)) {
    OutputChangeMetric(layout_size_x_3(x_52));
    auto x_55 = ListSplitN(x_51->children, x_53);
    x_51->children = ListAppend(Zro(x_55), Cons(x_52, Fst(x_55)));
    return MakeUnit();
  } else {
    return x_49(x_54, ListNthExn(x_51->children, x_53), x_52);
  }
}
Unit add_layout_node_x_39(const auto &x_50, const auto &x_51, const auto &x_52) { return x_49(x_50, x_51, x_52); }
Unit x_56(const auto &x_57, const auto &x_58, const auto &x_59) {
  auto x_60 = ListHeadExn(x_57);
  auto x_61 = ListTailExn(x_57);
  if (ListIsEmpty(x_61)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_58->children, x_60)));
    auto x_62 = ListSplitN(x_58->children, x_60);
    x_58->children = ListAppend(Zro(x_62), ListTailExn(Fst(x_62)));
    return MakeUnit();
  } else {
    return x_56(x_61, ListNthExn(x_58->children, x_60), x_59);
  }
}
Unit remove_layout_node_x_37(const auto &x_57, const auto &x_58, const auto &x_59) { return x_56(x_57, x_58, x_59); }
Unit x_63(const auto &x_64, const auto &x_65, const auto &x_66) {
  return ListMatch(
      x_64,
      [&](const auto &x_69) {
        auto x_70 = Zro(x_66);
        auto x_71 = Zro(x_70);
        auto x_72 = Fst(x_70);
        auto x_73 = Fst(x_66);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1624 = x_71;
        if (x_1624 == "attributes") {
          std::string x_1625 = x_72;
          if (x_1625 == "width") {
            WriteMetric();
            HashtblAddExn(x_65->attr, std::string("width"), x_73);
            return MakeUnit();
          } else if (x_1625 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_65->attr, std::string("image_height"), x_73);
            return MakeUnit();
          } else if (x_1625 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_65->attr, std::string("image_width"), x_73);
            return MakeUnit();
          } else if (x_1625 == "height") {
            WriteMetric();
            HashtblAddExn(x_65->attr, std::string("height"), x_73);
            return MakeUnit();
          } else if (x_1625 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_65->attr, std::string("viewBox"), x_73);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1624 == "properties") {
          std::string x_1626 = x_72;
          if (x_1626 == "width") {
            WriteMetric();
            HashtblAddExn(x_65->prop, std::string("width"), x_73);
            return MakeUnit();
          } else if (x_1626 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_65->prop, std::string("flex-grow"), x_73);
            return MakeUnit();
          } else if (x_1626 == "height") {
            WriteMetric();
            HashtblAddExn(x_65->prop, std::string("height"), x_73);
            return MakeUnit();
          } else if (x_1626 == "display") {
            WriteMetric();
            HashtblAddExn(x_65->prop, std::string("display"), x_73);
            return MakeUnit();
          } else if (x_1626 == "position") {
            WriteMetric();
            HashtblAddExn(x_65->prop, std::string("position"), x_73);
            return MakeUnit();
          } else if (x_1626 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_65->prop, std::string("flex-shrink"), x_73);
            return MakeUnit();
          } else if (x_1626 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_65->prop, std::string("flex-direction"), x_73);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_67, const auto &x_68) { return x_63(x_68, ListNthExn(x_65->children, x_67), x_66); });
}
Unit insert_value_x_35(const auto &x_64, const auto &x_65, const auto &x_66) { return x_63(x_64, x_65, x_66); }
Unit x_74(const auto &x_75, const auto &x_76, const auto &x_77) {
  return ListMatch(
      x_75,
      [&](const auto &x_80) {
        auto x_81 = Zro(x_77);
        auto x_82 = Fst(x_77);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1627 = x_81;
        if (x_1627 == "attributes") {
          std::string x_1628 = x_82;
          if (x_1628 == "width") {
            WriteMetric();
            HashtblForceRemove(x_76->attr, std::string("width"));
            return MakeUnit();
          } else if (x_1628 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_76->attr, std::string("image_height"));
            return MakeUnit();
          } else if (x_1628 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_76->attr, std::string("image_width"));
            return MakeUnit();
          } else if (x_1628 == "height") {
            WriteMetric();
            HashtblForceRemove(x_76->attr, std::string("height"));
            return MakeUnit();
          } else if (x_1628 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_76->attr, std::string("viewBox"));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1627 == "properties") {
          std::string x_1629 = x_82;
          if (x_1629 == "width") {
            WriteMetric();
            HashtblForceRemove(x_76->prop, std::string("width"));
            return MakeUnit();
          } else if (x_1629 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_76->prop, std::string("flex-grow"));
            return MakeUnit();
          } else if (x_1629 == "height") {
            WriteMetric();
            HashtblForceRemove(x_76->prop, std::string("height"));
            return MakeUnit();
          } else if (x_1629 == "display") {
            WriteMetric();
            HashtblForceRemove(x_76->prop, std::string("display"));
            return MakeUnit();
          } else if (x_1629 == "position") {
            WriteMetric();
            HashtblForceRemove(x_76->prop, std::string("position"));
            return MakeUnit();
          } else if (x_1629 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_76->prop, std::string("flex-shrink"));
            return MakeUnit();
          } else if (x_1629 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_76->prop, std::string("flex-direction"));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_78, const auto &x_79) { return x_74(x_79, ListNthExn(x_76->children, x_78), x_77); });
}
Unit delete_value_x_33(const auto &x_75, const auto &x_76, const auto &x_77) { return x_74(x_75, x_76, x_77); }
Unit x_83(const auto &x_84, const auto &x_85, const auto &x_86) {
  return ListMatch(
      x_84,
      [&](const auto &x_89) {
        auto x_90 = Zro(x_86);
        auto x_91 = Zro(x_90);
        auto x_92 = Fst(x_90);
        auto x_93 = Fst(x_86);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_1630 = x_91;
        if (x_1630 == "attributes") {
          std::string x_1631 = x_92;
          if (x_1631 == "width") {
            WriteMetric();
            HashtblForceRemove(x_85->attr, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_85->attr, std::string("width"), x_93);
            return MakeUnit();
          } else if (x_1631 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_85->attr, std::string("image_height"));
            WriteMetric();
            HashtblAddExn(x_85->attr, std::string("image_height"), x_93);
            return MakeUnit();
          } else if (x_1631 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_85->attr, std::string("image_width"));
            WriteMetric();
            HashtblAddExn(x_85->attr, std::string("image_width"), x_93);
            return MakeUnit();
          } else if (x_1631 == "height") {
            WriteMetric();
            HashtblForceRemove(x_85->attr, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_85->attr, std::string("height"), x_93);
            return MakeUnit();
          } else if (x_1631 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_85->attr, std::string("viewBox"));
            WriteMetric();
            HashtblAddExn(x_85->attr, std::string("viewBox"), x_93);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_1630 == "properties") {
          std::string x_1632 = x_92;
          if (x_1632 == "width") {
            WriteMetric();
            HashtblForceRemove(x_85->prop, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_85->prop, std::string("width"), x_93);
            return MakeUnit();
          } else if (x_1632 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_85->prop, std::string("flex-grow"));
            WriteMetric();
            HashtblAddExn(x_85->prop, std::string("flex-grow"), x_93);
            return MakeUnit();
          } else if (x_1632 == "height") {
            WriteMetric();
            HashtblForceRemove(x_85->prop, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_85->prop, std::string("height"), x_93);
            return MakeUnit();
          } else if (x_1632 == "display") {
            WriteMetric();
            HashtblForceRemove(x_85->prop, std::string("display"));
            WriteMetric();
            HashtblAddExn(x_85->prop, std::string("display"), x_93);
            return MakeUnit();
          } else if (x_1632 == "position") {
            WriteMetric();
            HashtblForceRemove(x_85->prop, std::string("position"));
            WriteMetric();
            HashtblAddExn(x_85->prop, std::string("position"), x_93);
            return MakeUnit();
          } else if (x_1632 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_85->prop, std::string("flex-shrink"));
            WriteMetric();
            HashtblAddExn(x_85->prop, std::string("flex-shrink"), x_93);
            return MakeUnit();
          } else if (x_1632 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_85->prop, std::string("flex-direction"));
            WriteMetric();
            HashtblAddExn(x_85->prop, std::string("flex-direction"), x_93);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_87, const auto &x_88) { return x_83(x_88, ListNthExn(x_85->children, x_87), x_86); });
}
Unit replace_value_x_31(const auto &x_84, const auto &x_85, const auto &x_86) { return x_83(x_84, x_85, x_86); }
Unit x_94(const auto &x_95, const auto &x_96, const auto &x_97) {
  auto x_98 = ListHeadExn(x_95);
  auto x_99 = ListTailExn(x_95);
  if (ListIsEmpty(x_99)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_96->children, x_98)), node_size_x_4(x_97)));
    auto x_100 = ListSplitN(x_96->children, x_98);
    auto x_101 = Zro(x_100);
    auto x_102 = Fst(x_100);
    auto x_103 = ListHeadExn(x_102);
    auto x_104 = ListTailExn(x_102);
    OptionMatch(
        x_103->prev, [&](const auto &x_106) { return MakeUnit(); },
        [&](const auto &x_105) {
          x_105->next = ToPath(x_103->next);
          return MakeUnit();
        });
    OptionMatch(
        x_103->next, [&](const auto &x_108) { return MakeUnit(); },
        [&](const auto &x_107) {
          x_107->prev = ToPath(x_103->prev);
          return MakeUnit();
        });
    x_96->children = ListAppend(x_101, x_104);
    if (ListIsEmpty(x_101)) {
      x_96->first = ToPath(ListHead(x_104));
    }
    if (ListIsEmpty(x_104)) {
      x_96->last = ToPath(ListLast(x_101));
    }
    MakeUnit();
    auto x_115 = ListSplitN(x_96->children, x_98);
    auto x_116 = Zro(x_115);
    auto x_117 = Fst(x_115);
    x_96->children = ListAppend(x_116, Cons(x_97, x_117));
    if (ListIsEmpty(x_116)) {
      x_96->first = x_97.get();
    }
    if (ListIsEmpty(x_117)) {
      x_96->last = x_97.get();
    }
    OptionMatch(
        ListLast(x_116),
        [&](const auto &x_119) {
          x_97->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_118) {
          x_97->prev = x_118.get();
          x_118->next = x_97.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_117),
        [&](const auto &x_121) {
          x_97->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_120) {
          x_97->next = x_120.get();
          x_120->prev = x_97.get();
          return MakeUnit();
        });
    x_97->parent = x_96.get();
    MakeUnit();
    return MakeUnit();
  } else {
    return x_94(x_99, ListNthExn(x_96->children, x_98), x_97);
  }
}
Unit replace_node_x_29(const auto &x_95, const auto &x_96, const auto &x_97) { return x_94(x_95, x_96, x_97); }
Unit x_128(const auto &x_129) {
  ListIter2(x_129->children, [&](const auto &x_130, const auto &x_131) {
    x_130->parent = x_129.get();
    x_131->parent = x_129.get();
    x_130->next = x_131.get();
    x_131->prev = x_130.get();
    x_128(x_130);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_129->children),
      [&](const auto &x_133) {
        x_129->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_132) {
        x_129->first = x_132.get();
        x_132->parent = x_129.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_129->children),
      [&](const auto &x_135) {
        x_129->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_134) {
        x_129->last = x_134.get();
        x_134->parent = x_129.get();
        x_128(x_134);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_27(const auto &x_129) { return x_128(x_129); }
Unit x_136(const auto &x_137, const auto &x_138, const auto &x_139) {
  auto x_140 = ListHeadExn(x_137);
  auto x_141 = ListTailExn(x_137);
  if (ListIsEmpty(x_141)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_138->children, x_140)));
    auto x_142 = ListSplitN(x_138->children, x_140);
    auto x_143 = Zro(x_142);
    auto x_144 = Fst(x_142);
    auto x_145 = ListHeadExn(x_144);
    auto x_146 = ListTailExn(x_144);
    OptionMatch(
        x_145->prev, [&](const auto &x_148) { return MakeUnit(); },
        [&](const auto &x_147) {
          x_147->next = ToPath(x_145->next);
          return MakeUnit();
        });
    OptionMatch(
        x_145->next, [&](const auto &x_150) { return MakeUnit(); },
        [&](const auto &x_149) {
          x_149->prev = ToPath(x_145->prev);
          return MakeUnit();
        });
    x_138->children = ListAppend(x_143, x_146);
    if (ListIsEmpty(x_143)) {
      x_138->first = ToPath(ListHead(x_146));
    }
    if (ListIsEmpty(x_146)) {
      x_138->last = ToPath(ListLast(x_143));
    }
    return MakeUnit();
  } else {
    return x_136(x_141, ListNthExn(x_138->children, x_140), x_139);
  }
}
Unit remove_node_x_25(const auto &x_137, const auto &x_138, const auto &x_139) { return x_136(x_137, x_138, x_139); }
Unit x_157(const auto &x_158, const auto &x_159, const auto &x_160) {
  auto x_161 = ListHeadExn(x_158);
  auto x_162 = ListTailExn(x_158);
  if (ListIsEmpty(x_162)) {
    InputChangeMetric(node_size_x_4(x_160));
    auto x_163 = ListSplitN(x_159->children, x_161);
    auto x_164 = Zro(x_163);
    auto x_165 = Fst(x_163);
    x_159->children = ListAppend(x_164, Cons(x_160, x_165));
    if (ListIsEmpty(x_164)) {
      x_159->first = x_160.get();
    }
    if (ListIsEmpty(x_165)) {
      x_159->last = x_160.get();
    }
    OptionMatch(
        ListLast(x_164),
        [&](const auto &x_167) {
          x_160->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_166) {
          x_160->prev = x_166.get();
          x_166->next = x_160.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_165),
        [&](const auto &x_169) {
          x_160->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_168) {
          x_160->next = x_168.get();
          x_168->prev = x_160.get();
          return MakeUnit();
        });
    x_160->parent = x_159.get();
    return MakeUnit();
  } else {
    return x_157(x_162, ListNthExn(x_159->children, x_161), x_160);
  }
}
Unit add_node_x_23(const auto &x_158, const auto &x_159, const auto &x_160) { return x_157(x_158, x_159, x_160); }
Unit x_176(const auto &x_177) {
  ListIter2(x_177->children, [&](const auto &x_178, const auto &x_179) {
    x_178->parent = x_177.get();
    x_179->parent = x_177.get();
    x_178->next = x_179.get();
    x_179->prev = x_178.get();
    x_176(x_178);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_177->children),
      [&](const auto &x_181) {
        x_177->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_180) {
        x_177->first = x_180.get();
        x_180->parent = x_177.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_177->children),
      [&](const auto &x_183) {
        x_177->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_182) {
        x_177->last = x_182.get();
        x_182->parent = x_177.get();
        x_176(x_182);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_21(const auto &x_177) { return x_176(x_177); }
Unit eval_stmts_x_17(const auto &x_184) {
  eval_stmts_x_185(x_184);
  ListIter(x_184->children, [&](const auto &x_186) { return eval_stmts_x_17(x_186); });
  return MakeUnit();
}
Unit eval_stmts_x_16(const auto &x_187) {
  eval_stmts_x_188(x_187);
  ListIter(x_187->children, [&](const auto &x_189) { return eval_stmts_x_16(x_189); });
  eval_stmts_x_190(x_187);
  return MakeUnit();
}
Unit x_191(const auto &x_192) {
  ListIter2(x_192->children, [&](const auto &x_193, const auto &x_194) {
    x_193->parent = x_192.get();
    x_194->parent = x_192.get();
    x_193->next = x_194.get();
    x_194->prev = x_193.get();
    x_191(x_193);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_192->children),
      [&](const auto &x_196) {
        x_192->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_195) {
        x_192->first = x_195.get();
        x_195->parent = x_192.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_192->children),
      [&](const auto &x_198) {
        x_192->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_197) {
        x_192->last = x_197.get();
        x_197->parent = x_192.get();
        x_191(x_197);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_192) { return x_191(x_192); }
int64_t x_199(const auto &x_200) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_200->children, [&](const auto &x_201) { return x_199(x_201); }));
}
int64_t node_size_x_4(const auto &x_200) { return x_199(x_200); }
int64_t x_202(const auto &x_203) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_203->children, [&](const auto &x_204) { return x_202(x_204); }));
}
int64_t layout_size_x_3(const auto &x_203) { return x_202(x_203); }
LayoutNode x_205(const auto &x_206) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember(std::string("children"), x_206)), [&](const auto &x_207) { return x_205(x_207); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_206) { return x_205(x_206); }
Node x_208(const auto &x_209) {
  return MakeNode(x_209->name, x_209->attr, x_209->prop, x_209->extern_id,
                  ListMap(x_209->children, [&](const auto &x_210) { return x_208(x_210); }));
}
Node node_to_fs_node_x_1(const auto &x_209) { return x_208(x_209); }
Node x_211(const auto &x_212) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_212)), JsonToDict(JsonMember(std::string("attributes"), x_212)),
      JsonToDict(JsonMember(std::string("properties"), x_212)), JsonToInt(JsonMember(std::string("id"), x_212)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_212)), [&](const auto &x_213) { return x_211(x_213); }));
}
Node json_to_node_aux_x_0(const auto &x_212) { return x_211(x_212); }
int main() {
  WithOutFile(std::string("wikipedia_idle.out"), [&](const auto &x_5) {
    PrintEndline(std::string("RUNNING FS_D"));
    return WithInFile(std::string("command.json"), [&](const auto &x_6) {
      auto x_7 = MakeRef(static_cast<int64_t>(0));
      auto x_8 = FreshMetric();
      auto x_9 = JsonOfString(InputLine(x_6));
      auto x_10 = JsonOfString(InputLine(x_6));
      auto x_11 = MakeStack();
      PushStack(x_11, x_9);
      PushStack(x_11, x_10);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_9)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_10)), std::string("layout_init")));
      auto x_14 = [&]() {
        auto x_12 = json_to_node_aux_x_0(JsonMember(std::string("node"), x_9));
        x_12->parent = nullptr;
        x_12->prev = nullptr;
        x_12->next = nullptr;
        set_children_relation_x_13(x_12);
        return x_12;
      }();
      auto x_15 = json_to_layout_node_x_2(JsonMember(std::string("node"), x_10));
      OutputChangeMetric(layout_size_x_3(x_15));
      InputChangeMetric(node_size_x_4(x_14));
      eval_stmts_x_16(x_14);
      eval_stmts_x_17(x_14);
      JsonToChannel(x_5, [&]() {
        auto x_1633 = FreshJson();
        WriteJson(x_1633, std::string("name"), std::string("FS_D"));
        WriteJson(x_1633, std::string("diff_num"), ReadRef(x_7));
        WriteJson(x_1633, std::string("read_count"), MetricReadCount());
        WriteJson(x_1633, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_1633, std::string("write_count"), MetricWriteCount());
        WriteJson(x_1633, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_1633, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_1633, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_1633, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_1633, std::string("html"), std::string(""));
        WriteJson(x_1633, std::string("command"), StackToList(x_11));
        return x_1633;
      }());
      OutputString(x_5, std::string("\n"));
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_6, [&](const auto &x_18) {
        auto x_19 = JsonOfString(x_18);
        PushStack(x_11, x_19);
        std::string x_1635 = JsonToString(JsonMember(std::string("name"), x_19));
        if (x_1635 == "add") {
          return add_node_x_23(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                       [&](const auto &x_22) { return JsonToInt(x_22); }),
                               x_14, [&]() {
                                 auto x_20 = json_to_node_aux_x_0(JsonMember(std::string("node"), x_19));
                                 x_20->parent = nullptr;
                                 x_20->prev = nullptr;
                                 x_20->next = nullptr;
                                 set_children_relation_x_21(x_20);
                                 return x_20;
                               }());
        } else if (x_1635 == "recalculate") {
          eval_stmts_x_16(x_14);
          eval_stmts_x_17(x_14);
          JsonToChannel(x_5, [&]() {
            auto x_1634 = FreshJson();
            WriteJson(x_1634, std::string("name"), std::string("FS_D"));
            WriteJson(x_1634, std::string("diff_num"), ReadRef(x_7));
            WriteJson(x_1634, std::string("read_count"), MetricReadCount());
            WriteJson(x_1634, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_1634, std::string("write_count"), MetricWriteCount());
            WriteJson(x_1634, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_1634, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_1634, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_1634, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_1634, std::string("html"), std::string(""));
            WriteJson(x_1634, std::string("command"), StackToList(x_11));
            return x_1634;
          }());
          OutputString(x_5, std::string("\n"));
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_1635 == "remove") {
          return remove_node_x_25(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                          [&](const auto &x_24) { return JsonToInt(x_24); }),
                                  x_14, MakeUnit());
        } else if (x_1635 == "replace") {
          return replace_node_x_29(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                           [&](const auto &x_28) { return JsonToInt(x_28); }),
                                   x_14, [&]() {
                                     auto x_26 = json_to_node_aux_x_0(JsonMember(std::string("node"), x_19));
                                     x_26->parent = nullptr;
                                     x_26->prev = nullptr;
                                     x_26->next = nullptr;
                                     set_children_relation_x_27(x_26);
                                     return x_26;
                                   }());
        } else if (x_1635 == "replace_value") {
          return replace_value_x_31(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                            [&](const auto &x_30) { return JsonToInt(x_30); }),
                                    x_14,
                                    MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_19)),
                                                      JsonToString(JsonMember(std::string("key"), x_19))),
                                             JsonToValue(JsonMember(std::string("value"), x_19))));
        } else if (x_1635 == "delete_value") {
          return delete_value_x_33(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                           [&](const auto &x_32) { return JsonToInt(x_32); }),
                                   x_14,
                                   MakePair(JsonToString(JsonMember(std::string("type"), x_19)),
                                            JsonToString(JsonMember(std::string("key"), x_19))));
        } else if (x_1635 == "insert_value") {
          return insert_value_x_35(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                           [&](const auto &x_34) { return JsonToInt(x_34); }),
                                   x_14,
                                   MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_19)),
                                                     JsonToString(JsonMember(std::string("key"), x_19))),
                                            JsonToValue(JsonMember(std::string("value"), x_19))));
        } else if (x_1635 == "layout_remove") {
          return remove_layout_node_x_37(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                                 [&](const auto &x_36) { return JsonToInt(x_36); }),
                                         x_15, MakeUnit());
        } else if (x_1635 == "layout_add") {
          return add_layout_node_x_39(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                              [&](const auto &x_38) { return JsonToInt(x_38); }),
                                      x_15, json_to_layout_node_x_2(JsonMember(std::string("node"), x_19)));
        } else if (x_1635 == "layout_replace") {
          return replace_layout_node_x_41(ListMap(JsonToList(JsonMember(std::string("path"), x_19)),
                                                  [&](const auto &x_40) { return JsonToInt(x_40); }),
                                          x_15, json_to_layout_node_x_2(JsonMember(std::string("node"), x_19)));
        } else if (x_1635 == "layout_info_changed") {
          return OutputChangeMetric(static_cast<int64_t>(1));
        } else {
          Panic();
        }
      });
      PrintEndline(std::string("INCREMENTAL EVAL OK!"));
      MakeUnit();
      return MakeUnit();
    });
  });
}