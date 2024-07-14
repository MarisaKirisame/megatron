#include "header.h"
auto var_modified_x_951(const auto &x_953) { return MakeUnit(); }
auto eval_expr_x_948(const auto &x_960) {
  if ((x_960.prev == nullptr) && not((*(x_960.prev)).var_line_break)) {
    return max(x_960.var_height_external, (*(x_960.prev)).var_line_height);
  } else {
    return x_960.var_height_external;
  }
}
auto var_modified_x_946(const auto &x_977) { return MakeUnit(); }
auto eval_expr_x_943(const auto &x_980) {
  if (eq(x_980.var_position, "absolute")) {
    return 0.;
  } else {
    return x_980.var_height_internal;
  }
}
auto var_modified_x_941(const auto &x_989) { return MakeUnit(); }
auto eval_expr_x_938(const auto &x_992) {
  if (x_992.var_intrinsic_height_is_height) {
    return x_992.var_intrinsic_height_internal;
  } else {
    if ((x_992.parent == nullptr) && (*(x_992.parent)).var_is_flex_column) {
      return plus(x_992.var_intrinsic_height_internal, mult(x_992.var_flex_amount, (*(x_992.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_992.var_height_expr, "%")) {
        return mult(x_992.var_box_height, divide(string_to_float(strip_suffix(x_992.var_height_expr, "%")), 100.));
      } else {
        assert(eq(x_992.var_height_expr, "fit-content"));
        return max(x_992.var_box_height, x_992.var_intrinsic_height_internal);
      }
    }
  }
}
auto var_modified_x_936(const auto &x_1045) { return MakeUnit(); }
auto eval_expr_x_933(const auto &x_1053) {
  if (x_1053.prev == nullptr) {
    if (x_1053.var_line_break || (*(x_1053.prev)).var_line_break) {
      return plus((*(x_1053.prev)).var_y, (*(x_1053.prev)).var_line_height);
    } else {
      return (*(x_1053.prev)).var_y;
    }
  } else {
    if (x_1053.parent == nullptr) {
      return (*(x_1053.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_931(const auto &x_1078) { return MakeUnit(); }
auto eval_expr_x_928(const auto &x_1082) {
  if (eq(x_1082.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1082.var_width_internal;
  }
}
auto var_modified_x_926(const auto &x_1091) { return MakeUnit(); }
auto eval_expr_x_923(const auto &x_1094) {
  if (x_1094.var_intrinsic_width_is_width) {
    return x_1094.var_intrinsic_width_internal;
  } else {
    if ((x_1094.parent == nullptr) && (*(x_1094.parent)).var_is_flex_row) {
      return plus(x_1094.var_intrinsic_width_internal, mult(x_1094.var_flex_amount, (*(x_1094.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1094.var_width_expr, "%")) {
        return mult(x_1094.var_box_width, divide(string_to_float(strip_suffix(x_1094.var_width_expr, "%")), 100.));
      } else {
        assert(eq(x_1094.var_width_expr, "fit-content"));
        return max(x_1094.var_box_width, x_1094.var_intrinsic_width_internal);
      }
    }
  }
}
auto var_modified_x_921(const auto &x_1147) { return MakeUnit(); }
auto eval_expr_x_918(const auto &x_1152) {
  if (x_1152.prev == nullptr) {
    if (x_1152.var_line_break || (*(x_1152.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_1152.prev)).var_x, (*(x_1152.prev)).var_width_external);
    }
  } else {
    if (x_1152.parent == nullptr) {
      return (*(x_1152.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_916(const auto &x_1173) { return MakeUnit(); }
auto eval_expr_x_913(const auto &x_1176) {
  if (gt(x_1176.var_left_over, 0.)) {
    return divide(x_1176.var_left_over, x_1176.var_flex_grow_sum);
  } else {
    return divide(x_1176.var_left_over, x_1176.var_flex_shrink_sum);
  }
}
auto var_modified_x_911(const auto &x_1197) { return MakeUnit(); }
auto eval_expr_x_908(const auto &x_1200) {
  if ((x_1200.parent == nullptr) && gt((*(x_1200.parent)).var_left_over, 0.)) {
    return x_1200.var_flex_grow;
  } else {
    return x_1200.var_flex_shrink;
  }
}
auto var_modified_x_906(const auto &x_1213) { return MakeUnit(); }
auto eval_expr_x_903(const auto &x_1218) {
  if (x_1218.var_is_flex_row) {
    return minus(x_1218.var_box_width, (x_1218.last == nullptr) ? ((*(x_1218.last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_1218.var_box_height, (x_1218.last == nullptr) ? ((*(x_1218.last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_901(const auto &x_1239) { return MakeUnit(); }
auto eval_expr_x_898(const auto &x_1243) {
  if (x_1243.parent == nullptr) {
    return (*(x_1243.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_896(const auto &x_1248) { return MakeUnit(); }
auto eval_expr_x_893(const auto &x_1252) {
  if (x_1252.parent == nullptr) {
    return (*(x_1252.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_890(const auto &x_1257) { return MakeUnit(); }
auto eval_expr_x_887(const auto &x_1275) {
  if (eq(x_1275.var_display, "none")) {
    return false;
  } else {
    if (eq(x_1275.var_position, "absolute")) {
      return false;
    } else {
      if ((x_1275.parent == nullptr) &&
          (eq((*(x_1275.parent)).var_display, "flex") || eq((*(x_1275.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_1275.var_display, "block")) {
          return true;
        } else {
          if (eq(x_1275.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_1275.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_1275.var_display, "flex")) {
                if (eq(HashtblForceFind(x_1275.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_1275.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    assert(eq(HashtblForceFind(x_1275.prop, "flex-direction"), "column-reverse"));
                    return true;
                  }
                }
              } else {
                if (eq(x_1275.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_1275.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_1275.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_1275.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_1275.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_1275.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_1275.var_display, "list-item")) {
                              return true;
                            } else {
                              assert(eq(x_1275.var_display, "grid"));
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
auto var_modified_x_885(const auto &x_1352) { return MakeUnit(); }
auto eval_expr_x_882(const auto &x_1354) {
  return ((not(x_1354.parent == nullptr) || (*(x_1354.parent)).var_visible) &&
          (neq(x_1354.var_display, "none") && (not(x_1354.var_inside_svg) && not(x_1354.var_disabled))));
}
auto var_modified_x_880(const auto &x_1371) { return MakeUnit(); }
auto eval_expr_x_877(const auto &x_1379) {
  if (eq(x_1379.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_1379.parent == nullptr) && (*(x_1379.parent)).var_disabled);
  }
}
auto var_modified_x_875(const auto &x_1384) { return MakeUnit(); }
auto eval_expr_x_872(const auto &x_1392) {
  return ((x_1392.parent == nullptr) && ((*(x_1392.parent)).var_is_svg_block || (*(x_1392.parent)).var_inside_svg));
}
auto var_modified_x_870(const auto &x_1401) { return MakeUnit(); }
auto eval_expr_x_867(const auto &x_1403) { return eq(x_1403.name, "svg"); }
auto var_modified_x_865(const auto &x_1404) { return MakeUnit(); }
auto eval_expr_x_862(const auto &x_1413) { return neq(x_1413.var_height_attr_expr, "auto"); }
auto var_modified_x_860(const auto &x_1418) { return MakeUnit(); }
auto eval_expr_x_857(const auto &x_1426) {
  if (not(IsSome(HashtblFind(x_1426.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1426.attr, "height")) ||
        has_suffix(HashtblForceFind(x_1426.attr, "height"), "%")) {
      return HashtblForceFind(x_1426.attr, "height");
    } else {
      assert(eq(HashtblForceFind(x_1426.attr, "height"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_855(const auto &x_1437) { return MakeUnit(); }
auto eval_expr_x_852(const auto &x_1447) { return neq(x_1447.var_width_attr_expr, "auto"); }
auto var_modified_x_850(const auto &x_1452) { return MakeUnit(); }
auto eval_expr_x_847(const auto &x_1460) {
  if (not(IsSome(HashtblFind(x_1460.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1460.attr, "width")) ||
        has_suffix(HashtblForceFind(x_1460.attr, "width"), "%")) {
      return HashtblForceFind(x_1460.attr, "width");
    } else {
      assert(eq(HashtblForceFind(x_1460.attr, "width"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_845(const auto &x_1471) { return MakeUnit(); }
auto eval_expr_x_842(const auto &x_1474) {
  if ((x_1474.parent == nullptr) &&
      (eq((*(x_1474.parent)).var_display, "flex") || eq((*(x_1474.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1474.parent)).var_flex_direction, "column") ||
        eq((*(x_1474.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      assert(eq((*(x_1474.parent)).var_flex_direction, "row"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_840(const auto &x_1499) { return MakeUnit(); }
auto eval_expr_x_837(const auto &x_1503) {
  if ((x_1503.parent == nullptr) &&
      (eq((*(x_1503.parent)).var_display, "flex") || eq((*(x_1503.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1503.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      assert(eq((*(x_1503.parent)).var_flex_direction, "column") ||
             eq((*(x_1503.parent)).var_flex_direction, "column-reverse"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_835(const auto &x_1528) { return MakeUnit(); }
auto eval_expr_x_832(const auto &x_1535) {
  if (IsSome(HashtblFind(x_1535.prop, "flex-direction"))) {
    return HashtblForceFind(x_1535.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_830(const auto &x_1538) { return MakeUnit(); }
auto eval_expr_x_827(const auto &x_1543) {
  return plus((x_1543.prev == nullptr) ? ((*(x_1543.prev)).var_flex_shrink_sum) : (0.), x_1543.var_flex_shrink);
}
auto var_modified_x_825(const auto &x_1552) { return MakeUnit(); }
auto eval_expr_x_822(const auto &x_1557) {
  return plus((x_1557.prev == nullptr) ? ((*(x_1557.prev)).var_flex_grow_sum) : (0.), x_1557.var_flex_grow);
}
auto var_modified_x_820(const auto &x_1566) { return MakeUnit(); }
auto eval_expr_x_817(const auto &x_1569) {
  if (IsSome(HashtblFind(x_1569.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_1569.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_815(const auto &x_1572) { return MakeUnit(); }
auto eval_expr_x_812(const auto &x_1575) {
  if (IsSome(HashtblFind(x_1575.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_1575.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_810(const auto &x_1578) { return MakeUnit(); }
auto eval_expr_x_807(const auto &x_1584) {
  if (IsSome(HashtblFind(x_1584.prop, "position"))) {
    return HashtblForceFind(x_1584.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_805(const auto &x_1587) { return MakeUnit(); }
auto eval_expr_x_802(const auto &x_1613) {
  if (IsSome(HashtblFind(x_1613.prop, "display"))) {
    return HashtblForceFind(x_1613.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_799(const auto &x_1616) { return MakeUnit(); }
auto eval_expr_x_796(const auto &x_1626) {
  if (x_1626.prev == nullptr) {
    if (x_1626.var_line_break) {
      return plus((*(x_1626.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_1626.prev)).var_intrinsic_current_line_height, x_1626.var_intrinsic_height_external));
    } else {
      return (*(x_1626.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1626.var_line_break) {
      return x_1626.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_794(const auto &x_1655) { return MakeUnit(); }
auto eval_expr_x_791(const auto &x_1665) {
  if (x_1665.var_line_break) {
    return 0.;
  } else {
    return max(x_1665.var_intrinsic_height_external,
               (x_1665.prev == nullptr) ? ((*(x_1665.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_789(const auto &x_1678) { return MakeUnit(); }
auto eval_expr_x_786(const auto &x_1685) {
  return plus((x_1685.prev == nullptr) ? ((*(x_1685.prev)).var_intrinsic_height_sum) : (0.),
              x_1685.var_intrinsic_height_external);
}
auto var_modified_x_784(const auto &x_1694) { return MakeUnit(); }
auto eval_expr_x_781(const auto &x_1699) {
  if (eq(x_1699.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1699.var_intrinsic_height_internal;
  }
}
auto var_modified_x_779(const auto &x_1708) { return MakeUnit(); }
auto eval_expr_x_776(const auto &x_1713) {
  if (eq(x_1713.var_display, "none")) {
    return 0.;
  } else {
    if (x_1713.var_inside_svg) {
      return 0.;
    } else {
      if (x_1713.var_disabled) {
        return 0.;
      } else {
        if (neq(x_1713.var_height_expr, "auto") &&
            (not(has_suffix(x_1713.var_height_expr, "%")) && neq(x_1713.var_height_expr, "fit-content"))) {
          if (has_suffix(x_1713.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_1713.var_height_expr, "px"));
          } else {
            if (has_suffix(x_1713.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_1713.var_height_expr, "ch"));
            } else {
              assert(has_suffix(x_1713.var_height_expr, "lh"));
              return string_to_float(strip_suffix(x_1713.var_height_expr, "lh"));
            }
          }
        } else {
          return plus(
              x_1713.var_children_intrinsic_height,
              (eq(x_1713.name, "#text"))
                  ? (ASSERT((!(x_1713.first == nullptr)), [&]() { return 10.; }))
                  : ((x_1713.var_is_default_case)
                         ? (0.)
                         : ((eq(x_1713.name, "BR"))
                                ? (ASSERT((!(x_1713.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_1713.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_1713.name, "svg"))
                                              ? ((x_1713.var_has_height_attr &&
                                                  string_is_float(x_1713.var_height_attr_expr))
                                                     ? (string_to_float(x_1713.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_1713.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_1713.attr, "viewBox"), " ", 3)))
                                                            : (ASSERT((x_1713.var_has_height_attr &&
                                                                       (has_suffix(x_1713.var_height_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_1713.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_1713.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 3)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_1713.var_height_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_1713.name, "IMG"))
                                                     ? ((x_1713.var_has_height_attr)
                                                            ? (string_to_float(x_1713.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_1713.attr, "image_height")) &&
                                                                not(x_1713.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_1713.attr, "image_height")))
                                                                   : (ASSERT((x_1713.var_has_width_attr &&
                                                                              (not(x_1713.var_has_height_attr) &&
                                                                               (IsSome(HashtblFind(x_1713.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_1713.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_1713.attr,
                                                                                                        "image_width"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_1713.var_width_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_1713.attr,
                                                                                             "image_height")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_1713.attr,
                                                                                             "image_width"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_1713.name, "IFRAME"))
                                                            ? (ASSERT((!x_1713.var_has_height_attr),
                                                                      [&]() { return 150.; }))
                                                            : ((eq(x_1713.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_1713.name, "VIDEO"), [&]() {
                                                                       assert(!x_1713.var_has_height_attr);
                                                                       return 150.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_774(const auto &x_1858) { return MakeUnit(); }
auto eval_expr_x_771(const auto &x_1860) {
  if (eq(x_1860.var_display, "none") || (x_1860.var_inside_svg || x_1860.var_disabled)) {
    return true;
  } else {
    if ((x_1860.parent == nullptr) && (*(x_1860.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1860.var_height_expr, "auto") ||
          (has_suffix(x_1860.var_height_expr, "px") ||
           (has_suffix(x_1860.var_height_expr, "ch") ||
            (has_suffix(x_1860.var_height_expr, "lh") || eq(x_1860.var_height_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_1860.var_height_expr, "%") || eq(x_1860.var_height_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_769(const auto &x_1909) { return MakeUnit(); }
auto eval_expr_x_766(const auto &x_1929) {
  if (IsSome(HashtblFind(x_1929.prop, "height"))) {
    return HashtblForceFind(x_1929.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_764(const auto &x_1932) { return MakeUnit(); }
auto eval_expr_x_761(const auto &x_1934) {
  if (x_1934.last == nullptr) {
    return plus((*(x_1934.last)).var_finished_intrinsic_height_sum, (*(x_1934.last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_759(const auto &x_1943) { return MakeUnit(); }
auto eval_expr_x_756(const auto &x_1950) {
  return plus((x_1950.prev == nullptr) ? ((*(x_1950.prev)).var_intrinsic_width_sum) : (0.),
              x_1950.var_intrinsic_width_external);
}
auto var_modified_x_754(const auto &x_1959) { return MakeUnit(); }
auto eval_expr_x_751(const auto &x_1966) {
  return max(x_1966.var_intrinsic_current_line_width,
             (x_1966.prev == nullptr) ? ((*(x_1966.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_749(const auto &x_1975) { return MakeUnit(); }
auto eval_expr_x_746(const auto &x_1980) {
  return plus(x_1980.var_intrinsic_width_external,
              ((x_1980.prev == nullptr) && not((*(x_1980.prev)).var_line_break))
                  ? ((*(x_1980.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_744(const auto &x_1993) { return MakeUnit(); }
auto eval_expr_x_741(const auto &x_1996) {
  if (eq(x_1996.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1996.var_intrinsic_width_internal;
  }
}
auto var_modified_x_739(const auto &x_2005) { return MakeUnit(); }
auto eval_expr_x_736(const auto &x_2010) {
  if (eq(x_2010.var_display, "none")) {
    return 0.;
  } else {
    if (x_2010.var_inside_svg) {
      return 0.;
    } else {
      if (x_2010.var_disabled) {
        return 0.;
      } else {
        if (neq(x_2010.var_width_expr, "auto") &&
            (not(has_suffix(x_2010.var_width_expr, "%")) &&
             (neq(x_2010.var_width_expr, "fit-content") &&
              (neq(x_2010.var_width_expr, "max-content") && not(has_prefix(x_2010.var_width_expr, "calc")))))) {
          if (has_suffix(x_2010.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_2010.var_width_expr, "px"));
          } else {
            assert(has_suffix(x_2010.var_width_expr, "ch"));
            return string_to_float(strip_suffix(x_2010.var_width_expr, "ch"));
          }
        } else {
          return plus(
              x_2010.var_children_intrinsic_width,
              (eq(x_2010.name, "#text"))
                  ? (ASSERT((!(x_2010.first == nullptr)), [&]() { return 100.; }))
                  : ((x_2010.var_is_default_case)
                         ? (0.)
                         : ((eq(x_2010.name, "BR"))
                                ? (ASSERT((!(x_2010.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_2010.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_2010.name, "svg"))
                                              ? ((x_2010.var_has_width_attr &&
                                                  string_is_float(x_2010.var_width_attr_expr))
                                                     ? (string_to_float(x_2010.var_width_attr_expr))
                                                     : ((not(x_2010.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_2010.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_2010.attr, "viewBox"), " ", 2)))
                                                            : (ASSERT((x_2010.var_has_width_attr &&
                                                                       (has_suffix(x_2010.var_width_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_2010.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_2010.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 2)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_2010.var_width_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_2010.name, "IMG"))
                                                     ? ((x_2010.var_has_width_attr)
                                                            ? (string_to_float(x_2010.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_2010.attr, "image_width")) &&
                                                                not(x_2010.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_2010.attr, "image_width")))
                                                                   : (ASSERT((not(x_2010.var_has_width_attr) &&
                                                                              (x_2010.var_has_height_attr &&
                                                                               (IsSome(HashtblFind(x_2010.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_2010.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_2010.attr,
                                                                                                        "image_height"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_2010.var_height_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_2010.attr,
                                                                                             "image_width")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_2010.attr,
                                                                                             "image_height"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_2010.name, "IFRAME"))
                                                            ? (ASSERT((!x_2010.var_has_width_attr),
                                                                      [&]() { return 300.; }))
                                                            : ((eq(x_2010.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_2010.name, "VIDEO"), [&]() {
                                                                       assert(!x_2010.var_has_width_attr);
                                                                       return 300.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_734(const auto &x_2163) { return MakeUnit(); }
auto eval_expr_x_731(const auto &x_2165) {
  if (x_2165.last == nullptr) {
    return (*(x_2165.last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_729(const auto &x_2170) { return MakeUnit(); }
auto eval_expr_x_726(const auto &x_2172) {
  if (eq(x_2172.var_display, "none") || (x_2172.var_inside_svg || x_2172.var_disabled)) {
    return true;
  } else {
    if ((x_2172.parent == nullptr) && (*(x_2172.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2172.var_width_expr, "auto") ||
          (has_suffix(x_2172.var_width_expr, "px") ||
           (has_suffix(x_2172.var_width_expr, "ch") ||
            (has_prefix(x_2172.var_width_expr, "calc(") || eq(x_2172.var_width_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_2172.var_width_expr, "%") || eq(x_2172.var_width_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_724(const auto &x_2221) { return MakeUnit(); }
auto eval_expr_x_721(const auto &x_2224) {
  if (eq(x_2224.var_display, "none")) {
    return true;
  } else {
    if (x_2224.var_inside_svg) {
      return true;
    } else {
      if (x_2224.var_disabled) {
        return true;
      } else {if ( eq(x_2224.name,"#document") || (eq(x_2224.name,"#shadow-root") || (eq(x_2224.name,"DIV") || (eq(x_2224.name,"HTML") || (eq(x_2224.name,"BODY") || (eq(x_2224.name,"BUTTON") || (eq(x_2224.name,"FOOTER") || (eq(x_2224.name,"SELECT") || (eq(x_2224.name,"SECTION") || (eq(x_2224.name,"FORM") || (eq(x_2224.name,"CENTER") || (eq(x_2224.name,"TD") || (eq(x_2224.name,"TR") || (eq(x_2224.name,"TBODY") || (eq(x_2224.name,"TABLE") || (eq(x_2224.name,"SPAN") || (eq(x_2224.name,"FONT") || (eq(x_2224.name,"A") || (eq(x_2224.name,"ARTICLE") || (eq(x_2224.name,"P") || (eq(x_2224.name,"U") || (eq(x_2224.name,"UL") || (eq(x_2224.name,"B") || (eq(x_2224.name,"H1") || (eq(x_2224.name,"H2") || (eq(x_2224.name,"H3") || (eq(x_2224.name,"H4") || (eq(x_2224.name,"DT") || (eq(x_2224.name,"DD") || (eq(x_2224.name,"DL") || (eq(x_2224.name,"LI") || (eq(x_2224.name,"LABEL") || (eq(x_2224.name,"OL") || (eq(x_2224.name,"NAV") || (eq(x_2224.name,"HEADER") || (eq(x_2224.name,"HEAD") || (eq(x_2224.name,"SOURCE") || (eq(x_2224.name,"PICTURE") || (eq(x_2224.name,"FIGURE") || (eq(x_2224.name,"FIGCAPTION") || (eq(x_2224.name,"MAIN") || (eq(x_2224.name,"REACT-PARTIAL") || (eq(x_2224.name,"QUERY-BUILDER") || (eq(x_2224.name,"MODAL-DIALOG") || (eq(x_2224.name,"SCROLLABLE-REGION") || (eq(x_2224.name,"DIALOG-HELPER") || (eq(x_2224.name,"AUTO-CHECK") || (eq(x_2224.name,"TOOL-TIP") || (eq(x_2224.name,"CUSTOM-SCOPES") || (eq(x_2224.name,"QBSEARCH-INPUT") || (eq(x_2224.name,"INCLUDE-FRAGMENT") || (eq(x_2224.name,"COOKIE-CONSENT-LINK") || (eq(x_2224.name,"FULLSTORY-CAPTURE") || (eq(x_2224.name,"GHCC-CONSENT") || (eq(x_2224.name,"GLOBAL-BANNER") || (eq(x_2224.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_2224.name,"CARD-SKEW") || (eq(x_2224.name,"EM") || (eq(x_2224.name,"ASIDE") || (eq(x_2224.name,"AUDIO") || (eq(x_2224.name,"SUP") || (eq(x_2224.name,"TIME") || (eq(x_2224.name,"ABBR") || (eq(x_2224.name,"SMALL") || (eq(x_2224.name,"SLOT") || eq(x_2224.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          assert(eq(x_2224.name, "#text") ||
                 (eq(x_2224.name, "svg") ||
                  (eq(x_2224.name, "IFRAME") ||
                   (eq(x_2224.name, "INPUT") ||
                    (eq(x_2224.name, "VIDEO") ||
                     (eq(x_2224.name, "BR") || (eq(x_2224.name, "IMG") || eq(x_2224.name, "TEXTAREA"))))))));
          return false;
        }
      }
    }
  }
}
auto var_modified_x_719(const auto &x_2237) { return MakeUnit(); }
auto eval_expr_x_716(const auto &x_2257) {
  if (IsSome(HashtblFind(x_2257.prop, "width"))) {
    return HashtblForceFind(x_2257.prop, "width");
  } else {
    return "auto";
  }
}
auto var_modified_x_713(const auto &x_2260) { return MakeUnit(); }
auto eval_expr_x_710(const auto &x_2267) {
  if ((x_2267.prev == nullptr) && not((*(x_2267.prev)).var_line_break)) {
    return max(x_2267.var_height_external, (*(x_2267.prev)).var_line_height);
  } else {
    return x_2267.var_height_external;
  }
}
auto var_modified_x_708(const auto &x_2284) { return MakeUnit(); }
auto eval_expr_x_705(const auto &x_2287) {
  if (eq(x_2287.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2287.var_height_internal;
  }
}
auto var_modified_x_703(const auto &x_2296) { return MakeUnit(); }
auto eval_expr_x_700(const auto &x_2299) {
  if (x_2299.var_intrinsic_height_is_height) {
    return x_2299.var_intrinsic_height_internal;
  } else {
    if ((x_2299.parent == nullptr) && (*(x_2299.parent)).var_is_flex_column) {
      return plus(x_2299.var_intrinsic_height_internal, mult(x_2299.var_flex_amount, (*(x_2299.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2299.var_height_expr, "%")) {
        return mult(x_2299.var_box_height, divide(string_to_float(strip_suffix(x_2299.var_height_expr, "%")), 100.));
      } else {
        assert(eq(x_2299.var_height_expr, "fit-content"));
        return max(x_2299.var_box_height, x_2299.var_intrinsic_height_internal);
      }
    }
  }
}
auto var_modified_x_698(const auto &x_2352) { return MakeUnit(); }
auto eval_expr_x_695(const auto &x_2360) {
  if (x_2360.prev == nullptr) {
    if (x_2360.var_line_break || (*(x_2360.prev)).var_line_break) {
      return plus((*(x_2360.prev)).var_y, (*(x_2360.prev)).var_line_height);
    } else {
      return (*(x_2360.prev)).var_y;
    }
  } else {
    if (x_2360.parent == nullptr) {
      return (*(x_2360.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_693(const auto &x_2385) { return MakeUnit(); }
auto eval_expr_x_690(const auto &x_2389) {
  if (eq(x_2389.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2389.var_width_internal;
  }
}
auto var_modified_x_688(const auto &x_2398) { return MakeUnit(); }
auto eval_expr_x_685(const auto &x_2401) {
  if (x_2401.var_intrinsic_width_is_width) {
    return x_2401.var_intrinsic_width_internal;
  } else {
    if ((x_2401.parent == nullptr) && (*(x_2401.parent)).var_is_flex_row) {
      return plus(x_2401.var_intrinsic_width_internal, mult(x_2401.var_flex_amount, (*(x_2401.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2401.var_width_expr, "%")) {
        return mult(x_2401.var_box_width, divide(string_to_float(strip_suffix(x_2401.var_width_expr, "%")), 100.));
      } else {
        assert(eq(x_2401.var_width_expr, "fit-content"));
        return max(x_2401.var_box_width, x_2401.var_intrinsic_width_internal);
      }
    }
  }
}
auto var_modified_x_683(const auto &x_2454) { return MakeUnit(); }
auto eval_expr_x_680(const auto &x_2459) {
  if (x_2459.prev == nullptr) {
    if (x_2459.var_line_break || (*(x_2459.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_2459.prev)).var_x, (*(x_2459.prev)).var_width_external);
    }
  } else {
    if (x_2459.parent == nullptr) {
      return (*(x_2459.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_678(const auto &x_2480) { return MakeUnit(); }
auto eval_expr_x_675(const auto &x_2483) {
  if (gt(x_2483.var_left_over, 0.)) {
    return divide(x_2483.var_left_over, x_2483.var_flex_grow_sum);
  } else {
    return divide(x_2483.var_left_over, x_2483.var_flex_shrink_sum);
  }
}
auto var_modified_x_673(const auto &x_2504) { return MakeUnit(); }
auto eval_expr_x_670(const auto &x_2507) {
  if ((x_2507.parent == nullptr) && gt((*(x_2507.parent)).var_left_over, 0.)) {
    return x_2507.var_flex_grow;
  } else {
    return x_2507.var_flex_shrink;
  }
}
auto var_modified_x_668(const auto &x_2520) { return MakeUnit(); }
auto eval_expr_x_665(const auto &x_2525) {
  if (x_2525.var_is_flex_row) {
    return minus(x_2525.var_box_width, (x_2525.last == nullptr) ? ((*(x_2525.last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2525.var_box_height, (x_2525.last == nullptr) ? ((*(x_2525.last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_663(const auto &x_2546) { return MakeUnit(); }
auto eval_expr_x_660(const auto &x_2550) {
  if (x_2550.parent == nullptr) {
    return (*(x_2550.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_658(const auto &x_2555) { return MakeUnit(); }
auto eval_expr_x_655(const auto &x_2559) {
  if (x_2559.parent == nullptr) {
    return (*(x_2559.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_652(const auto &x_2564) { return MakeUnit(); }
auto eval_expr_x_649(const auto &x_2582) {
  if (eq(x_2582.var_display, "none")) {
    return false;
  } else {
    if (eq(x_2582.var_position, "absolute")) {
      return false;
    } else {
      if ((x_2582.parent == nullptr) &&
          (eq((*(x_2582.parent)).var_display, "flex") || eq((*(x_2582.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_2582.var_display, "block")) {
          return true;
        } else {
          if (eq(x_2582.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_2582.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_2582.var_display, "flex")) {
                if (eq(HashtblForceFind(x_2582.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_2582.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    assert(eq(HashtblForceFind(x_2582.prop, "flex-direction"), "column-reverse"));
                    return true;
                  }
                }
              } else {
                if (eq(x_2582.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_2582.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_2582.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_2582.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_2582.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_2582.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_2582.var_display, "list-item")) {
                              return true;
                            } else {
                              assert(eq(x_2582.var_display, "grid"));
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
auto var_modified_x_647(const auto &x_2659) { return MakeUnit(); }
auto eval_expr_x_644(const auto &x_2661) {
  return ((not(x_2661.parent == nullptr) || (*(x_2661.parent)).var_visible) &&
          (neq(x_2661.var_display, "none") && (not(x_2661.var_inside_svg) && not(x_2661.var_disabled))));
}
auto var_modified_x_642(const auto &x_2678) { return MakeUnit(); }
auto eval_expr_x_639(const auto &x_2686) {
  if (eq(x_2686.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_2686.parent == nullptr) && (*(x_2686.parent)).var_disabled);
  }
}
auto var_modified_x_637(const auto &x_2691) { return MakeUnit(); }
auto eval_expr_x_634(const auto &x_2699) {
  return ((x_2699.parent == nullptr) && ((*(x_2699.parent)).var_is_svg_block || (*(x_2699.parent)).var_inside_svg));
}
auto var_modified_x_632(const auto &x_2708) { return MakeUnit(); }
auto eval_expr_x_629(const auto &x_2710) { return eq(x_2710.name, "svg"); }
auto var_modified_x_627(const auto &x_2711) { return MakeUnit(); }
auto eval_expr_x_624(const auto &x_2720) { return neq(x_2720.var_height_attr_expr, "auto"); }
auto var_modified_x_622(const auto &x_2725) { return MakeUnit(); }
auto eval_expr_x_619(const auto &x_2733) {
  if (not(IsSome(HashtblFind(x_2733.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2733.attr, "height")) ||
        has_suffix(HashtblForceFind(x_2733.attr, "height"), "%")) {
      return HashtblForceFind(x_2733.attr, "height");
    } else {
      assert(eq(HashtblForceFind(x_2733.attr, "height"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_617(const auto &x_2744) { return MakeUnit(); }
auto eval_expr_x_614(const auto &x_2754) { return neq(x_2754.var_width_attr_expr, "auto"); }
auto var_modified_x_612(const auto &x_2759) { return MakeUnit(); }
auto eval_expr_x_609(const auto &x_2767) {
  if (not(IsSome(HashtblFind(x_2767.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2767.attr, "width")) ||
        has_suffix(HashtblForceFind(x_2767.attr, "width"), "%")) {
      return HashtblForceFind(x_2767.attr, "width");
    } else {
      assert(eq(HashtblForceFind(x_2767.attr, "width"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_607(const auto &x_2778) { return MakeUnit(); }
auto eval_expr_x_604(const auto &x_2781) {
  if ((x_2781.parent == nullptr) &&
      (eq((*(x_2781.parent)).var_display, "flex") || eq((*(x_2781.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2781.parent)).var_flex_direction, "column") ||
        eq((*(x_2781.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      assert(eq((*(x_2781.parent)).var_flex_direction, "row"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_602(const auto &x_2806) { return MakeUnit(); }
auto eval_expr_x_599(const auto &x_2810) {
  if ((x_2810.parent == nullptr) &&
      (eq((*(x_2810.parent)).var_display, "flex") || eq((*(x_2810.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2810.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      assert(eq((*(x_2810.parent)).var_flex_direction, "column") ||
             eq((*(x_2810.parent)).var_flex_direction, "column-reverse"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_597(const auto &x_2835) { return MakeUnit(); }
auto eval_expr_x_594(const auto &x_2842) {
  if (IsSome(HashtblFind(x_2842.prop, "flex-direction"))) {
    return HashtblForceFind(x_2842.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_592(const auto &x_2845) { return MakeUnit(); }
auto eval_expr_x_589(const auto &x_2850) {
  return plus((x_2850.prev == nullptr) ? ((*(x_2850.prev)).var_flex_shrink_sum) : (0.), x_2850.var_flex_shrink);
}
auto var_modified_x_587(const auto &x_2859) { return MakeUnit(); }
auto eval_expr_x_584(const auto &x_2864) {
  return plus((x_2864.prev == nullptr) ? ((*(x_2864.prev)).var_flex_grow_sum) : (0.), x_2864.var_flex_grow);
}
auto var_modified_x_582(const auto &x_2873) { return MakeUnit(); }
auto eval_expr_x_579(const auto &x_2876) {
  if (IsSome(HashtblFind(x_2876.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_2876.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_577(const auto &x_2879) { return MakeUnit(); }
auto eval_expr_x_574(const auto &x_2882) {
  if (IsSome(HashtblFind(x_2882.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_2882.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_572(const auto &x_2885) { return MakeUnit(); }
auto eval_expr_x_569(const auto &x_2891) {
  if (IsSome(HashtblFind(x_2891.prop, "position"))) {
    return HashtblForceFind(x_2891.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_567(const auto &x_2894) { return MakeUnit(); }
auto eval_expr_x_564(const auto &x_2920) {
  if (IsSome(HashtblFind(x_2920.prop, "display"))) {
    return HashtblForceFind(x_2920.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_561(const auto &x_2923) { return MakeUnit(); }
auto eval_expr_x_558(const auto &x_2933) {
  if (x_2933.prev == nullptr) {
    if (x_2933.var_line_break) {
      return plus((*(x_2933.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_2933.prev)).var_intrinsic_current_line_height, x_2933.var_intrinsic_height_external));
    } else {
      return (*(x_2933.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2933.var_line_break) {
      return x_2933.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_556(const auto &x_2962) { return MakeUnit(); }
auto eval_expr_x_553(const auto &x_2972) {
  if (x_2972.var_line_break) {
    return 0.;
  } else {
    return max(x_2972.var_intrinsic_height_external,
               (x_2972.prev == nullptr) ? ((*(x_2972.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_551(const auto &x_2985) { return MakeUnit(); }
auto eval_expr_x_548(const auto &x_2992) {
  return plus((x_2992.prev == nullptr) ? ((*(x_2992.prev)).var_intrinsic_height_sum) : (0.),
              x_2992.var_intrinsic_height_external);
}
auto var_modified_x_546(const auto &x_3001) { return MakeUnit(); }
auto eval_expr_x_543(const auto &x_3006) {
  if (eq(x_3006.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3006.var_intrinsic_height_internal;
  }
}
auto var_modified_x_541(const auto &x_3015) { return MakeUnit(); }
auto eval_expr_x_538(const auto &x_3020) {
  if (eq(x_3020.var_display, "none")) {
    return 0.;
  } else {
    if (x_3020.var_inside_svg) {
      return 0.;
    } else {
      if (x_3020.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3020.var_height_expr, "auto") &&
            (not(has_suffix(x_3020.var_height_expr, "%")) && neq(x_3020.var_height_expr, "fit-content"))) {
          if (has_suffix(x_3020.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_3020.var_height_expr, "px"));
          } else {
            if (has_suffix(x_3020.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_3020.var_height_expr, "ch"));
            } else {
              assert(has_suffix(x_3020.var_height_expr, "lh"));
              return string_to_float(strip_suffix(x_3020.var_height_expr, "lh"));
            }
          }
        } else {
          return plus(
              x_3020.var_children_intrinsic_height,
              (eq(x_3020.name, "#text"))
                  ? (ASSERT((!(x_3020.first == nullptr)), [&]() { return 10.; }))
                  : ((x_3020.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3020.name, "BR"))
                                ? (ASSERT((!(x_3020.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_3020.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_3020.name, "svg"))
                                              ? ((x_3020.var_has_height_attr &&
                                                  string_is_float(x_3020.var_height_attr_expr))
                                                     ? (string_to_float(x_3020.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_3020.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3020.attr, "viewBox"), " ", 3)))
                                                            : (ASSERT((x_3020.var_has_height_attr &&
                                                                       (has_suffix(x_3020.var_height_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_3020.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_3020.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 3)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_3020.var_height_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_3020.name, "IMG"))
                                                     ? ((x_3020.var_has_height_attr)
                                                            ? (string_to_float(x_3020.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3020.attr, "image_height")) &&
                                                                not(x_3020.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3020.attr, "image_height")))
                                                                   : (ASSERT((x_3020.var_has_width_attr &&
                                                                              (not(x_3020.var_has_height_attr) &&
                                                                               (IsSome(HashtblFind(x_3020.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_3020.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_3020.attr,
                                                                                                        "image_width"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_3020.var_width_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3020.attr,
                                                                                             "image_height")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3020.attr,
                                                                                             "image_width"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_3020.name, "IFRAME"))
                                                            ? (ASSERT((!x_3020.var_has_height_attr),
                                                                      [&]() { return 150.; }))
                                                            : ((eq(x_3020.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_3020.name, "VIDEO"), [&]() {
                                                                       assert(!x_3020.var_has_height_attr);
                                                                       return 150.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_536(const auto &x_3165) { return MakeUnit(); }
auto eval_expr_x_533(const auto &x_3167) {
  if (eq(x_3167.var_display, "none") || (x_3167.var_inside_svg || x_3167.var_disabled)) {
    return true;
  } else {
    if ((x_3167.parent == nullptr) && (*(x_3167.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3167.var_height_expr, "auto") ||
          (has_suffix(x_3167.var_height_expr, "px") ||
           (has_suffix(x_3167.var_height_expr, "ch") ||
            (has_suffix(x_3167.var_height_expr, "lh") || eq(x_3167.var_height_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_3167.var_height_expr, "%") || eq(x_3167.var_height_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_531(const auto &x_3216) { return MakeUnit(); }
auto eval_expr_x_528(const auto &x_3236) {
  if (IsSome(HashtblFind(x_3236.prop, "height"))) {
    return HashtblForceFind(x_3236.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_526(const auto &x_3239) { return MakeUnit(); }
auto eval_expr_x_523(const auto &x_3241) {
  if (x_3241.last == nullptr) {
    return plus((*(x_3241.last)).var_finished_intrinsic_height_sum, (*(x_3241.last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_521(const auto &x_3250) { return MakeUnit(); }
auto eval_expr_x_518(const auto &x_3257) {
  return plus((x_3257.prev == nullptr) ? ((*(x_3257.prev)).var_intrinsic_width_sum) : (0.),
              x_3257.var_intrinsic_width_external);
}
auto var_modified_x_516(const auto &x_3266) { return MakeUnit(); }
auto eval_expr_x_513(const auto &x_3273) {
  return max(x_3273.var_intrinsic_current_line_width,
             (x_3273.prev == nullptr) ? ((*(x_3273.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_511(const auto &x_3282) { return MakeUnit(); }
auto eval_expr_x_508(const auto &x_3287) {
  return plus(x_3287.var_intrinsic_width_external,
              ((x_3287.prev == nullptr) && not((*(x_3287.prev)).var_line_break))
                  ? ((*(x_3287.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_506(const auto &x_3300) { return MakeUnit(); }
auto eval_expr_x_503(const auto &x_3303) {
  if (eq(x_3303.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3303.var_intrinsic_width_internal;
  }
}
auto var_modified_x_501(const auto &x_3312) { return MakeUnit(); }
auto eval_expr_x_498(const auto &x_3317) {
  if (eq(x_3317.var_display, "none")) {
    return 0.;
  } else {
    if (x_3317.var_inside_svg) {
      return 0.;
    } else {
      if (x_3317.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3317.var_width_expr, "auto") &&
            (not(has_suffix(x_3317.var_width_expr, "%")) &&
             (neq(x_3317.var_width_expr, "fit-content") &&
              (neq(x_3317.var_width_expr, "max-content") && not(has_prefix(x_3317.var_width_expr, "calc")))))) {
          if (has_suffix(x_3317.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_3317.var_width_expr, "px"));
          } else {
            assert(has_suffix(x_3317.var_width_expr, "ch"));
            return string_to_float(strip_suffix(x_3317.var_width_expr, "ch"));
          }
        } else {
          return plus(
              x_3317.var_children_intrinsic_width,
              (eq(x_3317.name, "#text"))
                  ? (ASSERT((!(x_3317.first == nullptr)), [&]() { return 100.; }))
                  : ((x_3317.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3317.name, "BR"))
                                ? (ASSERT((!(x_3317.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_3317.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_3317.name, "svg"))
                                              ? ((x_3317.var_has_width_attr &&
                                                  string_is_float(x_3317.var_width_attr_expr))
                                                     ? (string_to_float(x_3317.var_width_attr_expr))
                                                     : ((not(x_3317.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_3317.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3317.attr, "viewBox"), " ", 2)))
                                                            : (ASSERT((x_3317.var_has_width_attr &&
                                                                       (has_suffix(x_3317.var_width_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_3317.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_3317.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 2)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_3317.var_width_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_3317.name, "IMG"))
                                                     ? ((x_3317.var_has_width_attr)
                                                            ? (string_to_float(x_3317.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3317.attr, "image_width")) &&
                                                                not(x_3317.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3317.attr, "image_width")))
                                                                   : (ASSERT((not(x_3317.var_has_width_attr) &&
                                                                              (x_3317.var_has_height_attr &&
                                                                               (IsSome(HashtblFind(x_3317.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_3317.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_3317.attr,
                                                                                                        "image_height"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_3317.var_height_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3317.attr,
                                                                                             "image_width")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3317.attr,
                                                                                             "image_height"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_3317.name, "IFRAME"))
                                                            ? (ASSERT((!x_3317.var_has_width_attr),
                                                                      [&]() { return 300.; }))
                                                            : ((eq(x_3317.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_3317.name, "VIDEO"), [&]() {
                                                                       assert(!x_3317.var_has_width_attr);
                                                                       return 300.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_496(const auto &x_3470) { return MakeUnit(); }
auto eval_expr_x_493(const auto &x_3472) {
  if (x_3472.last == nullptr) {
    return (*(x_3472.last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_491(const auto &x_3477) { return MakeUnit(); }
auto eval_expr_x_488(const auto &x_3479) {
  if (eq(x_3479.var_display, "none") || (x_3479.var_inside_svg || x_3479.var_disabled)) {
    return true;
  } else {
    if ((x_3479.parent == nullptr) && (*(x_3479.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3479.var_width_expr, "auto") ||
          (has_suffix(x_3479.var_width_expr, "px") ||
           (has_suffix(x_3479.var_width_expr, "ch") ||
            (has_prefix(x_3479.var_width_expr, "calc(") || eq(x_3479.var_width_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_3479.var_width_expr, "%") || eq(x_3479.var_width_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_486(const auto &x_3528) { return MakeUnit(); }
auto eval_expr_x_483(const auto &x_3531) {
  if (eq(x_3531.var_display, "none")) {
    return true;
  } else {
    if (x_3531.var_inside_svg) {
      return true;
    } else {
      if (x_3531.var_disabled) {
        return true;
      } else {if ( eq(x_3531.name,"#document") || (eq(x_3531.name,"#shadow-root") || (eq(x_3531.name,"DIV") || (eq(x_3531.name,"HTML") || (eq(x_3531.name,"BODY") || (eq(x_3531.name,"BUTTON") || (eq(x_3531.name,"FOOTER") || (eq(x_3531.name,"SELECT") || (eq(x_3531.name,"SECTION") || (eq(x_3531.name,"FORM") || (eq(x_3531.name,"CENTER") || (eq(x_3531.name,"TD") || (eq(x_3531.name,"TR") || (eq(x_3531.name,"TBODY") || (eq(x_3531.name,"TABLE") || (eq(x_3531.name,"SPAN") || (eq(x_3531.name,"FONT") || (eq(x_3531.name,"A") || (eq(x_3531.name,"ARTICLE") || (eq(x_3531.name,"P") || (eq(x_3531.name,"U") || (eq(x_3531.name,"UL") || (eq(x_3531.name,"B") || (eq(x_3531.name,"H1") || (eq(x_3531.name,"H2") || (eq(x_3531.name,"H3") || (eq(x_3531.name,"H4") || (eq(x_3531.name,"DT") || (eq(x_3531.name,"DD") || (eq(x_3531.name,"DL") || (eq(x_3531.name,"LI") || (eq(x_3531.name,"LABEL") || (eq(x_3531.name,"OL") || (eq(x_3531.name,"NAV") || (eq(x_3531.name,"HEADER") || (eq(x_3531.name,"HEAD") || (eq(x_3531.name,"SOURCE") || (eq(x_3531.name,"PICTURE") || (eq(x_3531.name,"FIGURE") || (eq(x_3531.name,"FIGCAPTION") || (eq(x_3531.name,"MAIN") || (eq(x_3531.name,"REACT-PARTIAL") || (eq(x_3531.name,"QUERY-BUILDER") || (eq(x_3531.name,"MODAL-DIALOG") || (eq(x_3531.name,"SCROLLABLE-REGION") || (eq(x_3531.name,"DIALOG-HELPER") || (eq(x_3531.name,"AUTO-CHECK") || (eq(x_3531.name,"TOOL-TIP") || (eq(x_3531.name,"CUSTOM-SCOPES") || (eq(x_3531.name,"QBSEARCH-INPUT") || (eq(x_3531.name,"INCLUDE-FRAGMENT") || (eq(x_3531.name,"COOKIE-CONSENT-LINK") || (eq(x_3531.name,"FULLSTORY-CAPTURE") || (eq(x_3531.name,"GHCC-CONSENT") || (eq(x_3531.name,"GLOBAL-BANNER") || (eq(x_3531.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_3531.name,"CARD-SKEW") || (eq(x_3531.name,"EM") || (eq(x_3531.name,"ASIDE") || (eq(x_3531.name,"AUDIO") || (eq(x_3531.name,"SUP") || (eq(x_3531.name,"TIME") || (eq(x_3531.name,"ABBR") || (eq(x_3531.name,"SMALL") || (eq(x_3531.name,"SLOT") || eq(x_3531.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          assert(eq(x_3531.name, "#text") ||
                 (eq(x_3531.name, "svg") ||
                  (eq(x_3531.name, "IFRAME") ||
                   (eq(x_3531.name, "INPUT") ||
                    (eq(x_3531.name, "VIDEO") ||
                     (eq(x_3531.name, "BR") || (eq(x_3531.name, "IMG") || eq(x_3531.name, "TEXTAREA"))))))));
          return false;
        }
      }
    }
  }
}
auto var_modified_x_481(const auto &x_3544) { return MakeUnit(); }
auto eval_expr_x_478(const auto &x_3564) {
  if (IsSome(HashtblFind(x_3564.prop, "width"))) {
    return HashtblForceFind(x_3564.prop, "width");
  } else {
    return "auto";
  }
}
auto eval_stmts_x_236(const auto &x_477) {
  WriteMetric();
  auto x_479 = eval_expr_x_478(x_477);
  x_477.var_width_expr = x_479;
  WriteMetric();
  auto x_484 = eval_expr_x_483(x_477);
  x_477.var_is_default_case = x_484;
  WriteMetric();
  auto x_489 = eval_expr_x_488(x_477);
  x_477.var_intrinsic_width_is_width = x_489;
  WriteMetric();
  auto x_494 = eval_expr_x_493(x_477);
  x_477.var_children_intrinsic_width = x_494;
  WriteMetric();
  auto x_499 = eval_expr_x_498(x_477);
  x_477.var_intrinsic_width_internal = x_499;
  WriteMetric();
  auto x_504 = eval_expr_x_503(x_477);
  x_477.var_intrinsic_width_external = x_504;
  WriteMetric();
  auto x_509 = eval_expr_x_508(x_477);
  x_477.var_intrinsic_current_line_width = x_509;
  WriteMetric();
  auto x_514 = eval_expr_x_513(x_477);
  x_477.var_intrinsic_width_max = x_514;
  WriteMetric();
  auto x_519 = eval_expr_x_518(x_477);
  x_477.var_intrinsic_width_sum = x_519;
  WriteMetric();
  auto x_524 = eval_expr_x_523(x_477);
  x_477.var_children_intrinsic_height = x_524;
  WriteMetric();
  auto x_529 = eval_expr_x_528(x_477);
  x_477.var_height_expr = x_529;
  WriteMetric();
  auto x_534 = eval_expr_x_533(x_477);
  x_477.var_intrinsic_height_is_height = x_534;
  WriteMetric();
  auto x_539 = eval_expr_x_538(x_477);
  x_477.var_intrinsic_height_internal = x_539;
  WriteMetric();
  auto x_544 = eval_expr_x_543(x_477);
  x_477.var_intrinsic_height_external = x_544;
  WriteMetric();
  auto x_549 = eval_expr_x_548(x_477);
  x_477.var_intrinsic_height_sum = x_549;
  WriteMetric();
  auto x_554 = eval_expr_x_553(x_477);
  x_477.var_intrinsic_current_line_height = x_554;
  WriteMetric();
  auto x_559 = eval_expr_x_558(x_477);
  x_477.var_finished_intrinsic_height_sum = x_559;
  return MakeUnit();
}
auto eval_stmts_x_234(const auto &x_563) {
  WriteMetric();
  auto x_565 = eval_expr_x_564(x_563);
  x_563.var_display = x_565;
  WriteMetric();
  auto x_570 = eval_expr_x_569(x_563);
  x_563.var_position = x_570;
  WriteMetric();
  auto x_575 = eval_expr_x_574(x_563);
  x_563.var_flex_grow = x_575;
  WriteMetric();
  auto x_580 = eval_expr_x_579(x_563);
  x_563.var_flex_shrink = x_580;
  WriteMetric();
  auto x_585 = eval_expr_x_584(x_563);
  x_563.var_flex_grow_sum = x_585;
  WriteMetric();
  auto x_590 = eval_expr_x_589(x_563);
  x_563.var_flex_shrink_sum = x_590;
  WriteMetric();
  auto x_595 = eval_expr_x_594(x_563);
  x_563.var_flex_direction = x_595;
  WriteMetric();
  auto x_600 = eval_expr_x_599(x_563);
  x_563.var_is_flex_row = x_600;
  WriteMetric();
  auto x_605 = eval_expr_x_604(x_563);
  x_563.var_is_flex_column = x_605;
  WriteMetric();
  auto x_610 = eval_expr_x_609(x_563);
  x_563.var_width_attr_expr = x_610;
  WriteMetric();
  auto x_615 = eval_expr_x_614(x_563);
  x_563.var_has_width_attr = x_615;
  WriteMetric();
  auto x_620 = eval_expr_x_619(x_563);
  x_563.var_height_attr_expr = x_620;
  WriteMetric();
  auto x_625 = eval_expr_x_624(x_563);
  x_563.var_has_height_attr = x_625;
  WriteMetric();
  auto x_630 = eval_expr_x_629(x_563);
  x_563.var_is_svg_block = x_630;
  WriteMetric();
  auto x_635 = eval_expr_x_634(x_563);
  x_563.var_inside_svg = x_635;
  WriteMetric();
  auto x_640 = eval_expr_x_639(x_563);
  x_563.var_disabled = x_640;
  WriteMetric();
  auto x_645 = eval_expr_x_644(x_563);
  x_563.var_visible = x_645;
  WriteMetric();
  auto x_650 = eval_expr_x_649(x_563);
  x_563.var_line_break = x_650;
  return MakeUnit();
}
auto eval_stmts_x_231(const auto &x_654) {
  WriteMetric();
  auto x_656 = eval_expr_x_655(x_654);
  x_654.var_box_width = x_656;
  WriteMetric();
  auto x_661 = eval_expr_x_660(x_654);
  x_654.var_box_height = x_661;
  WriteMetric();
  auto x_666 = eval_expr_x_665(x_654);
  x_654.var_left_over = x_666;
  WriteMetric();
  auto x_671 = eval_expr_x_670(x_654);
  x_654.var_flex_amount = x_671;
  WriteMetric();
  auto x_676 = eval_expr_x_675(x_654);
  x_654.var_flex_unit = x_676;
  WriteMetric();
  auto x_681 = eval_expr_x_680(x_654);
  x_654.var_x = x_681;
  WriteMetric();
  auto x_686 = eval_expr_x_685(x_654);
  x_654.var_width_internal = x_686;
  WriteMetric();
  auto x_691 = eval_expr_x_690(x_654);
  x_654.var_width_external = x_691;
  WriteMetric();
  auto x_696 = eval_expr_x_695(x_654);
  x_654.var_y = x_696;
  WriteMetric();
  auto x_701 = eval_expr_x_700(x_654);
  x_654.var_height_internal = x_701;
  WriteMetric();
  auto x_706 = eval_expr_x_705(x_654);
  x_654.var_height_external = x_706;
  WriteMetric();
  auto x_711 = eval_expr_x_710(x_654);
  x_654.var_line_height = x_711;
  return MakeUnit();
}
auto eval_stmts_x_225(const auto &x_715) {
  WriteMetric();
  auto x_717 = eval_expr_x_716(x_715);
  x_715.var_width_expr = x_717;
  WriteMetric();
  auto x_722 = eval_expr_x_721(x_715);
  x_715.var_is_default_case = x_722;
  WriteMetric();
  auto x_727 = eval_expr_x_726(x_715);
  x_715.var_intrinsic_width_is_width = x_727;
  WriteMetric();
  auto x_732 = eval_expr_x_731(x_715);
  x_715.var_children_intrinsic_width = x_732;
  WriteMetric();
  auto x_737 = eval_expr_x_736(x_715);
  x_715.var_intrinsic_width_internal = x_737;
  WriteMetric();
  auto x_742 = eval_expr_x_741(x_715);
  x_715.var_intrinsic_width_external = x_742;
  WriteMetric();
  auto x_747 = eval_expr_x_746(x_715);
  x_715.var_intrinsic_current_line_width = x_747;
  WriteMetric();
  auto x_752 = eval_expr_x_751(x_715);
  x_715.var_intrinsic_width_max = x_752;
  WriteMetric();
  auto x_757 = eval_expr_x_756(x_715);
  x_715.var_intrinsic_width_sum = x_757;
  WriteMetric();
  auto x_762 = eval_expr_x_761(x_715);
  x_715.var_children_intrinsic_height = x_762;
  WriteMetric();
  auto x_767 = eval_expr_x_766(x_715);
  x_715.var_height_expr = x_767;
  WriteMetric();
  auto x_772 = eval_expr_x_771(x_715);
  x_715.var_intrinsic_height_is_height = x_772;
  WriteMetric();
  auto x_777 = eval_expr_x_776(x_715);
  x_715.var_intrinsic_height_internal = x_777;
  WriteMetric();
  auto x_782 = eval_expr_x_781(x_715);
  x_715.var_intrinsic_height_external = x_782;
  WriteMetric();
  auto x_787 = eval_expr_x_786(x_715);
  x_715.var_intrinsic_height_sum = x_787;
  WriteMetric();
  auto x_792 = eval_expr_x_791(x_715);
  x_715.var_intrinsic_current_line_height = x_792;
  WriteMetric();
  auto x_797 = eval_expr_x_796(x_715);
  x_715.var_finished_intrinsic_height_sum = x_797;
  return MakeUnit();
}
auto eval_stmts_x_223(const auto &x_801) {
  WriteMetric();
  auto x_803 = eval_expr_x_802(x_801);
  x_801.var_display = x_803;
  WriteMetric();
  auto x_808 = eval_expr_x_807(x_801);
  x_801.var_position = x_808;
  WriteMetric();
  auto x_813 = eval_expr_x_812(x_801);
  x_801.var_flex_grow = x_813;
  WriteMetric();
  auto x_818 = eval_expr_x_817(x_801);
  x_801.var_flex_shrink = x_818;
  WriteMetric();
  auto x_823 = eval_expr_x_822(x_801);
  x_801.var_flex_grow_sum = x_823;
  WriteMetric();
  auto x_828 = eval_expr_x_827(x_801);
  x_801.var_flex_shrink_sum = x_828;
  WriteMetric();
  auto x_833 = eval_expr_x_832(x_801);
  x_801.var_flex_direction = x_833;
  WriteMetric();
  auto x_838 = eval_expr_x_837(x_801);
  x_801.var_is_flex_row = x_838;
  WriteMetric();
  auto x_843 = eval_expr_x_842(x_801);
  x_801.var_is_flex_column = x_843;
  WriteMetric();
  auto x_848 = eval_expr_x_847(x_801);
  x_801.var_width_attr_expr = x_848;
  WriteMetric();
  auto x_853 = eval_expr_x_852(x_801);
  x_801.var_has_width_attr = x_853;
  WriteMetric();
  auto x_858 = eval_expr_x_857(x_801);
  x_801.var_height_attr_expr = x_858;
  WriteMetric();
  auto x_863 = eval_expr_x_862(x_801);
  x_801.var_has_height_attr = x_863;
  WriteMetric();
  auto x_868 = eval_expr_x_867(x_801);
  x_801.var_is_svg_block = x_868;
  WriteMetric();
  auto x_873 = eval_expr_x_872(x_801);
  x_801.var_inside_svg = x_873;
  WriteMetric();
  auto x_878 = eval_expr_x_877(x_801);
  x_801.var_disabled = x_878;
  WriteMetric();
  auto x_883 = eval_expr_x_882(x_801);
  x_801.var_visible = x_883;
  WriteMetric();
  auto x_888 = eval_expr_x_887(x_801);
  x_801.var_line_break = x_888;
  return MakeUnit();
}
auto eval_stmts_x_220(const auto &x_892) {
  WriteMetric();
  auto x_894 = eval_expr_x_893(x_892);
  x_892.var_box_width = x_894;
  WriteMetric();
  auto x_899 = eval_expr_x_898(x_892);
  x_892.var_box_height = x_899;
  WriteMetric();
  auto x_904 = eval_expr_x_903(x_892);
  x_892.var_left_over = x_904;
  WriteMetric();
  auto x_909 = eval_expr_x_908(x_892);
  x_892.var_flex_amount = x_909;
  WriteMetric();
  auto x_914 = eval_expr_x_913(x_892);
  x_892.var_flex_unit = x_914;
  WriteMetric();
  auto x_919 = eval_expr_x_918(x_892);
  x_892.var_x = x_919;
  WriteMetric();
  auto x_924 = eval_expr_x_923(x_892);
  x_892.var_width_internal = x_924;
  WriteMetric();
  auto x_929 = eval_expr_x_928(x_892);
  x_892.var_width_external = x_929;
  WriteMetric();
  auto x_934 = eval_expr_x_933(x_892);
  x_892.var_y = x_934;
  WriteMetric();
  auto x_939 = eval_expr_x_938(x_892);
  x_892.var_height_internal = x_939;
  WriteMetric();
  auto x_944 = eval_expr_x_943(x_892);
  x_892.var_height_external = x_944;
  WriteMetric();
  auto x_949 = eval_expr_x_948(x_892);
  x_892.var_line_height = x_949;
  return MakeUnit();
}
auto x_50(const auto &x_51) {
  auto x_52 = Zro(x_51);
  auto x_53 = Fst(x_51);
  auto x_54 = Zro(x_52);
  auto x_55 = Fst(x_52);
  auto x_56 = ListHeadExn(x_54);
  auto x_57 = ListTailExn(x_54);
  if (ListIsEmpty(x_57)) {
    auto x_58 = ListSplitN(x_55.children, x_56);
    OutputChangeMetric(IntAdd(layout_size_x_3(ListNthExn(x_55.children, x_56)), layout_size_x_3(x_53)));
    x_55.children = ListAppend(Zro(x_58), Cons(x_53, ListTailExn(Fst(x_58))));
    return MakeUnit();
  } else {
    return x_50(MakePair(MakePair(x_57, ListNthExn(x_55.children, x_56)), x_53));
  }
}
auto replace_layout_node_x_49(const auto &x_51) { return x_50(x_51); }
auto x_59(const auto &x_60) {
  auto x_61 = Zro(x_60);
  auto x_62 = Fst(x_60);
  auto x_63 = Zro(x_61);
  auto x_64 = Fst(x_61);
  auto x_65 = ListHeadExn(x_63);
  auto x_66 = ListTailExn(x_63);
  if (ListIsEmpty(x_66)) {
    InputChangeMetric(IntAdd(node_size_x_4(ListNthExn(x_64.children, x_65)), node_size_x_4(x_62)));
    auto x_67 = ListSplitN(x_64.children, x_65);
    auto x_68 = Zro(x_67);
    auto x_69 = Fst(x_67);
    auto x_70 = ListHeadExn(x_69);
    auto x_71 = ListTailExn(x_69);
    OptionMatch(
        x_70.prev, [&](const auto &x_73) { return MakeUnit(); }, [&](const auto &x_72) { x_72.next = x_70.next; });
    OptionMatch(
        x_70.next, [&](const auto &x_75) { return MakeUnit(); }, [&](const auto &x_74) { x_74.prev = x_70.prev; });
    x_64.children = ListAppend(x_68, x_71);
    if (ListIsEmpty(x_68)) {
      x_64.first = ListHead(x_71);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_71)) {
      x_64.last = ListLast(x_68);
    } else {
      MakeUnit();
    }
    MakeUnit();
    auto x_138 = ListSplitN(x_64.children, x_65);
    auto x_139 = Zro(x_138);
    auto x_140 = Fst(x_138);
    x_64.children = ListAppend(x_139, Cons(x_62, x_140));
    if (ListIsEmpty(x_139)) {
      x_64.first = Some(x_62);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_140)) {
      x_64.last = Some(x_62);
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_139), [&](const auto &x_142) { x_62.prev = nullptr; },
        [&](const auto &x_141) {
          x_62.prev = Some(x_141);
          x_141.next = Some(x_62);
        });
    OptionMatch(
        ListHead(x_140), [&](const auto &x_144) { x_62.next = nullptr; },
        [&](const auto &x_143) {
          x_62.next = Some(x_143);
          x_143.prev = Some(x_62);
        });
    x_62.parent = Some(x_64);
    MakeUnit();
    return MakeUnit();
  } else {
    return x_59(MakePair(MakePair(x_66, ListNthExn(x_64.children, x_65)), x_62));
  }
}
auto replace_node_x_42(const auto &x_60) { return x_59(x_60); }
auto x_207(const auto &x_208) {
  x_208.first = nullptr;
  ListIter2(x_208.children, [&](const auto &x_209, const auto &x_210) {
    x_209.parent = Some(x_208);
    x_210.parent = Some(x_208);
    x_209.next = Some(x_210);
    x_210.prev = Some(x_209);
    if (IsNone(x_208.first)) {
      x_208.first = Some(x_209);
    } else {
      MakeUnit();
    }
    x_208.last = Some(x_210);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_40(const auto &x_208) { return x_207(x_208); }
auto x_211(const auto &x_212) {
  x_212.first = nullptr;
  ListIter2(x_212.children, [&](const auto &x_213, const auto &x_214) {
    x_213.parent = Some(x_212);
    x_214.parent = Some(x_212);
    x_213.next = Some(x_214);
    x_214.prev = Some(x_213);
    if (IsNone(x_212.first)) {
      x_212.first = Some(x_213);
    } else {
      MakeUnit();
    }
    x_212.last = Some(x_214);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_36(const auto &x_212) { return x_211(x_212); }
auto x_215(const auto &x_216) {
  x_216.first = nullptr;
  ListIter2(x_216.children, [&](const auto &x_217, const auto &x_218) {
    x_217.parent = Some(x_216);
    x_218.parent = Some(x_216);
    x_217.next = Some(x_218);
    x_218.prev = Some(x_217);
    if (IsNone(x_216.first)) {
      x_216.first = Some(x_217);
    } else {
      MakeUnit();
    }
    x_216.last = Some(x_218);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_33(const auto &x_216) { return x_215(x_216); }
auto eval_stmts_x_29(const auto &x_219) { return MakeUnit(); }
auto eval_stmts_x_28(const auto &x_222) { return MakeUnit(); }
auto x_226(const auto &x_227) {
  x_227.first = nullptr;
  ListIter2(x_227.children, [&](const auto &x_228, const auto &x_229) {
    x_228.parent = Some(x_227);
    x_229.parent = Some(x_227);
    x_228.next = Some(x_229);
    x_229.prev = Some(x_228);
    if (IsNone(x_227.first)) {
      x_227.first = Some(x_228);
    } else {
      MakeUnit();
    }
    x_227.last = Some(x_229);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_26(const auto &x_227) { return x_226(x_227); }
auto eval_stmts_x_24(const auto &x_230) { return MakeUnit(); }
auto eval_stmts_x_23(const auto &x_233) { return MakeUnit(); }
auto x_237(const auto &x_238) {
  x_238.first = nullptr;
  ListIter2(x_238.children, [&](const auto &x_239, const auto &x_240) {
    x_239.parent = Some(x_238);
    x_240.parent = Some(x_238);
    x_239.next = Some(x_240);
    x_240.prev = Some(x_239);
    if (IsNone(x_238.first)) {
      x_238.first = Some(x_239);
    } else {
      MakeUnit();
    }
    x_238.last = Some(x_240);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_20(const auto &x_238) { return x_237(x_238); }
auto x_241(const auto &x_242) {
  auto x_243 = Zro(x_242);
  auto x_244 = Fst(x_242);
  auto x_245 = Zro(x_243);
  auto x_246 = Fst(x_243);
  return ListMatch(
      x_245,
      [&](const auto &x_249) {
        auto x_250 = Zro(x_244);
        auto x_251 = Zro(x_250);
        auto x_252 = Fst(x_250);
        auto x_253 = Fst(x_244);
        auto x_254 = Zro(x_253);
        auto x_255 = Fst(x_253);
        InputChangeMetric(1);
        std::string x_3567 = x_251;
        if (x_3567 == "attributes") {
          std::string x_3568 = x_252;
          if (x_3568 == "width") {
            WriteMetric();
            HashtblAddExn(x_246.attr, "width", x_254);
            return MakeUnit();
          } else if (x_3568 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_246.attr, "image_height", x_254);
            return MakeUnit();
          } else if (x_3568 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_246.attr, "image_width", x_254);
            return MakeUnit();
          } else if (x_3568 == "height") {
            WriteMetric();
            HashtblAddExn(x_246.attr, "height", x_254);
            return MakeUnit();
          } else if (x_3568 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_246.attr, "viewBox", x_254);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3567 == "properties") {
          std::string x_3569 = x_252;
          if (x_3569 == "width") {
            WriteMetric();
            HashtblAddExn(x_246.prop, "width", x_254);
            return MakeUnit();
          } else if (x_3569 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_246.prop, "flex-grow", x_254);
            return MakeUnit();
          } else if (x_3569 == "height") {
            WriteMetric();
            HashtblAddExn(x_246.prop, "height", x_254);
            return MakeUnit();
          } else if (x_3569 == "display") {
            WriteMetric();
            HashtblAddExn(x_246.prop, "display", x_254);
            return MakeUnit();
          } else if (x_3569 == "position") {
            WriteMetric();
            HashtblAddExn(x_246.prop, "position", x_254);
            return MakeUnit();
          } else if (x_3569 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_246.prop, "flex-shrink", x_254);
            return MakeUnit();
          } else if (x_3569 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_246.prop, "flex-direction", x_254);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_247, const auto &x_248) {
        return x_241(MakePair(MakePair(x_248, ListNthExn(x_246.children, x_247)), x_244));
      });
}
auto insert_value_x_11(const auto &x_242) { return x_241(x_242); }
auto x_256(const auto &x_257) {
  auto x_258 = Zro(x_257);
  auto x_259 = Fst(x_257);
  auto x_260 = Zro(x_258);
  auto x_261 = Fst(x_258);
  return ListMatch(
      x_260,
      [&](const auto &x_264) {
        auto x_265 = Zro(x_259);
        auto x_266 = Zro(x_265);
        auto x_267 = Fst(x_265);
        auto x_268 = Fst(x_259);
        InputChangeMetric(1);
        std::string x_3570 = x_266;
        if (x_3570 == "attributes") {
          std::string x_3571 = x_267;
          if (x_3571 == "width") {
            WriteMetric();
            HashtblForceRemove(x_261.attr, "width");
            return MakeUnit();
          } else if (x_3571 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_261.attr, "image_height");
            return MakeUnit();
          } else if (x_3571 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_261.attr, "image_width");
            return MakeUnit();
          } else if (x_3571 == "height") {
            WriteMetric();
            HashtblForceRemove(x_261.attr, "height");
            return MakeUnit();
          } else if (x_3571 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_261.attr, "viewBox");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3570 == "properties") {
          std::string x_3572 = x_267;
          if (x_3572 == "width") {
            WriteMetric();
            HashtblForceRemove(x_261.prop, "width");
            return MakeUnit();
          } else if (x_3572 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_261.prop, "flex-grow");
            return MakeUnit();
          } else if (x_3572 == "height") {
            WriteMetric();
            HashtblForceRemove(x_261.prop, "height");
            return MakeUnit();
          } else if (x_3572 == "display") {
            WriteMetric();
            HashtblForceRemove(x_261.prop, "display");
            return MakeUnit();
          } else if (x_3572 == "position") {
            WriteMetric();
            HashtblForceRemove(x_261.prop, "position");
            return MakeUnit();
          } else if (x_3572 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_261.prop, "flex-shrink");
            return MakeUnit();
          } else if (x_3572 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_261.prop, "flex-direction");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_262, const auto &x_263) {
        return x_256(MakePair(MakePair(x_263, ListNthExn(x_261.children, x_262)), x_259));
      });
}
auto delete_value_x_10(const auto &x_257) { return x_256(x_257); }
auto x_269(const auto &x_270) {
  auto x_271 = Zro(x_270);
  auto x_272 = Fst(x_270);
  auto x_273 = Zro(x_271);
  auto x_274 = Fst(x_271);
  return ListMatch(
      x_273,
      [&](const auto &x_277) {
        auto x_278 = Zro(x_272);
        auto x_279 = Zro(x_278);
        auto x_280 = Fst(x_278);
        auto x_281 = Fst(x_272);
        auto x_282 = Zro(x_281);
        auto x_283 = Fst(x_281);
        InputChangeMetric(1);
        std::string x_3573 = x_279;
        if (x_3573 == "attributes") {
          std::string x_3574 = x_280;
          if (x_3574 == "width") {
            WriteMetric();
            HashtblForceRemove(x_274.attr, "width");
            WriteMetric();
            HashtblAddExn(x_274.attr, "width", x_282);
            return MakeUnit();
          } else if (x_3574 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_274.attr, "image_height");
            WriteMetric();
            HashtblAddExn(x_274.attr, "image_height", x_282);
            return MakeUnit();
          } else if (x_3574 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_274.attr, "image_width");
            WriteMetric();
            HashtblAddExn(x_274.attr, "image_width", x_282);
            return MakeUnit();
          } else if (x_3574 == "height") {
            WriteMetric();
            HashtblForceRemove(x_274.attr, "height");
            WriteMetric();
            HashtblAddExn(x_274.attr, "height", x_282);
            return MakeUnit();
          } else if (x_3574 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_274.attr, "viewBox");
            WriteMetric();
            HashtblAddExn(x_274.attr, "viewBox", x_282);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3573 == "properties") {
          std::string x_3575 = x_280;
          if (x_3575 == "width") {
            WriteMetric();
            HashtblForceRemove(x_274.prop, "width");
            WriteMetric();
            HashtblAddExn(x_274.prop, "width", x_282);
            return MakeUnit();
          } else if (x_3575 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_274.prop, "flex-grow");
            WriteMetric();
            HashtblAddExn(x_274.prop, "flex-grow", x_282);
            return MakeUnit();
          } else if (x_3575 == "height") {
            WriteMetric();
            HashtblForceRemove(x_274.prop, "height");
            WriteMetric();
            HashtblAddExn(x_274.prop, "height", x_282);
            return MakeUnit();
          } else if (x_3575 == "display") {
            WriteMetric();
            HashtblForceRemove(x_274.prop, "display");
            WriteMetric();
            HashtblAddExn(x_274.prop, "display", x_282);
            return MakeUnit();
          } else if (x_3575 == "position") {
            WriteMetric();
            HashtblForceRemove(x_274.prop, "position");
            WriteMetric();
            HashtblAddExn(x_274.prop, "position", x_282);
            return MakeUnit();
          } else if (x_3575 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_274.prop, "flex-shrink");
            WriteMetric();
            HashtblAddExn(x_274.prop, "flex-shrink", x_282);
            return MakeUnit();
          } else if (x_3575 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_274.prop, "flex-direction");
            WriteMetric();
            HashtblAddExn(x_274.prop, "flex-direction", x_282);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_275, const auto &x_276) {
        return x_269(MakePair(MakePair(x_276, ListNthExn(x_274.children, x_275)), x_272));
      });
}
auto replace_value_x_9(const auto &x_270) { return x_269(x_270); }
auto x_284(const auto &x_285) {
  auto x_286 = Zro(x_285);
  auto x_287 = Fst(x_285);
  auto x_288 = Zro(x_286);
  auto x_289 = Fst(x_286);
  auto x_290 = ListHeadExn(x_288);
  auto x_291 = ListTailExn(x_288);
  if (ListIsEmpty(x_291)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_289.children, x_290)));
    auto x_292 = ListSplitN(x_289.children, x_290);
    x_289.children = ListAppend(Zro(x_292), ListTailExn(Fst(x_292)));
  } else {
    return x_284(MakePair(MakePair(x_291, ListNthExn(x_289.children, x_290)), x_287));
  }
}
auto remove_layout_node_x_8(const auto &x_285) { return x_284(x_285); }
auto x_293(const auto &x_294) {
  auto x_295 = Zro(x_294);
  auto x_296 = Fst(x_294);
  auto x_297 = Zro(x_295);
  auto x_298 = Fst(x_295);
  auto x_299 = ListHeadExn(x_297);
  auto x_300 = ListTailExn(x_297);
  if (ListIsEmpty(x_300)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_298.children, x_299)));
    auto x_301 = ListSplitN(x_298.children, x_299);
    auto x_302 = Zro(x_301);
    auto x_303 = Fst(x_301);
    auto x_304 = ListHeadExn(x_303);
    auto x_305 = ListTailExn(x_303);
    OptionMatch(
        x_304.prev, [&](const auto &x_307) { return MakeUnit(); }, [&](const auto &x_306) { x_306.next = x_304.next; });
    OptionMatch(
        x_304.next, [&](const auto &x_309) { return MakeUnit(); }, [&](const auto &x_308) { x_308.prev = x_304.prev; });
    x_298.children = ListAppend(x_302, x_305);
    if (ListIsEmpty(x_302)) {
      x_298.first = ListHead(x_305);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_305)) {
      x_298.last = ListLast(x_302);
    } else {
      MakeUnit();
    }
    return MakeUnit();
  } else {
    return x_293(MakePair(MakePair(x_300, ListNthExn(x_298.children, x_299)), x_296));
  }
}
auto remove_node_x_7(const auto &x_294) { return x_293(x_294); }
auto x_372(const auto &x_373) {
  auto x_374 = Zro(x_373);
  auto x_375 = Fst(x_373);
  auto x_376 = Zro(x_374);
  auto x_377 = Fst(x_374);
  auto x_378 = ListHeadExn(x_376);
  auto x_379 = ListTailExn(x_376);
  if (ListIsEmpty(x_379)) {
    auto x_380 = Zro(x_375);
    auto x_381 = Fst(x_375);
    OutputChangeMetric(layout_size_x_3(x_380));
    auto x_382 = ListSplitN(x_377.children, x_378);
    x_377.children = ListAppend(Zro(x_382), Cons(x_380, Fst(x_382)));
  } else {
    return x_372(MakePair(MakePair(x_379, ListNthExn(x_377.children, x_378)), x_375));
  }
}
auto add_layout_node_x_6(const auto &x_373) { return x_372(x_373); }
auto x_383(const auto &x_384) {
  auto x_385 = Zro(x_384);
  auto x_386 = Fst(x_384);
  auto x_387 = Zro(x_385);
  auto x_388 = Fst(x_385);
  auto x_389 = ListHeadExn(x_387);
  auto x_390 = ListTailExn(x_387);
  if (ListIsEmpty(x_390)) {
    auto x_391 = Zro(x_386);
    auto x_392 = Fst(x_386);
    InputChangeMetric(node_size_x_4(x_391));
    auto x_393 = ListSplitN(x_388.children, x_389);
    auto x_394 = Zro(x_393);
    auto x_395 = Fst(x_393);
    x_388.children = ListAppend(x_394, Cons(x_391, x_395));
    if (ListIsEmpty(x_394)) {
      x_388.first = Some(x_391);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_395)) {
      x_388.last = Some(x_391);
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_394), [&](const auto &x_397) { x_391.prev = nullptr; },
        [&](const auto &x_396) {
          x_391.prev = Some(x_396);
          x_396.next = Some(x_391);
        });
    OptionMatch(
        ListHead(x_395), [&](const auto &x_399) { x_391.next = nullptr; },
        [&](const auto &x_398) {
          x_391.next = Some(x_398);
          x_398.prev = Some(x_391);
        });
    x_391.parent = Some(x_388);
    return MakeUnit();
  } else {
    return x_383(MakePair(MakePair(x_390, ListNthExn(x_388.children, x_389)), x_386));
  }
}
auto add_node_x_5(const auto &x_384) { return x_383(x_384); }
auto x_462(const auto &x_463) {
  return IntAdd(1, ListIntSum(x_463.children, [&](const auto &x_464) { return x_462(x_464); }));
}
auto node_size_x_4(const auto &x_463) { return x_462(x_463); }
auto x_465(const auto &x_466) {
  return IntAdd(1, ListIntSum(x_466.children, [&](const auto &x_467) { return x_465(x_467); }));
}
auto layout_size_x_3(const auto &x_466) { return x_465(x_466); }
auto x_468(const auto &x_469) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_469)), [&](const auto &x_470) { return x_468(x_470); }));
}
auto json_to_layout_node_x_2(const auto &x_469) { return x_468(x_469); }
auto x_471(const auto &x_472) {
  return MakeNode(x_472.name, x_472.attr, x_472.prop, x_472.extern_id,
                  ListMap(x_472.children, [&](const auto &x_473) { return x_471(x_473); }));
}
auto node_to_fs_node_x_1(const auto &x_472) { return x_471(x_472); }
auto x_474(const auto &x_475) {
  return MakeNode(JsonToString(JsonMember("name", x_475)), JsonToDict(JsonMember("attributes", x_475)),
                  JsonToDict(JsonMember("properties", x_475)), JsonToInt(JsonMember("id", x_475)),
                  ListMap(JsonToList(JsonMember("children", x_475)), [&](const auto &x_476) { return x_474(x_476); }));
}
auto json_to_node_aux_x_0(const auto &x_475) { return x_474(x_475); }
int main() {
  return WithOutFile("hn_type.out", [&](const auto &x_12) {
    PrintEndline("RUNNING FS");
    return WithInFile("command.json", [&](const auto &x_13) {
      auto x_14 = MakeRef(0);
      auto x_15 = FreshMetric();
      auto x_16 = JsonOfString(InputLine(x_13));
      auto x_17 = JsonOfString(InputLine(x_13));
      auto x_18 = MakeStack();
      PushStack(x_18, x_16);
      PushStack(x_18, x_17);
      Assert(StringEqual(JsonToString(JsonMember("name", x_16)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_17)), "layout_init"));
      auto x_21 = [&]() {
        auto x_19 = json_to_node_aux_x_0(JsonMember("node", x_16));
        x_19.parent = nullptr;
        x_19.prev = nullptr;
        x_19.next = nullptr;
        return x_19;
      }();
      auto x_22 = json_to_layout_node_x_2(JsonMember("node", x_17));
      OutputChangeMetric(layout_size_x_3(x_22));
      InputChangeMetric(node_size_x_4(x_21));
      JsonToChannel(
          x_12,
          AssocToJson(Cons(
              MakePair("name", StringToJson("FS")),
              Cons(
                  MakePair("diff_num", IntToJson(ReadRef(x_14))),
                  Cons(MakePair("read_count", IntToJson(MetricReadCount(x_15))),
                       Cons(MakePair("meta_read_count", IntToJson(MetricMetaReadCount())),
                            Cons(MakePair("write_count", IntToJson(MetricWriteCount())),
                                 Cons(MakePair("meta_write_count", IntToJson(MetricMetaWriteCount())),
                                      Cons(MakePair("queue_size_acc", IntToJson(MetricQueueSizeAcc())),
                                           Cons(MakePair("input_change_count", IntToJson(MetricInputChangeCount(x_15))),
                                                Cons(MakePair("output_change_count",
                                                              IntToJson(MetricOutputChangeCount(x_15))),
                                                     Cons(MakePair("html", StringToJson("")),
                                                          Cons(MakePair("command", ListToJson(StackToList(x_18))),
                                                               Nil())))))))))))));
      OutputString(x_12, "\n");
      ClearStack(x_18);
      WriteRef(x_14, IntAdd(ReadRef(x_14), 1));
      auto x_27 = [&]() {
        auto x_25 = node_to_fs_node_x_1(x_21);
        x_25.parent = nullptr;
        x_25.prev = nullptr;
        x_25.next = nullptr;
        return x_25;
      }();
      AssertNodeValueEqual(x_21, x_27);
      ResetMetric(x_15);
      PrintEndline("EVAL OK!");
      IterLines(x_13, [&](const auto &x_30) {
        auto x_31 = JsonOfString(x_30);
        PushStack(x_18, x_31);
        std::string x_3576 = JsonToString(JsonMember("name", x_31));
        if (x_3576 == "add") {
          return add_node_x_5(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_34) { return JsonToInt(x_34); }),
                       x_21),
              MakePair(
                  [&]() {
                    auto x_32 = json_to_node_aux_x_0(JsonMember("node", x_31));
                    x_32.parent = nullptr;
                    x_32.prev = nullptr;
                    x_32.next = nullptr;
                    return x_32;
                  }(),
                  x_15)));
        } else if (x_3576 == "recalculate") {
          JsonToChannel(
              x_12,
              AssocToJson(Cons(
                  MakePair("name", StringToJson("FS")),
                  Cons(MakePair("diff_num", IntToJson(ReadRef(x_14))),
                       Cons(MakePair("read_count", IntToJson(MetricReadCount(x_15))),
                            Cons(MakePair("meta_read_count", IntToJson(MetricMetaReadCount())),
                                 Cons(MakePair("write_count", IntToJson(MetricWriteCount())),
                                      Cons(MakePair("meta_write_count", IntToJson(MetricMetaWriteCount())),
                                           Cons(MakePair("queue_size_acc", IntToJson(MetricQueueSizeAcc())),
                                                Cons(MakePair("input_change_count",
                                                              IntToJson(MetricInputChangeCount(x_15))),
                                                     Cons(MakePair("output_change_count",
                                                                   IntToJson(MetricOutputChangeCount(x_15))),
                                                          Cons(MakePair("html", StringToJson("")),
                                                               Cons(MakePair("command", ListToJson(StackToList(x_18))),
                                                                    Nil())))))))))))));
          OutputString(x_12, "\n");
          ClearStack(x_18);
          WriteRef(x_14, IntAdd(ReadRef(x_14), 1));
          auto x_37 = [&]() {
            auto x_35 = node_to_fs_node_x_1(x_21);
            x_35.parent = nullptr;
            x_35.prev = nullptr;
            x_35.next = nullptr;
            return x_35;
          }();
          AssertNodeValueEqual(x_21, x_37);
          ResetMetric(x_15);
          return MakeUnit();
        } else if (x_3576 == "remove") {
          return remove_node_x_7(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_38) { return JsonToInt(x_38); }),
                       x_21),
              x_15));
        } else if (x_3576 == "replace") {
          return replace_node_x_42(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_41) { return JsonToInt(x_41); }),
                       x_21),
              [&]() {
                auto x_39 = json_to_node_aux_x_0(JsonMember("node", x_31));
                x_39.parent = nullptr;
                x_39.prev = nullptr;
                x_39.next = nullptr;
                return x_39;
              }()));
        } else if (x_3576 == "replace_value") {
          return replace_value_x_9(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_43) { return JsonToInt(x_43); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3576 == "delete_value") {
          return delete_value_x_10(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_44) { return JsonToInt(x_44); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))), x_15)));
        } else if (x_3576 == "insert_value") {
          return insert_value_x_11(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_45) { return JsonToInt(x_45); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3576 == "layout_remove") {
          return remove_layout_node_x_8(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_46) { return JsonToInt(x_46); }),
                       x_22),
              x_15));
        } else if (x_3576 == "layout_add") {
          return add_layout_node_x_6(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_47) { return JsonToInt(x_47); }),
                       x_22),
              MakePair(json_to_layout_node_x_2(JsonMember("node", x_31)), x_15)));
        } else if (x_3576 == "layout_replace") {
          return replace_layout_node_x_49(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_48) { return JsonToInt(x_48); }),
                       x_22),
              json_to_layout_node_x_2(JsonMember("node", x_31))));
        } else if (x_3576 == "layout_info_changed") {
          return OutputChangeMetric(1);
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