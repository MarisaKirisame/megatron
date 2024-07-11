auto var_modified_x_1001(const auto &x_1003) {
  return [&](const auto &x_1004) { return MakeUnit(); };
}
auto eval_expr_x_998(const auto &x_1011) {
  return [&](const auto &x_1012) {
    if (BoolOfValue((IsSome(x_1011.prev)) ? (not(UnSome(x_1011.prev).var_line_break)) : (VBool(false)))) {
      return max(x_1011.var_height_external, UnSome(x_1011.prev).var_line_height);
    } else {
      return x_1011.var_height_external;
    }
  };
}
auto var_modified_x_996(const auto &x_1029) {
  return [&](const auto &x_1030) { return MakeUnit(); };
}
auto eval_expr_x_993(const auto &x_1033) {
  return [&](const auto &x_1034) {
    if (BoolOfValue(eq(x_1033.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_1033.var_height_internal;
    }
  };
}
auto var_modified_x_991(const auto &x_1043) {
  return [&](const auto &x_1044) { return MakeUnit(); };
}
auto eval_expr_x_988(const auto &x_1047) {
  return [&](const auto &x_1048) {
    if (BoolOfValue(x_1047.var_intrinsic_height_is_height)) {
      return x_1047.var_intrinsic_height_internal;
    } else {
      if (BoolOfValue((IsSome(x_1047.parent)) ? (UnSome(x_1047.parent).var_is_flex_column) : (VBool(false)))) {
        return plus(x_1047.var_intrinsic_height_internal,
                    mult(x_1047.var_flex_amount, UnSome(x_1047.parent).var_flex_unit));
      } else {
        if (BoolOfValue(has_suffix(x_1047.var_height_expr, VString("%")))) {
          return mult(x_1047.var_box_height,
                      divide(string_to_float(strip_suffix(x_1047.var_height_expr, VString("%"))), VFloat(100.)));
        } else {
          if (BoolOfValue(eq(x_1047.var_height_expr, VString("fit-content")))) {
            return max(x_1047.var_box_height, x_1047.var_intrinsic_height_internal);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_986(const auto &x_1101) {
  return [&](const auto &x_1102) { return MakeUnit(); };
}
auto eval_expr_x_983(const auto &x_1110) {
  return [&](const auto &x_1111) {
    if (IsSome(x_1110.prev)) {
      if (BoolOfValue((BoolOfValue(x_1110.var_line_break)) ? (VBool(true)) : (UnSome(x_1110.prev).var_line_break))) {
        return plus(UnSome(x_1110.prev).var_y, UnSome(x_1110.prev).var_line_height);
      } else {
        return UnSome(x_1110.prev).var_y;
      }
    } else {
      if (IsSome(x_1110.parent)) {
        return UnSome(x_1110.parent).var_y;
      } else {
        return VFloat(0.);
      }
    }
  };
}
auto var_modified_x_981(const auto &x_1136) {
  return [&](const auto &x_1137) { return MakeUnit(); };
}
auto eval_expr_x_978(const auto &x_1141) {
  return [&](const auto &x_1142) {
    if (BoolOfValue(eq(x_1141.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_1141.var_width_internal;
    }
  };
}
auto var_modified_x_976(const auto &x_1151) {
  return [&](const auto &x_1152) { return MakeUnit(); };
}
auto eval_expr_x_973(const auto &x_1155) {
  return [&](const auto &x_1156) {
    if (BoolOfValue(x_1155.var_intrinsic_width_is_width)) {
      return x_1155.var_intrinsic_width_internal;
    } else {
      if (BoolOfValue((IsSome(x_1155.parent)) ? (UnSome(x_1155.parent).var_is_flex_row) : (VBool(false)))) {
        return plus(x_1155.var_intrinsic_width_internal,
                    mult(x_1155.var_flex_amount, UnSome(x_1155.parent).var_flex_unit));
      } else {
        if (BoolOfValue(has_suffix(x_1155.var_width_expr, VString("%")))) {
          return mult(x_1155.var_box_width,
                      divide(string_to_float(strip_suffix(x_1155.var_width_expr, VString("%"))), VFloat(100.)));
        } else {
          if (BoolOfValue(eq(x_1155.var_width_expr, VString("fit-content")))) {
            return max(x_1155.var_box_width, x_1155.var_intrinsic_width_internal);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_971(const auto &x_1209) {
  return [&](const auto &x_1210) { return MakeUnit(); };
}
auto eval_expr_x_968(const auto &x_1215) {
  return [&](const auto &x_1216) {
    if (IsSome(x_1215.prev)) {
      if (BoolOfValue((BoolOfValue(x_1215.var_line_break)) ? (VBool(true)) : (UnSome(x_1215.prev).var_line_break))) {
        return VFloat(0.);
      } else {
        return plus(UnSome(x_1215.prev).var_x, UnSome(x_1215.prev).var_width_external);
      }
    } else {
      if (IsSome(x_1215.parent)) {
        return UnSome(x_1215.parent).var_x;
      } else {
        return VFloat(0.);
      }
    }
  };
}
auto var_modified_x_966(const auto &x_1237) {
  return [&](const auto &x_1238) { return MakeUnit(); };
}
auto eval_expr_x_963(const auto &x_1241) {
  return [&](const auto &x_1242) {
    if (BoolOfValue(gt(x_1241.var_left_over, VFloat(0.)))) {
      return divide(x_1241.var_left_over, x_1241.var_flex_grow_sum);
    } else {
      return divide(x_1241.var_left_over, x_1241.var_flex_shrink_sum);
    }
  };
}
auto var_modified_x_961(const auto &x_1263) {
  return [&](const auto &x_1264) { return MakeUnit(); };
}
auto eval_expr_x_958(const auto &x_1267) {
  return [&](const auto &x_1268) {
    if (BoolOfValue((IsSome(x_1267.parent)) ? (gt(UnSome(x_1267.parent).var_left_over, VFloat(0.))) : (VBool(false)))) {
      return x_1267.var_flex_grow;
    } else {
      return x_1267.var_flex_shrink;
    }
  };
}
auto var_modified_x_956(const auto &x_1281) {
  return [&](const auto &x_1282) { return MakeUnit(); };
}
auto eval_expr_x_953(const auto &x_1287) {
  return [&](const auto &x_1288) {
    if (BoolOfValue(x_1287.var_is_flex_row)) {
      return minus(x_1287.var_box_width,
                   (IsSome(ListLast(x_1287.children))) ? (UnSome(ListLast(x_1287.children)).var_intrinsic_width_sum)
                                                       : (VFloat(0.)));
    } else {
      return minus(x_1287.var_box_height,
                   (IsSome(ListLast(x_1287.children))) ? (UnSome(ListLast(x_1287.children)).var_intrinsic_height_sum)
                                                       : (VFloat(0.)));
    }
  };
}
auto var_modified_x_951(const auto &x_1309) {
  return [&](const auto &x_1310) { return MakeUnit(); };
}
auto eval_expr_x_948(const auto &x_1314) {
  return [&](const auto &x_1315) {
    if (IsSome(x_1314.parent)) {
      return UnSome(x_1314.parent).var_height_internal;
    } else {
      return VFloat(1080.);
    }
  };
}
auto var_modified_x_946(const auto &x_1320) {
  return [&](const auto &x_1321) { return MakeUnit(); };
}
auto eval_expr_x_943(const auto &x_1325) {
  return [&](const auto &x_1326) {
    if (IsSome(x_1325.parent)) {
      return UnSome(x_1325.parent).var_width_internal;
    } else {
      return VFloat(1920.);
    }
  };
}
auto var_modified_x_939(const auto &x_1331) {
  return [&](const auto &x_1332) { return MakeUnit(); };
}
auto eval_expr_x_936(const auto &x_1350) {
  return [&](const auto &x_1351) {
    if (BoolOfValue(eq(x_1350.var_display, VString("none")))) {
      return VBool(false);
    } else {
      if (BoolOfValue(eq(x_1350.var_position, VString("absolute")))) {
        return VBool(false);
      } else {
        if (BoolOfValue((IsSome(x_1350.parent))
                            ? ((BoolOfValue(eq(UnSome(x_1350.parent).var_display, VString("flex"))))
                                   ? (VBool(true))
                                   : (eq(UnSome(x_1350.parent).var_display, VString("inline-flex"))))
                            : (VBool(false)))) {
          return VBool(true);
        } else {
          if (BoolOfValue(eq(x_1350.var_display, VString("block")))) {
            return VBool(true);
          } else {
            if (BoolOfValue(eq(x_1350.var_display, VString("inline")))) {
              return VBool(false);
            } else {
              if (BoolOfValue(eq(x_1350.var_display, VString("inline-block")))) {
                return VBool(false);
              } else {
                if (BoolOfValue(eq(x_1350.var_display, VString("flex")))) {
                  if (BoolOfValue(eq(HashtblForceFind(x_1350.prop, "flex-direction"), VString("row")))) {
                    return VBool(false);
                  } else {
                    if (BoolOfValue(eq(HashtblForceFind(x_1350.prop, "flex-direction"), VString("column")))) {
                      return VBool(true);
                    } else {
                      if (BoolOfValue(eq(HashtblForceFind(x_1350.prop, "flex-direction"), VString("column-reverse")))) {
                        return VBool(true);
                      } else {
                        return Panic();
                      }
                    }
                  }
                } else {
                  if (BoolOfValue(eq(x_1350.var_display, VString("inline-flex")))) {
                    return VBool(false);
                  } else {
                    if (BoolOfValue(eq(x_1350.var_display, VString("contents")))) {
                      return VBool(false);
                    } else {
                      if (BoolOfValue(eq(x_1350.var_display, VString("table")))) {
                        return VBool(true);
                      } else {
                        if (BoolOfValue(eq(x_1350.var_display, VString("table-row-group")))) {
                          return VBool(true);
                        } else {
                          if (BoolOfValue(eq(x_1350.var_display, VString("table-row")))) {
                            return VBool(true);
                          } else {
                            if (BoolOfValue(eq(x_1350.var_display, VString("table-cell")))) {
                              return VBool(false);
                            } else {
                              if (BoolOfValue(eq(x_1350.var_display, VString("list-item")))) {
                                return VBool(true);
                              } else {
                                if (BoolOfValue(eq(x_1350.var_display, VString("grid")))) {
                                  return VBool(true);
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
  };
}
auto var_modified_x_934(const auto &x_1428) {
  return [&](const auto &x_1429) { return MakeUnit(); };
}
auto eval_expr_x_931(const auto &x_1431) {
  return [&](const auto &x_1432) {
    if (BoolOfValue((BoolOfValue(not(VBool(IsSome(x_1431.parent))))) ? (VBool(true))
                                                                     : (UnSome(x_1431.parent).var_visible))) {
      if (BoolOfValue(neq(x_1431.var_display, VString("none")))) {
        if (BoolOfValue(not(x_1431.var_inside_svg))) {
          return not(x_1431.var_disabled);
        } else {
          return VBool(false);
        }
      } else {
        return VBool(false);
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_929(const auto &x_1449) {
  return [&](const auto &x_1450) { return MakeUnit(); };
}
auto eval_expr_x_926(const auto &x_1458) {
  return [&](const auto &x_1459) {
    if (StringEqual(x_1458.name, "NOSCRIPT")) {
      return VBool(true);
    } else {
      if (IsSome(x_1458.parent)) {
        return UnSome(x_1458.parent).var_disabled;
      } else {
        return VBool(false);
      }
    }
  };
}
auto var_modified_x_924(const auto &x_1464) {
  return [&](const auto &x_1465) { return MakeUnit(); };
}
auto eval_expr_x_921(const auto &x_1473) {
  return [&](const auto &x_1474) {
    if (IsSome(x_1473.parent)) {
      if (BoolOfValue(UnSome(x_1473.parent).var_is_svg_block)) {
        return VBool(true);
      } else {
        return UnSome(x_1473.parent).var_inside_svg;
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_919(const auto &x_1483) {
  return [&](const auto &x_1484) { return MakeUnit(); };
}
auto eval_expr_x_916(const auto &x_1486) {
  return [&](const auto &x_1487) { return eq(VString(x_1486.name), VString("svg")); };
}
auto var_modified_x_914(const auto &x_1488) {
  return [&](const auto &x_1489) { return MakeUnit(); };
}
auto eval_expr_x_911(const auto &x_1498) {
  return [&](const auto &x_1499) { return neq(x_1498.var_height_attr_expr, VString("auto")); };
}
auto var_modified_x_909(const auto &x_1504) {
  return [&](const auto &x_1505) { return MakeUnit(); };
}
auto eval_expr_x_906(const auto &x_1513) {
  return [&](const auto &x_1514) {
    if (BoolOfValue(not(VBool(IsSome(HashtblFind(x_1513.attr, "height")))))) {
      return VString("auto");
    } else {
      if (BoolOfValue((BoolOfValue(string_is_float(HashtblForceFind(x_1513.attr, "height"))))
                          ? (VBool(true))
                          : (has_suffix(HashtblForceFind(x_1513.attr, "height"), VString("%"))))) {
        return HashtblForceFind(x_1513.attr, "height");
      } else {
        if (BoolOfValue(eq(HashtblForceFind(x_1513.attr, "height"), VString("Auto")))) {
          return VString("auto");
        } else {
          return Panic();
        }
      }
    }
  };
}
auto var_modified_x_904(const auto &x_1525) {
  return [&](const auto &x_1526) { return MakeUnit(); };
}
auto eval_expr_x_901(const auto &x_1536) {
  return [&](const auto &x_1537) { return neq(x_1536.var_width_attr_expr, VString("auto")); };
}
auto var_modified_x_899(const auto &x_1542) {
  return [&](const auto &x_1543) { return MakeUnit(); };
}
auto eval_expr_x_896(const auto &x_1551) {
  return [&](const auto &x_1552) {
    if (BoolOfValue(not(VBool(IsSome(HashtblFind(x_1551.attr, "width")))))) {
      return VString("auto");
    } else {
      if (BoolOfValue((BoolOfValue(string_is_float(HashtblForceFind(x_1551.attr, "width"))))
                          ? (VBool(true))
                          : (has_suffix(HashtblForceFind(x_1551.attr, "width"), VString("%"))))) {
        return HashtblForceFind(x_1551.attr, "width");
      } else {
        if (BoolOfValue(eq(HashtblForceFind(x_1551.attr, "width"), VString("Auto")))) {
          return VString("auto");
        } else {
          return Panic();
        }
      }
    }
  };
}
auto var_modified_x_894(const auto &x_1563) {
  return [&](const auto &x_1564) { return MakeUnit(); };
}
auto eval_expr_x_891(const auto &x_1567) {
  return [&](const auto &x_1568) {
    if (BoolOfValue((IsSome(x_1567.parent)) ? ((BoolOfValue(eq(UnSome(x_1567.parent).var_display, VString("flex"))))
                                                   ? (VBool(true))
                                                   : (eq(UnSome(x_1567.parent).var_display, VString("inline-flex"))))
                                            : (VBool(false)))) {
      if (BoolOfValue((BoolOfValue(eq(UnSome(x_1567.parent).var_flex_direction, VString("column"))))
                          ? (VBool(true))
                          : (eq(UnSome(x_1567.parent).var_flex_direction, VString("column-reverse"))))) {
        return VBool(true);
      } else {
        if (BoolOfValue(eq(UnSome(x_1567.parent).var_flex_direction, VString("row")))) {
          return VBool(false);
        } else {
          return Panic();
        }
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_889(const auto &x_1593) {
  return [&](const auto &x_1594) { return MakeUnit(); };
}
auto eval_expr_x_886(const auto &x_1598) {
  return [&](const auto &x_1599) {
    if (BoolOfValue((IsSome(x_1598.parent)) ? ((BoolOfValue(eq(UnSome(x_1598.parent).var_display, VString("flex"))))
                                                   ? (VBool(true))
                                                   : (eq(UnSome(x_1598.parent).var_display, VString("inline-flex"))))
                                            : (VBool(false)))) {
      if (BoolOfValue(eq(UnSome(x_1598.parent).var_flex_direction, VString("row")))) {
        return VBool(true);
      } else {
        if (BoolOfValue((BoolOfValue(eq(UnSome(x_1598.parent).var_flex_direction, VString("column"))))
                            ? (VBool(true))
                            : (eq(UnSome(x_1598.parent).var_flex_direction, VString("column-reverse"))))) {
          return VBool(false);
        } else {
          return Panic();
        }
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_884(const auto &x_1624) {
  return [&](const auto &x_1625) { return MakeUnit(); };
}
auto eval_expr_x_881(const auto &x_1632) {
  return [&](const auto &x_1633) {
    if (IsSome(HashtblFind(x_1632.prop, "flex-direction"))) {
      return HashtblForceFind(x_1632.prop, "flex-direction");
    } else {
      return VString("");
    }
  };
}
auto var_modified_x_879(const auto &x_1636) {
  return [&](const auto &x_1637) { return MakeUnit(); };
}
auto eval_expr_x_876(const auto &x_1642) {
  return [&](const auto &x_1643) {
    return plus((IsSome(x_1642.prev)) ? (UnSome(x_1642.prev).var_flex_shrink_sum) : (VFloat(0.)),
                x_1642.var_flex_shrink);
  };
}
auto var_modified_x_874(const auto &x_1652) {
  return [&](const auto &x_1653) { return MakeUnit(); };
}
auto eval_expr_x_871(const auto &x_1658) {
  return [&](const auto &x_1659) {
    return plus((IsSome(x_1658.prev)) ? (UnSome(x_1658.prev).var_flex_grow_sum) : (VFloat(0.)), x_1658.var_flex_grow);
  };
}
auto var_modified_x_869(const auto &x_1668) {
  return [&](const auto &x_1669) { return MakeUnit(); };
}
auto eval_expr_x_866(const auto &x_1672) {
  return [&](const auto &x_1673) {
    if (IsSome(HashtblFind(x_1672.prop, "flex-shrink"))) {
      return string_to_float(HashtblForceFind(x_1672.prop, "flex-shrink"));
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_864(const auto &x_1676) {
  return [&](const auto &x_1677) { return MakeUnit(); };
}
auto eval_expr_x_861(const auto &x_1680) {
  return [&](const auto &x_1681) {
    if (IsSome(HashtblFind(x_1680.prop, "flex-grow"))) {
      return string_to_float(HashtblForceFind(x_1680.prop, "flex-grow"));
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_859(const auto &x_1684) {
  return [&](const auto &x_1685) { return MakeUnit(); };
}
auto eval_expr_x_856(const auto &x_1691) {
  return [&](const auto &x_1692) {
    if (IsSome(HashtblFind(x_1691.prop, "position"))) {
      return HashtblForceFind(x_1691.prop, "position");
    } else {
      return VString("static");
    }
  };
}
auto var_modified_x_854(const auto &x_1695) {
  return [&](const auto &x_1696) { return MakeUnit(); };
}
auto eval_expr_x_851(const auto &x_1722) {
  return [&](const auto &x_1723) {
    if (IsSome(HashtblFind(x_1722.prop, "display"))) {
      return HashtblForceFind(x_1722.prop, "display");
    } else {
      return VString("block");
    }
  };
}
auto var_modified_x_847(const auto &x_1726) {
  return [&](const auto &x_1727) { return MakeUnit(); };
}
auto eval_expr_x_844(const auto &x_1737) {
  return [&](const auto &x_1738) {
    if (IsSome(x_1737.prev)) {
      if (BoolOfValue(x_1737.var_line_break)) {
        return plus(UnSome(x_1737.prev).var_finished_intrinsic_height_sum,
                    plus(UnSome(x_1737.prev).var_intrinsic_current_line_height, x_1737.var_intrinsic_height_external));
      } else {
        return UnSome(x_1737.prev).var_finished_intrinsic_height_sum;
      }
    } else {
      if (BoolOfValue(x_1737.var_line_break)) {
        return x_1737.var_intrinsic_height_external;
      } else {
        return VFloat(0.);
      }
    }
  };
}
auto var_modified_x_842(const auto &x_1767) {
  return [&](const auto &x_1768) { return MakeUnit(); };
}
auto eval_expr_x_839(const auto &x_1778) {
  return [&](const auto &x_1779) {
    if (BoolOfValue(x_1778.var_line_break)) {
      return VFloat(0.);
    } else {
      return max(x_1778.var_intrinsic_height_external,
                 (IsSome(x_1778.prev)) ? (UnSome(x_1778.prev).var_intrinsic_current_line_height) : (VFloat(0.)));
    }
  };
}
auto var_modified_x_837(const auto &x_1792) {
  return [&](const auto &x_1793) { return MakeUnit(); };
}
auto eval_expr_x_834(const auto &x_1800) {
  return [&](const auto &x_1801) {
    return plus((IsSome(x_1800.prev)) ? (UnSome(x_1800.prev).var_intrinsic_height_sum) : (VFloat(0.)),
                x_1800.var_intrinsic_height_external);
  };
}
auto var_modified_x_832(const auto &x_1810) {
  return [&](const auto &x_1811) { return MakeUnit(); };
}
auto eval_expr_x_829(const auto &x_1816) {
  return [&](const auto &x_1817) {
    if (BoolOfValue(eq(x_1816.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_1816.var_intrinsic_height_internal;
    }
  };
}
auto var_modified_x_827(const auto &x_1826) {
  return [&](const auto &x_1827) { return MakeUnit(); };
}
auto eval_expr_x_824(const auto &x_1832) {
  return [&](const auto &x_1833) {
    if (BoolOfValue(eq(x_1832.var_display, VString("none")))) {
      return VFloat(0.);
    } else {
      if (BoolOfValue(x_1832.var_inside_svg)) {
        return VFloat(0.);
      } else {
        if (BoolOfValue(x_1832.var_disabled)) {
          return VFloat(0.);
        } else {
          if (BoolOfValue((BoolOfValue(neq(x_1832.var_height_expr, VString("auto"))))
                              ? ((BoolOfValue(not(has_suffix(x_1832.var_height_expr, VString("%")))))
                                     ? (neq(x_1832.var_height_expr, VString("fit-content")))
                                     : (VBool(false)))
                              : (VBool(false)))) {
            if (BoolOfValue(has_suffix(x_1832.var_height_expr, VString("px")))) {
              return string_to_float(strip_suffix(x_1832.var_height_expr, VString("px")));
            } else {
              if (BoolOfValue(has_suffix(x_1832.var_height_expr, VString("ch")))) {
                return string_to_float(strip_suffix(x_1832.var_height_expr, VString("ch")));
              } else {
                if (BoolOfValue(has_suffix(x_1832.var_height_expr, VString("lh")))) {
                  return string_to_float(strip_suffix(x_1832.var_height_expr, VString("lh")));
                } else {
                  return Panic();
                }
              }
            }
          } else {
            return plus(
                x_1832.var_children_intrinsic_height,
                (StringEqual(x_1832.name, "#text"))
                    ? ((IsSome(ListHead(x_1832.children))) ? (Panic()) : (VFloat(10.)))
                    : ((BoolOfValue(x_1832.var_is_default_case))
                           ? (VFloat(0.))
                           : ((StringEqual(x_1832.name, "BR"))
                                  ? ((IsSome(ListHead(x_1832.children))) ? (Panic()) : (VFloat(0.)))
                                  : ((StringEqual(x_1832.name, "INPUT"))
                                         ? (VFloat(10.))
                                         : ((StringEqual(x_1832.name, "svg"))
                                                ? ((BoolOfValue((BoolOfValue(x_1832.var_has_height_attr))
                                                                    ? (string_is_float(x_1832.var_height_attr_expr))
                                                                    : (VBool(false))))
                                                       ? (string_to_float(x_1832.var_height_attr_expr))
                                                       : ((IsSome(HashtblFind(x_1832.attr, "viewBox")))
                                                              ? (string_to_float(
                                                                    nth_by_sep(HashtblForceFind(x_1832.attr, "viewBox"),
                                                                               VString(" "), VInt(3))))
                                                              : ((BoolOfValue(
                                                                     (BoolOfValue(x_1832.var_has_height_attr))
                                                                         ? ((BoolOfValue(
                                                                                has_suffix(x_1832.var_height_attr_expr,
                                                                                           VString("%"))))
                                                                                ? (VBool(IsSome(HashtblFind(
                                                                                      x_1832.attr, "viewBox"))))
                                                                                : (VBool(false)))
                                                                         : (VBool(false))))
                                                                     ? (mult(
                                                                           string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_1832.attr, "viewBox"),
                                                                               VString(" "), VInt(3))),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_1832.var_height_attr_expr,
                                                                                      VString("%"))),
                                                                                  VFloat(100.))))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_1832.name, "IMG"))
                                                       ? ((BoolOfValue(x_1832.var_has_height_attr))
                                                              ? (string_to_float(x_1832.var_height_attr_expr))
                                                              : ((BoolOfValue(
                                                                     (IsSome(HashtblFind(x_1832.attr, "image_height")))
                                                                         ? (not(x_1832.var_has_width_attr))
                                                                         : (VBool(false))))
                                                                     ? (int_to_float(HashtblForceFind(x_1832.attr,
                                                                                                      "image_height")))
                                                                     : ((BoolOfValue(
                                                                            (BoolOfValue(x_1832.var_has_width_attr))
                                                                                ? ((BoolOfValue(
                                                                                       not(x_1832.var_has_height_attr)))
                                                                                       ? ((IsSome(HashtblFind(
                                                                                              x_1832.attr,
                                                                                              "image_width")))
                                                                                              ? (VBool(
                                                                                                    IsSome(HashtblFind(
                                                                                                        x_1832.attr,
                                                                                                        "image_"
                                                                                                        "height"))))
                                                                                              : (VBool(false)))
                                                                                       : (VBool(false)))
                                                                                : (VBool(false))))
                                                                            ? ((BoolOfValue(
                                                                                   neq(HashtblForceFind(x_1832.attr,
                                                                                                        "image_width"),
                                                                                       VInt(0))))
                                                                                   ? (mult(
                                                                                         string_to_float(
                                                                                             x_1832
                                                                                                 .var_width_attr_expr),
                                                                                         divide(
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_1832.attr,
                                                                                                     "image_height")),
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_1832.attr,
                                                                                                     "image_width")))))
                                                                                   : (VFloat(0.)))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_1832.name, "IFRAME"))
                                                       ? ((BoolOfValue(x_1832.var_has_height_attr))
                                                              ? (Panic())
                                                              : (VFloat(150.)))
                                                       : ((StringEqual(x_1832.name, "TEXTAREA"))
                                                              ? (VFloat(100.))
                                                              : ((StringEqual(x_1832.name, "VIDEO"))
                                                                     ? ((BoolOfValue(x_1832.var_has_height_attr))
                                                                            ? (Panic())
                                                                            : (VFloat(150.)))
                                                                     : (Panic()))))))))));
          }
        }
      }
    }
  };
}
auto var_modified_x_822(const auto &x_1978) {
  return [&](const auto &x_1979) { return MakeUnit(); };
}
auto eval_expr_x_819(const auto &x_1981) {
  return [&](const auto &x_1982) {
    if (BoolOfValue((BoolOfValue(eq(x_1981.var_display, VString("none"))))
                        ? (VBool(true))
                        : ((BoolOfValue(x_1981.var_inside_svg)) ? (VBool(true)) : (x_1981.var_disabled)))) {
      return VBool(true);
    } else {
      if (BoolOfValue((IsSome(x_1981.parent)) ? (UnSome(x_1981.parent).var_is_flex_column) : (VBool(false)))) {
        return VBool(false);
      } else {
        if (BoolOfValue((BoolOfValue(eq(x_1981.var_height_expr, VString("auto"))))
                            ? (VBool(true))
                            : ((BoolOfValue(has_suffix(x_1981.var_height_expr, VString("px"))))
                                   ? (VBool(true))
                                   : ((BoolOfValue(has_suffix(x_1981.var_height_expr, VString("ch"))))
                                          ? (VBool(true))
                                          : ((BoolOfValue(has_suffix(x_1981.var_height_expr, VString("lh"))))
                                                 ? (VBool(true))
                                                 : (eq(x_1981.var_height_expr, VString("max-content")))))))) {
          return VBool(true);
        } else {
          if (BoolOfValue((BoolOfValue(has_suffix(x_1981.var_height_expr, VString("%"))))
                              ? (VBool(true))
                              : (eq(x_1981.var_height_expr, VString("fit-content"))))) {
            return VBool(false);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_817(const auto &x_2031) {
  return [&](const auto &x_2032) { return MakeUnit(); };
}
auto eval_expr_x_814(const auto &x_2052) {
  return [&](const auto &x_2053) {
    if (IsSome(HashtblFind(x_2052.prop, "height"))) {
      return HashtblForceFind(x_2052.prop, "height");
    } else {
      return VString("auto");
    }
  };
}
auto var_modified_x_812(const auto &x_2056) {
  return [&](const auto &x_2057) { return MakeUnit(); };
}
auto eval_expr_x_809(const auto &x_2059) {
  return [&](const auto &x_2060) {
    if (IsSome(ListLast(x_2059.children))) {
      return plus(UnSome(ListLast(x_2059.children)).var_finished_intrinsic_height_sum,
                  UnSome(ListLast(x_2059.children)).var_intrinsic_current_line_height);
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_807(const auto &x_2069) {
  return [&](const auto &x_2070) { return MakeUnit(); };
}
auto eval_expr_x_804(const auto &x_2077) {
  return [&](const auto &x_2078) {
    return plus((IsSome(x_2077.prev)) ? (UnSome(x_2077.prev).var_intrinsic_width_sum) : (VFloat(0.)),
                x_2077.var_intrinsic_width_external);
  };
}
auto var_modified_x_802(const auto &x_2087) {
  return [&](const auto &x_2088) { return MakeUnit(); };
}
auto eval_expr_x_799(const auto &x_2095) {
  return [&](const auto &x_2096) {
    return max(x_2095.var_intrinsic_current_line_width,
               (IsSome(x_2095.prev)) ? (UnSome(x_2095.prev).var_intrinsic_width_max) : (VFloat(0.)));
  };
}
auto var_modified_x_797(const auto &x_2105) {
  return [&](const auto &x_2106) { return MakeUnit(); };
}
auto eval_expr_x_794(const auto &x_2111) {
  return [&](const auto &x_2112) {
    return plus(x_2111.var_intrinsic_width_external,
                (BoolOfValue((IsSome(x_2111.prev)) ? (not(UnSome(x_2111.prev).var_line_break)) : (VBool(false))))
                    ? (UnSome(x_2111.prev).var_intrinsic_current_line_width)
                    : (VFloat(0.)));
  };
}
auto var_modified_x_792(const auto &x_2125) {
  return [&](const auto &x_2126) { return MakeUnit(); };
}
auto eval_expr_x_789(const auto &x_2129) {
  return [&](const auto &x_2130) {
    if (BoolOfValue(eq(x_2129.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_2129.var_intrinsic_width_internal;
    }
  };
}
auto var_modified_x_787(const auto &x_2139) {
  return [&](const auto &x_2140) { return MakeUnit(); };
}
auto eval_expr_x_784(const auto &x_2145) {
  return [&](const auto &x_2146) {
    if (BoolOfValue(eq(x_2145.var_display, VString("none")))) {
      return VFloat(0.);
    } else {
      if (BoolOfValue(x_2145.var_inside_svg)) {
        return VFloat(0.);
      } else {
        if (BoolOfValue(x_2145.var_disabled)) {
          return VFloat(0.);
        } else {
          if (BoolOfValue((BoolOfValue(neq(x_2145.var_width_expr, VString("auto"))))
                              ? ((BoolOfValue(not(has_suffix(x_2145.var_width_expr, VString("%")))))
                                     ? ((BoolOfValue(neq(x_2145.var_width_expr, VString("fit-content"))))
                                            ? ((BoolOfValue(neq(x_2145.var_width_expr, VString("max-content"))))
                                                   ? (not(has_prefix(x_2145.var_width_expr, VString("calc"))))
                                                   : (VBool(false)))
                                            : (VBool(false)))
                                     : (VBool(false)))
                              : (VBool(false)))) {
            if (BoolOfValue(has_suffix(x_2145.var_width_expr, VString("px")))) {
              return string_to_float(strip_suffix(x_2145.var_width_expr, VString("px")));
            } else {
              if (BoolOfValue(has_suffix(x_2145.var_width_expr, VString("ch")))) {
                return string_to_float(strip_suffix(x_2145.var_width_expr, VString("ch")));
              } else {
                return Panic();
              }
            }
          } else {
            return plus(
                x_2145.var_children_intrinsic_width,
                (StringEqual(x_2145.name, "#text"))
                    ? ((IsSome(ListHead(x_2145.children))) ? (Panic()) : (VFloat(100.)))
                    : ((BoolOfValue(x_2145.var_is_default_case))
                           ? (VFloat(0.))
                           : ((StringEqual(x_2145.name, "BR"))
                                  ? ((IsSome(ListHead(x_2145.children))) ? (Panic()) : (VFloat(0.)))
                                  : ((StringEqual(x_2145.name, "INPUT"))
                                         ? (VFloat(100.))
                                         : ((StringEqual(x_2145.name, "svg"))
                                                ? ((BoolOfValue((BoolOfValue(x_2145.var_has_width_attr))
                                                                    ? (string_is_float(x_2145.var_width_attr_expr))
                                                                    : (VBool(false))))
                                                       ? (string_to_float(x_2145.var_width_attr_expr))
                                                       : ((BoolOfValue(
                                                              (BoolOfValue(not(x_2145.var_has_width_attr)))
                                                                  ? (VBool(IsSome(HashtblFind(x_2145.attr, "viewBox"))))
                                                                  : (VBool(false))))
                                                              ? (string_to_float(
                                                                    nth_by_sep(HashtblForceFind(x_2145.attr, "viewBox"),
                                                                               VString(" "), VInt(2))))
                                                              : ((BoolOfValue(
                                                                     (BoolOfValue(x_2145.var_has_width_attr))
                                                                         ? ((BoolOfValue(
                                                                                has_suffix(x_2145.var_width_attr_expr,
                                                                                           VString("%"))))
                                                                                ? (VBool(IsSome(HashtblFind(
                                                                                      x_2145.attr, "viewBox"))))
                                                                                : (VBool(false)))
                                                                         : (VBool(false))))
                                                                     ? (mult(
                                                                           string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_2145.attr, "viewBox"),
                                                                               VString(" "), VInt(2))),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_2145.var_width_attr_expr,
                                                                                      VString("%"))),
                                                                                  VFloat(100.))))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_2145.name, "IMG"))
                                                       ? ((BoolOfValue(x_2145.var_has_width_attr))
                                                              ? (string_to_float(x_2145.var_width_attr_expr))
                                                              : ((BoolOfValue(
                                                                     (IsSome(HashtblFind(x_2145.attr, "image_width")))
                                                                         ? (not(x_2145.var_has_height_attr))
                                                                         : (VBool(false))))
                                                                     ? (int_to_float(HashtblForceFind(x_2145.attr,
                                                                                                      "image_width")))
                                                                     : ((BoolOfValue(
                                                                            (BoolOfValue(
                                                                                not(x_2145.var_has_width_attr)))
                                                                                ? ((BoolOfValue(
                                                                                       x_2145.var_has_height_attr))
                                                                                       ? ((IsSome(HashtblFind(
                                                                                              x_2145.attr,
                                                                                              "image_width")))
                                                                                              ? (VBool(
                                                                                                    IsSome(HashtblFind(
                                                                                                        x_2145.attr,
                                                                                                        "image_"
                                                                                                        "height"))))
                                                                                              : (VBool(false)))
                                                                                       : (VBool(false)))
                                                                                : (VBool(false))))
                                                                            ? ((BoolOfValue(
                                                                                   neq(HashtblForceFind(x_2145.attr,
                                                                                                        "image_height"),
                                                                                       VInt(0))))
                                                                                   ? (mult(
                                                                                         string_to_float(
                                                                                             x_2145
                                                                                                 .var_height_attr_expr),
                                                                                         divide(
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_2145.attr,
                                                                                                     "image_width")),
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_2145.attr,
                                                                                                     "image_height")))))
                                                                                   : (VFloat(0.)))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_2145.name, "IFRAME"))
                                                       ? ((BoolOfValue(x_2145.var_has_width_attr))
                                                              ? (Panic())
                                                              : (VFloat(300.)))
                                                       : ((StringEqual(x_2145.name, "TEXTAREA"))
                                                              ? (VFloat(100.))
                                                              : ((StringEqual(x_2145.name, "VIDEO"))
                                                                     ? ((BoolOfValue(x_2145.var_has_width_attr))
                                                                            ? (Panic())
                                                                            : (VFloat(300.)))
                                                                     : (Panic()))))))))));
          }
        }
      }
    }
  };
}
auto var_modified_x_782(const auto &x_2299) {
  return [&](const auto &x_2300) { return MakeUnit(); };
}
auto eval_expr_x_779(const auto &x_2302) {
  return [&](const auto &x_2303) {
    if (IsSome(ListLast(x_2302.children))) {
      return UnSome(ListLast(x_2302.children)).var_intrinsic_width_max;
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_777(const auto &x_2308) {
  return [&](const auto &x_2309) { return MakeUnit(); };
}
auto eval_expr_x_774(const auto &x_2311) {
  return [&](const auto &x_2312) {
    if (BoolOfValue((BoolOfValue(eq(x_2311.var_display, VString("none"))))
                        ? (VBool(true))
                        : ((BoolOfValue(x_2311.var_inside_svg)) ? (VBool(true)) : (x_2311.var_disabled)))) {
      return VBool(true);
    } else {
      if (BoolOfValue((IsSome(x_2311.parent)) ? (UnSome(x_2311.parent).var_is_flex_row) : (VBool(false)))) {
        return VBool(false);
      } else {
        if (BoolOfValue((BoolOfValue(eq(x_2311.var_width_expr, VString("auto"))))
                            ? (VBool(true))
                            : ((BoolOfValue(has_suffix(x_2311.var_width_expr, VString("px"))))
                                   ? (VBool(true))
                                   : ((BoolOfValue(has_suffix(x_2311.var_width_expr, VString("ch"))))
                                          ? (VBool(true))
                                          : ((BoolOfValue(has_prefix(x_2311.var_width_expr, VString("calc("))))
                                                 ? (VBool(true))
                                                 : (eq(x_2311.var_width_expr, VString("max-content")))))))) {
          return VBool(true);
        } else {
          if (BoolOfValue((BoolOfValue(has_suffix(x_2311.var_width_expr, VString("%"))))
                              ? (VBool(true))
                              : (eq(x_2311.var_width_expr, VString("fit-content"))))) {
            return VBool(false);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_772(const auto &x_2361) {
  return [&](const auto &x_2362) { return MakeUnit(); };
}
auto eval_expr_x_769(const auto &x_2365) {
  return [&](const auto &x_2366) {
    if (BoolOfValue(eq(x_2365.var_display, VString("none")))) {
      return VBool(true);
    } else {
      if (BoolOfValue(x_2365.var_inside_svg)) {
        return VBool(true);
      } else {
        if (BoolOfValue(x_2365.var_disabled)) {
          return VBool(true);
        } else {if (BoolOfValue((StringEqual(x_2365.name,"#document"))?(VBool(true)):((StringEqual(x_2365.name,"#shadow-root"))?(VBool(true)):((StringEqual(x_2365.name,"DIV"))?(VBool(true)):((StringEqual(x_2365.name,"HTML"))?(VBool(true)):((StringEqual(x_2365.name,"BODY"))?(VBool(true)):((StringEqual(x_2365.name,"BUTTON"))?(VBool(true)):((StringEqual(x_2365.name,"FOOTER"))?(VBool(true)):((StringEqual(x_2365.name,"SELECT"))?(VBool(true)):((StringEqual(x_2365.name,"SECTION"))?(VBool(true)):((StringEqual(x_2365.name,"FORM"))?(VBool(true)):((StringEqual(x_2365.name,"CENTER"))?(VBool(true)):((StringEqual(x_2365.name,"TD"))?(VBool(true)):((StringEqual(x_2365.name,"TR"))?(VBool(true)):((StringEqual(x_2365.name,"TBODY"))?(VBool(true)):((StringEqual(x_2365.name,"TABLE"))?(VBool(true)):((StringEqual(x_2365.name,"SPAN"))?(VBool(true)):((StringEqual(x_2365.name,"FONT"))?(VBool(true)):((StringEqual(x_2365.name,"A"))?(VBool(true)):((StringEqual(x_2365.name,"ARTICLE"))?(VBool(true)):((StringEqual(x_2365.name,"P"))?(VBool(true)):((StringEqual(x_2365.name,"U"))?(VBool(true)):((StringEqual(x_2365.name,"UL"))?(VBool(true)):((StringEqual(x_2365.name,"B"))?(VBool(true)):((StringEqual(x_2365.name,"H1"))?(VBool(true)):((StringEqual(x_2365.name,"H2"))?(VBool(true)):((StringEqual(x_2365.name,"H3"))?(VBool(true)):((StringEqual(x_2365.name,"H4"))?(VBool(true)):((StringEqual(x_2365.name,"DT"))?(VBool(true)):((StringEqual(x_2365.name,"DD"))?(VBool(true)):((StringEqual(x_2365.name,"DL"))?(VBool(true)):((StringEqual(x_2365.name,"LI"))?(VBool(true)):((StringEqual(x_2365.name,"LABEL"))?(VBool(true)):((StringEqual(x_2365.name,"OL"))?(VBool(true)):((StringEqual(x_2365.name,"NAV"))?(VBool(true)):((StringEqual(x_2365.name,"HEADER"))?(VBool(true)):((StringEqual(x_2365.name,"HEAD"))?(VBool(true)):((StringEqual(x_2365.name,"SOURCE"))?(VBool(true)):((StringEqual(x_2365.name,"PICTURE"))?(VBool(true)):((StringEqual(x_2365.name,"FIGURE"))?(VBool(true)):((StringEqual(x_2365.name,"FIGCAPTION"))?(VBool(true)):((StringEqual(x_2365.name,"MAIN"))?(VBool(true)):((StringEqual(x_2365.name,"REACT-PARTIAL"))?(VBool(true)):((StringEqual(x_2365.name,"QUERY-BUILDER"))?(VBool(true)):((StringEqual(x_2365.name,"MODAL-DIALOG"))?(VBool(true)):((StringEqual(x_2365.name,"SCROLLABLE-REGION"))?(VBool(true)):((StringEqual(x_2365.name,"DIALOG-HELPER"))?(VBool(true)):((StringEqual(x_2365.name,"AUTO-CHECK"))?(VBool(true)):((StringEqual(x_2365.name,"TOOL-TIP"))?(VBool(true)):((StringEqual(x_2365.name,"CUSTOM-SCOPES"))?(VBool(true)):((StringEqual(x_2365.name,"QBSEARCH-INPUT"))?(VBool(true)):((StringEqual(x_2365.name,"INCLUDE-FRAGMENT"))?(VBool(true)):((StringEqual(x_2365.name,"COOKIE-CONSENT-LINK"))?(VBool(true)):((StringEqual(x_2365.name,"FULLSTORY-CAPTURE"))?(VBool(true)):((StringEqual(x_2365.name,"GHCC-CONSENT"))?(VBool(true)):((StringEqual(x_2365.name,"GLOBAL-BANNER"))?(VBool(true)):((StringEqual(x_2365.name,"ACTIVE-GLOBAL-BANNERS"))?(VBool(true)):((StringEqual(x_2365.name,"CARD-SKEW"))?(VBool(true)):((StringEqual(x_2365.name,"EM"))?(VBool(true)):((StringEqual(x_2365.name,"ASIDE"))?(VBool(true)):((StringEqual(x_2365.name,"AUDIO"))?(VBool(true)):((StringEqual(x_2365.name,"SUP"))?(VBool(true)):((StringEqual(x_2365.name,"TIME"))?(VBool(true)):((StringEqual(x_2365.name,"ABBR"))?(VBool(true)):((StringEqual(x_2365.name,"SMALL"))?(VBool(true)):((StringEqual(x_2365.name,"SLOT"))?(VBool(true)):(eq(VString(x_2365.name),VString("I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))){
            return VBool(true);
          } else {
            if (BoolOfValue((StringEqual(x_2365.name, "#text"))
                                ? (VBool(true))
                                : ((StringEqual(x_2365.name, "svg"))
                                       ? (VBool(true))
                                       : ((StringEqual(x_2365.name, "IFRAME"))
                                              ? (VBool(true))
                                              : ((StringEqual(x_2365.name, "INPUT"))
                                                     ? (VBool(true))
                                                     : ((StringEqual(x_2365.name, "VIDEO"))
                                                            ? (VBool(true))
                                                            : ((StringEqual(x_2365.name, "BR"))
                                                                   ? (VBool(true))
                                                                   : ((StringEqual(x_2365.name, "IMG"))
                                                                          ? (VBool(true))
                                                                          : (eq(VString(x_2365.name),
                                                                                VString("TEXTAREA"))))))))))) {
              return VBool(false);
            } else {
              return Panic();
            }
          }
        }
      }
    }
  };
}
auto var_modified_x_767(const auto &x_2379) {
  return [&](const auto &x_2380) { return MakeUnit(); };
}
auto eval_expr_x_764(const auto &x_2400) {
  return [&](const auto &x_2401) {
    if (IsSome(HashtblFind(x_2400.prop, "width"))) {
      return HashtblForceFind(x_2400.prop, "width");
    } else {
      return VString("auto");
    }
  };
}
auto var_modified_x_760(const auto &x_2404) {
  return [&](const auto &x_2405) { return MakeUnit(); };
}
auto eval_expr_x_757(const auto &x_2412) {
  return [&](const auto &x_2413) {
    if (BoolOfValue((IsSome(x_2412.prev)) ? (not(UnSome(x_2412.prev).var_line_break)) : (VBool(false)))) {
      return max(x_2412.var_height_external, UnSome(x_2412.prev).var_line_height);
    } else {
      return x_2412.var_height_external;
    }
  };
}
auto var_modified_x_755(const auto &x_2430) {
  return [&](const auto &x_2431) { return MakeUnit(); };
}
auto eval_expr_x_752(const auto &x_2434) {
  return [&](const auto &x_2435) {
    if (BoolOfValue(eq(x_2434.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_2434.var_height_internal;
    }
  };
}
auto var_modified_x_750(const auto &x_2444) {
  return [&](const auto &x_2445) { return MakeUnit(); };
}
auto eval_expr_x_747(const auto &x_2448) {
  return [&](const auto &x_2449) {
    if (BoolOfValue(x_2448.var_intrinsic_height_is_height)) {
      return x_2448.var_intrinsic_height_internal;
    } else {
      if (BoolOfValue((IsSome(x_2448.parent)) ? (UnSome(x_2448.parent).var_is_flex_column) : (VBool(false)))) {
        return plus(x_2448.var_intrinsic_height_internal,
                    mult(x_2448.var_flex_amount, UnSome(x_2448.parent).var_flex_unit));
      } else {
        if (BoolOfValue(has_suffix(x_2448.var_height_expr, VString("%")))) {
          return mult(x_2448.var_box_height,
                      divide(string_to_float(strip_suffix(x_2448.var_height_expr, VString("%"))), VFloat(100.)));
        } else {
          if (BoolOfValue(eq(x_2448.var_height_expr, VString("fit-content")))) {
            return max(x_2448.var_box_height, x_2448.var_intrinsic_height_internal);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_745(const auto &x_2502) {
  return [&](const auto &x_2503) { return MakeUnit(); };
}
auto eval_expr_x_742(const auto &x_2511) {
  return [&](const auto &x_2512) {
    if (IsSome(x_2511.prev)) {
      if (BoolOfValue((BoolOfValue(x_2511.var_line_break)) ? (VBool(true)) : (UnSome(x_2511.prev).var_line_break))) {
        return plus(UnSome(x_2511.prev).var_y, UnSome(x_2511.prev).var_line_height);
      } else {
        return UnSome(x_2511.prev).var_y;
      }
    } else {
      if (IsSome(x_2511.parent)) {
        return UnSome(x_2511.parent).var_y;
      } else {
        return VFloat(0.);
      }
    }
  };
}
auto var_modified_x_740(const auto &x_2537) {
  return [&](const auto &x_2538) { return MakeUnit(); };
}
auto eval_expr_x_737(const auto &x_2542) {
  return [&](const auto &x_2543) {
    if (BoolOfValue(eq(x_2542.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_2542.var_width_internal;
    }
  };
}
auto var_modified_x_735(const auto &x_2552) {
  return [&](const auto &x_2553) { return MakeUnit(); };
}
auto eval_expr_x_732(const auto &x_2556) {
  return [&](const auto &x_2557) {
    if (BoolOfValue(x_2556.var_intrinsic_width_is_width)) {
      return x_2556.var_intrinsic_width_internal;
    } else {
      if (BoolOfValue((IsSome(x_2556.parent)) ? (UnSome(x_2556.parent).var_is_flex_row) : (VBool(false)))) {
        return plus(x_2556.var_intrinsic_width_internal,
                    mult(x_2556.var_flex_amount, UnSome(x_2556.parent).var_flex_unit));
      } else {
        if (BoolOfValue(has_suffix(x_2556.var_width_expr, VString("%")))) {
          return mult(x_2556.var_box_width,
                      divide(string_to_float(strip_suffix(x_2556.var_width_expr, VString("%"))), VFloat(100.)));
        } else {
          if (BoolOfValue(eq(x_2556.var_width_expr, VString("fit-content")))) {
            return max(x_2556.var_box_width, x_2556.var_intrinsic_width_internal);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_730(const auto &x_2610) {
  return [&](const auto &x_2611) { return MakeUnit(); };
}
auto eval_expr_x_727(const auto &x_2616) {
  return [&](const auto &x_2617) {
    if (IsSome(x_2616.prev)) {
      if (BoolOfValue((BoolOfValue(x_2616.var_line_break)) ? (VBool(true)) : (UnSome(x_2616.prev).var_line_break))) {
        return VFloat(0.);
      } else {
        return plus(UnSome(x_2616.prev).var_x, UnSome(x_2616.prev).var_width_external);
      }
    } else {
      if (IsSome(x_2616.parent)) {
        return UnSome(x_2616.parent).var_x;
      } else {
        return VFloat(0.);
      }
    }
  };
}
auto var_modified_x_725(const auto &x_2638) {
  return [&](const auto &x_2639) { return MakeUnit(); };
}
auto eval_expr_x_722(const auto &x_2642) {
  return [&](const auto &x_2643) {
    if (BoolOfValue(gt(x_2642.var_left_over, VFloat(0.)))) {
      return divide(x_2642.var_left_over, x_2642.var_flex_grow_sum);
    } else {
      return divide(x_2642.var_left_over, x_2642.var_flex_shrink_sum);
    }
  };
}
auto var_modified_x_720(const auto &x_2664) {
  return [&](const auto &x_2665) { return MakeUnit(); };
}
auto eval_expr_x_717(const auto &x_2668) {
  return [&](const auto &x_2669) {
    if (BoolOfValue((IsSome(x_2668.parent)) ? (gt(UnSome(x_2668.parent).var_left_over, VFloat(0.))) : (VBool(false)))) {
      return x_2668.var_flex_grow;
    } else {
      return x_2668.var_flex_shrink;
    }
  };
}
auto var_modified_x_715(const auto &x_2682) {
  return [&](const auto &x_2683) { return MakeUnit(); };
}
auto eval_expr_x_712(const auto &x_2688) {
  return [&](const auto &x_2689) {
    if (BoolOfValue(x_2688.var_is_flex_row)) {
      return minus(x_2688.var_box_width,
                   (IsSome(ListLast(x_2688.children))) ? (UnSome(ListLast(x_2688.children)).var_intrinsic_width_sum)
                                                       : (VFloat(0.)));
    } else {
      return minus(x_2688.var_box_height,
                   (IsSome(ListLast(x_2688.children))) ? (UnSome(ListLast(x_2688.children)).var_intrinsic_height_sum)
                                                       : (VFloat(0.)));
    }
  };
}
auto var_modified_x_710(const auto &x_2710) {
  return [&](const auto &x_2711) { return MakeUnit(); };
}
auto eval_expr_x_707(const auto &x_2715) {
  return [&](const auto &x_2716) {
    if (IsSome(x_2715.parent)) {
      return UnSome(x_2715.parent).var_height_internal;
    } else {
      return VFloat(1080.);
    }
  };
}
auto var_modified_x_705(const auto &x_2721) {
  return [&](const auto &x_2722) { return MakeUnit(); };
}
auto eval_expr_x_702(const auto &x_2726) {
  return [&](const auto &x_2727) {
    if (IsSome(x_2726.parent)) {
      return UnSome(x_2726.parent).var_width_internal;
    } else {
      return VFloat(1920.);
    }
  };
}
auto var_modified_x_698(const auto &x_2732) {
  return [&](const auto &x_2733) { return MakeUnit(); };
}
auto eval_expr_x_695(const auto &x_2751) {
  return [&](const auto &x_2752) {
    if (BoolOfValue(eq(x_2751.var_display, VString("none")))) {
      return VBool(false);
    } else {
      if (BoolOfValue(eq(x_2751.var_position, VString("absolute")))) {
        return VBool(false);
      } else {
        if (BoolOfValue((IsSome(x_2751.parent))
                            ? ((BoolOfValue(eq(UnSome(x_2751.parent).var_display, VString("flex"))))
                                   ? (VBool(true))
                                   : (eq(UnSome(x_2751.parent).var_display, VString("inline-flex"))))
                            : (VBool(false)))) {
          return VBool(true);
        } else {
          if (BoolOfValue(eq(x_2751.var_display, VString("block")))) {
            return VBool(true);
          } else {
            if (BoolOfValue(eq(x_2751.var_display, VString("inline")))) {
              return VBool(false);
            } else {
              if (BoolOfValue(eq(x_2751.var_display, VString("inline-block")))) {
                return VBool(false);
              } else {
                if (BoolOfValue(eq(x_2751.var_display, VString("flex")))) {
                  if (BoolOfValue(eq(HashtblForceFind(x_2751.prop, "flex-direction"), VString("row")))) {
                    return VBool(false);
                  } else {
                    if (BoolOfValue(eq(HashtblForceFind(x_2751.prop, "flex-direction"), VString("column")))) {
                      return VBool(true);
                    } else {
                      if (BoolOfValue(eq(HashtblForceFind(x_2751.prop, "flex-direction"), VString("column-reverse")))) {
                        return VBool(true);
                      } else {
                        return Panic();
                      }
                    }
                  }
                } else {
                  if (BoolOfValue(eq(x_2751.var_display, VString("inline-flex")))) {
                    return VBool(false);
                  } else {
                    if (BoolOfValue(eq(x_2751.var_display, VString("contents")))) {
                      return VBool(false);
                    } else {
                      if (BoolOfValue(eq(x_2751.var_display, VString("table")))) {
                        return VBool(true);
                      } else {
                        if (BoolOfValue(eq(x_2751.var_display, VString("table-row-group")))) {
                          return VBool(true);
                        } else {
                          if (BoolOfValue(eq(x_2751.var_display, VString("table-row")))) {
                            return VBool(true);
                          } else {
                            if (BoolOfValue(eq(x_2751.var_display, VString("table-cell")))) {
                              return VBool(false);
                            } else {
                              if (BoolOfValue(eq(x_2751.var_display, VString("list-item")))) {
                                return VBool(true);
                              } else {
                                if (BoolOfValue(eq(x_2751.var_display, VString("grid")))) {
                                  return VBool(true);
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
  };
}
auto var_modified_x_693(const auto &x_2829) {
  return [&](const auto &x_2830) { return MakeUnit(); };
}
auto eval_expr_x_690(const auto &x_2832) {
  return [&](const auto &x_2833) {
    if (BoolOfValue((BoolOfValue(not(VBool(IsSome(x_2832.parent))))) ? (VBool(true))
                                                                     : (UnSome(x_2832.parent).var_visible))) {
      if (BoolOfValue(neq(x_2832.var_display, VString("none")))) {
        if (BoolOfValue(not(x_2832.var_inside_svg))) {
          return not(x_2832.var_disabled);
        } else {
          return VBool(false);
        }
      } else {
        return VBool(false);
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_688(const auto &x_2850) {
  return [&](const auto &x_2851) { return MakeUnit(); };
}
auto eval_expr_x_685(const auto &x_2859) {
  return [&](const auto &x_2860) {
    if (StringEqual(x_2859.name, "NOSCRIPT")) {
      return VBool(true);
    } else {
      if (IsSome(x_2859.parent)) {
        return UnSome(x_2859.parent).var_disabled;
      } else {
        return VBool(false);
      }
    }
  };
}
auto var_modified_x_683(const auto &x_2865) {
  return [&](const auto &x_2866) { return MakeUnit(); };
}
auto eval_expr_x_680(const auto &x_2874) {
  return [&](const auto &x_2875) {
    if (IsSome(x_2874.parent)) {
      if (BoolOfValue(UnSome(x_2874.parent).var_is_svg_block)) {
        return VBool(true);
      } else {
        return UnSome(x_2874.parent).var_inside_svg;
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_678(const auto &x_2884) {
  return [&](const auto &x_2885) { return MakeUnit(); };
}
auto eval_expr_x_675(const auto &x_2887) {
  return [&](const auto &x_2888) { return eq(VString(x_2887.name), VString("svg")); };
}
auto var_modified_x_673(const auto &x_2889) {
  return [&](const auto &x_2890) { return MakeUnit(); };
}
auto eval_expr_x_670(const auto &x_2899) {
  return [&](const auto &x_2900) { return neq(x_2899.var_height_attr_expr, VString("auto")); };
}
auto var_modified_x_668(const auto &x_2905) {
  return [&](const auto &x_2906) { return MakeUnit(); };
}
auto eval_expr_x_665(const auto &x_2914) {
  return [&](const auto &x_2915) {
    if (BoolOfValue(not(VBool(IsSome(HashtblFind(x_2914.attr, "height")))))) {
      return VString("auto");
    } else {
      if (BoolOfValue((BoolOfValue(string_is_float(HashtblForceFind(x_2914.attr, "height"))))
                          ? (VBool(true))
                          : (has_suffix(HashtblForceFind(x_2914.attr, "height"), VString("%"))))) {
        return HashtblForceFind(x_2914.attr, "height");
      } else {
        if (BoolOfValue(eq(HashtblForceFind(x_2914.attr, "height"), VString("Auto")))) {
          return VString("auto");
        } else {
          return Panic();
        }
      }
    }
  };
}
auto var_modified_x_663(const auto &x_2926) {
  return [&](const auto &x_2927) { return MakeUnit(); };
}
auto eval_expr_x_660(const auto &x_2937) {
  return [&](const auto &x_2938) { return neq(x_2937.var_width_attr_expr, VString("auto")); };
}
auto var_modified_x_658(const auto &x_2943) {
  return [&](const auto &x_2944) { return MakeUnit(); };
}
auto eval_expr_x_655(const auto &x_2952) {
  return [&](const auto &x_2953) {
    if (BoolOfValue(not(VBool(IsSome(HashtblFind(x_2952.attr, "width")))))) {
      return VString("auto");
    } else {
      if (BoolOfValue((BoolOfValue(string_is_float(HashtblForceFind(x_2952.attr, "width"))))
                          ? (VBool(true))
                          : (has_suffix(HashtblForceFind(x_2952.attr, "width"), VString("%"))))) {
        return HashtblForceFind(x_2952.attr, "width");
      } else {
        if (BoolOfValue(eq(HashtblForceFind(x_2952.attr, "width"), VString("Auto")))) {
          return VString("auto");
        } else {
          return Panic();
        }
      }
    }
  };
}
auto var_modified_x_653(const auto &x_2964) {
  return [&](const auto &x_2965) { return MakeUnit(); };
}
auto eval_expr_x_650(const auto &x_2968) {
  return [&](const auto &x_2969) {
    if (BoolOfValue((IsSome(x_2968.parent)) ? ((BoolOfValue(eq(UnSome(x_2968.parent).var_display, VString("flex"))))
                                                   ? (VBool(true))
                                                   : (eq(UnSome(x_2968.parent).var_display, VString("inline-flex"))))
                                            : (VBool(false)))) {
      if (BoolOfValue((BoolOfValue(eq(UnSome(x_2968.parent).var_flex_direction, VString("column"))))
                          ? (VBool(true))
                          : (eq(UnSome(x_2968.parent).var_flex_direction, VString("column-reverse"))))) {
        return VBool(true);
      } else {
        if (BoolOfValue(eq(UnSome(x_2968.parent).var_flex_direction, VString("row")))) {
          return VBool(false);
        } else {
          return Panic();
        }
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_648(const auto &x_2994) {
  return [&](const auto &x_2995) { return MakeUnit(); };
}
auto eval_expr_x_645(const auto &x_2999) {
  return [&](const auto &x_3000) {
    if (BoolOfValue((IsSome(x_2999.parent)) ? ((BoolOfValue(eq(UnSome(x_2999.parent).var_display, VString("flex"))))
                                                   ? (VBool(true))
                                                   : (eq(UnSome(x_2999.parent).var_display, VString("inline-flex"))))
                                            : (VBool(false)))) {
      if (BoolOfValue(eq(UnSome(x_2999.parent).var_flex_direction, VString("row")))) {
        return VBool(true);
      } else {
        if (BoolOfValue((BoolOfValue(eq(UnSome(x_2999.parent).var_flex_direction, VString("column"))))
                            ? (VBool(true))
                            : (eq(UnSome(x_2999.parent).var_flex_direction, VString("column-reverse"))))) {
          return VBool(false);
        } else {
          return Panic();
        }
      }
    } else {
      return VBool(false);
    }
  };
}
auto var_modified_x_643(const auto &x_3025) {
  return [&](const auto &x_3026) { return MakeUnit(); };
}
auto eval_expr_x_640(const auto &x_3033) {
  return [&](const auto &x_3034) {
    if (IsSome(HashtblFind(x_3033.prop, "flex-direction"))) {
      return HashtblForceFind(x_3033.prop, "flex-direction");
    } else {
      return VString("");
    }
  };
}
auto var_modified_x_638(const auto &x_3037) {
  return [&](const auto &x_3038) { return MakeUnit(); };
}
auto eval_expr_x_635(const auto &x_3043) {
  return [&](const auto &x_3044) {
    return plus((IsSome(x_3043.prev)) ? (UnSome(x_3043.prev).var_flex_shrink_sum) : (VFloat(0.)),
                x_3043.var_flex_shrink);
  };
}
auto var_modified_x_633(const auto &x_3053) {
  return [&](const auto &x_3054) { return MakeUnit(); };
}
auto eval_expr_x_630(const auto &x_3059) {
  return [&](const auto &x_3060) {
    return plus((IsSome(x_3059.prev)) ? (UnSome(x_3059.prev).var_flex_grow_sum) : (VFloat(0.)), x_3059.var_flex_grow);
  };
}
auto var_modified_x_628(const auto &x_3069) {
  return [&](const auto &x_3070) { return MakeUnit(); };
}
auto eval_expr_x_625(const auto &x_3073) {
  return [&](const auto &x_3074) {
    if (IsSome(HashtblFind(x_3073.prop, "flex-shrink"))) {
      return string_to_float(HashtblForceFind(x_3073.prop, "flex-shrink"));
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_623(const auto &x_3077) {
  return [&](const auto &x_3078) { return MakeUnit(); };
}
auto eval_expr_x_620(const auto &x_3081) {
  return [&](const auto &x_3082) {
    if (IsSome(HashtblFind(x_3081.prop, "flex-grow"))) {
      return string_to_float(HashtblForceFind(x_3081.prop, "flex-grow"));
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_618(const auto &x_3085) {
  return [&](const auto &x_3086) { return MakeUnit(); };
}
auto eval_expr_x_615(const auto &x_3092) {
  return [&](const auto &x_3093) {
    if (IsSome(HashtblFind(x_3092.prop, "position"))) {
      return HashtblForceFind(x_3092.prop, "position");
    } else {
      return VString("static");
    }
  };
}
auto var_modified_x_613(const auto &x_3096) {
  return [&](const auto &x_3097) { return MakeUnit(); };
}
auto eval_expr_x_610(const auto &x_3123) {
  return [&](const auto &x_3124) {
    if (IsSome(HashtblFind(x_3123.prop, "display"))) {
      return HashtblForceFind(x_3123.prop, "display");
    } else {
      return VString("block");
    }
  };
}
auto var_modified_x_606(const auto &x_3127) {
  return [&](const auto &x_3128) { return MakeUnit(); };
}
auto eval_expr_x_603(const auto &x_3138) {
  return [&](const auto &x_3139) {
    if (IsSome(x_3138.prev)) {
      if (BoolOfValue(x_3138.var_line_break)) {
        return plus(UnSome(x_3138.prev).var_finished_intrinsic_height_sum,
                    plus(UnSome(x_3138.prev).var_intrinsic_current_line_height, x_3138.var_intrinsic_height_external));
      } else {
        return UnSome(x_3138.prev).var_finished_intrinsic_height_sum;
      }
    } else {
      if (BoolOfValue(x_3138.var_line_break)) {
        return x_3138.var_intrinsic_height_external;
      } else {
        return VFloat(0.);
      }
    }
  };
}
auto var_modified_x_601(const auto &x_3168) {
  return [&](const auto &x_3169) { return MakeUnit(); };
}
auto eval_expr_x_598(const auto &x_3179) {
  return [&](const auto &x_3180) {
    if (BoolOfValue(x_3179.var_line_break)) {
      return VFloat(0.);
    } else {
      return max(x_3179.var_intrinsic_height_external,
                 (IsSome(x_3179.prev)) ? (UnSome(x_3179.prev).var_intrinsic_current_line_height) : (VFloat(0.)));
    }
  };
}
auto var_modified_x_596(const auto &x_3193) {
  return [&](const auto &x_3194) { return MakeUnit(); };
}
auto eval_expr_x_593(const auto &x_3201) {
  return [&](const auto &x_3202) {
    return plus((IsSome(x_3201.prev)) ? (UnSome(x_3201.prev).var_intrinsic_height_sum) : (VFloat(0.)),
                x_3201.var_intrinsic_height_external);
  };
}
auto var_modified_x_591(const auto &x_3211) {
  return [&](const auto &x_3212) { return MakeUnit(); };
}
auto eval_expr_x_588(const auto &x_3217) {
  return [&](const auto &x_3218) {
    if (BoolOfValue(eq(x_3217.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_3217.var_intrinsic_height_internal;
    }
  };
}
auto var_modified_x_586(const auto &x_3227) {
  return [&](const auto &x_3228) { return MakeUnit(); };
}
auto eval_expr_x_583(const auto &x_3233) {
  return [&](const auto &x_3234) {
    if (BoolOfValue(eq(x_3233.var_display, VString("none")))) {
      return VFloat(0.);
    } else {
      if (BoolOfValue(x_3233.var_inside_svg)) {
        return VFloat(0.);
      } else {
        if (BoolOfValue(x_3233.var_disabled)) {
          return VFloat(0.);
        } else {
          if (BoolOfValue((BoolOfValue(neq(x_3233.var_height_expr, VString("auto"))))
                              ? ((BoolOfValue(not(has_suffix(x_3233.var_height_expr, VString("%")))))
                                     ? (neq(x_3233.var_height_expr, VString("fit-content")))
                                     : (VBool(false)))
                              : (VBool(false)))) {
            if (BoolOfValue(has_suffix(x_3233.var_height_expr, VString("px")))) {
              return string_to_float(strip_suffix(x_3233.var_height_expr, VString("px")));
            } else {
              if (BoolOfValue(has_suffix(x_3233.var_height_expr, VString("ch")))) {
                return string_to_float(strip_suffix(x_3233.var_height_expr, VString("ch")));
              } else {
                if (BoolOfValue(has_suffix(x_3233.var_height_expr, VString("lh")))) {
                  return string_to_float(strip_suffix(x_3233.var_height_expr, VString("lh")));
                } else {
                  return Panic();
                }
              }
            }
          } else {
            return plus(
                x_3233.var_children_intrinsic_height,
                (StringEqual(x_3233.name, "#text"))
                    ? ((IsSome(ListHead(x_3233.children))) ? (Panic()) : (VFloat(10.)))
                    : ((BoolOfValue(x_3233.var_is_default_case))
                           ? (VFloat(0.))
                           : ((StringEqual(x_3233.name, "BR"))
                                  ? ((IsSome(ListHead(x_3233.children))) ? (Panic()) : (VFloat(0.)))
                                  : ((StringEqual(x_3233.name, "INPUT"))
                                         ? (VFloat(10.))
                                         : ((StringEqual(x_3233.name, "svg"))
                                                ? ((BoolOfValue((BoolOfValue(x_3233.var_has_height_attr))
                                                                    ? (string_is_float(x_3233.var_height_attr_expr))
                                                                    : (VBool(false))))
                                                       ? (string_to_float(x_3233.var_height_attr_expr))
                                                       : ((IsSome(HashtblFind(x_3233.attr, "viewBox")))
                                                              ? (string_to_float(
                                                                    nth_by_sep(HashtblForceFind(x_3233.attr, "viewBox"),
                                                                               VString(" "), VInt(3))))
                                                              : ((BoolOfValue(
                                                                     (BoolOfValue(x_3233.var_has_height_attr))
                                                                         ? ((BoolOfValue(
                                                                                has_suffix(x_3233.var_height_attr_expr,
                                                                                           VString("%"))))
                                                                                ? (VBool(IsSome(HashtblFind(
                                                                                      x_3233.attr, "viewBox"))))
                                                                                : (VBool(false)))
                                                                         : (VBool(false))))
                                                                     ? (mult(
                                                                           string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_3233.attr, "viewBox"),
                                                                               VString(" "), VInt(3))),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_3233.var_height_attr_expr,
                                                                                      VString("%"))),
                                                                                  VFloat(100.))))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_3233.name, "IMG"))
                                                       ? ((BoolOfValue(x_3233.var_has_height_attr))
                                                              ? (string_to_float(x_3233.var_height_attr_expr))
                                                              : ((BoolOfValue(
                                                                     (IsSome(HashtblFind(x_3233.attr, "image_height")))
                                                                         ? (not(x_3233.var_has_width_attr))
                                                                         : (VBool(false))))
                                                                     ? (int_to_float(HashtblForceFind(x_3233.attr,
                                                                                                      "image_height")))
                                                                     : ((BoolOfValue(
                                                                            (BoolOfValue(x_3233.var_has_width_attr))
                                                                                ? ((BoolOfValue(
                                                                                       not(x_3233.var_has_height_attr)))
                                                                                       ? ((IsSome(HashtblFind(
                                                                                              x_3233.attr,
                                                                                              "image_width")))
                                                                                              ? (VBool(
                                                                                                    IsSome(HashtblFind(
                                                                                                        x_3233.attr,
                                                                                                        "image_"
                                                                                                        "height"))))
                                                                                              : (VBool(false)))
                                                                                       : (VBool(false)))
                                                                                : (VBool(false))))
                                                                            ? ((BoolOfValue(
                                                                                   neq(HashtblForceFind(x_3233.attr,
                                                                                                        "image_width"),
                                                                                       VInt(0))))
                                                                                   ? (mult(
                                                                                         string_to_float(
                                                                                             x_3233
                                                                                                 .var_width_attr_expr),
                                                                                         divide(
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_3233.attr,
                                                                                                     "image_height")),
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_3233.attr,
                                                                                                     "image_width")))))
                                                                                   : (VFloat(0.)))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_3233.name, "IFRAME"))
                                                       ? ((BoolOfValue(x_3233.var_has_height_attr))
                                                              ? (Panic())
                                                              : (VFloat(150.)))
                                                       : ((StringEqual(x_3233.name, "TEXTAREA"))
                                                              ? (VFloat(100.))
                                                              : ((StringEqual(x_3233.name, "VIDEO"))
                                                                     ? ((BoolOfValue(x_3233.var_has_height_attr))
                                                                            ? (Panic())
                                                                            : (VFloat(150.)))
                                                                     : (Panic()))))))))));
          }
        }
      }
    }
  };
}
auto var_modified_x_581(const auto &x_3379) {
  return [&](const auto &x_3380) { return MakeUnit(); };
}
auto eval_expr_x_578(const auto &x_3382) {
  return [&](const auto &x_3383) {
    if (BoolOfValue((BoolOfValue(eq(x_3382.var_display, VString("none"))))
                        ? (VBool(true))
                        : ((BoolOfValue(x_3382.var_inside_svg)) ? (VBool(true)) : (x_3382.var_disabled)))) {
      return VBool(true);
    } else {
      if (BoolOfValue((IsSome(x_3382.parent)) ? (UnSome(x_3382.parent).var_is_flex_column) : (VBool(false)))) {
        return VBool(false);
      } else {
        if (BoolOfValue((BoolOfValue(eq(x_3382.var_height_expr, VString("auto"))))
                            ? (VBool(true))
                            : ((BoolOfValue(has_suffix(x_3382.var_height_expr, VString("px"))))
                                   ? (VBool(true))
                                   : ((BoolOfValue(has_suffix(x_3382.var_height_expr, VString("ch"))))
                                          ? (VBool(true))
                                          : ((BoolOfValue(has_suffix(x_3382.var_height_expr, VString("lh"))))
                                                 ? (VBool(true))
                                                 : (eq(x_3382.var_height_expr, VString("max-content")))))))) {
          return VBool(true);
        } else {
          if (BoolOfValue((BoolOfValue(has_suffix(x_3382.var_height_expr, VString("%"))))
                              ? (VBool(true))
                              : (eq(x_3382.var_height_expr, VString("fit-content"))))) {
            return VBool(false);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_576(const auto &x_3432) {
  return [&](const auto &x_3433) { return MakeUnit(); };
}
auto eval_expr_x_573(const auto &x_3453) {
  return [&](const auto &x_3454) {
    if (IsSome(HashtblFind(x_3453.prop, "height"))) {
      return HashtblForceFind(x_3453.prop, "height");
    } else {
      return VString("auto");
    }
  };
}
auto var_modified_x_571(const auto &x_3457) {
  return [&](const auto &x_3458) { return MakeUnit(); };
}
auto eval_expr_x_568(const auto &x_3460) {
  return [&](const auto &x_3461) {
    if (IsSome(ListLast(x_3460.children))) {
      return plus(UnSome(ListLast(x_3460.children)).var_finished_intrinsic_height_sum,
                  UnSome(ListLast(x_3460.children)).var_intrinsic_current_line_height);
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_566(const auto &x_3470) {
  return [&](const auto &x_3471) { return MakeUnit(); };
}
auto eval_expr_x_563(const auto &x_3478) {
  return [&](const auto &x_3479) {
    return plus((IsSome(x_3478.prev)) ? (UnSome(x_3478.prev).var_intrinsic_width_sum) : (VFloat(0.)),
                x_3478.var_intrinsic_width_external);
  };
}
auto var_modified_x_561(const auto &x_3488) {
  return [&](const auto &x_3489) { return MakeUnit(); };
}
auto eval_expr_x_558(const auto &x_3496) {
  return [&](const auto &x_3497) {
    return max(x_3496.var_intrinsic_current_line_width,
               (IsSome(x_3496.prev)) ? (UnSome(x_3496.prev).var_intrinsic_width_max) : (VFloat(0.)));
  };
}
auto var_modified_x_556(const auto &x_3506) {
  return [&](const auto &x_3507) { return MakeUnit(); };
}
auto eval_expr_x_553(const auto &x_3512) {
  return [&](const auto &x_3513) {
    return plus(x_3512.var_intrinsic_width_external,
                (BoolOfValue((IsSome(x_3512.prev)) ? (not(UnSome(x_3512.prev).var_line_break)) : (VBool(false))))
                    ? (UnSome(x_3512.prev).var_intrinsic_current_line_width)
                    : (VFloat(0.)));
  };
}
auto var_modified_x_551(const auto &x_3526) {
  return [&](const auto &x_3527) { return MakeUnit(); };
}
auto eval_expr_x_548(const auto &x_3530) {
  return [&](const auto &x_3531) {
    if (BoolOfValue(eq(x_3530.var_position, VString("absolute")))) {
      return VFloat(0.);
    } else {
      return x_3530.var_intrinsic_width_internal;
    }
  };
}
auto var_modified_x_546(const auto &x_3540) {
  return [&](const auto &x_3541) { return MakeUnit(); };
}
auto eval_expr_x_543(const auto &x_3546) {
  return [&](const auto &x_3547) {
    if (BoolOfValue(eq(x_3546.var_display, VString("none")))) {
      return VFloat(0.);
    } else {
      if (BoolOfValue(x_3546.var_inside_svg)) {
        return VFloat(0.);
      } else {
        if (BoolOfValue(x_3546.var_disabled)) {
          return VFloat(0.);
        } else {
          if (BoolOfValue((BoolOfValue(neq(x_3546.var_width_expr, VString("auto"))))
                              ? ((BoolOfValue(not(has_suffix(x_3546.var_width_expr, VString("%")))))
                                     ? ((BoolOfValue(neq(x_3546.var_width_expr, VString("fit-content"))))
                                            ? ((BoolOfValue(neq(x_3546.var_width_expr, VString("max-content"))))
                                                   ? (not(has_prefix(x_3546.var_width_expr, VString("calc"))))
                                                   : (VBool(false)))
                                            : (VBool(false)))
                                     : (VBool(false)))
                              : (VBool(false)))) {
            if (BoolOfValue(has_suffix(x_3546.var_width_expr, VString("px")))) {
              return string_to_float(strip_suffix(x_3546.var_width_expr, VString("px")));
            } else {
              if (BoolOfValue(has_suffix(x_3546.var_width_expr, VString("ch")))) {
                return string_to_float(strip_suffix(x_3546.var_width_expr, VString("ch")));
              } else {
                return Panic();
              }
            }
          } else {
            return plus(
                x_3546.var_children_intrinsic_width,
                (StringEqual(x_3546.name, "#text"))
                    ? ((IsSome(ListHead(x_3546.children))) ? (Panic()) : (VFloat(100.)))
                    : ((BoolOfValue(x_3546.var_is_default_case))
                           ? (VFloat(0.))
                           : ((StringEqual(x_3546.name, "BR"))
                                  ? ((IsSome(ListHead(x_3546.children))) ? (Panic()) : (VFloat(0.)))
                                  : ((StringEqual(x_3546.name, "INPUT"))
                                         ? (VFloat(100.))
                                         : ((StringEqual(x_3546.name, "svg"))
                                                ? ((BoolOfValue((BoolOfValue(x_3546.var_has_width_attr))
                                                                    ? (string_is_float(x_3546.var_width_attr_expr))
                                                                    : (VBool(false))))
                                                       ? (string_to_float(x_3546.var_width_attr_expr))
                                                       : ((BoolOfValue(
                                                              (BoolOfValue(not(x_3546.var_has_width_attr)))
                                                                  ? (VBool(IsSome(HashtblFind(x_3546.attr, "viewBox"))))
                                                                  : (VBool(false))))
                                                              ? (string_to_float(
                                                                    nth_by_sep(HashtblForceFind(x_3546.attr, "viewBox"),
                                                                               VString(" "), VInt(2))))
                                                              : ((BoolOfValue(
                                                                     (BoolOfValue(x_3546.var_has_width_attr))
                                                                         ? ((BoolOfValue(
                                                                                has_suffix(x_3546.var_width_attr_expr,
                                                                                           VString("%"))))
                                                                                ? (VBool(IsSome(HashtblFind(
                                                                                      x_3546.attr, "viewBox"))))
                                                                                : (VBool(false)))
                                                                         : (VBool(false))))
                                                                     ? (mult(
                                                                           string_to_float(nth_by_sep(
                                                                               HashtblForceFind(x_3546.attr, "viewBox"),
                                                                               VString(" "), VInt(2))),
                                                                           divide(string_to_float(strip_suffix(
                                                                                      x_3546.var_width_attr_expr,
                                                                                      VString("%"))),
                                                                                  VFloat(100.))))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_3546.name, "IMG"))
                                                       ? ((BoolOfValue(x_3546.var_has_width_attr))
                                                              ? (string_to_float(x_3546.var_width_attr_expr))
                                                              : ((BoolOfValue(
                                                                     (IsSome(HashtblFind(x_3546.attr, "image_width")))
                                                                         ? (not(x_3546.var_has_height_attr))
                                                                         : (VBool(false))))
                                                                     ? (int_to_float(HashtblForceFind(x_3546.attr,
                                                                                                      "image_width")))
                                                                     : ((BoolOfValue(
                                                                            (BoolOfValue(
                                                                                not(x_3546.var_has_width_attr)))
                                                                                ? ((BoolOfValue(
                                                                                       x_3546.var_has_height_attr))
                                                                                       ? ((IsSome(HashtblFind(
                                                                                              x_3546.attr,
                                                                                              "image_width")))
                                                                                              ? (VBool(
                                                                                                    IsSome(HashtblFind(
                                                                                                        x_3546.attr,
                                                                                                        "image_"
                                                                                                        "height"))))
                                                                                              : (VBool(false)))
                                                                                       : (VBool(false)))
                                                                                : (VBool(false))))
                                                                            ? ((BoolOfValue(
                                                                                   neq(HashtblForceFind(x_3546.attr,
                                                                                                        "image_height"),
                                                                                       VInt(0))))
                                                                                   ? (mult(
                                                                                         string_to_float(
                                                                                             x_3546
                                                                                                 .var_height_attr_expr),
                                                                                         divide(
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_3546.attr,
                                                                                                     "image_width")),
                                                                                             int_to_float(
                                                                                                 HashtblForceFind(
                                                                                                     x_3546.attr,
                                                                                                     "image_height")))))
                                                                                   : (VFloat(0.)))
                                                                     : (Panic()))))
                                                : ((StringEqual(x_3546.name, "IFRAME"))
                                                       ? ((BoolOfValue(x_3546.var_has_width_attr))
                                                              ? (Panic())
                                                              : (VFloat(300.)))
                                                       : ((StringEqual(x_3546.name, "TEXTAREA"))
                                                              ? (VFloat(100.))
                                                              : ((StringEqual(x_3546.name, "VIDEO"))
                                                                     ? ((BoolOfValue(x_3546.var_has_width_attr))
                                                                            ? (Panic())
                                                                            : (VFloat(300.)))
                                                                     : (Panic()))))))))));
          }
        }
      }
    }
  };
}
auto var_modified_x_541(const auto &x_3700) {
  return [&](const auto &x_3701) { return MakeUnit(); };
}
auto eval_expr_x_538(const auto &x_3703) {
  return [&](const auto &x_3704) {
    if (IsSome(ListLast(x_3703.children))) {
      return UnSome(ListLast(x_3703.children)).var_intrinsic_width_max;
    } else {
      return VFloat(0.);
    }
  };
}
auto var_modified_x_536(const auto &x_3709) {
  return [&](const auto &x_3710) { return MakeUnit(); };
}
auto eval_expr_x_533(const auto &x_3712) {
  return [&](const auto &x_3713) {
    if (BoolOfValue((BoolOfValue(eq(x_3712.var_display, VString("none"))))
                        ? (VBool(true))
                        : ((BoolOfValue(x_3712.var_inside_svg)) ? (VBool(true)) : (x_3712.var_disabled)))) {
      return VBool(true);
    } else {
      if (BoolOfValue((IsSome(x_3712.parent)) ? (UnSome(x_3712.parent).var_is_flex_row) : (VBool(false)))) {
        return VBool(false);
      } else {
        if (BoolOfValue((BoolOfValue(eq(x_3712.var_width_expr, VString("auto"))))
                            ? (VBool(true))
                            : ((BoolOfValue(has_suffix(x_3712.var_width_expr, VString("px"))))
                                   ? (VBool(true))
                                   : ((BoolOfValue(has_suffix(x_3712.var_width_expr, VString("ch"))))
                                          ? (VBool(true))
                                          : ((BoolOfValue(has_prefix(x_3712.var_width_expr, VString("calc("))))
                                                 ? (VBool(true))
                                                 : (eq(x_3712.var_width_expr, VString("max-content")))))))) {
          return VBool(true);
        } else {
          if (BoolOfValue((BoolOfValue(has_suffix(x_3712.var_width_expr, VString("%"))))
                              ? (VBool(true))
                              : (eq(x_3712.var_width_expr, VString("fit-content"))))) {
            return VBool(false);
          } else {
            return Panic();
          }
        }
      }
    }
  };
}
auto var_modified_x_531(const auto &x_3762) {
  return [&](const auto &x_3763) { return MakeUnit(); };
}
auto eval_expr_x_528(const auto &x_3766) {
  return [&](const auto &x_3767) {
    if (BoolOfValue(eq(x_3766.var_display, VString("none")))) {
      return VBool(true);
    } else {
      if (BoolOfValue(x_3766.var_inside_svg)) {
        return VBool(true);
      } else {
        if (BoolOfValue(x_3766.var_disabled)) {
          return VBool(true);
        } else {if (BoolOfValue((StringEqual(x_3766.name,"#document"))?(VBool(true)):((StringEqual(x_3766.name,"#shadow-root"))?(VBool(true)):((StringEqual(x_3766.name,"DIV"))?(VBool(true)):((StringEqual(x_3766.name,"HTML"))?(VBool(true)):((StringEqual(x_3766.name,"BODY"))?(VBool(true)):((StringEqual(x_3766.name,"BUTTON"))?(VBool(true)):((StringEqual(x_3766.name,"FOOTER"))?(VBool(true)):((StringEqual(x_3766.name,"SELECT"))?(VBool(true)):((StringEqual(x_3766.name,"SECTION"))?(VBool(true)):((StringEqual(x_3766.name,"FORM"))?(VBool(true)):((StringEqual(x_3766.name,"CENTER"))?(VBool(true)):((StringEqual(x_3766.name,"TD"))?(VBool(true)):((StringEqual(x_3766.name,"TR"))?(VBool(true)):((StringEqual(x_3766.name,"TBODY"))?(VBool(true)):((StringEqual(x_3766.name,"TABLE"))?(VBool(true)):((StringEqual(x_3766.name,"SPAN"))?(VBool(true)):((StringEqual(x_3766.name,"FONT"))?(VBool(true)):((StringEqual(x_3766.name,"A"))?(VBool(true)):((StringEqual(x_3766.name,"ARTICLE"))?(VBool(true)):((StringEqual(x_3766.name,"P"))?(VBool(true)):((StringEqual(x_3766.name,"U"))?(VBool(true)):((StringEqual(x_3766.name,"UL"))?(VBool(true)):((StringEqual(x_3766.name,"B"))?(VBool(true)):((StringEqual(x_3766.name,"H1"))?(VBool(true)):((StringEqual(x_3766.name,"H2"))?(VBool(true)):((StringEqual(x_3766.name,"H3"))?(VBool(true)):((StringEqual(x_3766.name,"H4"))?(VBool(true)):((StringEqual(x_3766.name,"DT"))?(VBool(true)):((StringEqual(x_3766.name,"DD"))?(VBool(true)):((StringEqual(x_3766.name,"DL"))?(VBool(true)):((StringEqual(x_3766.name,"LI"))?(VBool(true)):((StringEqual(x_3766.name,"LABEL"))?(VBool(true)):((StringEqual(x_3766.name,"OL"))?(VBool(true)):((StringEqual(x_3766.name,"NAV"))?(VBool(true)):((StringEqual(x_3766.name,"HEADER"))?(VBool(true)):((StringEqual(x_3766.name,"HEAD"))?(VBool(true)):((StringEqual(x_3766.name,"SOURCE"))?(VBool(true)):((StringEqual(x_3766.name,"PICTURE"))?(VBool(true)):((StringEqual(x_3766.name,"FIGURE"))?(VBool(true)):((StringEqual(x_3766.name,"FIGCAPTION"))?(VBool(true)):((StringEqual(x_3766.name,"MAIN"))?(VBool(true)):((StringEqual(x_3766.name,"REACT-PARTIAL"))?(VBool(true)):((StringEqual(x_3766.name,"QUERY-BUILDER"))?(VBool(true)):((StringEqual(x_3766.name,"MODAL-DIALOG"))?(VBool(true)):((StringEqual(x_3766.name,"SCROLLABLE-REGION"))?(VBool(true)):((StringEqual(x_3766.name,"DIALOG-HELPER"))?(VBool(true)):((StringEqual(x_3766.name,"AUTO-CHECK"))?(VBool(true)):((StringEqual(x_3766.name,"TOOL-TIP"))?(VBool(true)):((StringEqual(x_3766.name,"CUSTOM-SCOPES"))?(VBool(true)):((StringEqual(x_3766.name,"QBSEARCH-INPUT"))?(VBool(true)):((StringEqual(x_3766.name,"INCLUDE-FRAGMENT"))?(VBool(true)):((StringEqual(x_3766.name,"COOKIE-CONSENT-LINK"))?(VBool(true)):((StringEqual(x_3766.name,"FULLSTORY-CAPTURE"))?(VBool(true)):((StringEqual(x_3766.name,"GHCC-CONSENT"))?(VBool(true)):((StringEqual(x_3766.name,"GLOBAL-BANNER"))?(VBool(true)):((StringEqual(x_3766.name,"ACTIVE-GLOBAL-BANNERS"))?(VBool(true)):((StringEqual(x_3766.name,"CARD-SKEW"))?(VBool(true)):((StringEqual(x_3766.name,"EM"))?(VBool(true)):((StringEqual(x_3766.name,"ASIDE"))?(VBool(true)):((StringEqual(x_3766.name,"AUDIO"))?(VBool(true)):((StringEqual(x_3766.name,"SUP"))?(VBool(true)):((StringEqual(x_3766.name,"TIME"))?(VBool(true)):((StringEqual(x_3766.name,"ABBR"))?(VBool(true)):((StringEqual(x_3766.name,"SMALL"))?(VBool(true)):((StringEqual(x_3766.name,"SLOT"))?(VBool(true)):(eq(VString(x_3766.name),VString("I"))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))){
            return VBool(true);
          } else {
            if (BoolOfValue((StringEqual(x_3766.name, "#text"))
                                ? (VBool(true))
                                : ((StringEqual(x_3766.name, "svg"))
                                       ? (VBool(true))
                                       : ((StringEqual(x_3766.name, "IFRAME"))
                                              ? (VBool(true))
                                              : ((StringEqual(x_3766.name, "INPUT"))
                                                     ? (VBool(true))
                                                     : ((StringEqual(x_3766.name, "VIDEO"))
                                                            ? (VBool(true))
                                                            : ((StringEqual(x_3766.name, "BR"))
                                                                   ? (VBool(true))
                                                                   : ((StringEqual(x_3766.name, "IMG"))
                                                                          ? (VBool(true))
                                                                          : (eq(VString(x_3766.name),
                                                                                VString("TEXTAREA"))))))))))) {
              return VBool(false);
            } else {
              return Panic();
            }
          }
        }
      }
    }
  };
}
auto var_modified_x_526(const auto &x_3780) {
  return [&](const auto &x_3781) { return MakeUnit(); };
}
auto eval_expr_x_523(const auto &x_3801) {
  return [&](const auto &x_3802) {
    if (IsSome(HashtblFind(x_3801.prop, "width"))) {
      return HashtblForceFind(x_3801.prop, "width");
    } else {
      return VString("auto");
    }
  };
}
auto eval_stmts_x_91(const auto &x_521) {
  return [&](const auto &x_522) {
    WriteMetric(x_522);
    auto x_524 = eval_expr_x_523(x_521)(x_522);
    HashtblSet(x_521.var, "width_expr", x_524);
    WriteMetric(x_522);
    auto x_529 = eval_expr_x_528(x_521)(x_522);
    HashtblSet(x_521.var, "is_default_case", x_529);
    WriteMetric(x_522);
    auto x_534 = eval_expr_x_533(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_width_is_width", x_534);
    WriteMetric(x_522);
    auto x_539 = eval_expr_x_538(x_521)(x_522);
    HashtblSet(x_521.var, "children_intrinsic_width", x_539);
    WriteMetric(x_522);
    auto x_544 = eval_expr_x_543(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_width_internal", x_544);
    WriteMetric(x_522);
    auto x_549 = eval_expr_x_548(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_width_external", x_549);
    WriteMetric(x_522);
    auto x_554 = eval_expr_x_553(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_current_line_width", x_554);
    WriteMetric(x_522);
    auto x_559 = eval_expr_x_558(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_width_max", x_559);
    WriteMetric(x_522);
    auto x_564 = eval_expr_x_563(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_width_sum", x_564);
    WriteMetric(x_522);
    auto x_569 = eval_expr_x_568(x_521)(x_522);
    HashtblSet(x_521.var, "children_intrinsic_height", x_569);
    WriteMetric(x_522);
    auto x_574 = eval_expr_x_573(x_521)(x_522);
    HashtblSet(x_521.var, "height_expr", x_574);
    WriteMetric(x_522);
    auto x_579 = eval_expr_x_578(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_height_is_height", x_579);
    WriteMetric(x_522);
    auto x_584 = eval_expr_x_583(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_height_internal", x_584);
    WriteMetric(x_522);
    auto x_589 = eval_expr_x_588(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_height_external", x_589);
    WriteMetric(x_522);
    auto x_594 = eval_expr_x_593(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_height_sum", x_594);
    WriteMetric(x_522);
    auto x_599 = eval_expr_x_598(x_521)(x_522);
    HashtblSet(x_521.var, "intrinsic_current_line_height", x_599);
    WriteMetric(x_522);
    auto x_604 = eval_expr_x_603(x_521)(x_522);
    HashtblSet(x_521.var, "finished_intrinsic_height_sum", x_604);
    return MakeUnit();
  };
}
auto eval_stmts_x_89(const auto &x_608) {
  return [&](const auto &x_609) {
    WriteMetric(x_609);
    auto x_611 = eval_expr_x_610(x_608)(x_609);
    HashtblSet(x_608.var, "display", x_611);
    WriteMetric(x_609);
    auto x_616 = eval_expr_x_615(x_608)(x_609);
    HashtblSet(x_608.var, "position", x_616);
    WriteMetric(x_609);
    auto x_621 = eval_expr_x_620(x_608)(x_609);
    HashtblSet(x_608.var, "flex_grow", x_621);
    WriteMetric(x_609);
    auto x_626 = eval_expr_x_625(x_608)(x_609);
    HashtblSet(x_608.var, "flex_shrink", x_626);
    WriteMetric(x_609);
    auto x_631 = eval_expr_x_630(x_608)(x_609);
    HashtblSet(x_608.var, "flex_grow_sum", x_631);
    WriteMetric(x_609);
    auto x_636 = eval_expr_x_635(x_608)(x_609);
    HashtblSet(x_608.var, "flex_shrink_sum", x_636);
    WriteMetric(x_609);
    auto x_641 = eval_expr_x_640(x_608)(x_609);
    HashtblSet(x_608.var, "flex_direction", x_641);
    WriteMetric(x_609);
    auto x_646 = eval_expr_x_645(x_608)(x_609);
    HashtblSet(x_608.var, "is_flex_row", x_646);
    WriteMetric(x_609);
    auto x_651 = eval_expr_x_650(x_608)(x_609);
    HashtblSet(x_608.var, "is_flex_column", x_651);
    WriteMetric(x_609);
    auto x_656 = eval_expr_x_655(x_608)(x_609);
    HashtblSet(x_608.var, "width_attr_expr", x_656);
    WriteMetric(x_609);
    auto x_661 = eval_expr_x_660(x_608)(x_609);
    HashtblSet(x_608.var, "has_width_attr", x_661);
    WriteMetric(x_609);
    auto x_666 = eval_expr_x_665(x_608)(x_609);
    HashtblSet(x_608.var, "height_attr_expr", x_666);
    WriteMetric(x_609);
    auto x_671 = eval_expr_x_670(x_608)(x_609);
    HashtblSet(x_608.var, "has_height_attr", x_671);
    WriteMetric(x_609);
    auto x_676 = eval_expr_x_675(x_608)(x_609);
    HashtblSet(x_608.var, "is_svg_block", x_676);
    WriteMetric(x_609);
    auto x_681 = eval_expr_x_680(x_608)(x_609);
    HashtblSet(x_608.var, "inside_svg", x_681);
    WriteMetric(x_609);
    auto x_686 = eval_expr_x_685(x_608)(x_609);
    HashtblSet(x_608.var, "disabled", x_686);
    WriteMetric(x_609);
    auto x_691 = eval_expr_x_690(x_608)(x_609);
    HashtblSet(x_608.var, "visible", x_691);
    WriteMetric(x_609);
    auto x_696 = eval_expr_x_695(x_608)(x_609);
    HashtblSet(x_608.var, "line_break", x_696);
    return MakeUnit();
  };
}
auto eval_stmts_x_85(const auto &x_700) {
  return [&](const auto &x_701) {
    WriteMetric(x_701);
    auto x_703 = eval_expr_x_702(x_700)(x_701);
    HashtblSet(x_700.var, "box_width", x_703);
    WriteMetric(x_701);
    auto x_708 = eval_expr_x_707(x_700)(x_701);
    HashtblSet(x_700.var, "box_height", x_708);
    WriteMetric(x_701);
    auto x_713 = eval_expr_x_712(x_700)(x_701);
    HashtblSet(x_700.var, "left_over", x_713);
    WriteMetric(x_701);
    auto x_718 = eval_expr_x_717(x_700)(x_701);
    HashtblSet(x_700.var, "flex_amount", x_718);
    WriteMetric(x_701);
    auto x_723 = eval_expr_x_722(x_700)(x_701);
    HashtblSet(x_700.var, "flex_unit", x_723);
    WriteMetric(x_701);
    auto x_728 = eval_expr_x_727(x_700)(x_701);
    HashtblSet(x_700.var, "x", x_728);
    WriteMetric(x_701);
    auto x_733 = eval_expr_x_732(x_700)(x_701);
    HashtblSet(x_700.var, "width_internal", x_733);
    WriteMetric(x_701);
    auto x_738 = eval_expr_x_737(x_700)(x_701);
    HashtblSet(x_700.var, "width_external", x_738);
    WriteMetric(x_701);
    auto x_743 = eval_expr_x_742(x_700)(x_701);
    HashtblSet(x_700.var, "y", x_743);
    WriteMetric(x_701);
    auto x_748 = eval_expr_x_747(x_700)(x_701);
    HashtblSet(x_700.var, "height_internal", x_748);
    WriteMetric(x_701);
    auto x_753 = eval_expr_x_752(x_700)(x_701);
    HashtblSet(x_700.var, "height_external", x_753);
    WriteMetric(x_701);
    auto x_758 = eval_expr_x_757(x_700)(x_701);
    HashtblSet(x_700.var, "line_height", x_758);
    return MakeUnit();
  };
}
auto eval_stmts_x_76(const auto &x_762) {
  return [&](const auto &x_763) {
    WriteMetric(x_763);
    auto x_765 = eval_expr_x_764(x_762)(x_763);
    HashtblSet(x_762.var, "width_expr", x_765);
    WriteMetric(x_763);
    auto x_770 = eval_expr_x_769(x_762)(x_763);
    HashtblSet(x_762.var, "is_default_case", x_770);
    WriteMetric(x_763);
    auto x_775 = eval_expr_x_774(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_width_is_width", x_775);
    WriteMetric(x_763);
    auto x_780 = eval_expr_x_779(x_762)(x_763);
    HashtblSet(x_762.var, "children_intrinsic_width", x_780);
    WriteMetric(x_763);
    auto x_785 = eval_expr_x_784(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_width_internal", x_785);
    WriteMetric(x_763);
    auto x_790 = eval_expr_x_789(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_width_external", x_790);
    WriteMetric(x_763);
    auto x_795 = eval_expr_x_794(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_current_line_width", x_795);
    WriteMetric(x_763);
    auto x_800 = eval_expr_x_799(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_width_max", x_800);
    WriteMetric(x_763);
    auto x_805 = eval_expr_x_804(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_width_sum", x_805);
    WriteMetric(x_763);
    auto x_810 = eval_expr_x_809(x_762)(x_763);
    HashtblSet(x_762.var, "children_intrinsic_height", x_810);
    WriteMetric(x_763);
    auto x_815 = eval_expr_x_814(x_762)(x_763);
    HashtblSet(x_762.var, "height_expr", x_815);
    WriteMetric(x_763);
    auto x_820 = eval_expr_x_819(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_height_is_height", x_820);
    WriteMetric(x_763);
    auto x_825 = eval_expr_x_824(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_height_internal", x_825);
    WriteMetric(x_763);
    auto x_830 = eval_expr_x_829(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_height_external", x_830);
    WriteMetric(x_763);
    auto x_835 = eval_expr_x_834(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_height_sum", x_835);
    WriteMetric(x_763);
    auto x_840 = eval_expr_x_839(x_762)(x_763);
    HashtblSet(x_762.var, "intrinsic_current_line_height", x_840);
    WriteMetric(x_763);
    auto x_845 = eval_expr_x_844(x_762)(x_763);
    HashtblSet(x_762.var, "finished_intrinsic_height_sum", x_845);
    return MakeUnit();
  };
}
auto eval_stmts_x_74(const auto &x_849) {
  return [&](const auto &x_850) {
    WriteMetric(x_850);
    auto x_852 = eval_expr_x_851(x_849)(x_850);
    HashtblSet(x_849.var, "display", x_852);
    WriteMetric(x_850);
    auto x_857 = eval_expr_x_856(x_849)(x_850);
    HashtblSet(x_849.var, "position", x_857);
    WriteMetric(x_850);
    auto x_862 = eval_expr_x_861(x_849)(x_850);
    HashtblSet(x_849.var, "flex_grow", x_862);
    WriteMetric(x_850);
    auto x_867 = eval_expr_x_866(x_849)(x_850);
    HashtblSet(x_849.var, "flex_shrink", x_867);
    WriteMetric(x_850);
    auto x_872 = eval_expr_x_871(x_849)(x_850);
    HashtblSet(x_849.var, "flex_grow_sum", x_872);
    WriteMetric(x_850);
    auto x_877 = eval_expr_x_876(x_849)(x_850);
    HashtblSet(x_849.var, "flex_shrink_sum", x_877);
    WriteMetric(x_850);
    auto x_882 = eval_expr_x_881(x_849)(x_850);
    HashtblSet(x_849.var, "flex_direction", x_882);
    WriteMetric(x_850);
    auto x_887 = eval_expr_x_886(x_849)(x_850);
    HashtblSet(x_849.var, "is_flex_row", x_887);
    WriteMetric(x_850);
    auto x_892 = eval_expr_x_891(x_849)(x_850);
    HashtblSet(x_849.var, "is_flex_column", x_892);
    WriteMetric(x_850);
    auto x_897 = eval_expr_x_896(x_849)(x_850);
    HashtblSet(x_849.var, "width_attr_expr", x_897);
    WriteMetric(x_850);
    auto x_902 = eval_expr_x_901(x_849)(x_850);
    HashtblSet(x_849.var, "has_width_attr", x_902);
    WriteMetric(x_850);
    auto x_907 = eval_expr_x_906(x_849)(x_850);
    HashtblSet(x_849.var, "height_attr_expr", x_907);
    WriteMetric(x_850);
    auto x_912 = eval_expr_x_911(x_849)(x_850);
    HashtblSet(x_849.var, "has_height_attr", x_912);
    WriteMetric(x_850);
    auto x_917 = eval_expr_x_916(x_849)(x_850);
    HashtblSet(x_849.var, "is_svg_block", x_917);
    WriteMetric(x_850);
    auto x_922 = eval_expr_x_921(x_849)(x_850);
    HashtblSet(x_849.var, "inside_svg", x_922);
    WriteMetric(x_850);
    auto x_927 = eval_expr_x_926(x_849)(x_850);
    HashtblSet(x_849.var, "disabled", x_927);
    WriteMetric(x_850);
    auto x_932 = eval_expr_x_931(x_849)(x_850);
    HashtblSet(x_849.var, "visible", x_932);
    WriteMetric(x_850);
    auto x_937 = eval_expr_x_936(x_849)(x_850);
    HashtblSet(x_849.var, "line_break", x_937);
    return MakeUnit();
  };
}
auto eval_stmts_x_70(const auto &x_941) {
  return [&](const auto &x_942) {
    WriteMetric(x_942);
    auto x_944 = eval_expr_x_943(x_941)(x_942);
    HashtblSet(x_941.var, "box_width", x_944);
    WriteMetric(x_942);
    auto x_949 = eval_expr_x_948(x_941)(x_942);
    HashtblSet(x_941.var, "box_height", x_949);
    WriteMetric(x_942);
    auto x_954 = eval_expr_x_953(x_941)(x_942);
    HashtblSet(x_941.var, "left_over", x_954);
    WriteMetric(x_942);
    auto x_959 = eval_expr_x_958(x_941)(x_942);
    HashtblSet(x_941.var, "flex_amount", x_959);
    WriteMetric(x_942);
    auto x_964 = eval_expr_x_963(x_941)(x_942);
    HashtblSet(x_941.var, "flex_unit", x_964);
    WriteMetric(x_942);
    auto x_969 = eval_expr_x_968(x_941)(x_942);
    HashtblSet(x_941.var, "x", x_969);
    WriteMetric(x_942);
    auto x_974 = eval_expr_x_973(x_941)(x_942);
    HashtblSet(x_941.var, "width_internal", x_974);
    WriteMetric(x_942);
    auto x_979 = eval_expr_x_978(x_941)(x_942);
    HashtblSet(x_941.var, "width_external", x_979);
    WriteMetric(x_942);
    auto x_984 = eval_expr_x_983(x_941)(x_942);
    HashtblSet(x_941.var, "y", x_984);
    WriteMetric(x_942);
    auto x_989 = eval_expr_x_988(x_941)(x_942);
    HashtblSet(x_941.var, "height_internal", x_989);
    WriteMetric(x_942);
    auto x_994 = eval_expr_x_993(x_941)(x_942);
    HashtblSet(x_941.var, "height_external", x_994);
    WriteMetric(x_942);
    auto x_999 = eval_expr_x_998(x_941)(x_942);
    HashtblSet(x_941.var, "line_height", x_999);
    return MakeUnit();
  };
}
auto x_50(const auto &x_51) {
  return OptionIter(ListLast(x_51.children), [&](const auto &x_55) {
    x_55.parent = Some(x_51);
    return x_50(x_55);
  });
}
auto set_children_relation_x_42(const auto &x_51) { return x_50(x_51); }
auto x_56(const auto &x_57) {
  return OptionIter(ListLast(x_57.children), [&](const auto &x_61) {
    x_61.parent = Some(x_57);
    return x_56(x_61);
  });
}
auto set_children_relation_x_38(const auto &x_57) { return x_56(x_57); }
auto x_62(const auto &x_63) {
  return OptionIter(ListLast(x_63.children), [&](const auto &x_67) {
    x_67.parent = Some(x_63);
    return x_62(x_67);
  });
}
auto set_children_relation_x_35(const auto &x_63) { return x_62(x_63); }
auto eval_stmts_x_31(const auto &x_68) {
  return [&](const auto &x_69) { return MakeUnit(); };
}
auto eval_stmts_x_30(const auto &x_72) {
  return [&](const auto &x_73) { return MakeUnit(); };
}
auto x_77(const auto &x_78) {
  return OptionIter(ListLast(x_78.children), [&](const auto &x_82) {
    x_82.parent = Some(x_78);
    return x_77(x_82);
  });
}
auto set_children_relation_x_28(const auto &x_78) { return x_77(x_78); }
auto eval_stmts_x_26(const auto &x_83) {
  return [&](const auto &x_84) { return MakeUnit(); };
}
auto eval_stmts_x_25(const auto &x_87) {
  return [&](const auto &x_88) { return MakeUnit(); };
}
auto x_92(const auto &x_93) {
  return OptionIter(ListLast(x_93.children), [&](const auto &x_97) {
    x_97.parent = Some(x_93);
    return x_92(x_97);
  });
}
auto set_children_relation_x_22(const auto &x_93) { return x_92(x_93); }
auto x_98(const auto &x_99) {
  auto x_100 = Zro(x_99);
  auto x_101 = Fst(x_99);
  auto x_102 = Zro(x_100);
  auto x_103 = Fst(x_100);
  return ListMatch(
      x_102,
      [&](const auto &x_106) {
        auto x_107 = Zro(x_101);
        auto x_108 = Zro(x_107);
        auto x_109 = Fst(x_107);
        auto x_110 = Fst(x_101);
        auto x_111 = Zro(x_110);
        auto x_112 = Fst(x_110);
        InputChangeMetric(x_112, 1);
        std::string x_3805 = x_108;
        if (x_3805 == "attributes") {
          std::string x_3806 = x_109;
          if (x_3806 == "width") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.attr, "width", x_111);
            return MakeUnit();
          } else if (x_3806 == "image_height") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.attr, "image_height", x_111);
            return MakeUnit();
          } else if (x_3806 == "image_width") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.attr, "image_width", x_111);
            return MakeUnit();
          } else if (x_3806 == "height") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.attr, "height", x_111);
            return MakeUnit();
          } else if (x_3806 == "viewBox") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.attr, "viewBox", x_111);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3805 == "properties") {
          std::string x_3807 = x_109;
          if (x_3807 == "width") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.prop, "width", x_111);
            return MakeUnit();
          } else if (x_3807 == "flex-grow") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.prop, "flex-grow", x_111);
            return MakeUnit();
          } else if (x_3807 == "height") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.prop, "height", x_111);
            return MakeUnit();
          } else if (x_3807 == "display") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.prop, "display", x_111);
            return MakeUnit();
          } else if (x_3807 == "position") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.prop, "position", x_111);
            return MakeUnit();
          } else if (x_3807 == "flex-shrink") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.prop, "flex-shrink", x_111);
            return MakeUnit();
          } else if (x_3807 == "flex-direction") {
            WriteMetric(x_112);
            HashtblAddExn(x_103.prop, "flex-direction", x_111);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_104) {
        return [&](const auto &x_105) {
          return x_98(MakePair(MakePair(x_105, ListNthExn(x_103.children, x_104)), x_101));
        };
      });
}
auto insert_value_x_13(const auto &x_99) { return x_98(x_99); }
auto x_113(const auto &x_114) {
  auto x_115 = Zro(x_114);
  auto x_116 = Fst(x_114);
  auto x_117 = Zro(x_115);
  auto x_118 = Fst(x_115);
  return ListMatch(
      x_117,
      [&](const auto &x_121) {
        auto x_122 = Zro(x_116);
        auto x_123 = Zro(x_122);
        auto x_124 = Fst(x_122);
        auto x_125 = Fst(x_116);
        InputChangeMetric(x_125, 1);
        std::string x_3808 = x_123;
        if (x_3808 == "attributes") {
          std::string x_3809 = x_124;
          if (x_3809 == "width") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.attr, "width");
            return MakeUnit();
          } else if (x_3809 == "image_height") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.attr, "image_height");
            return MakeUnit();
          } else if (x_3809 == "image_width") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.attr, "image_width");
            return MakeUnit();
          } else if (x_3809 == "height") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.attr, "height");
            return MakeUnit();
          } else if (x_3809 == "viewBox") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.attr, "viewBox");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3808 == "properties") {
          std::string x_3810 = x_124;
          if (x_3810 == "width") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.prop, "width");
            return MakeUnit();
          } else if (x_3810 == "flex-grow") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.prop, "flex-grow");
            return MakeUnit();
          } else if (x_3810 == "height") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.prop, "height");
            return MakeUnit();
          } else if (x_3810 == "display") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.prop, "display");
            return MakeUnit();
          } else if (x_3810 == "position") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.prop, "position");
            return MakeUnit();
          } else if (x_3810 == "flex-shrink") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.prop, "flex-shrink");
            return MakeUnit();
          } else if (x_3810 == "flex-direction") {
            WriteMetric(x_125);
            HashtblForceRemove(x_118.prop, "flex-direction");
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_119) {
        return [&](const auto &x_120) {
          return x_113(MakePair(MakePair(x_120, ListNthExn(x_118.children, x_119)), x_116));
        };
      });
}
auto delete_value_x_12(const auto &x_114) { return x_113(x_114); }
auto x_126(const auto &x_127) {
  auto x_128 = Zro(x_127);
  auto x_129 = Fst(x_127);
  auto x_130 = Zro(x_128);
  auto x_131 = Fst(x_128);
  return ListMatch(
      x_130,
      [&](const auto &x_134) {
        auto x_135 = Zro(x_129);
        auto x_136 = Zro(x_135);
        auto x_137 = Fst(x_135);
        auto x_138 = Fst(x_129);
        auto x_139 = Zro(x_138);
        auto x_140 = Fst(x_138);
        InputChangeMetric(x_140, 1);
        std::string x_3811 = x_136;
        if (x_3811 == "attributes") {
          std::string x_3812 = x_137;
          if (x_3812 == "width") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.attr, "width");
            WriteMetric(x_140);
            HashtblAddExn(x_131.attr, "width", x_139);
            return MakeUnit();
          } else if (x_3812 == "image_height") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.attr, "image_height");
            WriteMetric(x_140);
            HashtblAddExn(x_131.attr, "image_height", x_139);
            return MakeUnit();
          } else if (x_3812 == "image_width") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.attr, "image_width");
            WriteMetric(x_140);
            HashtblAddExn(x_131.attr, "image_width", x_139);
            return MakeUnit();
          } else if (x_3812 == "height") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.attr, "height");
            WriteMetric(x_140);
            HashtblAddExn(x_131.attr, "height", x_139);
            return MakeUnit();
          } else if (x_3812 == "viewBox") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.attr, "viewBox");
            WriteMetric(x_140);
            HashtblAddExn(x_131.attr, "viewBox", x_139);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3811 == "properties") {
          std::string x_3813 = x_137;
          if (x_3813 == "width") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.prop, "width");
            WriteMetric(x_140);
            HashtblAddExn(x_131.prop, "width", x_139);
            return MakeUnit();
          } else if (x_3813 == "flex-grow") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.prop, "flex-grow");
            WriteMetric(x_140);
            HashtblAddExn(x_131.prop, "flex-grow", x_139);
            return MakeUnit();
          } else if (x_3813 == "height") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.prop, "height");
            WriteMetric(x_140);
            HashtblAddExn(x_131.prop, "height", x_139);
            return MakeUnit();
          } else if (x_3813 == "display") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.prop, "display");
            WriteMetric(x_140);
            HashtblAddExn(x_131.prop, "display", x_139);
            return MakeUnit();
          } else if (x_3813 == "position") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.prop, "position");
            WriteMetric(x_140);
            HashtblAddExn(x_131.prop, "position", x_139);
            return MakeUnit();
          } else if (x_3813 == "flex-shrink") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.prop, "flex-shrink");
            WriteMetric(x_140);
            HashtblAddExn(x_131.prop, "flex-shrink", x_139);
            return MakeUnit();
          } else if (x_3813 == "flex-direction") {
            WriteMetric(x_140);
            HashtblForceRemove(x_131.prop, "flex-direction");
            WriteMetric(x_140);
            HashtblAddExn(x_131.prop, "flex-direction", x_139);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          return Panic();
        }
      },
      [&](const auto &x_132) {
        return [&](const auto &x_133) {
          return x_126(MakePair(MakePair(x_133, ListNthExn(x_131.children, x_132)), x_129));
        };
      });
}
auto replace_value_x_11(const auto &x_127) { return x_126(x_127); }
auto x_141(const auto &x_142) {
  auto x_143 = Zro(x_142);
  auto x_144 = Fst(x_142);
  auto x_145 = Zro(x_143);
  auto x_146 = Fst(x_143);
  return ListMatch(
      x_145, [&](const auto &x_155) { return Panic(); },
      [&](const auto &x_147) {
        return [&](const auto &x_148) {
          return ListMatch(
              x_148,
              [&](const auto &x_151) {
                auto x_152 = Zro(x_144);
                auto x_153 = Fst(x_144);
                auto x_154 = ListSplitN(x_146.children, x_147);
                OutputChangeMetric(x_153,
                                   IntAdd(layout_size_x_3(ListNthExn(x_146.children, x_147)), layout_size_x_3(x_152)));
                x_146.children = ListAppend(Zro(x_154), Cons(x_152, ListTailExn(Fst(x_154))));
                return MakeUnit();
              },
              [&](const auto &x_149) {
                return [&](const auto &x_150) {
                  return x_141(MakePair(MakePair(x_148, ListNthExn(x_146.children, x_147)), x_144));
                };
              });
        };
      });
}
auto replace_layout_node_x_10(const auto &x_142) { return x_141(x_142); }
auto x_156(const auto &x_157) {
  auto x_158 = Zro(x_157);
  auto x_159 = Fst(x_157);
  auto x_160 = Zro(x_158);
  auto x_161 = Fst(x_158);
  return ListMatch(
      x_160, [&](const auto &x_310) { return Panic(); },
      [&](const auto &x_162) {
        return [&](const auto &x_163) {
          return ListMatch(
              x_163,
              [&](const auto &x_166) {
                auto x_167 = Zro(x_159);
                auto x_168 = Fst(x_159);
                InputChangeMetric(x_168,
                                  IntAdd(node_size_x_4(ListNthExn(x_161.children, x_162)), node_size_x_4(x_167)));
                auto x_169 = ListSplitN(x_161.children, x_162);
                auto x_170 = Zro(x_169);
                auto x_171 = Fst(x_169);
                ListMatch(
                    x_171, [&](const auto &x_240) { return Panic(); },
                    [&](const auto &x_172) {
                      return [&](const auto &x_173) {
                        x_161.children = ListAppend(x_170, x_173);
                        return MakeUnit();
                      };
                    });
                auto x_241 = ListSplitN(x_161.children, x_162);
                auto x_242 = Zro(x_241);
                auto x_243 = Fst(x_241);
                x_161.children = ListAppend(x_242, Cons(x_167, x_243));
                x_167.parent = Some(x_161);
                MakeUnit();
                return MakeUnit();
              },
              [&](const auto &x_164) {
                return [&](const auto &x_165) {
                  return x_156(MakePair(MakePair(x_163, ListNthExn(x_161.children, x_162)), x_159));
                };
              });
        };
      });
}
auto replace_node_x_9(const auto &x_157) { return x_156(x_157); }
auto x_311(const auto &x_312) {
  auto x_313 = Zro(x_312);
  auto x_314 = Fst(x_312);
  auto x_315 = Zro(x_313);
  auto x_316 = Fst(x_313);
  return ListMatch(
      x_315, [&](const auto &x_323) { return Panic(); },
      [&](const auto &x_317) {
        return [&](const auto &x_318) {
          return ListMatch(
              x_318,
              [&](const auto &x_321) {
                OutputChangeMetric(x_314, layout_size_x_3(ListNthExn(x_316.children, x_317)));
                auto x_322 = ListSplitN(x_316.children, x_317);
                x_316.children = ListAppend(Zro(x_322), ListTailExn(Fst(x_322)));
              },
              [&](const auto &x_319) {
                return [&](const auto &x_320) {
                  return x_311(MakePair(MakePair(x_318, ListNthExn(x_316.children, x_317)), x_314));
                };
              });
        };
      });
}
auto remove_layout_node_x_8(const auto &x_312) { return x_311(x_312); }
auto x_324(const auto &x_325) {
  auto x_326 = Zro(x_325);
  auto x_327 = Fst(x_325);
  auto x_328 = Zro(x_326);
  auto x_329 = Fst(x_326);
  return ListMatch(
      x_328, [&](const auto &x_407) { return Panic(); },
      [&](const auto &x_330) {
        return [&](const auto &x_331) {
          return ListMatch(
              x_331,
              [&](const auto &x_334) {
                InputChangeMetric(x_327, node_size_x_4(ListNthExn(x_329.children, x_330)));
                auto x_335 = ListSplitN(x_329.children, x_330);
                auto x_336 = Zro(x_335);
                auto x_337 = Fst(x_335);
                return ListMatch(
                    x_337, [&](const auto &x_406) { return Panic(); },
                    [&](const auto &x_338) {
                      return [&](const auto &x_339) {
                        x_329.children = ListAppend(x_336, x_339);
                        return MakeUnit();
                      };
                    });
              },
              [&](const auto &x_332) {
                return [&](const auto &x_333) {
                  return x_324(MakePair(MakePair(x_331, ListNthExn(x_329.children, x_330)), x_327));
                };
              });
        };
      });
}
auto remove_node_x_7(const auto &x_325) { return x_324(x_325); }
auto x_408(const auto &x_409) {
  auto x_410 = Zro(x_409);
  auto x_411 = Fst(x_409);
  auto x_412 = Zro(x_410);
  auto x_413 = Fst(x_410);
  return ListMatch(
      x_412, [&](const auto &x_422) { return Panic(); },
      [&](const auto &x_414) {
        return [&](const auto &x_415) {
          return ListMatch(
              x_415,
              [&](const auto &x_418) {
                auto x_419 = Zro(x_411);
                auto x_420 = Fst(x_411);
                OutputChangeMetric(x_420, layout_size_x_3(x_419));
                auto x_421 = ListSplitN(x_413.children, x_414);
                x_413.children = ListAppend(Zro(x_421), Cons(x_419, Fst(x_421)));
              },
              [&](const auto &x_416) {
                return [&](const auto &x_417) {
                  return x_408(MakePair(MakePair(x_415, ListNthExn(x_413.children, x_414)), x_411));
                };
              });
        };
      });
}
auto add_layout_node_x_6(const auto &x_409) { return x_408(x_409); }
auto x_423(const auto &x_424) {
  auto x_425 = Zro(x_424);
  auto x_426 = Fst(x_424);
  auto x_427 = Zro(x_425);
  auto x_428 = Fst(x_425);
  return ListMatch(
      x_427, [&](const auto &x_505) { return Panic(); },
      [&](const auto &x_429) {
        return [&](const auto &x_430) {
          return ListMatch(
              x_430,
              [&](const auto &x_433) {
                auto x_434 = Zro(x_426);
                auto x_435 = Fst(x_426);
                InputChangeMetric(x_435, node_size_x_4(x_434));
                auto x_436 = ListSplitN(x_428.children, x_429);
                auto x_437 = Zro(x_436);
                auto x_438 = Fst(x_436);
                x_428.children = ListAppend(x_437, Cons(x_434, x_438));
                x_434.parent = Some(x_428);
                return MakeUnit();
              },
              [&](const auto &x_431) {
                return [&](const auto &x_432) {
                  return x_423(MakePair(MakePair(x_430, ListNthExn(x_428.children, x_429)), x_426));
                };
              });
        };
      });
}
auto add_node_x_5(const auto &x_424) { return x_423(x_424); }
auto x_506(const auto &x_507) {
  return IntAdd(1, ListIntSum(x_507.children, [&](const auto &x_508) { return x_506(x_508); }));
}
auto node_size_x_4(const auto &x_507) { return x_506(x_507); }
auto x_509(const auto &x_510) {
  return IntAdd(1, ListIntSum(x_510.children, [&](const auto &x_511) { return x_509(x_511); }));
}
auto layout_size_x_3(const auto &x_510) { return x_509(x_510); }
auto x_512(const auto &x_513) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember("children", x_513)), [&](const auto &x_514) { return x_512(x_514); }));
}
auto json_to_layout_node_x_2(const auto &x_513) { return x_512(x_513); }
auto x_515(const auto &x_516) {
  return MakeNode(x_516.name, x_516.attr, x_516.prop, x_516.extern_id,
                  ListMap(x_516.children, [&](const auto &x_517) { return x_515(x_517); }));
}
auto node_to_fs_node_x_1(const auto &x_516) { return x_515(x_516); }
auto x_518(const auto &x_519) {
  return MakeNode(JsonToString(JsonMember("name", x_519)), JsonToDict(JsonMember("attributes", x_519)),
                  JsonToDict(JsonMember("properties", x_519)), JsonToInt(JsonMember("id", x_519)),
                  ListMap(JsonToList(JsonMember("children", x_519)), [&](const auto &x_520) { return x_518(x_520); }));
}
auto json_to_node_aux_x_0(const auto &x_519) { return x_518(x_519); }
int main() {
  return WithOutFile("hn_type.out", [&](const auto &x_14) {
    PrintEndline("RUNNING FS");
    return WithInFile("command.json", [&](const auto &x_15) {
      auto x_16 = MakeRef(0);
      auto x_17 = FreshMetric();
      auto x_18 = JsonOfString(InputLine(x_15));
      auto x_19 = JsonOfString(InputLine(x_15));
      auto x_20 = MakeStack();
      PushStack(x_20, x_18);
      PushStack(x_20, x_19);
      Assert(StringEqual(JsonToString(JsonMember("name", x_18)), "init"));
      Assert(StringEqual(JsonToString(JsonMember("name", x_19)), "layout_init"));
      auto x_23 = [&]() {
        auto x_21 = json_to_node_aux_x_0(JsonMember("node", x_18));
        x_21.parent = None();
        x_21.prev = None();
        x_21.next = None();
        return x_21;
      }();
      auto x_24 = json_to_layout_node_x_2(JsonMember("node", x_19));
      OutputChangeMetric(x_17, layout_size_x_3(x_24));
      InputChangeMetric(x_17, node_size_x_4(x_23));
      JsonToChannel(
          x_14,
          AssocToJson(Cons(
              MakePair("name", StringToJson("FS")),
              Cons(
                  MakePair("diff_num", IntToJson(ReadRef(x_16))),
                  Cons(MakePair("read_count", IntToJson(MetricReadCount(x_17))),
                       Cons(MakePair("meta_read_count", IntToJson(MetricMetaReadCount(x_17))),
                            Cons(MakePair("write_count", IntToJson(MetricWriteCount(x_17))),
                                 Cons(MakePair("meta_write_count", IntToJson(MetricMetaWriteCount(x_17))),
                                      Cons(MakePair("queue_size_acc", IntToJson(MetricQueueSizeAcc(x_17))),
                                           Cons(MakePair("input_change_count", IntToJson(MetricInputChangeCount(x_17))),
                                                Cons(MakePair("output_change_count",
                                                              IntToJson(MetricOutputChangeCount(x_17))),
                                                     Cons(MakePair("html", StringToJson("")),
                                                          Cons(MakePair("command", ListToJson(StackToList(x_20))),
                                                               Nil())))))))))))));
      OutputString(x_14, "\n");
      ResetMetric(x_17);
      ClearStack(x_20);
      WriteRef(x_16, IntAdd(ReadRef(x_16), 1));
      auto x_29 = [&]() {
        auto x_27 = node_to_fs_node_x_1(x_23);
        x_27.parent = None();
        x_27.prev = None();
        x_27.next = None();
        return x_27;
      }();
      AssertNodeValueEqual(x_23, x_29);
      PrintEndline("EVAL OK!");
      IterLines(x_15, [&](const auto &x_32) {
        auto x_33 = JsonOfString(x_32);
        PushStack(x_20, x_33);
        std::string x_3814 = JsonToString(JsonMember("name", x_33));
        if (x_3814 == "add") {
          return add_node_x_5(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_36) { return JsonToInt(x_36); }),
                       x_23),
              MakePair(
                  [&]() {
                    auto x_34 = json_to_node_aux_x_0(JsonMember("node", x_33));
                    x_34.parent = None();
                    x_34.prev = None();
                    x_34.next = None();
                    return x_34;
                  }(),
                  x_17)));
        } else if (x_3814 == "recalculate") {
          JsonToChannel(
              x_14,
              AssocToJson(Cons(
                  MakePair("name", StringToJson("FS")),
                  Cons(MakePair("diff_num", IntToJson(ReadRef(x_16))),
                       Cons(MakePair("read_count", IntToJson(MetricReadCount(x_17))),
                            Cons(MakePair("meta_read_count", IntToJson(MetricMetaReadCount(x_17))),
                                 Cons(MakePair("write_count", IntToJson(MetricWriteCount(x_17))),
                                      Cons(MakePair("meta_write_count", IntToJson(MetricMetaWriteCount(x_17))),
                                           Cons(MakePair("queue_size_acc", IntToJson(MetricQueueSizeAcc(x_17))),
                                                Cons(MakePair("input_change_count",
                                                              IntToJson(MetricInputChangeCount(x_17))),
                                                     Cons(MakePair("output_change_count",
                                                                   IntToJson(MetricOutputChangeCount(x_17))),
                                                          Cons(MakePair("html", StringToJson("")),
                                                               Cons(MakePair("command", ListToJson(StackToList(x_20))),
                                                                    Nil())))))))))))));
          OutputString(x_14, "\n");
          ResetMetric(x_17);
          ClearStack(x_20);
          WriteRef(x_16, IntAdd(ReadRef(x_16), 1));
          auto x_39 = [&]() {
            auto x_37 = node_to_fs_node_x_1(x_23);
            x_37.parent = None();
            x_37.prev = None();
            x_37.next = None();
            return x_37;
          }();
          AssertNodeValueEqual(x_23, x_39);
          return MakeUnit();
        } else if (x_3814 == "remove") {
          return remove_node_x_7(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_40) { return JsonToInt(x_40); }),
                       x_23),
              x_17));
        } else if (x_3814 == "replace") {
          return replace_node_x_9(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_43) { return JsonToInt(x_43); }),
                       x_23),
              MakePair(
                  [&]() {
                    auto x_41 = json_to_node_aux_x_0(JsonMember("node", x_33));
                    x_41.parent = None();
                    x_41.prev = None();
                    x_41.next = None();
                    return x_41;
                  }(),
                  x_17)));
        } else if (x_3814 == "replace_value") {
          return replace_value_x_11(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_44) { return JsonToInt(x_44); }),
                       x_23),
              MakePair(MakePair(JsonToString(JsonMember("type", x_33)), JsonToString(JsonMember("key", x_33))),
                       MakePair(JsonToValue(JsonMember("value", x_33)), x_17))));
        } else if (x_3814 == "delete_value") {
          return delete_value_x_12(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_45) { return JsonToInt(x_45); }),
                       x_23),
              MakePair(MakePair(JsonToString(JsonMember("type", x_33)), JsonToString(JsonMember("key", x_33))), x_17)));
        } else if (x_3814 == "insert_value") {
          return insert_value_x_13(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_46) { return JsonToInt(x_46); }),
                       x_23),
              MakePair(MakePair(JsonToString(JsonMember("type", x_33)), JsonToString(JsonMember("key", x_33))),
                       MakePair(JsonToValue(JsonMember("value", x_33)), x_17))));
        } else if (x_3814 == "layout_remove") {
          return remove_layout_node_x_8(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_47) { return JsonToInt(x_47); }),
                       x_24),
              x_17));
        } else if (x_3814 == "layout_add") {
          return add_layout_node_x_6(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_48) { return JsonToInt(x_48); }),
                       x_24),
              MakePair(json_to_layout_node_x_2(JsonMember("node", x_33)), x_17)));
        } else if (x_3814 == "layout_replace") {
          return replace_layout_node_x_10(MakePair(
              MakePair(ListMap(JsonToList(JsonMember("path", x_33)), [&](const auto &x_49) { return JsonToInt(x_49); }),
                       x_24),
              MakePair(json_to_layout_node_x_2(JsonMember("node", x_33)), x_17)));
        } else if (x_3814 == "layout_info_changed") {
          return OutputChangeMetric(x_17, 1);
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