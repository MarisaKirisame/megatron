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
Unit var_modified_x_7153(const auto &x_7155) { return MakeUnit(); }
auto eval_expr_x_7150(const auto &x_7159) {
  if ((x_7159->prev != nullptr) && (!(x_7159->prev)->var_line_break)) {
    return max(x_7159->var_height_external, (x_7159->prev)->var_line_height);
  } else {
    return x_7159->var_height_external;
  }
}
Unit var_modified_x_7148(const auto &x_7176) { return MakeUnit(); }
auto eval_expr_x_7145(const auto &x_7178) {
  if (eq(x_7178->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7178->var_height_internal;
  }
}
Unit var_modified_x_7143(const auto &x_7187) { return MakeUnit(); }
auto eval_expr_x_7140(const auto &x_7190) {
  if (x_7190->var_intrinsic_height_is_height) {
    return x_7190->var_intrinsic_height_internal;
  } else {
    if ((x_7190->parent != nullptr) && (x_7190->parent)->var_is_flex_column) {
      return plus(x_7190->var_intrinsic_height_internal,
                  mult(x_7190->var_flex_amount, (x_7190->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_7190->var_height_expr, std::string("%"))) {
        return mult(x_7190->var_box_height,
                    divide(string_to_float(strip_suffix(x_7190->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_7190->var_box_height, x_7190->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_7138(const auto &x_7243) { return MakeUnit(); }
auto eval_expr_x_7135(const auto &x_7248) {
  if (x_7248->prev != nullptr) {
    if (x_7248->var_line_break || (x_7248->prev)->var_line_break) {
      return plus((x_7248->prev)->var_y, (x_7248->prev)->var_line_height);
    } else {
      return (x_7248->prev)->var_y;
    }
  } else {
    if (x_7248->parent != nullptr) {
      return (x_7248->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_7133(const auto &x_7273) { return MakeUnit(); }
auto eval_expr_x_7130(const auto &x_7277) {
  if (eq(x_7277->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7277->var_width_internal;
  }
}
Unit var_modified_x_7128(const auto &x_7286) { return MakeUnit(); }
auto eval_expr_x_7125(const auto &x_7289) {
  if (x_7289->var_intrinsic_width_is_width) {
    return x_7289->var_intrinsic_width_internal;
  } else {
    if ((x_7289->parent != nullptr) && (x_7289->parent)->var_is_flex_row) {
      return plus(x_7289->var_intrinsic_width_internal, mult(x_7289->var_flex_amount, (x_7289->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_7289->var_width_expr, std::string("%"))) {
        return mult(x_7289->var_box_width,
                    divide(string_to_float(strip_suffix(x_7289->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_7289->var_box_width, x_7289->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_7123(const auto &x_7342) { return MakeUnit(); }
auto eval_expr_x_7120(const auto &x_7347) {
  if (x_7347->prev != nullptr) {
    if (x_7347->var_line_break || (x_7347->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_7347->prev)->var_x, (x_7347->prev)->var_width_external);
    }
  } else {
    if (x_7347->parent != nullptr) {
      return (x_7347->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_7118(const auto &x_7368) { return MakeUnit(); }
auto eval_expr_x_7115(const auto &x_7370) {
  if (gt(x_7370->var_left_over, 0.)) {
    return divide(x_7370->var_left_over, x_7370->var_flex_grow_sum);
  } else {
    return divide(x_7370->var_left_over, x_7370->var_flex_shrink_sum);
  }
}
Unit var_modified_x_7113(const auto &x_7391) { return MakeUnit(); }
auto eval_expr_x_7110(const auto &x_7393) {
  if ((x_7393->parent != nullptr) && gt((x_7393->parent)->var_left_over, 0.)) {
    return x_7393->var_flex_grow;
  } else {
    return x_7393->var_flex_shrink;
  }
}
Unit var_modified_x_7108(const auto &x_7406) { return MakeUnit(); }
auto eval_expr_x_7105(const auto &x_7409) {
  if (x_7409->var_is_flex_row) {
    return minus(x_7409->var_box_width, (x_7409->last != nullptr) ? ((x_7409->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_7409->var_box_height, (x_7409->last != nullptr) ? ((x_7409->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_7103(const auto &x_7430) { return MakeUnit(); }
auto eval_expr_x_7100(const auto &x_7432) {
  if (x_7432->parent != nullptr) {
    return (x_7432->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_7098(const auto &x_7437) { return MakeUnit(); }
auto eval_expr_x_7095(const auto &x_7439) {
  if (x_7439->parent != nullptr) {
    return (x_7439->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_7092(const auto &x_7444) { return MakeUnit(); }
auto eval_expr_x_7089(const auto &x_7453) {
  if (eq(x_7453->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_7453->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_7453->parent != nullptr) &&
          (eq((x_7453->parent)->var_display, std::string("flex")) ||
           eq((x_7453->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_7453->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_7453->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_7453->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_7453->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_7453, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_7453, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_7453->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_7453->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_7453->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_7453->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_7453->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_7453->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_7453->var_display, std::string("list-item"))) {
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
Unit var_modified_x_7087(const auto &x_7530) { return MakeUnit(); }
auto eval_expr_x_7084(const auto &x_7532) {
  return (((!(x_7532->parent != nullptr)) || (x_7532->parent)->var_visible) &&
          (neq(x_7532->var_display, std::string("none")) && ((!x_7532->var_inside_svg) && (!x_7532->var_disabled))));
}
Unit var_modified_x_7082(const auto &x_7549) { return MakeUnit(); }
auto eval_expr_x_7079(const auto &x_7553) {
  if (eq(x_7553->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_7553->parent != nullptr) && (x_7553->parent)->var_disabled);
  }
}
Unit var_modified_x_7077(const auto &x_7558) { return MakeUnit(); }
auto eval_expr_x_7074(const auto &x_7562) {
  return ((x_7562->parent != nullptr) && ((x_7562->parent)->var_is_svg_block || (x_7562->parent)->var_inside_svg));
}
Unit var_modified_x_7072(const auto &x_7571) { return MakeUnit(); }
auto eval_expr_x_7069(const auto &x_7573) { return eq(x_7573->name, std::string("svg")); }
Unit var_modified_x_7067(const auto &x_7574) { return MakeUnit(); }
auto eval_expr_x_7064(const auto &x_7576) { return neq(x_7576->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_7062(const auto &x_7581) { return MakeUnit(); }
auto eval_expr_x_7059(const auto &x_7584) {
  if (!HasAttr(x_7584, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_7584, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_7584, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_7584, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_7057(const auto &x_7595) { return MakeUnit(); }
auto eval_expr_x_7054(const auto &x_7597) { return neq(x_7597->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_7052(const auto &x_7602) { return MakeUnit(); }
auto eval_expr_x_7049(const auto &x_7605) {
  if (!HasAttr(x_7605, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_7605, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_7605, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_7605, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_7047(const auto &x_7616) { return MakeUnit(); }
auto eval_expr_x_7044(const auto &x_7619) {
  if ((x_7619->parent != nullptr) &&
      (eq((x_7619->parent)->var_display, std::string("flex")) ||
       eq((x_7619->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_7619->parent)->var_flex_direction, std::string("column")) ||
        eq((x_7619->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_7042(const auto &x_7644) { return MakeUnit(); }
auto eval_expr_x_7039(const auto &x_7648) {
  if ((x_7648->parent != nullptr) &&
      (eq((x_7648->parent)->var_display, std::string("flex")) ||
       eq((x_7648->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_7648->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_7037(const auto &x_7673) { return MakeUnit(); }
auto eval_expr_x_7034(const auto &x_7675) {
  if (HasProp(x_7675, std::string("flex-direction"))) {
    return GetProp<std::string>(x_7675, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_7032(const auto &x_7678) { return MakeUnit(); }
auto eval_expr_x_7029(const auto &x_7683) {
  return plus((x_7683->prev != nullptr) ? ((x_7683->prev)->var_flex_shrink_sum) : (0.), x_7683->var_flex_shrink);
}
Unit var_modified_x_7027(const auto &x_7692) { return MakeUnit(); }
auto eval_expr_x_7024(const auto &x_7697) {
  return plus((x_7697->prev != nullptr) ? ((x_7697->prev)->var_flex_grow_sum) : (0.), x_7697->var_flex_grow);
}
Unit var_modified_x_7022(const auto &x_7706) { return MakeUnit(); }
auto eval_expr_x_7019(const auto &x_7709) {
  if (HasProp(x_7709, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_7709, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_7017(const auto &x_7712) { return MakeUnit(); }
auto eval_expr_x_7014(const auto &x_7715) {
  if (HasProp(x_7715, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_7715, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_7012(const auto &x_7718) { return MakeUnit(); }
auto eval_expr_x_7009(const auto &x_7722) {
  if (HasProp(x_7722, std::string("position"))) {
    return GetProp<std::string>(x_7722, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_7007(const auto &x_7725) { return MakeUnit(); }
auto eval_expr_x_7004(const auto &x_7729) {
  if (HasProp(x_7729, std::string("display"))) {
    return GetProp<std::string>(x_7729, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_7001(const auto &x_7732) { return MakeUnit(); }
auto eval_expr_x_6998(const auto &x_7739) {
  if (x_7739->prev != nullptr) {
    if (x_7739->var_line_break) {
      return plus((x_7739->prev)->var_finished_intrinsic_height_sum,
                  plus((x_7739->prev)->var_intrinsic_current_line_height, x_7739->var_intrinsic_height_external));
    } else {
      return (x_7739->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_7739->var_line_break) {
      return x_7739->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6996(const auto &x_7768) { return MakeUnit(); }
auto eval_expr_x_6993(const auto &x_7775) {
  if (x_7775->var_line_break) {
    return 0.;
  } else {
    return max(x_7775->var_intrinsic_height_external,
               (x_7775->prev != nullptr) ? ((x_7775->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_6991(const auto &x_7788) { return MakeUnit(); }
auto eval_expr_x_6988(const auto &x_7795) {
  return plus((x_7795->prev != nullptr) ? ((x_7795->prev)->var_intrinsic_height_sum) : (0.),
              x_7795->var_intrinsic_height_external);
}
Unit var_modified_x_6986(const auto &x_7804) { return MakeUnit(); }
auto eval_expr_x_6983(const auto &x_7806) {
  if (eq(x_7806->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7806->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_6981(const auto &x_7815) { return MakeUnit(); }
auto eval_expr_x_6978(const auto &x_7818) {
  if (eq(x_7818->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_7818->var_inside_svg) {
      return 0.;
    } else {
      if (x_7818->var_disabled) {
        return 0.;
      } else {
        if (neq(x_7818->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_7818->var_height_expr, std::string("%"))) &&
             neq(x_7818->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_7818->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_7818->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_7818->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_7818->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_7818->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_7818->var_children_intrinsic_height,
              (eq(x_7818->name, std::string("#text")))
                  ? (10.)
                  : ((x_7818->var_is_default_case)
                         ? (0.)
                         : ((eq(x_7818->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_7818->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_7818->name, std::string("svg")))
                                              ? ((x_7818->var_has_height_attr &&
                                                  string_is_float(x_7818->var_height_attr_expr))
                                                     ? (string_to_float(x_7818->var_height_attr_expr))
                                                     : ((HasAttr(x_7818, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_7818, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_7818,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_7818->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_7818->name, std::string("IMG")))
                                                     ? ((x_7818->var_has_height_attr)
                                                            ? (string_to_float(x_7818->var_height_attr_expr))
                                                            : ((HasAttr(x_7818, std::string("image_height")) &&
                                                                (!x_7818->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_7818, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_7818,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_7818->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7818,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7818,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_7818->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_7818->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6976(const auto &x_7963) { return MakeUnit(); }
auto eval_expr_x_6973(const auto &x_7965) {
  if (eq(x_7965->var_display, std::string("none")) || (x_7965->var_inside_svg || x_7965->var_disabled)) {
    return true;
  } else {
    if ((x_7965->parent != nullptr) && (x_7965->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_7965->var_height_expr, std::string("auto")) ||
          (has_suffix(x_7965->var_height_expr, std::string("px")) ||
           (has_suffix(x_7965->var_height_expr, std::string("ch")) ||
            (has_suffix(x_7965->var_height_expr, std::string("lh")) ||
             eq(x_7965->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6971(const auto &x_8014) { return MakeUnit(); }
auto eval_expr_x_6968(const auto &x_8017) {
  if (HasProp(x_8017, std::string("height"))) {
    return GetProp<std::string>(x_8017, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6966(const auto &x_8020) { return MakeUnit(); }
auto eval_expr_x_6963(const auto &x_8022) {
  if (x_8022->last != nullptr) {
    return plus((x_8022->last)->var_finished_intrinsic_height_sum, (x_8022->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6961(const auto &x_8031) { return MakeUnit(); }
auto eval_expr_x_6958(const auto &x_8038) {
  return plus((x_8038->prev != nullptr) ? ((x_8038->prev)->var_intrinsic_width_sum) : (0.),
              x_8038->var_intrinsic_width_external);
}
Unit var_modified_x_6956(const auto &x_8047) { return MakeUnit(); }
auto eval_expr_x_6953(const auto &x_8054) {
  return max(x_8054->var_intrinsic_current_line_width,
             (x_8054->prev != nullptr) ? ((x_8054->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_6951(const auto &x_8063) { return MakeUnit(); }
auto eval_expr_x_6948(const auto &x_8068) {
  return plus(x_8068->var_intrinsic_width_external,
              ((x_8068->prev != nullptr) && (!(x_8068->prev)->var_line_break))
                  ? ((x_8068->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_6946(const auto &x_8081) { return MakeUnit(); }
auto eval_expr_x_6943(const auto &x_8083) {
  if (eq(x_8083->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8083->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_6941(const auto &x_8092) { return MakeUnit(); }
auto eval_expr_x_6938(const auto &x_8095) {
  if (eq(x_8095->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_8095->var_inside_svg) {
      return 0.;
    } else {
      if (x_8095->var_disabled) {
        return 0.;
      } else {
        if (neq(x_8095->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_8095->var_width_expr, std::string("%"))) &&
             (neq(x_8095->var_width_expr, std::string("fit-content")) &&
              (neq(x_8095->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_8095->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_8095->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_8095->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_8095->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_8095->var_children_intrinsic_width,
              (eq(x_8095->name, std::string("#text")))
                  ? (100.)
                  : ((x_8095->var_is_default_case)
                         ? (0.)
                         : ((eq(x_8095->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_8095->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_8095->name, std::string("svg")))
                                              ? ((x_8095->var_has_width_attr &&
                                                  string_is_float(x_8095->var_width_attr_expr))
                                                     ? (string_to_float(x_8095->var_width_attr_expr))
                                                     : (((!x_8095->var_has_width_attr) &&
                                                         HasAttr(x_8095, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_8095, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_8095,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_8095->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_8095->name, std::string("IMG")))
                                                     ? ((x_8095->var_has_width_attr)
                                                            ? (string_to_float(x_8095->var_width_attr_expr))
                                                            : ((HasAttr(x_8095, std::string("image_width")) &&
                                                                (!x_8095->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_8095, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_8095, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_8095->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_8095,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_8095,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_8095->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_8095->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6936(const auto &x_8248) { return MakeUnit(); }
auto eval_expr_x_6933(const auto &x_8250) {
  if (x_8250->last != nullptr) {
    return (x_8250->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_6931(const auto &x_8255) { return MakeUnit(); }
auto eval_expr_x_6928(const auto &x_8257) {
  if (eq(x_8257->var_display, std::string("none")) || (x_8257->var_inside_svg || x_8257->var_disabled)) {
    return true;
  } else {
    if ((x_8257->parent != nullptr) && (x_8257->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_8257->var_width_expr, std::string("auto")) ||
          (has_suffix(x_8257->var_width_expr, std::string("px")) ||
           (has_suffix(x_8257->var_width_expr, std::string("ch")) ||
            (has_prefix(x_8257->var_width_expr, std::string("calc(")) ||
             eq(x_8257->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6926(const auto &x_8306) { return MakeUnit(); }
auto eval_expr_x_6923(const auto &x_8308) {
  if (eq(x_8308->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_8308->var_inside_svg) {
      return true;
    } else {
      if (x_8308->var_disabled) {
        return true;
      } else {if ( eq(x_8308->name,std::string("#document")) || (eq(x_8308->name,std::string("#shadow-root")) || (eq(x_8308->name,std::string("DIV")) || (eq(x_8308->name,std::string("HTML")) || (eq(x_8308->name,std::string("BODY")) || (eq(x_8308->name,std::string("BUTTON")) || (eq(x_8308->name,std::string("FOOTER")) || (eq(x_8308->name,std::string("SELECT")) || (eq(x_8308->name,std::string("SECTION")) || (eq(x_8308->name,std::string("FORM")) || (eq(x_8308->name,std::string("CENTER")) || (eq(x_8308->name,std::string("TD")) || (eq(x_8308->name,std::string("TR")) || (eq(x_8308->name,std::string("TBODY")) || (eq(x_8308->name,std::string("TABLE")) || (eq(x_8308->name,std::string("SPAN")) || (eq(x_8308->name,std::string("FONT")) || (eq(x_8308->name,std::string("A")) || (eq(x_8308->name,std::string("ARTICLE")) || (eq(x_8308->name,std::string("P")) || (eq(x_8308->name,std::string("U")) || (eq(x_8308->name,std::string("UL")) || (eq(x_8308->name,std::string("B")) || (eq(x_8308->name,std::string("H1")) || (eq(x_8308->name,std::string("H2")) || (eq(x_8308->name,std::string("H3")) || (eq(x_8308->name,std::string("H4")) || (eq(x_8308->name,std::string("DT")) || (eq(x_8308->name,std::string("DD")) || (eq(x_8308->name,std::string("DL")) || (eq(x_8308->name,std::string("LI")) || (eq(x_8308->name,std::string("LABEL")) || (eq(x_8308->name,std::string("OL")) || (eq(x_8308->name,std::string("NAV")) || (eq(x_8308->name,std::string("HEADER")) || (eq(x_8308->name,std::string("HEAD")) || (eq(x_8308->name,std::string("SOURCE")) || (eq(x_8308->name,std::string("PICTURE")) || (eq(x_8308->name,std::string("FIGURE")) || (eq(x_8308->name,std::string("FIGCAPTION")) || (eq(x_8308->name,std::string("MAIN")) || (eq(x_8308->name,std::string("REACT-PARTIAL")) || (eq(x_8308->name,std::string("QUERY-BUILDER")) || (eq(x_8308->name,std::string("MODAL-DIALOG")) || (eq(x_8308->name,std::string("SCROLLABLE-REGION")) || (eq(x_8308->name,std::string("DIALOG-HELPER")) || (eq(x_8308->name,std::string("AUTO-CHECK")) || (eq(x_8308->name,std::string("TOOL-TIP")) || (eq(x_8308->name,std::string("CUSTOM-SCOPES")) || (eq(x_8308->name,std::string("QBSEARCH-INPUT")) || (eq(x_8308->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_8308->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_8308->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_8308->name,std::string("GHCC-CONSENT")) || (eq(x_8308->name,std::string("GLOBAL-BANNER")) || (eq(x_8308->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_8308->name,std::string("CARD-SKEW")) || (eq(x_8308->name,std::string("EM")) || (eq(x_8308->name,std::string("ASIDE")) || (eq(x_8308->name,std::string("AUDIO")) || (eq(x_8308->name,std::string("SUP")) || (eq(x_8308->name,std::string("TIME")) || (eq(x_8308->name,std::string("ABBR")) || (eq(x_8308->name,std::string("SMALL")) || (eq(x_8308->name,std::string("SLOT")) || eq(x_8308->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6921(const auto &x_8321) { return MakeUnit(); }
auto eval_expr_x_6918(const auto &x_8324) {
  if (HasProp(x_8324, std::string("width"))) {
    return GetProp<std::string>(x_8324, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6915(const auto &x_8327) {
  auto x_9663 = [&](const auto &x_8330) {
    if (HashtblContain(x_8330->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8331 = HashtblFindExn(x_8330->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8331, x_8330, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8327->next, [&](const auto &x_8329) { return MakeUnit(); },
      [&](const auto &x_8328) {
        auto x_9664 = x_9663;
        x_9664(x_8328);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6912(const auto &x_8333) {
  if ((x_8333->prev != nullptr) && (!(x_8333->prev)->var_line_break)) {
    return max(x_8333->var_height_external, (x_8333->prev)->var_line_height);
  } else {
    return x_8333->var_height_external;
  }
}
Unit var_modified_x_6910(const auto &x_8350) {
  auto x_9665 = [&](const auto &x_8351) {
    if (HashtblContain(x_8351->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8352 = HashtblFindExn(x_8351->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8352, x_8351, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9665(x_8350);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6907(const auto &x_8354) {
  if (eq(x_8354->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8354->var_height_internal;
  }
}
Unit var_modified_x_6905(const auto &x_8363) {
  auto x_9666 = [&](const auto &x_8364) {
    if (HashtblContain(x_8364->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8365 = HashtblFindExn(x_8364->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8365, x_8364, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9666(x_8363);
  MakeUnit();
  ListIter(x_8363->children, [&](const auto &x_8367) {
    if (HashtblContain(x_8367->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8368 = HashtblFindExn(x_8367->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8368, x_8367, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6902(const auto &x_8370) {
  if (x_8370->var_intrinsic_height_is_height) {
    return x_8370->var_intrinsic_height_internal;
  } else {
    if ((x_8370->parent != nullptr) && (x_8370->parent)->var_is_flex_column) {
      return plus(x_8370->var_intrinsic_height_internal,
                  mult(x_8370->var_flex_amount, (x_8370->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8370->var_height_expr, std::string("%"))) {
        return mult(x_8370->var_box_height,
                    divide(string_to_float(strip_suffix(x_8370->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_8370->var_box_height, x_8370->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_6900(const auto &x_8423) {
  ListIter(x_8423->children, [&](const auto &x_8424) {
    if (HashtblContain(x_8424->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8425 = HashtblFindExn(x_8424->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8425, x_8424, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9667 = [&](const auto &x_8429) {
    if (HashtblContain(x_8429->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8430 = HashtblFindExn(x_8429->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8430, x_8429, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8423->next, [&](const auto &x_8428) { return MakeUnit(); },
      [&](const auto &x_8427) {
        auto x_9668 = x_9667;
        x_9668(x_8427);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6897(const auto &x_8432) {
  if (x_8432->prev != nullptr) {
    if (x_8432->var_line_break || (x_8432->prev)->var_line_break) {
      return plus((x_8432->prev)->var_y, (x_8432->prev)->var_line_height);
    } else {
      return (x_8432->prev)->var_y;
    }
  } else {
    if (x_8432->parent != nullptr) {
      return (x_8432->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6895(const auto &x_8457) {
  auto x_9669 = [&](const auto &x_8460) {
    if (HashtblContain(x_8460->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8461 = HashtblFindExn(x_8460->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8461, x_8460, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8457->next, [&](const auto &x_8459) { return MakeUnit(); },
      [&](const auto &x_8458) {
        auto x_9670 = x_9669;
        x_9670(x_8458);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6892(const auto &x_8463) {
  if (eq(x_8463->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8463->var_width_internal;
  }
}
Unit var_modified_x_6890(const auto &x_8472) {
  auto x_9671 = [&](const auto &x_8473) {
    if (HashtblContain(x_8473->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8474 = HashtblFindExn(x_8473->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8474, x_8473, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9671(x_8472);
  MakeUnit();
  ListIter(x_8472->children, [&](const auto &x_8476) {
    if (HashtblContain(x_8476->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8477 = HashtblFindExn(x_8476->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8477, x_8476, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6887(const auto &x_8479) {
  if (x_8479->var_intrinsic_width_is_width) {
    return x_8479->var_intrinsic_width_internal;
  } else {
    if ((x_8479->parent != nullptr) && (x_8479->parent)->var_is_flex_row) {
      return plus(x_8479->var_intrinsic_width_internal, mult(x_8479->var_flex_amount, (x_8479->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8479->var_width_expr, std::string("%"))) {
        return mult(x_8479->var_box_width,
                    divide(string_to_float(strip_suffix(x_8479->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_8479->var_box_width, x_8479->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_6885(const auto &x_8532) {
  ListIter(x_8532->children, [&](const auto &x_8533) {
    if (HashtblContain(x_8533->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8534 = HashtblFindExn(x_8533->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8534, x_8533, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9672 = [&](const auto &x_8538) {
    if (HashtblContain(x_8538->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8539 = HashtblFindExn(x_8538->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8539, x_8538, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8532->next, [&](const auto &x_8537) { return MakeUnit(); },
      [&](const auto &x_8536) {
        auto x_9673 = x_9672;
        x_9673(x_8536);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6882(const auto &x_8541) {
  if (x_8541->prev != nullptr) {
    if (x_8541->var_line_break || (x_8541->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_8541->prev)->var_x, (x_8541->prev)->var_width_external);
    }
  } else {
    if (x_8541->parent != nullptr) {
      return (x_8541->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6880(const auto &x_8562) {
  ListIter(x_8562->children, [&](const auto &x_8563) {
    if (HashtblContain(x_8563->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8564 = HashtblFindExn(x_8563->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8564, x_8563, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6877(const auto &x_8566) {
  if (gt(x_8566->var_left_over, 0.)) {
    return divide(x_8566->var_left_over, x_8566->var_flex_grow_sum);
  } else {
    return divide(x_8566->var_left_over, x_8566->var_flex_shrink_sum);
  }
}
Unit var_modified_x_6875(const auto &x_8587) {
  auto x_9674 = [&](const auto &x_8588) {
    if (HashtblContain(x_8588->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8589 = HashtblFindExn(x_8588->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8589, x_8588, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9674(x_8587);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6872(const auto &x_8591) {
  if ((x_8591->parent != nullptr) && gt((x_8591->parent)->var_left_over, 0.)) {
    return x_8591->var_flex_grow;
  } else {
    return x_8591->var_flex_shrink;
  }
}
Unit var_modified_x_6870(const auto &x_8604) {
  auto x_9675 = [&](const auto &x_8605) {
    if (HashtblContain(x_8605->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8606 = HashtblFindExn(x_8605->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8606, x_8605, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9675(x_8604);
  MakeUnit();
  ListIter(x_8604->children, [&](const auto &x_8608) {
    if (HashtblContain(x_8608->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8609 = HashtblFindExn(x_8608->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8609, x_8608, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6867(const auto &x_8611) {
  if (x_8611->var_is_flex_row) {
    return minus(x_8611->var_box_width, (x_8611->last != nullptr) ? ((x_8611->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_8611->var_box_height, (x_8611->last != nullptr) ? ((x_8611->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_6865(const auto &x_8632) {
  auto x_9676 = [&](const auto &x_8633) {
    if (HashtblContain(x_8633->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8634 = HashtblFindExn(x_8633->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8634, x_8633, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9676(x_8632);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6862(const auto &x_8636) {
  if (x_8636->parent != nullptr) {
    return (x_8636->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_6860(const auto &x_8641) {
  auto x_9677 = [&](const auto &x_8642) {
    if (HashtblContain(x_8642->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8643 = HashtblFindExn(x_8642->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8643, x_8642, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9677(x_8641);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6857(const auto &x_8645) {
  if (x_8645->parent != nullptr) {
    return (x_8645->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_6854(const auto &x_8650) {
  auto x_9678 = [&](const auto &x_8651) {
    if (HashtblContain(x_8651->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8652 = HashtblFindExn(x_8651->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8652, x_8651, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9678(x_8650);
  MakeUnit();
  auto x_9679 = [&](const auto &x_8656) {
    if (HashtblContain(x_8656->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8657 = HashtblFindExn(x_8656->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8657, x_8656, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8650->next, [&](const auto &x_8655) { return MakeUnit(); },
      [&](const auto &x_8654) {
        auto x_9682 = x_9679;
        x_9682(x_8654);
        return MakeUnit();
      });
  auto x_9680 = [&](const auto &x_8659) {
    if (HashtblContain(x_8659->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8660 = HashtblFindExn(x_8659->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8660, x_8659, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9680(x_8650);
  MakeUnit();
  auto x_9681 = [&](const auto &x_8664) {
    if (HashtblContain(x_8664->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8665 = HashtblFindExn(x_8664->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8665, x_8664, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8650->next, [&](const auto &x_8663) { return MakeUnit(); },
      [&](const auto &x_8662) {
        auto x_9683 = x_9681;
        x_9683(x_8662);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6851(const auto &x_8667) {
  if (eq(x_8667->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_8667->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_8667->parent != nullptr) &&
          (eq((x_8667->parent)->var_display, std::string("flex")) ||
           eq((x_8667->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_8667->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_8667->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_8667->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_8667->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_8667, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_8667, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_8667->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_8667->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_8667->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_8667->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_8667->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_8667->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_8667->var_display, std::string("list-item"))) {
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
Unit var_modified_x_6849(const auto &x_8744) {
  ListIter(x_8744->children, [&](const auto &x_8745) {
    if (HashtblContain(x_8745->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8746 = HashtblFindExn(x_8745->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8746, x_8745, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6846(const auto &x_8748) {
  return (((!(x_8748->parent != nullptr)) || (x_8748->parent)->var_visible) &&
          (neq(x_8748->var_display, std::string("none")) && ((!x_8748->var_inside_svg) && (!x_8748->var_disabled))));
}
Unit var_modified_x_6844(const auto &x_8765) {
  auto x_9684 = [&](const auto &x_8766) {
    if (HashtblContain(x_8766->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8767 = HashtblFindExn(x_8766->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8767, x_8766, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9684(x_8765);
  MakeUnit();
  ListIter(x_8765->children, [&](const auto &x_8769) {
    if (HashtblContain(x_8769->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8770 = HashtblFindExn(x_8769->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8770, x_8769, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9685 = [&](const auto &x_8772) {
    if (HashtblContain(x_8772->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8773 = HashtblFindExn(x_8772->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8773, x_8772, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9685(x_8765);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6841(const auto &x_8775) {
  if (eq(x_8775->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_8775->parent != nullptr) && (x_8775->parent)->var_disabled);
  }
}
Unit var_modified_x_6839(const auto &x_8780) {
  auto x_9686 = [&](const auto &x_8781) {
    if (HashtblContain(x_8781->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8782 = HashtblFindExn(x_8781->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8782, x_8781, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9686(x_8780);
  MakeUnit();
  ListIter(x_8780->children, [&](const auto &x_8784) {
    if (HashtblContain(x_8784->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8785 = HashtblFindExn(x_8784->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8785, x_8784, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9687 = [&](const auto &x_8787) {
    if (HashtblContain(x_8787->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8788 = HashtblFindExn(x_8787->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8788, x_8787, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9687(x_8780);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6836(const auto &x_8790) {
  return ((x_8790->parent != nullptr) && ((x_8790->parent)->var_is_svg_block || (x_8790->parent)->var_inside_svg));
}
Unit var_modified_x_6834(const auto &x_8799) {
  ListIter(x_8799->children, [&](const auto &x_8800) {
    if (HashtblContain(x_8800->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8801 = HashtblFindExn(x_8800->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8801, x_8800, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6831(const auto &x_8803) { return eq(x_8803->name, std::string("svg")); }
Unit var_modified_x_6829(const auto &x_8804) {
  auto x_9688 = [&](const auto &x_8805) {
    if (HashtblContain(x_8805->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8806 = HashtblFindExn(x_8805->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8806, x_8805, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9688(x_8804);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6826(const auto &x_8808) { return neq(x_8808->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_6824(const auto &x_8813) {
  auto x_9689 = [&](const auto &x_8814) {
    if (HashtblContain(x_8814->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8815 = HashtblFindExn(x_8814->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8815, x_8814, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9689(x_8813);
  MakeUnit();
  auto x_9690 = [&](const auto &x_8817) {
    if (HashtblContain(x_8817->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8818 = HashtblFindExn(x_8817->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8818, x_8817, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9690(x_8813);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6821(const auto &x_8820) {
  if (!HasAttr(x_8820, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_8820, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_8820, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_8820, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_6819(const auto &x_8831) {
  auto x_9691 = [&](const auto &x_8832) {
    if (HashtblContain(x_8832->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8833 = HashtblFindExn(x_8832->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8833, x_8832, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9691(x_8831);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6816(const auto &x_8835) { return neq(x_8835->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_6814(const auto &x_8840) {
  auto x_9692 = [&](const auto &x_8841) {
    if (HashtblContain(x_8841->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8842 = HashtblFindExn(x_8841->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8842, x_8841, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9692(x_8840);
  MakeUnit();
  auto x_9693 = [&](const auto &x_8844) {
    if (HashtblContain(x_8844->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8845 = HashtblFindExn(x_8844->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8845, x_8844, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9693(x_8840);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6811(const auto &x_8847) {
  if (!HasAttr(x_8847, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_8847, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_8847, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_8847, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_6809(const auto &x_8858) {
  ListIter(x_8858->children, [&](const auto &x_8859) {
    if (HashtblContain(x_8859->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8860 = HashtblFindExn(x_8859->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8860, x_8859, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  ListIter(x_8858->children, [&](const auto &x_8862) {
    if (HashtblContain(x_8862->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8863 = HashtblFindExn(x_8862->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8863, x_8862, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6806(const auto &x_8865) {
  if ((x_8865->parent != nullptr) &&
      (eq((x_8865->parent)->var_display, std::string("flex")) ||
       eq((x_8865->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_8865->parent)->var_flex_direction, std::string("column")) ||
        eq((x_8865->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6804(const auto &x_8890) {
  ListIter(x_8890->children, [&](const auto &x_8891) {
    if (HashtblContain(x_8891->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8892 = HashtblFindExn(x_8891->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8892, x_8891, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9694 = [&](const auto &x_8894) {
    if (HashtblContain(x_8894->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8895 = HashtblFindExn(x_8894->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8895, x_8894, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9694(x_8890);
  MakeUnit();
  ListIter(x_8890->children, [&](const auto &x_8897) {
    if (HashtblContain(x_8897->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8898 = HashtblFindExn(x_8897->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8898, x_8897, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6801(const auto &x_8900) {
  if ((x_8900->parent != nullptr) &&
      (eq((x_8900->parent)->var_display, std::string("flex")) ||
       eq((x_8900->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_8900->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6799(const auto &x_8925) {
  ListIter(x_8925->children, [&](const auto &x_8926) {
    if (HashtblContain(x_8926->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8927 = HashtblFindExn(x_8926->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8927, x_8926, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6796(const auto &x_8929) {
  if (HasProp(x_8929, std::string("flex-direction"))) {
    return GetProp<std::string>(x_8929, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_6794(const auto &x_8932) {
  auto x_9695 = [&](const auto &x_8935) {
    if (HashtblContain(x_8935->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8936 = HashtblFindExn(x_8935->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8936, x_8935, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8932->next, [&](const auto &x_8934) { return MakeUnit(); },
      [&](const auto &x_8933) {
        auto x_9697 = x_9695;
        x_9697(x_8933);
        return MakeUnit();
      });
  auto x_9696 = [&](const auto &x_8938) {
    if (HashtblContain(x_8938->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8939 = HashtblFindExn(x_8938->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8939, x_8938, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9696(x_8932);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6791(const auto &x_8941) {
  return plus((x_8941->prev != nullptr) ? ((x_8941->prev)->var_flex_shrink_sum) : (0.), x_8941->var_flex_shrink);
}
Unit var_modified_x_6789(const auto &x_8950) {
  auto x_9698 = [&](const auto &x_8953) {
    if (HashtblContain(x_8953->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8954 = HashtblFindExn(x_8953->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8954, x_8953, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8950->next, [&](const auto &x_8952) { return MakeUnit(); },
      [&](const auto &x_8951) {
        auto x_9700 = x_9698;
        x_9700(x_8951);
        return MakeUnit();
      });
  auto x_9699 = [&](const auto &x_8956) {
    if (HashtblContain(x_8956->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8957 = HashtblFindExn(x_8956->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8957, x_8956, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9699(x_8950);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6786(const auto &x_8959) {
  return plus((x_8959->prev != nullptr) ? ((x_8959->prev)->var_flex_grow_sum) : (0.), x_8959->var_flex_grow);
}
Unit var_modified_x_6784(const auto &x_8968) {
  auto x_9701 = [&](const auto &x_8969) {
    if (HashtblContain(x_8969->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8970 = HashtblFindExn(x_8969->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8970, x_8969, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9701(x_8968);
  MakeUnit();
  auto x_9702 = [&](const auto &x_8972) {
    if (HashtblContain(x_8972->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8973 = HashtblFindExn(x_8972->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8973, x_8972, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9702(x_8968);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6781(const auto &x_8975) {
  if (HasProp(x_8975, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_8975, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_6779(const auto &x_8978) {
  auto x_9703 = [&](const auto &x_8979) {
    if (HashtblContain(x_8979->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8980 = HashtblFindExn(x_8979->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8980, x_8979, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9703(x_8978);
  MakeUnit();
  auto x_9704 = [&](const auto &x_8982) {
    if (HashtblContain(x_8982->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8983 = HashtblFindExn(x_8982->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8983, x_8982, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9704(x_8978);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6776(const auto &x_8985) {
  if (HasProp(x_8985, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_8985, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_6774(const auto &x_8988) {
  auto x_9705 = [&](const auto &x_8989) {
    if (HashtblContain(x_8989->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_8990 = HashtblFindExn(x_8989->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_8990, x_8989, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9705(x_8988);
  MakeUnit();
  auto x_9706 = [&](const auto &x_8992) {
    if (HashtblContain(x_8992->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8993 = HashtblFindExn(x_8992->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8993, x_8992, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9706(x_8988);
  MakeUnit();
  auto x_9707 = [&](const auto &x_8995) {
    if (HashtblContain(x_8995->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8996 = HashtblFindExn(x_8995->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8996, x_8995, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9707(x_8988);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6771(const auto &x_8998) {
  if (HasProp(x_8998, std::string("position"))) {
    return GetProp<std::string>(x_8998, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_6769(const auto &x_9001) {
  auto x_9708 = [&](const auto &x_9002) {
    if (HashtblContain(x_9002->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_9003 = HashtblFindExn(x_9002->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_9003, x_9002, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9708(x_9001);
  MakeUnit();
  ListIter(x_9001->children, [&](const auto &x_9005) {
    if (HashtblContain(x_9005->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_9006 = HashtblFindExn(x_9005->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_9006, x_9005, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9709 = [&](const auto &x_9008) {
    if (HashtblContain(x_9008->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9009 = HashtblFindExn(x_9008->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9009, x_9008, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9709(x_9001);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6766(const auto &x_9011) {
  if (HasProp(x_9011, std::string("display"))) {
    return GetProp<std::string>(x_9011, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_6763(const auto &x_9014) {
  auto x_9710 = [&](const auto &x_9017) {
    if (HashtblContain(x_9017->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9018 = HashtblFindExn(x_9017->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9018, x_9017, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9014->next != nullptr) {
    auto x_9712 = x_9710;
    OptionMatch(
        x_9014->parent, [&](const auto &x_9016) { return MakeUnit(); },
        [&](const auto &x_9015) {
          auto x_9714 = x_9712;
          x_9714(x_9015);
          return MakeUnit();
        });
  }
  auto x_9711 = [&](const auto &x_9022) {
    if (HashtblContain(x_9022->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9023 = HashtblFindExn(x_9022->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9023, x_9022, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9014->next, [&](const auto &x_9021) { return MakeUnit(); },
      [&](const auto &x_9020) {
        auto x_9713 = x_9711;
        x_9713(x_9020);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6760(const auto &x_9025) {
  if (x_9025->prev != nullptr) {
    if (x_9025->var_line_break) {
      return plus((x_9025->prev)->var_finished_intrinsic_height_sum,
                  plus((x_9025->prev)->var_intrinsic_current_line_height, x_9025->var_intrinsic_height_external));
    } else {
      return (x_9025->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_9025->var_line_break) {
      return x_9025->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6758(const auto &x_9054) {
  auto x_9715 = [&](const auto &x_9057) {
    if (HashtblContain(x_9057->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9058 = HashtblFindExn(x_9057->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9058, x_9057, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9054->next != nullptr) {
    auto x_9717 = x_9715;
    OptionMatch(
        x_9054->parent, [&](const auto &x_9056) { return MakeUnit(); },
        [&](const auto &x_9055) {
          auto x_9719 = x_9717;
          x_9719(x_9055);
          return MakeUnit();
        });
  }
  auto x_9716 = [&](const auto &x_9062) {
    if (HashtblContain(x_9062->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9063 = HashtblFindExn(x_9062->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9063, x_9062, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9054->next, [&](const auto &x_9061) { return MakeUnit(); },
      [&](const auto &x_9060) {
        auto x_9718 = x_9716;
        x_9718(x_9060);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6755(const auto &x_9065) {
  if (x_9065->var_line_break) {
    return 0.;
  } else {
    return max(x_9065->var_intrinsic_height_external,
               (x_9065->prev != nullptr) ? ((x_9065->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_6753(const auto &x_9078) {
  auto x_9720 = [&](const auto &x_9081) {
    if (HashtblContain(x_9081->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9082 = HashtblFindExn(x_9081->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9082, x_9081, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9078->next, [&](const auto &x_9080) { return MakeUnit(); },
      [&](const auto &x_9079) {
        auto x_9722 = x_9720;
        x_9722(x_9079);
        return MakeUnit();
      });
  auto x_9721 = [&](const auto &x_9086) {
    if (HashtblContain(x_9086->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9087 = HashtblFindExn(x_9086->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9087, x_9086, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9078->next != nullptr) {
    auto x_9723 = x_9721;
    OptionMatch(
        x_9078->parent, [&](const auto &x_9085) { return MakeUnit(); },
        [&](const auto &x_9084) {
          auto x_9724 = x_9723;
          x_9724(x_9084);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_6750(const auto &x_9089) {
  return plus((x_9089->prev != nullptr) ? ((x_9089->prev)->var_intrinsic_height_sum) : (0.),
              x_9089->var_intrinsic_height_external);
}
Unit var_modified_x_6748(const auto &x_9098) {
  auto x_9725 = [&](const auto &x_9099) {
    if (HashtblContain(x_9099->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9100 = HashtblFindExn(x_9099->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9100, x_9099, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9725(x_9098);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6745(const auto &x_9102) {
  if (eq(x_9102->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_9102->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_6743(const auto &x_9111) {
  auto x_9726 = [&](const auto &x_9112) {
    if (HashtblContain(x_9112->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9113 = HashtblFindExn(x_9112->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9113, x_9112, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9726(x_9111);
  MakeUnit();
  auto x_9727 = [&](const auto &x_9115) {
    if (HashtblContain(x_9115->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9116 = HashtblFindExn(x_9115->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9116, x_9115, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9727(x_9111);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6740(const auto &x_9118) {
  if (eq(x_9118->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_9118->var_inside_svg) {
      return 0.;
    } else {
      if (x_9118->var_disabled) {
        return 0.;
      } else {
        if (neq(x_9118->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_9118->var_height_expr, std::string("%"))) &&
             neq(x_9118->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_9118->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_9118->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_9118->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_9118->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_9118->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_9118->var_children_intrinsic_height,
              (eq(x_9118->name, std::string("#text")))
                  ? (10.)
                  : ((x_9118->var_is_default_case)
                         ? (0.)
                         : ((eq(x_9118->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_9118->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_9118->name, std::string("svg")))
                                              ? ((x_9118->var_has_height_attr &&
                                                  string_is_float(x_9118->var_height_attr_expr))
                                                     ? (string_to_float(x_9118->var_height_attr_expr))
                                                     : ((HasAttr(x_9118, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_9118, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_9118,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_9118->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_9118->name, std::string("IMG")))
                                                     ? ((x_9118->var_has_height_attr)
                                                            ? (string_to_float(x_9118->var_height_attr_expr))
                                                            : ((HasAttr(x_9118, std::string("image_height")) &&
                                                                (!x_9118->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_9118, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_9118,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_9118->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9118,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9118,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_9118->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_9118->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6738(const auto &x_9263) {
  auto x_9728 = [&](const auto &x_9264) {
    if (HashtblContain(x_9264->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9265 = HashtblFindExn(x_9264->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9265, x_9264, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9728(x_9263);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6735(const auto &x_9267) {
  if (eq(x_9267->var_display, std::string("none")) || (x_9267->var_inside_svg || x_9267->var_disabled)) {
    return true;
  } else {
    if ((x_9267->parent != nullptr) && (x_9267->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_9267->var_height_expr, std::string("auto")) ||
          (has_suffix(x_9267->var_height_expr, std::string("px")) ||
           (has_suffix(x_9267->var_height_expr, std::string("ch")) ||
            (has_suffix(x_9267->var_height_expr, std::string("lh")) ||
             eq(x_9267->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6733(const auto &x_9316) {
  auto x_9729 = [&](const auto &x_9317) {
    if (HashtblContain(x_9317->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9318 = HashtblFindExn(x_9317->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9318, x_9317, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9729(x_9316);
  MakeUnit();
  auto x_9730 = [&](const auto &x_9320) {
    if (HashtblContain(x_9320->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9321 = HashtblFindExn(x_9320->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9321, x_9320, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9730(x_9316);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6730(const auto &x_9323) {
  if (HasProp(x_9323, std::string("height"))) {
    return GetProp<std::string>(x_9323, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6728(const auto &x_9326) {
  auto x_9731 = [&](const auto &x_9327) {
    if (HashtblContain(x_9327->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9328 = HashtblFindExn(x_9327->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9328, x_9327, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9731(x_9326);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6725(const auto &x_9330) {
  if (x_9330->last != nullptr) {
    return plus((x_9330->last)->var_finished_intrinsic_height_sum, (x_9330->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6723(const auto &x_9339) {
  auto x_9732 = [&](const auto &x_9342) {
    if (HashtblContain(x_9342->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9343 = HashtblFindExn(x_9342->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9343, x_9342, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9339->next, [&](const auto &x_9341) { return MakeUnit(); },
      [&](const auto &x_9340) {
        auto x_9734 = x_9732;
        x_9734(x_9340);
        return MakeUnit();
      });
  auto x_9733 = [&](const auto &x_9347) {
    if (HashtblContain(x_9347->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9348 = HashtblFindExn(x_9347->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9348, x_9347, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9339->next != nullptr) {
    auto x_9735 = x_9733;
    OptionMatch(
        x_9339->parent, [&](const auto &x_9346) { return MakeUnit(); },
        [&](const auto &x_9345) {
          auto x_9736 = x_9735;
          x_9736(x_9345);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_6720(const auto &x_9350) {
  return plus((x_9350->prev != nullptr) ? ((x_9350->prev)->var_intrinsic_width_sum) : (0.),
              x_9350->var_intrinsic_width_external);
}
Unit var_modified_x_6718(const auto &x_9359) {
  auto x_9737 = [&](const auto &x_9362) {
    if (HashtblContain(x_9362->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9363 = HashtblFindExn(x_9362->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9363, x_9362, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_9359->next != nullptr) {
    auto x_9739 = x_9737;
    OptionMatch(
        x_9359->parent, [&](const auto &x_9361) { return MakeUnit(); },
        [&](const auto &x_9360) {
          auto x_9741 = x_9739;
          x_9741(x_9360);
          return MakeUnit();
        });
  }
  auto x_9738 = [&](const auto &x_9367) {
    if (HashtblContain(x_9367->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9368 = HashtblFindExn(x_9367->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9368, x_9367, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9359->next, [&](const auto &x_9366) { return MakeUnit(); },
      [&](const auto &x_9365) {
        auto x_9740 = x_9738;
        x_9740(x_9365);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6715(const auto &x_9370) {
  return max(x_9370->var_intrinsic_current_line_width,
             (x_9370->prev != nullptr) ? ((x_9370->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_6713(const auto &x_9379) {
  auto x_9742 = [&](const auto &x_9380) {
    if (HashtblContain(x_9380->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9381 = HashtblFindExn(x_9380->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9381, x_9380, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9742(x_9379);
  MakeUnit();
  auto x_9743 = [&](const auto &x_9385) {
    if (HashtblContain(x_9385->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9386 = HashtblFindExn(x_9385->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9386, x_9385, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_9379->next, [&](const auto &x_9384) { return MakeUnit(); },
      [&](const auto &x_9383) {
        auto x_9744 = x_9743;
        x_9744(x_9383);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6710(const auto &x_9388) {
  return plus(x_9388->var_intrinsic_width_external,
              ((x_9388->prev != nullptr) && (!(x_9388->prev)->var_line_break))
                  ? ((x_9388->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_6708(const auto &x_9401) {
  auto x_9745 = [&](const auto &x_9402) {
    if (HashtblContain(x_9402->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9403 = HashtblFindExn(x_9402->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9403, x_9402, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9745(x_9401);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6705(const auto &x_9405) {
  if (eq(x_9405->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_9405->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_6703(const auto &x_9414) {
  auto x_9746 = [&](const auto &x_9415) {
    if (HashtblContain(x_9415->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9416 = HashtblFindExn(x_9415->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9416, x_9415, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9746(x_9414);
  MakeUnit();
  auto x_9747 = [&](const auto &x_9418) {
    if (HashtblContain(x_9418->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9419 = HashtblFindExn(x_9418->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9419, x_9418, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9747(x_9414);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6700(const auto &x_9421) {
  if (eq(x_9421->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_9421->var_inside_svg) {
      return 0.;
    } else {
      if (x_9421->var_disabled) {
        return 0.;
      } else {
        if (neq(x_9421->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_9421->var_width_expr, std::string("%"))) &&
             (neq(x_9421->var_width_expr, std::string("fit-content")) &&
              (neq(x_9421->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_9421->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_9421->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_9421->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_9421->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_9421->var_children_intrinsic_width,
              (eq(x_9421->name, std::string("#text")))
                  ? (100.)
                  : ((x_9421->var_is_default_case)
                         ? (0.)
                         : ((eq(x_9421->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_9421->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_9421->name, std::string("svg")))
                                              ? ((x_9421->var_has_width_attr &&
                                                  string_is_float(x_9421->var_width_attr_expr))
                                                     ? (string_to_float(x_9421->var_width_attr_expr))
                                                     : (((!x_9421->var_has_width_attr) &&
                                                         HasAttr(x_9421, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_9421, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_9421,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_9421->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_9421->name, std::string("IMG")))
                                                     ? ((x_9421->var_has_width_attr)
                                                            ? (string_to_float(x_9421->var_width_attr_expr))
                                                            : ((HasAttr(x_9421, std::string("image_width")) &&
                                                                (!x_9421->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_9421, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_9421, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_9421->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9421,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9421,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_9421->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_9421->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6698(const auto &x_9574) {
  auto x_9748 = [&](const auto &x_9575) {
    if (HashtblContain(x_9575->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9576 = HashtblFindExn(x_9575->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9576, x_9575, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9748(x_9574);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6695(const auto &x_9578) {
  if (x_9578->last != nullptr) {
    return (x_9578->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_6693(const auto &x_9583) {
  auto x_9749 = [&](const auto &x_9584) {
    if (HashtblContain(x_9584->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9585 = HashtblFindExn(x_9584->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9585, x_9584, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9749(x_9583);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6690(const auto &x_9587) {
  if (eq(x_9587->var_display, std::string("none")) || (x_9587->var_inside_svg || x_9587->var_disabled)) {
    return true;
  } else {
    if ((x_9587->parent != nullptr) && (x_9587->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_9587->var_width_expr, std::string("auto")) ||
          (has_suffix(x_9587->var_width_expr, std::string("px")) ||
           (has_suffix(x_9587->var_width_expr, std::string("ch")) ||
            (has_prefix(x_9587->var_width_expr, std::string("calc(")) ||
             eq(x_9587->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6688(const auto &x_9636) {
  auto x_9750 = [&](const auto &x_9637) {
    if (HashtblContain(x_9637->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9638 = HashtblFindExn(x_9637->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9638, x_9637, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9750(x_9636);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6685(const auto &x_9640) {
  if (eq(x_9640->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_9640->var_inside_svg) {
      return true;
    } else {
      if (x_9640->var_disabled) {
        return true;
      } else {if ( eq(x_9640->name,std::string("#document")) || (eq(x_9640->name,std::string("#shadow-root")) || (eq(x_9640->name,std::string("DIV")) || (eq(x_9640->name,std::string("HTML")) || (eq(x_9640->name,std::string("BODY")) || (eq(x_9640->name,std::string("BUTTON")) || (eq(x_9640->name,std::string("FOOTER")) || (eq(x_9640->name,std::string("SELECT")) || (eq(x_9640->name,std::string("SECTION")) || (eq(x_9640->name,std::string("FORM")) || (eq(x_9640->name,std::string("CENTER")) || (eq(x_9640->name,std::string("TD")) || (eq(x_9640->name,std::string("TR")) || (eq(x_9640->name,std::string("TBODY")) || (eq(x_9640->name,std::string("TABLE")) || (eq(x_9640->name,std::string("SPAN")) || (eq(x_9640->name,std::string("FONT")) || (eq(x_9640->name,std::string("A")) || (eq(x_9640->name,std::string("ARTICLE")) || (eq(x_9640->name,std::string("P")) || (eq(x_9640->name,std::string("U")) || (eq(x_9640->name,std::string("UL")) || (eq(x_9640->name,std::string("B")) || (eq(x_9640->name,std::string("H1")) || (eq(x_9640->name,std::string("H2")) || (eq(x_9640->name,std::string("H3")) || (eq(x_9640->name,std::string("H4")) || (eq(x_9640->name,std::string("DT")) || (eq(x_9640->name,std::string("DD")) || (eq(x_9640->name,std::string("DL")) || (eq(x_9640->name,std::string("LI")) || (eq(x_9640->name,std::string("LABEL")) || (eq(x_9640->name,std::string("OL")) || (eq(x_9640->name,std::string("NAV")) || (eq(x_9640->name,std::string("HEADER")) || (eq(x_9640->name,std::string("HEAD")) || (eq(x_9640->name,std::string("SOURCE")) || (eq(x_9640->name,std::string("PICTURE")) || (eq(x_9640->name,std::string("FIGURE")) || (eq(x_9640->name,std::string("FIGCAPTION")) || (eq(x_9640->name,std::string("MAIN")) || (eq(x_9640->name,std::string("REACT-PARTIAL")) || (eq(x_9640->name,std::string("QUERY-BUILDER")) || (eq(x_9640->name,std::string("MODAL-DIALOG")) || (eq(x_9640->name,std::string("SCROLLABLE-REGION")) || (eq(x_9640->name,std::string("DIALOG-HELPER")) || (eq(x_9640->name,std::string("AUTO-CHECK")) || (eq(x_9640->name,std::string("TOOL-TIP")) || (eq(x_9640->name,std::string("CUSTOM-SCOPES")) || (eq(x_9640->name,std::string("QBSEARCH-INPUT")) || (eq(x_9640->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_9640->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_9640->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_9640->name,std::string("GHCC-CONSENT")) || (eq(x_9640->name,std::string("GLOBAL-BANNER")) || (eq(x_9640->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_9640->name,std::string("CARD-SKEW")) || (eq(x_9640->name,std::string("EM")) || (eq(x_9640->name,std::string("ASIDE")) || (eq(x_9640->name,std::string("AUDIO")) || (eq(x_9640->name,std::string("SUP")) || (eq(x_9640->name,std::string("TIME")) || (eq(x_9640->name,std::string("ABBR")) || (eq(x_9640->name,std::string("SMALL")) || (eq(x_9640->name,std::string("SLOT")) || eq(x_9640->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6683(const auto &x_9653) {
  auto x_9751 = [&](const auto &x_9654) {
    if (HashtblContain(x_9654->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_9655 = HashtblFindExn(x_9654->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_9655, x_9654, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9751(x_9653);
  MakeUnit();
  auto x_9752 = [&](const auto &x_9657) {
    if (HashtblContain(x_9657->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_9658 = HashtblFindExn(x_9657->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_9658, x_9657, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9752(x_9653);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6680(const auto &x_9660) {
  if (HasProp(x_9660, std::string("width"))) {
    return GetProp<std::string>(x_9660, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_6655(const auto &x_6679) {
  WriteMetric();
  auto x_6681 = eval_expr_x_6680(x_6679);
  if (x_6679->has_var_width_expr) {
    auto x_6682 = x_6679->var_width_expr;
    if (!EqualValue(x_6682, x_6681)) {
      var_modified_x_6683(x_6679);
    }
  }
  x_6679->has_var_width_expr = true;
  x_6679->var_width_expr = x_6681;
  WriteMetric();
  auto x_6686 = eval_expr_x_6685(x_6679);
  if (x_6679->has_var_is_default_case) {
    auto x_6687 = x_6679->var_is_default_case;
    if (!EqualValue(x_6687, x_6686)) {
      var_modified_x_6688(x_6679);
    }
  }
  x_6679->has_var_is_default_case = true;
  x_6679->var_is_default_case = x_6686;
  WriteMetric();
  auto x_6691 = eval_expr_x_6690(x_6679);
  if (x_6679->has_var_intrinsic_width_is_width) {
    auto x_6692 = x_6679->var_intrinsic_width_is_width;
    if (!EqualValue(x_6692, x_6691)) {
      var_modified_x_6693(x_6679);
    }
  }
  x_6679->has_var_intrinsic_width_is_width = true;
  x_6679->var_intrinsic_width_is_width = x_6691;
  WriteMetric();
  auto x_6696 = eval_expr_x_6695(x_6679);
  if (x_6679->has_var_children_intrinsic_width) {
    auto x_6697 = x_6679->var_children_intrinsic_width;
    if (!EqualValue(x_6697, x_6696)) {
      var_modified_x_6698(x_6679);
    }
  }
  x_6679->has_var_children_intrinsic_width = true;
  x_6679->var_children_intrinsic_width = x_6696;
  WriteMetric();
  auto x_6701 = eval_expr_x_6700(x_6679);
  if (x_6679->has_var_intrinsic_width_internal) {
    auto x_6702 = x_6679->var_intrinsic_width_internal;
    if (!EqualValue(x_6702, x_6701)) {
      var_modified_x_6703(x_6679);
    }
  }
  x_6679->has_var_intrinsic_width_internal = true;
  x_6679->var_intrinsic_width_internal = x_6701;
  WriteMetric();
  auto x_6706 = eval_expr_x_6705(x_6679);
  if (x_6679->has_var_intrinsic_width_external) {
    auto x_6707 = x_6679->var_intrinsic_width_external;
    if (!EqualValue(x_6707, x_6706)) {
      var_modified_x_6708(x_6679);
    }
  }
  x_6679->has_var_intrinsic_width_external = true;
  x_6679->var_intrinsic_width_external = x_6706;
  WriteMetric();
  auto x_6711 = eval_expr_x_6710(x_6679);
  if (x_6679->has_var_intrinsic_current_line_width) {
    auto x_6712 = x_6679->var_intrinsic_current_line_width;
    if (!EqualValue(x_6712, x_6711)) {
      var_modified_x_6713(x_6679);
    }
  }
  x_6679->has_var_intrinsic_current_line_width = true;
  x_6679->var_intrinsic_current_line_width = x_6711;
  WriteMetric();
  auto x_6716 = eval_expr_x_6715(x_6679);
  if (x_6679->has_var_intrinsic_width_max) {
    auto x_6717 = x_6679->var_intrinsic_width_max;
    if (!EqualValue(x_6717, x_6716)) {
      var_modified_x_6718(x_6679);
    }
  }
  x_6679->has_var_intrinsic_width_max = true;
  x_6679->var_intrinsic_width_max = x_6716;
  WriteMetric();
  auto x_6721 = eval_expr_x_6720(x_6679);
  if (x_6679->has_var_intrinsic_width_sum) {
    auto x_6722 = x_6679->var_intrinsic_width_sum;
    if (!EqualValue(x_6722, x_6721)) {
      var_modified_x_6723(x_6679);
    }
  }
  x_6679->has_var_intrinsic_width_sum = true;
  x_6679->var_intrinsic_width_sum = x_6721;
  WriteMetric();
  auto x_6726 = eval_expr_x_6725(x_6679);
  if (x_6679->has_var_children_intrinsic_height) {
    auto x_6727 = x_6679->var_children_intrinsic_height;
    if (!EqualValue(x_6727, x_6726)) {
      var_modified_x_6728(x_6679);
    }
  }
  x_6679->has_var_children_intrinsic_height = true;
  x_6679->var_children_intrinsic_height = x_6726;
  WriteMetric();
  auto x_6731 = eval_expr_x_6730(x_6679);
  if (x_6679->has_var_height_expr) {
    auto x_6732 = x_6679->var_height_expr;
    if (!EqualValue(x_6732, x_6731)) {
      var_modified_x_6733(x_6679);
    }
  }
  x_6679->has_var_height_expr = true;
  x_6679->var_height_expr = x_6731;
  WriteMetric();
  auto x_6736 = eval_expr_x_6735(x_6679);
  if (x_6679->has_var_intrinsic_height_is_height) {
    auto x_6737 = x_6679->var_intrinsic_height_is_height;
    if (!EqualValue(x_6737, x_6736)) {
      var_modified_x_6738(x_6679);
    }
  }
  x_6679->has_var_intrinsic_height_is_height = true;
  x_6679->var_intrinsic_height_is_height = x_6736;
  WriteMetric();
  auto x_6741 = eval_expr_x_6740(x_6679);
  if (x_6679->has_var_intrinsic_height_internal) {
    auto x_6742 = x_6679->var_intrinsic_height_internal;
    if (!EqualValue(x_6742, x_6741)) {
      var_modified_x_6743(x_6679);
    }
  }
  x_6679->has_var_intrinsic_height_internal = true;
  x_6679->var_intrinsic_height_internal = x_6741;
  WriteMetric();
  auto x_6746 = eval_expr_x_6745(x_6679);
  if (x_6679->has_var_intrinsic_height_external) {
    auto x_6747 = x_6679->var_intrinsic_height_external;
    if (!EqualValue(x_6747, x_6746)) {
      var_modified_x_6748(x_6679);
    }
  }
  x_6679->has_var_intrinsic_height_external = true;
  x_6679->var_intrinsic_height_external = x_6746;
  WriteMetric();
  auto x_6751 = eval_expr_x_6750(x_6679);
  if (x_6679->has_var_intrinsic_height_sum) {
    auto x_6752 = x_6679->var_intrinsic_height_sum;
    if (!EqualValue(x_6752, x_6751)) {
      var_modified_x_6753(x_6679);
    }
  }
  x_6679->has_var_intrinsic_height_sum = true;
  x_6679->var_intrinsic_height_sum = x_6751;
  WriteMetric();
  auto x_6756 = eval_expr_x_6755(x_6679);
  if (x_6679->has_var_intrinsic_current_line_height) {
    auto x_6757 = x_6679->var_intrinsic_current_line_height;
    if (!EqualValue(x_6757, x_6756)) {
      var_modified_x_6758(x_6679);
    }
  }
  x_6679->has_var_intrinsic_current_line_height = true;
  x_6679->var_intrinsic_current_line_height = x_6756;
  WriteMetric();
  auto x_6761 = eval_expr_x_6760(x_6679);
  if (x_6679->has_var_finished_intrinsic_height_sum) {
    auto x_6762 = x_6679->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_6762, x_6761)) {
      var_modified_x_6763(x_6679);
    }
  }
  x_6679->has_var_finished_intrinsic_height_sum = true;
  x_6679->var_finished_intrinsic_height_sum = x_6761;
  return MakeUnit();
}
Unit eval_stmts_x_6653(const auto &x_6765) {
  WriteMetric();
  auto x_6767 = eval_expr_x_6766(x_6765);
  if (x_6765->has_var_display) {
    auto x_6768 = x_6765->var_display;
    if (!EqualValue(x_6768, x_6767)) {
      var_modified_x_6769(x_6765);
    }
  }
  x_6765->has_var_display = true;
  x_6765->var_display = x_6767;
  WriteMetric();
  auto x_6772 = eval_expr_x_6771(x_6765);
  if (x_6765->has_var_position) {
    auto x_6773 = x_6765->var_position;
    if (!EqualValue(x_6773, x_6772)) {
      var_modified_x_6774(x_6765);
    }
  }
  x_6765->has_var_position = true;
  x_6765->var_position = x_6772;
  WriteMetric();
  auto x_6777 = eval_expr_x_6776(x_6765);
  if (x_6765->has_var_flex_grow) {
    auto x_6778 = x_6765->var_flex_grow;
    if (!EqualValue(x_6778, x_6777)) {
      var_modified_x_6779(x_6765);
    }
  }
  x_6765->has_var_flex_grow = true;
  x_6765->var_flex_grow = x_6777;
  WriteMetric();
  auto x_6782 = eval_expr_x_6781(x_6765);
  if (x_6765->has_var_flex_shrink) {
    auto x_6783 = x_6765->var_flex_shrink;
    if (!EqualValue(x_6783, x_6782)) {
      var_modified_x_6784(x_6765);
    }
  }
  x_6765->has_var_flex_shrink = true;
  x_6765->var_flex_shrink = x_6782;
  WriteMetric();
  auto x_6787 = eval_expr_x_6786(x_6765);
  if (x_6765->has_var_flex_grow_sum) {
    auto x_6788 = x_6765->var_flex_grow_sum;
    if (!EqualValue(x_6788, x_6787)) {
      var_modified_x_6789(x_6765);
    }
  }
  x_6765->has_var_flex_grow_sum = true;
  x_6765->var_flex_grow_sum = x_6787;
  WriteMetric();
  auto x_6792 = eval_expr_x_6791(x_6765);
  if (x_6765->has_var_flex_shrink_sum) {
    auto x_6793 = x_6765->var_flex_shrink_sum;
    if (!EqualValue(x_6793, x_6792)) {
      var_modified_x_6794(x_6765);
    }
  }
  x_6765->has_var_flex_shrink_sum = true;
  x_6765->var_flex_shrink_sum = x_6792;
  WriteMetric();
  auto x_6797 = eval_expr_x_6796(x_6765);
  if (x_6765->has_var_flex_direction) {
    auto x_6798 = x_6765->var_flex_direction;
    if (!EqualValue(x_6798, x_6797)) {
      var_modified_x_6799(x_6765);
    }
  }
  x_6765->has_var_flex_direction = true;
  x_6765->var_flex_direction = x_6797;
  WriteMetric();
  auto x_6802 = eval_expr_x_6801(x_6765);
  if (x_6765->has_var_is_flex_row) {
    auto x_6803 = x_6765->var_is_flex_row;
    if (!EqualValue(x_6803, x_6802)) {
      var_modified_x_6804(x_6765);
    }
  }
  x_6765->has_var_is_flex_row = true;
  x_6765->var_is_flex_row = x_6802;
  WriteMetric();
  auto x_6807 = eval_expr_x_6806(x_6765);
  if (x_6765->has_var_is_flex_column) {
    auto x_6808 = x_6765->var_is_flex_column;
    if (!EqualValue(x_6808, x_6807)) {
      var_modified_x_6809(x_6765);
    }
  }
  x_6765->has_var_is_flex_column = true;
  x_6765->var_is_flex_column = x_6807;
  WriteMetric();
  auto x_6812 = eval_expr_x_6811(x_6765);
  if (x_6765->has_var_width_attr_expr) {
    auto x_6813 = x_6765->var_width_attr_expr;
    if (!EqualValue(x_6813, x_6812)) {
      var_modified_x_6814(x_6765);
    }
  }
  x_6765->has_var_width_attr_expr = true;
  x_6765->var_width_attr_expr = x_6812;
  WriteMetric();
  auto x_6817 = eval_expr_x_6816(x_6765);
  if (x_6765->has_var_has_width_attr) {
    auto x_6818 = x_6765->var_has_width_attr;
    if (!EqualValue(x_6818, x_6817)) {
      var_modified_x_6819(x_6765);
    }
  }
  x_6765->has_var_has_width_attr = true;
  x_6765->var_has_width_attr = x_6817;
  WriteMetric();
  auto x_6822 = eval_expr_x_6821(x_6765);
  if (x_6765->has_var_height_attr_expr) {
    auto x_6823 = x_6765->var_height_attr_expr;
    if (!EqualValue(x_6823, x_6822)) {
      var_modified_x_6824(x_6765);
    }
  }
  x_6765->has_var_height_attr_expr = true;
  x_6765->var_height_attr_expr = x_6822;
  WriteMetric();
  auto x_6827 = eval_expr_x_6826(x_6765);
  if (x_6765->has_var_has_height_attr) {
    auto x_6828 = x_6765->var_has_height_attr;
    if (!EqualValue(x_6828, x_6827)) {
      var_modified_x_6829(x_6765);
    }
  }
  x_6765->has_var_has_height_attr = true;
  x_6765->var_has_height_attr = x_6827;
  WriteMetric();
  auto x_6832 = eval_expr_x_6831(x_6765);
  if (x_6765->has_var_is_svg_block) {
    auto x_6833 = x_6765->var_is_svg_block;
    if (!EqualValue(x_6833, x_6832)) {
      var_modified_x_6834(x_6765);
    }
  }
  x_6765->has_var_is_svg_block = true;
  x_6765->var_is_svg_block = x_6832;
  WriteMetric();
  auto x_6837 = eval_expr_x_6836(x_6765);
  if (x_6765->has_var_inside_svg) {
    auto x_6838 = x_6765->var_inside_svg;
    if (!EqualValue(x_6838, x_6837)) {
      var_modified_x_6839(x_6765);
    }
  }
  x_6765->has_var_inside_svg = true;
  x_6765->var_inside_svg = x_6837;
  WriteMetric();
  auto x_6842 = eval_expr_x_6841(x_6765);
  if (x_6765->has_var_disabled) {
    auto x_6843 = x_6765->var_disabled;
    if (!EqualValue(x_6843, x_6842)) {
      var_modified_x_6844(x_6765);
    }
  }
  x_6765->has_var_disabled = true;
  x_6765->var_disabled = x_6842;
  WriteMetric();
  auto x_6847 = eval_expr_x_6846(x_6765);
  if (x_6765->has_var_visible) {
    auto x_6848 = x_6765->var_visible;
    if (!EqualValue(x_6848, x_6847)) {
      var_modified_x_6849(x_6765);
    }
  }
  x_6765->has_var_visible = true;
  x_6765->var_visible = x_6847;
  WriteMetric();
  auto x_6852 = eval_expr_x_6851(x_6765);
  if (x_6765->has_var_line_break) {
    auto x_6853 = x_6765->var_line_break;
    if (!EqualValue(x_6853, x_6852)) {
      var_modified_x_6854(x_6765);
    }
  }
  x_6765->has_var_line_break = true;
  x_6765->var_line_break = x_6852;
  return MakeUnit();
}
Unit eval_stmts_x_6650(const auto &x_6856) {
  WriteMetric();
  auto x_6858 = eval_expr_x_6857(x_6856);
  if (x_6856->has_var_box_width) {
    auto x_6859 = x_6856->var_box_width;
    if (!EqualValue(x_6859, x_6858)) {
      var_modified_x_6860(x_6856);
    }
  }
  x_6856->has_var_box_width = true;
  x_6856->var_box_width = x_6858;
  WriteMetric();
  auto x_6863 = eval_expr_x_6862(x_6856);
  if (x_6856->has_var_box_height) {
    auto x_6864 = x_6856->var_box_height;
    if (!EqualValue(x_6864, x_6863)) {
      var_modified_x_6865(x_6856);
    }
  }
  x_6856->has_var_box_height = true;
  x_6856->var_box_height = x_6863;
  WriteMetric();
  auto x_6868 = eval_expr_x_6867(x_6856);
  if (x_6856->has_var_left_over) {
    auto x_6869 = x_6856->var_left_over;
    if (!EqualValue(x_6869, x_6868)) {
      var_modified_x_6870(x_6856);
    }
  }
  x_6856->has_var_left_over = true;
  x_6856->var_left_over = x_6868;
  WriteMetric();
  auto x_6873 = eval_expr_x_6872(x_6856);
  if (x_6856->has_var_flex_amount) {
    auto x_6874 = x_6856->var_flex_amount;
    if (!EqualValue(x_6874, x_6873)) {
      var_modified_x_6875(x_6856);
    }
  }
  x_6856->has_var_flex_amount = true;
  x_6856->var_flex_amount = x_6873;
  WriteMetric();
  auto x_6878 = eval_expr_x_6877(x_6856);
  if (x_6856->has_var_flex_unit) {
    auto x_6879 = x_6856->var_flex_unit;
    if (!EqualValue(x_6879, x_6878)) {
      var_modified_x_6880(x_6856);
    }
  }
  x_6856->has_var_flex_unit = true;
  x_6856->var_flex_unit = x_6878;
  WriteMetric();
  auto x_6883 = eval_expr_x_6882(x_6856);
  if (x_6856->has_var_x) {
    auto x_6884 = x_6856->var_x;
    if (!EqualValue(x_6884, x_6883)) {
      var_modified_x_6885(x_6856);
    }
  }
  x_6856->has_var_x = true;
  x_6856->var_x = x_6883;
  WriteMetric();
  auto x_6888 = eval_expr_x_6887(x_6856);
  if (x_6856->has_var_width_internal) {
    auto x_6889 = x_6856->var_width_internal;
    if (!EqualValue(x_6889, x_6888)) {
      var_modified_x_6890(x_6856);
    }
  }
  x_6856->has_var_width_internal = true;
  x_6856->var_width_internal = x_6888;
  WriteMetric();
  auto x_6893 = eval_expr_x_6892(x_6856);
  if (x_6856->has_var_width_external) {
    auto x_6894 = x_6856->var_width_external;
    if (!EqualValue(x_6894, x_6893)) {
      var_modified_x_6895(x_6856);
    }
  }
  x_6856->has_var_width_external = true;
  x_6856->var_width_external = x_6893;
  WriteMetric();
  auto x_6898 = eval_expr_x_6897(x_6856);
  if (x_6856->has_var_y) {
    auto x_6899 = x_6856->var_y;
    if (!EqualValue(x_6899, x_6898)) {
      var_modified_x_6900(x_6856);
    }
  }
  x_6856->has_var_y = true;
  x_6856->var_y = x_6898;
  WriteMetric();
  auto x_6903 = eval_expr_x_6902(x_6856);
  if (x_6856->has_var_height_internal) {
    auto x_6904 = x_6856->var_height_internal;
    if (!EqualValue(x_6904, x_6903)) {
      var_modified_x_6905(x_6856);
    }
  }
  x_6856->has_var_height_internal = true;
  x_6856->var_height_internal = x_6903;
  WriteMetric();
  auto x_6908 = eval_expr_x_6907(x_6856);
  if (x_6856->has_var_height_external) {
    auto x_6909 = x_6856->var_height_external;
    if (!EqualValue(x_6909, x_6908)) {
      var_modified_x_6910(x_6856);
    }
  }
  x_6856->has_var_height_external = true;
  x_6856->var_height_external = x_6908;
  WriteMetric();
  auto x_6913 = eval_expr_x_6912(x_6856);
  if (x_6856->has_var_line_height) {
    auto x_6914 = x_6856->var_line_height;
    if (!EqualValue(x_6914, x_6913)) {
      var_modified_x_6915(x_6856);
    }
  }
  x_6856->has_var_line_height = true;
  x_6856->var_line_height = x_6913;
  return MakeUnit();
}
Unit eval_stmts_x_6640(const auto &x_6917) {
  WriteMetric();
  auto x_6919 = eval_expr_x_6918(x_6917);
  if (x_6917->has_var_width_expr) {
    auto x_6920 = x_6917->var_width_expr;
    if (!EqualValue(x_6920, x_6919)) {
      var_modified_x_6921(x_6917);
    }
  }
  x_6917->has_var_width_expr = true;
  x_6917->var_width_expr = x_6919;
  WriteMetric();
  auto x_6924 = eval_expr_x_6923(x_6917);
  if (x_6917->has_var_is_default_case) {
    auto x_6925 = x_6917->var_is_default_case;
    if (!EqualValue(x_6925, x_6924)) {
      var_modified_x_6926(x_6917);
    }
  }
  x_6917->has_var_is_default_case = true;
  x_6917->var_is_default_case = x_6924;
  WriteMetric();
  auto x_6929 = eval_expr_x_6928(x_6917);
  if (x_6917->has_var_intrinsic_width_is_width) {
    auto x_6930 = x_6917->var_intrinsic_width_is_width;
    if (!EqualValue(x_6930, x_6929)) {
      var_modified_x_6931(x_6917);
    }
  }
  x_6917->has_var_intrinsic_width_is_width = true;
  x_6917->var_intrinsic_width_is_width = x_6929;
  WriteMetric();
  auto x_6934 = eval_expr_x_6933(x_6917);
  if (x_6917->has_var_children_intrinsic_width) {
    auto x_6935 = x_6917->var_children_intrinsic_width;
    if (!EqualValue(x_6935, x_6934)) {
      var_modified_x_6936(x_6917);
    }
  }
  x_6917->has_var_children_intrinsic_width = true;
  x_6917->var_children_intrinsic_width = x_6934;
  WriteMetric();
  auto x_6939 = eval_expr_x_6938(x_6917);
  if (x_6917->has_var_intrinsic_width_internal) {
    auto x_6940 = x_6917->var_intrinsic_width_internal;
    if (!EqualValue(x_6940, x_6939)) {
      var_modified_x_6941(x_6917);
    }
  }
  x_6917->has_var_intrinsic_width_internal = true;
  x_6917->var_intrinsic_width_internal = x_6939;
  WriteMetric();
  auto x_6944 = eval_expr_x_6943(x_6917);
  if (x_6917->has_var_intrinsic_width_external) {
    auto x_6945 = x_6917->var_intrinsic_width_external;
    if (!EqualValue(x_6945, x_6944)) {
      var_modified_x_6946(x_6917);
    }
  }
  x_6917->has_var_intrinsic_width_external = true;
  x_6917->var_intrinsic_width_external = x_6944;
  WriteMetric();
  auto x_6949 = eval_expr_x_6948(x_6917);
  if (x_6917->has_var_intrinsic_current_line_width) {
    auto x_6950 = x_6917->var_intrinsic_current_line_width;
    if (!EqualValue(x_6950, x_6949)) {
      var_modified_x_6951(x_6917);
    }
  }
  x_6917->has_var_intrinsic_current_line_width = true;
  x_6917->var_intrinsic_current_line_width = x_6949;
  WriteMetric();
  auto x_6954 = eval_expr_x_6953(x_6917);
  if (x_6917->has_var_intrinsic_width_max) {
    auto x_6955 = x_6917->var_intrinsic_width_max;
    if (!EqualValue(x_6955, x_6954)) {
      var_modified_x_6956(x_6917);
    }
  }
  x_6917->has_var_intrinsic_width_max = true;
  x_6917->var_intrinsic_width_max = x_6954;
  WriteMetric();
  auto x_6959 = eval_expr_x_6958(x_6917);
  if (x_6917->has_var_intrinsic_width_sum) {
    auto x_6960 = x_6917->var_intrinsic_width_sum;
    if (!EqualValue(x_6960, x_6959)) {
      var_modified_x_6961(x_6917);
    }
  }
  x_6917->has_var_intrinsic_width_sum = true;
  x_6917->var_intrinsic_width_sum = x_6959;
  WriteMetric();
  auto x_6964 = eval_expr_x_6963(x_6917);
  if (x_6917->has_var_children_intrinsic_height) {
    auto x_6965 = x_6917->var_children_intrinsic_height;
    if (!EqualValue(x_6965, x_6964)) {
      var_modified_x_6966(x_6917);
    }
  }
  x_6917->has_var_children_intrinsic_height = true;
  x_6917->var_children_intrinsic_height = x_6964;
  WriteMetric();
  auto x_6969 = eval_expr_x_6968(x_6917);
  if (x_6917->has_var_height_expr) {
    auto x_6970 = x_6917->var_height_expr;
    if (!EqualValue(x_6970, x_6969)) {
      var_modified_x_6971(x_6917);
    }
  }
  x_6917->has_var_height_expr = true;
  x_6917->var_height_expr = x_6969;
  WriteMetric();
  auto x_6974 = eval_expr_x_6973(x_6917);
  if (x_6917->has_var_intrinsic_height_is_height) {
    auto x_6975 = x_6917->var_intrinsic_height_is_height;
    if (!EqualValue(x_6975, x_6974)) {
      var_modified_x_6976(x_6917);
    }
  }
  x_6917->has_var_intrinsic_height_is_height = true;
  x_6917->var_intrinsic_height_is_height = x_6974;
  WriteMetric();
  auto x_6979 = eval_expr_x_6978(x_6917);
  if (x_6917->has_var_intrinsic_height_internal) {
    auto x_6980 = x_6917->var_intrinsic_height_internal;
    if (!EqualValue(x_6980, x_6979)) {
      var_modified_x_6981(x_6917);
    }
  }
  x_6917->has_var_intrinsic_height_internal = true;
  x_6917->var_intrinsic_height_internal = x_6979;
  WriteMetric();
  auto x_6984 = eval_expr_x_6983(x_6917);
  if (x_6917->has_var_intrinsic_height_external) {
    auto x_6985 = x_6917->var_intrinsic_height_external;
    if (!EqualValue(x_6985, x_6984)) {
      var_modified_x_6986(x_6917);
    }
  }
  x_6917->has_var_intrinsic_height_external = true;
  x_6917->var_intrinsic_height_external = x_6984;
  WriteMetric();
  auto x_6989 = eval_expr_x_6988(x_6917);
  if (x_6917->has_var_intrinsic_height_sum) {
    auto x_6990 = x_6917->var_intrinsic_height_sum;
    if (!EqualValue(x_6990, x_6989)) {
      var_modified_x_6991(x_6917);
    }
  }
  x_6917->has_var_intrinsic_height_sum = true;
  x_6917->var_intrinsic_height_sum = x_6989;
  WriteMetric();
  auto x_6994 = eval_expr_x_6993(x_6917);
  if (x_6917->has_var_intrinsic_current_line_height) {
    auto x_6995 = x_6917->var_intrinsic_current_line_height;
    if (!EqualValue(x_6995, x_6994)) {
      var_modified_x_6996(x_6917);
    }
  }
  x_6917->has_var_intrinsic_current_line_height = true;
  x_6917->var_intrinsic_current_line_height = x_6994;
  WriteMetric();
  auto x_6999 = eval_expr_x_6998(x_6917);
  if (x_6917->has_var_finished_intrinsic_height_sum) {
    auto x_7000 = x_6917->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_7000, x_6999)) {
      var_modified_x_7001(x_6917);
    }
  }
  x_6917->has_var_finished_intrinsic_height_sum = true;
  x_6917->var_finished_intrinsic_height_sum = x_6999;
  return MakeUnit();
}
Unit eval_stmts_x_6638(const auto &x_7003) {
  WriteMetric();
  auto x_7005 = eval_expr_x_7004(x_7003);
  if (x_7003->has_var_display) {
    auto x_7006 = x_7003->var_display;
    if (!EqualValue(x_7006, x_7005)) {
      var_modified_x_7007(x_7003);
    }
  }
  x_7003->has_var_display = true;
  x_7003->var_display = x_7005;
  WriteMetric();
  auto x_7010 = eval_expr_x_7009(x_7003);
  if (x_7003->has_var_position) {
    auto x_7011 = x_7003->var_position;
    if (!EqualValue(x_7011, x_7010)) {
      var_modified_x_7012(x_7003);
    }
  }
  x_7003->has_var_position = true;
  x_7003->var_position = x_7010;
  WriteMetric();
  auto x_7015 = eval_expr_x_7014(x_7003);
  if (x_7003->has_var_flex_grow) {
    auto x_7016 = x_7003->var_flex_grow;
    if (!EqualValue(x_7016, x_7015)) {
      var_modified_x_7017(x_7003);
    }
  }
  x_7003->has_var_flex_grow = true;
  x_7003->var_flex_grow = x_7015;
  WriteMetric();
  auto x_7020 = eval_expr_x_7019(x_7003);
  if (x_7003->has_var_flex_shrink) {
    auto x_7021 = x_7003->var_flex_shrink;
    if (!EqualValue(x_7021, x_7020)) {
      var_modified_x_7022(x_7003);
    }
  }
  x_7003->has_var_flex_shrink = true;
  x_7003->var_flex_shrink = x_7020;
  WriteMetric();
  auto x_7025 = eval_expr_x_7024(x_7003);
  if (x_7003->has_var_flex_grow_sum) {
    auto x_7026 = x_7003->var_flex_grow_sum;
    if (!EqualValue(x_7026, x_7025)) {
      var_modified_x_7027(x_7003);
    }
  }
  x_7003->has_var_flex_grow_sum = true;
  x_7003->var_flex_grow_sum = x_7025;
  WriteMetric();
  auto x_7030 = eval_expr_x_7029(x_7003);
  if (x_7003->has_var_flex_shrink_sum) {
    auto x_7031 = x_7003->var_flex_shrink_sum;
    if (!EqualValue(x_7031, x_7030)) {
      var_modified_x_7032(x_7003);
    }
  }
  x_7003->has_var_flex_shrink_sum = true;
  x_7003->var_flex_shrink_sum = x_7030;
  WriteMetric();
  auto x_7035 = eval_expr_x_7034(x_7003);
  if (x_7003->has_var_flex_direction) {
    auto x_7036 = x_7003->var_flex_direction;
    if (!EqualValue(x_7036, x_7035)) {
      var_modified_x_7037(x_7003);
    }
  }
  x_7003->has_var_flex_direction = true;
  x_7003->var_flex_direction = x_7035;
  WriteMetric();
  auto x_7040 = eval_expr_x_7039(x_7003);
  if (x_7003->has_var_is_flex_row) {
    auto x_7041 = x_7003->var_is_flex_row;
    if (!EqualValue(x_7041, x_7040)) {
      var_modified_x_7042(x_7003);
    }
  }
  x_7003->has_var_is_flex_row = true;
  x_7003->var_is_flex_row = x_7040;
  WriteMetric();
  auto x_7045 = eval_expr_x_7044(x_7003);
  if (x_7003->has_var_is_flex_column) {
    auto x_7046 = x_7003->var_is_flex_column;
    if (!EqualValue(x_7046, x_7045)) {
      var_modified_x_7047(x_7003);
    }
  }
  x_7003->has_var_is_flex_column = true;
  x_7003->var_is_flex_column = x_7045;
  WriteMetric();
  auto x_7050 = eval_expr_x_7049(x_7003);
  if (x_7003->has_var_width_attr_expr) {
    auto x_7051 = x_7003->var_width_attr_expr;
    if (!EqualValue(x_7051, x_7050)) {
      var_modified_x_7052(x_7003);
    }
  }
  x_7003->has_var_width_attr_expr = true;
  x_7003->var_width_attr_expr = x_7050;
  WriteMetric();
  auto x_7055 = eval_expr_x_7054(x_7003);
  if (x_7003->has_var_has_width_attr) {
    auto x_7056 = x_7003->var_has_width_attr;
    if (!EqualValue(x_7056, x_7055)) {
      var_modified_x_7057(x_7003);
    }
  }
  x_7003->has_var_has_width_attr = true;
  x_7003->var_has_width_attr = x_7055;
  WriteMetric();
  auto x_7060 = eval_expr_x_7059(x_7003);
  if (x_7003->has_var_height_attr_expr) {
    auto x_7061 = x_7003->var_height_attr_expr;
    if (!EqualValue(x_7061, x_7060)) {
      var_modified_x_7062(x_7003);
    }
  }
  x_7003->has_var_height_attr_expr = true;
  x_7003->var_height_attr_expr = x_7060;
  WriteMetric();
  auto x_7065 = eval_expr_x_7064(x_7003);
  if (x_7003->has_var_has_height_attr) {
    auto x_7066 = x_7003->var_has_height_attr;
    if (!EqualValue(x_7066, x_7065)) {
      var_modified_x_7067(x_7003);
    }
  }
  x_7003->has_var_has_height_attr = true;
  x_7003->var_has_height_attr = x_7065;
  WriteMetric();
  auto x_7070 = eval_expr_x_7069(x_7003);
  if (x_7003->has_var_is_svg_block) {
    auto x_7071 = x_7003->var_is_svg_block;
    if (!EqualValue(x_7071, x_7070)) {
      var_modified_x_7072(x_7003);
    }
  }
  x_7003->has_var_is_svg_block = true;
  x_7003->var_is_svg_block = x_7070;
  WriteMetric();
  auto x_7075 = eval_expr_x_7074(x_7003);
  if (x_7003->has_var_inside_svg) {
    auto x_7076 = x_7003->var_inside_svg;
    if (!EqualValue(x_7076, x_7075)) {
      var_modified_x_7077(x_7003);
    }
  }
  x_7003->has_var_inside_svg = true;
  x_7003->var_inside_svg = x_7075;
  WriteMetric();
  auto x_7080 = eval_expr_x_7079(x_7003);
  if (x_7003->has_var_disabled) {
    auto x_7081 = x_7003->var_disabled;
    if (!EqualValue(x_7081, x_7080)) {
      var_modified_x_7082(x_7003);
    }
  }
  x_7003->has_var_disabled = true;
  x_7003->var_disabled = x_7080;
  WriteMetric();
  auto x_7085 = eval_expr_x_7084(x_7003);
  if (x_7003->has_var_visible) {
    auto x_7086 = x_7003->var_visible;
    if (!EqualValue(x_7086, x_7085)) {
      var_modified_x_7087(x_7003);
    }
  }
  x_7003->has_var_visible = true;
  x_7003->var_visible = x_7085;
  WriteMetric();
  auto x_7090 = eval_expr_x_7089(x_7003);
  if (x_7003->has_var_line_break) {
    auto x_7091 = x_7003->var_line_break;
    if (!EqualValue(x_7091, x_7090)) {
      var_modified_x_7092(x_7003);
    }
  }
  x_7003->has_var_line_break = true;
  x_7003->var_line_break = x_7090;
  return MakeUnit();
}
Unit eval_stmts_x_6635(const auto &x_7094) {
  WriteMetric();
  auto x_7096 = eval_expr_x_7095(x_7094);
  if (x_7094->has_var_box_width) {
    auto x_7097 = x_7094->var_box_width;
    if (!EqualValue(x_7097, x_7096)) {
      var_modified_x_7098(x_7094);
    }
  }
  x_7094->has_var_box_width = true;
  x_7094->var_box_width = x_7096;
  WriteMetric();
  auto x_7101 = eval_expr_x_7100(x_7094);
  if (x_7094->has_var_box_height) {
    auto x_7102 = x_7094->var_box_height;
    if (!EqualValue(x_7102, x_7101)) {
      var_modified_x_7103(x_7094);
    }
  }
  x_7094->has_var_box_height = true;
  x_7094->var_box_height = x_7101;
  WriteMetric();
  auto x_7106 = eval_expr_x_7105(x_7094);
  if (x_7094->has_var_left_over) {
    auto x_7107 = x_7094->var_left_over;
    if (!EqualValue(x_7107, x_7106)) {
      var_modified_x_7108(x_7094);
    }
  }
  x_7094->has_var_left_over = true;
  x_7094->var_left_over = x_7106;
  WriteMetric();
  auto x_7111 = eval_expr_x_7110(x_7094);
  if (x_7094->has_var_flex_amount) {
    auto x_7112 = x_7094->var_flex_amount;
    if (!EqualValue(x_7112, x_7111)) {
      var_modified_x_7113(x_7094);
    }
  }
  x_7094->has_var_flex_amount = true;
  x_7094->var_flex_amount = x_7111;
  WriteMetric();
  auto x_7116 = eval_expr_x_7115(x_7094);
  if (x_7094->has_var_flex_unit) {
    auto x_7117 = x_7094->var_flex_unit;
    if (!EqualValue(x_7117, x_7116)) {
      var_modified_x_7118(x_7094);
    }
  }
  x_7094->has_var_flex_unit = true;
  x_7094->var_flex_unit = x_7116;
  WriteMetric();
  auto x_7121 = eval_expr_x_7120(x_7094);
  if (x_7094->has_var_x) {
    auto x_7122 = x_7094->var_x;
    if (!EqualValue(x_7122, x_7121)) {
      var_modified_x_7123(x_7094);
    }
  }
  x_7094->has_var_x = true;
  x_7094->var_x = x_7121;
  WriteMetric();
  auto x_7126 = eval_expr_x_7125(x_7094);
  if (x_7094->has_var_width_internal) {
    auto x_7127 = x_7094->var_width_internal;
    if (!EqualValue(x_7127, x_7126)) {
      var_modified_x_7128(x_7094);
    }
  }
  x_7094->has_var_width_internal = true;
  x_7094->var_width_internal = x_7126;
  WriteMetric();
  auto x_7131 = eval_expr_x_7130(x_7094);
  if (x_7094->has_var_width_external) {
    auto x_7132 = x_7094->var_width_external;
    if (!EqualValue(x_7132, x_7131)) {
      var_modified_x_7133(x_7094);
    }
  }
  x_7094->has_var_width_external = true;
  x_7094->var_width_external = x_7131;
  WriteMetric();
  auto x_7136 = eval_expr_x_7135(x_7094);
  if (x_7094->has_var_y) {
    auto x_7137 = x_7094->var_y;
    if (!EqualValue(x_7137, x_7136)) {
      var_modified_x_7138(x_7094);
    }
  }
  x_7094->has_var_y = true;
  x_7094->var_y = x_7136;
  WriteMetric();
  auto x_7141 = eval_expr_x_7140(x_7094);
  if (x_7094->has_var_height_internal) {
    auto x_7142 = x_7094->var_height_internal;
    if (!EqualValue(x_7142, x_7141)) {
      var_modified_x_7143(x_7094);
    }
  }
  x_7094->has_var_height_internal = true;
  x_7094->var_height_internal = x_7141;
  WriteMetric();
  auto x_7146 = eval_expr_x_7145(x_7094);
  if (x_7094->has_var_height_external) {
    auto x_7147 = x_7094->var_height_external;
    if (!EqualValue(x_7147, x_7146)) {
      var_modified_x_7148(x_7094);
    }
  }
  x_7094->has_var_height_external = true;
  x_7094->var_height_external = x_7146;
  WriteMetric();
  auto x_7151 = eval_expr_x_7150(x_7094);
  if (x_7094->has_var_line_height) {
    auto x_7152 = x_7094->var_line_height;
    if (!EqualValue(x_7152, x_7151)) {
      var_modified_x_7153(x_7094);
    }
  }
  x_7094->has_var_line_height = true;
  x_7094->var_line_height = x_7151;
  return MakeUnit();
}
Unit x_6312(const auto &x_6313, const auto &x_6314, const auto &x_6315) {
  auto x_6316 = ListHeadExn(x_6313);
  auto x_6317 = ListTailExn(x_6313);
  if (ListIsEmpty(x_6317)) {
    auto x_6318 = ListSplitN(x_6314->children, x_6316);
    OutputChangeMetric(IntAdd(layout_size_x_6265(ListNthExn(x_6314->children, x_6316)), layout_size_x_6265(x_6315)));
    x_6314->children = ListAppend(Zro(x_6318), Cons(x_6315, ListTailExn(Fst(x_6318))));
    return MakeUnit();
  } else {
    return x_6312(x_6317, ListNthExn(x_6314->children, x_6316), x_6315);
  }
}
Unit replace_layout_node_x_6311(const auto &x_6313, const auto &x_6314, const auto &x_6315) {
  return x_6312(x_6313, x_6314, x_6315);
}
Unit x_6319(const auto &x_6320, const auto &x_6321, const auto &x_6322) {
  auto x_6323 = ListHeadExn(x_6320);
  auto x_6324 = ListTailExn(x_6320);
  if (ListIsEmpty(x_6324)) {
    OutputChangeMetric(layout_size_x_6265(x_6322));
    auto x_6325 = ListSplitN(x_6321->children, x_6323);
    x_6321->children = ListAppend(Zro(x_6325), Cons(x_6322, Fst(x_6325)));
    return MakeUnit();
  } else {
    return x_6319(x_6324, ListNthExn(x_6321->children, x_6323), x_6322);
  }
}
Unit add_layout_node_x_6309(const auto &x_6320, const auto &x_6321, const auto &x_6322) {
  return x_6319(x_6320, x_6321, x_6322);
}
Unit x_6326(const auto &x_6327, const auto &x_6328, const auto &x_6329) {
  auto x_6330 = ListHeadExn(x_6327);
  auto x_6331 = ListTailExn(x_6327);
  if (ListIsEmpty(x_6331)) {
    OutputChangeMetric(layout_size_x_6265(ListNthExn(x_6328->children, x_6330)));
    auto x_6332 = ListSplitN(x_6328->children, x_6330);
    x_6328->children = ListAppend(Zro(x_6332), ListTailExn(Fst(x_6332)));
    return MakeUnit();
  } else {
    return x_6326(x_6331, ListNthExn(x_6328->children, x_6330), x_6329);
  }
}
Unit remove_layout_node_x_6307(const auto &x_6327, const auto &x_6328, const auto &x_6329) {
  return x_6326(x_6327, x_6328, x_6329);
}
Unit x_6333(const auto &x_6334, const auto &x_6335, const auto &x_6336) {
  return ListMatch(
      x_6334,
      [&](const auto &x_6339) {
        auto x_6340 = Zro(x_6336);
        auto x_6341 = Zro(x_6340);
        auto x_6342 = Fst(x_6340);
        auto x_6343 = Fst(x_6336);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9753 = x_6341;
        if (x_9753 == "attributes") {
          std::string x_9754 = x_6342;
          if (x_9754 == "width") {
            WriteMetric();
            HashtblAddExn(x_6335->attr, std::string("width"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6344 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6344, x_6335, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9754 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_6335->attr, std::string("image_height"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6346 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6346, x_6335, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9754 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_6335->attr, std::string("image_width"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6348 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6348, x_6335, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9754 == "height") {
            WriteMetric();
            HashtblAddExn(x_6335->attr, std::string("height"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6350 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6350, x_6335, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9754 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_6335->attr, std::string("viewBox"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6352 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6352, x_6335, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9753 == "properties") {
          std::string x_9755 = x_6342;
          if (x_9755 == "width") {
            WriteMetric();
            HashtblAddExn(x_6335->prop, std::string("width"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6354 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6354, x_6335, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9755 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_6335->prop, std::string("flex-grow"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6356 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6356, x_6335, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9755 == "height") {
            WriteMetric();
            HashtblAddExn(x_6335->prop, std::string("height"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6358 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6358, x_6335, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9755 == "display") {
            WriteMetric();
            HashtblAddExn(x_6335->prop, std::string("display"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6360 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6360, x_6335, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9755 == "position") {
            WriteMetric();
            HashtblAddExn(x_6335->prop, std::string("position"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6362 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6362, x_6335, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9755 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_6335->prop, std::string("flex-shrink"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6364 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6364, x_6335, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9755 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_6335->prop, std::string("flex-direction"), x_6343);
            if (HashtblContain(x_6335->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6366 = HashtblFindExn(x_6335->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6366, x_6335, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6337, const auto &x_6338) {
        return x_6333(x_6338, ListNthExn(x_6335->children, x_6337), x_6336);
      });
}
Unit insert_value_x_6305(const auto &x_6334, const auto &x_6335, const auto &x_6336) {
  return x_6333(x_6334, x_6335, x_6336);
}
Unit x_6368(const auto &x_6369, const auto &x_6370, const auto &x_6371) {
  return ListMatch(
      x_6369,
      [&](const auto &x_6374) {
        auto x_6375 = Zro(x_6371);
        auto x_6376 = Fst(x_6371);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9756 = x_6375;
        if (x_9756 == "attributes") {
          std::string x_9757 = x_6376;
          if (x_9757 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6370->attr, std::string("width"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6377 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6377, x_6370, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9757 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_6370->attr, std::string("image_height"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6379 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6379, x_6370, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9757 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_6370->attr, std::string("image_width"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6381 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6381, x_6370, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9757 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6370->attr, std::string("height"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6383 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6383, x_6370, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9757 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_6370->attr, std::string("viewBox"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6385 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6385, x_6370, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9756 == "properties") {
          std::string x_9758 = x_6376;
          if (x_9758 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6370->prop, std::string("width"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6387 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6387, x_6370, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9758 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_6370->prop, std::string("flex-grow"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6389 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6389, x_6370, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9758 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6370->prop, std::string("height"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6391 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6391, x_6370, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9758 == "display") {
            WriteMetric();
            HashtblForceRemove(x_6370->prop, std::string("display"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6393 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6393, x_6370, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9758 == "position") {
            WriteMetric();
            HashtblForceRemove(x_6370->prop, std::string("position"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6395 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6395, x_6370, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9758 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_6370->prop, std::string("flex-shrink"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6397 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6397, x_6370, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9758 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_6370->prop, std::string("flex-direction"));
            if (HashtblContain(x_6370->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6399 = HashtblFindExn(x_6370->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6399, x_6370, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6372, const auto &x_6373) {
        return x_6368(x_6373, ListNthExn(x_6370->children, x_6372), x_6371);
      });
}
Unit delete_value_x_6303(const auto &x_6369, const auto &x_6370, const auto &x_6371) {
  return x_6368(x_6369, x_6370, x_6371);
}
Unit x_6401(const auto &x_6402, const auto &x_6403, const auto &x_6404) {
  return ListMatch(
      x_6402,
      [&](const auto &x_6407) {
        auto x_6408 = Zro(x_6404);
        auto x_6409 = Zro(x_6408);
        auto x_6410 = Fst(x_6408);
        auto x_6411 = Fst(x_6404);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9759 = x_6409;
        if (x_9759 == "attributes") {
          std::string x_9760 = x_6410;
          if (x_9760 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6403->attr, std::string("width"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6412 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6412, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->attr, std::string("width"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6414 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6414, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9760 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_6403->attr, std::string("image_height"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6416 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6416, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->attr, std::string("image_height"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6418 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6418, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9760 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_6403->attr, std::string("image_width"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6420 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6420, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->attr, std::string("image_width"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6422 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6422, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9760 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6403->attr, std::string("height"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6424 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6424, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->attr, std::string("height"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6426 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6426, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9760 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_6403->attr, std::string("viewBox"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6428 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6428, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->attr, std::string("viewBox"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6430 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6430, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9759 == "properties") {
          std::string x_9761 = x_6410;
          if (x_9761 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6403->prop, std::string("width"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6432 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6432, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->prop, std::string("width"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6434 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6434, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9761 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_6403->prop, std::string("flex-grow"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6436 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6436, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->prop, std::string("flex-grow"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6438 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6438, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9761 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6403->prop, std::string("height"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6440 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6440, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->prop, std::string("height"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6442 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6442, x_6403, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9761 == "display") {
            WriteMetric();
            HashtblForceRemove(x_6403->prop, std::string("display"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6444 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6444, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->prop, std::string("display"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6446 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6446, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9761 == "position") {
            WriteMetric();
            HashtblForceRemove(x_6403->prop, std::string("position"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6448 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6448, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->prop, std::string("position"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6450 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6450, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9761 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_6403->prop, std::string("flex-shrink"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6452 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6452, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->prop, std::string("flex-shrink"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6454 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6454, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9761 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_6403->prop, std::string("flex-direction"));
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6456 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6456, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6403->prop, std::string("flex-direction"), x_6411);
            if (HashtblContain(x_6403->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6458 = HashtblFindExn(x_6403->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6458, x_6403, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6405, const auto &x_6406) {
        return x_6401(x_6406, ListNthExn(x_6403->children, x_6405), x_6404);
      });
}
Unit replace_value_x_6301(const auto &x_6402, const auto &x_6403, const auto &x_6404) {
  return x_6401(x_6402, x_6403, x_6404);
}
Unit x_6460(const auto &x_6461, const auto &x_6462, const auto &x_6463) {
  auto x_6464 = ListHeadExn(x_6461);
  auto x_6465 = ListTailExn(x_6461);
  if (ListIsEmpty(x_6465)) {
    InputChangeMetric(IntAdd(node_size_x_6266(ListNthExn(x_6462->children, x_6464)), node_size_x_6266(x_6463)));
    auto x_6466 = ListSplitN(x_6462->children, x_6464);
    auto x_6467 = Zro(x_6466);
    auto x_6468 = Fst(x_6466);
    auto x_6469 = ListHeadExn(x_6468);
    auto x_6470 = ListTailExn(x_6468);
    OptionMatch(
        x_6469->prev, [&](const auto &x_6472) { return MakeUnit(); },
        [&](const auto &x_6471) {
          x_6471->next = ToPath(x_6469->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6469->next, [&](const auto &x_6474) { return MakeUnit(); },
        [&](const auto &x_6473) {
          x_6473->prev = ToPath(x_6469->prev);
          return MakeUnit();
        });
    x_6469->meta->alive = false;
    x_6462->children = ListAppend(x_6467, x_6470);
    if (ListIsEmpty(x_6467)) {
      x_6462->first = ToPath(ListHead(x_6470));
    }
    if (ListIsEmpty(x_6470)) {
      x_6462->last = ToPath(ListLast(x_6467));
    }
    OptionMatch(
        x_6469->next, [&](const auto &x_6478) { return MakeUnit(); },
        [&](const auto &x_6475) {
          if (HashtblContain(x_6475->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6476 = HashtblFindExn(x_6475->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6476, x_6475, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6462->children)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6479 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6479, x_6462, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6470)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6481 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6481, x_6462, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6469->next, [&](const auto &x_6486) { return MakeUnit(); },
        [&](const auto &x_6483) {
          if (HashtblContain(x_6483->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6484 = HashtblFindExn(x_6483->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6484, x_6483, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6462->children)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6487 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6487, x_6462, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6470)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6489 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6489, x_6462, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6469->next, [&](const auto &x_6494) { return MakeUnit(); },
        [&](const auto &x_6491) {
          if (HashtblContain(x_6491->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6492 = HashtblFindExn(x_6491->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6492, x_6491, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_6495 = ListSplitN(x_6462->children, x_6464);
    auto x_6496 = Zro(x_6495);
    auto x_6497 = Fst(x_6495);
    x_6462->children = ListAppend(x_6496, Cons(x_6463, x_6497));
    if (ListIsEmpty(x_6496)) {
      x_6462->first = x_6463.get();
    }
    if (ListIsEmpty(x_6497)) {
      x_6462->last = x_6463.get();
    }
    OptionMatch(
        ListLast(x_6496),
        [&](const auto &x_6499) {
          x_6463->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6498) {
          x_6463->prev = x_6498.get();
          x_6498->next = x_6463.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6497),
        [&](const auto &x_6501) {
          x_6463->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6500) {
          x_6463->next = x_6500.get();
          x_6500->prev = x_6463.get();
          return MakeUnit();
        });
    x_6463->parent = x_6462.get();
    auto x_6502 = (x_6463->parent);
    if (HashtblContain(x_6502->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_6505 = OptionMatch(
          x_6463->prev,
          [&](const auto &x_6504) {
            return NextTotalOrder(HashtblFindExn(x_6502->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_6503) {
            return NextTotalOrder(HashtblFindExn(x_6503->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_6463->meta->ProcTimeTable, std::string("pass_0"), x_6505);
      MetaWriteMetric();
      QueueForcePush(x_6505, x_6463, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_6463->next, [&](const auto &x_6510) { return MakeUnit(); },
        [&](const auto &x_6507) {
          if (HashtblContain(x_6507->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6508 = HashtblFindExn(x_6507->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6508, x_6507, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_6462->children)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6511 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6511, x_6462, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6497)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6513 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6513, x_6462, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6463->next, [&](const auto &x_6518) { return MakeUnit(); },
        [&](const auto &x_6515) {
          if (HashtblContain(x_6515->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6516 = HashtblFindExn(x_6515->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6516, x_6515, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_6519 = (x_6463->parent);
    if (HashtblContain(x_6519->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_6522 = OptionMatch(
          x_6463->prev,
          [&](const auto &x_6521) {
            return NextTotalOrder(HashtblFindExn(x_6519->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_6520) {
            return NextTotalOrder(HashtblFindExn(x_6520->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_6463->meta->ProcTimeTable, std::string("pass_1"), x_6522);
      MetaWriteMetric();
      QueueForcePush(x_6522, x_6463, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_6462->children)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6524 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6524, x_6462, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6497)) {
      if (HashtblContain(x_6462->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6526 = HashtblFindExn(x_6462->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6526, x_6462, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6463->next, [&](const auto &x_6531) { return MakeUnit(); },
        [&](const auto &x_6528) {
          if (HashtblContain(x_6528->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6529 = HashtblFindExn(x_6528->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6529, x_6528, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_6460(x_6465, ListNthExn(x_6462->children, x_6464), x_6463);
  }
}
Unit replace_node_x_6299(const auto &x_6461, const auto &x_6462, const auto &x_6463) {
  return x_6460(x_6461, x_6462, x_6463);
}
Unit x_6532(const auto &x_6533) {
  ListIter2(x_6533->children, [&](const auto &x_6534, const auto &x_6535) {
    x_6534->parent = x_6533.get();
    x_6535->parent = x_6533.get();
    x_6534->next = x_6535.get();
    x_6535->prev = x_6534.get();
    x_6532(x_6534);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6533->children),
      [&](const auto &x_6537) {
        x_6533->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6536) {
        x_6533->first = x_6536.get();
        x_6536->parent = x_6533.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6533->children),
      [&](const auto &x_6539) {
        x_6533->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6538) {
        x_6533->last = x_6538.get();
        x_6538->parent = x_6533.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6297(const auto &x_6533) { return x_6532(x_6533); }
Unit x_6540(const auto &x_6541, const auto &x_6542, const auto &x_6543) {
  auto x_6544 = ListHeadExn(x_6541);
  auto x_6545 = ListTailExn(x_6541);
  if (ListIsEmpty(x_6545)) {
    InputChangeMetric(node_size_x_6266(ListNthExn(x_6542->children, x_6544)));
    auto x_6546 = ListSplitN(x_6542->children, x_6544);
    auto x_6547 = Zro(x_6546);
    auto x_6548 = Fst(x_6546);
    auto x_6549 = ListHeadExn(x_6548);
    auto x_6550 = ListTailExn(x_6548);
    OptionMatch(
        x_6549->prev, [&](const auto &x_6552) { return MakeUnit(); },
        [&](const auto &x_6551) {
          x_6551->next = ToPath(x_6549->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6549->next, [&](const auto &x_6554) { return MakeUnit(); },
        [&](const auto &x_6553) {
          x_6553->prev = ToPath(x_6549->prev);
          return MakeUnit();
        });
    x_6549->meta->alive = false;
    x_6542->children = ListAppend(x_6547, x_6550);
    if (ListIsEmpty(x_6547)) {
      x_6542->first = ToPath(ListHead(x_6550));
    }
    if (ListIsEmpty(x_6550)) {
      x_6542->last = ToPath(ListLast(x_6547));
    }
    OptionMatch(
        x_6549->next, [&](const auto &x_6558) { return MakeUnit(); },
        [&](const auto &x_6555) {
          if (HashtblContain(x_6555->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6556 = HashtblFindExn(x_6555->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6556, x_6555, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6542->children)) {
      if (HashtblContain(x_6542->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6559 = HashtblFindExn(x_6542->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6559, x_6542, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6550)) {
      if (HashtblContain(x_6542->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6561 = HashtblFindExn(x_6542->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6561, x_6542, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6549->next, [&](const auto &x_6566) { return MakeUnit(); },
        [&](const auto &x_6563) {
          if (HashtblContain(x_6563->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6564 = HashtblFindExn(x_6563->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6564, x_6563, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6542->children)) {
      if (HashtblContain(x_6542->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6567 = HashtblFindExn(x_6542->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6567, x_6542, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6550)) {
      if (HashtblContain(x_6542->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6569 = HashtblFindExn(x_6542->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6569, x_6542, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6549->next, [&](const auto &x_6574) { return MakeUnit(); },
        [&](const auto &x_6571) {
          if (HashtblContain(x_6571->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6572 = HashtblFindExn(x_6571->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6572, x_6571, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_6540(x_6545, ListNthExn(x_6542->children, x_6544), x_6543);
  }
}
Unit remove_node_x_6295(const auto &x_6541, const auto &x_6542, const auto &x_6543) {
  return x_6540(x_6541, x_6542, x_6543);
}
Unit x_6575(const auto &x_6576) {
  ListIter2(x_6576->children, [&](const auto &x_6577, const auto &x_6578) {
    x_6577->parent = x_6576.get();
    x_6578->parent = x_6576.get();
    x_6577->next = x_6578.get();
    x_6578->prev = x_6577.get();
    x_6575(x_6577);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6576->children),
      [&](const auto &x_6580) {
        x_6576->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6579) {
        x_6576->first = x_6579.get();
        x_6579->parent = x_6576.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6576->children),
      [&](const auto &x_6582) {
        x_6576->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6581) {
        x_6576->last = x_6581.get();
        x_6581->parent = x_6576.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6292(const auto &x_6576) { return x_6575(x_6576); }
Unit x_6583(const auto &x_6584, const auto &x_6585, const auto &x_6586) {
  auto x_6587 = ListHeadExn(x_6584);
  auto x_6588 = ListTailExn(x_6584);
  if (ListIsEmpty(x_6588)) {
    InputChangeMetric(node_size_x_6266(x_6586));
    auto x_6589 = ListSplitN(x_6585->children, x_6587);
    auto x_6590 = Zro(x_6589);
    auto x_6591 = Fst(x_6589);
    x_6585->children = ListAppend(x_6590, Cons(x_6586, x_6591));
    if (ListIsEmpty(x_6590)) {
      x_6585->first = x_6586.get();
    }
    if (ListIsEmpty(x_6591)) {
      x_6585->last = x_6586.get();
    }
    OptionMatch(
        ListLast(x_6590),
        [&](const auto &x_6593) {
          x_6586->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6592) {
          x_6586->prev = x_6592.get();
          x_6592->next = x_6586.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6591),
        [&](const auto &x_6595) {
          x_6586->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6594) {
          x_6586->next = x_6594.get();
          x_6594->prev = x_6586.get();
          return MakeUnit();
        });
    x_6586->parent = x_6585.get();
    auto x_6596 = (x_6586->parent);
    if (HashtblContain(x_6596->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_6599 = OptionMatch(
          x_6586->prev,
          [&](const auto &x_6598) {
            return NextTotalOrder(HashtblFindExn(x_6596->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_6597) {
            return NextTotalOrder(HashtblFindExn(x_6597->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_6586->meta->ProcTimeTable, std::string("pass_0"), x_6599);
      MetaWriteMetric();
      QueueForcePush(x_6599, x_6586, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_6586->next, [&](const auto &x_6604) { return MakeUnit(); },
        [&](const auto &x_6601) {
          if (HashtblContain(x_6601->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6602 = HashtblFindExn(x_6601->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6602, x_6601, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_6585->children)) {
      if (HashtblContain(x_6585->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6605 = HashtblFindExn(x_6585->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6605, x_6585, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6591)) {
      if (HashtblContain(x_6585->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6607 = HashtblFindExn(x_6585->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6607, x_6585, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6586->next, [&](const auto &x_6612) { return MakeUnit(); },
        [&](const auto &x_6609) {
          if (HashtblContain(x_6609->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6610 = HashtblFindExn(x_6609->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6610, x_6609, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_6613 = (x_6586->parent);
    if (HashtblContain(x_6613->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_6616 = OptionMatch(
          x_6586->prev,
          [&](const auto &x_6615) {
            return NextTotalOrder(HashtblFindExn(x_6613->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_6614) {
            return NextTotalOrder(HashtblFindExn(x_6614->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_6586->meta->ProcTimeTable, std::string("pass_1"), x_6616);
      MetaWriteMetric();
      QueueForcePush(x_6616, x_6586, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_6585->children)) {
      if (HashtblContain(x_6585->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6618 = HashtblFindExn(x_6585->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6618, x_6585, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6591)) {
      if (HashtblContain(x_6585->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6620 = HashtblFindExn(x_6585->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6620, x_6585, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6586->next, [&](const auto &x_6625) { return MakeUnit(); },
        [&](const auto &x_6622) {
          if (HashtblContain(x_6622->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6623 = HashtblFindExn(x_6622->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6623, x_6622, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_6583(x_6588, ListNthExn(x_6585->children, x_6587), x_6586);
  }
}
Unit add_node_x_6290(const auto &x_6584, const auto &x_6585, const auto &x_6586) {
  return x_6583(x_6584, x_6585, x_6586);
}
Unit x_6626(const auto &x_6627) {
  ListIter2(x_6627->children, [&](const auto &x_6628, const auto &x_6629) {
    x_6628->parent = x_6627.get();
    x_6629->parent = x_6627.get();
    x_6628->next = x_6629.get();
    x_6629->prev = x_6628.get();
    x_6626(x_6628);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6627->children),
      [&](const auto &x_6631) {
        x_6627->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6630) {
        x_6627->first = x_6630.get();
        x_6630->parent = x_6627.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6627->children),
      [&](const auto &x_6633) {
        x_6627->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6632) {
        x_6627->last = x_6632.get();
        x_6632->parent = x_6627.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6288(const auto &x_6627) { return x_6626(x_6627); }
Unit eval_stmts_x_6284(const auto &x_6634) {
  eval_stmts_x_6635(x_6634);
  ListIter(x_6634->children, [&](const auto &x_6636) { return eval_stmts_x_6284(x_6636); });
  return MakeUnit();
}
Unit eval_stmts_x_6283(const auto &x_6637) {
  eval_stmts_x_6638(x_6637);
  ListIter(x_6637->children, [&](const auto &x_6639) { return eval_stmts_x_6283(x_6639); });
  eval_stmts_x_6640(x_6637);
  return MakeUnit();
}
Unit x_6641(const auto &x_6642) {
  ListIter2(x_6642->children, [&](const auto &x_6643, const auto &x_6644) {
    x_6643->parent = x_6642.get();
    x_6644->parent = x_6642.get();
    x_6643->next = x_6644.get();
    x_6644->prev = x_6643.get();
    x_6641(x_6643);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6642->children),
      [&](const auto &x_6646) {
        x_6642->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6645) {
        x_6642->first = x_6645.get();
        x_6645->parent = x_6642.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6642->children),
      [&](const auto &x_6648) {
        x_6642->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6647) {
        x_6642->last = x_6647.get();
        x_6647->parent = x_6642.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6281(const auto &x_6642) { return x_6641(x_6642); }
Unit eval_stmts_x_6279(const auto &x_6649) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6649->meta->BBTimeTable, std::string("bb_2"), ReadRef(current_time));
  eval_stmts_x_6650(x_6649);
  ListIter(x_6649->children, [&](const auto &x_6651) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_6279(x_6651);
    return HashtblAddExn(x_6651->meta->ProcTimeTable, std::string("pass_1"), ReadRef(current_time));
  });
  return MakeUnit();
}
Unit eval_stmts_x_6278(const auto &x_6652) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6652->meta->BBTimeTable, std::string("bb_1"), ReadRef(current_time));
  eval_stmts_x_6653(x_6652);
  ListIter(x_6652->children, [&](const auto &x_6654) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_6278(x_6654);
    return HashtblAddExn(x_6654->meta->ProcTimeTable, std::string("pass_0"), ReadRef(current_time));
  });
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6652->meta->BBTimeTable, std::string("bb_0"), ReadRef(current_time));
  eval_stmts_x_6655(x_6652);
  return MakeUnit();
}
Unit x_6656(const auto &x_6657) {
  ListIter2(x_6657->children, [&](const auto &x_6658, const auto &x_6659) {
    x_6658->parent = x_6657.get();
    x_6659->parent = x_6657.get();
    x_6658->next = x_6659.get();
    x_6659->prev = x_6658.get();
    x_6656(x_6658);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6657->children),
      [&](const auto &x_6661) {
        x_6657->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6660) {
        x_6657->first = x_6660.get();
        x_6660->parent = x_6657.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6657->children),
      [&](const auto &x_6663) {
        x_6657->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6662) {
        x_6657->last = x_6662.get();
        x_6662->parent = x_6657.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6275(const auto &x_6657) { return x_6656(x_6657); }
int64_t x_6664(const auto &x_6665) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6665->children, [&](const auto &x_6666) { return x_6664(x_6666); }));
}
int64_t node_size_x_6266(const auto &x_6665) { return x_6664(x_6665); }
int64_t x_6667(const auto &x_6668) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6668->children, [&](const auto &x_6669) { return x_6667(x_6669); }));
}
int64_t layout_size_x_6265(const auto &x_6668) { return x_6667(x_6668); }
LayoutNode x_6670(const auto &x_6671) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_6671)),
                                [&](const auto &x_6672) { return x_6670(x_6672); }));
}
LayoutNode json_to_layout_node_x_6264(const auto &x_6671) { return x_6670(x_6671); }
Node x_6673(const auto &x_6674) {
  return MakeNode(x_6674->name, x_6674->attr, x_6674->prop, x_6674->extern_id,
                  ListMap(x_6674->children, [&](const auto &x_6675) { return x_6673(x_6675); }));
}
Node node_to_fs_node_x_6263(const auto &x_6674) { return x_6673(x_6674); }
Node x_6676(const auto &x_6677) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_6677)), JsonToDict(JsonMember(std::string("attributes"), x_6677)),
      JsonToDict(JsonMember(std::string("properties"), x_6677)), JsonToInt(JsonMember(std::string("id"), x_6677)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_6677)),
              [&](const auto &x_6678) { return x_6676(x_6678); }));
}
Node json_to_node_aux_x_6262(const auto &x_6677) { return x_6676(x_6677); }
int main() {
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_6267) {
    PrintEndline(std::string("RUNNING PQ"));
    return WithInFile(std::string("command.json"), [&](const auto &x_6268) {
      auto x_6269 = MakeRef(static_cast<int64_t>(0));
      auto x_6270 = FreshMetric();
      auto x_6271 = JsonOfString(InputLine(x_6268));
      auto x_6272 = JsonOfString(InputLine(x_6268));
      auto x_6273 = MakeStack();
      PushStack(x_6273, x_6271);
      PushStack(x_6273, x_6272);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_6271)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_6272)), std::string("layout_init")));
      auto x_6276 = [&]() {
        auto x_6274 = json_to_node_aux_x_6262(JsonMember(std::string("node"), x_6271));
        x_6274->parent = nullptr;
        x_6274->prev = nullptr;
        x_6274->next = nullptr;
        set_children_relation_x_6275(x_6274);
        return x_6274;
      }();
      auto x_6277 = json_to_layout_node_x_6264(JsonMember(std::string("node"), x_6272));
      OutputChangeMetric(layout_size_x_6265(x_6277));
      InputChangeMetric(node_size_x_6266(x_6276));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_6278(x_6276);
      HashtblAddExn(x_6276->meta->ProcTimeTable, std::string("pass_0"), ReadRef(current_time));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_6279(x_6276);
      HashtblAddExn(x_6276->meta->ProcTimeTable, std::string("pass_1"), ReadRef(current_time));
      JsonToChannel(x_6267, [&]() {
        auto x_9762 = FreshJson();
        WriteJson(x_9762, std::string("name"), std::string("PQ"));
        WriteJson(x_9762, std::string("diff_num"), ReadRef(x_6269));
        WriteJson(x_9762, std::string("read_count"), MetricReadCount());
        WriteJson(x_9762, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_9762, std::string("write_count"), MetricWriteCount());
        WriteJson(x_9762, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_9762, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_9762, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_9762, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_9762, std::string("html"), std::string(""));
        WriteJson(x_9762, std::string("command"), StackToList(x_6273));
        return x_9762;
      }());
      OutputString(x_6267, std::string("\n"));
      ClearStack(x_6273);
      WriteRef(x_6269, IntAdd(ReadRef(x_6269), static_cast<int64_t>(1)));
      auto x_6282 = [&]() {
        auto x_6280 = node_to_fs_node_x_6263(x_6276);
        x_6280->parent = nullptr;
        x_6280->prev = nullptr;
        x_6280->next = nullptr;
        set_children_relation_x_6281(x_6280);
        return x_6280;
      }();
      eval_stmts_x_6283(x_6282);
      eval_stmts_x_6284(x_6282);
      AssertNodeValueEqual(x_6276, x_6282);
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_6268, [&](const auto &x_6285) {
        auto x_6286 = JsonOfString(x_6285);
        PushStack(x_6273, x_6286);
        std::string x_9764 = JsonToString(JsonMember(std::string("name"), x_6286));
        if (x_9764 == "add") {
          return add_node_x_6290(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                         [&](const auto &x_6289) { return JsonToInt(x_6289); }),
                                 x_6276, [&]() {
                                   auto x_6287 = json_to_node_aux_x_6262(JsonMember(std::string("node"), x_6286));
                                   x_6287->parent = nullptr;
                                   x_6287->prev = nullptr;
                                   x_6287->next = nullptr;
                                   set_children_relation_x_6288(x_6287);
                                   return x_6287;
                                 }());
        } else if (x_9764 == "recalculate") {
          JsonToChannel(x_6267, [&]() {
            auto x_9763 = FreshJson();
            WriteJson(x_9763, std::string("name"), std::string("PQ"));
            WriteJson(x_9763, std::string("diff_num"), ReadRef(x_6269));
            WriteJson(x_9763, std::string("read_count"), MetricReadCount());
            WriteJson(x_9763, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_9763, std::string("write_count"), MetricWriteCount());
            WriteJson(x_9763, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_9763, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_9763, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_9763, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_9763, std::string("html"), std::string(""));
            WriteJson(x_9763, std::string("command"), StackToList(x_6273));
            return x_9763;
          }());
          OutputString(x_6267, std::string("\n"));
          ClearStack(x_6273);
          WriteRef(x_6269, IntAdd(ReadRef(x_6269), static_cast<int64_t>(1)));
          auto x_6293 = [&]() {
            auto x_6291 = node_to_fs_node_x_6263(x_6276);
            x_6291->parent = nullptr;
            x_6291->prev = nullptr;
            x_6291->next = nullptr;
            set_children_relation_x_6292(x_6291);
            return x_6291;
          }();
          eval_stmts_x_6283(x_6293);
          eval_stmts_x_6284(x_6293);
          AssertNodeValueEqual(x_6276, x_6293);
          ResetMetric();
          return MakeUnit();
        } else if (x_9764 == "remove") {
          return remove_node_x_6295(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                            [&](const auto &x_6294) { return JsonToInt(x_6294); }),
                                    x_6276, MakeUnit());
        } else if (x_9764 == "replace") {
          return replace_node_x_6299(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                             [&](const auto &x_6298) { return JsonToInt(x_6298); }),
                                     x_6276, [&]() {
                                       auto x_6296 = json_to_node_aux_x_6262(JsonMember(std::string("node"), x_6286));
                                       x_6296->parent = nullptr;
                                       x_6296->prev = nullptr;
                                       x_6296->next = nullptr;
                                       set_children_relation_x_6297(x_6296);
                                       return x_6296;
                                     }());
        } else if (x_9764 == "replace_value") {
          return replace_value_x_6301(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                              [&](const auto &x_6300) { return JsonToInt(x_6300); }),
                                      x_6276,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_6286)),
                                                        JsonToString(JsonMember(std::string("key"), x_6286))),
                                               JsonToValue(JsonMember(std::string("value"), x_6286))));
        } else if (x_9764 == "delete_value") {
          return delete_value_x_6303(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                             [&](const auto &x_6302) { return JsonToInt(x_6302); }),
                                     x_6276,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_6286)),
                                              JsonToString(JsonMember(std::string("key"), x_6286))));
        } else if (x_9764 == "insert_value") {
          return insert_value_x_6305(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                             [&](const auto &x_6304) { return JsonToInt(x_6304); }),
                                     x_6276,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_6286)),
                                                       JsonToString(JsonMember(std::string("key"), x_6286))),
                                              JsonToValue(JsonMember(std::string("value"), x_6286))));
        } else if (x_9764 == "layout_remove") {
          return remove_layout_node_x_6307(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                                   [&](const auto &x_6306) { return JsonToInt(x_6306); }),
                                           x_6277, MakeUnit());
        } else if (x_9764 == "layout_add") {
          return add_layout_node_x_6309(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                                [&](const auto &x_6308) { return JsonToInt(x_6308); }),
                                        x_6277, json_to_layout_node_x_6264(JsonMember(std::string("node"), x_6286)));
        } else if (x_9764 == "layout_replace") {
          return replace_layout_node_x_6311(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                                    [&](const auto &x_6310) { return JsonToInt(x_6310); }),
                                            x_6277,
                                            json_to_layout_node_x_6264(JsonMember(std::string("node"), x_6286)));
        } else if (x_9764 == "layout_info_changed") {
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