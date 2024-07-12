auto var_modified_x_987(const auto &x_989) { return MakeUnit(); }
auto eval_expr_x_984(const auto &x_996) {
  if ((x_996.prev == nullptr) && not((*(x_996.prev)).var_line_break)) {
    return max(x_996.var_height_external, (*(x_996.prev)).var_line_height);
  } else {
    return x_996.var_height_external;
  }
}
auto var_modified_x_982(const auto &x_1013) { return MakeUnit(); }
auto eval_expr_x_979(const auto &x_1016) {
  if (eq(x_1016.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1016.var_height_internal;
  }
}
auto var_modified_x_977(const auto &x_1025) { return MakeUnit(); }
auto eval_expr_x_974(const auto &x_1028) {
  if (x_1028.var_intrinsic_height_is_height) {
    return x_1028.var_intrinsic_height_internal;
  } else {
    if ((x_1028.parent == nullptr) && (*(x_1028.parent)).var_is_flex_column) {
      return plus(x_1028.var_intrinsic_height_internal, mult(x_1028.var_flex_amount, (*(x_1028.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1028.var_height_expr, "%")) {
        return mult(x_1028.var_box_height, divide(string_to_float(strip_suffix(x_1028.var_height_expr, "%")), 100.));
      } else {
        if (eq(x_1028.var_height_expr, "fit-content")) {
          return max(x_1028.var_box_height, x_1028.var_intrinsic_height_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_972(const auto &x_1081) { return MakeUnit(); }
auto eval_expr_x_969(const auto &x_1089) {
  if (x_1089.prev == nullptr) {
    if (x_1089.var_line_break || (*(x_1089.prev)).var_line_break) {
      return plus((*(x_1089.prev)).var_y, (*(x_1089.prev)).var_line_height);
    } else {
      return (*(x_1089.prev)).var_y;
    }
  } else {
    if (x_1089.parent == nullptr) {
      return (*(x_1089.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_967(const auto &x_1114) { return MakeUnit(); }
auto eval_expr_x_964(const auto &x_1118) {
  if (eq(x_1118.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1118.var_width_internal;
  }
}
auto var_modified_x_962(const auto &x_1127) { return MakeUnit(); }
auto eval_expr_x_959(const auto &x_1130) {
  if (x_1130.var_intrinsic_width_is_width) {
    return x_1130.var_intrinsic_width_internal;
  } else {
    if ((x_1130.parent == nullptr) && (*(x_1130.parent)).var_is_flex_row) {
      return plus(x_1130.var_intrinsic_width_internal, mult(x_1130.var_flex_amount, (*(x_1130.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_1130.var_width_expr, "%")) {
        return mult(x_1130.var_box_width, divide(string_to_float(strip_suffix(x_1130.var_width_expr, "%")), 100.));
      } else {
        if (eq(x_1130.var_width_expr, "fit-content")) {
          return max(x_1130.var_box_width, x_1130.var_intrinsic_width_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_957(const auto &x_1183) { return MakeUnit(); }
auto eval_expr_x_954(const auto &x_1188) {
  if (x_1188.prev == nullptr) {
    if (x_1188.var_line_break || (*(x_1188.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_1188.prev)).var_x, (*(x_1188.prev)).var_width_external);
    }
  } else {
    if (x_1188.parent == nullptr) {
      return (*(x_1188.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_952(const auto &x_1209) { return MakeUnit(); }
auto eval_expr_x_949(const auto &x_1212) {
  if (gt(x_1212.var_left_over, 0.)) {
    return divide(x_1212.var_left_over, x_1212.var_flex_grow_sum);
  } else {
    return divide(x_1212.var_left_over, x_1212.var_flex_shrink_sum);
  }
}
auto var_modified_x_947(const auto &x_1233) { return MakeUnit(); }
auto eval_expr_x_944(const auto &x_1236) {
  if ((x_1236.parent == nullptr) && gt((*(x_1236.parent)).var_left_over, 0.)) {
    return x_1236.var_flex_grow;
  } else {
    return x_1236.var_flex_shrink;
  }
}
auto var_modified_x_942(const auto &x_1249) { return MakeUnit(); }
auto eval_expr_x_939(const auto &x_1254) {
  if (x_1254.var_is_flex_row) {
    return minus(x_1254.var_box_width,
                 (IsSome(ListLast(x_1254.children))) ? (UnSome(ListLast(x_1254.children)).var_intrinsic_width_sum)
                                                     : (0.));
  } else {
    return minus(x_1254.var_box_height,
                 (IsSome(ListLast(x_1254.children))) ? (UnSome(ListLast(x_1254.children)).var_intrinsic_height_sum)
                                                     : (0.));
  }
}
auto var_modified_x_937(const auto &x_1275) { return MakeUnit(); }
auto eval_expr_x_934(const auto &x_1279) {
  if (x_1279.parent == nullptr) {
    return (*(x_1279.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_932(const auto &x_1284) { return MakeUnit(); }
auto eval_expr_x_929(const auto &x_1288) {
  if (x_1288.parent == nullptr) {
    return (*(x_1288.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_926(const auto &x_1293) { return MakeUnit(); }
auto eval_expr_x_923(const auto &x_1311) {
  if (eq(x_1311.var_display, "none")) {
    return false;
  } else {
    if (eq(x_1311.var_position, "absolute")) {
      return false;
    } else {
      if ((x_1311.parent == nullptr) &&
          (eq((*(x_1311.parent)).var_display, "flex") || eq((*(x_1311.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_1311.var_display, "block")) {
          return true;
        } else {
          if (eq(x_1311.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_1311.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_1311.var_display, "flex")) {
                if (eq(HashtblForceFind(x_1311.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_1311.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    if (eq(HashtblForceFind(x_1311.prop, "flex-direction"), "column-reverse")) {
                      return true;
                    } else {
                      return Panic();
                    }
                  }
                }
              } else {
                if (eq(x_1311.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_1311.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_1311.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_1311.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_1311.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_1311.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_1311.var_display, "list-item")) {
                              return true;
                            } else {
                              if (eq(x_1311.var_display, "grid")) {
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
auto var_modified_x_921(const auto &x_1388) { return MakeUnit(); }
auto eval_expr_x_918(const auto &x_1390) {
  return ((not(x_1390.parent == nullptr) || (*(x_1390.parent)).var_visible) &&
          (neq(x_1390.var_display, "none") && (not(x_1390.var_inside_svg) && not(x_1390.var_disabled))));
}
auto var_modified_x_916(const auto &x_1407) { return MakeUnit(); }
auto eval_expr_x_913(const auto &x_1415) {
  if (eq(x_1415.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_1415.parent == nullptr) && (*(x_1415.parent)).var_disabled);
  }
}
auto var_modified_x_911(const auto &x_1420) { return MakeUnit(); }
auto eval_expr_x_908(const auto &x_1428) {
  return ((x_1428.parent == nullptr) && ((*(x_1428.parent)).var_is_svg_block || (*(x_1428.parent)).var_inside_svg));
}
auto var_modified_x_906(const auto &x_1437) { return MakeUnit(); }
auto eval_expr_x_903(const auto &x_1439) { return eq(x_1439.name, "svg"); }
auto var_modified_x_901(const auto &x_1440) { return MakeUnit(); }
auto eval_expr_x_898(const auto &x_1449) { return neq(x_1449.var_height_attr_expr, "auto"); }
auto var_modified_x_896(const auto &x_1454) { return MakeUnit(); }
auto eval_expr_x_893(const auto &x_1462) {
  if (not(IsSome(HashtblFind(x_1462.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1462.attr, "height")) ||
        has_suffix(HashtblForceFind(x_1462.attr, "height"), "%")) {
      return HashtblForceFind(x_1462.attr, "height");
    } else {
      if (eq(HashtblForceFind(x_1462.attr, "height"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_891(const auto &x_1473) { return MakeUnit(); }
auto eval_expr_x_888(const auto &x_1483) { return neq(x_1483.var_width_attr_expr, "auto"); }
auto var_modified_x_886(const auto &x_1488) { return MakeUnit(); }
auto eval_expr_x_883(const auto &x_1496) {
  if (not(IsSome(HashtblFind(x_1496.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_1496.attr, "width")) ||
        has_suffix(HashtblForceFind(x_1496.attr, "width"), "%")) {
      return HashtblForceFind(x_1496.attr, "width");
    } else {
      if (eq(HashtblForceFind(x_1496.attr, "width"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_881(const auto &x_1507) { return MakeUnit(); }
auto eval_expr_x_878(const auto &x_1510) {
  if ((x_1510.parent == nullptr) &&
      (eq((*(x_1510.parent)).var_display, "flex") || eq((*(x_1510.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1510.parent)).var_flex_direction, "column") ||
        eq((*(x_1510.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      if (eq((*(x_1510.parent)).var_flex_direction, "row")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_876(const auto &x_1535) { return MakeUnit(); }
auto eval_expr_x_873(const auto &x_1539) {
  if ((x_1539.parent == nullptr) &&
      (eq((*(x_1539.parent)).var_display, "flex") || eq((*(x_1539.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_1539.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      if (eq((*(x_1539.parent)).var_flex_direction, "column") ||
          eq((*(x_1539.parent)).var_flex_direction, "column-reverse")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_871(const auto &x_1564) { return MakeUnit(); }
auto eval_expr_x_868(const auto &x_1571) {
  if (IsSome(HashtblFind(x_1571.prop, "flex-direction"))) {
    return HashtblForceFind(x_1571.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_866(const auto &x_1574) { return MakeUnit(); }
auto eval_expr_x_863(const auto &x_1579) {
  return plus((x_1579.prev == nullptr) ? ((*(x_1579.prev)).var_flex_shrink_sum) : (0.), x_1579.var_flex_shrink);
}
auto var_modified_x_861(const auto &x_1588) { return MakeUnit(); }
auto eval_expr_x_858(const auto &x_1593) {
  return plus((x_1593.prev == nullptr) ? ((*(x_1593.prev)).var_flex_grow_sum) : (0.), x_1593.var_flex_grow);
}
auto var_modified_x_856(const auto &x_1602) { return MakeUnit(); }
auto eval_expr_x_853(const auto &x_1605) {
  if (IsSome(HashtblFind(x_1605.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_1605.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_851(const auto &x_1608) { return MakeUnit(); }
auto eval_expr_x_848(const auto &x_1611) {
  if (IsSome(HashtblFind(x_1611.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_1611.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_846(const auto &x_1614) { return MakeUnit(); }
auto eval_expr_x_843(const auto &x_1620) {
  if (IsSome(HashtblFind(x_1620.prop, "position"))) {
    return HashtblForceFind(x_1620.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_841(const auto &x_1623) { return MakeUnit(); }
auto eval_expr_x_838(const auto &x_1649) {
  if (IsSome(HashtblFind(x_1649.prop, "display"))) {
    return HashtblForceFind(x_1649.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_835(const auto &x_1652) { return MakeUnit(); }
auto eval_expr_x_832(const auto &x_1662) {
  if (x_1662.prev == nullptr) {
    if (x_1662.var_line_break) {
      return plus((*(x_1662.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_1662.prev)).var_intrinsic_current_line_height, x_1662.var_intrinsic_height_external));
    } else {
      return (*(x_1662.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1662.var_line_break) {
      return x_1662.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_830(const auto &x_1691) { return MakeUnit(); }
auto eval_expr_x_827(const auto &x_1701) {
  if (x_1701.var_line_break) {
    return 0.;
  } else {
    return max(x_1701.var_intrinsic_height_external,
               (x_1701.prev == nullptr) ? ((*(x_1701.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_825(const auto &x_1714) { return MakeUnit(); }
auto eval_expr_x_822(const auto &x_1721) {
  return plus((x_1721.prev == nullptr) ? ((*(x_1721.prev)).var_intrinsic_height_sum) : (0.),
              x_1721.var_intrinsic_height_external);
}
auto var_modified_x_820(const auto &x_1730) { return MakeUnit(); }
auto eval_expr_x_817(const auto &x_1735) {
  if (eq(x_1735.var_position, "absolute")) {
    return 0.;
  } else {
    return x_1735.var_intrinsic_height_internal;
  }
}
auto var_modified_x_815(const auto &x_1744) { return MakeUnit(); }
auto eval_expr_x_812(const auto &x_1749) {
  if (eq(x_1749.var_display, "none")) {
    return 0.;
  } else {
    if (x_1749.var_inside_svg) {
      return 0.;
    } else {
      if (x_1749.var_disabled) {
        return 0.;
      } else {
        if (neq(x_1749.var_height_expr, "auto") &&
            (not(has_suffix(x_1749.var_height_expr, "%")) && neq(x_1749.var_height_expr, "fit-content"))) {
          if (has_suffix(x_1749.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_1749.var_height_expr, "px"));
          } else {
            if (has_suffix(x_1749.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_1749.var_height_expr, "ch"));
            } else {
              if (has_suffix(x_1749.var_height_expr, "lh")) {
                return string_to_float(strip_suffix(x_1749.var_height_expr, "lh"));
              } else {
                return Panic();
              }
            }
          }
        } else {
          return plus(
              x_1749.var_children_intrinsic_height,
              (eq(x_1749.name, "#text"))
                  ? ((IsSome(ListHead(x_1749.children))) ? (Panic()) : (10.))
                  : ((x_1749.var_is_default_case)
                         ? (0.)
                         : ((eq(x_1749.name, "BR"))
                                ? ((IsSome(ListHead(x_1749.children))) ? (Panic()) : (0.))
                                : ((eq(x_1749.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_1749.name, "svg"))
                                              ? ((x_1749.var_has_height_attr &&
                                                  string_is_float(x_1749.var_height_attr_expr))
                                                     ? (string_to_float(x_1749.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_1749.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_1749.attr, "viewBox"), " ", 3)))
                                                            : ((x_1749.var_has_height_attr &&
                                                                (has_suffix(x_1749.var_height_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_1749.attr, "viewBox"))))
                                                                   ? (mult(
                                                                         string_to_float(nth_by_sep(
                                                                             HashtblForceFind(x_1749.attr, "viewBox"),
                                                                             " ", 3)),
                                                                         divide(string_to_float(strip_suffix(
                                                                                    x_1749.var_height_attr_expr, "%")),
                                                                                100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_1749.name, "IMG"))
                                                     ? ((x_1749.var_has_height_attr)
                                                            ? (string_to_float(x_1749.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_1749.attr, "image_height")) &&
                                                                not(x_1749.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_1749.attr, "image_height")))
                                                                   : ((x_1749.var_has_width_attr &&
                                                                       (not(x_1749.var_has_height_attr) &&
                                                                        (IsSome(
                                                                             HashtblFind(x_1749.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_1749.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_1749.attr,
                                                                                                   "image_width"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_1749.var_width_attr_expr),
                                                                                       divide(int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_1749.attr,
                                                                                                      "image_height")),
                                                                                              int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_1749.attr,
                                                                                                      "image_width")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_1749.name, "IFRAME"))
                                                            ? ((x_1749.var_has_height_attr) ? (Panic()) : (150.))
                                                            : ((eq(x_1749.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_1749.name, "VIDEO"))
                                                                          ? ((x_1749.var_has_height_attr) ? (Panic())
                                                                                                          : (150.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_810(const auto &x_1894) { return MakeUnit(); }
auto eval_expr_x_807(const auto &x_1896) {
  if (eq(x_1896.var_display, "none") || (x_1896.var_inside_svg || x_1896.var_disabled)) {
    return true;
  } else {
    if ((x_1896.parent == nullptr) && (*(x_1896.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1896.var_height_expr, "auto") ||
          (has_suffix(x_1896.var_height_expr, "px") ||
           (has_suffix(x_1896.var_height_expr, "ch") ||
            (has_suffix(x_1896.var_height_expr, "lh") || eq(x_1896.var_height_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_1896.var_height_expr, "%") || eq(x_1896.var_height_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_805(const auto &x_1945) { return MakeUnit(); }
auto eval_expr_x_802(const auto &x_1965) {
  if (IsSome(HashtblFind(x_1965.prop, "height"))) {
    return HashtblForceFind(x_1965.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_800(const auto &x_1968) { return MakeUnit(); }
auto eval_expr_x_797(const auto &x_1970) {
  if (IsSome(ListLast(x_1970.children))) {
    return plus(UnSome(ListLast(x_1970.children)).var_finished_intrinsic_height_sum,
                UnSome(ListLast(x_1970.children)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_795(const auto &x_1979) { return MakeUnit(); }
auto eval_expr_x_792(const auto &x_1986) {
  return plus((x_1986.prev == nullptr) ? ((*(x_1986.prev)).var_intrinsic_width_sum) : (0.),
              x_1986.var_intrinsic_width_external);
}
auto var_modified_x_790(const auto &x_1995) { return MakeUnit(); }
auto eval_expr_x_787(const auto &x_2002) {
  return max(x_2002.var_intrinsic_current_line_width,
             (x_2002.prev == nullptr) ? ((*(x_2002.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_785(const auto &x_2011) { return MakeUnit(); }
auto eval_expr_x_782(const auto &x_2016) {
  return plus(x_2016.var_intrinsic_width_external,
              ((x_2016.prev == nullptr) && not((*(x_2016.prev)).var_line_break))
                  ? ((*(x_2016.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_780(const auto &x_2029) { return MakeUnit(); }
auto eval_expr_x_777(const auto &x_2032) {
  if (eq(x_2032.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2032.var_intrinsic_width_internal;
  }
}
auto var_modified_x_775(const auto &x_2041) { return MakeUnit(); }
auto eval_expr_x_772(const auto &x_2046) {
  if (eq(x_2046.var_display, "none")) {
    return 0.;
  } else {
    if (x_2046.var_inside_svg) {
      return 0.;
    } else {
      if (x_2046.var_disabled) {
        return 0.;
      } else {
        if (neq(x_2046.var_width_expr, "auto") &&
            (not(has_suffix(x_2046.var_width_expr, "%")) &&
             (neq(x_2046.var_width_expr, "fit-content") &&
              (neq(x_2046.var_width_expr, "max-content") && not(has_prefix(x_2046.var_width_expr, "calc")))))) {
          if (has_suffix(x_2046.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_2046.var_width_expr, "px"));
          } else {
            if (has_suffix(x_2046.var_width_expr, "ch")) {
              return string_to_float(strip_suffix(x_2046.var_width_expr, "ch"));
            } else {
              return Panic();
            }
          }
        } else {
          return plus(
              x_2046.var_children_intrinsic_width,
              (eq(x_2046.name, "#text"))
                  ? ((IsSome(ListHead(x_2046.children))) ? (Panic()) : (100.))
                  : ((x_2046.var_is_default_case)
                         ? (0.)
                         : ((eq(x_2046.name, "BR"))
                                ? ((IsSome(ListHead(x_2046.children))) ? (Panic()) : (0.))
                                : ((eq(x_2046.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_2046.name, "svg"))
                                              ? ((x_2046.var_has_width_attr &&
                                                  string_is_float(x_2046.var_width_attr_expr))
                                                     ? (string_to_float(x_2046.var_width_attr_expr))
                                                     : ((not(x_2046.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_2046.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_2046.attr, "viewBox"), " ", 2)))
                                                            : ((x_2046.var_has_width_attr &&
                                                                (has_suffix(x_2046.var_width_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_2046.attr, "viewBox"))))
                                                                   ? (mult(string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_2046.attr, "viewBox"),
                                                                               " ", 2)),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_2046.var_width_attr_expr, "%")),
                                                                                  100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_2046.name, "IMG"))
                                                     ? ((x_2046.var_has_width_attr)
                                                            ? (string_to_float(x_2046.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_2046.attr, "image_width")) &&
                                                                not(x_2046.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_2046.attr, "image_width")))
                                                                   : ((not(x_2046.var_has_width_attr) &&
                                                                       (x_2046.var_has_height_attr &&
                                                                        (IsSome(
                                                                             HashtblFind(x_2046.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_2046.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_2046.attr,
                                                                                                   "image_height"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_2046.var_height_attr_expr),
                                                                                       divide(
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_2046.attr,
                                                                                                   "image_width")),
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_2046.attr,
                                                                                                   "image_height")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_2046.name, "IFRAME"))
                                                            ? ((x_2046.var_has_width_attr) ? (Panic()) : (300.))
                                                            : ((eq(x_2046.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_2046.name, "VIDEO"))
                                                                          ? ((x_2046.var_has_width_attr) ? (Panic())
                                                                                                         : (300.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_770(const auto &x_2199) { return MakeUnit(); }
auto eval_expr_x_767(const auto &x_2201) {
  if (IsSome(ListLast(x_2201.children))) {
    return UnSome(ListLast(x_2201.children)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_765(const auto &x_2206) { return MakeUnit(); }
auto eval_expr_x_762(const auto &x_2208) {
  if (eq(x_2208.var_display, "none") || (x_2208.var_inside_svg || x_2208.var_disabled)) {
    return true;
  } else {
    if ((x_2208.parent == nullptr) && (*(x_2208.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2208.var_width_expr, "auto") ||
          (has_suffix(x_2208.var_width_expr, "px") ||
           (has_suffix(x_2208.var_width_expr, "ch") ||
            (has_prefix(x_2208.var_width_expr, "calc(") || eq(x_2208.var_width_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_2208.var_width_expr, "%") || eq(x_2208.var_width_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_760(const auto &x_2257) { return MakeUnit(); }
auto eval_expr_x_757(const auto &x_2260) {
  if (eq(x_2260.var_display, "none")) {
    return true;
  } else {
    if (x_2260.var_inside_svg) {
      return true;
    } else {
      if (x_2260.var_disabled) {
        return true;
      } else {if ( eq(x_2260.name,"#document") || (eq(x_2260.name,"#shadow-root") || (eq(x_2260.name,"DIV") || (eq(x_2260.name,"HTML") || (eq(x_2260.name,"BODY") || (eq(x_2260.name,"BUTTON") || (eq(x_2260.name,"FOOTER") || (eq(x_2260.name,"SELECT") || (eq(x_2260.name,"SECTION") || (eq(x_2260.name,"FORM") || (eq(x_2260.name,"CENTER") || (eq(x_2260.name,"TD") || (eq(x_2260.name,"TR") || (eq(x_2260.name,"TBODY") || (eq(x_2260.name,"TABLE") || (eq(x_2260.name,"SPAN") || (eq(x_2260.name,"FONT") || (eq(x_2260.name,"A") || (eq(x_2260.name,"ARTICLE") || (eq(x_2260.name,"P") || (eq(x_2260.name,"U") || (eq(x_2260.name,"UL") || (eq(x_2260.name,"B") || (eq(x_2260.name,"H1") || (eq(x_2260.name,"H2") || (eq(x_2260.name,"H3") || (eq(x_2260.name,"H4") || (eq(x_2260.name,"DT") || (eq(x_2260.name,"DD") || (eq(x_2260.name,"DL") || (eq(x_2260.name,"LI") || (eq(x_2260.name,"LABEL") || (eq(x_2260.name,"OL") || (eq(x_2260.name,"NAV") || (eq(x_2260.name,"HEADER") || (eq(x_2260.name,"HEAD") || (eq(x_2260.name,"SOURCE") || (eq(x_2260.name,"PICTURE") || (eq(x_2260.name,"FIGURE") || (eq(x_2260.name,"FIGCAPTION") || (eq(x_2260.name,"MAIN") || (eq(x_2260.name,"REACT-PARTIAL") || (eq(x_2260.name,"QUERY-BUILDER") || (eq(x_2260.name,"MODAL-DIALOG") || (eq(x_2260.name,"SCROLLABLE-REGION") || (eq(x_2260.name,"DIALOG-HELPER") || (eq(x_2260.name,"AUTO-CHECK") || (eq(x_2260.name,"TOOL-TIP") || (eq(x_2260.name,"CUSTOM-SCOPES") || (eq(x_2260.name,"QBSEARCH-INPUT") || (eq(x_2260.name,"INCLUDE-FRAGMENT") || (eq(x_2260.name,"COOKIE-CONSENT-LINK") || (eq(x_2260.name,"FULLSTORY-CAPTURE") || (eq(x_2260.name,"GHCC-CONSENT") || (eq(x_2260.name,"GLOBAL-BANNER") || (eq(x_2260.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_2260.name,"CARD-SKEW") || (eq(x_2260.name,"EM") || (eq(x_2260.name,"ASIDE") || (eq(x_2260.name,"AUDIO") || (eq(x_2260.name,"SUP") || (eq(x_2260.name,"TIME") || (eq(x_2260.name,"ABBR") || (eq(x_2260.name,"SMALL") || (eq(x_2260.name,"SLOT") || eq(x_2260.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          if (eq(x_2260.name, "#text") ||
              (eq(x_2260.name, "svg") ||
               (eq(x_2260.name, "IFRAME") ||
                (eq(x_2260.name, "INPUT") ||
                 (eq(x_2260.name, "VIDEO") ||
                  (eq(x_2260.name, "BR") || (eq(x_2260.name, "IMG") || eq(x_2260.name, "TEXTAREA")))))))) {
            return false;
          } else {
            return Panic();
          }
        }
      }
    }
  }
}
auto var_modified_x_755(const auto &x_2273) { return MakeUnit(); }
auto eval_expr_x_752(const auto &x_2293) {
  if (IsSome(HashtblFind(x_2293.prop, "width"))) {
    return HashtblForceFind(x_2293.prop, "width");
  } else {
    return "auto";
  }
}
auto var_modified_x_749(const auto &x_2296) { return MakeUnit(); }
auto eval_expr_x_746(const auto &x_2303) {
  if ((x_2303.prev == nullptr) && not((*(x_2303.prev)).var_line_break)) {
    return max(x_2303.var_height_external, (*(x_2303.prev)).var_line_height);
  } else {
    return x_2303.var_height_external;
  }
}
auto var_modified_x_744(const auto &x_2320) { return MakeUnit(); }
auto eval_expr_x_741(const auto &x_2323) {
  if (eq(x_2323.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2323.var_height_internal;
  }
}
auto var_modified_x_739(const auto &x_2332) { return MakeUnit(); }
auto eval_expr_x_736(const auto &x_2335) {
  if (x_2335.var_intrinsic_height_is_height) {
    return x_2335.var_intrinsic_height_internal;
  } else {
    if ((x_2335.parent == nullptr) && (*(x_2335.parent)).var_is_flex_column) {
      return plus(x_2335.var_intrinsic_height_internal, mult(x_2335.var_flex_amount, (*(x_2335.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2335.var_height_expr, "%")) {
        return mult(x_2335.var_box_height, divide(string_to_float(strip_suffix(x_2335.var_height_expr, "%")), 100.));
      } else {
        if (eq(x_2335.var_height_expr, "fit-content")) {
          return max(x_2335.var_box_height, x_2335.var_intrinsic_height_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_734(const auto &x_2388) { return MakeUnit(); }
auto eval_expr_x_731(const auto &x_2396) {
  if (x_2396.prev == nullptr) {
    if (x_2396.var_line_break || (*(x_2396.prev)).var_line_break) {
      return plus((*(x_2396.prev)).var_y, (*(x_2396.prev)).var_line_height);
    } else {
      return (*(x_2396.prev)).var_y;
    }
  } else {
    if (x_2396.parent == nullptr) {
      return (*(x_2396.parent)).var_y;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_729(const auto &x_2421) { return MakeUnit(); }
auto eval_expr_x_726(const auto &x_2425) {
  if (eq(x_2425.var_position, "absolute")) {
    return 0.;
  } else {
    return x_2425.var_width_internal;
  }
}
auto var_modified_x_724(const auto &x_2434) { return MakeUnit(); }
auto eval_expr_x_721(const auto &x_2437) {
  if (x_2437.var_intrinsic_width_is_width) {
    return x_2437.var_intrinsic_width_internal;
  } else {
    if ((x_2437.parent == nullptr) && (*(x_2437.parent)).var_is_flex_row) {
      return plus(x_2437.var_intrinsic_width_internal, mult(x_2437.var_flex_amount, (*(x_2437.parent)).var_flex_unit));
    } else {
      if (has_suffix(x_2437.var_width_expr, "%")) {
        return mult(x_2437.var_box_width, divide(string_to_float(strip_suffix(x_2437.var_width_expr, "%")), 100.));
      } else {
        if (eq(x_2437.var_width_expr, "fit-content")) {
          return max(x_2437.var_box_width, x_2437.var_intrinsic_width_internal);
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_719(const auto &x_2490) { return MakeUnit(); }
auto eval_expr_x_716(const auto &x_2495) {
  if (x_2495.prev == nullptr) {
    if (x_2495.var_line_break || (*(x_2495.prev)).var_line_break) {
      return 0.;
    } else {
      return plus((*(x_2495.prev)).var_x, (*(x_2495.prev)).var_width_external);
    }
  } else {
    if (x_2495.parent == nullptr) {
      return (*(x_2495.parent)).var_x;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_714(const auto &x_2516) { return MakeUnit(); }
auto eval_expr_x_711(const auto &x_2519) {
  if (gt(x_2519.var_left_over, 0.)) {
    return divide(x_2519.var_left_over, x_2519.var_flex_grow_sum);
  } else {
    return divide(x_2519.var_left_over, x_2519.var_flex_shrink_sum);
  }
}
auto var_modified_x_709(const auto &x_2540) { return MakeUnit(); }
auto eval_expr_x_706(const auto &x_2543) {
  if ((x_2543.parent == nullptr) && gt((*(x_2543.parent)).var_left_over, 0.)) {
    return x_2543.var_flex_grow;
  } else {
    return x_2543.var_flex_shrink;
  }
}
auto var_modified_x_704(const auto &x_2556) { return MakeUnit(); }
auto eval_expr_x_701(const auto &x_2561) {
  if (x_2561.var_is_flex_row) {
    return minus(x_2561.var_box_width,
                 (IsSome(ListLast(x_2561.children))) ? (UnSome(ListLast(x_2561.children)).var_intrinsic_width_sum)
                                                     : (0.));
  } else {
    return minus(x_2561.var_box_height,
                 (IsSome(ListLast(x_2561.children))) ? (UnSome(ListLast(x_2561.children)).var_intrinsic_height_sum)
                                                     : (0.));
  }
}
auto var_modified_x_699(const auto &x_2582) { return MakeUnit(); }
auto eval_expr_x_696(const auto &x_2586) {
  if (x_2586.parent == nullptr) {
    return (*(x_2586.parent)).var_height_internal;
  } else {
    return 1080.;
  }
}
auto var_modified_x_694(const auto &x_2591) { return MakeUnit(); }
auto eval_expr_x_691(const auto &x_2595) {
  if (x_2595.parent == nullptr) {
    return (*(x_2595.parent)).var_width_internal;
  } else {
    return 1920.;
  }
}
auto var_modified_x_688(const auto &x_2600) { return MakeUnit(); }
auto eval_expr_x_685(const auto &x_2618) {
  if (eq(x_2618.var_display, "none")) {
    return false;
  } else {
    if (eq(x_2618.var_position, "absolute")) {
      return false;
    } else {
      if ((x_2618.parent == nullptr) &&
          (eq((*(x_2618.parent)).var_display, "flex") || eq((*(x_2618.parent)).var_display, "inline-flex"))) {
        return true;
      } else {
        if (eq(x_2618.var_display, "block")) {
          return true;
        } else {
          if (eq(x_2618.var_display, "inline")) {
            return false;
          } else {
            if (eq(x_2618.var_display, "inline-block")) {
              return false;
            } else {
              if (eq(x_2618.var_display, "flex")) {
                if (eq(HashtblForceFind(x_2618.prop, "flex-direction"), "row")) {
                  return false;
                } else {
                  if (eq(HashtblForceFind(x_2618.prop, "flex-direction"), "column")) {
                    return true;
                  } else {
                    if (eq(HashtblForceFind(x_2618.prop, "flex-direction"), "column-reverse")) {
                      return true;
                    } else {
                      return Panic();
                    }
                  }
                }
              } else {
                if (eq(x_2618.var_display, "inline-flex")) {
                  return false;
                } else {
                  if (eq(x_2618.var_display, "contents")) {
                    return false;
                  } else {
                    if (eq(x_2618.var_display, "table")) {
                      return true;
                    } else {
                      if (eq(x_2618.var_display, "table-row-group")) {
                        return true;
                      } else {
                        if (eq(x_2618.var_display, "table-row")) {
                          return true;
                        } else {
                          if (eq(x_2618.var_display, "table-cell")) {
                            return false;
                          } else {
                            if (eq(x_2618.var_display, "list-item")) {
                              return true;
                            } else {
                              if (eq(x_2618.var_display, "grid")) {
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
auto var_modified_x_683(const auto &x_2695) { return MakeUnit(); }
auto eval_expr_x_680(const auto &x_2697) {
  return ((not(x_2697.parent == nullptr) || (*(x_2697.parent)).var_visible) &&
          (neq(x_2697.var_display, "none") && (not(x_2697.var_inside_svg) && not(x_2697.var_disabled))));
}
auto var_modified_x_678(const auto &x_2714) { return MakeUnit(); }
auto eval_expr_x_675(const auto &x_2722) {
  if (eq(x_2722.name, "NOSCRIPT")) {
    return true;
  } else {
    return ((x_2722.parent == nullptr) && (*(x_2722.parent)).var_disabled);
  }
}
auto var_modified_x_673(const auto &x_2727) { return MakeUnit(); }
auto eval_expr_x_670(const auto &x_2735) {
  return ((x_2735.parent == nullptr) && ((*(x_2735.parent)).var_is_svg_block || (*(x_2735.parent)).var_inside_svg));
}
auto var_modified_x_668(const auto &x_2744) { return MakeUnit(); }
auto eval_expr_x_665(const auto &x_2746) { return eq(x_2746.name, "svg"); }
auto var_modified_x_663(const auto &x_2747) { return MakeUnit(); }
auto eval_expr_x_660(const auto &x_2756) { return neq(x_2756.var_height_attr_expr, "auto"); }
auto var_modified_x_658(const auto &x_2761) { return MakeUnit(); }
auto eval_expr_x_655(const auto &x_2769) {
  if (not(IsSome(HashtblFind(x_2769.attr, "height")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2769.attr, "height")) ||
        has_suffix(HashtblForceFind(x_2769.attr, "height"), "%")) {
      return HashtblForceFind(x_2769.attr, "height");
    } else {
      if (eq(HashtblForceFind(x_2769.attr, "height"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_653(const auto &x_2780) { return MakeUnit(); }
auto eval_expr_x_650(const auto &x_2790) { return neq(x_2790.var_width_attr_expr, "auto"); }
auto var_modified_x_648(const auto &x_2795) { return MakeUnit(); }
auto eval_expr_x_645(const auto &x_2803) {
  if (not(IsSome(HashtblFind(x_2803.attr, "width")))) {
    return "auto";
  } else {
    if (string_is_float(HashtblForceFind(x_2803.attr, "width")) ||
        has_suffix(HashtblForceFind(x_2803.attr, "width"), "%")) {
      return HashtblForceFind(x_2803.attr, "width");
    } else {
      if (eq(HashtblForceFind(x_2803.attr, "width"), "Auto")) {
        return "auto";
      } else {
        return Panic();
      }
    }
  }
}
auto var_modified_x_643(const auto &x_2814) { return MakeUnit(); }
auto eval_expr_x_640(const auto &x_2817) {
  if ((x_2817.parent == nullptr) &&
      (eq((*(x_2817.parent)).var_display, "flex") || eq((*(x_2817.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2817.parent)).var_flex_direction, "column") ||
        eq((*(x_2817.parent)).var_flex_direction, "column-reverse")) {
      return true;
    } else {
      if (eq((*(x_2817.parent)).var_flex_direction, "row")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_638(const auto &x_2842) { return MakeUnit(); }
auto eval_expr_x_635(const auto &x_2846) {
  if ((x_2846.parent == nullptr) &&
      (eq((*(x_2846.parent)).var_display, "flex") || eq((*(x_2846.parent)).var_display, "inline-flex"))) {
    if (eq((*(x_2846.parent)).var_flex_direction, "row")) {
      return true;
    } else {
      if (eq((*(x_2846.parent)).var_flex_direction, "column") ||
          eq((*(x_2846.parent)).var_flex_direction, "column-reverse")) {
        return false;
      } else {
        return Panic();
      }
    }
  } else {
    return false;
  }
}
auto var_modified_x_633(const auto &x_2871) { return MakeUnit(); }
auto eval_expr_x_630(const auto &x_2878) {
  if (IsSome(HashtblFind(x_2878.prop, "flex-direction"))) {
    return HashtblForceFind(x_2878.prop, "flex-direction");
  } else {
    return "";
  }
}
auto var_modified_x_628(const auto &x_2881) { return MakeUnit(); }
auto eval_expr_x_625(const auto &x_2886) {
  return plus((x_2886.prev == nullptr) ? ((*(x_2886.prev)).var_flex_shrink_sum) : (0.), x_2886.var_flex_shrink);
}
auto var_modified_x_623(const auto &x_2895) { return MakeUnit(); }
auto eval_expr_x_620(const auto &x_2900) {
  return plus((x_2900.prev == nullptr) ? ((*(x_2900.prev)).var_flex_grow_sum) : (0.), x_2900.var_flex_grow);
}
auto var_modified_x_618(const auto &x_2909) { return MakeUnit(); }
auto eval_expr_x_615(const auto &x_2912) {
  if (IsSome(HashtblFind(x_2912.prop, "flex-shrink"))) {
    return string_to_float(HashtblForceFind(x_2912.prop, "flex-shrink"));
  } else {
    return 0.;
  }
}
auto var_modified_x_613(const auto &x_2915) { return MakeUnit(); }
auto eval_expr_x_610(const auto &x_2918) {
  if (IsSome(HashtblFind(x_2918.prop, "flex-grow"))) {
    return string_to_float(HashtblForceFind(x_2918.prop, "flex-grow"));
  } else {
    return 0.;
  }
}
auto var_modified_x_608(const auto &x_2921) { return MakeUnit(); }
auto eval_expr_x_605(const auto &x_2927) {
  if (IsSome(HashtblFind(x_2927.prop, "position"))) {
    return HashtblForceFind(x_2927.prop, "position");
  } else {
    return "static";
  }
}
auto var_modified_x_603(const auto &x_2930) { return MakeUnit(); }
auto eval_expr_x_600(const auto &x_2956) {
  if (IsSome(HashtblFind(x_2956.prop, "display"))) {
    return HashtblForceFind(x_2956.prop, "display");
  } else {
    return "block";
  }
}
auto var_modified_x_597(const auto &x_2959) { return MakeUnit(); }
auto eval_expr_x_594(const auto &x_2969) {
  if (x_2969.prev == nullptr) {
    if (x_2969.var_line_break) {
      return plus((*(x_2969.prev)).var_finished_intrinsic_height_sum,
                  plus((*(x_2969.prev)).var_intrinsic_current_line_height, x_2969.var_intrinsic_height_external));
    } else {
      return (*(x_2969.prev)).var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2969.var_line_break) {
      return x_2969.var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
auto var_modified_x_592(const auto &x_2998) { return MakeUnit(); }
auto eval_expr_x_589(const auto &x_3008) {
  if (x_3008.var_line_break) {
    return 0.;
  } else {
    return max(x_3008.var_intrinsic_height_external,
               (x_3008.prev == nullptr) ? ((*(x_3008.prev)).var_intrinsic_current_line_height) : (0.));
  }
}
auto var_modified_x_587(const auto &x_3021) { return MakeUnit(); }
auto eval_expr_x_584(const auto &x_3028) {
  return plus((x_3028.prev == nullptr) ? ((*(x_3028.prev)).var_intrinsic_height_sum) : (0.),
              x_3028.var_intrinsic_height_external);
}
auto var_modified_x_582(const auto &x_3037) { return MakeUnit(); }
auto eval_expr_x_579(const auto &x_3042) {
  if (eq(x_3042.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3042.var_intrinsic_height_internal;
  }
}
auto var_modified_x_577(const auto &x_3051) { return MakeUnit(); }
auto eval_expr_x_574(const auto &x_3056) {
  if (eq(x_3056.var_display, "none")) {
    return 0.;
  } else {
    if (x_3056.var_inside_svg) {
      return 0.;
    } else {
      if (x_3056.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3056.var_height_expr, "auto") &&
            (not(has_suffix(x_3056.var_height_expr, "%")) && neq(x_3056.var_height_expr, "fit-content"))) {
          if (has_suffix(x_3056.var_height_expr, "px")) {
            return string_to_float(strip_suffix(x_3056.var_height_expr, "px"));
          } else {
            if (has_suffix(x_3056.var_height_expr, "ch")) {
              return string_to_float(strip_suffix(x_3056.var_height_expr, "ch"));
            } else {
              if (has_suffix(x_3056.var_height_expr, "lh")) {
                return string_to_float(strip_suffix(x_3056.var_height_expr, "lh"));
              } else {
                return Panic();
              }
            }
          }
        } else {
          return plus(
              x_3056.var_children_intrinsic_height,
              (eq(x_3056.name, "#text"))
                  ? ((IsSome(ListHead(x_3056.children))) ? (Panic()) : (10.))
                  : ((x_3056.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3056.name, "BR"))
                                ? ((IsSome(ListHead(x_3056.children))) ? (Panic()) : (0.))
                                : ((eq(x_3056.name, "INPUT"))
                                       ? (10.)
                                       : ((eq(x_3056.name, "svg"))
                                              ? ((x_3056.var_has_height_attr &&
                                                  string_is_float(x_3056.var_height_attr_expr))
                                                     ? (string_to_float(x_3056.var_height_attr_expr))
                                                     : ((IsSome(HashtblFind(x_3056.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3056.attr, "viewBox"), " ", 3)))
                                                            : ((x_3056.var_has_height_attr &&
                                                                (has_suffix(x_3056.var_height_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_3056.attr, "viewBox"))))
                                                                   ? (mult(
                                                                         string_to_float(nth_by_sep(
                                                                             HashtblForceFind(x_3056.attr, "viewBox"),
                                                                             " ", 3)),
                                                                         divide(string_to_float(strip_suffix(
                                                                                    x_3056.var_height_attr_expr, "%")),
                                                                                100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_3056.name, "IMG"))
                                                     ? ((x_3056.var_has_height_attr)
                                                            ? (string_to_float(x_3056.var_height_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3056.attr, "image_height")) &&
                                                                not(x_3056.var_has_width_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3056.attr, "image_height")))
                                                                   : ((x_3056.var_has_width_attr &&
                                                                       (not(x_3056.var_has_height_attr) &&
                                                                        (IsSome(
                                                                             HashtblFind(x_3056.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_3056.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_3056.attr,
                                                                                                   "image_width"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_3056.var_width_attr_expr),
                                                                                       divide(int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_3056.attr,
                                                                                                      "image_height")),
                                                                                              int_to_float(
                                                                                                  HashtblForceFind(
                                                                                                      x_3056.attr,
                                                                                                      "image_width")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_3056.name, "IFRAME"))
                                                            ? ((x_3056.var_has_height_attr) ? (Panic()) : (150.))
                                                            : ((eq(x_3056.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_3056.name, "VIDEO"))
                                                                          ? ((x_3056.var_has_height_attr) ? (Panic())
                                                                                                          : (150.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_572(const auto &x_3201) { return MakeUnit(); }
auto eval_expr_x_569(const auto &x_3203) {
  if (eq(x_3203.var_display, "none") || (x_3203.var_inside_svg || x_3203.var_disabled)) {
    return true;
  } else {
    if ((x_3203.parent == nullptr) && (*(x_3203.parent)).var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3203.var_height_expr, "auto") ||
          (has_suffix(x_3203.var_height_expr, "px") ||
           (has_suffix(x_3203.var_height_expr, "ch") ||
            (has_suffix(x_3203.var_height_expr, "lh") || eq(x_3203.var_height_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_3203.var_height_expr, "%") || eq(x_3203.var_height_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_567(const auto &x_3252) { return MakeUnit(); }
auto eval_expr_x_564(const auto &x_3272) {
  if (IsSome(HashtblFind(x_3272.prop, "height"))) {
    return HashtblForceFind(x_3272.prop, "height");
  } else {
    return "auto";
  }
}
auto var_modified_x_562(const auto &x_3275) { return MakeUnit(); }
auto eval_expr_x_559(const auto &x_3277) {
  if (IsSome(ListLast(x_3277.children))) {
    return plus(UnSome(ListLast(x_3277.children)).var_finished_intrinsic_height_sum,
                UnSome(ListLast(x_3277.children)).var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
auto var_modified_x_557(const auto &x_3286) { return MakeUnit(); }
auto eval_expr_x_554(const auto &x_3293) {
  return plus((x_3293.prev == nullptr) ? ((*(x_3293.prev)).var_intrinsic_width_sum) : (0.),
              x_3293.var_intrinsic_width_external);
}
auto var_modified_x_552(const auto &x_3302) { return MakeUnit(); }
auto eval_expr_x_549(const auto &x_3309) {
  return max(x_3309.var_intrinsic_current_line_width,
             (x_3309.prev == nullptr) ? ((*(x_3309.prev)).var_intrinsic_width_max) : (0.));
}
auto var_modified_x_547(const auto &x_3318) { return MakeUnit(); }
auto eval_expr_x_544(const auto &x_3323) {
  return plus(x_3323.var_intrinsic_width_external,
              ((x_3323.prev == nullptr) && not((*(x_3323.prev)).var_line_break))
                  ? ((*(x_3323.prev)).var_intrinsic_current_line_width)
                  : (0.));
}
auto var_modified_x_542(const auto &x_3336) { return MakeUnit(); }
auto eval_expr_x_539(const auto &x_3339) {
  if (eq(x_3339.var_position, "absolute")) {
    return 0.;
  } else {
    return x_3339.var_intrinsic_width_internal;
  }
}
auto var_modified_x_537(const auto &x_3348) { return MakeUnit(); }
auto eval_expr_x_534(const auto &x_3353) {
  if (eq(x_3353.var_display, "none")) {
    return 0.;
  } else {
    if (x_3353.var_inside_svg) {
      return 0.;
    } else {
      if (x_3353.var_disabled) {
        return 0.;
      } else {
        if (neq(x_3353.var_width_expr, "auto") &&
            (not(has_suffix(x_3353.var_width_expr, "%")) &&
             (neq(x_3353.var_width_expr, "fit-content") &&
              (neq(x_3353.var_width_expr, "max-content") && not(has_prefix(x_3353.var_width_expr, "calc")))))) {
          if (has_suffix(x_3353.var_width_expr, "px")) {
            return string_to_float(strip_suffix(x_3353.var_width_expr, "px"));
          } else {
            if (has_suffix(x_3353.var_width_expr, "ch")) {
              return string_to_float(strip_suffix(x_3353.var_width_expr, "ch"));
            } else {
              return Panic();
            }
          }
        } else {
          return plus(
              x_3353.var_children_intrinsic_width,
              (eq(x_3353.name, "#text"))
                  ? ((IsSome(ListHead(x_3353.children))) ? (Panic()) : (100.))
                  : ((x_3353.var_is_default_case)
                         ? (0.)
                         : ((eq(x_3353.name, "BR"))
                                ? ((IsSome(ListHead(x_3353.children))) ? (Panic()) : (0.))
                                : ((eq(x_3353.name, "INPUT"))
                                       ? (100.)
                                       : ((eq(x_3353.name, "svg"))
                                              ? ((x_3353.var_has_width_attr &&
                                                  string_is_float(x_3353.var_width_attr_expr))
                                                     ? (string_to_float(x_3353.var_width_attr_expr))
                                                     : ((not(x_3353.var_has_width_attr) &&
                                                         IsSome(HashtblFind(x_3353.attr, "viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  HashtblForceFind(x_3353.attr, "viewBox"), " ", 2)))
                                                            : ((x_3353.var_has_width_attr &&
                                                                (has_suffix(x_3353.var_width_attr_expr, "%") &&
                                                                 IsSome(HashtblFind(x_3353.attr, "viewBox"))))
                                                                   ? (mult(string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_3353.attr, "viewBox"),
                                                                               " ", 2)),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_3353.var_width_attr_expr, "%")),
                                                                                  100.)))
                                                                   : (Panic()))))
                                              : ((eq(x_3353.name, "IMG"))
                                                     ? ((x_3353.var_has_width_attr)
                                                            ? (string_to_float(x_3353.var_width_attr_expr))
                                                            : ((IsSome(HashtblFind(x_3353.attr, "image_width")) &&
                                                                not(x_3353.var_has_height_attr))
                                                                   ? (int_to_float(
                                                                         HashtblForceFind(x_3353.attr, "image_width")))
                                                                   : ((not(x_3353.var_has_width_attr) &&
                                                                       (x_3353.var_has_height_attr &&
                                                                        (IsSome(
                                                                             HashtblFind(x_3353.attr, "image_width")) &&
                                                                         IsSome(HashtblFind(x_3353.attr,
                                                                                            "image_height")))))
                                                                          ? ((neq(HashtblForceFind(x_3353.attr,
                                                                                                   "image_height"),
                                                                                  0))
                                                                                 ? (mult(
                                                                                       string_to_float(
                                                                                           x_3353.var_height_attr_expr),
                                                                                       divide(
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_3353.attr,
                                                                                                   "image_width")),
                                                                                           int_to_float(
                                                                                               HashtblForceFind(
                                                                                                   x_3353.attr,
                                                                                                   "image_height")))))
                                                                                 : (0.))
                                                                          : (Panic()))))
                                                     : ((eq(x_3353.name, "IFRAME"))
                                                            ? ((x_3353.var_has_width_attr) ? (Panic()) : (300.))
                                                            : ((eq(x_3353.name, "TEXTAREA"))
                                                                   ? (100.)
                                                                   : ((eq(x_3353.name, "VIDEO"))
                                                                          ? ((x_3353.var_has_width_attr) ? (Panic())
                                                                                                         : (300.))
                                                                          : (Panic()))))))))));
        }
      }
    }
  }
}
auto var_modified_x_532(const auto &x_3506) { return MakeUnit(); }
auto eval_expr_x_529(const auto &x_3508) {
  if (IsSome(ListLast(x_3508.children))) {
    return UnSome(ListLast(x_3508.children)).var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
auto var_modified_x_527(const auto &x_3513) { return MakeUnit(); }
auto eval_expr_x_524(const auto &x_3515) {
  if (eq(x_3515.var_display, "none") || (x_3515.var_inside_svg || x_3515.var_disabled)) {
    return true;
  } else {
    if ((x_3515.parent == nullptr) && (*(x_3515.parent)).var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3515.var_width_expr, "auto") ||
          (has_suffix(x_3515.var_width_expr, "px") ||
           (has_suffix(x_3515.var_width_expr, "ch") ||
            (has_prefix(x_3515.var_width_expr, "calc(") || eq(x_3515.var_width_expr, "max-content"))))) {
        return true;
      } else {
        if (has_suffix(x_3515.var_width_expr, "%") || eq(x_3515.var_width_expr, "fit-content")) {
          return false;
        } else {
          return Panic();
        }
      }
    }
  }
}
auto var_modified_x_522(const auto &x_3564) { return MakeUnit(); }
auto eval_expr_x_519(const auto &x_3567) {
  if (eq(x_3567.var_display, "none")) {
    return true;
  } else {
    if (x_3567.var_inside_svg) {
      return true;
    } else {
      if (x_3567.var_disabled) {
        return true;
      } else {if ( eq(x_3567.name,"#document") || (eq(x_3567.name,"#shadow-root") || (eq(x_3567.name,"DIV") || (eq(x_3567.name,"HTML") || (eq(x_3567.name,"BODY") || (eq(x_3567.name,"BUTTON") || (eq(x_3567.name,"FOOTER") || (eq(x_3567.name,"SELECT") || (eq(x_3567.name,"SECTION") || (eq(x_3567.name,"FORM") || (eq(x_3567.name,"CENTER") || (eq(x_3567.name,"TD") || (eq(x_3567.name,"TR") || (eq(x_3567.name,"TBODY") || (eq(x_3567.name,"TABLE") || (eq(x_3567.name,"SPAN") || (eq(x_3567.name,"FONT") || (eq(x_3567.name,"A") || (eq(x_3567.name,"ARTICLE") || (eq(x_3567.name,"P") || (eq(x_3567.name,"U") || (eq(x_3567.name,"UL") || (eq(x_3567.name,"B") || (eq(x_3567.name,"H1") || (eq(x_3567.name,"H2") || (eq(x_3567.name,"H3") || (eq(x_3567.name,"H4") || (eq(x_3567.name,"DT") || (eq(x_3567.name,"DD") || (eq(x_3567.name,"DL") || (eq(x_3567.name,"LI") || (eq(x_3567.name,"LABEL") || (eq(x_3567.name,"OL") || (eq(x_3567.name,"NAV") || (eq(x_3567.name,"HEADER") || (eq(x_3567.name,"HEAD") || (eq(x_3567.name,"SOURCE") || (eq(x_3567.name,"PICTURE") || (eq(x_3567.name,"FIGURE") || (eq(x_3567.name,"FIGCAPTION") || (eq(x_3567.name,"MAIN") || (eq(x_3567.name,"REACT-PARTIAL") || (eq(x_3567.name,"QUERY-BUILDER") || (eq(x_3567.name,"MODAL-DIALOG") || (eq(x_3567.name,"SCROLLABLE-REGION") || (eq(x_3567.name,"DIALOG-HELPER") || (eq(x_3567.name,"AUTO-CHECK") || (eq(x_3567.name,"TOOL-TIP") || (eq(x_3567.name,"CUSTOM-SCOPES") || (eq(x_3567.name,"QBSEARCH-INPUT") || (eq(x_3567.name,"INCLUDE-FRAGMENT") || (eq(x_3567.name,"COOKIE-CONSENT-LINK") || (eq(x_3567.name,"FULLSTORY-CAPTURE") || (eq(x_3567.name,"GHCC-CONSENT") || (eq(x_3567.name,"GLOBAL-BANNER") || (eq(x_3567.name,"ACTIVE-GLOBAL-BANNERS") || (eq(x_3567.name,"CARD-SKEW") || (eq(x_3567.name,"EM") || (eq(x_3567.name,"ASIDE") || (eq(x_3567.name,"AUDIO") || (eq(x_3567.name,"SUP") || (eq(x_3567.name,"TIME") || (eq(x_3567.name,"ABBR") || (eq(x_3567.name,"SMALL") || (eq(x_3567.name,"SLOT") || eq(x_3567.name,"I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          if (eq(x_3567.name, "#text") ||
              (eq(x_3567.name, "svg") ||
               (eq(x_3567.name, "IFRAME") ||
                (eq(x_3567.name, "INPUT") ||
                 (eq(x_3567.name, "VIDEO") ||
                  (eq(x_3567.name, "BR") || (eq(x_3567.name, "IMG") || eq(x_3567.name, "TEXTAREA")))))))) {
            return false;
          } else {
            return Panic();
          }
        }
      }
    }
  }
}
auto var_modified_x_517(const auto &x_3580) { return MakeUnit(); }
auto eval_expr_x_514(const auto &x_3600) {
  if (IsSome(HashtblFind(x_3600.prop, "width"))) {
    return HashtblForceFind(x_3600.prop, "width");
  } else {
    return "auto";
  }
}
auto eval_stmts_x_253(const auto &x_513) {
  WriteMetric(x_15);
  auto x_515 = eval_expr_x_514(x_513);
  x_513.var_width_expr = x_515;
  WriteMetric(x_15);
  auto x_520 = eval_expr_x_519(x_513);
  x_513.var_is_default_case = x_520;
  WriteMetric(x_15);
  auto x_525 = eval_expr_x_524(x_513);
  x_513.var_intrinsic_width_is_width = x_525;
  WriteMetric(x_15);
  auto x_530 = eval_expr_x_529(x_513);
  x_513.var_children_intrinsic_width = x_530;
  WriteMetric(x_15);
  auto x_535 = eval_expr_x_534(x_513);
  x_513.var_intrinsic_width_internal = x_535;
  WriteMetric(x_15);
  auto x_540 = eval_expr_x_539(x_513);
  x_513.var_intrinsic_width_external = x_540;
  WriteMetric(x_15);
  auto x_545 = eval_expr_x_544(x_513);
  x_513.var_intrinsic_current_line_width = x_545;
  WriteMetric(x_15);
  auto x_550 = eval_expr_x_549(x_513);
  x_513.var_intrinsic_width_max = x_550;
  WriteMetric(x_15);
  auto x_555 = eval_expr_x_554(x_513);
  x_513.var_intrinsic_width_sum = x_555;
  WriteMetric(x_15);
  auto x_560 = eval_expr_x_559(x_513);
  x_513.var_children_intrinsic_height = x_560;
  WriteMetric(x_15);
  auto x_565 = eval_expr_x_564(x_513);
  x_513.var_height_expr = x_565;
  WriteMetric(x_15);
  auto x_570 = eval_expr_x_569(x_513);
  x_513.var_intrinsic_height_is_height = x_570;
  WriteMetric(x_15);
  auto x_575 = eval_expr_x_574(x_513);
  x_513.var_intrinsic_height_internal = x_575;
  WriteMetric(x_15);
  auto x_580 = eval_expr_x_579(x_513);
  x_513.var_intrinsic_height_external = x_580;
  WriteMetric(x_15);
  auto x_585 = eval_expr_x_584(x_513);
  x_513.var_intrinsic_height_sum = x_585;
  WriteMetric(x_15);
  auto x_590 = eval_expr_x_589(x_513);
  x_513.var_intrinsic_current_line_height = x_590;
  WriteMetric(x_15);
  auto x_595 = eval_expr_x_594(x_513);
  x_513.var_finished_intrinsic_height_sum = x_595;
  return MakeUnit();
}
auto eval_stmts_x_251(const auto &x_599) {
  WriteMetric(x_15);
  auto x_601 = eval_expr_x_600(x_599);
  x_599.var_display = x_601;
  WriteMetric(x_15);
  auto x_606 = eval_expr_x_605(x_599);
  x_599.var_position = x_606;
  WriteMetric(x_15);
  auto x_611 = eval_expr_x_610(x_599);
  x_599.var_flex_grow = x_611;
  WriteMetric(x_15);
  auto x_616 = eval_expr_x_615(x_599);
  x_599.var_flex_shrink = x_616;
  WriteMetric(x_15);
  auto x_621 = eval_expr_x_620(x_599);
  x_599.var_flex_grow_sum = x_621;
  WriteMetric(x_15);
  auto x_626 = eval_expr_x_625(x_599);
  x_599.var_flex_shrink_sum = x_626;
  WriteMetric(x_15);
  auto x_631 = eval_expr_x_630(x_599);
  x_599.var_flex_direction = x_631;
  WriteMetric(x_15);
  auto x_636 = eval_expr_x_635(x_599);
  x_599.var_is_flex_row = x_636;
  WriteMetric(x_15);
  auto x_641 = eval_expr_x_640(x_599);
  x_599.var_is_flex_column = x_641;
  WriteMetric(x_15);
  auto x_646 = eval_expr_x_645(x_599);
  x_599.var_width_attr_expr = x_646;
  WriteMetric(x_15);
  auto x_651 = eval_expr_x_650(x_599);
  x_599.var_has_width_attr = x_651;
  WriteMetric(x_15);
  auto x_656 = eval_expr_x_655(x_599);
  x_599.var_height_attr_expr = x_656;
  WriteMetric(x_15);
  auto x_661 = eval_expr_x_660(x_599);
  x_599.var_has_height_attr = x_661;
  WriteMetric(x_15);
  auto x_666 = eval_expr_x_665(x_599);
  x_599.var_is_svg_block = x_666;
  WriteMetric(x_15);
  auto x_671 = eval_expr_x_670(x_599);
  x_599.var_inside_svg = x_671;
  WriteMetric(x_15);
  auto x_676 = eval_expr_x_675(x_599);
  x_599.var_disabled = x_676;
  WriteMetric(x_15);
  auto x_681 = eval_expr_x_680(x_599);
  x_599.var_visible = x_681;
  WriteMetric(x_15);
  auto x_686 = eval_expr_x_685(x_599);
  x_599.var_line_break = x_686;
  return MakeUnit();
}
auto eval_stmts_x_248(const auto &x_690) {
  WriteMetric(x_15);
  auto x_692 = eval_expr_x_691(x_690);
  x_690.var_box_width = x_692;
  WriteMetric(x_15);
  auto x_697 = eval_expr_x_696(x_690);
  x_690.var_box_height = x_697;
  WriteMetric(x_15);
  auto x_702 = eval_expr_x_701(x_690);
  x_690.var_left_over = x_702;
  WriteMetric(x_15);
  auto x_707 = eval_expr_x_706(x_690);
  x_690.var_flex_amount = x_707;
  WriteMetric(x_15);
  auto x_712 = eval_expr_x_711(x_690);
  x_690.var_flex_unit = x_712;
  WriteMetric(x_15);
  auto x_717 = eval_expr_x_716(x_690);
  x_690.var_x = x_717;
  WriteMetric(x_15);
  auto x_722 = eval_expr_x_721(x_690);
  x_690.var_width_internal = x_722;
  WriteMetric(x_15);
  auto x_727 = eval_expr_x_726(x_690);
  x_690.var_width_external = x_727;
  WriteMetric(x_15);
  auto x_732 = eval_expr_x_731(x_690);
  x_690.var_y = x_732;
  WriteMetric(x_15);
  auto x_737 = eval_expr_x_736(x_690);
  x_690.var_height_internal = x_737;
  WriteMetric(x_15);
  auto x_742 = eval_expr_x_741(x_690);
  x_690.var_height_external = x_742;
  WriteMetric(x_15);
  auto x_747 = eval_expr_x_746(x_690);
  x_690.var_line_height = x_747;
  return MakeUnit();
}
auto eval_stmts_x_240(const auto &x_751) {
  WriteMetric(x_15);
  auto x_753 = eval_expr_x_752(x_751);
  x_751.var_width_expr = x_753;
  WriteMetric(x_15);
  auto x_758 = eval_expr_x_757(x_751);
  x_751.var_is_default_case = x_758;
  WriteMetric(x_15);
  auto x_763 = eval_expr_x_762(x_751);
  x_751.var_intrinsic_width_is_width = x_763;
  WriteMetric(x_15);
  auto x_768 = eval_expr_x_767(x_751);
  x_751.var_children_intrinsic_width = x_768;
  WriteMetric(x_15);
  auto x_773 = eval_expr_x_772(x_751);
  x_751.var_intrinsic_width_internal = x_773;
  WriteMetric(x_15);
  auto x_778 = eval_expr_x_777(x_751);
  x_751.var_intrinsic_width_external = x_778;
  WriteMetric(x_15);
  auto x_783 = eval_expr_x_782(x_751);
  x_751.var_intrinsic_current_line_width = x_783;
  WriteMetric(x_15);
  auto x_788 = eval_expr_x_787(x_751);
  x_751.var_intrinsic_width_max = x_788;
  WriteMetric(x_15);
  auto x_793 = eval_expr_x_792(x_751);
  x_751.var_intrinsic_width_sum = x_793;
  WriteMetric(x_15);
  auto x_798 = eval_expr_x_797(x_751);
  x_751.var_children_intrinsic_height = x_798;
  WriteMetric(x_15);
  auto x_803 = eval_expr_x_802(x_751);
  x_751.var_height_expr = x_803;
  WriteMetric(x_15);
  auto x_808 = eval_expr_x_807(x_751);
  x_751.var_intrinsic_height_is_height = x_808;
  WriteMetric(x_15);
  auto x_813 = eval_expr_x_812(x_751);
  x_751.var_intrinsic_height_internal = x_813;
  WriteMetric(x_15);
  auto x_818 = eval_expr_x_817(x_751);
  x_751.var_intrinsic_height_external = x_818;
  WriteMetric(x_15);
  auto x_823 = eval_expr_x_822(x_751);
  x_751.var_intrinsic_height_sum = x_823;
  WriteMetric(x_15);
  auto x_828 = eval_expr_x_827(x_751);
  x_751.var_intrinsic_current_line_height = x_828;
  WriteMetric(x_15);
  auto x_833 = eval_expr_x_832(x_751);
  x_751.var_finished_intrinsic_height_sum = x_833;
  return MakeUnit();
}
auto eval_stmts_x_238(const auto &x_837) {
  WriteMetric(x_15);
  auto x_839 = eval_expr_x_838(x_837);
  x_837.var_display = x_839;
  WriteMetric(x_15);
  auto x_844 = eval_expr_x_843(x_837);
  x_837.var_position = x_844;
  WriteMetric(x_15);
  auto x_849 = eval_expr_x_848(x_837);
  x_837.var_flex_grow = x_849;
  WriteMetric(x_15);
  auto x_854 = eval_expr_x_853(x_837);
  x_837.var_flex_shrink = x_854;
  WriteMetric(x_15);
  auto x_859 = eval_expr_x_858(x_837);
  x_837.var_flex_grow_sum = x_859;
  WriteMetric(x_15);
  auto x_864 = eval_expr_x_863(x_837);
  x_837.var_flex_shrink_sum = x_864;
  WriteMetric(x_15);
  auto x_869 = eval_expr_x_868(x_837);
  x_837.var_flex_direction = x_869;
  WriteMetric(x_15);
  auto x_874 = eval_expr_x_873(x_837);
  x_837.var_is_flex_row = x_874;
  WriteMetric(x_15);
  auto x_879 = eval_expr_x_878(x_837);
  x_837.var_is_flex_column = x_879;
  WriteMetric(x_15);
  auto x_884 = eval_expr_x_883(x_837);
  x_837.var_width_attr_expr = x_884;
  WriteMetric(x_15);
  auto x_889 = eval_expr_x_888(x_837);
  x_837.var_has_width_attr = x_889;
  WriteMetric(x_15);
  auto x_894 = eval_expr_x_893(x_837);
  x_837.var_height_attr_expr = x_894;
  WriteMetric(x_15);
  auto x_899 = eval_expr_x_898(x_837);
  x_837.var_has_height_attr = x_899;
  WriteMetric(x_15);
  auto x_904 = eval_expr_x_903(x_837);
  x_837.var_is_svg_block = x_904;
  WriteMetric(x_15);
  auto x_909 = eval_expr_x_908(x_837);
  x_837.var_inside_svg = x_909;
  WriteMetric(x_15);
  auto x_914 = eval_expr_x_913(x_837);
  x_837.var_disabled = x_914;
  WriteMetric(x_15);
  auto x_919 = eval_expr_x_918(x_837);
  x_837.var_visible = x_919;
  WriteMetric(x_15);
  auto x_924 = eval_expr_x_923(x_837);
  x_837.var_line_break = x_924;
  return MakeUnit();
}
auto eval_stmts_x_235(const auto &x_928) {
  WriteMetric(x_15);
  auto x_930 = eval_expr_x_929(x_928);
  x_928.var_box_width = x_930;
  WriteMetric(x_15);
  auto x_935 = eval_expr_x_934(x_928);
  x_928.var_box_height = x_935;
  WriteMetric(x_15);
  auto x_940 = eval_expr_x_939(x_928);
  x_928.var_left_over = x_940;
  WriteMetric(x_15);
  auto x_945 = eval_expr_x_944(x_928);
  x_928.var_flex_amount = x_945;
  WriteMetric(x_15);
  auto x_950 = eval_expr_x_949(x_928);
  x_928.var_flex_unit = x_950;
  WriteMetric(x_15);
  auto x_955 = eval_expr_x_954(x_928);
  x_928.var_x = x_955;
  WriteMetric(x_15);
  auto x_960 = eval_expr_x_959(x_928);
  x_928.var_width_internal = x_960;
  WriteMetric(x_15);
  auto x_965 = eval_expr_x_964(x_928);
  x_928.var_width_external = x_965;
  WriteMetric(x_15);
  auto x_970 = eval_expr_x_969(x_928);
  x_928.var_y = x_970;
  WriteMetric(x_15);
  auto x_975 = eval_expr_x_974(x_928);
  x_928.var_height_internal = x_975;
  WriteMetric(x_15);
  auto x_980 = eval_expr_x_979(x_928);
  x_928.var_height_external = x_980;
  WriteMetric(x_15);
  auto x_985 = eval_expr_x_984(x_928);
  x_928.var_line_height = x_985;
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
auto eval_stmts_x_29(const auto &x_234) { return MakeUnit(); }
auto eval_stmts_x_28(const auto &x_237) { return MakeUnit(); }
auto x_241(const auto &x_242) {
  return OptionIter(ListLast(x_242.children), [&](const auto &x_246) {
    x_246.parent = Some(x_242);
    return x_241(x_246);
  });
}
auto set_children_relation_x_26(const auto &x_242) { return x_241(x_242); }
auto eval_stmts_x_24(const auto &x_247) { return MakeUnit(); }
auto eval_stmts_x_23(const auto &x_250) { return MakeUnit(); }
auto x_254(const auto &x_255) {
  return OptionIter(ListLast(x_255.children), [&](const auto &x_259) {
    x_259.parent = Some(x_255);
    return x_254(x_259);
  });
}
auto set_children_relation_x_20(const auto &x_255) { return x_254(x_255); }
auto x_260(const auto &x_261) {
  auto x_262 = Zro(x_261);
  auto x_263 = Fst(x_261);
  auto x_264 = Zro(x_262);
  auto x_265 = Fst(x_262);
  return ListMatch(
      x_264,
      [&](const auto &x_268) {
        auto x_269 = Zro(x_263);
        auto x_270 = Zro(x_269);
        auto x_271 = Fst(x_269);
        auto x_272 = Fst(x_263);
        auto x_273 = Zro(x_272);
        auto x_274 = Fst(x_272);
        InputChangeMetric(x_274, 1);
        std::string x_3603 = x_270;
        if (x_3603 == "attributes") {
          std::string x_3604 = x_271;
          if (x_3604 == "width") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.attr, "width", x_273);
            return MakeUnit();
          } else if (x_3604 == "image_height") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.attr, "image_height", x_273);
            return MakeUnit();
          } else if (x_3604 == "image_width") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.attr, "image_width", x_273);
            return MakeUnit();
          } else if (x_3604 == "height") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.attr, "height", x_273);
            return MakeUnit();
          } else if (x_3604 == "viewBox") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.attr, "viewBox", x_273);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3603 == "properties") {
          std::string x_3605 = x_271;
          if (x_3605 == "width") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.prop, "width", x_273);
            return MakeUnit();
          } else if (x_3605 == "flex-grow") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.prop, "flex-grow", x_273);
            return MakeUnit();
          } else if (x_3605 == "height") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.prop, "height", x_273);
            return MakeUnit();
          } else if (x_3605 == "display") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.prop, "display", x_273);
            return MakeUnit();
          } else if (x_3605 == "position") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.prop, "position", x_273);
            return MakeUnit();
          } else if (x_3605 == "flex-shrink") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.prop, "flex-shrink", x_273);
            return MakeUnit();
          } else if (x_3605 == "flex-direction") {
            WriteMetric(x_274);
            HashtblAddExn(x_265.prop, "flex-direction", x_273);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_266) {
        return [&](const auto &x_267) {
          return x_260(MakePair(MakePair(x_267, ListNthExn(x_265.children, x_266)), x_263));
        };
      });
}
auto insert_value_x_11(const auto &x_261) { return x_260(x_261); }
auto x_275(const auto &x_276) {
  auto x_277 = Zro(x_276);
  auto x_278 = Fst(x_276);
  auto x_279 = Zro(x_277);
  auto x_280 = Fst(x_277);
  return ListMatch(
      x_279,
      [&](const auto &x_283) {
        auto x_284 = Zro(x_278);
        auto x_285 = Zro(x_284);
        auto x_286 = Fst(x_284);
        auto x_287 = Fst(x_278);
        InputChangeMetric(x_287, 1);
        std::string x_3606 = x_285;
        if (x_3606 == "attributes") {
          std::string x_3607 = x_286;
          if (x_3607 == "width") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.attr, "width");
            return MakeUnit();
          } else if (x_3607 == "image_height") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.attr, "image_height");
            return MakeUnit();
          } else if (x_3607 == "image_width") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.attr, "image_width");
            return MakeUnit();
          } else if (x_3607 == "height") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.attr, "height");
            return MakeUnit();
          } else if (x_3607 == "viewBox") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.attr, "viewBox");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3606 == "properties") {
          std::string x_3608 = x_286;
          if (x_3608 == "width") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.prop, "width");
            return MakeUnit();
          } else if (x_3608 == "flex-grow") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.prop, "flex-grow");
            return MakeUnit();
          } else if (x_3608 == "height") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.prop, "height");
            return MakeUnit();
          } else if (x_3608 == "display") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.prop, "display");
            return MakeUnit();
          } else if (x_3608 == "position") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.prop, "position");
            return MakeUnit();
          } else if (x_3608 == "flex-shrink") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.prop, "flex-shrink");
            return MakeUnit();
          } else if (x_3608 == "flex-direction") {
            WriteMetric(x_287);
            HashtblForceRemove(x_280.prop, "flex-direction");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_281) {
        return [&](const auto &x_282) {
          return x_275(MakePair(MakePair(x_282, ListNthExn(x_280.children, x_281)), x_278));
        };
      });
}
auto delete_value_x_10(const auto &x_276) { return x_275(x_276); }
auto x_288(const auto &x_289) {
  auto x_290 = Zro(x_289);
  auto x_291 = Fst(x_289);
  auto x_292 = Zro(x_290);
  auto x_293 = Fst(x_290);
  return ListMatch(
      x_292,
      [&](const auto &x_296) {
        auto x_297 = Zro(x_291);
        auto x_298 = Zro(x_297);
        auto x_299 = Fst(x_297);
        auto x_300 = Fst(x_291);
        auto x_301 = Zro(x_300);
        auto x_302 = Fst(x_300);
        InputChangeMetric(x_302, 1);
        std::string x_3609 = x_298;
        if (x_3609 == "attributes") {
          std::string x_3610 = x_299;
          if (x_3610 == "width") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.attr, "width");
            WriteMetric(x_302);
            HashtblAddExn(x_293.attr, "width", x_301);
            return MakeUnit();
          } else if (x_3610 == "image_height") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.attr, "image_height");
            WriteMetric(x_302);
            HashtblAddExn(x_293.attr, "image_height", x_301);
            return MakeUnit();
          } else if (x_3610 == "image_width") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.attr, "image_width");
            WriteMetric(x_302);
            HashtblAddExn(x_293.attr, "image_width", x_301);
            return MakeUnit();
          } else if (x_3610 == "height") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.attr, "height");
            WriteMetric(x_302);
            HashtblAddExn(x_293.attr, "height", x_301);
            return MakeUnit();
          } else if (x_3610 == "viewBox") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.attr, "viewBox");
            WriteMetric(x_302);
            HashtblAddExn(x_293.attr, "viewBox", x_301);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3609 == "properties") {
          std::string x_3611 = x_299;
          if (x_3611 == "width") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.prop, "width");
            WriteMetric(x_302);
            HashtblAddExn(x_293.prop, "width", x_301);
            return MakeUnit();
          } else if (x_3611 == "flex-grow") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.prop, "flex-grow");
            WriteMetric(x_302);
            HashtblAddExn(x_293.prop, "flex-grow", x_301);
            return MakeUnit();
          } else if (x_3611 == "height") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.prop, "height");
            WriteMetric(x_302);
            HashtblAddExn(x_293.prop, "height", x_301);
            return MakeUnit();
          } else if (x_3611 == "display") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.prop, "display");
            WriteMetric(x_302);
            HashtblAddExn(x_293.prop, "display", x_301);
            return MakeUnit();
          } else if (x_3611 == "position") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.prop, "position");
            WriteMetric(x_302);
            HashtblAddExn(x_293.prop, "position", x_301);
            return MakeUnit();
          } else if (x_3611 == "flex-shrink") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.prop, "flex-shrink");
            WriteMetric(x_302);
            HashtblAddExn(x_293.prop, "flex-shrink", x_301);
            return MakeUnit();
          } else if (x_3611 == "flex-direction") {
            WriteMetric(x_302);
            HashtblForceRemove(x_293.prop, "flex-direction");
            WriteMetric(x_302);
            HashtblAddExn(x_293.prop, "flex-direction", x_301);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_294) {
        return [&](const auto &x_295) {
          return x_288(MakePair(MakePair(x_295, ListNthExn(x_293.children, x_294)), x_291));
        };
      });
}
auto replace_value_x_9(const auto &x_289) { return x_288(x_289); }
auto x_303(const auto &x_304) {
  auto x_305 = Zro(x_304);
  auto x_306 = Fst(x_304);
  auto x_307 = Zro(x_305);
  auto x_308 = Fst(x_305);
  return ListMatch(
      x_307, [&](const auto &x_315) { return Panic(); },
      [&](const auto &x_309) {
        return [&](const auto &x_310) {
          return ListMatch(
              x_310,
              [&](const auto &x_313) {
                OutputChangeMetric(x_306, layout_size_x_3(ListNthExn(x_308.children, x_309)));
                auto x_314 = ListSplitN(x_308.children, x_309);
                x_308.children = ListAppend(Zro(x_314), ListTailExn(Fst(x_314)));
              },
              [&](const auto &x_311) {
                return [&](const auto &x_312) {
                  return x_303(MakePair(MakePair(x_310, ListNthExn(x_308.children, x_309)), x_306));
                };
              });
        };
      });
}
auto remove_layout_node_x_8(const auto &x_304) { return x_303(x_304); }
auto x_316(const auto &x_317) {
  auto x_318 = Zro(x_317);
  auto x_319 = Fst(x_317);
  auto x_320 = Zro(x_318);
  auto x_321 = Fst(x_318);
  return ListMatch(
      x_320, [&](const auto &x_399) { return Panic(); },
      [&](const auto &x_322) {
        return [&](const auto &x_323) {
          return ListMatch(
              x_323,
              [&](const auto &x_326) {
                InputChangeMetric(x_319, node_size_x_4(ListNthExn(x_321.children, x_322)));
                auto x_327 = ListSplitN(x_321.children, x_322);
                auto x_328 = Zro(x_327);
                auto x_329 = Fst(x_327);
                return ListMatch(
                    x_329, [&](const auto &x_398) { return Panic(); },
                    [&](const auto &x_330) {
                      return [&](const auto &x_331) {
                        x_321.children = ListAppend(x_328, x_331);
                        return MakeUnit();
                      };
                    });
              },
              [&](const auto &x_324) {
                return [&](const auto &x_325) {
                  return x_316(MakePair(MakePair(x_323, ListNthExn(x_321.children, x_322)), x_319));
                };
              });
        };
      });
}
auto remove_node_x_7(const auto &x_317) { return x_316(x_317); }
auto x_400(const auto &x_401) {
  auto x_402 = Zro(x_401);
  auto x_403 = Fst(x_401);
  auto x_404 = Zro(x_402);
  auto x_405 = Fst(x_402);
  return ListMatch(
      x_404, [&](const auto &x_414) { return Panic(); },
      [&](const auto &x_406) {
        return [&](const auto &x_407) {
          return ListMatch(
              x_407,
              [&](const auto &x_410) {
                auto x_411 = Zro(x_403);
                auto x_412 = Fst(x_403);
                OutputChangeMetric(x_412, layout_size_x_3(x_411));
                auto x_413 = ListSplitN(x_405.children, x_406);
                x_405.children = ListAppend(Zro(x_413), Cons(x_411, Fst(x_413)));
              },
              [&](const auto &x_408) {
                return [&](const auto &x_409) {
                  return x_400(MakePair(MakePair(x_407, ListNthExn(x_405.children, x_406)), x_403));
                };
              });
        };
      });
}
auto add_layout_node_x_6(const auto &x_401) { return x_400(x_401); }
auto x_415(const auto &x_416) {
  auto x_417 = Zro(x_416);
  auto x_418 = Fst(x_416);
  auto x_419 = Zro(x_417);
  auto x_420 = Fst(x_417);
  return ListMatch(
      x_419, [&](const auto &x_497) { return Panic(); },
      [&](const auto &x_421) {
        return [&](const auto &x_422) {
          return ListMatch(
              x_422,
              [&](const auto &x_425) {
                auto x_426 = Zro(x_418);
                auto x_427 = Fst(x_418);
                InputChangeMetric(x_427, node_size_x_4(x_426));
                auto x_428 = ListSplitN(x_420.children, x_421);
                auto x_429 = Zro(x_428);
                auto x_430 = Fst(x_428);
                x_420.children = ListAppend(x_429, Cons(x_426, x_430));
                x_426.parent = Some(x_420);
                return MakeUnit();
              },
              [&](const auto &x_423) {
                return [&](const auto &x_424) {
                  return x_415(MakePair(MakePair(x_422, ListNthExn(x_420.children, x_421)), x_418));
                };
              });
        };
      });
}
auto add_node_x_5(const auto &x_416) { return x_415(x_416); }
auto x_498(const auto &x_499) {
  return IntAdd(1, ListIntSum(x_499.children, [&](const auto &x_500) { return x_498(x_500); }));
}
auto node_size_x_4(const auto &x_499) { return x_498(x_499); }
auto x_501(const auto &x_502) {
  return IntAdd(1, ListIntSum(x_502.children, [&](const auto &x_503) { return x_501(x_503); }));
}
auto layout_size_x_3(const auto &x_502) { return x_501(x_502); }
auto x_504(const auto &x_505) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_505)), [&](const auto &x_506) { return x_504(x_506); }));
}
auto json_to_layout_node_x_2(const auto &x_505) { return x_504(x_505); }
auto x_507(const auto &x_508) {
  return MakeNode(x_508.name, x_508.attr, x_508.prop, x_508.extern_id,
                  ListMap(x_508.children, [&](const auto &x_509) { return x_507(x_509); }));
}
auto node_to_fs_node_x_1(const auto &x_508) { return x_507(x_508); }
auto x_510(const auto &x_511) {
  return MakeNode(JsonToString(JsonMember("name", x_511)), JsonToDict(JsonMember("attributes", x_511)),
                  JsonToDict(JsonMember("properties", x_511)), JsonToInt(JsonMember("id", x_511)),
                  ListMap(JsonToList(JsonMember("children", x_511)), [&](const auto &x_512) { return x_510(x_512); }));
}
auto json_to_node_aux_x_0(const auto &x_511) { return x_510(x_511); }
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
        std::string x_3612 = JsonToString(JsonMember("name", x_31));
        if (x_3612 == "add") {
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
        } else if (x_3612 == "recalculate") {
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
        } else if (x_3612 == "remove") {
          return remove_node_x_7(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_38) { return JsonToInt(x_38); }),
                       x_21),
              x_15));
        } else if (x_3612 == "replace") {
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
        } else if (x_3612 == "replace_value") {
          return replace_value_x_9(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_43) { return JsonToInt(x_43); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3612 == "delete_value") {
          return delete_value_x_10(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_44) { return JsonToInt(x_44); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))), x_15)));
        } else if (x_3612 == "insert_value") {
          return insert_value_x_11(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_45) { return JsonToInt(x_45); }),
                       x_21),
              MakePair(MakePair(JsonToString(JsonMember("type", x_31)), JsonToString(JsonMember("key", x_31))),
                       MakePair(JsonToValue(JsonMember("value", x_31)), x_15))));
        } else if (x_3612 == "layout_remove") {
          return remove_layout_node_x_8(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_46) { return JsonToInt(x_46); }),
                       x_22),
              x_15));
        } else if (x_3612 == "layout_add") {
          return add_layout_node_x_6(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_47) { return JsonToInt(x_47); }),
                       x_22),
              MakePair(json_to_layout_node_x_2(JsonMember("node", x_31)), x_15)));
        } else if (x_3612 == "layout_replace") {
          return replace_layout_node_x_49(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_31)), [&](const auto &x_48) { return JsonToInt(x_48); }),
                       x_22),
              json_to_layout_node_x_2(JsonMember("node", x_31))));
        } else if (x_3612 == "layout_info_changed") {
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