#include "header.h"
auto var_modified_x_956(const auto &x_958) { return MakeUnit(); }
auto eval_expr_x_953(const auto &x_965) {
  if ((x_965.prev == nullptr) && not((*(x_965.prev)).var_line_break)) {
    return max(x_965.var_height_external, (*(x_965.prev)).var_line_height);
  } else {
    return x_965.var_height_external;
  }
}
auto var_modified_x_951(const auto &x_982) { return MakeUnit(); }
auto eval_expr_x_948(const auto &x_985) {
  if (eq(x_985.var_position, "absolute")) {
    return 0.;
  } else {
    return x_985.var_height_internal;
  }
}
auto var_modified_x_946(const auto &x_994) { return MakeUnit(); }
auto eval_expr_x_943(const auto &x_997) {
  if (x_997.var_intrinsic_height_is_height) {
    return x_997.var_intrinsic_height_internal;
  } else {
    if ((x_997.parent == nullptr) && (*(x_997.parent)).var_is_flex_column) {
      return plus(x_997.var_intrinsic_height_internal, mult(x_997.var_flex_amount, (*(x_997.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_997.var_height_expr, "%")) {
        return mult(x_997.var_box_height, divide(string_to_float(strip_suffix(x_997.var_height_expr, "%")), 100.));
      } else {
        assert(eq(x_997.var_height_expr, "fit-content"));
        return max(x_997.var_box_height, x_997.var_intrinsic_height_internal);
      }
    }
  }
}
auto var_modified_x_941(const auto &x_1050) { return MakeUnit(); }
auto eval_expr_x_938(const auto &x_1058) {
  if (x_1058.prev == nullptr) {
    if (x_1058.var_line_break || (*(x_1058.prev)).var_line_break) {
      return plus((*(x_1058.prev)).var_y, (*(x_1058.prev)).var_line_height);
    } else {
      return (*(x_1058.prev)).var_y;
    }
  } else {
    if (x_1058.parent == nullptr) {
      return (*(x_1058.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_936(const auto &x_1083) { return MakeUnit(); }
auto eval_expr_x_933(const auto &x_1087) {
  if (eq(x_1087.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1087.var_width_internal;
  }
}
auto var_modified_x_931(const auto &x_1096) { return MakeUnit(); }
auto eval_expr_x_928(const auto &x_1099) {
  if (x_1099.var_intrinsic_width_is_width) {
    return x_1099.var_intrinsic_width_internal;
  } else {
    if ((x_1099.parent == nullptr) && (*(x_1099.parent)).var_is_flex_row) {
      return plus(x_1099.var_intrinsic_width_internal, mult(x_1099.var_flex_amount, (*(x_1099.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1099.var_width_expr, "%")) {
        return mult(x_1099.var_box_width, divide(string_to_float(strip_suffix(x_1099.var_width_expr, "%")), 100.));
      } else {
        assert(eq(x_1099.var_width_expr, "fit-content"));
        return max(x_1099.var_box_width, x_1099.var_intrinsic_width_internal);
      }
    }
  }
}
auto var_modified_x_926(const auto &x_1152) { return MakeUnit(); }
auto eval_expr_x_923(const auto &x_1157) {
  if (x_1157.prev == nullptr) {
    if (x_1157.var_line_break || (*(x_1157.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_1157.prev)).var_x, (*(x_1157.prev)).var_width_external);
    }
  } else {
    if (x_1157.parent == nullptr) {
      return (*(x_1157.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_921(const auto &x_1178) { return MakeUnit(); }
auto eval_expr_x_918(const auto &x_1181) {
  if (gt(x_1181.var_left_over, 0.)) {
    return divide(x_1181.var_left_over, x_1181.var_flex_grow_sum);
  } else {
    return divide(x_1181.var_left_over, x_1181.var_flex_shrink_sum);
  }
}
auto var_modified_x_916(const auto &x_1202) { return MakeUnit(); }
auto eval_expr_x_913(const auto &x_1205) {
  if ((x_1205.parent == nullptr) && gt((*(x_1205.parent)).var_left_over, 0.)) {
    return x_1205.var_flex_grow;
  } else {
    return x_1205.var_flex_shrink;
  }
}
auto var_modified_x_911(const auto &x_1218) { return MakeUnit(); }
auto eval_expr_x_908(const auto &x_1223) {
  if (x_1223.var_is_flex_row) {
    return minus(x_1223.var_box_width, (x_1223.last == nullptr) ? ((*(x_1223.last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_1223.var_box_height, (x_1223.last == nullptr) ? ((*(x_1223.last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_906(const auto &x_1244) { return MakeUnit(); }
auto eval_expr_x_903(const auto &x_1248) {
  if (x_1248.parent == nullptr) {
    return (*(x_1248.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_901(const auto &x_1253) { return MakeUnit(); }
auto eval_expr_x_898(const auto &x_1257) {
  if (x_1257.parent == nullptr) {
    return (*(x_1257.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_895(const auto &x_1262) { return MakeUnit(); }
auto eval_expr_x_892(const auto &x_1280) {
  if (eq(x_1280.var_display, "none")) {
    return false;
  } else {
    if (eq(x_1280.var_position, "absolute")) {
      return false;
    } else {
      if ((x_1280.parent == nullptr) &&
          (eq((*(x_1280.parent)).var_display, "flex") || eq((*(x_1280.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_1280.var_display, "block")) {
          return true;
        } else {
          if (eq(x_1280.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_1280.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_1280.var_display, "flex")) {
                if (eq(HashtblForceFind(x_1280.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_1280.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    assert(eq(HashtblForceFind(x_1280.prop, "flex-direction"), "column-reverse"));
                    return true;
                  }
                }
              } else {
                if (eq(x_1280.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_1280.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_1280.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_1280.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_1280.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_1280.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_1280.var_display, "list-item")) {
                              return true;
                            } else {
                              assert(eq(x_1280.var_display, "grid"));
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
auto var_modified_x_890(const auto &x_1357) { return MakeUnit(); }
auto eval_expr_x_887(const auto &x_1359) {
  return ((not(x_1359.parent == nullptr) || (*(x_1359.parent)).var_visible) &&
          (neq(x_1359.var_display, "none") && (not(x_1359.var_inside_svg) && not(x_1359.var_disabled))));
}
auto var_modified_x_885(const auto &x_1376) { return MakeUnit(); }
auto eval_expr_x_882(const auto &x_1384) {
  if (eq(x_1384.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_1384.parent == nullptr) && (*(x_1384.parent)).var_disabled);
  }
}
auto var_modified_x_880(const auto &x_1389) { return MakeUnit(); }
auto eval_expr_x_877(const auto &x_1397) {
  return ((x_1397.parent == nullptr) && ((*(x_1397.parent)).var_is_svg_block || (*(x_1397.parent)).var_inside_svg));
}
auto var_modified_x_875(const auto &x_1406) { return MakeUnit(); }
auto eval_expr_x_872(const auto &x_1408) { return eq(x_1408.name, "svg"); }
auto var_modified_x_870(const auto &x_1409) { return MakeUnit(); }
auto eval_expr_x_867(const auto &x_1418) { return neq(x_1418.var_height_attr_expr, "auto"); }
auto var_modified_x_865(const auto &x_1423) { return MakeUnit(); }
auto eval_expr_x_862(const auto &x_1431) {
  if (not(IsSome(HashtblFind(x_1431.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1431.attr, "height")) ||
        has_suffix(HashtblForceFind(x_1431.attr, "height"), "%")) {
      return HashtblForceFind(x_1431.attr, "height");
    } else {
      assert(eq(HashtblForceFind(x_1431.attr, "height"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_860(const auto &x_1442) { return MakeUnit(); }
auto eval_expr_x_857(const auto &x_1452) { return neq(x_1452.var_width_attr_expr, "auto"); }
auto var_modified_x_855(const auto &x_1457) { return MakeUnit(); }
auto eval_expr_x_852(const auto &x_1465) {
  if (not(IsSome(HashtblFind(x_1465.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1465.attr, "width")) ||
        has_suffix(HashtblForceFind(x_1465.attr, "width"), "%")) {
      return HashtblForceFind(x_1465.attr, "width");
    } else {
      assert(eq(HashtblForceFind(x_1465.attr, "width"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_850(const auto &x_1476) { return MakeUnit(); }
auto eval_expr_x_847(const auto &x_1479) {
  if ((x_1479.parent == nullptr) &&
      (eq((*(x_1479.parent)).var_display, "flex") || eq((*(x_1479.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1479.parent)).var_flex_direction, "column") ||
        eq((*(x_1479.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      assert(eq((*(x_1479.parent)).var_flex_direction, "row"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_845(const auto &x_1504) { return MakeUnit(); }
auto eval_expr_x_842(const auto &x_1508) {
  if ((x_1508.parent == nullptr) &&
      (eq((*(x_1508.parent)).var_display, "flex") || eq((*(x_1508.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1508.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      assert(eq((*(x_1508.parent)).var_flex_direction, "column") ||
             eq((*(x_1508.parent)).var_flex_direction, "column-reverse"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_840(const auto &x_1533) { return MakeUnit(); }
auto eval_expr_x_837(const auto &x_1540) {
  if (IsSome(HashtblFind(x_1540.prop, "flex-direction"))) {
    return HashtblForceFind(x_1540.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_835(const auto &x_1543) { return MakeUnit(); }
auto eval_expr_x_832(const auto &x_1548) {
  return plus((x_1548.prev == nullptr) ? ((*(x_1548.prev)).var_flex_shrink_sum) : (0.), x_1548.var_flex_shrink);
}
auto var_modified_x_830(const auto &x_1557) { return MakeUnit(); }
auto eval_expr_x_827(const auto &x_1562) {
  return plus((x_1562.prev == nullptr) ? ((*(x_1562.prev)).var_flex_grow_sum) : (0.), x_1562.var_flex_grow);
}
auto var_modified_x_825(const auto &x_1571) { return MakeUnit(); }
auto eval_expr_x_822(const auto &x_1574) {
  if (IsSome(HashtblFind(x_1574.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_1574.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_820(const auto &x_1577) { return MakeUnit(); }
auto eval_expr_x_817(const auto &x_1580) {
  if (IsSome(HashtblFind(x_1580.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_1580.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_815(const auto &x_1583) { return MakeUnit(); }
auto eval_expr_x_812(const auto &x_1589) {
  if (IsSome(HashtblFind(x_1589.prop, "position"))) {
    return HashtblForceFind(x_1589.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_810(const auto &x_1592) { return MakeUnit(); }
auto eval_expr_x_807(const auto &x_1618) {
  if (IsSome(HashtblFind(x_1618.prop, "display"))) {
    return HashtblForceFind(x_1618.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_804(const auto &x_1621) { return MakeUnit(); }
auto eval_expr_x_801(const auto &x_1631) {
  if (x_1631.prev == nullptr) {
    if (x_1631.var_line_break) {
      return plus((*(x_1631.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_1631.prev)).var_intrinsic_current_line_height, x_1631.var_intrinsic_height_external));
    } else {
      return (*(x_1631.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1631.var_line_break) {
      return x_1631.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_799(const auto &x_1660) { return MakeUnit(); }
auto eval_expr_x_796(const auto &x_1670) {
  if (x_1670.var_line_break) {
    return 0.;
  } else {
    return max(x_1670.var_intrinsic_height_external,
               (x_1670.prev == nullptr) ? ((*(x_1670.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_794(const auto &x_1683) { return MakeUnit(); }
auto eval_expr_x_791(const auto &x_1690) {
  return plus((x_1690.prev == nullptr) ? ((*(x_1690.prev)).var_intrinsic_height_sum) : (0.),
              x_1690.var_intrinsic_height_external);
}
auto var_modified_x_789(const auto &x_1699) { return MakeUnit(); }
auto eval_expr_x_786(const auto &x_1704) {
  if (eq(x_1704.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1704.var_intrinsic_height_internal;
  }
}
auto var_modified_x_784(const auto &x_1713) { return MakeUnit(); }
auto eval_expr_x_781(const auto &x_1718) {
  if (eq(x_1718.var_display, "none")) {
    return 0.;
  } else {
    if (x_1718.var_inside_svg) {
      return 0.;
    } else {
      if (x_1718.var_disabled) {
        return 0.;
      } else {
        if (neq(x_1718.var_height_expr, "auto") &&
            (not(has_suffix(x_1718.var_height_expr, "%")) && neq(x_1718.var_height_expr, "fit-content"))) {
          if (has_suffix(x_1718.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_1718.var_height_expr, "px"));
          } else {
            if (has_suffix(x_1718.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_1718.var_height_expr, "ch"));
            } else {
              assert(has_suffix(x_1718.var_height_expr, "lh"));
              return string_to_float(strip_suffix(x_1718.var_height_expr, "lh"));
            }
          }
        } else {
          return plus(
              x_1718.var_children_intrinsic_height,
              (eq(x_1718.name, "#text"))
                  ? (ASSERT((!(x_1718.first == nullptr)), [&]() { return 10.; }))
                  : ((x_1718.var_is_default_case)
                         ? (0.)
                         : ((eq(x_1718.name, "BR"))
                                ? (ASSERT((!(x_1718.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_1718.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_1718.name, "svg"))
                                              ? ((x_1718.var_has_height_attr &&
                                                  string_is_float(x_1718.var_height_attr_expr))
                                                     ? (string_to_float(x_1718.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_1718.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_1718.attr, "viewBox"), " ", 3)))
                                                            : (ASSERT((x_1718.var_has_height_attr &&
                                                                       (has_suffix(x_1718.var_height_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_1718.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_1718.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 3)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_1718.var_height_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_1718.name, "IMG"))
                                                     ? ((x_1718.var_has_height_attr)
                                                            ? (string_to_float(x_1718.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_1718.attr, "image_height")) &&
                                                                not(x_1718.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_1718.attr, "image_height")))
                                                                   : (ASSERT((x_1718.var_has_width_attr &&
                                                                              (not(x_1718.var_has_height_attr) &&
                                                                               (IsSome(HashtblFind(x_1718.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_1718.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_1718.attr,
                                                                                                        "image_width"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_1718.var_width_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_1718.attr,
                                                                                             "image_height")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_1718.attr,
                                                                                             "image_width"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_1718.name, "IFRAME"))
                                                            ? (ASSERT((!x_1718.var_has_height_attr),
                                                                      [&]() { return 150.; }))
                                                            : ((eq(x_1718.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_1718.name, "VIDEO"), [&]() {
                                                                       assert(!x_1718.var_has_height_attr);
                                                                       return 150.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_779(const auto &x_1863) { return MakeUnit(); }
auto eval_expr_x_776(const auto &x_1865) {
  if (eq(x_1865.var_display, "none") || (x_1865.var_inside_svg || x_1865.var_disabled)) {
    return true;
  } else {
    if ((x_1865.parent == nullptr) && (*(x_1865.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1865.var_height_expr, "auto") ||
          (has_suffix(x_1865.var_height_expr, "px") ||
           (has_suffix(x_1865.var_height_expr, "ch") ||
            (has_suffix(x_1865.var_height_expr, "lh") || eq(x_1865.var_height_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_1865.var_height_expr, "%") || eq(x_1865.var_height_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_774(const auto &x_1914) { return MakeUnit(); }
auto eval_expr_x_771(const auto &x_1934) {
  if (IsSome(HashtblFind(x_1934.prop, "height"))) {
    return HashtblForceFind(x_1934.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_769(const auto &x_1937) { return MakeUnit(); }
auto eval_expr_x_766(const auto &x_1939) {
  if (x_1939.last == nullptr) {
    return plus((*(x_1939.last)).var_finished_intrinsic_height_sum, (*(x_1939.last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_764(const auto &x_1948) { return MakeUnit(); }
auto eval_expr_x_761(const auto &x_1955) {
  return plus((x_1955.prev == nullptr) ? ((*(x_1955.prev)).var_intrinsic_width_sum) : (0.),
              x_1955.var_intrinsic_width_external);
}
auto var_modified_x_759(const auto &x_1964) { return MakeUnit(); }
auto eval_expr_x_756(const auto &x_1971) {
  return max(x_1971.var_intrinsic_current_line_width,
             (x_1971.prev == nullptr) ? ((*(x_1971.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_754(const auto &x_1980) { return MakeUnit(); }
auto eval_expr_x_751(const auto &x_1985) {
  return plus(x_1985.var_intrinsic_width_external,
              ((x_1985.prev == nullptr) && not((*(x_1985.prev)).var_line_break))
                  ? ((*(x_1985.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_749(const auto &x_1998) { return MakeUnit(); }
auto eval_expr_x_746(const auto &x_2001) {
  if (eq(x_2001.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2001.var_intrinsic_width_internal;
  }
}
auto var_modified_x_744(const auto &x_2010) { return MakeUnit(); }
auto eval_expr_x_741(const auto &x_2015) {
  if (eq(x_2015.var_display, "none")) {
    return 0.;
  } else {
    if (x_2015.var_inside_svg) {
      return 0.;
    } else {
      if (x_2015.var_disabled) {
        return 0.;
      } else {
        if (neq(x_2015.var_width_expr, "auto") &&
            (not(has_suffix(x_2015.var_width_expr, "%")) &&
             (neq(x_2015.var_width_expr, "fit-content") &&
              (neq(x_2015.var_width_expr, "max-content") && not(has_prefix(x_2015.var_width_expr, "calc")))))) {
          if (has_suffix(x_2015.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_2015.var_width_expr, "px"));
          } else {
            assert(has_suffix(x_2015.var_width_expr, "ch"));
            return string_to_float(strip_suffix(x_2015.var_width_expr, "ch"));
          }
        } else {
          return plus(
              x_2015.var_children_intrinsic_width,
              (eq(x_2015.name, "#text"))
                  ? (ASSERT((!(x_2015.first == nullptr)), [&]() { return 100.; }))
                  : ((x_2015.var_is_default_case)
                         ? (0.)
                         : ((eq(x_2015.name, "BR"))
                                ? (ASSERT((!(x_2015.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_2015.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_2015.name, "svg"))
                                              ? ((x_2015.var_has_width_attr &&
                                                  string_is_float(x_2015.var_width_attr_expr))
                                                     ? (string_to_float(x_2015.var_width_attr_expr))
                                                     : ((not(x_2015.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_2015.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_2015.attr, "viewBox"), " ", 2)))
                                                            : (ASSERT((x_2015.var_has_width_attr &&
                                                                       (has_suffix(x_2015.var_width_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_2015.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_2015.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 2)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_2015.var_width_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_2015.name, "IMG"))
                                                     ? ((x_2015.var_has_width_attr)
                                                            ? (string_to_float(x_2015.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_2015.attr, "image_width")) &&
                                                                not(x_2015.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_2015.attr, "image_width")))
                                                                   : (ASSERT((not(x_2015.var_has_width_attr) &&
                                                                              (x_2015.var_has_height_attr &&
                                                                               (IsSome(HashtblFind(x_2015.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_2015.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_2015.attr,
                                                                                                        "image_height"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_2015.var_height_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_2015.attr,
                                                                                             "image_width")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_2015.attr,
                                                                                             "image_height"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_2015.name, "IFRAME"))
                                                            ? (ASSERT((!x_2015.var_has_width_attr),
                                                                      [&]() { return 300.; }))
                                                            : ((eq(x_2015.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_2015.name, "VIDEO"), [&]() {
                                                                       assert(!x_2015.var_has_width_attr);
                                                                       return 300.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_739(const auto &x_2168) { return MakeUnit(); }
auto eval_expr_x_736(const auto &x_2170) {
  if (x_2170.last == nullptr) {
    return (*(x_2170.last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_734(const auto &x_2175) { return MakeUnit(); }
auto eval_expr_x_731(const auto &x_2177) {
  if (eq(x_2177.var_display, "none") || (x_2177.var_inside_svg || x_2177.var_disabled)) {
    return true;
  } else {
    if ((x_2177.parent == nullptr) && (*(x_2177.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2177.var_width_expr, "auto") ||
          (has_suffix(x_2177.var_width_expr, "px") ||
           (has_suffix(x_2177.var_width_expr, "ch") ||
            (has_prefix(x_2177.var_width_expr, "calc(") || eq(x_2177.var_width_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_2177.var_width_expr, "%") || eq(x_2177.var_width_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_729(const auto &x_2226) { return MakeUnit(); }
auto eval_expr_x_726(const auto &x_2229) {
  if (eq(x_2229.var_display, "none")) {
    return true;
  } else {
    if (x_2229.var_inside_svg) {
      return true;
    } else {
      if (x_2229.var_disabled) {
        return true;
      } else {if ( eq(x_2229.name,"#document") || (eq(x_2229.name,"#shadow-root") || (eq(x_2229.name,"DIV") || (eq(x_2229.name,"HTML") || (eq(x_2229.name,"BODY") || (eq(x_2229.name,"BUTTON") || (eq(x_2229.name,"FOOTER") || (eq(x_2229.name,"SELECT") || (eq(x_2229.name,"SECTION") || (eq(x_2229.name,"FORM") || (eq(x_2229.name,"CENTER") || (eq(x_2229.name,"TD") || (eq(x_2229.name,"TR") || (eq(x_2229.name,"TBODY") || (eq(x_2229.name,"TABLE") || (eq(x_2229.name,"SPAN") || (eq(x_2229.name,"FONT") || (eq(x_2229.name,"A") || (eq(x_2229.name,"ARTICLE") || (eq(x_2229.name,"P") || (eq(x_2229.name,"U") || (eq(x_2229.name,"UL") || (eq(x_2229.name,"B") || (eq(x_2229.name,"H1") || (eq(x_2229.name,"H2") || (eq(x_2229.name,"H3") || (eq(x_2229.name,"H4") || (eq(x_2229.name,"DT") || (eq(x_2229.name,"DD") || (eq(x_2229.name,"DL") || (eq(x_2229.name,"LI") || (eq(x_2229.name,"LABEL") || (eq(x_2229.name,"OL") || (eq(x_2229.name,"NAV") || (eq(x_2229.name,"HEADER") || (eq(x_2229.name,"HEAD") || (eq(x_2229.name,"SOURCE") || (eq(x_2229.name,"PICTURE") || (eq(x_2229.name,"FIGURE") || (eq(x_2229.name,"FIGCAPTION") || (eq(x_2229.name,"MAIN") || (eq(x_2229.name,"REACT-PARTIAL") || (eq(x_2229.name,"QUERY-BUILDER") || (eq(x_2229.name,"MODAL-DIALOG") || (eq(x_2229.name,"SCROLLABLE-REGION") || (eq(x_2229.name,"DIALOG-HELPER") || (eq(x_2229.name,"AUTO-CHECK") || (eq(x_2229.name,"TOOL-TIP") || (eq(x_2229.name,"CUSTOM-SCOPES") || (eq(x_2229.name,"QBSEARCH-INPUT") || (eq(x_2229.name,"INCLUDE-FRAGMENT") || (eq(x_2229.name,"COOKIE-CONSENT-LINK") || (eq(x_2229.name,"FULLSTORY-CAPTURE") || (eq(x_2229.name,"GHCC-CONSENT") || (eq(x_2229.name,"GLOBAL-BANNER") || (eq(x_2229.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_2229.name,"CARD-SKEW") || (eq(x_2229.name,"EM") || (eq(x_2229.name,"ASIDE") || (eq(x_2229.name,"AUDIO") || (eq(x_2229.name,"SUP") || (eq(x_2229.name,"TIME") || (eq(x_2229.name,"ABBR") || (eq(x_2229.name,"SMALL") || (eq(x_2229.name,"SLOT") || eq(x_2229.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          assert(eq(x_2229.name, "#text") ||
                 (eq(x_2229.name, "svg") ||
                  (eq(x_2229.name, "IFRAME") ||
                   (eq(x_2229.name, "INPUT") ||
                    (eq(x_2229.name, "VIDEO") ||
                     (eq(x_2229.name, "BR") || (eq(x_2229.name, "IMG") || eq(x_2229.name, "TEXTAREA"))))))));
          return false;
        }
      }
    }
  }
}
auto var_modified_x_724(const auto &x_2242) { return MakeUnit(); }
auto eval_expr_x_721(const auto &x_2262) {
  if (IsSome(HashtblFind(x_2262.prop, "width"))) {
    return HashtblForceFind(x_2262.prop, "width");
  } else {
    return "auto";
  }
}
auto var_modified_x_718(const auto &x_2265) { return MakeUnit(); }
auto eval_expr_x_715(const auto &x_2272) {
  if ((x_2272.prev == nullptr) && not((*(x_2272.prev)).var_line_break)) {
    return max(x_2272.var_height_external, (*(x_2272.prev)).var_line_height);
  } else {
    return x_2272.var_height_external;
  }
}
auto var_modified_x_713(const auto &x_2289) { return MakeUnit(); }
auto eval_expr_x_710(const auto &x_2292) {
  if (eq(x_2292.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2292.var_height_internal;
  }
}
auto var_modified_x_708(const auto &x_2301) { return MakeUnit(); }
auto eval_expr_x_705(const auto &x_2304) {
  if (x_2304.var_intrinsic_height_is_height) {
    return x_2304.var_intrinsic_height_internal;
  } else {
    if ((x_2304.parent == nullptr) && (*(x_2304.parent)).var_is_flex_column) {
      return plus(x_2304.var_intrinsic_height_internal, mult(x_2304.var_flex_amount, (*(x_2304.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2304.var_height_expr, "%")) {
        return mult(x_2304.var_box_height, divide(string_to_float(strip_suffix(x_2304.var_height_expr, "%")), 100.));
      } else {
        assert(eq(x_2304.var_height_expr, "fit-content"));
        return max(x_2304.var_box_height, x_2304.var_intrinsic_height_internal);
      }
    }
  }
}
auto var_modified_x_703(const auto &x_2357) { return MakeUnit(); }
auto eval_expr_x_700(const auto &x_2365) {
  if (x_2365.prev == nullptr) {
    if (x_2365.var_line_break || (*(x_2365.prev)).var_line_break) {
      return plus((*(x_2365.prev)).var_y, (*(x_2365.prev)).var_line_height);
    } else {
      return (*(x_2365.prev)).var_y;
    }
  } else {
    if (x_2365.parent == nullptr) {
      return (*(x_2365.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_698(const auto &x_2390) { return MakeUnit(); }
auto eval_expr_x_695(const auto &x_2394) {
  if (eq(x_2394.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2394.var_width_internal;
  }
}
auto var_modified_x_693(const auto &x_2403) { return MakeUnit(); }
auto eval_expr_x_690(const auto &x_2406) {
  if (x_2406.var_intrinsic_width_is_width) {
    return x_2406.var_intrinsic_width_internal;
  } else {
    if ((x_2406.parent == nullptr) && (*(x_2406.parent)).var_is_flex_row) {
      return plus(x_2406.var_intrinsic_width_internal, mult(x_2406.var_flex_amount, (*(x_2406.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2406.var_width_expr, "%")) {
        return mult(x_2406.var_box_width, divide(string_to_float(strip_suffix(x_2406.var_width_expr, "%")), 100.));
      } else {
        assert(eq(x_2406.var_width_expr, "fit-content"));
        return max(x_2406.var_box_width, x_2406.var_intrinsic_width_internal);
      }
    }
  }
}
auto var_modified_x_688(const auto &x_2459) { return MakeUnit(); }
auto eval_expr_x_685(const auto &x_2464) {
  if (x_2464.prev == nullptr) {
    if (x_2464.var_line_break || (*(x_2464.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_2464.prev)).var_x, (*(x_2464.prev)).var_width_external);
    }
  } else {
    if (x_2464.parent == nullptr) {
      return (*(x_2464.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_683(const auto &x_2485) { return MakeUnit(); }
auto eval_expr_x_680(const auto &x_2488) {
  if (gt(x_2488.var_left_over, 0.)) {
    return divide(x_2488.var_left_over, x_2488.var_flex_grow_sum);
  } else {
    return divide(x_2488.var_left_over, x_2488.var_flex_shrink_sum);
  }
}
auto var_modified_x_678(const auto &x_2509) { return MakeUnit(); }
auto eval_expr_x_675(const auto &x_2512) {
  if ((x_2512.parent == nullptr) && gt((*(x_2512.parent)).var_left_over, 0.)) {
    return x_2512.var_flex_grow;
  } else {
    return x_2512.var_flex_shrink;
  }
}
auto var_modified_x_673(const auto &x_2525) { return MakeUnit(); }
auto eval_expr_x_670(const auto &x_2530) {
  if (x_2530.var_is_flex_row) {
    return minus(x_2530.var_box_width, (x_2530.last == nullptr) ? ((*(x_2530.last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2530.var_box_height, (x_2530.last == nullptr) ? ((*(x_2530.last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_668(const auto &x_2551) { return MakeUnit(); }
auto eval_expr_x_665(const auto &x_2555) {
  if (x_2555.parent == nullptr) {
    return (*(x_2555.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_663(const auto &x_2560) { return MakeUnit(); }
auto eval_expr_x_660(const auto &x_2564) {
  if (x_2564.parent == nullptr) {
    return (*(x_2564.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_657(const auto &x_2569) { return MakeUnit(); }
auto eval_expr_x_654(const auto &x_2587) {
  if (eq(x_2587.var_display, "none")) {
    return false;
  } else {
    if (eq(x_2587.var_position, "absolute")) {
      return false;
    } else {
      if ((x_2587.parent == nullptr) &&
          (eq((*(x_2587.parent)).var_display, "flex") || eq((*(x_2587.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_2587.var_display, "block")) {
          return true;
        } else {
          if (eq(x_2587.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_2587.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_2587.var_display, "flex")) {
                if (eq(HashtblForceFind(x_2587.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_2587.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    assert(eq(HashtblForceFind(x_2587.prop, "flex-direction"), "column-reverse"));
                    return true;
                  }
                }
              } else {
                if (eq(x_2587.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_2587.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_2587.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_2587.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_2587.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_2587.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_2587.var_display, "list-item")) {
                              return true;
                            } else {
                              assert(eq(x_2587.var_display, "grid"));
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
auto var_modified_x_652(const auto &x_2664) { return MakeUnit(); }
auto eval_expr_x_649(const auto &x_2666) {
  return ((not(x_2666.parent == nullptr) || (*(x_2666.parent)).var_visible) &&
          (neq(x_2666.var_display, "none") && (not(x_2666.var_inside_svg) && not(x_2666.var_disabled))));
}
auto var_modified_x_647(const auto &x_2683) { return MakeUnit(); }
auto eval_expr_x_644(const auto &x_2691) {
  if (eq(x_2691.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_2691.parent == nullptr) && (*(x_2691.parent)).var_disabled);
  }
}
auto var_modified_x_642(const auto &x_2696) { return MakeUnit(); }
auto eval_expr_x_639(const auto &x_2704) {
  return ((x_2704.parent == nullptr) && ((*(x_2704.parent)).var_is_svg_block || (*(x_2704.parent)).var_inside_svg));
}
auto var_modified_x_637(const auto &x_2713) { return MakeUnit(); }
auto eval_expr_x_634(const auto &x_2715) { return eq(x_2715.name, "svg"); }
auto var_modified_x_632(const auto &x_2716) { return MakeUnit(); }
auto eval_expr_x_629(const auto &x_2725) { return neq(x_2725.var_height_attr_expr, "auto"); }
auto var_modified_x_627(const auto &x_2730) { return MakeUnit(); }
auto eval_expr_x_624(const auto &x_2738) {
  if (not(IsSome(HashtblFind(x_2738.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2738.attr, "height")) ||
        has_suffix(HashtblForceFind(x_2738.attr, "height"), "%")) {
      return HashtblForceFind(x_2738.attr, "height");
    } else {
      assert(eq(HashtblForceFind(x_2738.attr, "height"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_622(const auto &x_2749) { return MakeUnit(); }
auto eval_expr_x_619(const auto &x_2759) { return neq(x_2759.var_width_attr_expr, "auto"); }
auto var_modified_x_617(const auto &x_2764) { return MakeUnit(); }
auto eval_expr_x_614(const auto &x_2772) {
  if (not(IsSome(HashtblFind(x_2772.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2772.attr, "width")) ||
        has_suffix(HashtblForceFind(x_2772.attr, "width"), "%")) {
      return HashtblForceFind(x_2772.attr, "width");
    } else {
      assert(eq(HashtblForceFind(x_2772.attr, "width"), "Auto"));
      return "auto";
    }
  }
}
auto var_modified_x_612(const auto &x_2783) { return MakeUnit(); }
auto eval_expr_x_609(const auto &x_2786) {
  if ((x_2786.parent == nullptr) &&
      (eq((*(x_2786.parent)).var_display, "flex") || eq((*(x_2786.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2786.parent)).var_flex_direction, "column") ||
        eq((*(x_2786.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      assert(eq((*(x_2786.parent)).var_flex_direction, "row"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_607(const auto &x_2811) { return MakeUnit(); }
auto eval_expr_x_604(const auto &x_2815) {
  if ((x_2815.parent == nullptr) &&
      (eq((*(x_2815.parent)).var_display, "flex") || eq((*(x_2815.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2815.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      assert(eq((*(x_2815.parent)).var_flex_direction, "column") ||
             eq((*(x_2815.parent)).var_flex_direction, "column-reverse"));
      return false;
    }
  } else {
    return false;
  }
}
auto var_modified_x_602(const auto &x_2840) { return MakeUnit(); }
auto eval_expr_x_599(const auto &x_2847) {
  if (IsSome(HashtblFind(x_2847.prop, "flex-direction"))) {
    return HashtblForceFind(x_2847.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_597(const auto &x_2850) { return MakeUnit(); }
auto eval_expr_x_594(const auto &x_2855) {
  return plus((x_2855.prev == nullptr) ? ((*(x_2855.prev)).var_flex_shrink_sum) : (0.), x_2855.var_flex_shrink);
}
auto var_modified_x_592(const auto &x_2864) { return MakeUnit(); }
auto eval_expr_x_589(const auto &x_2869) {
  return plus((x_2869.prev == nullptr) ? ((*(x_2869.prev)).var_flex_grow_sum) : (0.), x_2869.var_flex_grow);
}
auto var_modified_x_587(const auto &x_2878) { return MakeUnit(); }
auto eval_expr_x_584(const auto &x_2881) {
  if (IsSome(HashtblFind(x_2881.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_2881.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_582(const auto &x_2884) { return MakeUnit(); }
auto eval_expr_x_579(const auto &x_2887) {
  if (IsSome(HashtblFind(x_2887.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_2887.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_577(const auto &x_2890) { return MakeUnit(); }
auto eval_expr_x_574(const auto &x_2896) {
  if (IsSome(HashtblFind(x_2896.prop, "position"))) {
    return HashtblForceFind(x_2896.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_572(const auto &x_2899) { return MakeUnit(); }
auto eval_expr_x_569(const auto &x_2925) {
  if (IsSome(HashtblFind(x_2925.prop, "display"))) {
    return HashtblForceFind(x_2925.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_566(const auto &x_2928) { return MakeUnit(); }
auto eval_expr_x_563(const auto &x_2938) {
  if (x_2938.prev == nullptr) {
    if (x_2938.var_line_break) {
      return plus((*(x_2938.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_2938.prev)).var_intrinsic_current_line_height, x_2938.var_intrinsic_height_external));
    } else {
      return (*(x_2938.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2938.var_line_break) {
      return x_2938.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_561(const auto &x_2967) { return MakeUnit(); }
auto eval_expr_x_558(const auto &x_2977) {
  if (x_2977.var_line_break) {
    return 0.;
  } else {
    return max(x_2977.var_intrinsic_height_external,
               (x_2977.prev == nullptr) ? ((*(x_2977.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_556(const auto &x_2990) { return MakeUnit(); }
auto eval_expr_x_553(const auto &x_2997) {
  return plus((x_2997.prev == nullptr) ? ((*(x_2997.prev)).var_intrinsic_height_sum) : (0.),
              x_2997.var_intrinsic_height_external);
}
auto var_modified_x_551(const auto &x_3006) { return MakeUnit(); }
auto eval_expr_x_548(const auto &x_3011) {
  if (eq(x_3011.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3011.var_intrinsic_height_internal;
  }
}
auto var_modified_x_546(const auto &x_3020) { return MakeUnit(); }
auto eval_expr_x_543(const auto &x_3025) {
  if (eq(x_3025.var_display, "none")) {
    return 0.;
  } else {
    if (x_3025.var_inside_svg) {
      return 0.;
    } else {
      if (x_3025.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3025.var_height_expr, "auto") &&
            (not(has_suffix(x_3025.var_height_expr, "%")) && neq(x_3025.var_height_expr, "fit-content"))) {
          if (has_suffix(x_3025.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_3025.var_height_expr, "px"));
          } else {
            if (has_suffix(x_3025.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_3025.var_height_expr, "ch"));
            } else {
              assert(has_suffix(x_3025.var_height_expr, "lh"));
              return string_to_float(strip_suffix(x_3025.var_height_expr, "lh"));
            }
          }
        } else {
          return plus(
              x_3025.var_children_intrinsic_height,
              (eq(x_3025.name, "#text"))
                  ? (ASSERT((!(x_3025.first == nullptr)), [&]() { return 10.; }))
                  : ((x_3025.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3025.name, "BR"))
                                ? (ASSERT((!(x_3025.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_3025.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_3025.name, "svg"))
                                              ? ((x_3025.var_has_height_attr &&
                                                  string_is_float(x_3025.var_height_attr_expr))
                                                     ? (string_to_float(x_3025.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_3025.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3025.attr, "viewBox"), " ", 3)))
                                                            : (ASSERT((x_3025.var_has_height_attr &&
                                                                       (has_suffix(x_3025.var_height_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_3025.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_3025.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 3)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_3025.var_height_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_3025.name, "IMG"))
                                                     ? ((x_3025.var_has_height_attr)
                                                            ? (string_to_float(x_3025.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3025.attr, "image_height")) &&
                                                                not(x_3025.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3025.attr, "image_height")))
                                                                   : (ASSERT((x_3025.var_has_width_attr &&
                                                                              (not(x_3025.var_has_height_attr) &&
                                                                               (IsSome(HashtblFind(x_3025.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_3025.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_3025.attr,
                                                                                                        "image_width"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_3025.var_width_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3025.attr,
                                                                                             "image_height")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3025.attr,
                                                                                             "image_width"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_3025.name, "IFRAME"))
                                                            ? (ASSERT((!x_3025.var_has_height_attr),
                                                                      [&]() { return 150.; }))
                                                            : ((eq(x_3025.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_3025.name, "VIDEO"), [&]() {
                                                                       assert(!x_3025.var_has_height_attr);
                                                                       return 150.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_541(const auto &x_3170) { return MakeUnit(); }
auto eval_expr_x_538(const auto &x_3172) {
  if (eq(x_3172.var_display, "none") || (x_3172.var_inside_svg || x_3172.var_disabled)) {
    return true;
  } else {
    if ((x_3172.parent == nullptr) && (*(x_3172.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3172.var_height_expr, "auto") ||
          (has_suffix(x_3172.var_height_expr, "px") ||
           (has_suffix(x_3172.var_height_expr, "ch") ||
            (has_suffix(x_3172.var_height_expr, "lh") || eq(x_3172.var_height_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_3172.var_height_expr, "%") || eq(x_3172.var_height_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_536(const auto &x_3221) { return MakeUnit(); }
auto eval_expr_x_533(const auto &x_3241) {
  if (IsSome(HashtblFind(x_3241.prop, "height"))) {
    return HashtblForceFind(x_3241.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_531(const auto &x_3244) { return MakeUnit(); }
auto eval_expr_x_528(const auto &x_3246) {
  if (x_3246.last == nullptr) {
    return plus((*(x_3246.last)).var_finished_intrinsic_height_sum, (*(x_3246.last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_526(const auto &x_3255) { return MakeUnit(); }
auto eval_expr_x_523(const auto &x_3262) {
  return plus((x_3262.prev == nullptr) ? ((*(x_3262.prev)).var_intrinsic_width_sum) : (0.),
              x_3262.var_intrinsic_width_external);
}
auto var_modified_x_521(const auto &x_3271) { return MakeUnit(); }
auto eval_expr_x_518(const auto &x_3278) {
  return max(x_3278.var_intrinsic_current_line_width,
             (x_3278.prev == nullptr) ? ((*(x_3278.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_516(const auto &x_3287) { return MakeUnit(); }
auto eval_expr_x_513(const auto &x_3292) {
  return plus(x_3292.var_intrinsic_width_external,
              ((x_3292.prev == nullptr) && not((*(x_3292.prev)).var_line_break))
                  ? ((*(x_3292.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_511(const auto &x_3305) { return MakeUnit(); }
auto eval_expr_x_508(const auto &x_3308) {
  if (eq(x_3308.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3308.var_intrinsic_width_internal;
  }
}
auto var_modified_x_506(const auto &x_3317) { return MakeUnit(); }
auto eval_expr_x_503(const auto &x_3322) {
  if (eq(x_3322.var_display, "none")) {
    return 0.;
  } else {
    if (x_3322.var_inside_svg) {
      return 0.;
    } else {
      if (x_3322.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3322.var_width_expr, "auto") &&
            (not(has_suffix(x_3322.var_width_expr, "%")) &&
             (neq(x_3322.var_width_expr, "fit-content") &&
              (neq(x_3322.var_width_expr, "max-content") && not(has_prefix(x_3322.var_width_expr, "calc")))))) {
          if (has_suffix(x_3322.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_3322.var_width_expr, "px"));
          } else {
            assert(has_suffix(x_3322.var_width_expr, "ch"));
            return string_to_float(strip_suffix(x_3322.var_width_expr, "ch"));
          }
        } else {
          return plus(
              x_3322.var_children_intrinsic_width,
              (eq(x_3322.name, "#text"))
                  ? (ASSERT((!(x_3322.first == nullptr)), [&]() { return 100.; }))
                  : ((x_3322.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3322.name, "BR"))
                                ? (ASSERT((!(x_3322.first == nullptr)), [&]() { return 0.; }))
                                : ((eq(x_3322.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_3322.name, "svg"))
                                              ? ((x_3322.var_has_width_attr &&
                                                  string_is_float(x_3322.var_width_attr_expr))
                                                     ? (string_to_float(x_3322.var_width_attr_expr))
                                                     : ((not(x_3322.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_3322.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3322.attr, "viewBox"), " ", 2)))
                                                            : (ASSERT((x_3322.var_has_width_attr &&
                                                                       (has_suffix(x_3322.var_width_attr_expr, "%") &&
                                                                        IsSome(HashtblFind(x_3322.attr, "viewBox")))),
                                                                      [&]() {
                                                                        return mult(
                                                                            string_to_float(
                                                                                nth_by_sep(HashtblForceFind(x_3322.attr,
                                                                                                            "viewBox"),
                                                                                           " ", 2)),
                                                                            divide(
                                                                                string_to_float(strip_suffix(
                                                                                    x_3322.var_width_attr_expr, "%")),
                                                                                100.));
                                                                      }))))
                                              : ((eq(x_3322.name, "IMG"))
                                                     ? ((x_3322.var_has_width_attr)
                                                            ? (string_to_float(x_3322.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3322.attr, "image_width")) &&
                                                                not(x_3322.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3322.attr, "image_width")))
                                                                   : (ASSERT((not(x_3322.var_has_width_attr) &&
                                                                              (x_3322.var_has_height_attr &&
                                                                               (IsSome(HashtblFind(x_3322.attr,
                                                                                                   "image_width")) &&
                                                                                IsSome(HashtblFind(x_3322.attr,
                                                                                                   "image_height"))))),
                                                                             [&]() {
                                                                               if (neq(HashtblForceFind(x_3322.attr,
                                                                                                        "image_height"),
                                                                                       0)) {
                                                                                 return mult(
                                                                                     string_to_float(
                                                                                         x_3322.var_height_attr_expr),
                                                                                     divide(
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3322.attr,
                                                                                             "image_width")),
                                                                                         int_to_float(HashtblForceFind(
                                                                                             x_3322.attr,
                                                                                             "image_height"))));
                                                                               } else {
                                                                                 return 0.;
                                                                               }
                                                                             }))))
                                                     : ((eq(x_3322.name, "IFRAME"))
                                                            ? (ASSERT((!x_3322.var_has_width_attr),
                                                                      [&]() { return 300.; }))
                                                            : ((eq(x_3322.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : (ASSERT(eq(x_3322.name, "VIDEO"), [&]() {
                                                                       assert(!x_3322.var_has_width_attr);
                                                                       return 300.;
                                                                     }))))))))));
        }
      }
    }
  }
}
auto var_modified_x_501(const auto &x_3475) { return MakeUnit(); }
auto eval_expr_x_498(const auto &x_3477) {
  if (x_3477.last == nullptr) {
    return (*(x_3477.last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_496(const auto &x_3482) { return MakeUnit(); }
auto eval_expr_x_493(const auto &x_3484) {
  if (eq(x_3484.var_display, "none") || (x_3484.var_inside_svg || x_3484.var_disabled)) {
    return true;
  } else {
    if ((x_3484.parent == nullptr) && (*(x_3484.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3484.var_width_expr, "auto") ||
          (has_suffix(x_3484.var_width_expr, "px") ||
           (has_suffix(x_3484.var_width_expr, "ch") ||
            (has_prefix(x_3484.var_width_expr, "calc(") || eq(x_3484.var_width_expr, "max-content"))))) {
        return true;
      } else {
        assert(has_suffix(x_3484.var_width_expr, "%") || eq(x_3484.var_width_expr, "fit-content"));
        return false;
      }
    }
  }
}
auto var_modified_x_491(const auto &x_3533) { return MakeUnit(); }
auto eval_expr_x_488(const auto &x_3536) {
  if (eq(x_3536.var_display, "none")) {
    return true;
  } else {
    if (x_3536.var_inside_svg) {
      return true;
    } else {
      if (x_3536.var_disabled) {
        return true;
      } else {if ( eq(x_3536.name,"#document") || (eq(x_3536.name,"#shadow-root") || (eq(x_3536.name,"DIV") || (eq(x_3536.name,"HTML") || (eq(x_3536.name,"BODY") || (eq(x_3536.name,"BUTTON") || (eq(x_3536.name,"FOOTER") || (eq(x_3536.name,"SELECT") || (eq(x_3536.name,"SECTION") || (eq(x_3536.name,"FORM") || (eq(x_3536.name,"CENTER") || (eq(x_3536.name,"TD") || (eq(x_3536.name,"TR") || (eq(x_3536.name,"TBODY") || (eq(x_3536.name,"TABLE") || (eq(x_3536.name,"SPAN") || (eq(x_3536.name,"FONT") || (eq(x_3536.name,"A") || (eq(x_3536.name,"ARTICLE") || (eq(x_3536.name,"P") || (eq(x_3536.name,"U") || (eq(x_3536.name,"UL") || (eq(x_3536.name,"B") || (eq(x_3536.name,"H1") || (eq(x_3536.name,"H2") || (eq(x_3536.name,"H3") || (eq(x_3536.name,"H4") || (eq(x_3536.name,"DT") || (eq(x_3536.name,"DD") || (eq(x_3536.name,"DL") || (eq(x_3536.name,"LI") || (eq(x_3536.name,"LABEL") || (eq(x_3536.name,"OL") || (eq(x_3536.name,"NAV") || (eq(x_3536.name,"HEADER") || (eq(x_3536.name,"HEAD") || (eq(x_3536.name,"SOURCE") || (eq(x_3536.name,"PICTURE") || (eq(x_3536.name,"FIGURE") || (eq(x_3536.name,"FIGCAPTION") || (eq(x_3536.name,"MAIN") || (eq(x_3536.name,"REACT-PARTIAL") || (eq(x_3536.name,"QUERY-BUILDER") || (eq(x_3536.name,"MODAL-DIALOG") || (eq(x_3536.name,"SCROLLABLE-REGION") || (eq(x_3536.name,"DIALOG-HELPER") || (eq(x_3536.name,"AUTO-CHECK") || (eq(x_3536.name,"TOOL-TIP") || (eq(x_3536.name,"CUSTOM-SCOPES") || (eq(x_3536.name,"QBSEARCH-INPUT") || (eq(x_3536.name,"INCLUDE-FRAGMENT") || (eq(x_3536.name,"COOKIE-CONSENT-LINK") || (eq(x_3536.name,"FULLSTORY-CAPTURE") || (eq(x_3536.name,"GHCC-CONSENT") || (eq(x_3536.name,"GLOBAL-BANNER") || (eq(x_3536.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_3536.name,"CARD-SKEW") || (eq(x_3536.name,"EM") || (eq(x_3536.name,"ASIDE") || (eq(x_3536.name,"AUDIO") || (eq(x_3536.name,"SUP") || (eq(x_3536.name,"TIME") || (eq(x_3536.name,"ABBR") || (eq(x_3536.name,"SMALL") || (eq(x_3536.name,"SLOT") || eq(x_3536.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          assert(eq(x_3536.name, "#text") ||
                 (eq(x_3536.name, "svg") ||
                  (eq(x_3536.name, "IFRAME") ||
                   (eq(x_3536.name, "INPUT") ||
                    (eq(x_3536.name, "VIDEO") ||
                     (eq(x_3536.name, "BR") || (eq(x_3536.name, "IMG") || eq(x_3536.name, "TEXTAREA"))))))));
          return false;
        }
      }
    }
  }
}
auto var_modified_x_486(const auto &x_3549) { return MakeUnit(); }
auto eval_expr_x_483(const auto &x_3569) {
  if (IsSome(HashtblFind(x_3569.prop, "width"))) {
    return HashtblForceFind(x_3569.prop, "width");
  } else {
    return "auto";
  }
}
auto eval_stmts_x_240(const auto &x_482) {
  WriteMetric();
  auto x_484 = eval_expr_x_483(x_482);
  x_482.var_width_expr = x_484;
  WriteMetric();
  auto x_489 = eval_expr_x_488(x_482);
  x_482.var_is_default_case = x_489;
  WriteMetric();
  auto x_494 = eval_expr_x_493(x_482);
  x_482.var_intrinsic_width_is_width = x_494;
  WriteMetric();
  auto x_499 = eval_expr_x_498(x_482);
  x_482.var_children_intrinsic_width = x_499;
  WriteMetric();
  auto x_504 = eval_expr_x_503(x_482);
  x_482.var_intrinsic_width_internal = x_504;
  WriteMetric();
  auto x_509 = eval_expr_x_508(x_482);
  x_482.var_intrinsic_width_external = x_509;
  WriteMetric();
  auto x_514 = eval_expr_x_513(x_482);
  x_482.var_intrinsic_current_line_width = x_514;
  WriteMetric();
  auto x_519 = eval_expr_x_518(x_482);
  x_482.var_intrinsic_width_max = x_519;
  WriteMetric();
  auto x_524 = eval_expr_x_523(x_482);
  x_482.var_intrinsic_width_sum = x_524;
  WriteMetric();
  auto x_529 = eval_expr_x_528(x_482);
  x_482.var_children_intrinsic_height = x_529;
  WriteMetric();
  auto x_534 = eval_expr_x_533(x_482);
  x_482.var_height_expr = x_534;
  WriteMetric();
  auto x_539 = eval_expr_x_538(x_482);
  x_482.var_intrinsic_height_is_height = x_539;
  WriteMetric();
  auto x_544 = eval_expr_x_543(x_482);
  x_482.var_intrinsic_height_internal = x_544;
  WriteMetric();
  auto x_549 = eval_expr_x_548(x_482);
  x_482.var_intrinsic_height_external = x_549;
  WriteMetric();
  auto x_554 = eval_expr_x_553(x_482);
  x_482.var_intrinsic_height_sum = x_554;
  WriteMetric();
  auto x_559 = eval_expr_x_558(x_482);
  x_482.var_intrinsic_current_line_height = x_559;
  WriteMetric();
  auto x_564 = eval_expr_x_563(x_482);
  x_482.var_finished_intrinsic_height_sum = x_564;
  return MakeUnit();
}
auto eval_stmts_x_238(const auto &x_568) {
  WriteMetric();
  auto x_570 = eval_expr_x_569(x_568);
  x_568.var_display = x_570;
  WriteMetric();
  auto x_575 = eval_expr_x_574(x_568);
  x_568.var_position = x_575;
  WriteMetric();
  auto x_580 = eval_expr_x_579(x_568);
  x_568.var_flex_grow = x_580;
  WriteMetric();
  auto x_585 = eval_expr_x_584(x_568);
  x_568.var_flex_shrink = x_585;
  WriteMetric();
  auto x_590 = eval_expr_x_589(x_568);
  x_568.var_flex_grow_sum = x_590;
  WriteMetric();
  auto x_595 = eval_expr_x_594(x_568);
  x_568.var_flex_shrink_sum = x_595;
  WriteMetric();
  auto x_600 = eval_expr_x_599(x_568);
  x_568.var_flex_direction = x_600;
  WriteMetric();
  auto x_605 = eval_expr_x_604(x_568);
  x_568.var_is_flex_row = x_605;
  WriteMetric();
  auto x_610 = eval_expr_x_609(x_568);
  x_568.var_is_flex_column = x_610;
  WriteMetric();
  auto x_615 = eval_expr_x_614(x_568);
  x_568.var_width_attr_expr = x_615;
  WriteMetric();
  auto x_620 = eval_expr_x_619(x_568);
  x_568.var_has_width_attr = x_620;
  WriteMetric();
  auto x_625 = eval_expr_x_624(x_568);
  x_568.var_height_attr_expr = x_625;
  WriteMetric();
  auto x_630 = eval_expr_x_629(x_568);
  x_568.var_has_height_attr = x_630;
  WriteMetric();
  auto x_635 = eval_expr_x_634(x_568);
  x_568.var_is_svg_block = x_635;
  WriteMetric();
  auto x_640 = eval_expr_x_639(x_568);
  x_568.var_inside_svg = x_640;
  WriteMetric();
  auto x_645 = eval_expr_x_644(x_568);
  x_568.var_disabled = x_645;
  WriteMetric();
  auto x_650 = eval_expr_x_649(x_568);
  x_568.var_visible = x_650;
  WriteMetric();
  auto x_655 = eval_expr_x_654(x_568);
  x_568.var_line_break = x_655;
  return MakeUnit();
}
auto eval_stmts_x_235(const auto &x_659) {
  WriteMetric();
  auto x_661 = eval_expr_x_660(x_659);
  x_659.var_box_width = x_661;
  WriteMetric();
  auto x_666 = eval_expr_x_665(x_659);
  x_659.var_box_height = x_666;
  WriteMetric();
  auto x_671 = eval_expr_x_670(x_659);
  x_659.var_left_over = x_671;
  WriteMetric();
  auto x_676 = eval_expr_x_675(x_659);
  x_659.var_flex_amount = x_676;
  WriteMetric();
  auto x_681 = eval_expr_x_680(x_659);
  x_659.var_flex_unit = x_681;
  WriteMetric();
  auto x_686 = eval_expr_x_685(x_659);
  x_659.var_x = x_686;
  WriteMetric();
  auto x_691 = eval_expr_x_690(x_659);
  x_659.var_width_internal = x_691;
  WriteMetric();
  auto x_696 = eval_expr_x_695(x_659);
  x_659.var_width_external = x_696;
  WriteMetric();
  auto x_701 = eval_expr_x_700(x_659);
  x_659.var_y = x_701;
  WriteMetric();
  auto x_706 = eval_expr_x_705(x_659);
  x_659.var_height_internal = x_706;
  WriteMetric();
  auto x_711 = eval_expr_x_710(x_659);
  x_659.var_height_external = x_711;
  WriteMetric();
  auto x_716 = eval_expr_x_715(x_659);
  x_659.var_line_height = x_716;
  return MakeUnit();
}
auto eval_stmts_x_228(const auto &x_720) {
  WriteMetric();
  auto x_722 = eval_expr_x_721(x_720);
  x_720.var_width_expr = x_722;
  WriteMetric();
  auto x_727 = eval_expr_x_726(x_720);
  x_720.var_is_default_case = x_727;
  WriteMetric();
  auto x_732 = eval_expr_x_731(x_720);
  x_720.var_intrinsic_width_is_width = x_732;
  WriteMetric();
  auto x_737 = eval_expr_x_736(x_720);
  x_720.var_children_intrinsic_width = x_737;
  WriteMetric();
  auto x_742 = eval_expr_x_741(x_720);
  x_720.var_intrinsic_width_internal = x_742;
  WriteMetric();
  auto x_747 = eval_expr_x_746(x_720);
  x_720.var_intrinsic_width_external = x_747;
  WriteMetric();
  auto x_752 = eval_expr_x_751(x_720);
  x_720.var_intrinsic_current_line_width = x_752;
  WriteMetric();
  auto x_757 = eval_expr_x_756(x_720);
  x_720.var_intrinsic_width_max = x_757;
  WriteMetric();
  auto x_762 = eval_expr_x_761(x_720);
  x_720.var_intrinsic_width_sum = x_762;
  WriteMetric();
  auto x_767 = eval_expr_x_766(x_720);
  x_720.var_children_intrinsic_height = x_767;
  WriteMetric();
  auto x_772 = eval_expr_x_771(x_720);
  x_720.var_height_expr = x_772;
  WriteMetric();
  auto x_777 = eval_expr_x_776(x_720);
  x_720.var_intrinsic_height_is_height = x_777;
  WriteMetric();
  auto x_782 = eval_expr_x_781(x_720);
  x_720.var_intrinsic_height_internal = x_782;
  WriteMetric();
  auto x_787 = eval_expr_x_786(x_720);
  x_720.var_intrinsic_height_external = x_787;
  WriteMetric();
  auto x_792 = eval_expr_x_791(x_720);
  x_720.var_intrinsic_height_sum = x_792;
  WriteMetric();
  auto x_797 = eval_expr_x_796(x_720);
  x_720.var_intrinsic_current_line_height = x_797;
  WriteMetric();
  auto x_802 = eval_expr_x_801(x_720);
  x_720.var_finished_intrinsic_height_sum = x_802;
  return MakeUnit();
}
auto eval_stmts_x_226(const auto &x_806) {
  WriteMetric();
  auto x_808 = eval_expr_x_807(x_806);
  x_806.var_display = x_808;
  WriteMetric();
  auto x_813 = eval_expr_x_812(x_806);
  x_806.var_position = x_813;
  WriteMetric();
  auto x_818 = eval_expr_x_817(x_806);
  x_806.var_flex_grow = x_818;
  WriteMetric();
  auto x_823 = eval_expr_x_822(x_806);
  x_806.var_flex_shrink = x_823;
  WriteMetric();
  auto x_828 = eval_expr_x_827(x_806);
  x_806.var_flex_grow_sum = x_828;
  WriteMetric();
  auto x_833 = eval_expr_x_832(x_806);
  x_806.var_flex_shrink_sum = x_833;
  WriteMetric();
  auto x_838 = eval_expr_x_837(x_806);
  x_806.var_flex_direction = x_838;
  WriteMetric();
  auto x_843 = eval_expr_x_842(x_806);
  x_806.var_is_flex_row = x_843;
  WriteMetric();
  auto x_848 = eval_expr_x_847(x_806);
  x_806.var_is_flex_column = x_848;
  WriteMetric();
  auto x_853 = eval_expr_x_852(x_806);
  x_806.var_width_attr_expr = x_853;
  WriteMetric();
  auto x_858 = eval_expr_x_857(x_806);
  x_806.var_has_width_attr = x_858;
  WriteMetric();
  auto x_863 = eval_expr_x_862(x_806);
  x_806.var_height_attr_expr = x_863;
  WriteMetric();
  auto x_868 = eval_expr_x_867(x_806);
  x_806.var_has_height_attr = x_868;
  WriteMetric();
  auto x_873 = eval_expr_x_872(x_806);
  x_806.var_is_svg_block = x_873;
  WriteMetric();
  auto x_878 = eval_expr_x_877(x_806);
  x_806.var_inside_svg = x_878;
  WriteMetric();
  auto x_883 = eval_expr_x_882(x_806);
  x_806.var_disabled = x_883;
  WriteMetric();
  auto x_888 = eval_expr_x_887(x_806);
  x_806.var_visible = x_888;
  WriteMetric();
  auto x_893 = eval_expr_x_892(x_806);
  x_806.var_line_break = x_893;
  return MakeUnit();
}
auto eval_stmts_x_223(const auto &x_897) {
  WriteMetric();
  auto x_899 = eval_expr_x_898(x_897);
  x_897.var_box_width = x_899;
  WriteMetric();
  auto x_904 = eval_expr_x_903(x_897);
  x_897.var_box_height = x_904;
  WriteMetric();
  auto x_909 = eval_expr_x_908(x_897);
  x_897.var_left_over = x_909;
  WriteMetric();
  auto x_914 = eval_expr_x_913(x_897);
  x_897.var_flex_amount = x_914;
  WriteMetric();
  auto x_919 = eval_expr_x_918(x_897);
  x_897.var_flex_unit = x_919;
  WriteMetric();
  auto x_924 = eval_expr_x_923(x_897);
  x_897.var_x = x_924;
  WriteMetric();
  auto x_929 = eval_expr_x_928(x_897);
  x_897.var_width_internal = x_929;
  WriteMetric();
  auto x_934 = eval_expr_x_933(x_897);
  x_897.var_width_external = x_934;
  WriteMetric();
  auto x_939 = eval_expr_x_938(x_897);
  x_897.var_y = x_939;
  WriteMetric();
  auto x_944 = eval_expr_x_943(x_897);
  x_897.var_height_internal = x_944;
  WriteMetric();
  auto x_949 = eval_expr_x_948(x_897);
  x_897.var_height_external = x_949;
  WriteMetric();
  auto x_954 = eval_expr_x_953(x_897);
  x_897.var_line_height = x_954;
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
  ListIter(ListZip(ListDropLast(x_208.children), ListTl(x_208.children)), [&](const auto &x_209) {
    auto x_210 = Zro(x_209);
    auto x_211 = Fst(x_209);
    x_210.parent = Some(x_208);
    x_211.parent = Some(x_208);
    x_210.next = Some(x_211);
    x_211.prev = Some(x_210);
    if (IsNone(x_208.first)) {
      x_208.first = Some(x_210);
    } else {
      MakeUnit();
    }
    x_208.last = Some(x_211);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_40(const auto &x_208) { return x_207(x_208); }
auto x_212(const auto &x_213) {
  x_213.first = nullptr;
  ListIter(ListZip(ListDropLast(x_213.children), ListTl(x_213.children)), [&](const auto &x_214) {
    auto x_215 = Zro(x_214);
    auto x_216 = Fst(x_214);
    x_215.parent = Some(x_213);
    x_216.parent = Some(x_213);
    x_215.next = Some(x_216);
    x_216.prev = Some(x_215);
    if (IsNone(x_213.first)) {
      x_213.first = Some(x_215);
    } else {
      MakeUnit();
    }
    x_213.last = Some(x_216);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_36(const auto &x_213) { return x_212(x_213); }
auto x_217(const auto &x_218) {
  x_218.first = nullptr;
  ListIter(ListZip(ListDropLast(x_218.children), ListTl(x_218.children)), [&](const auto &x_219) {
    auto x_220 = Zro(x_219);
    auto x_221 = Fst(x_219);
    x_220.parent = Some(x_218);
    x_221.parent = Some(x_218);
    x_220.next = Some(x_221);
    x_221.prev = Some(x_220);
    if (IsNone(x_218.first)) {
      x_218.first = Some(x_220);
    } else {
      MakeUnit();
    }
    x_218.last = Some(x_221);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_33(const auto &x_218) { return x_217(x_218); }
auto eval_stmts_x_29(const auto &x_222) { return MakeUnit(); }
auto eval_stmts_x_28(const auto &x_225) { return MakeUnit(); }
auto x_229(const auto &x_230) {
  x_230.first = nullptr;
  ListIter(ListZip(ListDropLast(x_230.children), ListTl(x_230.children)), [&](const auto &x_231) {
    auto x_232 = Zro(x_231);
    auto x_233 = Fst(x_231);
    x_232.parent = Some(x_230);
    x_233.parent = Some(x_230);
    x_232.next = Some(x_233);
    x_233.prev = Some(x_232);
    if (IsNone(x_230.first)) {
      x_230.first = Some(x_232);
    } else {
      MakeUnit();
    }
    x_230.last = Some(x_233);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_26(const auto &x_230) { return x_229(x_230); }
auto eval_stmts_x_24(const auto &x_234) { return MakeUnit(); }
auto eval_stmts_x_23(const auto &x_237) { return MakeUnit(); }
auto x_241(const auto &x_242) {
  x_242.first = nullptr;
  ListIter(ListZip(ListDropLast(x_242.children), ListTl(x_242.children)), [&](const auto &x_243) {
    auto x_244 = Zro(x_243);
    auto x_245 = Fst(x_243);
    x_244.parent = Some(x_242);
    x_245.parent = Some(x_242);
    x_244.next = Some(x_245);
    x_245.prev = Some(x_244);
    if (IsNone(x_242.first)) {
      x_242.first = Some(x_244);
    } else {
      MakeUnit();
    }
    x_242.last = Some(x_245);
    return MakeUnit();
  });
  return MakeUnit();
}
auto set_children_relation_x_20(const auto &x_242) { return x_241(x_242); }
auto x_246(const auto &x_247) {
  auto x_248 = Zro(x_247);
  auto x_249 = Fst(x_247);
  auto x_250 = Zro(x_248);
  auto x_251 = Fst(x_248);
  return ListMatch(
      x_250,
      [&](const auto &x_254) {
        auto x_255 = Zro(x_249);
        auto x_256 = Zro(x_255);
        auto x_257 = Fst(x_255);
        auto x_258 = Fst(x_249);
        auto x_259 = Zro(x_258);
        auto x_260 = Fst(x_258);
        InputChangeMetric(1);
        std::string x_3572 = x_256;
        if (x_3572 == "attributes") {
          std::string x_3573 = x_257;
          if (x_3573 == "width") {
            WriteMetric();
            HashtblAddExn(x_251.attr, "width", x_259);
            return MakeUnit();
          } else if (x_3573 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_251.attr, "image_height", x_259);
            return MakeUnit();
          } else if (x_3573 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_251.attr, "image_width", x_259);
            return MakeUnit();
          } else if (x_3573 == "height") {
            WriteMetric();
            HashtblAddExn(x_251.attr, "height", x_259);
            return MakeUnit();
          } else if (x_3573 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_251.attr, "viewBox", x_259);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3572 == "properties") {
          std::string x_3574 = x_257;
          if (x_3574 == "width") {
            WriteMetric();
            HashtblAddExn(x_251.prop, "width", x_259);
            return MakeUnit();
          } else if (x_3574 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_251.prop, "flex-grow", x_259);
            return MakeUnit();
          } else if (x_3574 == "height") {
            WriteMetric();
            HashtblAddExn(x_251.prop, "height", x_259);
            return MakeUnit();
          } else if (x_3574 == "display") {
            WriteMetric();
            HashtblAddExn(x_251.prop, "display", x_259);
            return MakeUnit();
          } else if (x_3574 == "position") {
            WriteMetric();
            HashtblAddExn(x_251.prop, "position", x_259);
            return MakeUnit();
          } else if (x_3574 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_251.prop, "flex-shrink", x_259);
            return MakeUnit();
          } else if (x_3574 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_251.prop, "flex-direction", x_259);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_252, const auto &x_253) {
        return x_246(MakePair(MakePair(x_253, ListNthExn(x_251.children, x_252)), x_249));
      });
}
auto insert_value_x_11(const auto &x_247) { return x_246(x_247); }
auto x_261(const auto &x_262) {
  auto x_263 = Zro(x_262);
  auto x_264 = Fst(x_262);
  auto x_265 = Zro(x_263);
  auto x_266 = Fst(x_263);
  return ListMatch(
      x_265,
      [&](const auto &x_269) {
        auto x_270 = Zro(x_264);
        auto x_271 = Zro(x_270);
        auto x_272 = Fst(x_270);
        auto x_273 = Fst(x_264);
        InputChangeMetric(1);
        std::string x_3575 = x_271;
        if (x_3575 == "attributes") {
          std::string x_3576 = x_272;
          if (x_3576 == "width") {
            WriteMetric();
            HashtblForceRemove(x_266.attr, "width");
            return MakeUnit();
          } else if (x_3576 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_266.attr, "image_height");
            return MakeUnit();
          } else if (x_3576 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_266.attr, "image_width");
            return MakeUnit();
          } else if (x_3576 == "height") {
            WriteMetric();
            HashtblForceRemove(x_266.attr, "height");
            return MakeUnit();
          } else if (x_3576 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_266.attr, "viewBox");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3575 == "properties") {
          std::string x_3577 = x_272;
          if (x_3577 == "width") {
            WriteMetric();
            HashtblForceRemove(x_266.prop, "width");
            return MakeUnit();
          } else if (x_3577 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_266.prop, "flex-grow");
            return MakeUnit();
          } else if (x_3577 == "height") {
            WriteMetric();
            HashtblForceRemove(x_266.prop, "height");
            return MakeUnit();
          } else if (x_3577 == "display") {
            WriteMetric();
            HashtblForceRemove(x_266.prop, "display");
            return MakeUnit();
          } else if (x_3577 == "position") {
            WriteMetric();
            HashtblForceRemove(x_266.prop, "position");
            return MakeUnit();
          } else if (x_3577 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_266.prop, "flex-shrink");
            return MakeUnit();
          } else if (x_3577 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_266.prop, "flex-direction");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_267, const auto &x_268) {
        return x_261(MakePair(MakePair(x_268, ListNthExn(x_266.children, x_267)), x_264));
      });
}
auto delete_value_x_10(const auto &x_262) { return x_261(x_262); }
auto x_274(const auto &x_275) {
  auto x_276 = Zro(x_275);
  auto x_277 = Fst(x_275);
  auto x_278 = Zro(x_276);
  auto x_279 = Fst(x_276);
  return ListMatch(
      x_278,
      [&](const auto &x_282) {
        auto x_283 = Zro(x_277);
        auto x_284 = Zro(x_283);
        auto x_285 = Fst(x_283);
        auto x_286 = Fst(x_277);
        auto x_287 = Zro(x_286);
        auto x_288 = Fst(x_286);
        InputChangeMetric(1);
        std::string x_3578 = x_284;
        if (x_3578 == "attributes") {
          std::string x_3579 = x_285;
          if (x_3579 == "width") {
            WriteMetric();
            HashtblForceRemove(x_279.attr, "width");
            WriteMetric();
            HashtblAddExn(x_279.attr, "width", x_287);
            return MakeUnit();
          } else if (x_3579 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_279.attr, "image_height");
            WriteMetric();
            HashtblAddExn(x_279.attr, "image_height", x_287);
            return MakeUnit();
          } else if (x_3579 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_279.attr, "image_width");
            WriteMetric();
            HashtblAddExn(x_279.attr, "image_width", x_287);
            return MakeUnit();
          } else if (x_3579 == "height") {
            WriteMetric();
            HashtblForceRemove(x_279.attr, "height");
            WriteMetric();
            HashtblAddExn(x_279.attr, "height", x_287);
            return MakeUnit();
          } else if (x_3579 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_279.attr, "viewBox");
            WriteMetric();
            HashtblAddExn(x_279.attr, "viewBox", x_287);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3578 == "properties") {
          std::string x_3580 = x_285;
          if (x_3580 == "width") {
            WriteMetric();
            HashtblForceRemove(x_279.prop, "width");
            WriteMetric();
            HashtblAddExn(x_279.prop, "width", x_287);
            return MakeUnit();
          } else if (x_3580 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_279.prop, "flex-grow");
            WriteMetric();
            HashtblAddExn(x_279.prop, "flex-grow", x_287);
            return MakeUnit();
          } else if (x_3580 == "height") {
            WriteMetric();
            HashtblForceRemove(x_279.prop, "height");
            WriteMetric();
            HashtblAddExn(x_279.prop, "height", x_287);
            return MakeUnit();
          } else if (x_3580 == "display") {
            WriteMetric();
            HashtblForceRemove(x_279.prop, "display");
            WriteMetric();
            HashtblAddExn(x_279.prop, "display", x_287);
            return MakeUnit();
          } else if (x_3580 == "position") {
            WriteMetric();
            HashtblForceRemove(x_279.prop, "position");
            WriteMetric();
            HashtblAddExn(x_279.prop, "position", x_287);
            return MakeUnit();
          } else if (x_3580 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_279.prop, "flex-shrink");
            WriteMetric();
            HashtblAddExn(x_279.prop, "flex-shrink", x_287);
            return MakeUnit();
          } else if (x_3580 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_279.prop, "flex-direction");
            WriteMetric();
            HashtblAddExn(x_279.prop, "flex-direction", x_287);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_280, const auto &x_281) {
        return x_274(MakePair(MakePair(x_281, ListNthExn(x_279.children, x_280)), x_277));
      });
}
auto replace_value_x_9(const auto &x_275) { return x_274(x_275); }
auto x_289(const auto &x_290) {
  auto x_291 = Zro(x_290);
  auto x_292 = Fst(x_290);
  auto x_293 = Zro(x_291);
  auto x_294 = Fst(x_291);
  auto x_295 = ListHeadExn(x_293);
  auto x_296 = ListTailExn(x_293);
  if (ListIsEmpty(x_296)) {
    OutputChangeMetric(layout_size_x_3(ListNthExn(x_294.children, x_295)));
    auto x_297 = ListSplitN(x_294.children, x_295);
    x_294.children = ListAppend(Zro(x_297), ListTailExn(Fst(x_297)));
  } else {
    return x_289(MakePair(MakePair(x_296, ListNthExn(x_294.children, x_295)), x_292));
  }
}
auto remove_layout_node_x_8(const auto &x_290) { return x_289(x_290); }
auto x_298(const auto &x_299) {
  auto x_300 = Zro(x_299);
  auto x_301 = Fst(x_299);
  auto x_302 = Zro(x_300);
  auto x_303 = Fst(x_300);
  auto x_304 = ListHeadExn(x_302);
  auto x_305 = ListTailExn(x_302);
  if (ListIsEmpty(x_305)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_303.children, x_304)));
    auto x_306 = ListSplitN(x_303.children, x_304);
    auto x_307 = Zro(x_306);
    auto x_308 = Fst(x_306);
    auto x_309 = ListHeadExn(x_308);
    auto x_310 = ListTailExn(x_308);
    OptionMatch(
        x_309.prev, [&](const auto &x_312) { return MakeUnit(); }, [&](const auto &x_311) { x_311.next = x_309.next; });
    OptionMatch(
        x_309.next, [&](const auto &x_314) { return MakeUnit(); }, [&](const auto &x_313) { x_313.prev = x_309.prev; });
    x_303.children = ListAppend(x_307, x_310);
    if (ListIsEmpty(x_307)) {
      x_303.first = ListHead(x_310);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_310)) {
      x_303.last = ListLast(x_307);
    } else {
      MakeUnit();
    }
    return MakeUnit();
  } else {
    return x_298(MakePair(MakePair(x_305, ListNthExn(x_303.children, x_304)), x_301));
  }
}
auto remove_node_x_7(const auto &x_299) { return x_298(x_299); }
auto x_377(const auto &x_378) {
  auto x_379 = Zro(x_378);
  auto x_380 = Fst(x_378);
  auto x_381 = Zro(x_379);
  auto x_382 = Fst(x_379);
  auto x_383 = ListHeadExn(x_381);
  auto x_384 = ListTailExn(x_381);
  if (ListIsEmpty(x_384)) {
    auto x_385 = Zro(x_380);
    auto x_386 = Fst(x_380);
    OutputChangeMetric(layout_size_x_3(x_385));
    auto x_387 = ListSplitN(x_382.children, x_383);
    x_382.children = ListAppend(Zro(x_387), Cons(x_385, Fst(x_387)));
  } else {
    return x_377(MakePair(MakePair(x_384, ListNthExn(x_382.children, x_383)), x_380));
  }
}
auto add_layout_node_x_6(const auto &x_378) { return x_377(x_378); }
auto x_388(const auto &x_389) {
  auto x_390 = Zro(x_389);
  auto x_391 = Fst(x_389);
  auto x_392 = Zro(x_390);
  auto x_393 = Fst(x_390);
  auto x_394 = ListHeadExn(x_392);
  auto x_395 = ListTailExn(x_392);
  if (ListIsEmpty(x_395)) {
    auto x_396 = Zro(x_391);
    auto x_397 = Fst(x_391);
    InputChangeMetric(node_size_x_4(x_396));
    auto x_398 = ListSplitN(x_393.children, x_394);
    auto x_399 = Zro(x_398);
    auto x_400 = Fst(x_398);
    x_393.children = ListAppend(x_399, Cons(x_396, x_400));
    if (ListIsEmpty(x_399)) {
      x_393.first = Some(x_396);
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_400)) {
      x_393.last = Some(x_396);
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_399), [&](const auto &x_402) { x_396.prev = nullptr; },
        [&](const auto &x_401) {
          x_396.prev = Some(x_401);
          x_401.next = Some(x_396);
        });
    OptionMatch(
        ListHead(x_400), [&](const auto &x_404) { x_396.next = nullptr; },
        [&](const auto &x_403) {
          x_396.next = Some(x_403);
          x_403.prev = Some(x_396);
        });
    x_396.parent = Some(x_393);
    return MakeUnit();
  } else {
    return x_388(MakePair(MakePair(x_395, ListNthExn(x_393.children, x_394)), x_391));
  }
}
auto add_node_x_5(const auto &x_389) { return x_388(x_389); }
auto x_467(const auto &x_468) {
  return IntAdd(1, ListIntSum(x_468.children, [&](const auto &x_469) { return x_467(x_469); }));
}
auto node_size_x_4(const auto &x_468) { return x_467(x_468); }
auto x_470(const auto &x_471) {
  return IntAdd(1, ListIntSum(x_471.children, [&](const auto &x_472) { return x_470(x_472); }));
}
auto layout_size_x_3(const auto &x_471) { return x_470(x_471); }
auto x_473(const auto &x_474) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_474)), [&](const auto &x_475) { return x_473(x_475); }));
}
auto json_to_layout_node_x_2(const auto &x_474) { return x_473(x_474); }
auto x_476(const auto &x_477) {
  return MakeNode(x_477.name, x_477.attr, x_477.prop, x_477.extern_id,
                  ListMap(x_477.children, [&](const auto &x_478) { return x_476(x_478); }));
}
auto node_to_fs_node_x_1(const auto &x_477) { return x_476(x_477); }
auto x_479(const auto &x_480) {
  return MakeNode(JsonToString(JsonMember("name", x_480)), JsonToDict(JsonMember("attributes", x_480)),
                  JsonToDict(JsonMember("properties", x_480)), JsonToInt(JsonMember("id", x_480)),
                  ListMap(JsonToList(JsonMember("children", x_480)), [&](const auto &x_481) { return x_479(x_481); }));
}
auto json_to_node_aux_x_0(const auto &x_480) { return x_479(x_480); }
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
        std::string x_3581 = JsonToString(JsonMember("name", x_31));
        if (x_3581 == "add") {
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
        } else if (x_3581 == "recalculate") {
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
        } else if (x_3581 == "remove") {
          return remove_node_x_7(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_38) { return JsonToInt(x_38); }),
                       x_21),
              x_15));
        } else if (x_3581 == "replace") {
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
        } else if (x_3581 == "replace_value") {
          return replace_value_x_9(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_43) { return JsonToInt(x_43); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3581 == "delete_value") {
          return delete_value_x_10(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_44) { return JsonToInt(x_44); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))), x_15)));
        } else if (x_3581 == "insert_value") {
          return insert_value_x_11(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_45) { return JsonToInt(x_45); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3581 == "layout_remove") {
          return remove_layout_node_x_8(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_46) { return JsonToInt(x_46); }),
                       x_22),
              x_15));
        } else if (x_3581 == "layout_add") {
          return add_layout_node_x_6(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_47) { return JsonToInt(x_47); }),
                       x_22),
              MakePair(json_to_layout_node_x_2(JsonMember("node", x_31)), x_15)));
        } else if (x_3581 == "layout_replace") {
          return replace_layout_node_x_49(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_48) { return JsonToInt(x_48); }),
                       x_22),
              json_to_layout_node_x_2(JsonMember("node", x_31))));
        } else if (x_3581 == "layout_info_changed") {
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