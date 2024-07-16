#include "header.h"
struct MetaNode {
  std::unordered_map<std::string, TotalOrder> BBTimeTable;
  std::unordered_map<std::string, TotalOrder> ProcTimeTable;
  bool alive = true;
};
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
Unit var_modified_x_7162(const auto &x_7164) { return MakeUnit(); }
auto eval_expr_x_7159(const auto &x_7168) {
  if ((x_7168->prev != nullptr) && (!(x_7168->prev)->var_line_break)) {
    return max(x_7168->var_height_external, (x_7168->prev)->var_line_height);
  } else {
    return x_7168->var_height_external;
  }
}
Unit var_modified_x_7157(const auto &x_7185) { return MakeUnit(); }
auto eval_expr_x_7154(const auto &x_7187) {
  if (eq(x_7187->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7187->var_height_internal;
  }
}
Unit var_modified_x_7152(const auto &x_7196) { return MakeUnit(); }
auto eval_expr_x_7149(const auto &x_7199) {
  if (x_7199->var_intrinsic_height_is_height) {
    return x_7199->var_intrinsic_height_internal;
  } else {
    if ((x_7199->parent != nullptr) && (x_7199->parent)->var_is_flex_column) {
      return plus(x_7199->var_intrinsic_height_internal,
                  mult(x_7199->var_flex_amount, (x_7199->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_7199->var_height_expr, std::string("%"))) {
        return mult(x_7199->var_box_height,
                    divide(string_to_float(strip_suffix(x_7199->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_7199->var_box_height, x_7199->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_7147(const auto &x_7252) { return MakeUnit(); }
auto eval_expr_x_7144(const auto &x_7257) {
  if (x_7257->prev != nullptr) {
    if (x_7257->var_line_break || (x_7257->prev)->var_line_break) {
      return plus((x_7257->prev)->var_y, (x_7257->prev)->var_line_height);
    } else {
      return (x_7257->prev)->var_y;
    }
  } else {
    if (x_7257->parent != nullptr) {
      return (x_7257->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_7142(const auto &x_7282) { return MakeUnit(); }
auto eval_expr_x_7139(const auto &x_7286) {
  if (eq(x_7286->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7286->var_width_internal;
  }
}
Unit var_modified_x_7137(const auto &x_7295) { return MakeUnit(); }
auto eval_expr_x_7134(const auto &x_7298) {
  if (x_7298->var_intrinsic_width_is_width) {
    return x_7298->var_intrinsic_width_internal;
  } else {
    if ((x_7298->parent != nullptr) && (x_7298->parent)->var_is_flex_row) {
      return plus(x_7298->var_intrinsic_width_internal, mult(x_7298->var_flex_amount, (x_7298->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_7298->var_width_expr, std::string("%"))) {
        return mult(x_7298->var_box_width,
                    divide(string_to_float(strip_suffix(x_7298->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_7298->var_box_width, x_7298->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_7132(const auto &x_7351) { return MakeUnit(); }
auto eval_expr_x_7129(const auto &x_7356) {
  if (x_7356->prev != nullptr) {
    if (x_7356->var_line_break || (x_7356->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_7356->prev)->var_x, (x_7356->prev)->var_width_external);
    }
  } else {
    if (x_7356->parent != nullptr) {
      return (x_7356->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_7127(const auto &x_7377) { return MakeUnit(); }
auto eval_expr_x_7124(const auto &x_7379) {
  if (gt(x_7379->var_left_over, 0.)) {
    return divide(x_7379->var_left_over, x_7379->var_flex_grow_sum);
  } else {
    return divide(x_7379->var_left_over, x_7379->var_flex_shrink_sum);
  }
}
Unit var_modified_x_7122(const auto &x_7400) { return MakeUnit(); }
auto eval_expr_x_7119(const auto &x_7402) {
  if ((x_7402->parent != nullptr) && gt((x_7402->parent)->var_left_over, 0.)) {
    return x_7402->var_flex_grow;
  } else {
    return x_7402->var_flex_shrink;
  }
}
Unit var_modified_x_7117(const auto &x_7415) { return MakeUnit(); }
auto eval_expr_x_7114(const auto &x_7418) {
  if (x_7418->var_is_flex_row) {
    return minus(x_7418->var_box_width, (x_7418->last != nullptr) ? ((x_7418->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_7418->var_box_height, (x_7418->last != nullptr) ? ((x_7418->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_7112(const auto &x_7439) { return MakeUnit(); }
auto eval_expr_x_7109(const auto &x_7441) {
  if (x_7441->parent != nullptr) {
    return (x_7441->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_7107(const auto &x_7446) { return MakeUnit(); }
auto eval_expr_x_7104(const auto &x_7448) {
  if (x_7448->parent != nullptr) {
    return (x_7448->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_7101(const auto &x_7453) { return MakeUnit(); }
auto eval_expr_x_7098(const auto &x_7462) {
  if (eq(x_7462->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_7462->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_7462->parent != nullptr) &&
          (eq((x_7462->parent)->var_display, std::string("flex")) ||
           eq((x_7462->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_7462->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_7462->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_7462->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_7462->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_7462, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_7462, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_7462->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_7462->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_7462->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_7462->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_7462->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_7462->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_7462->var_display, std::string("list-item"))) {
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
Unit var_modified_x_7096(const auto &x_7539) { return MakeUnit(); }
auto eval_expr_x_7093(const auto &x_7541) {
  return (((!(x_7541->parent != nullptr)) || (x_7541->parent)->var_visible) &&
          (neq(x_7541->var_display, std::string("none")) && ((!x_7541->var_inside_svg) && (!x_7541->var_disabled))));
}
Unit var_modified_x_7091(const auto &x_7558) { return MakeUnit(); }
auto eval_expr_x_7088(const auto &x_7562) {
  if (eq(x_7562->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_7562->parent != nullptr) && (x_7562->parent)->var_disabled);
  }
}
Unit var_modified_x_7086(const auto &x_7567) { return MakeUnit(); }
auto eval_expr_x_7083(const auto &x_7571) {
  return ((x_7571->parent != nullptr) && ((x_7571->parent)->var_is_svg_block || (x_7571->parent)->var_inside_svg));
}
Unit var_modified_x_7081(const auto &x_7580) { return MakeUnit(); }
auto eval_expr_x_7078(const auto &x_7582) { return eq(x_7582->name, std::string("svg")); }
Unit var_modified_x_7076(const auto &x_7583) { return MakeUnit(); }
auto eval_expr_x_7073(const auto &x_7585) { return neq(x_7585->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_7071(const auto &x_7590) { return MakeUnit(); }
auto eval_expr_x_7068(const auto &x_7593) {
  if (!HasAttr(x_7593, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_7593, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_7593, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_7593, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_7066(const auto &x_7604) { return MakeUnit(); }
auto eval_expr_x_7063(const auto &x_7606) { return neq(x_7606->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_7061(const auto &x_7611) { return MakeUnit(); }
auto eval_expr_x_7058(const auto &x_7614) {
  if (!HasAttr(x_7614, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_7614, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_7614, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_7614, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_7056(const auto &x_7625) { return MakeUnit(); }
auto eval_expr_x_7053(const auto &x_7628) {
  if ((x_7628->parent != nullptr) &&
      (eq((x_7628->parent)->var_display, std::string("flex")) ||
       eq((x_7628->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_7628->parent)->var_flex_direction, std::string("column")) ||
        eq((x_7628->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_7051(const auto &x_7653) { return MakeUnit(); }
auto eval_expr_x_7048(const auto &x_7657) {
  if ((x_7657->parent != nullptr) &&
      (eq((x_7657->parent)->var_display, std::string("flex")) ||
       eq((x_7657->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_7657->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_7046(const auto &x_7682) { return MakeUnit(); }
auto eval_expr_x_7043(const auto &x_7684) {
  if (HasProp(x_7684, std::string("flex-direction"))) {
    return GetProp<std::string>(x_7684, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_7041(const auto &x_7687) { return MakeUnit(); }
auto eval_expr_x_7038(const auto &x_7692) {
  return plus((x_7692->prev != nullptr) ? ((x_7692->prev)->var_flex_shrink_sum) : (0.), x_7692->var_flex_shrink);
}
Unit var_modified_x_7036(const auto &x_7701) { return MakeUnit(); }
auto eval_expr_x_7033(const auto &x_7706) {
  return plus((x_7706->prev != nullptr) ? ((x_7706->prev)->var_flex_grow_sum) : (0.), x_7706->var_flex_grow);
}
Unit var_modified_x_7031(const auto &x_7715) { return MakeUnit(); }
auto eval_expr_x_7028(const auto &x_7718) {
  if (HasProp(x_7718, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_7718, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_7026(const auto &x_7721) { return MakeUnit(); }
auto eval_expr_x_7023(const auto &x_7724) {
  if (HasProp(x_7724, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_7724, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_7021(const auto &x_7727) { return MakeUnit(); }
auto eval_expr_x_7018(const auto &x_7731) {
  if (HasProp(x_7731, std::string("position"))) {
    return GetProp<std::string>(x_7731, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_7016(const auto &x_7734) { return MakeUnit(); }
auto eval_expr_x_7013(const auto &x_7738) {
  if (HasProp(x_7738, std::string("display"))) {
    return GetProp<std::string>(x_7738, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_7010(const auto &x_7741) { return MakeUnit(); }
auto eval_expr_x_7007(const auto &x_7748) {
  if (x_7748->prev != nullptr) {
    if (x_7748->var_line_break) {
      return plus((x_7748->prev)->var_finished_intrinsic_height_sum,
                  plus((x_7748->prev)->var_intrinsic_current_line_height, x_7748->var_intrinsic_height_external));
    } else {
      return (x_7748->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_7748->var_line_break) {
      return x_7748->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_7005(const auto &x_7777) { return MakeUnit(); }
auto eval_expr_x_7002(const auto &x_7784) {
  if (x_7784->var_line_break) {
    return 0.;
  } else {
    return max(x_7784->var_intrinsic_height_external,
               (x_7784->prev != nullptr) ? ((x_7784->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_7000(const auto &x_7797) { return MakeUnit(); }
auto eval_expr_x_6997(const auto &x_7804) {
  return plus((x_7804->prev != nullptr) ? ((x_7804->prev)->var_intrinsic_height_sum) : (0.),
              x_7804->var_intrinsic_height_external);
}
Unit var_modified_x_6995(const auto &x_7813) { return MakeUnit(); }
auto eval_expr_x_6992(const auto &x_7815) {
  if (eq(x_7815->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7815->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_6990(const auto &x_7824) { return MakeUnit(); }
auto eval_expr_x_6987(const auto &x_7827) {
  if (eq(x_7827->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_7827->var_inside_svg) {
      return 0.;
    } else {
      if (x_7827->var_disabled) {
        return 0.;
      } else {
        if (neq(x_7827->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_7827->var_height_expr, std::string("%"))) &&
             neq(x_7827->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_7827->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_7827->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_7827->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_7827->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_7827->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_7827->var_children_intrinsic_height,
              (eq(x_7827->name, std::string("#text")))
                  ? (10.)
                  : ((x_7827->var_is_default_case)
                         ? (0.)
                         : ((eq(x_7827->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_7827->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_7827->name, std::string("svg")))
                                              ? ((x_7827->var_has_height_attr &&
                                                  string_is_float(x_7827->var_height_attr_expr))
                                                     ? (string_to_float(x_7827->var_height_attr_expr))
                                                     : ((HasAttr(x_7827, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_7827, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_7827,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_7827->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_7827->name, std::string("IMG")))
                                                     ? ((x_7827->var_has_height_attr)
                                                            ? (string_to_float(x_7827->var_height_attr_expr))
                                                            : ((HasAttr(x_7827, std::string("image_height")) &&
                                                                (!x_7827->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_7827, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_7827,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_7827->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7827,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7827,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_7827->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_7827->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6985(const auto &x_7972) { return MakeUnit(); }
auto eval_expr_x_6982(const auto &x_7974) {
  if (eq(x_7974->var_display, std::string("none")) || (x_7974->var_inside_svg || x_7974->var_disabled)) {
    return true;
  } else {
    if ((x_7974->parent != nullptr) && (x_7974->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_7974->var_height_expr, std::string("auto")) ||
          (has_suffix(x_7974->var_height_expr, std::string("px")) ||
           (has_suffix(x_7974->var_height_expr, std::string("ch")) ||
            (has_suffix(x_7974->var_height_expr, std::string("lh")) ||
             eq(x_7974->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6980(const auto &x_8023) { return MakeUnit(); }
auto eval_expr_x_6977(const auto &x_8026) {
  if (HasProp(x_8026, std::string("height"))) {
    return GetProp<std::string>(x_8026, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6975(const auto &x_8029) { return MakeUnit(); }
auto eval_expr_x_6972(const auto &x_8031) {
  if (x_8031->last != nullptr) {
    return plus((x_8031->last)->var_finished_intrinsic_height_sum, (x_8031->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6970(const auto &x_8040) { return MakeUnit(); }
auto eval_expr_x_6967(const auto &x_8047) {
  return plus((x_8047->prev != nullptr) ? ((x_8047->prev)->var_intrinsic_width_sum) : (0.),
              x_8047->var_intrinsic_width_external);
}
Unit var_modified_x_6965(const auto &x_8056) { return MakeUnit(); }
auto eval_expr_x_6962(const auto &x_8063) {
  return max(x_8063->var_intrinsic_current_line_width,
             (x_8063->prev != nullptr) ? ((x_8063->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_6960(const auto &x_8072) { return MakeUnit(); }
auto eval_expr_x_6957(const auto &x_8077) {
  return plus(x_8077->var_intrinsic_width_external,
              ((x_8077->prev != nullptr) && (!(x_8077->prev)->var_line_break))
                  ? ((x_8077->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_6955(const auto &x_8090) { return MakeUnit(); }
auto eval_expr_x_6952(const auto &x_8092) {
  if (eq(x_8092->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8092->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_6950(const auto &x_8101) { return MakeUnit(); }
auto eval_expr_x_6947(const auto &x_8104) {
  if (eq(x_8104->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_8104->var_inside_svg) {
      return 0.;
    } else {
      if (x_8104->var_disabled) {
        return 0.;
      } else {
        if (neq(x_8104->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_8104->var_width_expr, std::string("%"))) &&
             (neq(x_8104->var_width_expr, std::string("fit-content")) &&
              (neq(x_8104->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_8104->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_8104->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_8104->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_8104->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_8104->var_children_intrinsic_width,
              (eq(x_8104->name, std::string("#text")))
                  ? (100.)
                  : ((x_8104->var_is_default_case)
                         ? (0.)
                         : ((eq(x_8104->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_8104->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_8104->name, std::string("svg")))
                                              ? ((x_8104->var_has_width_attr &&
                                                  string_is_float(x_8104->var_width_attr_expr))
                                                     ? (string_to_float(x_8104->var_width_attr_expr))
                                                     : (((!x_8104->var_has_width_attr) &&
                                                         HasAttr(x_8104, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_8104, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_8104,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_8104->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_8104->name, std::string("IMG")))
                                                     ? ((x_8104->var_has_width_attr)
                                                            ? (string_to_float(x_8104->var_width_attr_expr))
                                                            : ((HasAttr(x_8104, std::string("image_width")) &&
                                                                (!x_8104->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_8104, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_8104, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_8104->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_8104,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_8104,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_8104->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_8104->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6945(const auto &x_8257) { return MakeUnit(); }
auto eval_expr_x_6942(const auto &x_8259) {
  if (x_8259->last != nullptr) {
    return (x_8259->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_6940(const auto &x_8264) { return MakeUnit(); }
auto eval_expr_x_6937(const auto &x_8266) {
  if (eq(x_8266->var_display, std::string("none")) || (x_8266->var_inside_svg || x_8266->var_disabled)) {
    return true;
  } else {
    if ((x_8266->parent != nullptr) && (x_8266->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_8266->var_width_expr, std::string("auto")) ||
          (has_suffix(x_8266->var_width_expr, std::string("px")) ||
           (has_suffix(x_8266->var_width_expr, std::string("ch")) ||
            (has_prefix(x_8266->var_width_expr, std::string("calc(")) ||
             eq(x_8266->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6935(const auto &x_8315) { return MakeUnit(); }
auto eval_expr_x_6932(const auto &x_8317) {
  if (eq(x_8317->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_8317->var_inside_svg) {
      return true;
    } else {
      if (x_8317->var_disabled) {
        return true;
      } else {if ( eq(x_8317->name,std::string("#document")) || (eq(x_8317->name,std::string("#shadow-root")) || (eq(x_8317->name,std::string("DIV")) || (eq(x_8317->name,std::string("HTML")) || (eq(x_8317->name,std::string("BODY")) || (eq(x_8317->name,std::string("BUTTON")) || (eq(x_8317->name,std::string("FOOTER")) || (eq(x_8317->name,std::string("SELECT")) || (eq(x_8317->name,std::string("SECTION")) || (eq(x_8317->name,std::string("FORM")) || (eq(x_8317->name,std::string("CENTER")) || (eq(x_8317->name,std::string("TD")) || (eq(x_8317->name,std::string("TR")) || (eq(x_8317->name,std::string("TBODY")) || (eq(x_8317->name,std::string("TABLE")) || (eq(x_8317->name,std::string("SPAN")) || (eq(x_8317->name,std::string("FONT")) || (eq(x_8317->name,std::string("A")) || (eq(x_8317->name,std::string("ARTICLE")) || (eq(x_8317->name,std::string("P")) || (eq(x_8317->name,std::string("U")) || (eq(x_8317->name,std::string("UL")) || (eq(x_8317->name,std::string("B")) || (eq(x_8317->name,std::string("H1")) || (eq(x_8317->name,std::string("H2")) || (eq(x_8317->name,std::string("H3")) || (eq(x_8317->name,std::string("H4")) || (eq(x_8317->name,std::string("DT")) || (eq(x_8317->name,std::string("DD")) || (eq(x_8317->name,std::string("DL")) || (eq(x_8317->name,std::string("LI")) || (eq(x_8317->name,std::string("LABEL")) || (eq(x_8317->name,std::string("OL")) || (eq(x_8317->name,std::string("NAV")) || (eq(x_8317->name,std::string("HEADER")) || (eq(x_8317->name,std::string("HEAD")) || (eq(x_8317->name,std::string("SOURCE")) || (eq(x_8317->name,std::string("PICTURE")) || (eq(x_8317->name,std::string("FIGURE")) || (eq(x_8317->name,std::string("FIGCAPTION")) || (eq(x_8317->name,std::string("MAIN")) || (eq(x_8317->name,std::string("REACT-PARTIAL")) || (eq(x_8317->name,std::string("QUERY-BUILDER")) || (eq(x_8317->name,std::string("MODAL-DIALOG")) || (eq(x_8317->name,std::string("SCROLLABLE-REGION")) || (eq(x_8317->name,std::string("DIALOG-HELPER")) || (eq(x_8317->name,std::string("AUTO-CHECK")) || (eq(x_8317->name,std::string("TOOL-TIP")) || (eq(x_8317->name,std::string("CUSTOM-SCOPES")) || (eq(x_8317->name,std::string("QBSEARCH-INPUT")) || (eq(x_8317->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_8317->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_8317->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_8317->name,std::string("GHCC-CONSENT")) || (eq(x_8317->name,std::string("GLOBAL-BANNER")) || (eq(x_8317->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_8317->name,std::string("CARD-SKEW")) || (eq(x_8317->name,std::string("EM")) || (eq(x_8317->name,std::string("ASIDE")) || (eq(x_8317->name,std::string("AUDIO")) || (eq(x_8317->name,std::string("SUP")) || (eq(x_8317->name,std::string("TIME")) || (eq(x_8317->name,std::string("ABBR")) || (eq(x_8317->name,std::string("SMALL")) || (eq(x_8317->name,std::string("SLOT")) || eq(x_8317->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6930(const auto &x_8330) { return MakeUnit(); }
auto eval_expr_x_6927(const auto &x_8333) {
  if (HasProp(x_8333, std::string("width"))) {
    return GetProp<std::string>(x_8333, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6924(const auto &x_8336) {
  auto x_9672 = [&](const auto &x_8339) {
    if (HashtblContain(x_8339->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8340 = HashtblFindExn(x_8339->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8340, x_8339, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8336->next, [&](const auto &x_8338) { return MakeUnit(); },
      [&](const auto &x_8337) {
        auto x_9673 = x_9672;
        x_9673(x_8337);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6921(const auto &x_8342) {
  if ((x_8342->prev != nullptr) && (!(x_8342->prev)->var_line_break)) {
    return max(x_8342->var_height_external, (x_8342->prev)->var_line_height);
  } else {
    return x_8342->var_height_external;
  }
}
Unit var_modified_x_6919(const auto &x_8359) {
  auto x_9674 = [&](const auto &x_8360) {
    if (HashtblContain(x_8360->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8361 = HashtblFindExn(x_8360->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8361, x_8360, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9674(x_8359);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6916(const auto &x_8363) {
  if (eq(x_8363->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8363->var_height_internal;
  }
}
Unit var_modified_x_6914(const auto &x_8372) {
  auto x_9675 = [&](const auto &x_8373) {
    if (HashtblContain(x_8373->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8374 = HashtblFindExn(x_8373->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8374, x_8373, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9675(x_8372);
  MakeUnit();
  ListIter(x_8372->children, [&](const auto &x_8376) {
    if (HashtblContain(x_8376->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8377 = HashtblFindExn(x_8376->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8377, x_8376, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6911(const auto &x_8379) {
  if (x_8379->var_intrinsic_height_is_height) {
    return x_8379->var_intrinsic_height_internal;
  } else {
    if ((x_8379->parent != nullptr) && (x_8379->parent)->var_is_flex_column) {
      return plus(x_8379->var_intrinsic_height_internal,
                  mult(x_8379->var_flex_amount, (x_8379->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8379->var_height_expr, std::string("%"))) {
        return mult(x_8379->var_box_height,
                    divide(string_to_float(strip_suffix(x_8379->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_8379->var_box_height, x_8379->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_6909(const auto &x_8432) {
  ListIter(x_8432->children, [&](const auto &x_8433) {
    if (HashtblContain(x_8433->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8434 = HashtblFindExn(x_8433->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8434, x_8433, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9676 = [&](const auto &x_8438) {
    if (HashtblContain(x_8438->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8439 = HashtblFindExn(x_8438->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8439, x_8438, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8432->next, [&](const auto &x_8437) { return MakeUnit(); },
      [&](const auto &x_8436) {
        auto x_9677 = x_9676;
        x_9677(x_8436);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6906(const auto &x_8441) {
  if (x_8441->prev != nullptr) {
    if (x_8441->var_line_break || (x_8441->prev)->var_line_break) {
      return plus((x_8441->prev)->var_y, (x_8441->prev)->var_line_height);
    } else {
      return (x_8441->prev)->var_y;
    }
  } else {
    if (x_8441->parent != nullptr) {
      return (x_8441->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6904(const auto &x_8466) {
  auto x_9678 = [&](const auto &x_8469) {
    if (HashtblContain(x_8469->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8470 = HashtblFindExn(x_8469->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8470, x_8469, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8466->next, [&](const auto &x_8468) { return MakeUnit(); },
      [&](const auto &x_8467) {
        auto x_9679 = x_9678;
        x_9679(x_8467);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6901(const auto &x_8472) {
  if (eq(x_8472->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8472->var_width_internal;
  }
}
Unit var_modified_x_6899(const auto &x_8481) {
  auto x_9680 = [&](const auto &x_8482) {
    if (HashtblContain(x_8482->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8483 = HashtblFindExn(x_8482->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8483, x_8482, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9680(x_8481);
  MakeUnit();
  ListIter(x_8481->children, [&](const auto &x_8485) {
    if (HashtblContain(x_8485->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8486 = HashtblFindExn(x_8485->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8486, x_8485, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6896(const auto &x_8488) {
  if (x_8488->var_intrinsic_width_is_width) {
    return x_8488->var_intrinsic_width_internal;
  } else {
    if ((x_8488->parent != nullptr) && (x_8488->parent)->var_is_flex_row) {
      return plus(x_8488->var_intrinsic_width_internal, mult(x_8488->var_flex_amount, (x_8488->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8488->var_width_expr, std::string("%"))) {
        return mult(x_8488->var_box_width,
                    divide(string_to_float(strip_suffix(x_8488->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_8488->var_box_width, x_8488->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_6894(const auto &x_8541) {
  ListIter(x_8541->children, [&](const auto &x_8542) {
    if (HashtblContain(x_8542->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8543 = HashtblFindExn(x_8542->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8543, x_8542, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9681 = [&](const auto &x_8547) {
    if (HashtblContain(x_8547->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8548 = HashtblFindExn(x_8547->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8548, x_8547, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8541->next, [&](const auto &x_8546) { return MakeUnit(); },
      [&](const auto &x_8545) {
        auto x_9682 = x_9681;
        x_9682(x_8545);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6891(const auto &x_8550) {
  if (x_8550->prev != nullptr) {
    if (x_8550->var_line_break || (x_8550->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_8550->prev)->var_x, (x_8550->prev)->var_width_external);
    }
  } else {
    if (x_8550->parent != nullptr) {
      return (x_8550->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6889(const auto &x_8571) {
  ListIter(x_8571->children, [&](const auto &x_8572) {
    if (HashtblContain(x_8572->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8573 = HashtblFindExn(x_8572->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8573, x_8572, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6886(const auto &x_8575) {
  if (gt(x_8575->var_left_over, 0.)) {
    return divide(x_8575->var_left_over, x_8575->var_flex_grow_sum);
  } else {
    return divide(x_8575->var_left_over, x_8575->var_flex_shrink_sum);
  }
}
Unit var_modified_x_6884(const auto &x_8596) {
  auto x_9683 = [&](const auto &x_8597) {
    if (HashtblContain(x_8597->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8598 = HashtblFindExn(x_8597->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8598, x_8597, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9683(x_8596);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6881(const auto &x_8600) {
  if ((x_8600->parent != nullptr) && gt((x_8600->parent)->var_left_over, 0.)) {
    return x_8600->var_flex_grow;
  } else {
    return x_8600->var_flex_shrink;
  }
}
Unit var_modified_x_6879(const auto &x_8613) {
  auto x_9684 = [&](const auto &x_8614) {
    if (HashtblContain(x_8614->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8615 = HashtblFindExn(x_8614->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8615, x_8614, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9684(x_8613);
  MakeUnit();
  ListIter(x_8613->children, [&](const auto &x_8617) {
    if (HashtblContain(x_8617->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8618 = HashtblFindExn(x_8617->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8618, x_8617, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6876(const auto &x_8620) {
  if (x_8620->var_is_flex_row) {
    return minus(x_8620->var_box_width, (x_8620->last != nullptr) ? ((x_8620->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_8620->var_box_height, (x_8620->last != nullptr) ? ((x_8620->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_6874(const auto &x_8641) {
  auto x_9685 = [&](const auto &x_8642) {
    if (HashtblContain(x_8642->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8643 = HashtblFindExn(x_8642->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8643, x_8642, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9685(x_8641);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6871(const auto &x_8645) {
  if (x_8645->parent != nullptr) {
    return (x_8645->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_6869(const auto &x_8650) {
  auto x_9686 = [&](const auto &x_8651) {
    if (HashtblContain(x_8651->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8652 = HashtblFindExn(x_8651->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8652, x_8651, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9686(x_8650);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6866(const auto &x_8654) {
  if (x_8654->parent != nullptr) {
    return (x_8654->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_6863(const auto &x_8659) {
  auto x_9687 = [&](const auto &x_8660) {
    if (HashtblContain(x_8660->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8661 = HashtblFindExn(x_8660->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8661, x_8660, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9687(x_8659);
  MakeUnit();
  auto x_9688 = [&](const auto &x_8665) {
    if (HashtblContain(x_8665->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8666 = HashtblFindExn(x_8665->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8666, x_8665, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8659->next, [&](const auto &x_8664) { return MakeUnit(); },
      [&](const auto &x_8663) {
        auto x_9691 = x_9688;
        x_9691(x_8663);
        return MakeUnit();
      });
  auto x_9689 = [&](const auto &x_8668) {
    if (HashtblContain(x_8668->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8669 = HashtblFindExn(x_8668->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8669, x_8668, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9689(x_8659);
  MakeUnit();
  auto x_9690 = [&](const auto &x_8673) {
    if (HashtblContain(x_8673->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8674 = HashtblFindExn(x_8673->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8674, x_8673, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8659->next, [&](const auto &x_8672) { return MakeUnit(); },
      [&](const auto &x_8671) {
        auto x_9692 = x_9690;
        x_9692(x_8671);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6860(const auto &x_8676) {
  if (eq(x_8676->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_8676->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_8676->parent != nullptr) &&
          (eq((x_8676->parent)->var_display, std::string("flex")) ||
           eq((x_8676->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_8676->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_8676->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_8676->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_8676->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_8676, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_8676, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_8676->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_8676->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_8676->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_8676->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_8676->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_8676->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_8676->var_display, std::string("list-item"))) {
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
Unit var_modified_x_6858(const auto &x_8753) {
  ListIter(x_8753->children, [&](const auto &x_8754) {
    if (HashtblContain(x_8754->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8755 = HashtblFindExn(x_8754->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8755, x_8754, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6855(const auto &x_8757) {
  return (((!(x_8757->parent != nullptr)) || (x_8757->parent)->var_visible) &&
          (neq(x_8757->var_display, std::string("none")) && ((!x_8757->var_inside_svg) && (!x_8757->var_disabled))));
}
Unit var_modified_x_6853(const auto &x_8774) {
  auto x_9693 = [&](const auto &x_8775) {
    if (HashtblContain(x_8775->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8776 = HashtblFindExn(x_8775->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8776, x_8775, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9693(x_8774);
  MakeUnit();
  ListIter(x_8774->children, [&](const auto &x_8778) {
    if (HashtblContain(x_8778->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8779 = HashtblFindExn(x_8778->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8779, x_8778, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9694 = [&](const auto &x_8781) {
    if (HashtblContain(x_8781->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8782 = HashtblFindExn(x_8781->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8782, x_8781, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9694(x_8774);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6850(const auto &x_8784) {
  if (eq(x_8784->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_8784->parent != nullptr) && (x_8784->parent)->var_disabled);
  }
}
Unit var_modified_x_6848(const auto &x_8789) {
  auto x_9695 = [&](const auto &x_8790) {
    if (HashtblContain(x_8790->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8791 = HashtblFindExn(x_8790->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8791, x_8790, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9695(x_8789);
  MakeUnit();
  ListIter(x_8789->children, [&](const auto &x_8793) {
    if (HashtblContain(x_8793->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8794 = HashtblFindExn(x_8793->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8794, x_8793, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9696 = [&](const auto &x_8796) {
    if (HashtblContain(x_8796->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8797 = HashtblFindExn(x_8796->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8797, x_8796, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9696(x_8789);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6845(const auto &x_8799) {
  return ((x_8799->parent != nullptr) && ((x_8799->parent)->var_is_svg_block || (x_8799->parent)->var_inside_svg));
}
Unit var_modified_x_6843(const auto &x_8808) {
  ListIter(x_8808->children, [&](const auto &x_8809) {
    if (HashtblContain(x_8809->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8810 = HashtblFindExn(x_8809->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8810, x_8809, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6840(const auto &x_8812) { return eq(x_8812->name, std::string("svg")); }
Unit var_modified_x_6838(const auto &x_8813) {
  auto x_9697 = [&](const auto &x_8814) {
    if (HashtblContain(x_8814->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8815 = HashtblFindExn(x_8814->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8815, x_8814, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9697(x_8813);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6835(const auto &x_8817) { return neq(x_8817->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_6833(const auto &x_8822) {
  auto x_9698 = [&](const auto &x_8823) {
    if (HashtblContain(x_8823->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8824 = HashtblFindExn(x_8823->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8824, x_8823, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9698(x_8822);
  MakeUnit();
  auto x_9699 = [&](const auto &x_8826) {
    if (HashtblContain(x_8826->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8827 = HashtblFindExn(x_8826->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8827, x_8826, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9699(x_8822);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6830(const auto &x_8829) {
  if (!HasAttr(x_8829, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_8829, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_8829, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_8829, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_6828(const auto &x_8840) {
  auto x_9700 = [&](const auto &x_8841) {
    if (HashtblContain(x_8841->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8842 = HashtblFindExn(x_8841->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8842, x_8841, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9700(x_8840);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6825(const auto &x_8844) { return neq(x_8844->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_6823(const auto &x_8849) {
  auto x_9701 = [&](const auto &x_8850) {
    if (HashtblContain(x_8850->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8851 = HashtblFindExn(x_8850->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8851, x_8850, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9701(x_8849);
  MakeUnit();
  auto x_9702 = [&](const auto &x_8853) {
    if (HashtblContain(x_8853->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8854 = HashtblFindExn(x_8853->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8854, x_8853, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9702(x_8849);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6820(const auto &x_8856) {
  if (!HasAttr(x_8856, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_8856, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_8856, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_8856, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_6818(const auto &x_8867) {
  ListIter(x_8867->children, [&](const auto &x_8868) {
    if (HashtblContain(x_8868->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8869 = HashtblFindExn(x_8868->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8869, x_8868, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  ListIter(x_8867->children, [&](const auto &x_8871) {
    if (HashtblContain(x_8871->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8872 = HashtblFindExn(x_8871->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8872, x_8871, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6815(const auto &x_8874) {
  if ((x_8874->parent != nullptr) &&
      (eq((x_8874->parent)->var_display, std::string("flex")) ||
       eq((x_8874->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_8874->parent)->var_flex_direction, std::string("column")) ||
        eq((x_8874->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6813(const auto &x_8899) {
  ListIter(x_8899->children, [&](const auto &x_8900) {
    if (HashtblContain(x_8900->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8901 = HashtblFindExn(x_8900->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8901, x_8900, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9703 = [&](const auto &x_8903) {
    if (HashtblContain(x_8903->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8904 = HashtblFindExn(x_8903->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8904, x_8903, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9703(x_8899);
  MakeUnit();
  ListIter(x_8899->children, [&](const auto &x_8906) {
    if (HashtblContain(x_8906->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8907 = HashtblFindExn(x_8906->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8907, x_8906, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6810(const auto &x_8909) {
  if ((x_8909->parent != nullptr) &&
      (eq((x_8909->parent)->var_display, std::string("flex")) ||
       eq((x_8909->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_8909->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6808(const auto &x_8934) {
  ListIter(x_8934->children, [&](const auto &x_8935) {
    if (HashtblContain(x_8935->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8936 = HashtblFindExn(x_8935->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8936, x_8935, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6805(const auto &x_8938) {
  if (HasProp(x_8938, std::string("flex-direction"))) {
    return GetProp<std::string>(x_8938, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_6803(const auto &x_8941) {
  auto x_9704 = [&](const auto &x_8944) {
    if (HashtblContain(x_8944->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8945 = HashtblFindExn(x_8944->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8945, x_8944, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8941->next, [&](const auto &x_8943) { return MakeUnit(); },
      [&](const auto &x_8942) {
        auto x_9706 = x_9704;
        x_9706(x_8942);
        return MakeUnit();
      });
  auto x_9705 = [&](const auto &x_8947) {
    if (HashtblContain(x_8947->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8948 = HashtblFindExn(x_8947->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8948, x_8947, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9705(x_8941);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6800(const auto &x_8950) {
  return plus((x_8950->prev != nullptr) ? ((x_8950->prev)->var_flex_shrink_sum) : (0.), x_8950->var_flex_shrink);
}
Unit var_modified_x_6798(const auto &x_8959) {
  auto x_9707 = [&](const auto &x_8962) {
    if (HashtblContain(x_8962->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8963 = HashtblFindExn(x_8962->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8963, x_8962, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8959->next, [&](const auto &x_8961) { return MakeUnit(); },
      [&](const auto &x_8960) {
        auto x_9709 = x_9707;
        x_9709(x_8960);
        return MakeUnit();
      });
  auto x_9708 = [&](const auto &x_8965) {
    if (HashtblContain(x_8965->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8966 = HashtblFindExn(x_8965->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8966, x_8965, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9708(x_8959);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6795(const auto &x_8968) {
  return plus((x_8968->prev != nullptr) ? ((x_8968->prev)->var_flex_grow_sum) : (0.), x_8968->var_flex_grow);
}
Unit var_modified_x_6793(const auto &x_8977) {
  auto x_9710 = [&](const auto &x_8978) {
    if (HashtblContain(x_8978->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8979 = HashtblFindExn(x_8978->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8979, x_8978, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9710(x_8977);
  MakeUnit();
  auto x_9711 = [&](const auto &x_8981) {
    if (HashtblContain(x_8981->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8982 = HashtblFindExn(x_8981->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8982, x_8981, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9711(x_8977);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6790(const auto &x_8984) {
  if (HasProp(x_8984, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_8984, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_6788(const auto &x_8987) {
  auto x_9712 = [&](const auto &x_8988) {
    if (HashtblContain(x_8988->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8989 = HashtblFindExn(x_8988->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8989, x_8988, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9712(x_8987);
  MakeUnit();
  auto x_9713 = [&](const auto &x_8991) {
    if (HashtblContain(x_8991->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8992 = HashtblFindExn(x_8991->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8992, x_8991, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9713(x_8987);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6785(const auto &x_8994) {
  if (HasProp(x_8994, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_8994, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_6783(const auto &x_8997) {
  auto x_9714 = [&](const auto &x_8998) {
    if (HashtblContain(x_8998->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8999 = HashtblFindExn(x_8998->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8999, x_8998, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9714(x_8997);
  MakeUnit();
  auto x_9715 = [&](const auto &x_9001) {
    if (HashtblContain(x_9001->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9002 = HashtblFindExn(x_9001->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9002, x_9001, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9715(x_8997);
  MakeUnit();
  auto x_9716 = [&](const auto &x_9004) {
    if (HashtblContain(x_9004->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9005 = HashtblFindExn(x_9004->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9005, x_9004, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9716(x_8997);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6780(const auto &x_9007) {
  if (HasProp(x_9007, std::string("position"))) {
    return GetProp<std::string>(x_9007, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_6778(const auto &x_9010) {
  auto x_9717 = [&](const auto &x_9011) {
    if (HashtblContain(x_9011->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_9012 = HashtblFindExn(x_9011->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_9012, x_9011, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9717(x_9010);
  MakeUnit();
  ListIter(x_9010->children, [&](const auto &x_9014) {
    if (HashtblContain(x_9014->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_9015 = HashtblFindExn(x_9014->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_9015, x_9014, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9718 = [&](const auto &x_9017) {
    if (HashtblContain(x_9017->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9018 = HashtblFindExn(x_9017->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9018, x_9017, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9718(x_9010);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6775(const auto &x_9020) {
  if (HasProp(x_9020, std::string("display"))) {
    return GetProp<std::string>(x_9020, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_6772(const auto &x_9023) {
  auto x_9719 = [&](const auto &x_9026) {
    if (HashtblContain(x_9026->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9027 = HashtblFindExn(x_9026->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9027, x_9026, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9023->next != nullptr) {
    auto x_9721 = x_9719;
    OptionMatch(
        x_9023->parent, [&](const auto &x_9025) { return MakeUnit(); },
        [&](const auto &x_9024) {
          auto x_9723 = x_9721;
          x_9723(x_9024);
          return MakeUnit();
        });
  }
  auto x_9720 = [&](const auto &x_9031) {
    if (HashtblContain(x_9031->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9032 = HashtblFindExn(x_9031->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9032, x_9031, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9023->next, [&](const auto &x_9030) { return MakeUnit(); },
      [&](const auto &x_9029) {
        auto x_9722 = x_9720;
        x_9722(x_9029);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6769(const auto &x_9034) {
  if (x_9034->prev != nullptr) {
    if (x_9034->var_line_break) {
      return plus((x_9034->prev)->var_finished_intrinsic_height_sum,
                  plus((x_9034->prev)->var_intrinsic_current_line_height, x_9034->var_intrinsic_height_external));
    } else {
      return (x_9034->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_9034->var_line_break) {
      return x_9034->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6767(const auto &x_9063) {
  auto x_9724 = [&](const auto &x_9066) {
    if (HashtblContain(x_9066->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9067 = HashtblFindExn(x_9066->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9067, x_9066, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9063->next != nullptr) {
    auto x_9726 = x_9724;
    OptionMatch(
        x_9063->parent, [&](const auto &x_9065) { return MakeUnit(); },
        [&](const auto &x_9064) {
          auto x_9728 = x_9726;
          x_9728(x_9064);
          return MakeUnit();
        });
  }
  auto x_9725 = [&](const auto &x_9071) {
    if (HashtblContain(x_9071->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9072 = HashtblFindExn(x_9071->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9072, x_9071, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9063->next, [&](const auto &x_9070) { return MakeUnit(); },
      [&](const auto &x_9069) {
        auto x_9727 = x_9725;
        x_9727(x_9069);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6764(const auto &x_9074) {
  if (x_9074->var_line_break) {
    return 0.;
  } else {
    return max(x_9074->var_intrinsic_height_external,
               (x_9074->prev != nullptr) ? ((x_9074->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_6762(const auto &x_9087) {
  auto x_9729 = [&](const auto &x_9090) {
    if (HashtblContain(x_9090->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9091 = HashtblFindExn(x_9090->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9091, x_9090, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9087->next, [&](const auto &x_9089) { return MakeUnit(); },
      [&](const auto &x_9088) {
        auto x_9731 = x_9729;
        x_9731(x_9088);
        return MakeUnit();
      });
  auto x_9730 = [&](const auto &x_9095) {
    if (HashtblContain(x_9095->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9096 = HashtblFindExn(x_9095->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9096, x_9095, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9087->next != nullptr) {
    auto x_9732 = x_9730;
    OptionMatch(
        x_9087->parent, [&](const auto &x_9094) { return MakeUnit(); },
        [&](const auto &x_9093) {
          auto x_9733 = x_9732;
          x_9733(x_9093);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_6759(const auto &x_9098) {
  return plus((x_9098->prev != nullptr) ? ((x_9098->prev)->var_intrinsic_height_sum) : (0.),
              x_9098->var_intrinsic_height_external);
}
Unit var_modified_x_6757(const auto &x_9107) {
  auto x_9734 = [&](const auto &x_9108) {
    if (HashtblContain(x_9108->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9109 = HashtblFindExn(x_9108->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9109, x_9108, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9734(x_9107);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6754(const auto &x_9111) {
  if (eq(x_9111->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_9111->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_6752(const auto &x_9120) {
  auto x_9735 = [&](const auto &x_9121) {
    if (HashtblContain(x_9121->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9122 = HashtblFindExn(x_9121->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9122, x_9121, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9735(x_9120);
  MakeUnit();
  auto x_9736 = [&](const auto &x_9124) {
    if (HashtblContain(x_9124->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9125 = HashtblFindExn(x_9124->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9125, x_9124, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9736(x_9120);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6749(const auto &x_9127) {
  if (eq(x_9127->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_9127->var_inside_svg) {
      return 0.;
    } else {
      if (x_9127->var_disabled) {
        return 0.;
      } else {
        if (neq(x_9127->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_9127->var_height_expr, std::string("%"))) &&
             neq(x_9127->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_9127->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_9127->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_9127->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_9127->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_9127->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_9127->var_children_intrinsic_height,
              (eq(x_9127->name, std::string("#text")))
                  ? (10.)
                  : ((x_9127->var_is_default_case)
                         ? (0.)
                         : ((eq(x_9127->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_9127->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_9127->name, std::string("svg")))
                                              ? ((x_9127->var_has_height_attr &&
                                                  string_is_float(x_9127->var_height_attr_expr))
                                                     ? (string_to_float(x_9127->var_height_attr_expr))
                                                     : ((HasAttr(x_9127, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_9127, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_9127,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_9127->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_9127->name, std::string("IMG")))
                                                     ? ((x_9127->var_has_height_attr)
                                                            ? (string_to_float(x_9127->var_height_attr_expr))
                                                            : ((HasAttr(x_9127, std::string("image_height")) &&
                                                                (!x_9127->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_9127, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_9127,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_9127->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9127,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9127,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_9127->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_9127->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6747(const auto &x_9272) {
  auto x_9737 = [&](const auto &x_9273) {
    if (HashtblContain(x_9273->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9274 = HashtblFindExn(x_9273->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9274, x_9273, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9737(x_9272);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6744(const auto &x_9276) {
  if (eq(x_9276->var_display, std::string("none")) || (x_9276->var_inside_svg || x_9276->var_disabled)) {
    return true;
  } else {
    if ((x_9276->parent != nullptr) && (x_9276->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_9276->var_height_expr, std::string("auto")) ||
          (has_suffix(x_9276->var_height_expr, std::string("px")) ||
           (has_suffix(x_9276->var_height_expr, std::string("ch")) ||
            (has_suffix(x_9276->var_height_expr, std::string("lh")) ||
             eq(x_9276->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6742(const auto &x_9325) {
  auto x_9738 = [&](const auto &x_9326) {
    if (HashtblContain(x_9326->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9327 = HashtblFindExn(x_9326->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9327, x_9326, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9738(x_9325);
  MakeUnit();
  auto x_9739 = [&](const auto &x_9329) {
    if (HashtblContain(x_9329->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9330 = HashtblFindExn(x_9329->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9330, x_9329, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9739(x_9325);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6739(const auto &x_9332) {
  if (HasProp(x_9332, std::string("height"))) {
    return GetProp<std::string>(x_9332, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6737(const auto &x_9335) {
  auto x_9740 = [&](const auto &x_9336) {
    if (HashtblContain(x_9336->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9337 = HashtblFindExn(x_9336->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9337, x_9336, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9740(x_9335);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6734(const auto &x_9339) {
  if (x_9339->last != nullptr) {
    return plus((x_9339->last)->var_finished_intrinsic_height_sum, (x_9339->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6732(const auto &x_9348) {
  auto x_9741 = [&](const auto &x_9351) {
    if (HashtblContain(x_9351->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9352 = HashtblFindExn(x_9351->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9352, x_9351, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9348->next, [&](const auto &x_9350) { return MakeUnit(); },
      [&](const auto &x_9349) {
        auto x_9743 = x_9741;
        x_9743(x_9349);
        return MakeUnit();
      });
  auto x_9742 = [&](const auto &x_9356) {
    if (HashtblContain(x_9356->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9357 = HashtblFindExn(x_9356->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9357, x_9356, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9348->next != nullptr) {
    auto x_9744 = x_9742;
    OptionMatch(
        x_9348->parent, [&](const auto &x_9355) { return MakeUnit(); },
        [&](const auto &x_9354) {
          auto x_9745 = x_9744;
          x_9745(x_9354);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_6729(const auto &x_9359) {
  return plus((x_9359->prev != nullptr) ? ((x_9359->prev)->var_intrinsic_width_sum) : (0.),
              x_9359->var_intrinsic_width_external);
}
Unit var_modified_x_6727(const auto &x_9368) {
  auto x_9746 = [&](const auto &x_9371) {
    if (HashtblContain(x_9371->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9372 = HashtblFindExn(x_9371->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9372, x_9371, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9368->next != nullptr) {
    auto x_9748 = x_9746;
    OptionMatch(
        x_9368->parent, [&](const auto &x_9370) { return MakeUnit(); },
        [&](const auto &x_9369) {
          auto x_9750 = x_9748;
          x_9750(x_9369);
          return MakeUnit();
        });
  }
  auto x_9747 = [&](const auto &x_9376) {
    if (HashtblContain(x_9376->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9377 = HashtblFindExn(x_9376->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9377, x_9376, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9368->next, [&](const auto &x_9375) { return MakeUnit(); },
      [&](const auto &x_9374) {
        auto x_9749 = x_9747;
        x_9749(x_9374);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6724(const auto &x_9379) {
  return max(x_9379->var_intrinsic_current_line_width,
             (x_9379->prev != nullptr) ? ((x_9379->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_6722(const auto &x_9388) {
  auto x_9751 = [&](const auto &x_9389) {
    if (HashtblContain(x_9389->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9390 = HashtblFindExn(x_9389->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9390, x_9389, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9751(x_9388);
  MakeUnit();
  auto x_9752 = [&](const auto &x_9394) {
    if (HashtblContain(x_9394->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9395 = HashtblFindExn(x_9394->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9395, x_9394, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9388->next, [&](const auto &x_9393) { return MakeUnit(); },
      [&](const auto &x_9392) {
        auto x_9753 = x_9752;
        x_9753(x_9392);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6719(const auto &x_9397) {
  return plus(x_9397->var_intrinsic_width_external,
              ((x_9397->prev != nullptr) && (!(x_9397->prev)->var_line_break))
                  ? ((x_9397->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_6717(const auto &x_9410) {
  auto x_9754 = [&](const auto &x_9411) {
    if (HashtblContain(x_9411->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9412 = HashtblFindExn(x_9411->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9412, x_9411, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9754(x_9410);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6714(const auto &x_9414) {
  if (eq(x_9414->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_9414->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_6712(const auto &x_9423) {
  auto x_9755 = [&](const auto &x_9424) {
    if (HashtblContain(x_9424->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9425 = HashtblFindExn(x_9424->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9425, x_9424, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9755(x_9423);
  MakeUnit();
  auto x_9756 = [&](const auto &x_9427) {
    if (HashtblContain(x_9427->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9428 = HashtblFindExn(x_9427->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9428, x_9427, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9756(x_9423);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6709(const auto &x_9430) {
  if (eq(x_9430->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_9430->var_inside_svg) {
      return 0.;
    } else {
      if (x_9430->var_disabled) {
        return 0.;
      } else {
        if (neq(x_9430->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_9430->var_width_expr, std::string("%"))) &&
             (neq(x_9430->var_width_expr, std::string("fit-content")) &&
              (neq(x_9430->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_9430->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_9430->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_9430->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_9430->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_9430->var_children_intrinsic_width,
              (eq(x_9430->name, std::string("#text")))
                  ? (100.)
                  : ((x_9430->var_is_default_case)
                         ? (0.)
                         : ((eq(x_9430->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_9430->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_9430->name, std::string("svg")))
                                              ? ((x_9430->var_has_width_attr &&
                                                  string_is_float(x_9430->var_width_attr_expr))
                                                     ? (string_to_float(x_9430->var_width_attr_expr))
                                                     : (((!x_9430->var_has_width_attr) &&
                                                         HasAttr(x_9430, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_9430, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_9430,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_9430->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_9430->name, std::string("IMG")))
                                                     ? ((x_9430->var_has_width_attr)
                                                            ? (string_to_float(x_9430->var_width_attr_expr))
                                                            : ((HasAttr(x_9430, std::string("image_width")) &&
                                                                (!x_9430->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_9430, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_9430, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_9430->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9430,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9430,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_9430->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_9430->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6707(const auto &x_9583) {
  auto x_9757 = [&](const auto &x_9584) {
    if (HashtblContain(x_9584->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9585 = HashtblFindExn(x_9584->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9585, x_9584, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9757(x_9583);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6704(const auto &x_9587) {
  if (x_9587->last != nullptr) {
    return (x_9587->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_6702(const auto &x_9592) {
  auto x_9758 = [&](const auto &x_9593) {
    if (HashtblContain(x_9593->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9594 = HashtblFindExn(x_9593->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9594, x_9593, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9758(x_9592);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6699(const auto &x_9596) {
  if (eq(x_9596->var_display, std::string("none")) || (x_9596->var_inside_svg || x_9596->var_disabled)) {
    return true;
  } else {
    if ((x_9596->parent != nullptr) && (x_9596->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_9596->var_width_expr, std::string("auto")) ||
          (has_suffix(x_9596->var_width_expr, std::string("px")) ||
           (has_suffix(x_9596->var_width_expr, std::string("ch")) ||
            (has_prefix(x_9596->var_width_expr, std::string("calc(")) ||
             eq(x_9596->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6697(const auto &x_9645) {
  auto x_9759 = [&](const auto &x_9646) {
    if (HashtblContain(x_9646->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9647 = HashtblFindExn(x_9646->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9647, x_9646, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9759(x_9645);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6694(const auto &x_9649) {
  if (eq(x_9649->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_9649->var_inside_svg) {
      return true;
    } else {
      if (x_9649->var_disabled) {
        return true;
      } else {if ( eq(x_9649->name,std::string("#document")) || (eq(x_9649->name,std::string("#shadow-root")) || (eq(x_9649->name,std::string("DIV")) || (eq(x_9649->name,std::string("HTML")) || (eq(x_9649->name,std::string("BODY")) || (eq(x_9649->name,std::string("BUTTON")) || (eq(x_9649->name,std::string("FOOTER")) || (eq(x_9649->name,std::string("SELECT")) || (eq(x_9649->name,std::string("SECTION")) || (eq(x_9649->name,std::string("FORM")) || (eq(x_9649->name,std::string("CENTER")) || (eq(x_9649->name,std::string("TD")) || (eq(x_9649->name,std::string("TR")) || (eq(x_9649->name,std::string("TBODY")) || (eq(x_9649->name,std::string("TABLE")) || (eq(x_9649->name,std::string("SPAN")) || (eq(x_9649->name,std::string("FONT")) || (eq(x_9649->name,std::string("A")) || (eq(x_9649->name,std::string("ARTICLE")) || (eq(x_9649->name,std::string("P")) || (eq(x_9649->name,std::string("U")) || (eq(x_9649->name,std::string("UL")) || (eq(x_9649->name,std::string("B")) || (eq(x_9649->name,std::string("H1")) || (eq(x_9649->name,std::string("H2")) || (eq(x_9649->name,std::string("H3")) || (eq(x_9649->name,std::string("H4")) || (eq(x_9649->name,std::string("DT")) || (eq(x_9649->name,std::string("DD")) || (eq(x_9649->name,std::string("DL")) || (eq(x_9649->name,std::string("LI")) || (eq(x_9649->name,std::string("LABEL")) || (eq(x_9649->name,std::string("OL")) || (eq(x_9649->name,std::string("NAV")) || (eq(x_9649->name,std::string("HEADER")) || (eq(x_9649->name,std::string("HEAD")) || (eq(x_9649->name,std::string("SOURCE")) || (eq(x_9649->name,std::string("PICTURE")) || (eq(x_9649->name,std::string("FIGURE")) || (eq(x_9649->name,std::string("FIGCAPTION")) || (eq(x_9649->name,std::string("MAIN")) || (eq(x_9649->name,std::string("REACT-PARTIAL")) || (eq(x_9649->name,std::string("QUERY-BUILDER")) || (eq(x_9649->name,std::string("MODAL-DIALOG")) || (eq(x_9649->name,std::string("SCROLLABLE-REGION")) || (eq(x_9649->name,std::string("DIALOG-HELPER")) || (eq(x_9649->name,std::string("AUTO-CHECK")) || (eq(x_9649->name,std::string("TOOL-TIP")) || (eq(x_9649->name,std::string("CUSTOM-SCOPES")) || (eq(x_9649->name,std::string("QBSEARCH-INPUT")) || (eq(x_9649->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_9649->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_9649->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_9649->name,std::string("GHCC-CONSENT")) || (eq(x_9649->name,std::string("GLOBAL-BANNER")) || (eq(x_9649->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_9649->name,std::string("CARD-SKEW")) || (eq(x_9649->name,std::string("EM")) || (eq(x_9649->name,std::string("ASIDE")) || (eq(x_9649->name,std::string("AUDIO")) || (eq(x_9649->name,std::string("SUP")) || (eq(x_9649->name,std::string("TIME")) || (eq(x_9649->name,std::string("ABBR")) || (eq(x_9649->name,std::string("SMALL")) || (eq(x_9649->name,std::string("SLOT")) || eq(x_9649->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6692(const auto &x_9662) {
  auto x_9760 = [&](const auto &x_9663) {
    if (HashtblContain(x_9663->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9664 = HashtblFindExn(x_9663->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9664, x_9663, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9760(x_9662);
  MakeUnit();
  auto x_9761 = [&](const auto &x_9666) {
    if (HashtblContain(x_9666->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9667 = HashtblFindExn(x_9666->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9667, x_9666, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9761(x_9662);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6689(const auto &x_9669) {
  if (HasProp(x_9669, std::string("width"))) {
    return GetProp<std::string>(x_9669, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_6664(const auto &x_6688) {
  WriteMetric();
  auto x_6690 = eval_expr_x_6689(x_6688);
  if (x_6688->has_var_width_expr) {
    auto x_6691 = x_6688->var_width_expr;
    if (!EqualValue(x_6691, x_6690)) {
      var_modified_x_6692(x_6688);
    }
  }
  x_6688->has_var_width_expr = true;
  x_6688->var_width_expr = x_6690;
  WriteMetric();
  auto x_6695 = eval_expr_x_6694(x_6688);
  if (x_6688->has_var_is_default_case) {
    auto x_6696 = x_6688->var_is_default_case;
    if (!EqualValue(x_6696, x_6695)) {
      var_modified_x_6697(x_6688);
    }
  }
  x_6688->has_var_is_default_case = true;
  x_6688->var_is_default_case = x_6695;
  WriteMetric();
  auto x_6700 = eval_expr_x_6699(x_6688);
  if (x_6688->has_var_intrinsic_width_is_width) {
    auto x_6701 = x_6688->var_intrinsic_width_is_width;
    if (!EqualValue(x_6701, x_6700)) {
      var_modified_x_6702(x_6688);
    }
  }
  x_6688->has_var_intrinsic_width_is_width = true;
  x_6688->var_intrinsic_width_is_width = x_6700;
  WriteMetric();
  auto x_6705 = eval_expr_x_6704(x_6688);
  if (x_6688->has_var_children_intrinsic_width) {
    auto x_6706 = x_6688->var_children_intrinsic_width;
    if (!EqualValue(x_6706, x_6705)) {
      var_modified_x_6707(x_6688);
    }
  }
  x_6688->has_var_children_intrinsic_width = true;
  x_6688->var_children_intrinsic_width = x_6705;
  WriteMetric();
  auto x_6710 = eval_expr_x_6709(x_6688);
  if (x_6688->has_var_intrinsic_width_internal) {
    auto x_6711 = x_6688->var_intrinsic_width_internal;
    if (!EqualValue(x_6711, x_6710)) {
      var_modified_x_6712(x_6688);
    }
  }
  x_6688->has_var_intrinsic_width_internal = true;
  x_6688->var_intrinsic_width_internal = x_6710;
  WriteMetric();
  auto x_6715 = eval_expr_x_6714(x_6688);
  if (x_6688->has_var_intrinsic_width_external) {
    auto x_6716 = x_6688->var_intrinsic_width_external;
    if (!EqualValue(x_6716, x_6715)) {
      var_modified_x_6717(x_6688);
    }
  }
  x_6688->has_var_intrinsic_width_external = true;
  x_6688->var_intrinsic_width_external = x_6715;
  WriteMetric();
  auto x_6720 = eval_expr_x_6719(x_6688);
  if (x_6688->has_var_intrinsic_current_line_width) {
    auto x_6721 = x_6688->var_intrinsic_current_line_width;
    if (!EqualValue(x_6721, x_6720)) {
      var_modified_x_6722(x_6688);
    }
  }
  x_6688->has_var_intrinsic_current_line_width = true;
  x_6688->var_intrinsic_current_line_width = x_6720;
  WriteMetric();
  auto x_6725 = eval_expr_x_6724(x_6688);
  if (x_6688->has_var_intrinsic_width_max) {
    auto x_6726 = x_6688->var_intrinsic_width_max;
    if (!EqualValue(x_6726, x_6725)) {
      var_modified_x_6727(x_6688);
    }
  }
  x_6688->has_var_intrinsic_width_max = true;
  x_6688->var_intrinsic_width_max = x_6725;
  WriteMetric();
  auto x_6730 = eval_expr_x_6729(x_6688);
  if (x_6688->has_var_intrinsic_width_sum) {
    auto x_6731 = x_6688->var_intrinsic_width_sum;
    if (!EqualValue(x_6731, x_6730)) {
      var_modified_x_6732(x_6688);
    }
  }
  x_6688->has_var_intrinsic_width_sum = true;
  x_6688->var_intrinsic_width_sum = x_6730;
  WriteMetric();
  auto x_6735 = eval_expr_x_6734(x_6688);
  if (x_6688->has_var_children_intrinsic_height) {
    auto x_6736 = x_6688->var_children_intrinsic_height;
    if (!EqualValue(x_6736, x_6735)) {
      var_modified_x_6737(x_6688);
    }
  }
  x_6688->has_var_children_intrinsic_height = true;
  x_6688->var_children_intrinsic_height = x_6735;
  WriteMetric();
  auto x_6740 = eval_expr_x_6739(x_6688);
  if (x_6688->has_var_height_expr) {
    auto x_6741 = x_6688->var_height_expr;
    if (!EqualValue(x_6741, x_6740)) {
      var_modified_x_6742(x_6688);
    }
  }
  x_6688->has_var_height_expr = true;
  x_6688->var_height_expr = x_6740;
  WriteMetric();
  auto x_6745 = eval_expr_x_6744(x_6688);
  if (x_6688->has_var_intrinsic_height_is_height) {
    auto x_6746 = x_6688->var_intrinsic_height_is_height;
    if (!EqualValue(x_6746, x_6745)) {
      var_modified_x_6747(x_6688);
    }
  }
  x_6688->has_var_intrinsic_height_is_height = true;
  x_6688->var_intrinsic_height_is_height = x_6745;
  WriteMetric();
  auto x_6750 = eval_expr_x_6749(x_6688);
  if (x_6688->has_var_intrinsic_height_internal) {
    auto x_6751 = x_6688->var_intrinsic_height_internal;
    if (!EqualValue(x_6751, x_6750)) {
      var_modified_x_6752(x_6688);
    }
  }
  x_6688->has_var_intrinsic_height_internal = true;
  x_6688->var_intrinsic_height_internal = x_6750;
  WriteMetric();
  auto x_6755 = eval_expr_x_6754(x_6688);
  if (x_6688->has_var_intrinsic_height_external) {
    auto x_6756 = x_6688->var_intrinsic_height_external;
    if (!EqualValue(x_6756, x_6755)) {
      var_modified_x_6757(x_6688);
    }
  }
  x_6688->has_var_intrinsic_height_external = true;
  x_6688->var_intrinsic_height_external = x_6755;
  WriteMetric();
  auto x_6760 = eval_expr_x_6759(x_6688);
  if (x_6688->has_var_intrinsic_height_sum) {
    auto x_6761 = x_6688->var_intrinsic_height_sum;
    if (!EqualValue(x_6761, x_6760)) {
      var_modified_x_6762(x_6688);
    }
  }
  x_6688->has_var_intrinsic_height_sum = true;
  x_6688->var_intrinsic_height_sum = x_6760;
  WriteMetric();
  auto x_6765 = eval_expr_x_6764(x_6688);
  if (x_6688->has_var_intrinsic_current_line_height) {
    auto x_6766 = x_6688->var_intrinsic_current_line_height;
    if (!EqualValue(x_6766, x_6765)) {
      var_modified_x_6767(x_6688);
    }
  }
  x_6688->has_var_intrinsic_current_line_height = true;
  x_6688->var_intrinsic_current_line_height = x_6765;
  WriteMetric();
  auto x_6770 = eval_expr_x_6769(x_6688);
  if (x_6688->has_var_finished_intrinsic_height_sum) {
    auto x_6771 = x_6688->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_6771, x_6770)) {
      var_modified_x_6772(x_6688);
    }
  }
  x_6688->has_var_finished_intrinsic_height_sum = true;
  x_6688->var_finished_intrinsic_height_sum = x_6770;
  return MakeUnit();
}
Unit eval_stmts_x_6662(const auto &x_6774) {
  WriteMetric();
  auto x_6776 = eval_expr_x_6775(x_6774);
  if (x_6774->has_var_display) {
    auto x_6777 = x_6774->var_display;
    if (!EqualValue(x_6777, x_6776)) {
      var_modified_x_6778(x_6774);
    }
  }
  x_6774->has_var_display = true;
  x_6774->var_display = x_6776;
  WriteMetric();
  auto x_6781 = eval_expr_x_6780(x_6774);
  if (x_6774->has_var_position) {
    auto x_6782 = x_6774->var_position;
    if (!EqualValue(x_6782, x_6781)) {
      var_modified_x_6783(x_6774);
    }
  }
  x_6774->has_var_position = true;
  x_6774->var_position = x_6781;
  WriteMetric();
  auto x_6786 = eval_expr_x_6785(x_6774);
  if (x_6774->has_var_flex_grow) {
    auto x_6787 = x_6774->var_flex_grow;
    if (!EqualValue(x_6787, x_6786)) {
      var_modified_x_6788(x_6774);
    }
  }
  x_6774->has_var_flex_grow = true;
  x_6774->var_flex_grow = x_6786;
  WriteMetric();
  auto x_6791 = eval_expr_x_6790(x_6774);
  if (x_6774->has_var_flex_shrink) {
    auto x_6792 = x_6774->var_flex_shrink;
    if (!EqualValue(x_6792, x_6791)) {
      var_modified_x_6793(x_6774);
    }
  }
  x_6774->has_var_flex_shrink = true;
  x_6774->var_flex_shrink = x_6791;
  WriteMetric();
  auto x_6796 = eval_expr_x_6795(x_6774);
  if (x_6774->has_var_flex_grow_sum) {
    auto x_6797 = x_6774->var_flex_grow_sum;
    if (!EqualValue(x_6797, x_6796)) {
      var_modified_x_6798(x_6774);
    }
  }
  x_6774->has_var_flex_grow_sum = true;
  x_6774->var_flex_grow_sum = x_6796;
  WriteMetric();
  auto x_6801 = eval_expr_x_6800(x_6774);
  if (x_6774->has_var_flex_shrink_sum) {
    auto x_6802 = x_6774->var_flex_shrink_sum;
    if (!EqualValue(x_6802, x_6801)) {
      var_modified_x_6803(x_6774);
    }
  }
  x_6774->has_var_flex_shrink_sum = true;
  x_6774->var_flex_shrink_sum = x_6801;
  WriteMetric();
  auto x_6806 = eval_expr_x_6805(x_6774);
  if (x_6774->has_var_flex_direction) {
    auto x_6807 = x_6774->var_flex_direction;
    if (!EqualValue(x_6807, x_6806)) {
      var_modified_x_6808(x_6774);
    }
  }
  x_6774->has_var_flex_direction = true;
  x_6774->var_flex_direction = x_6806;
  WriteMetric();
  auto x_6811 = eval_expr_x_6810(x_6774);
  if (x_6774->has_var_is_flex_row) {
    auto x_6812 = x_6774->var_is_flex_row;
    if (!EqualValue(x_6812, x_6811)) {
      var_modified_x_6813(x_6774);
    }
  }
  x_6774->has_var_is_flex_row = true;
  x_6774->var_is_flex_row = x_6811;
  WriteMetric();
  auto x_6816 = eval_expr_x_6815(x_6774);
  if (x_6774->has_var_is_flex_column) {
    auto x_6817 = x_6774->var_is_flex_column;
    if (!EqualValue(x_6817, x_6816)) {
      var_modified_x_6818(x_6774);
    }
  }
  x_6774->has_var_is_flex_column = true;
  x_6774->var_is_flex_column = x_6816;
  WriteMetric();
  auto x_6821 = eval_expr_x_6820(x_6774);
  if (x_6774->has_var_width_attr_expr) {
    auto x_6822 = x_6774->var_width_attr_expr;
    if (!EqualValue(x_6822, x_6821)) {
      var_modified_x_6823(x_6774);
    }
  }
  x_6774->has_var_width_attr_expr = true;
  x_6774->var_width_attr_expr = x_6821;
  WriteMetric();
  auto x_6826 = eval_expr_x_6825(x_6774);
  if (x_6774->has_var_has_width_attr) {
    auto x_6827 = x_6774->var_has_width_attr;
    if (!EqualValue(x_6827, x_6826)) {
      var_modified_x_6828(x_6774);
    }
  }
  x_6774->has_var_has_width_attr = true;
  x_6774->var_has_width_attr = x_6826;
  WriteMetric();
  auto x_6831 = eval_expr_x_6830(x_6774);
  if (x_6774->has_var_height_attr_expr) {
    auto x_6832 = x_6774->var_height_attr_expr;
    if (!EqualValue(x_6832, x_6831)) {
      var_modified_x_6833(x_6774);
    }
  }
  x_6774->has_var_height_attr_expr = true;
  x_6774->var_height_attr_expr = x_6831;
  WriteMetric();
  auto x_6836 = eval_expr_x_6835(x_6774);
  if (x_6774->has_var_has_height_attr) {
    auto x_6837 = x_6774->var_has_height_attr;
    if (!EqualValue(x_6837, x_6836)) {
      var_modified_x_6838(x_6774);
    }
  }
  x_6774->has_var_has_height_attr = true;
  x_6774->var_has_height_attr = x_6836;
  WriteMetric();
  auto x_6841 = eval_expr_x_6840(x_6774);
  if (x_6774->has_var_is_svg_block) {
    auto x_6842 = x_6774->var_is_svg_block;
    if (!EqualValue(x_6842, x_6841)) {
      var_modified_x_6843(x_6774);
    }
  }
  x_6774->has_var_is_svg_block = true;
  x_6774->var_is_svg_block = x_6841;
  WriteMetric();
  auto x_6846 = eval_expr_x_6845(x_6774);
  if (x_6774->has_var_inside_svg) {
    auto x_6847 = x_6774->var_inside_svg;
    if (!EqualValue(x_6847, x_6846)) {
      var_modified_x_6848(x_6774);
    }
  }
  x_6774->has_var_inside_svg = true;
  x_6774->var_inside_svg = x_6846;
  WriteMetric();
  auto x_6851 = eval_expr_x_6850(x_6774);
  if (x_6774->has_var_disabled) {
    auto x_6852 = x_6774->var_disabled;
    if (!EqualValue(x_6852, x_6851)) {
      var_modified_x_6853(x_6774);
    }
  }
  x_6774->has_var_disabled = true;
  x_6774->var_disabled = x_6851;
  WriteMetric();
  auto x_6856 = eval_expr_x_6855(x_6774);
  if (x_6774->has_var_visible) {
    auto x_6857 = x_6774->var_visible;
    if (!EqualValue(x_6857, x_6856)) {
      var_modified_x_6858(x_6774);
    }
  }
  x_6774->has_var_visible = true;
  x_6774->var_visible = x_6856;
  WriteMetric();
  auto x_6861 = eval_expr_x_6860(x_6774);
  if (x_6774->has_var_line_break) {
    auto x_6862 = x_6774->var_line_break;
    if (!EqualValue(x_6862, x_6861)) {
      var_modified_x_6863(x_6774);
    }
  }
  x_6774->has_var_line_break = true;
  x_6774->var_line_break = x_6861;
  return MakeUnit();
}
Unit eval_stmts_x_6659(const auto &x_6865) {
  WriteMetric();
  auto x_6867 = eval_expr_x_6866(x_6865);
  if (x_6865->has_var_box_width) {
    auto x_6868 = x_6865->var_box_width;
    if (!EqualValue(x_6868, x_6867)) {
      var_modified_x_6869(x_6865);
    }
  }
  x_6865->has_var_box_width = true;
  x_6865->var_box_width = x_6867;
  WriteMetric();
  auto x_6872 = eval_expr_x_6871(x_6865);
  if (x_6865->has_var_box_height) {
    auto x_6873 = x_6865->var_box_height;
    if (!EqualValue(x_6873, x_6872)) {
      var_modified_x_6874(x_6865);
    }
  }
  x_6865->has_var_box_height = true;
  x_6865->var_box_height = x_6872;
  WriteMetric();
  auto x_6877 = eval_expr_x_6876(x_6865);
  if (x_6865->has_var_left_over) {
    auto x_6878 = x_6865->var_left_over;
    if (!EqualValue(x_6878, x_6877)) {
      var_modified_x_6879(x_6865);
    }
  }
  x_6865->has_var_left_over = true;
  x_6865->var_left_over = x_6877;
  WriteMetric();
  auto x_6882 = eval_expr_x_6881(x_6865);
  if (x_6865->has_var_flex_amount) {
    auto x_6883 = x_6865->var_flex_amount;
    if (!EqualValue(x_6883, x_6882)) {
      var_modified_x_6884(x_6865);
    }
  }
  x_6865->has_var_flex_amount = true;
  x_6865->var_flex_amount = x_6882;
  WriteMetric();
  auto x_6887 = eval_expr_x_6886(x_6865);
  if (x_6865->has_var_flex_unit) {
    auto x_6888 = x_6865->var_flex_unit;
    if (!EqualValue(x_6888, x_6887)) {
      var_modified_x_6889(x_6865);
    }
  }
  x_6865->has_var_flex_unit = true;
  x_6865->var_flex_unit = x_6887;
  WriteMetric();
  auto x_6892 = eval_expr_x_6891(x_6865);
  if (x_6865->has_var_x) {
    auto x_6893 = x_6865->var_x;
    if (!EqualValue(x_6893, x_6892)) {
      var_modified_x_6894(x_6865);
    }
  }
  x_6865->has_var_x = true;
  x_6865->var_x = x_6892;
  WriteMetric();
  auto x_6897 = eval_expr_x_6896(x_6865);
  if (x_6865->has_var_width_internal) {
    auto x_6898 = x_6865->var_width_internal;
    if (!EqualValue(x_6898, x_6897)) {
      var_modified_x_6899(x_6865);
    }
  }
  x_6865->has_var_width_internal = true;
  x_6865->var_width_internal = x_6897;
  WriteMetric();
  auto x_6902 = eval_expr_x_6901(x_6865);
  if (x_6865->has_var_width_external) {
    auto x_6903 = x_6865->var_width_external;
    if (!EqualValue(x_6903, x_6902)) {
      var_modified_x_6904(x_6865);
    }
  }
  x_6865->has_var_width_external = true;
  x_6865->var_width_external = x_6902;
  WriteMetric();
  auto x_6907 = eval_expr_x_6906(x_6865);
  if (x_6865->has_var_y) {
    auto x_6908 = x_6865->var_y;
    if (!EqualValue(x_6908, x_6907)) {
      var_modified_x_6909(x_6865);
    }
  }
  x_6865->has_var_y = true;
  x_6865->var_y = x_6907;
  WriteMetric();
  auto x_6912 = eval_expr_x_6911(x_6865);
  if (x_6865->has_var_height_internal) {
    auto x_6913 = x_6865->var_height_internal;
    if (!EqualValue(x_6913, x_6912)) {
      var_modified_x_6914(x_6865);
    }
  }
  x_6865->has_var_height_internal = true;
  x_6865->var_height_internal = x_6912;
  WriteMetric();
  auto x_6917 = eval_expr_x_6916(x_6865);
  if (x_6865->has_var_height_external) {
    auto x_6918 = x_6865->var_height_external;
    if (!EqualValue(x_6918, x_6917)) {
      var_modified_x_6919(x_6865);
    }
  }
  x_6865->has_var_height_external = true;
  x_6865->var_height_external = x_6917;
  WriteMetric();
  auto x_6922 = eval_expr_x_6921(x_6865);
  if (x_6865->has_var_line_height) {
    auto x_6923 = x_6865->var_line_height;
    if (!EqualValue(x_6923, x_6922)) {
      var_modified_x_6924(x_6865);
    }
  }
  x_6865->has_var_line_height = true;
  x_6865->var_line_height = x_6922;
  return MakeUnit();
}
Unit eval_stmts_x_6649(const auto &x_6926) {
  WriteMetric();
  auto x_6928 = eval_expr_x_6927(x_6926);
  if (x_6926->has_var_width_expr) {
    auto x_6929 = x_6926->var_width_expr;
    if (!EqualValue(x_6929, x_6928)) {
      var_modified_x_6930(x_6926);
    }
  }
  x_6926->has_var_width_expr = true;
  x_6926->var_width_expr = x_6928;
  WriteMetric();
  auto x_6933 = eval_expr_x_6932(x_6926);
  if (x_6926->has_var_is_default_case) {
    auto x_6934 = x_6926->var_is_default_case;
    if (!EqualValue(x_6934, x_6933)) {
      var_modified_x_6935(x_6926);
    }
  }
  x_6926->has_var_is_default_case = true;
  x_6926->var_is_default_case = x_6933;
  WriteMetric();
  auto x_6938 = eval_expr_x_6937(x_6926);
  if (x_6926->has_var_intrinsic_width_is_width) {
    auto x_6939 = x_6926->var_intrinsic_width_is_width;
    if (!EqualValue(x_6939, x_6938)) {
      var_modified_x_6940(x_6926);
    }
  }
  x_6926->has_var_intrinsic_width_is_width = true;
  x_6926->var_intrinsic_width_is_width = x_6938;
  WriteMetric();
  auto x_6943 = eval_expr_x_6942(x_6926);
  if (x_6926->has_var_children_intrinsic_width) {
    auto x_6944 = x_6926->var_children_intrinsic_width;
    if (!EqualValue(x_6944, x_6943)) {
      var_modified_x_6945(x_6926);
    }
  }
  x_6926->has_var_children_intrinsic_width = true;
  x_6926->var_children_intrinsic_width = x_6943;
  WriteMetric();
  auto x_6948 = eval_expr_x_6947(x_6926);
  if (x_6926->has_var_intrinsic_width_internal) {
    auto x_6949 = x_6926->var_intrinsic_width_internal;
    if (!EqualValue(x_6949, x_6948)) {
      var_modified_x_6950(x_6926);
    }
  }
  x_6926->has_var_intrinsic_width_internal = true;
  x_6926->var_intrinsic_width_internal = x_6948;
  WriteMetric();
  auto x_6953 = eval_expr_x_6952(x_6926);
  if (x_6926->has_var_intrinsic_width_external) {
    auto x_6954 = x_6926->var_intrinsic_width_external;
    if (!EqualValue(x_6954, x_6953)) {
      var_modified_x_6955(x_6926);
    }
  }
  x_6926->has_var_intrinsic_width_external = true;
  x_6926->var_intrinsic_width_external = x_6953;
  WriteMetric();
  auto x_6958 = eval_expr_x_6957(x_6926);
  if (x_6926->has_var_intrinsic_current_line_width) {
    auto x_6959 = x_6926->var_intrinsic_current_line_width;
    if (!EqualValue(x_6959, x_6958)) {
      var_modified_x_6960(x_6926);
    }
  }
  x_6926->has_var_intrinsic_current_line_width = true;
  x_6926->var_intrinsic_current_line_width = x_6958;
  WriteMetric();
  auto x_6963 = eval_expr_x_6962(x_6926);
  if (x_6926->has_var_intrinsic_width_max) {
    auto x_6964 = x_6926->var_intrinsic_width_max;
    if (!EqualValue(x_6964, x_6963)) {
      var_modified_x_6965(x_6926);
    }
  }
  x_6926->has_var_intrinsic_width_max = true;
  x_6926->var_intrinsic_width_max = x_6963;
  WriteMetric();
  auto x_6968 = eval_expr_x_6967(x_6926);
  if (x_6926->has_var_intrinsic_width_sum) {
    auto x_6969 = x_6926->var_intrinsic_width_sum;
    if (!EqualValue(x_6969, x_6968)) {
      var_modified_x_6970(x_6926);
    }
  }
  x_6926->has_var_intrinsic_width_sum = true;
  x_6926->var_intrinsic_width_sum = x_6968;
  WriteMetric();
  auto x_6973 = eval_expr_x_6972(x_6926);
  if (x_6926->has_var_children_intrinsic_height) {
    auto x_6974 = x_6926->var_children_intrinsic_height;
    if (!EqualValue(x_6974, x_6973)) {
      var_modified_x_6975(x_6926);
    }
  }
  x_6926->has_var_children_intrinsic_height = true;
  x_6926->var_children_intrinsic_height = x_6973;
  WriteMetric();
  auto x_6978 = eval_expr_x_6977(x_6926);
  if (x_6926->has_var_height_expr) {
    auto x_6979 = x_6926->var_height_expr;
    if (!EqualValue(x_6979, x_6978)) {
      var_modified_x_6980(x_6926);
    }
  }
  x_6926->has_var_height_expr = true;
  x_6926->var_height_expr = x_6978;
  WriteMetric();
  auto x_6983 = eval_expr_x_6982(x_6926);
  if (x_6926->has_var_intrinsic_height_is_height) {
    auto x_6984 = x_6926->var_intrinsic_height_is_height;
    if (!EqualValue(x_6984, x_6983)) {
      var_modified_x_6985(x_6926);
    }
  }
  x_6926->has_var_intrinsic_height_is_height = true;
  x_6926->var_intrinsic_height_is_height = x_6983;
  WriteMetric();
  auto x_6988 = eval_expr_x_6987(x_6926);
  if (x_6926->has_var_intrinsic_height_internal) {
    auto x_6989 = x_6926->var_intrinsic_height_internal;
    if (!EqualValue(x_6989, x_6988)) {
      var_modified_x_6990(x_6926);
    }
  }
  x_6926->has_var_intrinsic_height_internal = true;
  x_6926->var_intrinsic_height_internal = x_6988;
  WriteMetric();
  auto x_6993 = eval_expr_x_6992(x_6926);
  if (x_6926->has_var_intrinsic_height_external) {
    auto x_6994 = x_6926->var_intrinsic_height_external;
    if (!EqualValue(x_6994, x_6993)) {
      var_modified_x_6995(x_6926);
    }
  }
  x_6926->has_var_intrinsic_height_external = true;
  x_6926->var_intrinsic_height_external = x_6993;
  WriteMetric();
  auto x_6998 = eval_expr_x_6997(x_6926);
  if (x_6926->has_var_intrinsic_height_sum) {
    auto x_6999 = x_6926->var_intrinsic_height_sum;
    if (!EqualValue(x_6999, x_6998)) {
      var_modified_x_7000(x_6926);
    }
  }
  x_6926->has_var_intrinsic_height_sum = true;
  x_6926->var_intrinsic_height_sum = x_6998;
  WriteMetric();
  auto x_7003 = eval_expr_x_7002(x_6926);
  if (x_6926->has_var_intrinsic_current_line_height) {
    auto x_7004 = x_6926->var_intrinsic_current_line_height;
    if (!EqualValue(x_7004, x_7003)) {
      var_modified_x_7005(x_6926);
    }
  }
  x_6926->has_var_intrinsic_current_line_height = true;
  x_6926->var_intrinsic_current_line_height = x_7003;
  WriteMetric();
  auto x_7008 = eval_expr_x_7007(x_6926);
  if (x_6926->has_var_finished_intrinsic_height_sum) {
    auto x_7009 = x_6926->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_7009, x_7008)) {
      var_modified_x_7010(x_6926);
    }
  }
  x_6926->has_var_finished_intrinsic_height_sum = true;
  x_6926->var_finished_intrinsic_height_sum = x_7008;
  return MakeUnit();
}
Unit eval_stmts_x_6647(const auto &x_7012) {
  WriteMetric();
  auto x_7014 = eval_expr_x_7013(x_7012);
  if (x_7012->has_var_display) {
    auto x_7015 = x_7012->var_display;
    if (!EqualValue(x_7015, x_7014)) {
      var_modified_x_7016(x_7012);
    }
  }
  x_7012->has_var_display = true;
  x_7012->var_display = x_7014;
  WriteMetric();
  auto x_7019 = eval_expr_x_7018(x_7012);
  if (x_7012->has_var_position) {
    auto x_7020 = x_7012->var_position;
    if (!EqualValue(x_7020, x_7019)) {
      var_modified_x_7021(x_7012);
    }
  }
  x_7012->has_var_position = true;
  x_7012->var_position = x_7019;
  WriteMetric();
  auto x_7024 = eval_expr_x_7023(x_7012);
  if (x_7012->has_var_flex_grow) {
    auto x_7025 = x_7012->var_flex_grow;
    if (!EqualValue(x_7025, x_7024)) {
      var_modified_x_7026(x_7012);
    }
  }
  x_7012->has_var_flex_grow = true;
  x_7012->var_flex_grow = x_7024;
  WriteMetric();
  auto x_7029 = eval_expr_x_7028(x_7012);
  if (x_7012->has_var_flex_shrink) {
    auto x_7030 = x_7012->var_flex_shrink;
    if (!EqualValue(x_7030, x_7029)) {
      var_modified_x_7031(x_7012);
    }
  }
  x_7012->has_var_flex_shrink = true;
  x_7012->var_flex_shrink = x_7029;
  WriteMetric();
  auto x_7034 = eval_expr_x_7033(x_7012);
  if (x_7012->has_var_flex_grow_sum) {
    auto x_7035 = x_7012->var_flex_grow_sum;
    if (!EqualValue(x_7035, x_7034)) {
      var_modified_x_7036(x_7012);
    }
  }
  x_7012->has_var_flex_grow_sum = true;
  x_7012->var_flex_grow_sum = x_7034;
  WriteMetric();
  auto x_7039 = eval_expr_x_7038(x_7012);
  if (x_7012->has_var_flex_shrink_sum) {
    auto x_7040 = x_7012->var_flex_shrink_sum;
    if (!EqualValue(x_7040, x_7039)) {
      var_modified_x_7041(x_7012);
    }
  }
  x_7012->has_var_flex_shrink_sum = true;
  x_7012->var_flex_shrink_sum = x_7039;
  WriteMetric();
  auto x_7044 = eval_expr_x_7043(x_7012);
  if (x_7012->has_var_flex_direction) {
    auto x_7045 = x_7012->var_flex_direction;
    if (!EqualValue(x_7045, x_7044)) {
      var_modified_x_7046(x_7012);
    }
  }
  x_7012->has_var_flex_direction = true;
  x_7012->var_flex_direction = x_7044;
  WriteMetric();
  auto x_7049 = eval_expr_x_7048(x_7012);
  if (x_7012->has_var_is_flex_row) {
    auto x_7050 = x_7012->var_is_flex_row;
    if (!EqualValue(x_7050, x_7049)) {
      var_modified_x_7051(x_7012);
    }
  }
  x_7012->has_var_is_flex_row = true;
  x_7012->var_is_flex_row = x_7049;
  WriteMetric();
  auto x_7054 = eval_expr_x_7053(x_7012);
  if (x_7012->has_var_is_flex_column) {
    auto x_7055 = x_7012->var_is_flex_column;
    if (!EqualValue(x_7055, x_7054)) {
      var_modified_x_7056(x_7012);
    }
  }
  x_7012->has_var_is_flex_column = true;
  x_7012->var_is_flex_column = x_7054;
  WriteMetric();
  auto x_7059 = eval_expr_x_7058(x_7012);
  if (x_7012->has_var_width_attr_expr) {
    auto x_7060 = x_7012->var_width_attr_expr;
    if (!EqualValue(x_7060, x_7059)) {
      var_modified_x_7061(x_7012);
    }
  }
  x_7012->has_var_width_attr_expr = true;
  x_7012->var_width_attr_expr = x_7059;
  WriteMetric();
  auto x_7064 = eval_expr_x_7063(x_7012);
  if (x_7012->has_var_has_width_attr) {
    auto x_7065 = x_7012->var_has_width_attr;
    if (!EqualValue(x_7065, x_7064)) {
      var_modified_x_7066(x_7012);
    }
  }
  x_7012->has_var_has_width_attr = true;
  x_7012->var_has_width_attr = x_7064;
  WriteMetric();
  auto x_7069 = eval_expr_x_7068(x_7012);
  if (x_7012->has_var_height_attr_expr) {
    auto x_7070 = x_7012->var_height_attr_expr;
    if (!EqualValue(x_7070, x_7069)) {
      var_modified_x_7071(x_7012);
    }
  }
  x_7012->has_var_height_attr_expr = true;
  x_7012->var_height_attr_expr = x_7069;
  WriteMetric();
  auto x_7074 = eval_expr_x_7073(x_7012);
  if (x_7012->has_var_has_height_attr) {
    auto x_7075 = x_7012->var_has_height_attr;
    if (!EqualValue(x_7075, x_7074)) {
      var_modified_x_7076(x_7012);
    }
  }
  x_7012->has_var_has_height_attr = true;
  x_7012->var_has_height_attr = x_7074;
  WriteMetric();
  auto x_7079 = eval_expr_x_7078(x_7012);
  if (x_7012->has_var_is_svg_block) {
    auto x_7080 = x_7012->var_is_svg_block;
    if (!EqualValue(x_7080, x_7079)) {
      var_modified_x_7081(x_7012);
    }
  }
  x_7012->has_var_is_svg_block = true;
  x_7012->var_is_svg_block = x_7079;
  WriteMetric();
  auto x_7084 = eval_expr_x_7083(x_7012);
  if (x_7012->has_var_inside_svg) {
    auto x_7085 = x_7012->var_inside_svg;
    if (!EqualValue(x_7085, x_7084)) {
      var_modified_x_7086(x_7012);
    }
  }
  x_7012->has_var_inside_svg = true;
  x_7012->var_inside_svg = x_7084;
  WriteMetric();
  auto x_7089 = eval_expr_x_7088(x_7012);
  if (x_7012->has_var_disabled) {
    auto x_7090 = x_7012->var_disabled;
    if (!EqualValue(x_7090, x_7089)) {
      var_modified_x_7091(x_7012);
    }
  }
  x_7012->has_var_disabled = true;
  x_7012->var_disabled = x_7089;
  WriteMetric();
  auto x_7094 = eval_expr_x_7093(x_7012);
  if (x_7012->has_var_visible) {
    auto x_7095 = x_7012->var_visible;
    if (!EqualValue(x_7095, x_7094)) {
      var_modified_x_7096(x_7012);
    }
  }
  x_7012->has_var_visible = true;
  x_7012->var_visible = x_7094;
  WriteMetric();
  auto x_7099 = eval_expr_x_7098(x_7012);
  if (x_7012->has_var_line_break) {
    auto x_7100 = x_7012->var_line_break;
    if (!EqualValue(x_7100, x_7099)) {
      var_modified_x_7101(x_7012);
    }
  }
  x_7012->has_var_line_break = true;
  x_7012->var_line_break = x_7099;
  return MakeUnit();
}
Unit eval_stmts_x_6644(const auto &x_7103) {
  WriteMetric();
  auto x_7105 = eval_expr_x_7104(x_7103);
  if (x_7103->has_var_box_width) {
    auto x_7106 = x_7103->var_box_width;
    if (!EqualValue(x_7106, x_7105)) {
      var_modified_x_7107(x_7103);
    }
  }
  x_7103->has_var_box_width = true;
  x_7103->var_box_width = x_7105;
  WriteMetric();
  auto x_7110 = eval_expr_x_7109(x_7103);
  if (x_7103->has_var_box_height) {
    auto x_7111 = x_7103->var_box_height;
    if (!EqualValue(x_7111, x_7110)) {
      var_modified_x_7112(x_7103);
    }
  }
  x_7103->has_var_box_height = true;
  x_7103->var_box_height = x_7110;
  WriteMetric();
  auto x_7115 = eval_expr_x_7114(x_7103);
  if (x_7103->has_var_left_over) {
    auto x_7116 = x_7103->var_left_over;
    if (!EqualValue(x_7116, x_7115)) {
      var_modified_x_7117(x_7103);
    }
  }
  x_7103->has_var_left_over = true;
  x_7103->var_left_over = x_7115;
  WriteMetric();
  auto x_7120 = eval_expr_x_7119(x_7103);
  if (x_7103->has_var_flex_amount) {
    auto x_7121 = x_7103->var_flex_amount;
    if (!EqualValue(x_7121, x_7120)) {
      var_modified_x_7122(x_7103);
    }
  }
  x_7103->has_var_flex_amount = true;
  x_7103->var_flex_amount = x_7120;
  WriteMetric();
  auto x_7125 = eval_expr_x_7124(x_7103);
  if (x_7103->has_var_flex_unit) {
    auto x_7126 = x_7103->var_flex_unit;
    if (!EqualValue(x_7126, x_7125)) {
      var_modified_x_7127(x_7103);
    }
  }
  x_7103->has_var_flex_unit = true;
  x_7103->var_flex_unit = x_7125;
  WriteMetric();
  auto x_7130 = eval_expr_x_7129(x_7103);
  if (x_7103->has_var_x) {
    auto x_7131 = x_7103->var_x;
    if (!EqualValue(x_7131, x_7130)) {
      var_modified_x_7132(x_7103);
    }
  }
  x_7103->has_var_x = true;
  x_7103->var_x = x_7130;
  WriteMetric();
  auto x_7135 = eval_expr_x_7134(x_7103);
  if (x_7103->has_var_width_internal) {
    auto x_7136 = x_7103->var_width_internal;
    if (!EqualValue(x_7136, x_7135)) {
      var_modified_x_7137(x_7103);
    }
  }
  x_7103->has_var_width_internal = true;
  x_7103->var_width_internal = x_7135;
  WriteMetric();
  auto x_7140 = eval_expr_x_7139(x_7103);
  if (x_7103->has_var_width_external) {
    auto x_7141 = x_7103->var_width_external;
    if (!EqualValue(x_7141, x_7140)) {
      var_modified_x_7142(x_7103);
    }
  }
  x_7103->has_var_width_external = true;
  x_7103->var_width_external = x_7140;
  WriteMetric();
  auto x_7145 = eval_expr_x_7144(x_7103);
  if (x_7103->has_var_y) {
    auto x_7146 = x_7103->var_y;
    if (!EqualValue(x_7146, x_7145)) {
      var_modified_x_7147(x_7103);
    }
  }
  x_7103->has_var_y = true;
  x_7103->var_y = x_7145;
  WriteMetric();
  auto x_7150 = eval_expr_x_7149(x_7103);
  if (x_7103->has_var_height_internal) {
    auto x_7151 = x_7103->var_height_internal;
    if (!EqualValue(x_7151, x_7150)) {
      var_modified_x_7152(x_7103);
    }
  }
  x_7103->has_var_height_internal = true;
  x_7103->var_height_internal = x_7150;
  WriteMetric();
  auto x_7155 = eval_expr_x_7154(x_7103);
  if (x_7103->has_var_height_external) {
    auto x_7156 = x_7103->var_height_external;
    if (!EqualValue(x_7156, x_7155)) {
      var_modified_x_7157(x_7103);
    }
  }
  x_7103->has_var_height_external = true;
  x_7103->var_height_external = x_7155;
  WriteMetric();
  auto x_7160 = eval_expr_x_7159(x_7103);
  if (x_7103->has_var_line_height) {
    auto x_7161 = x_7103->var_line_height;
    if (!EqualValue(x_7161, x_7160)) {
      var_modified_x_7162(x_7103);
    }
  }
  x_7103->has_var_line_height = true;
  x_7103->var_line_height = x_7160;
  return MakeUnit();
}
Unit x_6321(const auto &x_6322, const auto &x_6323, const auto &x_6324) {
  auto x_6325 = ListHeadExn(x_6322);
  auto x_6326 = ListTailExn(x_6322);
  if (ListIsEmpty(x_6326)) {
    auto x_6327 = ListSplitN(x_6323->children, x_6325);
    OutputChangeMetric(IntAdd(layout_size_x_6274(ListNthExn(x_6323->children, x_6325)), layout_size_x_6274(x_6324)));
    x_6323->children = ListAppend(Zro(x_6327), Cons(x_6324, ListTailExn(Fst(x_6327))));
    return MakeUnit();
  } else {
    return x_6321(x_6326, ListNthExn(x_6323->children, x_6325), x_6324);
  }
}
Unit replace_layout_node_x_6320(const auto &x_6322, const auto &x_6323, const auto &x_6324) {
  return x_6321(x_6322, x_6323, x_6324);
}
Unit x_6328(const auto &x_6329, const auto &x_6330, const auto &x_6331) {
  auto x_6332 = ListHeadExn(x_6329);
  auto x_6333 = ListTailExn(x_6329);
  if (ListIsEmpty(x_6333)) {
    OutputChangeMetric(layout_size_x_6274(x_6331));
    auto x_6334 = ListSplitN(x_6330->children, x_6332);
    x_6330->children = ListAppend(Zro(x_6334), Cons(x_6331, Fst(x_6334)));
    return MakeUnit();
  } else {
    return x_6328(x_6333, ListNthExn(x_6330->children, x_6332), x_6331);
  }
}
Unit add_layout_node_x_6318(const auto &x_6329, const auto &x_6330, const auto &x_6331) {
  return x_6328(x_6329, x_6330, x_6331);
}
Unit x_6335(const auto &x_6336, const auto &x_6337, const auto &x_6338) {
  auto x_6339 = ListHeadExn(x_6336);
  auto x_6340 = ListTailExn(x_6336);
  if (ListIsEmpty(x_6340)) {
    OutputChangeMetric(layout_size_x_6274(ListNthExn(x_6337->children, x_6339)));
    auto x_6341 = ListSplitN(x_6337->children, x_6339);
    x_6337->children = ListAppend(Zro(x_6341), ListTailExn(Fst(x_6341)));
    return MakeUnit();
  } else {
    return x_6335(x_6340, ListNthExn(x_6337->children, x_6339), x_6338);
  }
}
Unit remove_layout_node_x_6316(const auto &x_6336, const auto &x_6337, const auto &x_6338) {
  return x_6335(x_6336, x_6337, x_6338);
}
Unit x_6342(const auto &x_6343, const auto &x_6344, const auto &x_6345) {
  return ListMatch(
      x_6343,
      [&](const auto &x_6348) {
        auto x_6349 = Zro(x_6345);
        auto x_6350 = Zro(x_6349);
        auto x_6351 = Fst(x_6349);
        auto x_6352 = Fst(x_6345);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9762 = x_6350;
        if (x_9762 == "attributes") {
          std::string x_9763 = x_6351;
          if (x_9763 == "width") {
            WriteMetric();
            HashtblAddExn(x_6344->attr, std::string("width"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6353 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6353, x_6344, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9763 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_6344->attr, std::string("image_height"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6355 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6355, x_6344, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9763 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_6344->attr, std::string("image_width"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6357 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6357, x_6344, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9763 == "height") {
            WriteMetric();
            HashtblAddExn(x_6344->attr, std::string("height"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6359 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6359, x_6344, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9763 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_6344->attr, std::string("viewBox"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6361 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6361, x_6344, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9762 == "properties") {
          std::string x_9764 = x_6351;
          if (x_9764 == "width") {
            WriteMetric();
            HashtblAddExn(x_6344->prop, std::string("width"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6363 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6363, x_6344, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9764 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_6344->prop, std::string("flex-grow"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6365 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6365, x_6344, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9764 == "height") {
            WriteMetric();
            HashtblAddExn(x_6344->prop, std::string("height"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6367 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6367, x_6344, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9764 == "display") {
            WriteMetric();
            HashtblAddExn(x_6344->prop, std::string("display"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6369 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6369, x_6344, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9764 == "position") {
            WriteMetric();
            HashtblAddExn(x_6344->prop, std::string("position"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6371 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6371, x_6344, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9764 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_6344->prop, std::string("flex-shrink"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6373 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6373, x_6344, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9764 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_6344->prop, std::string("flex-direction"), x_6352);
            if (HashtblContain(x_6344->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6375 = HashtblFindExn(x_6344->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6375, x_6344, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6346, const auto &x_6347) {
        return x_6342(x_6347, ListNthExn(x_6344->children, x_6346), x_6345);
      });
}
Unit insert_value_x_6314(const auto &x_6343, const auto &x_6344, const auto &x_6345) {
  return x_6342(x_6343, x_6344, x_6345);
}
Unit x_6377(const auto &x_6378, const auto &x_6379, const auto &x_6380) {
  return ListMatch(
      x_6378,
      [&](const auto &x_6383) {
        auto x_6384 = Zro(x_6380);
        auto x_6385 = Fst(x_6380);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9765 = x_6384;
        if (x_9765 == "attributes") {
          std::string x_9766 = x_6385;
          if (x_9766 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6379->attr, std::string("width"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6386 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6386, x_6379, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9766 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_6379->attr, std::string("image_height"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6388 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6388, x_6379, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9766 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_6379->attr, std::string("image_width"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6390 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6390, x_6379, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9766 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6379->attr, std::string("height"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6392 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6392, x_6379, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9766 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_6379->attr, std::string("viewBox"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6394 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6394, x_6379, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9765 == "properties") {
          std::string x_9767 = x_6385;
          if (x_9767 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6379->prop, std::string("width"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6396 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6396, x_6379, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9767 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_6379->prop, std::string("flex-grow"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6398 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6398, x_6379, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9767 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6379->prop, std::string("height"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6400 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6400, x_6379, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9767 == "display") {
            WriteMetric();
            HashtblForceRemove(x_6379->prop, std::string("display"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6402 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6402, x_6379, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9767 == "position") {
            WriteMetric();
            HashtblForceRemove(x_6379->prop, std::string("position"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6404 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6404, x_6379, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9767 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_6379->prop, std::string("flex-shrink"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6406 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6406, x_6379, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9767 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_6379->prop, std::string("flex-direction"));
            if (HashtblContain(x_6379->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6408 = HashtblFindExn(x_6379->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6408, x_6379, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6381, const auto &x_6382) {
        return x_6377(x_6382, ListNthExn(x_6379->children, x_6381), x_6380);
      });
}
Unit delete_value_x_6312(const auto &x_6378, const auto &x_6379, const auto &x_6380) {
  return x_6377(x_6378, x_6379, x_6380);
}
Unit x_6410(const auto &x_6411, const auto &x_6412, const auto &x_6413) {
  return ListMatch(
      x_6411,
      [&](const auto &x_6416) {
        auto x_6417 = Zro(x_6413);
        auto x_6418 = Zro(x_6417);
        auto x_6419 = Fst(x_6417);
        auto x_6420 = Fst(x_6413);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9768 = x_6418;
        if (x_9768 == "attributes") {
          std::string x_9769 = x_6419;
          if (x_9769 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6412->attr, std::string("width"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6421 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6421, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->attr, std::string("width"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6423 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6423, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9769 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_6412->attr, std::string("image_height"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6425 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6425, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->attr, std::string("image_height"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6427 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6427, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9769 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_6412->attr, std::string("image_width"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6429 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6429, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->attr, std::string("image_width"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6431 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6431, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9769 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6412->attr, std::string("height"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6433 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6433, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->attr, std::string("height"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6435 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6435, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9769 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_6412->attr, std::string("viewBox"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6437 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6437, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->attr, std::string("viewBox"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6439 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6439, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9768 == "properties") {
          std::string x_9770 = x_6419;
          if (x_9770 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6412->prop, std::string("width"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6441 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6441, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->prop, std::string("width"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6443 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6443, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9770 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_6412->prop, std::string("flex-grow"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6445 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6445, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->prop, std::string("flex-grow"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6447 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6447, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9770 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6412->prop, std::string("height"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6449 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6449, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->prop, std::string("height"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6451 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6451, x_6412, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9770 == "display") {
            WriteMetric();
            HashtblForceRemove(x_6412->prop, std::string("display"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6453 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6453, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->prop, std::string("display"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6455 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6455, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9770 == "position") {
            WriteMetric();
            HashtblForceRemove(x_6412->prop, std::string("position"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6457 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6457, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->prop, std::string("position"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6459 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6459, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9770 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_6412->prop, std::string("flex-shrink"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6461 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6461, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->prop, std::string("flex-shrink"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6463 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6463, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9770 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_6412->prop, std::string("flex-direction"));
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6465 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6465, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6412->prop, std::string("flex-direction"), x_6420);
            if (HashtblContain(x_6412->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6467 = HashtblFindExn(x_6412->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6467, x_6412, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6414, const auto &x_6415) {
        return x_6410(x_6415, ListNthExn(x_6412->children, x_6414), x_6413);
      });
}
Unit replace_value_x_6310(const auto &x_6411, const auto &x_6412, const auto &x_6413) {
  return x_6410(x_6411, x_6412, x_6413);
}
Unit x_6469(const auto &x_6470, const auto &x_6471, const auto &x_6472) {
  auto x_6473 = ListHeadExn(x_6470);
  auto x_6474 = ListTailExn(x_6470);
  if (ListIsEmpty(x_6474)) {
    InputChangeMetric(IntAdd(node_size_x_6275(ListNthExn(x_6471->children, x_6473)), node_size_x_6275(x_6472)));
    auto x_6475 = ListSplitN(x_6471->children, x_6473);
    auto x_6476 = Zro(x_6475);
    auto x_6477 = Fst(x_6475);
    auto x_6478 = ListHeadExn(x_6477);
    auto x_6479 = ListTailExn(x_6477);
    OptionMatch(
        x_6478->prev, [&](const auto &x_6481) { return MakeUnit(); },
        [&](const auto &x_6480) {
          x_6480->next = ToPath(x_6478->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6478->next, [&](const auto &x_6483) { return MakeUnit(); },
        [&](const auto &x_6482) {
          x_6482->prev = ToPath(x_6478->prev);
          return MakeUnit();
        });
    x_6478->meta->alive = false;
    x_6471->children = ListAppend(x_6476, x_6479);
    if (ListIsEmpty(x_6476)) {
      x_6471->first = ToPath(ListHead(x_6479));
    }
    if (ListIsEmpty(x_6479)) {
      x_6471->last = ToPath(ListLast(x_6476));
    }
    OptionMatch(
        x_6478->next, [&](const auto &x_6487) { return MakeUnit(); },
        [&](const auto &x_6484) {
          if (HashtblContain(x_6484->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6485 = HashtblFindExn(x_6484->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6485, x_6484, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6471->children)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6488 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6488, x_6471, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6479)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6490 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6490, x_6471, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6478->next, [&](const auto &x_6495) { return MakeUnit(); },
        [&](const auto &x_6492) {
          if (HashtblContain(x_6492->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6493 = HashtblFindExn(x_6492->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6493, x_6492, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6471->children)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6496 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6496, x_6471, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6479)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6498 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6498, x_6471, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6478->next, [&](const auto &x_6503) { return MakeUnit(); },
        [&](const auto &x_6500) {
          if (HashtblContain(x_6500->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6501 = HashtblFindExn(x_6500->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6501, x_6500, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_6504 = ListSplitN(x_6471->children, x_6473);
    auto x_6505 = Zro(x_6504);
    auto x_6506 = Fst(x_6504);
    x_6471->children = ListAppend(x_6505, Cons(x_6472, x_6506));
    if (ListIsEmpty(x_6505)) {
      x_6471->first = x_6472.get();
    }
    if (ListIsEmpty(x_6506)) {
      x_6471->last = x_6472.get();
    }
    OptionMatch(
        ListLast(x_6505),
        [&](const auto &x_6508) {
          x_6472->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6507) {
          x_6472->prev = x_6507.get();
          x_6507->next = x_6472.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6506),
        [&](const auto &x_6510) {
          x_6472->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6509) {
          x_6472->next = x_6509.get();
          x_6509->prev = x_6472.get();
          return MakeUnit();
        });
    x_6472->parent = x_6471.get();
    auto x_6511 = (x_6472->parent);
    if (HashtblContain(x_6511->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_6514 = OptionMatch(
          x_6472->prev,
          [&](const auto &x_6513) {
            return NextTotalOrder(HashtblFindExn(x_6511->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_6512) {
            return NextTotalOrder(HashtblFindExn(x_6512->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_6472->meta->ProcTimeTable, std::string("pass_0"), x_6514);
      MetaWriteMetric();
      QueueForcePush(x_6514, x_6472, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_6472->next, [&](const auto &x_6519) { return MakeUnit(); },
        [&](const auto &x_6516) {
          if (HashtblContain(x_6516->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6517 = HashtblFindExn(x_6516->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6517, x_6516, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_6471->children)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6520 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6520, x_6471, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6506)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6522 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6522, x_6471, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6472->next, [&](const auto &x_6527) { return MakeUnit(); },
        [&](const auto &x_6524) {
          if (HashtblContain(x_6524->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6525 = HashtblFindExn(x_6524->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6525, x_6524, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_6528 = (x_6472->parent);
    if (HashtblContain(x_6528->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_6531 = OptionMatch(
          x_6472->prev,
          [&](const auto &x_6530) {
            return NextTotalOrder(HashtblFindExn(x_6528->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_6529) {
            return NextTotalOrder(HashtblFindExn(x_6529->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_6472->meta->ProcTimeTable, std::string("pass_1"), x_6531);
      MetaWriteMetric();
      QueueForcePush(x_6531, x_6472, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_6471->children)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6533 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6533, x_6471, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6506)) {
      if (HashtblContain(x_6471->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6535 = HashtblFindExn(x_6471->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6535, x_6471, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6472->next, [&](const auto &x_6540) { return MakeUnit(); },
        [&](const auto &x_6537) {
          if (HashtblContain(x_6537->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6538 = HashtblFindExn(x_6537->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6538, x_6537, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_6469(x_6474, ListNthExn(x_6471->children, x_6473), x_6472);
  }
}
Unit replace_node_x_6308(const auto &x_6470, const auto &x_6471, const auto &x_6472) {
  return x_6469(x_6470, x_6471, x_6472);
}
Unit x_6541(const auto &x_6542) {
  ListIter2(x_6542->children, [&](const auto &x_6543, const auto &x_6544) {
    x_6543->parent = x_6542.get();
    x_6544->parent = x_6542.get();
    x_6543->next = x_6544.get();
    x_6544->prev = x_6543.get();
    x_6541(x_6543);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6542->children),
      [&](const auto &x_6546) {
        x_6542->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6545) {
        x_6542->first = x_6545.get();
        x_6545->parent = x_6542.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6542->children),
      [&](const auto &x_6548) {
        x_6542->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6547) {
        x_6542->last = x_6547.get();
        x_6547->parent = x_6542.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6306(const auto &x_6542) { return x_6541(x_6542); }
Unit x_6549(const auto &x_6550, const auto &x_6551, const auto &x_6552) {
  auto x_6553 = ListHeadExn(x_6550);
  auto x_6554 = ListTailExn(x_6550);
  if (ListIsEmpty(x_6554)) {
    InputChangeMetric(node_size_x_6275(ListNthExn(x_6551->children, x_6553)));
    auto x_6555 = ListSplitN(x_6551->children, x_6553);
    auto x_6556 = Zro(x_6555);
    auto x_6557 = Fst(x_6555);
    auto x_6558 = ListHeadExn(x_6557);
    auto x_6559 = ListTailExn(x_6557);
    OptionMatch(
        x_6558->prev, [&](const auto &x_6561) { return MakeUnit(); },
        [&](const auto &x_6560) {
          x_6560->next = ToPath(x_6558->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6558->next, [&](const auto &x_6563) { return MakeUnit(); },
        [&](const auto &x_6562) {
          x_6562->prev = ToPath(x_6558->prev);
          return MakeUnit();
        });
    x_6558->meta->alive = false;
    x_6551->children = ListAppend(x_6556, x_6559);
    if (ListIsEmpty(x_6556)) {
      x_6551->first = ToPath(ListHead(x_6559));
    }
    if (ListIsEmpty(x_6559)) {
      x_6551->last = ToPath(ListLast(x_6556));
    }
    OptionMatch(
        x_6558->next, [&](const auto &x_6567) { return MakeUnit(); },
        [&](const auto &x_6564) {
          if (HashtblContain(x_6564->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6565 = HashtblFindExn(x_6564->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6565, x_6564, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6551->children)) {
      if (HashtblContain(x_6551->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6568 = HashtblFindExn(x_6551->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6568, x_6551, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6559)) {
      if (HashtblContain(x_6551->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6570 = HashtblFindExn(x_6551->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6570, x_6551, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6558->next, [&](const auto &x_6575) { return MakeUnit(); },
        [&](const auto &x_6572) {
          if (HashtblContain(x_6572->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6573 = HashtblFindExn(x_6572->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6573, x_6572, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6551->children)) {
      if (HashtblContain(x_6551->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6576 = HashtblFindExn(x_6551->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6576, x_6551, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6559)) {
      if (HashtblContain(x_6551->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6578 = HashtblFindExn(x_6551->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6578, x_6551, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6558->next, [&](const auto &x_6583) { return MakeUnit(); },
        [&](const auto &x_6580) {
          if (HashtblContain(x_6580->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6581 = HashtblFindExn(x_6580->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6581, x_6580, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_6549(x_6554, ListNthExn(x_6551->children, x_6553), x_6552);
  }
}
Unit remove_node_x_6304(const auto &x_6550, const auto &x_6551, const auto &x_6552) {
  return x_6549(x_6550, x_6551, x_6552);
}
Unit x_6584(const auto &x_6585) {
  ListIter2(x_6585->children, [&](const auto &x_6586, const auto &x_6587) {
    x_6586->parent = x_6585.get();
    x_6587->parent = x_6585.get();
    x_6586->next = x_6587.get();
    x_6587->prev = x_6586.get();
    x_6584(x_6586);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6585->children),
      [&](const auto &x_6589) {
        x_6585->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6588) {
        x_6585->first = x_6588.get();
        x_6588->parent = x_6585.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6585->children),
      [&](const auto &x_6591) {
        x_6585->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6590) {
        x_6585->last = x_6590.get();
        x_6590->parent = x_6585.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6301(const auto &x_6585) { return x_6584(x_6585); }
Unit x_6592(const auto &x_6593, const auto &x_6594, const auto &x_6595) {
  auto x_6596 = ListHeadExn(x_6593);
  auto x_6597 = ListTailExn(x_6593);
  if (ListIsEmpty(x_6597)) {
    InputChangeMetric(node_size_x_6275(x_6595));
    auto x_6598 = ListSplitN(x_6594->children, x_6596);
    auto x_6599 = Zro(x_6598);
    auto x_6600 = Fst(x_6598);
    x_6594->children = ListAppend(x_6599, Cons(x_6595, x_6600));
    if (ListIsEmpty(x_6599)) {
      x_6594->first = x_6595.get();
    }
    if (ListIsEmpty(x_6600)) {
      x_6594->last = x_6595.get();
    }
    OptionMatch(
        ListLast(x_6599),
        [&](const auto &x_6602) {
          x_6595->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6601) {
          x_6595->prev = x_6601.get();
          x_6601->next = x_6595.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6600),
        [&](const auto &x_6604) {
          x_6595->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6603) {
          x_6595->next = x_6603.get();
          x_6603->prev = x_6595.get();
          return MakeUnit();
        });
    x_6595->parent = x_6594.get();
    auto x_6605 = (x_6595->parent);
    if (HashtblContain(x_6605->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_6608 = OptionMatch(
          x_6595->prev,
          [&](const auto &x_6607) {
            return NextTotalOrder(HashtblFindExn(x_6605->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_6606) {
            return NextTotalOrder(HashtblFindExn(x_6606->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_6595->meta->ProcTimeTable, std::string("pass_0"), x_6608);
      MetaWriteMetric();
      QueueForcePush(x_6608, x_6595, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_6595->next, [&](const auto &x_6613) { return MakeUnit(); },
        [&](const auto &x_6610) {
          if (HashtblContain(x_6610->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6611 = HashtblFindExn(x_6610->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6611, x_6610, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_6594->children)) {
      if (HashtblContain(x_6594->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6614 = HashtblFindExn(x_6594->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6614, x_6594, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6600)) {
      if (HashtblContain(x_6594->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6616 = HashtblFindExn(x_6594->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6616, x_6594, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6595->next, [&](const auto &x_6621) { return MakeUnit(); },
        [&](const auto &x_6618) {
          if (HashtblContain(x_6618->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6619 = HashtblFindExn(x_6618->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6619, x_6618, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_6622 = (x_6595->parent);
    if (HashtblContain(x_6622->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_6625 = OptionMatch(
          x_6595->prev,
          [&](const auto &x_6624) {
            return NextTotalOrder(HashtblFindExn(x_6622->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_6623) {
            return NextTotalOrder(HashtblFindExn(x_6623->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_6595->meta->ProcTimeTable, std::string("pass_1"), x_6625);
      MetaWriteMetric();
      QueueForcePush(x_6625, x_6595, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_6594->children)) {
      if (HashtblContain(x_6594->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6627 = HashtblFindExn(x_6594->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6627, x_6594, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6600)) {
      if (HashtblContain(x_6594->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6629 = HashtblFindExn(x_6594->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6629, x_6594, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6595->next, [&](const auto &x_6634) { return MakeUnit(); },
        [&](const auto &x_6631) {
          if (HashtblContain(x_6631->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6632 = HashtblFindExn(x_6631->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6632, x_6631, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_6592(x_6597, ListNthExn(x_6594->children, x_6596), x_6595);
  }
}
Unit add_node_x_6299(const auto &x_6593, const auto &x_6594, const auto &x_6595) {
  return x_6592(x_6593, x_6594, x_6595);
}
Unit x_6635(const auto &x_6636) {
  ListIter2(x_6636->children, [&](const auto &x_6637, const auto &x_6638) {
    x_6637->parent = x_6636.get();
    x_6638->parent = x_6636.get();
    x_6637->next = x_6638.get();
    x_6638->prev = x_6637.get();
    x_6635(x_6637);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6636->children),
      [&](const auto &x_6640) {
        x_6636->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6639) {
        x_6636->first = x_6639.get();
        x_6639->parent = x_6636.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6636->children),
      [&](const auto &x_6642) {
        x_6636->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6641) {
        x_6636->last = x_6641.get();
        x_6641->parent = x_6636.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6297(const auto &x_6636) { return x_6635(x_6636); }
Unit eval_stmts_x_6293(const auto &x_6643) {
  eval_stmts_x_6644(x_6643);
  ListIter(x_6643->children, [&](const auto &x_6645) { return eval_stmts_x_6293(x_6645); });
  return MakeUnit();
}
Unit eval_stmts_x_6292(const auto &x_6646) {
  eval_stmts_x_6647(x_6646);
  ListIter(x_6646->children, [&](const auto &x_6648) { return eval_stmts_x_6292(x_6648); });
  eval_stmts_x_6649(x_6646);
  return MakeUnit();
}
Unit x_6650(const auto &x_6651) {
  ListIter2(x_6651->children, [&](const auto &x_6652, const auto &x_6653) {
    x_6652->parent = x_6651.get();
    x_6653->parent = x_6651.get();
    x_6652->next = x_6653.get();
    x_6653->prev = x_6652.get();
    x_6650(x_6652);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6651->children),
      [&](const auto &x_6655) {
        x_6651->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6654) {
        x_6651->first = x_6654.get();
        x_6654->parent = x_6651.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6651->children),
      [&](const auto &x_6657) {
        x_6651->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6656) {
        x_6651->last = x_6656.get();
        x_6656->parent = x_6651.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6290(const auto &x_6651) { return x_6650(x_6651); }
Unit eval_stmts_x_6288(const auto &x_6658) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6658->meta->BBTimeTable, std::string("bb_2"), ReadRef(current_time));
  eval_stmts_x_6659(x_6658);
  ListIter(x_6658->children, [&](const auto &x_6660) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_6288(x_6660);
    return HashtblAddExn(x_6660->meta->ProcTimeTable, std::string("pass_1"), ReadRef(current_time));
  });
  return MakeUnit();
}
Unit eval_stmts_x_6287(const auto &x_6661) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6661->meta->BBTimeTable, std::string("bb_1"), ReadRef(current_time));
  eval_stmts_x_6662(x_6661);
  ListIter(x_6661->children, [&](const auto &x_6663) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_6287(x_6663);
    return HashtblAddExn(x_6663->meta->ProcTimeTable, std::string("pass_0"), ReadRef(current_time));
  });
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6661->meta->BBTimeTable, std::string("bb_0"), ReadRef(current_time));
  eval_stmts_x_6664(x_6661);
  return MakeUnit();
}
Unit x_6665(const auto &x_6666) {
  ListIter2(x_6666->children, [&](const auto &x_6667, const auto &x_6668) {
    x_6667->parent = x_6666.get();
    x_6668->parent = x_6666.get();
    x_6667->next = x_6668.get();
    x_6668->prev = x_6667.get();
    x_6665(x_6667);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6666->children),
      [&](const auto &x_6670) {
        x_6666->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6669) {
        x_6666->first = x_6669.get();
        x_6669->parent = x_6666.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6666->children),
      [&](const auto &x_6672) {
        x_6666->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6671) {
        x_6666->last = x_6671.get();
        x_6671->parent = x_6666.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6284(const auto &x_6666) { return x_6665(x_6666); }
int64_t x_6673(const auto &x_6674) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6674->children, [&](const auto &x_6675) { return x_6673(x_6675); }));
}
int64_t node_size_x_6275(const auto &x_6674) { return x_6673(x_6674); }
int64_t x_6676(const auto &x_6677) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6677->children, [&](const auto &x_6678) { return x_6676(x_6678); }));
}
int64_t layout_size_x_6274(const auto &x_6677) { return x_6676(x_6677); }
LayoutNode x_6679(const auto &x_6680) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_6680)),
                                [&](const auto &x_6681) { return x_6679(x_6681); }));
}
LayoutNode json_to_layout_node_x_6273(const auto &x_6680) { return x_6679(x_6680); }
Node x_6682(const auto &x_6683) {
  return MakeNode(x_6683->name, x_6683->attr, x_6683->prop, x_6683->extern_id,
                  ListMap(x_6683->children, [&](const auto &x_6684) { return x_6682(x_6684); }));
}
Node node_to_fs_node_x_6272(const auto &x_6683) { return x_6682(x_6683); }
Node x_6685(const auto &x_6686) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_6686)), JsonToDict(JsonMember(std::string("attributes"), x_6686)),
      JsonToDict(JsonMember(std::string("properties"), x_6686)), JsonToInt(JsonMember(std::string("id"), x_6686)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_6686)),
              [&](const auto &x_6687) { return x_6685(x_6687); }));
}
Node json_to_node_aux_x_6271(const auto &x_6686) { return x_6685(x_6686); }
Unit var_modified_x_3806(const auto &x_3816) {
  auto x_9771 = [&](const auto &x_3819) {
    if (HashtblContain(x_3819->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3819->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3819);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_3816->next, [&](const auto &x_3818) { return MakeUnit(); },
      [&](const auto &x_3817) {
        auto x_9772 = x_9771;
        x_9772(x_3817);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3803(const auto &x_3820) {
  if ((x_3820->prev != nullptr) && (!(x_3820->prev)->var_line_break)) {
    return max(x_3820->var_height_external, (x_3820->prev)->var_line_height);
  } else {
    return x_3820->var_height_external;
  }
}
Unit var_modified_x_3801(const auto &x_3837) {
  auto x_9773 = [&](const auto &x_3838) {
    if (HashtblContain(x_3838->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3838->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3838);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9773(x_3837);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3798(const auto &x_3839) {
  if (eq(x_3839->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_3839->var_height_internal;
  }
}
Unit var_modified_x_3796(const auto &x_3848) {
  auto x_9774 = [&](const auto &x_3849) {
    if (HashtblContain(x_3849->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3849->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3849);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9774(x_3848);
  MakeUnit();
  ListIter(x_3848->children, [&](const auto &x_3850) {
    if (HashtblContain(x_3850->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3850->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3850);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3793(const auto &x_3851) {
  if (x_3851->var_intrinsic_height_is_height) {
    return x_3851->var_intrinsic_height_internal;
  } else {
    if ((x_3851->parent != nullptr) && (x_3851->parent)->var_is_flex_column) {
      return plus(x_3851->var_intrinsic_height_internal,
                  mult(x_3851->var_flex_amount, (x_3851->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_3851->var_height_expr, std::string("%"))) {
        return mult(x_3851->var_box_height,
                    divide(string_to_float(strip_suffix(x_3851->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_3851->var_box_height, x_3851->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_3791(const auto &x_3904) {
  ListIter(x_3904->children, [&](const auto &x_3905) {
    if (HashtblContain(x_3905->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3905->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3905);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_9775 = [&](const auto &x_3908) {
    if (HashtblContain(x_3908->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3908->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3908);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_3904->next, [&](const auto &x_3907) { return MakeUnit(); },
      [&](const auto &x_3906) {
        auto x_9776 = x_9775;
        x_9776(x_3906);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3788(const auto &x_3909) {
  if (x_3909->prev != nullptr) {
    if (x_3909->var_line_break || (x_3909->prev)->var_line_break) {
      return plus((x_3909->prev)->var_y, (x_3909->prev)->var_line_height);
    } else {
      return (x_3909->prev)->var_y;
    }
  } else {
    if (x_3909->parent != nullptr) {
      return (x_3909->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3786(const auto &x_3934) {
  auto x_9777 = [&](const auto &x_3937) {
    if (HashtblContain(x_3937->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3937->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3937);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_3934->next, [&](const auto &x_3936) { return MakeUnit(); },
      [&](const auto &x_3935) {
        auto x_9778 = x_9777;
        x_9778(x_3935);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3783(const auto &x_3938) {
  if (eq(x_3938->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_3938->var_width_internal;
  }
}
Unit var_modified_x_3781(const auto &x_3947) {
  auto x_9779 = [&](const auto &x_3948) {
    if (HashtblContain(x_3948->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3948->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3948);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9779(x_3947);
  MakeUnit();
  ListIter(x_3947->children, [&](const auto &x_3949) {
    if (HashtblContain(x_3949->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3949->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3949);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3778(const auto &x_3950) {
  if (x_3950->var_intrinsic_width_is_width) {
    return x_3950->var_intrinsic_width_internal;
  } else {
    if ((x_3950->parent != nullptr) && (x_3950->parent)->var_is_flex_row) {
      return plus(x_3950->var_intrinsic_width_internal, mult(x_3950->var_flex_amount, (x_3950->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_3950->var_width_expr, std::string("%"))) {
        return mult(x_3950->var_box_width,
                    divide(string_to_float(strip_suffix(x_3950->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_3950->var_box_width, x_3950->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_3776(const auto &x_4003) {
  ListIter(x_4003->children, [&](const auto &x_4004) {
    if (HashtblContain(x_4004->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4004->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4004);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_9780 = [&](const auto &x_4007) {
    if (HashtblContain(x_4007->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4007->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4007);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4003->next, [&](const auto &x_4006) { return MakeUnit(); },
      [&](const auto &x_4005) {
        auto x_9781 = x_9780;
        x_9781(x_4005);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3773(const auto &x_4008) {
  if (x_4008->prev != nullptr) {
    if (x_4008->var_line_break || (x_4008->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_4008->prev)->var_x, (x_4008->prev)->var_width_external);
    }
  } else {
    if (x_4008->parent != nullptr) {
      return (x_4008->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3771(const auto &x_4029) {
  ListIter(x_4029->children, [&](const auto &x_4030) {
    if (HashtblContain(x_4030->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4030->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4030);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3768(const auto &x_4031) {
  if (gt(x_4031->var_left_over, 0.)) {
    return divide(x_4031->var_left_over, x_4031->var_flex_grow_sum);
  } else {
    return divide(x_4031->var_left_over, x_4031->var_flex_shrink_sum);
  }
}
Unit var_modified_x_3766(const auto &x_4052) {
  auto x_9782 = [&](const auto &x_4053) {
    if (HashtblContain(x_4053->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4053->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4053);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9782(x_4052);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3763(const auto &x_4054) {
  if ((x_4054->parent != nullptr) && gt((x_4054->parent)->var_left_over, 0.)) {
    return x_4054->var_flex_grow;
  } else {
    return x_4054->var_flex_shrink;
  }
}
Unit var_modified_x_3761(const auto &x_4067) {
  auto x_9783 = [&](const auto &x_4068) {
    if (HashtblContain(x_4068->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4068->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4068);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9783(x_4067);
  MakeUnit();
  ListIter(x_4067->children, [&](const auto &x_4069) {
    if (HashtblContain(x_4069->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4069->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4069);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3758(const auto &x_4070) {
  if (x_4070->var_is_flex_row) {
    return minus(x_4070->var_box_width, (x_4070->last != nullptr) ? ((x_4070->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_4070->var_box_height, (x_4070->last != nullptr) ? ((x_4070->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_3756(const auto &x_4091) {
  auto x_9784 = [&](const auto &x_4092) {
    if (HashtblContain(x_4092->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4092->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4092);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9784(x_4091);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3753(const auto &x_4093) {
  if (x_4093->parent != nullptr) {
    return (x_4093->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_3751(const auto &x_4098) {
  auto x_9785 = [&](const auto &x_4099) {
    if (HashtblContain(x_4099->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4099->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4099);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9785(x_4098);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3748(const auto &x_4100) {
  if (x_4100->parent != nullptr) {
    return (x_4100->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_3745(const auto &x_4105) {
  auto x_9786 = [&](const auto &x_4106) {
    if (HashtblContain(x_4106->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4106->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4106);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9786(x_4105);
  MakeUnit();
  auto x_9787 = [&](const auto &x_4109) {
    if (HashtblContain(x_4109->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4109->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4109);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4105->next, [&](const auto &x_4108) { return MakeUnit(); },
      [&](const auto &x_4107) {
        auto x_9790 = x_9787;
        x_9790(x_4107);
        return MakeUnit();
      });
  auto x_9788 = [&](const auto &x_4110) {
    if (HashtblContain(x_4110->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4110->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4110);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9788(x_4105);
  MakeUnit();
  auto x_9789 = [&](const auto &x_4113) {
    if (HashtblContain(x_4113->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4113->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4113);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4105->next, [&](const auto &x_4112) { return MakeUnit(); },
      [&](const auto &x_4111) {
        auto x_9791 = x_9789;
        x_9791(x_4111);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3742(const auto &x_4114) {
  if (eq(x_4114->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_4114->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_4114->parent != nullptr) &&
          (eq((x_4114->parent)->var_display, std::string("flex")) ||
           eq((x_4114->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_4114->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_4114->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_4114->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_4114->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_4114, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_4114, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4114->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_4114->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_4114->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_4114->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_4114->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_4114->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_4114->var_display, std::string("list-item"))) {
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
Unit var_modified_x_3740(const auto &x_4191) {
  ListIter(x_4191->children, [&](const auto &x_4192) {
    if (HashtblContain(x_4192->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4192->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4192);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3737(const auto &x_4193) {
  return (((!(x_4193->parent != nullptr)) || (x_4193->parent)->var_visible) &&
          (neq(x_4193->var_display, std::string("none")) && ((!x_4193->var_inside_svg) && (!x_4193->var_disabled))));
}
Unit var_modified_x_3735(const auto &x_4210) {
  auto x_9792 = [&](const auto &x_4211) {
    if (HashtblContain(x_4211->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4211->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4211);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9792(x_4210);
  MakeUnit();
  ListIter(x_4210->children, [&](const auto &x_4212) {
    if (HashtblContain(x_4212->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4212->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4212);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_9793 = [&](const auto &x_4213) {
    if (HashtblContain(x_4213->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4213->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4213);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9793(x_4210);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3732(const auto &x_4214) {
  if (eq(x_4214->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_4214->parent != nullptr) && (x_4214->parent)->var_disabled);
  }
}
Unit var_modified_x_3730(const auto &x_4219) {
  auto x_9794 = [&](const auto &x_4220) {
    if (HashtblContain(x_4220->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4220->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4220);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9794(x_4219);
  MakeUnit();
  ListIter(x_4219->children, [&](const auto &x_4221) {
    if (HashtblContain(x_4221->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4221->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4221);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_9795 = [&](const auto &x_4222) {
    if (HashtblContain(x_4222->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4222->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4222);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9795(x_4219);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3727(const auto &x_4223) {
  return ((x_4223->parent != nullptr) && ((x_4223->parent)->var_is_svg_block || (x_4223->parent)->var_inside_svg));
}
Unit var_modified_x_3725(const auto &x_4232) {
  ListIter(x_4232->children, [&](const auto &x_4233) {
    if (HashtblContain(x_4233->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4233->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4233);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3722(const auto &x_4234) { return eq(x_4234->name, std::string("svg")); }
Unit var_modified_x_3720(const auto &x_4235) {
  auto x_9796 = [&](const auto &x_4236) {
    if (HashtblContain(x_4236->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4236->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4236);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9796(x_4235);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3717(const auto &x_4237) { return neq(x_4237->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_3715(const auto &x_4242) {
  auto x_9797 = [&](const auto &x_4243) {
    if (HashtblContain(x_4243->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4243->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4243);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9797(x_4242);
  MakeUnit();
  auto x_9798 = [&](const auto &x_4244) {
    if (HashtblContain(x_4244->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4244->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4244);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9798(x_4242);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3712(const auto &x_4245) {
  if (!HasAttr(x_4245, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_4245, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_4245, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_4245, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_3710(const auto &x_4256) {
  auto x_9799 = [&](const auto &x_4257) {
    if (HashtblContain(x_4257->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4257->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4257);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9799(x_4256);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3707(const auto &x_4258) { return neq(x_4258->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_3705(const auto &x_4263) {
  auto x_9800 = [&](const auto &x_4264) {
    if (HashtblContain(x_4264->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4264->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4264);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9800(x_4263);
  MakeUnit();
  auto x_9801 = [&](const auto &x_4265) {
    if (HashtblContain(x_4265->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4265->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4265);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9801(x_4263);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3702(const auto &x_4266) {
  if (!HasAttr(x_4266, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_4266, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_4266, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_4266, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_3700(const auto &x_4277) {
  ListIter(x_4277->children, [&](const auto &x_4278) {
    if (HashtblContain(x_4278->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4278->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4278);
    } else {
      return MetaWriteMetric();
    }
  });
  ListIter(x_4277->children, [&](const auto &x_4279) {
    if (HashtblContain(x_4279->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4279->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4279);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3697(const auto &x_4280) {
  if ((x_4280->parent != nullptr) &&
      (eq((x_4280->parent)->var_display, std::string("flex")) ||
       eq((x_4280->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_4280->parent)->var_flex_direction, std::string("column")) ||
        eq((x_4280->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3695(const auto &x_4305) {
  ListIter(x_4305->children, [&](const auto &x_4306) {
    if (HashtblContain(x_4306->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4306->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4306);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_9802 = [&](const auto &x_4307) {
    if (HashtblContain(x_4307->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4307->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4307);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9802(x_4305);
  MakeUnit();
  ListIter(x_4305->children, [&](const auto &x_4308) {
    if (HashtblContain(x_4308->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4308->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4308);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3692(const auto &x_4309) {
  if ((x_4309->parent != nullptr) &&
      (eq((x_4309->parent)->var_display, std::string("flex")) ||
       eq((x_4309->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_4309->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3690(const auto &x_4334) {
  ListIter(x_4334->children, [&](const auto &x_4335) {
    if (HashtblContain(x_4335->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4335->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4335);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3687(const auto &x_4336) {
  if (HasProp(x_4336, std::string("flex-direction"))) {
    return GetProp<std::string>(x_4336, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_3685(const auto &x_4339) {
  auto x_9803 = [&](const auto &x_4342) {
    if (HashtblContain(x_4342->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4342->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4342);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4339->next, [&](const auto &x_4341) { return MakeUnit(); },
      [&](const auto &x_4340) {
        auto x_9805 = x_9803;
        x_9805(x_4340);
        return MakeUnit();
      });
  auto x_9804 = [&](const auto &x_4343) {
    if (HashtblContain(x_4343->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4343->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4343);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9804(x_4339);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3682(const auto &x_4344) {
  return plus((x_4344->prev != nullptr) ? ((x_4344->prev)->var_flex_shrink_sum) : (0.), x_4344->var_flex_shrink);
}
Unit var_modified_x_3680(const auto &x_4353) {
  auto x_9806 = [&](const auto &x_4356) {
    if (HashtblContain(x_4356->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4356->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4356);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4353->next, [&](const auto &x_4355) { return MakeUnit(); },
      [&](const auto &x_4354) {
        auto x_9808 = x_9806;
        x_9808(x_4354);
        return MakeUnit();
      });
  auto x_9807 = [&](const auto &x_4357) {
    if (HashtblContain(x_4357->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4357->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4357);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9807(x_4353);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3677(const auto &x_4358) {
  return plus((x_4358->prev != nullptr) ? ((x_4358->prev)->var_flex_grow_sum) : (0.), x_4358->var_flex_grow);
}
Unit var_modified_x_3675(const auto &x_4367) {
  auto x_9809 = [&](const auto &x_4368) {
    if (HashtblContain(x_4368->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4368->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4368);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9809(x_4367);
  MakeUnit();
  auto x_9810 = [&](const auto &x_4369) {
    if (HashtblContain(x_4369->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4369->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4369);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9810(x_4367);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3672(const auto &x_4370) {
  if (HasProp(x_4370, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_4370, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_3670(const auto &x_4373) {
  auto x_9811 = [&](const auto &x_4374) {
    if (HashtblContain(x_4374->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4374->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4374);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9811(x_4373);
  MakeUnit();
  auto x_9812 = [&](const auto &x_4375) {
    if (HashtblContain(x_4375->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4375->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4375);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9812(x_4373);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3667(const auto &x_4376) {
  if (HasProp(x_4376, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_4376, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_3665(const auto &x_4379) {
  auto x_9813 = [&](const auto &x_4380) {
    if (HashtblContain(x_4380->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4380->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4380);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9813(x_4379);
  MakeUnit();
  auto x_9814 = [&](const auto &x_4381) {
    if (HashtblContain(x_4381->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4381->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4381);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9814(x_4379);
  MakeUnit();
  auto x_9815 = [&](const auto &x_4382) {
    if (HashtblContain(x_4382->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4382->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4382);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9815(x_4379);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3662(const auto &x_4383) {
  if (HasProp(x_4383, std::string("position"))) {
    return GetProp<std::string>(x_4383, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_3660(const auto &x_4386) {
  auto x_9816 = [&](const auto &x_4387) {
    if (HashtblContain(x_4387->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4387->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4387);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9816(x_4386);
  MakeUnit();
  ListIter(x_4386->children, [&](const auto &x_4388) {
    if (HashtblContain(x_4388->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4388->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4388);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_9817 = [&](const auto &x_4389) {
    if (HashtblContain(x_4389->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4389->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4389);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9817(x_4386);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3657(const auto &x_4390) {
  if (HasProp(x_4390, std::string("display"))) {
    return GetProp<std::string>(x_4390, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_3654(const auto &x_4393) {
  auto x_9818 = [&](const auto &x_4396) {
    if (HashtblContain(x_4396->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4396->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4396);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4393->next != nullptr) {
    auto x_9820 = x_9818;
    OptionMatch(
        x_4393->parent, [&](const auto &x_4395) { return MakeUnit(); },
        [&](const auto &x_4394) {
          auto x_9822 = x_9820;
          x_9822(x_4394);
          return MakeUnit();
        });
  }
  auto x_9819 = [&](const auto &x_4399) {
    if (HashtblContain(x_4399->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4399->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4399);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4393->next, [&](const auto &x_4398) { return MakeUnit(); },
      [&](const auto &x_4397) {
        auto x_9821 = x_9819;
        x_9821(x_4397);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3651(const auto &x_4400) {
  if (x_4400->prev != nullptr) {
    if (x_4400->var_line_break) {
      return plus((x_4400->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4400->prev)->var_intrinsic_current_line_height, x_4400->var_intrinsic_height_external));
    } else {
      return (x_4400->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4400->var_line_break) {
      return x_4400->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3649(const auto &x_4429) {
  auto x_9823 = [&](const auto &x_4432) {
    if (HashtblContain(x_4432->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4432->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4432);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4429->next != nullptr) {
    auto x_9825 = x_9823;
    OptionMatch(
        x_4429->parent, [&](const auto &x_4431) { return MakeUnit(); },
        [&](const auto &x_4430) {
          auto x_9827 = x_9825;
          x_9827(x_4430);
          return MakeUnit();
        });
  }
  auto x_9824 = [&](const auto &x_4435) {
    if (HashtblContain(x_4435->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4435->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4435);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4429->next, [&](const auto &x_4434) { return MakeUnit(); },
      [&](const auto &x_4433) {
        auto x_9826 = x_9824;
        x_9826(x_4433);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3646(const auto &x_4436) {
  if (x_4436->var_line_break) {
    return 0.;
  } else {
    return max(x_4436->var_intrinsic_height_external,
               (x_4436->prev != nullptr) ? ((x_4436->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_3644(const auto &x_4449) {
  auto x_9828 = [&](const auto &x_4452) {
    if (HashtblContain(x_4452->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4452->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4452);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4449->next, [&](const auto &x_4451) { return MakeUnit(); },
      [&](const auto &x_4450) {
        auto x_9830 = x_9828;
        x_9830(x_4450);
        return MakeUnit();
      });
  auto x_9829 = [&](const auto &x_4455) {
    if (HashtblContain(x_4455->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4455->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4455);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4449->next != nullptr) {
    auto x_9831 = x_9829;
    OptionMatch(
        x_4449->parent, [&](const auto &x_4454) { return MakeUnit(); },
        [&](const auto &x_4453) {
          auto x_9832 = x_9831;
          x_9832(x_4453);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_3641(const auto &x_4456) {
  return plus((x_4456->prev != nullptr) ? ((x_4456->prev)->var_intrinsic_height_sum) : (0.),
              x_4456->var_intrinsic_height_external);
}
Unit var_modified_x_3639(const auto &x_4465) {
  auto x_9833 = [&](const auto &x_4466) {
    if (HashtblContain(x_4466->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4466->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4466);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9833(x_4465);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3636(const auto &x_4467) {
  if (eq(x_4467->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4467->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_3634(const auto &x_4476) {
  auto x_9834 = [&](const auto &x_4477) {
    if (HashtblContain(x_4477->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4477->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4477);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9834(x_4476);
  MakeUnit();
  auto x_9835 = [&](const auto &x_4478) {
    if (HashtblContain(x_4478->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4478->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4478);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9835(x_4476);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3631(const auto &x_4479) {
  if (eq(x_4479->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_4479->var_inside_svg) {
      return 0.;
    } else {
      if (x_4479->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4479->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_4479->var_height_expr, std::string("%"))) &&
             neq(x_4479->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_4479->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_4479->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_4479->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_4479->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_4479->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_4479->var_children_intrinsic_height,
              (eq(x_4479->name, std::string("#text")))
                  ? (10.)
                  : ((x_4479->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4479->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_4479->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_4479->name, std::string("svg")))
                                              ? ((x_4479->var_has_height_attr &&
                                                  string_is_float(x_4479->var_height_attr_expr))
                                                     ? (string_to_float(x_4479->var_height_attr_expr))
                                                     : ((HasAttr(x_4479, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_4479, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_4479,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_4479->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_4479->name, std::string("IMG")))
                                                     ? ((x_4479->var_has_height_attr)
                                                            ? (string_to_float(x_4479->var_height_attr_expr))
                                                            : ((HasAttr(x_4479, std::string("image_height")) &&
                                                                (!x_4479->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_4479, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_4479,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_4479->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4479,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4479,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_4479->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_4479->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3629(const auto &x_4624) {
  auto x_9836 = [&](const auto &x_4625) {
    if (HashtblContain(x_4625->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4625->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4625);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9836(x_4624);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3626(const auto &x_4626) {
  if (eq(x_4626->var_display, std::string("none")) || (x_4626->var_inside_svg || x_4626->var_disabled)) {
    return true;
  } else {
    if ((x_4626->parent != nullptr) && (x_4626->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_4626->var_height_expr, std::string("auto")) ||
          (has_suffix(x_4626->var_height_expr, std::string("px")) ||
           (has_suffix(x_4626->var_height_expr, std::string("ch")) ||
            (has_suffix(x_4626->var_height_expr, std::string("lh")) ||
             eq(x_4626->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3624(const auto &x_4675) {
  auto x_9837 = [&](const auto &x_4676) {
    if (HashtblContain(x_4676->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4676->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4676);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9837(x_4675);
  MakeUnit();
  auto x_9838 = [&](const auto &x_4677) {
    if (HashtblContain(x_4677->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4677->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4677);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9838(x_4675);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3621(const auto &x_4678) {
  if (HasProp(x_4678, std::string("height"))) {
    return GetProp<std::string>(x_4678, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_3619(const auto &x_4681) {
  auto x_9839 = [&](const auto &x_4682) {
    if (HashtblContain(x_4682->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4682->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4682);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9839(x_4681);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3616(const auto &x_4683) {
  if (x_4683->last != nullptr) {
    return plus((x_4683->last)->var_finished_intrinsic_height_sum, (x_4683->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3614(const auto &x_4692) {
  auto x_9840 = [&](const auto &x_4695) {
    if (HashtblContain(x_4695->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4695->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4695);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4692->next, [&](const auto &x_4694) { return MakeUnit(); },
      [&](const auto &x_4693) {
        auto x_9842 = x_9840;
        x_9842(x_4693);
        return MakeUnit();
      });
  auto x_9841 = [&](const auto &x_4698) {
    if (HashtblContain(x_4698->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4698->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4698);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4692->next != nullptr) {
    auto x_9843 = x_9841;
    OptionMatch(
        x_4692->parent, [&](const auto &x_4697) { return MakeUnit(); },
        [&](const auto &x_4696) {
          auto x_9844 = x_9843;
          x_9844(x_4696);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_3611(const auto &x_4699) {
  return plus((x_4699->prev != nullptr) ? ((x_4699->prev)->var_intrinsic_width_sum) : (0.),
              x_4699->var_intrinsic_width_external);
}
Unit var_modified_x_3609(const auto &x_4708) {
  auto x_9845 = [&](const auto &x_4711) {
    if (HashtblContain(x_4711->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4711->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4711);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4708->next != nullptr) {
    auto x_9847 = x_9845;
    OptionMatch(
        x_4708->parent, [&](const auto &x_4710) { return MakeUnit(); },
        [&](const auto &x_4709) {
          auto x_9849 = x_9847;
          x_9849(x_4709);
          return MakeUnit();
        });
  }
  auto x_9846 = [&](const auto &x_4714) {
    if (HashtblContain(x_4714->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4714->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4714);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4708->next, [&](const auto &x_4713) { return MakeUnit(); },
      [&](const auto &x_4712) {
        auto x_9848 = x_9846;
        x_9848(x_4712);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3606(const auto &x_4715) {
  return max(x_4715->var_intrinsic_current_line_width,
             (x_4715->prev != nullptr) ? ((x_4715->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_3604(const auto &x_4724) {
  auto x_9850 = [&](const auto &x_4725) {
    if (HashtblContain(x_4725->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4725->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4725);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9850(x_4724);
  MakeUnit();
  auto x_9851 = [&](const auto &x_4728) {
    if (HashtblContain(x_4728->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4728->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4728);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_4724->next, [&](const auto &x_4727) { return MakeUnit(); },
      [&](const auto &x_4726) {
        auto x_9852 = x_9851;
        x_9852(x_4726);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3601(const auto &x_4729) {
  return plus(x_4729->var_intrinsic_width_external,
              ((x_4729->prev != nullptr) && (!(x_4729->prev)->var_line_break))
                  ? ((x_4729->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_3599(const auto &x_4742) {
  auto x_9853 = [&](const auto &x_4743) {
    if (HashtblContain(x_4743->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4743->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4743);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9853(x_4742);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3596(const auto &x_4744) {
  if (eq(x_4744->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4744->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_3594(const auto &x_4753) {
  auto x_9854 = [&](const auto &x_4754) {
    if (HashtblContain(x_4754->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4754->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4754);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9854(x_4753);
  MakeUnit();
  auto x_9855 = [&](const auto &x_4755) {
    if (HashtblContain(x_4755->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4755->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4755);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9855(x_4753);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3591(const auto &x_4756) {
  if (eq(x_4756->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_4756->var_inside_svg) {
      return 0.;
    } else {
      if (x_4756->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4756->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_4756->var_width_expr, std::string("%"))) &&
             (neq(x_4756->var_width_expr, std::string("fit-content")) &&
              (neq(x_4756->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_4756->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_4756->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_4756->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_4756->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_4756->var_children_intrinsic_width,
              (eq(x_4756->name, std::string("#text")))
                  ? (100.)
                  : ((x_4756->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4756->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_4756->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_4756->name, std::string("svg")))
                                              ? ((x_4756->var_has_width_attr &&
                                                  string_is_float(x_4756->var_width_attr_expr))
                                                     ? (string_to_float(x_4756->var_width_attr_expr))
                                                     : (((!x_4756->var_has_width_attr) &&
                                                         HasAttr(x_4756, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_4756, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_4756,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_4756->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_4756->name, std::string("IMG")))
                                                     ? ((x_4756->var_has_width_attr)
                                                            ? (string_to_float(x_4756->var_width_attr_expr))
                                                            : ((HasAttr(x_4756, std::string("image_width")) &&
                                                                (!x_4756->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_4756, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_4756, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_4756->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4756,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4756,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_4756->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_4756->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3589(const auto &x_4909) {
  auto x_9856 = [&](const auto &x_4910) {
    if (HashtblContain(x_4910->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4910->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4910);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9856(x_4909);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3586(const auto &x_4911) {
  if (x_4911->last != nullptr) {
    return (x_4911->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_3584(const auto &x_4916) {
  auto x_9857 = [&](const auto &x_4917) {
    if (HashtblContain(x_4917->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4917->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4917);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9857(x_4916);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3581(const auto &x_4918) {
  if (eq(x_4918->var_display, std::string("none")) || (x_4918->var_inside_svg || x_4918->var_disabled)) {
    return true;
  } else {
    if ((x_4918->parent != nullptr) && (x_4918->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_4918->var_width_expr, std::string("auto")) ||
          (has_suffix(x_4918->var_width_expr, std::string("px")) ||
           (has_suffix(x_4918->var_width_expr, std::string("ch")) ||
            (has_prefix(x_4918->var_width_expr, std::string("calc(")) ||
             eq(x_4918->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3579(const auto &x_4967) {
  auto x_9858 = [&](const auto &x_4968) {
    if (HashtblContain(x_4968->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4968->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4968);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9858(x_4967);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3576(const auto &x_4969) {
  if (eq(x_4969->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_4969->var_inside_svg) {
      return true;
    } else {
      if (x_4969->var_disabled) {
        return true;
      } else {if ( eq(x_4969->name,std::string("#document")) || (eq(x_4969->name,std::string("#shadow-root")) || (eq(x_4969->name,std::string("DIV")) || (eq(x_4969->name,std::string("HTML")) || (eq(x_4969->name,std::string("BODY")) || (eq(x_4969->name,std::string("BUTTON")) || (eq(x_4969->name,std::string("FOOTER")) || (eq(x_4969->name,std::string("SELECT")) || (eq(x_4969->name,std::string("SECTION")) || (eq(x_4969->name,std::string("FORM")) || (eq(x_4969->name,std::string("CENTER")) || (eq(x_4969->name,std::string("TD")) || (eq(x_4969->name,std::string("TR")) || (eq(x_4969->name,std::string("TBODY")) || (eq(x_4969->name,std::string("TABLE")) || (eq(x_4969->name,std::string("SPAN")) || (eq(x_4969->name,std::string("FONT")) || (eq(x_4969->name,std::string("A")) || (eq(x_4969->name,std::string("ARTICLE")) || (eq(x_4969->name,std::string("P")) || (eq(x_4969->name,std::string("U")) || (eq(x_4969->name,std::string("UL")) || (eq(x_4969->name,std::string("B")) || (eq(x_4969->name,std::string("H1")) || (eq(x_4969->name,std::string("H2")) || (eq(x_4969->name,std::string("H3")) || (eq(x_4969->name,std::string("H4")) || (eq(x_4969->name,std::string("DT")) || (eq(x_4969->name,std::string("DD")) || (eq(x_4969->name,std::string("DL")) || (eq(x_4969->name,std::string("LI")) || (eq(x_4969->name,std::string("LABEL")) || (eq(x_4969->name,std::string("OL")) || (eq(x_4969->name,std::string("NAV")) || (eq(x_4969->name,std::string("HEADER")) || (eq(x_4969->name,std::string("HEAD")) || (eq(x_4969->name,std::string("SOURCE")) || (eq(x_4969->name,std::string("PICTURE")) || (eq(x_4969->name,std::string("FIGURE")) || (eq(x_4969->name,std::string("FIGCAPTION")) || (eq(x_4969->name,std::string("MAIN")) || (eq(x_4969->name,std::string("REACT-PARTIAL")) || (eq(x_4969->name,std::string("QUERY-BUILDER")) || (eq(x_4969->name,std::string("MODAL-DIALOG")) || (eq(x_4969->name,std::string("SCROLLABLE-REGION")) || (eq(x_4969->name,std::string("DIALOG-HELPER")) || (eq(x_4969->name,std::string("AUTO-CHECK")) || (eq(x_4969->name,std::string("TOOL-TIP")) || (eq(x_4969->name,std::string("CUSTOM-SCOPES")) || (eq(x_4969->name,std::string("QBSEARCH-INPUT")) || (eq(x_4969->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_4969->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_4969->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_4969->name,std::string("GHCC-CONSENT")) || (eq(x_4969->name,std::string("GLOBAL-BANNER")) || (eq(x_4969->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_4969->name,std::string("CARD-SKEW")) || (eq(x_4969->name,std::string("EM")) || (eq(x_4969->name,std::string("ASIDE")) || (eq(x_4969->name,std::string("AUDIO")) || (eq(x_4969->name,std::string("SUP")) || (eq(x_4969->name,std::string("TIME")) || (eq(x_4969->name,std::string("ABBR")) || (eq(x_4969->name,std::string("SMALL")) || (eq(x_4969->name,std::string("SLOT")) || eq(x_4969->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_3574(const auto &x_4982) {
  auto x_9859 = [&](const auto &x_4983) {
    if (HashtblContain(x_4983->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4983->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4983);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9859(x_4982);
  MakeUnit();
  auto x_9860 = [&](const auto &x_4984) {
    if (HashtblContain(x_4984->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4984->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4984);
    } else {
      return MetaWriteMetric();
    }
  };
  x_9860(x_4982);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3571(const auto &x_4985) {
  if (HasProp(x_4985, std::string("width"))) {
    return GetProp<std::string>(x_4985, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_3568(const auto &x_4988) { return MakeUnit(); }
auto eval_expr_x_3565(const auto &x_4992) {
  if ((x_4992->prev != nullptr) && (!(x_4992->prev)->var_line_break)) {
    return max(x_4992->var_height_external, (x_4992->prev)->var_line_height);
  } else {
    return x_4992->var_height_external;
  }
}
Unit var_modified_x_3563(const auto &x_5009) { return MakeUnit(); }
auto eval_expr_x_3560(const auto &x_5011) {
  if (eq(x_5011->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5011->var_height_internal;
  }
}
Unit var_modified_x_3558(const auto &x_5020) { return MakeUnit(); }
auto eval_expr_x_3555(const auto &x_5023) {
  if (x_5023->var_intrinsic_height_is_height) {
    return x_5023->var_intrinsic_height_internal;
  } else {
    if ((x_5023->parent != nullptr) && (x_5023->parent)->var_is_flex_column) {
      return plus(x_5023->var_intrinsic_height_internal,
                  mult(x_5023->var_flex_amount, (x_5023->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5023->var_height_expr, std::string("%"))) {
        return mult(x_5023->var_box_height,
                    divide(string_to_float(strip_suffix(x_5023->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_5023->var_box_height, x_5023->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_3553(const auto &x_5076) { return MakeUnit(); }
auto eval_expr_x_3550(const auto &x_5081) {
  if (x_5081->prev != nullptr) {
    if (x_5081->var_line_break || (x_5081->prev)->var_line_break) {
      return plus((x_5081->prev)->var_y, (x_5081->prev)->var_line_height);
    } else {
      return (x_5081->prev)->var_y;
    }
  } else {
    if (x_5081->parent != nullptr) {
      return (x_5081->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3548(const auto &x_5106) { return MakeUnit(); }
auto eval_expr_x_3545(const auto &x_5110) {
  if (eq(x_5110->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5110->var_width_internal;
  }
}
Unit var_modified_x_3543(const auto &x_5119) { return MakeUnit(); }
auto eval_expr_x_3540(const auto &x_5122) {
  if (x_5122->var_intrinsic_width_is_width) {
    return x_5122->var_intrinsic_width_internal;
  } else {
    if ((x_5122->parent != nullptr) && (x_5122->parent)->var_is_flex_row) {
      return plus(x_5122->var_intrinsic_width_internal, mult(x_5122->var_flex_amount, (x_5122->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5122->var_width_expr, std::string("%"))) {
        return mult(x_5122->var_box_width,
                    divide(string_to_float(strip_suffix(x_5122->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_5122->var_box_width, x_5122->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_3538(const auto &x_5175) { return MakeUnit(); }
auto eval_expr_x_3535(const auto &x_5180) {
  if (x_5180->prev != nullptr) {
    if (x_5180->var_line_break || (x_5180->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_5180->prev)->var_x, (x_5180->prev)->var_width_external);
    }
  } else {
    if (x_5180->parent != nullptr) {
      return (x_5180->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3533(const auto &x_5201) { return MakeUnit(); }
auto eval_expr_x_3530(const auto &x_5203) {
  if (gt(x_5203->var_left_over, 0.)) {
    return divide(x_5203->var_left_over, x_5203->var_flex_grow_sum);
  } else {
    return divide(x_5203->var_left_over, x_5203->var_flex_shrink_sum);
  }
}
Unit var_modified_x_3528(const auto &x_5224) { return MakeUnit(); }
auto eval_expr_x_3525(const auto &x_5226) {
  if ((x_5226->parent != nullptr) && gt((x_5226->parent)->var_left_over, 0.)) {
    return x_5226->var_flex_grow;
  } else {
    return x_5226->var_flex_shrink;
  }
}
Unit var_modified_x_3523(const auto &x_5239) { return MakeUnit(); }
auto eval_expr_x_3520(const auto &x_5242) {
  if (x_5242->var_is_flex_row) {
    return minus(x_5242->var_box_width, (x_5242->last != nullptr) ? ((x_5242->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_5242->var_box_height, (x_5242->last != nullptr) ? ((x_5242->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_3518(const auto &x_5263) { return MakeUnit(); }
auto eval_expr_x_3515(const auto &x_5265) {
  if (x_5265->parent != nullptr) {
    return (x_5265->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_3513(const auto &x_5270) { return MakeUnit(); }
auto eval_expr_x_3510(const auto &x_5272) {
  if (x_5272->parent != nullptr) {
    return (x_5272->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_3507(const auto &x_5277) { return MakeUnit(); }
auto eval_expr_x_3504(const auto &x_5286) {
  if (eq(x_5286->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_5286->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_5286->parent != nullptr) &&
          (eq((x_5286->parent)->var_display, std::string("flex")) ||
           eq((x_5286->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_5286->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_5286->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_5286->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_5286->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_5286, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_5286, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_5286->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_5286->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_5286->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_5286->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_5286->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_5286->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_5286->var_display, std::string("list-item"))) {
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
Unit var_modified_x_3502(const auto &x_5363) { return MakeUnit(); }
auto eval_expr_x_3499(const auto &x_5365) {
  return (((!(x_5365->parent != nullptr)) || (x_5365->parent)->var_visible) &&
          (neq(x_5365->var_display, std::string("none")) && ((!x_5365->var_inside_svg) && (!x_5365->var_disabled))));
}
Unit var_modified_x_3497(const auto &x_5382) { return MakeUnit(); }
auto eval_expr_x_3494(const auto &x_5386) {
  if (eq(x_5386->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_5386->parent != nullptr) && (x_5386->parent)->var_disabled);
  }
}
Unit var_modified_x_3492(const auto &x_5391) { return MakeUnit(); }
auto eval_expr_x_3489(const auto &x_5395) {
  return ((x_5395->parent != nullptr) && ((x_5395->parent)->var_is_svg_block || (x_5395->parent)->var_inside_svg));
}
Unit var_modified_x_3487(const auto &x_5404) { return MakeUnit(); }
auto eval_expr_x_3484(const auto &x_5406) { return eq(x_5406->name, std::string("svg")); }
Unit var_modified_x_3482(const auto &x_5407) { return MakeUnit(); }
auto eval_expr_x_3479(const auto &x_5409) { return neq(x_5409->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_3477(const auto &x_5414) { return MakeUnit(); }
auto eval_expr_x_3474(const auto &x_5417) {
  if (!HasAttr(x_5417, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_5417, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_5417, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_5417, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_3472(const auto &x_5428) { return MakeUnit(); }
auto eval_expr_x_3469(const auto &x_5430) { return neq(x_5430->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_3467(const auto &x_5435) { return MakeUnit(); }
auto eval_expr_x_3464(const auto &x_5438) {
  if (!HasAttr(x_5438, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_5438, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_5438, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_5438, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_3462(const auto &x_5449) { return MakeUnit(); }
auto eval_expr_x_3459(const auto &x_5452) {
  if ((x_5452->parent != nullptr) &&
      (eq((x_5452->parent)->var_display, std::string("flex")) ||
       eq((x_5452->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_5452->parent)->var_flex_direction, std::string("column")) ||
        eq((x_5452->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3457(const auto &x_5477) { return MakeUnit(); }
auto eval_expr_x_3454(const auto &x_5481) {
  if ((x_5481->parent != nullptr) &&
      (eq((x_5481->parent)->var_display, std::string("flex")) ||
       eq((x_5481->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_5481->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3452(const auto &x_5506) { return MakeUnit(); }
auto eval_expr_x_3449(const auto &x_5508) {
  if (HasProp(x_5508, std::string("flex-direction"))) {
    return GetProp<std::string>(x_5508, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_3447(const auto &x_5511) { return MakeUnit(); }
auto eval_expr_x_3444(const auto &x_5516) {
  return plus((x_5516->prev != nullptr) ? ((x_5516->prev)->var_flex_shrink_sum) : (0.), x_5516->var_flex_shrink);
}
Unit var_modified_x_3442(const auto &x_5525) { return MakeUnit(); }
auto eval_expr_x_3439(const auto &x_5530) {
  return plus((x_5530->prev != nullptr) ? ((x_5530->prev)->var_flex_grow_sum) : (0.), x_5530->var_flex_grow);
}
Unit var_modified_x_3437(const auto &x_5539) { return MakeUnit(); }
auto eval_expr_x_3434(const auto &x_5542) {
  if (HasProp(x_5542, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_5542, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_3432(const auto &x_5545) { return MakeUnit(); }
auto eval_expr_x_3429(const auto &x_5548) {
  if (HasProp(x_5548, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_5548, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_3427(const auto &x_5551) { return MakeUnit(); }
auto eval_expr_x_3424(const auto &x_5555) {
  if (HasProp(x_5555, std::string("position"))) {
    return GetProp<std::string>(x_5555, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_3422(const auto &x_5558) { return MakeUnit(); }
auto eval_expr_x_3419(const auto &x_5562) {
  if (HasProp(x_5562, std::string("display"))) {
    return GetProp<std::string>(x_5562, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_3416(const auto &x_5565) { return MakeUnit(); }
auto eval_expr_x_3413(const auto &x_5572) {
  if (x_5572->prev != nullptr) {
    if (x_5572->var_line_break) {
      return plus((x_5572->prev)->var_finished_intrinsic_height_sum,
                  plus((x_5572->prev)->var_intrinsic_current_line_height, x_5572->var_intrinsic_height_external));
    } else {
      return (x_5572->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_5572->var_line_break) {
      return x_5572->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3411(const auto &x_5601) { return MakeUnit(); }
auto eval_expr_x_3408(const auto &x_5608) {
  if (x_5608->var_line_break) {
    return 0.;
  } else {
    return max(x_5608->var_intrinsic_height_external,
               (x_5608->prev != nullptr) ? ((x_5608->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_3406(const auto &x_5621) { return MakeUnit(); }
auto eval_expr_x_3403(const auto &x_5628) {
  return plus((x_5628->prev != nullptr) ? ((x_5628->prev)->var_intrinsic_height_sum) : (0.),
              x_5628->var_intrinsic_height_external);
}
Unit var_modified_x_3401(const auto &x_5637) { return MakeUnit(); }
auto eval_expr_x_3398(const auto &x_5639) {
  if (eq(x_5639->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5639->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_3396(const auto &x_5648) { return MakeUnit(); }
auto eval_expr_x_3393(const auto &x_5651) {
  if (eq(x_5651->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_5651->var_inside_svg) {
      return 0.;
    } else {
      if (x_5651->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5651->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_5651->var_height_expr, std::string("%"))) &&
             neq(x_5651->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_5651->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_5651->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_5651->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_5651->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_5651->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_5651->var_children_intrinsic_height,
              (eq(x_5651->name, std::string("#text")))
                  ? (10.)
                  : ((x_5651->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5651->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_5651->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_5651->name, std::string("svg")))
                                              ? ((x_5651->var_has_height_attr &&
                                                  string_is_float(x_5651->var_height_attr_expr))
                                                     ? (string_to_float(x_5651->var_height_attr_expr))
                                                     : ((HasAttr(x_5651, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_5651, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_5651,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_5651->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_5651->name, std::string("IMG")))
                                                     ? ((x_5651->var_has_height_attr)
                                                            ? (string_to_float(x_5651->var_height_attr_expr))
                                                            : ((HasAttr(x_5651, std::string("image_height")) &&
                                                                (!x_5651->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_5651, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_5651,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_5651->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5651,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5651,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_5651->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_5651->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3391(const auto &x_5796) { return MakeUnit(); }
auto eval_expr_x_3388(const auto &x_5798) {
  if (eq(x_5798->var_display, std::string("none")) || (x_5798->var_inside_svg || x_5798->var_disabled)) {
    return true;
  } else {
    if ((x_5798->parent != nullptr) && (x_5798->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_5798->var_height_expr, std::string("auto")) ||
          (has_suffix(x_5798->var_height_expr, std::string("px")) ||
           (has_suffix(x_5798->var_height_expr, std::string("ch")) ||
            (has_suffix(x_5798->var_height_expr, std::string("lh")) ||
             eq(x_5798->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3386(const auto &x_5847) { return MakeUnit(); }
auto eval_expr_x_3383(const auto &x_5850) {
  if (HasProp(x_5850, std::string("height"))) {
    return GetProp<std::string>(x_5850, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_3381(const auto &x_5853) { return MakeUnit(); }
auto eval_expr_x_3378(const auto &x_5855) {
  if (x_5855->last != nullptr) {
    return plus((x_5855->last)->var_finished_intrinsic_height_sum, (x_5855->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3376(const auto &x_5864) { return MakeUnit(); }
auto eval_expr_x_3373(const auto &x_5871) {
  return plus((x_5871->prev != nullptr) ? ((x_5871->prev)->var_intrinsic_width_sum) : (0.),
              x_5871->var_intrinsic_width_external);
}
Unit var_modified_x_3371(const auto &x_5880) { return MakeUnit(); }
auto eval_expr_x_3368(const auto &x_5887) {
  return max(x_5887->var_intrinsic_current_line_width,
             (x_5887->prev != nullptr) ? ((x_5887->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_3366(const auto &x_5896) { return MakeUnit(); }
auto eval_expr_x_3363(const auto &x_5901) {
  return plus(x_5901->var_intrinsic_width_external,
              ((x_5901->prev != nullptr) && (!(x_5901->prev)->var_line_break))
                  ? ((x_5901->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_3361(const auto &x_5914) { return MakeUnit(); }
auto eval_expr_x_3358(const auto &x_5916) {
  if (eq(x_5916->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5916->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_3356(const auto &x_5925) { return MakeUnit(); }
auto eval_expr_x_3353(const auto &x_5928) {
  if (eq(x_5928->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_5928->var_inside_svg) {
      return 0.;
    } else {
      if (x_5928->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5928->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_5928->var_width_expr, std::string("%"))) &&
             (neq(x_5928->var_width_expr, std::string("fit-content")) &&
              (neq(x_5928->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_5928->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_5928->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_5928->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_5928->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_5928->var_children_intrinsic_width,
              (eq(x_5928->name, std::string("#text")))
                  ? (100.)
                  : ((x_5928->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5928->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_5928->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_5928->name, std::string("svg")))
                                              ? ((x_5928->var_has_width_attr &&
                                                  string_is_float(x_5928->var_width_attr_expr))
                                                     ? (string_to_float(x_5928->var_width_attr_expr))
                                                     : (((!x_5928->var_has_width_attr) &&
                                                         HasAttr(x_5928, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_5928, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_5928,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_5928->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_5928->name, std::string("IMG")))
                                                     ? ((x_5928->var_has_width_attr)
                                                            ? (string_to_float(x_5928->var_width_attr_expr))
                                                            : ((HasAttr(x_5928, std::string("image_width")) &&
                                                                (!x_5928->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_5928, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_5928, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_5928->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5928,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5928,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_5928->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_5928->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3351(const auto &x_6081) { return MakeUnit(); }
auto eval_expr_x_3348(const auto &x_6083) {
  if (x_6083->last != nullptr) {
    return (x_6083->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_3346(const auto &x_6088) { return MakeUnit(); }
auto eval_expr_x_3343(const auto &x_6090) {
  if (eq(x_6090->var_display, std::string("none")) || (x_6090->var_inside_svg || x_6090->var_disabled)) {
    return true;
  } else {
    if ((x_6090->parent != nullptr) && (x_6090->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_6090->var_width_expr, std::string("auto")) ||
          (has_suffix(x_6090->var_width_expr, std::string("px")) ||
           (has_suffix(x_6090->var_width_expr, std::string("ch")) ||
            (has_prefix(x_6090->var_width_expr, std::string("calc(")) ||
             eq(x_6090->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3341(const auto &x_6139) { return MakeUnit(); }
auto eval_expr_x_3338(const auto &x_6141) {
  if (eq(x_6141->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_6141->var_inside_svg) {
      return true;
    } else {
      if (x_6141->var_disabled) {
        return true;
      } else {if ( eq(x_6141->name,std::string("#document")) || (eq(x_6141->name,std::string("#shadow-root")) || (eq(x_6141->name,std::string("DIV")) || (eq(x_6141->name,std::string("HTML")) || (eq(x_6141->name,std::string("BODY")) || (eq(x_6141->name,std::string("BUTTON")) || (eq(x_6141->name,std::string("FOOTER")) || (eq(x_6141->name,std::string("SELECT")) || (eq(x_6141->name,std::string("SECTION")) || (eq(x_6141->name,std::string("FORM")) || (eq(x_6141->name,std::string("CENTER")) || (eq(x_6141->name,std::string("TD")) || (eq(x_6141->name,std::string("TR")) || (eq(x_6141->name,std::string("TBODY")) || (eq(x_6141->name,std::string("TABLE")) || (eq(x_6141->name,std::string("SPAN")) || (eq(x_6141->name,std::string("FONT")) || (eq(x_6141->name,std::string("A")) || (eq(x_6141->name,std::string("ARTICLE")) || (eq(x_6141->name,std::string("P")) || (eq(x_6141->name,std::string("U")) || (eq(x_6141->name,std::string("UL")) || (eq(x_6141->name,std::string("B")) || (eq(x_6141->name,std::string("H1")) || (eq(x_6141->name,std::string("H2")) || (eq(x_6141->name,std::string("H3")) || (eq(x_6141->name,std::string("H4")) || (eq(x_6141->name,std::string("DT")) || (eq(x_6141->name,std::string("DD")) || (eq(x_6141->name,std::string("DL")) || (eq(x_6141->name,std::string("LI")) || (eq(x_6141->name,std::string("LABEL")) || (eq(x_6141->name,std::string("OL")) || (eq(x_6141->name,std::string("NAV")) || (eq(x_6141->name,std::string("HEADER")) || (eq(x_6141->name,std::string("HEAD")) || (eq(x_6141->name,std::string("SOURCE")) || (eq(x_6141->name,std::string("PICTURE")) || (eq(x_6141->name,std::string("FIGURE")) || (eq(x_6141->name,std::string("FIGCAPTION")) || (eq(x_6141->name,std::string("MAIN")) || (eq(x_6141->name,std::string("REACT-PARTIAL")) || (eq(x_6141->name,std::string("QUERY-BUILDER")) || (eq(x_6141->name,std::string("MODAL-DIALOG")) || (eq(x_6141->name,std::string("SCROLLABLE-REGION")) || (eq(x_6141->name,std::string("DIALOG-HELPER")) || (eq(x_6141->name,std::string("AUTO-CHECK")) || (eq(x_6141->name,std::string("TOOL-TIP")) || (eq(x_6141->name,std::string("CUSTOM-SCOPES")) || (eq(x_6141->name,std::string("QBSEARCH-INPUT")) || (eq(x_6141->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_6141->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_6141->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_6141->name,std::string("GHCC-CONSENT")) || (eq(x_6141->name,std::string("GLOBAL-BANNER")) || (eq(x_6141->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_6141->name,std::string("CARD-SKEW")) || (eq(x_6141->name,std::string("EM")) || (eq(x_6141->name,std::string("ASIDE")) || (eq(x_6141->name,std::string("AUDIO")) || (eq(x_6141->name,std::string("SUP")) || (eq(x_6141->name,std::string("TIME")) || (eq(x_6141->name,std::string("ABBR")) || (eq(x_6141->name,std::string("SMALL")) || (eq(x_6141->name,std::string("SLOT")) || eq(x_6141->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_3336(const auto &x_6154) { return MakeUnit(); }
auto eval_expr_x_3333(const auto &x_6157) {
  if (HasProp(x_6157, std::string("width"))) {
    return GetProp<std::string>(x_6157, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_3296(const auto &x_3332) {
  WriteMetric();
  auto x_3334 = eval_expr_x_3333(x_3332);
  if (x_3332->has_var_width_expr) {
    auto x_3335 = x_3332->var_width_expr;
    if (!EqualValue(x_3335, x_3334)) {
      var_modified_x_3336(x_3332);
    }
  }
  x_3332->has_var_width_expr = true;
  x_3332->var_width_expr = x_3334;
  WriteMetric();
  auto x_3339 = eval_expr_x_3338(x_3332);
  if (x_3332->has_var_is_default_case) {
    auto x_3340 = x_3332->var_is_default_case;
    if (!EqualValue(x_3340, x_3339)) {
      var_modified_x_3341(x_3332);
    }
  }
  x_3332->has_var_is_default_case = true;
  x_3332->var_is_default_case = x_3339;
  WriteMetric();
  auto x_3344 = eval_expr_x_3343(x_3332);
  if (x_3332->has_var_intrinsic_width_is_width) {
    auto x_3345 = x_3332->var_intrinsic_width_is_width;
    if (!EqualValue(x_3345, x_3344)) {
      var_modified_x_3346(x_3332);
    }
  }
  x_3332->has_var_intrinsic_width_is_width = true;
  x_3332->var_intrinsic_width_is_width = x_3344;
  WriteMetric();
  auto x_3349 = eval_expr_x_3348(x_3332);
  if (x_3332->has_var_children_intrinsic_width) {
    auto x_3350 = x_3332->var_children_intrinsic_width;
    if (!EqualValue(x_3350, x_3349)) {
      var_modified_x_3351(x_3332);
    }
  }
  x_3332->has_var_children_intrinsic_width = true;
  x_3332->var_children_intrinsic_width = x_3349;
  WriteMetric();
  auto x_3354 = eval_expr_x_3353(x_3332);
  if (x_3332->has_var_intrinsic_width_internal) {
    auto x_3355 = x_3332->var_intrinsic_width_internal;
    if (!EqualValue(x_3355, x_3354)) {
      var_modified_x_3356(x_3332);
    }
  }
  x_3332->has_var_intrinsic_width_internal = true;
  x_3332->var_intrinsic_width_internal = x_3354;
  WriteMetric();
  auto x_3359 = eval_expr_x_3358(x_3332);
  if (x_3332->has_var_intrinsic_width_external) {
    auto x_3360 = x_3332->var_intrinsic_width_external;
    if (!EqualValue(x_3360, x_3359)) {
      var_modified_x_3361(x_3332);
    }
  }
  x_3332->has_var_intrinsic_width_external = true;
  x_3332->var_intrinsic_width_external = x_3359;
  WriteMetric();
  auto x_3364 = eval_expr_x_3363(x_3332);
  if (x_3332->has_var_intrinsic_current_line_width) {
    auto x_3365 = x_3332->var_intrinsic_current_line_width;
    if (!EqualValue(x_3365, x_3364)) {
      var_modified_x_3366(x_3332);
    }
  }
  x_3332->has_var_intrinsic_current_line_width = true;
  x_3332->var_intrinsic_current_line_width = x_3364;
  WriteMetric();
  auto x_3369 = eval_expr_x_3368(x_3332);
  if (x_3332->has_var_intrinsic_width_max) {
    auto x_3370 = x_3332->var_intrinsic_width_max;
    if (!EqualValue(x_3370, x_3369)) {
      var_modified_x_3371(x_3332);
    }
  }
  x_3332->has_var_intrinsic_width_max = true;
  x_3332->var_intrinsic_width_max = x_3369;
  WriteMetric();
  auto x_3374 = eval_expr_x_3373(x_3332);
  if (x_3332->has_var_intrinsic_width_sum) {
    auto x_3375 = x_3332->var_intrinsic_width_sum;
    if (!EqualValue(x_3375, x_3374)) {
      var_modified_x_3376(x_3332);
    }
  }
  x_3332->has_var_intrinsic_width_sum = true;
  x_3332->var_intrinsic_width_sum = x_3374;
  WriteMetric();
  auto x_3379 = eval_expr_x_3378(x_3332);
  if (x_3332->has_var_children_intrinsic_height) {
    auto x_3380 = x_3332->var_children_intrinsic_height;
    if (!EqualValue(x_3380, x_3379)) {
      var_modified_x_3381(x_3332);
    }
  }
  x_3332->has_var_children_intrinsic_height = true;
  x_3332->var_children_intrinsic_height = x_3379;
  WriteMetric();
  auto x_3384 = eval_expr_x_3383(x_3332);
  if (x_3332->has_var_height_expr) {
    auto x_3385 = x_3332->var_height_expr;
    if (!EqualValue(x_3385, x_3384)) {
      var_modified_x_3386(x_3332);
    }
  }
  x_3332->has_var_height_expr = true;
  x_3332->var_height_expr = x_3384;
  WriteMetric();
  auto x_3389 = eval_expr_x_3388(x_3332);
  if (x_3332->has_var_intrinsic_height_is_height) {
    auto x_3390 = x_3332->var_intrinsic_height_is_height;
    if (!EqualValue(x_3390, x_3389)) {
      var_modified_x_3391(x_3332);
    }
  }
  x_3332->has_var_intrinsic_height_is_height = true;
  x_3332->var_intrinsic_height_is_height = x_3389;
  WriteMetric();
  auto x_3394 = eval_expr_x_3393(x_3332);
  if (x_3332->has_var_intrinsic_height_internal) {
    auto x_3395 = x_3332->var_intrinsic_height_internal;
    if (!EqualValue(x_3395, x_3394)) {
      var_modified_x_3396(x_3332);
    }
  }
  x_3332->has_var_intrinsic_height_internal = true;
  x_3332->var_intrinsic_height_internal = x_3394;
  WriteMetric();
  auto x_3399 = eval_expr_x_3398(x_3332);
  if (x_3332->has_var_intrinsic_height_external) {
    auto x_3400 = x_3332->var_intrinsic_height_external;
    if (!EqualValue(x_3400, x_3399)) {
      var_modified_x_3401(x_3332);
    }
  }
  x_3332->has_var_intrinsic_height_external = true;
  x_3332->var_intrinsic_height_external = x_3399;
  WriteMetric();
  auto x_3404 = eval_expr_x_3403(x_3332);
  if (x_3332->has_var_intrinsic_height_sum) {
    auto x_3405 = x_3332->var_intrinsic_height_sum;
    if (!EqualValue(x_3405, x_3404)) {
      var_modified_x_3406(x_3332);
    }
  }
  x_3332->has_var_intrinsic_height_sum = true;
  x_3332->var_intrinsic_height_sum = x_3404;
  WriteMetric();
  auto x_3409 = eval_expr_x_3408(x_3332);
  if (x_3332->has_var_intrinsic_current_line_height) {
    auto x_3410 = x_3332->var_intrinsic_current_line_height;
    if (!EqualValue(x_3410, x_3409)) {
      var_modified_x_3411(x_3332);
    }
  }
  x_3332->has_var_intrinsic_current_line_height = true;
  x_3332->var_intrinsic_current_line_height = x_3409;
  WriteMetric();
  auto x_3414 = eval_expr_x_3413(x_3332);
  if (x_3332->has_var_finished_intrinsic_height_sum) {
    auto x_3415 = x_3332->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_3415, x_3414)) {
      var_modified_x_3416(x_3332);
    }
  }
  x_3332->has_var_finished_intrinsic_height_sum = true;
  x_3332->var_finished_intrinsic_height_sum = x_3414;
  return MakeUnit();
}
Unit eval_stmts_x_3294(const auto &x_3418) {
  WriteMetric();
  auto x_3420 = eval_expr_x_3419(x_3418);
  if (x_3418->has_var_display) {
    auto x_3421 = x_3418->var_display;
    if (!EqualValue(x_3421, x_3420)) {
      var_modified_x_3422(x_3418);
    }
  }
  x_3418->has_var_display = true;
  x_3418->var_display = x_3420;
  WriteMetric();
  auto x_3425 = eval_expr_x_3424(x_3418);
  if (x_3418->has_var_position) {
    auto x_3426 = x_3418->var_position;
    if (!EqualValue(x_3426, x_3425)) {
      var_modified_x_3427(x_3418);
    }
  }
  x_3418->has_var_position = true;
  x_3418->var_position = x_3425;
  WriteMetric();
  auto x_3430 = eval_expr_x_3429(x_3418);
  if (x_3418->has_var_flex_grow) {
    auto x_3431 = x_3418->var_flex_grow;
    if (!EqualValue(x_3431, x_3430)) {
      var_modified_x_3432(x_3418);
    }
  }
  x_3418->has_var_flex_grow = true;
  x_3418->var_flex_grow = x_3430;
  WriteMetric();
  auto x_3435 = eval_expr_x_3434(x_3418);
  if (x_3418->has_var_flex_shrink) {
    auto x_3436 = x_3418->var_flex_shrink;
    if (!EqualValue(x_3436, x_3435)) {
      var_modified_x_3437(x_3418);
    }
  }
  x_3418->has_var_flex_shrink = true;
  x_3418->var_flex_shrink = x_3435;
  WriteMetric();
  auto x_3440 = eval_expr_x_3439(x_3418);
  if (x_3418->has_var_flex_grow_sum) {
    auto x_3441 = x_3418->var_flex_grow_sum;
    if (!EqualValue(x_3441, x_3440)) {
      var_modified_x_3442(x_3418);
    }
  }
  x_3418->has_var_flex_grow_sum = true;
  x_3418->var_flex_grow_sum = x_3440;
  WriteMetric();
  auto x_3445 = eval_expr_x_3444(x_3418);
  if (x_3418->has_var_flex_shrink_sum) {
    auto x_3446 = x_3418->var_flex_shrink_sum;
    if (!EqualValue(x_3446, x_3445)) {
      var_modified_x_3447(x_3418);
    }
  }
  x_3418->has_var_flex_shrink_sum = true;
  x_3418->var_flex_shrink_sum = x_3445;
  WriteMetric();
  auto x_3450 = eval_expr_x_3449(x_3418);
  if (x_3418->has_var_flex_direction) {
    auto x_3451 = x_3418->var_flex_direction;
    if (!EqualValue(x_3451, x_3450)) {
      var_modified_x_3452(x_3418);
    }
  }
  x_3418->has_var_flex_direction = true;
  x_3418->var_flex_direction = x_3450;
  WriteMetric();
  auto x_3455 = eval_expr_x_3454(x_3418);
  if (x_3418->has_var_is_flex_row) {
    auto x_3456 = x_3418->var_is_flex_row;
    if (!EqualValue(x_3456, x_3455)) {
      var_modified_x_3457(x_3418);
    }
  }
  x_3418->has_var_is_flex_row = true;
  x_3418->var_is_flex_row = x_3455;
  WriteMetric();
  auto x_3460 = eval_expr_x_3459(x_3418);
  if (x_3418->has_var_is_flex_column) {
    auto x_3461 = x_3418->var_is_flex_column;
    if (!EqualValue(x_3461, x_3460)) {
      var_modified_x_3462(x_3418);
    }
  }
  x_3418->has_var_is_flex_column = true;
  x_3418->var_is_flex_column = x_3460;
  WriteMetric();
  auto x_3465 = eval_expr_x_3464(x_3418);
  if (x_3418->has_var_width_attr_expr) {
    auto x_3466 = x_3418->var_width_attr_expr;
    if (!EqualValue(x_3466, x_3465)) {
      var_modified_x_3467(x_3418);
    }
  }
  x_3418->has_var_width_attr_expr = true;
  x_3418->var_width_attr_expr = x_3465;
  WriteMetric();
  auto x_3470 = eval_expr_x_3469(x_3418);
  if (x_3418->has_var_has_width_attr) {
    auto x_3471 = x_3418->var_has_width_attr;
    if (!EqualValue(x_3471, x_3470)) {
      var_modified_x_3472(x_3418);
    }
  }
  x_3418->has_var_has_width_attr = true;
  x_3418->var_has_width_attr = x_3470;
  WriteMetric();
  auto x_3475 = eval_expr_x_3474(x_3418);
  if (x_3418->has_var_height_attr_expr) {
    auto x_3476 = x_3418->var_height_attr_expr;
    if (!EqualValue(x_3476, x_3475)) {
      var_modified_x_3477(x_3418);
    }
  }
  x_3418->has_var_height_attr_expr = true;
  x_3418->var_height_attr_expr = x_3475;
  WriteMetric();
  auto x_3480 = eval_expr_x_3479(x_3418);
  if (x_3418->has_var_has_height_attr) {
    auto x_3481 = x_3418->var_has_height_attr;
    if (!EqualValue(x_3481, x_3480)) {
      var_modified_x_3482(x_3418);
    }
  }
  x_3418->has_var_has_height_attr = true;
  x_3418->var_has_height_attr = x_3480;
  WriteMetric();
  auto x_3485 = eval_expr_x_3484(x_3418);
  if (x_3418->has_var_is_svg_block) {
    auto x_3486 = x_3418->var_is_svg_block;
    if (!EqualValue(x_3486, x_3485)) {
      var_modified_x_3487(x_3418);
    }
  }
  x_3418->has_var_is_svg_block = true;
  x_3418->var_is_svg_block = x_3485;
  WriteMetric();
  auto x_3490 = eval_expr_x_3489(x_3418);
  if (x_3418->has_var_inside_svg) {
    auto x_3491 = x_3418->var_inside_svg;
    if (!EqualValue(x_3491, x_3490)) {
      var_modified_x_3492(x_3418);
    }
  }
  x_3418->has_var_inside_svg = true;
  x_3418->var_inside_svg = x_3490;
  WriteMetric();
  auto x_3495 = eval_expr_x_3494(x_3418);
  if (x_3418->has_var_disabled) {
    auto x_3496 = x_3418->var_disabled;
    if (!EqualValue(x_3496, x_3495)) {
      var_modified_x_3497(x_3418);
    }
  }
  x_3418->has_var_disabled = true;
  x_3418->var_disabled = x_3495;
  WriteMetric();
  auto x_3500 = eval_expr_x_3499(x_3418);
  if (x_3418->has_var_visible) {
    auto x_3501 = x_3418->var_visible;
    if (!EqualValue(x_3501, x_3500)) {
      var_modified_x_3502(x_3418);
    }
  }
  x_3418->has_var_visible = true;
  x_3418->var_visible = x_3500;
  WriteMetric();
  auto x_3505 = eval_expr_x_3504(x_3418);
  if (x_3418->has_var_line_break) {
    auto x_3506 = x_3418->var_line_break;
    if (!EqualValue(x_3506, x_3505)) {
      var_modified_x_3507(x_3418);
    }
  }
  x_3418->has_var_line_break = true;
  x_3418->var_line_break = x_3505;
  return MakeUnit();
}
Unit eval_stmts_x_3291(const auto &x_3509) {
  WriteMetric();
  auto x_3511 = eval_expr_x_3510(x_3509);
  if (x_3509->has_var_box_width) {
    auto x_3512 = x_3509->var_box_width;
    if (!EqualValue(x_3512, x_3511)) {
      var_modified_x_3513(x_3509);
    }
  }
  x_3509->has_var_box_width = true;
  x_3509->var_box_width = x_3511;
  WriteMetric();
  auto x_3516 = eval_expr_x_3515(x_3509);
  if (x_3509->has_var_box_height) {
    auto x_3517 = x_3509->var_box_height;
    if (!EqualValue(x_3517, x_3516)) {
      var_modified_x_3518(x_3509);
    }
  }
  x_3509->has_var_box_height = true;
  x_3509->var_box_height = x_3516;
  WriteMetric();
  auto x_3521 = eval_expr_x_3520(x_3509);
  if (x_3509->has_var_left_over) {
    auto x_3522 = x_3509->var_left_over;
    if (!EqualValue(x_3522, x_3521)) {
      var_modified_x_3523(x_3509);
    }
  }
  x_3509->has_var_left_over = true;
  x_3509->var_left_over = x_3521;
  WriteMetric();
  auto x_3526 = eval_expr_x_3525(x_3509);
  if (x_3509->has_var_flex_amount) {
    auto x_3527 = x_3509->var_flex_amount;
    if (!EqualValue(x_3527, x_3526)) {
      var_modified_x_3528(x_3509);
    }
  }
  x_3509->has_var_flex_amount = true;
  x_3509->var_flex_amount = x_3526;
  WriteMetric();
  auto x_3531 = eval_expr_x_3530(x_3509);
  if (x_3509->has_var_flex_unit) {
    auto x_3532 = x_3509->var_flex_unit;
    if (!EqualValue(x_3532, x_3531)) {
      var_modified_x_3533(x_3509);
    }
  }
  x_3509->has_var_flex_unit = true;
  x_3509->var_flex_unit = x_3531;
  WriteMetric();
  auto x_3536 = eval_expr_x_3535(x_3509);
  if (x_3509->has_var_x) {
    auto x_3537 = x_3509->var_x;
    if (!EqualValue(x_3537, x_3536)) {
      var_modified_x_3538(x_3509);
    }
  }
  x_3509->has_var_x = true;
  x_3509->var_x = x_3536;
  WriteMetric();
  auto x_3541 = eval_expr_x_3540(x_3509);
  if (x_3509->has_var_width_internal) {
    auto x_3542 = x_3509->var_width_internal;
    if (!EqualValue(x_3542, x_3541)) {
      var_modified_x_3543(x_3509);
    }
  }
  x_3509->has_var_width_internal = true;
  x_3509->var_width_internal = x_3541;
  WriteMetric();
  auto x_3546 = eval_expr_x_3545(x_3509);
  if (x_3509->has_var_width_external) {
    auto x_3547 = x_3509->var_width_external;
    if (!EqualValue(x_3547, x_3546)) {
      var_modified_x_3548(x_3509);
    }
  }
  x_3509->has_var_width_external = true;
  x_3509->var_width_external = x_3546;
  WriteMetric();
  auto x_3551 = eval_expr_x_3550(x_3509);
  if (x_3509->has_var_y) {
    auto x_3552 = x_3509->var_y;
    if (!EqualValue(x_3552, x_3551)) {
      var_modified_x_3553(x_3509);
    }
  }
  x_3509->has_var_y = true;
  x_3509->var_y = x_3551;
  WriteMetric();
  auto x_3556 = eval_expr_x_3555(x_3509);
  if (x_3509->has_var_height_internal) {
    auto x_3557 = x_3509->var_height_internal;
    if (!EqualValue(x_3557, x_3556)) {
      var_modified_x_3558(x_3509);
    }
  }
  x_3509->has_var_height_internal = true;
  x_3509->var_height_internal = x_3556;
  WriteMetric();
  auto x_3561 = eval_expr_x_3560(x_3509);
  if (x_3509->has_var_height_external) {
    auto x_3562 = x_3509->var_height_external;
    if (!EqualValue(x_3562, x_3561)) {
      var_modified_x_3563(x_3509);
    }
  }
  x_3509->has_var_height_external = true;
  x_3509->var_height_external = x_3561;
  WriteMetric();
  auto x_3566 = eval_expr_x_3565(x_3509);
  if (x_3509->has_var_line_height) {
    auto x_3567 = x_3509->var_line_height;
    if (!EqualValue(x_3567, x_3566)) {
      var_modified_x_3568(x_3509);
    }
  }
  x_3509->has_var_line_height = true;
  x_3509->var_line_height = x_3566;
  return MakeUnit();
}
Unit eval_stmts_x_3262(const auto &x_3570) {
  WriteMetric();
  auto x_3572 = eval_expr_x_3571(x_3570);
  if (x_3570->has_var_width_expr) {
    auto x_3573 = x_3570->var_width_expr;
    if (!EqualValue(x_3573, x_3572)) {
      var_modified_x_3574(x_3570);
    }
  }
  x_3570->has_var_width_expr = true;
  x_3570->var_width_expr = x_3572;
  WriteMetric();
  auto x_3577 = eval_expr_x_3576(x_3570);
  if (x_3570->has_var_is_default_case) {
    auto x_3578 = x_3570->var_is_default_case;
    if (!EqualValue(x_3578, x_3577)) {
      var_modified_x_3579(x_3570);
    }
  }
  x_3570->has_var_is_default_case = true;
  x_3570->var_is_default_case = x_3577;
  WriteMetric();
  auto x_3582 = eval_expr_x_3581(x_3570);
  if (x_3570->has_var_intrinsic_width_is_width) {
    auto x_3583 = x_3570->var_intrinsic_width_is_width;
    if (!EqualValue(x_3583, x_3582)) {
      var_modified_x_3584(x_3570);
    }
  }
  x_3570->has_var_intrinsic_width_is_width = true;
  x_3570->var_intrinsic_width_is_width = x_3582;
  WriteMetric();
  auto x_3587 = eval_expr_x_3586(x_3570);
  if (x_3570->has_var_children_intrinsic_width) {
    auto x_3588 = x_3570->var_children_intrinsic_width;
    if (!EqualValue(x_3588, x_3587)) {
      var_modified_x_3589(x_3570);
    }
  }
  x_3570->has_var_children_intrinsic_width = true;
  x_3570->var_children_intrinsic_width = x_3587;
  WriteMetric();
  auto x_3592 = eval_expr_x_3591(x_3570);
  if (x_3570->has_var_intrinsic_width_internal) {
    auto x_3593 = x_3570->var_intrinsic_width_internal;
    if (!EqualValue(x_3593, x_3592)) {
      var_modified_x_3594(x_3570);
    }
  }
  x_3570->has_var_intrinsic_width_internal = true;
  x_3570->var_intrinsic_width_internal = x_3592;
  WriteMetric();
  auto x_3597 = eval_expr_x_3596(x_3570);
  if (x_3570->has_var_intrinsic_width_external) {
    auto x_3598 = x_3570->var_intrinsic_width_external;
    if (!EqualValue(x_3598, x_3597)) {
      var_modified_x_3599(x_3570);
    }
  }
  x_3570->has_var_intrinsic_width_external = true;
  x_3570->var_intrinsic_width_external = x_3597;
  WriteMetric();
  auto x_3602 = eval_expr_x_3601(x_3570);
  if (x_3570->has_var_intrinsic_current_line_width) {
    auto x_3603 = x_3570->var_intrinsic_current_line_width;
    if (!EqualValue(x_3603, x_3602)) {
      var_modified_x_3604(x_3570);
    }
  }
  x_3570->has_var_intrinsic_current_line_width = true;
  x_3570->var_intrinsic_current_line_width = x_3602;
  WriteMetric();
  auto x_3607 = eval_expr_x_3606(x_3570);
  if (x_3570->has_var_intrinsic_width_max) {
    auto x_3608 = x_3570->var_intrinsic_width_max;
    if (!EqualValue(x_3608, x_3607)) {
      var_modified_x_3609(x_3570);
    }
  }
  x_3570->has_var_intrinsic_width_max = true;
  x_3570->var_intrinsic_width_max = x_3607;
  WriteMetric();
  auto x_3612 = eval_expr_x_3611(x_3570);
  if (x_3570->has_var_intrinsic_width_sum) {
    auto x_3613 = x_3570->var_intrinsic_width_sum;
    if (!EqualValue(x_3613, x_3612)) {
      var_modified_x_3614(x_3570);
    }
  }
  x_3570->has_var_intrinsic_width_sum = true;
  x_3570->var_intrinsic_width_sum = x_3612;
  WriteMetric();
  auto x_3617 = eval_expr_x_3616(x_3570);
  if (x_3570->has_var_children_intrinsic_height) {
    auto x_3618 = x_3570->var_children_intrinsic_height;
    if (!EqualValue(x_3618, x_3617)) {
      var_modified_x_3619(x_3570);
    }
  }
  x_3570->has_var_children_intrinsic_height = true;
  x_3570->var_children_intrinsic_height = x_3617;
  WriteMetric();
  auto x_3622 = eval_expr_x_3621(x_3570);
  if (x_3570->has_var_height_expr) {
    auto x_3623 = x_3570->var_height_expr;
    if (!EqualValue(x_3623, x_3622)) {
      var_modified_x_3624(x_3570);
    }
  }
  x_3570->has_var_height_expr = true;
  x_3570->var_height_expr = x_3622;
  WriteMetric();
  auto x_3627 = eval_expr_x_3626(x_3570);
  if (x_3570->has_var_intrinsic_height_is_height) {
    auto x_3628 = x_3570->var_intrinsic_height_is_height;
    if (!EqualValue(x_3628, x_3627)) {
      var_modified_x_3629(x_3570);
    }
  }
  x_3570->has_var_intrinsic_height_is_height = true;
  x_3570->var_intrinsic_height_is_height = x_3627;
  WriteMetric();
  auto x_3632 = eval_expr_x_3631(x_3570);
  if (x_3570->has_var_intrinsic_height_internal) {
    auto x_3633 = x_3570->var_intrinsic_height_internal;
    if (!EqualValue(x_3633, x_3632)) {
      var_modified_x_3634(x_3570);
    }
  }
  x_3570->has_var_intrinsic_height_internal = true;
  x_3570->var_intrinsic_height_internal = x_3632;
  WriteMetric();
  auto x_3637 = eval_expr_x_3636(x_3570);
  if (x_3570->has_var_intrinsic_height_external) {
    auto x_3638 = x_3570->var_intrinsic_height_external;
    if (!EqualValue(x_3638, x_3637)) {
      var_modified_x_3639(x_3570);
    }
  }
  x_3570->has_var_intrinsic_height_external = true;
  x_3570->var_intrinsic_height_external = x_3637;
  WriteMetric();
  auto x_3642 = eval_expr_x_3641(x_3570);
  if (x_3570->has_var_intrinsic_height_sum) {
    auto x_3643 = x_3570->var_intrinsic_height_sum;
    if (!EqualValue(x_3643, x_3642)) {
      var_modified_x_3644(x_3570);
    }
  }
  x_3570->has_var_intrinsic_height_sum = true;
  x_3570->var_intrinsic_height_sum = x_3642;
  WriteMetric();
  auto x_3647 = eval_expr_x_3646(x_3570);
  if (x_3570->has_var_intrinsic_current_line_height) {
    auto x_3648 = x_3570->var_intrinsic_current_line_height;
    if (!EqualValue(x_3648, x_3647)) {
      var_modified_x_3649(x_3570);
    }
  }
  x_3570->has_var_intrinsic_current_line_height = true;
  x_3570->var_intrinsic_current_line_height = x_3647;
  WriteMetric();
  auto x_3652 = eval_expr_x_3651(x_3570);
  if (x_3570->has_var_finished_intrinsic_height_sum) {
    auto x_3653 = x_3570->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_3653, x_3652)) {
      var_modified_x_3654(x_3570);
    }
  }
  x_3570->has_var_finished_intrinsic_height_sum = true;
  x_3570->var_finished_intrinsic_height_sum = x_3652;
  return MakeUnit();
}
Unit eval_stmts_x_3260(const auto &x_3656) {
  WriteMetric();
  auto x_3658 = eval_expr_x_3657(x_3656);
  if (x_3656->has_var_display) {
    auto x_3659 = x_3656->var_display;
    if (!EqualValue(x_3659, x_3658)) {
      var_modified_x_3660(x_3656);
    }
  }
  x_3656->has_var_display = true;
  x_3656->var_display = x_3658;
  WriteMetric();
  auto x_3663 = eval_expr_x_3662(x_3656);
  if (x_3656->has_var_position) {
    auto x_3664 = x_3656->var_position;
    if (!EqualValue(x_3664, x_3663)) {
      var_modified_x_3665(x_3656);
    }
  }
  x_3656->has_var_position = true;
  x_3656->var_position = x_3663;
  WriteMetric();
  auto x_3668 = eval_expr_x_3667(x_3656);
  if (x_3656->has_var_flex_grow) {
    auto x_3669 = x_3656->var_flex_grow;
    if (!EqualValue(x_3669, x_3668)) {
      var_modified_x_3670(x_3656);
    }
  }
  x_3656->has_var_flex_grow = true;
  x_3656->var_flex_grow = x_3668;
  WriteMetric();
  auto x_3673 = eval_expr_x_3672(x_3656);
  if (x_3656->has_var_flex_shrink) {
    auto x_3674 = x_3656->var_flex_shrink;
    if (!EqualValue(x_3674, x_3673)) {
      var_modified_x_3675(x_3656);
    }
  }
  x_3656->has_var_flex_shrink = true;
  x_3656->var_flex_shrink = x_3673;
  WriteMetric();
  auto x_3678 = eval_expr_x_3677(x_3656);
  if (x_3656->has_var_flex_grow_sum) {
    auto x_3679 = x_3656->var_flex_grow_sum;
    if (!EqualValue(x_3679, x_3678)) {
      var_modified_x_3680(x_3656);
    }
  }
  x_3656->has_var_flex_grow_sum = true;
  x_3656->var_flex_grow_sum = x_3678;
  WriteMetric();
  auto x_3683 = eval_expr_x_3682(x_3656);
  if (x_3656->has_var_flex_shrink_sum) {
    auto x_3684 = x_3656->var_flex_shrink_sum;
    if (!EqualValue(x_3684, x_3683)) {
      var_modified_x_3685(x_3656);
    }
  }
  x_3656->has_var_flex_shrink_sum = true;
  x_3656->var_flex_shrink_sum = x_3683;
  WriteMetric();
  auto x_3688 = eval_expr_x_3687(x_3656);
  if (x_3656->has_var_flex_direction) {
    auto x_3689 = x_3656->var_flex_direction;
    if (!EqualValue(x_3689, x_3688)) {
      var_modified_x_3690(x_3656);
    }
  }
  x_3656->has_var_flex_direction = true;
  x_3656->var_flex_direction = x_3688;
  WriteMetric();
  auto x_3693 = eval_expr_x_3692(x_3656);
  if (x_3656->has_var_is_flex_row) {
    auto x_3694 = x_3656->var_is_flex_row;
    if (!EqualValue(x_3694, x_3693)) {
      var_modified_x_3695(x_3656);
    }
  }
  x_3656->has_var_is_flex_row = true;
  x_3656->var_is_flex_row = x_3693;
  WriteMetric();
  auto x_3698 = eval_expr_x_3697(x_3656);
  if (x_3656->has_var_is_flex_column) {
    auto x_3699 = x_3656->var_is_flex_column;
    if (!EqualValue(x_3699, x_3698)) {
      var_modified_x_3700(x_3656);
    }
  }
  x_3656->has_var_is_flex_column = true;
  x_3656->var_is_flex_column = x_3698;
  WriteMetric();
  auto x_3703 = eval_expr_x_3702(x_3656);
  if (x_3656->has_var_width_attr_expr) {
    auto x_3704 = x_3656->var_width_attr_expr;
    if (!EqualValue(x_3704, x_3703)) {
      var_modified_x_3705(x_3656);
    }
  }
  x_3656->has_var_width_attr_expr = true;
  x_3656->var_width_attr_expr = x_3703;
  WriteMetric();
  auto x_3708 = eval_expr_x_3707(x_3656);
  if (x_3656->has_var_has_width_attr) {
    auto x_3709 = x_3656->var_has_width_attr;
    if (!EqualValue(x_3709, x_3708)) {
      var_modified_x_3710(x_3656);
    }
  }
  x_3656->has_var_has_width_attr = true;
  x_3656->var_has_width_attr = x_3708;
  WriteMetric();
  auto x_3713 = eval_expr_x_3712(x_3656);
  if (x_3656->has_var_height_attr_expr) {
    auto x_3714 = x_3656->var_height_attr_expr;
    if (!EqualValue(x_3714, x_3713)) {
      var_modified_x_3715(x_3656);
    }
  }
  x_3656->has_var_height_attr_expr = true;
  x_3656->var_height_attr_expr = x_3713;
  WriteMetric();
  auto x_3718 = eval_expr_x_3717(x_3656);
  if (x_3656->has_var_has_height_attr) {
    auto x_3719 = x_3656->var_has_height_attr;
    if (!EqualValue(x_3719, x_3718)) {
      var_modified_x_3720(x_3656);
    }
  }
  x_3656->has_var_has_height_attr = true;
  x_3656->var_has_height_attr = x_3718;
  WriteMetric();
  auto x_3723 = eval_expr_x_3722(x_3656);
  if (x_3656->has_var_is_svg_block) {
    auto x_3724 = x_3656->var_is_svg_block;
    if (!EqualValue(x_3724, x_3723)) {
      var_modified_x_3725(x_3656);
    }
  }
  x_3656->has_var_is_svg_block = true;
  x_3656->var_is_svg_block = x_3723;
  WriteMetric();
  auto x_3728 = eval_expr_x_3727(x_3656);
  if (x_3656->has_var_inside_svg) {
    auto x_3729 = x_3656->var_inside_svg;
    if (!EqualValue(x_3729, x_3728)) {
      var_modified_x_3730(x_3656);
    }
  }
  x_3656->has_var_inside_svg = true;
  x_3656->var_inside_svg = x_3728;
  WriteMetric();
  auto x_3733 = eval_expr_x_3732(x_3656);
  if (x_3656->has_var_disabled) {
    auto x_3734 = x_3656->var_disabled;
    if (!EqualValue(x_3734, x_3733)) {
      var_modified_x_3735(x_3656);
    }
  }
  x_3656->has_var_disabled = true;
  x_3656->var_disabled = x_3733;
  WriteMetric();
  auto x_3738 = eval_expr_x_3737(x_3656);
  if (x_3656->has_var_visible) {
    auto x_3739 = x_3656->var_visible;
    if (!EqualValue(x_3739, x_3738)) {
      var_modified_x_3740(x_3656);
    }
  }
  x_3656->has_var_visible = true;
  x_3656->var_visible = x_3738;
  WriteMetric();
  auto x_3743 = eval_expr_x_3742(x_3656);
  if (x_3656->has_var_line_break) {
    auto x_3744 = x_3656->var_line_break;
    if (!EqualValue(x_3744, x_3743)) {
      var_modified_x_3745(x_3656);
    }
  }
  x_3656->has_var_line_break = true;
  x_3656->var_line_break = x_3743;
  return MakeUnit();
}
Unit eval_stmts_x_3256(const auto &x_3747) {
  WriteMetric();
  auto x_3749 = eval_expr_x_3748(x_3747);
  if (x_3747->has_var_box_width) {
    auto x_3750 = x_3747->var_box_width;
    if (!EqualValue(x_3750, x_3749)) {
      var_modified_x_3751(x_3747);
    }
  }
  x_3747->has_var_box_width = true;
  x_3747->var_box_width = x_3749;
  WriteMetric();
  auto x_3754 = eval_expr_x_3753(x_3747);
  if (x_3747->has_var_box_height) {
    auto x_3755 = x_3747->var_box_height;
    if (!EqualValue(x_3755, x_3754)) {
      var_modified_x_3756(x_3747);
    }
  }
  x_3747->has_var_box_height = true;
  x_3747->var_box_height = x_3754;
  WriteMetric();
  auto x_3759 = eval_expr_x_3758(x_3747);
  if (x_3747->has_var_left_over) {
    auto x_3760 = x_3747->var_left_over;
    if (!EqualValue(x_3760, x_3759)) {
      var_modified_x_3761(x_3747);
    }
  }
  x_3747->has_var_left_over = true;
  x_3747->var_left_over = x_3759;
  WriteMetric();
  auto x_3764 = eval_expr_x_3763(x_3747);
  if (x_3747->has_var_flex_amount) {
    auto x_3765 = x_3747->var_flex_amount;
    if (!EqualValue(x_3765, x_3764)) {
      var_modified_x_3766(x_3747);
    }
  }
  x_3747->has_var_flex_amount = true;
  x_3747->var_flex_amount = x_3764;
  WriteMetric();
  auto x_3769 = eval_expr_x_3768(x_3747);
  if (x_3747->has_var_flex_unit) {
    auto x_3770 = x_3747->var_flex_unit;
    if (!EqualValue(x_3770, x_3769)) {
      var_modified_x_3771(x_3747);
    }
  }
  x_3747->has_var_flex_unit = true;
  x_3747->var_flex_unit = x_3769;
  WriteMetric();
  auto x_3774 = eval_expr_x_3773(x_3747);
  if (x_3747->has_var_x) {
    auto x_3775 = x_3747->var_x;
    if (!EqualValue(x_3775, x_3774)) {
      var_modified_x_3776(x_3747);
    }
  }
  x_3747->has_var_x = true;
  x_3747->var_x = x_3774;
  WriteMetric();
  auto x_3779 = eval_expr_x_3778(x_3747);
  if (x_3747->has_var_width_internal) {
    auto x_3780 = x_3747->var_width_internal;
    if (!EqualValue(x_3780, x_3779)) {
      var_modified_x_3781(x_3747);
    }
  }
  x_3747->has_var_width_internal = true;
  x_3747->var_width_internal = x_3779;
  WriteMetric();
  auto x_3784 = eval_expr_x_3783(x_3747);
  if (x_3747->has_var_width_external) {
    auto x_3785 = x_3747->var_width_external;
    if (!EqualValue(x_3785, x_3784)) {
      var_modified_x_3786(x_3747);
    }
  }
  x_3747->has_var_width_external = true;
  x_3747->var_width_external = x_3784;
  WriteMetric();
  auto x_3789 = eval_expr_x_3788(x_3747);
  if (x_3747->has_var_y) {
    auto x_3790 = x_3747->var_y;
    if (!EqualValue(x_3790, x_3789)) {
      var_modified_x_3791(x_3747);
    }
  }
  x_3747->has_var_y = true;
  x_3747->var_y = x_3789;
  WriteMetric();
  auto x_3794 = eval_expr_x_3793(x_3747);
  if (x_3747->has_var_height_internal) {
    auto x_3795 = x_3747->var_height_internal;
    if (!EqualValue(x_3795, x_3794)) {
      var_modified_x_3796(x_3747);
    }
  }
  x_3747->has_var_height_internal = true;
  x_3747->var_height_internal = x_3794;
  WriteMetric();
  auto x_3799 = eval_expr_x_3798(x_3747);
  if (x_3747->has_var_height_external) {
    auto x_3800 = x_3747->var_height_external;
    if (!EqualValue(x_3800, x_3799)) {
      var_modified_x_3801(x_3747);
    }
  }
  x_3747->has_var_height_external = true;
  x_3747->var_height_external = x_3799;
  WriteMetric();
  auto x_3804 = eval_expr_x_3803(x_3747);
  if (x_3747->has_var_line_height) {
    auto x_3805 = x_3747->var_line_height;
    if (!EqualValue(x_3805, x_3804)) {
      var_modified_x_3806(x_3747);
    }
  }
  x_3747->has_var_line_height = true;
  x_3747->var_line_height = x_3804;
  return MakeUnit();
}
Unit x_3808(const auto &x_3809) {
  MetaWriteMetric();
  if (!HashtblFindExn(x_3809->meta->RecursiveProcDirtied, std::string("pass_1"))) {
    HashtblSet(x_3809->meta->RecursiveProcDirtied, std::string("pass_1"), true);
    return OptionMatch(
        x_3809->parent, [&](const auto &x_3811) { return MakeUnit(); },
        [&](const auto &x_3810) { return x_3808(x_3810); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_3201(const auto &x_3809) { return x_3808(x_3809); }
Unit x_3812(const auto &x_3813) {
  MetaWriteMetric();
  if (!HashtblFindExn(x_3813->meta->RecursiveProcDirtied, std::string("pass_0"))) {
    HashtblSet(x_3813->meta->RecursiveProcDirtied, std::string("pass_0"), true);
    return OptionMatch(
        x_3813->parent, [&](const auto &x_3815) { return MakeUnit(); },
        [&](const auto &x_3814) { return x_3812(x_3814); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_3161(const auto &x_3813) { return x_3812(x_3813); }
Unit x_3129(const auto &x_3130, const auto &x_3131, const auto &x_3132) {
  auto x_3133 = ListHeadExn(x_3130);
  auto x_3134 = ListTailExn(x_3130);
  if (ListIsEmpty(x_3134)) {
    auto x_3135 = ListSplitN(x_3131->children, x_3133);
    OutputChangeMetric(IntAdd(layout_size_x_3080(ListNthExn(x_3131->children, x_3133)), layout_size_x_3080(x_3132)));
    x_3131->children = ListAppend(Zro(x_3135), Cons(x_3132, ListTailExn(Fst(x_3135))));
    return MakeUnit();
  } else {
    return x_3129(x_3134, ListNthExn(x_3131->children, x_3133), x_3132);
  }
}
Unit replace_layout_node_x_3128(const auto &x_3130, const auto &x_3131, const auto &x_3132) {
  return x_3129(x_3130, x_3131, x_3132);
}
Unit x_3136(const auto &x_3137, const auto &x_3138, const auto &x_3139) {
  auto x_3140 = ListHeadExn(x_3137);
  auto x_3141 = ListTailExn(x_3137);
  if (ListIsEmpty(x_3141)) {
    OutputChangeMetric(layout_size_x_3080(x_3139));
    auto x_3142 = ListSplitN(x_3138->children, x_3140);
    x_3138->children = ListAppend(Zro(x_3142), Cons(x_3139, Fst(x_3142)));
    return MakeUnit();
  } else {
    return x_3136(x_3141, ListNthExn(x_3138->children, x_3140), x_3139);
  }
}
Unit add_layout_node_x_3126(const auto &x_3137, const auto &x_3138, const auto &x_3139) {
  return x_3136(x_3137, x_3138, x_3139);
}
Unit x_3143(const auto &x_3144, const auto &x_3145, const auto &x_3146) {
  auto x_3147 = ListHeadExn(x_3144);
  auto x_3148 = ListTailExn(x_3144);
  if (ListIsEmpty(x_3148)) {
    OutputChangeMetric(layout_size_x_3080(ListNthExn(x_3145->children, x_3147)));
    auto x_3149 = ListSplitN(x_3145->children, x_3147);
    x_3145->children = ListAppend(Zro(x_3149), ListTailExn(Fst(x_3149)));
    return MakeUnit();
  } else {
    return x_3143(x_3148, ListNthExn(x_3145->children, x_3147), x_3146);
  }
}
Unit remove_layout_node_x_3124(const auto &x_3144, const auto &x_3145, const auto &x_3146) {
  return x_3143(x_3144, x_3145, x_3146);
}
Unit x_3150(const auto &x_3151, const auto &x_3152, const auto &x_3153) {
  return ListMatch(
      x_3151,
      [&](const auto &x_3156) {
        auto x_3157 = Zro(x_3153);
        auto x_3158 = Zro(x_3157);
        auto x_3159 = Fst(x_3157);
        auto x_3160 = Fst(x_3153);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9861 = x_3158;
        if (x_9861 == "attributes") {
          std::string x_9862 = x_3159;
          if (x_9862 == "width") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("width"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9862 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("image_height"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9862 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("image_width"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9862 == "height") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("height"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9862 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("viewBox"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9861 == "properties") {
          std::string x_9863 = x_3159;
          if (x_9863 == "width") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("width"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9863 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("flex-grow"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9863 == "height") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("height"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9863 == "display") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("display"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9863 == "position") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("position"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9863 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("flex-shrink"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9863 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("flex-direction"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3154, const auto &x_3155) {
        return x_3150(x_3155, ListNthExn(x_3152->children, x_3154), x_3153);
      });
}
Unit insert_value_x_3122(const auto &x_3151, const auto &x_3152, const auto &x_3153) {
  return x_3150(x_3151, x_3152, x_3153);
}
Unit x_3162(const auto &x_3163, const auto &x_3164, const auto &x_3165) {
  return ListMatch(
      x_3163,
      [&](const auto &x_3168) {
        auto x_3169 = Zro(x_3165);
        auto x_3170 = Fst(x_3165);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9864 = x_3169;
        if (x_9864 == "attributes") {
          std::string x_9865 = x_3170;
          if (x_9865 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("width"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9865 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("image_height"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9865 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("image_width"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9865 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("height"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9865 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("viewBox"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9864 == "properties") {
          std::string x_9866 = x_3170;
          if (x_9866 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("width"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9866 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("flex-grow"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9866 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("height"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9866 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("display"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9866 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("position"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9866 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("flex-shrink"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9866 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("flex-direction"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3166, const auto &x_3167) {
        return x_3162(x_3167, ListNthExn(x_3164->children, x_3166), x_3165);
      });
}
Unit delete_value_x_3120(const auto &x_3163, const auto &x_3164, const auto &x_3165) {
  return x_3162(x_3163, x_3164, x_3165);
}
Unit x_3171(const auto &x_3172, const auto &x_3173, const auto &x_3174) {
  return ListMatch(
      x_3172,
      [&](const auto &x_3177) {
        auto x_3178 = Zro(x_3174);
        auto x_3179 = Zro(x_3178);
        auto x_3180 = Fst(x_3178);
        auto x_3181 = Fst(x_3174);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9867 = x_3179;
        if (x_9867 == "attributes") {
          std::string x_9868 = x_3180;
          if (x_9868 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3173->attr, std::string("width"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->attr, std::string("width"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9868 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3173->attr, std::string("image_height"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->attr, std::string("image_height"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9868 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3173->attr, std::string("image_width"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->attr, std::string("image_width"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9868 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3173->attr, std::string("height"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->attr, std::string("height"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9868 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3173->attr, std::string("viewBox"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->attr, std::string("viewBox"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9867 == "properties") {
          std::string x_9869 = x_3180;
          if (x_9869 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3173->prop, std::string("width"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->prop, std::string("width"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9869 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3173->prop, std::string("flex-grow"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->prop, std::string("flex-grow"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9869 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3173->prop, std::string("height"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->prop, std::string("height"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9869 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3173->prop, std::string("display"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->prop, std::string("display"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9869 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3173->prop, std::string("position"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->prop, std::string("position"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9869 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3173->prop, std::string("flex-shrink"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->prop, std::string("flex-shrink"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_9869 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3173->prop, std::string("flex-direction"));
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_3173->prop, std::string("flex-direction"), x_3181);
            if (HashtblContain(x_3173->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3173->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3173);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3175, const auto &x_3176) {
        return x_3171(x_3176, ListNthExn(x_3173->children, x_3175), x_3174);
      });
}
Unit replace_value_x_3118(const auto &x_3172, const auto &x_3173, const auto &x_3174) {
  return x_3171(x_3172, x_3173, x_3174);
}
Unit x_3182(const auto &x_3183, const auto &x_3184, const auto &x_3185) {
  auto x_3186 = ListHeadExn(x_3183);
  auto x_3187 = ListTailExn(x_3183);
  if (ListIsEmpty(x_3187)) {
    InputChangeMetric(IntAdd(node_size_x_3081(ListNthExn(x_3184->children, x_3186)), node_size_x_3081(x_3185)));
    auto x_3188 = ListSplitN(x_3184->children, x_3186);
    auto x_3189 = Zro(x_3188);
    auto x_3190 = Fst(x_3188);
    auto x_3191 = ListHeadExn(x_3190);
    auto x_3192 = ListTailExn(x_3190);
    OptionMatch(
        x_3191->prev, [&](const auto &x_3194) { return MakeUnit(); },
        [&](const auto &x_3193) {
          x_3193->next = ToPath(x_3191->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3191->next, [&](const auto &x_3196) { return MakeUnit(); },
        [&](const auto &x_3195) {
          x_3195->prev = ToPath(x_3191->prev);
          return MakeUnit();
        });
    x_3184->children = ListAppend(x_3189, x_3192);
    if (ListIsEmpty(x_3189)) {
      x_3184->first = ToPath(ListHead(x_3192));
    }
    if (ListIsEmpty(x_3192)) {
      x_3184->last = ToPath(ListLast(x_3189));
    }
    OptionMatch(
        x_3191->next, [&](const auto &x_3198) { return MakeUnit(); },
        [&](const auto &x_3197) {
          if (HashtblContain(x_3197->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3197->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3161(x_3197);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3184->children)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3192)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3191->next, [&](const auto &x_3200) { return MakeUnit(); },
        [&](const auto &x_3199) {
          if (HashtblContain(x_3199->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3199->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3161(x_3199);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3184->children)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3192)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3191->next, [&](const auto &x_3203) { return MakeUnit(); },
        [&](const auto &x_3202) {
          if (HashtblContain(x_3202->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_3202->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3201(x_3202);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    auto x_3204 = ListSplitN(x_3184->children, x_3186);
    auto x_3205 = Zro(x_3204);
    auto x_3206 = Fst(x_3204);
    x_3184->children = ListAppend(x_3205, Cons(x_3185, x_3206));
    if (ListIsEmpty(x_3205)) {
      x_3184->first = x_3185.get();
    }
    if (ListIsEmpty(x_3206)) {
      x_3184->last = x_3185.get();
    }
    OptionMatch(
        ListLast(x_3205),
        [&](const auto &x_3208) {
          x_3185->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3207) {
          x_3185->prev = x_3207.get();
          x_3207->next = x_3185.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3206),
        [&](const auto &x_3210) {
          x_3185->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3209) {
          x_3185->next = x_3209.get();
          x_3209->prev = x_3185.get();
          return MakeUnit();
        });
    x_3185->parent = x_3184.get();
    HashtblAddExn(x_3185->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    set_recursive_proc_dirtied_x_3161(x_3185);
    OptionMatch(
        x_3185->next, [&](const auto &x_3212) { return MakeUnit(); },
        [&](const auto &x_3211) {
          if (HashtblContain(x_3211->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3211->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3161(x_3211);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_3184->children)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3206)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3185->next, [&](const auto &x_3214) { return MakeUnit(); },
        [&](const auto &x_3213) {
          if (HashtblContain(x_3213->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3213->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3161(x_3213);
          } else {
            return MetaWriteMetric();
          }
        });
    HashtblAddExn(x_3185->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    set_recursive_proc_dirtied_x_3201(x_3185);
    if (ListIsSingleton(x_3184->children)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3206)) {
      if (HashtblContain(x_3184->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3184->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3184);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3185->next, [&](const auto &x_3216) { return MakeUnit(); },
        [&](const auto &x_3215) {
          if (HashtblContain(x_3215->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_3215->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3201(x_3215);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3182(x_3187, ListNthExn(x_3184->children, x_3186), x_3185);
  }
}
Unit replace_node_x_3116(const auto &x_3183, const auto &x_3184, const auto &x_3185) {
  return x_3182(x_3183, x_3184, x_3185);
}
Unit x_3217(const auto &x_3218) {
  ListIter2(x_3218->children, [&](const auto &x_3219, const auto &x_3220) {
    x_3219->parent = x_3218.get();
    x_3220->parent = x_3218.get();
    x_3219->next = x_3220.get();
    x_3220->prev = x_3219.get();
    x_3217(x_3219);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3218->children),
      [&](const auto &x_3222) {
        x_3218->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3221) {
        x_3218->first = x_3221.get();
        x_3221->parent = x_3218.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3218->children),
      [&](const auto &x_3224) {
        x_3218->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3223) {
        x_3218->last = x_3223.get();
        x_3223->parent = x_3218.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3114(const auto &x_3218) { return x_3217(x_3218); }
Unit x_3225(const auto &x_3226, const auto &x_3227, const auto &x_3228) {
  auto x_3229 = ListHeadExn(x_3226);
  auto x_3230 = ListTailExn(x_3226);
  if (ListIsEmpty(x_3230)) {
    InputChangeMetric(node_size_x_3081(ListNthExn(x_3227->children, x_3229)));
    auto x_3231 = ListSplitN(x_3227->children, x_3229);
    auto x_3232 = Zro(x_3231);
    auto x_3233 = Fst(x_3231);
    auto x_3234 = ListHeadExn(x_3233);
    auto x_3235 = ListTailExn(x_3233);
    OptionMatch(
        x_3234->prev, [&](const auto &x_3237) { return MakeUnit(); },
        [&](const auto &x_3236) {
          x_3236->next = ToPath(x_3234->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3234->next, [&](const auto &x_3239) { return MakeUnit(); },
        [&](const auto &x_3238) {
          x_3238->prev = ToPath(x_3234->prev);
          return MakeUnit();
        });
    x_3227->children = ListAppend(x_3232, x_3235);
    if (ListIsEmpty(x_3232)) {
      x_3227->first = ToPath(ListHead(x_3235));
    }
    if (ListIsEmpty(x_3235)) {
      x_3227->last = ToPath(ListLast(x_3232));
    }
    OptionMatch(
        x_3234->next, [&](const auto &x_3241) { return MakeUnit(); },
        [&](const auto &x_3240) {
          if (HashtblContain(x_3240->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3240->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3161(x_3240);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3227->children)) {
      if (HashtblContain(x_3227->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3227->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3227);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3235)) {
      if (HashtblContain(x_3227->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3227->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3227);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3234->next, [&](const auto &x_3243) { return MakeUnit(); },
        [&](const auto &x_3242) {
          if (HashtblContain(x_3242->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3242->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3161(x_3242);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_3227->children)) {
      if (HashtblContain(x_3227->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3227->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3227);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3235)) {
      if (HashtblContain(x_3227->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3227->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3227);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3234->next, [&](const auto &x_3245) { return MakeUnit(); },
        [&](const auto &x_3244) {
          if (HashtblContain(x_3244->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_3244->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3201(x_3244);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_3225(x_3230, ListNthExn(x_3227->children, x_3229), x_3228);
  }
}
Unit remove_node_x_3112(const auto &x_3226, const auto &x_3227, const auto &x_3228) {
  return x_3225(x_3226, x_3227, x_3228);
}
Unit x_3246(const auto &x_3247) {
  ListIter2(x_3247->children, [&](const auto &x_3248, const auto &x_3249) {
    x_3248->parent = x_3247.get();
    x_3249->parent = x_3247.get();
    x_3248->next = x_3249.get();
    x_3249->prev = x_3248.get();
    x_3246(x_3248);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3247->children),
      [&](const auto &x_3251) {
        x_3247->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3250) {
        x_3247->first = x_3250.get();
        x_3250->parent = x_3247.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3247->children),
      [&](const auto &x_3253) {
        x_3247->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3252) {
        x_3247->last = x_3252.get();
        x_3252->parent = x_3247.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3109(const auto &x_3247) { return x_3246(x_3247); }
Unit x_3254(const auto &x_3255) {
  MetaReadMetric();
  if (HashtblFindExn(x_3255->meta->RecursiveProcDirtied, std::string("pass_1"))) {
    if (HashtblContain(x_3255->meta->ProcInited, std::string("pass_1"))) {
      if (HashtblFindExn(x_3255->meta->BBDirtied, std::string("bb_2"))) {
        eval_stmts_x_3256(x_3255);
        HashtblSet(x_3255->meta->BBDirtied, std::string("bb_2"), false);
      }
      ListIter(x_3255->children, [&](const auto &x_3257) { return x_3254(x_3257); });
      MakeUnit();
    } else {
      HashtblAddExn(x_3255->meta->ProcInited, std::string("pass_1"), MakeUnit());
      eval_stmts_x_3094(x_3255);
    }
  }
  HashtblSet(x_3255->meta->RecursiveProcDirtied, std::string("pass_1"), false);
  return MakeUnit();
}
Unit recalculate_internal_x_3107(const auto &x_3255) { return x_3254(x_3255); }
Unit x_3258(const auto &x_3259) {
  MetaReadMetric();
  if (HashtblFindExn(x_3259->meta->RecursiveProcDirtied, std::string("pass_0"))) {
    if (HashtblContain(x_3259->meta->ProcInited, std::string("pass_0"))) {
      if (HashtblFindExn(x_3259->meta->BBDirtied, std::string("bb_1"))) {
        eval_stmts_x_3260(x_3259);
        HashtblSet(x_3259->meta->BBDirtied, std::string("bb_1"), false);
      }
      ListIter(x_3259->children, [&](const auto &x_3261) { return x_3258(x_3261); });
      if (HashtblFindExn(x_3259->meta->BBDirtied, std::string("bb_0"))) {
        eval_stmts_x_3262(x_3259);
        HashtblSet(x_3259->meta->BBDirtied, std::string("bb_0"), false);
      }
      MakeUnit();
    } else {
      HashtblAddExn(x_3259->meta->ProcInited, std::string("pass_0"), MakeUnit());
      eval_stmts_x_3093(x_3259);
    }
  }
  HashtblSet(x_3259->meta->RecursiveProcDirtied, std::string("pass_0"), false);
  return MakeUnit();
}
Unit recalculate_internal_x_3106(const auto &x_3259) { return x_3258(x_3259); }
Unit x_3263(const auto &x_3264, const auto &x_3265, const auto &x_3266) {
  auto x_3267 = ListHeadExn(x_3264);
  auto x_3268 = ListTailExn(x_3264);
  if (ListIsEmpty(x_3268)) {
    InputChangeMetric(node_size_x_3081(x_3266));
    auto x_3269 = ListSplitN(x_3265->children, x_3267);
    auto x_3270 = Zro(x_3269);
    auto x_3271 = Fst(x_3269);
    x_3265->children = ListAppend(x_3270, Cons(x_3266, x_3271));
    if (ListIsEmpty(x_3270)) {
      x_3265->first = x_3266.get();
    }
    if (ListIsEmpty(x_3271)) {
      x_3265->last = x_3266.get();
    }
    OptionMatch(
        ListLast(x_3270),
        [&](const auto &x_3273) {
          x_3266->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3272) {
          x_3266->prev = x_3272.get();
          x_3272->next = x_3266.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3271),
        [&](const auto &x_3275) {
          x_3266->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3274) {
          x_3266->next = x_3274.get();
          x_3274->prev = x_3266.get();
          return MakeUnit();
        });
    x_3266->parent = x_3265.get();
    HashtblAddExn(x_3266->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    set_recursive_proc_dirtied_x_3161(x_3266);
    OptionMatch(
        x_3266->next, [&](const auto &x_3277) { return MakeUnit(); },
        [&](const auto &x_3276) {
          if (HashtblContain(x_3276->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3276->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3161(x_3276);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_3265->children)) {
      if (HashtblContain(x_3265->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3265->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3265);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3271)) {
      if (HashtblContain(x_3265->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_3265->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3161(x_3265);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3266->next, [&](const auto &x_3279) { return MakeUnit(); },
        [&](const auto &x_3278) {
          if (HashtblContain(x_3278->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_3278->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3161(x_3278);
          } else {
            return MetaWriteMetric();
          }
        });
    HashtblAddExn(x_3266->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    set_recursive_proc_dirtied_x_3201(x_3266);
    if (ListIsSingleton(x_3265->children)) {
      if (HashtblContain(x_3265->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3265->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3265);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_3271)) {
      if (HashtblContain(x_3265->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_3265->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3201(x_3265);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_3266->next, [&](const auto &x_3281) { return MakeUnit(); },
        [&](const auto &x_3280) {
          if (HashtblContain(x_3280->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_3280->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3201(x_3280);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_3263(x_3268, ListNthExn(x_3265->children, x_3267), x_3266);
  }
}
Unit add_node_x_3105(const auto &x_3264, const auto &x_3265, const auto &x_3266) {
  return x_3263(x_3264, x_3265, x_3266);
}
Unit x_3282(const auto &x_3283) {
  ListIter2(x_3283->children, [&](const auto &x_3284, const auto &x_3285) {
    x_3284->parent = x_3283.get();
    x_3285->parent = x_3283.get();
    x_3284->next = x_3285.get();
    x_3285->prev = x_3284.get();
    x_3282(x_3284);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3283->children),
      [&](const auto &x_3287) {
        x_3283->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3286) {
        x_3283->first = x_3286.get();
        x_3286->parent = x_3283.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3283->children),
      [&](const auto &x_3289) {
        x_3283->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3288) {
        x_3283->last = x_3288.get();
        x_3288->parent = x_3283.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3103(const auto &x_3283) { return x_3282(x_3283); }
Unit eval_stmts_x_3099(const auto &x_3290) {
  eval_stmts_x_3291(x_3290);
  ListIter(x_3290->children, [&](const auto &x_3292) { return eval_stmts_x_3099(x_3292); });
  return MakeUnit();
}
Unit eval_stmts_x_3098(const auto &x_3293) {
  eval_stmts_x_3294(x_3293);
  ListIter(x_3293->children, [&](const auto &x_3295) { return eval_stmts_x_3098(x_3295); });
  eval_stmts_x_3296(x_3293);
  return MakeUnit();
}
Unit x_3297(const auto &x_3298) {
  ListIter2(x_3298->children, [&](const auto &x_3299, const auto &x_3300) {
    x_3299->parent = x_3298.get();
    x_3300->parent = x_3298.get();
    x_3299->next = x_3300.get();
    x_3300->prev = x_3299.get();
    x_3297(x_3299);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3298->children),
      [&](const auto &x_3302) {
        x_3298->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3301) {
        x_3298->first = x_3301.get();
        x_3301->parent = x_3298.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3298->children),
      [&](const auto &x_3304) {
        x_3298->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3303) {
        x_3298->last = x_3303.get();
        x_3303->parent = x_3298.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3096(const auto &x_3298) { return x_3297(x_3298); }
Unit eval_stmts_x_3094(const auto &x_3305) {
  HashtblSet(x_3305->meta->BBDirtied, std::string("bb_2"), false);
  eval_stmts_x_3256(x_3305);
  ListIter(x_3305->children, [&](const auto &x_3306) {
    HashtblAddExn(x_3306->meta->ProcInited, std::string("pass_1"), MakeUnit());
    HashtblAddExn(x_3306->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    eval_stmts_x_3094(x_3306);
    return MakeUnit();
  });
  return MakeUnit();
}
Unit eval_stmts_x_3093(const auto &x_3307) {
  HashtblSet(x_3307->meta->BBDirtied, std::string("bb_1"), false);
  eval_stmts_x_3260(x_3307);
  ListIter(x_3307->children, [&](const auto &x_3308) {
    HashtblAddExn(x_3308->meta->ProcInited, std::string("pass_0"), MakeUnit());
    HashtblAddExn(x_3308->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    eval_stmts_x_3093(x_3308);
    return MakeUnit();
  });
  HashtblSet(x_3307->meta->BBDirtied, std::string("bb_0"), false);
  eval_stmts_x_3262(x_3307);
  return MakeUnit();
}
Unit x_3309(const auto &x_3310) {
  ListIter2(x_3310->children, [&](const auto &x_3311, const auto &x_3312) {
    x_3311->parent = x_3310.get();
    x_3312->parent = x_3310.get();
    x_3311->next = x_3312.get();
    x_3312->prev = x_3311.get();
    x_3309(x_3311);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3310->children),
      [&](const auto &x_3314) {
        x_3310->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3313) {
        x_3310->first = x_3313.get();
        x_3313->parent = x_3310.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3310->children),
      [&](const auto &x_3316) {
        x_3310->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3315) {
        x_3310->last = x_3315.get();
        x_3315->parent = x_3310.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3090(const auto &x_3310) { return x_3309(x_3310); }
int64_t x_3317(const auto &x_3318) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3318->children, [&](const auto &x_3319) { return x_3317(x_3319); }));
}
int64_t node_size_x_3081(const auto &x_3318) { return x_3317(x_3318); }
int64_t x_3320(const auto &x_3321) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3321->children, [&](const auto &x_3322) { return x_3320(x_3322); }));
}
int64_t layout_size_x_3080(const auto &x_3321) { return x_3320(x_3321); }
LayoutNode x_3323(const auto &x_3324) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_3324)),
                                [&](const auto &x_3325) { return x_3323(x_3325); }));
}
LayoutNode json_to_layout_node_x_3079(const auto &x_3324) { return x_3323(x_3324); }
Node x_3326(const auto &x_3327) {
  return MakeNode(x_3327->name, x_3327->attr, x_3327->prop, x_3327->extern_id,
                  ListMap(x_3327->children, [&](const auto &x_3328) { return x_3326(x_3328); }));
}
Node node_to_fs_node_x_3078(const auto &x_3327) { return x_3326(x_3327); }
Node x_3329(const auto &x_3330) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_3330)), JsonToDict(JsonMember(std::string("attributes"), x_3330)),
      JsonToDict(JsonMember(std::string("properties"), x_3330)), JsonToInt(JsonMember(std::string("id"), x_3330)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_3330)),
              [&](const auto &x_3331) { return x_3329(x_3331); }));
}
Node json_to_node_aux_x_3077(const auto &x_3330) { return x_3329(x_3330); }
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
        std::string x_9870 = x_79;
        if (x_9870 == "attributes") {
          std::string x_9871 = x_80;
          if (x_9871 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_9871 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_height"), x_81);
            return MakeUnit();
          } else if (x_9871 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_width"), x_81);
            return MakeUnit();
          } else if (x_9871 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_9871 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("viewBox"), x_81);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9870 == "properties") {
          std::string x_9872 = x_80;
          if (x_9872 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_9872 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-grow"), x_81);
            return MakeUnit();
          } else if (x_9872 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_9872 == "display") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("display"), x_81);
            return MakeUnit();
          } else if (x_9872 == "position") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("position"), x_81);
            return MakeUnit();
          } else if (x_9872 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-shrink"), x_81);
            return MakeUnit();
          } else if (x_9872 == "flex-direction") {
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
        std::string x_9873 = x_89;
        if (x_9873 == "attributes") {
          std::string x_9874 = x_90;
          if (x_9874 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("width"));
            return MakeUnit();
          } else if (x_9874 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_height"));
            return MakeUnit();
          } else if (x_9874 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_width"));
            return MakeUnit();
          } else if (x_9874 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("height"));
            return MakeUnit();
          } else if (x_9874 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("viewBox"));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9873 == "properties") {
          std::string x_9875 = x_90;
          if (x_9875 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("width"));
            return MakeUnit();
          } else if (x_9875 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-grow"));
            return MakeUnit();
          } else if (x_9875 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("height"));
            return MakeUnit();
          } else if (x_9875 == "display") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("display"));
            return MakeUnit();
          } else if (x_9875 == "position") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("position"));
            return MakeUnit();
          } else if (x_9875 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-shrink"));
            return MakeUnit();
          } else if (x_9875 == "flex-direction") {
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
        std::string x_9876 = x_99;
        if (x_9876 == "attributes") {
          std::string x_9877 = x_100;
          if (x_9877 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_9877 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_height"), x_101);
            return MakeUnit();
          } else if (x_9877 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_width"), x_101);
            return MakeUnit();
          } else if (x_9877 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_9877 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("viewBox"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("viewBox"), x_101);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9876 == "properties") {
          std::string x_9878 = x_100;
          if (x_9878 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_9878 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-grow"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-grow"), x_101);
            return MakeUnit();
          } else if (x_9878 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_9878 == "display") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("display"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("display"), x_101);
            return MakeUnit();
          } else if (x_9878 == "position") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("position"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("position"), x_101);
            return MakeUnit();
          } else if (x_9878 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-shrink"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-shrink"), x_101);
            return MakeUnit();
          } else if (x_9878 == "flex-direction") {
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
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_6276) {
    PrintEndline(std::string("RUNNING PQ"));
    return WithInFile(std::string("command.json"), [&](const auto &x_6277) {
      auto x_6278 = MakeRef(static_cast<int64_t>(0));
      auto x_6279 = FreshMetric();
      auto x_6280 = JsonOfString(InputLine(x_6277));
      auto x_6281 = JsonOfString(InputLine(x_6277));
      auto x_6282 = MakeStack();
      PushStack(x_6282, x_6280);
      PushStack(x_6282, x_6281);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_6280)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_6281)), std::string("layout_init")));
      auto x_6285 = [&]() {
        auto x_6283 = json_to_node_aux_x_6271(JsonMember(std::string("node"), x_6280));
        x_6283->parent = nullptr;
        x_6283->prev = nullptr;
        x_6283->next = nullptr;
        set_children_relation_x_6284(x_6283);
        return x_6283;
      }();
      auto x_6286 = json_to_layout_node_x_6273(JsonMember(std::string("node"), x_6281));
      OutputChangeMetric(layout_size_x_6274(x_6286));
      InputChangeMetric(node_size_x_6275(x_6285));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_6287(x_6285);
      HashtblAddExn(x_6285->meta->ProcTimeTable, std::string("pass_0"), ReadRef(current_time));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_6288(x_6285);
      HashtblAddExn(x_6285->meta->ProcTimeTable, std::string("pass_1"), ReadRef(current_time));
      JsonToChannel(x_6276, [&]() {
        auto x_9879 = FreshJson();
        WriteJson(x_9879, std::string("name"), std::string("PQ"));
        WriteJson(x_9879, std::string("diff_num"), ReadRef(x_6278));
        WriteJson(x_9879, std::string("read_count"), MetricReadCount());
        WriteJson(x_9879, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_9879, std::string("write_count"), MetricWriteCount());
        WriteJson(x_9879, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_9879, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_9879, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_9879, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_9879, std::string("html"), std::string(""));
        WriteJson(x_9879, std::string("command"), StackToList(x_6282));
        return x_9879;
      }());
      OutputString(x_6276, std::string("\n"));
      ClearStack(x_6282);
      WriteRef(x_6278, IntAdd(ReadRef(x_6278), static_cast<int64_t>(1)));
      auto x_6291 = [&]() {
        auto x_6289 = node_to_fs_node_x_6272(x_6285);
        x_6289->parent = nullptr;
        x_6289->prev = nullptr;
        x_6289->next = nullptr;
        set_children_relation_x_6290(x_6289);
        return x_6289;
      }();
      eval_stmts_x_6292(x_6291);
      eval_stmts_x_6293(x_6291);
      AssertNodeValueEqual(x_6285, x_6291);
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_6277, [&](const auto &x_6294) {
        auto x_6295 = JsonOfString(x_6294);
        PushStack(x_6282, x_6295);
        std::string x_9881 = JsonToString(JsonMember(std::string("name"), x_6295));
        if (x_9881 == "add") {
          return add_node_x_6299(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                         [&](const auto &x_6298) { return JsonToInt(x_6298); }),
                                 x_6285, [&]() {
                                   auto x_6296 = json_to_node_aux_x_6271(JsonMember(std::string("node"), x_6295));
                                   x_6296->parent = nullptr;
                                   x_6296->prev = nullptr;
                                   x_6296->next = nullptr;
                                   set_children_relation_x_6297(x_6296);
                                   return x_6296;
                                 }());
        } else if (x_9881 == "recalculate") {
          JsonToChannel(x_6276, [&]() {
            auto x_9880 = FreshJson();
            WriteJson(x_9880, std::string("name"), std::string("PQ"));
            WriteJson(x_9880, std::string("diff_num"), ReadRef(x_6278));
            WriteJson(x_9880, std::string("read_count"), MetricReadCount());
            WriteJson(x_9880, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_9880, std::string("write_count"), MetricWriteCount());
            WriteJson(x_9880, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_9880, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_9880, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_9880, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_9880, std::string("html"), std::string(""));
            WriteJson(x_9880, std::string("command"), StackToList(x_6282));
            return x_9880;
          }());
          OutputString(x_6276, std::string("\n"));
          ClearStack(x_6282);
          WriteRef(x_6278, IntAdd(ReadRef(x_6278), static_cast<int64_t>(1)));
          auto x_6302 = [&]() {
            auto x_6300 = node_to_fs_node_x_6272(x_6285);
            x_6300->parent = nullptr;
            x_6300->prev = nullptr;
            x_6300->next = nullptr;
            set_children_relation_x_6301(x_6300);
            return x_6300;
          }();
          eval_stmts_x_6292(x_6302);
          eval_stmts_x_6293(x_6302);
          AssertNodeValueEqual(x_6285, x_6302);
          ResetMetric();
          return MakeUnit();
        } else if (x_9881 == "remove") {
          return remove_node_x_6304(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                            [&](const auto &x_6303) { return JsonToInt(x_6303); }),
                                    x_6285, MakeUnit());
        } else if (x_9881 == "replace") {
          return replace_node_x_6308(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                             [&](const auto &x_6307) { return JsonToInt(x_6307); }),
                                     x_6285, [&]() {
                                       auto x_6305 = json_to_node_aux_x_6271(JsonMember(std::string("node"), x_6295));
                                       x_6305->parent = nullptr;
                                       x_6305->prev = nullptr;
                                       x_6305->next = nullptr;
                                       set_children_relation_x_6306(x_6305);
                                       return x_6305;
                                     }());
        } else if (x_9881 == "replace_value") {
          return replace_value_x_6310(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                              [&](const auto &x_6309) { return JsonToInt(x_6309); }),
                                      x_6285,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_6295)),
                                                        JsonToString(JsonMember(std::string("key"), x_6295))),
                                               JsonToValue(JsonMember(std::string("value"), x_6295))));
        } else if (x_9881 == "delete_value") {
          return delete_value_x_6312(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                             [&](const auto &x_6311) { return JsonToInt(x_6311); }),
                                     x_6285,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_6295)),
                                              JsonToString(JsonMember(std::string("key"), x_6295))));
        } else if (x_9881 == "insert_value") {
          return insert_value_x_6314(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                             [&](const auto &x_6313) { return JsonToInt(x_6313); }),
                                     x_6285,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_6295)),
                                                       JsonToString(JsonMember(std::string("key"), x_6295))),
                                              JsonToValue(JsonMember(std::string("value"), x_6295))));
        } else if (x_9881 == "layout_remove") {
          return remove_layout_node_x_6316(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                                   [&](const auto &x_6315) { return JsonToInt(x_6315); }),
                                           x_6286, MakeUnit());
        } else if (x_9881 == "layout_add") {
          return add_layout_node_x_6318(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                                [&](const auto &x_6317) { return JsonToInt(x_6317); }),
                                        x_6286, json_to_layout_node_x_6273(JsonMember(std::string("node"), x_6295)));
        } else if (x_9881 == "layout_replace") {
          return replace_layout_node_x_6320(ListMap(JsonToList(JsonMember(std::string("path"), x_6295)),
                                                    [&](const auto &x_6319) { return JsonToInt(x_6319); }),
                                            x_6286,
                                            json_to_layout_node_x_6273(JsonMember(std::string("node"), x_6295)));
        } else if (x_9881 == "layout_info_changed") {
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