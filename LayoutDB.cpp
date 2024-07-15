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

    Unit var_modified_x_4524(const auto &x_4534) {
  ListIter(OptionMatch(
               x_4534->next, [&](const auto &x_4536) { return Nil(); },
               [&](const auto &x_4535) { return Cons(x_4535, Nil()); }),
           [&](const auto &x_4537) {
             if (IsSome(HashtblFind(x_4537->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4537->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4537);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_4534->next, [&](const auto &x_4539) { return Nil(); },
               [&](const auto &x_4538) { return Cons(x_4538, Nil()); }),
           [&](const auto &x_4540) {
             if (IsSome(HashtblFind(x_4540->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4540->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4540);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4521(const auto &x_4541) {
  if ((x_4541->prev != nullptr) && (!(x_4541->prev)->var_line_break)) {
    return max(x_4541->var_height_external, (x_4541->prev)->var_line_height);
  } else {
    return x_4541->var_height_external;
  }
}
Unit var_modified_x_4519(const auto &x_4558) {
  ListIter(Cons(x_4558, Nil()), [&](const auto &x_4559) {
    if (IsSome(HashtblFind(x_4559->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4559->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4559);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4558, Nil()), [&](const auto &x_4560) {
    if (IsSome(HashtblFind(x_4560->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4560->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4560);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4516(const auto &x_4561) {
  if (eq(x_4561->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4561->var_height_internal;
  }
}
Unit var_modified_x_4514(const auto &x_4570) {
  ListIter(x_4570->children, [&](const auto &x_4571) {
    if (IsSome(HashtblFind(x_4571->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4571->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4571);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4570, Nil()), [&](const auto &x_4572) {
    if (IsSome(HashtblFind(x_4572->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4572->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4572);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4511(const auto &x_4573) {
  if (x_4573->var_intrinsic_height_is_height) {
    return x_4573->var_intrinsic_height_internal;
  } else {
    if ((x_4573->parent != nullptr) && (x_4573->parent)->var_is_flex_column) {
      return plus(x_4573->var_intrinsic_height_internal,
                  mult(x_4573->var_flex_amount, (x_4573->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_4573->var_height_expr, std::string("%"))) {
        return mult(x_4573->var_box_height,
                    divide(string_to_float(strip_suffix(x_4573->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_4573->var_box_height, x_4573->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_4509(const auto &x_4626) {
  ListIter(OptionMatch(
               x_4626->next, [&](const auto &x_4628) { return Nil(); },
               [&](const auto &x_4627) { return Cons(x_4627, Nil()); }),
           [&](const auto &x_4629) {
             if (IsSome(HashtblFind(x_4629->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4629->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4629);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_4626->next, [&](const auto &x_4631) { return Nil(); },
               [&](const auto &x_4630) { return Cons(x_4630, Nil()); }),
           [&](const auto &x_4632) {
             if (IsSome(HashtblFind(x_4632->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4632->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4632);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(x_4626->children, [&](const auto &x_4633) {
    if (IsSome(HashtblFind(x_4633->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4633->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4633);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4506(const auto &x_4634) {
  if (x_4634->prev != nullptr) {
    if (x_4634->var_line_break || (x_4634->prev)->var_line_break) {
      return plus((x_4634->prev)->var_y, (x_4634->prev)->var_line_height);
    } else {
      return (x_4634->prev)->var_y;
    }
  } else {
    if (x_4634->parent != nullptr) {
      return (x_4634->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4504(const auto &x_4659) {
  ListIter(OptionMatch(
               x_4659->next, [&](const auto &x_4661) { return Nil(); },
               [&](const auto &x_4660) { return Cons(x_4660, Nil()); }),
           [&](const auto &x_4662) {
             if (IsSome(HashtblFind(x_4662->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4662->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4662);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4501(const auto &x_4663) {
  if (eq(x_4663->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4663->var_width_internal;
  }
}
Unit var_modified_x_4499(const auto &x_4672) {
  ListIter(x_4672->children, [&](const auto &x_4673) {
    if (IsSome(HashtblFind(x_4673->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4673->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4673);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4672, Nil()), [&](const auto &x_4674) {
    if (IsSome(HashtblFind(x_4674->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4674->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4674);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4496(const auto &x_4675) {
  if (x_4675->var_intrinsic_width_is_width) {
    return x_4675->var_intrinsic_width_internal;
  } else {
    if ((x_4675->parent != nullptr) && (x_4675->parent)->var_is_flex_row) {
      return plus(x_4675->var_intrinsic_width_internal, mult(x_4675->var_flex_amount, (x_4675->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_4675->var_width_expr, std::string("%"))) {
        return mult(x_4675->var_box_width,
                    divide(string_to_float(strip_suffix(x_4675->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_4675->var_box_width, x_4675->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_4494(const auto &x_4728) {
  ListIter(OptionMatch(
               x_4728->next, [&](const auto &x_4730) { return Nil(); },
               [&](const auto &x_4729) { return Cons(x_4729, Nil()); }),
           [&](const auto &x_4731) {
             if (IsSome(HashtblFind(x_4731->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4731->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4731);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(x_4728->children, [&](const auto &x_4732) {
    if (IsSome(HashtblFind(x_4732->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4732->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4732);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4491(const auto &x_4733) {
  if (x_4733->prev != nullptr) {
    if (x_4733->var_line_break || (x_4733->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_4733->prev)->var_x, (x_4733->prev)->var_width_external);
    }
  } else {
    if (x_4733->parent != nullptr) {
      return (x_4733->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4489(const auto &x_4754) {
  ListIter(x_4754->children, [&](const auto &x_4755) {
    if (IsSome(HashtblFind(x_4755->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4755->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4755);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_4754->children, [&](const auto &x_4756) {
    if (IsSome(HashtblFind(x_4756->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4756->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4756);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4486(const auto &x_4757) {
  if (gt(x_4757->var_left_over, 0.)) {
    return divide(x_4757->var_left_over, x_4757->var_flex_grow_sum);
  } else {
    return divide(x_4757->var_left_over, x_4757->var_flex_shrink_sum);
  }
}
Unit var_modified_x_4484(const auto &x_4778) {
  ListIter(Cons(x_4778, Nil()), [&](const auto &x_4779) {
    if (IsSome(HashtblFind(x_4779->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4779->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4779);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4778, Nil()), [&](const auto &x_4780) {
    if (IsSome(HashtblFind(x_4780->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4780->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4780);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4481(const auto &x_4781) {
  if ((x_4781->parent != nullptr) && gt((x_4781->parent)->var_left_over, 0.)) {
    return x_4781->var_flex_grow;
  } else {
    return x_4781->var_flex_shrink;
  }
}
Unit var_modified_x_4479(const auto &x_4794) {
  ListIter(x_4794->children, [&](const auto &x_4795) {
    if (IsSome(HashtblFind(x_4795->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4795->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4795);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4794, Nil()), [&](const auto &x_4796) {
    if (IsSome(HashtblFind(x_4796->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4796->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4796);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4794, Nil()), [&](const auto &x_4797) {
    if (IsSome(HashtblFind(x_4797->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4797->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4797);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4794, Nil()), [&](const auto &x_4798) {
    if (IsSome(HashtblFind(x_4798->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4798->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4798);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4476(const auto &x_4799) {
  if (x_4799->var_is_flex_row) {
    return minus(x_4799->var_box_width, (x_4799->last != nullptr) ? ((x_4799->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_4799->var_box_height, (x_4799->last != nullptr) ? ((x_4799->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_4474(const auto &x_4820) {
  ListIter(Cons(x_4820, Nil()), [&](const auto &x_4821) {
    if (IsSome(HashtblFind(x_4821->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4821->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4821);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4820, Nil()), [&](const auto &x_4822) {
    if (IsSome(HashtblFind(x_4822->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4822->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4822);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4820, Nil()), [&](const auto &x_4823) {
    if (IsSome(HashtblFind(x_4823->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4823->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4823);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4471(const auto &x_4824) {
  if (x_4824->parent != nullptr) {
    return (x_4824->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_4469(const auto &x_4829) {
  ListIter(Cons(x_4829, Nil()), [&](const auto &x_4830) {
    if (IsSome(HashtblFind(x_4830->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4830->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4830);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4829, Nil()), [&](const auto &x_4831) {
    if (IsSome(HashtblFind(x_4831->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4831->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4831);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4829, Nil()), [&](const auto &x_4832) {
    if (IsSome(HashtblFind(x_4832->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4832->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4832);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4466(const auto &x_4833) {
  if (x_4833->parent != nullptr) {
    return (x_4833->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_4463(const auto &x_4838) {
  ListIter(OptionMatch(
               x_4838->next, [&](const auto &x_4840) { return Nil(); },
               [&](const auto &x_4839) { return Cons(x_4839, Nil()); }),
           [&](const auto &x_4841) {
             if (IsSome(HashtblFind(x_4841->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_4841->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_4841);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(Cons(x_4838, Nil()), [&](const auto &x_4842) {
    if (IsSome(HashtblFind(x_4842->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4842->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4842);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4838, Nil()), [&](const auto &x_4843) {
    if (IsSome(HashtblFind(x_4843->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4843->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4843);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4838, Nil()), [&](const auto &x_4844) {
    if (IsSome(HashtblFind(x_4844->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4844->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4844);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4838, Nil()), [&](const auto &x_4845) {
    if (IsSome(HashtblFind(x_4845->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4845->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4845);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(OptionMatch(
               x_4838->next, [&](const auto &x_4847) { return Nil(); },
               [&](const auto &x_4846) { return Cons(x_4846, Nil()); }),
           [&](const auto &x_4848) {
             if (IsSome(HashtblFind(x_4848->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4848->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4848);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(Cons(x_4838, Nil()), [&](const auto &x_4849) {
    if (IsSome(HashtblFind(x_4849->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_4849->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_4849);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(OptionMatch(
               x_4838->next, [&](const auto &x_4851) { return Nil(); },
               [&](const auto &x_4850) { return Cons(x_4850, Nil()); }),
           [&](const auto &x_4852) {
             if (IsSome(HashtblFind(x_4852->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4852->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4852);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_4838->next, [&](const auto &x_4854) { return Nil(); },
               [&](const auto &x_4853) { return Cons(x_4853, Nil()); }),
           [&](const auto &x_4855) {
             if (IsSome(HashtblFind(x_4855->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_4855->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_4855);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4460(const auto &x_4856) {
  if (eq(x_4856->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_4856->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_4856->parent != nullptr) &&
          (eq((x_4856->parent)->var_display, std::string("flex")) ||
           eq((x_4856->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_4856->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_4856->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_4856->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_4856->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_4856, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_4856, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4856->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_4856->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_4856->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_4856->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_4856->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_4856->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_4856->var_display, std::string("list-item"))) {
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
Unit var_modified_x_4458(const auto &x_4933) {
  ListIter(x_4933->children, [&](const auto &x_4934) {
    if (IsSome(HashtblFind(x_4934->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4934->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_4934);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4455(const auto &x_4935) {
  return (((!(x_4935->parent != nullptr)) || (x_4935->parent)->var_visible) &&
          (neq(x_4935->var_display, std::string("none")) && ((!x_4935->var_inside_svg) && (!x_4935->var_disabled))));
}
Unit var_modified_x_4453(const auto &x_4952) {
  ListIter(x_4952->children, [&](const auto &x_4953) {
    if (IsSome(HashtblFind(x_4953->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4953->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_4953);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4952, Nil()), [&](const auto &x_4954) {
    if (IsSome(HashtblFind(x_4954->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4954->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_4954);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4952, Nil()), [&](const auto &x_4955) {
    if (IsSome(HashtblFind(x_4955->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4955->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4955);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4952, Nil()), [&](const auto &x_4956) {
    if (IsSome(HashtblFind(x_4956->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4956->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4956);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4952, Nil()), [&](const auto &x_4957) {
    if (IsSome(HashtblFind(x_4957->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4957->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4957);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4952, Nil()), [&](const auto &x_4958) {
    if (IsSome(HashtblFind(x_4958->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4958->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4958);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4952, Nil()), [&](const auto &x_4959) {
    if (IsSome(HashtblFind(x_4959->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4959->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4959);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4450(const auto &x_4960) {
  if (eq(x_4960->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_4960->parent != nullptr) && (x_4960->parent)->var_disabled);
  }
}
Unit var_modified_x_4448(const auto &x_4965) {
  ListIter(x_4965->children, [&](const auto &x_4966) {
    if (IsSome(HashtblFind(x_4966->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4966->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_4966);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4965, Nil()), [&](const auto &x_4967) {
    if (IsSome(HashtblFind(x_4967->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4967->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_4967);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4965, Nil()), [&](const auto &x_4968) {
    if (IsSome(HashtblFind(x_4968->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4968->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4968);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4965, Nil()), [&](const auto &x_4969) {
    if (IsSome(HashtblFind(x_4969->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4969->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4969);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4965, Nil()), [&](const auto &x_4970) {
    if (IsSome(HashtblFind(x_4970->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4970->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4970);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4965, Nil()), [&](const auto &x_4971) {
    if (IsSome(HashtblFind(x_4971->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4971->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4971);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4965, Nil()), [&](const auto &x_4972) {
    if (IsSome(HashtblFind(x_4972->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4972->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4972);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4445(const auto &x_4973) {
  return ((x_4973->parent != nullptr) && ((x_4973->parent)->var_is_svg_block || (x_4973->parent)->var_inside_svg));
}
Unit var_modified_x_4443(const auto &x_4982) {
  ListIter(x_4982->children, [&](const auto &x_4983) {
    if (IsSome(HashtblFind(x_4983->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4983->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_4983);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4440(const auto &x_4984) { return eq(x_4984->name, std::string("svg")); }
Unit var_modified_x_4438(const auto &x_4985) {
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4986) {
    if (IsSome(HashtblFind(x_4986->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4986->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4986);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4987) {
    if (IsSome(HashtblFind(x_4987->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4987->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4987);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4988) {
    if (IsSome(HashtblFind(x_4988->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4988->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4988);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4989) {
    if (IsSome(HashtblFind(x_4989->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4989->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4989);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4990) {
    if (IsSome(HashtblFind(x_4990->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4990->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4990);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4991) {
    if (IsSome(HashtblFind(x_4991->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4991->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4991);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4992) {
    if (IsSome(HashtblFind(x_4992->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4992->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4992);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4985, Nil()), [&](const auto &x_4993) {
    if (IsSome(HashtblFind(x_4993->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_4993->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_4993);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4435(const auto &x_4994) { return neq(x_4994->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_4433(const auto &x_4999) {
  ListIter(Cons(x_4999, Nil()), [&](const auto &x_5000) {
    if (IsSome(HashtblFind(x_5000->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5000->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5000);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4999, Nil()), [&](const auto &x_5001) {
    if (IsSome(HashtblFind(x_5001->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5001->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5001);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4999, Nil()), [&](const auto &x_5002) {
    if (IsSome(HashtblFind(x_5002->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5002->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5002);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4999, Nil()), [&](const auto &x_5003) {
    if (IsSome(HashtblFind(x_5003->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5003->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5003);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4999, Nil()), [&](const auto &x_5004) {
    if (IsSome(HashtblFind(x_5004->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5004->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5004);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4999, Nil()), [&](const auto &x_5005) {
    if (IsSome(HashtblFind(x_5005->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5005->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5005);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_4999, Nil()), [&](const auto &x_5006) {
    if (IsSome(HashtblFind(x_5006->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5006->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5006);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4430(const auto &x_5007) {
  if (!HasAttr(x_5007, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_5007, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_5007, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_5007, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_4428(const auto &x_5018) {
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5019) {
    if (IsSome(HashtblFind(x_5019->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5019->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5019);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5020) {
    if (IsSome(HashtblFind(x_5020->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5020->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5020);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5021) {
    if (IsSome(HashtblFind(x_5021->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5021->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5021);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5022) {
    if (IsSome(HashtblFind(x_5022->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5022->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5022);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5023) {
    if (IsSome(HashtblFind(x_5023->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5023->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5023);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5024) {
    if (IsSome(HashtblFind(x_5024->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5024->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5024);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5025) {
    if (IsSome(HashtblFind(x_5025->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5025->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5025);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5026) {
    if (IsSome(HashtblFind(x_5026->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5026->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5026);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5018, Nil()), [&](const auto &x_5027) {
    if (IsSome(HashtblFind(x_5027->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5027->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5027);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4425(const auto &x_5028) { return neq(x_5028->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_4423(const auto &x_5033) {
  ListIter(Cons(x_5033, Nil()), [&](const auto &x_5034) {
    if (IsSome(HashtblFind(x_5034->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5034->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5034);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5033, Nil()), [&](const auto &x_5035) {
    if (IsSome(HashtblFind(x_5035->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5035->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5035);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5033, Nil()), [&](const auto &x_5036) {
    if (IsSome(HashtblFind(x_5036->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5036->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5036);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5033, Nil()), [&](const auto &x_5037) {
    if (IsSome(HashtblFind(x_5037->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5037->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5037);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5033, Nil()), [&](const auto &x_5038) {
    if (IsSome(HashtblFind(x_5038->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5038->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5038);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5033, Nil()), [&](const auto &x_5039) {
    if (IsSome(HashtblFind(x_5039->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5039->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5039);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5033, Nil()), [&](const auto &x_5040) {
    if (IsSome(HashtblFind(x_5040->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5040->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5040);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4420(const auto &x_5041) {
  if (!HasAttr(x_5041, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_5041, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_5041, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_5041, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_4418(const auto &x_5052) {
  ListIter(x_5052->children, [&](const auto &x_5053) {
    if (IsSome(HashtblFind(x_5053->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5053->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5053);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5052->children, [&](const auto &x_5054) {
    if (IsSome(HashtblFind(x_5054->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5054->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5054);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4415(const auto &x_5055) {
  if ((x_5055->parent != nullptr) &&
      (eq((x_5055->parent)->var_display, std::string("flex")) ||
       eq((x_5055->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_5055->parent)->var_flex_direction, std::string("column")) ||
        eq((x_5055->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4413(const auto &x_5080) {
  ListIter(x_5080->children, [&](const auto &x_5081) {
    if (IsSome(HashtblFind(x_5081->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5081->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5081);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5080, Nil()), [&](const auto &x_5082) {
    if (IsSome(HashtblFind(x_5082->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5082->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5082);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5080->children, [&](const auto &x_5083) {
    if (IsSome(HashtblFind(x_5083->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5083->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5083);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4410(const auto &x_5084) {
  if ((x_5084->parent != nullptr) &&
      (eq((x_5084->parent)->var_display, std::string("flex")) ||
       eq((x_5084->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_5084->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4408(const auto &x_5109) {
  ListIter(x_5109->children, [&](const auto &x_5110) {
    if (IsSome(HashtblFind(x_5110->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5110->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5110);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5109->children, [&](const auto &x_5111) {
    if (IsSome(HashtblFind(x_5111->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5111->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5111);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5109->children, [&](const auto &x_5112) {
    if (IsSome(HashtblFind(x_5112->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5112->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5112);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5109->children, [&](const auto &x_5113) {
    if (IsSome(HashtblFind(x_5113->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5113->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5113);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5109->children, [&](const auto &x_5114) {
    if (IsSome(HashtblFind(x_5114->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5114->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5114);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5109->children, [&](const auto &x_5115) {
    if (IsSome(HashtblFind(x_5115->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5115->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5115);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4405(const auto &x_5116) {
  if (HashtblContain(x_5116->prop, std::string("flex-direction"))) {
    return GetProp<std::string>(x_5116, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_4403(const auto &x_5119) {
  ListIter(OptionMatch(
               x_5119->next, [&](const auto &x_5121) { return Nil(); },
               [&](const auto &x_5120) { return Cons(x_5120, Nil()); }),
           [&](const auto &x_5122) {
             if (IsSome(HashtblFind(x_5122->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5122->meta->BBDirtied, std::string("bb_1"), true);
               return set_recursive_proc_dirtied_x_3655(x_5122);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(Cons(x_5119, Nil()), [&](const auto &x_5123) {
    if (IsSome(HashtblFind(x_5123->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5123->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5123);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4400(const auto &x_5124) {
  return plus((x_5124->prev != nullptr) ? ((x_5124->prev)->var_flex_shrink_sum) : (0.), x_5124->var_flex_shrink);
}
Unit var_modified_x_4398(const auto &x_5133) {
  ListIter(OptionMatch(
               x_5133->next, [&](const auto &x_5135) { return Nil(); },
               [&](const auto &x_5134) { return Cons(x_5134, Nil()); }),
           [&](const auto &x_5136) {
             if (IsSome(HashtblFind(x_5136->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5136->meta->BBDirtied, std::string("bb_1"), true);
               return set_recursive_proc_dirtied_x_3655(x_5136);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(Cons(x_5133, Nil()), [&](const auto &x_5137) {
    if (IsSome(HashtblFind(x_5137->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5137->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5137);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4395(const auto &x_5138) {
  return plus((x_5138->prev != nullptr) ? ((x_5138->prev)->var_flex_grow_sum) : (0.), x_5138->var_flex_grow);
}
Unit var_modified_x_4393(const auto &x_5147) {
  ListIter(Cons(x_5147, Nil()), [&](const auto &x_5148) {
    if (IsSome(HashtblFind(x_5148->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5148->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5148);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5147, Nil()), [&](const auto &x_5149) {
    if (IsSome(HashtblFind(x_5149->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5149->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5149);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4390(const auto &x_5150) {
  if (HashtblContain(x_5150->prop, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_5150, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_4388(const auto &x_5153) {
  ListIter(Cons(x_5153, Nil()), [&](const auto &x_5154) {
    if (IsSome(HashtblFind(x_5154->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5154->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5154);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5153, Nil()), [&](const auto &x_5155) {
    if (IsSome(HashtblFind(x_5155->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5155->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5155);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4385(const auto &x_5156) {
  if (HashtblContain(x_5156->prop, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_5156, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_4383(const auto &x_5159) {
  ListIter(Cons(x_5159, Nil()), [&](const auto &x_5160) {
    if (IsSome(HashtblFind(x_5160->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5160->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5160);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5159, Nil()), [&](const auto &x_5161) {
    if (IsSome(HashtblFind(x_5161->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5161->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5161);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5159, Nil()), [&](const auto &x_5162) {
    if (IsSome(HashtblFind(x_5162->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5162->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5162);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5159, Nil()), [&](const auto &x_5163) {
    if (IsSome(HashtblFind(x_5163->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5163->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5163);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5159, Nil()), [&](const auto &x_5164) {
    if (IsSome(HashtblFind(x_5164->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5164->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5164);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4380(const auto &x_5165) {
  if (HashtblContain(x_5165->prop, std::string("position"))) {
    return GetProp<std::string>(x_5165, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_4378(const auto &x_5168) {
  ListIter(x_5168->children, [&](const auto &x_5169) {
    if (IsSome(HashtblFind(x_5169->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5169->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5169);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5168->children, [&](const auto &x_5170) {
    if (IsSome(HashtblFind(x_5170->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5170->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5170);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5168->children, [&](const auto &x_5171) {
    if (IsSome(HashtblFind(x_5171->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5171->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5171);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5168->children, [&](const auto &x_5172) {
    if (IsSome(HashtblFind(x_5172->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5172->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5172);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5173) {
    if (IsSome(HashtblFind(x_5173->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5173->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5173);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5174) {
    if (IsSome(HashtblFind(x_5174->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5174->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5174);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5168->children, [&](const auto &x_5175) {
    if (IsSome(HashtblFind(x_5175->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5175->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5175);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(x_5168->children, [&](const auto &x_5176) {
    if (IsSome(HashtblFind(x_5176->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5176->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5176);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5177) {
    if (IsSome(HashtblFind(x_5177->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5177->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5177);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5178) {
    if (IsSome(HashtblFind(x_5178->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5178->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5178);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5179) {
    if (IsSome(HashtblFind(x_5179->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5179->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5179);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5180) {
    if (IsSome(HashtblFind(x_5180->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5180->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5180);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5181) {
    if (IsSome(HashtblFind(x_5181->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5181->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5181);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5182) {
    if (IsSome(HashtblFind(x_5182->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5182->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5182);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5183) {
    if (IsSome(HashtblFind(x_5183->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5183->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5183);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5184) {
    if (IsSome(HashtblFind(x_5184->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5184->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5184);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5185) {
    if (IsSome(HashtblFind(x_5185->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5185->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5185);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5186) {
    if (IsSome(HashtblFind(x_5186->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5186->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5186);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5187) {
    if (IsSome(HashtblFind(x_5187->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5187->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5187);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5188) {
    if (IsSome(HashtblFind(x_5188->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5188->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3655(x_5188);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5189) {
    if (IsSome(HashtblFind(x_5189->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5189->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5189);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5190) {
    if (IsSome(HashtblFind(x_5190->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5190->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5190);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5191) {
    if (IsSome(HashtblFind(x_5191->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5191->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5191);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5192) {
    if (IsSome(HashtblFind(x_5192->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5192->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5192);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5168, Nil()), [&](const auto &x_5193) {
    if (IsSome(HashtblFind(x_5193->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5193->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5193);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4375(const auto &x_5194) {
  if (HashtblContain(x_5194->prop, std::string("display"))) {
    return GetProp<std::string>(x_5194, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_4372(const auto &x_5197) {
  ListIter((x_5197->next != nullptr) ? (OptionMatch(
                                           x_5197->parent, [&](const auto &x_5199) { return Nil(); },
                                           [&](const auto &x_5198) { return Cons(x_5198, Nil()); }))
                                     : (Nil()),
           [&](const auto &x_5200) {
             if (IsSome(HashtblFind(x_5200->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5200->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5200);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_5197->next, [&](const auto &x_5202) { return Nil(); },
               [&](const auto &x_5201) { return Cons(x_5201, Nil()); }),
           [&](const auto &x_5203) {
             if (IsSome(HashtblFind(x_5203->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5203->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5203);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_5197->next, [&](const auto &x_5205) { return Nil(); },
               [&](const auto &x_5204) { return Cons(x_5204, Nil()); }),
           [&](const auto &x_5206) {
             if (IsSome(HashtblFind(x_5206->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5206->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5206);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4369(const auto &x_5207) {
  if (x_5207->prev != nullptr) {
    if (x_5207->var_line_break) {
      return plus((x_5207->prev)->var_finished_intrinsic_height_sum,
                  plus((x_5207->prev)->var_intrinsic_current_line_height, x_5207->var_intrinsic_height_external));
    } else {
      return (x_5207->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_5207->var_line_break) {
      return x_5207->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4367(const auto &x_5236) {
  ListIter((x_5236->next != nullptr) ? (OptionMatch(
                                           x_5236->parent, [&](const auto &x_5238) { return Nil(); },
                                           [&](const auto &x_5237) { return Cons(x_5237, Nil()); }))
                                     : (Nil()),
           [&](const auto &x_5239) {
             if (IsSome(HashtblFind(x_5239->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5239->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5239);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_5236->next, [&](const auto &x_5241) { return Nil(); },
               [&](const auto &x_5240) { return Cons(x_5240, Nil()); }),
           [&](const auto &x_5242) {
             if (IsSome(HashtblFind(x_5242->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5242->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5242);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_5236->next, [&](const auto &x_5244) { return Nil(); },
               [&](const auto &x_5243) { return Cons(x_5243, Nil()); }),
           [&](const auto &x_5245) {
             if (IsSome(HashtblFind(x_5245->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5245->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5245);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4364(const auto &x_5246) {
  if (x_5246->var_line_break) {
    return 0.;
  } else {
    return max(x_5246->var_intrinsic_height_external,
               (x_5246->prev != nullptr) ? ((x_5246->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4362(const auto &x_5259) {
  ListIter(OptionMatch(
               x_5259->next, [&](const auto &x_5261) { return Nil(); },
               [&](const auto &x_5260) { return Cons(x_5260, Nil()); }),
           [&](const auto &x_5262) {
             if (IsSome(HashtblFind(x_5262->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5262->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5262);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter((x_5259->next != nullptr) ? (OptionMatch(
                                           x_5259->parent, [&](const auto &x_5264) { return Nil(); },
                                           [&](const auto &x_5263) { return Cons(x_5263, Nil()); }))
                                     : (Nil()),
           [&](const auto &x_5265) {
             if (IsSome(HashtblFind(x_5265->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_5265->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_5265);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4359(const auto &x_5266) {
  return plus((x_5266->prev != nullptr) ? ((x_5266->prev)->var_intrinsic_height_sum) : (0.),
              x_5266->var_intrinsic_height_external);
}
Unit var_modified_x_4357(const auto &x_5275) {
  ListIter(Cons(x_5275, Nil()), [&](const auto &x_5276) {
    if (IsSome(HashtblFind(x_5276->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5276->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5276);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5275, Nil()), [&](const auto &x_5277) {
    if (IsSome(HashtblFind(x_5277->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5277->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5277);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5275, Nil()), [&](const auto &x_5278) {
    if (IsSome(HashtblFind(x_5278->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5278->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5278);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5275, Nil()), [&](const auto &x_5279) {
    if (IsSome(HashtblFind(x_5279->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5279->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5279);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4354(const auto &x_5280) {
  if (eq(x_5280->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5280->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4352(const auto &x_5289) {
  ListIter(Cons(x_5289, Nil()), [&](const auto &x_5290) {
    if (IsSome(HashtblFind(x_5290->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5290->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5290);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5289, Nil()), [&](const auto &x_5291) {
    if (IsSome(HashtblFind(x_5291->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5291->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5291);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5289, Nil()), [&](const auto &x_5292) {
    if (IsSome(HashtblFind(x_5292->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5292->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5292);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5289, Nil()), [&](const auto &x_5293) {
    if (IsSome(HashtblFind(x_5293->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5293->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5293);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4349(const auto &x_5294) {
  if (eq(x_5294->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_5294->var_inside_svg) {
      return 0.;
    } else {
      if (x_5294->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5294->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_5294->var_height_expr, std::string("%"))) &&
             neq(x_5294->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_5294->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_5294->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_5294->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_5294->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_5294->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_5294->var_children_intrinsic_height,
              (eq(x_5294->name, std::string("#text")))
                  ? (10.)
                  : ((x_5294->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5294->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_5294->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_5294->name, std::string("svg")))
                                              ? ((x_5294->var_has_height_attr &&
                                                  string_is_float(x_5294->var_height_attr_expr))
                                                     ? (string_to_float(x_5294->var_height_attr_expr))
                                                     : ((HasAttr(x_5294, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_5294, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_5294,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_5294->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_5294->name, std::string("IMG")))
                                                     ? ((x_5294->var_has_height_attr)
                                                            ? (string_to_float(x_5294->var_height_attr_expr))
                                                            : ((HasAttr(x_5294, std::string("image_height")) &&
                                                                (!x_5294->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_5294, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_5294,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_5294->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5294,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5294,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_5294->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_5294->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4347(const auto &x_5439) {
  ListIter(Cons(x_5439, Nil()), [&](const auto &x_5440) {
    if (IsSome(HashtblFind(x_5440->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5440->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5440);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4344(const auto &x_5441) {
  if (eq(x_5441->var_display, std::string("none")) || (x_5441->var_inside_svg || x_5441->var_disabled)) {
    return true;
  } else {
    if ((x_5441->parent != nullptr) && (x_5441->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_5441->var_height_expr, std::string("auto")) ||
          (has_suffix(x_5441->var_height_expr, std::string("px")) ||
           (has_suffix(x_5441->var_height_expr, std::string("ch")) ||
            (has_suffix(x_5441->var_height_expr, std::string("lh")) ||
             eq(x_5441->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4342(const auto &x_5490) {
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5491) {
    if (IsSome(HashtblFind(x_5491->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5491->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5491);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5492) {
    if (IsSome(HashtblFind(x_5492->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5492->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5492);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5493) {
    if (IsSome(HashtblFind(x_5493->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5493->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5493);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5494) {
    if (IsSome(HashtblFind(x_5494->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5494->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5494);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5495) {
    if (IsSome(HashtblFind(x_5495->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5495->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5495);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5496) {
    if (IsSome(HashtblFind(x_5496->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5496->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5496);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5497) {
    if (IsSome(HashtblFind(x_5497->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5497->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5497);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5498) {
    if (IsSome(HashtblFind(x_5498->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5498->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5498);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5499) {
    if (IsSome(HashtblFind(x_5499->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5499->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5499);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5500) {
    if (IsSome(HashtblFind(x_5500->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5500->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5500);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5501) {
    if (IsSome(HashtblFind(x_5501->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5501->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5501);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5502) {
    if (IsSome(HashtblFind(x_5502->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5502->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5502);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5503) {
    if (IsSome(HashtblFind(x_5503->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5503->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5503);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5504) {
    if (IsSome(HashtblFind(x_5504->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5504->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5504);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5505) {
    if (IsSome(HashtblFind(x_5505->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5505->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5505);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5506) {
    if (IsSome(HashtblFind(x_5506->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5506->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5506);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5507) {
    if (IsSome(HashtblFind(x_5507->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5507->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5507);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5508) {
    if (IsSome(HashtblFind(x_5508->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5508->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5508);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5490, Nil()), [&](const auto &x_5509) {
    if (IsSome(HashtblFind(x_5509->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5509->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5509);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4339(const auto &x_5510) {
  if (HashtblContain(x_5510->prop, std::string("height"))) {
    return GetProp<std::string>(x_5510, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_4337(const auto &x_5513) {
  ListIter(Cons(x_5513, Nil()), [&](const auto &x_5514) {
    if (IsSome(HashtblFind(x_5514->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5514->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5514);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4334(const auto &x_5515) {
  if (x_5515->last != nullptr) {
    return plus((x_5515->last)->var_finished_intrinsic_height_sum, (x_5515->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4332(const auto &x_5524) {
  ListIter(OptionMatch(
               x_5524->next, [&](const auto &x_5526) { return Nil(); },
               [&](const auto &x_5525) { return Cons(x_5525, Nil()); }),
           [&](const auto &x_5527) {
             if (IsSome(HashtblFind(x_5527->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5527->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5527);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter((x_5524->next != nullptr) ? (OptionMatch(
                                           x_5524->parent, [&](const auto &x_5529) { return Nil(); },
                                           [&](const auto &x_5528) { return Cons(x_5528, Nil()); }))
                                     : (Nil()),
           [&](const auto &x_5530) {
             if (IsSome(HashtblFind(x_5530->meta->ProcInited, std::string("pass_1")))) {
               HashtblSet(x_5530->meta->BBDirtied, std::string("bb_2"), true);
               return set_recursive_proc_dirtied_x_3729(x_5530);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4329(const auto &x_5531) {
  return plus((x_5531->prev != nullptr) ? ((x_5531->prev)->var_intrinsic_width_sum) : (0.),
              x_5531->var_intrinsic_width_external);
}
Unit var_modified_x_4327(const auto &x_5540) {
  ListIter((x_5540->next != nullptr) ? (OptionMatch(
                                           x_5540->parent, [&](const auto &x_5542) { return Nil(); },
                                           [&](const auto &x_5541) { return Cons(x_5541, Nil()); }))
                                     : (Nil()),
           [&](const auto &x_5543) {
             if (IsSome(HashtblFind(x_5543->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5543->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5543);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(OptionMatch(
               x_5540->next, [&](const auto &x_5545) { return Nil(); },
               [&](const auto &x_5544) { return Cons(x_5544, Nil()); }),
           [&](const auto &x_5546) {
             if (IsSome(HashtblFind(x_5546->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5546->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5546);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  return MakeUnit();
}
auto eval_expr_x_4324(const auto &x_5547) {
  return max(x_5547->var_intrinsic_current_line_width,
             (x_5547->prev != nullptr) ? ((x_5547->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4322(const auto &x_5556) {
  ListIter(OptionMatch(
               x_5556->next, [&](const auto &x_5558) { return Nil(); },
               [&](const auto &x_5557) { return Cons(x_5557, Nil()); }),
           [&](const auto &x_5559) {
             if (IsSome(HashtblFind(x_5559->meta->ProcInited, std::string("pass_0")))) {
               HashtblSet(x_5559->meta->BBDirtied, std::string("bb_0"), true);
               return set_recursive_proc_dirtied_x_3655(x_5559);
             } else {
               return MetaWriteMetric(x_3579);
             }
           });
  ListIter(Cons(x_5556, Nil()), [&](const auto &x_5560) {
    if (IsSome(HashtblFind(x_5560->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5560->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5560);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4319(const auto &x_5561) {
  return plus(x_5561->var_intrinsic_width_external,
              ((x_5561->prev != nullptr) && (!(x_5561->prev)->var_line_break))
                  ? ((x_5561->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_4317(const auto &x_5574) {
  ListIter(Cons(x_5574, Nil()), [&](const auto &x_5575) {
    if (IsSome(HashtblFind(x_5575->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5575->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5575);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5574, Nil()), [&](const auto &x_5576) {
    if (IsSome(HashtblFind(x_5576->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5576->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5576);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4314(const auto &x_5577) {
  if (eq(x_5577->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5577->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_4312(const auto &x_5586) {
  ListIter(Cons(x_5586, Nil()), [&](const auto &x_5587) {
    if (IsSome(HashtblFind(x_5587->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5587->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5587);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5586, Nil()), [&](const auto &x_5588) {
    if (IsSome(HashtblFind(x_5588->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5588->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5588);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5586, Nil()), [&](const auto &x_5589) {
    if (IsSome(HashtblFind(x_5589->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5589->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5589);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5586, Nil()), [&](const auto &x_5590) {
    if (IsSome(HashtblFind(x_5590->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5590->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5590);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4309(const auto &x_5591) {
  if (eq(x_5591->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_5591->var_inside_svg) {
      return 0.;
    } else {
      if (x_5591->var_disabled) {
        return 0.;
      } else {
        if (neq(x_5591->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_5591->var_width_expr, std::string("%"))) &&
             (neq(x_5591->var_width_expr, std::string("fit-content")) &&
              (neq(x_5591->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_5591->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_5591->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_5591->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_5591->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_5591->var_children_intrinsic_width,
              (eq(x_5591->name, std::string("#text")))
                  ? (100.)
                  : ((x_5591->var_is_default_case)
                         ? (0.)
                         : ((eq(x_5591->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_5591->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_5591->name, std::string("svg")))
                                              ? ((x_5591->var_has_width_attr &&
                                                  string_is_float(x_5591->var_width_attr_expr))
                                                     ? (string_to_float(x_5591->var_width_attr_expr))
                                                     : (((!x_5591->var_has_width_attr) &&
                                                         HasAttr(x_5591, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_5591, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_5591,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_5591->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_5591->name, std::string("IMG")))
                                                     ? ((x_5591->var_has_width_attr)
                                                            ? (string_to_float(x_5591->var_width_attr_expr))
                                                            : ((HasAttr(x_5591, std::string("image_width")) &&
                                                                (!x_5591->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_5591, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_5591, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_5591->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5591,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_5591,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_5591->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_5591->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4307(const auto &x_5744) {
  ListIter(Cons(x_5744, Nil()), [&](const auto &x_5745) {
    if (IsSome(HashtblFind(x_5745->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5745->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5745);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4304(const auto &x_5746) {
  if (x_5746->last != nullptr) {
    return (x_5746->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_4302(const auto &x_5751) {
  ListIter(Cons(x_5751, Nil()), [&](const auto &x_5752) {
    if (IsSome(HashtblFind(x_5752->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5752->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5752);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4299(const auto &x_5753) {
  if (eq(x_5753->var_display, std::string("none")) || (x_5753->var_inside_svg || x_5753->var_disabled)) {
    return true;
  } else {
    if ((x_5753->parent != nullptr) && (x_5753->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5753->var_width_expr, std::string("auto")) ||
          (has_suffix(x_5753->var_width_expr, std::string("px")) ||
           (has_suffix(x_5753->var_width_expr, std::string("ch")) ||
            (has_prefix(x_5753->var_width_expr, std::string("calc(")) ||
             eq(x_5753->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4297(const auto &x_5802) {
  ListIter(Cons(x_5802, Nil()), [&](const auto &x_5803) {
    if (IsSome(HashtblFind(x_5803->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5803->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5803);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5802, Nil()), [&](const auto &x_5804) {
    if (IsSome(HashtblFind(x_5804->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5804->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5804);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4294(const auto &x_5805) {
  if (eq(x_5805->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_5805->var_inside_svg) {
      return true;
    } else {
      if (x_5805->var_disabled) {
        return true;
      } else {if ( eq(x_5805->name,std::string("#document")) || (eq(x_5805->name,std::string("#shadow-root")) || (eq(x_5805->name,std::string("DIV")) || (eq(x_5805->name,std::string("HTML")) || (eq(x_5805->name,std::string("BODY")) || (eq(x_5805->name,std::string("BUTTON")) || (eq(x_5805->name,std::string("FOOTER")) || (eq(x_5805->name,std::string("SELECT")) || (eq(x_5805->name,std::string("SECTION")) || (eq(x_5805->name,std::string("FORM")) || (eq(x_5805->name,std::string("CENTER")) || (eq(x_5805->name,std::string("TD")) || (eq(x_5805->name,std::string("TR")) || (eq(x_5805->name,std::string("TBODY")) || (eq(x_5805->name,std::string("TABLE")) || (eq(x_5805->name,std::string("SPAN")) || (eq(x_5805->name,std::string("FONT")) || (eq(x_5805->name,std::string("A")) || (eq(x_5805->name,std::string("ARTICLE")) || (eq(x_5805->name,std::string("P")) || (eq(x_5805->name,std::string("U")) || (eq(x_5805->name,std::string("UL")) || (eq(x_5805->name,std::string("B")) || (eq(x_5805->name,std::string("H1")) || (eq(x_5805->name,std::string("H2")) || (eq(x_5805->name,std::string("H3")) || (eq(x_5805->name,std::string("H4")) || (eq(x_5805->name,std::string("DT")) || (eq(x_5805->name,std::string("DD")) || (eq(x_5805->name,std::string("DL")) || (eq(x_5805->name,std::string("LI")) || (eq(x_5805->name,std::string("LABEL")) || (eq(x_5805->name,std::string("OL")) || (eq(x_5805->name,std::string("NAV")) || (eq(x_5805->name,std::string("HEADER")) || (eq(x_5805->name,std::string("HEAD")) || (eq(x_5805->name,std::string("SOURCE")) || (eq(x_5805->name,std::string("PICTURE")) || (eq(x_5805->name,std::string("FIGURE")) || (eq(x_5805->name,std::string("FIGCAPTION")) || (eq(x_5805->name,std::string("MAIN")) || (eq(x_5805->name,std::string("REACT-PARTIAL")) || (eq(x_5805->name,std::string("QUERY-BUILDER")) || (eq(x_5805->name,std::string("MODAL-DIALOG")) || (eq(x_5805->name,std::string("SCROLLABLE-REGION")) || (eq(x_5805->name,std::string("DIALOG-HELPER")) || (eq(x_5805->name,std::string("AUTO-CHECK")) || (eq(x_5805->name,std::string("TOOL-TIP")) || (eq(x_5805->name,std::string("CUSTOM-SCOPES")) || (eq(x_5805->name,std::string("QBSEARCH-INPUT")) || (eq(x_5805->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_5805->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_5805->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_5805->name,std::string("GHCC-CONSENT")) || (eq(x_5805->name,std::string("GLOBAL-BANNER")) || (eq(x_5805->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_5805->name,std::string("CARD-SKEW")) || (eq(x_5805->name,std::string("EM")) || (eq(x_5805->name,std::string("ASIDE")) || (eq(x_5805->name,std::string("AUDIO")) || (eq(x_5805->name,std::string("SUP")) || (eq(x_5805->name,std::string("TIME")) || (eq(x_5805->name,std::string("ABBR")) || (eq(x_5805->name,std::string("SMALL")) || (eq(x_5805->name,std::string("SLOT")) || eq(x_5805->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_4292(const auto &x_5818) {
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5819) {
    if (IsSome(HashtblFind(x_5819->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5819->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5819);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5820) {
    if (IsSome(HashtblFind(x_5820->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5820->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5820);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5821) {
    if (IsSome(HashtblFind(x_5821->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5821->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5821);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5822) {
    if (IsSome(HashtblFind(x_5822->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5822->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5822);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5823) {
    if (IsSome(HashtblFind(x_5823->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5823->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5823);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5824) {
    if (IsSome(HashtblFind(x_5824->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5824->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5824);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5825) {
    if (IsSome(HashtblFind(x_5825->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5825->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5825);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5826) {
    if (IsSome(HashtblFind(x_5826->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5826->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5826);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5827) {
    if (IsSome(HashtblFind(x_5827->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5827->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5827);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5828) {
    if (IsSome(HashtblFind(x_5828->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5828->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5828);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5829) {
    if (IsSome(HashtblFind(x_5829->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5829->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5829);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5830) {
    if (IsSome(HashtblFind(x_5830->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5830->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5830);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5831) {
    if (IsSome(HashtblFind(x_5831->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5831->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5831);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5832) {
    if (IsSome(HashtblFind(x_5832->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5832->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5832);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5833) {
    if (IsSome(HashtblFind(x_5833->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5833->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5833);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5834) {
    if (IsSome(HashtblFind(x_5834->meta->ProcInited, std::string("pass_0")))) {
      HashtblSet(x_5834->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3655(x_5834);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5835) {
    if (IsSome(HashtblFind(x_5835->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5835->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5835);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5836) {
    if (IsSome(HashtblFind(x_5836->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5836->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5836);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  ListIter(Cons(x_5818, Nil()), [&](const auto &x_5837) {
    if (IsSome(HashtblFind(x_5837->meta->ProcInited, std::string("pass_1")))) {
      HashtblSet(x_5837->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3729(x_5837);
    } else {
      return MetaWriteMetric(x_3579);
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4289(const auto &x_5838) {
  if (HashtblContain(x_5838->prop, std::string("width"))) {
    return GetProp<std::string>(x_5838, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_4286(const auto &x_5841) { return MakeUnit(); }
auto eval_expr_x_4283(const auto &x_5848) {
  if ((x_5848->prev != nullptr) && (!(x_5848->prev)->var_line_break)) {
    return max(x_5848->var_height_external, (x_5848->prev)->var_line_height);
  } else {
    return x_5848->var_height_external;
  }
}
Unit var_modified_x_4281(const auto &x_5865) { return MakeUnit(); }
auto eval_expr_x_4278(const auto &x_5868) {
  if (eq(x_5868->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5868->var_height_internal;
  }
}
Unit var_modified_x_4276(const auto &x_5877) { return MakeUnit(); }
auto eval_expr_x_4273(const auto &x_5880) {
  if (x_5880->var_intrinsic_height_is_height) {
    return x_5880->var_intrinsic_height_internal;
  } else {
    if ((x_5880->parent != nullptr) && (x_5880->parent)->var_is_flex_column) {
      return plus(x_5880->var_intrinsic_height_internal,
                  mult(x_5880->var_flex_amount, (x_5880->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5880->var_height_expr, std::string("%"))) {
        return mult(x_5880->var_box_height,
                    divide(string_to_float(strip_suffix(x_5880->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_5880->var_box_height, x_5880->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_4271(const auto &x_5933) { return MakeUnit(); }
auto eval_expr_x_4268(const auto &x_5941) {
  if (x_5941->prev != nullptr) {
    if (x_5941->var_line_break || (x_5941->prev)->var_line_break) {
      return plus((x_5941->prev)->var_y, (x_5941->prev)->var_line_height);
    } else {
      return (x_5941->prev)->var_y;
    }
  } else {
    if (x_5941->parent != nullptr) {
      return (x_5941->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4266(const auto &x_5966) { return MakeUnit(); }
auto eval_expr_x_4263(const auto &x_5970) {
  if (eq(x_5970->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5970->var_width_internal;
  }
}
Unit var_modified_x_4261(const auto &x_5979) { return MakeUnit(); }
auto eval_expr_x_4258(const auto &x_5982) {
  if (x_5982->var_intrinsic_width_is_width) {
    return x_5982->var_intrinsic_width_internal;
  } else {
    if ((x_5982->parent != nullptr) && (x_5982->parent)->var_is_flex_row) {
      return plus(x_5982->var_intrinsic_width_internal, mult(x_5982->var_flex_amount, (x_5982->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5982->var_width_expr, std::string("%"))) {
        return mult(x_5982->var_box_width,
                    divide(string_to_float(strip_suffix(x_5982->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_5982->var_box_width, x_5982->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_4256(const auto &x_6035) { return MakeUnit(); }
auto eval_expr_x_4253(const auto &x_6040) {
  if (x_6040->prev != nullptr) {
    if (x_6040->var_line_break || (x_6040->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_6040->prev)->var_x, (x_6040->prev)->var_width_external);
    }
  } else {
    if (x_6040->parent != nullptr) {
      return (x_6040->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4251(const auto &x_6061) { return MakeUnit(); }
auto eval_expr_x_4248(const auto &x_6064) {
  if (gt(x_6064->var_left_over, 0.)) {
    return divide(x_6064->var_left_over, x_6064->var_flex_grow_sum);
  } else {
    return divide(x_6064->var_left_over, x_6064->var_flex_shrink_sum);
  }
}
Unit var_modified_x_4246(const auto &x_6085) { return MakeUnit(); }
auto eval_expr_x_4243(const auto &x_6088) {
  if ((x_6088->parent != nullptr) && gt((x_6088->parent)->var_left_over, 0.)) {
    return x_6088->var_flex_grow;
  } else {
    return x_6088->var_flex_shrink;
  }
}
Unit var_modified_x_4241(const auto &x_6101) { return MakeUnit(); }
auto eval_expr_x_4238(const auto &x_6106) {
  if (x_6106->var_is_flex_row) {
    return minus(x_6106->var_box_width, (x_6106->last != nullptr) ? ((x_6106->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_6106->var_box_height, (x_6106->last != nullptr) ? ((x_6106->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_4236(const auto &x_6127) { return MakeUnit(); }
auto eval_expr_x_4233(const auto &x_6131) {
  if (x_6131->parent != nullptr) {
    return (x_6131->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_4231(const auto &x_6136) { return MakeUnit(); }
auto eval_expr_x_4228(const auto &x_6140) {
  if (x_6140->parent != nullptr) {
    return (x_6140->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_4225(const auto &x_6145) { return MakeUnit(); }
auto eval_expr_x_4222(const auto &x_6163) {
  if (eq(x_6163->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_6163->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_6163->parent != nullptr) &&
          (eq((x_6163->parent)->var_display, std::string("flex")) ||
           eq((x_6163->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_6163->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_6163->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_6163->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_6163->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_6163, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_6163, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_6163->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_6163->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_6163->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_6163->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_6163->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_6163->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_6163->var_display, std::string("list-item"))) {
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
Unit var_modified_x_4220(const auto &x_6240) { return MakeUnit(); }
auto eval_expr_x_4217(const auto &x_6242) {
  return (((!(x_6242->parent != nullptr)) || (x_6242->parent)->var_visible) &&
          (neq(x_6242->var_display, std::string("none")) && ((!x_6242->var_inside_svg) && (!x_6242->var_disabled))));
}
Unit var_modified_x_4215(const auto &x_6259) { return MakeUnit(); }
auto eval_expr_x_4212(const auto &x_6267) {
  if (eq(x_6267->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_6267->parent != nullptr) && (x_6267->parent)->var_disabled);
  }
}
Unit var_modified_x_4210(const auto &x_6272) { return MakeUnit(); }
auto eval_expr_x_4207(const auto &x_6280) {
  return ((x_6280->parent != nullptr) && ((x_6280->parent)->var_is_svg_block || (x_6280->parent)->var_inside_svg));
}
Unit var_modified_x_4205(const auto &x_6289) { return MakeUnit(); }
auto eval_expr_x_4202(const auto &x_6291) { return eq(x_6291->name, std::string("svg")); }
Unit var_modified_x_4200(const auto &x_6292) { return MakeUnit(); }
auto eval_expr_x_4197(const auto &x_6301) { return neq(x_6301->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_4195(const auto &x_6306) { return MakeUnit(); }
auto eval_expr_x_4192(const auto &x_6314) {
  if (!HasAttr(x_6314, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_6314, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_6314, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_6314, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_4190(const auto &x_6325) { return MakeUnit(); }
auto eval_expr_x_4187(const auto &x_6335) { return neq(x_6335->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_4185(const auto &x_6340) { return MakeUnit(); }
auto eval_expr_x_4182(const auto &x_6348) {
  if (!HasAttr(x_6348, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_6348, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_6348, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_6348, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_4180(const auto &x_6359) { return MakeUnit(); }
auto eval_expr_x_4177(const auto &x_6362) {
  if ((x_6362->parent != nullptr) &&
      (eq((x_6362->parent)->var_display, std::string("flex")) ||
       eq((x_6362->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_6362->parent)->var_flex_direction, std::string("column")) ||
        eq((x_6362->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4175(const auto &x_6387) { return MakeUnit(); }
auto eval_expr_x_4172(const auto &x_6391) {
  if ((x_6391->parent != nullptr) &&
      (eq((x_6391->parent)->var_display, std::string("flex")) ||
       eq((x_6391->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_6391->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4170(const auto &x_6416) { return MakeUnit(); }
auto eval_expr_x_4167(const auto &x_6423) {
  if (HashtblContain(x_6423->prop, std::string("flex-direction"))) {
    return GetProp<std::string>(x_6423, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_4165(const auto &x_6426) { return MakeUnit(); }
auto eval_expr_x_4162(const auto &x_6431) {
  return plus((x_6431->prev != nullptr) ? ((x_6431->prev)->var_flex_shrink_sum) : (0.), x_6431->var_flex_shrink);
}
Unit var_modified_x_4160(const auto &x_6440) { return MakeUnit(); }
auto eval_expr_x_4157(const auto &x_6445) {
  return plus((x_6445->prev != nullptr) ? ((x_6445->prev)->var_flex_grow_sum) : (0.), x_6445->var_flex_grow);
}
Unit var_modified_x_4155(const auto &x_6454) { return MakeUnit(); }
auto eval_expr_x_4152(const auto &x_6457) {
  if (HashtblContain(x_6457->prop, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_6457, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_4150(const auto &x_6460) { return MakeUnit(); }
auto eval_expr_x_4147(const auto &x_6463) {
  if (HashtblContain(x_6463->prop, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_6463, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_4145(const auto &x_6466) { return MakeUnit(); }
auto eval_expr_x_4142(const auto &x_6472) {
  if (HashtblContain(x_6472->prop, std::string("position"))) {
    return GetProp<std::string>(x_6472, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_4140(const auto &x_6475) { return MakeUnit(); }
auto eval_expr_x_4137(const auto &x_6501) {
  if (HashtblContain(x_6501->prop, std::string("display"))) {
    return GetProp<std::string>(x_6501, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_4134(const auto &x_6504) { return MakeUnit(); }
auto eval_expr_x_4131(const auto &x_6514) {
  if (x_6514->prev != nullptr) {
    if (x_6514->var_line_break) {
      return plus((x_6514->prev)->var_finished_intrinsic_height_sum,
                  plus((x_6514->prev)->var_intrinsic_current_line_height, x_6514->var_intrinsic_height_external));
    } else {
      return (x_6514->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_6514->var_line_break) {
      return x_6514->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4129(const auto &x_6543) { return MakeUnit(); }
auto eval_expr_x_4126(const auto &x_6553) {
  if (x_6553->var_line_break) {
    return 0.;
  } else {
    return max(x_6553->var_intrinsic_height_external,
               (x_6553->prev != nullptr) ? ((x_6553->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4124(const auto &x_6566) { return MakeUnit(); }
auto eval_expr_x_4121(const auto &x_6573) {
  return plus((x_6573->prev != nullptr) ? ((x_6573->prev)->var_intrinsic_height_sum) : (0.),
              x_6573->var_intrinsic_height_external);
}
Unit var_modified_x_4119(const auto &x_6582) { return MakeUnit(); }
auto eval_expr_x_4116(const auto &x_6587) {
  if (eq(x_6587->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_6587->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4114(const auto &x_6596) { return MakeUnit(); }
auto eval_expr_x_4111(const auto &x_6601) {
  if (eq(x_6601->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_6601->var_inside_svg) {
      return 0.;
    } else {
      if (x_6601->var_disabled) {
        return 0.;
      } else {
        if (neq(x_6601->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_6601->var_height_expr, std::string("%"))) &&
             neq(x_6601->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_6601->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_6601->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_6601->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_6601->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_6601->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_6601->var_children_intrinsic_height,
              (eq(x_6601->name, std::string("#text")))
                  ? (10.)
                  : ((x_6601->var_is_default_case)
                         ? (0.)
                         : ((eq(x_6601->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_6601->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_6601->name, std::string("svg")))
                                              ? ((x_6601->var_has_height_attr &&
                                                  string_is_float(x_6601->var_height_attr_expr))
                                                     ? (string_to_float(x_6601->var_height_attr_expr))
                                                     : ((HasAttr(x_6601, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_6601, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_6601,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_6601->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_6601->name, std::string("IMG")))
                                                     ? ((x_6601->var_has_height_attr)
                                                            ? (string_to_float(x_6601->var_height_attr_expr))
                                                            : ((HasAttr(x_6601, std::string("image_height")) &&
                                                                (!x_6601->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_6601, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_6601,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_6601->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_6601,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_6601,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_6601->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_6601->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4109(const auto &x_6746) { return MakeUnit(); }
auto eval_expr_x_4106(const auto &x_6748) {
  if (eq(x_6748->var_display, std::string("none")) || (x_6748->var_inside_svg || x_6748->var_disabled)) {
    return true;
  } else {
    if ((x_6748->parent != nullptr) && (x_6748->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_6748->var_height_expr, std::string("auto")) ||
          (has_suffix(x_6748->var_height_expr, std::string("px")) ||
           (has_suffix(x_6748->var_height_expr, std::string("ch")) ||
            (has_suffix(x_6748->var_height_expr, std::string("lh")) ||
             eq(x_6748->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4104(const auto &x_6797) { return MakeUnit(); }
auto eval_expr_x_4101(const auto &x_6817) {
  if (HashtblContain(x_6817->prop, std::string("height"))) {
    return GetProp<std::string>(x_6817, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_4099(const auto &x_6820) { return MakeUnit(); }
auto eval_expr_x_4096(const auto &x_6822) {
  if (x_6822->last != nullptr) {
    return plus((x_6822->last)->var_finished_intrinsic_height_sum, (x_6822->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_4094(const auto &x_6831) { return MakeUnit(); }
auto eval_expr_x_4091(const auto &x_6838) {
  return plus((x_6838->prev != nullptr) ? ((x_6838->prev)->var_intrinsic_width_sum) : (0.),
              x_6838->var_intrinsic_width_external);
}
Unit var_modified_x_4089(const auto &x_6847) { return MakeUnit(); }
auto eval_expr_x_4086(const auto &x_6854) {
  return max(x_6854->var_intrinsic_current_line_width,
             (x_6854->prev != nullptr) ? ((x_6854->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_4084(const auto &x_6863) { return MakeUnit(); }
auto eval_expr_x_4081(const auto &x_6868) {
  return plus(x_6868->var_intrinsic_width_external,
              ((x_6868->prev != nullptr) && (!(x_6868->prev)->var_line_break))
                  ? ((x_6868->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_4079(const auto &x_6881) { return MakeUnit(); }
auto eval_expr_x_4076(const auto &x_6884) {
  if (eq(x_6884->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_6884->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_4074(const auto &x_6893) { return MakeUnit(); }
auto eval_expr_x_4071(const auto &x_6898) {
  if (eq(x_6898->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_6898->var_inside_svg) {
      return 0.;
    } else {
      if (x_6898->var_disabled) {
        return 0.;
      } else {
        if (neq(x_6898->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_6898->var_width_expr, std::string("%"))) &&
             (neq(x_6898->var_width_expr, std::string("fit-content")) &&
              (neq(x_6898->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_6898->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_6898->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_6898->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_6898->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_6898->var_children_intrinsic_width,
              (eq(x_6898->name, std::string("#text")))
                  ? (100.)
                  : ((x_6898->var_is_default_case)
                         ? (0.)
                         : ((eq(x_6898->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_6898->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_6898->name, std::string("svg")))
                                              ? ((x_6898->var_has_width_attr &&
                                                  string_is_float(x_6898->var_width_attr_expr))
                                                     ? (string_to_float(x_6898->var_width_attr_expr))
                                                     : (((!x_6898->var_has_width_attr) &&
                                                         HasAttr(x_6898, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_6898, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_6898,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_6898->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_6898->name, std::string("IMG")))
                                                     ? ((x_6898->var_has_width_attr)
                                                            ? (string_to_float(x_6898->var_width_attr_expr))
                                                            : ((HasAttr(x_6898, std::string("image_width")) &&
                                                                (!x_6898->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_6898, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_6898, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_6898->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_6898,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_6898,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_6898->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_6898->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4069(const auto &x_7051) { return MakeUnit(); }
auto eval_expr_x_4066(const auto &x_7053) {
  if (x_7053->last != nullptr) {
    return (x_7053->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_4064(const auto &x_7058) { return MakeUnit(); }
auto eval_expr_x_4061(const auto &x_7060) {
  if (eq(x_7060->var_display, std::string("none")) || (x_7060->var_inside_svg || x_7060->var_disabled)) {
    return true;
  } else {
    if ((x_7060->parent != nullptr) && (x_7060->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_7060->var_width_expr, std::string("auto")) ||
          (has_suffix(x_7060->var_width_expr, std::string("px")) ||
           (has_suffix(x_7060->var_width_expr, std::string("ch")) ||
            (has_prefix(x_7060->var_width_expr, std::string("calc(")) ||
             eq(x_7060->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4059(const auto &x_7109) { return MakeUnit(); }
auto eval_expr_x_4056(const auto &x_7112) {
  if (eq(x_7112->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_7112->var_inside_svg) {
      return true;
    } else {
      if (x_7112->var_disabled) {
        return true;
      } else {if ( eq(x_7112->name,std::string("#document")) || (eq(x_7112->name,std::string("#shadow-root")) || (eq(x_7112->name,std::string("DIV")) || (eq(x_7112->name,std::string("HTML")) || (eq(x_7112->name,std::string("BODY")) || (eq(x_7112->name,std::string("BUTTON")) || (eq(x_7112->name,std::string("FOOTER")) || (eq(x_7112->name,std::string("SELECT")) || (eq(x_7112->name,std::string("SECTION")) || (eq(x_7112->name,std::string("FORM")) || (eq(x_7112->name,std::string("CENTER")) || (eq(x_7112->name,std::string("TD")) || (eq(x_7112->name,std::string("TR")) || (eq(x_7112->name,std::string("TBODY")) || (eq(x_7112->name,std::string("TABLE")) || (eq(x_7112->name,std::string("SPAN")) || (eq(x_7112->name,std::string("FONT")) || (eq(x_7112->name,std::string("A")) || (eq(x_7112->name,std::string("ARTICLE")) || (eq(x_7112->name,std::string("P")) || (eq(x_7112->name,std::string("U")) || (eq(x_7112->name,std::string("UL")) || (eq(x_7112->name,std::string("B")) || (eq(x_7112->name,std::string("H1")) || (eq(x_7112->name,std::string("H2")) || (eq(x_7112->name,std::string("H3")) || (eq(x_7112->name,std::string("H4")) || (eq(x_7112->name,std::string("DT")) || (eq(x_7112->name,std::string("DD")) || (eq(x_7112->name,std::string("DL")) || (eq(x_7112->name,std::string("LI")) || (eq(x_7112->name,std::string("LABEL")) || (eq(x_7112->name,std::string("OL")) || (eq(x_7112->name,std::string("NAV")) || (eq(x_7112->name,std::string("HEADER")) || (eq(x_7112->name,std::string("HEAD")) || (eq(x_7112->name,std::string("SOURCE")) || (eq(x_7112->name,std::string("PICTURE")) || (eq(x_7112->name,std::string("FIGURE")) || (eq(x_7112->name,std::string("FIGCAPTION")) || (eq(x_7112->name,std::string("MAIN")) || (eq(x_7112->name,std::string("REACT-PARTIAL")) || (eq(x_7112->name,std::string("QUERY-BUILDER")) || (eq(x_7112->name,std::string("MODAL-DIALOG")) || (eq(x_7112->name,std::string("SCROLLABLE-REGION")) || (eq(x_7112->name,std::string("DIALOG-HELPER")) || (eq(x_7112->name,std::string("AUTO-CHECK")) || (eq(x_7112->name,std::string("TOOL-TIP")) || (eq(x_7112->name,std::string("CUSTOM-SCOPES")) || (eq(x_7112->name,std::string("QBSEARCH-INPUT")) || (eq(x_7112->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_7112->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_7112->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_7112->name,std::string("GHCC-CONSENT")) || (eq(x_7112->name,std::string("GLOBAL-BANNER")) || (eq(x_7112->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_7112->name,std::string("CARD-SKEW")) || (eq(x_7112->name,std::string("EM")) || (eq(x_7112->name,std::string("ASIDE")) || (eq(x_7112->name,std::string("AUDIO")) || (eq(x_7112->name,std::string("SUP")) || (eq(x_7112->name,std::string("TIME")) || (eq(x_7112->name,std::string("ABBR")) || (eq(x_7112->name,std::string("SMALL")) || (eq(x_7112->name,std::string("SLOT")) || eq(x_7112->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_4054(const auto &x_7125) { return MakeUnit(); }
auto eval_expr_x_4051(const auto &x_7145) {
  if (HashtblContain(x_7145->prop, std::string("width"))) {
    return GetProp<std::string>(x_7145, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_4014(const auto &x_4050) {
  WriteMetric();
  auto x_4052 = eval_expr_x_4051(x_4050);
  if (x_4050->has_var_width_expr) {
    auto x_4053 = x_4050->var_width_expr;
    if (EqualValue(x_4053, x_4052)) {
      MakeUnit();
    } else {
      var_modified_x_4054(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_width_expr = x_4052;
  WriteMetric();
  auto x_4057 = eval_expr_x_4056(x_4050);
  if (x_4050->has_var_is_default_case) {
    auto x_4058 = x_4050->var_is_default_case;
    if (EqualValue(x_4058, x_4057)) {
      MakeUnit();
    } else {
      var_modified_x_4059(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_is_default_case = x_4057;
  WriteMetric();
  auto x_4062 = eval_expr_x_4061(x_4050);
  if (x_4050->has_var_intrinsic_width_is_width) {
    auto x_4063 = x_4050->var_intrinsic_width_is_width;
    if (EqualValue(x_4063, x_4062)) {
      MakeUnit();
    } else {
      var_modified_x_4064(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_width_is_width = x_4062;
  WriteMetric();
  auto x_4067 = eval_expr_x_4066(x_4050);
  if (x_4050->has_var_children_intrinsic_width) {
    auto x_4068 = x_4050->var_children_intrinsic_width;
    if (EqualValue(x_4068, x_4067)) {
      MakeUnit();
    } else {
      var_modified_x_4069(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_children_intrinsic_width = x_4067;
  WriteMetric();
  auto x_4072 = eval_expr_x_4071(x_4050);
  if (x_4050->has_var_intrinsic_width_internal) {
    auto x_4073 = x_4050->var_intrinsic_width_internal;
    if (EqualValue(x_4073, x_4072)) {
      MakeUnit();
    } else {
      var_modified_x_4074(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_width_internal = x_4072;
  WriteMetric();
  auto x_4077 = eval_expr_x_4076(x_4050);
  if (x_4050->has_var_intrinsic_width_external) {
    auto x_4078 = x_4050->var_intrinsic_width_external;
    if (EqualValue(x_4078, x_4077)) {
      MakeUnit();
    } else {
      var_modified_x_4079(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_width_external = x_4077;
  WriteMetric();
  auto x_4082 = eval_expr_x_4081(x_4050);
  if (x_4050->has_var_intrinsic_current_line_width) {
    auto x_4083 = x_4050->var_intrinsic_current_line_width;
    if (EqualValue(x_4083, x_4082)) {
      MakeUnit();
    } else {
      var_modified_x_4084(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_current_line_width = x_4082;
  WriteMetric();
  auto x_4087 = eval_expr_x_4086(x_4050);
  if (x_4050->has_var_intrinsic_width_max) {
    auto x_4088 = x_4050->var_intrinsic_width_max;
    if (EqualValue(x_4088, x_4087)) {
      MakeUnit();
    } else {
      var_modified_x_4089(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_width_max = x_4087;
  WriteMetric();
  auto x_4092 = eval_expr_x_4091(x_4050);
  if (x_4050->has_var_intrinsic_width_sum) {
    auto x_4093 = x_4050->var_intrinsic_width_sum;
    if (EqualValue(x_4093, x_4092)) {
      MakeUnit();
    } else {
      var_modified_x_4094(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_width_sum = x_4092;
  WriteMetric();
  auto x_4097 = eval_expr_x_4096(x_4050);
  if (x_4050->has_var_children_intrinsic_height) {
    auto x_4098 = x_4050->var_children_intrinsic_height;
    if (EqualValue(x_4098, x_4097)) {
      MakeUnit();
    } else {
      var_modified_x_4099(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_children_intrinsic_height = x_4097;
  WriteMetric();
  auto x_4102 = eval_expr_x_4101(x_4050);
  if (x_4050->has_var_height_expr) {
    auto x_4103 = x_4050->var_height_expr;
    if (EqualValue(x_4103, x_4102)) {
      MakeUnit();
    } else {
      var_modified_x_4104(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_height_expr = x_4102;
  WriteMetric();
  auto x_4107 = eval_expr_x_4106(x_4050);
  if (x_4050->has_var_intrinsic_height_is_height) {
    auto x_4108 = x_4050->var_intrinsic_height_is_height;
    if (EqualValue(x_4108, x_4107)) {
      MakeUnit();
    } else {
      var_modified_x_4109(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_height_is_height = x_4107;
  WriteMetric();
  auto x_4112 = eval_expr_x_4111(x_4050);
  if (x_4050->has_var_intrinsic_height_internal) {
    auto x_4113 = x_4050->var_intrinsic_height_internal;
    if (EqualValue(x_4113, x_4112)) {
      MakeUnit();
    } else {
      var_modified_x_4114(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_height_internal = x_4112;
  WriteMetric();
  auto x_4117 = eval_expr_x_4116(x_4050);
  if (x_4050->has_var_intrinsic_height_external) {
    auto x_4118 = x_4050->var_intrinsic_height_external;
    if (EqualValue(x_4118, x_4117)) {
      MakeUnit();
    } else {
      var_modified_x_4119(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_height_external = x_4117;
  WriteMetric();
  auto x_4122 = eval_expr_x_4121(x_4050);
  if (x_4050->has_var_intrinsic_height_sum) {
    auto x_4123 = x_4050->var_intrinsic_height_sum;
    if (EqualValue(x_4123, x_4122)) {
      MakeUnit();
    } else {
      var_modified_x_4124(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_height_sum = x_4122;
  WriteMetric();
  auto x_4127 = eval_expr_x_4126(x_4050);
  if (x_4050->has_var_intrinsic_current_line_height) {
    auto x_4128 = x_4050->var_intrinsic_current_line_height;
    if (EqualValue(x_4128, x_4127)) {
      MakeUnit();
    } else {
      var_modified_x_4129(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_intrinsic_current_line_height = x_4127;
  WriteMetric();
  auto x_4132 = eval_expr_x_4131(x_4050);
  if (x_4050->has_var_finished_intrinsic_height_sum) {
    auto x_4133 = x_4050->var_finished_intrinsic_height_sum;
    if (EqualValue(x_4133, x_4132)) {
      MakeUnit();
    } else {
      var_modified_x_4134(x_4050);
    }
  } else {
    MakeUnit();
  }
  x_4050->var_finished_intrinsic_height_sum = x_4132;
  return MakeUnit();
}
Unit eval_stmts_x_4012(const auto &x_4136) {
  WriteMetric();
  auto x_4138 = eval_expr_x_4137(x_4136);
  if (x_4136->has_var_display) {
    auto x_4139 = x_4136->var_display;
    if (EqualValue(x_4139, x_4138)) {
      MakeUnit();
    } else {
      var_modified_x_4140(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_display = x_4138;
  WriteMetric();
  auto x_4143 = eval_expr_x_4142(x_4136);
  if (x_4136->has_var_position) {
    auto x_4144 = x_4136->var_position;
    if (EqualValue(x_4144, x_4143)) {
      MakeUnit();
    } else {
      var_modified_x_4145(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_position = x_4143;
  WriteMetric();
  auto x_4148 = eval_expr_x_4147(x_4136);
  if (x_4136->has_var_flex_grow) {
    auto x_4149 = x_4136->var_flex_grow;
    if (EqualValue(x_4149, x_4148)) {
      MakeUnit();
    } else {
      var_modified_x_4150(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_flex_grow = x_4148;
  WriteMetric();
  auto x_4153 = eval_expr_x_4152(x_4136);
  if (x_4136->has_var_flex_shrink) {
    auto x_4154 = x_4136->var_flex_shrink;
    if (EqualValue(x_4154, x_4153)) {
      MakeUnit();
    } else {
      var_modified_x_4155(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_flex_shrink = x_4153;
  WriteMetric();
  auto x_4158 = eval_expr_x_4157(x_4136);
  if (x_4136->has_var_flex_grow_sum) {
    auto x_4159 = x_4136->var_flex_grow_sum;
    if (EqualValue(x_4159, x_4158)) {
      MakeUnit();
    } else {
      var_modified_x_4160(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_flex_grow_sum = x_4158;
  WriteMetric();
  auto x_4163 = eval_expr_x_4162(x_4136);
  if (x_4136->has_var_flex_shrink_sum) {
    auto x_4164 = x_4136->var_flex_shrink_sum;
    if (EqualValue(x_4164, x_4163)) {
      MakeUnit();
    } else {
      var_modified_x_4165(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_flex_shrink_sum = x_4163;
  WriteMetric();
  auto x_4168 = eval_expr_x_4167(x_4136);
  if (x_4136->has_var_flex_direction) {
    auto x_4169 = x_4136->var_flex_direction;
    if (EqualValue(x_4169, x_4168)) {
      MakeUnit();
    } else {
      var_modified_x_4170(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_flex_direction = x_4168;
  WriteMetric();
  auto x_4173 = eval_expr_x_4172(x_4136);
  if (x_4136->has_var_is_flex_row) {
    auto x_4174 = x_4136->var_is_flex_row;
    if (EqualValue(x_4174, x_4173)) {
      MakeUnit();
    } else {
      var_modified_x_4175(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_is_flex_row = x_4173;
  WriteMetric();
  auto x_4178 = eval_expr_x_4177(x_4136);
  if (x_4136->has_var_is_flex_column) {
    auto x_4179 = x_4136->var_is_flex_column;
    if (EqualValue(x_4179, x_4178)) {
      MakeUnit();
    } else {
      var_modified_x_4180(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_is_flex_column = x_4178;
  WriteMetric();
  auto x_4183 = eval_expr_x_4182(x_4136);
  if (x_4136->has_var_width_attr_expr) {
    auto x_4184 = x_4136->var_width_attr_expr;
    if (EqualValue(x_4184, x_4183)) {
      MakeUnit();
    } else {
      var_modified_x_4185(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_width_attr_expr = x_4183;
  WriteMetric();
  auto x_4188 = eval_expr_x_4187(x_4136);
  if (x_4136->has_var_has_width_attr) {
    auto x_4189 = x_4136->var_has_width_attr;
    if (EqualValue(x_4189, x_4188)) {
      MakeUnit();
    } else {
      var_modified_x_4190(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_has_width_attr = x_4188;
  WriteMetric();
  auto x_4193 = eval_expr_x_4192(x_4136);
  if (x_4136->has_var_height_attr_expr) {
    auto x_4194 = x_4136->var_height_attr_expr;
    if (EqualValue(x_4194, x_4193)) {
      MakeUnit();
    } else {
      var_modified_x_4195(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_height_attr_expr = x_4193;
  WriteMetric();
  auto x_4198 = eval_expr_x_4197(x_4136);
  if (x_4136->has_var_has_height_attr) {
    auto x_4199 = x_4136->var_has_height_attr;
    if (EqualValue(x_4199, x_4198)) {
      MakeUnit();
    } else {
      var_modified_x_4200(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_has_height_attr = x_4198;
  WriteMetric();
  auto x_4203 = eval_expr_x_4202(x_4136);
  if (x_4136->has_var_is_svg_block) {
    auto x_4204 = x_4136->var_is_svg_block;
    if (EqualValue(x_4204, x_4203)) {
      MakeUnit();
    } else {
      var_modified_x_4205(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_is_svg_block = x_4203;
  WriteMetric();
  auto x_4208 = eval_expr_x_4207(x_4136);
  if (x_4136->has_var_inside_svg) {
    auto x_4209 = x_4136->var_inside_svg;
    if (EqualValue(x_4209, x_4208)) {
      MakeUnit();
    } else {
      var_modified_x_4210(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_inside_svg = x_4208;
  WriteMetric();
  auto x_4213 = eval_expr_x_4212(x_4136);
  if (x_4136->has_var_disabled) {
    auto x_4214 = x_4136->var_disabled;
    if (EqualValue(x_4214, x_4213)) {
      MakeUnit();
    } else {
      var_modified_x_4215(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_disabled = x_4213;
  WriteMetric();
  auto x_4218 = eval_expr_x_4217(x_4136);
  if (x_4136->has_var_visible) {
    auto x_4219 = x_4136->var_visible;
    if (EqualValue(x_4219, x_4218)) {
      MakeUnit();
    } else {
      var_modified_x_4220(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_visible = x_4218;
  WriteMetric();
  auto x_4223 = eval_expr_x_4222(x_4136);
  if (x_4136->has_var_line_break) {
    auto x_4224 = x_4136->var_line_break;
    if (EqualValue(x_4224, x_4223)) {
      MakeUnit();
    } else {
      var_modified_x_4225(x_4136);
    }
  } else {
    MakeUnit();
  }
  x_4136->var_line_break = x_4223;
  return MakeUnit();
}
Unit eval_stmts_x_4009(const auto &x_4227) {
  WriteMetric();
  auto x_4229 = eval_expr_x_4228(x_4227);
  if (x_4227->has_var_box_width) {
    auto x_4230 = x_4227->var_box_width;
    if (EqualValue(x_4230, x_4229)) {
      MakeUnit();
    } else {
      var_modified_x_4231(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_box_width = x_4229;
  WriteMetric();
  auto x_4234 = eval_expr_x_4233(x_4227);
  if (x_4227->has_var_box_height) {
    auto x_4235 = x_4227->var_box_height;
    if (EqualValue(x_4235, x_4234)) {
      MakeUnit();
    } else {
      var_modified_x_4236(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_box_height = x_4234;
  WriteMetric();
  auto x_4239 = eval_expr_x_4238(x_4227);
  if (x_4227->has_var_left_over) {
    auto x_4240 = x_4227->var_left_over;
    if (EqualValue(x_4240, x_4239)) {
      MakeUnit();
    } else {
      var_modified_x_4241(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_left_over = x_4239;
  WriteMetric();
  auto x_4244 = eval_expr_x_4243(x_4227);
  if (x_4227->has_var_flex_amount) {
    auto x_4245 = x_4227->var_flex_amount;
    if (EqualValue(x_4245, x_4244)) {
      MakeUnit();
    } else {
      var_modified_x_4246(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_flex_amount = x_4244;
  WriteMetric();
  auto x_4249 = eval_expr_x_4248(x_4227);
  if (x_4227->has_var_flex_unit) {
    auto x_4250 = x_4227->var_flex_unit;
    if (EqualValue(x_4250, x_4249)) {
      MakeUnit();
    } else {
      var_modified_x_4251(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_flex_unit = x_4249;
  WriteMetric();
  auto x_4254 = eval_expr_x_4253(x_4227);
  if (x_4227->has_var_x) {
    auto x_4255 = x_4227->var_x;
    if (EqualValue(x_4255, x_4254)) {
      MakeUnit();
    } else {
      var_modified_x_4256(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_x = x_4254;
  WriteMetric();
  auto x_4259 = eval_expr_x_4258(x_4227);
  if (x_4227->has_var_width_internal) {
    auto x_4260 = x_4227->var_width_internal;
    if (EqualValue(x_4260, x_4259)) {
      MakeUnit();
    } else {
      var_modified_x_4261(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_width_internal = x_4259;
  WriteMetric();
  auto x_4264 = eval_expr_x_4263(x_4227);
  if (x_4227->has_var_width_external) {
    auto x_4265 = x_4227->var_width_external;
    if (EqualValue(x_4265, x_4264)) {
      MakeUnit();
    } else {
      var_modified_x_4266(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_width_external = x_4264;
  WriteMetric();
  auto x_4269 = eval_expr_x_4268(x_4227);
  if (x_4227->has_var_y) {
    auto x_4270 = x_4227->var_y;
    if (EqualValue(x_4270, x_4269)) {
      MakeUnit();
    } else {
      var_modified_x_4271(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_y = x_4269;
  WriteMetric();
  auto x_4274 = eval_expr_x_4273(x_4227);
  if (x_4227->has_var_height_internal) {
    auto x_4275 = x_4227->var_height_internal;
    if (EqualValue(x_4275, x_4274)) {
      MakeUnit();
    } else {
      var_modified_x_4276(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_height_internal = x_4274;
  WriteMetric();
  auto x_4279 = eval_expr_x_4278(x_4227);
  if (x_4227->has_var_height_external) {
    auto x_4280 = x_4227->var_height_external;
    if (EqualValue(x_4280, x_4279)) {
      MakeUnit();
    } else {
      var_modified_x_4281(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_height_external = x_4279;
  WriteMetric();
  auto x_4284 = eval_expr_x_4283(x_4227);
  if (x_4227->has_var_line_height) {
    auto x_4285 = x_4227->var_line_height;
    if (EqualValue(x_4285, x_4284)) {
      MakeUnit();
    } else {
      var_modified_x_4286(x_4227);
    }
  } else {
    MakeUnit();
  }
  x_4227->var_line_height = x_4284;
  return MakeUnit();
}
Unit eval_stmts_x_3924(const auto &x_4288) {
  WriteMetric();
  auto x_4290 = eval_expr_x_4289(x_4288);
  if (x_4288->has_var_width_expr) {
    auto x_4291 = x_4288->var_width_expr;
    if (EqualValue(x_4291, x_4290)) {
      MakeUnit();
    } else {
      var_modified_x_4292(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_width_expr = x_4290;
  WriteMetric();
  auto x_4295 = eval_expr_x_4294(x_4288);
  if (x_4288->has_var_is_default_case) {
    auto x_4296 = x_4288->var_is_default_case;
    if (EqualValue(x_4296, x_4295)) {
      MakeUnit();
    } else {
      var_modified_x_4297(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_is_default_case = x_4295;
  WriteMetric();
  auto x_4300 = eval_expr_x_4299(x_4288);
  if (x_4288->has_var_intrinsic_width_is_width) {
    auto x_4301 = x_4288->var_intrinsic_width_is_width;
    if (EqualValue(x_4301, x_4300)) {
      MakeUnit();
    } else {
      var_modified_x_4302(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_width_is_width = x_4300;
  WriteMetric();
  auto x_4305 = eval_expr_x_4304(x_4288);
  if (x_4288->has_var_children_intrinsic_width) {
    auto x_4306 = x_4288->var_children_intrinsic_width;
    if (EqualValue(x_4306, x_4305)) {
      MakeUnit();
    } else {
      var_modified_x_4307(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_children_intrinsic_width = x_4305;
  WriteMetric();
  auto x_4310 = eval_expr_x_4309(x_4288);
  if (x_4288->has_var_intrinsic_width_internal) {
    auto x_4311 = x_4288->var_intrinsic_width_internal;
    if (EqualValue(x_4311, x_4310)) {
      MakeUnit();
    } else {
      var_modified_x_4312(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_width_internal = x_4310;
  WriteMetric();
  auto x_4315 = eval_expr_x_4314(x_4288);
  if (x_4288->has_var_intrinsic_width_external) {
    auto x_4316 = x_4288->var_intrinsic_width_external;
    if (EqualValue(x_4316, x_4315)) {
      MakeUnit();
    } else {
      var_modified_x_4317(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_width_external = x_4315;
  WriteMetric();
  auto x_4320 = eval_expr_x_4319(x_4288);
  if (x_4288->has_var_intrinsic_current_line_width) {
    auto x_4321 = x_4288->var_intrinsic_current_line_width;
    if (EqualValue(x_4321, x_4320)) {
      MakeUnit();
    } else {
      var_modified_x_4322(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_current_line_width = x_4320;
  WriteMetric();
  auto x_4325 = eval_expr_x_4324(x_4288);
  if (x_4288->has_var_intrinsic_width_max) {
    auto x_4326 = x_4288->var_intrinsic_width_max;
    if (EqualValue(x_4326, x_4325)) {
      MakeUnit();
    } else {
      var_modified_x_4327(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_width_max = x_4325;
  WriteMetric();
  auto x_4330 = eval_expr_x_4329(x_4288);
  if (x_4288->has_var_intrinsic_width_sum) {
    auto x_4331 = x_4288->var_intrinsic_width_sum;
    if (EqualValue(x_4331, x_4330)) {
      MakeUnit();
    } else {
      var_modified_x_4332(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_width_sum = x_4330;
  WriteMetric();
  auto x_4335 = eval_expr_x_4334(x_4288);
  if (x_4288->has_var_children_intrinsic_height) {
    auto x_4336 = x_4288->var_children_intrinsic_height;
    if (EqualValue(x_4336, x_4335)) {
      MakeUnit();
    } else {
      var_modified_x_4337(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_children_intrinsic_height = x_4335;
  WriteMetric();
  auto x_4340 = eval_expr_x_4339(x_4288);
  if (x_4288->has_var_height_expr) {
    auto x_4341 = x_4288->var_height_expr;
    if (EqualValue(x_4341, x_4340)) {
      MakeUnit();
    } else {
      var_modified_x_4342(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_height_expr = x_4340;
  WriteMetric();
  auto x_4345 = eval_expr_x_4344(x_4288);
  if (x_4288->has_var_intrinsic_height_is_height) {
    auto x_4346 = x_4288->var_intrinsic_height_is_height;
    if (EqualValue(x_4346, x_4345)) {
      MakeUnit();
    } else {
      var_modified_x_4347(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_height_is_height = x_4345;
  WriteMetric();
  auto x_4350 = eval_expr_x_4349(x_4288);
  if (x_4288->has_var_intrinsic_height_internal) {
    auto x_4351 = x_4288->var_intrinsic_height_internal;
    if (EqualValue(x_4351, x_4350)) {
      MakeUnit();
    } else {
      var_modified_x_4352(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_height_internal = x_4350;
  WriteMetric();
  auto x_4355 = eval_expr_x_4354(x_4288);
  if (x_4288->has_var_intrinsic_height_external) {
    auto x_4356 = x_4288->var_intrinsic_height_external;
    if (EqualValue(x_4356, x_4355)) {
      MakeUnit();
    } else {
      var_modified_x_4357(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_height_external = x_4355;
  WriteMetric();
  auto x_4360 = eval_expr_x_4359(x_4288);
  if (x_4288->has_var_intrinsic_height_sum) {
    auto x_4361 = x_4288->var_intrinsic_height_sum;
    if (EqualValue(x_4361, x_4360)) {
      MakeUnit();
    } else {
      var_modified_x_4362(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_height_sum = x_4360;
  WriteMetric();
  auto x_4365 = eval_expr_x_4364(x_4288);
  if (x_4288->has_var_intrinsic_current_line_height) {
    auto x_4366 = x_4288->var_intrinsic_current_line_height;
    if (EqualValue(x_4366, x_4365)) {
      MakeUnit();
    } else {
      var_modified_x_4367(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_intrinsic_current_line_height = x_4365;
  WriteMetric();
  auto x_4370 = eval_expr_x_4369(x_4288);
  if (x_4288->has_var_finished_intrinsic_height_sum) {
    auto x_4371 = x_4288->var_finished_intrinsic_height_sum;
    if (EqualValue(x_4371, x_4370)) {
      MakeUnit();
    } else {
      var_modified_x_4372(x_4288);
    }
  } else {
    MakeUnit();
  }
  x_4288->var_finished_intrinsic_height_sum = x_4370;
  return MakeUnit();
}
Unit eval_stmts_x_3922(const auto &x_4374) {
  WriteMetric();
  auto x_4376 = eval_expr_x_4375(x_4374);
  if (x_4374->has_var_display) {
    auto x_4377 = x_4374->var_display;
    if (EqualValue(x_4377, x_4376)) {
      MakeUnit();
    } else {
      var_modified_x_4378(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_display = x_4376;
  WriteMetric();
  auto x_4381 = eval_expr_x_4380(x_4374);
  if (x_4374->has_var_position) {
    auto x_4382 = x_4374->var_position;
    if (EqualValue(x_4382, x_4381)) {
      MakeUnit();
    } else {
      var_modified_x_4383(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_position = x_4381;
  WriteMetric();
  auto x_4386 = eval_expr_x_4385(x_4374);
  if (x_4374->has_var_flex_grow) {
    auto x_4387 = x_4374->var_flex_grow;
    if (EqualValue(x_4387, x_4386)) {
      MakeUnit();
    } else {
      var_modified_x_4388(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_flex_grow = x_4386;
  WriteMetric();
  auto x_4391 = eval_expr_x_4390(x_4374);
  if (x_4374->has_var_flex_shrink) {
    auto x_4392 = x_4374->var_flex_shrink;
    if (EqualValue(x_4392, x_4391)) {
      MakeUnit();
    } else {
      var_modified_x_4393(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_flex_shrink = x_4391;
  WriteMetric();
  auto x_4396 = eval_expr_x_4395(x_4374);
  if (x_4374->has_var_flex_grow_sum) {
    auto x_4397 = x_4374->var_flex_grow_sum;
    if (EqualValue(x_4397, x_4396)) {
      MakeUnit();
    } else {
      var_modified_x_4398(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_flex_grow_sum = x_4396;
  WriteMetric();
  auto x_4401 = eval_expr_x_4400(x_4374);
  if (x_4374->has_var_flex_shrink_sum) {
    auto x_4402 = x_4374->var_flex_shrink_sum;
    if (EqualValue(x_4402, x_4401)) {
      MakeUnit();
    } else {
      var_modified_x_4403(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_flex_shrink_sum = x_4401;
  WriteMetric();
  auto x_4406 = eval_expr_x_4405(x_4374);
  if (x_4374->has_var_flex_direction) {
    auto x_4407 = x_4374->var_flex_direction;
    if (EqualValue(x_4407, x_4406)) {
      MakeUnit();
    } else {
      var_modified_x_4408(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_flex_direction = x_4406;
  WriteMetric();
  auto x_4411 = eval_expr_x_4410(x_4374);
  if (x_4374->has_var_is_flex_row) {
    auto x_4412 = x_4374->var_is_flex_row;
    if (EqualValue(x_4412, x_4411)) {
      MakeUnit();
    } else {
      var_modified_x_4413(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_is_flex_row = x_4411;
  WriteMetric();
  auto x_4416 = eval_expr_x_4415(x_4374);
  if (x_4374->has_var_is_flex_column) {
    auto x_4417 = x_4374->var_is_flex_column;
    if (EqualValue(x_4417, x_4416)) {
      MakeUnit();
    } else {
      var_modified_x_4418(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_is_flex_column = x_4416;
  WriteMetric();
  auto x_4421 = eval_expr_x_4420(x_4374);
  if (x_4374->has_var_width_attr_expr) {
    auto x_4422 = x_4374->var_width_attr_expr;
    if (EqualValue(x_4422, x_4421)) {
      MakeUnit();
    } else {
      var_modified_x_4423(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_width_attr_expr = x_4421;
  WriteMetric();
  auto x_4426 = eval_expr_x_4425(x_4374);
  if (x_4374->has_var_has_width_attr) {
    auto x_4427 = x_4374->var_has_width_attr;
    if (EqualValue(x_4427, x_4426)) {
      MakeUnit();
    } else {
      var_modified_x_4428(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_has_width_attr = x_4426;
  WriteMetric();
  auto x_4431 = eval_expr_x_4430(x_4374);
  if (x_4374->has_var_height_attr_expr) {
    auto x_4432 = x_4374->var_height_attr_expr;
    if (EqualValue(x_4432, x_4431)) {
      MakeUnit();
    } else {
      var_modified_x_4433(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_height_attr_expr = x_4431;
  WriteMetric();
  auto x_4436 = eval_expr_x_4435(x_4374);
  if (x_4374->has_var_has_height_attr) {
    auto x_4437 = x_4374->var_has_height_attr;
    if (EqualValue(x_4437, x_4436)) {
      MakeUnit();
    } else {
      var_modified_x_4438(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_has_height_attr = x_4436;
  WriteMetric();
  auto x_4441 = eval_expr_x_4440(x_4374);
  if (x_4374->has_var_is_svg_block) {
    auto x_4442 = x_4374->var_is_svg_block;
    if (EqualValue(x_4442, x_4441)) {
      MakeUnit();
    } else {
      var_modified_x_4443(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_is_svg_block = x_4441;
  WriteMetric();
  auto x_4446 = eval_expr_x_4445(x_4374);
  if (x_4374->has_var_inside_svg) {
    auto x_4447 = x_4374->var_inside_svg;
    if (EqualValue(x_4447, x_4446)) {
      MakeUnit();
    } else {
      var_modified_x_4448(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_inside_svg = x_4446;
  WriteMetric();
  auto x_4451 = eval_expr_x_4450(x_4374);
  if (x_4374->has_var_disabled) {
    auto x_4452 = x_4374->var_disabled;
    if (EqualValue(x_4452, x_4451)) {
      MakeUnit();
    } else {
      var_modified_x_4453(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_disabled = x_4451;
  WriteMetric();
  auto x_4456 = eval_expr_x_4455(x_4374);
  if (x_4374->has_var_visible) {
    auto x_4457 = x_4374->var_visible;
    if (EqualValue(x_4457, x_4456)) {
      MakeUnit();
    } else {
      var_modified_x_4458(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_visible = x_4456;
  WriteMetric();
  auto x_4461 = eval_expr_x_4460(x_4374);
  if (x_4374->has_var_line_break) {
    auto x_4462 = x_4374->var_line_break;
    if (EqualValue(x_4462, x_4461)) {
      MakeUnit();
    } else {
      var_modified_x_4463(x_4374);
    }
  } else {
    MakeUnit();
  }
  x_4374->var_line_break = x_4461;
  return MakeUnit();
}
Unit eval_stmts_x_3918(const auto &x_4465) {
  WriteMetric();
  auto x_4467 = eval_expr_x_4466(x_4465);
  if (x_4465->has_var_box_width) {
    auto x_4468 = x_4465->var_box_width;
    if (EqualValue(x_4468, x_4467)) {
      MakeUnit();
    } else {
      var_modified_x_4469(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_box_width = x_4467;
  WriteMetric();
  auto x_4472 = eval_expr_x_4471(x_4465);
  if (x_4465->has_var_box_height) {
    auto x_4473 = x_4465->var_box_height;
    if (EqualValue(x_4473, x_4472)) {
      MakeUnit();
    } else {
      var_modified_x_4474(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_box_height = x_4472;
  WriteMetric();
  auto x_4477 = eval_expr_x_4476(x_4465);
  if (x_4465->has_var_left_over) {
    auto x_4478 = x_4465->var_left_over;
    if (EqualValue(x_4478, x_4477)) {
      MakeUnit();
    } else {
      var_modified_x_4479(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_left_over = x_4477;
  WriteMetric();
  auto x_4482 = eval_expr_x_4481(x_4465);
  if (x_4465->has_var_flex_amount) {
    auto x_4483 = x_4465->var_flex_amount;
    if (EqualValue(x_4483, x_4482)) {
      MakeUnit();
    } else {
      var_modified_x_4484(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_flex_amount = x_4482;
  WriteMetric();
  auto x_4487 = eval_expr_x_4486(x_4465);
  if (x_4465->has_var_flex_unit) {
    auto x_4488 = x_4465->var_flex_unit;
    if (EqualValue(x_4488, x_4487)) {
      MakeUnit();
    } else {
      var_modified_x_4489(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_flex_unit = x_4487;
  WriteMetric();
  auto x_4492 = eval_expr_x_4491(x_4465);
  if (x_4465->has_var_x) {
    auto x_4493 = x_4465->var_x;
    if (EqualValue(x_4493, x_4492)) {
      MakeUnit();
    } else {
      var_modified_x_4494(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_x = x_4492;
  WriteMetric();
  auto x_4497 = eval_expr_x_4496(x_4465);
  if (x_4465->has_var_width_internal) {
    auto x_4498 = x_4465->var_width_internal;
    if (EqualValue(x_4498, x_4497)) {
      MakeUnit();
    } else {
      var_modified_x_4499(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_width_internal = x_4497;
  WriteMetric();
  auto x_4502 = eval_expr_x_4501(x_4465);
  if (x_4465->has_var_width_external) {
    auto x_4503 = x_4465->var_width_external;
    if (EqualValue(x_4503, x_4502)) {
      MakeUnit();
    } else {
      var_modified_x_4504(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_width_external = x_4502;
  WriteMetric();
  auto x_4507 = eval_expr_x_4506(x_4465);
  if (x_4465->has_var_y) {
    auto x_4508 = x_4465->var_y;
    if (EqualValue(x_4508, x_4507)) {
      MakeUnit();
    } else {
      var_modified_x_4509(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_y = x_4507;
  WriteMetric();
  auto x_4512 = eval_expr_x_4511(x_4465);
  if (x_4465->has_var_height_internal) {
    auto x_4513 = x_4465->var_height_internal;
    if (EqualValue(x_4513, x_4512)) {
      MakeUnit();
    } else {
      var_modified_x_4514(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_height_internal = x_4512;
  WriteMetric();
  auto x_4517 = eval_expr_x_4516(x_4465);
  if (x_4465->has_var_height_external) {
    auto x_4518 = x_4465->var_height_external;
    if (EqualValue(x_4518, x_4517)) {
      MakeUnit();
    } else {
      var_modified_x_4519(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_height_external = x_4517;
  WriteMetric();
  auto x_4522 = eval_expr_x_4521(x_4465);
  if (x_4465->has_var_line_height) {
    auto x_4523 = x_4465->var_line_height;
    if (EqualValue(x_4523, x_4522)) {
      MakeUnit();
    } else {
      var_modified_x_4524(x_4465);
    }
  } else {
    MakeUnit();
  }
  x_4465->var_line_height = x_4522;
  return MakeUnit();
}
Unit x_4526(const auto &x_4527) {
  MetaWriteMetric(x_3579);
  if (HashtblFindExn(x_4527->meta->RecursiveProcDirtied, std::string("pass_1"))) {
    return MakeUnit();
  } else {
    HashtblSet(x_4527->meta->RecursiveProcDirtied, std::string("pass_1"), true);
    return OptionMatch(
        x_4527->parent, [&](const auto &x_4529) { return MakeUnit(); },
        [&](const auto &x_4528) { return x_4526(x_4528); });
  }
}
Unit set_recursive_proc_dirtied_x_3729(const auto &x_4527) { return x_4526(x_4527); }
Unit x_4530(const auto &x_4531) {
  MetaWriteMetric(x_3579);
  if (HashtblFindExn(x_4531->meta->RecursiveProcDirtied, std::string("pass_0"))) {
    return MakeUnit();
  } else {
    HashtblSet(x_4531->meta->RecursiveProcDirtied, std::string("pass_0"), true);
    return OptionMatch(
        x_4531->parent, [&](const auto &x_4533) { return MakeUnit(); },
        [&](const auto &x_4532) { return x_4530(x_4532); });
  }
}
Unit set_recursive_proc_dirtied_x_3655(const auto &x_4531) { return x_4530(x_4531); }
Unit x_3623(const auto &x_3624, const auto &x_3625, const auto &x_3626) {
  auto x_3627 = ListHeadExn(x_3624);
  auto x_3628 = ListTailExn(x_3624);
  if (ListIsEmpty(x_3628)) {
    auto x_3629 = ListSplitN(x_3625->children, x_3627);
    OutputChangeMetric(IntAdd(layout_size_x_3574(ListNthExn(x_3625->children, x_3627)), layout_size_x_3574(x_3626)));
    x_3625->children = ListAppend(Zro(x_3629), Cons(x_3626, ListTailExn(Fst(x_3629))));
    return MakeUnit();
  } else {
    return x_3623(x_3628, ListNthExn(x_3625->children, x_3627), x_3626);
  }
}
Unit replace_layout_node_x_3622(const auto &x_3624, const auto &x_3625, const auto &x_3626) {
  return x_3623(x_3624, x_3625, x_3626);
}
Unit x_3630(const auto &x_3631, const auto &x_3632, const auto &x_3633) {
  auto x_3634 = ListHeadExn(x_3631);
  auto x_3635 = ListTailExn(x_3631);
  if (ListIsEmpty(x_3635)) {
    OutputChangeMetric(layout_size_x_3574(x_3633));
    auto x_3636 = ListSplitN(x_3632->children, x_3634);
    x_3632->children = ListAppend(Zro(x_3636), Cons(x_3633, Fst(x_3636)));
    return MakeUnit();
  } else {
    return x_3630(x_3635, ListNthExn(x_3632->children, x_3634), x_3633);
  }
}
Unit add_layout_node_x_3620(const auto &x_3631, const auto &x_3632, const auto &x_3633) {
  return x_3630(x_3631, x_3632, x_3633);
}
Unit x_3637(const auto &x_3638, const auto &x_3639, const auto &x_3640) {
  auto x_3641 = ListHeadExn(x_3638);
  auto x_3642 = ListTailExn(x_3638);
  if (ListIsEmpty(x_3642)) {
    OutputChangeMetric(layout_size_x_3574(ListNthExn(x_3639->children, x_3641)));
    auto x_3643 = ListSplitN(x_3639->children, x_3641);
    x_3639->children = ListAppend(Zro(x_3643), ListTailExn(Fst(x_3643)));
    return MakeUnit();
  } else {
    return x_3637(x_3642, ListNthExn(x_3639->children, x_3641), x_3640);
  }
}
Unit remove_layout_node_x_3618(const auto &x_3638, const auto &x_3639, const auto &x_3640) {
  return x_3637(x_3638, x_3639, x_3640);
}
Unit x_3644(const auto &x_3645, const auto &x_3646, const auto &x_3647) {
  return ListMatch(
      x_3645,
      [&](const auto &x_3650) {
        auto x_3651 = Zro(x_3647);
        auto x_3652 = Zro(x_3651);
        auto x_3653 = Fst(x_3651);
        auto x_3654 = Fst(x_3647);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_7148 = x_3652;
        if (x_7148 == "attributes") {
          std::string x_7149 = x_3653;
          if (x_7149 == "width") {
            WriteMetric();
            HashtblAddExn(x_3646->attr, std::string("width"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7149 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_3646->attr, std::string("image_height"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7149 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_3646->attr, std::string("image_width"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7149 == "height") {
            WriteMetric();
            HashtblAddExn(x_3646->attr, std::string("height"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7149 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_3646->attr, std::string("viewBox"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7148 == "properties") {
          std::string x_7150 = x_3653;
          if (x_7150 == "width") {
            WriteMetric();
            HashtblAddExn(x_3646->prop, std::string("width"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7150 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_3646->prop, std::string("flex-grow"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7150 == "height") {
            WriteMetric();
            HashtblAddExn(x_3646->prop, std::string("height"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7150 == "display") {
            WriteMetric();
            HashtblAddExn(x_3646->prop, std::string("display"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7150 == "position") {
            WriteMetric();
            HashtblAddExn(x_3646->prop, std::string("position"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7150 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_3646->prop, std::string("flex-shrink"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7150 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_3646->prop, std::string("flex-direction"), x_3654);
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3646->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3646->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3646);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3648, const auto &x_3649) {
        return x_3644(x_3649, ListNthExn(x_3646->children, x_3648), x_3647);
      });
}
Unit insert_value_x_3616(const auto &x_3645, const auto &x_3646, const auto &x_3647) {
  return x_3644(x_3645, x_3646, x_3647);
}
Unit x_3656(const auto &x_3657, const auto &x_3658, const auto &x_3659) {
  return ListMatch(
      x_3657,
      [&](const auto &x_3662) {
        auto x_3663 = Zro(x_3659);
        auto x_3664 = Fst(x_3659);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_7151 = x_3663;
        if (x_7151 == "attributes") {
          std::string x_7152 = x_3664;
          if (x_7152 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3658->attr, std::string("width"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7152 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3658->attr, std::string("image_height"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7152 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3658->attr, std::string("image_width"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7152 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3658->attr, std::string("height"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7152 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3658->attr, std::string("viewBox"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7151 == "properties") {
          std::string x_7153 = x_3664;
          if (x_7153 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3658->prop, std::string("width"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7153 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3658->prop, std::string("flex-grow"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7153 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3658->prop, std::string("height"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7153 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3658->prop, std::string("display"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7153 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3658->prop, std::string("position"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7153 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3658->prop, std::string("flex-shrink"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7153 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3658->prop, std::string("flex-direction"));
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3658->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3658->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3658);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3660, const auto &x_3661) {
        return x_3656(x_3661, ListNthExn(x_3658->children, x_3660), x_3659);
      });
}
Unit delete_value_x_3614(const auto &x_3657, const auto &x_3658, const auto &x_3659) {
  return x_3656(x_3657, x_3658, x_3659);
}
Unit x_3665(const auto &x_3666, const auto &x_3667, const auto &x_3668) {
  return ListMatch(
      x_3666,
      [&](const auto &x_3671) {
        auto x_3672 = Zro(x_3668);
        auto x_3673 = Zro(x_3672);
        auto x_3674 = Fst(x_3672);
        auto x_3675 = Fst(x_3668);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_7154 = x_3673;
        if (x_7154 == "attributes") {
          std::string x_7155 = x_3674;
          if (x_7155 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3667->attr, std::string("width"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->attr, std::string("width"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7155 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3667->attr, std::string("image_height"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->attr, std::string("image_height"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7155 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3667->attr, std::string("image_width"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->attr, std::string("image_width"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7155 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3667->attr, std::string("height"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->attr, std::string("height"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7155 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3667->attr, std::string("viewBox"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->attr, std::string("viewBox"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7154 == "properties") {
          std::string x_7156 = x_3674;
          if (x_7156 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3667->prop, std::string("width"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->prop, std::string("width"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7156 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3667->prop, std::string("flex-grow"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->prop, std::string("flex-grow"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7156 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3667->prop, std::string("height"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->prop, std::string("height"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7156 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3667->prop, std::string("display"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->prop, std::string("display"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7156 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3667->prop, std::string("position"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->prop, std::string("position"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7156 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3667->prop, std::string("flex-shrink"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->prop, std::string("flex-shrink"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else if (x_7156 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3667->prop, std::string("flex-direction"));
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            WriteMetric();
            HashtblAddExn(x_3667->prop, std::string("flex-direction"), x_3675);
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            if (IsSome(HashtblFind(x_3667->meta->ProcInited, std::string("pass_0")))) {
              HashtblSet(x_3667->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3655(x_3667);
            } else {
              MetaWriteMetric(x_3579);
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3669, const auto &x_3670) {
        return x_3665(x_3670, ListNthExn(x_3667->children, x_3669), x_3668);
      });
}
Unit replace_value_x_3612(const auto &x_3666, const auto &x_3667, const auto &x_3668) {
  return x_3665(x_3666, x_3667, x_3668);
}
Unit x_3676(const auto &x_3677, const auto &x_3678, const auto &x_3679) {
  auto x_3680 = ListHeadExn(x_3677);
  auto x_3681 = ListTailExn(x_3677);
  if (ListIsEmpty(x_3681)) {
    InputChangeMetric(IntAdd(node_size_x_3575(ListNthExn(x_3678->children, x_3680)), node_size_x_3575(x_3679)));
    auto x_3682 = ListSplitN(x_3678->children, x_3680);
    auto x_3683 = Zro(x_3682);
    auto x_3684 = Fst(x_3682);
    auto x_3685 = ListHeadExn(x_3684);
    auto x_3686 = ListTailExn(x_3684);
    OptionMatch(
        x_3685->prev, [&](const auto &x_3688) { return MakeUnit(); },
        [&](const auto &x_3687) {
          x_3687->next = ToPath(x_3685->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3690) { return MakeUnit(); },
        [&](const auto &x_3689) {
          x_3689->prev = ToPath(x_3685->prev);
          return MakeUnit();
        });
    x_3678->children = ListAppend(x_3683, x_3686);
    if (ListIsEmpty(x_3683)) {
      x_3678->first = ToPath(ListHead(x_3686));
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3686)) {
      x_3678->last = ToPath(ListLast(x_3683));
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3685->next, [&](const auto &x_3692) { return MakeUnit(); },
        [&](const auto &x_3691) {
          if (IsSome(HashtblFind(x_3691->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3691->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3691);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3694) { return MakeUnit(); },
        [&](const auto &x_3693) {
          if (IsSome(HashtblFind(x_3693->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3693->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3693);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3696) { return MakeUnit(); },
        [&](const auto &x_3695) {
          if (IsSome(HashtblFind(x_3695->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3695->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3695);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3698) { return MakeUnit(); },
        [&](const auto &x_3697) {
          if (IsSome(HashtblFind(x_3697->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3697->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3697);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3686)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3685->next, [&](const auto &x_3700) { return MakeUnit(); },
        [&](const auto &x_3699) {
          if (IsSome(HashtblFind(x_3699->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3699->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3699);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3702) { return MakeUnit(); },
        [&](const auto &x_3701) {
          if (IsSome(HashtblFind(x_3701->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3701->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3701);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3704) { return MakeUnit(); },
        [&](const auto &x_3703) {
          if (IsSome(HashtblFind(x_3703->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3703->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3703);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3706) { return MakeUnit(); },
        [&](const auto &x_3705) {
          if (IsSome(HashtblFind(x_3705->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3705->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3705);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3708) { return MakeUnit(); },
        [&](const auto &x_3707) {
          if (IsSome(HashtblFind(x_3707->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3707->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3707);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3710) { return MakeUnit(); },
        [&](const auto &x_3709) {
          if (IsSome(HashtblFind(x_3709->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3709->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3709);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3712) { return MakeUnit(); },
        [&](const auto &x_3711) {
          if (IsSome(HashtblFind(x_3711->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3711->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3711);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3686)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3686)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3685->next, [&](const auto &x_3714) { return MakeUnit(); },
        [&](const auto &x_3713) {
          if (IsSome(HashtblFind(x_3713->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3713->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3713);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3716) { return MakeUnit(); },
        [&](const auto &x_3715) {
          if (IsSome(HashtblFind(x_3715->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3715->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3715);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3718) { return MakeUnit(); },
        [&](const auto &x_3717) {
          if (IsSome(HashtblFind(x_3717->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3717->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3717);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3720) { return MakeUnit(); },
        [&](const auto &x_3719) {
          if (IsSome(HashtblFind(x_3719->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3719->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3719);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3722) { return MakeUnit(); },
        [&](const auto &x_3721) {
          if (IsSome(HashtblFind(x_3721->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3721->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3721);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3724) { return MakeUnit(); },
        [&](const auto &x_3723) {
          if (IsSome(HashtblFind(x_3723->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3723->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3723);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3726) { return MakeUnit(); },
        [&](const auto &x_3725) {
          if (IsSome(HashtblFind(x_3725->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3725->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3725);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3728) { return MakeUnit(); },
        [&](const auto &x_3727) {
          if (IsSome(HashtblFind(x_3727->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3727->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3727);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3686)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3678->children)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3686)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3685->next, [&](const auto &x_3731) { return MakeUnit(); },
        [&](const auto &x_3730) {
          if (IsSome(HashtblFind(x_3730->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3730->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3730);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3733) { return MakeUnit(); },
        [&](const auto &x_3732) {
          if (IsSome(HashtblFind(x_3732->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3732->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3732);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3735) { return MakeUnit(); },
        [&](const auto &x_3734) {
          if (IsSome(HashtblFind(x_3734->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3734->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3734);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3737) { return MakeUnit(); },
        [&](const auto &x_3736) {
          if (IsSome(HashtblFind(x_3736->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3736->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3736);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3739) { return MakeUnit(); },
        [&](const auto &x_3738) {
          if (IsSome(HashtblFind(x_3738->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3738->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3738);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3741) { return MakeUnit(); },
        [&](const auto &x_3740) {
          if (IsSome(HashtblFind(x_3740->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3740->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3740);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3743) { return MakeUnit(); },
        [&](const auto &x_3742) {
          if (IsSome(HashtblFind(x_3742->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3742->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3742);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3745) { return MakeUnit(); },
        [&](const auto &x_3744) {
          if (IsSome(HashtblFind(x_3744->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3744->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3744);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3747) { return MakeUnit(); },
        [&](const auto &x_3746) {
          if (IsSome(HashtblFind(x_3746->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3746->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3746);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3749) { return MakeUnit(); },
        [&](const auto &x_3748) {
          if (IsSome(HashtblFind(x_3748->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3748->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3748);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3751) { return MakeUnit(); },
        [&](const auto &x_3750) {
          if (IsSome(HashtblFind(x_3750->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3750->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3750);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3685->next, [&](const auto &x_3753) { return MakeUnit(); },
        [&](const auto &x_3752) {
          if (IsSome(HashtblFind(x_3752->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3752->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3752);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    MakeUnit();
    auto x_3754 = ListSplitN(x_3678->children, x_3680);
    auto x_3755 = Zro(x_3754);
    auto x_3756 = Fst(x_3754);
    x_3678->children = ListAppend(x_3755, Cons(x_3679, x_3756));
    if (ListIsEmpty(x_3755)) {
      x_3678->first = x_3679.get();
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3756)) {
      x_3678->last = x_3679.get();
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_3755),
        [&](const auto &x_3758) {
          x_3679->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3757) {
          x_3679->prev = x_3757.get();
          x_3757->next = x_3679.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3756),
        [&](const auto &x_3760) {
          x_3679->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3759) {
          x_3679->next = x_3759.get();
          x_3759->prev = x_3679.get();
          return MakeUnit();
        });
    x_3679->parent = x_3678.get();
    HashtblAddExn(x_3679->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    set_recursive_proc_dirtied_x_3655(x_3679);
    OptionMatch(
        x_3679->next, [&](const auto &x_3762) { return MakeUnit(); },
        [&](const auto &x_3761) {
          if (IsSome(HashtblFind(x_3761->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3761->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3761);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3764) { return MakeUnit(); },
        [&](const auto &x_3763) {
          if (IsSome(HashtblFind(x_3763->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3763->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3763);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3766) { return MakeUnit(); },
        [&](const auto &x_3765) {
          if (IsSome(HashtblFind(x_3765->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3765->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3765);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3768) { return MakeUnit(); },
        [&](const auto &x_3767) {
          if (IsSome(HashtblFind(x_3767->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3767->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3767);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3756)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3679->next, [&](const auto &x_3770) { return MakeUnit(); },
        [&](const auto &x_3769) {
          if (IsSome(HashtblFind(x_3769->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3769->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3769);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3772) { return MakeUnit(); },
        [&](const auto &x_3771) {
          if (IsSome(HashtblFind(x_3771->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3771->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3771);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3774) { return MakeUnit(); },
        [&](const auto &x_3773) {
          if (IsSome(HashtblFind(x_3773->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3773->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3773);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3776) { return MakeUnit(); },
        [&](const auto &x_3775) {
          if (IsSome(HashtblFind(x_3775->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3775->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3775);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3778) { return MakeUnit(); },
        [&](const auto &x_3777) {
          if (IsSome(HashtblFind(x_3777->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3777->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3777);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3780) { return MakeUnit(); },
        [&](const auto &x_3779) {
          if (IsSome(HashtblFind(x_3779->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3779->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3779);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3782) { return MakeUnit(); },
        [&](const auto &x_3781) {
          if (IsSome(HashtblFind(x_3781->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3781->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3781);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3756)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3756)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3679->next, [&](const auto &x_3784) { return MakeUnit(); },
        [&](const auto &x_3783) {
          if (IsSome(HashtblFind(x_3783->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3783->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3783);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3786) { return MakeUnit(); },
        [&](const auto &x_3785) {
          if (IsSome(HashtblFind(x_3785->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3785->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3785);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3788) { return MakeUnit(); },
        [&](const auto &x_3787) {
          if (IsSome(HashtblFind(x_3787->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3787->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3787);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3790) { return MakeUnit(); },
        [&](const auto &x_3789) {
          if (IsSome(HashtblFind(x_3789->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3789->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3789);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3792) { return MakeUnit(); },
        [&](const auto &x_3791) {
          if (IsSome(HashtblFind(x_3791->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3791->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3791);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3794) { return MakeUnit(); },
        [&](const auto &x_3793) {
          if (IsSome(HashtblFind(x_3793->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3793->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3793);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3796) { return MakeUnit(); },
        [&](const auto &x_3795) {
          if (IsSome(HashtblFind(x_3795->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3795->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3795);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3798) { return MakeUnit(); },
        [&](const auto &x_3797) {
          if (IsSome(HashtblFind(x_3797->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3797->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3797);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    HashtblAddExn(x_3679->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    set_recursive_proc_dirtied_x_3729(x_3679);
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3756)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3678->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3756)) {
      if (IsSome(HashtblFind(x_3678->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3678->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3678);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3679->next, [&](const auto &x_3800) { return MakeUnit(); },
        [&](const auto &x_3799) {
          if (IsSome(HashtblFind(x_3799->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3799->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3799);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3802) { return MakeUnit(); },
        [&](const auto &x_3801) {
          if (IsSome(HashtblFind(x_3801->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3801->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3801);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3804) { return MakeUnit(); },
        [&](const auto &x_3803) {
          if (IsSome(HashtblFind(x_3803->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3803->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3803);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3806) { return MakeUnit(); },
        [&](const auto &x_3805) {
          if (IsSome(HashtblFind(x_3805->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3805->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3805);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3808) { return MakeUnit(); },
        [&](const auto &x_3807) {
          if (IsSome(HashtblFind(x_3807->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3807->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3807);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3810) { return MakeUnit(); },
        [&](const auto &x_3809) {
          if (IsSome(HashtblFind(x_3809->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3809->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3809);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3812) { return MakeUnit(); },
        [&](const auto &x_3811) {
          if (IsSome(HashtblFind(x_3811->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3811->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3811);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3814) { return MakeUnit(); },
        [&](const auto &x_3813) {
          if (IsSome(HashtblFind(x_3813->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3813->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3813);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3816) { return MakeUnit(); },
        [&](const auto &x_3815) {
          if (IsSome(HashtblFind(x_3815->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3815->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3815);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3818) { return MakeUnit(); },
        [&](const auto &x_3817) {
          if (IsSome(HashtblFind(x_3817->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3817->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3817);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3820) { return MakeUnit(); },
        [&](const auto &x_3819) {
          if (IsSome(HashtblFind(x_3819->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3819->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3819);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3679->next, [&](const auto &x_3822) { return MakeUnit(); },
        [&](const auto &x_3821) {
          if (IsSome(HashtblFind(x_3821->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3821->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3821);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3676(x_3681, ListNthExn(x_3678->children, x_3680), x_3679);
  }
}
Unit replace_node_x_3610(const auto &x_3677, const auto &x_3678, const auto &x_3679) {
  return x_3676(x_3677, x_3678, x_3679);
}
Unit x_3823(const auto &x_3824) {
  ListIter2(x_3824->children, [&](const auto &x_3825, const auto &x_3826) {
    x_3825->parent = x_3824.get();
    x_3826->parent = x_3824.get();
    x_3825->next = x_3826.get();
    x_3826->prev = x_3825.get();
    x_3823(x_3825);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3824->children),
      [&](const auto &x_3828) {
        x_3824->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3827) {
        x_3824->first = x_3827.get();
        x_3827->parent = x_3824.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3824->children),
      [&](const auto &x_3830) {
        x_3824->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3829) {
        x_3824->last = x_3829.get();
        x_3829->last = x_3824.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3608(const auto &x_3824) { return x_3823(x_3824); }
Unit x_3831(const auto &x_3832, const auto &x_3833, const auto &x_3834) {
  auto x_3835 = ListHeadExn(x_3832);
  auto x_3836 = ListTailExn(x_3832);
  if (ListIsEmpty(x_3836)) {
    InputChangeMetric(node_size_x_3575(ListNthExn(x_3833->children, x_3835)));
    auto x_3837 = ListSplitN(x_3833->children, x_3835);
    auto x_3838 = Zro(x_3837);
    auto x_3839 = Fst(x_3837);
    auto x_3840 = ListHeadExn(x_3839);
    auto x_3841 = ListTailExn(x_3839);
    OptionMatch(
        x_3840->prev, [&](const auto &x_3843) { return MakeUnit(); },
        [&](const auto &x_3842) {
          x_3842->next = ToPath(x_3840->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3845) { return MakeUnit(); },
        [&](const auto &x_3844) {
          x_3844->prev = ToPath(x_3840->prev);
          return MakeUnit();
        });
    x_3833->children = ListAppend(x_3838, x_3841);
    if (ListIsEmpty(x_3838)) {
      x_3833->first = ToPath(ListHead(x_3841));
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3841)) {
      x_3833->last = ToPath(ListLast(x_3838));
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3840->next, [&](const auto &x_3847) { return MakeUnit(); },
        [&](const auto &x_3846) {
          if (IsSome(HashtblFind(x_3846->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3846->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3846);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3849) { return MakeUnit(); },
        [&](const auto &x_3848) {
          if (IsSome(HashtblFind(x_3848->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3848->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3848);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3851) { return MakeUnit(); },
        [&](const auto &x_3850) {
          if (IsSome(HashtblFind(x_3850->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3850->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3850);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3853) { return MakeUnit(); },
        [&](const auto &x_3852) {
          if (IsSome(HashtblFind(x_3852->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3852->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3852);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3841)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3840->next, [&](const auto &x_3855) { return MakeUnit(); },
        [&](const auto &x_3854) {
          if (IsSome(HashtblFind(x_3854->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3854->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3854);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3857) { return MakeUnit(); },
        [&](const auto &x_3856) {
          if (IsSome(HashtblFind(x_3856->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3856->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3856);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3859) { return MakeUnit(); },
        [&](const auto &x_3858) {
          if (IsSome(HashtblFind(x_3858->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3858->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3858);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3861) { return MakeUnit(); },
        [&](const auto &x_3860) {
          if (IsSome(HashtblFind(x_3860->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3860->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3860);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3863) { return MakeUnit(); },
        [&](const auto &x_3862) {
          if (IsSome(HashtblFind(x_3862->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3862->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3862);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3865) { return MakeUnit(); },
        [&](const auto &x_3864) {
          if (IsSome(HashtblFind(x_3864->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3864->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3864);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3867) { return MakeUnit(); },
        [&](const auto &x_3866) {
          if (IsSome(HashtblFind(x_3866->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3866->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3866);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3841)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3841)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3840->next, [&](const auto &x_3869) { return MakeUnit(); },
        [&](const auto &x_3868) {
          if (IsSome(HashtblFind(x_3868->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3868->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3868);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3871) { return MakeUnit(); },
        [&](const auto &x_3870) {
          if (IsSome(HashtblFind(x_3870->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3870->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3870);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3873) { return MakeUnit(); },
        [&](const auto &x_3872) {
          if (IsSome(HashtblFind(x_3872->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3872->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3872);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3875) { return MakeUnit(); },
        [&](const auto &x_3874) {
          if (IsSome(HashtblFind(x_3874->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3874->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3874);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3877) { return MakeUnit(); },
        [&](const auto &x_3876) {
          if (IsSome(HashtblFind(x_3876->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3876->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3876);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3879) { return MakeUnit(); },
        [&](const auto &x_3878) {
          if (IsSome(HashtblFind(x_3878->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3878->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3878);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3881) { return MakeUnit(); },
        [&](const auto &x_3880) {
          if (IsSome(HashtblFind(x_3880->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3880->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3880);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3883) { return MakeUnit(); },
        [&](const auto &x_3882) {
          if (IsSome(HashtblFind(x_3882->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3882->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3882);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3841)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3833->children)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3841)) {
      if (IsSome(HashtblFind(x_3833->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3833->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3833);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3840->next, [&](const auto &x_3885) { return MakeUnit(); },
        [&](const auto &x_3884) {
          if (IsSome(HashtblFind(x_3884->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3884->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3884);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3887) { return MakeUnit(); },
        [&](const auto &x_3886) {
          if (IsSome(HashtblFind(x_3886->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3886->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3886);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3889) { return MakeUnit(); },
        [&](const auto &x_3888) {
          if (IsSome(HashtblFind(x_3888->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3888->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3888);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3891) { return MakeUnit(); },
        [&](const auto &x_3890) {
          if (IsSome(HashtblFind(x_3890->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3890->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3890);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3893) { return MakeUnit(); },
        [&](const auto &x_3892) {
          if (IsSome(HashtblFind(x_3892->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3892->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3892);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3895) { return MakeUnit(); },
        [&](const auto &x_3894) {
          if (IsSome(HashtblFind(x_3894->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3894->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3894);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3897) { return MakeUnit(); },
        [&](const auto &x_3896) {
          if (IsSome(HashtblFind(x_3896->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3896->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3896);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3899) { return MakeUnit(); },
        [&](const auto &x_3898) {
          if (IsSome(HashtblFind(x_3898->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3898->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3898);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3901) { return MakeUnit(); },
        [&](const auto &x_3900) {
          if (IsSome(HashtblFind(x_3900->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3900->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3900);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3903) { return MakeUnit(); },
        [&](const auto &x_3902) {
          if (IsSome(HashtblFind(x_3902->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3902->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3902);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3905) { return MakeUnit(); },
        [&](const auto &x_3904) {
          if (IsSome(HashtblFind(x_3904->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3904->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3904);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3840->next, [&](const auto &x_3907) { return MakeUnit(); },
        [&](const auto &x_3906) {
          if (IsSome(HashtblFind(x_3906->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3906->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3906);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    return MakeUnit();
  } else {
    return x_3831(x_3836, ListNthExn(x_3833->children, x_3835), x_3834);
  }
}
Unit remove_node_x_3606(const auto &x_3832, const auto &x_3833, const auto &x_3834) {
  return x_3831(x_3832, x_3833, x_3834);
}
Unit x_3908(const auto &x_3909) {
  ListIter2(x_3909->children, [&](const auto &x_3910, const auto &x_3911) {
    x_3910->parent = x_3909.get();
    x_3911->parent = x_3909.get();
    x_3910->next = x_3911.get();
    x_3911->prev = x_3910.get();
    x_3908(x_3910);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3909->children),
      [&](const auto &x_3913) {
        x_3909->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3912) {
        x_3909->first = x_3912.get();
        x_3912->parent = x_3909.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3909->children),
      [&](const auto &x_3915) {
        x_3909->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3914) {
        x_3909->last = x_3914.get();
        x_3914->last = x_3909.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3603(const auto &x_3909) { return x_3908(x_3909); }
Unit x_3916(const auto &x_3917) {
  MetaReadMetric(x_3579);
  if (HashtblFindExn(x_3917->meta->RecursiveProcDirtied, std::string("pass_1"))) {
    if (IsSome(HashtblFind(x_3917->meta->ProcInited, std::string("pass_1")))) {
      if (HashtblFindExn(x_3917->meta->BBDirtied, std::string("bb_2"))) {
        eval_stmts_x_3918(x_3917);
        HashtblSet(x_3917->meta->BBDirtied, std::string("bb_2"), false);
      } else {
        MakeUnit();
      }
      ListIter(x_3917->children, [&](const auto &x_3919) { return x_3916(x_3919); });
      MakeUnit();
    } else {
      HashtblAddExn(x_3917->meta->ProcInited, std::string("pass_1"), MakeUnit());
      eval_stmts_x_3588(x_3917);
    }
  } else {
    MakeUnit();
  }
  HashtblSet(x_3917->meta->RecursiveProcDirtied, std::string("pass_1"), false);
  return MakeUnit();
}
Unit recalculate_internal_x_3601(const auto &x_3917) { return x_3916(x_3917); }
Unit x_3920(const auto &x_3921) {
  MetaReadMetric(x_3579);
  if (HashtblFindExn(x_3921->meta->RecursiveProcDirtied, std::string("pass_0"))) {
    if (IsSome(HashtblFind(x_3921->meta->ProcInited, std::string("pass_0")))) {
      if (HashtblFindExn(x_3921->meta->BBDirtied, std::string("bb_1"))) {
        eval_stmts_x_3922(x_3921);
        HashtblSet(x_3921->meta->BBDirtied, std::string("bb_1"), false);
      } else {
        MakeUnit();
      }
      ListIter(x_3921->children, [&](const auto &x_3923) { return x_3920(x_3923); });
      if (HashtblFindExn(x_3921->meta->BBDirtied, std::string("bb_0"))) {
        eval_stmts_x_3924(x_3921);
        HashtblSet(x_3921->meta->BBDirtied, std::string("bb_0"), false);
      } else {
        MakeUnit();
      }
      MakeUnit();
    } else {
      HashtblAddExn(x_3921->meta->ProcInited, std::string("pass_0"), MakeUnit());
      eval_stmts_x_3587(x_3921);
    }
  } else {
    MakeUnit();
  }
  HashtblSet(x_3921->meta->RecursiveProcDirtied, std::string("pass_0"), false);
  return MakeUnit();
}
Unit recalculate_internal_x_3600(const auto &x_3921) { return x_3920(x_3921); }
Unit x_3925(const auto &x_3926, const auto &x_3927, const auto &x_3928) {
  auto x_3929 = ListHeadExn(x_3926);
  auto x_3930 = ListTailExn(x_3926);
  if (ListIsEmpty(x_3930)) {
    InputChangeMetric(node_size_x_3575(x_3928));
    auto x_3931 = ListSplitN(x_3927->children, x_3929);
    auto x_3932 = Zro(x_3931);
    auto x_3933 = Fst(x_3931);
    x_3927->children = ListAppend(x_3932, Cons(x_3928, x_3933));
    if (ListIsEmpty(x_3932)) {
      x_3927->first = x_3928.get();
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3933)) {
      x_3927->last = x_3928.get();
    } else {
      MakeUnit();
    }
    OptionMatch(
        ListLast(x_3932),
        [&](const auto &x_3935) {
          x_3928->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3934) {
          x_3928->prev = x_3934.get();
          x_3934->next = x_3928.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3933),
        [&](const auto &x_3937) {
          x_3928->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3936) {
          x_3928->next = x_3936.get();
          x_3936->prev = x_3928.get();
          return MakeUnit();
        });
    x_3928->parent = x_3927.get();
    HashtblAddExn(x_3928->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    set_recursive_proc_dirtied_x_3655(x_3928);
    OptionMatch(
        x_3928->next, [&](const auto &x_3939) { return MakeUnit(); },
        [&](const auto &x_3938) {
          if (IsSome(HashtblFind(x_3938->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3938->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3938);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3941) { return MakeUnit(); },
        [&](const auto &x_3940) {
          if (IsSome(HashtblFind(x_3940->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3940->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3940);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3943) { return MakeUnit(); },
        [&](const auto &x_3942) {
          if (IsSome(HashtblFind(x_3942->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3942->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3942);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3945) { return MakeUnit(); },
        [&](const auto &x_3944) {
          if (IsSome(HashtblFind(x_3944->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3944->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_3655(x_3944);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3933)) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3928->next, [&](const auto &x_3947) { return MakeUnit(); },
        [&](const auto &x_3946) {
          if (IsSome(HashtblFind(x_3946->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3946->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3946);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3949) { return MakeUnit(); },
        [&](const auto &x_3948) {
          if (IsSome(HashtblFind(x_3948->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3948->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3948);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3951) { return MakeUnit(); },
        [&](const auto &x_3950) {
          if (IsSome(HashtblFind(x_3950->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3950->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3950);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3953) { return MakeUnit(); },
        [&](const auto &x_3952) {
          if (IsSome(HashtblFind(x_3952->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3952->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3952);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3955) { return MakeUnit(); },
        [&](const auto &x_3954) {
          if (IsSome(HashtblFind(x_3954->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3954->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3954);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3957) { return MakeUnit(); },
        [&](const auto &x_3956) {
          if (IsSome(HashtblFind(x_3956->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3956->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3956);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3959) { return MakeUnit(); },
        [&](const auto &x_3958) {
          if (IsSome(HashtblFind(x_3958->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3958->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3958);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3933)) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3933)) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_0")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_3655(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3928->next, [&](const auto &x_3961) { return MakeUnit(); },
        [&](const auto &x_3960) {
          if (IsSome(HashtblFind(x_3960->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3960->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3960);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3963) { return MakeUnit(); },
        [&](const auto &x_3962) {
          if (IsSome(HashtblFind(x_3962->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3962->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3962);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3965) { return MakeUnit(); },
        [&](const auto &x_3964) {
          if (IsSome(HashtblFind(x_3964->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3964->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3964);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3967) { return MakeUnit(); },
        [&](const auto &x_3966) {
          if (IsSome(HashtblFind(x_3966->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3966->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3966);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3969) { return MakeUnit(); },
        [&](const auto &x_3968) {
          if (IsSome(HashtblFind(x_3968->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3968->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3968);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3971) { return MakeUnit(); },
        [&](const auto &x_3970) {
          if (IsSome(HashtblFind(x_3970->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3970->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3970);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3973) { return MakeUnit(); },
        [&](const auto &x_3972) {
          if (IsSome(HashtblFind(x_3972->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3972->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3972);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3975) { return MakeUnit(); },
        [&](const auto &x_3974) {
          if (IsSome(HashtblFind(x_3974->meta->ProcInited, std::string("pass_0")))) {
            HashtblSet(x_3974->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_3655(x_3974);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    HashtblAddExn(x_3928->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    set_recursive_proc_dirtied_x_3729(x_3928);
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3933)) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (IntEqual(ListLength(x_3927->children), static_cast<int64_t>(1))) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    if (ListIsEmpty(x_3933)) {
      if (IsSome(HashtblFind(x_3927->meta->ProcInited, std::string("pass_1")))) {
        HashtblSet(x_3927->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_3729(x_3927);
      } else {
        MetaWriteMetric(x_3579);
      }
    } else {
      MakeUnit();
    }
    OptionMatch(
        x_3928->next, [&](const auto &x_3977) { return MakeUnit(); },
        [&](const auto &x_3976) {
          if (IsSome(HashtblFind(x_3976->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3976->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3976);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3979) { return MakeUnit(); },
        [&](const auto &x_3978) {
          if (IsSome(HashtblFind(x_3978->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3978->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3978);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3981) { return MakeUnit(); },
        [&](const auto &x_3980) {
          if (IsSome(HashtblFind(x_3980->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3980->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3980);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3983) { return MakeUnit(); },
        [&](const auto &x_3982) {
          if (IsSome(HashtblFind(x_3982->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3982->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3982);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3985) { return MakeUnit(); },
        [&](const auto &x_3984) {
          if (IsSome(HashtblFind(x_3984->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3984->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3984);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3987) { return MakeUnit(); },
        [&](const auto &x_3986) {
          if (IsSome(HashtblFind(x_3986->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3986->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3986);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3989) { return MakeUnit(); },
        [&](const auto &x_3988) {
          if (IsSome(HashtblFind(x_3988->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3988->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3988);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3991) { return MakeUnit(); },
        [&](const auto &x_3990) {
          if (IsSome(HashtblFind(x_3990->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3990->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3990);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3993) { return MakeUnit(); },
        [&](const auto &x_3992) {
          if (IsSome(HashtblFind(x_3992->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3992->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3992);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3995) { return MakeUnit(); },
        [&](const auto &x_3994) {
          if (IsSome(HashtblFind(x_3994->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3994->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3994);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3997) { return MakeUnit(); },
        [&](const auto &x_3996) {
          if (IsSome(HashtblFind(x_3996->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3996->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3996);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    OptionMatch(
        x_3928->next, [&](const auto &x_3999) { return MakeUnit(); },
        [&](const auto &x_3998) {
          if (IsSome(HashtblFind(x_3998->meta->ProcInited, std::string("pass_1")))) {
            HashtblSet(x_3998->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_3729(x_3998);
          } else {
            return MetaWriteMetric(x_3579);
          }
        });
    return MakeUnit();
  } else {
    return x_3925(x_3930, ListNthExn(x_3927->children, x_3929), x_3928);
  }
}
Unit add_node_x_3599(const auto &x_3926, const auto &x_3927, const auto &x_3928) {
  return x_3925(x_3926, x_3927, x_3928);
}
Unit x_4000(const auto &x_4001) {
  ListIter2(x_4001->children, [&](const auto &x_4002, const auto &x_4003) {
    x_4002->parent = x_4001.get();
    x_4003->parent = x_4001.get();
    x_4002->next = x_4003.get();
    x_4003->prev = x_4002.get();
    x_4000(x_4002);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4001->children),
      [&](const auto &x_4005) {
        x_4001->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4004) {
        x_4001->first = x_4004.get();
        x_4004->parent = x_4001.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4001->children),
      [&](const auto &x_4007) {
        x_4001->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4006) {
        x_4001->last = x_4006.get();
        x_4006->last = x_4001.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3597(const auto &x_4001) { return x_4000(x_4001); }
Unit eval_stmts_x_3593(const auto &x_4008) {
  eval_stmts_x_4009(x_4008);
  ListIter(x_4008->children, [&](const auto &x_4010) { return eval_stmts_x_3593(x_4010); });
  return MakeUnit();
}
Unit eval_stmts_x_3592(const auto &x_4011) {
  eval_stmts_x_4012(x_4011);
  ListIter(x_4011->children, [&](const auto &x_4013) { return eval_stmts_x_3592(x_4013); });
  eval_stmts_x_4014(x_4011);
  return MakeUnit();
}
Unit x_4015(const auto &x_4016) {
  ListIter2(x_4016->children, [&](const auto &x_4017, const auto &x_4018) {
    x_4017->parent = x_4016.get();
    x_4018->parent = x_4016.get();
    x_4017->next = x_4018.get();
    x_4018->prev = x_4017.get();
    x_4015(x_4017);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4016->children),
      [&](const auto &x_4020) {
        x_4016->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4019) {
        x_4016->first = x_4019.get();
        x_4019->parent = x_4016.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4016->children),
      [&](const auto &x_4022) {
        x_4016->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4021) {
        x_4016->last = x_4021.get();
        x_4021->last = x_4016.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3590(const auto &x_4016) { return x_4015(x_4016); }
Unit eval_stmts_x_3588(const auto &x_4023) {
  HashtblSet(x_4023->meta->BBDirtied, std::string("bb_2"), false);
  eval_stmts_x_3918(x_4023);
  ListIter(x_4023->children, [&](const auto &x_4024) {
    HashtblAddExn(x_4024->meta->ProcInited, std::string("pass_1"), MakeUnit());
    HashtblAddExn(x_4024->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    eval_stmts_x_3588(x_4024);
    return MakeUnit();
  });
  return MakeUnit();
}
Unit eval_stmts_x_3587(const auto &x_4025) {
  HashtblSet(x_4025->meta->BBDirtied, std::string("bb_1"), false);
  eval_stmts_x_3922(x_4025);
  ListIter(x_4025->children, [&](const auto &x_4026) {
    HashtblAddExn(x_4026->meta->ProcInited, std::string("pass_0"), MakeUnit());
    HashtblAddExn(x_4026->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    eval_stmts_x_3587(x_4026);
    return MakeUnit();
  });
  HashtblSet(x_4025->meta->BBDirtied, std::string("bb_0"), false);
  eval_stmts_x_3924(x_4025);
  return MakeUnit();
}
Unit x_4027(const auto &x_4028) {
  ListIter2(x_4028->children, [&](const auto &x_4029, const auto &x_4030) {
    x_4029->parent = x_4028.get();
    x_4030->parent = x_4028.get();
    x_4029->next = x_4030.get();
    x_4030->prev = x_4029.get();
    x_4027(x_4029);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_4028->children),
      [&](const auto &x_4032) {
        x_4028->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4031) {
        x_4028->first = x_4031.get();
        x_4031->parent = x_4028.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_4028->children),
      [&](const auto &x_4034) {
        x_4028->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_4033) {
        x_4028->last = x_4033.get();
        x_4033->last = x_4028.get();
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3584(const auto &x_4028) { return x_4027(x_4028); }
int64_t x_4035(const auto &x_4036) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4036->children, [&](const auto &x_4037) { return x_4035(x_4037); }));
}
int64_t node_size_x_3575(const auto &x_4036) { return x_4035(x_4036); }
int64_t x_4038(const auto &x_4039) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_4039->children, [&](const auto &x_4040) { return x_4038(x_4040); }));
}
int64_t layout_size_x_3574(const auto &x_4039) { return x_4038(x_4039); }
LayoutNode x_4041(const auto &x_4042) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_4042)),
                                [&](const auto &x_4043) { return x_4041(x_4043); }));
}
LayoutNode json_to_layout_node_x_3573(const auto &x_4042) { return x_4041(x_4042); }
Node x_4044(const auto &x_4045) {
  return MakeNode(x_4045->name, x_4045->attr, x_4045->prop, x_4045->extern_id,
                  ListMap(x_4045->children, [&](const auto &x_4046) { return x_4044(x_4046); }));
}
Node node_to_fs_node_x_3572(const auto &x_4045) { return x_4044(x_4045); }
Node x_4047(const auto &x_4048) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_4048)), JsonToDict(JsonMember(std::string("attributes"), x_4048)),
      JsonToDict(JsonMember(std::string("properties"), x_4048)), JsonToInt(JsonMember(std::string("id"), x_4048)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_4048)),
              [&](const auto &x_4049) { return x_4047(x_4049); }));
}
Node json_to_node_aux_x_3571(const auto &x_4048) { return x_4047(x_4048); }
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
        std::string x_7157 = x_79;
        if (x_7157 == "attributes") {
          std::string x_7158 = x_80;
          if (x_7158 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_7158 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_height"), x_81);
            return MakeUnit();
          } else if (x_7158 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("image_width"), x_81);
            return MakeUnit();
          } else if (x_7158 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_7158 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_73->attr, std::string("viewBox"), x_81);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7157 == "properties") {
          std::string x_7159 = x_80;
          if (x_7159 == "width") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("width"), x_81);
            return MakeUnit();
          } else if (x_7159 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-grow"), x_81);
            return MakeUnit();
          } else if (x_7159 == "height") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("height"), x_81);
            return MakeUnit();
          } else if (x_7159 == "display") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("display"), x_81);
            return MakeUnit();
          } else if (x_7159 == "position") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("position"), x_81);
            return MakeUnit();
          } else if (x_7159 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_73->prop, std::string("flex-shrink"), x_81);
            return MakeUnit();
          } else if (x_7159 == "flex-direction") {
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
        std::string x_7160 = x_89;
        if (x_7160 == "attributes") {
          std::string x_7161 = x_90;
          if (x_7161 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("width"));
            return MakeUnit();
          } else if (x_7161 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_height"));
            return MakeUnit();
          } else if (x_7161 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("image_width"));
            return MakeUnit();
          } else if (x_7161 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("height"));
            return MakeUnit();
          } else if (x_7161 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_84->attr, std::string("viewBox"));
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7160 == "properties") {
          std::string x_7162 = x_90;
          if (x_7162 == "width") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("width"));
            return MakeUnit();
          } else if (x_7162 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-grow"));
            return MakeUnit();
          } else if (x_7162 == "height") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("height"));
            return MakeUnit();
          } else if (x_7162 == "display") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("display"));
            return MakeUnit();
          } else if (x_7162 == "position") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("position"));
            return MakeUnit();
          } else if (x_7162 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_84->prop, std::string("flex-shrink"));
            return MakeUnit();
          } else if (x_7162 == "flex-direction") {
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
        std::string x_7163 = x_99;
        if (x_7163 == "attributes") {
          std::string x_7164 = x_100;
          if (x_7164 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_7164 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_height"), x_101);
            return MakeUnit();
          } else if (x_7164 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("image_width"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("image_width"), x_101);
            return MakeUnit();
          } else if (x_7164 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_7164 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_93->attr, std::string("viewBox"));
            WriteMetric();
            HashtblAddExn(x_93->attr, std::string("viewBox"), x_101);
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_7163 == "properties") {
          std::string x_7165 = x_100;
          if (x_7165 == "width") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("width"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("width"), x_101);
            return MakeUnit();
          } else if (x_7165 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-grow"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-grow"), x_101);
            return MakeUnit();
          } else if (x_7165 == "height") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("height"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("height"), x_101);
            return MakeUnit();
          } else if (x_7165 == "display") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("display"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("display"), x_101);
            return MakeUnit();
          } else if (x_7165 == "position") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("position"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("position"), x_101);
            return MakeUnit();
          } else if (x_7165 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_93->prop, std::string("flex-shrink"));
            WriteMetric();
            HashtblAddExn(x_93->prop, std::string("flex-shrink"), x_101);
            return MakeUnit();
          } else if (x_7165 == "flex-direction") {
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
        x_254->last = x_249.get();
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
        x_339->last = x_334.get();
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
        x_422->last = x_417.get();
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
        x_437->last = x_432.get();
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
        x_452->last = x_447.get();
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
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_3576) {
    PrintEndline(std::string("RUNNING DB"));
    return WithInFile(std::string("command.json"), [&](const auto &x_3577) {
      auto x_3578 = MakeRef(static_cast<int64_t>(0));
      auto x_3579 = FreshMetric();
      auto x_3580 = JsonOfString(InputLine(x_3577));
      auto x_3581 = JsonOfString(InputLine(x_3577));
      auto x_3582 = MakeStack();
      PushStack(x_3582, x_3580);
      PushStack(x_3582, x_3581);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3580)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3581)), std::string("layout_init")));
      auto x_3585 = [&]() {
        auto x_3583 = json_to_node_aux_x_3571(JsonMember(std::string("node"), x_3580));
        x_3583->parent = nullptr;
        x_3583->prev = nullptr;
        x_3583->next = nullptr;
        set_children_relation_x_3584(x_3583);
        return x_3583;
      }();
      auto x_3586 = json_to_layout_node_x_3573(JsonMember(std::string("node"), x_3581));
      OutputChangeMetric(layout_size_x_3574(x_3586));
      InputChangeMetric(node_size_x_3575(x_3585));
      HashtblAddExn(x_3585->meta->ProcInited, std::string("pass_0"), MakeUnit());
      HashtblAddExn(x_3585->meta->RecursiveProcDirtied, std::string("pass_0"), false);
      eval_stmts_x_3587(x_3585);
      HashtblAddExn(x_3585->meta->ProcInited, std::string("pass_1"), MakeUnit());
      HashtblAddExn(x_3585->meta->RecursiveProcDirtied, std::string("pass_1"), false);
      eval_stmts_x_3588(x_3585);
      JsonToChannel(x_3576, [&]() {
        auto x_7166 = FreshJson();
        WriteJson(x_7166, std::string("name"), std::string("DB"));
        WriteJson(x_7166, std::string("diff_num"), ReadRef(x_3578));
        WriteJson(x_7166, std::string("read_count"), MetricReadCount());
        WriteJson(x_7166, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_7166, std::string("write_count"), MetricWriteCount());
        WriteJson(x_7166, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_7166, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_7166, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_7166, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_7166, std::string("html"), std::string(""));
        WriteJson(x_7166, std::string("command"), StackToList(x_3582));
        return x_7166;
      }());
      OutputString(x_3576, std::string("\n"));
      ClearStack(x_3582);
      WriteRef(x_3578, IntAdd(ReadRef(x_3578), static_cast<int64_t>(1)));
      auto x_3591 = [&]() {
        auto x_3589 = node_to_fs_node_x_3572(x_3585);
        x_3589->parent = nullptr;
        x_3589->prev = nullptr;
        x_3589->next = nullptr;
        set_children_relation_x_3590(x_3589);
        return x_3589;
      }();
      eval_stmts_x_3592(x_3591);
      eval_stmts_x_3593(x_3591);
      AssertNodeValueEqual(x_3585, x_3591);
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_3577, [&](const auto &x_3594) {
        auto x_3595 = JsonOfString(x_3594);
        PushStack(x_3582, x_3595);
        std::string x_7168 = JsonToString(JsonMember(std::string("name"), x_3595));
        if (x_7168 == "add") {
          return add_node_x_3599(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                         [&](const auto &x_3598) { return JsonToInt(x_3598); }),
                                 x_3585, [&]() {
                                   auto x_3596 = json_to_node_aux_x_3571(JsonMember(std::string("node"), x_3595));
                                   x_3596->parent = nullptr;
                                   x_3596->prev = nullptr;
                                   x_3596->next = nullptr;
                                   set_children_relation_x_3597(x_3596);
                                   return x_3596;
                                 }());
        } else if (x_7168 == "recalculate") {
          recalculate_internal_x_3600(x_3585);
          recalculate_internal_x_3601(x_3585);
          JsonToChannel(x_3576, [&]() {
            auto x_7167 = FreshJson();
            WriteJson(x_7167, std::string("name"), std::string("DB"));
            WriteJson(x_7167, std::string("diff_num"), ReadRef(x_3578));
            WriteJson(x_7167, std::string("read_count"), MetricReadCount());
            WriteJson(x_7167, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_7167, std::string("write_count"), MetricWriteCount());
            WriteJson(x_7167, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_7167, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_7167, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_7167, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_7167, std::string("html"), std::string(""));
            WriteJson(x_7167, std::string("command"), StackToList(x_3582));
            return x_7167;
          }());
          OutputString(x_3576, std::string("\n"));
          ClearStack(x_3582);
          WriteRef(x_3578, IntAdd(ReadRef(x_3578), static_cast<int64_t>(1)));
          auto x_3604 = [&]() {
            auto x_3602 = node_to_fs_node_x_3572(x_3585);
            x_3602->parent = nullptr;
            x_3602->prev = nullptr;
            x_3602->next = nullptr;
            set_children_relation_x_3603(x_3602);
            return x_3602;
          }();
          eval_stmts_x_3592(x_3604);
          eval_stmts_x_3593(x_3604);
          AssertNodeValueEqual(x_3585, x_3604);
          ResetMetric();
          return MakeUnit();
        } else if (x_7168 == "remove") {
          return remove_node_x_3606(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                            [&](const auto &x_3605) { return JsonToInt(x_3605); }),
                                    x_3585, MakeUnit());
        } else if (x_7168 == "replace") {
          return replace_node_x_3610(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                             [&](const auto &x_3609) { return JsonToInt(x_3609); }),
                                     x_3585, [&]() {
                                       auto x_3607 = json_to_node_aux_x_3571(JsonMember(std::string("node"), x_3595));
                                       x_3607->parent = nullptr;
                                       x_3607->prev = nullptr;
                                       x_3607->next = nullptr;
                                       set_children_relation_x_3608(x_3607);
                                       return x_3607;
                                     }());
        } else if (x_7168 == "replace_value") {
          return replace_value_x_3612(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                              [&](const auto &x_3611) { return JsonToInt(x_3611); }),
                                      x_3585,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3595)),
                                                        JsonToString(JsonMember(std::string("key"), x_3595))),
                                               JsonToValue(JsonMember(std::string("value"), x_3595))));
        } else if (x_7168 == "delete_value") {
          return delete_value_x_3614(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                             [&](const auto &x_3613) { return JsonToInt(x_3613); }),
                                     x_3585,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_3595)),
                                              JsonToString(JsonMember(std::string("key"), x_3595))));
        } else if (x_7168 == "insert_value") {
          return insert_value_x_3616(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                             [&](const auto &x_3615) { return JsonToInt(x_3615); }),
                                     x_3585,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3595)),
                                                       JsonToString(JsonMember(std::string("key"), x_3595))),
                                              JsonToValue(JsonMember(std::string("value"), x_3595))));
        } else if (x_7168 == "layout_remove") {
          return remove_layout_node_x_3618(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                                   [&](const auto &x_3617) { return JsonToInt(x_3617); }),
                                           x_3586, MakeUnit());
        } else if (x_7168 == "layout_add") {
          return add_layout_node_x_3620(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                                [&](const auto &x_3619) { return JsonToInt(x_3619); }),
                                        x_3586, json_to_layout_node_x_3573(JsonMember(std::string("node"), x_3595)));
        } else if (x_7168 == "layout_replace") {
          return replace_layout_node_x_3622(ListMap(JsonToList(JsonMember(std::string("path"), x_3595)),
                                                    [&](const auto &x_3621) { return JsonToInt(x_3621); }),
                                            x_3586,
                                            json_to_layout_node_x_3573(JsonMember(std::string("node"), x_3595)));
        } else if (x_7168 == "layout_info_changed") {
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