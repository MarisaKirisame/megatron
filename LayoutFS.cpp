#include "header.h"
struct Content {
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
  Content(const std::string &name, std::unordered_map<std::string, Value> &&attr,
          std::unordered_map<std::string, Value> &&prop, int64_t extern_id, const List<Node> &children)
      : name(name), attr(std::move(attr)), prop(std::move(prop)), extern_id(extern_id), children(children) {}
  Content(const std::string &name, const std::unordered_map<std::string, Value> &attr,
          const std::unordered_map<std::string, Value> &prop, int64_t extern_id, const List<Node> &children)
      : name(name), attr(attr), prop(prop), extern_id(extern_id), children(children) {}
  bool var_visible;
  bool has_var_visible;
  bool var_inside_svg;
  bool has_var_inside_svg;
  std::string var_height_expr;
  bool has_var_height_expr;
  double var_flex_grow_sum;
  bool has_var_flex_grow_sum;
  double var_intrinsic_width_max;
  bool has_var_intrinsic_width_max;
  double var_x;
  bool has_var_x;
  double var_left_over;
  bool has_var_left_over;
  double var_y;
  bool has_var_y;
  bool var_is_svg_block;
  bool has_var_is_svg_block;
  double var_intrinsic_current_line_width;
  bool has_var_intrinsic_current_line_width;
  bool var_is_default_case;
  bool has_var_is_default_case;
  double var_finished_intrinsic_height_sum;
  bool has_var_finished_intrinsic_height_sum;
  double var_flex_grow;
  bool has_var_flex_grow;
  double var_flex_amount;
  bool has_var_flex_amount;
  double var_children_intrinsic_height;
  bool has_var_children_intrinsic_height;
  double var_height_internal;
  bool has_var_height_internal;
  double var_width_external;
  bool has_var_width_external;
  double var_intrinsic_current_line_height;
  bool has_var_intrinsic_current_line_height;
  double var_intrinsic_width_external;
  bool has_var_intrinsic_width_external;
  double var_flex_unit;
  bool has_var_flex_unit;
  std::string var_width_attr_expr;
  bool has_var_width_attr_expr;
  double var_intrinsic_height_internal;
  bool has_var_intrinsic_height_internal;
  std::string var_flex_direction;
  bool has_var_flex_direction;
  double var_children_intrinsic_width;
  bool has_var_children_intrinsic_width;
  double var_box_width;
  bool has_var_box_width;
  double var_intrinsic_height_sum;
  bool has_var_intrinsic_height_sum;
  bool var_intrinsic_height_is_height;
  bool has_var_intrinsic_height_is_height;
  bool var_intrinsic_width_is_width;
  bool has_var_intrinsic_width_is_width;
  std::string var_display;
  bool has_var_display;
  double var_box_height;
  bool has_var_box_height;
  bool var_is_flex_row;
  bool has_var_is_flex_row;
  double var_flex_shrink_sum;
  bool has_var_flex_shrink_sum;
  double var_intrinsic_width_sum;
  bool has_var_intrinsic_width_sum;
  double var_line_height;
  bool has_var_line_height;
  bool var_is_flex_column;
  bool has_var_is_flex_column;
  bool var_has_width_attr;
  bool has_var_has_width_attr;
  double var_width_internal;
  bool has_var_width_internal;
  bool var_line_break;
  bool has_var_line_break;
  double var_intrinsic_height_external;
  bool has_var_intrinsic_height_external;
  bool var_has_height_attr;
  bool has_var_has_height_attr;
  double var_flex_shrink;
  bool has_var_flex_shrink;
  bool var_disabled;
  bool has_var_disabled;
  std::string var_position;
  bool has_var_position;
  std::string var_height_attr_expr;
  bool has_var_height_attr_expr;
  double var_height_external;
  bool has_var_height_external;
  std::string var_width_expr;
  bool has_var_width_expr;
  double var_intrinsic_width_internal;
  bool has_var_intrinsic_width_internal;
};
#include "header_continued.h"
Unit var_modified_x_943(const auto &x_945) { return MakeUnit(); }
auto eval_expr_x_940(const auto &x_952) {
  if ((x_952->prev != nullptr) && (!(x_952->prev)->var_line_break)) {
    return max(x_952->var_height_external, (x_952->prev)->var_line_height);
  } else {
    return x_952->var_height_external;
  }
}
Unit var_modified_x_938(const auto &x_969) { return MakeUnit(); }
auto eval_expr_x_935(const auto &x_972) {
  if (eq(x_972->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_972->var_height_internal;
  }
}
Unit var_modified_x_933(const auto &x_981) { return MakeUnit(); }
auto eval_expr_x_930(const auto &x_984) {
  if (x_984->var_intrinsic_height_is_height) {
    return x_984->var_intrinsic_height_internal;
  } else {
    if ((x_984->parent != nullptr) && (x_984->parent)->var_is_flex_column) {
      return plus(x_984->var_intrinsic_height_internal, mult(x_984->var_flex_amount, (x_984->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_984->var_height_expr, std::string("%"))) {
        return mult(x_984->var_box_height,
                    divide(string_to_float(strip_suffix(x_984->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_984->var_box_height, x_984->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_928(const auto &x_1037) { return MakeUnit(); }
auto eval_expr_x_925(const auto &x_1045) {
  if (x_1045->prev != nullptr) {
    if (x_1045->var_line_break || (x_1045->prev)->var_line_break) {
      return plus((x_1045->prev)->var_y, (x_1045->prev)->var_line_height);
    } else {
      return (x_1045->prev)->var_y;
    }
  } else {
    if (x_1045->parent != nullptr) {
      return (x_1045->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_923(const auto &x_1070) { return MakeUnit(); }
auto eval_expr_x_920(const auto &x_1074) {
  if (eq(x_1074->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1074->var_width_internal;
  }
}
Unit var_modified_x_918(const auto &x_1083) { return MakeUnit(); }
auto eval_expr_x_915(const auto &x_1086) {
  if (x_1086->var_intrinsic_width_is_width) {
    return x_1086->var_intrinsic_width_internal;
  } else {
    if ((x_1086->parent != nullptr) && (x_1086->parent)->var_is_flex_row) {
      return plus(x_1086->var_intrinsic_width_internal, mult(x_1086->var_flex_amount, (x_1086->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_1086->var_width_expr, std::string("%"))) {
        return mult(x_1086->var_box_width,
                    divide(string_to_float(strip_suffix(x_1086->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_1086->var_box_width, x_1086->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_913(const auto &x_1139) { return MakeUnit(); }
auto eval_expr_x_910(const auto &x_1144) {
  if (x_1144->prev != nullptr) {
    if (x_1144->var_line_break || (x_1144->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_1144->prev)->var_x, (x_1144->prev)->var_width_external);
    }
  } else {
    if (x_1144->parent != nullptr) {
      return (x_1144->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_908(const auto &x_1165) { return MakeUnit(); }
auto eval_expr_x_905(const auto &x_1168) {
  if (gt(x_1168->var_left_over, 0.)) {
    return divide(x_1168->var_left_over, x_1168->var_flex_grow_sum);
  } else {
    return divide(x_1168->var_left_over, x_1168->var_flex_shrink_sum);
  }
}
Unit var_modified_x_903(const auto &x_1189) { return MakeUnit(); }
auto eval_expr_x_900(const auto &x_1192) {
  if ((x_1192->parent != nullptr) && gt((x_1192->parent)->var_left_over, 0.)) {
    return x_1192->var_flex_grow;
  } else {
    return x_1192->var_flex_shrink;
  }
}
Unit var_modified_x_898(const auto &x_1205) { return MakeUnit(); }
auto eval_expr_x_895(const auto &x_1210) {
  if (x_1210->var_is_flex_row) {
    return minus(x_1210->var_box_width, (x_1210->last != nullptr) ? ((x_1210->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_1210->var_box_height, (x_1210->last != nullptr) ? ((x_1210->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_893(const auto &x_1231) { return MakeUnit(); }
auto eval_expr_x_890(const auto &x_1235) {
  if (x_1235->parent != nullptr) {
    return (x_1235->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_888(const auto &x_1240) { return MakeUnit(); }
auto eval_expr_x_885(const auto &x_1244) {
  if (x_1244->parent != nullptr) {
    return (x_1244->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_882(const auto &x_1249) { return MakeUnit(); }
auto eval_expr_x_879(const auto &x_1267) {
  if (eq(x_1267->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_1267->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_1267->parent != nullptr) &&
          (eq((x_1267->parent)->var_display, std::string("flex")) ||
           eq((x_1267->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_1267->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_1267->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_1267->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_1267->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_1267, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_1267, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_1267->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_1267->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_1267->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_1267->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_1267->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_1267->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_1267->var_display, std::string("list-item"))) {
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
Unit var_modified_x_877(const auto &x_1344) { return MakeUnit(); }
auto eval_expr_x_874(const auto &x_1346) {
  return (((!(x_1346->parent != nullptr)) || (x_1346->parent)->var_visible) &&
          (neq(x_1346->var_display, std::string("none")) && ((!x_1346->var_inside_svg) && (!x_1346->var_disabled))));
}
Unit var_modified_x_872(const auto &x_1363) { return MakeUnit(); }
auto eval_expr_x_869(const auto &x_1371) {
  if (eq(x_1371->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_1371->parent != nullptr) && (x_1371->parent)->var_disabled);
  }
}
Unit var_modified_x_867(const auto &x_1376) { return MakeUnit(); }
auto eval_expr_x_864(const auto &x_1384) {
  return ((x_1384->parent != nullptr) && ((x_1384->parent)->var_is_svg_block || (x_1384->parent)->var_inside_svg));
}
Unit var_modified_x_862(const auto &x_1393) { return MakeUnit(); }
auto eval_expr_x_859(const auto &x_1395) { return eq(x_1395->name, std::string("svg")); }
Unit var_modified_x_857(const auto &x_1396) { return MakeUnit(); }
auto eval_expr_x_854(const auto &x_1405) { return neq(x_1405->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_852(const auto &x_1410) { return MakeUnit(); }
auto eval_expr_x_849(const auto &x_1418) {
  if (!HasAttr(x_1418, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_1418, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_1418, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_1418, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_847(const auto &x_1429) { return MakeUnit(); }
auto eval_expr_x_844(const auto &x_1439) { return neq(x_1439->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_842(const auto &x_1444) { return MakeUnit(); }
auto eval_expr_x_839(const auto &x_1452) {
  if (!HasAttr(x_1452, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_1452, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_1452, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_1452, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_837(const auto &x_1463) { return MakeUnit(); }
auto eval_expr_x_834(const auto &x_1466) {
  if ((x_1466->parent != nullptr) &&
      (eq((x_1466->parent)->var_display, std::string("flex")) ||
       eq((x_1466->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_1466->parent)->var_flex_direction, std::string("column")) ||
        eq((x_1466->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_832(const auto &x_1491) { return MakeUnit(); }
auto eval_expr_x_829(const auto &x_1495) {
  if ((x_1495->parent != nullptr) &&
      (eq((x_1495->parent)->var_display, std::string("flex")) ||
       eq((x_1495->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_1495->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_827(const auto &x_1520) { return MakeUnit(); }
auto eval_expr_x_824(const auto &x_1527) {
  if (HashtblContain(x_1527->prop, std::string("flex-direction"))) {
    return GetProp<std::string>(x_1527, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_822(const auto &x_1530) { return MakeUnit(); }
auto eval_expr_x_819(const auto &x_1535) {
  return plus((x_1535->prev != nullptr) ? ((x_1535->prev)->var_flex_shrink_sum) : (0.), x_1535->var_flex_shrink);
}
Unit var_modified_x_817(const auto &x_1544) { return MakeUnit(); }
auto eval_expr_x_814(const auto &x_1549) {
  return plus((x_1549->prev != nullptr) ? ((x_1549->prev)->var_flex_grow_sum) : (0.), x_1549->var_flex_grow);
}
Unit var_modified_x_812(const auto &x_1558) { return MakeUnit(); }
auto eval_expr_x_809(const auto &x_1561) {
  if (HashtblContain(x_1561->prop, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_1561, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_807(const auto &x_1564) { return MakeUnit(); }
auto eval_expr_x_804(const auto &x_1567) {
  if (HashtblContain(x_1567->prop, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_1567, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_802(const auto &x_1570) { return MakeUnit(); }
auto eval_expr_x_799(const auto &x_1576) {
  if (HashtblContain(x_1576->prop, std::string("position"))) {
    return GetProp<std::string>(x_1576, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_797(const auto &x_1579) { return MakeUnit(); }
auto eval_expr_x_794(const auto &x_1605) {
  if (HashtblContain(x_1605->prop, std::string("display"))) {
    return GetProp<std::string>(x_1605, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_791(const auto &x_1608) { return MakeUnit(); }
auto eval_expr_x_788(const auto &x_1618) {
  if (x_1618->prev != nullptr) {
    if (x_1618->var_line_break) {
      return plus((x_1618->prev)->var_finished_intrinsic_height_sum,
                  plus((x_1618->prev)->var_intrinsic_current_line_height, x_1618->var_intrinsic_height_external));
    } else {
      return (x_1618->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_1618->var_line_break) {
      return x_1618->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_786(const auto &x_1647) { return MakeUnit(); }
auto eval_expr_x_783(const auto &x_1657) {
  if (x_1657->var_line_break) {
    return 0.;
  } else {
    return max(x_1657->var_intrinsic_height_external,
               (x_1657->prev != nullptr) ? ((x_1657->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_781(const auto &x_1670) { return MakeUnit(); }
auto eval_expr_x_778(const auto &x_1677) {
  return plus((x_1677->prev != nullptr) ? ((x_1677->prev)->var_intrinsic_height_sum) : (0.),
              x_1677->var_intrinsic_height_external);
}
Unit var_modified_x_776(const auto &x_1686) { return MakeUnit(); }
auto eval_expr_x_773(const auto &x_1691) {
  if (eq(x_1691->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1691->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_771(const auto &x_1700) { return MakeUnit(); }
auto eval_expr_x_768(const auto &x_1705) {
  if (eq(x_1705->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_1705->var_inside_svg) {
      return 0.;
    } else {
      if (x_1705->var_disabled) {
        return 0.;
      } else {
        if (neq(x_1705->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_1705->var_height_expr, std::string("%"))) &&
             neq(x_1705->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_1705->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_1705->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_1705->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_1705->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_1705->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_1705->var_children_intrinsic_height,
              (eq(x_1705->name, std::string("#text")))
                  ? (10.)
                  : ((x_1705->var_is_default_case)
                         ? (0.)
                         : ((eq(x_1705->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_1705->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_1705->name, std::string("svg")))
                                              ? ((x_1705->var_has_height_attr &&
                                                  string_is_float(x_1705->var_height_attr_expr))
                                                     ? (string_to_float(x_1705->var_height_attr_expr))
                                                     : ((HasAttr(x_1705, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_1705, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_1705,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_1705->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_1705->name, std::string("IMG")))
                                                     ? ((x_1705->var_has_height_attr)
                                                            ? (string_to_float(x_1705->var_height_attr_expr))
                                                            : ((HasAttr(x_1705, std::string("image_height")) &&
                                                                (!x_1705->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_1705, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_1705,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_1705->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1705,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_1705,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_1705->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_1705->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_766(const auto &x_1850) { return MakeUnit(); }
auto eval_expr_x_763(const auto &x_1852) {
  if (eq(x_1852->var_display, std::string("none")) || (x_1852->var_inside_svg || x_1852->var_disabled)) {
    return true;
  } else {
    if ((x_1852->parent != nullptr) && (x_1852->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_1852->var_height_expr, std::string("auto")) ||
          (has_suffix(x_1852->var_height_expr, std::string("px")) ||
           (has_suffix(x_1852->var_height_expr, std::string("ch")) ||
            (has_suffix(x_1852->var_height_expr, std::string("lh")) ||
             eq(x_1852->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_761(const auto &x_1901) { return MakeUnit(); }
auto eval_expr_x_758(const auto &x_1921) {
  if (HashtblContain(x_1921->prop, std::string("height"))) {
    return GetProp<std::string>(x_1921, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_756(const auto &x_1924) { return MakeUnit(); }
auto eval_expr_x_753(const auto &x_1926) {
  if (x_1926->last != nullptr) {
    return plus((x_1926->last)->var_finished_intrinsic_height_sum, (x_1926->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_751(const auto &x_1935) { return MakeUnit(); }
auto eval_expr_x_748(const auto &x_1942) {
  return plus((x_1942->prev != nullptr) ? ((x_1942->prev)->var_intrinsic_width_sum) : (0.),
              x_1942->var_intrinsic_width_external);
}
Unit var_modified_x_746(const auto &x_1951) { return MakeUnit(); }
auto eval_expr_x_743(const auto &x_1958) {
  return max(x_1958->var_intrinsic_current_line_width,
             (x_1958->prev != nullptr) ? ((x_1958->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_741(const auto &x_1967) { return MakeUnit(); }
auto eval_expr_x_738(const auto &x_1972) {
  return plus(x_1972->var_intrinsic_width_external,
              ((x_1972->prev != nullptr) && (!(x_1972->prev)->var_line_break))
                  ? ((x_1972->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_736(const auto &x_1985) { return MakeUnit(); }
auto eval_expr_x_733(const auto &x_1988) {
  if (eq(x_1988->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_1988->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_731(const auto &x_1997) { return MakeUnit(); }
auto eval_expr_x_728(const auto &x_2002) {
  if (eq(x_2002->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_2002->var_inside_svg) {
      return 0.;
    } else {
      if (x_2002->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2002->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_2002->var_width_expr, std::string("%"))) &&
             (neq(x_2002->var_width_expr, std::string("fit-content")) &&
              (neq(x_2002->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_2002->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_2002->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_2002->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_2002->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_2002->var_children_intrinsic_width,
              (eq(x_2002->name, std::string("#text")))
                  ? (100.)
                  : ((x_2002->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2002->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_2002->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_2002->name, std::string("svg")))
                                              ? ((x_2002->var_has_width_attr &&
                                                  string_is_float(x_2002->var_width_attr_expr))
                                                     ? (string_to_float(x_2002->var_width_attr_expr))
                                                     : (((!x_2002->var_has_width_attr) &&
                                                         HasAttr(x_2002, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_2002, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_2002,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_2002->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_2002->name, std::string("IMG")))
                                                     ? ((x_2002->var_has_width_attr)
                                                            ? (string_to_float(x_2002->var_width_attr_expr))
                                                            : ((HasAttr(x_2002, std::string("image_width")) &&
                                                                (!x_2002->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_2002, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_2002, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_2002->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2002,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2002,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_2002->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_2002->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_726(const auto &x_2155) { return MakeUnit(); }
auto eval_expr_x_723(const auto &x_2157) {
  if (x_2157->last != nullptr) {
    return (x_2157->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_721(const auto &x_2162) { return MakeUnit(); }
auto eval_expr_x_718(const auto &x_2164) {
  if (eq(x_2164->var_display, std::string("none")) || (x_2164->var_inside_svg || x_2164->var_disabled)) {
    return true;
  } else {
    if ((x_2164->parent != nullptr) && (x_2164->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_2164->var_width_expr, std::string("auto")) ||
          (has_suffix(x_2164->var_width_expr, std::string("px")) ||
           (has_suffix(x_2164->var_width_expr, std::string("ch")) ||
            (has_prefix(x_2164->var_width_expr, std::string("calc(")) ||
             eq(x_2164->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_716(const auto &x_2213) { return MakeUnit(); }
auto eval_expr_x_713(const auto &x_2216) {
  if (eq(x_2216->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_2216->var_inside_svg) {
      return true;
    } else {
      if (x_2216->var_disabled) {
        return true;
      } else {if ( eq(x_2216->name,std::string("#document")) || (eq(x_2216->name,std::string("#shadow-root")) || (eq(x_2216->name,std::string("DIV")) || (eq(x_2216->name,std::string("HTML")) || (eq(x_2216->name,std::string("BODY")) || (eq(x_2216->name,std::string("BUTTON")) || (eq(x_2216->name,std::string("FOOTER")) || (eq(x_2216->name,std::string("SELECT")) || (eq(x_2216->name,std::string("SECTION")) || (eq(x_2216->name,std::string("FORM")) || (eq(x_2216->name,std::string("CENTER")) || (eq(x_2216->name,std::string("TD")) || (eq(x_2216->name,std::string("TR")) || (eq(x_2216->name,std::string("TBODY")) || (eq(x_2216->name,std::string("TABLE")) || (eq(x_2216->name,std::string("SPAN")) || (eq(x_2216->name,std::string("FONT")) || (eq(x_2216->name,std::string("A")) || (eq(x_2216->name,std::string("ARTICLE")) || (eq(x_2216->name,std::string("P")) || (eq(x_2216->name,std::string("U")) || (eq(x_2216->name,std::string("UL")) || (eq(x_2216->name,std::string("B")) || (eq(x_2216->name,std::string("H1")) || (eq(x_2216->name,std::string("H2")) || (eq(x_2216->name,std::string("H3")) || (eq(x_2216->name,std::string("H4")) || (eq(x_2216->name,std::string("DT")) || (eq(x_2216->name,std::string("DD")) || (eq(x_2216->name,std::string("DL")) || (eq(x_2216->name,std::string("LI")) || (eq(x_2216->name,std::string("LABEL")) || (eq(x_2216->name,std::string("OL")) || (eq(x_2216->name,std::string("NAV")) || (eq(x_2216->name,std::string("HEADER")) || (eq(x_2216->name,std::string("HEAD")) || (eq(x_2216->name,std::string("SOURCE")) || (eq(x_2216->name,std::string("PICTURE")) || (eq(x_2216->name,std::string("FIGURE")) || (eq(x_2216->name,std::string("FIGCAPTION")) || (eq(x_2216->name,std::string("MAIN")) || (eq(x_2216->name,std::string("REACT-PARTIAL")) || (eq(x_2216->name,std::string("QUERY-BUILDER")) || (eq(x_2216->name,std::string("MODAL-DIALOG")) || (eq(x_2216->name,std::string("SCROLLABLE-REGION")) || (eq(x_2216->name,std::string("DIALOG-HELPER")) || (eq(x_2216->name,std::string("AUTO-CHECK")) || (eq(x_2216->name,std::string("TOOL-TIP")) || (eq(x_2216->name,std::string("CUSTOM-SCOPES")) || (eq(x_2216->name,std::string("QBSEARCH-INPUT")) || (eq(x_2216->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_2216->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_2216->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_2216->name,std::string("GHCC-CONSENT")) || (eq(x_2216->name,std::string("GLOBAL-BANNER")) || (eq(x_2216->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_2216->name,std::string("CARD-SKEW")) || (eq(x_2216->name,std::string("EM")) || (eq(x_2216->name,std::string("ASIDE")) || (eq(x_2216->name,std::string("AUDIO")) || (eq(x_2216->name,std::string("SUP")) || (eq(x_2216->name,std::string("TIME")) || (eq(x_2216->name,std::string("ABBR")) || (eq(x_2216->name,std::string("SMALL")) || (eq(x_2216->name,std::string("SLOT")) || eq(x_2216->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_711(const auto &x_2229) { return MakeUnit(); }
auto eval_expr_x_708(const auto &x_2249) {
  if (HashtblContain(x_2249->prop, std::string("width"))) {
    return GetProp<std::string>(x_2249, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_705(const auto &x_2252) { return MakeUnit(); }
auto eval_expr_x_702(const auto &x_2259) {
  if ((x_2259->prev != nullptr) && (!(x_2259->prev)->var_line_break)) {
    return max(x_2259->var_height_external, (x_2259->prev)->var_line_height);
  } else {
    return x_2259->var_height_external;
  }
}
Unit var_modified_x_700(const auto &x_2276) { return MakeUnit(); }
auto eval_expr_x_697(const auto &x_2279) {
  if (eq(x_2279->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2279->var_height_internal;
  }
}
Unit var_modified_x_695(const auto &x_2288) { return MakeUnit(); }
auto eval_expr_x_692(const auto &x_2291) {
  if (x_2291->var_intrinsic_height_is_height) {
    return x_2291->var_intrinsic_height_internal;
  } else {
    if ((x_2291->parent != nullptr) && (x_2291->parent)->var_is_flex_column) {
      return plus(x_2291->var_intrinsic_height_internal,
                  mult(x_2291->var_flex_amount, (x_2291->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_2291->var_height_expr, std::string("%"))) {
        return mult(x_2291->var_box_height,
                    divide(string_to_float(strip_suffix(x_2291->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_2291->var_box_height, x_2291->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_690(const auto &x_2344) { return MakeUnit(); }
auto eval_expr_x_687(const auto &x_2352) {
  if (x_2352->prev != nullptr) {
    if (x_2352->var_line_break || (x_2352->prev)->var_line_break) {
      return plus((x_2352->prev)->var_y, (x_2352->prev)->var_line_height);
    } else {
      return (x_2352->prev)->var_y;
    }
  } else {
    if (x_2352->parent != nullptr) {
      return (x_2352->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_685(const auto &x_2377) { return MakeUnit(); }
auto eval_expr_x_682(const auto &x_2381) {
  if (eq(x_2381->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2381->var_width_internal;
  }
}
Unit var_modified_x_680(const auto &x_2390) { return MakeUnit(); }
auto eval_expr_x_677(const auto &x_2393) {
  if (x_2393->var_intrinsic_width_is_width) {
    return x_2393->var_intrinsic_width_internal;
  } else {
    if ((x_2393->parent != nullptr) && (x_2393->parent)->var_is_flex_row) {
      return plus(x_2393->var_intrinsic_width_internal, mult(x_2393->var_flex_amount, (x_2393->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_2393->var_width_expr, std::string("%"))) {
        return mult(x_2393->var_box_width,
                    divide(string_to_float(strip_suffix(x_2393->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_2393->var_box_width, x_2393->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_675(const auto &x_2446) { return MakeUnit(); }
auto eval_expr_x_672(const auto &x_2451) {
  if (x_2451->prev != nullptr) {
    if (x_2451->var_line_break || (x_2451->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2451->prev)->var_x, (x_2451->prev)->var_width_external);
    }
  } else {
    if (x_2451->parent != nullptr) {
      return (x_2451->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_670(const auto &x_2472) { return MakeUnit(); }
auto eval_expr_x_667(const auto &x_2475) {
  if (gt(x_2475->var_left_over, 0.)) {
    return divide(x_2475->var_left_over, x_2475->var_flex_grow_sum);
  } else {
    return divide(x_2475->var_left_over, x_2475->var_flex_shrink_sum);
  }
}
Unit var_modified_x_665(const auto &x_2496) { return MakeUnit(); }
auto eval_expr_x_662(const auto &x_2499) {
  if ((x_2499->parent != nullptr) && gt((x_2499->parent)->var_left_over, 0.)) {
    return x_2499->var_flex_grow;
  } else {
    return x_2499->var_flex_shrink;
  }
}
Unit var_modified_x_660(const auto &x_2512) { return MakeUnit(); }
auto eval_expr_x_657(const auto &x_2517) {
  if (x_2517->var_is_flex_row) {
    return minus(x_2517->var_box_width, (x_2517->last != nullptr) ? ((x_2517->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2517->var_box_height, (x_2517->last != nullptr) ? ((x_2517->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_655(const auto &x_2538) { return MakeUnit(); }
auto eval_expr_x_652(const auto &x_2542) {
  if (x_2542->parent != nullptr) {
    return (x_2542->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_650(const auto &x_2547) { return MakeUnit(); }
auto eval_expr_x_647(const auto &x_2551) {
  if (x_2551->parent != nullptr) {
    return (x_2551->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_644(const auto &x_2556) { return MakeUnit(); }
auto eval_expr_x_641(const auto &x_2574) {
  if (eq(x_2574->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_2574->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_2574->parent != nullptr) &&
          (eq((x_2574->parent)->var_display, std::string("flex")) ||
           eq((x_2574->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_2574->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_2574->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_2574->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_2574->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_2574, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_2574, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2574->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_2574->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_2574->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_2574->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_2574->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_2574->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_2574->var_display, std::string("list-item"))) {
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
Unit var_modified_x_639(const auto &x_2651) { return MakeUnit(); }
auto eval_expr_x_636(const auto &x_2653) {
  return (((!(x_2653->parent != nullptr)) || (x_2653->parent)->var_visible) &&
          (neq(x_2653->var_display, std::string("none")) && ((!x_2653->var_inside_svg) && (!x_2653->var_disabled))));
}
Unit var_modified_x_634(const auto &x_2670) { return MakeUnit(); }
auto eval_expr_x_631(const auto &x_2678) {
  if (eq(x_2678->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_2678->parent != nullptr) && (x_2678->parent)->var_disabled);
  }
}
Unit var_modified_x_629(const auto &x_2683) { return MakeUnit(); }
auto eval_expr_x_626(const auto &x_2691) {
  return ((x_2691->parent != nullptr) && ((x_2691->parent)->var_is_svg_block || (x_2691->parent)->var_inside_svg));
}
Unit var_modified_x_624(const auto &x_2700) { return MakeUnit(); }
auto eval_expr_x_621(const auto &x_2702) { return eq(x_2702->name, std::string("svg")); }
Unit var_modified_x_619(const auto &x_2703) { return MakeUnit(); }
auto eval_expr_x_616(const auto &x_2712) { return neq(x_2712->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_614(const auto &x_2717) { return MakeUnit(); }
auto eval_expr_x_611(const auto &x_2725) {
  if (!HasAttr(x_2725, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_2725, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_2725, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_2725, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_609(const auto &x_2736) { return MakeUnit(); }
auto eval_expr_x_606(const auto &x_2746) { return neq(x_2746->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_604(const auto &x_2751) { return MakeUnit(); }
auto eval_expr_x_601(const auto &x_2759) {
  if (!HasAttr(x_2759, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_2759, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_2759, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_2759, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_599(const auto &x_2770) { return MakeUnit(); }
auto eval_expr_x_596(const auto &x_2773) {
  if ((x_2773->parent != nullptr) &&
      (eq((x_2773->parent)->var_display, std::string("flex")) ||
       eq((x_2773->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_2773->parent)->var_flex_direction, std::string("column")) ||
        eq((x_2773->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_594(const auto &x_2798) { return MakeUnit(); }
auto eval_expr_x_591(const auto &x_2802) {
  if ((x_2802->parent != nullptr) &&
      (eq((x_2802->parent)->var_display, std::string("flex")) ||
       eq((x_2802->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_2802->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_589(const auto &x_2827) { return MakeUnit(); }
auto eval_expr_x_586(const auto &x_2834) {
  if (HashtblContain(x_2834->prop, std::string("flex-direction"))) {
    return GetProp<std::string>(x_2834, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_584(const auto &x_2837) { return MakeUnit(); }
auto eval_expr_x_581(const auto &x_2842) {
  return plus((x_2842->prev != nullptr) ? ((x_2842->prev)->var_flex_shrink_sum) : (0.), x_2842->var_flex_shrink);
}
Unit var_modified_x_579(const auto &x_2851) { return MakeUnit(); }
auto eval_expr_x_576(const auto &x_2856) {
  return plus((x_2856->prev != nullptr) ? ((x_2856->prev)->var_flex_grow_sum) : (0.), x_2856->var_flex_grow);
}
Unit var_modified_x_574(const auto &x_2865) { return MakeUnit(); }
auto eval_expr_x_571(const auto &x_2868) {
  if (HashtblContain(x_2868->prop, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_2868, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_569(const auto &x_2871) { return MakeUnit(); }
auto eval_expr_x_566(const auto &x_2874) {
  if (HashtblContain(x_2874->prop, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_2874, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_564(const auto &x_2877) { return MakeUnit(); }
auto eval_expr_x_561(const auto &x_2883) {
  if (HashtblContain(x_2883->prop, std::string("position"))) {
    return GetProp<std::string>(x_2883, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_559(const auto &x_2886) { return MakeUnit(); }
auto eval_expr_x_556(const auto &x_2912) {
  if (HashtblContain(x_2912->prop, std::string("display"))) {
    return GetProp<std::string>(x_2912, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_553(const auto &x_2915) { return MakeUnit(); }
auto eval_expr_x_550(const auto &x_2925) {
  if (x_2925->prev != nullptr) {
    if (x_2925->var_line_break) {
      return plus((x_2925->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2925->prev)->var_intrinsic_current_line_height, x_2925->var_intrinsic_height_external));
    } else {
      return (x_2925->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2925->var_line_break) {
      return x_2925->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_548(const auto &x_2954) { return MakeUnit(); }
auto eval_expr_x_545(const auto &x_2964) {
  if (x_2964->var_line_break) {
    return 0.;
  } else {
    return max(x_2964->var_intrinsic_height_external,
               (x_2964->prev != nullptr) ? ((x_2964->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_543(const auto &x_2977) { return MakeUnit(); }
auto eval_expr_x_540(const auto &x_2984) {
  return plus((x_2984->prev != nullptr) ? ((x_2984->prev)->var_intrinsic_height_sum) : (0.),
              x_2984->var_intrinsic_height_external);
}
Unit var_modified_x_538(const auto &x_2993) { return MakeUnit(); }
auto eval_expr_x_535(const auto &x_2998) {
  if (eq(x_2998->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2998->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_533(const auto &x_3007) { return MakeUnit(); }
auto eval_expr_x_530(const auto &x_3012) {
  if (eq(x_3012->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_3012->var_inside_svg) {
      return 0.;
    } else {
      if (x_3012->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3012->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_3012->var_height_expr, std::string("%"))) &&
             neq(x_3012->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_3012->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_3012->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_3012->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_3012->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_3012->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_3012->var_children_intrinsic_height,
              (eq(x_3012->name, std::string("#text")))
                  ? (10.)
                  : ((x_3012->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3012->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_3012->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_3012->name, std::string("svg")))
                                              ? ((x_3012->var_has_height_attr &&
                                                  string_is_float(x_3012->var_height_attr_expr))
                                                     ? (string_to_float(x_3012->var_height_attr_expr))
                                                     : ((HasAttr(x_3012, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_3012, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_3012,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_3012->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_3012->name, std::string("IMG")))
                                                     ? ((x_3012->var_has_height_attr)
                                                            ? (string_to_float(x_3012->var_height_attr_expr))
                                                            : ((HasAttr(x_3012, std::string("image_height")) &&
                                                                (!x_3012->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_3012, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_3012,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_3012->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_3012,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_3012,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_3012->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_3012->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_528(const auto &x_3157) { return MakeUnit(); }
auto eval_expr_x_525(const auto &x_3159) {
  if (eq(x_3159->var_display, std::string("none")) || (x_3159->var_inside_svg || x_3159->var_disabled)) {
    return true;
  } else {
    if ((x_3159->parent != nullptr) && (x_3159->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_3159->var_height_expr, std::string("auto")) ||
          (has_suffix(x_3159->var_height_expr, std::string("px")) ||
           (has_suffix(x_3159->var_height_expr, std::string("ch")) ||
            (has_suffix(x_3159->var_height_expr, std::string("lh")) ||
             eq(x_3159->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_523(const auto &x_3208) { return MakeUnit(); }
auto eval_expr_x_520(const auto &x_3228) {
  if (HashtblContain(x_3228->prop, std::string("height"))) {
    return GetProp<std::string>(x_3228, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_518(const auto &x_3231) { return MakeUnit(); }
auto eval_expr_x_515(const auto &x_3233) {
  if (x_3233->last != nullptr) {
    return plus((x_3233->last)->var_finished_intrinsic_height_sum, (x_3233->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_513(const auto &x_3242) { return MakeUnit(); }
auto eval_expr_x_510(const auto &x_3249) {
  return plus((x_3249->prev != nullptr) ? ((x_3249->prev)->var_intrinsic_width_sum) : (0.),
              x_3249->var_intrinsic_width_external);
}
Unit var_modified_x_508(const auto &x_3258) { return MakeUnit(); }
auto eval_expr_x_505(const auto &x_3265) {
  return max(x_3265->var_intrinsic_current_line_width,
             (x_3265->prev != nullptr) ? ((x_3265->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_503(const auto &x_3274) { return MakeUnit(); }
auto eval_expr_x_500(const auto &x_3279) {
  return plus(x_3279->var_intrinsic_width_external,
              ((x_3279->prev != nullptr) && (!(x_3279->prev)->var_line_break))
                  ? ((x_3279->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_498(const auto &x_3292) { return MakeUnit(); }
auto eval_expr_x_495(const auto &x_3295) {
  if (eq(x_3295->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_3295->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_493(const auto &x_3304) { return MakeUnit(); }
auto eval_expr_x_490(const auto &x_3309) {
  if (eq(x_3309->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_3309->var_inside_svg) {
      return 0.;
    } else {
      if (x_3309->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3309->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_3309->var_width_expr, std::string("%"))) &&
             (neq(x_3309->var_width_expr, std::string("fit-content")) &&
              (neq(x_3309->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_3309->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_3309->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_3309->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_3309->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_3309->var_children_intrinsic_width,
              (eq(x_3309->name, std::string("#text")))
                  ? (100.)
                  : ((x_3309->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3309->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_3309->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_3309->name, std::string("svg")))
                                              ? ((x_3309->var_has_width_attr &&
                                                  string_is_float(x_3309->var_width_attr_expr))
                                                     ? (string_to_float(x_3309->var_width_attr_expr))
                                                     : (((!x_3309->var_has_width_attr) &&
                                                         HasAttr(x_3309, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_3309, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_3309,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_3309->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_3309->name, std::string("IMG")))
                                                     ? ((x_3309->var_has_width_attr)
                                                            ? (string_to_float(x_3309->var_width_attr_expr))
                                                            : ((HasAttr(x_3309, std::string("image_width")) &&
                                                                (!x_3309->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_3309, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_3309, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_3309->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_3309,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_3309,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_3309->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_3309->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_488(const auto &x_3462) { return MakeUnit(); }
auto eval_expr_x_485(const auto &x_3464) {
  if (x_3464->last != nullptr) {
    return (x_3464->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_483(const auto &x_3469) { return MakeUnit(); }
auto eval_expr_x_480(const auto &x_3471) {
  if (eq(x_3471->var_display, std::string("none")) || (x_3471->var_inside_svg || x_3471->var_disabled)) {
    return true;
  } else {
    if ((x_3471->parent != nullptr) && (x_3471->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3471->var_width_expr, std::string("auto")) ||
          (has_suffix(x_3471->var_width_expr, std::string("px")) ||
           (has_suffix(x_3471->var_width_expr, std::string("ch")) ||
            (has_prefix(x_3471->var_width_expr, std::string("calc(")) ||
             eq(x_3471->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_478(const auto &x_3520) { return MakeUnit(); }
auto eval_expr_x_475(const auto &x_3523) {
  if (eq(x_3523->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_3523->var_inside_svg) {
      return true;
    } else {
      if (x_3523->var_disabled) {
        return true;
      } else {if ( eq(x_3523->name,std::string("#document")) || (eq(x_3523->name,std::string("#shadow-root")) || (eq(x_3523->name,std::string("DIV")) || (eq(x_3523->name,std::string("HTML")) || (eq(x_3523->name,std::string("BODY")) || (eq(x_3523->name,std::string("BUTTON")) || (eq(x_3523->name,std::string("FOOTER")) || (eq(x_3523->name,std::string("SELECT")) || (eq(x_3523->name,std::string("SECTION")) || (eq(x_3523->name,std::string("FORM")) || (eq(x_3523->name,std::string("CENTER")) || (eq(x_3523->name,std::string("TD")) || (eq(x_3523->name,std::string("TR")) || (eq(x_3523->name,std::string("TBODY")) || (eq(x_3523->name,std::string("TABLE")) || (eq(x_3523->name,std::string("SPAN")) || (eq(x_3523->name,std::string("FONT")) || (eq(x_3523->name,std::string("A")) || (eq(x_3523->name,std::string("ARTICLE")) || (eq(x_3523->name,std::string("P")) || (eq(x_3523->name,std::string("U")) || (eq(x_3523->name,std::string("UL")) || (eq(x_3523->name,std::string("B")) || (eq(x_3523->name,std::string("H1")) || (eq(x_3523->name,std::string("H2")) || (eq(x_3523->name,std::string("H3")) || (eq(x_3523->name,std::string("H4")) || (eq(x_3523->name,std::string("DT")) || (eq(x_3523->name,std::string("DD")) || (eq(x_3523->name,std::string("DL")) || (eq(x_3523->name,std::string("LI")) || (eq(x_3523->name,std::string("LABEL")) || (eq(x_3523->name,std::string("OL")) || (eq(x_3523->name,std::string("NAV")) || (eq(x_3523->name,std::string("HEADER")) || (eq(x_3523->name,std::string("HEAD")) || (eq(x_3523->name,std::string("SOURCE")) || (eq(x_3523->name,std::string("PICTURE")) || (eq(x_3523->name,std::string("FIGURE")) || (eq(x_3523->name,std::string("FIGCAPTION")) || (eq(x_3523->name,std::string("MAIN")) || (eq(x_3523->name,std::string("REACT-PARTIAL")) || (eq(x_3523->name,std::string("QUERY-BUILDER")) || (eq(x_3523->name,std::string("MODAL-DIALOG")) || (eq(x_3523->name,std::string("SCROLLABLE-REGION")) || (eq(x_3523->name,std::string("DIALOG-HELPER")) || (eq(x_3523->name,std::string("AUTO-CHECK")) || (eq(x_3523->name,std::string("TOOL-TIP")) || (eq(x_3523->name,std::string("CUSTOM-SCOPES")) || (eq(x_3523->name,std::string("QBSEARCH-INPUT")) || (eq(x_3523->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_3523->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_3523->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_3523->name,std::string("GHCC-CONSENT")) || (eq(x_3523->name,std::string("GLOBAL-BANNER")) || (eq(x_3523->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_3523->name,std::string("CARD-SKEW")) || (eq(x_3523->name,std::string("EM")) || (eq(x_3523->name,std::string("ASIDE")) || (eq(x_3523->name,std::string("AUDIO")) || (eq(x_3523->name,std::string("SUP")) || (eq(x_3523->name,std::string("TIME")) || (eq(x_3523->name,std::string("ABBR")) || (eq(x_3523->name,std::string("SMALL")) || (eq(x_3523->name,std::string("SLOT")) || eq(x_3523->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_473(const auto &x_3536) { return MakeUnit(); }
auto eval_expr_x_470(const auto &x_3556) {
  if (HashtblContain(x_3556->prop, std::string("width"))) {
    return GetProp<std::string>(x_3556, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_445(const auto &x_469) {
  WriteMetric();
  auto x_471 = eval_expr_x_470(x_469);
  if (x_469->has_var_width_expr) {
    auto x_472 = x_469->var_width_expr;
    if (EqualValue(x_472, x_471)) {
      MakeUnit();
    } else {
      var_modified_x_473(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_width_expr = x_471;
  WriteMetric();
  auto x_476 = eval_expr_x_475(x_469);
  if (x_469->has_var_is_default_case) {
    auto x_477 = x_469->var_is_default_case;
    if (EqualValue(x_477, x_476)) {
      MakeUnit();
    } else {
      var_modified_x_478(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_is_default_case = x_476;
  WriteMetric();
  auto x_481 = eval_expr_x_480(x_469);
  if (x_469->has_var_intrinsic_width_is_width) {
    auto x_482 = x_469->var_intrinsic_width_is_width;
    if (EqualValue(x_482, x_481)) {
      MakeUnit();
    } else {
      var_modified_x_483(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_width_is_width = x_481;
  WriteMetric();
  auto x_486 = eval_expr_x_485(x_469);
  if (x_469->has_var_children_intrinsic_width) {
    auto x_487 = x_469->var_children_intrinsic_width;
    if (EqualValue(x_487, x_486)) {
      MakeUnit();
    } else {
      var_modified_x_488(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_children_intrinsic_width = x_486;
  WriteMetric();
  auto x_491 = eval_expr_x_490(x_469);
  if (x_469->has_var_intrinsic_width_internal) {
    auto x_492 = x_469->var_intrinsic_width_internal;
    if (EqualValue(x_492, x_491)) {
      MakeUnit();
    } else {
      var_modified_x_493(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_width_internal = x_491;
  WriteMetric();
  auto x_496 = eval_expr_x_495(x_469);
  if (x_469->has_var_intrinsic_width_external) {
    auto x_497 = x_469->var_intrinsic_width_external;
    if (EqualValue(x_497, x_496)) {
      MakeUnit();
    } else {
      var_modified_x_498(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_width_external = x_496;
  WriteMetric();
  auto x_501 = eval_expr_x_500(x_469);
  if (x_469->has_var_intrinsic_current_line_width) {
    auto x_502 = x_469->var_intrinsic_current_line_width;
    if (EqualValue(x_502, x_501)) {
      MakeUnit();
    } else {
      var_modified_x_503(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_current_line_width = x_501;
  WriteMetric();
  auto x_506 = eval_expr_x_505(x_469);
  if (x_469->has_var_intrinsic_width_max) {
    auto x_507 = x_469->var_intrinsic_width_max;
    if (EqualValue(x_507, x_506)) {
      MakeUnit();
    } else {
      var_modified_x_508(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_width_max = x_506;
  WriteMetric();
  auto x_511 = eval_expr_x_510(x_469);
  if (x_469->has_var_intrinsic_width_sum) {
    auto x_512 = x_469->var_intrinsic_width_sum;
    if (EqualValue(x_512, x_511)) {
      MakeUnit();
    } else {
      var_modified_x_513(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_width_sum = x_511;
  WriteMetric();
  auto x_516 = eval_expr_x_515(x_469);
  if (x_469->has_var_children_intrinsic_height) {
    auto x_517 = x_469->var_children_intrinsic_height;
    if (EqualValue(x_517, x_516)) {
      MakeUnit();
    } else {
      var_modified_x_518(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_children_intrinsic_height = x_516;
  WriteMetric();
  auto x_521 = eval_expr_x_520(x_469);
  if (x_469->has_var_height_expr) {
    auto x_522 = x_469->var_height_expr;
    if (EqualValue(x_522, x_521)) {
      MakeUnit();
    } else {
      var_modified_x_523(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_height_expr = x_521;
  WriteMetric();
  auto x_526 = eval_expr_x_525(x_469);
  if (x_469->has_var_intrinsic_height_is_height) {
    auto x_527 = x_469->var_intrinsic_height_is_height;
    if (EqualValue(x_527, x_526)) {
      MakeUnit();
    } else {
      var_modified_x_528(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_height_is_height = x_526;
  WriteMetric();
  auto x_531 = eval_expr_x_530(x_469);
  if (x_469->has_var_intrinsic_height_internal) {
    auto x_532 = x_469->var_intrinsic_height_internal;
    if (EqualValue(x_532, x_531)) {
      MakeUnit();
    } else {
      var_modified_x_533(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_height_internal = x_531;
  WriteMetric();
  auto x_536 = eval_expr_x_535(x_469);
  if (x_469->has_var_intrinsic_height_external) {
    auto x_537 = x_469->var_intrinsic_height_external;
    if (EqualValue(x_537, x_536)) {
      MakeUnit();
    } else {
      var_modified_x_538(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_height_external = x_536;
  WriteMetric();
  auto x_541 = eval_expr_x_540(x_469);
  if (x_469->has_var_intrinsic_height_sum) {
    auto x_542 = x_469->var_intrinsic_height_sum;
    if (EqualValue(x_542, x_541)) {
      MakeUnit();
    } else {
      var_modified_x_543(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_height_sum = x_541;
  WriteMetric();
  auto x_546 = eval_expr_x_545(x_469);
  if (x_469->has_var_intrinsic_current_line_height) {
    auto x_547 = x_469->var_intrinsic_current_line_height;
    if (EqualValue(x_547, x_546)) {
      MakeUnit();
    } else {
      var_modified_x_548(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_intrinsic_current_line_height = x_546;
  WriteMetric();
  auto x_551 = eval_expr_x_550(x_469);
  if (x_469->has_var_finished_intrinsic_height_sum) {
    auto x_552 = x_469->var_finished_intrinsic_height_sum;
    if (EqualValue(x_552, x_551)) {
      MakeUnit();
    } else {
      var_modified_x_553(x_469);
    }
  } else {
    MakeUnit();
  }
  x_469->var_finished_intrinsic_height_sum = x_551;
  return MakeUnit();
}
Unit eval_stmts_x_443(const auto &x_555) {
  WriteMetric();
  auto x_557 = eval_expr_x_556(x_555);
  if (x_555->has_var_display) {
    auto x_558 = x_555->var_display;
    if (EqualValue(x_558, x_557)) {
      MakeUnit();
    } else {
      var_modified_x_559(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_display = x_557;
  WriteMetric();
  auto x_562 = eval_expr_x_561(x_555);
  if (x_555->has_var_position) {
    auto x_563 = x_555->var_position;
    if (EqualValue(x_563, x_562)) {
      MakeUnit();
    } else {
      var_modified_x_564(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_position = x_562;
  WriteMetric();
  auto x_567 = eval_expr_x_566(x_555);
  if (x_555->has_var_flex_grow) {
    auto x_568 = x_555->var_flex_grow;
    if (EqualValue(x_568, x_567)) {
      MakeUnit();
    } else {
      var_modified_x_569(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_flex_grow = x_567;
  WriteMetric();
  auto x_572 = eval_expr_x_571(x_555);
  if (x_555->has_var_flex_shrink) {
    auto x_573 = x_555->var_flex_shrink;
    if (EqualValue(x_573, x_572)) {
      MakeUnit();
    } else {
      var_modified_x_574(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_flex_shrink = x_572;
  WriteMetric();
  auto x_577 = eval_expr_x_576(x_555);
  if (x_555->has_var_flex_grow_sum) {
    auto x_578 = x_555->var_flex_grow_sum;
    if (EqualValue(x_578, x_577)) {
      MakeUnit();
    } else {
      var_modified_x_579(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_flex_grow_sum = x_577;
  WriteMetric();
  auto x_582 = eval_expr_x_581(x_555);
  if (x_555->has_var_flex_shrink_sum) {
    auto x_583 = x_555->var_flex_shrink_sum;
    if (EqualValue(x_583, x_582)) {
      MakeUnit();
    } else {
      var_modified_x_584(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_flex_shrink_sum = x_582;
  WriteMetric();
  auto x_587 = eval_expr_x_586(x_555);
  if (x_555->has_var_flex_direction) {
    auto x_588 = x_555->var_flex_direction;
    if (EqualValue(x_588, x_587)) {
      MakeUnit();
    } else {
      var_modified_x_589(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_flex_direction = x_587;
  WriteMetric();
  auto x_592 = eval_expr_x_591(x_555);
  if (x_555->has_var_is_flex_row) {
    auto x_593 = x_555->var_is_flex_row;
    if (EqualValue(x_593, x_592)) {
      MakeUnit();
    } else {
      var_modified_x_594(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_is_flex_row = x_592;
  WriteMetric();
  auto x_597 = eval_expr_x_596(x_555);
  if (x_555->has_var_is_flex_column) {
    auto x_598 = x_555->var_is_flex_column;
    if (EqualValue(x_598, x_597)) {
      MakeUnit();
    } else {
      var_modified_x_599(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_is_flex_column = x_597;
  WriteMetric();
  auto x_602 = eval_expr_x_601(x_555);
  if (x_555->has_var_width_attr_expr) {
    auto x_603 = x_555->var_width_attr_expr;
    if (EqualValue(x_603, x_602)) {
      MakeUnit();
    } else {
      var_modified_x_604(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_width_attr_expr = x_602;
  WriteMetric();
  auto x_607 = eval_expr_x_606(x_555);
  if (x_555->has_var_has_width_attr) {
    auto x_608 = x_555->var_has_width_attr;
    if (EqualValue(x_608, x_607)) {
      MakeUnit();
    } else {
      var_modified_x_609(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_has_width_attr = x_607;
  WriteMetric();
  auto x_612 = eval_expr_x_611(x_555);
  if (x_555->has_var_height_attr_expr) {
    auto x_613 = x_555->var_height_attr_expr;
    if (EqualValue(x_613, x_612)) {
      MakeUnit();
    } else {
      var_modified_x_614(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_height_attr_expr = x_612;
  WriteMetric();
  auto x_617 = eval_expr_x_616(x_555);
  if (x_555->has_var_has_height_attr) {
    auto x_618 = x_555->var_has_height_attr;
    if (EqualValue(x_618, x_617)) {
      MakeUnit();
    } else {
      var_modified_x_619(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_has_height_attr = x_617;
  WriteMetric();
  auto x_622 = eval_expr_x_621(x_555);
  if (x_555->has_var_is_svg_block) {
    auto x_623 = x_555->var_is_svg_block;
    if (EqualValue(x_623, x_622)) {
      MakeUnit();
    } else {
      var_modified_x_624(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_is_svg_block = x_622;
  WriteMetric();
  auto x_627 = eval_expr_x_626(x_555);
  if (x_555->has_var_inside_svg) {
    auto x_628 = x_555->var_inside_svg;
    if (EqualValue(x_628, x_627)) {
      MakeUnit();
    } else {
      var_modified_x_629(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_inside_svg = x_627;
  WriteMetric();
  auto x_632 = eval_expr_x_631(x_555);
  if (x_555->has_var_disabled) {
    auto x_633 = x_555->var_disabled;
    if (EqualValue(x_633, x_632)) {
      MakeUnit();
    } else {
      var_modified_x_634(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_disabled = x_632;
  WriteMetric();
  auto x_637 = eval_expr_x_636(x_555);
  if (x_555->has_var_visible) {
    auto x_638 = x_555->var_visible;
    if (EqualValue(x_638, x_637)) {
      MakeUnit();
    } else {
      var_modified_x_639(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_visible = x_637;
  WriteMetric();
  auto x_642 = eval_expr_x_641(x_555);
  if (x_555->has_var_line_break) {
    auto x_643 = x_555->var_line_break;
    if (EqualValue(x_643, x_642)) {
      MakeUnit();
    } else {
      var_modified_x_644(x_555);
    }
  } else {
    MakeUnit();
  }
  x_555->var_line_break = x_642;
  return MakeUnit();
}
Unit eval_stmts_x_440(const auto &x_646) {
  WriteMetric();
  auto x_648 = eval_expr_x_647(x_646);
  if (x_646->has_var_box_width) {
    auto x_649 = x_646->var_box_width;
    if (EqualValue(x_649, x_648)) {
      MakeUnit();
    } else {
      var_modified_x_650(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_box_width = x_648;
  WriteMetric();
  auto x_653 = eval_expr_x_652(x_646);
  if (x_646->has_var_box_height) {
    auto x_654 = x_646->var_box_height;
    if (EqualValue(x_654, x_653)) {
      MakeUnit();
    } else {
      var_modified_x_655(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_box_height = x_653;
  WriteMetric();
  auto x_658 = eval_expr_x_657(x_646);
  if (x_646->has_var_left_over) {
    auto x_659 = x_646->var_left_over;
    if (EqualValue(x_659, x_658)) {
      MakeUnit();
    } else {
      var_modified_x_660(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_left_over = x_658;
  WriteMetric();
  auto x_663 = eval_expr_x_662(x_646);
  if (x_646->has_var_flex_amount) {
    auto x_664 = x_646->var_flex_amount;
    if (EqualValue(x_664, x_663)) {
      MakeUnit();
    } else {
      var_modified_x_665(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_flex_amount = x_663;
  WriteMetric();
  auto x_668 = eval_expr_x_667(x_646);
  if (x_646->has_var_flex_unit) {
    auto x_669 = x_646->var_flex_unit;
    if (EqualValue(x_669, x_668)) {
      MakeUnit();
    } else {
      var_modified_x_670(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_flex_unit = x_668;
  WriteMetric();
  auto x_673 = eval_expr_x_672(x_646);
  if (x_646->has_var_x) {
    auto x_674 = x_646->var_x;
    if (EqualValue(x_674, x_673)) {
      MakeUnit();
    } else {
      var_modified_x_675(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_x = x_673;
  WriteMetric();
  auto x_678 = eval_expr_x_677(x_646);
  if (x_646->has_var_width_internal) {
    auto x_679 = x_646->var_width_internal;
    if (EqualValue(x_679, x_678)) {
      MakeUnit();
    } else {
      var_modified_x_680(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_width_internal = x_678;
  WriteMetric();
  auto x_683 = eval_expr_x_682(x_646);
  if (x_646->has_var_width_external) {
    auto x_684 = x_646->var_width_external;
    if (EqualValue(x_684, x_683)) {
      MakeUnit();
    } else {
      var_modified_x_685(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_width_external = x_683;
  WriteMetric();
  auto x_688 = eval_expr_x_687(x_646);
  if (x_646->has_var_y) {
    auto x_689 = x_646->var_y;
    if (EqualValue(x_689, x_688)) {
      MakeUnit();
    } else {
      var_modified_x_690(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_y = x_688;
  WriteMetric();
  auto x_693 = eval_expr_x_692(x_646);
  if (x_646->has_var_height_internal) {
    auto x_694 = x_646->var_height_internal;
    if (EqualValue(x_694, x_693)) {
      MakeUnit();
    } else {
      var_modified_x_695(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_height_internal = x_693;
  WriteMetric();
  auto x_698 = eval_expr_x_697(x_646);
  if (x_646->has_var_height_external) {
    auto x_699 = x_646->var_height_external;
    if (EqualValue(x_699, x_698)) {
      MakeUnit();
    } else {
      var_modified_x_700(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_height_external = x_698;
  WriteMetric();
  auto x_703 = eval_expr_x_702(x_646);
  if (x_646->has_var_line_height) {
    auto x_704 = x_646->var_line_height;
    if (EqualValue(x_704, x_703)) {
      MakeUnit();
    } else {
      var_modified_x_705(x_646);
    }
  } else {
    MakeUnit();
  }
  x_646->var_line_height = x_703;
  return MakeUnit();
}
Unit eval_stmts_x_430(const auto &x_707) {
  WriteMetric();
  auto x_709 = eval_expr_x_708(x_707);
  if (x_707->has_var_width_expr) {
    auto x_710 = x_707->var_width_expr;
    if (EqualValue(x_710, x_709)) {
      MakeUnit();
    } else {
      var_modified_x_711(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_width_expr = x_709;
  WriteMetric();
  auto x_714 = eval_expr_x_713(x_707);
  if (x_707->has_var_is_default_case) {
    auto x_715 = x_707->var_is_default_case;
    if (EqualValue(x_715, x_714)) {
      MakeUnit();
    } else {
      var_modified_x_716(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_is_default_case = x_714;
  WriteMetric();
  auto x_719 = eval_expr_x_718(x_707);
  if (x_707->has_var_intrinsic_width_is_width) {
    auto x_720 = x_707->var_intrinsic_width_is_width;
    if (EqualValue(x_720, x_719)) {
      MakeUnit();
    } else {
      var_modified_x_721(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_width_is_width = x_719;
  WriteMetric();
  auto x_724 = eval_expr_x_723(x_707);
  if (x_707->has_var_children_intrinsic_width) {
    auto x_725 = x_707->var_children_intrinsic_width;
    if (EqualValue(x_725, x_724)) {
      MakeUnit();
    } else {
      var_modified_x_726(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_children_intrinsic_width = x_724;
  WriteMetric();
  auto x_729 = eval_expr_x_728(x_707);
  if (x_707->has_var_intrinsic_width_internal) {
    auto x_730 = x_707->var_intrinsic_width_internal;
    if (EqualValue(x_730, x_729)) {
      MakeUnit();
    } else {
      var_modified_x_731(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_width_internal = x_729;
  WriteMetric();
  auto x_734 = eval_expr_x_733(x_707);
  if (x_707->has_var_intrinsic_width_external) {
    auto x_735 = x_707->var_intrinsic_width_external;
    if (EqualValue(x_735, x_734)) {
      MakeUnit();
    } else {
      var_modified_x_736(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_width_external = x_734;
  WriteMetric();
  auto x_739 = eval_expr_x_738(x_707);
  if (x_707->has_var_intrinsic_current_line_width) {
    auto x_740 = x_707->var_intrinsic_current_line_width;
    if (EqualValue(x_740, x_739)) {
      MakeUnit();
    } else {
      var_modified_x_741(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_current_line_width = x_739;
  WriteMetric();
  auto x_744 = eval_expr_x_743(x_707);
  if (x_707->has_var_intrinsic_width_max) {
    auto x_745 = x_707->var_intrinsic_width_max;
    if (EqualValue(x_745, x_744)) {
      MakeUnit();
    } else {
      var_modified_x_746(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_width_max = x_744;
  WriteMetric();
  auto x_749 = eval_expr_x_748(x_707);
  if (x_707->has_var_intrinsic_width_sum) {
    auto x_750 = x_707->var_intrinsic_width_sum;
    if (EqualValue(x_750, x_749)) {
      MakeUnit();
    } else {
      var_modified_x_751(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_width_sum = x_749;
  WriteMetric();
  auto x_754 = eval_expr_x_753(x_707);
  if (x_707->has_var_children_intrinsic_height) {
    auto x_755 = x_707->var_children_intrinsic_height;
    if (EqualValue(x_755, x_754)) {
      MakeUnit();
    } else {
      var_modified_x_756(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_children_intrinsic_height = x_754;
  WriteMetric();
  auto x_759 = eval_expr_x_758(x_707);
  if (x_707->has_var_height_expr) {
    auto x_760 = x_707->var_height_expr;
    if (EqualValue(x_760, x_759)) {
      MakeUnit();
    } else {
      var_modified_x_761(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_height_expr = x_759;
  WriteMetric();
  auto x_764 = eval_expr_x_763(x_707);
  if (x_707->has_var_intrinsic_height_is_height) {
    auto x_765 = x_707->var_intrinsic_height_is_height;
    if (EqualValue(x_765, x_764)) {
      MakeUnit();
    } else {
      var_modified_x_766(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_height_is_height = x_764;
  WriteMetric();
  auto x_769 = eval_expr_x_768(x_707);
  if (x_707->has_var_intrinsic_height_internal) {
    auto x_770 = x_707->var_intrinsic_height_internal;
    if (EqualValue(x_770, x_769)) {
      MakeUnit();
    } else {
      var_modified_x_771(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_height_internal = x_769;
  WriteMetric();
  auto x_774 = eval_expr_x_773(x_707);
  if (x_707->has_var_intrinsic_height_external) {
    auto x_775 = x_707->var_intrinsic_height_external;
    if (EqualValue(x_775, x_774)) {
      MakeUnit();
    } else {
      var_modified_x_776(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_height_external = x_774;
  WriteMetric();
  auto x_779 = eval_expr_x_778(x_707);
  if (x_707->has_var_intrinsic_height_sum) {
    auto x_780 = x_707->var_intrinsic_height_sum;
    if (EqualValue(x_780, x_779)) {
      MakeUnit();
    } else {
      var_modified_x_781(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_height_sum = x_779;
  WriteMetric();
  auto x_784 = eval_expr_x_783(x_707);
  if (x_707->has_var_intrinsic_current_line_height) {
    auto x_785 = x_707->var_intrinsic_current_line_height;
    if (EqualValue(x_785, x_784)) {
      MakeUnit();
    } else {
      var_modified_x_786(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_intrinsic_current_line_height = x_784;
  WriteMetric();
  auto x_789 = eval_expr_x_788(x_707);
  if (x_707->has_var_finished_intrinsic_height_sum) {
    auto x_790 = x_707->var_finished_intrinsic_height_sum;
    if (EqualValue(x_790, x_789)) {
      MakeUnit();
    } else {
      var_modified_x_791(x_707);
    }
  } else {
    MakeUnit();
  }
  x_707->var_finished_intrinsic_height_sum = x_789;
  return MakeUnit();
}
Unit eval_stmts_x_428(const auto &x_793) {
  WriteMetric();
  auto x_795 = eval_expr_x_794(x_793);
  if (x_793->has_var_display) {
    auto x_796 = x_793->var_display;
    if (EqualValue(x_796, x_795)) {
      MakeUnit();
    } else {
      var_modified_x_797(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_display = x_795;
  WriteMetric();
  auto x_800 = eval_expr_x_799(x_793);
  if (x_793->has_var_position) {
    auto x_801 = x_793->var_position;
    if (EqualValue(x_801, x_800)) {
      MakeUnit();
    } else {
      var_modified_x_802(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_position = x_800;
  WriteMetric();
  auto x_805 = eval_expr_x_804(x_793);
  if (x_793->has_var_flex_grow) {
    auto x_806 = x_793->var_flex_grow;
    if (EqualValue(x_806, x_805)) {
      MakeUnit();
    } else {
      var_modified_x_807(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_flex_grow = x_805;
  WriteMetric();
  auto x_810 = eval_expr_x_809(x_793);
  if (x_793->has_var_flex_shrink) {
    auto x_811 = x_793->var_flex_shrink;
    if (EqualValue(x_811, x_810)) {
      MakeUnit();
    } else {
      var_modified_x_812(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_flex_shrink = x_810;
  WriteMetric();
  auto x_815 = eval_expr_x_814(x_793);
  if (x_793->has_var_flex_grow_sum) {
    auto x_816 = x_793->var_flex_grow_sum;
    if (EqualValue(x_816, x_815)) {
      MakeUnit();
    } else {
      var_modified_x_817(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_flex_grow_sum = x_815;
  WriteMetric();
  auto x_820 = eval_expr_x_819(x_793);
  if (x_793->has_var_flex_shrink_sum) {
    auto x_821 = x_793->var_flex_shrink_sum;
    if (EqualValue(x_821, x_820)) {
      MakeUnit();
    } else {
      var_modified_x_822(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_flex_shrink_sum = x_820;
  WriteMetric();
  auto x_825 = eval_expr_x_824(x_793);
  if (x_793->has_var_flex_direction) {
    auto x_826 = x_793->var_flex_direction;
    if (EqualValue(x_826, x_825)) {
      MakeUnit();
    } else {
      var_modified_x_827(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_flex_direction = x_825;
  WriteMetric();
  auto x_830 = eval_expr_x_829(x_793);
  if (x_793->has_var_is_flex_row) {
    auto x_831 = x_793->var_is_flex_row;
    if (EqualValue(x_831, x_830)) {
      MakeUnit();
    } else {
      var_modified_x_832(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_is_flex_row = x_830;
  WriteMetric();
  auto x_835 = eval_expr_x_834(x_793);
  if (x_793->has_var_is_flex_column) {
    auto x_836 = x_793->var_is_flex_column;
    if (EqualValue(x_836, x_835)) {
      MakeUnit();
    } else {
      var_modified_x_837(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_is_flex_column = x_835;
  WriteMetric();
  auto x_840 = eval_expr_x_839(x_793);
  if (x_793->has_var_width_attr_expr) {
    auto x_841 = x_793->var_width_attr_expr;
    if (EqualValue(x_841, x_840)) {
      MakeUnit();
    } else {
      var_modified_x_842(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_width_attr_expr = x_840;
  WriteMetric();
  auto x_845 = eval_expr_x_844(x_793);
  if (x_793->has_var_has_width_attr) {
    auto x_846 = x_793->var_has_width_attr;
    if (EqualValue(x_846, x_845)) {
      MakeUnit();
    } else {
      var_modified_x_847(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_has_width_attr = x_845;
  WriteMetric();
  auto x_850 = eval_expr_x_849(x_793);
  if (x_793->has_var_height_attr_expr) {
    auto x_851 = x_793->var_height_attr_expr;
    if (EqualValue(x_851, x_850)) {
      MakeUnit();
    } else {
      var_modified_x_852(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_height_attr_expr = x_850;
  WriteMetric();
  auto x_855 = eval_expr_x_854(x_793);
  if (x_793->has_var_has_height_attr) {
    auto x_856 = x_793->var_has_height_attr;
    if (EqualValue(x_856, x_855)) {
      MakeUnit();
    } else {
      var_modified_x_857(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_has_height_attr = x_855;
  WriteMetric();
  auto x_860 = eval_expr_x_859(x_793);
  if (x_793->has_var_is_svg_block) {
    auto x_861 = x_793->var_is_svg_block;
    if (EqualValue(x_861, x_860)) {
      MakeUnit();
    } else {
      var_modified_x_862(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_is_svg_block = x_860;
  WriteMetric();
  auto x_865 = eval_expr_x_864(x_793);
  if (x_793->has_var_inside_svg) {
    auto x_866 = x_793->var_inside_svg;
    if (EqualValue(x_866, x_865)) {
      MakeUnit();
    } else {
      var_modified_x_867(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_inside_svg = x_865;
  WriteMetric();
  auto x_870 = eval_expr_x_869(x_793);
  if (x_793->has_var_disabled) {
    auto x_871 = x_793->var_disabled;
    if (EqualValue(x_871, x_870)) {
      MakeUnit();
    } else {
      var_modified_x_872(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_disabled = x_870;
  WriteMetric();
  auto x_875 = eval_expr_x_874(x_793);
  if (x_793->has_var_visible) {
    auto x_876 = x_793->var_visible;
    if (EqualValue(x_876, x_875)) {
      MakeUnit();
    } else {
      var_modified_x_877(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_visible = x_875;
  WriteMetric();
  auto x_880 = eval_expr_x_879(x_793);
  if (x_793->has_var_line_break) {
    auto x_881 = x_793->var_line_break;
    if (EqualValue(x_881, x_880)) {
      MakeUnit();
    } else {
      var_modified_x_882(x_793);
    }
  } else {
    MakeUnit();
  }
  x_793->var_line_break = x_880;
  return MakeUnit();
}
Unit eval_stmts_x_425(const auto &x_884) {
  WriteMetric();
  auto x_886 = eval_expr_x_885(x_884);
  if (x_884->has_var_box_width) {
    auto x_887 = x_884->var_box_width;
    if (EqualValue(x_887, x_886)) {
      MakeUnit();
    } else {
      var_modified_x_888(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_box_width = x_886;
  WriteMetric();
  auto x_891 = eval_expr_x_890(x_884);
  if (x_884->has_var_box_height) {
    auto x_892 = x_884->var_box_height;
    if (EqualValue(x_892, x_891)) {
      MakeUnit();
    } else {
      var_modified_x_893(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_box_height = x_891;
  WriteMetric();
  auto x_896 = eval_expr_x_895(x_884);
  if (x_884->has_var_left_over) {
    auto x_897 = x_884->var_left_over;
    if (EqualValue(x_897, x_896)) {
      MakeUnit();
    } else {
      var_modified_x_898(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_left_over = x_896;
  WriteMetric();
  auto x_901 = eval_expr_x_900(x_884);
  if (x_884->has_var_flex_amount) {
    auto x_902 = x_884->var_flex_amount;
    if (EqualValue(x_902, x_901)) {
      MakeUnit();
    } else {
      var_modified_x_903(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_flex_amount = x_901;
  WriteMetric();
  auto x_906 = eval_expr_x_905(x_884);
  if (x_884->has_var_flex_unit) {
    auto x_907 = x_884->var_flex_unit;
    if (EqualValue(x_907, x_906)) {
      MakeUnit();
    } else {
      var_modified_x_908(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_flex_unit = x_906;
  WriteMetric();
  auto x_911 = eval_expr_x_910(x_884);
  if (x_884->has_var_x) {
    auto x_912 = x_884->var_x;
    if (EqualValue(x_912, x_911)) {
      MakeUnit();
    } else {
      var_modified_x_913(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_x = x_911;
  WriteMetric();
  auto x_916 = eval_expr_x_915(x_884);
  if (x_884->has_var_width_internal) {
    auto x_917 = x_884->var_width_internal;
    if (EqualValue(x_917, x_916)) {
      MakeUnit();
    } else {
      var_modified_x_918(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_width_internal = x_916;
  WriteMetric();
  auto x_921 = eval_expr_x_920(x_884);
  if (x_884->has_var_width_external) {
    auto x_922 = x_884->var_width_external;
    if (EqualValue(x_922, x_921)) {
      MakeUnit();
    } else {
      var_modified_x_923(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_width_external = x_921;
  WriteMetric();
  auto x_926 = eval_expr_x_925(x_884);
  if (x_884->has_var_y) {
    auto x_927 = x_884->var_y;
    if (EqualValue(x_927, x_926)) {
      MakeUnit();
    } else {
      var_modified_x_928(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_y = x_926;
  WriteMetric();
  auto x_931 = eval_expr_x_930(x_884);
  if (x_884->has_var_height_internal) {
    auto x_932 = x_884->var_height_internal;
    if (EqualValue(x_932, x_931)) {
      MakeUnit();
    } else {
      var_modified_x_933(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_height_internal = x_931;
  WriteMetric();
  auto x_936 = eval_expr_x_935(x_884);
  if (x_884->has_var_height_external) {
    auto x_937 = x_884->var_height_external;
    if (EqualValue(x_937, x_936)) {
      MakeUnit();
    } else {
      var_modified_x_938(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_height_external = x_936;
  WriteMetric();
  auto x_941 = eval_expr_x_940(x_884);
  if (x_884->has_var_line_height) {
    auto x_942 = x_884->var_line_height;
    if (EqualValue(x_942, x_941)) {
      MakeUnit();
    } else {
      var_modified_x_943(x_884);
    }
  } else {
    MakeUnit();
  }
  x_884->var_line_height = x_941;
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
        std::string x_3559 = x_79;
        if (x_3559 == "attributes") {
          std::string x_3560 = x_80;
          if (x_3560 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_3560 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_height"), x_81);
            return MakeUnit();
          } else if (x_3560 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_width"), x_81);
            return MakeUnit();
          } else if (x_3560 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_3560 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("viewBox"), x_81);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3559 == "properties") {
          std::string x_3561 = x_80;
          if (x_3561 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_3561 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-grow"), x_81);
            return MakeUnit();
          } else if (x_3561 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_3561 == "display") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("display"), x_81);
            return MakeUnit();
          } else if (x_3561 == "position") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("position"), x_81);
            return MakeUnit();
          } else if (x_3561 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-shrink"), x_81);
            return MakeUnit();
          } else if (x_3561 == "flex-direction") {
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
        std::string x_3562 = x_89;
        if (x_3562 == "attributes") {
          std::string x_3563 = x_90;
          if (x_3563 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("width"));
            return MakeUnit();
          } else if (x_3563 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_height"));
            return MakeUnit();
          } else if (x_3563 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_width"));
            return MakeUnit();
          } else if (x_3563 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("height"));
            return MakeUnit();
          } else if (x_3563 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("viewBox"));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3562 == "properties") {
          std::string x_3564 = x_90;
          if (x_3564 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("width"));
            return MakeUnit();
          } else if (x_3564 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-grow"));
            return MakeUnit();
          } else if (x_3564 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("height"));
            return MakeUnit();
          } else if (x_3564 == "display") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("display"));
            return MakeUnit();
          } else if (x_3564 == "position") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("position"));
            return MakeUnit();
          } else if (x_3564 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-shrink"));
            return MakeUnit();
          } else if (x_3564 == "flex-direction") {
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
        std::string x_3565 = x_99;
        if (x_3565 == "attributes") {
          std::string x_3566 = x_100;
          if (x_3566 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_3566 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_height"), x_101);
            return MakeUnit();
          } else if (x_3566 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_width"), x_101);
            return MakeUnit();
          } else if (x_3566 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_3566 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("viewBox"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("viewBox"), x_101);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3565 == "properties") {
          std::string x_3567 = x_100;
          if (x_3567 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_3567 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-grow"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-grow"), x_101);
            return MakeUnit();
          } else if (x_3567 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_3567 == "display") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("display"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("display"), x_101);
            return MakeUnit();
          } else if (x_3567 == "position") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("position"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("position"), x_101);
            return MakeUnit();
          } else if (x_3567 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-shrink"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-shrink"), x_101);
            return MakeUnit();
          } else if (x_3567 == "flex-direction") {
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
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_112)) {
      x_104->last = ToPath(ListLast(x_109));
    } else {
      MakeUnit();
    }
    MakeUnit();
    auto x_179 = ListSplitN(x_104->children, x_106);
    auto x_180 = Zro(x_179);
    auto x_181 = Fst(x_179);
    x_104->children = ListAppend(x_180, Cons(x_105, x_181));
    if (ListIsEmpty(x_180)) {
      x_104->first = x_105.get();
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_181)) {
      x_104->last = x_105.get();
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_180),
        [&](const auto &x_183) {
          x_105->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_182) {
          x_105->prev = x_182.get();
          x_182->next = x_105.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_181),
        [&](const auto &x_185) {
          x_105->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_184) {
          x_105->next = x_184.get();
          x_184->prev = x_105.get();
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
Unit x_248(const auto &x_249) {
  ListIter2(x_249->children, [&](const auto &x_250, const auto &x_251) {
    x_250->parent = x_249.get();
    x_251->parent = x_249.get();
    x_250->next = x_251.get();
    x_251->prev = x_250.get();
    x_248(x_250);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_249->children),
      [&](const auto &x_253) {
        x_249->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_252) {
        x_249->first = x_252.get();
        x_252->parent = x_249.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_249->children),
      [&](const auto &x_255) {
        x_249->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_254) {
        x_249->last = x_254.get();
        x_254->parent = x_249.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_35(const auto &x_249) { return x_248(x_249); }
Unit x_256(const auto &x_257, const auto &x_258, const auto &x_259) {
  auto x_260 = ListHeadExn(x_257);
  auto x_261 = ListTailExn(x_257);
  if (ListIsEmpty(x_261)) {
    InputChangeMetric(node_size_x_4(ListNthExn(x_258->children, x_260)));
    auto x_262 = ListSplitN(x_258->children, x_260);
    auto x_263 = Zro(x_262);
    auto x_264 = Fst(x_262);
    auto x_265 = ListHeadExn(x_264);
    auto x_266 = ListTailExn(x_264);
    OptionMatch(
        x_265->prev, [&](const auto &x_268) { return MakeUnit(); },
        [&](const auto &x_267) {
          x_267->next = ToPath(x_265->next);
          return MakeUnit();
        });
    OptionMatch(
        x_265->next, [&](const auto &x_270) { return MakeUnit(); },
        [&](const auto &x_269) {
          x_269->prev = ToPath(x_265->prev);
          return MakeUnit();
        });
    x_258->children = ListAppend(x_263, x_266);
    if (ListIsEmpty(x_263)) {
      x_258->first = ToPath(ListHead(x_266));
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_266)) {
      x_258->last = ToPath(ListLast(x_263));
    } else {
      MakeUnit();
    }
    return MakeUnit();
  } else {
    return x_256(x_261, ListNthExn(x_258->children, x_260), x_259);
  }
}
Unit remove_node_x_33(const auto &x_257, const auto &x_258, const auto &x_259) { return x_256(x_257, x_258, x_259); }
Unit x_333(const auto &x_334) {
  ListIter2(x_334->children, [&](const auto &x_335, const auto &x_336) {
    x_335->parent = x_334.get();
    x_336->parent = x_334.get();
    x_335->next = x_336.get();
    x_336->prev = x_335.get();
    x_333(x_335);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_334->children),
      [&](const auto &x_338) {
        x_334->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_337) {
        x_334->first = x_337.get();
        x_337->parent = x_334.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_334->children),
      [&](const auto &x_340) {
        x_334->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_339) {
        x_334->last = x_339.get();
        x_339->parent = x_334.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_30(const auto &x_334) { return x_333(x_334); }
Unit x_341(const auto &x_342, const auto &x_343, const auto &x_344) {
  auto x_345 = ListHeadExn(x_342);
  auto x_346 = ListTailExn(x_342);
  if (ListIsEmpty(x_346)) {
    InputChangeMetric(node_size_x_4(x_344));
    auto x_347 = ListSplitN(x_343->children, x_345);
    auto x_348 = Zro(x_347);
    auto x_349 = Fst(x_347);
    x_343->children = ListAppend(x_348, Cons(x_344, x_349));
    if (ListIsEmpty(x_348)) {
      x_343->first = x_344.get();
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_349)) {
      x_343->last = x_344.get();
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_348),
        [&](const auto &x_351) {
          x_344->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_350) {
          x_344->prev = x_350.get();
          x_350->next = x_344.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_349),
        [&](const auto &x_353) {
          x_344->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_352) {
          x_344->next = x_352.get();
          x_352->prev = x_344.get();
          return MakeUnit();
        });
    x_344->parent = x_343.get();
    return MakeUnit();
  } else {
    return x_341(x_346, ListNthExn(x_343->children, x_345), x_344);
  }
}
Unit add_node_x_28(const auto &x_342, const auto &x_343, const auto &x_344) { return x_341(x_342, x_343, x_344); }
Unit x_416(const auto &x_417) {
  ListIter2(x_417->children, [&](const auto &x_418, const auto &x_419) {
    x_418->parent = x_417.get();
    x_419->parent = x_417.get();
    x_418->next = x_419.get();
    x_419->prev = x_418.get();
    x_416(x_418);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_417->children),
      [&](const auto &x_421) {
        x_417->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_420) {
        x_417->first = x_420.get();
        x_420->parent = x_417.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_417->children),
      [&](const auto &x_423) {
        x_417->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_422) {
        x_417->last = x_422.get();
        x_422->parent = x_417.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_26(const auto &x_417) { return x_416(x_417); }
Unit eval_stmts_x_22(const auto &x_424) {
  eval_stmts_x_425(x_424);
  ListIter(x_424->children, [&](const auto &x_426) { return eval_stmts_x_22(x_426); });
  return MakeUnit();
}
Unit eval_stmts_x_21(const auto &x_427) {
  eval_stmts_x_428(x_427);
  ListIter(x_427->children, [&](const auto &x_429) { return eval_stmts_x_21(x_429); });
  eval_stmts_x_430(x_427);
  return MakeUnit();
}
Unit x_431(const auto &x_432) {
  ListIter2(x_432->children, [&](const auto &x_433, const auto &x_434) {
    x_433->parent = x_432.get();
    x_434->parent = x_432.get();
    x_433->next = x_434.get();
    x_434->prev = x_433.get();
    x_431(x_433);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_432->children),
      [&](const auto &x_436) {
        x_432->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_435) {
        x_432->first = x_435.get();
        x_435->parent = x_432.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_432->children),
      [&](const auto &x_438) {
        x_432->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_437) {
        x_432->last = x_437.get();
        x_437->parent = x_432.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_19(const auto &x_432) { return x_431(x_432); }
Unit eval_stmts_x_17(const auto &x_439) {
  eval_stmts_x_440(x_439);
  ListIter(x_439->children, [&](const auto &x_441) { return eval_stmts_x_17(x_441); });
  return MakeUnit();
}
Unit eval_stmts_x_16(const auto &x_442) {
  eval_stmts_x_443(x_442);
  ListIter(x_442->children, [&](const auto &x_444) { return eval_stmts_x_16(x_444); });
  eval_stmts_x_445(x_442);
  return MakeUnit();
}
Unit x_446(const auto &x_447) {
  ListIter2(x_447->children, [&](const auto &x_448, const auto &x_449) {
    x_448->parent = x_447.get();
    x_449->parent = x_447.get();
    x_448->next = x_449.get();
    x_449->prev = x_448.get();
    x_446(x_448);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_447->children),
      [&](const auto &x_451) {
        x_447->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_450) {
        x_447->first = x_450.get();
        x_450->parent = x_447.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_447->children),
      [&](const auto &x_453) {
        x_447->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_452) {
        x_447->last = x_452.get();
        x_452->parent = x_447.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_13(const auto &x_447) { return x_446(x_447); }
int64_t x_454(const auto &x_455) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_455->children, [&](const auto &x_456) { return x_454(x_456); }));
}
int64_t node_size_x_4(const auto &x_455) { return x_454(x_455); }
int64_t x_457(const auto &x_458) {
  return IntAdd(static_cast<int64_t>(1), ListIntSum(x_458->children, [&](const auto &x_459) { return x_457(x_459); }));
}
int64_t layout_size_x_3(const auto &x_458) { return x_457(x_458); }
LayoutNode x_460(const auto &x_461) {
  return MakeLayoutNode(
      ListMap(JsonToList(JsonMember(std::string("children"), x_461)), [&](const auto &x_462) { return x_460(x_462); }));
}
LayoutNode json_to_layout_node_x_2(const auto &x_461) { return x_460(x_461); }
Node x_463(const auto &x_464) {
  return MakeNode(x_464->name, x_464->attr, x_464->prop, x_464->extern_id,
                  ListMap(x_464->children, [&](const auto &x_465) { return x_463(x_465); }));
}
Node node_to_fs_node_x_1(const auto &x_464) { return x_463(x_464); }
Node x_466(const auto &x_467) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_467)), JsonToDict(JsonMember(std::string("attributes"), x_467)),
      JsonToDict(JsonMember(std::string("properties"), x_467)), JsonToInt(JsonMember(std::string("id"), x_467)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_467)), [&](const auto &x_468) { return x_466(x_468); }));
}
Node json_to_node_aux_x_0(const auto &x_467) { return x_466(x_467); }
int main() {
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_5) {
    PrintEndline(std::string("RUNNING FS"));
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
        auto x_3568 = FreshJson();
        WriteJson(x_3568, std::string("name"), std::string("FS"));
        WriteJson(x_3568, std::string("diff_num"), ReadRef(x_7));
        WriteJson(x_3568, std::string("read_count"), MetricReadCount());
        WriteJson(x_3568, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_3568, std::string("write_count"), MetricWriteCount());
        WriteJson(x_3568, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_3568, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_3568, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_3568, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_3568, std::string("html"), std::string(""));
        WriteJson(x_3568, std::string("command"), StackToList(x_11));
        return x_3568;
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
        std::string x_3570 = JsonToString(JsonMember(std::string("name"), x_24));
        if (x_3570 == "add") {
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
        } else if (x_3570 == "recalculate") {
          eval_stmts_x_16(x_14);
          eval_stmts_x_17(x_14);
          JsonToChannel(x_5, [&]() {
            auto x_3569 = FreshJson();
            WriteJson(x_3569, std::string("name"), std::string("FS"));
            WriteJson(x_3569, std::string("diff_num"), ReadRef(x_7));
            WriteJson(x_3569, std::string("read_count"), MetricReadCount());
            WriteJson(x_3569, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_3569, std::string("write_count"), MetricWriteCount());
            WriteJson(x_3569, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_3569, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_3569, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_3569, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_3569, std::string("html"), std::string(""));
            WriteJson(x_3569, std::string("command"), StackToList(x_11));
            return x_3569;
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
        } else if (x_3570 == "remove") {
          return remove_node_x_33(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                          [&](const auto &x_32) { return JsonToInt(x_32); }),
                                  x_14, MakeUnit());
        } else if (x_3570 == "replace") {
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
        } else if (x_3570 == "replace_value") {
          return replace_value_x_39(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                            [&](const auto &x_38) { return JsonToInt(x_38); }),
                                    x_14,
                                    MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_24)),
                                                      JsonToString(JsonMember(std::string("key"), x_24))),
                                             JsonToValue(JsonMember(std::string("value"), x_24))));
        } else if (x_3570 == "delete_value") {
          return delete_value_x_41(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                           [&](const auto &x_40) { return JsonToInt(x_40); }),
                                   x_14,
                                   MakePair(JsonToString(JsonMember(std::string("type"), x_24)),
                                            JsonToString(JsonMember(std::string("key"), x_24))));
        } else if (x_3570 == "insert_value") {
          return insert_value_x_43(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                           [&](const auto &x_42) { return JsonToInt(x_42); }),
                                   x_14,
                                   MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_24)),
                                                     JsonToString(JsonMember(std::string("key"), x_24))),
                                            JsonToValue(JsonMember(std::string("value"), x_24))));
        } else if (x_3570 == "layout_remove") {
          return remove_layout_node_x_45(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                                 [&](const auto &x_44) { return JsonToInt(x_44); }),
                                         x_15, MakeUnit());
        } else if (x_3570 == "layout_add") {
          return add_layout_node_x_47(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                              [&](const auto &x_46) { return JsonToInt(x_46); }),
                                      x_15, json_to_layout_node_x_2(JsonMember(std::string("node"), x_24)));
        } else if (x_3570 == "layout_replace") {
          return replace_layout_node_x_49(ListMap(JsonToList(JsonMember(std::string("path"), x_24)),
                                                  [&](const auto &x_48) { return JsonToInt(x_48); }),
                                          x_15, json_to_layout_node_x_2(JsonMember(std::string("node"), x_24)));
        } else if (x_3570 == "layout_info_changed") {
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