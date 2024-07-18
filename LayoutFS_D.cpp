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
Unit var_modified_x_719(const auto &x_721);
auto eval_expr_x_716(const auto &x_725);
Unit var_modified_x_714(const auto &x_742);
auto eval_expr_x_711(const auto &x_744);
Unit var_modified_x_709(const auto &x_753);
auto eval_expr_x_706(const auto &x_756);
Unit var_modified_x_704(const auto &x_809);
auto eval_expr_x_701(const auto &x_814);
Unit var_modified_x_699(const auto &x_839);
auto eval_expr_x_696(const auto &x_843);
Unit var_modified_x_694(const auto &x_852);
auto eval_expr_x_691(const auto &x_855);
Unit var_modified_x_689(const auto &x_908);
auto eval_expr_x_686(const auto &x_913);
Unit var_modified_x_684(const auto &x_934);
auto eval_expr_x_681(const auto &x_936);
Unit var_modified_x_679(const auto &x_957);
auto eval_expr_x_676(const auto &x_959);
Unit var_modified_x_674(const auto &x_972);
auto eval_expr_x_671(const auto &x_975);
Unit var_modified_x_669(const auto &x_996);
auto eval_expr_x_666(const auto &x_998);
Unit var_modified_x_664(const auto &x_1003);
auto eval_expr_x_661(const auto &x_1005);
Unit var_modified_x_658(const auto &x_1010);
auto eval_expr_x_655(const auto &x_1019);
Unit var_modified_x_653(const auto &x_1096);
auto eval_expr_x_650(const auto &x_1098);
Unit var_modified_x_648(const auto &x_1115);
auto eval_expr_x_645(const auto &x_1119);
Unit var_modified_x_643(const auto &x_1124);
auto eval_expr_x_640(const auto &x_1128);
Unit var_modified_x_638(const auto &x_1137);
auto eval_expr_x_635(const auto &x_1139);
Unit var_modified_x_633(const auto &x_1140);
auto eval_expr_x_630(const auto &x_1142);
Unit var_modified_x_628(const auto &x_1147);
auto eval_expr_x_625(const auto &x_1150);
Unit var_modified_x_623(const auto &x_1161);
auto eval_expr_x_620(const auto &x_1163);
Unit var_modified_x_618(const auto &x_1168);
auto eval_expr_x_615(const auto &x_1171);
Unit var_modified_x_613(const auto &x_1182);
auto eval_expr_x_610(const auto &x_1185);
Unit var_modified_x_608(const auto &x_1210);
auto eval_expr_x_605(const auto &x_1214);
Unit var_modified_x_603(const auto &x_1239);
auto eval_expr_x_600(const auto &x_1241);
Unit var_modified_x_598(const auto &x_1244);
auto eval_expr_x_595(const auto &x_1249);
Unit var_modified_x_593(const auto &x_1258);
auto eval_expr_x_590(const auto &x_1263);
Unit var_modified_x_588(const auto &x_1272);
auto eval_expr_x_585(const auto &x_1275);
Unit var_modified_x_583(const auto &x_1278);
auto eval_expr_x_580(const auto &x_1281);
Unit var_modified_x_578(const auto &x_1284);
auto eval_expr_x_575(const auto &x_1288);
Unit var_modified_x_573(const auto &x_1291);
auto eval_expr_x_570(const auto &x_1295);
Unit var_modified_x_567(const auto &x_1298);
auto eval_expr_x_564(const auto &x_1305);
Unit var_modified_x_562(const auto &x_1334);
auto eval_expr_x_559(const auto &x_1341);
Unit var_modified_x_557(const auto &x_1354);
auto eval_expr_x_554(const auto &x_1361);
Unit var_modified_x_552(const auto &x_1370);
auto eval_expr_x_549(const auto &x_1372);
Unit var_modified_x_547(const auto &x_1381);
auto eval_expr_x_544(const auto &x_1384);
Unit var_modified_x_542(const auto &x_1529);
auto eval_expr_x_539(const auto &x_1531);
Unit var_modified_x_537(const auto &x_1580);
auto eval_expr_x_534(const auto &x_1583);
Unit var_modified_x_532(const auto &x_1586);
auto eval_expr_x_529(const auto &x_1588);
Unit var_modified_x_527(const auto &x_1597);
auto eval_expr_x_524(const auto &x_1604);
Unit var_modified_x_522(const auto &x_1613);
auto eval_expr_x_519(const auto &x_1620);
Unit var_modified_x_517(const auto &x_1629);
auto eval_expr_x_514(const auto &x_1634);
Unit var_modified_x_512(const auto &x_1647);
auto eval_expr_x_509(const auto &x_1649);
Unit var_modified_x_507(const auto &x_1658);
auto eval_expr_x_504(const auto &x_1661);
Unit var_modified_x_502(const auto &x_1814);
auto eval_expr_x_499(const auto &x_1816);
Unit var_modified_x_497(const auto &x_1821);
auto eval_expr_x_494(const auto &x_1823);
Unit var_modified_x_492(const auto &x_1872);
auto eval_expr_x_489(const auto &x_1874);
Unit var_modified_x_487(const auto &x_1887);
auto eval_expr_x_484(const auto &x_1890);
Unit var_modified_x_481(const auto &x_1893);
auto eval_expr_x_478(const auto &x_1897);
Unit var_modified_x_476(const auto &x_1914);
auto eval_expr_x_473(const auto &x_1916);
Unit var_modified_x_471(const auto &x_1925);
auto eval_expr_x_468(const auto &x_1928);
Unit var_modified_x_466(const auto &x_1981);
auto eval_expr_x_463(const auto &x_1986);
Unit var_modified_x_461(const auto &x_2011);
auto eval_expr_x_458(const auto &x_2015);
Unit var_modified_x_456(const auto &x_2024);
auto eval_expr_x_453(const auto &x_2027);
Unit var_modified_x_451(const auto &x_2080);
auto eval_expr_x_448(const auto &x_2085);
Unit var_modified_x_446(const auto &x_2106);
auto eval_expr_x_443(const auto &x_2108);
Unit var_modified_x_441(const auto &x_2129);
auto eval_expr_x_438(const auto &x_2131);
Unit var_modified_x_436(const auto &x_2144);
auto eval_expr_x_433(const auto &x_2147);
Unit var_modified_x_431(const auto &x_2168);
auto eval_expr_x_428(const auto &x_2170);
Unit var_modified_x_426(const auto &x_2175);
auto eval_expr_x_423(const auto &x_2177);
Unit var_modified_x_420(const auto &x_2182);
auto eval_expr_x_417(const auto &x_2191);
Unit var_modified_x_415(const auto &x_2268);
auto eval_expr_x_412(const auto &x_2270);
Unit var_modified_x_410(const auto &x_2287);
auto eval_expr_x_407(const auto &x_2291);
Unit var_modified_x_405(const auto &x_2296);
auto eval_expr_x_402(const auto &x_2300);
Unit var_modified_x_400(const auto &x_2309);
auto eval_expr_x_397(const auto &x_2311);
Unit var_modified_x_395(const auto &x_2312);
auto eval_expr_x_392(const auto &x_2314);
Unit var_modified_x_390(const auto &x_2319);
auto eval_expr_x_387(const auto &x_2322);
Unit var_modified_x_385(const auto &x_2333);
auto eval_expr_x_382(const auto &x_2335);
Unit var_modified_x_380(const auto &x_2340);
auto eval_expr_x_377(const auto &x_2343);
Unit var_modified_x_375(const auto &x_2354);
auto eval_expr_x_372(const auto &x_2357);
Unit var_modified_x_370(const auto &x_2382);
auto eval_expr_x_367(const auto &x_2386);
Unit var_modified_x_365(const auto &x_2411);
auto eval_expr_x_362(const auto &x_2413);
Unit var_modified_x_360(const auto &x_2416);
auto eval_expr_x_357(const auto &x_2421);
Unit var_modified_x_355(const auto &x_2430);
auto eval_expr_x_352(const auto &x_2435);
Unit var_modified_x_350(const auto &x_2444);
auto eval_expr_x_347(const auto &x_2447);
Unit var_modified_x_345(const auto &x_2450);
auto eval_expr_x_342(const auto &x_2453);
Unit var_modified_x_340(const auto &x_2456);
auto eval_expr_x_337(const auto &x_2460);
Unit var_modified_x_335(const auto &x_2463);
auto eval_expr_x_332(const auto &x_2467);
Unit var_modified_x_329(const auto &x_2470);
auto eval_expr_x_326(const auto &x_2477);
Unit var_modified_x_324(const auto &x_2506);
auto eval_expr_x_321(const auto &x_2513);
Unit var_modified_x_319(const auto &x_2526);
auto eval_expr_x_316(const auto &x_2533);
Unit var_modified_x_314(const auto &x_2542);
auto eval_expr_x_311(const auto &x_2544);
Unit var_modified_x_309(const auto &x_2553);
auto eval_expr_x_306(const auto &x_2556);
Unit var_modified_x_304(const auto &x_2701);
auto eval_expr_x_301(const auto &x_2703);
Unit var_modified_x_299(const auto &x_2752);
auto eval_expr_x_296(const auto &x_2755);
Unit var_modified_x_294(const auto &x_2758);
auto eval_expr_x_291(const auto &x_2760);
Unit var_modified_x_289(const auto &x_2769);
auto eval_expr_x_286(const auto &x_2776);
Unit var_modified_x_284(const auto &x_2785);
auto eval_expr_x_281(const auto &x_2792);
Unit var_modified_x_279(const auto &x_2801);
auto eval_expr_x_276(const auto &x_2806);
Unit var_modified_x_274(const auto &x_2819);
auto eval_expr_x_271(const auto &x_2821);
Unit var_modified_x_269(const auto &x_2830);
auto eval_expr_x_266(const auto &x_2833);
Unit var_modified_x_264(const auto &x_2986);
auto eval_expr_x_261(const auto &x_2988);
Unit var_modified_x_259(const auto &x_2993);
auto eval_expr_x_256(const auto &x_2995);
Unit var_modified_x_254(const auto &x_3044);
auto eval_expr_x_251(const auto &x_3046);
Unit var_modified_x_249(const auto &x_3059);
auto eval_expr_x_246(const auto &x_3062);
Unit eval_stmts_x_221(const auto &x_245);
Unit eval_stmts_x_219(const auto &x_331);
Unit eval_stmts_x_216(const auto &x_422);
Unit eval_stmts_x_206(const auto &x_483);
Unit eval_stmts_x_204(const auto &x_569);
Unit eval_stmts_x_201(const auto &x_660);
Unit x_50(const auto &x_51, const auto &x_52, const auto &x_53);
Unit x_57(const auto &x_58, const auto &x_59, const auto &x_60);
Unit x_64(const auto &x_65, const auto &x_66, const auto &x_67);
Unit x_71(const auto &x_72, const auto &x_73, const auto &x_74);
Unit x_82(const auto &x_83, const auto &x_84, const auto &x_85);
Unit x_91(const auto &x_92, const auto &x_93, const auto &x_94);
Unit x_102(const auto &x_103, const auto &x_104, const auto &x_105);
Unit x_136(const auto &x_137);
Unit x_144(const auto &x_145, const auto &x_146, const auto &x_147);
Unit x_165(const auto &x_166);
Unit x_173(const auto &x_174, const auto &x_175, const auto &x_176);
Unit x_192(const auto &x_193);
Unit eval_stmts_x_22(const auto &x_200);
Unit eval_stmts_x_21(const auto &x_203);
Unit x_207(const auto &x_208);
Unit eval_stmts_x_17(const auto &x_215);
Unit eval_stmts_x_16(const auto &x_218);
Unit x_222(const auto &x_223);
int64_t x_230(const auto &x_231);
int64_t x_233(const auto &x_234);
LayoutNode x_236(const auto &x_237);
Node x_239(const auto &x_240);
Node x_242(const auto &x_243);
Unit var_modified_x_719(const auto &x_721) { return MakeUnit(); }
auto eval_expr_x_716(const auto &x_725) {
  if ((x_725->prev != nullptr) && (!(x_725->prev)->var_line_break)) {
    return max(x_725->var_height_external, (x_725->prev)->var_line_height);
  } else {
    return x_725->var_height_external;
  }
}
Unit var_modified_x_714(const auto &x_742) { return MakeUnit(); }
auto eval_expr_x_711(const auto &x_744) {
  if (eq(x_744->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_744->var_height_internal;
  }
}
Unit var_modified_x_709(const auto &x_753) { return MakeUnit(); }
auto eval_expr_x_706(const auto &x_756) {
  if (x_756->var_intrinsic_height_is_height) {
    return x_756->var_intrinsic_height_internal;
  } else {
    if ((x_756->parent != nullptr) && (x_756->parent)->var_is_flex_column) {
      return plus(x_756->var_intrinsic_height_internal, mult(x_756->var_flex_amount, (x_756->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_756->var_height_expr, std::string("%"))) {
        return mult(x_756->var_box_height,
                    divide(string_to_float(strip_suffix(x_756->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_756->var_box_height, x_756->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_704(const auto &x_809) { return MakeUnit(); }
auto eval_expr_x_701(const auto &x_814) {
  if (x_814->prev != nullptr) {
    if (x_814->var_line_break || (x_814->prev)->var_line_break) {
      return plus((x_814->prev)->var_y, (x_814->prev)->var_line_height);
    } else {
      return (x_814->prev)->var_y;
    }
  } else {
    if (x_814->parent != nullptr) {
      return (x_814->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_699(const auto &x_839) { return MakeUnit(); }
auto eval_expr_x_696(const auto &x_843) {
  if (eq(x_843->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_843->var_width_internal;
  }
}
Unit var_modified_x_694(const auto &x_852) { return MakeUnit(); }
auto eval_expr_x_691(const auto &x_855) {
  if (x_855->var_intrinsic_width_is_width) {
    return x_855->var_intrinsic_width_internal;
  } else {
    if ((x_855->parent != nullptr) && (x_855->parent)->var_is_flex_row) {
      return plus(x_855->var_intrinsic_width_internal, mult(x_855->var_flex_amount, (x_855->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_855->var_width_expr, std::string("%"))) {
        return mult(x_855->var_box_width,
                    divide(string_to_float(strip_suffix(x_855->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_855->var_box_width, x_855->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_689(const auto &x_908) { return MakeUnit(); }
auto eval_expr_x_686(const auto &x_913) {
  if (x_913->prev != nullptr) {
    if (x_913->var_line_break || (x_913->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_913->prev)->var_x, (x_913->prev)->var_width_external);
    }
  } else {
    if (x_913->parent != nullptr) {
      return (x_913->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_684(const auto &x_934) { return MakeUnit(); }
auto eval_expr_x_681(const auto &x_936) {
  if (gt(x_936->var_left_over, 0.)) {
    return divide(x_936->var_left_over, x_936->var_flex_grow_sum);
  } else {
    return divide(x_936->var_left_over, x_936->var_flex_shrink_sum);
  }
}
Unit var_modified_x_679(const auto &x_957) { return MakeUnit(); }
auto eval_expr_x_676(const auto &x_959) {
  if ((x_959->parent != nullptr) && gt((x_959->parent)->var_left_over, 0.)) {
    return x_959->var_flex_grow;
  } else {
    return x_959->var_flex_shrink;
  }
}
Unit var_modified_x_674(const auto &x_972) { return MakeUnit(); }
auto eval_expr_x_671(const auto &x_975) {
  if (x_975->var_is_flex_row) {
    return minus(x_975->var_box_width, (x_975->last != nullptr) ? ((x_975->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_975->var_box_height, (x_975->last != nullptr) ? ((x_975->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_669(const auto &x_996) { return MakeUnit(); }
auto eval_expr_x_666(const auto &x_998) {
  if (x_998->parent != nullptr) {
    return (x_998->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_664(const auto &x_1003) { return MakeUnit(); }
auto eval_expr_x_661(const auto &x_1005) {
  if (x_1005->parent != nullptr) {
    return (x_1005->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_658(const auto &x_1010) { return MakeUnit(); }
auto eval_expr_x_655(const auto &x_1019) {
  if (eq(x_1019->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_1019->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_1019->parent != nullptr) &&
          (eq((x_1019->parent)->var_display, std::string("flex")) ||
           eq((x_1019->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_1019->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_1019->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_1019->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_1019->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_1019, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_1019, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_1019->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_1019->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_1019->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_1019->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_1019->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_1019->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_1019->var_display, std::string("list-item"))) {
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
Unit var_modified_x_653(const auto &x_1096) { return MakeUnit(); }
auto eval_expr_x_650(const auto &x_1098) {
  return (((!(x_1098->parent != nullptr)) || (x_1098->parent)->var_visible) &&
          (neq(x_1098->var_display, std::string("none")) && ((!x_1098->var_inside_svg) && (!x_1098->var_disabled))));
}
Unit var_modified_x_648(const auto &x_1115) { return MakeUnit(); }
auto eval_expr_x_645(const auto &x_1119) {
  if (eq(x_1119->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_1119->parent != nullptr) && (x_1119->parent)->var_disabled);
  }
}
Unit var_modified_x_643(const auto &x_1124) { return MakeUnit(); }
auto eval_expr_x_640(const auto &x_1128) {
  return ((x_1128->parent != nullptr) && ((x_1128->parent)->var_is_svg_block || (x_1128->parent)->var_inside_svg));
}
Unit var_modified_x_638(const auto &x_1137) { return MakeUnit(); }
auto eval_expr_x_635(const auto &x_1139) { return eq(x_1139->name, std::string("svg")); }
Unit var_modified_x_633(const auto &x_1140) { return MakeUnit(); }
auto eval_expr_x_630(const auto &x_1142) { return neq(x_1142->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_628(const auto &x_1147) { return MakeUnit(); }
auto eval_expr_x_625(const auto &x_1150) {
  if (!HasAttr(x_1150, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_1150, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_1150, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_1150, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_623(const auto &x_1161) { return MakeUnit(); }
auto eval_expr_x_620(const auto &x_1163) { return neq(x_1163->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_618(const auto &x_1168) { return MakeUnit(); }
auto eval_expr_x_615(const auto &x_1171) {
  if (!HasAttr(x_1171, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_1171, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_1171, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_1171, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_613(const auto &x_1182) { return MakeUnit(); }
auto eval_expr_x_610(const auto &x_1185) {
  if ((x_1185->parent != nullptr) &&
      (eq((x_1185->parent)->var_display, std::string("flex")) ||
       eq((x_1185->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_1185->parent)->var_flex_direction, std::string("column")) ||
        eq((x_1185->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_608(const auto &x_1210) { return MakeUnit(); }
auto eval_expr_x_605(const auto &x_1214) {
  if ((x_1214->parent != nullptr) &&
      (eq((x_1214->parent)->var_display, std::string("flex")) ||
       eq((x_1214->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_1214->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_603(const auto &x_1239) { return MakeUnit(); }
auto eval_expr_x_600(const auto &x_1241) {
  if (HasProp(x_1241, std::string("flex-direction"))) {
    return GetProp<std::string>(x_1241, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_598(const auto &x_1244) { return MakeUnit(); }
auto eval_expr_x_595(const auto &x_1249) {
  return plus((x_1249->prev != nullptr) ? ((x_1249->prev)->var_flex_shrink_sum) : (0.), x_1249->var_flex_shrink);
}
Unit var_modified_x_593(const auto &x_1258) { return MakeUnit(); }
auto eval_expr_x_590(const auto &x_1263) {
  return plus((x_1263->prev != nullptr) ? ((x_1263->prev)->var_flex_grow_sum) : (0.), x_1263->var_flex_grow);
}
Unit var_modified_x_588(const auto &x_1272) { return MakeUnit(); }
auto eval_expr_x_585(const auto &x_1275) {
  if (HasProp(x_1275, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_1275, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_583(const auto &x_1278) { return MakeUnit(); }
auto eval_expr_x_580(const auto &x_1281) {
  if (HasProp(x_1281, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_1281, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_578(const auto &x_1284) { return MakeUnit(); }
auto eval_expr_x_575(const auto &x_1288) {
  if (HasProp(x_1288, std::string("position"))) {
    return GetProp<std::string>(x_1288, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_573(const auto &x_1291) { return MakeUnit(); }
auto eval_expr_x_570(const auto &x_1295) {
  if (HasProp(x_1295, std::string("display"))) {
    return GetProp<std::string>(x_1295, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_567(const auto &x_1298) { return MakeUnit(); }
auto eval_expr_x_564(const auto &x_1305) {
  if (x_1305->prev != nullptr) {
    if (x_1305->var_line_break) {
      return plus((x_1305->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1305->prev)->var_intrinsic_current_line_height, x_1305->var_intrinsic_height_external));
    } else {
      return (x_1305->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1305->var_line_break) {
      return x_1305->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_562(const auto &x_1334) { return MakeUnit(); }
auto eval_expr_x_559(const auto &x_1341) {
  if (x_1341->var_line_break) {
    return 0.;
  } else {
    return max(x_1341->var_intrinsic_height_external,
               (x_1341->prev != nullptr) ? ((x_1341->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_557(const auto &x_1354) { return MakeUnit(); }
auto eval_expr_x_554(const auto &x_1361) {
  return plus((x_1361->prev != nullptr) ? ((x_1361->prev)->var_intrinsic_height_sum) : (0.),
              x_1361->var_intrinsic_height_external);
}
Unit var_modified_x_552(const auto &x_1370) { return MakeUnit(); }
auto eval_expr_x_549(const auto &x_1372) {
  if (eq(x_1372->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1372->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_547(const auto &x_1381) { return MakeUnit(); }
auto eval_expr_x_544(const auto &x_1384) {
  if (eq(x_1384->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_1384->var_inside_svg) {
      return 0.;
    } else {
      if (x_1384->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1384->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_1384->var_height_expr, std::string("%"))) &&
             neq(x_1384->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_1384->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_1384->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_1384->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_1384->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_1384->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_1384->var_children_intrinsic_height,
              (eq(x_1384->name, std::string("#text")))
                  ? (10.)
                  : ((x_1384->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1384->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_1384->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_1384->name, std::string("svg")))
                                              ? ((x_1384->var_has_height_attr &&
                                                  string_is_float(x_1384->var_height_attr_expr))
                                                     ? (string_to_float(x_1384->var_height_attr_expr))
                                                     : ((HasAttr(x_1384, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_1384, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_1384,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_1384->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_1384->name, std::string("IMG")))
                                                     ? ((x_1384->var_has_height_attr)
                                                            ? (string_to_float(x_1384->var_height_attr_expr))
                                                            : ((HasAttr(x_1384, std::string("image_height")) &&
                                                                (!x_1384->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_1384, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_1384,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_1384->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1384,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1384,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_1384->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_1384->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_542(const auto &x_1529) { return MakeUnit(); }
auto eval_expr_x_539(const auto &x_1531) {
  if (eq(x_1531->var_display, std::string("none")) || (x_1531->var_inside_svg || x_1531->var_disabled)) {
    return true;
  } else {
    if ((x_1531->parent != nullptr) && (x_1531->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1531->var_height_expr, std::string("auto")) ||
          (has_suffix(x_1531->var_height_expr, std::string("px")) ||
           (has_suffix(x_1531->var_height_expr, std::string("ch")) ||
            (has_suffix(x_1531->var_height_expr, std::string("lh")) ||
             eq(x_1531->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_537(const auto &x_1580) { return MakeUnit(); }
auto eval_expr_x_534(const auto &x_1583) {
  if (HasProp(x_1583, std::string("height"))) {
    return GetProp<std::string>(x_1583, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_532(const auto &x_1586) { return MakeUnit(); }
auto eval_expr_x_529(const auto &x_1588) {
  if (x_1588->last != nullptr) {
    return plus((x_1588->last)->var_finished_intrinsic_height_sum, (x_1588->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_527(const auto &x_1597) { return MakeUnit(); }
auto eval_expr_x_524(const auto &x_1604) {
  return plus((x_1604->prev != nullptr) ? ((x_1604->prev)->var_intrinsic_width_sum) : (0.),
              x_1604->var_intrinsic_width_external);
}
Unit var_modified_x_522(const auto &x_1613) { return MakeUnit(); }
auto eval_expr_x_519(const auto &x_1620) {
  return max(x_1620->var_intrinsic_current_line_width,
             (x_1620->prev != nullptr) ? ((x_1620->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_517(const auto &x_1629) { return MakeUnit(); }
auto eval_expr_x_514(const auto &x_1634) {
  return plus(x_1634->var_intrinsic_width_external,
              ((x_1634->prev != nullptr) && (!(x_1634->prev)->var_line_break))
                  ? ((x_1634->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_512(const auto &x_1647) { return MakeUnit(); }
auto eval_expr_x_509(const auto &x_1649) {
  if (eq(x_1649->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1649->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_507(const auto &x_1658) { return MakeUnit(); }
auto eval_expr_x_504(const auto &x_1661) {
  if (eq(x_1661->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_1661->var_inside_svg) {
      return 0.;
    } else {
      if (x_1661->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1661->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_1661->var_width_expr, std::string("%"))) &&
             (neq(x_1661->var_width_expr, std::string("fit-content")) &&
              (neq(x_1661->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_1661->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_1661->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_1661->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_1661->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_1661->var_children_intrinsic_width,
              (eq(x_1661->name, std::string("#text")))
                  ? (100.)
                  : ((x_1661->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1661->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_1661->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_1661->name, std::string("svg")))
                                              ? ((x_1661->var_has_width_attr &&
                                                  string_is_float(x_1661->var_width_attr_expr))
                                                     ? (string_to_float(x_1661->var_width_attr_expr))
                                                     : (((!x_1661->var_has_width_attr) &&
                                                         HasAttr(x_1661, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_1661, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_1661,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_1661->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_1661->name, std::string("IMG")))
                                                     ? ((x_1661->var_has_width_attr)
                                                            ? (string_to_float(x_1661->var_width_attr_expr))
                                                            : ((HasAttr(x_1661, std::string("image_width")) &&
                                                                (!x_1661->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_1661, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_1661, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_1661->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1661,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1661,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_1661->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_1661->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_502(const auto &x_1814) { return MakeUnit(); }
auto eval_expr_x_499(const auto &x_1816) {
  if (x_1816->last != nullptr) {
    return (x_1816->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_497(const auto &x_1821) { return MakeUnit(); }
auto eval_expr_x_494(const auto &x_1823) {
  if (eq(x_1823->var_display, std::string("none")) || (x_1823->var_inside_svg || x_1823->var_disabled)) {
    return true;
  } else {
    if ((x_1823->parent != nullptr) && (x_1823->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_1823->var_width_expr, std::string("auto")) ||
          (has_suffix(x_1823->var_width_expr, std::string("px")) ||
           (has_suffix(x_1823->var_width_expr, std::string("ch")) ||
            (has_prefix(x_1823->var_width_expr, std::string("calc(")) ||
             eq(x_1823->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_492(const auto &x_1872) { return MakeUnit(); }
auto eval_expr_x_489(const auto &x_1874) {
  if (eq(x_1874->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_1874->var_inside_svg) {
      return true;
    } else {
      if (x_1874->var_disabled) {
        return true;
      } else {if ( eq(x_1874->name,std::string("#document")) || (eq(x_1874->name,std::string("#shadow-root")) || (eq(x_1874->name,std::string("DIV")) || (eq(x_1874->name,std::string("HTML")) || (eq(x_1874->name,std::string("BODY")) || (eq(x_1874->name,std::string("BUTTON")) || (eq(x_1874->name,std::string("FOOTER")) || (eq(x_1874->name,std::string("SELECT")) || (eq(x_1874->name,std::string("SECTION")) || (eq(x_1874->name,std::string("FORM")) || (eq(x_1874->name,std::string("CENTER")) || (eq(x_1874->name,std::string("TD")) || (eq(x_1874->name,std::string("TR")) || (eq(x_1874->name,std::string("TBODY")) || (eq(x_1874->name,std::string("TABLE")) || (eq(x_1874->name,std::string("SPAN")) || (eq(x_1874->name,std::string("FONT")) || (eq(x_1874->name,std::string("A")) || (eq(x_1874->name,std::string("ARTICLE")) || (eq(x_1874->name,std::string("P")) || (eq(x_1874->name,std::string("U")) || (eq(x_1874->name,std::string("UL")) || (eq(x_1874->name,std::string("B")) || (eq(x_1874->name,std::string("H1")) || (eq(x_1874->name,std::string("H2")) || (eq(x_1874->name,std::string("H3")) || (eq(x_1874->name,std::string("H4")) || (eq(x_1874->name,std::string("DT")) || (eq(x_1874->name,std::string("DD")) || (eq(x_1874->name,std::string("DL")) || (eq(x_1874->name,std::string("LI")) || (eq(x_1874->name,std::string("LABEL")) || (eq(x_1874->name,std::string("OL")) || (eq(x_1874->name,std::string("NAV")) || (eq(x_1874->name,std::string("HEADER")) || (eq(x_1874->name,std::string("HEAD")) || (eq(x_1874->name,std::string("SOURCE")) || (eq(x_1874->name,std::string("PICTURE")) || (eq(x_1874->name,std::string("FIGURE")) || (eq(x_1874->name,std::string("FIGCAPTION")) || (eq(x_1874->name,std::string("MAIN")) || (eq(x_1874->name,std::string("REACT-PARTIAL")) || (eq(x_1874->name,std::string("QUERY-BUILDER")) || (eq(x_1874->name,std::string("MODAL-DIALOG")) || (eq(x_1874->name,std::string("SCROLLABLE-REGION")) || (eq(x_1874->name,std::string("DIALOG-HELPER")) || (eq(x_1874->name,std::string("AUTO-CHECK")) || (eq(x_1874->name,std::string("TOOL-TIP")) || (eq(x_1874->name,std::string("CUSTOM-SCOPES")) || (eq(x_1874->name,std::string("QBSEARCH-INPUT")) || (eq(x_1874->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_1874->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_1874->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_1874->name,std::string("GHCC-CONSENT")) || (eq(x_1874->name,std::string("GLOBAL-BANNER")) || (eq(x_1874->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_1874->name,std::string("CARD-SKEW")) || (eq(x_1874->name,std::string("EM")) || (eq(x_1874->name,std::string("ASIDE")) || (eq(x_1874->name,std::string("AUDIO")) || (eq(x_1874->name,std::string("SUP")) || (eq(x_1874->name,std::string("TIME")) || (eq(x_1874->name,std::string("ABBR")) || (eq(x_1874->name,std::string("SMALL")) || (eq(x_1874->name,std::string("SLOT")) || eq(x_1874->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_487(const auto &x_1887) { return MakeUnit(); }
auto eval_expr_x_484(const auto &x_1890) {
  if (HasProp(x_1890, std::string("width"))) {
    return GetProp<std::string>(x_1890, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_481(const auto &x_1893) { return MakeUnit(); }
auto eval_expr_x_478(const auto &x_1897) {
  if ((x_1897->prev != nullptr) && (!(x_1897->prev)->var_line_break)) {
    return max(x_1897->var_height_external, (x_1897->prev)->var_line_height);
  } else {
    return x_1897->var_height_external;
  }
}
Unit var_modified_x_476(const auto &x_1914) { return MakeUnit(); }
auto eval_expr_x_473(const auto &x_1916) {
  if (eq(x_1916->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1916->var_height_internal;
  }
}
Unit var_modified_x_471(const auto &x_1925) { return MakeUnit(); }
auto eval_expr_x_468(const auto &x_1928) {
  if (x_1928->var_intrinsic_height_is_height) {
    return x_1928->var_intrinsic_height_internal;
  } else {
    if ((x_1928->parent != nullptr) && (x_1928->parent)->var_is_flex_column) {
      return plus(x_1928->var_intrinsic_height_internal,
                  mult(x_1928->var_flex_amount, (x_1928->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_1928->var_height_expr, std::string("%"))) {
        return mult(x_1928->var_box_height,
                    divide(string_to_float(strip_suffix(x_1928->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_1928->var_box_height, x_1928->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_466(const auto &x_1981) { return MakeUnit(); }
auto eval_expr_x_463(const auto &x_1986) {
  if (x_1986->prev != nullptr) {
    if (x_1986->var_line_break || (x_1986->prev)->var_line_break) {
      return plus((x_1986->prev)->var_y, (x_1986->prev)->var_line_height);
    } else {
      return (x_1986->prev)->var_y;
    }
  } else {
    if (x_1986->parent != nullptr) {
      return (x_1986->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_461(const auto &x_2011) { return MakeUnit(); }
auto eval_expr_x_458(const auto &x_2015) {
  if (eq(x_2015->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2015->var_width_internal;
  }
}
Unit var_modified_x_456(const auto &x_2024) { return MakeUnit(); }
auto eval_expr_x_453(const auto &x_2027) {
  if (x_2027->var_intrinsic_width_is_width) {
    return x_2027->var_intrinsic_width_internal;
  } else {
    if ((x_2027->parent != nullptr) && (x_2027->parent)->var_is_flex_row) {
      return plus(x_2027->var_intrinsic_width_internal, mult(x_2027->var_flex_amount, (x_2027->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_2027->var_width_expr, std::string("%"))) {
        return mult(x_2027->var_box_width,
                    divide(string_to_float(strip_suffix(x_2027->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_2027->var_box_width, x_2027->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_451(const auto &x_2080) { return MakeUnit(); }
auto eval_expr_x_448(const auto &x_2085) {
  if (x_2085->prev != nullptr) {
    if (x_2085->var_line_break || (x_2085->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2085->prev)->var_x, (x_2085->prev)->var_width_external);
    }
  } else {
    if (x_2085->parent != nullptr) {
      return (x_2085->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_446(const auto &x_2106) { return MakeUnit(); }
auto eval_expr_x_443(const auto &x_2108) {
  if (gt(x_2108->var_left_over, 0.)) {
    return divide(x_2108->var_left_over, x_2108->var_flex_grow_sum);
  } else {
    return divide(x_2108->var_left_over, x_2108->var_flex_shrink_sum);
  }
}
Unit var_modified_x_441(const auto &x_2129) { return MakeUnit(); }
auto eval_expr_x_438(const auto &x_2131) {
  if ((x_2131->parent != nullptr) && gt((x_2131->parent)->var_left_over, 0.)) {
    return x_2131->var_flex_grow;
  } else {
    return x_2131->var_flex_shrink;
  }
}
Unit var_modified_x_436(const auto &x_2144) { return MakeUnit(); }
auto eval_expr_x_433(const auto &x_2147) {
  if (x_2147->var_is_flex_row) {
    return minus(x_2147->var_box_width, (x_2147->last != nullptr) ? ((x_2147->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2147->var_box_height, (x_2147->last != nullptr) ? ((x_2147->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_431(const auto &x_2168) { return MakeUnit(); }
auto eval_expr_x_428(const auto &x_2170) {
  if (x_2170->parent != nullptr) {
    return (x_2170->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_426(const auto &x_2175) { return MakeUnit(); }
auto eval_expr_x_423(const auto &x_2177) {
  if (x_2177->parent != nullptr) {
    return (x_2177->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_420(const auto &x_2182) { return MakeUnit(); }
auto eval_expr_x_417(const auto &x_2191) {
  if (eq(x_2191->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_2191->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_2191->parent != nullptr) &&
          (eq((x_2191->parent)->var_display, std::string("flex")) ||
           eq((x_2191->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_2191->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_2191->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_2191->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_2191->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_2191, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_2191, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2191->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_2191->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_2191->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_2191->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_2191->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_2191->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_2191->var_display, std::string("list-item"))) {
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
Unit var_modified_x_415(const auto &x_2268) { return MakeUnit(); }
auto eval_expr_x_412(const auto &x_2270) {
  return (((!(x_2270->parent != nullptr)) || (x_2270->parent)->var_visible) &&
          (neq(x_2270->var_display, std::string("none")) && ((!x_2270->var_inside_svg) && (!x_2270->var_disabled))));
}
Unit var_modified_x_410(const auto &x_2287) { return MakeUnit(); }
auto eval_expr_x_407(const auto &x_2291) {
  if (eq(x_2291->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_2291->parent != nullptr) && (x_2291->parent)->var_disabled);
  }
}
Unit var_modified_x_405(const auto &x_2296) { return MakeUnit(); }
auto eval_expr_x_402(const auto &x_2300) {
  return ((x_2300->parent != nullptr) && ((x_2300->parent)->var_is_svg_block || (x_2300->parent)->var_inside_svg));
}
Unit var_modified_x_400(const auto &x_2309) { return MakeUnit(); }
auto eval_expr_x_397(const auto &x_2311) { return eq(x_2311->name, std::string("svg")); }
Unit var_modified_x_395(const auto &x_2312) { return MakeUnit(); }
auto eval_expr_x_392(const auto &x_2314) { return neq(x_2314->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_390(const auto &x_2319) { return MakeUnit(); }
auto eval_expr_x_387(const auto &x_2322) {
  if (!HasAttr(x_2322, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_2322, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_2322, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_2322, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_385(const auto &x_2333) { return MakeUnit(); }
auto eval_expr_x_382(const auto &x_2335) { return neq(x_2335->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_380(const auto &x_2340) { return MakeUnit(); }
auto eval_expr_x_377(const auto &x_2343) {
  if (!HasAttr(x_2343, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_2343, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_2343, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_2343, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_375(const auto &x_2354) { return MakeUnit(); }
auto eval_expr_x_372(const auto &x_2357) {
  if ((x_2357->parent != nullptr) &&
      (eq((x_2357->parent)->var_display, std::string("flex")) ||
       eq((x_2357->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_2357->parent)->var_flex_direction, std::string("column")) ||
        eq((x_2357->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_370(const auto &x_2382) { return MakeUnit(); }
auto eval_expr_x_367(const auto &x_2386) {
  if ((x_2386->parent != nullptr) &&
      (eq((x_2386->parent)->var_display, std::string("flex")) ||
       eq((x_2386->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_2386->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_365(const auto &x_2411) { return MakeUnit(); }
auto eval_expr_x_362(const auto &x_2413) {
  if (HasProp(x_2413, std::string("flex-direction"))) {
    return GetProp<std::string>(x_2413, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_360(const auto &x_2416) { return MakeUnit(); }
auto eval_expr_x_357(const auto &x_2421) {
  return plus((x_2421->prev != nullptr) ? ((x_2421->prev)->var_flex_shrink_sum) : (0.), x_2421->var_flex_shrink);
}
Unit var_modified_x_355(const auto &x_2430) { return MakeUnit(); }
auto eval_expr_x_352(const auto &x_2435) {
  return plus((x_2435->prev != nullptr) ? ((x_2435->prev)->var_flex_grow_sum) : (0.), x_2435->var_flex_grow);
}
Unit var_modified_x_350(const auto &x_2444) { return MakeUnit(); }
auto eval_expr_x_347(const auto &x_2447) {
  if (HasProp(x_2447, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_2447, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_345(const auto &x_2450) { return MakeUnit(); }
auto eval_expr_x_342(const auto &x_2453) {
  if (HasProp(x_2453, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_2453, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_340(const auto &x_2456) { return MakeUnit(); }
auto eval_expr_x_337(const auto &x_2460) {
  if (HasProp(x_2460, std::string("position"))) {
    return GetProp<std::string>(x_2460, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_335(const auto &x_2463) { return MakeUnit(); }
auto eval_expr_x_332(const auto &x_2467) {
  if (HasProp(x_2467, std::string("display"))) {
    return GetProp<std::string>(x_2467, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_329(const auto &x_2470) { return MakeUnit(); }
auto eval_expr_x_326(const auto &x_2477) {
  if (x_2477->prev != nullptr) {
    if (x_2477->var_line_break) {
      return plus((x_2477->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2477->prev)->var_intrinsic_current_line_height, x_2477->var_intrinsic_height_external));
    } else {
      return (x_2477->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2477->var_line_break) {
      return x_2477->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_324(const auto &x_2506) { return MakeUnit(); }
auto eval_expr_x_321(const auto &x_2513) {
  if (x_2513->var_line_break) {
    return 0.;
  } else {
    return max(x_2513->var_intrinsic_height_external,
               (x_2513->prev != nullptr) ? ((x_2513->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_319(const auto &x_2526) { return MakeUnit(); }
auto eval_expr_x_316(const auto &x_2533) {
  return plus((x_2533->prev != nullptr) ? ((x_2533->prev)->var_intrinsic_height_sum) : (0.),
              x_2533->var_intrinsic_height_external);
}
Unit var_modified_x_314(const auto &x_2542) { return MakeUnit(); }
auto eval_expr_x_311(const auto &x_2544) {
  if (eq(x_2544->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2544->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_309(const auto &x_2553) { return MakeUnit(); }
auto eval_expr_x_306(const auto &x_2556) {
  if (eq(x_2556->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_2556->var_inside_svg) {
      return 0.;
    } else {
      if (x_2556->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2556->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_2556->var_height_expr, std::string("%"))) &&
             neq(x_2556->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_2556->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_2556->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_2556->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_2556->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_2556->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_2556->var_children_intrinsic_height,
              (eq(x_2556->name, std::string("#text")))
                  ? (10.)
                  : ((x_2556->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2556->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_2556->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_2556->name, std::string("svg")))
                                              ? ((x_2556->var_has_height_attr &&
                                                  string_is_float(x_2556->var_height_attr_expr))
                                                     ? (string_to_float(x_2556->var_height_attr_expr))
                                                     : ((HasAttr(x_2556, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_2556, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_2556,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_2556->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_2556->name, std::string("IMG")))
                                                     ? ((x_2556->var_has_height_attr)
                                                            ? (string_to_float(x_2556->var_height_attr_expr))
                                                            : ((HasAttr(x_2556, std::string("image_height")) &&
                                                                (!x_2556->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_2556, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_2556,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_2556->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2556,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2556,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_2556->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_2556->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_304(const auto &x_2701) { return MakeUnit(); }
auto eval_expr_x_301(const auto &x_2703) {
  if (eq(x_2703->var_display, std::string("none")) || (x_2703->var_inside_svg || x_2703->var_disabled)) {
    return true;
  } else {
    if ((x_2703->parent != nullptr) && (x_2703->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_2703->var_height_expr, std::string("auto")) ||
          (has_suffix(x_2703->var_height_expr, std::string("px")) ||
           (has_suffix(x_2703->var_height_expr, std::string("ch")) ||
            (has_suffix(x_2703->var_height_expr, std::string("lh")) ||
             eq(x_2703->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_299(const auto &x_2752) { return MakeUnit(); }
auto eval_expr_x_296(const auto &x_2755) {
  if (HasProp(x_2755, std::string("height"))) {
    return GetProp<std::string>(x_2755, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_294(const auto &x_2758) { return MakeUnit(); }
auto eval_expr_x_291(const auto &x_2760) {
  if (x_2760->last != nullptr) {
    return plus((x_2760->last)->var_finished_intrinsic_height_sum, (x_2760->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_289(const auto &x_2769) { return MakeUnit(); }
auto eval_expr_x_286(const auto &x_2776) {
  return plus((x_2776->prev != nullptr) ? ((x_2776->prev)->var_intrinsic_width_sum) : (0.),
              x_2776->var_intrinsic_width_external);
}
Unit var_modified_x_284(const auto &x_2785) { return MakeUnit(); }
auto eval_expr_x_281(const auto &x_2792) {
  return max(x_2792->var_intrinsic_current_line_width,
             (x_2792->prev != nullptr) ? ((x_2792->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_279(const auto &x_2801) { return MakeUnit(); }
auto eval_expr_x_276(const auto &x_2806) {
  return plus(x_2806->var_intrinsic_width_external,
              ((x_2806->prev != nullptr) && (!(x_2806->prev)->var_line_break))
                  ? ((x_2806->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_274(const auto &x_2819) { return MakeUnit(); }
auto eval_expr_x_271(const auto &x_2821) {
  if (eq(x_2821->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2821->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_269(const auto &x_2830) { return MakeUnit(); }
auto eval_expr_x_266(const auto &x_2833) {
  if (eq(x_2833->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_2833->var_inside_svg) {
      return 0.;
    } else {
      if (x_2833->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2833->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_2833->var_width_expr, std::string("%"))) &&
             (neq(x_2833->var_width_expr, std::string("fit-content")) &&
              (neq(x_2833->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_2833->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_2833->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_2833->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_2833->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_2833->var_children_intrinsic_width,
              (eq(x_2833->name, std::string("#text")))
                  ? (100.)
                  : ((x_2833->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2833->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_2833->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_2833->name, std::string("svg")))
                                              ? ((x_2833->var_has_width_attr &&
                                                  string_is_float(x_2833->var_width_attr_expr))
                                                     ? (string_to_float(x_2833->var_width_attr_expr))
                                                     : (((!x_2833->var_has_width_attr) &&
                                                         HasAttr(x_2833, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_2833, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_2833,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_2833->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_2833->name, std::string("IMG")))
                                                     ? ((x_2833->var_has_width_attr)
                                                            ? (string_to_float(x_2833->var_width_attr_expr))
                                                            : ((HasAttr(x_2833, std::string("image_width")) &&
                                                                (!x_2833->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_2833, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_2833, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_2833->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2833,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2833,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_2833->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_2833->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_264(const auto &x_2986) { return MakeUnit(); }
auto eval_expr_x_261(const auto &x_2988) {
  if (x_2988->last != nullptr) {
    return (x_2988->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_259(const auto &x_2993) { return MakeUnit(); }
auto eval_expr_x_256(const auto &x_2995) {
  if (eq(x_2995->var_display, std::string("none")) || (x_2995->var_inside_svg || x_2995->var_disabled)) {
    return true;
  } else {
    if ((x_2995->parent != nullptr) && (x_2995->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2995->var_width_expr, std::string("auto")) ||
          (has_suffix(x_2995->var_width_expr, std::string("px")) ||
           (has_suffix(x_2995->var_width_expr, std::string("ch")) ||
            (has_prefix(x_2995->var_width_expr, std::string("calc(")) ||
             eq(x_2995->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_254(const auto &x_3044) { return MakeUnit(); }
auto eval_expr_x_251(const auto &x_3046) {
  if (eq(x_3046->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_3046->var_inside_svg) {
      return true;
    } else {
      if (x_3046->var_disabled) {
        return true;
      } else {if ( eq(x_3046->name,std::string("#document")) || (eq(x_3046->name,std::string("#shadow-root")) || (eq(x_3046->name,std::string("DIV")) || (eq(x_3046->name,std::string("HTML")) || (eq(x_3046->name,std::string("BODY")) || (eq(x_3046->name,std::string("BUTTON")) || (eq(x_3046->name,std::string("FOOTER")) || (eq(x_3046->name,std::string("SELECT")) || (eq(x_3046->name,std::string("SECTION")) || (eq(x_3046->name,std::string("FORM")) || (eq(x_3046->name,std::string("CENTER")) || (eq(x_3046->name,std::string("TD")) || (eq(x_3046->name,std::string("TR")) || (eq(x_3046->name,std::string("TBODY")) || (eq(x_3046->name,std::string("TABLE")) || (eq(x_3046->name,std::string("SPAN")) || (eq(x_3046->name,std::string("FONT")) || (eq(x_3046->name,std::string("A")) || (eq(x_3046->name,std::string("ARTICLE")) || (eq(x_3046->name,std::string("P")) || (eq(x_3046->name,std::string("U")) || (eq(x_3046->name,std::string("UL")) || (eq(x_3046->name,std::string("B")) || (eq(x_3046->name,std::string("H1")) || (eq(x_3046->name,std::string("H2")) || (eq(x_3046->name,std::string("H3")) || (eq(x_3046->name,std::string("H4")) || (eq(x_3046->name,std::string("DT")) || (eq(x_3046->name,std::string("DD")) || (eq(x_3046->name,std::string("DL")) || (eq(x_3046->name,std::string("LI")) || (eq(x_3046->name,std::string("LABEL")) || (eq(x_3046->name,std::string("OL")) || (eq(x_3046->name,std::string("NAV")) || (eq(x_3046->name,std::string("HEADER")) || (eq(x_3046->name,std::string("HEAD")) || (eq(x_3046->name,std::string("SOURCE")) || (eq(x_3046->name,std::string("PICTURE")) || (eq(x_3046->name,std::string("FIGURE")) || (eq(x_3046->name,std::string("FIGCAPTION")) || (eq(x_3046->name,std::string("MAIN")) || (eq(x_3046->name,std::string("REACT-PARTIAL")) || (eq(x_3046->name,std::string("QUERY-BUILDER")) || (eq(x_3046->name,std::string("MODAL-DIALOG")) || (eq(x_3046->name,std::string("SCROLLABLE-REGION")) || (eq(x_3046->name,std::string("DIALOG-HELPER")) || (eq(x_3046->name,std::string("AUTO-CHECK")) || (eq(x_3046->name,std::string("TOOL-TIP")) || (eq(x_3046->name,std::string("CUSTOM-SCOPES")) || (eq(x_3046->name,std::string("QBSEARCH-INPUT")) || (eq(x_3046->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_3046->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_3046->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_3046->name,std::string("GHCC-CONSENT")) || (eq(x_3046->name,std::string("GLOBAL-BANNER")) || (eq(x_3046->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_3046->name,std::string("CARD-SKEW")) || (eq(x_3046->name,std::string("EM")) || (eq(x_3046->name,std::string("ASIDE")) || (eq(x_3046->name,std::string("AUDIO")) || (eq(x_3046->name,std::string("SUP")) || (eq(x_3046->name,std::string("TIME")) || (eq(x_3046->name,std::string("ABBR")) || (eq(x_3046->name,std::string("SMALL")) || (eq(x_3046->name,std::string("SLOT")) || eq(x_3046->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_249(const auto &x_3059) { return MakeUnit(); }
auto eval_expr_x_246(const auto &x_3062) {
  if (HasProp(x_3062, std::string("width"))) {
    return GetProp<std::string>(x_3062, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_221(const auto &x_245) {
  WriteMetric();
  auto x_247 = eval_expr_x_246(x_245);
  if (x_245->has_var_width_expr) {
    auto x_248 = x_245->var_width_expr;
    if (!EqualValue(x_248, x_247)) {
      var_modified_x_249(x_245);
    }
  }
  x_245->has_var_width_expr = true;
  x_245->var_width_expr = x_247;
  WriteMetric();
  auto x_252 = eval_expr_x_251(x_245);
  if (x_245->has_var_is_default_case) {
    auto x_253 = x_245->var_is_default_case;
    if (!EqualValue(x_253, x_252)) {
      var_modified_x_254(x_245);
    }
  }
  x_245->has_var_is_default_case = true;
  x_245->var_is_default_case = x_252;
  WriteMetric();
  auto x_257 = eval_expr_x_256(x_245);
  if (x_245->has_var_intrinsic_width_is_width) {
    auto x_258 = x_245->var_intrinsic_width_is_width;
    if (!EqualValue(x_258, x_257)) {
      var_modified_x_259(x_245);
    }
  }
  x_245->has_var_intrinsic_width_is_width = true;
  x_245->var_intrinsic_width_is_width = x_257;
  WriteMetric();
  auto x_262 = eval_expr_x_261(x_245);
  if (x_245->has_var_children_intrinsic_width) {
    auto x_263 = x_245->var_children_intrinsic_width;
    if (!EqualValue(x_263, x_262)) {
      var_modified_x_264(x_245);
    }
  }
  x_245->has_var_children_intrinsic_width = true;
  x_245->var_children_intrinsic_width = x_262;
  WriteMetric();
  auto x_267 = eval_expr_x_266(x_245);
  if (x_245->has_var_intrinsic_width_internal) {
    auto x_268 = x_245->var_intrinsic_width_internal;
    if (!EqualValue(x_268, x_267)) {
      var_modified_x_269(x_245);
    }
  }
  x_245->has_var_intrinsic_width_internal = true;
  x_245->var_intrinsic_width_internal = x_267;
  WriteMetric();
  auto x_272 = eval_expr_x_271(x_245);
  if (x_245->has_var_intrinsic_width_external) {
    auto x_273 = x_245->var_intrinsic_width_external;
    if (!EqualValue(x_273, x_272)) {
      var_modified_x_274(x_245);
    }
  }
  x_245->has_var_intrinsic_width_external = true;
  x_245->var_intrinsic_width_external = x_272;
  WriteMetric();
  auto x_277 = eval_expr_x_276(x_245);
  if (x_245->has_var_intrinsic_current_line_width) {
    auto x_278 = x_245->var_intrinsic_current_line_width;
    if (!EqualValue(x_278, x_277)) {
      var_modified_x_279(x_245);
    }
  }
  x_245->has_var_intrinsic_current_line_width = true;
  x_245->var_intrinsic_current_line_width = x_277;
  WriteMetric();
  auto x_282 = eval_expr_x_281(x_245);
  if (x_245->has_var_intrinsic_width_max) {
    auto x_283 = x_245->var_intrinsic_width_max;
    if (!EqualValue(x_283, x_282)) {
      var_modified_x_284(x_245);
    }
  }
  x_245->has_var_intrinsic_width_max = true;
  x_245->var_intrinsic_width_max = x_282;
  WriteMetric();
  auto x_287 = eval_expr_x_286(x_245);
  if (x_245->has_var_intrinsic_width_sum) {
    auto x_288 = x_245->var_intrinsic_width_sum;
    if (!EqualValue(x_288, x_287)) {
      var_modified_x_289(x_245);
    }
  }
  x_245->has_var_intrinsic_width_sum = true;
  x_245->var_intrinsic_width_sum = x_287;
  WriteMetric();
  auto x_292 = eval_expr_x_291(x_245);
  if (x_245->has_var_children_intrinsic_height) {
    auto x_293 = x_245->var_children_intrinsic_height;
    if (!EqualValue(x_293, x_292)) {
      var_modified_x_294(x_245);
    }
  }
  x_245->has_var_children_intrinsic_height = true;
  x_245->var_children_intrinsic_height = x_292;
  WriteMetric();
  auto x_297 = eval_expr_x_296(x_245);
  if (x_245->has_var_height_expr) {
    auto x_298 = x_245->var_height_expr;
    if (!EqualValue(x_298, x_297)) {
      var_modified_x_299(x_245);
    }
  }
  x_245->has_var_height_expr = true;
  x_245->var_height_expr = x_297;
  WriteMetric();
  auto x_302 = eval_expr_x_301(x_245);
  if (x_245->has_var_intrinsic_height_is_height) {
    auto x_303 = x_245->var_intrinsic_height_is_height;
    if (!EqualValue(x_303, x_302)) {
      var_modified_x_304(x_245);
    }
  }
  x_245->has_var_intrinsic_height_is_height = true;
  x_245->var_intrinsic_height_is_height = x_302;
  WriteMetric();
  auto x_307 = eval_expr_x_306(x_245);
  if (x_245->has_var_intrinsic_height_internal) {
    auto x_308 = x_245->var_intrinsic_height_internal;
    if (!EqualValue(x_308, x_307)) {
      var_modified_x_309(x_245);
    }
  }
  x_245->has_var_intrinsic_height_internal = true;
  x_245->var_intrinsic_height_internal = x_307;
  WriteMetric();
  auto x_312 = eval_expr_x_311(x_245);
  if (x_245->has_var_intrinsic_height_external) {
    auto x_313 = x_245->var_intrinsic_height_external;
    if (!EqualValue(x_313, x_312)) {
      var_modified_x_314(x_245);
    }
  }
  x_245->has_var_intrinsic_height_external = true;
  x_245->var_intrinsic_height_external = x_312;
  WriteMetric();
  auto x_317 = eval_expr_x_316(x_245);
  if (x_245->has_var_intrinsic_height_sum) {
    auto x_318 = x_245->var_intrinsic_height_sum;
    if (!EqualValue(x_318, x_317)) {
      var_modified_x_319(x_245);
    }
  }
  x_245->has_var_intrinsic_height_sum = true;
  x_245->var_intrinsic_height_sum = x_317;
  WriteMetric();
  auto x_322 = eval_expr_x_321(x_245);
  if (x_245->has_var_intrinsic_current_line_height) {
    auto x_323 = x_245->var_intrinsic_current_line_height;
    if (!EqualValue(x_323, x_322)) {
      var_modified_x_324(x_245);
    }
  }
  x_245->has_var_intrinsic_current_line_height = true;
  x_245->var_intrinsic_current_line_height = x_322;
  WriteMetric();
  auto x_327 = eval_expr_x_326(x_245);
  if (x_245->has_var_finished_intrinsic_height_sum) {
    auto x_328 = x_245->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_328, x_327)) {
      var_modified_x_329(x_245);
    }
  }
  x_245->has_var_finished_intrinsic_height_sum = true;
  x_245->var_finished_intrinsic_height_sum = x_327;
  return MakeUnit();
}
Unit eval_stmts_x_219(const auto &x_331) {
  WriteMetric();
  auto x_333 = eval_expr_x_332(x_331);
  if (x_331->has_var_display) {
    auto x_334 = x_331->var_display;
    if (!EqualValue(x_334, x_333)) {
      var_modified_x_335(x_331);
    }
  }
  x_331->has_var_display = true;
  x_331->var_display = x_333;
  WriteMetric();
  auto x_338 = eval_expr_x_337(x_331);
  if (x_331->has_var_position) {
    auto x_339 = x_331->var_position;
    if (!EqualValue(x_339, x_338)) {
      var_modified_x_340(x_331);
    }
  }
  x_331->has_var_position = true;
  x_331->var_position = x_338;
  WriteMetric();
  auto x_343 = eval_expr_x_342(x_331);
  if (x_331->has_var_flex_grow) {
    auto x_344 = x_331->var_flex_grow;
    if (!EqualValue(x_344, x_343)) {
      var_modified_x_345(x_331);
    }
  }
  x_331->has_var_flex_grow = true;
  x_331->var_flex_grow = x_343;
  WriteMetric();
  auto x_348 = eval_expr_x_347(x_331);
  if (x_331->has_var_flex_shrink) {
    auto x_349 = x_331->var_flex_shrink;
    if (!EqualValue(x_349, x_348)) {
      var_modified_x_350(x_331);
    }
  }
  x_331->has_var_flex_shrink = true;
  x_331->var_flex_shrink = x_348;
  WriteMetric();
  auto x_353 = eval_expr_x_352(x_331);
  if (x_331->has_var_flex_grow_sum) {
    auto x_354 = x_331->var_flex_grow_sum;
    if (!EqualValue(x_354, x_353)) {
      var_modified_x_355(x_331);
    }
  }
  x_331->has_var_flex_grow_sum = true;
  x_331->var_flex_grow_sum = x_353;
  WriteMetric();
  auto x_358 = eval_expr_x_357(x_331);
  if (x_331->has_var_flex_shrink_sum) {
    auto x_359 = x_331->var_flex_shrink_sum;
    if (!EqualValue(x_359, x_358)) {
      var_modified_x_360(x_331);
    }
  }
  x_331->has_var_flex_shrink_sum = true;
  x_331->var_flex_shrink_sum = x_358;
  WriteMetric();
  auto x_363 = eval_expr_x_362(x_331);
  if (x_331->has_var_flex_direction) {
    auto x_364 = x_331->var_flex_direction;
    if (!EqualValue(x_364, x_363)) {
      var_modified_x_365(x_331);
    }
  }
  x_331->has_var_flex_direction = true;
  x_331->var_flex_direction = x_363;
  WriteMetric();
  auto x_368 = eval_expr_x_367(x_331);
  if (x_331->has_var_is_flex_row) {
    auto x_369 = x_331->var_is_flex_row;
    if (!EqualValue(x_369, x_368)) {
      var_modified_x_370(x_331);
    }
  }
  x_331->has_var_is_flex_row = true;
  x_331->var_is_flex_row = x_368;
  WriteMetric();
  auto x_373 = eval_expr_x_372(x_331);
  if (x_331->has_var_is_flex_column) {
    auto x_374 = x_331->var_is_flex_column;
    if (!EqualValue(x_374, x_373)) {
      var_modified_x_375(x_331);
    }
  }
  x_331->has_var_is_flex_column = true;
  x_331->var_is_flex_column = x_373;
  WriteMetric();
  auto x_378 = eval_expr_x_377(x_331);
  if (x_331->has_var_width_attr_expr) {
    auto x_379 = x_331->var_width_attr_expr;
    if (!EqualValue(x_379, x_378)) {
      var_modified_x_380(x_331);
    }
  }
  x_331->has_var_width_attr_expr = true;
  x_331->var_width_attr_expr = x_378;
  WriteMetric();
  auto x_383 = eval_expr_x_382(x_331);
  if (x_331->has_var_has_width_attr) {
    auto x_384 = x_331->var_has_width_attr;
    if (!EqualValue(x_384, x_383)) {
      var_modified_x_385(x_331);
    }
  }
  x_331->has_var_has_width_attr = true;
  x_331->var_has_width_attr = x_383;
  WriteMetric();
  auto x_388 = eval_expr_x_387(x_331);
  if (x_331->has_var_height_attr_expr) {
    auto x_389 = x_331->var_height_attr_expr;
    if (!EqualValue(x_389, x_388)) {
      var_modified_x_390(x_331);
    }
  }
  x_331->has_var_height_attr_expr = true;
  x_331->var_height_attr_expr = x_388;
  WriteMetric();
  auto x_393 = eval_expr_x_392(x_331);
  if (x_331->has_var_has_height_attr) {
    auto x_394 = x_331->var_has_height_attr;
    if (!EqualValue(x_394, x_393)) {
      var_modified_x_395(x_331);
    }
  }
  x_331->has_var_has_height_attr = true;
  x_331->var_has_height_attr = x_393;
  WriteMetric();
  auto x_398 = eval_expr_x_397(x_331);
  if (x_331->has_var_is_svg_block) {
    auto x_399 = x_331->var_is_svg_block;
    if (!EqualValue(x_399, x_398)) {
      var_modified_x_400(x_331);
    }
  }
  x_331->has_var_is_svg_block = true;
  x_331->var_is_svg_block = x_398;
  WriteMetric();
  auto x_403 = eval_expr_x_402(x_331);
  if (x_331->has_var_inside_svg) {
    auto x_404 = x_331->var_inside_svg;
    if (!EqualValue(x_404, x_403)) {
      var_modified_x_405(x_331);
    }
  }
  x_331->has_var_inside_svg = true;
  x_331->var_inside_svg = x_403;
  WriteMetric();
  auto x_408 = eval_expr_x_407(x_331);
  if (x_331->has_var_disabled) {
    auto x_409 = x_331->var_disabled;
    if (!EqualValue(x_409, x_408)) {
      var_modified_x_410(x_331);
    }
  }
  x_331->has_var_disabled = true;
  x_331->var_disabled = x_408;
  WriteMetric();
  auto x_413 = eval_expr_x_412(x_331);
  if (x_331->has_var_visible) {
    auto x_414 = x_331->var_visible;
    if (!EqualValue(x_414, x_413)) {
      var_modified_x_415(x_331);
    }
  }
  x_331->has_var_visible = true;
  x_331->var_visible = x_413;
  WriteMetric();
  auto x_418 = eval_expr_x_417(x_331);
  if (x_331->has_var_line_break) {
    auto x_419 = x_331->var_line_break;
    if (!EqualValue(x_419, x_418)) {
      var_modified_x_420(x_331);
    }
  }
  x_331->has_var_line_break = true;
  x_331->var_line_break = x_418;
  return MakeUnit();
}
Unit eval_stmts_x_216(const auto &x_422) {
  WriteMetric();
  auto x_424 = eval_expr_x_423(x_422);
  if (x_422->has_var_box_width) {
    auto x_425 = x_422->var_box_width;
    if (!EqualValue(x_425, x_424)) {
      var_modified_x_426(x_422);
    }
  }
  x_422->has_var_box_width = true;
  x_422->var_box_width = x_424;
  WriteMetric();
  auto x_429 = eval_expr_x_428(x_422);
  if (x_422->has_var_box_height) {
    auto x_430 = x_422->var_box_height;
    if (!EqualValue(x_430, x_429)) {
      var_modified_x_431(x_422);
    }
  }
  x_422->has_var_box_height = true;
  x_422->var_box_height = x_429;
  WriteMetric();
  auto x_434 = eval_expr_x_433(x_422);
  if (x_422->has_var_left_over) {
    auto x_435 = x_422->var_left_over;
    if (!EqualValue(x_435, x_434)) {
      var_modified_x_436(x_422);
    }
  }
  x_422->has_var_left_over = true;
  x_422->var_left_over = x_434;
  WriteMetric();
  auto x_439 = eval_expr_x_438(x_422);
  if (x_422->has_var_flex_amount) {
    auto x_440 = x_422->var_flex_amount;
    if (!EqualValue(x_440, x_439)) {
      var_modified_x_441(x_422);
    }
  }
  x_422->has_var_flex_amount = true;
  x_422->var_flex_amount = x_439;
  WriteMetric();
  auto x_444 = eval_expr_x_443(x_422);
  if (x_422->has_var_flex_unit) {
    auto x_445 = x_422->var_flex_unit;
    if (!EqualValue(x_445, x_444)) {
      var_modified_x_446(x_422);
    }
  }
  x_422->has_var_flex_unit = true;
  x_422->var_flex_unit = x_444;
  WriteMetric();
  auto x_449 = eval_expr_x_448(x_422);
  if (x_422->has_var_x) {
    auto x_450 = x_422->var_x;
    if (!EqualValue(x_450, x_449)) {
      var_modified_x_451(x_422);
    }
  }
  x_422->has_var_x = true;
  x_422->var_x = x_449;
  WriteMetric();
  auto x_454 = eval_expr_x_453(x_422);
  if (x_422->has_var_width_internal) {
    auto x_455 = x_422->var_width_internal;
    if (!EqualValue(x_455, x_454)) {
      var_modified_x_456(x_422);
    }
  }
  x_422->has_var_width_internal = true;
  x_422->var_width_internal = x_454;
  WriteMetric();
  auto x_459 = eval_expr_x_458(x_422);
  if (x_422->has_var_width_external) {
    auto x_460 = x_422->var_width_external;
    if (!EqualValue(x_460, x_459)) {
      var_modified_x_461(x_422);
    }
  }
  x_422->has_var_width_external = true;
  x_422->var_width_external = x_459;
  WriteMetric();
  auto x_464 = eval_expr_x_463(x_422);
  if (x_422->has_var_y) {
    auto x_465 = x_422->var_y;
    if (!EqualValue(x_465, x_464)) {
      var_modified_x_466(x_422);
    }
  }
  x_422->has_var_y = true;
  x_422->var_y = x_464;
  WriteMetric();
  auto x_469 = eval_expr_x_468(x_422);
  if (x_422->has_var_height_internal) {
    auto x_470 = x_422->var_height_internal;
    if (!EqualValue(x_470, x_469)) {
      var_modified_x_471(x_422);
    }
  }
  x_422->has_var_height_internal = true;
  x_422->var_height_internal = x_469;
  WriteMetric();
  auto x_474 = eval_expr_x_473(x_422);
  if (x_422->has_var_height_external) {
    auto x_475 = x_422->var_height_external;
    if (!EqualValue(x_475, x_474)) {
      var_modified_x_476(x_422);
    }
  }
  x_422->has_var_height_external = true;
  x_422->var_height_external = x_474;
  WriteMetric();
  auto x_479 = eval_expr_x_478(x_422);
  if (x_422->has_var_line_height) {
    auto x_480 = x_422->var_line_height;
    if (!EqualValue(x_480, x_479)) {
      var_modified_x_481(x_422);
    }
  }
  x_422->has_var_line_height = true;
  x_422->var_line_height = x_479;
  return MakeUnit();
}
Unit eval_stmts_x_206(const auto &x_483) {
  WriteMetric();
  auto x_485 = eval_expr_x_484(x_483);
  if (x_483->has_var_width_expr) {
    auto x_486 = x_483->var_width_expr;
    if (!EqualValue(x_486, x_485)) {
      var_modified_x_487(x_483);
    }
  }
  x_483->has_var_width_expr = true;
  x_483->var_width_expr = x_485;
  WriteMetric();
  auto x_490 = eval_expr_x_489(x_483);
  if (x_483->has_var_is_default_case) {
    auto x_491 = x_483->var_is_default_case;
    if (!EqualValue(x_491, x_490)) {
      var_modified_x_492(x_483);
    }
  }
  x_483->has_var_is_default_case = true;
  x_483->var_is_default_case = x_490;
  WriteMetric();
  auto x_495 = eval_expr_x_494(x_483);
  if (x_483->has_var_intrinsic_width_is_width) {
    auto x_496 = x_483->var_intrinsic_width_is_width;
    if (!EqualValue(x_496, x_495)) {
      var_modified_x_497(x_483);
    }
  }
  x_483->has_var_intrinsic_width_is_width = true;
  x_483->var_intrinsic_width_is_width = x_495;
  WriteMetric();
  auto x_500 = eval_expr_x_499(x_483);
  if (x_483->has_var_children_intrinsic_width) {
    auto x_501 = x_483->var_children_intrinsic_width;
    if (!EqualValue(x_501, x_500)) {
      var_modified_x_502(x_483);
    }
  }
  x_483->has_var_children_intrinsic_width = true;
  x_483->var_children_intrinsic_width = x_500;
  WriteMetric();
  auto x_505 = eval_expr_x_504(x_483);
  if (x_483->has_var_intrinsic_width_internal) {
    auto x_506 = x_483->var_intrinsic_width_internal;
    if (!EqualValue(x_506, x_505)) {
      var_modified_x_507(x_483);
    }
  }
  x_483->has_var_intrinsic_width_internal = true;
  x_483->var_intrinsic_width_internal = x_505;
  WriteMetric();
  auto x_510 = eval_expr_x_509(x_483);
  if (x_483->has_var_intrinsic_width_external) {
    auto x_511 = x_483->var_intrinsic_width_external;
    if (!EqualValue(x_511, x_510)) {
      var_modified_x_512(x_483);
    }
  }
  x_483->has_var_intrinsic_width_external = true;
  x_483->var_intrinsic_width_external = x_510;
  WriteMetric();
  auto x_515 = eval_expr_x_514(x_483);
  if (x_483->has_var_intrinsic_current_line_width) {
    auto x_516 = x_483->var_intrinsic_current_line_width;
    if (!EqualValue(x_516, x_515)) {
      var_modified_x_517(x_483);
    }
  }
  x_483->has_var_intrinsic_current_line_width = true;
  x_483->var_intrinsic_current_line_width = x_515;
  WriteMetric();
  auto x_520 = eval_expr_x_519(x_483);
  if (x_483->has_var_intrinsic_width_max) {
    auto x_521 = x_483->var_intrinsic_width_max;
    if (!EqualValue(x_521, x_520)) {
      var_modified_x_522(x_483);
    }
  }
  x_483->has_var_intrinsic_width_max = true;
  x_483->var_intrinsic_width_max = x_520;
  WriteMetric();
  auto x_525 = eval_expr_x_524(x_483);
  if (x_483->has_var_intrinsic_width_sum) {
    auto x_526 = x_483->var_intrinsic_width_sum;
    if (!EqualValue(x_526, x_525)) {
      var_modified_x_527(x_483);
    }
  }
  x_483->has_var_intrinsic_width_sum = true;
  x_483->var_intrinsic_width_sum = x_525;
  WriteMetric();
  auto x_530 = eval_expr_x_529(x_483);
  if (x_483->has_var_children_intrinsic_height) {
    auto x_531 = x_483->var_children_intrinsic_height;
    if (!EqualValue(x_531, x_530)) {
      var_modified_x_532(x_483);
    }
  }
  x_483->has_var_children_intrinsic_height = true;
  x_483->var_children_intrinsic_height = x_530;
  WriteMetric();
  auto x_535 = eval_expr_x_534(x_483);
  if (x_483->has_var_height_expr) {
    auto x_536 = x_483->var_height_expr;
    if (!EqualValue(x_536, x_535)) {
      var_modified_x_537(x_483);
    }
  }
  x_483->has_var_height_expr = true;
  x_483->var_height_expr = x_535;
  WriteMetric();
  auto x_540 = eval_expr_x_539(x_483);
  if (x_483->has_var_intrinsic_height_is_height) {
    auto x_541 = x_483->var_intrinsic_height_is_height;
    if (!EqualValue(x_541, x_540)) {
      var_modified_x_542(x_483);
    }
  }
  x_483->has_var_intrinsic_height_is_height = true;
  x_483->var_intrinsic_height_is_height = x_540;
  WriteMetric();
  auto x_545 = eval_expr_x_544(x_483);
  if (x_483->has_var_intrinsic_height_internal) {
    auto x_546 = x_483->var_intrinsic_height_internal;
    if (!EqualValue(x_546, x_545)) {
      var_modified_x_547(x_483);
    }
  }
  x_483->has_var_intrinsic_height_internal = true;
  x_483->var_intrinsic_height_internal = x_545;
  WriteMetric();
  auto x_550 = eval_expr_x_549(x_483);
  if (x_483->has_var_intrinsic_height_external) {
    auto x_551 = x_483->var_intrinsic_height_external;
    if (!EqualValue(x_551, x_550)) {
      var_modified_x_552(x_483);
    }
  }
  x_483->has_var_intrinsic_height_external = true;
  x_483->var_intrinsic_height_external = x_550;
  WriteMetric();
  auto x_555 = eval_expr_x_554(x_483);
  if (x_483->has_var_intrinsic_height_sum) {
    auto x_556 = x_483->var_intrinsic_height_sum;
    if (!EqualValue(x_556, x_555)) {
      var_modified_x_557(x_483);
    }
  }
  x_483->has_var_intrinsic_height_sum = true;
  x_483->var_intrinsic_height_sum = x_555;
  WriteMetric();
  auto x_560 = eval_expr_x_559(x_483);
  if (x_483->has_var_intrinsic_current_line_height) {
    auto x_561 = x_483->var_intrinsic_current_line_height;
    if (!EqualValue(x_561, x_560)) {
      var_modified_x_562(x_483);
    }
  }
  x_483->has_var_intrinsic_current_line_height = true;
  x_483->var_intrinsic_current_line_height = x_560;
  WriteMetric();
  auto x_565 = eval_expr_x_564(x_483);
  if (x_483->has_var_finished_intrinsic_height_sum) {
    auto x_566 = x_483->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_566, x_565)) {
      var_modified_x_567(x_483);
    }
  }
  x_483->has_var_finished_intrinsic_height_sum = true;
  x_483->var_finished_intrinsic_height_sum = x_565;
  return MakeUnit();
}
Unit eval_stmts_x_204(const auto &x_569) {
  WriteMetric();
  auto x_571 = eval_expr_x_570(x_569);
  if (x_569->has_var_display) {
    auto x_572 = x_569->var_display;
    if (!EqualValue(x_572, x_571)) {
      var_modified_x_573(x_569);
    }
  }
  x_569->has_var_display = true;
  x_569->var_display = x_571;
  WriteMetric();
  auto x_576 = eval_expr_x_575(x_569);
  if (x_569->has_var_position) {
    auto x_577 = x_569->var_position;
    if (!EqualValue(x_577, x_576)) {
      var_modified_x_578(x_569);
    }
  }
  x_569->has_var_position = true;
  x_569->var_position = x_576;
  WriteMetric();
  auto x_581 = eval_expr_x_580(x_569);
  if (x_569->has_var_flex_grow) {
    auto x_582 = x_569->var_flex_grow;
    if (!EqualValue(x_582, x_581)) {
      var_modified_x_583(x_569);
    }
  }
  x_569->has_var_flex_grow = true;
  x_569->var_flex_grow = x_581;
  WriteMetric();
  auto x_586 = eval_expr_x_585(x_569);
  if (x_569->has_var_flex_shrink) {
    auto x_587 = x_569->var_flex_shrink;
    if (!EqualValue(x_587, x_586)) {
      var_modified_x_588(x_569);
    }
  }
  x_569->has_var_flex_shrink = true;
  x_569->var_flex_shrink = x_586;
  WriteMetric();
  auto x_591 = eval_expr_x_590(x_569);
  if (x_569->has_var_flex_grow_sum) {
    auto x_592 = x_569->var_flex_grow_sum;
    if (!EqualValue(x_592, x_591)) {
      var_modified_x_593(x_569);
    }
  }
  x_569->has_var_flex_grow_sum = true;
  x_569->var_flex_grow_sum = x_591;
  WriteMetric();
  auto x_596 = eval_expr_x_595(x_569);
  if (x_569->has_var_flex_shrink_sum) {
    auto x_597 = x_569->var_flex_shrink_sum;
    if (!EqualValue(x_597, x_596)) {
      var_modified_x_598(x_569);
    }
  }
  x_569->has_var_flex_shrink_sum = true;
  x_569->var_flex_shrink_sum = x_596;
  WriteMetric();
  auto x_601 = eval_expr_x_600(x_569);
  if (x_569->has_var_flex_direction) {
    auto x_602 = x_569->var_flex_direction;
    if (!EqualValue(x_602, x_601)) {
      var_modified_x_603(x_569);
    }
  }
  x_569->has_var_flex_direction = true;
  x_569->var_flex_direction = x_601;
  WriteMetric();
  auto x_606 = eval_expr_x_605(x_569);
  if (x_569->has_var_is_flex_row) {
    auto x_607 = x_569->var_is_flex_row;
    if (!EqualValue(x_607, x_606)) {
      var_modified_x_608(x_569);
    }
  }
  x_569->has_var_is_flex_row = true;
  x_569->var_is_flex_row = x_606;
  WriteMetric();
  auto x_611 = eval_expr_x_610(x_569);
  if (x_569->has_var_is_flex_column) {
    auto x_612 = x_569->var_is_flex_column;
    if (!EqualValue(x_612, x_611)) {
      var_modified_x_613(x_569);
    }
  }
  x_569->has_var_is_flex_column = true;
  x_569->var_is_flex_column = x_611;
  WriteMetric();
  auto x_616 = eval_expr_x_615(x_569);
  if (x_569->has_var_width_attr_expr) {
    auto x_617 = x_569->var_width_attr_expr;
    if (!EqualValue(x_617, x_616)) {
      var_modified_x_618(x_569);
    }
  }
  x_569->has_var_width_attr_expr = true;
  x_569->var_width_attr_expr = x_616;
  WriteMetric();
  auto x_621 = eval_expr_x_620(x_569);
  if (x_569->has_var_has_width_attr) {
    auto x_622 = x_569->var_has_width_attr;
    if (!EqualValue(x_622, x_621)) {
      var_modified_x_623(x_569);
    }
  }
  x_569->has_var_has_width_attr = true;
  x_569->var_has_width_attr = x_621;
  WriteMetric();
  auto x_626 = eval_expr_x_625(x_569);
  if (x_569->has_var_height_attr_expr) {
    auto x_627 = x_569->var_height_attr_expr;
    if (!EqualValue(x_627, x_626)) {
      var_modified_x_628(x_569);
    }
  }
  x_569->has_var_height_attr_expr = true;
  x_569->var_height_attr_expr = x_626;
  WriteMetric();
  auto x_631 = eval_expr_x_630(x_569);
  if (x_569->has_var_has_height_attr) {
    auto x_632 = x_569->var_has_height_attr;
    if (!EqualValue(x_632, x_631)) {
      var_modified_x_633(x_569);
    }
  }
  x_569->has_var_has_height_attr = true;
  x_569->var_has_height_attr = x_631;
  WriteMetric();
  auto x_636 = eval_expr_x_635(x_569);
  if (x_569->has_var_is_svg_block) {
    auto x_637 = x_569->var_is_svg_block;
    if (!EqualValue(x_637, x_636)) {
      var_modified_x_638(x_569);
    }
  }
  x_569->has_var_is_svg_block = true;
  x_569->var_is_svg_block = x_636;
  WriteMetric();
  auto x_641 = eval_expr_x_640(x_569);
  if (x_569->has_var_inside_svg) {
    auto x_642 = x_569->var_inside_svg;
    if (!EqualValue(x_642, x_641)) {
      var_modified_x_643(x_569);
    }
  }
  x_569->has_var_inside_svg = true;
  x_569->var_inside_svg = x_641;
  WriteMetric();
  auto x_646 = eval_expr_x_645(x_569);
  if (x_569->has_var_disabled) {
    auto x_647 = x_569->var_disabled;
    if (!EqualValue(x_647, x_646)) {
      var_modified_x_648(x_569);
    }
  }
  x_569->has_var_disabled = true;
  x_569->var_disabled = x_646;
  WriteMetric();
  auto x_651 = eval_expr_x_650(x_569);
  if (x_569->has_var_visible) {
    auto x_652 = x_569->var_visible;
    if (!EqualValue(x_652, x_651)) {
      var_modified_x_653(x_569);
    }
  }
  x_569->has_var_visible = true;
  x_569->var_visible = x_651;
  WriteMetric();
  auto x_656 = eval_expr_x_655(x_569);
  if (x_569->has_var_line_break) {
    auto x_657 = x_569->var_line_break;
    if (!EqualValue(x_657, x_656)) {
      var_modified_x_658(x_569);
    }
  }
  x_569->has_var_line_break = true;
  x_569->var_line_break = x_656;
  return MakeUnit();
}
Unit eval_stmts_x_201(const auto &x_660) {
  WriteMetric();
  auto x_662 = eval_expr_x_661(x_660);
  if (x_660->has_var_box_width) {
    auto x_663 = x_660->var_box_width;
    if (!EqualValue(x_663, x_662)) {
      var_modified_x_664(x_660);
    }
  }
  x_660->has_var_box_width = true;
  x_660->var_box_width = x_662;
  WriteMetric();
  auto x_667 = eval_expr_x_666(x_660);
  if (x_660->has_var_box_height) {
    auto x_668 = x_660->var_box_height;
    if (!EqualValue(x_668, x_667)) {
      var_modified_x_669(x_660);
    }
  }
  x_660->has_var_box_height = true;
  x_660->var_box_height = x_667;
  WriteMetric();
  auto x_672 = eval_expr_x_671(x_660);
  if (x_660->has_var_left_over) {
    auto x_673 = x_660->var_left_over;
    if (!EqualValue(x_673, x_672)) {
      var_modified_x_674(x_660);
    }
  }
  x_660->has_var_left_over = true;
  x_660->var_left_over = x_672;
  WriteMetric();
  auto x_677 = eval_expr_x_676(x_660);
  if (x_660->has_var_flex_amount) {
    auto x_678 = x_660->var_flex_amount;
    if (!EqualValue(x_678, x_677)) {
      var_modified_x_679(x_660);
    }
  }
  x_660->has_var_flex_amount = true;
  x_660->var_flex_amount = x_677;
  WriteMetric();
  auto x_682 = eval_expr_x_681(x_660);
  if (x_660->has_var_flex_unit) {
    auto x_683 = x_660->var_flex_unit;
    if (!EqualValue(x_683, x_682)) {
      var_modified_x_684(x_660);
    }
  }
  x_660->has_var_flex_unit = true;
  x_660->var_flex_unit = x_682;
  WriteMetric();
  auto x_687 = eval_expr_x_686(x_660);
  if (x_660->has_var_x) {
    auto x_688 = x_660->var_x;
    if (!EqualValue(x_688, x_687)) {
      var_modified_x_689(x_660);
    }
  }
  x_660->has_var_x = true;
  x_660->var_x = x_687;
  WriteMetric();
  auto x_692 = eval_expr_x_691(x_660);
  if (x_660->has_var_width_internal) {
    auto x_693 = x_660->var_width_internal;
    if (!EqualValue(x_693, x_692)) {
      var_modified_x_694(x_660);
    }
  }
  x_660->has_var_width_internal = true;
  x_660->var_width_internal = x_692;
  WriteMetric();
  auto x_697 = eval_expr_x_696(x_660);
  if (x_660->has_var_width_external) {
    auto x_698 = x_660->var_width_external;
    if (!EqualValue(x_698, x_697)) {
      var_modified_x_699(x_660);
    }
  }
  x_660->has_var_width_external = true;
  x_660->var_width_external = x_697;
  WriteMetric();
  auto x_702 = eval_expr_x_701(x_660);
  if (x_660->has_var_y) {
    auto x_703 = x_660->var_y;
    if (!EqualValue(x_703, x_702)) {
      var_modified_x_704(x_660);
    }
  }
  x_660->has_var_y = true;
  x_660->var_y = x_702;
  WriteMetric();
  auto x_707 = eval_expr_x_706(x_660);
  if (x_660->has_var_height_internal) {
    auto x_708 = x_660->var_height_internal;
    if (!EqualValue(x_708, x_707)) {
      var_modified_x_709(x_660);
    }
  }
  x_660->has_var_height_internal = true;
  x_660->var_height_internal = x_707;
  WriteMetric();
  auto x_712 = eval_expr_x_711(x_660);
  if (x_660->has_var_height_external) {
    auto x_713 = x_660->var_height_external;
    if (!EqualValue(x_713, x_712)) {
      var_modified_x_714(x_660);
    }
  }
  x_660->has_var_height_external = true;
  x_660->var_height_external = x_712;
  WriteMetric();
  auto x_717 = eval_expr_x_716(x_660);
  if (x_660->has_var_line_height) {
    auto x_718 = x_660->var_line_height;
    if (!EqualValue(x_718, x_717)) {
      var_modified_x_719(x_660);
    }
  }
  x_660->has_var_line_height = true;
  x_660->var_line_height = x_717;
  return MakeUnit();
}
Unit x_50(const auto &x_51, const auto &x_52, const auto &x_53) {
  auto x_54 = ListHeadExn(x_51);
  auto x_55 = ListTailExn(x_51);
  if (ListIsEmpty(x_55)) {
    auto x_56 = ListSplitN(x_52->children, x_54);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_52->children, x_54)), layout_size_x_3(x_53)));
    x_52->children = ListAppend(Zro(x_56), Cons(x_53, ListTailExn(Fst(x_56))));
    return MakeUnit();
  } else {
    return x_50(x_55, ListNthExn(x_52->children, x_54), x_53);
  }
}
Unit replace_layout_node_x_49(const auto &x_51, const auto &x_52, const auto &x_53) { return x_50(x_51, x_52, x_53); }
Unit x_57(const auto &x_58, const auto &x_59, const auto &x_60) {
  auto x_61 = ListHeadExn(x_58);
  auto x_62 = ListTailExn(x_58);
  if (ListIsEmpty(x_62)) {
    OutputChangeMetric(layout_size_x_3(x_60));
    auto x_63 = ListSplitN(x_59->children, x_61);
    x_59->children = ListAppend(Zro(x_63), Cons(x_60, Fst(x_63)));
    return MakeUnit();
  } else {
    return x_57(x_62, ListNthExn(x_59->children, x_61), x_60);
  }
}
Unit add_layout_node_x_47(const auto &x_58, const auto &x_59, const auto &x_60) { return x_57(x_58, x_59, x_60); }
Unit x_64(const auto &x_65, const auto &x_66, const auto &x_67) {
  auto x_68 = ListHeadExn(x_65);
  auto x_69 = ListTailExn(x_65);
  if (ListIsEmpty(x_69)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_66->children, x_68)));
    auto x_70 = ListSplitN(x_66->children, x_68);
    x_66->children = ListAppend(Zro(x_70), ListTailExn(Fst(x_70)));
    return MakeUnit();
  } else {
    return x_64(x_69, ListNthExn(x_66->children, x_68), x_67);
  }
}
Unit remove_layout_node_x_45(const auto &x_65, const auto &x_66, const auto &x_67) { return x_64(x_65, x_66, x_67); }
Unit x_71(const auto &x_72, const auto &x_73, const auto &x_74) {
  return ListMatch(
      x_72,
      [&](const auto &x_77) {
        auto x_78 = Zro(x_74);
        auto x_79 = Zro(x_78);
        auto x_80 = Fst(x_78);
        auto x_81 = Fst(x_74);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3065 = x_79;
        if (x_3065 == "attributes") {
          std::string x_3066 = x_80;
          if (x_3066 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_3066 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_height"), x_81);
            return MakeUnit();
          } else if (x_3066 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_width"), x_81);
            return MakeUnit();
          } else if (x_3066 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_3066 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("viewBox"), x_81);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3065 == "properties") {
          std::string x_3067 = x_80;
          if (x_3067 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_3067 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-grow"), x_81);
            return MakeUnit();
          } else if (x_3067 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_3067 == "display") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("display"), x_81);
            return MakeUnit();
          } else if (x_3067 == "position") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("position"), x_81);
            return MakeUnit();
          } else if (x_3067 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-shrink"), x_81);
            return MakeUnit();
          } else if (x_3067 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-direction"), x_81);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_75, const auto &x_76) { return x_71(x_76, ListNthExn(x_73->children, x_75), x_74); });
}
Unit insert_value_x_43(const auto &x_72, const auto &x_73, const auto &x_74) { return x_71(x_72, x_73, x_74); }
Unit x_82(const auto &x_83, const auto &x_84, const auto &x_85) {
  return ListMatch(
      x_83,
      [&](const auto &x_88) {
        auto x_89 = Zro(x_85);
        auto x_90 = Fst(x_85);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3068 = x_89;
        if (x_3068 == "attributes") {
          std::string x_3069 = x_90;
          if (x_3069 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("width"));
            return MakeUnit();
          } else if (x_3069 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_height"));
            return MakeUnit();
          } else if (x_3069 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_width"));
            return MakeUnit();
          } else if (x_3069 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("height"));
            return MakeUnit();
          } else if (x_3069 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("viewBox"));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3068 == "properties") {
          std::string x_3070 = x_90;
          if (x_3070 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("width"));
            return MakeUnit();
          } else if (x_3070 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-grow"));
            return MakeUnit();
          } else if (x_3070 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("height"));
            return MakeUnit();
          } else if (x_3070 == "display") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("display"));
            return MakeUnit();
          } else if (x_3070 == "position") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("position"));
            return MakeUnit();
          } else if (x_3070 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-shrink"));
            return MakeUnit();
          } else if (x_3070 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-direction"));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_86, const auto &x_87) { return x_82(x_87, ListNthExn(x_84->children, x_86), x_85); });
}
Unit delete_value_x_41(const auto &x_83, const auto &x_84, const auto &x_85) { return x_82(x_83, x_84, x_85); }
Unit x_91(const auto &x_92, const auto &x_93, const auto &x_94) {
  return ListMatch(
      x_92,
      [&](const auto &x_97) {
        auto x_98 = Zro(x_94);
        auto x_99 = Zro(x_98);
        auto x_100 = Fst(x_98);
        auto x_101 = Fst(x_94);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3071 = x_99;
        if (x_3071 == "attributes") {
          std::string x_3072 = x_100;
          if (x_3072 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_3072 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_height"), x_101);
            return MakeUnit();
          } else if (x_3072 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_width"), x_101);
            return MakeUnit();
          } else if (x_3072 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_3072 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("viewBox"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("viewBox"), x_101);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3071 == "properties") {
          std::string x_3073 = x_100;
          if (x_3073 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_3073 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-grow"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-grow"), x_101);
            return MakeUnit();
          } else if (x_3073 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_3073 == "display") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("display"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("display"), x_101);
            return MakeUnit();
          } else if (x_3073 == "position") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("position"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("position"), x_101);
            return MakeUnit();
          } else if (x_3073 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-shrink"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-shrink"), x_101);
            return MakeUnit();
          } else if (x_3073 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-direction"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-direction"), x_101);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_95, const auto &x_96) { return x_91(x_96, ListNthExn(x_93->children, x_95), x_94); });
}
Unit replace_value_x_39(const auto &x_92, const auto &x_93, const auto &x_94) { return x_91(x_92, x_93, x_94); }
Unit x_102(const auto &x_103, const auto &x_104, const auto &x_105) {
  auto x_106 = ListHeadExn(x_103);
  auto x_107 = ListTailExn(x_103);
  if (ListIsEmpty(x_107)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_104->children, x_106)), node_size_x_4(x_105)));
    auto x_108 = ListSplitN(x_104->children, x_106);
    auto x_109 = Zro(x_108);
    auto x_110 = Fst(x_108);
    auto x_111 = ListHeadExn(x_110);
    auto x_112 = ListTailExn(x_110);
    OptionMatch(
        x_111->prev, [&](const auto &x_114) { return MakeUnit(); },
        [&](const auto &x_113) {
          x_113->next = ToPath(x_111->next);
          return MakeUnit();
        });
    OptionMatch(
        x_111->next, [&](const auto &x_116) { return MakeUnit(); },
        [&](const auto &x_115) {
          x_115->prev = ToPath(x_111->prev);
          return MakeUnit();
        });
    x_104->children = ListAppend(x_109, x_112);
    if (ListIsEmpty(x_109)) {
      x_104->first = ToPath(ListHead(x_112));
    }
    if (ListIsEmpty(x_112)) {
      x_104->last = ToPath(ListLast(x_109));
    }
    MakeUnit();
    auto x_123 = ListSplitN(x_104->children, x_106);
    auto x_124 = Zro(x_123);
    auto x_125 = Fst(x_123);
    x_104->children = ListAppend(x_124, Cons(x_105, x_125));
    if (ListIsEmpty(x_124)) {
      x_104->first = x_105.get();
    }
    if (ListIsEmpty(x_125)) {
      x_104->last = x_105.get();
    }
    OptionMatch(
        ListLast(x_124),
        [&](const auto &x_127) {
          x_105->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_126) {
          x_105->prev = x_126.get();
          x_126->next = x_105.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_125),
        [&](const auto &x_129) {
          x_105->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_128) {
          x_105->next = x_128.get();
          x_128->prev = x_105.get();
          return MakeUnit();
        });
    x_105->parent = x_104.get();
    MakeUnit();
    return MakeUnit();
  } else {
    return x_102(x_107, ListNthExn(x_104->children, x_106), x_105);
  }
}
Unit replace_node_x_37(const auto &x_103, const auto &x_104, const auto &x_105) { return x_102(x_103, x_104, x_105); }
Unit x_136(const auto &x_137) {
  ListIter2(x_137->children, [&](const auto &x_138, const auto &x_139) {
    x_138->parent = x_137.get();
    x_139->parent = x_137.get();
    x_138->next = x_139.get();
    x_139->prev = x_138.get();
    x_136(x_138);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_137->children),
      [&](const auto &x_141) {
        x_137->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_140) {
        x_137->first = x_140.get();
        x_140->parent = x_137.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_137->children),
      [&](const auto &x_143) {
        x_137->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_142) {
        x_137->last = x_142.get();
        x_142->parent = x_137.get();
        x_136(x_142);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_35(const auto &x_137) { return x_136(x_137); }
Unit x_144(const auto &x_145, const auto &x_146, const auto &x_147) {
  auto x_148 = ListHeadExn(x_145);
  auto x_149 = ListTailExn(x_145);
  if (ListIsEmpty(x_149)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_146->children, x_148)));
    auto x_150 = ListSplitN(x_146->children, x_148);
    auto x_151 = Zro(x_150);
    auto x_152 = Fst(x_150);
    auto x_153 = ListHeadExn(x_152);
    auto x_154 = ListTailExn(x_152);
    OptionMatch(
        x_153->prev, [&](const auto &x_156) { return MakeUnit(); },
        [&](const auto &x_155) {
          x_155->next = ToPath(x_153->next);
          return MakeUnit();
        });
    OptionMatch(
        x_153->next, [&](const auto &x_158) { return MakeUnit(); },
        [&](const auto &x_157) {
          x_157->prev = ToPath(x_153->prev);
          return MakeUnit();
        });
    x_146->children = ListAppend(x_151, x_154);
    if (ListIsEmpty(x_151)) {
      x_146->first = ToPath(ListHead(x_154));
    }
    if (ListIsEmpty(x_154)) {
      x_146->last = ToPath(ListLast(x_151));
    }
    return MakeUnit();
  } else {
    return x_144(x_149, ListNthExn(x_146->children, x_148), x_147);
  }
}
Unit remove_node_x_33(const auto &x_145, const auto &x_146, const auto &x_147) { return x_144(x_145, x_146, x_147); }
Unit x_165(const auto &x_166) {
  ListIter2(x_166->children, [&](const auto &x_167, const auto &x_168) {
    x_167->parent = x_166.get();
    x_168->parent = x_166.get();
    x_167->next = x_168.get();
    x_168->prev = x_167.get();
    x_165(x_167);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_166->children),
      [&](const auto &x_170) {
        x_166->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_169) {
        x_166->first = x_169.get();
        x_169->parent = x_166.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_166->children),
      [&](const auto &x_172) {
        x_166->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_171) {
        x_166->last = x_171.get();
        x_171->parent = x_166.get();
        x_165(x_171);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_30(const auto &x_166) { return x_165(x_166); }
Unit x_173(const auto &x_174, const auto &x_175, const auto &x_176) {
  auto x_177 = ListHeadExn(x_174);
  auto x_178 = ListTailExn(x_174);
  if (ListIsEmpty(x_178)) {
    InputChangeMetric(node_size_x_4(x_176));
    auto x_179 = ListSplitN(x_175->children, x_177);
    auto x_180 = Zro(x_179);
    auto x_181 = Fst(x_179);
    x_175->children = ListAppend(x_180, Cons(x_176, x_181));
    if (ListIsEmpty(x_180)) {
      x_175->first = x_176.get();
    }
    if (ListIsEmpty(x_181)) {
      x_175->last = x_176.get();
    }
    OptionMatch(
        ListLast(x_180),
        [&](const auto &x_183) {
          x_176->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_182) {
          x_176->prev = x_182.get();
          x_182->next = x_176.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_181),
        [&](const auto &x_185) {
          x_176->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_184) {
          x_176->next = x_184.get();
          x_184->prev = x_176.get();
          return MakeUnit();
        });
    x_176->parent = x_175.get();
    return MakeUnit();
  } else {
    return x_173(x_178, ListNthExn(x_175->children, x_177), x_176);
  }
}
Unit add_node_x_28(const auto &x_174, const auto &x_175, const auto &x_176) { return x_173(x_174, x_175, x_176); }
Unit x_192(const auto &x_193) {
  ListIter2(x_193->children, [&](const auto &x_194, const auto &x_195) {
    x_194->parent = x_193.get();
    x_195->parent = x_193.get();
    x_194->next = x_195.get();
    x_195->prev = x_194.get();
    x_192(x_194);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_193->children),
      [&](const auto &x_197) {
        x_193->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_196) {
        x_193->first = x_196.get();
        x_196->parent = x_193.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_193->children),
      [&](const auto &x_199) {
        x_193->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_198) {
        x_193->last = x_198.get();
        x_198->parent = x_193.get();
        x_192(x_198);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_26(const auto &x_193) { return x_192(x_193); }
Unit eval_stmts_x_22(const auto &x_200) {
  eval_stmts_x_201(x_200);
  ListIter(x_200->children, [&](const auto &x_202) { return eval_stmts_x_22(x_202); });
  return MakeUnit();
}
Unit eval_stmts_x_21(const auto &x_203) {
  eval_stmts_x_204(x_203);
  ListIter(x_203->children, [&](const auto &x_205) { return eval_stmts_x_21(x_205); });
  eval_stmts_x_206(x_203);
  return MakeUnit();
}
Unit x_207(const auto &x_208) {
  ListIter2(x_208->children, [&](const auto &x_209, const auto &x_210) {
    x_209->parent = x_208.get();
    x_210->parent = x_208.get();
    x_209->next = x_210.get();
    x_210->prev = x_209.get();
    x_207(x_209);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_208->children),
      [&](const auto &x_212) {
        x_208->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_211) {
        x_208->first = x_211.get();
        x_211->parent = x_208.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_208->children),
      [&](const auto &x_214) {
        x_208->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_213) {
        x_208->last = x_213.get();
        x_213->parent = x_208.get();
        x_207(x_213);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_19(const auto &x_208) { return x_207(x_208); }
Unit eval_stmts_x_17(const auto &x_215) {
  eval_stmts_x_216(x_215);
  ListIter(x_215->children, [&](const auto &x_217) { return eval_stmts_x_17(x_217); });
  return MakeUnit();
}
Unit eval_stmts_x_16(const auto &x_218) {
  eval_stmts_x_219(x_218);
  ListIter(x_218->children, [&](const auto &x_220) { return eval_stmts_x_16(x_220); });
  eval_stmts_x_221(x_218);
  return MakeUnit();
}
Unit x_222(const auto &x_223) {
  ListIter2(x_223->children, [&](const auto &x_224, const auto &x_225) {
    x_224->parent = x_223.get();
    x_225->parent = x_223.get();
    x_224->next = x_225.get();
    x_225->prev = x_224.get();
    x_222(x_224);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_223->children),
      [&](const auto &x_227) {
        x_223->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_226) {
        x_223->first = x_226.get();
        x_226->parent = x_223.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_223->children),
      [&](const auto &x_229) {
        x_223->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_228) {
        x_223->last = x_228.get();
        x_228->parent = x_223.get();
        x_222(x_228);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_223) { return x_222(x_223); }
int64_t x_230(const auto &x_231) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_231->children, [&](const auto &x_232) { return x_230(x_232); }));
}
int64_t node_size_x_4(const auto &x_231) { return x_230(x_231); }
int64_t x_233(const auto &x_234) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_234->children, [&](const auto &x_235) { return x_233(x_235); }));
}
int64_t layout_size_x_3(const auto &x_234) { return x_233(x_234); }
LayoutNode x_236(const auto &x_237) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember(std::string("children"), x_237)), [&](const auto &x_238) { return x_236(x_238); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_237) { return x_236(x_237); }
Node x_239(const auto &x_240) {
  return MakeNode(x_240->name, x_240->attr, x_240->prop, x_240->extern_id,
                  ListMap(x_240->children, [&](const auto &x_241) { return x_239(x_241); }));
}
Node node_to_fs_node_x_1(const auto &x_240) { return x_239(x_240); }
Node x_242(const auto &x_243) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_243)), JsonToDict(JsonMember(std::string("attributes"), x_243)),
      JsonToDict(JsonMember(std::string("properties"), x_243)), JsonToInt(JsonMember(std::string("id"), x_243)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_243)), [&](const auto &x_244) { return x_242(x_244); }));
}
Node json_to_node_aux_x_0(const auto &x_243) { return x_242(x_243); }
int main() {
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_5) {
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
        auto x_3074 = FreshJson();
        WriteJson(x_3074, std::string("name"), std::string("FS_D"));
        WriteJson(x_3074, std::string("diff_num"), ReadRef(x_7));
        WriteJson(x_3074, std::string("read_count"), MetricReadCount());
        WriteJson(x_3074, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_3074, std::string("write_count"), MetricWriteCount());
        WriteJson(x_3074, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_3074, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_3074, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_3074, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_3074, std::string("html"), std::string(""));
        WriteJson(x_3074, std::string("command"), StackToList(x_11));
        return x_3074;
      }());
      OutputString(x_5, std::string("\n"));
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      auto x_20 = [&]() {
        auto x_18 = node_to_fs_node_x_1(x_14);
        x_18->parent = nullptr;
        x_18->prev = nullptr;
        x_18->next = nullptr;
        set_children_relation_x_19(x_18);
        return x_18;
      }();
      eval_stmts_x_21(x_20);
      eval_stmts_x_22(x_20);
      AssertNodeValueEqual(x_14, x_20);
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_6, [&](const auto &x_23) {
        auto x_24 = JsonOfString(x_23);
        PushStack(x_11, x_24);
        std::string x_3076 = JsonToString(JsonMember(std::string("name"), x_24));
        if (x_3076 == "add") {
          return add_node_x_28(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                       [&](const auto &x_27) { return JsonToInt(x_27); }),
                               x_14, [&]() {
                                 auto x_25 = json_to_node_aux_x_0(JsonMember(std::string("node"), x_24));
                                 x_25->parent = nullptr;
                                 x_25->prev = nullptr;
                                 x_25->next = nullptr;
                                 set_children_relation_x_26(x_25);
                                 return x_25;
                               }());
        } else if (x_3076 == "recalculate") {
          eval_stmts_x_16(x_14);
          eval_stmts_x_17(x_14);
          JsonToChannel(x_5, [&]() {
            auto x_3075 = FreshJson();
            WriteJson(x_3075, std::string("name"), std::string("FS_D"));
            WriteJson(x_3075, std::string("diff_num"), ReadRef(x_7));
            WriteJson(x_3075, std::string("read_count"), MetricReadCount());
            WriteJson(x_3075, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_3075, std::string("write_count"), MetricWriteCount());
            WriteJson(x_3075, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_3075, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_3075, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_3075, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_3075, std::string("html"), std::string(""));
            WriteJson(x_3075, std::string("command"), StackToList(x_11));
            return x_3075;
          }());
          OutputString(x_5, std::string("\n"));
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          auto x_31 = [&]() {
            auto x_29 = node_to_fs_node_x_1(x_14);
            x_29->parent = nullptr;
            x_29->prev = nullptr;
            x_29->next = nullptr;
            set_children_relation_x_30(x_29);
            return x_29;
          }();
          eval_stmts_x_21(x_31);
          eval_stmts_x_22(x_31);
          AssertNodeValueEqual(x_14, x_31);
          ResetMetric();
          return MakeUnit();
        } else if (x_3076 == "remove") {
          return remove_node_x_33(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                          [&](const auto &x_32) { return JsonToInt(x_32); }),
                                  x_14, MakeUnit());
        } else if (x_3076 == "replace") {
          return replace_node_x_37(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                           [&](const auto &x_36) { return JsonToInt(x_36); }),
                                   x_14, [&]() {
                                     auto x_34 = json_to_node_aux_x_0(JsonMember(std::string("node"), x_24));
                                     x_34->parent = nullptr;
                                     x_34->prev = nullptr;
                                     x_34->next = nullptr;
                                     set_children_relation_x_35(x_34);
                                     return x_34;
                                   }());
        } else if (x_3076 == "replace_value") {
          return replace_value_x_39(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                            [&](const auto &x_38) { return JsonToInt(x_38); }),
                                    x_14,
                                    MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_24)),
                                                      JsonToString(JsonMember(std::string("key"), x_24))),
                                             JsonToValue(JsonMember(std::string("value"), x_24))));
        } else if (x_3076 == "delete_value") {
          return delete_value_x_41(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                           [&](const auto &x_40) { return JsonToInt(x_40); }),
                                   x_14,
                                   MakePair(JsonToString(JsonMember(std::string("type"), x_24)),
                                            JsonToString(JsonMember(std::string("key"), x_24))));
        } else if (x_3076 == "insert_value") {
          return insert_value_x_43(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                           [&](const auto &x_42) { return JsonToInt(x_42); }),
                                   x_14,
                                   MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_24)),
                                                     JsonToString(JsonMember(std::string("key"), x_24))),
                                            JsonToValue(JsonMember(std::string("value"), x_24))));
        } else if (x_3076 == "layout_remove") {
          return remove_layout_node_x_45(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                                 [&](const auto &x_44) { return JsonToInt(x_44); }),
                                         x_15, MakeUnit());
        } else if (x_3076 == "layout_add") {
          return add_layout_node_x_47(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                              [&](const auto &x_46) { return JsonToInt(x_46); }),
                                      x_15, json_to_layout_node_x_2(JsonMember(std::string("node"), x_24)));
        } else if (x_3076 == "layout_replace") {
          return replace_layout_node_x_49(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                                  [&](const auto &x_48) { return JsonToInt(x_48); }),
                                          x_15, json_to_layout_node_x_2(JsonMember(std::string("node"), x_24)));
        } else if (x_3076 == "layout_info_changed") {
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