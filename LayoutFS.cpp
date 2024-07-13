auto var_modified_x_982(const auto &x_984) { return MakeUnit(); }
auto eval_expr_x_979(const auto &x_991) {
  if ((x_991.prev == nullptr) && not((*(x_991.prev)).var_line_break)) {
    return max(x_991.var_height_external, (*(x_991.prev)).var_line_height);
  } else {
    return x_991.var_height_external;
  }
}
auto var_modified_x_977(const auto &x_1008) { return MakeUnit(); }
auto eval_expr_x_974(const auto &x_1011) {
  if (eq(x_1011.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1011.var_height_internal;
  }
}
auto var_modified_x_972(const auto &x_1020) { return MakeUnit(); }
auto eval_expr_x_969(const auto &x_1023) {
  if (x_1023.var_intrinsic_height_is_height) {
    return x_1023.var_intrinsic_height_internal;
  } else {
    if ((x_1023.parent == nullptr) && (*(x_1023.parent)).var_is_flex_column) {
      return plus(x_1023.var_intrinsic_height_internal, mult(x_1023.var_flex_amount, (*(x_1023.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1023.var_height_expr, "%")) {
        return mult(x_1023.var_box_height, divide(string_to_float(strip_suffix(x_1023.var_height_expr, "%")), 100.));
      } else {
        if (eq(x_1023.var_height_expr, "fit-content")) {
          return max(x_1023.var_box_height, x_1023.var_intrinsic_height_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_967(const auto &x_1076) { return MakeUnit(); }
auto eval_expr_x_964(const auto &x_1084) {
  if (x_1084.prev == nullptr) {
    if (x_1084.var_line_break || (*(x_1084.prev)).var_line_break) {
      return plus((*(x_1084.prev)).var_y, (*(x_1084.prev)).var_line_height);
    } else {
      return (*(x_1084.prev)).var_y;
    }
  } else {
    if (x_1084.parent == nullptr) {
      return (*(x_1084.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_962(const auto &x_1109) { return MakeUnit(); }
auto eval_expr_x_959(const auto &x_1113) {
  if (eq(x_1113.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1113.var_width_internal;
  }
}
auto var_modified_x_957(const auto &x_1122) { return MakeUnit(); }
auto eval_expr_x_954(const auto &x_1125) {
  if (x_1125.var_intrinsic_width_is_width) {
    return x_1125.var_intrinsic_width_internal;
  } else {
    if ((x_1125.parent == nullptr) && (*(x_1125.parent)).var_is_flex_row) {
      return plus(x_1125.var_intrinsic_width_internal, mult(x_1125.var_flex_amount, (*(x_1125.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1125.var_width_expr, "%")) {
        return mult(x_1125.var_box_width, divide(string_to_float(strip_suffix(x_1125.var_width_expr, "%")), 100.));
      } else {
        if (eq(x_1125.var_width_expr, "fit-content")) {
          return max(x_1125.var_box_width, x_1125.var_intrinsic_width_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_952(const auto &x_1178) { return MakeUnit(); }
auto eval_expr_x_949(const auto &x_1183) {
  if (x_1183.prev == nullptr) {
    if (x_1183.var_line_break || (*(x_1183.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_1183.prev)).var_x, (*(x_1183.prev)).var_width_external);
    }
  } else {
    if (x_1183.parent == nullptr) {
      return (*(x_1183.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_947(const auto &x_1204) { return MakeUnit(); }
auto eval_expr_x_944(const auto &x_1207) {
  if (gt(x_1207.var_left_over, 0.)) {
    return divide(x_1207.var_left_over, x_1207.var_flex_grow_sum);
  } else {
    return divide(x_1207.var_left_over, x_1207.var_flex_shrink_sum);
  }
}
auto var_modified_x_942(const auto &x_1228) { return MakeUnit(); }
auto eval_expr_x_939(const auto &x_1231) {
  if ((x_1231.parent == nullptr) && gt((*(x_1231.parent)).var_left_over, 0.)) {
    return x_1231.var_flex_grow;
  } else {
    return x_1231.var_flex_shrink;
  }
}
auto var_modified_x_937(const auto &x_1244) { return MakeUnit(); }
auto eval_expr_x_934(const auto &x_1249) {
  if (x_1249.var_is_flex_row) {
    return minus(x_1249.var_box_width, (x_1249.last == nullptr) ? ((*(x_1249.last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_1249.var_box_height, (x_1249.last == nullptr) ? ((*(x_1249.last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_932(const auto &x_1270) { return MakeUnit(); }
auto eval_expr_x_929(const auto &x_1274) {
  if (x_1274.parent == nullptr) {
    return (*(x_1274.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_927(const auto &x_1279) { return MakeUnit(); }
auto eval_expr_x_924(const auto &x_1283) {
  if (x_1283.parent == nullptr) {
    return (*(x_1283.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_921(const auto &x_1288) { return MakeUnit(); }
auto eval_expr_x_918(const auto &x_1306) {
  if (eq(x_1306.var_display, "none")) {
    return false;
  } else {
    if (eq(x_1306.var_position, "absolute")) {
      return false;
    } else {
      if ((x_1306.parent == nullptr) &&
          (eq((*(x_1306.parent)).var_display, "flex") || eq((*(x_1306.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_1306.var_display, "block")) {
          return true;
        } else {
          if (eq(x_1306.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_1306.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_1306.var_display, "flex")) {
                if (eq(HashtblForceFind(x_1306.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_1306.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    if (eq(HashtblForceFind(x_1306.prop, "flex-direction"), "column-reverse")) {
                      return true;
                    } else {
                      return Panic();
                    }
                  }
                }
              } else {
                if (eq(x_1306.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_1306.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_1306.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_1306.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_1306.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_1306.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_1306.var_display, "list-item")) {
                              return true;
                            } else {
                              if (eq(x_1306.var_display, "grid")) {
                                return true;
                              } else {
                                return Panic();
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
}
auto var_modified_x_916(const auto &x_1383) { return MakeUnit(); }
auto eval_expr_x_913(const auto &x_1385) {
  return ((not(x_1385.parent == nullptr) || (*(x_1385.parent)).var_visible) &&
          (neq(x_1385.var_display, "none") && (not(x_1385.var_inside_svg) && not(x_1385.var_disabled))));
}
auto var_modified_x_911(const auto &x_1402) { return MakeUnit(); }
auto eval_expr_x_908(const auto &x_1410) {
  if (eq(x_1410.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_1410.parent == nullptr) && (*(x_1410.parent)).var_disabled);
  }
}
auto var_modified_x_906(const auto &x_1415) { return MakeUnit(); }
auto eval_expr_x_903(const auto &x_1423) {
  return ((x_1423.parent == nullptr) && ((*(x_1423.parent)).var_is_svg_block || (*(x_1423.parent)).var_inside_svg));
}
auto var_modified_x_901(const auto &x_1432) { return MakeUnit(); }
auto eval_expr_x_898(const auto &x_1434) { return eq(x_1434.name, "svg"); }
auto var_modified_x_896(const auto &x_1435) { return MakeUnit(); }
auto eval_expr_x_893(const auto &x_1444) { return neq(x_1444.var_height_attr_expr, "auto"); }
auto var_modified_x_891(const auto &x_1449) { return MakeUnit(); }
auto eval_expr_x_888(const auto &x_1457) {
  if (not(IsSome(HashtblFind(x_1457.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1457.attr, "height")) ||
        has_suffix(HashtblForceFind(x_1457.attr, "height"), "%")) {
      return HashtblForceFind(x_1457.attr, "height");
    } else {
      if (eq(HashtblForceFind(x_1457.attr, "height"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_886(const auto &x_1468) { return MakeUnit(); }
auto eval_expr_x_883(const auto &x_1478) { return neq(x_1478.var_width_attr_expr, "auto"); }
auto var_modified_x_881(const auto &x_1483) { return MakeUnit(); }
auto eval_expr_x_878(const auto &x_1491) {
  if (not(IsSome(HashtblFind(x_1491.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1491.attr, "width")) ||
        has_suffix(HashtblForceFind(x_1491.attr, "width"), "%")) {
      return HashtblForceFind(x_1491.attr, "width");
    } else {
      if (eq(HashtblForceFind(x_1491.attr, "width"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_876(const auto &x_1502) { return MakeUnit(); }
auto eval_expr_x_873(const auto &x_1505) {
  if ((x_1505.parent == nullptr) &&
      (eq((*(x_1505.parent)).var_display, "flex") || eq((*(x_1505.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1505.parent)).var_flex_direction, "column") ||
        eq((*(x_1505.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      if (eq((*(x_1505.parent)).var_flex_direction, "row")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_871(const auto &x_1530) { return MakeUnit(); }
auto eval_expr_x_868(const auto &x_1534) {
  if ((x_1534.parent == nullptr) &&
      (eq((*(x_1534.parent)).var_display, "flex") || eq((*(x_1534.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1534.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      if (eq((*(x_1534.parent)).var_flex_direction, "column") ||
          eq((*(x_1534.parent)).var_flex_direction, "column-reverse")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_866(const auto &x_1559) { return MakeUnit(); }
auto eval_expr_x_863(const auto &x_1566) {
  if (IsSome(HashtblFind(x_1566.prop, "flex-direction"))) {
    return HashtblForceFind(x_1566.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_861(const auto &x_1569) { return MakeUnit(); }
auto eval_expr_x_858(const auto &x_1574) {
  return plus((x_1574.prev == nullptr) ? ((*(x_1574.prev)).var_flex_shrink_sum) : (0.), x_1574.var_flex_shrink);
}
auto var_modified_x_856(const auto &x_1583) { return MakeUnit(); }
auto eval_expr_x_853(const auto &x_1588) {
  return plus((x_1588.prev == nullptr) ? ((*(x_1588.prev)).var_flex_grow_sum) : (0.), x_1588.var_flex_grow);
}
auto var_modified_x_851(const auto &x_1597) { return MakeUnit(); }
auto eval_expr_x_848(const auto &x_1600) {
  if (IsSome(HashtblFind(x_1600.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_1600.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_846(const auto &x_1603) { return MakeUnit(); }
auto eval_expr_x_843(const auto &x_1606) {
  if (IsSome(HashtblFind(x_1606.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_1606.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_841(const auto &x_1609) { return MakeUnit(); }
auto eval_expr_x_838(const auto &x_1615) {
  if (IsSome(HashtblFind(x_1615.prop, "position"))) {
    return HashtblForceFind(x_1615.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_836(const auto &x_1618) { return MakeUnit(); }
auto eval_expr_x_833(const auto &x_1644) {
  if (IsSome(HashtblFind(x_1644.prop, "display"))) {
    return HashtblForceFind(x_1644.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_830(const auto &x_1647) { return MakeUnit(); }
auto eval_expr_x_827(const auto &x_1657) {
  if (x_1657.prev == nullptr) {
    if (x_1657.var_line_break) {
      return plus((*(x_1657.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_1657.prev)).var_intrinsic_current_line_height, x_1657.var_intrinsic_height_external));
    } else {
      return (*(x_1657.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1657.var_line_break) {
      return x_1657.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_825(const auto &x_1686) { return MakeUnit(); }
auto eval_expr_x_822(const auto &x_1696) {
  if (x_1696.var_line_break) {
    return 0.;
  } else {
    return max(x_1696.var_intrinsic_height_external,
               (x_1696.prev == nullptr) ? ((*(x_1696.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_820(const auto &x_1709) { return MakeUnit(); }
auto eval_expr_x_817(const auto &x_1716) {
  return plus((x_1716.prev == nullptr) ? ((*(x_1716.prev)).var_intrinsic_height_sum) : (0.),
              x_1716.var_intrinsic_height_external);
}
auto var_modified_x_815(const auto &x_1725) { return MakeUnit(); }
auto eval_expr_x_812(const auto &x_1730) {
  if (eq(x_1730.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1730.var_intrinsic_height_internal;
  }
}
auto var_modified_x_810(const auto &x_1739) { return MakeUnit(); }
auto eval_expr_x_807(const auto &x_1744) {
  if (eq(x_1744.var_display, "none")) {
    return 0.;
  } else {
    if (x_1744.var_inside_svg) {
      return 0.;
    } else {
      if (x_1744.var_disabled) {
        return 0.;
      } else {
        if (neq(x_1744.var_height_expr, "auto") &&
            (not(has_suffix(x_1744.var_height_expr, "%")) && neq(x_1744.var_height_expr, "fit-content"))) {
          if (has_suffix(x_1744.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_1744.var_height_expr, "px"));
          } else {
            if (has_suffix(x_1744.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_1744.var_height_expr, "ch"));
            } else {
              if (has_suffix(x_1744.var_height_expr, "lh")) {
                return string_to_float(strip_suffix(x_1744.var_height_expr, "lh"));
              } else {
                return Panic();
              }
            }
          }
        } else {
          return plus(
              x_1744.var_children_intrinsic_height,
              (eq(x_1744.name, "#text"))
                  ? ((x_1744.first == nullptr) ? (Panic()) : (10.))
                  : ((x_1744.var_is_default_case)
                         ? (0.)
                         : ((eq(x_1744.name, "BR"))
                                ? ((x_1744.first == nullptr) ? (Panic()) : (0.))
                                : ((eq(x_1744.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_1744.name, "svg"))
                                              ? ((x_1744.var_has_height_attr &&
                                                  string_is_float(x_1744.var_height_attr_expr))
                                                     ? (string_to_float(x_1744.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_1744.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_1744.attr, "viewBox"), " ", 3)))
                                                            : ((x_1744.var_has_height_attr &&
                                                                (has_suffix(x_1744.var_height_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_1744.attr, "viewBox"))))
                                                                   ? (mult(
                                                                         string_to_float(nth_by_sep(
                                                                             HashtblForceFind(x_1744.attr, "viewBox"),
                                                                             " ", 3)),
                                                                         divide(string_to_float(strip_suffix(
                                                                                    x_1744.var_height_attr_expr, "%")),
                                                                                100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_1744.name, "IMG"))
                                                     ? ((x_1744.var_has_height_attr)
                                                            ? (string_to_float(x_1744.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_1744.attr, "image_height")) &&
                                                                not(x_1744.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_1744.attr, "image_height")))
                                                                   : ((x_1744.var_has_width_attr &&
                                                                       (not(x_1744.var_has_height_attr) &&
                                                                        (IsSome(
                                                                             HashtblFind(x_1744.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_1744.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_1744.attr,
                                                                                                   "image_width"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_1744.var_width_attr_expr),
                                                                                       divide(int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_1744.attr,
                                                                                                      "image_height")),
                                                                                              int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_1744.attr,
                                                                                                      "image_width")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_1744.name, "IFRAME"))
                                                            ? ((x_1744.var_has_height_attr) ? (Panic()) : (150.))
                                                            : ((eq(x_1744.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_1744.name, "VIDEO"))
                                                                          ? ((x_1744.var_has_height_attr) ? (Panic())
                                                                                                          : (150.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_805(const auto &x_1889) { return MakeUnit(); }
auto eval_expr_x_802(const auto &x_1891) {
  if (eq(x_1891.var_display, "none") || (x_1891.var_inside_svg || x_1891.var_disabled)) {
    return true;
  } else {
    if ((x_1891.parent == nullptr) && (*(x_1891.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1891.var_height_expr, "auto") ||
          (has_suffix(x_1891.var_height_expr, "px") ||
           (has_suffix(x_1891.var_height_expr, "ch") ||
            (has_suffix(x_1891.var_height_expr, "lh") || eq(x_1891.var_height_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_1891.var_height_expr, "%") || eq(x_1891.var_height_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_800(const auto &x_1940) { return MakeUnit(); }
auto eval_expr_x_797(const auto &x_1960) {
  if (IsSome(HashtblFind(x_1960.prop, "height"))) {
    return HashtblForceFind(x_1960.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_795(const auto &x_1963) { return MakeUnit(); }
auto eval_expr_x_792(const auto &x_1965) {
  if (x_1965.last == nullptr) {
    return plus((*(x_1965.last)).var_finished_intrinsic_height_sum, (*(x_1965.last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_790(const auto &x_1974) { return MakeUnit(); }
auto eval_expr_x_787(const auto &x_1981) {
  return plus((x_1981.prev == nullptr) ? ((*(x_1981.prev)).var_intrinsic_width_sum) : (0.),
              x_1981.var_intrinsic_width_external);
}
auto var_modified_x_785(const auto &x_1990) { return MakeUnit(); }
auto eval_expr_x_782(const auto &x_1997) {
  return max(x_1997.var_intrinsic_current_line_width,
             (x_1997.prev == nullptr) ? ((*(x_1997.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_780(const auto &x_2006) { return MakeUnit(); }
auto eval_expr_x_777(const auto &x_2011) {
  return plus(x_2011.var_intrinsic_width_external,
              ((x_2011.prev == nullptr) && not((*(x_2011.prev)).var_line_break))
                  ? ((*(x_2011.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_775(const auto &x_2024) { return MakeUnit(); }
auto eval_expr_x_772(const auto &x_2027) {
  if (eq(x_2027.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2027.var_intrinsic_width_internal;
  }
}
auto var_modified_x_770(const auto &x_2036) { return MakeUnit(); }
auto eval_expr_x_767(const auto &x_2041) {
  if (eq(x_2041.var_display, "none")) {
    return 0.;
  } else {
    if (x_2041.var_inside_svg) {
      return 0.;
    } else {
      if (x_2041.var_disabled) {
        return 0.;
      } else {
        if (neq(x_2041.var_width_expr, "auto") &&
            (not(has_suffix(x_2041.var_width_expr, "%")) &&
             (neq(x_2041.var_width_expr, "fit-content") &&
              (neq(x_2041.var_width_expr, "max-content") && not(has_prefix(x_2041.var_width_expr, "calc")))))) {
          if (has_suffix(x_2041.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_2041.var_width_expr, "px"));
          } else {
            if (has_suffix(x_2041.var_width_expr, "ch")) {
              return string_to_float(strip_suffix(x_2041.var_width_expr, "ch"));
            } else {
              return Panic();
            }
          }
        } else {
          return plus(
              x_2041.var_children_intrinsic_width,
              (eq(x_2041.name, "#text"))
                  ? ((x_2041.first == nullptr) ? (Panic()) : (100.))
                  : ((x_2041.var_is_default_case)
                         ? (0.)
                         : ((eq(x_2041.name, "BR"))
                                ? ((x_2041.first == nullptr) ? (Panic()) : (0.))
                                : ((eq(x_2041.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_2041.name, "svg"))
                                              ? ((x_2041.var_has_width_attr &&
                                                  string_is_float(x_2041.var_width_attr_expr))
                                                     ? (string_to_float(x_2041.var_width_attr_expr))
                                                     : ((not(x_2041.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_2041.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_2041.attr, "viewBox"), " ", 2)))
                                                            : ((x_2041.var_has_width_attr &&
                                                                (has_suffix(x_2041.var_width_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_2041.attr, "viewBox"))))
                                                                   ? (mult(string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_2041.attr, "viewBox"),
                                                                               " ", 2)),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_2041.var_width_attr_expr, "%")),
                                                                                  100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_2041.name, "IMG"))
                                                     ? ((x_2041.var_has_width_attr)
                                                            ? (string_to_float(x_2041.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_2041.attr, "image_width")) &&
                                                                not(x_2041.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_2041.attr, "image_width")))
                                                                   : ((not(x_2041.var_has_width_attr) &&
                                                                       (x_2041.var_has_height_attr &&
                                                                        (IsSome(
                                                                             HashtblFind(x_2041.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_2041.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_2041.attr,
                                                                                                   "image_height"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_2041.var_height_attr_expr),
                                                                                       divide(
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_2041.attr,
                                                                                                   "image_width")),
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_2041.attr,
                                                                                                   "image_height")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_2041.name, "IFRAME"))
                                                            ? ((x_2041.var_has_width_attr) ? (Panic()) : (300.))
                                                            : ((eq(x_2041.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_2041.name, "VIDEO"))
                                                                          ? ((x_2041.var_has_width_attr) ? (Panic())
                                                                                                         : (300.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_765(const auto &x_2194) { return MakeUnit(); }
auto eval_expr_x_762(const auto &x_2196) {
  if (x_2196.last == nullptr) {
    return (*(x_2196.last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_760(const auto &x_2201) { return MakeUnit(); }
auto eval_expr_x_757(const auto &x_2203) {
  if (eq(x_2203.var_display, "none") || (x_2203.var_inside_svg || x_2203.var_disabled)) {
    return true;
  } else {
    if ((x_2203.parent == nullptr) && (*(x_2203.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2203.var_width_expr, "auto") ||
          (has_suffix(x_2203.var_width_expr, "px") ||
           (has_suffix(x_2203.var_width_expr, "ch") ||
            (has_prefix(x_2203.var_width_expr, "calc(") || eq(x_2203.var_width_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_2203.var_width_expr, "%") || eq(x_2203.var_width_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_755(const auto &x_2252) { return MakeUnit(); }
auto eval_expr_x_752(const auto &x_2255) {
  if (eq(x_2255.var_display, "none")) {
    return true;
  } else {
    if (x_2255.var_inside_svg) {
      return true;
    } else {
      if (x_2255.var_disabled) {
        return true;
      } else {if ( eq(x_2255.name,"#document") || (eq(x_2255.name,"#shadow-root") || (eq(x_2255.name,"DIV") || (eq(x_2255.name,"HTML") || (eq(x_2255.name,"BODY") || (eq(x_2255.name,"BUTTON") || (eq(x_2255.name,"FOOTER") || (eq(x_2255.name,"SELECT") || (eq(x_2255.name,"SECTION") || (eq(x_2255.name,"FORM") || (eq(x_2255.name,"CENTER") || (eq(x_2255.name,"TD") || (eq(x_2255.name,"TR") || (eq(x_2255.name,"TBODY") || (eq(x_2255.name,"TABLE") || (eq(x_2255.name,"SPAN") || (eq(x_2255.name,"FONT") || (eq(x_2255.name,"A") || (eq(x_2255.name,"ARTICLE") || (eq(x_2255.name,"P") || (eq(x_2255.name,"U") || (eq(x_2255.name,"UL") || (eq(x_2255.name,"B") || (eq(x_2255.name,"H1") || (eq(x_2255.name,"H2") || (eq(x_2255.name,"H3") || (eq(x_2255.name,"H4") || (eq(x_2255.name,"DT") || (eq(x_2255.name,"DD") || (eq(x_2255.name,"DL") || (eq(x_2255.name,"LI") || (eq(x_2255.name,"LABEL") || (eq(x_2255.name,"OL") || (eq(x_2255.name,"NAV") || (eq(x_2255.name,"HEADER") || (eq(x_2255.name,"HEAD") || (eq(x_2255.name,"SOURCE") || (eq(x_2255.name,"PICTURE") || (eq(x_2255.name,"FIGURE") || (eq(x_2255.name,"FIGCAPTION") || (eq(x_2255.name,"MAIN") || (eq(x_2255.name,"REACT-PARTIAL") || (eq(x_2255.name,"QUERY-BUILDER") || (eq(x_2255.name,"MODAL-DIALOG") || (eq(x_2255.name,"SCROLLABLE-REGION") || (eq(x_2255.name,"DIALOG-HELPER") || (eq(x_2255.name,"AUTO-CHECK") || (eq(x_2255.name,"TOOL-TIP") || (eq(x_2255.name,"CUSTOM-SCOPES") || (eq(x_2255.name,"QBSEARCH-INPUT") || (eq(x_2255.name,"INCLUDE-FRAGMENT") || (eq(x_2255.name,"COOKIE-CONSENT-LINK") || (eq(x_2255.name,"FULLSTORY-CAPTURE") || (eq(x_2255.name,"GHCC-CONSENT") || (eq(x_2255.name,"GLOBAL-BANNER") || (eq(x_2255.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_2255.name,"CARD-SKEW") || (eq(x_2255.name,"EM") || (eq(x_2255.name,"ASIDE") || (eq(x_2255.name,"AUDIO") || (eq(x_2255.name,"SUP") || (eq(x_2255.name,"TIME") || (eq(x_2255.name,"ABBR") || (eq(x_2255.name,"SMALL") || (eq(x_2255.name,"SLOT") || eq(x_2255.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          if (eq(x_2255.name, "#text") ||
              (eq(x_2255.name, "svg") ||
               (eq(x_2255.name, "IFRAME") ||
                (eq(x_2255.name, "INPUT") ||
                 (eq(x_2255.name, "VIDEO") ||
                  (eq(x_2255.name, "BR") || (eq(x_2255.name, "IMG") || eq(x_2255.name, "TEXTAREA")))))))) {
            return false;
          } else {
            return Panic();
          }
        }
      }
    }
  }
}
auto var_modified_x_750(const auto &x_2268) { return MakeUnit(); }
auto eval_expr_x_747(const auto &x_2288) {
  if (IsSome(HashtblFind(x_2288.prop, "width"))) {
    return HashtblForceFind(x_2288.prop, "width");
  } else {
    return "auto";
  }
}
auto var_modified_x_744(const auto &x_2291) { return MakeUnit(); }
auto eval_expr_x_741(const auto &x_2298) {
  if ((x_2298.prev == nullptr) && not((*(x_2298.prev)).var_line_break)) {
    return max(x_2298.var_height_external, (*(x_2298.prev)).var_line_height);
  } else {
    return x_2298.var_height_external;
  }
}
auto var_modified_x_739(const auto &x_2315) { return MakeUnit(); }
auto eval_expr_x_736(const auto &x_2318) {
  if (eq(x_2318.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2318.var_height_internal;
  }
}
auto var_modified_x_734(const auto &x_2327) { return MakeUnit(); }
auto eval_expr_x_731(const auto &x_2330) {
  if (x_2330.var_intrinsic_height_is_height) {
    return x_2330.var_intrinsic_height_internal;
  } else {
    if ((x_2330.parent == nullptr) && (*(x_2330.parent)).var_is_flex_column) {
      return plus(x_2330.var_intrinsic_height_internal, mult(x_2330.var_flex_amount, (*(x_2330.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2330.var_height_expr, "%")) {
        return mult(x_2330.var_box_height, divide(string_to_float(strip_suffix(x_2330.var_height_expr, "%")), 100.));
      } else {
        if (eq(x_2330.var_height_expr, "fit-content")) {
          return max(x_2330.var_box_height, x_2330.var_intrinsic_height_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_729(const auto &x_2383) { return MakeUnit(); }
auto eval_expr_x_726(const auto &x_2391) {
  if (x_2391.prev == nullptr) {
    if (x_2391.var_line_break || (*(x_2391.prev)).var_line_break) {
      return plus((*(x_2391.prev)).var_y, (*(x_2391.prev)).var_line_height);
    } else {
      return (*(x_2391.prev)).var_y;
    }
  } else {
    if (x_2391.parent == nullptr) {
      return (*(x_2391.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_724(const auto &x_2416) { return MakeUnit(); }
auto eval_expr_x_721(const auto &x_2420) {
  if (eq(x_2420.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2420.var_width_internal;
  }
}
auto var_modified_x_719(const auto &x_2429) { return MakeUnit(); }
auto eval_expr_x_716(const auto &x_2432) {
  if (x_2432.var_intrinsic_width_is_width) {
    return x_2432.var_intrinsic_width_internal;
  } else {
    if ((x_2432.parent == nullptr) && (*(x_2432.parent)).var_is_flex_row) {
      return plus(x_2432.var_intrinsic_width_internal, mult(x_2432.var_flex_amount, (*(x_2432.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2432.var_width_expr, "%")) {
        return mult(x_2432.var_box_width, divide(string_to_float(strip_suffix(x_2432.var_width_expr, "%")), 100.));
      } else {
        if (eq(x_2432.var_width_expr, "fit-content")) {
          return max(x_2432.var_box_width, x_2432.var_intrinsic_width_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_714(const auto &x_2485) { return MakeUnit(); }
auto eval_expr_x_711(const auto &x_2490) {
  if (x_2490.prev == nullptr) {
    if (x_2490.var_line_break || (*(x_2490.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_2490.prev)).var_x, (*(x_2490.prev)).var_width_external);
    }
  } else {
    if (x_2490.parent == nullptr) {
      return (*(x_2490.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_709(const auto &x_2511) { return MakeUnit(); }
auto eval_expr_x_706(const auto &x_2514) {
  if (gt(x_2514.var_left_over, 0.)) {
    return divide(x_2514.var_left_over, x_2514.var_flex_grow_sum);
  } else {
    return divide(x_2514.var_left_over, x_2514.var_flex_shrink_sum);
  }
}
auto var_modified_x_704(const auto &x_2535) { return MakeUnit(); }
auto eval_expr_x_701(const auto &x_2538) {
  if ((x_2538.parent == nullptr) && gt((*(x_2538.parent)).var_left_over, 0.)) {
    return x_2538.var_flex_grow;
  } else {
    return x_2538.var_flex_shrink;
  }
}
auto var_modified_x_699(const auto &x_2551) { return MakeUnit(); }
auto eval_expr_x_696(const auto &x_2556) {
  if (x_2556.var_is_flex_row) {
    return minus(x_2556.var_box_width, (x_2556.last == nullptr) ? ((*(x_2556.last)).var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2556.var_box_height, (x_2556.last == nullptr) ? ((*(x_2556.last)).var_intrinsic_height_sum) : (0.));
  }
}
auto var_modified_x_694(const auto &x_2577) { return MakeUnit(); }
auto eval_expr_x_691(const auto &x_2581) {
  if (x_2581.parent == nullptr) {
    return (*(x_2581.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_689(const auto &x_2586) { return MakeUnit(); }
auto eval_expr_x_686(const auto &x_2590) {
  if (x_2590.parent == nullptr) {
    return (*(x_2590.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_683(const auto &x_2595) { return MakeUnit(); }
auto eval_expr_x_680(const auto &x_2613) {
  if (eq(x_2613.var_display, "none")) {
    return false;
  } else {
    if (eq(x_2613.var_position, "absolute")) {
      return false;
    } else {
      if ((x_2613.parent == nullptr) &&
          (eq((*(x_2613.parent)).var_display, "flex") || eq((*(x_2613.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_2613.var_display, "block")) {
          return true;
        } else {
          if (eq(x_2613.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_2613.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_2613.var_display, "flex")) {
                if (eq(HashtblForceFind(x_2613.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_2613.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    if (eq(HashtblForceFind(x_2613.prop, "flex-direction"), "column-reverse")) {
                      return true;
                    } else {
                      return Panic();
                    }
                  }
                }
              } else {
                if (eq(x_2613.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_2613.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_2613.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_2613.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_2613.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_2613.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_2613.var_display, "list-item")) {
                              return true;
                            } else {
                              if (eq(x_2613.var_display, "grid")) {
                                return true;
                              } else {
                                return Panic();
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
}
auto var_modified_x_678(const auto &x_2690) { return MakeUnit(); }
auto eval_expr_x_675(const auto &x_2692) {
  return ((not(x_2692.parent == nullptr) || (*(x_2692.parent)).var_visible) &&
          (neq(x_2692.var_display, "none") && (not(x_2692.var_inside_svg) && not(x_2692.var_disabled))));
}
auto var_modified_x_673(const auto &x_2709) { return MakeUnit(); }
auto eval_expr_x_670(const auto &x_2717) {
  if (eq(x_2717.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_2717.parent == nullptr) && (*(x_2717.parent)).var_disabled);
  }
}
auto var_modified_x_668(const auto &x_2722) { return MakeUnit(); }
auto eval_expr_x_665(const auto &x_2730) {
  return ((x_2730.parent == nullptr) && ((*(x_2730.parent)).var_is_svg_block || (*(x_2730.parent)).var_inside_svg));
}
auto var_modified_x_663(const auto &x_2739) { return MakeUnit(); }
auto eval_expr_x_660(const auto &x_2741) { return eq(x_2741.name, "svg"); }
auto var_modified_x_658(const auto &x_2742) { return MakeUnit(); }
auto eval_expr_x_655(const auto &x_2751) { return neq(x_2751.var_height_attr_expr, "auto"); }
auto var_modified_x_653(const auto &x_2756) { return MakeUnit(); }
auto eval_expr_x_650(const auto &x_2764) {
  if (not(IsSome(HashtblFind(x_2764.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2764.attr, "height")) ||
        has_suffix(HashtblForceFind(x_2764.attr, "height"), "%")) {
      return HashtblForceFind(x_2764.attr, "height");
    } else {
      if (eq(HashtblForceFind(x_2764.attr, "height"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_648(const auto &x_2775) { return MakeUnit(); }
auto eval_expr_x_645(const auto &x_2785) { return neq(x_2785.var_width_attr_expr, "auto"); }
auto var_modified_x_643(const auto &x_2790) { return MakeUnit(); }
auto eval_expr_x_640(const auto &x_2798) {
  if (not(IsSome(HashtblFind(x_2798.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2798.attr, "width")) ||
        has_suffix(HashtblForceFind(x_2798.attr, "width"), "%")) {
      return HashtblForceFind(x_2798.attr, "width");
    } else {
      if (eq(HashtblForceFind(x_2798.attr, "width"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_638(const auto &x_2809) { return MakeUnit(); }
auto eval_expr_x_635(const auto &x_2812) {
  if ((x_2812.parent == nullptr) &&
      (eq((*(x_2812.parent)).var_display, "flex") || eq((*(x_2812.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2812.parent)).var_flex_direction, "column") ||
        eq((*(x_2812.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      if (eq((*(x_2812.parent)).var_flex_direction, "row")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_633(const auto &x_2837) { return MakeUnit(); }
auto eval_expr_x_630(const auto &x_2841) {
  if ((x_2841.parent == nullptr) &&
      (eq((*(x_2841.parent)).var_display, "flex") || eq((*(x_2841.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2841.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      if (eq((*(x_2841.parent)).var_flex_direction, "column") ||
          eq((*(x_2841.parent)).var_flex_direction, "column-reverse")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_628(const auto &x_2866) { return MakeUnit(); }
auto eval_expr_x_625(const auto &x_2873) {
  if (IsSome(HashtblFind(x_2873.prop, "flex-direction"))) {
    return HashtblForceFind(x_2873.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_623(const auto &x_2876) { return MakeUnit(); }
auto eval_expr_x_620(const auto &x_2881) {
  return plus((x_2881.prev == nullptr) ? ((*(x_2881.prev)).var_flex_shrink_sum) : (0.), x_2881.var_flex_shrink);
}
auto var_modified_x_618(const auto &x_2890) { return MakeUnit(); }
auto eval_expr_x_615(const auto &x_2895) {
  return plus((x_2895.prev == nullptr) ? ((*(x_2895.prev)).var_flex_grow_sum) : (0.), x_2895.var_flex_grow);
}
auto var_modified_x_613(const auto &x_2904) { return MakeUnit(); }
auto eval_expr_x_610(const auto &x_2907) {
  if (IsSome(HashtblFind(x_2907.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_2907.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_608(const auto &x_2910) { return MakeUnit(); }
auto eval_expr_x_605(const auto &x_2913) {
  if (IsSome(HashtblFind(x_2913.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_2913.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_603(const auto &x_2916) { return MakeUnit(); }
auto eval_expr_x_600(const auto &x_2922) {
  if (IsSome(HashtblFind(x_2922.prop, "position"))) {
    return HashtblForceFind(x_2922.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_598(const auto &x_2925) { return MakeUnit(); }
auto eval_expr_x_595(const auto &x_2951) {
  if (IsSome(HashtblFind(x_2951.prop, "display"))) {
    return HashtblForceFind(x_2951.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_592(const auto &x_2954) { return MakeUnit(); }
auto eval_expr_x_589(const auto &x_2964) {
  if (x_2964.prev == nullptr) {
    if (x_2964.var_line_break) {
      return plus((*(x_2964.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_2964.prev)).var_intrinsic_current_line_height, x_2964.var_intrinsic_height_external));
    } else {
      return (*(x_2964.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2964.var_line_break) {
      return x_2964.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_587(const auto &x_2993) { return MakeUnit(); }
auto eval_expr_x_584(const auto &x_3003) {
  if (x_3003.var_line_break) {
    return 0.;
  } else {
    return max(x_3003.var_intrinsic_height_external,
               (x_3003.prev == nullptr) ? ((*(x_3003.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_582(const auto &x_3016) { return MakeUnit(); }
auto eval_expr_x_579(const auto &x_3023) {
  return plus((x_3023.prev == nullptr) ? ((*(x_3023.prev)).var_intrinsic_height_sum) : (0.),
              x_3023.var_intrinsic_height_external);
}
auto var_modified_x_577(const auto &x_3032) { return MakeUnit(); }
auto eval_expr_x_574(const auto &x_3037) {
  if (eq(x_3037.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3037.var_intrinsic_height_internal;
  }
}
auto var_modified_x_572(const auto &x_3046) { return MakeUnit(); }
auto eval_expr_x_569(const auto &x_3051) {
  if (eq(x_3051.var_display, "none")) {
    return 0.;
  } else {
    if (x_3051.var_inside_svg) {
      return 0.;
    } else {
      if (x_3051.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3051.var_height_expr, "auto") &&
            (not(has_suffix(x_3051.var_height_expr, "%")) && neq(x_3051.var_height_expr, "fit-content"))) {
          if (has_suffix(x_3051.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_3051.var_height_expr, "px"));
          } else {
            if (has_suffix(x_3051.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_3051.var_height_expr, "ch"));
            } else {
              if (has_suffix(x_3051.var_height_expr, "lh")) {
                return string_to_float(strip_suffix(x_3051.var_height_expr, "lh"));
              } else {
                return Panic();
              }
            }
          }
        } else {
          return plus(
              x_3051.var_children_intrinsic_height,
              (eq(x_3051.name, "#text"))
                  ? ((x_3051.first == nullptr) ? (Panic()) : (10.))
                  : ((x_3051.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3051.name, "BR"))
                                ? ((x_3051.first == nullptr) ? (Panic()) : (0.))
                                : ((eq(x_3051.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_3051.name, "svg"))
                                              ? ((x_3051.var_has_height_attr &&
                                                  string_is_float(x_3051.var_height_attr_expr))
                                                     ? (string_to_float(x_3051.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_3051.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3051.attr, "viewBox"), " ", 3)))
                                                            : ((x_3051.var_has_height_attr &&
                                                                (has_suffix(x_3051.var_height_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_3051.attr, "viewBox"))))
                                                                   ? (mult(
                                                                         string_to_float(nth_by_sep(
                                                                             HashtblForceFind(x_3051.attr, "viewBox"),
                                                                             " ", 3)),
                                                                         divide(string_to_float(strip_suffix(
                                                                                    x_3051.var_height_attr_expr, "%")),
                                                                                100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_3051.name, "IMG"))
                                                     ? ((x_3051.var_has_height_attr)
                                                            ? (string_to_float(x_3051.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3051.attr, "image_height")) &&
                                                                not(x_3051.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3051.attr, "image_height")))
                                                                   : ((x_3051.var_has_width_attr &&
                                                                       (not(x_3051.var_has_height_attr) &&
                                                                        (IsSome(
                                                                             HashtblFind(x_3051.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_3051.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_3051.attr,
                                                                                                   "image_width"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_3051.var_width_attr_expr),
                                                                                       divide(int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_3051.attr,
                                                                                                      "image_height")),
                                                                                              int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_3051.attr,
                                                                                                      "image_width")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_3051.name, "IFRAME"))
                                                            ? ((x_3051.var_has_height_attr) ? (Panic()) : (150.))
                                                            : ((eq(x_3051.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_3051.name, "VIDEO"))
                                                                          ? ((x_3051.var_has_height_attr) ? (Panic())
                                                                                                          : (150.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_567(const auto &x_3196) { return MakeUnit(); }
auto eval_expr_x_564(const auto &x_3198) {
  if (eq(x_3198.var_display, "none") || (x_3198.var_inside_svg || x_3198.var_disabled)) {
    return true;
  } else {
    if ((x_3198.parent == nullptr) && (*(x_3198.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3198.var_height_expr, "auto") ||
          (has_suffix(x_3198.var_height_expr, "px") ||
           (has_suffix(x_3198.var_height_expr, "ch") ||
            (has_suffix(x_3198.var_height_expr, "lh") || eq(x_3198.var_height_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_3198.var_height_expr, "%") || eq(x_3198.var_height_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_562(const auto &x_3247) { return MakeUnit(); }
auto eval_expr_x_559(const auto &x_3267) {
  if (IsSome(HashtblFind(x_3267.prop, "height"))) {
    return HashtblForceFind(x_3267.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_557(const auto &x_3270) { return MakeUnit(); }
auto eval_expr_x_554(const auto &x_3272) {
  if (x_3272.last == nullptr) {
    return plus((*(x_3272.last)).var_finished_intrinsic_height_sum, (*(x_3272.last)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_552(const auto &x_3281) { return MakeUnit(); }
auto eval_expr_x_549(const auto &x_3288) {
  return plus((x_3288.prev == nullptr) ? ((*(x_3288.prev)).var_intrinsic_width_sum) : (0.),
              x_3288.var_intrinsic_width_external);
}
auto var_modified_x_547(const auto &x_3297) { return MakeUnit(); }
auto eval_expr_x_544(const auto &x_3304) {
  return max(x_3304.var_intrinsic_current_line_width,
             (x_3304.prev == nullptr) ? ((*(x_3304.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_542(const auto &x_3313) { return MakeUnit(); }
auto eval_expr_x_539(const auto &x_3318) {
  return plus(x_3318.var_intrinsic_width_external,
              ((x_3318.prev == nullptr) && not((*(x_3318.prev)).var_line_break))
                  ? ((*(x_3318.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_537(const auto &x_3331) { return MakeUnit(); }
auto eval_expr_x_534(const auto &x_3334) {
  if (eq(x_3334.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3334.var_intrinsic_width_internal;
  }
}
auto var_modified_x_532(const auto &x_3343) { return MakeUnit(); }
auto eval_expr_x_529(const auto &x_3348) {
  if (eq(x_3348.var_display, "none")) {
    return 0.;
  } else {
    if (x_3348.var_inside_svg) {
      return 0.;
    } else {
      if (x_3348.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3348.var_width_expr, "auto") &&
            (not(has_suffix(x_3348.var_width_expr, "%")) &&
             (neq(x_3348.var_width_expr, "fit-content") &&
              (neq(x_3348.var_width_expr, "max-content") && not(has_prefix(x_3348.var_width_expr, "calc")))))) {
          if (has_suffix(x_3348.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_3348.var_width_expr, "px"));
          } else {
            if (has_suffix(x_3348.var_width_expr, "ch")) {
              return string_to_float(strip_suffix(x_3348.var_width_expr, "ch"));
            } else {
              return Panic();
            }
          }
        } else {
          return plus(
              x_3348.var_children_intrinsic_width,
              (eq(x_3348.name, "#text"))
                  ? ((x_3348.first == nullptr) ? (Panic()) : (100.))
                  : ((x_3348.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3348.name, "BR"))
                                ? ((x_3348.first == nullptr) ? (Panic()) : (0.))
                                : ((eq(x_3348.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_3348.name, "svg"))
                                              ? ((x_3348.var_has_width_attr &&
                                                  string_is_float(x_3348.var_width_attr_expr))
                                                     ? (string_to_float(x_3348.var_width_attr_expr))
                                                     : ((not(x_3348.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_3348.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3348.attr, "viewBox"), " ", 2)))
                                                            : ((x_3348.var_has_width_attr &&
                                                                (has_suffix(x_3348.var_width_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_3348.attr, "viewBox"))))
                                                                   ? (mult(string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_3348.attr, "viewBox"),
                                                                               " ", 2)),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_3348.var_width_attr_expr, "%")),
                                                                                  100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_3348.name, "IMG"))
                                                     ? ((x_3348.var_has_width_attr)
                                                            ? (string_to_float(x_3348.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3348.attr, "image_width")) &&
                                                                not(x_3348.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3348.attr, "image_width")))
                                                                   : ((not(x_3348.var_has_width_attr) &&
                                                                       (x_3348.var_has_height_attr &&
                                                                        (IsSome(
                                                                             HashtblFind(x_3348.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_3348.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_3348.attr,
                                                                                                   "image_height"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_3348.var_height_attr_expr),
                                                                                       divide(
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_3348.attr,
                                                                                                   "image_width")),
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_3348.attr,
                                                                                                   "image_height")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_3348.name, "IFRAME"))
                                                            ? ((x_3348.var_has_width_attr) ? (Panic()) : (300.))
                                                            : ((eq(x_3348.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_3348.name, "VIDEO"))
                                                                          ? ((x_3348.var_has_width_attr) ? (Panic())
                                                                                                         : (300.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_527(const auto &x_3501) { return MakeUnit(); }
auto eval_expr_x_524(const auto &x_3503) {
  if (x_3503.last == nullptr) {
    return (*(x_3503.last)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_522(const auto &x_3508) { return MakeUnit(); }
auto eval_expr_x_519(const auto &x_3510) {
  if (eq(x_3510.var_display, "none") || (x_3510.var_inside_svg || x_3510.var_disabled)) {
    return true;
  } else {
    if ((x_3510.parent == nullptr) && (*(x_3510.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3510.var_width_expr, "auto") ||
          (has_suffix(x_3510.var_width_expr, "px") ||
           (has_suffix(x_3510.var_width_expr, "ch") ||
            (has_prefix(x_3510.var_width_expr, "calc(") || eq(x_3510.var_width_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_3510.var_width_expr, "%") || eq(x_3510.var_width_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_517(const auto &x_3559) { return MakeUnit(); }
auto eval_expr_x_514(const auto &x_3562) {
  if (eq(x_3562.var_display, "none")) {
    return true;
  } else {
    if (x_3562.var_inside_svg) {
      return true;
    } else {
      if (x_3562.var_disabled) {
        return true;
      } else {if ( eq(x_3562.name,"#document") || (eq(x_3562.name,"#shadow-root") || (eq(x_3562.name,"DIV") || (eq(x_3562.name,"HTML") || (eq(x_3562.name,"BODY") || (eq(x_3562.name,"BUTTON") || (eq(x_3562.name,"FOOTER") || (eq(x_3562.name,"SELECT") || (eq(x_3562.name,"SECTION") || (eq(x_3562.name,"FORM") || (eq(x_3562.name,"CENTER") || (eq(x_3562.name,"TD") || (eq(x_3562.name,"TR") || (eq(x_3562.name,"TBODY") || (eq(x_3562.name,"TABLE") || (eq(x_3562.name,"SPAN") || (eq(x_3562.name,"FONT") || (eq(x_3562.name,"A") || (eq(x_3562.name,"ARTICLE") || (eq(x_3562.name,"P") || (eq(x_3562.name,"U") || (eq(x_3562.name,"UL") || (eq(x_3562.name,"B") || (eq(x_3562.name,"H1") || (eq(x_3562.name,"H2") || (eq(x_3562.name,"H3") || (eq(x_3562.name,"H4") || (eq(x_3562.name,"DT") || (eq(x_3562.name,"DD") || (eq(x_3562.name,"DL") || (eq(x_3562.name,"LI") || (eq(x_3562.name,"LABEL") || (eq(x_3562.name,"OL") || (eq(x_3562.name,"NAV") || (eq(x_3562.name,"HEADER") || (eq(x_3562.name,"HEAD") || (eq(x_3562.name,"SOURCE") || (eq(x_3562.name,"PICTURE") || (eq(x_3562.name,"FIGURE") || (eq(x_3562.name,"FIGCAPTION") || (eq(x_3562.name,"MAIN") || (eq(x_3562.name,"REACT-PARTIAL") || (eq(x_3562.name,"QUERY-BUILDER") || (eq(x_3562.name,"MODAL-DIALOG") || (eq(x_3562.name,"SCROLLABLE-REGION") || (eq(x_3562.name,"DIALOG-HELPER") || (eq(x_3562.name,"AUTO-CHECK") || (eq(x_3562.name,"TOOL-TIP") || (eq(x_3562.name,"CUSTOM-SCOPES") || (eq(x_3562.name,"QBSEARCH-INPUT") || (eq(x_3562.name,"INCLUDE-FRAGMENT") || (eq(x_3562.name,"COOKIE-CONSENT-LINK") || (eq(x_3562.name,"FULLSTORY-CAPTURE") || (eq(x_3562.name,"GHCC-CONSENT") || (eq(x_3562.name,"GLOBAL-BANNER") || (eq(x_3562.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_3562.name,"CARD-SKEW") || (eq(x_3562.name,"EM") || (eq(x_3562.name,"ASIDE") || (eq(x_3562.name,"AUDIO") || (eq(x_3562.name,"SUP") || (eq(x_3562.name,"TIME") || (eq(x_3562.name,"ABBR") || (eq(x_3562.name,"SMALL") || (eq(x_3562.name,"SLOT") || eq(x_3562.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          if (eq(x_3562.name, "#text") ||
              (eq(x_3562.name, "svg") ||
               (eq(x_3562.name, "IFRAME") ||
                (eq(x_3562.name, "INPUT") ||
                 (eq(x_3562.name, "VIDEO") ||
                  (eq(x_3562.name, "BR") || (eq(x_3562.name, "IMG") || eq(x_3562.name, "TEXTAREA")))))))) {
            return false;
          } else {
            return Panic();
          }
        }
      }
    }
  }
}
auto var_modified_x_512(const auto &x_3575) { return MakeUnit(); }
auto eval_expr_x_509(const auto &x_3595) {
  if (IsSome(HashtblFind(x_3595.prop, "width"))) {
    return HashtblForceFind(x_3595.prop, "width");
  } else {
    return "auto";
  }
}
auto eval_stmts_x_249(const auto &x_508) {
  WriteMetric(x_15);
  auto x_510 = eval_expr_x_509(x_508);
  x_508.var_width_expr = x_510;
  WriteMetric(x_15);
  auto x_515 = eval_expr_x_514(x_508);
  x_508.var_is_default_case = x_515;
  WriteMetric(x_15);
  auto x_520 = eval_expr_x_519(x_508);
  x_508.var_intrinsic_width_is_width = x_520;
  WriteMetric(x_15);
  auto x_525 = eval_expr_x_524(x_508);
  x_508.var_children_intrinsic_width = x_525;
  WriteMetric(x_15);
  auto x_530 = eval_expr_x_529(x_508);
  x_508.var_intrinsic_width_internal = x_530;
  WriteMetric(x_15);
  auto x_535 = eval_expr_x_534(x_508);
  x_508.var_intrinsic_width_external = x_535;
  WriteMetric(x_15);
  auto x_540 = eval_expr_x_539(x_508);
  x_508.var_intrinsic_current_line_width = x_540;
  WriteMetric(x_15);
  auto x_545 = eval_expr_x_544(x_508);
  x_508.var_intrinsic_width_max = x_545;
  WriteMetric(x_15);
  auto x_550 = eval_expr_x_549(x_508);
  x_508.var_intrinsic_width_sum = x_550;
  WriteMetric(x_15);
  auto x_555 = eval_expr_x_554(x_508);
  x_508.var_children_intrinsic_height = x_555;
  WriteMetric(x_15);
  auto x_560 = eval_expr_x_559(x_508);
  x_508.var_height_expr = x_560;
  WriteMetric(x_15);
  auto x_565 = eval_expr_x_564(x_508);
  x_508.var_intrinsic_height_is_height = x_565;
  WriteMetric(x_15);
  auto x_570 = eval_expr_x_569(x_508);
  x_508.var_intrinsic_height_internal = x_570;
  WriteMetric(x_15);
  auto x_575 = eval_expr_x_574(x_508);
  x_508.var_intrinsic_height_external = x_575;
  WriteMetric(x_15);
  auto x_580 = eval_expr_x_579(x_508);
  x_508.var_intrinsic_height_sum = x_580;
  WriteMetric(x_15);
  auto x_585 = eval_expr_x_584(x_508);
  x_508.var_intrinsic_current_line_height = x_585;
  WriteMetric(x_15);
  auto x_590 = eval_expr_x_589(x_508);
  x_508.var_finished_intrinsic_height_sum = x_590;
  return MakeUnit();
}
auto eval_stmts_x_247(const auto &x_594) {
  WriteMetric(x_15);
  auto x_596 = eval_expr_x_595(x_594);
  x_594.var_display = x_596;
  WriteMetric(x_15);
  auto x_601 = eval_expr_x_600(x_594);
  x_594.var_position = x_601;
  WriteMetric(x_15);
  auto x_606 = eval_expr_x_605(x_594);
  x_594.var_flex_grow = x_606;
  WriteMetric(x_15);
  auto x_611 = eval_expr_x_610(x_594);
  x_594.var_flex_shrink = x_611;
  WriteMetric(x_15);
  auto x_616 = eval_expr_x_615(x_594);
  x_594.var_flex_grow_sum = x_616;
  WriteMetric(x_15);
  auto x_621 = eval_expr_x_620(x_594);
  x_594.var_flex_shrink_sum = x_621;
  WriteMetric(x_15);
  auto x_626 = eval_expr_x_625(x_594);
  x_594.var_flex_direction = x_626;
  WriteMetric(x_15);
  auto x_631 = eval_expr_x_630(x_594);
  x_594.var_is_flex_row = x_631;
  WriteMetric(x_15);
  auto x_636 = eval_expr_x_635(x_594);
  x_594.var_is_flex_column = x_636;
  WriteMetric(x_15);
  auto x_641 = eval_expr_x_640(x_594);
  x_594.var_width_attr_expr = x_641;
  WriteMetric(x_15);
  auto x_646 = eval_expr_x_645(x_594);
  x_594.var_has_width_attr = x_646;
  WriteMetric(x_15);
  auto x_651 = eval_expr_x_650(x_594);
  x_594.var_height_attr_expr = x_651;
  WriteMetric(x_15);
  auto x_656 = eval_expr_x_655(x_594);
  x_594.var_has_height_attr = x_656;
  WriteMetric(x_15);
  auto x_661 = eval_expr_x_660(x_594);
  x_594.var_is_svg_block = x_661;
  WriteMetric(x_15);
  auto x_666 = eval_expr_x_665(x_594);
  x_594.var_inside_svg = x_666;
  WriteMetric(x_15);
  auto x_671 = eval_expr_x_670(x_594);
  x_594.var_disabled = x_671;
  WriteMetric(x_15);
  auto x_676 = eval_expr_x_675(x_594);
  x_594.var_visible = x_676;
  WriteMetric(x_15);
  auto x_681 = eval_expr_x_680(x_594);
  x_594.var_line_break = x_681;
  return MakeUnit();
}
auto eval_stmts_x_244(const auto &x_685) {
  WriteMetric(x_15);
  auto x_687 = eval_expr_x_686(x_685);
  x_685.var_box_width = x_687;
  WriteMetric(x_15);
  auto x_692 = eval_expr_x_691(x_685);
  x_685.var_box_height = x_692;
  WriteMetric(x_15);
  auto x_697 = eval_expr_x_696(x_685);
  x_685.var_left_over = x_697;
  WriteMetric(x_15);
  auto x_702 = eval_expr_x_701(x_685);
  x_685.var_flex_amount = x_702;
  WriteMetric(x_15);
  auto x_707 = eval_expr_x_706(x_685);
  x_685.var_flex_unit = x_707;
  WriteMetric(x_15);
  auto x_712 = eval_expr_x_711(x_685);
  x_685.var_x = x_712;
  WriteMetric(x_15);
  auto x_717 = eval_expr_x_716(x_685);
  x_685.var_width_internal = x_717;
  WriteMetric(x_15);
  auto x_722 = eval_expr_x_721(x_685);
  x_685.var_width_external = x_722;
  WriteMetric(x_15);
  auto x_727 = eval_expr_x_726(x_685);
  x_685.var_y = x_727;
  WriteMetric(x_15);
  auto x_732 = eval_expr_x_731(x_685);
  x_685.var_height_internal = x_732;
  WriteMetric(x_15);
  auto x_737 = eval_expr_x_736(x_685);
  x_685.var_height_external = x_737;
  WriteMetric(x_15);
  auto x_742 = eval_expr_x_741(x_685);
  x_685.var_line_height = x_742;
  return MakeUnit();
}
auto eval_stmts_x_237(const auto &x_746) {
  WriteMetric(x_15);
  auto x_748 = eval_expr_x_747(x_746);
  x_746.var_width_expr = x_748;
  WriteMetric(x_15);
  auto x_753 = eval_expr_x_752(x_746);
  x_746.var_is_default_case = x_753;
  WriteMetric(x_15);
  auto x_758 = eval_expr_x_757(x_746);
  x_746.var_intrinsic_width_is_width = x_758;
  WriteMetric(x_15);
  auto x_763 = eval_expr_x_762(x_746);
  x_746.var_children_intrinsic_width = x_763;
  WriteMetric(x_15);
  auto x_768 = eval_expr_x_767(x_746);
  x_746.var_intrinsic_width_internal = x_768;
  WriteMetric(x_15);
  auto x_773 = eval_expr_x_772(x_746);
  x_746.var_intrinsic_width_external = x_773;
  WriteMetric(x_15);
  auto x_778 = eval_expr_x_777(x_746);
  x_746.var_intrinsic_current_line_width = x_778;
  WriteMetric(x_15);
  auto x_783 = eval_expr_x_782(x_746);
  x_746.var_intrinsic_width_max = x_783;
  WriteMetric(x_15);
  auto x_788 = eval_expr_x_787(x_746);
  x_746.var_intrinsic_width_sum = x_788;
  WriteMetric(x_15);
  auto x_793 = eval_expr_x_792(x_746);
  x_746.var_children_intrinsic_height = x_793;
  WriteMetric(x_15);
  auto x_798 = eval_expr_x_797(x_746);
  x_746.var_height_expr = x_798;
  WriteMetric(x_15);
  auto x_803 = eval_expr_x_802(x_746);
  x_746.var_intrinsic_height_is_height = x_803;
  WriteMetric(x_15);
  auto x_808 = eval_expr_x_807(x_746);
  x_746.var_intrinsic_height_internal = x_808;
  WriteMetric(x_15);
  auto x_813 = eval_expr_x_812(x_746);
  x_746.var_intrinsic_height_external = x_813;
  WriteMetric(x_15);
  auto x_818 = eval_expr_x_817(x_746);
  x_746.var_intrinsic_height_sum = x_818;
  WriteMetric(x_15);
  auto x_823 = eval_expr_x_822(x_746);
  x_746.var_intrinsic_current_line_height = x_823;
  WriteMetric(x_15);
  auto x_828 = eval_expr_x_827(x_746);
  x_746.var_finished_intrinsic_height_sum = x_828;
  return MakeUnit();
}
auto eval_stmts_x_235(const auto &x_832) {
  WriteMetric(x_15);
  auto x_834 = eval_expr_x_833(x_832);
  x_832.var_display = x_834;
  WriteMetric(x_15);
  auto x_839 = eval_expr_x_838(x_832);
  x_832.var_position = x_839;
  WriteMetric(x_15);
  auto x_844 = eval_expr_x_843(x_832);
  x_832.var_flex_grow = x_844;
  WriteMetric(x_15);
  auto x_849 = eval_expr_x_848(x_832);
  x_832.var_flex_shrink = x_849;
  WriteMetric(x_15);
  auto x_854 = eval_expr_x_853(x_832);
  x_832.var_flex_grow_sum = x_854;
  WriteMetric(x_15);
  auto x_859 = eval_expr_x_858(x_832);
  x_832.var_flex_shrink_sum = x_859;
  WriteMetric(x_15);
  auto x_864 = eval_expr_x_863(x_832);
  x_832.var_flex_direction = x_864;
  WriteMetric(x_15);
  auto x_869 = eval_expr_x_868(x_832);
  x_832.var_is_flex_row = x_869;
  WriteMetric(x_15);
  auto x_874 = eval_expr_x_873(x_832);
  x_832.var_is_flex_column = x_874;
  WriteMetric(x_15);
  auto x_879 = eval_expr_x_878(x_832);
  x_832.var_width_attr_expr = x_879;
  WriteMetric(x_15);
  auto x_884 = eval_expr_x_883(x_832);
  x_832.var_has_width_attr = x_884;
  WriteMetric(x_15);
  auto x_889 = eval_expr_x_888(x_832);
  x_832.var_height_attr_expr = x_889;
  WriteMetric(x_15);
  auto x_894 = eval_expr_x_893(x_832);
  x_832.var_has_height_attr = x_894;
  WriteMetric(x_15);
  auto x_899 = eval_expr_x_898(x_832);
  x_832.var_is_svg_block = x_899;
  WriteMetric(x_15);
  auto x_904 = eval_expr_x_903(x_832);
  x_832.var_inside_svg = x_904;
  WriteMetric(x_15);
  auto x_909 = eval_expr_x_908(x_832);
  x_832.var_disabled = x_909;
  WriteMetric(x_15);
  auto x_914 = eval_expr_x_913(x_832);
  x_832.var_visible = x_914;
  WriteMetric(x_15);
  auto x_919 = eval_expr_x_918(x_832);
  x_832.var_line_break = x_919;
  return MakeUnit();
}
auto eval_stmts_x_232(const auto &x_923) {
  WriteMetric(x_15);
  auto x_925 = eval_expr_x_924(x_923);
  x_923.var_box_width = x_925;
  WriteMetric(x_15);
  auto x_930 = eval_expr_x_929(x_923);
  x_923.var_box_height = x_930;
  WriteMetric(x_15);
  auto x_935 = eval_expr_x_934(x_923);
  x_923.var_left_over = x_935;
  WriteMetric(x_15);
  auto x_940 = eval_expr_x_939(x_923);
  x_923.var_flex_amount = x_940;
  WriteMetric(x_15);
  auto x_945 = eval_expr_x_944(x_923);
  x_923.var_flex_unit = x_945;
  WriteMetric(x_15);
  auto x_950 = eval_expr_x_949(x_923);
  x_923.var_x = x_950;
  WriteMetric(x_15);
  auto x_955 = eval_expr_x_954(x_923);
  x_923.var_width_internal = x_955;
  WriteMetric(x_15);
  auto x_960 = eval_expr_x_959(x_923);
  x_923.var_width_external = x_960;
  WriteMetric(x_15);
  auto x_965 = eval_expr_x_964(x_923);
  x_923.var_y = x_965;
  WriteMetric(x_15);
  auto x_970 = eval_expr_x_969(x_923);
  x_923.var_height_internal = x_970;
  WriteMetric(x_15);
  auto x_975 = eval_expr_x_974(x_923);
  x_923.var_height_external = x_975;
  WriteMetric(x_15);
  auto x_980 = eval_expr_x_979(x_923);
  x_923.var_line_height = x_980;
  return MakeUnit();
}
auto x_50(const auto &x_51) {
  auto x_52 = Zro(x_51);
  auto x_53 = Fst(x_51);
  auto x_54 = Zro(x_52);
  auto x_55 = Fst(x_52);
  return ListMatch(
      x_54, [&](const auto &x_62) { return Panic(); },
      [&](const auto &x_56) {
        return [&](const auto &x_57) {
          return ListMatch(
              x_57,
              [&](const auto &x_60) {
                auto x_61 = ListSplitN(x_55.children, x_56);
                OutputChangeMetric(x_15,
                                   IntAdd(layout_size_x_3(ListNthExn(x_55.children, x_56)), layout_size_x_3(x_53)));
                x_55.children = ListAppend(Zro(x_61), Cons(x_53, ListTailExn(Fst(x_61))));
                return MakeUnit();
              },
              [&](const auto &x_58) {
                return [&](const auto &x_59) {
                  return x_50(MakePair(MakePair(x_57, ListNthExn(x_55.children, x_56)), x_53));
                };
              });
        };
      });
}
auto replace_layout_node_x_49(const auto &x_51) { return x_50(x_51); }
auto x_63(const auto &x_64) {
  auto x_65 = Zro(x_64);
  auto x_66 = Fst(x_64);
  auto x_67 = Zro(x_65);
  auto x_68 = Fst(x_65);return ListMatch(x_67,[&](const auto&x_215){
    return Panic();},[&](const auto&x_69){
  return [&](const auto &x_70) {return ListMatch(x_70,[&](const auto&x_73){InputChangeMetric(x_15,IntAdd(node_size_x_4(ListNthExn(x_68.children,x_69)),node_size_x_4(x_66)));auto x_74 = ListSplitN(x_68.children,x_69);auto x_75 = Zro(x_74);auto x_76 = Fst(x_74);ListMatch(x_76,[&](const auto&x_145){return Panic();},[&](const auto&x_77){return [&](const auto&x_78){x_68.children=ListAppend(x_75,x_78);if (ListIsEmpty(x_75)){x_68.first=ListHead(x_78);}else{MakeUnit();if (ListIsEmpty(x_78)){x_68.last=ListLast(x_75);}else{MakeUnit();return MakeUnit();};});auto x_146 = ListSplitN(x_68.children,x_69);auto x_147 = Zro(x_146);auto x_148 = Fst(x_146);x_68.children=ListAppend(x_147,Cons(x_66,x_148));if (ListIsEmpty(x_147)){x_68.first=Some(x_66);}else{MakeUnit();if (ListIsEmpty(x_148)){x_68.last=Some(x_66);}else{MakeUnit();x_66.parent=Some(x_68);MakeUnit();return MakeUnit();},[&](const auto&x_71){return [&](const auto&x_72){return x_63(MakePair(MakePair(x_70,ListNthExn(x_68.children,x_69)),x_66));};});};});}auto replace_node_x_42(const auto&x_64){return x_63(x_64);}auto x_216(const auto&x_217){x_217.first=None();return MakeUnit();}auto set_children_relation_x_40(const auto&x_217){return x_216(x_217);}auto x_221(const auto&x_222){x_222.first=None();return MakeUnit();}auto set_children_relation_x_36(const auto&x_222){return x_221(x_222);}auto x_226(const auto&x_227){x_227.first=None();return MakeUnit();}auto set_children_relation_x_33(const auto&x_227){return x_226(x_227);}auto eval_stmts_x_29(const auto&x_231){return MakeUnit();}auto eval_stmts_x_28(const auto&x_234){return MakeUnit();}auto x_238(const auto&x_239){x_239.first=None();return MakeUnit();}auto set_children_relation_x_26(const auto&x_239){return x_238(x_239);}auto eval_stmts_x_24(const auto&x_243){return MakeUnit();}auto eval_stmts_x_23(const auto&x_246){return MakeUnit();}auto x_250(const auto&x_251){x_251.first=None();return MakeUnit();}auto set_children_relation_x_20(const auto&x_251){return x_250(x_251);}auto x_255(const auto&x_256){auto x_257 = Zro(x_256);auto x_258 = Fst(x_256);auto x_259 = Zro(x_257);auto x_260 = Fst(x_257);return ListMatch(x_259,[&](const auto&x_263){auto x_264 = Zro(x_258);auto x_265 = Zro(x_264);auto x_266 = Fst(x_264);auto x_267 = Fst(x_258);auto x_268 = Zro(x_267);auto x_269 = Fst(x_267);InputChangeMetric(x_269,1);std::string x_3598 = x_265;if (x_3598=="attributes"){std::string x_3599 = x_266;if (x_3599=="width"){WriteMetric(x_269);HashtblAddExn(x_260.attr,"width",x_268);return MakeUnit();}else if (x_3599=="image_height"){WriteMetric(x_269);HashtblAddExn(x_260.attr,"image_height",x_268);return MakeUnit();}else if (x_3599=="image_width"){WriteMetric(x_269);HashtblAddExn(x_260.attr,"image_width",x_268);return MakeUnit();}else if (x_3599=="height"){WriteMetric(x_269);HashtblAddExn(x_260.attr,"height",x_268);return MakeUnit();}else if (x_3599=="viewBox"){WriteMetric(x_269);HashtblAddExn(x_260.attr,"viewBox",x_268);return MakeUnit();}else {return MakeUnit();}}else if (x_3598=="properties"){std::string x_3600 = x_266;if (x_3600=="width"){WriteMetric(x_269);HashtblAddExn(x_260.prop,"width",x_268);return MakeUnit();}else if (x_3600=="flex-grow"){WriteMetric(x_269);HashtblAddExn(x_260.prop,"flex-grow",x_268);return MakeUnit();}else if (x_3600=="height"){WriteMetric(x_269);HashtblAddExn(x_260.prop,"height",x_268);return MakeUnit();}else if (x_3600=="display"){WriteMetric(x_269);HashtblAddExn(x_260.prop,"display",x_268);return MakeUnit();}else if (x_3600=="position"){WriteMetric(x_269);HashtblAddExn(x_260.prop,"position",x_268);return MakeUnit();}else if (x_3600=="flex-shrink"){WriteMetric(x_269);HashtblAddExn(x_260.prop,"flex-shrink",x_268);return MakeUnit();}else if (x_3600=="flex-direction"){WriteMetric(x_269);HashtblAddExn(x_260.prop,"flex-direction",x_268);return MakeUnit();}else {return MakeUnit();}}else {return Panic();}},[&](const auto&x_261){return [&](const auto&x_262){return x_255(MakePair(MakePair(x_262,ListNthExn(x_260.children,x_261)),x_258));};});}auto insert_value_x_11(const auto&x_256){return x_255(x_256);}auto x_270(const auto&x_271){auto x_272 = Zro(x_271);auto x_273 = Fst(x_271);auto x_274 = Zro(x_272);auto x_275 = Fst(x_272);return ListMatch(x_274,[&](const auto&x_278){auto x_279 = Zro(x_273);auto x_280 = Zro(x_279);auto x_281 = Fst(x_279);auto x_282 = Fst(x_273);InputChangeMetric(x_282,1);std::string x_3601 = x_280;if (x_3601=="attributes"){std::string x_3602 = x_281;if (x_3602=="width"){WriteMetric(x_282);HashtblForceRemove(x_275.attr,"width");return MakeUnit();}else if (x_3602=="image_height"){WriteMetric(x_282);HashtblForceRemove(x_275.attr,"image_height");return MakeUnit();}else if (x_3602=="image_width"){WriteMetric(x_282);HashtblForceRemove(x_275.attr,"image_width");return MakeUnit();}else if (x_3602=="height"){WriteMetric(x_282);HashtblForceRemove(x_275.attr,"height");return MakeUnit();}else if (x_3602=="viewBox"){WriteMetric(x_282);HashtblForceRemove(x_275.attr,"viewBox");return MakeUnit();}else {return MakeUnit();}}else if (x_3601=="properties"){std::string x_3603 = x_281;if (x_3603=="width"){WriteMetric(x_282);HashtblForceRemove(x_275.prop,"width");return MakeUnit();}else if (x_3603=="flex-grow"){WriteMetric(x_282);HashtblForceRemove(x_275.prop,"flex-grow");return MakeUnit();}else if (x_3603=="height"){WriteMetric(x_282);HashtblForceRemove(x_275.prop,"height");return MakeUnit();}else if (x_3603=="display"){WriteMetric(x_282);HashtblForceRemove(x_275.prop,"display");return MakeUnit();}else if (x_3603=="position"){WriteMetric(x_282);HashtblForceRemove(x_275.prop,"position");return MakeUnit();}else if (x_3603=="flex-shrink"){WriteMetric(x_282);HashtblForceRemove(x_275.prop,"flex-shrink");return MakeUnit();}else if (x_3603=="flex-direction"){WriteMetric(x_282);HashtblForceRemove(x_275.prop,"flex-direction");return MakeUnit();}else {return MakeUnit();}}else {return Panic();}},[&](const auto&x_276){return [&](const auto&x_277){return x_270(MakePair(MakePair(x_277,ListNthExn(x_275.children,x_276)),x_273));};});}auto delete_value_x_10(const auto&x_271){return x_270(x_271);}auto x_283(const auto&x_284){auto x_285 = Zro(x_284);auto x_286 = Fst(x_284);auto x_287 = Zro(x_285);auto x_288 = Fst(x_285);return ListMatch(x_287,[&](const auto&x_291){auto x_292 = Zro(x_286);auto x_293 = Zro(x_292);auto x_294 = Fst(x_292);auto x_295 = Fst(x_286);auto x_296 = Zro(x_295);auto x_297 = Fst(x_295);InputChangeMetric(x_297,1);std::string x_3604 = x_293;if (x_3604=="attributes"){std::string x_3605 = x_294;if (x_3605=="width"){WriteMetric(x_297);HashtblForceRemove(x_288.attr,"width");WriteMetric(x_297);HashtblAddExn(x_288.attr,"width",x_296);return MakeUnit();}else if (x_3605=="image_height"){WriteMetric(x_297);HashtblForceRemove(x_288.attr,"image_height");WriteMetric(x_297);HashtblAddExn(x_288.attr,"image_height",x_296);return MakeUnit();}else if (x_3605=="image_width"){WriteMetric(x_297);HashtblForceRemove(x_288.attr,"image_width");WriteMetric(x_297);HashtblAddExn(x_288.attr,"image_width",x_296);return MakeUnit();}else if (x_3605=="height"){WriteMetric(x_297);HashtblForceRemove(x_288.attr,"height");WriteMetric(x_297);HashtblAddExn(x_288.attr,"height",x_296);return MakeUnit();}else if (x_3605=="viewBox"){WriteMetric(x_297);HashtblForceRemove(x_288.attr,"viewBox");WriteMetric(x_297);HashtblAddExn(x_288.attr,"viewBox",x_296);return MakeUnit();}else {return MakeUnit();}}else if (x_3604=="properties"){std::string x_3606 = x_294;if (x_3606=="width"){WriteMetric(x_297);HashtblForceRemove(x_288.prop,"width");WriteMetric(x_297);HashtblAddExn(x_288.prop,"width",x_296);return MakeUnit();}else if (x_3606=="flex-grow"){WriteMetric(x_297);HashtblForceRemove(x_288.prop,"flex-grow");WriteMetric(x_297);HashtblAddExn(x_288.prop,"flex-grow",x_296);return MakeUnit();}else if (x_3606=="height"){WriteMetric(x_297);HashtblForceRemove(x_288.prop,"height");WriteMetric(x_297);HashtblAddExn(x_288.prop,"height",x_296);return MakeUnit();}else if (x_3606=="display"){WriteMetric(x_297);HashtblForceRemove(x_288.prop,"display");WriteMetric(x_297);HashtblAddExn(x_288.prop,"display",x_296);return MakeUnit();}else if (x_3606=="position"){WriteMetric(x_297);HashtblForceRemove(x_288.prop,"position");WriteMetric(x_297);HashtblAddExn(x_288.prop,"position",x_296);return MakeUnit();}else if (x_3606=="flex-shrink"){WriteMetric(x_297);HashtblForceRemove(x_288.prop,"flex-shrink");WriteMetric(x_297);HashtblAddExn(x_288.prop,"flex-shrink",x_296);return MakeUnit();}else if (x_3606=="flex-direction"){WriteMetric(x_297);HashtblForceRemove(x_288.prop,"flex-direction");WriteMetric(x_297);HashtblAddExn(x_288.prop,"flex-direction",x_296);return MakeUnit();}else {return MakeUnit();}}else {return Panic();}},[&](const auto&x_289){return [&](const auto&x_290){return x_283(MakePair(MakePair(x_290,ListNthExn(x_288.children,x_289)),x_286));};});}auto replace_value_x_9(const auto&x_284){return x_283(x_284);}auto x_298(const auto&x_299){auto x_300 = Zro(x_299);auto x_301 = Fst(x_299);auto x_302 = Zro(x_300);auto x_303 = Fst(x_300);return ListMatch(x_302,[&](const auto&x_310){return Panic();},[&](const auto&x_304){return [&](const auto&x_305){return ListMatch(x_305,[&](const auto&x_308){OutputChangeMetric(x_301,layout_size_x_3(ListNthExn(x_303.children,x_304)));auto x_309 = ListSplitN(x_303.children,x_304);x_303.children=ListAppend(Zro(x_309),ListTailExn(Fst(x_309)));},[&](const auto&x_306){return [&](const auto&x_307){return x_298(MakePair(MakePair(x_305,ListNthExn(x_303.children,x_304)),x_301));};});};});}auto remove_layout_node_x_8(const auto&x_299){return x_298(x_299);}auto x_311(const auto&x_312){auto x_313 = Zro(x_312);auto x_314 = Fst(x_312);auto x_315 = Zro(x_313);auto x_316 = Fst(x_313);return ListMatch(x_315,[&](const auto&x_394){return Panic();},[&](const auto&x_317){return [&](const auto&x_318){return ListMatch(x_318,[&](const auto&x_321){InputChangeMetric(x_314,node_size_x_4(ListNthExn(x_316.children,x_317)));auto x_322 = ListSplitN(x_316.children,x_317);auto x_323 = Zro(x_322);auto x_324 = Fst(x_322);return ListMatch(x_324,[&](const auto&x_393){return Panic();},[&](const auto&x_325){return [&](const auto&x_326){x_316.children=ListAppend(x_323,x_326);if (ListIsEmpty(x_323)){x_316.first=ListHead(x_326);}else{MakeUnit();if (ListIsEmpty(x_326)){x_316.last=ListLast(x_323);}else{MakeUnit();return MakeUnit();};});},[&](const auto&x_319){return [&](const auto&x_320){return x_311(MakePair(MakePair(x_318,ListNthExn(x_316.children,x_317)),x_314));};});};});}auto remove_node_x_7(const auto&x_312){return x_311(x_312);}auto x_395(const auto&x_396){auto x_397 = Zro(x_396);auto x_398 = Fst(x_396);auto x_399 = Zro(x_397);auto x_400 = Fst(x_397);return ListMatch(x_399,[&](const auto&x_409){return Panic();},[&](const auto&x_401){return [&](const auto&x_402){return ListMatch(x_402,[&](const auto&x_405){auto x_406 = Zro(x_398);auto x_407 = Fst(x_398);OutputChangeMetric(x_407,layout_size_x_3(x_406));auto x_408 = ListSplitN(x_400.children,x_401);x_400.children=ListAppend(Zro(x_408),Cons(x_406,Fst(x_408)));},[&](const auto&x_403){return [&](const auto&x_404){return x_395(MakePair(MakePair(x_402,ListNthExn(x_400.children,x_401)),x_398));};});};});}auto add_layout_node_x_6(const auto&x_396){return x_395(x_396);}auto x_410(const auto&x_411){auto x_412 = Zro(x_411);auto x_413 = Fst(x_411);auto x_414 = Zro(x_412);auto x_415 = Fst(x_412);return ListMatch(x_414,[&](const auto&x_492){return Panic();},[&](const auto&x_416){return [&](const auto&x_417){return ListMatch(x_417,[&](const auto&x_420){auto x_421 = Zro(x_413);auto x_422 = Fst(x_413);InputChangeMetric(x_422,node_size_x_4(x_421));auto x_423 = ListSplitN(x_415.children,x_416);auto x_424 = Zro(x_423);auto x_425 = Fst(x_423);x_415.children=ListAppend(x_424,Cons(x_421,x_425));if (ListIsEmpty(x_424)){x_415.first=Some(x_421);}else{MakeUnit();if (ListIsEmpty(x_425)){x_415.last=Some(x_421);}else{MakeUnit();x_421.parent=Some(x_415);return MakeUnit();},[&](const auto&x_418){return [&](const auto&x_419){return x_410(MakePair(MakePair(x_417,ListNthExn(x_415.children,x_416)),x_413));};});};});}auto add_node_x_5(const auto&x_411){return x_410(x_411);}auto x_493(const auto&x_494){return IntAdd(1,ListIntSum(x_494.children,[&](const auto&x_495){return x_493(x_495);}));}auto node_size_x_4(const auto&x_494){return x_493(x_494);}auto x_496(const auto&x_497){return IntAdd(1,ListIntSum(x_497.children,[&](const auto&x_498){return x_496(x_498);}));}auto layout_size_x_3(const auto&x_497){return x_496(x_497);}auto x_499(const auto&x_500){return MakeLayoutNode(ListMap(JsonToList(JsonMember("children",x_500)),[&](const auto&x_501){return x_499(x_501);}));}auto json_to_layout_node_x_2(const auto&x_500){return x_499(x_500);}auto x_502(const auto&x_503){return MakeNode(x_503.name,x_503.attr,x_503.prop,x_503.extern_id,ListMap(x_503.children,[&](const auto&x_504){return x_502(x_504);}));}auto node_to_fs_node_x_1(const auto&x_503){return x_502(x_503);}auto x_505(const auto&x_506){return MakeNode(JsonToString(JsonMember("name",x_506)),JsonToDict(JsonMember("attributes",x_506)),JsonToDict(JsonMember("properties",x_506)),JsonToInt(JsonMember("id",x_506)),ListMap(JsonToList(JsonMember("children",x_506)),[&](const auto&x_507){return x_505(x_507);}));}auto json_to_node_aux_x_0(const auto&x_506){return x_505(x_506);}int main(){return WithOutFile("hn_type.out",[&](const auto&x_12){PrintEndline("RUNNING FS");return WithInFile("command.json",[&](const auto&x_13){auto x_14 = MakeRef(0);auto x_15 = FreshMetric();auto x_16 = JsonOfString(InputLine(x_13));auto x_17 = JsonOfString(InputLine(x_13));auto x_18 = MakeStack();PushStack(x_18,x_16);PushStack(x_18,x_17);Assert(StringEqual(JsonToString(JsonMember("name",x_16)),"init"));Assert(StringEqual(JsonToString(JsonMember("name",x_17)),"layout_init"));auto x_21 = [&](){auto x_19 = json_to_node_aux_x_0(JsonMember("node",x_16));x_19.parent=None();x_19.prev=None();x_19.next=None();return x_19;}();auto x_22 = json_to_layout_node_x_2(JsonMember("node",x_17));OutputChangeMetric(x_15,layout_size_x_3(x_22));InputChangeMetric(x_15,node_size_x_4(x_21));JsonToChannel(x_12,AssocToJson(Cons(MakePair("name",StringToJson("FS")),Cons(MakePair("diff_num",IntToJson(ReadRef(x_14))),Cons(MakePair("read_count",IntToJson(MetricReadCount(x_15))),Cons(MakePair("meta_read_count",IntToJson(MetricMetaReadCount(x_15))),Cons(MakePair("write_count",IntToJson(MetricWriteCount(x_15))),Cons(MakePair("meta_write_count",IntToJson(MetricMetaWriteCount(x_15))),Cons(MakePair("queue_size_acc",IntToJson(MetricQueueSizeAcc(x_15))),Cons(MakePair("input_change_count",IntToJson(MetricInputChangeCount(x_15))),Cons(MakePair("output_change_count",IntToJson(MetricOutputChangeCount(x_15))),Cons(MakePair("html",StringToJson("")),Cons(MakePair("command",ListToJson(StackToList(x_18))),Nil())))))))))))));OutputString(x_12,"\n");ClearStack(x_18);WriteRef(x_14,IntAdd(ReadRef(x_14),1));auto x_27 = [&](){auto x_25 = node_to_fs_node_x_1(x_21);x_25.parent=None();x_25.prev=None();x_25.next=None();return x_25;}();AssertNodeValueEqual(x_21,x_27);ResetMetric(x_15);PrintEndline("EVAL OK!");IterLines(x_13,[&](const auto&x_30){auto x_31 = JsonOfString(x_30);PushStack(x_18,x_31);std::string x_3607 = JsonToString(JsonMember("name",x_31));if (x_3607=="add"){return add_node_x_5(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_34){return JsonToInt(x_34);}),x_21),MakePair([&](){auto x_32 = json_to_node_aux_x_0(JsonMember("node",x_31));x_32.parent=None();x_32.prev=None();x_32.next=None();return x_32;}(),x_15)));}else if (x_3607=="recalculate"){JsonToChannel(x_12,AssocToJson(Cons(MakePair("name",StringToJson("FS")),Cons(MakePair("diff_num",IntToJson(ReadRef(x_14))),Cons(MakePair("read_count",IntToJson(MetricReadCount(x_15))),Cons(MakePair("meta_read_count",IntToJson(MetricMetaReadCount(x_15))),Cons(MakePair("write_count",IntToJson(MetricWriteCount(x_15))),Cons(MakePair("meta_write_count",IntToJson(MetricMetaWriteCount(x_15))),Cons(MakePair("queue_size_acc",IntToJson(MetricQueueSizeAcc(x_15))),Cons(MakePair("input_change_count",IntToJson(MetricInputChangeCount(x_15))),Cons(MakePair("output_change_count",IntToJson(MetricOutputChangeCount(x_15))),Cons(MakePair("html",StringToJson("")),Cons(MakePair("command",ListToJson(StackToList(x_18))),Nil())))))))))))));OutputString(x_12,"\n");ClearStack(x_18);WriteRef(x_14,IntAdd(ReadRef(x_14),1));auto x_37 = [&](){auto x_35 = node_to_fs_node_x_1(x_21);x_35.parent=None();x_35.prev=None();x_35.next=None();return x_35;}();AssertNodeValueEqual(x_21,x_37);ResetMetric(x_15);return MakeUnit();}else if (x_3607=="remove"){return remove_node_x_7(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_38){return JsonToInt(x_38);}),x_21),x_15));}else if (x_3607=="replace"){return replace_node_x_42(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_41){return JsonToInt(x_41);}),x_21),[&](){auto x_39 = json_to_node_aux_x_0(JsonMember("node",x_31));x_39.parent=None();x_39.prev=None();x_39.next=None();return x_39;}()));}else if (x_3607=="replace_value"){return replace_value_x_9(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_43){return JsonToInt(x_43);}),x_21),MakePair(MakePair(JsonToString(JsonMember("type",x_31)),JsonToString(JsonMember("key",x_31))),MakePair(JsonToValue(JsonMember("value",x_31)),x_15))));}else if (x_3607=="delete_value"){return delete_value_x_10(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_44){return JsonToInt(x_44);}),x_21),MakePair(MakePair(JsonToString(JsonMember("type",x_31)),JsonToString(JsonMember("key",x_31))),x_15)));}else if (x_3607=="insert_value"){return insert_value_x_11(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_45){return JsonToInt(x_45);}),x_21),MakePair(MakePair(JsonToString(JsonMember("type",x_31)),JsonToString(JsonMember("key",x_31))),MakePair(JsonToValue(JsonMember("value",x_31)),x_15))));}else if (x_3607=="layout_remove"){return remove_layout_node_x_8(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_46){return JsonToInt(x_46);}),x_22),x_15));}else if (x_3607=="layout_add"){return add_layout_node_x_6(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_47){return JsonToInt(x_47);}),x_22),MakePair(json_to_layout_node_x_2(JsonMember("node",x_31)),x_15)));}else if (x_3607=="layout_replace"){return replace_layout_node_x_49(MakePair(MakePair(ListMap(JsonToList(JsonMember("path",x_31)),[&](const auto&x_48){return JsonToInt(x_48);}),x_22),json_to_layout_node_x_2(JsonMember("node",x_31))));}else if (x_3607=="layout_info_changed"){return OutputChangeMetric(x_15,1);}else {return Panic();}});PrintEndline("INCREMENTAL EVAL OK!");MakeUnit();return MakeUnit();});});}