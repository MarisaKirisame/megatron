#include "header.h"
auto var_modified_x_923(const auto &x_925) { return MakeUnit(); }
auto eval_expr_x_920(const auto &x_932) {
  if ((x_932->prev == nullptr) && not((*(x_932->prev)).var_line_break)) {
    return max(x_932.var_height_external, (*(x_932->prev)).var_line_height);
  } else {
    return x_932.var_height_external;
  }
}
auto var_modified_x_918(const auto &x_949) { return MakeUnit(); }
auto eval_expr_x_915(const auto &x_952) {
  if (eq(x_952.var_position, "absolute")) {
    return 0.;
  } else {
    return x_952.var_height_internal;
  }
}
auto var_modified_x_913(const auto &x_961) { return MakeUnit(); }
auto eval_expr_x_910(const auto &x_964) {
  if (x_964.var_intrinsic_height_is_height) {
    return x_964.var_intrinsic_height_internal;
  } else {
    if ((x_964->parent == nullptr) && (*(x_964->parent)).var_is_flex_column) {
      return plus(x_964.var_intrinsic_height_internal, mult(x_964.var_flex_amount, (*(x_964->parent)).var_flex_unit));
    } else {
      if (has_suffix(x_964.var_height_expr, "%")) {
        return mult(x_964.var_box_height, divide(string_to_float(strip_suffix(x_964.var_height_expr, "%")), 100.));
      } else {
        assert(eq(x_964.var_height_expr, "fit-content"));
        return max(x_964.var_box_height, x_964.var_intrinsic_height_internal);
      }
    }
  }
}
auto var_modified_x_908(const auto &x_1017) { return MakeUnit(); }
auto eval_expr_x_905(const auto &x_1025) {
  if (x_1025->prev == nullptr) {
    if (x_1025.var_line_break || (*(x_1025->prev)).var_line_break) {
      return plus((*(x_1025->prev)).var_y, (*(x_1025->prev)).var_line_height);
    } else {
      return (*(x_1025->prev)).var_y;
    }
  } else {
    if (x_1025->parent == nullptr) {
      return (*(x_1025->parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_903(const auto &x_1050) { return MakeUnit(); }
auto eval_expr_x_900(const auto &x_1054) {
  if (eq(x_1054.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1054.var_width_internal;
  }
}
auto var_modified_x_898(const auto &x_1063) { return MakeUnit(); }
auto eval_expr_x_895(const auto &x_1066) {
  if (x_1066.var_intrinsic_width_is_width) {
    return x_1066.var_intrinsic_width_internal;
  } else {
    if ((x_1066->parent == nullptr) && (*(x_1066->parent)).var_is_flex_row) {
      return plus(x_1066.var_intrinsic_width_internal, mult(x_1066.var_flex_amount, (*(x_1066->parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1066.var_width_expr, "%")) {
        return mult(x_1066.var_box_width, divide(string_to_float(strip_suffix(x_1066.var_width_expr, "%")), 100.));
      } else {
        assert(eq(x_1066.var_width_expr, "fit-content"));
        return max(x_1066.var_box_width, x_1066.var_intrinsic_width_internal);
      }
    }
  }
}
auto var_modified_x_893(const auto &x_1119) { return MakeUnit(); }
auto eval_expr_x_890(const auto &x_1124) {
  if (x_1124->prev == nullptr) {
    if (x_1124.var_line_break || (*(x_1124->prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_1124->prev)).var_x, (*(x_1124->prev)).var_width_external);
    }
  } else {
    if (x_1124->parent == nullptr) {
      return (*(x_1124->parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_888(const auto &x_1145) { return MakeUnit(); }
auto eval_expr_x_885(const auto &x_1148) {
  if (gt(x_1148.var_left_over, 0.)) {
    return divide(x_1148.var_left_over, x_1148.var_flex_grow_sum);
  } else {
    return divide(x_1148.var_left_over, x_1148.var_flex_shrink_sum);
  }
}
auto var_modified_x_883(const auto &x_1169) { return MakeUnit(); }
auto eval_expr_x_880(const auto &x_1172) {
  if ((x_1172->parent == nullptr) && gt((*(x_1172->parent)).var_left_over, 0.)) {
    return x_1172.var_flex_grow;
  } else {
    return x_1172.var_flex_shrink;
  }
}
auto var_modified_x_878(const auto &x_1185) { return MakeUnit(); }
auto eval_expr_x_875(const auto &x_1190) {
  if (x_1190.var_is_flex_row) {
    return minus(x_1190.var_box_width, (x_1190->last == nullptr) ? ((*(x_1190->last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_1190.var_box_height,
                 (x_1190->last == nullptr) ? ((*(x_1190->last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_873(const auto &x_1211) { return MakeUnit(); }
auto eval_expr_x_870(const auto &x_1215) {
  if (x_1215->parent == nullptr) {
    return (*(x_1215->parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_868(const auto &x_1220) { return MakeUnit(); }
auto eval_expr_x_865(const auto &x_1224) {
  if (x_1224->parent == nullptr) {
    return (*(x_1224->parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_862(const auto &x_1229) { return MakeUnit(); }
auto eval_expr_x_859(const auto &x_1247) {
  if (eq(x_1247.var_display, "none")) {
    return false;
  } else {
    if (eq(x_1247.var_position, "absolute")) {
      return false;
    } else {
      if ((x_1247->parent == nullptr) &&
          (eq((*(x_1247->parent)).var_display, "flex") || eq((*(x_1247->parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_1247.var_display, "block")) {
          return true;
        } else {
          if (eq(x_1247.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_1247.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_1247.var_display, "flex")) {
                if (eq(HashtblForceFind((x_1247->prop), "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind((x_1247->prop), "flex-direction"), "column")) {
                    return true;
                  } else {
                    assert(eq(HashtblForceFind((x_1247->prop), "flex-direction"), "column-reverse"));
                    return true;
                  }
                }
              } else {
                if (eq(x_1247.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_1247.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_1247.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_1247.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_1247.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_1247.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_1247.var_display, "list-item")) {
                              return true;
                            } else {
                              assert(eq(x_1247.var_display, "grid"));
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
auto var_modified_x_857(const auto &x_1324) { return MakeUnit(); }
auto eval_expr_x_854(const auto &x_1326) {
  return ((not(x_1326->parent == nullptr) || (*(x_1326->parent)).var_visible) &&
          (neq(x_1326.var_display, "none") && (not(x_1326.var_inside_svg) && not(x_1326.var_disabled))));
}
auto var_modified_x_852(const auto &x_1343) { return MakeUnit(); }
auto eval_expr_x_849(const auto &x_1351) {
  if (eq((x_1351->name), "NOSCRIPT")) {
    return true;
  } else {
    return ((x_1351->parent == nullptr) && (*(x_1351->parent)).var_disabled);
  }
}
auto var_modified_x_847(const auto &x_1356) { return MakeUnit(); }
auto eval_expr_x_844(const auto &x_1364) {
  return ((x_1364->parent == nullptr) && ((*(x_1364->parent)).var_is_svg_block || (*(x_1364->parent)).var_inside_svg));
}
auto var_modified_x_842(const auto &x_1373) { return MakeUnit(); }
auto eval_expr_x_839(const auto &x_1375) { return eq((x_1375->name), "svg"); }
auto var_modified_x_837(const auto &x_1376) { return MakeUnit(); }
auto eval_expr_x_834(const auto &x_1385) { return neq(x_1385.var_height_attr_expr, "auto"); }
auto var_modified_x_832(const auto &x_1390) { return MakeUnit(); }
auto eval_expr_x_829(const auto &x_1398) {
  if (not(IsSome(HashtblFind((x_1398->attr), "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind((x_1398->attr), "height")) ||
        has_suffix(HashtblForceFind((x_1398->attr), "height"), "%")) {
      return HashtblForceFind((x_1398->attr), "height");
    } else {
      assert(eq(HashtblForceFind((x_1398->attr), "height"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_827(const auto &x_1409) { return MakeUnit(); }
auto eval_expr_x_824(const auto &x_1419) { return neq(x_1419.var_width_attr_expr, "auto"); }
auto var_modified_x_822(const auto &x_1424) { return MakeUnit(); }
auto eval_expr_x_819(const auto &x_1432) {
  if (not(IsSome(HashtblFind((x_1432->attr), "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind((x_1432->attr), "width")) ||
        has_suffix(HashtblForceFind((x_1432->attr), "width"), "%")) {
      return HashtblForceFind((x_1432->attr), "width");
    } else {
      assert(eq(HashtblForceFind((x_1432->attr), "width"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_817(const auto &x_1443) { return MakeUnit(); }
auto eval_expr_x_814(const auto &x_1446) {
  if ((x_1446->parent == nullptr) &&
      (eq((*(x_1446->parent)).var_display, "flex") || eq((*(x_1446->parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1446->parent)).var_flex_direction, "column") ||
        eq((*(x_1446->parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      assert(eq((*(x_1446->parent)).var_flex_direction, "row"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_812(const auto &x_1471) { return MakeUnit(); }
auto eval_expr_x_809(const auto &x_1475) {
  if ((x_1475->parent == nullptr) &&
      (eq((*(x_1475->parent)).var_display, "flex") || eq((*(x_1475->parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1475->parent)).var_flex_direction, "row")) {
      return true;
    } else {
      assert(eq((*(x_1475->parent)).var_flex_direction, "column") ||
             eq((*(x_1475->parent)).var_flex_direction, "column-reverse"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_807(const auto &x_1500) { return MakeUnit(); }
auto eval_expr_x_804(const auto &x_1507) {
  if (IsSome(HashtblFind((x_1507->prop), "flex-direction"))) {
    return HashtblForceFind((x_1507->prop), "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_802(const auto &x_1510) { return MakeUnit(); }
auto eval_expr_x_799(const auto &x_1515) {
  return plus((x_1515->prev == nullptr) ? ((*(x_1515->prev)).var_flex_shrink_sum) : (0.), x_1515.var_flex_shrink);
}
auto var_modified_x_797(const auto &x_1524) { return MakeUnit(); }
auto eval_expr_x_794(const auto &x_1529) {
  return plus((x_1529->prev == nullptr) ? ((*(x_1529->prev)).var_flex_grow_sum) : (0.), x_1529.var_flex_grow);
}
auto var_modified_x_792(const auto &x_1538) { return MakeUnit(); }
auto eval_expr_x_789(const auto &x_1541) {
  if (IsSome(HashtblFind((x_1541->prop), "flex-shrink"))) {
    return string_to_float(HashtblForceFind((x_1541->prop), "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_787(const auto &x_1544) { return MakeUnit(); }
auto eval_expr_x_784(const auto &x_1547) {
  if (IsSome(HashtblFind((x_1547->prop), "flex-grow"))) {
    return string_to_float(HashtblForceFind((x_1547->prop), "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_782(const auto &x_1550) { return MakeUnit(); }
auto eval_expr_x_779(const auto &x_1556) {
  if (IsSome(HashtblFind((x_1556->prop), "position"))) {
    return HashtblForceFind((x_1556->prop), "position");
  } else {
    return "static";
  }
}
auto var_modified_x_777(const auto &x_1559) { return MakeUnit(); }
auto eval_expr_x_774(const auto &x_1585) {
  if (IsSome(HashtblFind((x_1585->prop), "display"))) {
    return HashtblForceFind((x_1585->prop), "display");
  } else {
    return "block";
  }
}
auto var_modified_x_771(const auto &x_1588) { return MakeUnit(); }
auto eval_expr_x_768(const auto &x_1598) {
  if (x_1598->prev == nullptr) {
    if (x_1598.var_line_break) {
      return plus((*(x_1598->prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_1598->prev)).var_intrinsic_current_line_height, x_1598.var_intrinsic_height_external));
    } else {
      return (*(x_1598->prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1598.var_line_break) {
      return x_1598.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_766(const auto &x_1627) { return MakeUnit(); }
auto eval_expr_x_763(const auto &x_1637) {
  if (x_1637.var_line_break) {
    return 0.;
  } else {
    return max(x_1637.var_intrinsic_height_external,
               (x_1637->prev == nullptr) ? ((*(x_1637->prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_761(const auto &x_1650) { return MakeUnit(); }
auto eval_expr_x_758(const auto &x_1657) {
  return plus((x_1657->prev == nullptr) ? ((*(x_1657->prev)).var_intrinsic_height_sum) : (0.),
              x_1657.var_intrinsic_height_external);
}
auto var_modified_x_756(const auto &x_1666) { return MakeUnit(); }
auto eval_expr_x_753(const auto &x_1671) {
  if (eq(x_1671.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1671.var_intrinsic_height_internal;
  }
}
auto var_modified_x_751(const auto &x_1680) { return MakeUnit(); }
auto eval_expr_x_748(const auto &x_1685) {
  if (eq(x_1685.var_display, "none")) {
    return 0.;
  } else {
    if (x_1685.var_inside_svg) {
      return 0.;
    } else {
      if (x_1685.var_disabled) {
        return 0.;
      } else {
        if (neq(x_1685.var_height_expr, "auto") &&
            (not(has_suffix(x_1685.var_height_expr, "%")) && neq(x_1685.var_height_expr, "fit-content"))) {
          if (has_suffix(x_1685.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_1685.var_height_expr, "px"));
          } else {
            if (has_suffix(x_1685.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_1685.var_height_expr, "ch"));
            } else {
              assert(has_suffix(x_1685.var_height_expr, "lh"));
              return string_to_float(strip_suffix(x_1685.var_height_expr, "lh"));
            }
          }
        } else {
          return plus(
              x_1685.var_children_intrinsic_height,
              (eq((x_1685->name), "#text"))
                  ? (ASSERT((!(x_1685->first == nullptr)), [&]() { return 10.; }))
                  : ((x_1685.var_is_default_case)
                         ? (0.)
                         : ((eq((x_1685->name), "BR"))
                                ? (ASSERT((!(x_1685->first == nullptr)), [&]() { return 0.; }))
                                : ((eq((x_1685->name), "INPUT"))
                                       ? (10.)
                                       : ((eq((x_1685->name), "svg"))
                                              ? ((x_1685.var_has_height_attr &&
                                                  string_is_float(x_1685.var_height_attr_expr))
                                                     ? (string_to_float(x_1685.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind((x_1685->attr), "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind((x_1685->attr), "viewBox"), " ",
                                                                  static_cast<int64_t>(3))))
                                                            : (ASSERT(
                                                                  (x_1685.var_has_height_attr &&
                                                                   (has_suffix(x_1685.var_height_attr_expr, "%") &&
                                                                    IsSome(HashtblFind((x_1685->attr), "viewBox")))),
                                                                  [&]() {
                                                                    return mult(
                                                                        string_to_float(nth_by_sep(
                                                                            HashtblForceFind((x_1685->attr), "viewBox"),
                                                                            " ", static_cast<int64_t>(3))),
                                                                        divide(string_to_float(strip_suffix(
                                                                                   x_1685.var_height_attr_expr, "%")),
                                                                               100.));
                                                                  }))))
                                              : ((eq((x_1685->name), "IMG"))
                                                     ? ((x_1685.var_has_height_attr)
                                                            ? (string_to_float(x_1685.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind((x_1685->attr), "image_height")) &&
                                                                not(x_1685.var_has_width_attr))
                                                                   ? (int_to_float(HashtblForceFind((x_1685->attr),
                                                                                                    "image_height")))
                                                                   : (ASSERT((x_1685.var_has_width_attr &&
                                                                              (not(x_1685.var_has_height_attr) &&
                                                                               (IsSome(HashtblFind((x_1685->attr),
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind((x_1685->attr),
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind((x_1685->attr),
                                                                                                        "image_width"),
                                                                                       static_cast<int64_t>(0))) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_1685.var_width_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_1685->attr),
                                                                                             "image_height")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_1685->attr),
                                                                                             "image_width"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq((x_1685->name), "IFRAME"))
                                                            ? (ASSERT((!x_1685.var_has_height_attr),
                                                                      [&]() { return 150.; }))
                                                            : ((eq((x_1685->name), "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq((x_1685->name), "VIDEO"), [&]() {
                                                                       assert(!x_1685.var_has_height_attr);
                                                                       return 150.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_746(const auto &x_1830) { return MakeUnit(); }
auto eval_expr_x_743(const auto &x_1832) {
  if (eq(x_1832.var_display, "none") || (x_1832.var_inside_svg || x_1832.var_disabled)) {
    return true;
  } else {
    if ((x_1832->parent == nullptr) && (*(x_1832->parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1832.var_height_expr, "auto") ||
          (has_suffix(x_1832.var_height_expr, "px") ||
           (has_suffix(x_1832.var_height_expr, "ch") ||
            (has_suffix(x_1832.var_height_expr, "lh") || eq(x_1832.var_height_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_1832.var_height_expr, "%") || eq(x_1832.var_height_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_741(const auto &x_1881) { return MakeUnit(); }
auto eval_expr_x_738(const auto &x_1901) {
  if (IsSome(HashtblFind((x_1901->prop), "height"))) {
    return HashtblForceFind((x_1901->prop), "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_736(const auto &x_1904) { return MakeUnit(); }
auto eval_expr_x_733(const auto &x_1906) {
  if (x_1906->last == nullptr) {
    return plus((*(x_1906->last)).var_finished_intrinsic_height_sum,
                (*(x_1906->last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_731(const auto &x_1915) { return MakeUnit(); }
auto eval_expr_x_728(const auto &x_1922) {
  return plus((x_1922->prev == nullptr) ? ((*(x_1922->prev)).var_intrinsic_width_sum) : (0.),
              x_1922.var_intrinsic_width_external);
}
auto var_modified_x_726(const auto &x_1931) { return MakeUnit(); }
auto eval_expr_x_723(const auto &x_1938) {
  return max(x_1938.var_intrinsic_current_line_width,
             (x_1938->prev == nullptr) ? ((*(x_1938->prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_721(const auto &x_1947) { return MakeUnit(); }
auto eval_expr_x_718(const auto &x_1952) {
  return plus(x_1952.var_intrinsic_width_external,
              ((x_1952->prev == nullptr) && not((*(x_1952->prev)).var_line_break))
                  ? ((*(x_1952->prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_716(const auto &x_1965) { return MakeUnit(); }
auto eval_expr_x_713(const auto &x_1968) {
  if (eq(x_1968.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1968.var_intrinsic_width_internal;
  }
}
auto var_modified_x_711(const auto &x_1977) { return MakeUnit(); }
auto eval_expr_x_708(const auto &x_1982) {
  if (eq(x_1982.var_display, "none")) {
    return 0.;
  } else {
    if (x_1982.var_inside_svg) {
      return 0.;
    } else {
      if (x_1982.var_disabled) {
        return 0.;
      } else {
        if (neq(x_1982.var_width_expr, "auto") &&
            (not(has_suffix(x_1982.var_width_expr, "%")) &&
             (neq(x_1982.var_width_expr, "fit-content") &&
              (neq(x_1982.var_width_expr, "max-content") && not(has_prefix(x_1982.var_width_expr, "calc")))))) {
          if (has_suffix(x_1982.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_1982.var_width_expr, "px"));
          } else {
            assert(has_suffix(x_1982.var_width_expr, "ch"));
            return string_to_float(strip_suffix(x_1982.var_width_expr, "ch"));
          }
        } else {
          return plus(
              x_1982.var_children_intrinsic_width,
              (eq((x_1982->name), "#text"))
                  ? (ASSERT((!(x_1982->first == nullptr)), [&]() { return 100.; }))
                  : ((x_1982.var_is_default_case)
                         ? (0.)
                         : ((eq((x_1982->name), "BR"))
                                ? (ASSERT((!(x_1982->first == nullptr)), [&]() { return 0.; }))
                                : ((eq((x_1982->name), "INPUT"))
                                       ? (100.)
                                       : ((eq((x_1982->name), "svg"))
                                              ? ((x_1982.var_has_width_attr &&
                                                  string_is_float(x_1982.var_width_attr_expr))
                                                     ? (string_to_float(x_1982.var_width_attr_expr))
                                                     : ((not(x_1982.var_has_width_attr) &&
                                                         IsSome(HashtblFind((x_1982->attr), "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind((x_1982->attr), "viewBox"), " ",
                                                                  static_cast<int64_t>(2))))
                                                            : (ASSERT(
                                                                  (x_1982.var_has_width_attr &&
                                                                   (has_suffix(x_1982.var_width_attr_expr, "%") &&
                                                                    IsSome(HashtblFind((x_1982->attr), "viewBox")))),
                                                                  [&]() {
                                                                    return mult(
                                                                        string_to_float(nth_by_sep(
                                                                            HashtblForceFind((x_1982->attr), "viewBox"),
                                                                            " ", static_cast<int64_t>(2))),
                                                                        divide(string_to_float(strip_suffix(
                                                                                   x_1982.var_width_attr_expr, "%")),
                                                                               100.));
                                                                  }))))
                                              : ((eq((x_1982->name), "IMG"))
                                                     ? ((x_1982.var_has_width_attr)
                                                            ? (string_to_float(x_1982.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind((x_1982->attr), "image_width")) &&
                                                                not(x_1982.var_has_height_attr))
                                                                   ? (int_to_float(HashtblForceFind((x_1982->attr),
                                                                                                    "image_width")))
                                                                   : (ASSERT((not(x_1982.var_has_width_attr) &&
                                                                              (x_1982.var_has_height_attr &&
                                                                               (IsSome(HashtblFind((x_1982->attr),
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind((x_1982->attr),
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind((x_1982->attr),
                                                                                                        "image_height"),
                                                                                       static_cast<int64_t>(0))) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_1982.var_height_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_1982->attr),
                                                                                             "image_width")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_1982->attr),
                                                                                             "image_height"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq((x_1982->name), "IFRAME"))
                                                            ? (ASSERT((!x_1982.var_has_width_attr),
                                                                      [&]() { return 300.; }))
                                                            : ((eq((x_1982->name), "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq((x_1982->name), "VIDEO"), [&]() {
                                                                       assert(!x_1982.var_has_width_attr);
                                                                       return 300.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_706(const auto &x_2135) { return MakeUnit(); }
auto eval_expr_x_703(const auto &x_2137) {
  if (x_2137->last == nullptr) {
    return (*(x_2137->last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_701(const auto &x_2142) { return MakeUnit(); }
auto eval_expr_x_698(const auto &x_2144) {
  if (eq(x_2144.var_display, "none") || (x_2144.var_inside_svg || x_2144.var_disabled)) {
    return true;
  } else {
    if ((x_2144->parent == nullptr) && (*(x_2144->parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2144.var_width_expr, "auto") ||
          (has_suffix(x_2144.var_width_expr, "px") ||
           (has_suffix(x_2144.var_width_expr, "ch") ||
            (has_prefix(x_2144.var_width_expr, "calc(") || eq(x_2144.var_width_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_2144.var_width_expr, "%") || eq(x_2144.var_width_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_696(const auto &x_2193) { return MakeUnit(); }
auto eval_expr_x_693(const auto &x_2196) {
  if (eq(x_2196.var_display, "none")) {
    return true;
  } else {
    if (x_2196.var_inside_svg) {
      return true;
    } else {
      if (x_2196.var_disabled) {
        return true;
      } else {if ( eq((x_2196->name),"#document") || (eq((x_2196->name),"#shadow-root") || (eq((x_2196->name),"DIV") || (eq((x_2196->name),"HTML") || (eq((x_2196->name),"BODY") || (eq((x_2196->name),"BUTTON") || (eq((x_2196->name),"FOOTER") || (eq((x_2196->name),"SELECT") || (eq((x_2196->name),"SECTION") || (eq((x_2196->name),"FORM") || (eq((x_2196->name),"CENTER") || (eq((x_2196->name),"TD") || (eq((x_2196->name),"TR") || (eq((x_2196->name),"TBODY") || (eq((x_2196->name),"TABLE") || (eq((x_2196->name),"SPAN") || (eq((x_2196->name),"FONT") || (eq((x_2196->name),"A") || (eq((x_2196->name),"ARTICLE") || (eq((x_2196->name),"P") || (eq((x_2196->name),"U") || (eq((x_2196->name),"UL") || (eq((x_2196->name),"B") || (eq((x_2196->name),"H1") || (eq((x_2196->name),"H2") || (eq((x_2196->name),"H3") || (eq((x_2196->name),"H4") || (eq((x_2196->name),"DT") || (eq((x_2196->name),"DD") || (eq((x_2196->name),"DL") || (eq((x_2196->name),"LI") || (eq((x_2196->name),"LABEL") || (eq((x_2196->name),"OL") || (eq((x_2196->name),"NAV") || (eq((x_2196->name),"HEADER") || (eq((x_2196->name),"HEAD") || (eq((x_2196->name),"SOURCE") || (eq((x_2196->name),"PICTURE") || (eq((x_2196->name),"FIGURE") || (eq((x_2196->name),"FIGCAPTION") || (eq((x_2196->name),"MAIN") || (eq((x_2196->name),"REACT-PARTIAL") || (eq((x_2196->name),"QUERY-BUILDER") || (eq((x_2196->name),"MODAL-DIALOG") || (eq((x_2196->name),"SCROLLABLE-REGION") || (eq((x_2196->name),"DIALOG-HELPER") || (eq((x_2196->name),"AUTO-CHECK") || (eq((x_2196->name),"TOOL-TIP") || (eq((x_2196->name),"CUSTOM-SCOPES") || (eq((x_2196->name),"QBSEARCH-INPUT") || (eq((x_2196->name),"INCLUDE-FRAGMENT") || (eq((x_2196->name),"COOKIE-CONSENT-LINK") || (eq((x_2196->name),"FULLSTORY-CAPTURE") || (eq((x_2196->name),"GHCC-CONSENT") || (eq((x_2196->name),"GLOBAL-BANNER") || (eq((x_2196->name),"ACTIVE-GLOBAL-BANNERS") || (eq((x_2196->name),"CARD-SKEW") || (eq((x_2196->name),"EM") || (eq((x_2196->name),"ASIDE") || (eq((x_2196->name),"AUDIO") || (eq((x_2196->name),"SUP") || (eq((x_2196->name),"TIME") || (eq((x_2196->name),"ABBR") || (eq((x_2196->name),"SMALL") || (eq((x_2196->name),"SLOT") || eq((x_2196->name),"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          assert(eq((x_2196->name), "#text") ||
                 (eq((x_2196->name), "svg") ||
                  (eq((x_2196->name), "IFRAME") ||
                   (eq((x_2196->name), "INPUT") ||
                    (eq((x_2196->name), "VIDEO") ||
                     (eq((x_2196->name), "BR") || (eq((x_2196->name), "IMG") || eq((x_2196->name), "TEXTAREA"))))))));
          return false;
        }
      }
    }
  }
}
auto var_modified_x_691(const auto &x_2209) { return MakeUnit(); }
auto eval_expr_x_688(const auto &x_2229) {
  if (IsSome(HashtblFind((x_2229->prop), "width"))) {
    return HashtblForceFind((x_2229->prop), "width");
  } else {
    return "auto";
  }
}
auto var_modified_x_685(const auto &x_2232) { return MakeUnit(); }
auto eval_expr_x_682(const auto &x_2239) {
  if ((x_2239->prev == nullptr) && not((*(x_2239->prev)).var_line_break)) {
    return max(x_2239.var_height_external, (*(x_2239->prev)).var_line_height);
  } else {
    return x_2239.var_height_external;
  }
}
auto var_modified_x_680(const auto &x_2256) { return MakeUnit(); }
auto eval_expr_x_677(const auto &x_2259) {
  if (eq(x_2259.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2259.var_height_internal;
  }
}
auto var_modified_x_675(const auto &x_2268) { return MakeUnit(); }
auto eval_expr_x_672(const auto &x_2271) {
  if (x_2271.var_intrinsic_height_is_height) {
    return x_2271.var_intrinsic_height_internal;
  } else {
    if ((x_2271->parent == nullptr) && (*(x_2271->parent)).var_is_flex_column) {
      return plus(x_2271.var_intrinsic_height_internal,
                  mult(x_2271.var_flex_amount, (*(x_2271->parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2271.var_height_expr, "%")) {
        return mult(x_2271.var_box_height, divide(string_to_float(strip_suffix(x_2271.var_height_expr, "%")), 100.));
      } else {
        assert(eq(x_2271.var_height_expr, "fit-content"));
        return max(x_2271.var_box_height, x_2271.var_intrinsic_height_internal);
      }
    }
  }
}
auto var_modified_x_670(const auto &x_2324) { return MakeUnit(); }
auto eval_expr_x_667(const auto &x_2332) {
  if (x_2332->prev == nullptr) {
    if (x_2332.var_line_break || (*(x_2332->prev)).var_line_break) {
      return plus((*(x_2332->prev)).var_y, (*(x_2332->prev)).var_line_height);
    } else {
      return (*(x_2332->prev)).var_y;
    }
  } else {
    if (x_2332->parent == nullptr) {
      return (*(x_2332->parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_665(const auto &x_2357) { return MakeUnit(); }
auto eval_expr_x_662(const auto &x_2361) {
  if (eq(x_2361.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2361.var_width_internal;
  }
}
auto var_modified_x_660(const auto &x_2370) { return MakeUnit(); }
auto eval_expr_x_657(const auto &x_2373) {
  if (x_2373.var_intrinsic_width_is_width) {
    return x_2373.var_intrinsic_width_internal;
  } else {
    if ((x_2373->parent == nullptr) && (*(x_2373->parent)).var_is_flex_row) {
      return plus(x_2373.var_intrinsic_width_internal, mult(x_2373.var_flex_amount, (*(x_2373->parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2373.var_width_expr, "%")) {
        return mult(x_2373.var_box_width, divide(string_to_float(strip_suffix(x_2373.var_width_expr, "%")), 100.));
      } else {
        assert(eq(x_2373.var_width_expr, "fit-content"));
        return max(x_2373.var_box_width, x_2373.var_intrinsic_width_internal);
      }
    }
  }
}
auto var_modified_x_655(const auto &x_2426) { return MakeUnit(); }
auto eval_expr_x_652(const auto &x_2431) {
  if (x_2431->prev == nullptr) {
    if (x_2431.var_line_break || (*(x_2431->prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_2431->prev)).var_x, (*(x_2431->prev)).var_width_external);
    }
  } else {
    if (x_2431->parent == nullptr) {
      return (*(x_2431->parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_650(const auto &x_2452) { return MakeUnit(); }
auto eval_expr_x_647(const auto &x_2455) {
  if (gt(x_2455.var_left_over, 0.)) {
    return divide(x_2455.var_left_over, x_2455.var_flex_grow_sum);
  } else {
    return divide(x_2455.var_left_over, x_2455.var_flex_shrink_sum);
  }
}
auto var_modified_x_645(const auto &x_2476) { return MakeUnit(); }
auto eval_expr_x_642(const auto &x_2479) {
  if ((x_2479->parent == nullptr) && gt((*(x_2479->parent)).var_left_over, 0.)) {
    return x_2479.var_flex_grow;
  } else {
    return x_2479.var_flex_shrink;
  }
}
auto var_modified_x_640(const auto &x_2492) { return MakeUnit(); }
auto eval_expr_x_637(const auto &x_2497) {
  if (x_2497.var_is_flex_row) {
    return minus(x_2497.var_box_width, (x_2497->last == nullptr) ? ((*(x_2497->last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2497.var_box_height,
                 (x_2497->last == nullptr) ? ((*(x_2497->last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_635(const auto &x_2518) { return MakeUnit(); }
auto eval_expr_x_632(const auto &x_2522) {
  if (x_2522->parent == nullptr) {
    return (*(x_2522->parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_630(const auto &x_2527) { return MakeUnit(); }
auto eval_expr_x_627(const auto &x_2531) {
  if (x_2531->parent == nullptr) {
    return (*(x_2531->parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_624(const auto &x_2536) { return MakeUnit(); }
auto eval_expr_x_621(const auto &x_2554) {
  if (eq(x_2554.var_display, "none")) {
    return false;
  } else {
    if (eq(x_2554.var_position, "absolute")) {
      return false;
    } else {
      if ((x_2554->parent == nullptr) &&
          (eq((*(x_2554->parent)).var_display, "flex") || eq((*(x_2554->parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_2554.var_display, "block")) {
          return true;
        } else {
          if (eq(x_2554.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_2554.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_2554.var_display, "flex")) {
                if (eq(HashtblForceFind((x_2554->prop), "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind((x_2554->prop), "flex-direction"), "column")) {
                    return true;
                  } else {
                    assert(eq(HashtblForceFind((x_2554->prop), "flex-direction"), "column-reverse"));
                    return true;
                  }
                }
              } else {
                if (eq(x_2554.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_2554.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_2554.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_2554.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_2554.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_2554.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_2554.var_display, "list-item")) {
                              return true;
                            } else {
                              assert(eq(x_2554.var_display, "grid"));
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
auto var_modified_x_619(const auto &x_2631) { return MakeUnit(); }
auto eval_expr_x_616(const auto &x_2633) {
  return ((not(x_2633->parent == nullptr) || (*(x_2633->parent)).var_visible) &&
          (neq(x_2633.var_display, "none") && (not(x_2633.var_inside_svg) && not(x_2633.var_disabled))));
}
auto var_modified_x_614(const auto &x_2650) { return MakeUnit(); }
auto eval_expr_x_611(const auto &x_2658) {
  if (eq((x_2658->name), "NOSCRIPT")) {
    return true;
  } else {
    return ((x_2658->parent == nullptr) && (*(x_2658->parent)).var_disabled);
  }
}
auto var_modified_x_609(const auto &x_2663) { return MakeUnit(); }
auto eval_expr_x_606(const auto &x_2671) {
  return ((x_2671->parent == nullptr) && ((*(x_2671->parent)).var_is_svg_block || (*(x_2671->parent)).var_inside_svg));
}
auto var_modified_x_604(const auto &x_2680) { return MakeUnit(); }
auto eval_expr_x_601(const auto &x_2682) { return eq((x_2682->name), "svg"); }
auto var_modified_x_599(const auto &x_2683) { return MakeUnit(); }
auto eval_expr_x_596(const auto &x_2692) { return neq(x_2692.var_height_attr_expr, "auto"); }
auto var_modified_x_594(const auto &x_2697) { return MakeUnit(); }
auto eval_expr_x_591(const auto &x_2705) {
  if (not(IsSome(HashtblFind((x_2705->attr), "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind((x_2705->attr), "height")) ||
        has_suffix(HashtblForceFind((x_2705->attr), "height"), "%")) {
      return HashtblForceFind((x_2705->attr), "height");
    } else {
      assert(eq(HashtblForceFind((x_2705->attr), "height"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_589(const auto &x_2716) { return MakeUnit(); }
auto eval_expr_x_586(const auto &x_2726) { return neq(x_2726.var_width_attr_expr, "auto"); }
auto var_modified_x_584(const auto &x_2731) { return MakeUnit(); }
auto eval_expr_x_581(const auto &x_2739) {
  if (not(IsSome(HashtblFind((x_2739->attr), "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind((x_2739->attr), "width")) ||
        has_suffix(HashtblForceFind((x_2739->attr), "width"), "%")) {
      return HashtblForceFind((x_2739->attr), "width");
    } else {
      assert(eq(HashtblForceFind((x_2739->attr), "width"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_579(const auto &x_2750) { return MakeUnit(); }
auto eval_expr_x_576(const auto &x_2753) {
  if ((x_2753->parent == nullptr) &&
      (eq((*(x_2753->parent)).var_display, "flex") || eq((*(x_2753->parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2753->parent)).var_flex_direction, "column") ||
        eq((*(x_2753->parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      assert(eq((*(x_2753->parent)).var_flex_direction, "row"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_574(const auto &x_2778) { return MakeUnit(); }
auto eval_expr_x_571(const auto &x_2782) {
  if ((x_2782->parent == nullptr) &&
      (eq((*(x_2782->parent)).var_display, "flex") || eq((*(x_2782->parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2782->parent)).var_flex_direction, "row")) {
      return true;
    } else {
      assert(eq((*(x_2782->parent)).var_flex_direction, "column") ||
             eq((*(x_2782->parent)).var_flex_direction, "column-reverse"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_569(const auto &x_2807) { return MakeUnit(); }
auto eval_expr_x_566(const auto &x_2814) {
  if (IsSome(HashtblFind((x_2814->prop), "flex-direction"))) {
    return HashtblForceFind((x_2814->prop), "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_564(const auto &x_2817) { return MakeUnit(); }
auto eval_expr_x_561(const auto &x_2822) {
  return plus((x_2822->prev == nullptr) ? ((*(x_2822->prev)).var_flex_shrink_sum) : (0.), x_2822.var_flex_shrink);
}
auto var_modified_x_559(const auto &x_2831) { return MakeUnit(); }
auto eval_expr_x_556(const auto &x_2836) {
  return plus((x_2836->prev == nullptr) ? ((*(x_2836->prev)).var_flex_grow_sum) : (0.), x_2836.var_flex_grow);
}
auto var_modified_x_554(const auto &x_2845) { return MakeUnit(); }
auto eval_expr_x_551(const auto &x_2848) {
  if (IsSome(HashtblFind((x_2848->prop), "flex-shrink"))) {
    return string_to_float(HashtblForceFind((x_2848->prop), "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_549(const auto &x_2851) { return MakeUnit(); }
auto eval_expr_x_546(const auto &x_2854) {
  if (IsSome(HashtblFind((x_2854->prop), "flex-grow"))) {
    return string_to_float(HashtblForceFind((x_2854->prop), "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_544(const auto &x_2857) { return MakeUnit(); }
auto eval_expr_x_541(const auto &x_2863) {
  if (IsSome(HashtblFind((x_2863->prop), "position"))) {
    return HashtblForceFind((x_2863->prop), "position");
  } else {
    return "static";
  }
}
auto var_modified_x_539(const auto &x_2866) { return MakeUnit(); }
auto eval_expr_x_536(const auto &x_2892) {
  if (IsSome(HashtblFind((x_2892->prop), "display"))) {
    return HashtblForceFind((x_2892->prop), "display");
  } else {
    return "block";
  }
}
auto var_modified_x_533(const auto &x_2895) { return MakeUnit(); }
auto eval_expr_x_530(const auto &x_2905) {
  if (x_2905->prev == nullptr) {
    if (x_2905.var_line_break) {
      return plus((*(x_2905->prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_2905->prev)).var_intrinsic_current_line_height, x_2905.var_intrinsic_height_external));
    } else {
      return (*(x_2905->prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2905.var_line_break) {
      return x_2905.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_528(const auto &x_2934) { return MakeUnit(); }
auto eval_expr_x_525(const auto &x_2944) {
  if (x_2944.var_line_break) {
    return 0.;
  } else {
    return max(x_2944.var_intrinsic_height_external,
               (x_2944->prev == nullptr) ? ((*(x_2944->prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_523(const auto &x_2957) { return MakeUnit(); }
auto eval_expr_x_520(const auto &x_2964) {
  return plus((x_2964->prev == nullptr) ? ((*(x_2964->prev)).var_intrinsic_height_sum) : (0.),
              x_2964.var_intrinsic_height_external);
}
auto var_modified_x_518(const auto &x_2973) { return MakeUnit(); }
auto eval_expr_x_515(const auto &x_2978) {
  if (eq(x_2978.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2978.var_intrinsic_height_internal;
  }
}
auto var_modified_x_513(const auto &x_2987) { return MakeUnit(); }
auto eval_expr_x_510(const auto &x_2992) {
  if (eq(x_2992.var_display, "none")) {
    return 0.;
  } else {
    if (x_2992.var_inside_svg) {
      return 0.;
    } else {
      if (x_2992.var_disabled) {
        return 0.;
      } else {
        if (neq(x_2992.var_height_expr, "auto") &&
            (not(has_suffix(x_2992.var_height_expr, "%")) && neq(x_2992.var_height_expr, "fit-content"))) {
          if (has_suffix(x_2992.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_2992.var_height_expr, "px"));
          } else {
            if (has_suffix(x_2992.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_2992.var_height_expr, "ch"));
            } else {
              assert(has_suffix(x_2992.var_height_expr, "lh"));
              return string_to_float(strip_suffix(x_2992.var_height_expr, "lh"));
            }
          }
        } else {
          return plus(
              x_2992.var_children_intrinsic_height,
              (eq((x_2992->name), "#text"))
                  ? (ASSERT((!(x_2992->first == nullptr)), [&]() { return 10.; }))
                  : ((x_2992.var_is_default_case)
                         ? (0.)
                         : ((eq((x_2992->name), "BR"))
                                ? (ASSERT((!(x_2992->first == nullptr)), [&]() { return 0.; }))
                                : ((eq((x_2992->name), "INPUT"))
                                       ? (10.)
                                       : ((eq((x_2992->name), "svg"))
                                              ? ((x_2992.var_has_height_attr &&
                                                  string_is_float(x_2992.var_height_attr_expr))
                                                     ? (string_to_float(x_2992.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind((x_2992->attr), "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind((x_2992->attr), "viewBox"), " ",
                                                                  static_cast<int64_t>(3))))
                                                            : (ASSERT(
                                                                  (x_2992.var_has_height_attr &&
                                                                   (has_suffix(x_2992.var_height_attr_expr, "%") &&
                                                                    IsSome(HashtblFind((x_2992->attr), "viewBox")))),
                                                                  [&]() {
                                                                    return mult(
                                                                        string_to_float(nth_by_sep(
                                                                            HashtblForceFind((x_2992->attr), "viewBox"),
                                                                            " ", static_cast<int64_t>(3))),
                                                                        divide(string_to_float(strip_suffix(
                                                                                   x_2992.var_height_attr_expr, "%")),
                                                                               100.));
                                                                  }))))
                                              : ((eq((x_2992->name), "IMG"))
                                                     ? ((x_2992.var_has_height_attr)
                                                            ? (string_to_float(x_2992.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind((x_2992->attr), "image_height")) &&
                                                                not(x_2992.var_has_width_attr))
                                                                   ? (int_to_float(HashtblForceFind((x_2992->attr),
                                                                                                    "image_height")))
                                                                   : (ASSERT((x_2992.var_has_width_attr &&
                                                                              (not(x_2992.var_has_height_attr) &&
                                                                               (IsSome(HashtblFind((x_2992->attr),
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind((x_2992->attr),
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind((x_2992->attr),
                                                                                                        "image_width"),
                                                                                       static_cast<int64_t>(0))) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_2992.var_width_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_2992->attr),
                                                                                             "image_height")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_2992->attr),
                                                                                             "image_width"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq((x_2992->name), "IFRAME"))
                                                            ? (ASSERT((!x_2992.var_has_height_attr),
                                                                      [&]() { return 150.; }))
                                                            : ((eq((x_2992->name), "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq((x_2992->name), "VIDEO"), [&]() {
                                                                       assert(!x_2992.var_has_height_attr);
                                                                       return 150.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_508(const auto &x_3137) { return MakeUnit(); }
auto eval_expr_x_505(const auto &x_3139) {
  if (eq(x_3139.var_display, "none") || (x_3139.var_inside_svg || x_3139.var_disabled)) {
    return true;
  } else {
    if ((x_3139->parent == nullptr) && (*(x_3139->parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3139.var_height_expr, "auto") ||
          (has_suffix(x_3139.var_height_expr, "px") ||
           (has_suffix(x_3139.var_height_expr, "ch") ||
            (has_suffix(x_3139.var_height_expr, "lh") || eq(x_3139.var_height_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_3139.var_height_expr, "%") || eq(x_3139.var_height_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_503(const auto &x_3188) { return MakeUnit(); }
auto eval_expr_x_500(const auto &x_3208) {
  if (IsSome(HashtblFind((x_3208->prop), "height"))) {
    return HashtblForceFind((x_3208->prop), "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_498(const auto &x_3211) { return MakeUnit(); }
auto eval_expr_x_495(const auto &x_3213) {
  if (x_3213->last == nullptr) {
    return plus((*(x_3213->last)).var_finished_intrinsic_height_sum,
                (*(x_3213->last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_493(const auto &x_3222) { return MakeUnit(); }
auto eval_expr_x_490(const auto &x_3229) {
  return plus((x_3229->prev == nullptr) ? ((*(x_3229->prev)).var_intrinsic_width_sum) : (0.),
              x_3229.var_intrinsic_width_external);
}
auto var_modified_x_488(const auto &x_3238) { return MakeUnit(); }
auto eval_expr_x_485(const auto &x_3245) {
  return max(x_3245.var_intrinsic_current_line_width,
             (x_3245->prev == nullptr) ? ((*(x_3245->prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_483(const auto &x_3254) { return MakeUnit(); }
auto eval_expr_x_480(const auto &x_3259) {
  return plus(x_3259.var_intrinsic_width_external,
              ((x_3259->prev == nullptr) && not((*(x_3259->prev)).var_line_break))
                  ? ((*(x_3259->prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_478(const auto &x_3272) { return MakeUnit(); }
auto eval_expr_x_475(const auto &x_3275) {
  if (eq(x_3275.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3275.var_intrinsic_width_internal;
  }
}
auto var_modified_x_473(const auto &x_3284) { return MakeUnit(); }
auto eval_expr_x_470(const auto &x_3289) {
  if (eq(x_3289.var_display, "none")) {
    return 0.;
  } else {
    if (x_3289.var_inside_svg) {
      return 0.;
    } else {
      if (x_3289.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3289.var_width_expr, "auto") &&
            (not(has_suffix(x_3289.var_width_expr, "%")) &&
             (neq(x_3289.var_width_expr, "fit-content") &&
              (neq(x_3289.var_width_expr, "max-content") && not(has_prefix(x_3289.var_width_expr, "calc")))))) {
          if (has_suffix(x_3289.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_3289.var_width_expr, "px"));
          } else {
            assert(has_suffix(x_3289.var_width_expr, "ch"));
            return string_to_float(strip_suffix(x_3289.var_width_expr, "ch"));
          }
        } else {
          return plus(
              x_3289.var_children_intrinsic_width,
              (eq((x_3289->name), "#text"))
                  ? (ASSERT((!(x_3289->first == nullptr)), [&]() { return 100.; }))
                  : ((x_3289.var_is_default_case)
                         ? (0.)
                         : ((eq((x_3289->name), "BR"))
                                ? (ASSERT((!(x_3289->first == nullptr)), [&]() { return 0.; }))
                                : ((eq((x_3289->name), "INPUT"))
                                       ? (100.)
                                       : ((eq((x_3289->name), "svg"))
                                              ? ((x_3289.var_has_width_attr &&
                                                  string_is_float(x_3289.var_width_attr_expr))
                                                     ? (string_to_float(x_3289.var_width_attr_expr))
                                                     : ((not(x_3289.var_has_width_attr) &&
                                                         IsSome(HashtblFind((x_3289->attr), "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind((x_3289->attr), "viewBox"), " ",
                                                                  static_cast<int64_t>(2))))
                                                            : (ASSERT(
                                                                  (x_3289.var_has_width_attr &&
                                                                   (has_suffix(x_3289.var_width_attr_expr, "%") &&
                                                                    IsSome(HashtblFind((x_3289->attr), "viewBox")))),
                                                                  [&]() {
                                                                    return mult(
                                                                        string_to_float(nth_by_sep(
                                                                            HashtblForceFind((x_3289->attr), "viewBox"),
                                                                            " ", static_cast<int64_t>(2))),
                                                                        divide(string_to_float(strip_suffix(
                                                                                   x_3289.var_width_attr_expr, "%")),
                                                                               100.));
                                                                  }))))
                                              : ((eq((x_3289->name), "IMG"))
                                                     ? ((x_3289.var_has_width_attr)
                                                            ? (string_to_float(x_3289.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind((x_3289->attr), "image_width")) &&
                                                                not(x_3289.var_has_height_attr))
                                                                   ? (int_to_float(HashtblForceFind((x_3289->attr),
                                                                                                    "image_width")))
                                                                   : (ASSERT((not(x_3289.var_has_width_attr) &&
                                                                              (x_3289.var_has_height_attr &&
                                                                               (IsSome(HashtblFind((x_3289->attr),
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind((x_3289->attr),
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind((x_3289->attr),
                                                                                                        "image_height"),
                                                                                       static_cast<int64_t>(0))) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_3289.var_height_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_3289->attr),
                                                                                             "image_width")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             (x_3289->attr),
                                                                                             "image_height"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq((x_3289->name), "IFRAME"))
                                                            ? (ASSERT((!x_3289.var_has_width_attr),
                                                                      [&]() { return 300.; }))
                                                            : ((eq((x_3289->name), "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq((x_3289->name), "VIDEO"), [&]() {
                                                                       assert(!x_3289.var_has_width_attr);
                                                                       return 300.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_468(const auto &x_3442) { return MakeUnit(); }
auto eval_expr_x_465(const auto &x_3444) {
  if (x_3444->last == nullptr) {
    return (*(x_3444->last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_463(const auto &x_3449) { return MakeUnit(); }
auto eval_expr_x_460(const auto &x_3451) {
  if (eq(x_3451.var_display, "none") || (x_3451.var_inside_svg || x_3451.var_disabled)) {
    return true;
  } else {
    if ((x_3451->parent == nullptr) && (*(x_3451->parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3451.var_width_expr, "auto") ||
          (has_suffix(x_3451.var_width_expr, "px") ||
           (has_suffix(x_3451.var_width_expr, "ch") ||
            (has_prefix(x_3451.var_width_expr, "calc(") || eq(x_3451.var_width_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_3451.var_width_expr, "%") || eq(x_3451.var_width_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_458(const auto &x_3500) { return MakeUnit(); }
auto eval_expr_x_455(const auto &x_3503) {
  if (eq(x_3503.var_display, "none")) {
    return true;
  } else {
    if (x_3503.var_inside_svg) {
      return true;
    } else {
      if (x_3503.var_disabled) {
        return true;
      } else {if ( eq((x_3503->name),"#document") || (eq((x_3503->name),"#shadow-root") || (eq((x_3503->name),"DIV") || (eq((x_3503->name),"HTML") || (eq((x_3503->name),"BODY") || (eq((x_3503->name),"BUTTON") || (eq((x_3503->name),"FOOTER") || (eq((x_3503->name),"SELECT") || (eq((x_3503->name),"SECTION") || (eq((x_3503->name),"FORM") || (eq((x_3503->name),"CENTER") || (eq((x_3503->name),"TD") || (eq((x_3503->name),"TR") || (eq((x_3503->name),"TBODY") || (eq((x_3503->name),"TABLE") || (eq((x_3503->name),"SPAN") || (eq((x_3503->name),"FONT") || (eq((x_3503->name),"A") || (eq((x_3503->name),"ARTICLE") || (eq((x_3503->name),"P") || (eq((x_3503->name),"U") || (eq((x_3503->name),"UL") || (eq((x_3503->name),"B") || (eq((x_3503->name),"H1") || (eq((x_3503->name),"H2") || (eq((x_3503->name),"H3") || (eq((x_3503->name),"H4") || (eq((x_3503->name),"DT") || (eq((x_3503->name),"DD") || (eq((x_3503->name),"DL") || (eq((x_3503->name),"LI") || (eq((x_3503->name),"LABEL") || (eq((x_3503->name),"OL") || (eq((x_3503->name),"NAV") || (eq((x_3503->name),"HEADER") || (eq((x_3503->name),"HEAD") || (eq((x_3503->name),"SOURCE") || (eq((x_3503->name),"PICTURE") || (eq((x_3503->name),"FIGURE") || (eq((x_3503->name),"FIGCAPTION") || (eq((x_3503->name),"MAIN") || (eq((x_3503->name),"REACT-PARTIAL") || (eq((x_3503->name),"QUERY-BUILDER") || (eq((x_3503->name),"MODAL-DIALOG") || (eq((x_3503->name),"SCROLLABLE-REGION") || (eq((x_3503->name),"DIALOG-HELPER") || (eq((x_3503->name),"AUTO-CHECK") || (eq((x_3503->name),"TOOL-TIP") || (eq((x_3503->name),"CUSTOM-SCOPES") || (eq((x_3503->name),"QBSEARCH-INPUT") || (eq((x_3503->name),"INCLUDE-FRAGMENT") || (eq((x_3503->name),"COOKIE-CONSENT-LINK") || (eq((x_3503->name),"FULLSTORY-CAPTURE") || (eq((x_3503->name),"GHCC-CONSENT") || (eq((x_3503->name),"GLOBAL-BANNER") || (eq((x_3503->name),"ACTIVE-GLOBAL-BANNERS") || (eq((x_3503->name),"CARD-SKEW") || (eq((x_3503->name),"EM") || (eq((x_3503->name),"ASIDE") || (eq((x_3503->name),"AUDIO") || (eq((x_3503->name),"SUP") || (eq((x_3503->name),"TIME") || (eq((x_3503->name),"ABBR") || (eq((x_3503->name),"SMALL") || (eq((x_3503->name),"SLOT") || eq((x_3503->name),"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          assert(eq((x_3503->name), "#text") ||
                 (eq((x_3503->name), "svg") ||
                  (eq((x_3503->name), "IFRAME") ||
                   (eq((x_3503->name), "INPUT") ||
                    (eq((x_3503->name), "VIDEO") ||
                     (eq((x_3503->name), "BR") || (eq((x_3503->name), "IMG") || eq((x_3503->name), "TEXTAREA"))))))));
          return false;
        }
      }
    }
  }
}
auto var_modified_x_453(const auto &x_3516) { return MakeUnit(); }
auto eval_expr_x_450(const auto &x_3536) {
  if (IsSome(HashtblFind((x_3536->prop), "width"))) {
    return HashtblForceFind((x_3536->prop), "width");
  } else {
    return "auto";
  }
}
auto eval_stmts_x_429(const auto &x_449) {
  WriteMetric();
  auto x_451 = eval_expr_x_450(x_449);
  x_449->var_width_expr = x_451;
  WriteMetric();
  auto x_456 = eval_expr_x_455(x_449);
  x_449->var_is_default_case = x_456;
  WriteMetric();
  auto x_461 = eval_expr_x_460(x_449);
  x_449->var_intrinsic_width_is_width = x_461;
  WriteMetric();
  auto x_466 = eval_expr_x_465(x_449);
  x_449->var_children_intrinsic_width = x_466;
  WriteMetric();
  auto x_471 = eval_expr_x_470(x_449);
  x_449->var_intrinsic_width_internal = x_471;
  WriteMetric();
  auto x_476 = eval_expr_x_475(x_449);
  x_449->var_intrinsic_width_external = x_476;
  WriteMetric();
  auto x_481 = eval_expr_x_480(x_449);
  x_449->var_intrinsic_current_line_width = x_481;
  WriteMetric();
  auto x_486 = eval_expr_x_485(x_449);
  x_449->var_intrinsic_width_max = x_486;
  WriteMetric();
  auto x_491 = eval_expr_x_490(x_449);
  x_449->var_intrinsic_width_sum = x_491;
  WriteMetric();
  auto x_496 = eval_expr_x_495(x_449);
  x_449->var_children_intrinsic_height = x_496;
  WriteMetric();
  auto x_501 = eval_expr_x_500(x_449);
  x_449->var_height_expr = x_501;
  WriteMetric();
  auto x_506 = eval_expr_x_505(x_449);
  x_449->var_intrinsic_height_is_height = x_506;
  WriteMetric();
  auto x_511 = eval_expr_x_510(x_449);
  x_449->var_intrinsic_height_internal = x_511;
  WriteMetric();
  auto x_516 = eval_expr_x_515(x_449);
  x_449->var_intrinsic_height_external = x_516;
  WriteMetric();
  auto x_521 = eval_expr_x_520(x_449);
  x_449->var_intrinsic_height_sum = x_521;
  WriteMetric();
  auto x_526 = eval_expr_x_525(x_449);
  x_449->var_intrinsic_current_line_height = x_526;
  WriteMetric();
  auto x_531 = eval_expr_x_530(x_449);
  x_449->var_finished_intrinsic_height_sum = x_531;
  return MakeUnit();
}
auto eval_stmts_x_427(const auto &x_535) {
  WriteMetric();
  auto x_537 = eval_expr_x_536(x_535);
  x_535->var_display = x_537;
  WriteMetric();
  auto x_542 = eval_expr_x_541(x_535);
  x_535->var_position = x_542;
  WriteMetric();
  auto x_547 = eval_expr_x_546(x_535);
  x_535->var_flex_grow = x_547;
  WriteMetric();
  auto x_552 = eval_expr_x_551(x_535);
  x_535->var_flex_shrink = x_552;
  WriteMetric();
  auto x_557 = eval_expr_x_556(x_535);
  x_535->var_flex_grow_sum = x_557;
  WriteMetric();
  auto x_562 = eval_expr_x_561(x_535);
  x_535->var_flex_shrink_sum = x_562;
  WriteMetric();
  auto x_567 = eval_expr_x_566(x_535);
  x_535->var_flex_direction = x_567;
  WriteMetric();
  auto x_572 = eval_expr_x_571(x_535);
  x_535->var_is_flex_row = x_572;
  WriteMetric();
  auto x_577 = eval_expr_x_576(x_535);
  x_535->var_is_flex_column = x_577;
  WriteMetric();
  auto x_582 = eval_expr_x_581(x_535);
  x_535->var_width_attr_expr = x_582;
  WriteMetric();
  auto x_587 = eval_expr_x_586(x_535);
  x_535->var_has_width_attr = x_587;
  WriteMetric();
  auto x_592 = eval_expr_x_591(x_535);
  x_535->var_height_attr_expr = x_592;
  WriteMetric();
  auto x_597 = eval_expr_x_596(x_535);
  x_535->var_has_height_attr = x_597;
  WriteMetric();
  auto x_602 = eval_expr_x_601(x_535);
  x_535->var_is_svg_block = x_602;
  WriteMetric();
  auto x_607 = eval_expr_x_606(x_535);
  x_535->var_inside_svg = x_607;
  WriteMetric();
  auto x_612 = eval_expr_x_611(x_535);
  x_535->var_disabled = x_612;
  WriteMetric();
  auto x_617 = eval_expr_x_616(x_535);
  x_535->var_visible = x_617;
  WriteMetric();
  auto x_622 = eval_expr_x_621(x_535);
  x_535->var_line_break = x_622;
  return MakeUnit();
}
auto eval_stmts_x_424(const auto &x_626) {
  WriteMetric();
  auto x_628 = eval_expr_x_627(x_626);
  x_626->var_box_width = x_628;
  WriteMetric();
  auto x_633 = eval_expr_x_632(x_626);
  x_626->var_box_height = x_633;
  WriteMetric();
  auto x_638 = eval_expr_x_637(x_626);
  x_626->var_left_over = x_638;
  WriteMetric();
  auto x_643 = eval_expr_x_642(x_626);
  x_626->var_flex_amount = x_643;
  WriteMetric();
  auto x_648 = eval_expr_x_647(x_626);
  x_626->var_flex_unit = x_648;
  WriteMetric();
  auto x_653 = eval_expr_x_652(x_626);
  x_626->var_x = x_653;
  WriteMetric();
  auto x_658 = eval_expr_x_657(x_626);
  x_626->var_width_internal = x_658;
  WriteMetric();
  auto x_663 = eval_expr_x_662(x_626);
  x_626->var_width_external = x_663;
  WriteMetric();
  auto x_668 = eval_expr_x_667(x_626);
  x_626->var_y = x_668;
  WriteMetric();
  auto x_673 = eval_expr_x_672(x_626);
  x_626->var_height_internal = x_673;
  WriteMetric();
  auto x_678 = eval_expr_x_677(x_626);
  x_626->var_height_external = x_678;
  WriteMetric();
  auto x_683 = eval_expr_x_682(x_626);
  x_626->var_line_height = x_683;
  return MakeUnit();
}
auto eval_stmts_x_418(const auto &x_687) {
  WriteMetric();
  auto x_689 = eval_expr_x_688(x_687);
  x_687->var_width_expr = x_689;
  WriteMetric();
  auto x_694 = eval_expr_x_693(x_687);
  x_687->var_is_default_case = x_694;
  WriteMetric();
  auto x_699 = eval_expr_x_698(x_687);
  x_687->var_intrinsic_width_is_width = x_699;
  WriteMetric();
  auto x_704 = eval_expr_x_703(x_687);
  x_687->var_children_intrinsic_width = x_704;
  WriteMetric();
  auto x_709 = eval_expr_x_708(x_687);
  x_687->var_intrinsic_width_internal = x_709;
  WriteMetric();
  auto x_714 = eval_expr_x_713(x_687);
  x_687->var_intrinsic_width_external = x_714;
  WriteMetric();
  auto x_719 = eval_expr_x_718(x_687);
  x_687->var_intrinsic_current_line_width = x_719;
  WriteMetric();
  auto x_724 = eval_expr_x_723(x_687);
  x_687->var_intrinsic_width_max = x_724;
  WriteMetric();
  auto x_729 = eval_expr_x_728(x_687);
  x_687->var_intrinsic_width_sum = x_729;
  WriteMetric();
  auto x_734 = eval_expr_x_733(x_687);
  x_687->var_children_intrinsic_height = x_734;
  WriteMetric();
  auto x_739 = eval_expr_x_738(x_687);
  x_687->var_height_expr = x_739;
  WriteMetric();
  auto x_744 = eval_expr_x_743(x_687);
  x_687->var_intrinsic_height_is_height = x_744;
  WriteMetric();
  auto x_749 = eval_expr_x_748(x_687);
  x_687->var_intrinsic_height_internal = x_749;
  WriteMetric();
  auto x_754 = eval_expr_x_753(x_687);
  x_687->var_intrinsic_height_external = x_754;
  WriteMetric();
  auto x_759 = eval_expr_x_758(x_687);
  x_687->var_intrinsic_height_sum = x_759;
  WriteMetric();
  auto x_764 = eval_expr_x_763(x_687);
  x_687->var_intrinsic_current_line_height = x_764;
  WriteMetric();
  auto x_769 = eval_expr_x_768(x_687);
  x_687->var_finished_intrinsic_height_sum = x_769;
  return MakeUnit();
}
auto eval_stmts_x_416(const auto &x_773) {
  WriteMetric();
  auto x_775 = eval_expr_x_774(x_773);
  x_773->var_display = x_775;
  WriteMetric();
  auto x_780 = eval_expr_x_779(x_773);
  x_773->var_position = x_780;
  WriteMetric();
  auto x_785 = eval_expr_x_784(x_773);
  x_773->var_flex_grow = x_785;
  WriteMetric();
  auto x_790 = eval_expr_x_789(x_773);
  x_773->var_flex_shrink = x_790;
  WriteMetric();
  auto x_795 = eval_expr_x_794(x_773);
  x_773->var_flex_grow_sum = x_795;
  WriteMetric();
  auto x_800 = eval_expr_x_799(x_773);
  x_773->var_flex_shrink_sum = x_800;
  WriteMetric();
  auto x_805 = eval_expr_x_804(x_773);
  x_773->var_flex_direction = x_805;
  WriteMetric();
  auto x_810 = eval_expr_x_809(x_773);
  x_773->var_is_flex_row = x_810;
  WriteMetric();
  auto x_815 = eval_expr_x_814(x_773);
  x_773->var_is_flex_column = x_815;
  WriteMetric();
  auto x_820 = eval_expr_x_819(x_773);
  x_773->var_width_attr_expr = x_820;
  WriteMetric();
  auto x_825 = eval_expr_x_824(x_773);
  x_773->var_has_width_attr = x_825;
  WriteMetric();
  auto x_830 = eval_expr_x_829(x_773);
  x_773->var_height_attr_expr = x_830;
  WriteMetric();
  auto x_835 = eval_expr_x_834(x_773);
  x_773->var_has_height_attr = x_835;
  WriteMetric();
  auto x_840 = eval_expr_x_839(x_773);
  x_773->var_is_svg_block = x_840;
  WriteMetric();
  auto x_845 = eval_expr_x_844(x_773);
  x_773->var_inside_svg = x_845;
  WriteMetric();
  auto x_850 = eval_expr_x_849(x_773);
  x_773->var_disabled = x_850;
  WriteMetric();
  auto x_855 = eval_expr_x_854(x_773);
  x_773->var_visible = x_855;
  WriteMetric();
  auto x_860 = eval_expr_x_859(x_773);
  x_773->var_line_break = x_860;
  return MakeUnit();
}
auto eval_stmts_x_413(const auto &x_864) {
  WriteMetric();
  auto x_866 = eval_expr_x_865(x_864);
  x_864->var_box_width = x_866;
  WriteMetric();
  auto x_871 = eval_expr_x_870(x_864);
  x_864->var_box_height = x_871;
  WriteMetric();
  auto x_876 = eval_expr_x_875(x_864);
  x_864->var_left_over = x_876;
  WriteMetric();
  auto x_881 = eval_expr_x_880(x_864);
  x_864->var_flex_amount = x_881;
  WriteMetric();
  auto x_886 = eval_expr_x_885(x_864);
  x_864->var_flex_unit = x_886;
  WriteMetric();
  auto x_891 = eval_expr_x_890(x_864);
  x_864->var_x = x_891;
  WriteMetric();
  auto x_896 = eval_expr_x_895(x_864);
  x_864->var_width_internal = x_896;
  WriteMetric();
  auto x_901 = eval_expr_x_900(x_864);
  x_864->var_width_external = x_901;
  WriteMetric();
  auto x_906 = eval_expr_x_905(x_864);
  x_864->var_y = x_906;
  WriteMetric();
  auto x_911 = eval_expr_x_910(x_864);
  x_864->var_height_internal = x_911;
  WriteMetric();
  auto x_916 = eval_expr_x_915(x_864);
  x_864->var_height_external = x_916;
  WriteMetric();
  auto x_921 = eval_expr_x_920(x_864);
  x_864->var_line_height = x_921;
  return MakeUnit();
}
auto x_50(const auto &x_51, const auto &x_52, const auto &x_53) {
  auto x_54 = ListHeadExn(x_51);
  auto x_55 = ListTailExn(x_51);
  if (ListIsEmpty(x_55)) {
    auto x_56 = ListSplitN((x_52->children), x_54);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn((x_52->children), x_54)), layout_size_x_3(x_53)));
    x_52->children = ListAppend(Zro(x_56), Cons(x_53, ListTailExn(Fst(x_56))));
    return MakeUnit();
  } else {
    return x_50(x_55, ListNthExn((x_52->children), x_54), x_53);
  }
}
auto replace_layout_node_x_49(const auto &x_51, const auto &x_52, const auto &x_53) { return x_50(x_51, x_52, x_53); }
auto x_57(const auto &x_58, const auto &x_59, const auto &x_60) {
  auto x_61 = ListHeadExn(x_58);
  auto x_62 = ListTailExn(x_58);
  if (ListIsEmpty(x_62)) {
    OutputChangeMetric(layout_size_x_3(x_60));
    auto x_63 = ListSplitN((x_59->children), x_61);
    x_59->children = ListAppend(Zro(x_63), Cons(x_60, Fst(x_63)));
  } else {
    return x_57(x_62, ListNthExn((x_59->children), x_61), x_60);
  }
}
auto add_layout_node_x_47(const auto &x_58, const auto &x_59, const auto &x_60) { return x_57(x_58, x_59, x_60); }
auto x_64(const auto &x_65, const auto &x_66, const auto &x_67) {
  auto x_68 = ListHeadExn(x_65);
  auto x_69 = ListTailExn(x_65);
  if (ListIsEmpty(x_69)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn((x_66->children), x_68)));
    auto x_70 = ListSplitN((x_66->children), x_68);
    x_66->children = ListAppend(Zro(x_70), ListTailExn(Fst(x_70)));
  } else {
    return x_64(x_69, ListNthExn((x_66->children), x_68), x_67);
  }
}
auto remove_layout_node_x_45(const auto &x_65, const auto &x_66, const auto &x_67) { return x_64(x_65, x_66, x_67); }
auto x_71(const auto &x_72, const auto &x_73, const auto &x_74) {
  return ListMatch(
      x_72,
      [&](const auto &x_77) {
        auto x_78 = Zro(x_74);
        auto x_79 = Zro(x_78);
        auto x_80 = Fst(x_78);
        auto x_81 = Fst(x_74);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3539 = x_79;
        if (x_3539 == "attributes") {
          std::string x_3540 = x_80;
          if (x_3540 == "width") {
            WriteMetric();
            HashtblAddExn((x_73->attr), "width", x_81);
            return MakeUnit();
          } else if (x_3540 == "image_height") {
            WriteMetric();
            HashtblAddExn((x_73->attr), "image_height", x_81);
            return MakeUnit();
          } else if (x_3540 == "image_width") {
            WriteMetric();
            HashtblAddExn((x_73->attr), "image_width", x_81);
            return MakeUnit();
          } else if (x_3540 == "height") {
            WriteMetric();
            HashtblAddExn((x_73->attr), "height", x_81);
            return MakeUnit();
          } else if (x_3540 == "viewBox") {
            WriteMetric();
            HashtblAddExn((x_73->attr), "viewBox", x_81);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3539 == "properties") {
          std::string x_3541 = x_80;
          if (x_3541 == "width") {
            WriteMetric();
            HashtblAddExn((x_73->prop), "width", x_81);
            return MakeUnit();
          } else if (x_3541 == "flex-grow") {
            WriteMetric();
            HashtblAddExn((x_73->prop), "flex-grow", x_81);
            return MakeUnit();
          } else if (x_3541 == "height") {
            WriteMetric();
            HashtblAddExn((x_73->prop), "height", x_81);
            return MakeUnit();
          } else if (x_3541 == "display") {
            WriteMetric();
            HashtblAddExn((x_73->prop), "display", x_81);
            return MakeUnit();
          } else if (x_3541 == "position") {
            WriteMetric();
            HashtblAddExn((x_73->prop), "position", x_81);
            return MakeUnit();
          } else if (x_3541 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn((x_73->prop), "flex-shrink", x_81);
            return MakeUnit();
          } else if (x_3541 == "flex-direction") {
            WriteMetric();
            HashtblAddExn((x_73->prop), "flex-direction", x_81);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_75, const auto &x_76) { return x_71(x_76, ListNthExn((x_73->children), x_75), x_74); });
}
auto insert_value_x_43(const auto &x_72, const auto &x_73, const auto &x_74) { return x_71(x_72, x_73, x_74); }
auto x_82(const auto &x_83, const auto &x_84, const auto &x_85) {
  return ListMatch(
      x_83,
      [&](const auto &x_88) {
        auto x_89 = Zro(x_85);
        auto x_90 = Fst(x_85);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3542 = x_89;
        if (x_3542 == "attributes") {
          std::string x_3543 = x_90;
          if (x_3543 == "width") {
            WriteMetric();
            HashtblForceRemove((x_84->attr), "width");
            return MakeUnit();
          } else if (x_3543 == "image_height") {
            WriteMetric();
            HashtblForceRemove((x_84->attr), "image_height");
            return MakeUnit();
          } else if (x_3543 == "image_width") {
            WriteMetric();
            HashtblForceRemove((x_84->attr), "image_width");
            return MakeUnit();
          } else if (x_3543 == "height") {
            WriteMetric();
            HashtblForceRemove((x_84->attr), "height");
            return MakeUnit();
          } else if (x_3543 == "viewBox") {
            WriteMetric();
            HashtblForceRemove((x_84->attr), "viewBox");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3542 == "properties") {
          std::string x_3544 = x_90;
          if (x_3544 == "width") {
            WriteMetric();
            HashtblForceRemove((x_84->prop), "width");
            return MakeUnit();
          } else if (x_3544 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove((x_84->prop), "flex-grow");
            return MakeUnit();
          } else if (x_3544 == "height") {
            WriteMetric();
            HashtblForceRemove((x_84->prop), "height");
            return MakeUnit();
          } else if (x_3544 == "display") {
            WriteMetric();
            HashtblForceRemove((x_84->prop), "display");
            return MakeUnit();
          } else if (x_3544 == "position") {
            WriteMetric();
            HashtblForceRemove((x_84->prop), "position");
            return MakeUnit();
          } else if (x_3544 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove((x_84->prop), "flex-shrink");
            return MakeUnit();
          } else if (x_3544 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove((x_84->prop), "flex-direction");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_86, const auto &x_87) { return x_82(x_87, ListNthExn((x_84->children), x_86), x_85); });
}
auto delete_value_x_41(const auto &x_83, const auto &x_84, const auto &x_85) { return x_82(x_83, x_84, x_85); }
auto x_91(const auto &x_92, const auto &x_93, const auto &x_94) {
  return ListMatch(
      x_92,
      [&](const auto &x_97) {
        auto x_98 = Zro(x_94);
        auto x_99 = Zro(x_98);
        auto x_100 = Fst(x_98);
        auto x_101 = Fst(x_94);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3545 = x_99;
        if (x_3545 == "attributes") {
          std::string x_3546 = x_100;
          if (x_3546 == "width") {
            WriteMetric();
            HashtblForceRemove((x_93->attr), "width");
            WriteMetric();
            HashtblAddExn((x_93->attr), "width", x_101);
            return MakeUnit();
          } else if (x_3546 == "image_height") {
            WriteMetric();
            HashtblForceRemove((x_93->attr), "image_height");
            WriteMetric();
            HashtblAddExn((x_93->attr), "image_height", x_101);
            return MakeUnit();
          } else if (x_3546 == "image_width") {
            WriteMetric();
            HashtblForceRemove((x_93->attr), "image_width");
            WriteMetric();
            HashtblAddExn((x_93->attr), "image_width", x_101);
            return MakeUnit();
          } else if (x_3546 == "height") {
            WriteMetric();
            HashtblForceRemove((x_93->attr), "height");
            WriteMetric();
            HashtblAddExn((x_93->attr), "height", x_101);
            return MakeUnit();
          } else if (x_3546 == "viewBox") {
            WriteMetric();
            HashtblForceRemove((x_93->attr), "viewBox");
            WriteMetric();
            HashtblAddExn((x_93->attr), "viewBox", x_101);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3545 == "properties") {
          std::string x_3547 = x_100;
          if (x_3547 == "width") {
            WriteMetric();
            HashtblForceRemove((x_93->prop), "width");
            WriteMetric();
            HashtblAddExn((x_93->prop), "width", x_101);
            return MakeUnit();
          } else if (x_3547 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove((x_93->prop), "flex-grow");
            WriteMetric();
            HashtblAddExn((x_93->prop), "flex-grow", x_101);
            return MakeUnit();
          } else if (x_3547 == "height") {
            WriteMetric();
            HashtblForceRemove((x_93->prop), "height");
            WriteMetric();
            HashtblAddExn((x_93->prop), "height", x_101);
            return MakeUnit();
          } else if (x_3547 == "display") {
            WriteMetric();
            HashtblForceRemove((x_93->prop), "display");
            WriteMetric();
            HashtblAddExn((x_93->prop), "display", x_101);
            return MakeUnit();
          } else if (x_3547 == "position") {
            WriteMetric();
            HashtblForceRemove((x_93->prop), "position");
            WriteMetric();
            HashtblAddExn((x_93->prop), "position", x_101);
            return MakeUnit();
          } else if (x_3547 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove((x_93->prop), "flex-shrink");
            WriteMetric();
            HashtblAddExn((x_93->prop), "flex-shrink", x_101);
            return MakeUnit();
          } else if (x_3547 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove((x_93->prop), "flex-direction");
            WriteMetric();
            HashtblAddExn((x_93->prop), "flex-direction", x_101);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_95, const auto &x_96) { return x_91(x_96, ListNthExn((x_93->children), x_95), x_94); });
}
auto replace_value_x_39(const auto &x_92, const auto &x_93, const auto &x_94) { return x_91(x_92, x_93, x_94); }
auto x_102(const auto &x_103, const auto &x_104, const auto &x_105) {
  auto x_106 = ListHeadExn(x_103);
  auto x_107 = ListTailExn(x_103);
  if (ListIsEmpty(x_107)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn((x_104->children), x_106)), node_size_x_4(x_105)));
    auto x_108 = ListSplitN((x_104->children), x_106);
    auto x_109 = Zro(x_108);
    auto x_110 = Fst(x_108);
    auto x_111 = ListHeadExn(x_110);
    auto x_112 = ListTailExn(x_110);
    OptionMatch(
        x_111.prev, [&](const auto &x_114) { return MakeUnit(); },
        [&](const auto &x_113) { x_113->next = x_111.next; });
    OptionMatch(
        x_111.next, [&](const auto &x_116) { return MakeUnit(); },
        [&](const auto &x_115) { x_115->prev = x_111.prev; });
    x_104->children = ListAppend(x_109, x_112);
    if (ListIsEmpty(x_109)) {
      x_104->first = ListHead(x_112);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_112)) {
      x_104->last = ListLast(x_109);
    } else {
      MakeUnit();
    }
    MakeUnit();
    auto x_179 = ListSplitN((x_104->children), x_106);
    auto x_180 = Zro(x_179);
    auto x_181 = Fst(x_179);
    x_104->children = ListAppend(x_180, Cons(x_105, x_181));
    if (ListIsEmpty(x_180)) {
      x_104->first = Some(x_105);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_181)) {
      x_104->last = Some(x_105);
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_180), [&](const auto &x_183) { x_105->prev = nullptr; },
        [&](const auto &x_182) {
          x_105->prev = Some(x_182);
          x_182->next = Some(x_105);
        });
    OptionMatch(
        ListHead(x_181), [&](const auto &x_185) { x_105->next = nullptr; },
        [&](const auto &x_184) {
          x_105->next = Some(x_184);
          x_184->prev = Some(x_105);
        });
    x_105->parent = Some(x_104);
    MakeUnit();
    return MakeUnit();
  } else {
    return x_102(x_107, ListNthExn((x_104->children), x_106), x_105);
  }
}
auto replace_node_x_37(const auto &x_103, const auto &x_104, const auto &x_105) { return x_102(x_103, x_104, x_105); }
auto x_248(const auto &x_249) {
  x_249->first = nullptr;
  ListIter2((x_249->children), [&](const auto &x_250, const auto &x_251) {
    x_250->parent = Some(x_249);
    x_251->parent = Some(x_249);
    x_250->next = Some(x_251);
    x_251->prev = Some(x_250);
    if (IsNone(x_249.first)) {
      x_249->first = Some(x_250);
    } else {
      MakeUnit();
    }
    x_249->last = Some(x_251);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_35(const auto &x_249) { return x_248(x_249); }
auto x_252(const auto &x_253, const auto &x_254, const auto &x_255) {
  auto x_256 = ListHeadExn(x_253);
  auto x_257 = ListTailExn(x_253);
  if (ListIsEmpty(x_257)) {
    InputChangeMetric(node_size_x_4(ListNthExn((x_254->children), x_256)));
    auto x_258 = ListSplitN((x_254->children), x_256);
    auto x_259 = Zro(x_258);
    auto x_260 = Fst(x_258);
    auto x_261 = ListHeadExn(x_260);
    auto x_262 = ListTailExn(x_260);
    OptionMatch(
        x_261.prev, [&](const auto &x_264) { return MakeUnit(); },
        [&](const auto &x_263) { x_263->next = x_261.next; });
    OptionMatch(
        x_261.next, [&](const auto &x_266) { return MakeUnit(); },
        [&](const auto &x_265) { x_265->prev = x_261.prev; });
    x_254->children = ListAppend(x_259, x_262);
    if (ListIsEmpty(x_259)) {
      x_254->first = ListHead(x_262);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_262)) {
      x_254->last = ListLast(x_259);
    } else {
      MakeUnit();
    }
    return MakeUnit();
  } else {
    return x_252(x_257, ListNthExn((x_254->children), x_256), x_255);
  }
}
auto remove_node_x_33(const auto &x_253, const auto &x_254, const auto &x_255) { return x_252(x_253, x_254, x_255); }
auto x_329(const auto &x_330) {
  x_330->first = nullptr;
  ListIter2((x_330->children), [&](const auto &x_331, const auto &x_332) {
    x_331->parent = Some(x_330);
    x_332->parent = Some(x_330);
    x_331->next = Some(x_332);
    x_332->prev = Some(x_331);
    if (IsNone(x_330.first)) {
      x_330->first = Some(x_331);
    } else {
      MakeUnit();
    }
    x_330->last = Some(x_332);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_30(const auto &x_330) { return x_329(x_330); }
auto x_333(const auto &x_334, const auto &x_335, const auto &x_336) {
  auto x_337 = ListHeadExn(x_334);
  auto x_338 = ListTailExn(x_334);
  if (ListIsEmpty(x_338)) {
    InputChangeMetric(node_size_x_4(x_336));
    auto x_339 = ListSplitN((x_335->children), x_337);
    auto x_340 = Zro(x_339);
    auto x_341 = Fst(x_339);
    x_335->children = ListAppend(x_340, Cons(x_336, x_341));
    if (ListIsEmpty(x_340)) {
      x_335->first = Some(x_336);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_341)) {
      x_335->last = Some(x_336);
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_340), [&](const auto &x_343) { x_336->prev = nullptr; },
        [&](const auto &x_342) {
          x_336->prev = Some(x_342);
          x_342->next = Some(x_336);
        });
    OptionMatch(
        ListHead(x_341), [&](const auto &x_345) { x_336->next = nullptr; },
        [&](const auto &x_344) {
          x_336->next = Some(x_344);
          x_344->prev = Some(x_336);
        });
    x_336->parent = Some(x_335);
    return MakeUnit();
  } else {
    return x_333(x_338, ListNthExn((x_335->children), x_337), x_336);
  }
}
auto add_node_x_28(const auto &x_334, const auto &x_335, const auto &x_336) { return x_333(x_334, x_335, x_336); }
auto x_408(const auto &x_409) {
  x_409->first = nullptr;
  ListIter2((x_409->children), [&](const auto &x_410, const auto &x_411) {
    x_410->parent = Some(x_409);
    x_411->parent = Some(x_409);
    x_410->next = Some(x_411);
    x_411->prev = Some(x_410);
    if (IsNone(x_409.first)) {
      x_409->first = Some(x_410);
    } else {
      MakeUnit();
    }
    x_409->last = Some(x_411);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_26(const auto &x_409) { return x_408(x_409); }
auto eval_stmts_x_22(const auto &x_412) { return MakeUnit(); }
auto eval_stmts_x_21(const auto &x_415) { return MakeUnit(); }
auto x_419(const auto &x_420) {
  x_420->first = nullptr;
  ListIter2((x_420->children), [&](const auto &x_421, const auto &x_422) {
    x_421->parent = Some(x_420);
    x_422->parent = Some(x_420);
    x_421->next = Some(x_422);
    x_422->prev = Some(x_421);
    if (IsNone(x_420.first)) {
      x_420->first = Some(x_421);
    } else {
      MakeUnit();
    }
    x_420->last = Some(x_422);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_19(const auto &x_420) { return x_419(x_420); }
auto eval_stmts_x_17(const auto &x_423) { return MakeUnit(); }
auto eval_stmts_x_16(const auto &x_426) { return MakeUnit(); }
auto x_430(const auto &x_431) {
  x_431->first = nullptr;
  ListIter2((x_431->children), [&](const auto &x_432, const auto &x_433) {
    x_432->parent = Some(x_431);
    x_433->parent = Some(x_431);
    x_432->next = Some(x_433);
    x_433->prev = Some(x_432);
    if (IsNone(x_431.first)) {
      x_431->first = Some(x_432);
    } else {
      MakeUnit();
    }
    x_431->last = Some(x_433);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_13(const auto &x_431) { return x_430(x_431); }
auto x_434(const auto &x_435) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum((x_435->children), [&](const auto &x_436) { return x_434(x_436); }));
}
auto node_size_x_4(const auto &x_435) { return x_434(x_435); }
auto x_437(const auto &x_438) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum((x_438->children), [&](const auto &x_439) { return x_437(x_439); }));
}
auto layout_size_x_3(const auto &x_438) { return x_437(x_438); }
LayoutNode x_440(const auto &x_441) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_441)), [&](const auto &x_442) { return x_440(x_442); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_441) { return x_440(x_441); }
Node x_443(const auto &x_444) {
  return MakeNode((x_444->name), (x_444->attr), (x_444->prop), (x_444->extern_id),
                  ListMap((x_444->children), [&](const auto &x_445) { return x_443(x_445); }));
}
Node node_to_fs_node_x_1(const auto &x_444) { return x_443(x_444); }
Node x_446(const auto &x_447) {
  return MakeNode(JsonToString(JsonMember("name", x_447)), JsonToDict(JsonMember("attributes", x_447)),
                  JsonToDict(JsonMember("properties", x_447)), JsonToInt(JsonMember("id", x_447)),
                  ListMap(JsonToList(JsonMember("children", x_447)), [&](const auto &x_448) { return x_446(x_448); }));
}
Node json_to_node_aux_x_0(const auto &x_447) { return x_446(x_447); }
int main() {
  WithOutFile("hn_type.out", [&](const auto &x_5) {
    PrintEndline("RUNNING FS");
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
        return x_12;
      }();
      auto x_15 = json_to_layout_node_x_2(JsonMember("node", x_10));
      OutputChangeMetric(layout_size_x_3(x_15));
      InputChangeMetric(node_size_x_4(x_14));
      JsonToChannel(x_5, [&]() {
        auto x_3548 = FreshJson();
        WriteJson(x_3548, "name", "FS");
        WriteJson(x_3548, "diff_num", ReadRef(x_7));
        WriteJson(x_3548, "read_count", MetricReadCount());
        WriteJson(x_3548, "meta_read_count", MetricMetaReadCount());
        WriteJson(x_3548, "write_count", MetricWriteCount());
        WriteJson(x_3548, "meta_write_count", MetricMetaWriteCount());
        WriteJson(x_3548, "queue_size_acc", MetricQueueSizeAcc());
        WriteJson(x_3548, "input_change_count", MetricInputChangeCount());
        WriteJson(x_3548, "output_change_count", MetricOutputChangeCount());
        WriteJson(x_3548, "html", "");
        WriteJson(x_3548, "command", StackToList(x_11));
        return x_3548;
      }());
      OutputString(x_5, "\n");
      ClearStack(x_11);
      WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
      auto x_20 = [&]() {
        auto x_18 = node_to_fs_node_x_1(x_14);
        x_18->parent = nullptr;
        x_18->prev = nullptr;
        x_18->next = nullptr;
        return x_18;
      }();
      AssertNodeValueEqual(x_14, x_20);
      ResetMetric();
      PrintEndline("EVAL OK!");
      IterLines(x_6, [&](const auto &x_23) {
        auto x_24 = JsonOfString(x_23);
        PushStack(x_11, x_24);
        std::string x_3550 = JsonToString(JsonMember("name", x_24));
        if (x_3550 == "add") {
          return add_node_x_28(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_27) { return JsonToInt(x_27); }), x_14,
              [&]() {
                auto x_25 = json_to_node_aux_x_0(JsonMember("node", x_24));
                x_25->parent = nullptr;
                x_25->prev = nullptr;
                x_25->next = nullptr;
                return x_25;
              }());
        } else if (x_3550 == "recalculate") {
          JsonToChannel(x_5, [&]() {
            auto x_3549 = FreshJson();
            WriteJson(x_3549, "name", "FS");
            WriteJson(x_3549, "diff_num", ReadRef(x_7));
            WriteJson(x_3549, "read_count", MetricReadCount());
            WriteJson(x_3549, "meta_read_count", MetricMetaReadCount());
            WriteJson(x_3549, "write_count", MetricWriteCount());
            WriteJson(x_3549, "meta_write_count", MetricMetaWriteCount());
            WriteJson(x_3549, "queue_size_acc", MetricQueueSizeAcc());
            WriteJson(x_3549, "input_change_count", MetricInputChangeCount());
            WriteJson(x_3549, "output_change_count", MetricOutputChangeCount());
            WriteJson(x_3549, "html", "");
            WriteJson(x_3549, "command", StackToList(x_11));
            return x_3549;
          }());
          OutputString(x_5, "\n");
          ClearStack(x_11);
          WriteRef(x_7, IntAdd(ReadRef(x_7), static_cast<int64_t>(1)));
          auto x_31 = [&]() {
            auto x_29 = node_to_fs_node_x_1(x_14);
            x_29->parent = nullptr;
            x_29->prev = nullptr;
            x_29->next = nullptr;
            return x_29;
          }();
          AssertNodeValueEqual(x_14, x_31);
          ResetMetric();
          return MakeUnit();
        } else if (x_3550 == "remove") {
          return remove_node_x_33(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_32) { return JsonToInt(x_32); }), x_14,
              MakeUnit());
        } else if (x_3550 == "replace") {
          return replace_node_x_37(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_36) { return JsonToInt(x_36); }), x_14,
              [&]() {
                auto x_34 = json_to_node_aux_x_0(JsonMember("node", x_24));
                x_34->parent = nullptr;
                x_34->prev = nullptr;
                x_34->next = nullptr;
                return x_34;
              }());
        } else if (x_3550 == "replace_value") {
          return replace_value_x_39(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_38) { return JsonToInt(x_38); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_24)), JsonToString(JsonMember("key", x_24))),
                       JsonToValue(JsonMember("value", x_24))));
        } else if (x_3550 == "delete_value") {
          return delete_value_x_41(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_40) { return JsonToInt(x_40); }), x_14,
              MakePair(JsonToString(JsonMember("type", x_24)), JsonToString(JsonMember("key", x_24))));
        } else if (x_3550 == "insert_value") {
          return insert_value_x_43(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_42) { return JsonToInt(x_42); }), x_14,
              MakePair(MakePair(JsonToString(JsonMember("type", x_24)), JsonToString(JsonMember("key", x_24))),
                       JsonToValue(JsonMember("value", x_24))));
        } else if (x_3550 == "layout_remove") {
          return remove_layout_node_x_45(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_44) { return JsonToInt(x_44); }), x_15,
              MakeUnit());
        } else if (x_3550 == "layout_add") {
          return add_layout_node_x_47(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_46) { return JsonToInt(x_46); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_24)));
        } else if (x_3550 == "layout_replace") {
          return replace_layout_node_x_49(
              ListMap(JsonToList(JsonMember("path", x_24)), [&](const auto &x_48) { return JsonToInt(x_48); }), x_15,
              json_to_layout_node_x_2(JsonMember("node", x_24)));
        } else if (x_3550 == "layout_info_changed") {
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