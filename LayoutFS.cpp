auto var_modified_x_997(const auto &x_999) { return MakeUnit(); }
auto eval_expr_x_994(const auto &x_1006) {
  if ((x_1006.prev == nullptr) && not((*(x_1006.prev)).var_line_break)) {
    return max(x_1006.var_height_external, (*(x_1006.prev)).var_line_height);
  } else {
    return x_1006.var_height_external;
  }
}
auto var_modified_x_992(const auto &x_1023) { return MakeUnit(); }
auto eval_expr_x_989(const auto &x_1026) {
  if (eq(x_1026.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1026.var_height_internal;
  }
}
auto var_modified_x_987(const auto &x_1035) { return MakeUnit(); }
auto eval_expr_x_984(const auto &x_1038) {
  if (x_1038.var_intrinsic_height_is_height) {
    return x_1038.var_intrinsic_height_internal;
  } else {
    if ((x_1038.parent == nullptr) && (*(x_1038.parent)).var_is_flex_column) {
      return plus(x_1038.var_intrinsic_height_internal, mult(x_1038.var_flex_amount, (*(x_1038.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1038.var_height_expr, "%")) {
        return mult(x_1038.var_box_height, divide(string_to_float(strip_suffix(x_1038.var_height_expr, "%")), 100.));
      } else {
        if (eq(x_1038.var_height_expr, "fit-content")) {
          return max(x_1038.var_box_height, x_1038.var_intrinsic_height_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_982(const auto &x_1091) { return MakeUnit(); }
auto eval_expr_x_979(const auto &x_1099) {
  if (x_1099.prev == nullptr) {
    if (x_1099.var_line_break || (*(x_1099.prev)).var_line_break) {
      return plus((*(x_1099.prev)).var_y, (*(x_1099.prev)).var_line_height);
    } else {
      return (*(x_1099.prev)).var_y;
    }
  } else {
    if (x_1099.parent == nullptr) {
      return (*(x_1099.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_977(const auto &x_1124) { return MakeUnit(); }
auto eval_expr_x_974(const auto &x_1128) {
  if (eq(x_1128.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1128.var_width_internal;
  }
}
auto var_modified_x_972(const auto &x_1137) { return MakeUnit(); }
auto eval_expr_x_969(const auto &x_1140) {
  if (x_1140.var_intrinsic_width_is_width) {
    return x_1140.var_intrinsic_width_internal;
  } else {
    if ((x_1140.parent == nullptr) && (*(x_1140.parent)).var_is_flex_row) {
      return plus(x_1140.var_intrinsic_width_internal, mult(x_1140.var_flex_amount, (*(x_1140.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1140.var_width_expr, "%")) {
        return mult(x_1140.var_box_width, divide(string_to_float(strip_suffix(x_1140.var_width_expr, "%")), 100.));
      } else {
        if (eq(x_1140.var_width_expr, "fit-content")) {
          return max(x_1140.var_box_width, x_1140.var_intrinsic_width_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_967(const auto &x_1193) { return MakeUnit(); }
auto eval_expr_x_964(const auto &x_1198) {
  if (x_1198.prev == nullptr) {
    if (x_1198.var_line_break || (*(x_1198.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_1198.prev)).var_x, (*(x_1198.prev)).var_width_external);
    }
  } else {
    if (x_1198.parent == nullptr) {
      return (*(x_1198.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_962(const auto &x_1219) { return MakeUnit(); }
auto eval_expr_x_959(const auto &x_1222) {
  if (gt(x_1222.var_left_over, 0.)) {
    return divide(x_1222.var_left_over, x_1222.var_flex_grow_sum);
  } else {
    return divide(x_1222.var_left_over, x_1222.var_flex_shrink_sum);
  }
}
auto var_modified_x_957(const auto &x_1243) { return MakeUnit(); }
auto eval_expr_x_954(const auto &x_1246) {
  if ((x_1246.parent == nullptr) && gt((*(x_1246.parent)).var_left_over, 0.)) {
    return x_1246.var_flex_grow;
  } else {
    return x_1246.var_flex_shrink;
  }
}
auto var_modified_x_952(const auto &x_1259) { return MakeUnit(); }
auto eval_expr_x_949(const auto &x_1264) {
  if (x_1264.var_is_flex_row) {
    return minus(x_1264.var_box_width,
                 (IsSome(ListLast(x_1264.children))) ? (UnSome(ListLast(x_1264.children)).var_intrinsic_width_sum)
                                                     : (0.));
  } else {
    return minus(x_1264.var_box_height,
                 (IsSome(ListLast(x_1264.children))) ? (UnSome(ListLast(x_1264.children)).var_intrinsic_height_sum)
                                                     : (0.));
  }
}
auto var_modified_x_947(const auto &x_1285) { return MakeUnit(); }
auto eval_expr_x_944(const auto &x_1289) {
  if (x_1289.parent == nullptr) {
    return (*(x_1289.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_942(const auto &x_1294) { return MakeUnit(); }
auto eval_expr_x_939(const auto &x_1298) {
  if (x_1298.parent == nullptr) {
    return (*(x_1298.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_935(const auto &x_1303) { return MakeUnit(); }
auto eval_expr_x_932(const auto &x_1321) {
  if (eq(x_1321.var_display, "none")) {
    return false;
  } else {
    if (eq(x_1321.var_position, "absolute")) {
      return false;
    } else {
      if ((x_1321.parent == nullptr) &&
          (eq((*(x_1321.parent)).var_display, "flex") || eq((*(x_1321.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_1321.var_display, "block")) {
          return true;
        } else {
          if (eq(x_1321.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_1321.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_1321.var_display, "flex")) {
                if (eq(HashtblForceFind(x_1321.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_1321.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    if (eq(HashtblForceFind(x_1321.prop, "flex-direction"), "column-reverse")) {
                      return true;
                    } else {
                      return Panic();
                    }
                  }
                }
              } else {
                if (eq(x_1321.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_1321.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_1321.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_1321.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_1321.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_1321.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_1321.var_display, "list-item")) {
                              return true;
                            } else {
                              if (eq(x_1321.var_display, "grid")) {
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
auto var_modified_x_930(const auto &x_1398) { return MakeUnit(); }
auto eval_expr_x_927(const auto &x_1400) {
  return ((not(x_1400.parent == nullptr) || (*(x_1400.parent)).var_visible) &&
          (neq(x_1400.var_display, "none") && (not(x_1400.var_inside_svg) && not(x_1400.var_disabled))));
}
auto var_modified_x_925(const auto &x_1417) { return MakeUnit(); }
auto eval_expr_x_922(const auto &x_1425) {
  if (eq(x_1425.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_1425.parent == nullptr) && (*(x_1425.parent)).var_disabled);
  }
}
auto var_modified_x_920(const auto &x_1430) { return MakeUnit(); }
auto eval_expr_x_917(const auto &x_1438) {
  return ((x_1438.parent == nullptr) && ((*(x_1438.parent)).var_is_svg_block || (*(x_1438.parent)).var_inside_svg));
}
auto var_modified_x_915(const auto &x_1447) { return MakeUnit(); }
auto eval_expr_x_912(const auto &x_1449) { return eq(x_1449.name, "svg"); }
auto var_modified_x_910(const auto &x_1450) { return MakeUnit(); }
auto eval_expr_x_907(const auto &x_1459) { return neq(x_1459.var_height_attr_expr, "auto"); }
auto var_modified_x_905(const auto &x_1464) { return MakeUnit(); }
auto eval_expr_x_902(const auto &x_1472) {
  if (not(IsSome(HashtblFind(x_1472.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1472.attr, "height")) ||
        has_suffix(HashtblForceFind(x_1472.attr, "height"), "%")) {
      return HashtblForceFind(x_1472.attr, "height");
    } else {
      if (eq(HashtblForceFind(x_1472.attr, "height"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_900(const auto &x_1483) { return MakeUnit(); }
auto eval_expr_x_897(const auto &x_1493) { return neq(x_1493.var_width_attr_expr, "auto"); }
auto var_modified_x_895(const auto &x_1498) { return MakeUnit(); }
auto eval_expr_x_892(const auto &x_1506) {
  if (not(IsSome(HashtblFind(x_1506.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1506.attr, "width")) ||
        has_suffix(HashtblForceFind(x_1506.attr, "width"), "%")) {
      return HashtblForceFind(x_1506.attr, "width");
    } else {
      if (eq(HashtblForceFind(x_1506.attr, "width"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_890(const auto &x_1517) { return MakeUnit(); }
auto eval_expr_x_887(const auto &x_1520) {
  if ((x_1520.parent == nullptr) &&
      (eq((*(x_1520.parent)).var_display, "flex") || eq((*(x_1520.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1520.parent)).var_flex_direction, "column") ||
        eq((*(x_1520.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      if (eq((*(x_1520.parent)).var_flex_direction, "row")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_885(const auto &x_1545) { return MakeUnit(); }
auto eval_expr_x_882(const auto &x_1549) {
  if ((x_1549.parent == nullptr) &&
      (eq((*(x_1549.parent)).var_display, "flex") || eq((*(x_1549.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1549.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      if (eq((*(x_1549.parent)).var_flex_direction, "column") ||
          eq((*(x_1549.parent)).var_flex_direction, "column-reverse")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_880(const auto &x_1574) { return MakeUnit(); }
auto eval_expr_x_877(const auto &x_1581) {
  if (IsSome(HashtblFind(x_1581.prop, "flex-direction"))) {
    return HashtblForceFind(x_1581.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_875(const auto &x_1584) { return MakeUnit(); }
auto eval_expr_x_872(const auto &x_1589) {
  return plus((x_1589.prev == nullptr) ? ((*(x_1589.prev)).var_flex_shrink_sum) : (0.), x_1589.var_flex_shrink);
}
auto var_modified_x_870(const auto &x_1598) { return MakeUnit(); }
auto eval_expr_x_867(const auto &x_1603) {
  return plus((x_1603.prev == nullptr) ? ((*(x_1603.prev)).var_flex_grow_sum) : (0.), x_1603.var_flex_grow);
}
auto var_modified_x_865(const auto &x_1612) { return MakeUnit(); }
auto eval_expr_x_862(const auto &x_1615) {
  if (IsSome(HashtblFind(x_1615.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_1615.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_860(const auto &x_1618) { return MakeUnit(); }
auto eval_expr_x_857(const auto &x_1621) {
  if (IsSome(HashtblFind(x_1621.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_1621.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_855(const auto &x_1624) { return MakeUnit(); }
auto eval_expr_x_852(const auto &x_1630) {
  if (IsSome(HashtblFind(x_1630.prop, "position"))) {
    return HashtblForceFind(x_1630.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_850(const auto &x_1633) { return MakeUnit(); }
auto eval_expr_x_847(const auto &x_1659) {
  if (IsSome(HashtblFind(x_1659.prop, "display"))) {
    return HashtblForceFind(x_1659.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_843(const auto &x_1662) { return MakeUnit(); }
auto eval_expr_x_840(const auto &x_1672) {
  if (x_1672.prev == nullptr) {
    if (x_1672.var_line_break) {
      return plus((*(x_1672.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_1672.prev)).var_intrinsic_current_line_height, x_1672.var_intrinsic_height_external));
    } else {
      return (*(x_1672.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1672.var_line_break) {
      return x_1672.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_838(const auto &x_1701) { return MakeUnit(); }
auto eval_expr_x_835(const auto &x_1711) {
  if (x_1711.var_line_break) {
    return 0.;
  } else {
    return max(x_1711.var_intrinsic_height_external,
               (x_1711.prev == nullptr) ? ((*(x_1711.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_833(const auto &x_1724) { return MakeUnit(); }
auto eval_expr_x_830(const auto &x_1731) {
  return plus((x_1731.prev == nullptr) ? ((*(x_1731.prev)).var_intrinsic_height_sum) : (0.),
              x_1731.var_intrinsic_height_external);
}
auto var_modified_x_828(const auto &x_1740) { return MakeUnit(); }
auto eval_expr_x_825(const auto &x_1745) {
  if (eq(x_1745.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1745.var_intrinsic_height_internal;
  }
}
auto var_modified_x_823(const auto &x_1754) { return MakeUnit(); }
auto eval_expr_x_820(const auto &x_1759) {
  if (eq(x_1759.var_display, "none")) {
    return 0.;
  } else {
    if (x_1759.var_inside_svg) {
      return 0.;
    } else {
      if (x_1759.var_disabled) {
        return 0.;
      } else {
        if (neq(x_1759.var_height_expr, "auto") &&
            (not(has_suffix(x_1759.var_height_expr, "%")) && neq(x_1759.var_height_expr, "fit-content"))) {
          if (has_suffix(x_1759.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_1759.var_height_expr, "px"));
          } else {
            if (has_suffix(x_1759.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_1759.var_height_expr, "ch"));
            } else {
              if (has_suffix(x_1759.var_height_expr, "lh")) {
                return string_to_float(strip_suffix(x_1759.var_height_expr, "lh"));
              } else {
                return Panic();
              }
            }
          }
        } else {
          return plus(
              x_1759.var_children_intrinsic_height,
              (eq(x_1759.name, "#text"))
                  ? ((IsSome(ListHead(x_1759.children))) ? (Panic()) : (10.))
                  : ((x_1759.var_is_default_case)
                         ? (0.)
                         : ((eq(x_1759.name, "BR"))
                                ? ((IsSome(ListHead(x_1759.children))) ? (Panic()) : (0.))
                                : ((eq(x_1759.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_1759.name, "svg"))
                                              ? ((x_1759.var_has_height_attr &&
                                                  string_is_float(x_1759.var_height_attr_expr))
                                                     ? (string_to_float(x_1759.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_1759.attr, "viewBox")))
                                                            ? (string_to_float(
                                                                  nth_by_sep(HashtblForceFind(x_1759.attr, "viewBox"),
                                                                             " ", VInt(3))))
                                                            : ((x_1759.var_has_height_attr &&
                                                                (has_suffix(x_1759.var_height_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_1759.attr, "viewBox"))))
                                                                   ? (mult(
                                                                         string_to_float(nth_by_sep(
                                                                             HashtblForceFind(x_1759.attr, "viewBox"),
                                                                             " ", VInt(3))),
                                                                         divide(string_to_float(strip_suffix(
                                                                                    x_1759.var_height_attr_expr, "%")),
                                                                                100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_1759.name, "IMG"))
                                                     ? ((x_1759.var_has_height_attr)
                                                            ? (string_to_float(x_1759.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_1759.attr, "image_height")) &&
                                                                not(x_1759.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_1759.attr, "image_height")))
                                                                   : ((x_1759.var_has_width_attr &&
                                                                       (not(x_1759.var_has_height_attr) &&
                                                                        (IsSome(
                                                                             HashtblFind(x_1759.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_1759.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_1759.attr,
                                                                                                   "image_width"),
                                                                                  VInt(0)))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_1759.var_width_attr_expr),
                                                                                       divide(int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_1759.attr,
                                                                                                      "image_height")),
                                                                                              int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_1759.attr,
                                                                                                      "image_width")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_1759.name, "IFRAME"))
                                                            ? ((x_1759.var_has_height_attr) ? (Panic()) : (150.))
                                                            : ((eq(x_1759.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_1759.name, "VIDEO"))
                                                                          ? ((x_1759.var_has_height_attr) ? (Panic())
                                                                                                          : (150.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_818(const auto &x_1904) { return MakeUnit(); }
auto eval_expr_x_815(const auto &x_1906) {
  if (eq(x_1906.var_display, "none") || (x_1906.var_inside_svg || x_1906.var_disabled)) {
    return true;
  } else {
    if ((x_1906.parent == nullptr) && (*(x_1906.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1906.var_height_expr, "auto") ||
          (has_suffix(x_1906.var_height_expr, "px") ||
           (has_suffix(x_1906.var_height_expr, "ch") ||
            (has_suffix(x_1906.var_height_expr, "lh") || eq(x_1906.var_height_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_1906.var_height_expr, "%") || eq(x_1906.var_height_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_813(const auto &x_1955) { return MakeUnit(); }
auto eval_expr_x_810(const auto &x_1975) {
  if (IsSome(HashtblFind(x_1975.prop, "height"))) {
    return HashtblForceFind(x_1975.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_808(const auto &x_1978) { return MakeUnit(); }
auto eval_expr_x_805(const auto &x_1980) {
  if (IsSome(ListLast(x_1980.children))) {
    return plus(UnSome(ListLast(x_1980.children)).var_finished_intrinsic_height_sum,
                UnSome(ListLast(x_1980.children)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_803(const auto &x_1989) { return MakeUnit(); }
auto eval_expr_x_800(const auto &x_1996) {
  return plus((x_1996.prev == nullptr) ? ((*(x_1996.prev)).var_intrinsic_width_sum) : (0.),
              x_1996.var_intrinsic_width_external);
}
auto var_modified_x_798(const auto &x_2005) { return MakeUnit(); }
auto eval_expr_x_795(const auto &x_2012) {
  return max(x_2012.var_intrinsic_current_line_width,
             (x_2012.prev == nullptr) ? ((*(x_2012.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_793(const auto &x_2021) { return MakeUnit(); }
auto eval_expr_x_790(const auto &x_2026) {
  return plus(x_2026.var_intrinsic_width_external,
              ((x_2026.prev == nullptr) && not((*(x_2026.prev)).var_line_break))
                  ? ((*(x_2026.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_788(const auto &x_2039) { return MakeUnit(); }
auto eval_expr_x_785(const auto &x_2042) {
  if (eq(x_2042.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2042.var_intrinsic_width_internal;
  }
}
auto var_modified_x_783(const auto &x_2051) { return MakeUnit(); }
auto eval_expr_x_780(const auto &x_2056) {
  if (eq(x_2056.var_display, "none")) {
    return 0.;
  } else {
    if (x_2056.var_inside_svg) {
      return 0.;
    } else {
      if (x_2056.var_disabled) {
        return 0.;
      } else {
        if (neq(x_2056.var_width_expr, "auto") &&
            (not(has_suffix(x_2056.var_width_expr, "%")) &&
             (neq(x_2056.var_width_expr, "fit-content") &&
              (neq(x_2056.var_width_expr, "max-content") && not(has_prefix(x_2056.var_width_expr, "calc")))))) {
          if (has_suffix(x_2056.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_2056.var_width_expr, "px"));
          } else {
            if (has_suffix(x_2056.var_width_expr, "ch")) {
              return string_to_float(strip_suffix(x_2056.var_width_expr, "ch"));
            } else {
              return Panic();
            }
          }
        } else {
          return plus(
              x_2056.var_children_intrinsic_width,
              (eq(x_2056.name, "#text"))
                  ? ((IsSome(ListHead(x_2056.children))) ? (Panic()) : (100.))
                  : ((x_2056.var_is_default_case)
                         ? (0.)
                         : ((eq(x_2056.name, "BR"))
                                ? ((IsSome(ListHead(x_2056.children))) ? (Panic()) : (0.))
                                : ((eq(x_2056.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_2056.name, "svg"))
                                              ? ((x_2056.var_has_width_attr &&
                                                  string_is_float(x_2056.var_width_attr_expr))
                                                     ? (string_to_float(x_2056.var_width_attr_expr))
                                                     : ((not(x_2056.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_2056.attr, "viewBox")))
                                                            ? (string_to_float(
                                                                  nth_by_sep(HashtblForceFind(x_2056.attr, "viewBox"),
                                                                             " ", VInt(2))))
                                                            : ((x_2056.var_has_width_attr &&
                                                                (has_suffix(x_2056.var_width_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_2056.attr, "viewBox"))))
                                                                   ? (mult(string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_2056.attr, "viewBox"),
                                                                               " ", VInt(2))),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_2056.var_width_attr_expr, "%")),
                                                                                  100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_2056.name, "IMG"))
                                                     ? ((x_2056.var_has_width_attr)
                                                            ? (string_to_float(x_2056.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_2056.attr, "image_width")) &&
                                                                not(x_2056.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_2056.attr, "image_width")))
                                                                   : ((not(x_2056.var_has_width_attr) &&
                                                                       (x_2056.var_has_height_attr &&
                                                                        (IsSome(
                                                                             HashtblFind(x_2056.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_2056.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_2056.attr,
                                                                                                   "image_height"),
                                                                                  VInt(0)))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_2056.var_height_attr_expr),
                                                                                       divide(
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_2056.attr,
                                                                                                   "image_width")),
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_2056.attr,
                                                                                                   "image_height")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_2056.name, "IFRAME"))
                                                            ? ((x_2056.var_has_width_attr) ? (Panic()) : (300.))
                                                            : ((eq(x_2056.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_2056.name, "VIDEO"))
                                                                          ? ((x_2056.var_has_width_attr) ? (Panic())
                                                                                                         : (300.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_778(const auto &x_2209) { return MakeUnit(); }
auto eval_expr_x_775(const auto &x_2211) {
  if (IsSome(ListLast(x_2211.children))) {
    return UnSome(ListLast(x_2211.children)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_773(const auto &x_2216) { return MakeUnit(); }
auto eval_expr_x_770(const auto &x_2218) {
  if (eq(x_2218.var_display, "none") || (x_2218.var_inside_svg || x_2218.var_disabled)) {
    return true;
  } else {
    if ((x_2218.parent == nullptr) && (*(x_2218.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2218.var_width_expr, "auto") ||
          (has_suffix(x_2218.var_width_expr, "px") ||
           (has_suffix(x_2218.var_width_expr, "ch") ||
            (has_prefix(x_2218.var_width_expr, "calc(") || eq(x_2218.var_width_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_2218.var_width_expr, "%") || eq(x_2218.var_width_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_768(const auto &x_2267) { return MakeUnit(); }
auto eval_expr_x_765(const auto &x_2270) {
  if (eq(x_2270.var_display, "none")) {
    return true;
  } else {
    if (x_2270.var_inside_svg) {
      return true;
    } else {
      if (x_2270.var_disabled) {
        return true;
      } else {if ( eq(x_2270.name,"#document") || (eq(x_2270.name,"#shadow-root") || (eq(x_2270.name,"DIV") || (eq(x_2270.name,"HTML") || (eq(x_2270.name,"BODY") || (eq(x_2270.name,"BUTTON") || (eq(x_2270.name,"FOOTER") || (eq(x_2270.name,"SELECT") || (eq(x_2270.name,"SECTION") || (eq(x_2270.name,"FORM") || (eq(x_2270.name,"CENTER") || (eq(x_2270.name,"TD") || (eq(x_2270.name,"TR") || (eq(x_2270.name,"TBODY") || (eq(x_2270.name,"TABLE") || (eq(x_2270.name,"SPAN") || (eq(x_2270.name,"FONT") || (eq(x_2270.name,"A") || (eq(x_2270.name,"ARTICLE") || (eq(x_2270.name,"P") || (eq(x_2270.name,"U") || (eq(x_2270.name,"UL") || (eq(x_2270.name,"B") || (eq(x_2270.name,"H1") || (eq(x_2270.name,"H2") || (eq(x_2270.name,"H3") || (eq(x_2270.name,"H4") || (eq(x_2270.name,"DT") || (eq(x_2270.name,"DD") || (eq(x_2270.name,"DL") || (eq(x_2270.name,"LI") || (eq(x_2270.name,"LABEL") || (eq(x_2270.name,"OL") || (eq(x_2270.name,"NAV") || (eq(x_2270.name,"HEADER") || (eq(x_2270.name,"HEAD") || (eq(x_2270.name,"SOURCE") || (eq(x_2270.name,"PICTURE") || (eq(x_2270.name,"FIGURE") || (eq(x_2270.name,"FIGCAPTION") || (eq(x_2270.name,"MAIN") || (eq(x_2270.name,"REACT-PARTIAL") || (eq(x_2270.name,"QUERY-BUILDER") || (eq(x_2270.name,"MODAL-DIALOG") || (eq(x_2270.name,"SCROLLABLE-REGION") || (eq(x_2270.name,"DIALOG-HELPER") || (eq(x_2270.name,"AUTO-CHECK") || (eq(x_2270.name,"TOOL-TIP") || (eq(x_2270.name,"CUSTOM-SCOPES") || (eq(x_2270.name,"QBSEARCH-INPUT") || (eq(x_2270.name,"INCLUDE-FRAGMENT") || (eq(x_2270.name,"COOKIE-CONSENT-LINK") || (eq(x_2270.name,"FULLSTORY-CAPTURE") || (eq(x_2270.name,"GHCC-CONSENT") || (eq(x_2270.name,"GLOBAL-BANNER") || (eq(x_2270.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_2270.name,"CARD-SKEW") || (eq(x_2270.name,"EM") || (eq(x_2270.name,"ASIDE") || (eq(x_2270.name,"AUDIO") || (eq(x_2270.name,"SUP") || (eq(x_2270.name,"TIME") || (eq(x_2270.name,"ABBR") || (eq(x_2270.name,"SMALL") || (eq(x_2270.name,"SLOT") || eq(x_2270.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          if (eq(x_2270.name, "#text") ||
              (eq(x_2270.name, "svg") ||
               (eq(x_2270.name, "IFRAME") ||
                (eq(x_2270.name, "INPUT") ||
                 (eq(x_2270.name, "VIDEO") ||
                  (eq(x_2270.name, "BR") || (eq(x_2270.name, "IMG") || eq(x_2270.name, "TEXTAREA")))))))) {
            return false;
          } else {
            return Panic();
          }
        }
      }
    }
  }
}
auto var_modified_x_763(const auto &x_2283) { return MakeUnit(); }
auto eval_expr_x_760(const auto &x_2303) {
  if (IsSome(HashtblFind(x_2303.prop, "width"))) {
    return HashtblForceFind(x_2303.prop, "width");
  } else {
    return "auto";
  }
}
auto var_modified_x_756(const auto &x_2306) { return MakeUnit(); }
auto eval_expr_x_753(const auto &x_2313) {
  if ((x_2313.prev == nullptr) && not((*(x_2313.prev)).var_line_break)) {
    return max(x_2313.var_height_external, (*(x_2313.prev)).var_line_height);
  } else {
    return x_2313.var_height_external;
  }
}
auto var_modified_x_751(const auto &x_2330) { return MakeUnit(); }
auto eval_expr_x_748(const auto &x_2333) {
  if (eq(x_2333.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2333.var_height_internal;
  }
}
auto var_modified_x_746(const auto &x_2342) { return MakeUnit(); }
auto eval_expr_x_743(const auto &x_2345) {
  if (x_2345.var_intrinsic_height_is_height) {
    return x_2345.var_intrinsic_height_internal;
  } else {
    if ((x_2345.parent == nullptr) && (*(x_2345.parent)).var_is_flex_column) {
      return plus(x_2345.var_intrinsic_height_internal, mult(x_2345.var_flex_amount, (*(x_2345.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2345.var_height_expr, "%")) {
        return mult(x_2345.var_box_height, divide(string_to_float(strip_suffix(x_2345.var_height_expr, "%")), 100.));
      } else {
        if (eq(x_2345.var_height_expr, "fit-content")) {
          return max(x_2345.var_box_height, x_2345.var_intrinsic_height_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_741(const auto &x_2398) { return MakeUnit(); }
auto eval_expr_x_738(const auto &x_2406) {
  if (x_2406.prev == nullptr) {
    if (x_2406.var_line_break || (*(x_2406.prev)).var_line_break) {
      return plus((*(x_2406.prev)).var_y, (*(x_2406.prev)).var_line_height);
    } else {
      return (*(x_2406.prev)).var_y;
    }
  } else {
    if (x_2406.parent == nullptr) {
      return (*(x_2406.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_736(const auto &x_2431) { return MakeUnit(); }
auto eval_expr_x_733(const auto &x_2435) {
  if (eq(x_2435.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2435.var_width_internal;
  }
}
auto var_modified_x_731(const auto &x_2444) { return MakeUnit(); }
auto eval_expr_x_728(const auto &x_2447) {
  if (x_2447.var_intrinsic_width_is_width) {
    return x_2447.var_intrinsic_width_internal;
  } else {
    if ((x_2447.parent == nullptr) && (*(x_2447.parent)).var_is_flex_row) {
      return plus(x_2447.var_intrinsic_width_internal, mult(x_2447.var_flex_amount, (*(x_2447.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2447.var_width_expr, "%")) {
        return mult(x_2447.var_box_width, divide(string_to_float(strip_suffix(x_2447.var_width_expr, "%")), 100.));
      } else {
        if (eq(x_2447.var_width_expr, "fit-content")) {
          return max(x_2447.var_box_width, x_2447.var_intrinsic_width_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_726(const auto &x_2500) { return MakeUnit(); }
auto eval_expr_x_723(const auto &x_2505) {
  if (x_2505.prev == nullptr) {
    if (x_2505.var_line_break || (*(x_2505.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_2505.prev)).var_x, (*(x_2505.prev)).var_width_external);
    }
  } else {
    if (x_2505.parent == nullptr) {
      return (*(x_2505.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_721(const auto &x_2526) { return MakeUnit(); }
auto eval_expr_x_718(const auto &x_2529) {
  if (gt(x_2529.var_left_over, 0.)) {
    return divide(x_2529.var_left_over, x_2529.var_flex_grow_sum);
  } else {
    return divide(x_2529.var_left_over, x_2529.var_flex_shrink_sum);
  }
}
auto var_modified_x_716(const auto &x_2550) { return MakeUnit(); }
auto eval_expr_x_713(const auto &x_2553) {
  if ((x_2553.parent == nullptr) && gt((*(x_2553.parent)).var_left_over, 0.)) {
    return x_2553.var_flex_grow;
  } else {
    return x_2553.var_flex_shrink;
  }
}
auto var_modified_x_711(const auto &x_2566) { return MakeUnit(); }
auto eval_expr_x_708(const auto &x_2571) {
  if (x_2571.var_is_flex_row) {
    return minus(x_2571.var_box_width,
                 (IsSome(ListLast(x_2571.children))) ? (UnSome(ListLast(x_2571.children)).var_intrinsic_width_sum)
                                                     : (0.));
  } else {
    return minus(x_2571.var_box_height,
                 (IsSome(ListLast(x_2571.children))) ? (UnSome(ListLast(x_2571.children)).var_intrinsic_height_sum)
                                                     : (0.));
  }
}
auto var_modified_x_706(const auto &x_2592) { return MakeUnit(); }
auto eval_expr_x_703(const auto &x_2596) {
  if (x_2596.parent == nullptr) {
    return (*(x_2596.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_701(const auto &x_2601) { return MakeUnit(); }
auto eval_expr_x_698(const auto &x_2605) {
  if (x_2605.parent == nullptr) {
    return (*(x_2605.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_694(const auto &x_2610) { return MakeUnit(); }
auto eval_expr_x_691(const auto &x_2628) {
  if (eq(x_2628.var_display, "none")) {
    return false;
  } else {
    if (eq(x_2628.var_position, "absolute")) {
      return false;
    } else {
      if ((x_2628.parent == nullptr) &&
          (eq((*(x_2628.parent)).var_display, "flex") || eq((*(x_2628.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_2628.var_display, "block")) {
          return true;
        } else {
          if (eq(x_2628.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_2628.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_2628.var_display, "flex")) {
                if (eq(HashtblForceFind(x_2628.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_2628.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    if (eq(HashtblForceFind(x_2628.prop, "flex-direction"), "column-reverse")) {
                      return true;
                    } else {
                      return Panic();
                    }
                  }
                }
              } else {
                if (eq(x_2628.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_2628.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_2628.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_2628.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_2628.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_2628.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_2628.var_display, "list-item")) {
                              return true;
                            } else {
                              if (eq(x_2628.var_display, "grid")) {
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
auto var_modified_x_689(const auto &x_2705) { return MakeUnit(); }
auto eval_expr_x_686(const auto &x_2707) {
  return ((not(x_2707.parent == nullptr) || (*(x_2707.parent)).var_visible) &&
          (neq(x_2707.var_display, "none") && (not(x_2707.var_inside_svg) && not(x_2707.var_disabled))));
}
auto var_modified_x_684(const auto &x_2724) { return MakeUnit(); }
auto eval_expr_x_681(const auto &x_2732) {
  if (eq(x_2732.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_2732.parent == nullptr) && (*(x_2732.parent)).var_disabled);
  }
}
auto var_modified_x_679(const auto &x_2737) { return MakeUnit(); }
auto eval_expr_x_676(const auto &x_2745) {
  return ((x_2745.parent == nullptr) && ((*(x_2745.parent)).var_is_svg_block || (*(x_2745.parent)).var_inside_svg));
}
auto var_modified_x_674(const auto &x_2754) { return MakeUnit(); }
auto eval_expr_x_671(const auto &x_2756) { return eq(x_2756.name, "svg"); }
auto var_modified_x_669(const auto &x_2757) { return MakeUnit(); }
auto eval_expr_x_666(const auto &x_2766) { return neq(x_2766.var_height_attr_expr, "auto"); }
auto var_modified_x_664(const auto &x_2771) { return MakeUnit(); }
auto eval_expr_x_661(const auto &x_2779) {
  if (not(IsSome(HashtblFind(x_2779.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2779.attr, "height")) ||
        has_suffix(HashtblForceFind(x_2779.attr, "height"), "%")) {
      return HashtblForceFind(x_2779.attr, "height");
    } else {
      if (eq(HashtblForceFind(x_2779.attr, "height"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_659(const auto &x_2790) { return MakeUnit(); }
auto eval_expr_x_656(const auto &x_2800) { return neq(x_2800.var_width_attr_expr, "auto"); }
auto var_modified_x_654(const auto &x_2805) { return MakeUnit(); }
auto eval_expr_x_651(const auto &x_2813) {
  if (not(IsSome(HashtblFind(x_2813.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2813.attr, "width")) ||
        has_suffix(HashtblForceFind(x_2813.attr, "width"), "%")) {
      return HashtblForceFind(x_2813.attr, "width");
    } else {
      if (eq(HashtblForceFind(x_2813.attr, "width"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_649(const auto &x_2824) { return MakeUnit(); }
auto eval_expr_x_646(const auto &x_2827) {
  if ((x_2827.parent == nullptr) &&
      (eq((*(x_2827.parent)).var_display, "flex") || eq((*(x_2827.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2827.parent)).var_flex_direction, "column") ||
        eq((*(x_2827.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      if (eq((*(x_2827.parent)).var_flex_direction, "row")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_644(const auto &x_2852) { return MakeUnit(); }
auto eval_expr_x_641(const auto &x_2856) {
  if ((x_2856.parent == nullptr) &&
      (eq((*(x_2856.parent)).var_display, "flex") || eq((*(x_2856.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2856.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      if (eq((*(x_2856.parent)).var_flex_direction, "column") ||
          eq((*(x_2856.parent)).var_flex_direction, "column-reverse")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_639(const auto &x_2881) { return MakeUnit(); }
auto eval_expr_x_636(const auto &x_2888) {
  if (IsSome(HashtblFind(x_2888.prop, "flex-direction"))) {
    return HashtblForceFind(x_2888.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_634(const auto &x_2891) { return MakeUnit(); }
auto eval_expr_x_631(const auto &x_2896) {
  return plus((x_2896.prev == nullptr) ? ((*(x_2896.prev)).var_flex_shrink_sum) : (0.), x_2896.var_flex_shrink);
}
auto var_modified_x_629(const auto &x_2905) { return MakeUnit(); }
auto eval_expr_x_626(const auto &x_2910) {
  return plus((x_2910.prev == nullptr) ? ((*(x_2910.prev)).var_flex_grow_sum) : (0.), x_2910.var_flex_grow);
}
auto var_modified_x_624(const auto &x_2919) { return MakeUnit(); }
auto eval_expr_x_621(const auto &x_2922) {
  if (IsSome(HashtblFind(x_2922.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_2922.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_619(const auto &x_2925) { return MakeUnit(); }
auto eval_expr_x_616(const auto &x_2928) {
  if (IsSome(HashtblFind(x_2928.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_2928.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_614(const auto &x_2931) { return MakeUnit(); }
auto eval_expr_x_611(const auto &x_2937) {
  if (IsSome(HashtblFind(x_2937.prop, "position"))) {
    return HashtblForceFind(x_2937.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_609(const auto &x_2940) { return MakeUnit(); }
auto eval_expr_x_606(const auto &x_2966) {
  if (IsSome(HashtblFind(x_2966.prop, "display"))) {
    return HashtblForceFind(x_2966.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_602(const auto &x_2969) { return MakeUnit(); }
auto eval_expr_x_599(const auto &x_2979) {
  if (x_2979.prev == nullptr) {
    if (x_2979.var_line_break) {
      return plus((*(x_2979.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_2979.prev)).var_intrinsic_current_line_height, x_2979.var_intrinsic_height_external));
    } else {
      return (*(x_2979.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2979.var_line_break) {
      return x_2979.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_597(const auto &x_3008) { return MakeUnit(); }
auto eval_expr_x_594(const auto &x_3018) {
  if (x_3018.var_line_break) {
    return 0.;
  } else {
    return max(x_3018.var_intrinsic_height_external,
               (x_3018.prev == nullptr) ? ((*(x_3018.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_592(const auto &x_3031) { return MakeUnit(); }
auto eval_expr_x_589(const auto &x_3038) {
  return plus((x_3038.prev == nullptr) ? ((*(x_3038.prev)).var_intrinsic_height_sum) : (0.),
              x_3038.var_intrinsic_height_external);
}
auto var_modified_x_587(const auto &x_3047) { return MakeUnit(); }
auto eval_expr_x_584(const auto &x_3052) {
  if (eq(x_3052.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3052.var_intrinsic_height_internal;
  }
}
auto var_modified_x_582(const auto &x_3061) { return MakeUnit(); }
auto eval_expr_x_579(const auto &x_3066) {
  if (eq(x_3066.var_display, "none")) {
    return 0.;
  } else {
    if (x_3066.var_inside_svg) {
      return 0.;
    } else {
      if (x_3066.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3066.var_height_expr, "auto") &&
            (not(has_suffix(x_3066.var_height_expr, "%")) && neq(x_3066.var_height_expr, "fit-content"))) {
          if (has_suffix(x_3066.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_3066.var_height_expr, "px"));
          } else {
            if (has_suffix(x_3066.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_3066.var_height_expr, "ch"));
            } else {
              if (has_suffix(x_3066.var_height_expr, "lh")) {
                return string_to_float(strip_suffix(x_3066.var_height_expr, "lh"));
              } else {
                return Panic();
              }
            }
          }
        } else {
          return plus(
              x_3066.var_children_intrinsic_height,
              (eq(x_3066.name, "#text"))
                  ? ((IsSome(ListHead(x_3066.children))) ? (Panic()) : (10.))
                  : ((x_3066.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3066.name, "BR"))
                                ? ((IsSome(ListHead(x_3066.children))) ? (Panic()) : (0.))
                                : ((eq(x_3066.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_3066.name, "svg"))
                                              ? ((x_3066.var_has_height_attr &&
                                                  string_is_float(x_3066.var_height_attr_expr))
                                                     ? (string_to_float(x_3066.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_3066.attr, "viewBox")))
                                                            ? (string_to_float(
                                                                  nth_by_sep(HashtblForceFind(x_3066.attr, "viewBox"),
                                                                             " ", VInt(3))))
                                                            : ((x_3066.var_has_height_attr &&
                                                                (has_suffix(x_3066.var_height_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_3066.attr, "viewBox"))))
                                                                   ? (mult(
                                                                         string_to_float(nth_by_sep(
                                                                             HashtblForceFind(x_3066.attr, "viewBox"),
                                                                             " ", VInt(3))),
                                                                         divide(string_to_float(strip_suffix(
                                                                                    x_3066.var_height_attr_expr, "%")),
                                                                                100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_3066.name, "IMG"))
                                                     ? ((x_3066.var_has_height_attr)
                                                            ? (string_to_float(x_3066.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3066.attr, "image_height")) &&
                                                                not(x_3066.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3066.attr, "image_height")))
                                                                   : ((x_3066.var_has_width_attr &&
                                                                       (not(x_3066.var_has_height_attr) &&
                                                                        (IsSome(
                                                                             HashtblFind(x_3066.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_3066.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_3066.attr,
                                                                                                   "image_width"),
                                                                                  VInt(0)))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_3066.var_width_attr_expr),
                                                                                       divide(int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_3066.attr,
                                                                                                      "image_height")),
                                                                                              int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_3066.attr,
                                                                                                      "image_width")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_3066.name, "IFRAME"))
                                                            ? ((x_3066.var_has_height_attr) ? (Panic()) : (150.))
                                                            : ((eq(x_3066.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_3066.name, "VIDEO"))
                                                                          ? ((x_3066.var_has_height_attr) ? (Panic())
                                                                                                          : (150.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_577(const auto &x_3211) { return MakeUnit(); }
auto eval_expr_x_574(const auto &x_3213) {
  if (eq(x_3213.var_display, "none") || (x_3213.var_inside_svg || x_3213.var_disabled)) {
    return true;
  } else {
    if ((x_3213.parent == nullptr) && (*(x_3213.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3213.var_height_expr, "auto") ||
          (has_suffix(x_3213.var_height_expr, "px") ||
           (has_suffix(x_3213.var_height_expr, "ch") ||
            (has_suffix(x_3213.var_height_expr, "lh") || eq(x_3213.var_height_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_3213.var_height_expr, "%") || eq(x_3213.var_height_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_572(const auto &x_3262) { return MakeUnit(); }
auto eval_expr_x_569(const auto &x_3282) {
  if (IsSome(HashtblFind(x_3282.prop, "height"))) {
    return HashtblForceFind(x_3282.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_567(const auto &x_3285) { return MakeUnit(); }
auto eval_expr_x_564(const auto &x_3287) {
  if (IsSome(ListLast(x_3287.children))) {
    return plus(UnSome(ListLast(x_3287.children)).var_finished_intrinsic_height_sum,
                UnSome(ListLast(x_3287.children)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_562(const auto &x_3296) { return MakeUnit(); }
auto eval_expr_x_559(const auto &x_3303) {
  return plus((x_3303.prev == nullptr) ? ((*(x_3303.prev)).var_intrinsic_width_sum) : (0.),
              x_3303.var_intrinsic_width_external);
}
auto var_modified_x_557(const auto &x_3312) { return MakeUnit(); }
auto eval_expr_x_554(const auto &x_3319) {
  return max(x_3319.var_intrinsic_current_line_width,
             (x_3319.prev == nullptr) ? ((*(x_3319.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_552(const auto &x_3328) { return MakeUnit(); }
auto eval_expr_x_549(const auto &x_3333) {
  return plus(x_3333.var_intrinsic_width_external,
              ((x_3333.prev == nullptr) && not((*(x_3333.prev)).var_line_break))
                  ? ((*(x_3333.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_547(const auto &x_3346) { return MakeUnit(); }
auto eval_expr_x_544(const auto &x_3349) {
  if (eq(x_3349.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3349.var_intrinsic_width_internal;
  }
}
auto var_modified_x_542(const auto &x_3358) { return MakeUnit(); }
auto eval_expr_x_539(const auto &x_3363) {
  if (eq(x_3363.var_display, "none")) {
    return 0.;
  } else {
    if (x_3363.var_inside_svg) {
      return 0.;
    } else {
      if (x_3363.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3363.var_width_expr, "auto") &&
            (not(has_suffix(x_3363.var_width_expr, "%")) &&
             (neq(x_3363.var_width_expr, "fit-content") &&
              (neq(x_3363.var_width_expr, "max-content") && not(has_prefix(x_3363.var_width_expr, "calc")))))) {
          if (has_suffix(x_3363.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_3363.var_width_expr, "px"));
          } else {
            if (has_suffix(x_3363.var_width_expr, "ch")) {
              return string_to_float(strip_suffix(x_3363.var_width_expr, "ch"));
            } else {
              return Panic();
            }
          }
        } else {
          return plus(
              x_3363.var_children_intrinsic_width,
              (eq(x_3363.name, "#text"))
                  ? ((IsSome(ListHead(x_3363.children))) ? (Panic()) : (100.))
                  : ((x_3363.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3363.name, "BR"))
                                ? ((IsSome(ListHead(x_3363.children))) ? (Panic()) : (0.))
                                : ((eq(x_3363.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_3363.name, "svg"))
                                              ? ((x_3363.var_has_width_attr &&
                                                  string_is_float(x_3363.var_width_attr_expr))
                                                     ? (string_to_float(x_3363.var_width_attr_expr))
                                                     : ((not(x_3363.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_3363.attr, "viewBox")))
                                                            ? (string_to_float(
                                                                  nth_by_sep(HashtblForceFind(x_3363.attr, "viewBox"),
                                                                             " ", VInt(2))))
                                                            : ((x_3363.var_has_width_attr &&
                                                                (has_suffix(x_3363.var_width_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_3363.attr, "viewBox"))))
                                                                   ? (mult(string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_3363.attr, "viewBox"),
                                                                               " ", VInt(2))),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_3363.var_width_attr_expr, "%")),
                                                                                  100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_3363.name, "IMG"))
                                                     ? ((x_3363.var_has_width_attr)
                                                            ? (string_to_float(x_3363.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3363.attr, "image_width")) &&
                                                                not(x_3363.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3363.attr, "image_width")))
                                                                   : ((not(x_3363.var_has_width_attr) &&
                                                                       (x_3363.var_has_height_attr &&
                                                                        (IsSome(
                                                                             HashtblFind(x_3363.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_3363.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_3363.attr,
                                                                                                   "image_height"),
                                                                                  VInt(0)))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_3363.var_height_attr_expr),
                                                                                       divide(
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_3363.attr,
                                                                                                   "image_width")),
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_3363.attr,
                                                                                                   "image_height")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_3363.name, "IFRAME"))
                                                            ? ((x_3363.var_has_width_attr) ? (Panic()) : (300.))
                                                            : ((eq(x_3363.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_3363.name, "VIDEO"))
                                                                          ? ((x_3363.var_has_width_attr) ? (Panic())
                                                                                                         : (300.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_537(const auto &x_3516) { return MakeUnit(); }
auto eval_expr_x_534(const auto &x_3518) {
  if (IsSome(ListLast(x_3518.children))) {
    return UnSome(ListLast(x_3518.children)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_532(const auto &x_3523) { return MakeUnit(); }
auto eval_expr_x_529(const auto &x_3525) {
  if (eq(x_3525.var_display, "none") || (x_3525.var_inside_svg || x_3525.var_disabled)) {
    return true;
  } else {
    if ((x_3525.parent == nullptr) && (*(x_3525.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3525.var_width_expr, "auto") ||
          (has_suffix(x_3525.var_width_expr, "px") ||
           (has_suffix(x_3525.var_width_expr, "ch") ||
            (has_prefix(x_3525.var_width_expr, "calc(") || eq(x_3525.var_width_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_3525.var_width_expr, "%") || eq(x_3525.var_width_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_527(const auto &x_3574) { return MakeUnit(); }
auto eval_expr_x_524(const auto &x_3577) {
  if (eq(x_3577.var_display, "none")) {
    return true;
  } else {
    if (x_3577.var_inside_svg) {
      return true;
    } else {
      if (x_3577.var_disabled) {
        return true;
      } else {if ( eq(x_3577.name,"#document") || (eq(x_3577.name,"#shadow-root") || (eq(x_3577.name,"DIV") || (eq(x_3577.name,"HTML") || (eq(x_3577.name,"BODY") || (eq(x_3577.name,"BUTTON") || (eq(x_3577.name,"FOOTER") || (eq(x_3577.name,"SELECT") || (eq(x_3577.name,"SECTION") || (eq(x_3577.name,"FORM") || (eq(x_3577.name,"CENTER") || (eq(x_3577.name,"TD") || (eq(x_3577.name,"TR") || (eq(x_3577.name,"TBODY") || (eq(x_3577.name,"TABLE") || (eq(x_3577.name,"SPAN") || (eq(x_3577.name,"FONT") || (eq(x_3577.name,"A") || (eq(x_3577.name,"ARTICLE") || (eq(x_3577.name,"P") || (eq(x_3577.name,"U") || (eq(x_3577.name,"UL") || (eq(x_3577.name,"B") || (eq(x_3577.name,"H1") || (eq(x_3577.name,"H2") || (eq(x_3577.name,"H3") || (eq(x_3577.name,"H4") || (eq(x_3577.name,"DT") || (eq(x_3577.name,"DD") || (eq(x_3577.name,"DL") || (eq(x_3577.name,"LI") || (eq(x_3577.name,"LABEL") || (eq(x_3577.name,"OL") || (eq(x_3577.name,"NAV") || (eq(x_3577.name,"HEADER") || (eq(x_3577.name,"HEAD") || (eq(x_3577.name,"SOURCE") || (eq(x_3577.name,"PICTURE") || (eq(x_3577.name,"FIGURE") || (eq(x_3577.name,"FIGCAPTION") || (eq(x_3577.name,"MAIN") || (eq(x_3577.name,"REACT-PARTIAL") || (eq(x_3577.name,"QUERY-BUILDER") || (eq(x_3577.name,"MODAL-DIALOG") || (eq(x_3577.name,"SCROLLABLE-REGION") || (eq(x_3577.name,"DIALOG-HELPER") || (eq(x_3577.name,"AUTO-CHECK") || (eq(x_3577.name,"TOOL-TIP") || (eq(x_3577.name,"CUSTOM-SCOPES") || (eq(x_3577.name,"QBSEARCH-INPUT") || (eq(x_3577.name,"INCLUDE-FRAGMENT") || (eq(x_3577.name,"COOKIE-CONSENT-LINK") || (eq(x_3577.name,"FULLSTORY-CAPTURE") || (eq(x_3577.name,"GHCC-CONSENT") || (eq(x_3577.name,"GLOBAL-BANNER") || (eq(x_3577.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_3577.name,"CARD-SKEW") || (eq(x_3577.name,"EM") || (eq(x_3577.name,"ASIDE") || (eq(x_3577.name,"AUDIO") || (eq(x_3577.name,"SUP") || (eq(x_3577.name,"TIME") || (eq(x_3577.name,"ABBR") || (eq(x_3577.name,"SMALL") || (eq(x_3577.name,"SLOT") || eq(x_3577.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          if (eq(x_3577.name, "#text") ||
              (eq(x_3577.name, "svg") ||
               (eq(x_3577.name, "IFRAME") ||
                (eq(x_3577.name, "INPUT") ||
                 (eq(x_3577.name, "VIDEO") ||
                  (eq(x_3577.name, "BR") || (eq(x_3577.name, "IMG") || eq(x_3577.name, "TEXTAREA")))))))) {
            return false;
          } else {
            return Panic();
          }
        }
      }
    }
  }
}
auto var_modified_x_522(const auto &x_3590) { return MakeUnit(); }
auto eval_expr_x_519(const auto &x_3610) {
  if (IsSome(HashtblFind(x_3610.prop, "width"))) {
    return HashtblForceFind(x_3610.prop, "width");
  } else {
    return "auto";
  }
}
auto eval_stmts_x_257(const auto &x_517) {
  return [&](const auto &x_518) {
    WriteMetric(x_518);
    auto x_520 = eval_expr_x_519(x_517);
    x_517.var_width_expr = x_520;
    WriteMetric(x_518);
    auto x_525 = eval_expr_x_524(x_517);
    x_517.var_is_default_case = x_525;
    WriteMetric(x_518);
    auto x_530 = eval_expr_x_529(x_517);
    x_517.var_intrinsic_width_is_width = x_530;
    WriteMetric(x_518);
    auto x_535 = eval_expr_x_534(x_517);
    x_517.var_children_intrinsic_width = x_535;
    WriteMetric(x_518);
    auto x_540 = eval_expr_x_539(x_517);
    x_517.var_intrinsic_width_internal = x_540;
    WriteMetric(x_518);
    auto x_545 = eval_expr_x_544(x_517);
    x_517.var_intrinsic_width_external = x_545;
    WriteMetric(x_518);
    auto x_550 = eval_expr_x_549(x_517);
    x_517.var_intrinsic_current_line_width = x_550;
    WriteMetric(x_518);
    auto x_555 = eval_expr_x_554(x_517);
    x_517.var_intrinsic_width_max = x_555;
    WriteMetric(x_518);
    auto x_560 = eval_expr_x_559(x_517);
    x_517.var_intrinsic_width_sum = x_560;
    WriteMetric(x_518);
    auto x_565 = eval_expr_x_564(x_517);
    x_517.var_children_intrinsic_height = x_565;
    WriteMetric(x_518);
    auto x_570 = eval_expr_x_569(x_517);
    x_517.var_height_expr = x_570;
    WriteMetric(x_518);
    auto x_575 = eval_expr_x_574(x_517);
    x_517.var_intrinsic_height_is_height = x_575;
    WriteMetric(x_518);
    auto x_580 = eval_expr_x_579(x_517);
    x_517.var_intrinsic_height_internal = x_580;
    WriteMetric(x_518);
    auto x_585 = eval_expr_x_584(x_517);
    x_517.var_intrinsic_height_external = x_585;
    WriteMetric(x_518);
    auto x_590 = eval_expr_x_589(x_517);
    x_517.var_intrinsic_height_sum = x_590;
    WriteMetric(x_518);
    auto x_595 = eval_expr_x_594(x_517);
    x_517.var_intrinsic_current_line_height = x_595;
    WriteMetric(x_518);
    auto x_600 = eval_expr_x_599(x_517);
    x_517.var_finished_intrinsic_height_sum = x_600;
    return MakeUnit();
  };
}
auto eval_stmts_x_255(const auto &x_604) {
  return [&](const auto &x_605) {
    WriteMetric(x_605);
    auto x_607 = eval_expr_x_606(x_604);
    x_604.var_display = x_607;
    WriteMetric(x_605);
    auto x_612 = eval_expr_x_611(x_604);
    x_604.var_position = x_612;
    WriteMetric(x_605);
    auto x_617 = eval_expr_x_616(x_604);
    x_604.var_flex_grow = x_617;
    WriteMetric(x_605);
    auto x_622 = eval_expr_x_621(x_604);
    x_604.var_flex_shrink = x_622;
    WriteMetric(x_605);
    auto x_627 = eval_expr_x_626(x_604);
    x_604.var_flex_grow_sum = x_627;
    WriteMetric(x_605);
    auto x_632 = eval_expr_x_631(x_604);
    x_604.var_flex_shrink_sum = x_632;
    WriteMetric(x_605);
    auto x_637 = eval_expr_x_636(x_604);
    x_604.var_flex_direction = x_637;
    WriteMetric(x_605);
    auto x_642 = eval_expr_x_641(x_604);
    x_604.var_is_flex_row = x_642;
    WriteMetric(x_605);
    auto x_647 = eval_expr_x_646(x_604);
    x_604.var_is_flex_column = x_647;
    WriteMetric(x_605);
    auto x_652 = eval_expr_x_651(x_604);
    x_604.var_width_attr_expr = x_652;
    WriteMetric(x_605);
    auto x_657 = eval_expr_x_656(x_604);
    x_604.var_has_width_attr = x_657;
    WriteMetric(x_605);
    auto x_662 = eval_expr_x_661(x_604);
    x_604.var_height_attr_expr = x_662;
    WriteMetric(x_605);
    auto x_667 = eval_expr_x_666(x_604);
    x_604.var_has_height_attr = x_667;
    WriteMetric(x_605);
    auto x_672 = eval_expr_x_671(x_604);
    x_604.var_is_svg_block = x_672;
    WriteMetric(x_605);
    auto x_677 = eval_expr_x_676(x_604);
    x_604.var_inside_svg = x_677;
    WriteMetric(x_605);
    auto x_682 = eval_expr_x_681(x_604);
    x_604.var_disabled = x_682;
    WriteMetric(x_605);
    auto x_687 = eval_expr_x_686(x_604);
    x_604.var_visible = x_687;
    WriteMetric(x_605);
    auto x_692 = eval_expr_x_691(x_604);
    x_604.var_line_break = x_692;
    return MakeUnit();
  };
}
auto eval_stmts_x_251(const auto &x_696) {
  return [&](const auto &x_697) {
    WriteMetric(x_697);
    auto x_699 = eval_expr_x_698(x_696);
    x_696.var_box_width = x_699;
    WriteMetric(x_697);
    auto x_704 = eval_expr_x_703(x_696);
    x_696.var_box_height = x_704;
    WriteMetric(x_697);
    auto x_709 = eval_expr_x_708(x_696);
    x_696.var_left_over = x_709;
    WriteMetric(x_697);
    auto x_714 = eval_expr_x_713(x_696);
    x_696.var_flex_amount = x_714;
    WriteMetric(x_697);
    auto x_719 = eval_expr_x_718(x_696);
    x_696.var_flex_unit = x_719;
    WriteMetric(x_697);
    auto x_724 = eval_expr_x_723(x_696);
    x_696.var_x = x_724;
    WriteMetric(x_697);
    auto x_729 = eval_expr_x_728(x_696);
    x_696.var_width_internal = x_729;
    WriteMetric(x_697);
    auto x_734 = eval_expr_x_733(x_696);
    x_696.var_width_external = x_734;
    WriteMetric(x_697);
    auto x_739 = eval_expr_x_738(x_696);
    x_696.var_y = x_739;
    WriteMetric(x_697);
    auto x_744 = eval_expr_x_743(x_696);
    x_696.var_height_internal = x_744;
    WriteMetric(x_697);
    auto x_749 = eval_expr_x_748(x_696);
    x_696.var_height_external = x_749;
    WriteMetric(x_697);
    auto x_754 = eval_expr_x_753(x_696);
    x_696.var_line_height = x_754;
    return MakeUnit();
  };
}
auto eval_stmts_x_242(const auto &x_758) {
  return [&](const auto &x_759) {
    WriteMetric(x_759);
    auto x_761 = eval_expr_x_760(x_758);
    x_758.var_width_expr = x_761;
    WriteMetric(x_759);
    auto x_766 = eval_expr_x_765(x_758);
    x_758.var_is_default_case = x_766;
    WriteMetric(x_759);
    auto x_771 = eval_expr_x_770(x_758);
    x_758.var_intrinsic_width_is_width = x_771;
    WriteMetric(x_759);
    auto x_776 = eval_expr_x_775(x_758);
    x_758.var_children_intrinsic_width = x_776;
    WriteMetric(x_759);
    auto x_781 = eval_expr_x_780(x_758);
    x_758.var_intrinsic_width_internal = x_781;
    WriteMetric(x_759);
    auto x_786 = eval_expr_x_785(x_758);
    x_758.var_intrinsic_width_external = x_786;
    WriteMetric(x_759);
    auto x_791 = eval_expr_x_790(x_758);
    x_758.var_intrinsic_current_line_width = x_791;
    WriteMetric(x_759);
    auto x_796 = eval_expr_x_795(x_758);
    x_758.var_intrinsic_width_max = x_796;
    WriteMetric(x_759);
    auto x_801 = eval_expr_x_800(x_758);
    x_758.var_intrinsic_width_sum = x_801;
    WriteMetric(x_759);
    auto x_806 = eval_expr_x_805(x_758);
    x_758.var_children_intrinsic_height = x_806;
    WriteMetric(x_759);
    auto x_811 = eval_expr_x_810(x_758);
    x_758.var_height_expr = x_811;
    WriteMetric(x_759);
    auto x_816 = eval_expr_x_815(x_758);
    x_758.var_intrinsic_height_is_height = x_816;
    WriteMetric(x_759);
    auto x_821 = eval_expr_x_820(x_758);
    x_758.var_intrinsic_height_internal = x_821;
    WriteMetric(x_759);
    auto x_826 = eval_expr_x_825(x_758);
    x_758.var_intrinsic_height_external = x_826;
    WriteMetric(x_759);
    auto x_831 = eval_expr_x_830(x_758);
    x_758.var_intrinsic_height_sum = x_831;
    WriteMetric(x_759);
    auto x_836 = eval_expr_x_835(x_758);
    x_758.var_intrinsic_current_line_height = x_836;
    WriteMetric(x_759);
    auto x_841 = eval_expr_x_840(x_758);
    x_758.var_finished_intrinsic_height_sum = x_841;
    return MakeUnit();
  };
}
auto eval_stmts_x_240(const auto &x_845) {
  return [&](const auto &x_846) {
    WriteMetric(x_846);
    auto x_848 = eval_expr_x_847(x_845);
    x_845.var_display = x_848;
    WriteMetric(x_846);
    auto x_853 = eval_expr_x_852(x_845);
    x_845.var_position = x_853;
    WriteMetric(x_846);
    auto x_858 = eval_expr_x_857(x_845);
    x_845.var_flex_grow = x_858;
    WriteMetric(x_846);
    auto x_863 = eval_expr_x_862(x_845);
    x_845.var_flex_shrink = x_863;
    WriteMetric(x_846);
    auto x_868 = eval_expr_x_867(x_845);
    x_845.var_flex_grow_sum = x_868;
    WriteMetric(x_846);
    auto x_873 = eval_expr_x_872(x_845);
    x_845.var_flex_shrink_sum = x_873;
    WriteMetric(x_846);
    auto x_878 = eval_expr_x_877(x_845);
    x_845.var_flex_direction = x_878;
    WriteMetric(x_846);
    auto x_883 = eval_expr_x_882(x_845);
    x_845.var_is_flex_row = x_883;
    WriteMetric(x_846);
    auto x_888 = eval_expr_x_887(x_845);
    x_845.var_is_flex_column = x_888;
    WriteMetric(x_846);
    auto x_893 = eval_expr_x_892(x_845);
    x_845.var_width_attr_expr = x_893;
    WriteMetric(x_846);
    auto x_898 = eval_expr_x_897(x_845);
    x_845.var_has_width_attr = x_898;
    WriteMetric(x_846);
    auto x_903 = eval_expr_x_902(x_845);
    x_845.var_height_attr_expr = x_903;
    WriteMetric(x_846);
    auto x_908 = eval_expr_x_907(x_845);
    x_845.var_has_height_attr = x_908;
    WriteMetric(x_846);
    auto x_913 = eval_expr_x_912(x_845);
    x_845.var_is_svg_block = x_913;
    WriteMetric(x_846);
    auto x_918 = eval_expr_x_917(x_845);
    x_845.var_inside_svg = x_918;
    WriteMetric(x_846);
    auto x_923 = eval_expr_x_922(x_845);
    x_845.var_disabled = x_923;
    WriteMetric(x_846);
    auto x_928 = eval_expr_x_927(x_845);
    x_845.var_visible = x_928;
    WriteMetric(x_846);
    auto x_933 = eval_expr_x_932(x_845);
    x_845.var_line_break = x_933;
    return MakeUnit();
  };
}
auto eval_stmts_x_236(const auto &x_937) {
  return [&](const auto &x_938) {
    WriteMetric(x_938);
    auto x_940 = eval_expr_x_939(x_937);
    x_937.var_box_width = x_940;
    WriteMetric(x_938);
    auto x_945 = eval_expr_x_944(x_937);
    x_937.var_box_height = x_945;
    WriteMetric(x_938);
    auto x_950 = eval_expr_x_949(x_937);
    x_937.var_left_over = x_950;
    WriteMetric(x_938);
    auto x_955 = eval_expr_x_954(x_937);
    x_937.var_flex_amount = x_955;
    WriteMetric(x_938);
    auto x_960 = eval_expr_x_959(x_937);
    x_937.var_flex_unit = x_960;
    WriteMetric(x_938);
    auto x_965 = eval_expr_x_964(x_937);
    x_937.var_x = x_965;
    WriteMetric(x_938);
    auto x_970 = eval_expr_x_969(x_937);
    x_937.var_width_internal = x_970;
    WriteMetric(x_938);
    auto x_975 = eval_expr_x_974(x_937);
    x_937.var_width_external = x_975;
    WriteMetric(x_938);
    auto x_980 = eval_expr_x_979(x_937);
    x_937.var_y = x_980;
    WriteMetric(x_938);
    auto x_985 = eval_expr_x_984(x_937);
    x_937.var_height_internal = x_985;
    WriteMetric(x_938);
    auto x_990 = eval_expr_x_989(x_937);
    x_937.var_height_external = x_990;
    WriteMetric(x_938);
    auto x_995 = eval_expr_x_994(x_937);
    x_937.var_line_height = x_995;
    return MakeUnit();
  };
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
  auto x_68 = Fst(x_65);
  return ListMatch(
      x_67, [&](const auto &x_215) { return Panic(); },
      [&](const auto &x_69) {
        return [&](const auto &x_70) {
          return ListMatch(
              x_70,
              [&](const auto &x_73) {
                InputChangeMetric(x_15, IntAdd(node_size_x_4(ListNthExn(x_68.children, x_69)), node_size_x_4(x_66)));
                auto x_74 = ListSplitN(x_68.children, x_69);
                auto x_75 = Zro(x_74);
                auto x_76 = Fst(x_74);
                ListMatch(
                    x_76, [&](const auto &x_145) { return Panic(); },
                    [&](const auto &x_77) {
                      return [&](const auto &x_78) {
                        x_68.children = ListAppend(x_75, x_78);
                        return MakeUnit();
                      };
                    });
                auto x_146 = ListSplitN(x_68.children, x_69);
                auto x_147 = Zro(x_146);
                auto x_148 = Fst(x_146);
                x_68.children = ListAppend(x_147, Cons(x_66, x_148));
                x_66.parent = Some(x_68);
                MakeUnit();
                return MakeUnit();
              },
              [&](const auto &x_71) {
                return [&](const auto &x_72) {
                  return x_63(MakePair(MakePair(x_70, ListNthExn(x_68.children, x_69)), x_66));
                };
              });
        };
      });
}
auto replace_node_x_42(const auto &x_64) { return x_63(x_64); }
auto x_216(const auto &x_217) {
  return OptionIter(ListLast(x_217.children), [&](const auto &x_221) {
    x_221.parent = Some(x_217);
    return x_216(x_221);
  });
}
auto set_children_relation_x_40(const auto &x_217) { return x_216(x_217); }
auto x_222(const auto &x_223) {
  return OptionIter(ListLast(x_223.children), [&](const auto &x_227) {
    x_227.parent = Some(x_223);
    return x_222(x_227);
  });
}
auto set_children_relation_x_36(const auto &x_223) { return x_222(x_223); }
auto x_228(const auto &x_229) {
  return OptionIter(ListLast(x_229.children), [&](const auto &x_233) {
    x_233.parent = Some(x_229);
    return x_228(x_233);
  });
}
auto set_children_relation_x_33(const auto &x_229) { return x_228(x_229); }
auto eval_stmts_x_29(const auto &x_234) {
  return [&](const auto &x_235) { return MakeUnit(); };
}
auto eval_stmts_x_28(const auto &x_238) {
  return [&](const auto &x_239) { return MakeUnit(); };
}
auto x_243(const auto &x_244) {
  return OptionIter(ListLast(x_244.children), [&](const auto &x_248) {
    x_248.parent = Some(x_244);
    return x_243(x_248);
  });
}
auto set_children_relation_x_26(const auto &x_244) { return x_243(x_244); }
auto eval_stmts_x_24(const auto &x_249) {
  return [&](const auto &x_250) { return MakeUnit(); };
}
auto eval_stmts_x_23(const auto &x_253) {
  return [&](const auto &x_254) { return MakeUnit(); };
}
auto x_258(const auto &x_259) {
  return OptionIter(ListLast(x_259.children), [&](const auto &x_263) {
    x_263.parent = Some(x_259);
    return x_258(x_263);
  });
}
auto set_children_relation_x_20(const auto &x_259) { return x_258(x_259); }
auto x_264(const auto &x_265) {
  auto x_266 = Zro(x_265);
  auto x_267 = Fst(x_265);
  auto x_268 = Zro(x_266);
  auto x_269 = Fst(x_266);
  return ListMatch(
      x_268,
      [&](const auto &x_272) {
        auto x_273 = Zro(x_267);
        auto x_274 = Zro(x_273);
        auto x_275 = Fst(x_273);
        auto x_276 = Fst(x_267);
        auto x_277 = Zro(x_276);
        auto x_278 = Fst(x_276);
        InputChangeMetric(x_278, 1);
        std::string x_3613 = x_274;
        if (x_3613 == "attributes") {
          std::string x_3614 = x_275;
          if (x_3614 == "width") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.attr, "width", x_277);
            return MakeUnit();
          } else if (x_3614 == "image_height") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.attr, "image_height", x_277);
            return MakeUnit();
          } else if (x_3614 == "image_width") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.attr, "image_width", x_277);
            return MakeUnit();
          } else if (x_3614 == "height") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.attr, "height", x_277);
            return MakeUnit();
          } else if (x_3614 == "viewBox") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.attr, "viewBox", x_277);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3613 == "properties") {
          std::string x_3615 = x_275;
          if (x_3615 == "width") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.prop, "width", x_277);
            return MakeUnit();
          } else if (x_3615 == "flex-grow") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.prop, "flex-grow", x_277);
            return MakeUnit();
          } else if (x_3615 == "height") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.prop, "height", x_277);
            return MakeUnit();
          } else if (x_3615 == "display") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.prop, "display", x_277);
            return MakeUnit();
          } else if (x_3615 == "position") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.prop, "position", x_277);
            return MakeUnit();
          } else if (x_3615 == "flex-shrink") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.prop, "flex-shrink", x_277);
            return MakeUnit();
          } else if (x_3615 == "flex-direction") {
            WriteMetric(x_278);
            HashtblAddExn(x_269.prop, "flex-direction", x_277);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_270) {
        return [&](const auto &x_271) {
          return x_264(MakePair(MakePair(x_271, ListNthExn(x_269.children, x_270)), x_267));
        };
      });
}
auto insert_value_x_11(const auto &x_265) { return x_264(x_265); }
auto x_279(const auto &x_280) {
  auto x_281 = Zro(x_280);
  auto x_282 = Fst(x_280);
  auto x_283 = Zro(x_281);
  auto x_284 = Fst(x_281);
  return ListMatch(
      x_283,
      [&](const auto &x_287) {
        auto x_288 = Zro(x_282);
        auto x_289 = Zro(x_288);
        auto x_290 = Fst(x_288);
        auto x_291 = Fst(x_282);
        InputChangeMetric(x_291, 1);
        std::string x_3616 = x_289;
        if (x_3616 == "attributes") {
          std::string x_3617 = x_290;
          if (x_3617 == "width") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.attr, "width");
            return MakeUnit();
          } else if (x_3617 == "image_height") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.attr, "image_height");
            return MakeUnit();
          } else if (x_3617 == "image_width") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.attr, "image_width");
            return MakeUnit();
          } else if (x_3617 == "height") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.attr, "height");
            return MakeUnit();
          } else if (x_3617 == "viewBox") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.attr, "viewBox");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3616 == "properties") {
          std::string x_3618 = x_290;
          if (x_3618 == "width") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.prop, "width");
            return MakeUnit();
          } else if (x_3618 == "flex-grow") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.prop, "flex-grow");
            return MakeUnit();
          } else if (x_3618 == "height") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.prop, "height");
            return MakeUnit();
          } else if (x_3618 == "display") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.prop, "display");
            return MakeUnit();
          } else if (x_3618 == "position") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.prop, "position");
            return MakeUnit();
          } else if (x_3618 == "flex-shrink") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.prop, "flex-shrink");
            return MakeUnit();
          } else if (x_3618 == "flex-direction") {
            WriteMetric(x_291);
            HashtblForceRemove(x_284.prop, "flex-direction");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_285) {
        return [&](const auto &x_286) {
          return x_279(MakePair(MakePair(x_286, ListNthExn(x_284.children, x_285)), x_282));
        };
      });
}
auto delete_value_x_10(const auto &x_280) { return x_279(x_280); }
auto x_292(const auto &x_293) {
  auto x_294 = Zro(x_293);
  auto x_295 = Fst(x_293);
  auto x_296 = Zro(x_294);
  auto x_297 = Fst(x_294);
  return ListMatch(
      x_296,
      [&](const auto &x_300) {
        auto x_301 = Zro(x_295);
        auto x_302 = Zro(x_301);
        auto x_303 = Fst(x_301);
        auto x_304 = Fst(x_295);
        auto x_305 = Zro(x_304);
        auto x_306 = Fst(x_304);
        InputChangeMetric(x_306, 1);
        std::string x_3619 = x_302;
        if (x_3619 == "attributes") {
          std::string x_3620 = x_303;
          if (x_3620 == "width") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.attr, "width");
            WriteMetric(x_306);
            HashtblAddExn(x_297.attr, "width", x_305);
            return MakeUnit();
          } else if (x_3620 == "image_height") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.attr, "image_height");
            WriteMetric(x_306);
            HashtblAddExn(x_297.attr, "image_height", x_305);
            return MakeUnit();
          } else if (x_3620 == "image_width") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.attr, "image_width");
            WriteMetric(x_306);
            HashtblAddExn(x_297.attr, "image_width", x_305);
            return MakeUnit();
          } else if (x_3620 == "height") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.attr, "height");
            WriteMetric(x_306);
            HashtblAddExn(x_297.attr, "height", x_305);
            return MakeUnit();
          } else if (x_3620 == "viewBox") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.attr, "viewBox");
            WriteMetric(x_306);
            HashtblAddExn(x_297.attr, "viewBox", x_305);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3619 == "properties") {
          std::string x_3621 = x_303;
          if (x_3621 == "width") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.prop, "width");
            WriteMetric(x_306);
            HashtblAddExn(x_297.prop, "width", x_305);
            return MakeUnit();
          } else if (x_3621 == "flex-grow") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.prop, "flex-grow");
            WriteMetric(x_306);
            HashtblAddExn(x_297.prop, "flex-grow", x_305);
            return MakeUnit();
          } else if (x_3621 == "height") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.prop, "height");
            WriteMetric(x_306);
            HashtblAddExn(x_297.prop, "height", x_305);
            return MakeUnit();
          } else if (x_3621 == "display") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.prop, "display");
            WriteMetric(x_306);
            HashtblAddExn(x_297.prop, "display", x_305);
            return MakeUnit();
          } else if (x_3621 == "position") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.prop, "position");
            WriteMetric(x_306);
            HashtblAddExn(x_297.prop, "position", x_305);
            return MakeUnit();
          } else if (x_3621 == "flex-shrink") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.prop, "flex-shrink");
            WriteMetric(x_306);
            HashtblAddExn(x_297.prop, "flex-shrink", x_305);
            return MakeUnit();
          } else if (x_3621 == "flex-direction") {
            WriteMetric(x_306);
            HashtblForceRemove(x_297.prop, "flex-direction");
            WriteMetric(x_306);
            HashtblAddExn(x_297.prop, "flex-direction", x_305);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_298) {
        return [&](const auto &x_299) {
          return x_292(MakePair(MakePair(x_299, ListNthExn(x_297.children, x_298)), x_295));
        };
      });
}
auto replace_value_x_9(const auto &x_293) { return x_292(x_293); }
auto x_307(const auto &x_308) {
  auto x_309 = Zro(x_308);
  auto x_310 = Fst(x_308);
  auto x_311 = Zro(x_309);
  auto x_312 = Fst(x_309);
  return ListMatch(
      x_311, [&](const auto &x_319) { return Panic(); },
      [&](const auto &x_313) {
        return [&](const auto &x_314) {
          return ListMatch(
              x_314,
              [&](const auto &x_317) {
                OutputChangeMetric(x_310, layout_size_x_3(ListNthExn(x_312.children, x_313)));
                auto x_318 = ListSplitN(x_312.children, x_313);
                x_312.children = ListAppend(Zro(x_318), ListTailExn(Fst(x_318)));
              },
              [&](const auto &x_315) {
                return [&](const auto &x_316) {
                  return x_307(MakePair(MakePair(x_314, ListNthExn(x_312.children, x_313)), x_310));
                };
              });
        };
      });
}
auto remove_layout_node_x_8(const auto &x_308) { return x_307(x_308); }
auto x_320(const auto &x_321) {
  auto x_322 = Zro(x_321);
  auto x_323 = Fst(x_321);
  auto x_324 = Zro(x_322);
  auto x_325 = Fst(x_322);
  return ListMatch(
      x_324, [&](const auto &x_403) { return Panic(); },
      [&](const auto &x_326) {
        return [&](const auto &x_327) {
          return ListMatch(
              x_327,
              [&](const auto &x_330) {
                InputChangeMetric(x_323, node_size_x_4(ListNthExn(x_325.children, x_326)));
                auto x_331 = ListSplitN(x_325.children, x_326);
                auto x_332 = Zro(x_331);
                auto x_333 = Fst(x_331);
                return ListMatch(
                    x_333, [&](const auto &x_402) { return Panic(); },
                    [&](const auto &x_334) {
                      return [&](const auto &x_335) {
                        x_325.children = ListAppend(x_332, x_335);
                        return MakeUnit();
                      };
                    });
              },
              [&](const auto &x_328) {
                return [&](const auto &x_329) {
                  return x_320(MakePair(MakePair(x_327, ListNthExn(x_325.children, x_326)), x_323));
                };
              });
        };
      });
}
auto remove_node_x_7(const auto &x_321) { return x_320(x_321); }
auto x_404(const auto &x_405) {
  auto x_406 = Zro(x_405);
  auto x_407 = Fst(x_405);
  auto x_408 = Zro(x_406);
  auto x_409 = Fst(x_406);
  return ListMatch(
      x_408, [&](const auto &x_418) { return Panic(); },
      [&](const auto &x_410) {
        return [&](const auto &x_411) {
          return ListMatch(
              x_411,
              [&](const auto &x_414) {
                auto x_415 = Zro(x_407);
                auto x_416 = Fst(x_407);
                OutputChangeMetric(x_416, layout_size_x_3(x_415));
                auto x_417 = ListSplitN(x_409.children, x_410);
                x_409.children = ListAppend(Zro(x_417), Cons(x_415, Fst(x_417)));
              },
              [&](const auto &x_412) {
                return [&](const auto &x_413) {
                  return x_404(MakePair(MakePair(x_411, ListNthExn(x_409.children, x_410)), x_407));
                };
              });
        };
      });
}
auto add_layout_node_x_6(const auto &x_405) { return x_404(x_405); }
auto x_419(const auto &x_420) {
  auto x_421 = Zro(x_420);
  auto x_422 = Fst(x_420);
  auto x_423 = Zro(x_421);
  auto x_424 = Fst(x_421);
  return ListMatch(
      x_423, [&](const auto &x_501) { return Panic(); },
      [&](const auto &x_425) {
        return [&](const auto &x_426) {
          return ListMatch(
              x_426,
              [&](const auto &x_429) {
                auto x_430 = Zro(x_422);
                auto x_431 = Fst(x_422);
                InputChangeMetric(x_431, node_size_x_4(x_430));
                auto x_432 = ListSplitN(x_424.children, x_425);
                auto x_433 = Zro(x_432);
                auto x_434 = Fst(x_432);
                x_424.children = ListAppend(x_433, Cons(x_430, x_434));
                x_430.parent = Some(x_424);
                return MakeUnit();
              },
              [&](const auto &x_427) {
                return [&](const auto &x_428) {
                  return x_419(MakePair(MakePair(x_426, ListNthExn(x_424.children, x_425)), x_422));
                };
              });
        };
      });
}
auto add_node_x_5(const auto &x_420) { return x_419(x_420); }
auto x_502(const auto &x_503) {
  return IntAdd(1, ListIntSum(x_503.children, [&](const auto &x_504) { return x_502(x_504); }));
}
auto node_size_x_4(const auto &x_503) { return x_502(x_503); }
auto x_505(const auto &x_506) {
  return IntAdd(1, ListIntSum(x_506.children, [&](const auto &x_507) { return x_505(x_507); }));
}
auto layout_size_x_3(const auto &x_506) { return x_505(x_506); }
auto x_508(const auto &x_509) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_509)), [&](const auto &x_510) { return x_508(x_510); }));
}
auto json_to_layout_node_x_2(const auto &x_509) { return x_508(x_509); }
auto x_511(const auto &x_512) {
  return MakeNode(x_512.name, x_512.attr, x_512.prop, x_512.extern_id,
                  ListMap(x_512.children, [&](const auto &x_513) { return x_511(x_513); }));
}
auto node_to_fs_node_x_1(const auto &x_512) { return x_511(x_512); }
auto x_514(const auto &x_515) {
  return MakeNode(JsonToString(JsonMember("name", x_515)), JsonToDict(JsonMember("attributes", x_515)),
                  JsonToDict(JsonMember("properties", x_515)), JsonToInt(JsonMember("id", x_515)),
                  ListMap(JsonToList(JsonMember("children", x_515)), [&](const auto &x_516) { return x_514(x_516); }));
}
auto json_to_node_aux_x_0(const auto &x_515) { return x_514(x_515); }
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
        x_19.parent = None();
        x_19.prev = None();
        x_19.next = None();
        return x_19;
      }();
      auto x_22 = json_to_layout_node_x_2(JsonMember("node", x_17));
      OutputChangeMetric(x_15, layout_size_x_3(x_22));
      InputChangeMetric(x_15, node_size_x_4(x_21));
      JsonToChannel(
          x_12,
          AssocToJson(Cons(
              MakePair("name", StringToJson("FS")),
              Cons(
                  MakePair("diff_num", IntToJson(ReadRef(x_14))),
                  Cons(MakePair("read_count", IntToJson(MetricReadCount(x_15))),
                       Cons(MakePair("meta_read_count", IntToJson(MetricMetaReadCount(x_15))),
                            Cons(MakePair("write_count", IntToJson(MetricWriteCount(x_15))),
                                 Cons(MakePair("meta_write_count", IntToJson(MetricMetaWriteCount(x_15))),
                                      Cons(MakePair("queue_size_acc", IntToJson(MetricQueueSizeAcc(x_15))),
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
        x_25.parent = None();
        x_25.prev = None();
        x_25.next = None();
        return x_25;
      }();
      AssertNodeValueEqual(x_21, x_27);
      ResetMetric(x_15);
      PrintEndline("EVAL OK!");
      IterLines(x_13, [&](const auto &x_30) {
        auto x_31 = JsonOfString(x_30);
        PushStack(x_18, x_31);
        std::string x_3622 = JsonToString(JsonMember("name", x_31));
        if (x_3622 == "add") {
          return add_node_x_5(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_34) { return JsonToInt(x_34); }),
                       x_21),
              MakePair(
                  [&]() {
                    auto x_32 = json_to_node_aux_x_0(JsonMember("node", x_31));
                    x_32.parent = None();
                    x_32.prev = None();
                    x_32.next = None();
                    return x_32;
                  }(),
                  x_15)));
        } else if (x_3622 == "recalculate") {
          JsonToChannel(
              x_12,
              AssocToJson(Cons(
                  MakePair("name", StringToJson("FS")),
                  Cons(MakePair("diff_num", IntToJson(ReadRef(x_14))),
                       Cons(MakePair("read_count", IntToJson(MetricReadCount(x_15))),
                            Cons(MakePair("meta_read_count", IntToJson(MetricMetaReadCount(x_15))),
                                 Cons(MakePair("write_count", IntToJson(MetricWriteCount(x_15))),
                                      Cons(MakePair("meta_write_count", IntToJson(MetricMetaWriteCount(x_15))),
                                           Cons(MakePair("queue_size_acc", IntToJson(MetricQueueSizeAcc(x_15))),
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
            x_35.parent = None();
            x_35.prev = None();
            x_35.next = None();
            return x_35;
          }();
          AssertNodeValueEqual(x_21, x_37);
          ResetMetric(x_15);
          return MakeUnit();
        } else if (x_3622 == "remove") {
          return remove_node_x_7(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_38) { return JsonToInt(x_38); }),
                       x_21),
              x_15));
        } else if (x_3622 == "replace") {
          return replace_node_x_42(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_41) { return JsonToInt(x_41); }),
                       x_21),
              [&]() {
                auto x_39 = json_to_node_aux_x_0(JsonMember("node", x_31));
                x_39.parent = None();
                x_39.prev = None();
                x_39.next = None();
                return x_39;
              }()));
        } else if (x_3622 == "replace_value") {
          return replace_value_x_9(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_43) { return JsonToInt(x_43); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3622 == "delete_value") {
          return delete_value_x_10(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_44) { return JsonToInt(x_44); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))), x_15)));
        } else if (x_3622 == "insert_value") {
          return insert_value_x_11(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_45) { return JsonToInt(x_45); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3622 == "layout_remove") {
          return remove_layout_node_x_8(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_46) { return JsonToInt(x_46); }),
                       x_22),
              x_15));
        } else if (x_3622 == "layout_add") {
          return add_layout_node_x_6(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_47) { return JsonToInt(x_47); }),
                       x_22),
              MakePair(json_to_layout_node_x_2(JsonMember("node", x_31)), x_15)));
        } else if (x_3622 == "layout_replace") {
          return replace_layout_node_x_49(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_48) { return JsonToInt(x_48); }),
                       x_22),
              json_to_layout_node_x_2(JsonMember("node", x_31))));
        } else if (x_3622 == "layout_info_changed") {
          return OutputChangeMetric(x_15, 1);
        } else {
          return Panic();
        }
      });
      PrintEndline("INCREMENTAL EVAL OK!");
      MakeUnit();
      return MakeUnit();
    });
  });
}