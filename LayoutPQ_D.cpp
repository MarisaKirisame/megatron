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
Unit var_modified_x_4012(const auto &x_4014);
auto eval_expr_x_4009(const auto &x_4031);
Unit var_modified_x_4007(const auto &x_4108);
auto eval_expr_x_4004(const auto &x_4112);
Unit var_modified_x_4002(const auto &x_4129);
auto eval_expr_x_3999(const auto &x_4139);
Unit var_modified_x_3997(const auto &x_4144);
auto eval_expr_x_3994(const auto &x_4154);
Unit var_modified_x_3992(const auto &x_4163);
auto eval_expr_x_3989(const auto &x_4167);
Unit var_modified_x_3987(const auto &x_4168);
auto eval_expr_x_3984(const auto &x_4172);
Unit var_modified_x_3982(const auto &x_4177);
auto eval_expr_x_3979(const auto &x_4184);
Unit var_modified_x_3977(const auto &x_4195);
auto eval_expr_x_3974(const auto &x_4199);
Unit var_modified_x_3972(const auto &x_4204);
auto eval_expr_x_3969(const auto &x_4211);
Unit var_modified_x_3967(const auto &x_4222);
auto eval_expr_x_3964(const auto &x_4229);
Unit var_modified_x_3962(const auto &x_4254);
auto eval_expr_x_3959(const auto &x_4264);
Unit var_modified_x_3957(const auto &x_4289);
auto eval_expr_x_3954(const auto &x_4293);
Unit var_modified_x_3952(const auto &x_4296);
auto eval_expr_x_3949(const auto &x_4305);
Unit var_modified_x_3947(const auto &x_4314);
auto eval_expr_x_3944(const auto &x_4323);
Unit var_modified_x_3942(const auto &x_4332);
auto eval_expr_x_3939(const auto &x_4339);
Unit var_modified_x_3937(const auto &x_4342);
auto eval_expr_x_3934(const auto &x_4349);
Unit var_modified_x_3932(const auto &x_4352);
auto eval_expr_x_3929(const auto &x_4362);
Unit var_modified_x_3927(const auto &x_4365);
auto eval_expr_x_3924(const auto &x_4375);
Unit var_modified_x_3921(const auto &x_4378);
auto eval_expr_x_3918(const auto &x_4389);
Unit var_modified_x_3916(const auto &x_4418);
auto eval_expr_x_3913(const auto &x_4429);
Unit var_modified_x_3911(const auto &x_4442);
auto eval_expr_x_3908(const auto &x_4453);
Unit var_modified_x_3906(const auto &x_4462);
auto eval_expr_x_3903(const auto &x_4466);
Unit var_modified_x_3901(const auto &x_4475);
auto eval_expr_x_3898(const auto &x_4482);
Unit var_modified_x_3896(const auto &x_4627);
auto eval_expr_x_3893(const auto &x_4631);
Unit var_modified_x_3891(const auto &x_4680);
auto eval_expr_x_3888(const auto &x_4687);
Unit var_modified_x_3886(const auto &x_4690);
auto eval_expr_x_3883(const auto &x_4694);
Unit var_modified_x_3881(const auto &x_4703);
auto eval_expr_x_3878(const auto &x_4714);
Unit var_modified_x_3876(const auto &x_4723);
auto eval_expr_x_3873(const auto &x_4734);
Unit var_modified_x_3871(const auto &x_4743);
auto eval_expr_x_3868(const auto &x_4752);
Unit var_modified_x_3866(const auto &x_4765);
auto eval_expr_x_3863(const auto &x_4769);
Unit var_modified_x_3861(const auto &x_4778);
auto eval_expr_x_3858(const auto &x_4785);
Unit var_modified_x_3856(const auto &x_4938);
auto eval_expr_x_3853(const auto &x_4942);
Unit var_modified_x_3851(const auto &x_4947);
auto eval_expr_x_3848(const auto &x_4951);
Unit var_modified_x_3846(const auto &x_5000);
auto eval_expr_x_3843(const auto &x_5004);
Unit var_modified_x_3841(const auto &x_5017);
auto eval_expr_x_3838(const auto &x_5024);
Unit var_modified_x_3835(const auto &x_5027);
auto eval_expr_x_3832(const auto &x_5033);
Unit var_modified_x_3830(const auto &x_5050);
auto eval_expr_x_3827(const auto &x_5054);
Unit var_modified_x_3825(const auto &x_5063);
auto eval_expr_x_3822(const auto &x_5070);
Unit var_modified_x_3820(const auto &x_5123);
auto eval_expr_x_3817(const auto &x_5132);
Unit var_modified_x_3815(const auto &x_5157);
auto eval_expr_x_3812(const auto &x_5163);
Unit var_modified_x_3810(const auto &x_5172);
auto eval_expr_x_3807(const auto &x_5179);
Unit var_modified_x_3805(const auto &x_5232);
auto eval_expr_x_3802(const auto &x_5241);
Unit var_modified_x_3800(const auto &x_5262);
auto eval_expr_x_3797(const auto &x_5266);
Unit var_modified_x_3795(const auto &x_5287);
auto eval_expr_x_3792(const auto &x_5291);
Unit var_modified_x_3790(const auto &x_5304);
auto eval_expr_x_3787(const auto &x_5311);
Unit var_modified_x_3785(const auto &x_5332);
auto eval_expr_x_3782(const auto &x_5336);
Unit var_modified_x_3780(const auto &x_5341);
auto eval_expr_x_3777(const auto &x_5345);
Unit eval_stmts_x_3696(const auto &x_3776);
Unit eval_stmts_x_3695(const auto &x_3837);
Unit eval_stmts_x_3694(const auto &x_3923);
Unit x_3423(const auto &x_3424, const auto &x_3425, const auto &x_3426);
Unit x_3430(const auto &x_3431, const auto &x_3432, const auto &x_3433);
Unit x_3437(const auto &x_3438, const auto &x_3439, const auto &x_3440);
Unit x_3444(const auto &x_3445, const auto &x_3446, const auto &x_3447);
Unit x_3479(const auto &x_3480, const auto &x_3481, const auto &x_3482);
Unit x_3512(const auto &x_3513, const auto &x_3514, const auto &x_3515);
Unit x_3571(const auto &x_3572, const auto &x_3573, const auto &x_3574);
Unit x_3643(const auto &x_3644);
Unit x_3651(const auto &x_3652, const auto &x_3653, const auto &x_3654);
Unit x_3686(const auto &x_3687);
Unit x_3698(const auto &x_3699, const auto &x_3700, const auto &x_3701);
Unit x_3741(const auto &x_3742);
Unit eval_stmts_x_3397(const auto &x_3749);
Unit eval_stmts_x_3396(const auto &x_3751);
Unit x_3753(const auto &x_3754);
int64_t x_3761(const auto &x_3762);
int64_t x_3764(const auto &x_3765);
LayoutNode x_3767(const auto &x_3768);
Node x_3770(const auto &x_3771);
Node x_3773(const auto &x_3774);
Unit var_modified_x_4012(const auto &x_4014) {
  auto x_5350 = [&](const auto &x_4015) {
    if (HashtblContain(x_4015->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4016 = HashtblFindExn(x_4015->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4016, x_4015, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5350(x_4014);
  MakeUnit();
  auto x_5351 = [&](const auto &x_4020) {
    if (HashtblContain(x_4020->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4021 = HashtblFindExn(x_4020->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4021, x_4020, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4014->next, [&](const auto &x_4019) { return MakeUnit(); },
      [&](const auto &x_4018) {
        auto x_5354 = x_5351;
        x_5354(x_4018);
        return MakeUnit();
      });
  auto x_5352 = [&](const auto &x_4023) {
    if (HashtblContain(x_4023->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4024 = HashtblFindExn(x_4023->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4024, x_4023, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5352(x_4014);
  MakeUnit();
  auto x_5353 = [&](const auto &x_4028) {
    if (HashtblContain(x_4028->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4029 = HashtblFindExn(x_4028->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4029, x_4028, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4014->next, [&](const auto &x_4027) { return MakeUnit(); },
      [&](const auto &x_4026) {
        auto x_5355 = x_5353;
        x_5355(x_4026);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_4009(const auto &x_4031) {
  if (eq(x_4031->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_4031->var_position, std::string("absolute"))) {
      return false;
    } else {
      if (((x_4031->parent != nullptr) &&
           (eq((x_4031->parent)->var_display, std::string("flex")) ||
            eq((x_4031->parent)->var_display, std::string("inline-flex"))))) {
        return true;
      } else {
        if (eq(x_4031->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_4031->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_4031->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_4031->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_4031, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_4031, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4031->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_4031->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_4031->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_4031->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_4031->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_4031->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_4031->var_display, std::string("list-item"))) {
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
Unit var_modified_x_4007(const auto &x_4108) {
  ListIter(x_4108->children, [&](const auto &x_4109) {
    if (HashtblContain(x_4109->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4110 = HashtblFindExn(x_4109->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4110, x_4109, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_4004(const auto &x_4112) {
  return (((!(x_4112->parent != nullptr)) || (x_4112->parent)->var_visible) &&
          (neq(x_4112->var_display, std::string("none")) && ((!x_4112->var_inside_svg) && (!x_4112->var_disabled))));
}
Unit var_modified_x_4002(const auto &x_4129) {
  auto x_5356 = [&](const auto &x_4130) {
    if (HashtblContain(x_4130->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4131 = HashtblFindExn(x_4130->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4131, x_4130, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5356(x_4129);
  MakeUnit();
  ListIter(x_4129->children, [&](const auto &x_4133) {
    if (HashtblContain(x_4133->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4134 = HashtblFindExn(x_4133->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4134, x_4133, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_5357 = [&](const auto &x_4136) {
    if (HashtblContain(x_4136->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4137 = HashtblFindExn(x_4136->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4137, x_4136, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5357(x_4129);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3999(const auto &x_4139) {
  if (eq(x_4139->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_4139->parent != nullptr) && (x_4139->parent)->var_disabled);
  }
}
Unit var_modified_x_3997(const auto &x_4144) {
  auto x_5358 = [&](const auto &x_4145) {
    if (HashtblContain(x_4145->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4146 = HashtblFindExn(x_4145->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4146, x_4145, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5358(x_4144);
  MakeUnit();
  ListIter(x_4144->children, [&](const auto &x_4148) {
    if (HashtblContain(x_4148->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4149 = HashtblFindExn(x_4148->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4149, x_4148, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_5359 = [&](const auto &x_4151) {
    if (HashtblContain(x_4151->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4152 = HashtblFindExn(x_4151->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4152, x_4151, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5359(x_4144);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3994(const auto &x_4154) {
  return ((x_4154->parent != nullptr) && ((x_4154->parent)->var_is_svg_block || (x_4154->parent)->var_inside_svg));
}
Unit var_modified_x_3992(const auto &x_4163) {
  ListIter(x_4163->children, [&](const auto &x_4164) {
    if (HashtblContain(x_4164->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4165 = HashtblFindExn(x_4164->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4165, x_4164, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3989(const auto &x_4167) { return eq(x_4167->name, std::string("svg")); }
Unit var_modified_x_3987(const auto &x_4168) {
  auto x_5360 = [&](const auto &x_4169) {
    if (HashtblContain(x_4169->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4170 = HashtblFindExn(x_4169->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4170, x_4169, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5360(x_4168);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3984(const auto &x_4172) { return neq(x_4172->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_3982(const auto &x_4177) {
  auto x_5361 = [&](const auto &x_4178) {
    if (HashtblContain(x_4178->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4179 = HashtblFindExn(x_4178->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4179, x_4178, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5361(x_4177);
  MakeUnit();
  auto x_5362 = [&](const auto &x_4181) {
    if (HashtblContain(x_4181->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4182 = HashtblFindExn(x_4181->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4182, x_4181, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5362(x_4177);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3979(const auto &x_4184) {
  if ((!HasAttr(x_4184, std::string("height")))) {
    return std::string("auto");
  } else {
    if ((string_is_float(GetAttr<std::string>(x_4184, std::string("height"))) ||
         has_suffix(GetAttr<std::string>(x_4184, std::string("height")), std::string("%")))) {
      return GetAttr<std::string>(x_4184, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_3977(const auto &x_4195) {
  auto x_5363 = [&](const auto &x_4196) {
    if (HashtblContain(x_4196->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4197 = HashtblFindExn(x_4196->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4197, x_4196, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5363(x_4195);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3974(const auto &x_4199) { return neq(x_4199->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_3972(const auto &x_4204) {
  auto x_5364 = [&](const auto &x_4205) {
    if (HashtblContain(x_4205->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4206 = HashtblFindExn(x_4205->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4206, x_4205, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5364(x_4204);
  MakeUnit();
  auto x_5365 = [&](const auto &x_4208) {
    if (HashtblContain(x_4208->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4209 = HashtblFindExn(x_4208->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4209, x_4208, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5365(x_4204);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3969(const auto &x_4211) {
  if ((!HasAttr(x_4211, std::string("width")))) {
    return std::string("auto");
  } else {
    if ((string_is_float(GetAttr<std::string>(x_4211, std::string("width"))) ||
         has_suffix(GetAttr<std::string>(x_4211, std::string("width")), std::string("%")))) {
      return GetAttr<std::string>(x_4211, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_3967(const auto &x_4222) {
  ListIter(x_4222->children, [&](const auto &x_4223) {
    if (HashtblContain(x_4223->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4224 = HashtblFindExn(x_4223->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4224, x_4223, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  ListIter(x_4222->children, [&](const auto &x_4226) {
    if (HashtblContain(x_4226->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4227 = HashtblFindExn(x_4226->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4227, x_4226, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3964(const auto &x_4229) {
  if (((x_4229->parent != nullptr) &&
       (eq((x_4229->parent)->var_display, std::string("flex")) ||
        eq((x_4229->parent)->var_display, std::string("inline-flex"))))) {
    if ((eq((x_4229->parent)->var_flex_direction, std::string("column")) ||
         eq((x_4229->parent)->var_flex_direction, std::string("column-reverse")))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3962(const auto &x_4254) {
  ListIter(x_4254->children, [&](const auto &x_4255) {
    if (HashtblContain(x_4255->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4256 = HashtblFindExn(x_4255->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4256, x_4255, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  auto x_5366 = [&](const auto &x_4258) {
    if (HashtblContain(x_4258->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4259 = HashtblFindExn(x_4258->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4259, x_4258, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5366(x_4254);
  MakeUnit();
  ListIter(x_4254->children, [&](const auto &x_4261) {
    if (HashtblContain(x_4261->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4262 = HashtblFindExn(x_4261->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4262, x_4261, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3959(const auto &x_4264) {
  if (((x_4264->parent != nullptr) &&
       (eq((x_4264->parent)->var_display, std::string("flex")) ||
        eq((x_4264->parent)->var_display, std::string("inline-flex"))))) {
    if (eq((x_4264->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_3957(const auto &x_4289) {
  ListIter(x_4289->children, [&](const auto &x_4290) {
    if (HashtblContain(x_4290->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4291 = HashtblFindExn(x_4290->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4291, x_4290, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3954(const auto &x_4293) {
  if (HasProp(x_4293, std::string("flex-direction"))) {
    return GetProp<std::string>(x_4293, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_3952(const auto &x_4296) {
  auto x_5367 = [&](const auto &x_4299) {
    if (HashtblContain(x_4299->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4300 = HashtblFindExn(x_4299->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4300, x_4299, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4296->next, [&](const auto &x_4298) { return MakeUnit(); },
      [&](const auto &x_4297) {
        auto x_5369 = x_5367;
        x_5369(x_4297);
        return MakeUnit();
      });
  auto x_5368 = [&](const auto &x_4302) {
    if (HashtblContain(x_4302->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4303 = HashtblFindExn(x_4302->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4303, x_4302, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5368(x_4296);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3949(const auto &x_4305) {
  return plus(((x_4305->prev != nullptr)) ? ((x_4305->prev)->var_flex_shrink_sum) : (0.), x_4305->var_flex_shrink);
}
Unit var_modified_x_3947(const auto &x_4314) {
  auto x_5370 = [&](const auto &x_4317) {
    if (HashtblContain(x_4317->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4318 = HashtblFindExn(x_4317->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4318, x_4317, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4314->next, [&](const auto &x_4316) { return MakeUnit(); },
      [&](const auto &x_4315) {
        auto x_5372 = x_5370;
        x_5372(x_4315);
        return MakeUnit();
      });
  auto x_5371 = [&](const auto &x_4320) {
    if (HashtblContain(x_4320->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4321 = HashtblFindExn(x_4320->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4321, x_4320, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5371(x_4314);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3944(const auto &x_4323) {
  return plus(((x_4323->prev != nullptr)) ? ((x_4323->prev)->var_flex_grow_sum) : (0.), x_4323->var_flex_grow);
}
Unit var_modified_x_3942(const auto &x_4332) {
  auto x_5373 = [&](const auto &x_4333) {
    if (HashtblContain(x_4333->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4334 = HashtblFindExn(x_4333->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4334, x_4333, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5373(x_4332);
  MakeUnit();
  auto x_5374 = [&](const auto &x_4336) {
    if (HashtblContain(x_4336->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4337 = HashtblFindExn(x_4336->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4337, x_4336, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5374(x_4332);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3939(const auto &x_4339) {
  if (HasProp(x_4339, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_4339, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_3937(const auto &x_4342) {
  auto x_5375 = [&](const auto &x_4343) {
    if (HashtblContain(x_4343->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4344 = HashtblFindExn(x_4343->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4344, x_4343, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5375(x_4342);
  MakeUnit();
  auto x_5376 = [&](const auto &x_4346) {
    if (HashtblContain(x_4346->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4347 = HashtblFindExn(x_4346->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4347, x_4346, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5376(x_4342);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3934(const auto &x_4349) {
  if (HasProp(x_4349, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_4349, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_3932(const auto &x_4352) {
  auto x_5377 = [&](const auto &x_4353) {
    if (HashtblContain(x_4353->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4354 = HashtblFindExn(x_4353->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4354, x_4353, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5377(x_4352);
  MakeUnit();
  auto x_5378 = [&](const auto &x_4356) {
    if (HashtblContain(x_4356->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4357 = HashtblFindExn(x_4356->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4357, x_4356, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5378(x_4352);
  MakeUnit();
  auto x_5379 = [&](const auto &x_4359) {
    if (HashtblContain(x_4359->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4360 = HashtblFindExn(x_4359->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4360, x_4359, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5379(x_4352);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3929(const auto &x_4362) {
  if (HasProp(x_4362, std::string("position"))) {
    return GetProp<std::string>(x_4362, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_3927(const auto &x_4365) {
  auto x_5380 = [&](const auto &x_4366) {
    if (HashtblContain(x_4366->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4367 = HashtblFindExn(x_4366->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4367, x_4366, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_5380(x_4365);
  MakeUnit();
  ListIter(x_4365->children, [&](const auto &x_4369) {
    if (HashtblContain(x_4369->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_4370 = HashtblFindExn(x_4369->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_4370, x_4369, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_5381 = [&](const auto &x_4372) {
    if (HashtblContain(x_4372->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4373 = HashtblFindExn(x_4372->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4373, x_4372, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5381(x_4365);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3924(const auto &x_4375) {
  if (HasProp(x_4375, std::string("display"))) {
    return GetProp<std::string>(x_4375, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_3921(const auto &x_4378) {
  auto x_5382 = [&](const auto &x_4381) {
    if (HashtblContain(x_4381->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4382 = HashtblFindExn(x_4381->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4382, x_4381, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if ((x_4378->next != nullptr)) {
    auto x_5384 = x_5382;
    OptionMatch(
        x_4378->parent, [&](const auto &x_4380) { return MakeUnit(); },
        [&](const auto &x_4379) {
          auto x_5386 = x_5384;
          x_5386(x_4379);
          return MakeUnit();
        });
  }
  auto x_5383 = [&](const auto &x_4386) {
    if (HashtblContain(x_4386->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4387 = HashtblFindExn(x_4386->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4387, x_4386, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4378->next, [&](const auto &x_4385) { return MakeUnit(); },
      [&](const auto &x_4384) {
        auto x_5385 = x_5383;
        x_5385(x_4384);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3918(const auto &x_4389) {
  if ((x_4389->prev != nullptr)) {
    if (x_4389->var_line_break) {
      return plus((x_4389->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4389->prev)->var_intrinsic_current_line_height, x_4389->var_intrinsic_height_external));
    } else {
      return (x_4389->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4389->var_line_break) {
      return x_4389->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3916(const auto &x_4418) {
  auto x_5387 = [&](const auto &x_4421) {
    if (HashtblContain(x_4421->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4422 = HashtblFindExn(x_4421->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4422, x_4421, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if ((x_4418->next != nullptr)) {
    auto x_5389 = x_5387;
    OptionMatch(
        x_4418->parent, [&](const auto &x_4420) { return MakeUnit(); },
        [&](const auto &x_4419) {
          auto x_5391 = x_5389;
          x_5391(x_4419);
          return MakeUnit();
        });
  }
  auto x_5388 = [&](const auto &x_4426) {
    if (HashtblContain(x_4426->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4427 = HashtblFindExn(x_4426->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4427, x_4426, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4418->next, [&](const auto &x_4425) { return MakeUnit(); },
      [&](const auto &x_4424) {
        auto x_5390 = x_5388;
        x_5390(x_4424);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3913(const auto &x_4429) {
  if (x_4429->var_line_break) {
    return 0.;
  } else {
    return max(x_4429->var_intrinsic_height_external,
               ((x_4429->prev != nullptr)) ? ((x_4429->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_3911(const auto &x_4442) {
  auto x_5392 = [&](const auto &x_4445) {
    if (HashtblContain(x_4445->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4446 = HashtblFindExn(x_4445->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4446, x_4445, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4442->next, [&](const auto &x_4444) { return MakeUnit(); },
      [&](const auto &x_4443) {
        auto x_5394 = x_5392;
        x_5394(x_4443);
        return MakeUnit();
      });
  auto x_5393 = [&](const auto &x_4450) {
    if (HashtblContain(x_4450->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4451 = HashtblFindExn(x_4450->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4451, x_4450, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if ((x_4442->next != nullptr)) {
    auto x_5395 = x_5393;
    OptionMatch(
        x_4442->parent, [&](const auto &x_4449) { return MakeUnit(); },
        [&](const auto &x_4448) {
          auto x_5396 = x_5395;
          x_5396(x_4448);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_3908(const auto &x_4453) {
  return plus(((x_4453->prev != nullptr)) ? ((x_4453->prev)->var_intrinsic_height_sum) : (0.),
              x_4453->var_intrinsic_height_external);
}
Unit var_modified_x_3906(const auto &x_4462) {
  auto x_5397 = [&](const auto &x_4463) {
    if (HashtblContain(x_4463->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4464 = HashtblFindExn(x_4463->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4464, x_4463, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5397(x_4462);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3903(const auto &x_4466) {
  if (eq(x_4466->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4466->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_3901(const auto &x_4475) {
  auto x_5398 = [&](const auto &x_4476) {
    if (HashtblContain(x_4476->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4477 = HashtblFindExn(x_4476->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4477, x_4476, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5398(x_4475);
  MakeUnit();
  auto x_5399 = [&](const auto &x_4479) {
    if (HashtblContain(x_4479->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4480 = HashtblFindExn(x_4479->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4480, x_4479, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5399(x_4475);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3898(const auto &x_4482) {
  if (eq(x_4482->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_4482->var_inside_svg) {
      return 0.;
    } else {
      if (x_4482->var_disabled) {
        return 0.;
      } else {
        if ((neq(x_4482->var_height_expr, std::string("auto")) &&
             ((!has_suffix(x_4482->var_height_expr, std::string("%"))) &&
              neq(x_4482->var_height_expr, std::string("fit-content"))))) {
          if (has_suffix(x_4482->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_4482->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_4482->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_4482->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_4482->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_4482->var_children_intrinsic_height,
              (eq(x_4482->name, std::string("#text")))
                  ? (10.)
                  : ((x_4482->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4482->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_4482->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_4482->name, std::string("svg")))
                                              ? (((x_4482->var_has_height_attr &&
                                                   string_is_float(x_4482->var_height_attr_expr)))
                                                     ? (string_to_float(x_4482->var_height_attr_expr))
                                                     : ((HasAttr(x_4482, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_4482, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_4482,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_4482->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_4482->name, std::string("IMG")))
                                                     ? ((x_4482->var_has_height_attr)
                                                            ? (string_to_float(x_4482->var_height_attr_expr))
                                                            : (((HasAttr(x_4482, std::string("image_height")) &&
                                                                 (!x_4482->var_has_width_attr)))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_4482, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_4482,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_4482->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4482,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4482,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_4482->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_4482->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3896(const auto &x_4627) {
  auto x_5400 = [&](const auto &x_4628) {
    if (HashtblContain(x_4628->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4629 = HashtblFindExn(x_4628->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4629, x_4628, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5400(x_4627);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3893(const auto &x_4631) {
  if ((eq(x_4631->var_display, std::string("none")) || (x_4631->var_inside_svg || x_4631->var_disabled))) {
    return true;
  } else {
    if (((x_4631->parent != nullptr) && (x_4631->parent)->var_is_flex_column)) {
      return false;
    } else {
      if ((eq(x_4631->var_height_expr, std::string("auto")) ||
           (has_suffix(x_4631->var_height_expr, std::string("px")) ||
            (has_suffix(x_4631->var_height_expr, std::string("ch")) ||
             (has_suffix(x_4631->var_height_expr, std::string("lh")) ||
              eq(x_4631->var_height_expr, std::string("max-content"))))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3891(const auto &x_4680) {
  auto x_5401 = [&](const auto &x_4681) {
    if (HashtblContain(x_4681->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4682 = HashtblFindExn(x_4681->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4682, x_4681, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5401(x_4680);
  MakeUnit();
  auto x_5402 = [&](const auto &x_4684) {
    if (HashtblContain(x_4684->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4685 = HashtblFindExn(x_4684->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4685, x_4684, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5402(x_4680);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3888(const auto &x_4687) {
  if (HasProp(x_4687, std::string("height"))) {
    return GetProp<std::string>(x_4687, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_3886(const auto &x_4690) {
  auto x_5403 = [&](const auto &x_4691) {
    if (HashtblContain(x_4691->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4692 = HashtblFindExn(x_4691->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4692, x_4691, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5403(x_4690);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3883(const auto &x_4694) {
  if ((x_4694->last != nullptr)) {
    return plus((x_4694->last)->var_finished_intrinsic_height_sum, (x_4694->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3881(const auto &x_4703) {
  auto x_5404 = [&](const auto &x_4706) {
    if (HashtblContain(x_4706->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4707 = HashtblFindExn(x_4706->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4707, x_4706, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4703->next, [&](const auto &x_4705) { return MakeUnit(); },
      [&](const auto &x_4704) {
        auto x_5406 = x_5404;
        x_5406(x_4704);
        return MakeUnit();
      });
  auto x_5405 = [&](const auto &x_4711) {
    if (HashtblContain(x_4711->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4712 = HashtblFindExn(x_4711->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4712, x_4711, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if ((x_4703->next != nullptr)) {
    auto x_5407 = x_5405;
    OptionMatch(
        x_4703->parent, [&](const auto &x_4710) { return MakeUnit(); },
        [&](const auto &x_4709) {
          auto x_5408 = x_5407;
          x_5408(x_4709);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_3878(const auto &x_4714) {
  return plus(((x_4714->prev != nullptr)) ? ((x_4714->prev)->var_intrinsic_width_sum) : (0.),
              x_4714->var_intrinsic_width_external);
}
Unit var_modified_x_3876(const auto &x_4723) {
  auto x_5409 = [&](const auto &x_4726) {
    if (HashtblContain(x_4726->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4727 = HashtblFindExn(x_4726->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4727, x_4726, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if ((x_4723->next != nullptr)) {
    auto x_5411 = x_5409;
    OptionMatch(
        x_4723->parent, [&](const auto &x_4725) { return MakeUnit(); },
        [&](const auto &x_4724) {
          auto x_5413 = x_5411;
          x_5413(x_4724);
          return MakeUnit();
        });
  }
  auto x_5410 = [&](const auto &x_4731) {
    if (HashtblContain(x_4731->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4732 = HashtblFindExn(x_4731->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4732, x_4731, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4723->next, [&](const auto &x_4730) { return MakeUnit(); },
      [&](const auto &x_4729) {
        auto x_5412 = x_5410;
        x_5412(x_4729);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3873(const auto &x_4734) {
  return max(x_4734->var_intrinsic_current_line_width,
             ((x_4734->prev != nullptr)) ? ((x_4734->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_3871(const auto &x_4743) {
  auto x_5414 = [&](const auto &x_4744) {
    if (HashtblContain(x_4744->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4745 = HashtblFindExn(x_4744->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4745, x_4744, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5414(x_4743);
  MakeUnit();
  auto x_5415 = [&](const auto &x_4749) {
    if (HashtblContain(x_4749->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4750 = HashtblFindExn(x_4749->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4750, x_4749, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_4743->next, [&](const auto &x_4748) { return MakeUnit(); },
      [&](const auto &x_4747) {
        auto x_5416 = x_5415;
        x_5416(x_4747);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3868(const auto &x_4752) {
  return plus(x_4752->var_intrinsic_width_external,
              (((x_4752->prev != nullptr) && (!(x_4752->prev)->var_line_break)))
                  ? ((x_4752->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_3866(const auto &x_4765) {
  auto x_5417 = [&](const auto &x_4766) {
    if (HashtblContain(x_4766->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4767 = HashtblFindExn(x_4766->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4767, x_4766, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5417(x_4765);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3863(const auto &x_4769) {
  if (eq(x_4769->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4769->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_3861(const auto &x_4778) {
  auto x_5418 = [&](const auto &x_4779) {
    if (HashtblContain(x_4779->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4780 = HashtblFindExn(x_4779->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4780, x_4779, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5418(x_4778);
  MakeUnit();
  auto x_5419 = [&](const auto &x_4782) {
    if (HashtblContain(x_4782->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4783 = HashtblFindExn(x_4782->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4783, x_4782, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5419(x_4778);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3858(const auto &x_4785) {
  if (eq(x_4785->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_4785->var_inside_svg) {
      return 0.;
    } else {
      if (x_4785->var_disabled) {
        return 0.;
      } else {
        if ((neq(x_4785->var_width_expr, std::string("auto")) &&
             ((!has_suffix(x_4785->var_width_expr, std::string("%"))) &&
              (neq(x_4785->var_width_expr, std::string("fit-content")) &&
               (neq(x_4785->var_width_expr, std::string("max-content")) &&
                (!has_prefix(x_4785->var_width_expr, std::string("calc")))))))) {
          if (has_suffix(x_4785->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_4785->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_4785->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_4785->var_children_intrinsic_width,
              (eq(x_4785->name, std::string("#text")))
                  ? (100.)
                  : ((x_4785->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4785->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_4785->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_4785->name, std::string("svg")))
                                              ? (((x_4785->var_has_width_attr &&
                                                   string_is_float(x_4785->var_width_attr_expr)))
                                                     ? (string_to_float(x_4785->var_width_attr_expr))
                                                     : ((((!x_4785->var_has_width_attr) &&
                                                          HasAttr(x_4785, std::string("viewBox"))))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_4785, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_4785,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_4785->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_4785->name, std::string("IMG")))
                                                     ? ((x_4785->var_has_width_attr)
                                                            ? (string_to_float(x_4785->var_width_attr_expr))
                                                            : (((HasAttr(x_4785, std::string("image_width")) &&
                                                                 (!x_4785->var_has_height_attr)))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_4785, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_4785, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_4785->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4785,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4785,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_4785->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_4785->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3856(const auto &x_4938) {
  auto x_5420 = [&](const auto &x_4939) {
    if (HashtblContain(x_4939->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_4940 = HashtblFindExn(x_4939->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_4940, x_4939, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5420(x_4938);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3853(const auto &x_4942) {
  if ((x_4942->last != nullptr)) {
    return (x_4942->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_3851(const auto &x_4947) {
  auto x_5421 = [&](const auto &x_4948) {
    if (HashtblContain(x_4948->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_4949 = HashtblFindExn(x_4948->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_4949, x_4948, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5421(x_4947);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3848(const auto &x_4951) {
  if ((eq(x_4951->var_display, std::string("none")) || (x_4951->var_inside_svg || x_4951->var_disabled))) {
    return true;
  } else {
    if (((x_4951->parent != nullptr) && (x_4951->parent)->var_is_flex_row)) {
      return false;
    } else {
      if ((eq(x_4951->var_width_expr, std::string("auto")) ||
           (has_suffix(x_4951->var_width_expr, std::string("px")) ||
            (has_suffix(x_4951->var_width_expr, std::string("ch")) ||
             (has_prefix(x_4951->var_width_expr, std::string("calc(")) ||
              eq(x_4951->var_width_expr, std::string("max-content"))))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3846(const auto &x_5000) {
  auto x_5422 = [&](const auto &x_5001) {
    if (HashtblContain(x_5001->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_5002 = HashtblFindExn(x_5001->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_5002, x_5001, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5422(x_5000);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3843(const auto &x_5004) {
  if (eq(x_5004->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_5004->var_inside_svg) {
      return true;
    } else {
      if (x_5004->var_disabled) {
        return true;
      } else {if ((eq(x_5004->name,std::string("#document")) || (eq(x_5004->name,std::string("#shadow-root")) || (eq(x_5004->name,std::string("DIV")) || (eq(x_5004->name,std::string("HTML")) || (eq(x_5004->name,std::string("BODY")) || (eq(x_5004->name,std::string("BUTTON")) || (eq(x_5004->name,std::string("FOOTER")) || (eq(x_5004->name,std::string("SELECT")) || (eq(x_5004->name,std::string("SECTION")) || (eq(x_5004->name,std::string("FORM")) || (eq(x_5004->name,std::string("CENTER")) || (eq(x_5004->name,std::string("TD")) || (eq(x_5004->name,std::string("TR")) || (eq(x_5004->name,std::string("TBODY")) || (eq(x_5004->name,std::string("TABLE")) || (eq(x_5004->name,std::string("SPAN")) || (eq(x_5004->name,std::string("FONT")) || (eq(x_5004->name,std::string("A")) || (eq(x_5004->name,std::string("ARTICLE")) || (eq(x_5004->name,std::string("P")) || (eq(x_5004->name,std::string("U")) || (eq(x_5004->name,std::string("UL")) || (eq(x_5004->name,std::string("B")) || (eq(x_5004->name,std::string("H1")) || (eq(x_5004->name,std::string("H2")) || (eq(x_5004->name,std::string("H3")) || (eq(x_5004->name,std::string("H4")) || (eq(x_5004->name,std::string("DT")) || (eq(x_5004->name,std::string("DD")) || (eq(x_5004->name,std::string("DL")) || (eq(x_5004->name,std::string("LI")) || (eq(x_5004->name,std::string("LABEL")) || (eq(x_5004->name,std::string("OL")) || (eq(x_5004->name,std::string("NAV")) || (eq(x_5004->name,std::string("HEADER")) || (eq(x_5004->name,std::string("HEAD")) || (eq(x_5004->name,std::string("SOURCE")) || (eq(x_5004->name,std::string("PICTURE")) || (eq(x_5004->name,std::string("FIGURE")) || (eq(x_5004->name,std::string("FIGCAPTION")) || (eq(x_5004->name,std::string("MAIN")) || (eq(x_5004->name,std::string("REACT-PARTIAL")) || (eq(x_5004->name,std::string("QUERY-BUILDER")) || (eq(x_5004->name,std::string("MODAL-DIALOG")) || (eq(x_5004->name,std::string("SCROLLABLE-REGION")) || (eq(x_5004->name,std::string("DIALOG-HELPER")) || (eq(x_5004->name,std::string("AUTO-CHECK")) || (eq(x_5004->name,std::string("TOOL-TIP")) || (eq(x_5004->name,std::string("CUSTOM-SCOPES")) || (eq(x_5004->name,std::string("QBSEARCH-INPUT")) || (eq(x_5004->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_5004->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_5004->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_5004->name,std::string("GHCC-CONSENT")) || (eq(x_5004->name,std::string("GLOBAL-BANNER")) || (eq(x_5004->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_5004->name,std::string("CARD-SKEW")) || (eq(x_5004->name,std::string("EM")) || (eq(x_5004->name,std::string("ASIDE")) || (eq(x_5004->name,std::string("AUDIO")) || (eq(x_5004->name,std::string("SUP")) || (eq(x_5004->name,std::string("TIME")) || (eq(x_5004->name,std::string("ABBR")) || (eq(x_5004->name,std::string("SMALL")) || (eq(x_5004->name,std::string("SLOT")) || eq(x_5004->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_3841(const auto &x_5017) {
  auto x_5423 = [&](const auto &x_5018) {
    if (HashtblContain(x_5018->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_5019 = HashtblFindExn(x_5018->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_5019, x_5018, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_5423(x_5017);
  MakeUnit();
  auto x_5424 = [&](const auto &x_5021) {
    if (HashtblContain(x_5021->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5022 = HashtblFindExn(x_5021->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5022, x_5021, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5424(x_5017);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3838(const auto &x_5024) {
  if (HasProp(x_5024, std::string("width"))) {
    return GetProp<std::string>(x_5024, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_3835(const auto &x_5027) {
  auto x_5425 = [&](const auto &x_5030) {
    if (HashtblContain(x_5030->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5031 = HashtblFindExn(x_5030->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5031, x_5030, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_5027->next, [&](const auto &x_5029) { return MakeUnit(); },
      [&](const auto &x_5028) {
        auto x_5426 = x_5425;
        x_5426(x_5028);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3832(const auto &x_5033) {
  if (((x_5033->prev != nullptr) && (!(x_5033->prev)->var_line_break))) {
    return max(x_5033->var_height_external, (x_5033->prev)->var_line_height);
  } else {
    return x_5033->var_height_external;
  }
}
Unit var_modified_x_3830(const auto &x_5050) {
  auto x_5427 = [&](const auto &x_5051) {
    if (HashtblContain(x_5051->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5052 = HashtblFindExn(x_5051->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5052, x_5051, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5427(x_5050);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3827(const auto &x_5054) {
  if (eq(x_5054->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5054->var_height_internal;
  }
}
Unit var_modified_x_3825(const auto &x_5063) {
  auto x_5428 = [&](const auto &x_5064) {
    if (HashtblContain(x_5064->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5065 = HashtblFindExn(x_5064->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5065, x_5064, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5428(x_5063);
  MakeUnit();
  ListIter(x_5063->children, [&](const auto &x_5067) {
    if (HashtblContain(x_5067->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5068 = HashtblFindExn(x_5067->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5068, x_5067, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3822(const auto &x_5070) {
  if (x_5070->var_intrinsic_height_is_height) {
    return x_5070->var_intrinsic_height_internal;
  } else {
    if (((x_5070->parent != nullptr) && (x_5070->parent)->var_is_flex_column)) {
      return plus(x_5070->var_intrinsic_height_internal,
                  mult(x_5070->var_flex_amount, (x_5070->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5070->var_height_expr, std::string("%"))) {
        return mult(x_5070->var_box_height,
                    divide(string_to_float(strip_suffix(x_5070->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_5070->var_box_height, x_5070->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_3820(const auto &x_5123) {
  ListIter(x_5123->children, [&](const auto &x_5124) {
    if (HashtblContain(x_5124->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5125 = HashtblFindExn(x_5124->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5125, x_5124, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_5429 = [&](const auto &x_5129) {
    if (HashtblContain(x_5129->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5130 = HashtblFindExn(x_5129->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5130, x_5129, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_5123->next, [&](const auto &x_5128) { return MakeUnit(); },
      [&](const auto &x_5127) {
        auto x_5430 = x_5429;
        x_5430(x_5127);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3817(const auto &x_5132) {
  if ((x_5132->prev != nullptr)) {
    if ((x_5132->var_line_break || (x_5132->prev)->var_line_break)) {
      return plus((x_5132->prev)->var_y, (x_5132->prev)->var_line_height);
    } else {
      return (x_5132->prev)->var_y;
    }
  } else {
    if ((x_5132->parent != nullptr)) {
      return (x_5132->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3815(const auto &x_5157) {
  auto x_5431 = [&](const auto &x_5160) {
    if (HashtblContain(x_5160->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5161 = HashtblFindExn(x_5160->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5161, x_5160, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_5157->next, [&](const auto &x_5159) { return MakeUnit(); },
      [&](const auto &x_5158) {
        auto x_5432 = x_5431;
        x_5432(x_5158);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3812(const auto &x_5163) {
  if (eq(x_5163->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5163->var_width_internal;
  }
}
Unit var_modified_x_3810(const auto &x_5172) {
  auto x_5433 = [&](const auto &x_5173) {
    if (HashtblContain(x_5173->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5174 = HashtblFindExn(x_5173->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5174, x_5173, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5433(x_5172);
  MakeUnit();
  ListIter(x_5172->children, [&](const auto &x_5176) {
    if (HashtblContain(x_5176->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5177 = HashtblFindExn(x_5176->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5177, x_5176, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3807(const auto &x_5179) {
  if (x_5179->var_intrinsic_width_is_width) {
    return x_5179->var_intrinsic_width_internal;
  } else {
    if (((x_5179->parent != nullptr) && (x_5179->parent)->var_is_flex_row)) {
      return plus(x_5179->var_intrinsic_width_internal, mult(x_5179->var_flex_amount, (x_5179->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5179->var_width_expr, std::string("%"))) {
        return mult(x_5179->var_box_width,
                    divide(string_to_float(strip_suffix(x_5179->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_5179->var_box_width, x_5179->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_3805(const auto &x_5232) {
  ListIter(x_5232->children, [&](const auto &x_5233) {
    if (HashtblContain(x_5233->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5234 = HashtblFindExn(x_5233->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5234, x_5233, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_5434 = [&](const auto &x_5238) {
    if (HashtblContain(x_5238->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5239 = HashtblFindExn(x_5238->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5239, x_5238, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_5232->next, [&](const auto &x_5237) { return MakeUnit(); },
      [&](const auto &x_5236) {
        auto x_5435 = x_5434;
        x_5435(x_5236);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3802(const auto &x_5241) {
  if ((x_5241->prev != nullptr)) {
    if ((x_5241->var_line_break || (x_5241->prev)->var_line_break)) {
      return 0.;
    } else {
      return plus((x_5241->prev)->var_x, (x_5241->prev)->var_width_external);
    }
  } else {
    if ((x_5241->parent != nullptr)) {
      return (x_5241->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3800(const auto &x_5262) {
  ListIter(x_5262->children, [&](const auto &x_5263) {
    if (HashtblContain(x_5263->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5264 = HashtblFindExn(x_5263->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5264, x_5263, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3797(const auto &x_5266) {
  if (gt(x_5266->var_left_over, 0.)) {
    return divide(x_5266->var_left_over, x_5266->var_flex_grow_sum);
  } else {
    return divide(x_5266->var_left_over, x_5266->var_flex_shrink_sum);
  }
}
Unit var_modified_x_3795(const auto &x_5287) {
  auto x_5436 = [&](const auto &x_5288) {
    if (HashtblContain(x_5288->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5289 = HashtblFindExn(x_5288->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5289, x_5288, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5436(x_5287);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3792(const auto &x_5291) {
  if (((x_5291->parent != nullptr) && gt((x_5291->parent)->var_left_over, 0.))) {
    return x_5291->var_flex_grow;
  } else {
    return x_5291->var_flex_shrink;
  }
}
Unit var_modified_x_3790(const auto &x_5304) {
  auto x_5437 = [&](const auto &x_5305) {
    if (HashtblContain(x_5305->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5306 = HashtblFindExn(x_5305->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5306, x_5305, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5437(x_5304);
  MakeUnit();
  ListIter(x_5304->children, [&](const auto &x_5308) {
    if (HashtblContain(x_5308->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5309 = HashtblFindExn(x_5308->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5309, x_5308, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_3787(const auto &x_5311) {
  if (x_5311->var_is_flex_row) {
    return minus(x_5311->var_box_width, ((x_5311->last != nullptr)) ? ((x_5311->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_5311->var_box_height,
                 ((x_5311->last != nullptr)) ? ((x_5311->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_3785(const auto &x_5332) {
  auto x_5438 = [&](const auto &x_5333) {
    if (HashtblContain(x_5333->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5334 = HashtblFindExn(x_5333->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5334, x_5333, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5438(x_5332);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3782(const auto &x_5336) {
  if ((x_5336->parent != nullptr)) {
    return (x_5336->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_3780(const auto &x_5341) {
  auto x_5439 = [&](const auto &x_5342) {
    if (HashtblContain(x_5342->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_5343 = HashtblFindExn(x_5342->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_5343, x_5342, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_5439(x_5341);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3777(const auto &x_5345) {
  if ((x_5345->parent != nullptr)) {
    return (x_5345->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_3696(const auto &x_3776) {
  WriteMetric();
  auto x_3778 = eval_expr_x_3777(x_3776);
  if (x_3776->has_var_box_width) {
    auto x_3779 = x_3776->var_box_width;
    if ((!EqualValue(x_3779, x_3778))) {
      var_modified_x_3780(x_3776);
    }
  }
  x_3776->has_var_box_width = true;
  x_3776->var_box_width = x_3778;
  WriteMetric();
  auto x_3783 = eval_expr_x_3782(x_3776);
  if (x_3776->has_var_box_height) {
    auto x_3784 = x_3776->var_box_height;
    if ((!EqualValue(x_3784, x_3783))) {
      var_modified_x_3785(x_3776);
    }
  }
  x_3776->has_var_box_height = true;
  x_3776->var_box_height = x_3783;
  WriteMetric();
  auto x_3788 = eval_expr_x_3787(x_3776);
  if (x_3776->has_var_left_over) {
    auto x_3789 = x_3776->var_left_over;
    if ((!EqualValue(x_3789, x_3788))) {
      var_modified_x_3790(x_3776);
    }
  }
  x_3776->has_var_left_over = true;
  x_3776->var_left_over = x_3788;
  WriteMetric();
  auto x_3793 = eval_expr_x_3792(x_3776);
  if (x_3776->has_var_flex_amount) {
    auto x_3794 = x_3776->var_flex_amount;
    if ((!EqualValue(x_3794, x_3793))) {
      var_modified_x_3795(x_3776);
    }
  }
  x_3776->has_var_flex_amount = true;
  x_3776->var_flex_amount = x_3793;
  WriteMetric();
  auto x_3798 = eval_expr_x_3797(x_3776);
  if (x_3776->has_var_flex_unit) {
    auto x_3799 = x_3776->var_flex_unit;
    if ((!EqualValue(x_3799, x_3798))) {
      var_modified_x_3800(x_3776);
    }
  }
  x_3776->has_var_flex_unit = true;
  x_3776->var_flex_unit = x_3798;
  WriteMetric();
  auto x_3803 = eval_expr_x_3802(x_3776);
  if (x_3776->has_var_x) {
    auto x_3804 = x_3776->var_x;
    if ((!EqualValue(x_3804, x_3803))) {
      var_modified_x_3805(x_3776);
    }
  }
  x_3776->has_var_x = true;
  x_3776->var_x = x_3803;
  WriteMetric();
  auto x_3808 = eval_expr_x_3807(x_3776);
  if (x_3776->has_var_width_internal) {
    auto x_3809 = x_3776->var_width_internal;
    if ((!EqualValue(x_3809, x_3808))) {
      var_modified_x_3810(x_3776);
    }
  }
  x_3776->has_var_width_internal = true;
  x_3776->var_width_internal = x_3808;
  WriteMetric();
  auto x_3813 = eval_expr_x_3812(x_3776);
  if (x_3776->has_var_width_external) {
    auto x_3814 = x_3776->var_width_external;
    if ((!EqualValue(x_3814, x_3813))) {
      var_modified_x_3815(x_3776);
    }
  }
  x_3776->has_var_width_external = true;
  x_3776->var_width_external = x_3813;
  WriteMetric();
  auto x_3818 = eval_expr_x_3817(x_3776);
  if (x_3776->has_var_y) {
    auto x_3819 = x_3776->var_y;
    if ((!EqualValue(x_3819, x_3818))) {
      var_modified_x_3820(x_3776);
    }
  }
  x_3776->has_var_y = true;
  x_3776->var_y = x_3818;
  WriteMetric();
  auto x_3823 = eval_expr_x_3822(x_3776);
  if (x_3776->has_var_height_internal) {
    auto x_3824 = x_3776->var_height_internal;
    if ((!EqualValue(x_3824, x_3823))) {
      var_modified_x_3825(x_3776);
    }
  }
  x_3776->has_var_height_internal = true;
  x_3776->var_height_internal = x_3823;
  WriteMetric();
  auto x_3828 = eval_expr_x_3827(x_3776);
  if (x_3776->has_var_height_external) {
    auto x_3829 = x_3776->var_height_external;
    if ((!EqualValue(x_3829, x_3828))) {
      var_modified_x_3830(x_3776);
    }
  }
  x_3776->has_var_height_external = true;
  x_3776->var_height_external = x_3828;
  WriteMetric();
  auto x_3833 = eval_expr_x_3832(x_3776);
  if (x_3776->has_var_line_height) {
    auto x_3834 = x_3776->var_line_height;
    if ((!EqualValue(x_3834, x_3833))) {
      var_modified_x_3835(x_3776);
    }
  }
  x_3776->has_var_line_height = true;
  x_3776->var_line_height = x_3833;
  return MakeUnit();
}
Unit eval_stmts_x_3695(const auto &x_3837) {
  WriteMetric();
  auto x_3839 = eval_expr_x_3838(x_3837);
  if (x_3837->has_var_width_expr) {
    auto x_3840 = x_3837->var_width_expr;
    if ((!EqualValue(x_3840, x_3839))) {
      var_modified_x_3841(x_3837);
    }
  }
  x_3837->has_var_width_expr = true;
  x_3837->var_width_expr = x_3839;
  WriteMetric();
  auto x_3844 = eval_expr_x_3843(x_3837);
  if (x_3837->has_var_is_default_case) {
    auto x_3845 = x_3837->var_is_default_case;
    if ((!EqualValue(x_3845, x_3844))) {
      var_modified_x_3846(x_3837);
    }
  }
  x_3837->has_var_is_default_case = true;
  x_3837->var_is_default_case = x_3844;
  WriteMetric();
  auto x_3849 = eval_expr_x_3848(x_3837);
  if (x_3837->has_var_intrinsic_width_is_width) {
    auto x_3850 = x_3837->var_intrinsic_width_is_width;
    if ((!EqualValue(x_3850, x_3849))) {
      var_modified_x_3851(x_3837);
    }
  }
  x_3837->has_var_intrinsic_width_is_width = true;
  x_3837->var_intrinsic_width_is_width = x_3849;
  WriteMetric();
  auto x_3854 = eval_expr_x_3853(x_3837);
  if (x_3837->has_var_children_intrinsic_width) {
    auto x_3855 = x_3837->var_children_intrinsic_width;
    if ((!EqualValue(x_3855, x_3854))) {
      var_modified_x_3856(x_3837);
    }
  }
  x_3837->has_var_children_intrinsic_width = true;
  x_3837->var_children_intrinsic_width = x_3854;
  WriteMetric();
  auto x_3859 = eval_expr_x_3858(x_3837);
  if (x_3837->has_var_intrinsic_width_internal) {
    auto x_3860 = x_3837->var_intrinsic_width_internal;
    if ((!EqualValue(x_3860, x_3859))) {
      var_modified_x_3861(x_3837);
    }
  }
  x_3837->has_var_intrinsic_width_internal = true;
  x_3837->var_intrinsic_width_internal = x_3859;
  WriteMetric();
  auto x_3864 = eval_expr_x_3863(x_3837);
  if (x_3837->has_var_intrinsic_width_external) {
    auto x_3865 = x_3837->var_intrinsic_width_external;
    if ((!EqualValue(x_3865, x_3864))) {
      var_modified_x_3866(x_3837);
    }
  }
  x_3837->has_var_intrinsic_width_external = true;
  x_3837->var_intrinsic_width_external = x_3864;
  WriteMetric();
  auto x_3869 = eval_expr_x_3868(x_3837);
  if (x_3837->has_var_intrinsic_current_line_width) {
    auto x_3870 = x_3837->var_intrinsic_current_line_width;
    if ((!EqualValue(x_3870, x_3869))) {
      var_modified_x_3871(x_3837);
    }
  }
  x_3837->has_var_intrinsic_current_line_width = true;
  x_3837->var_intrinsic_current_line_width = x_3869;
  WriteMetric();
  auto x_3874 = eval_expr_x_3873(x_3837);
  if (x_3837->has_var_intrinsic_width_max) {
    auto x_3875 = x_3837->var_intrinsic_width_max;
    if ((!EqualValue(x_3875, x_3874))) {
      var_modified_x_3876(x_3837);
    }
  }
  x_3837->has_var_intrinsic_width_max = true;
  x_3837->var_intrinsic_width_max = x_3874;
  WriteMetric();
  auto x_3879 = eval_expr_x_3878(x_3837);
  if (x_3837->has_var_intrinsic_width_sum) {
    auto x_3880 = x_3837->var_intrinsic_width_sum;
    if ((!EqualValue(x_3880, x_3879))) {
      var_modified_x_3881(x_3837);
    }
  }
  x_3837->has_var_intrinsic_width_sum = true;
  x_3837->var_intrinsic_width_sum = x_3879;
  WriteMetric();
  auto x_3884 = eval_expr_x_3883(x_3837);
  if (x_3837->has_var_children_intrinsic_height) {
    auto x_3885 = x_3837->var_children_intrinsic_height;
    if ((!EqualValue(x_3885, x_3884))) {
      var_modified_x_3886(x_3837);
    }
  }
  x_3837->has_var_children_intrinsic_height = true;
  x_3837->var_children_intrinsic_height = x_3884;
  WriteMetric();
  auto x_3889 = eval_expr_x_3888(x_3837);
  if (x_3837->has_var_height_expr) {
    auto x_3890 = x_3837->var_height_expr;
    if ((!EqualValue(x_3890, x_3889))) {
      var_modified_x_3891(x_3837);
    }
  }
  x_3837->has_var_height_expr = true;
  x_3837->var_height_expr = x_3889;
  WriteMetric();
  auto x_3894 = eval_expr_x_3893(x_3837);
  if (x_3837->has_var_intrinsic_height_is_height) {
    auto x_3895 = x_3837->var_intrinsic_height_is_height;
    if ((!EqualValue(x_3895, x_3894))) {
      var_modified_x_3896(x_3837);
    }
  }
  x_3837->has_var_intrinsic_height_is_height = true;
  x_3837->var_intrinsic_height_is_height = x_3894;
  WriteMetric();
  auto x_3899 = eval_expr_x_3898(x_3837);
  if (x_3837->has_var_intrinsic_height_internal) {
    auto x_3900 = x_3837->var_intrinsic_height_internal;
    if ((!EqualValue(x_3900, x_3899))) {
      var_modified_x_3901(x_3837);
    }
  }
  x_3837->has_var_intrinsic_height_internal = true;
  x_3837->var_intrinsic_height_internal = x_3899;
  WriteMetric();
  auto x_3904 = eval_expr_x_3903(x_3837);
  if (x_3837->has_var_intrinsic_height_external) {
    auto x_3905 = x_3837->var_intrinsic_height_external;
    if ((!EqualValue(x_3905, x_3904))) {
      var_modified_x_3906(x_3837);
    }
  }
  x_3837->has_var_intrinsic_height_external = true;
  x_3837->var_intrinsic_height_external = x_3904;
  WriteMetric();
  auto x_3909 = eval_expr_x_3908(x_3837);
  if (x_3837->has_var_intrinsic_height_sum) {
    auto x_3910 = x_3837->var_intrinsic_height_sum;
    if ((!EqualValue(x_3910, x_3909))) {
      var_modified_x_3911(x_3837);
    }
  }
  x_3837->has_var_intrinsic_height_sum = true;
  x_3837->var_intrinsic_height_sum = x_3909;
  WriteMetric();
  auto x_3914 = eval_expr_x_3913(x_3837);
  if (x_3837->has_var_intrinsic_current_line_height) {
    auto x_3915 = x_3837->var_intrinsic_current_line_height;
    if ((!EqualValue(x_3915, x_3914))) {
      var_modified_x_3916(x_3837);
    }
  }
  x_3837->has_var_intrinsic_current_line_height = true;
  x_3837->var_intrinsic_current_line_height = x_3914;
  WriteMetric();
  auto x_3919 = eval_expr_x_3918(x_3837);
  if (x_3837->has_var_finished_intrinsic_height_sum) {
    auto x_3920 = x_3837->var_finished_intrinsic_height_sum;
    if ((!EqualValue(x_3920, x_3919))) {
      var_modified_x_3921(x_3837);
    }
  }
  x_3837->has_var_finished_intrinsic_height_sum = true;
  x_3837->var_finished_intrinsic_height_sum = x_3919;
  return MakeUnit();
}
Unit eval_stmts_x_3694(const auto &x_3923) {
  WriteMetric();
  auto x_3925 = eval_expr_x_3924(x_3923);
  if (x_3923->has_var_display) {
    auto x_3926 = x_3923->var_display;
    if ((!EqualValue(x_3926, x_3925))) {
      var_modified_x_3927(x_3923);
    }
  }
  x_3923->has_var_display = true;
  x_3923->var_display = x_3925;
  WriteMetric();
  auto x_3930 = eval_expr_x_3929(x_3923);
  if (x_3923->has_var_position) {
    auto x_3931 = x_3923->var_position;
    if ((!EqualValue(x_3931, x_3930))) {
      var_modified_x_3932(x_3923);
    }
  }
  x_3923->has_var_position = true;
  x_3923->var_position = x_3930;
  WriteMetric();
  auto x_3935 = eval_expr_x_3934(x_3923);
  if (x_3923->has_var_flex_grow) {
    auto x_3936 = x_3923->var_flex_grow;
    if ((!EqualValue(x_3936, x_3935))) {
      var_modified_x_3937(x_3923);
    }
  }
  x_3923->has_var_flex_grow = true;
  x_3923->var_flex_grow = x_3935;
  WriteMetric();
  auto x_3940 = eval_expr_x_3939(x_3923);
  if (x_3923->has_var_flex_shrink) {
    auto x_3941 = x_3923->var_flex_shrink;
    if ((!EqualValue(x_3941, x_3940))) {
      var_modified_x_3942(x_3923);
    }
  }
  x_3923->has_var_flex_shrink = true;
  x_3923->var_flex_shrink = x_3940;
  WriteMetric();
  auto x_3945 = eval_expr_x_3944(x_3923);
  if (x_3923->has_var_flex_grow_sum) {
    auto x_3946 = x_3923->var_flex_grow_sum;
    if ((!EqualValue(x_3946, x_3945))) {
      var_modified_x_3947(x_3923);
    }
  }
  x_3923->has_var_flex_grow_sum = true;
  x_3923->var_flex_grow_sum = x_3945;
  WriteMetric();
  auto x_3950 = eval_expr_x_3949(x_3923);
  if (x_3923->has_var_flex_shrink_sum) {
    auto x_3951 = x_3923->var_flex_shrink_sum;
    if ((!EqualValue(x_3951, x_3950))) {
      var_modified_x_3952(x_3923);
    }
  }
  x_3923->has_var_flex_shrink_sum = true;
  x_3923->var_flex_shrink_sum = x_3950;
  WriteMetric();
  auto x_3955 = eval_expr_x_3954(x_3923);
  if (x_3923->has_var_flex_direction) {
    auto x_3956 = x_3923->var_flex_direction;
    if ((!EqualValue(x_3956, x_3955))) {
      var_modified_x_3957(x_3923);
    }
  }
  x_3923->has_var_flex_direction = true;
  x_3923->var_flex_direction = x_3955;
  WriteMetric();
  auto x_3960 = eval_expr_x_3959(x_3923);
  if (x_3923->has_var_is_flex_row) {
    auto x_3961 = x_3923->var_is_flex_row;
    if ((!EqualValue(x_3961, x_3960))) {
      var_modified_x_3962(x_3923);
    }
  }
  x_3923->has_var_is_flex_row = true;
  x_3923->var_is_flex_row = x_3960;
  WriteMetric();
  auto x_3965 = eval_expr_x_3964(x_3923);
  if (x_3923->has_var_is_flex_column) {
    auto x_3966 = x_3923->var_is_flex_column;
    if ((!EqualValue(x_3966, x_3965))) {
      var_modified_x_3967(x_3923);
    }
  }
  x_3923->has_var_is_flex_column = true;
  x_3923->var_is_flex_column = x_3965;
  WriteMetric();
  auto x_3970 = eval_expr_x_3969(x_3923);
  if (x_3923->has_var_width_attr_expr) {
    auto x_3971 = x_3923->var_width_attr_expr;
    if ((!EqualValue(x_3971, x_3970))) {
      var_modified_x_3972(x_3923);
    }
  }
  x_3923->has_var_width_attr_expr = true;
  x_3923->var_width_attr_expr = x_3970;
  WriteMetric();
  auto x_3975 = eval_expr_x_3974(x_3923);
  if (x_3923->has_var_has_width_attr) {
    auto x_3976 = x_3923->var_has_width_attr;
    if ((!EqualValue(x_3976, x_3975))) {
      var_modified_x_3977(x_3923);
    }
  }
  x_3923->has_var_has_width_attr = true;
  x_3923->var_has_width_attr = x_3975;
  WriteMetric();
  auto x_3980 = eval_expr_x_3979(x_3923);
  if (x_3923->has_var_height_attr_expr) {
    auto x_3981 = x_3923->var_height_attr_expr;
    if ((!EqualValue(x_3981, x_3980))) {
      var_modified_x_3982(x_3923);
    }
  }
  x_3923->has_var_height_attr_expr = true;
  x_3923->var_height_attr_expr = x_3980;
  WriteMetric();
  auto x_3985 = eval_expr_x_3984(x_3923);
  if (x_3923->has_var_has_height_attr) {
    auto x_3986 = x_3923->var_has_height_attr;
    if ((!EqualValue(x_3986, x_3985))) {
      var_modified_x_3987(x_3923);
    }
  }
  x_3923->has_var_has_height_attr = true;
  x_3923->var_has_height_attr = x_3985;
  WriteMetric();
  auto x_3990 = eval_expr_x_3989(x_3923);
  if (x_3923->has_var_is_svg_block) {
    auto x_3991 = x_3923->var_is_svg_block;
    if ((!EqualValue(x_3991, x_3990))) {
      var_modified_x_3992(x_3923);
    }
  }
  x_3923->has_var_is_svg_block = true;
  x_3923->var_is_svg_block = x_3990;
  WriteMetric();
  auto x_3995 = eval_expr_x_3994(x_3923);
  if (x_3923->has_var_inside_svg) {
    auto x_3996 = x_3923->var_inside_svg;
    if ((!EqualValue(x_3996, x_3995))) {
      var_modified_x_3997(x_3923);
    }
  }
  x_3923->has_var_inside_svg = true;
  x_3923->var_inside_svg = x_3995;
  WriteMetric();
  auto x_4000 = eval_expr_x_3999(x_3923);
  if (x_3923->has_var_disabled) {
    auto x_4001 = x_3923->var_disabled;
    if ((!EqualValue(x_4001, x_4000))) {
      var_modified_x_4002(x_3923);
    }
  }
  x_3923->has_var_disabled = true;
  x_3923->var_disabled = x_4000;
  WriteMetric();
  auto x_4005 = eval_expr_x_4004(x_3923);
  if (x_3923->has_var_visible) {
    auto x_4006 = x_3923->var_visible;
    if ((!EqualValue(x_4006, x_4005))) {
      var_modified_x_4007(x_3923);
    }
  }
  x_3923->has_var_visible = true;
  x_3923->var_visible = x_4005;
  WriteMetric();
  auto x_4010 = eval_expr_x_4009(x_3923);
  if (x_3923->has_var_line_break) {
    auto x_4011 = x_3923->var_line_break;
    if ((!EqualValue(x_4011, x_4010))) {
      var_modified_x_4012(x_3923);
    }
  }
  x_3923->has_var_line_break = true;
  x_3923->var_line_break = x_4010;
  return MakeUnit();
}
Unit x_3423(const auto &x_3424, const auto &x_3425, const auto &x_3426) {
  auto x_3427 = ListHeadExn(x_3424);
  auto x_3428 = ListTailExn(x_3424);
  if (ListIsEmpty(x_3428)) {
    auto x_3429 = ListSplitN(x_3425->children, x_3427);
    OutputChangeMetric(IntAdd(layout_size_x_3383(ListNthExn(x_3425->children, x_3427)), layout_size_x_3383(x_3426)));
    x_3425->children = ListAppend(Zro(x_3429), Cons(x_3426, ListTailExn(Fst(x_3429))));
    return MakeUnit();
  } else {
    return x_3423(x_3428, ListNthExn(x_3425->children, x_3427), x_3426);
  }
}
Unit replace_layout_node_x_3422(const auto &x_3424, const auto &x_3425, const auto &x_3426) {
  return x_3423(x_3424, x_3425, x_3426);
}
Unit x_3430(const auto &x_3431, const auto &x_3432, const auto &x_3433) {
  auto x_3434 = ListHeadExn(x_3431);
  auto x_3435 = ListTailExn(x_3431);
  if (ListIsEmpty(x_3435)) {
    OutputChangeMetric(layout_size_x_3383(x_3433));
    auto x_3436 = ListSplitN(x_3432->children, x_3434);
    x_3432->children = ListAppend(Zro(x_3436), Cons(x_3433, Fst(x_3436)));
    return MakeUnit();
  } else {
    return x_3430(x_3435, ListNthExn(x_3432->children, x_3434), x_3433);
  }
}
Unit add_layout_node_x_3420(const auto &x_3431, const auto &x_3432, const auto &x_3433) {
  return x_3430(x_3431, x_3432, x_3433);
}
Unit x_3437(const auto &x_3438, const auto &x_3439, const auto &x_3440) {
  auto x_3441 = ListHeadExn(x_3438);
  auto x_3442 = ListTailExn(x_3438);
  if (ListIsEmpty(x_3442)) {
    OutputChangeMetric(layout_size_x_3383(ListNthExn(x_3439->children, x_3441)));
    auto x_3443 = ListSplitN(x_3439->children, x_3441);
    x_3439->children = ListAppend(Zro(x_3443), ListTailExn(Fst(x_3443)));
    return MakeUnit();
  } else {
    return x_3437(x_3442, ListNthExn(x_3439->children, x_3441), x_3440);
  }
}
Unit remove_layout_node_x_3418(const auto &x_3438, const auto &x_3439, const auto &x_3440) {
  return x_3437(x_3438, x_3439, x_3440);
}
Unit x_3444(const auto &x_3445, const auto &x_3446, const auto &x_3447) {
  return ListMatch(
      x_3445,
      [&](const auto &x_3450) {
        auto x_3451 = Zro(x_3447);
        auto x_3452 = Zro(x_3451);
        auto x_3453 = Fst(x_3451);
        auto x_3454 = Fst(x_3447);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5440 = x_3452;
        if (x_5440 == "attributes") {
          std::string x_5441 = x_3453;
          if (x_5441 == "width") {
            WriteMetric();
            HashtblAddExn(x_3446->attr, std::string("width"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3455 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3455, x_3446, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5441 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_3446->attr, std::string("image_height"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3457 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3457, x_3446, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5441 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_3446->attr, std::string("image_width"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3459 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3459, x_3446, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5441 == "height") {
            WriteMetric();
            HashtblAddExn(x_3446->attr, std::string("height"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3461 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3461, x_3446, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5441 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_3446->attr, std::string("viewBox"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3463 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3463, x_3446, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5440 == "properties") {
          std::string x_5442 = x_3453;
          if (x_5442 == "width") {
            WriteMetric();
            HashtblAddExn(x_3446->prop, std::string("width"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3465 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3465, x_3446, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5442 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_3446->prop, std::string("flex-grow"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3467 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3467, x_3446, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5442 == "height") {
            WriteMetric();
            HashtblAddExn(x_3446->prop, std::string("height"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3469 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3469, x_3446, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5442 == "display") {
            WriteMetric();
            HashtblAddExn(x_3446->prop, std::string("display"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3471 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3471, x_3446, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5442 == "position") {
            WriteMetric();
            HashtblAddExn(x_3446->prop, std::string("position"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3473 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3473, x_3446, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5442 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_3446->prop, std::string("flex-shrink"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3475 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3475, x_3446, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5442 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_3446->prop, std::string("flex-direction"), x_3454);
            if (HashtblContain(x_3446->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3477 = HashtblFindExn(x_3446->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3477, x_3446, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3448, const auto &x_3449) {
        return x_3444(x_3449, ListNthExn(x_3446->children, x_3448), x_3447);
      });
}
Unit insert_value_x_3416(const auto &x_3445, const auto &x_3446, const auto &x_3447) {
  return x_3444(x_3445, x_3446, x_3447);
}
Unit x_3479(const auto &x_3480, const auto &x_3481, const auto &x_3482) {
  return ListMatch(
      x_3480,
      [&](const auto &x_3485) {
        auto x_3486 = Zro(x_3482);
        auto x_3487 = Fst(x_3482);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5443 = x_3486;
        if (x_5443 == "attributes") {
          std::string x_5444 = x_3487;
          if (x_5444 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3481->attr, std::string("width"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3488 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3488, x_3481, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5444 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3481->attr, std::string("image_height"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3490 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3490, x_3481, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5444 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3481->attr, std::string("image_width"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3492 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3492, x_3481, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5444 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3481->attr, std::string("height"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3494 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3494, x_3481, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5444 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3481->attr, std::string("viewBox"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3496 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3496, x_3481, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5443 == "properties") {
          std::string x_5445 = x_3487;
          if (x_5445 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3481->prop, std::string("width"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3498 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3498, x_3481, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5445 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3481->prop, std::string("flex-grow"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3500 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3500, x_3481, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5445 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3481->prop, std::string("height"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3502 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3502, x_3481, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5445 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3481->prop, std::string("display"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3504 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3504, x_3481, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5445 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3481->prop, std::string("position"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3506 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3506, x_3481, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5445 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3481->prop, std::string("flex-shrink"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3508 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3508, x_3481, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5445 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3481->prop, std::string("flex-direction"));
            if (HashtblContain(x_3481->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3510 = HashtblFindExn(x_3481->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3510, x_3481, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3483, const auto &x_3484) {
        return x_3479(x_3484, ListNthExn(x_3481->children, x_3483), x_3482);
      });
}
Unit delete_value_x_3414(const auto &x_3480, const auto &x_3481, const auto &x_3482) {
  return x_3479(x_3480, x_3481, x_3482);
}
Unit x_3512(const auto &x_3513, const auto &x_3514, const auto &x_3515) {
  return ListMatch(
      x_3513,
      [&](const auto &x_3518) {
        auto x_3519 = Zro(x_3515);
        auto x_3520 = Zro(x_3519);
        auto x_3521 = Fst(x_3519);
        auto x_3522 = Fst(x_3515);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5446 = x_3520;
        if (x_5446 == "attributes") {
          std::string x_5447 = x_3521;
          if (x_5447 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3514->attr, std::string("width"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3523 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3523, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->attr, std::string("width"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3525 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3525, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5447 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3514->attr, std::string("image_height"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3527 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3527, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->attr, std::string("image_height"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3529 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3529, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5447 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3514->attr, std::string("image_width"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3531 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3531, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->attr, std::string("image_width"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3533 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3533, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5447 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3514->attr, std::string("height"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3535 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3535, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->attr, std::string("height"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3537 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3537, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5447 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3514->attr, std::string("viewBox"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3539 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3539, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->attr, std::string("viewBox"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3541 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3541, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5446 == "properties") {
          std::string x_5448 = x_3521;
          if (x_5448 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3514->prop, std::string("width"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3543 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3543, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->prop, std::string("width"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3545 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3545, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5448 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3514->prop, std::string("flex-grow"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3547 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3547, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->prop, std::string("flex-grow"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3549 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3549, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5448 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3514->prop, std::string("height"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3551 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3551, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->prop, std::string("height"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_3553 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_3553, x_3514, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5448 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3514->prop, std::string("display"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3555 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3555, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->prop, std::string("display"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3557 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3557, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5448 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3514->prop, std::string("position"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3559 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3559, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->prop, std::string("position"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3561 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3561, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5448 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3514->prop, std::string("flex-shrink"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3563 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3563, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->prop, std::string("flex-shrink"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3565 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3565, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5448 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3514->prop, std::string("flex-direction"));
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3567 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3567, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3514->prop, std::string("flex-direction"), x_3522);
            if (HashtblContain(x_3514->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_3569 = HashtblFindExn(x_3514->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_3569, x_3514, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3516, const auto &x_3517) {
        return x_3512(x_3517, ListNthExn(x_3514->children, x_3516), x_3515);
      });
}
Unit replace_value_x_3412(const auto &x_3513, const auto &x_3514, const auto &x_3515) {
  return x_3512(x_3513, x_3514, x_3515);
}
Unit x_3571(const auto &x_3572, const auto &x_3573, const auto &x_3574) {
  auto x_3575 = ListHeadExn(x_3572);
  auto x_3576 = ListTailExn(x_3572);
  if (ListIsEmpty(x_3576)) {
    InputChangeMetric(IntAdd(node_size_x_3384(ListNthExn(x_3573->children, x_3575)), node_size_x_3384(x_3574)));
    auto x_3577 = ListSplitN(x_3573->children, x_3575);
    auto x_3578 = Zro(x_3577);
    auto x_3579 = Fst(x_3577);
    auto x_3580 = ListHeadExn(x_3579);
    auto x_3581 = ListTailExn(x_3579);
    OptionMatch(
        x_3580->prev, [&](const auto &x_3583) { return MakeUnit(); },
        [&](const auto &x_3582) {
          x_3582->next = ToPath(x_3580->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3580->next, [&](const auto &x_3585) { return MakeUnit(); },
        [&](const auto &x_3584) {
          x_3584->prev = ToPath(x_3580->prev);
          return MakeUnit();
        });
    x_3580->meta->alive = false;
    x_3573->children = ListAppend(x_3578, x_3581);
    if (ListIsEmpty(x_3578)) {
      x_3573->first = ToPath(ListHead(x_3581));
    }
    if (ListIsEmpty(x_3581)) {
      x_3573->last = ToPath(ListLast(x_3578));
    }
    OptionMatch(
        x_3580->next, [&](const auto &x_3589) { return MakeUnit(); },
        [&](const auto &x_3586) {
          if (HashtblContain(x_3586->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_3587 = HashtblFindExn(x_3586->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_3587, x_3586, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3573->children)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3590 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3590, x_3573, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3581)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3592 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3592, x_3573, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3580->next, [&](const auto &x_3597) { return MakeUnit(); },
        [&](const auto &x_3594) {
          if (HashtblContain(x_3594->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_3595 = HashtblFindExn(x_3594->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_3595, x_3594, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3573->children)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3598 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3598, x_3573, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3581)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3600 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3600, x_3573, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3580->next, [&](const auto &x_3605) { return MakeUnit(); },
        [&](const auto &x_3602) {
          if (HashtblContain(x_3602->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_3603 = HashtblFindExn(x_3602->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_3603, x_3602, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_3606 = ListSplitN(x_3573->children, x_3575);
    auto x_3607 = Zro(x_3606);
    auto x_3608 = Fst(x_3606);
    x_3573->children = ListAppend(x_3607, Cons(x_3574, x_3608));
    if (ListIsEmpty(x_3607)) {
      x_3573->first = x_3574.get();
    }
    if (ListIsEmpty(x_3608)) {
      x_3573->last = x_3574.get();
    }
    OptionMatch(
        ListLast(x_3607),
        [&](const auto &x_3610) {
          x_3574->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3609) {
          x_3574->prev = x_3609.get();
          x_3609->next = x_3574.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3608),
        [&](const auto &x_3612) {
          x_3574->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3611) {
          x_3574->next = x_3611.get();
          x_3611->prev = x_3574.get();
          return MakeUnit();
        });
    x_3574->parent = x_3573.get();
    auto x_3613 = (x_3574->parent);
    if (HashtblContain(x_3613->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_3616 = OptionMatch(
          x_3574->prev,
          [&](const auto &x_3615) {
            return NextTotalOrder(HashtblFindExn(x_3613->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_3614) {
            return NextTotalOrder(HashtblFindExn(x_3614->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_3574->meta->ProcTimeTable, std::string("pass_0"), x_3616);
      MetaWriteMetric();
      QueueForcePush(x_3616, x_3574, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_3574->next, [&](const auto &x_3621) { return MakeUnit(); },
        [&](const auto &x_3618) {
          if (HashtblContain(x_3618->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_3619 = HashtblFindExn(x_3618->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_3619, x_3618, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3573->children)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3622 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3622, x_3573, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3608)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3624 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3624, x_3573, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3574->next, [&](const auto &x_3629) { return MakeUnit(); },
        [&](const auto &x_3626) {
          if (HashtblContain(x_3626->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_3627 = HashtblFindExn(x_3626->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_3627, x_3626, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_3630 = (x_3574->parent);
    if (HashtblContain(x_3630->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_3633 = OptionMatch(
          x_3574->prev,
          [&](const auto &x_3632) {
            return NextTotalOrder(HashtblFindExn(x_3630->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_3631) {
            return NextTotalOrder(HashtblFindExn(x_3631->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_3574->meta->ProcTimeTable, std::string("pass_1"), x_3633);
      MetaWriteMetric();
      QueueForcePush(x_3633, x_3574, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_3573->children)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3635 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3635, x_3573, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3608)) {
      if (HashtblContain(x_3573->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3637 = HashtblFindExn(x_3573->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3637, x_3573, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3574->next, [&](const auto &x_3642) { return MakeUnit(); },
        [&](const auto &x_3639) {
          if (HashtblContain(x_3639->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_3640 = HashtblFindExn(x_3639->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_3640, x_3639, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3571(x_3576, ListNthExn(x_3573->children, x_3575), x_3574);
  }
}
Unit replace_node_x_3410(const auto &x_3572, const auto &x_3573, const auto &x_3574) {
  return x_3571(x_3572, x_3573, x_3574);
}
Unit x_3643(const auto &x_3644) {
  ListIter2(x_3644->children, [&](const auto &x_3645, const auto &x_3646) {
    x_3645->parent = x_3644.get();
    x_3646->parent = x_3644.get();
    x_3645->next = x_3646.get();
    x_3646->prev = x_3645.get();
    x_3643(x_3645);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3644->children),
      [&](const auto &x_3648) {
        x_3644->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3647) {
        x_3644->first = x_3647.get();
        x_3647->parent = x_3644.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3644->children),
      [&](const auto &x_3650) {
        x_3644->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3649) {
        x_3644->last = x_3649.get();
        x_3649->parent = x_3644.get();
        x_3643(x_3649);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3408(const auto &x_3644) { return x_3643(x_3644); }
Unit x_3651(const auto &x_3652, const auto &x_3653, const auto &x_3654) {
  auto x_3655 = ListHeadExn(x_3652);
  auto x_3656 = ListTailExn(x_3652);
  if (ListIsEmpty(x_3656)) {
    InputChangeMetric(node_size_x_3384(ListNthExn(x_3653->children, x_3655)));
    auto x_3657 = ListSplitN(x_3653->children, x_3655);
    auto x_3658 = Zro(x_3657);
    auto x_3659 = Fst(x_3657);
    auto x_3660 = ListHeadExn(x_3659);
    auto x_3661 = ListTailExn(x_3659);
    OptionMatch(
        x_3660->prev, [&](const auto &x_3663) { return MakeUnit(); },
        [&](const auto &x_3662) {
          x_3662->next = ToPath(x_3660->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3660->next, [&](const auto &x_3665) { return MakeUnit(); },
        [&](const auto &x_3664) {
          x_3664->prev = ToPath(x_3660->prev);
          return MakeUnit();
        });
    x_3660->meta->alive = false;
    x_3653->children = ListAppend(x_3658, x_3661);
    if (ListIsEmpty(x_3658)) {
      x_3653->first = ToPath(ListHead(x_3661));
    }
    if (ListIsEmpty(x_3661)) {
      x_3653->last = ToPath(ListLast(x_3658));
    }
    OptionMatch(
        x_3660->next, [&](const auto &x_3669) { return MakeUnit(); },
        [&](const auto &x_3666) {
          if (HashtblContain(x_3666->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_3667 = HashtblFindExn(x_3666->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_3667, x_3666, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3653->children)) {
      if (HashtblContain(x_3653->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3670 = HashtblFindExn(x_3653->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3670, x_3653, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3661)) {
      if (HashtblContain(x_3653->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3672 = HashtblFindExn(x_3653->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3672, x_3653, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3660->next, [&](const auto &x_3677) { return MakeUnit(); },
        [&](const auto &x_3674) {
          if (HashtblContain(x_3674->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_3675 = HashtblFindExn(x_3674->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_3675, x_3674, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3653->children)) {
      if (HashtblContain(x_3653->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3678 = HashtblFindExn(x_3653->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3678, x_3653, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3661)) {
      if (HashtblContain(x_3653->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3680 = HashtblFindExn(x_3653->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3680, x_3653, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3660->next, [&](const auto &x_3685) { return MakeUnit(); },
        [&](const auto &x_3682) {
          if (HashtblContain(x_3682->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_3683 = HashtblFindExn(x_3682->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_3683, x_3682, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_3651(x_3656, ListNthExn(x_3653->children, x_3655), x_3654);
  }
}
Unit remove_node_x_3406(const auto &x_3652, const auto &x_3653, const auto &x_3654) {
  return x_3651(x_3652, x_3653, x_3654);
}
Unit x_3686(const auto &x_3687) {
  if ((!QueueIsEmpty())) {
    auto x_3688 = QueuePeek();
    auto x_3689 = Zro(x_3688);
    auto x_3690 = Fst(x_3688);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_3690.n->meta->alive) {
      RFMatch(
          x_3690.rf,
          [&](const auto &x_3693) {
            std::string x_5449 = x_3693;
            if (x_5449 == "bb_1") {
              return eval_stmts_x_3694(x_3690.n);
            } else if (x_5449 == "bb_0") {
              return eval_stmts_x_3695(x_3690.n);
            } else if (x_5449 == "bb_2") {
              return eval_stmts_x_3696(x_3690.n);
            } else {
              Panic();
            }
          },
          [&](const auto &x_3691) {
            auto x_3692 = ReadRef(current_time);
            WriteRef(current_time, x_3689);
            [&]() {
              std::string x_5450 = x_3691;
              if (x_5450 == "pass_0") {
                return eval_stmts_x_3396(x_3690.n);
              } else if (x_5450 == "pass_1") {
                return eval_stmts_x_3397(x_3690.n);
              } else {
                Panic();
              }
            }();
            HashtblSet(x_3690.n->meta->ProcTimeTable, x_3691, ReadRef(current_time));
            WriteRef(current_time, x_3692);
            return MakeUnit();
          });
    }
    auto x_3697 = Zro(QueuePop());
    x_3686(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_3404(const auto &x_3687) { return x_3686(x_3687); }
Unit x_3698(const auto &x_3699, const auto &x_3700, const auto &x_3701) {
  auto x_3702 = ListHeadExn(x_3699);
  auto x_3703 = ListTailExn(x_3699);
  if (ListIsEmpty(x_3703)) {
    InputChangeMetric(node_size_x_3384(x_3701));
    auto x_3704 = ListSplitN(x_3700->children, x_3702);
    auto x_3705 = Zro(x_3704);
    auto x_3706 = Fst(x_3704);
    x_3700->children = ListAppend(x_3705, Cons(x_3701, x_3706));
    if (ListIsEmpty(x_3705)) {
      x_3700->first = x_3701.get();
    }
    if (ListIsEmpty(x_3706)) {
      x_3700->last = x_3701.get();
    }
    OptionMatch(
        ListLast(x_3705),
        [&](const auto &x_3708) {
          x_3701->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3707) {
          x_3701->prev = x_3707.get();
          x_3707->next = x_3701.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3706),
        [&](const auto &x_3710) {
          x_3701->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3709) {
          x_3701->next = x_3709.get();
          x_3709->prev = x_3701.get();
          return MakeUnit();
        });
    x_3701->parent = x_3700.get();
    auto x_3711 = (x_3701->parent);
    if (HashtblContain(x_3711->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_3714 = OptionMatch(
          x_3701->prev,
          [&](const auto &x_3713) {
            return NextTotalOrder(HashtblFindExn(x_3711->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_3712) {
            return NextTotalOrder(HashtblFindExn(x_3712->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_3701->meta->ProcTimeTable, std::string("pass_0"), x_3714);
      MetaWriteMetric();
      QueueForcePush(x_3714, x_3701, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_3701->next, [&](const auto &x_3719) { return MakeUnit(); },
        [&](const auto &x_3716) {
          if (HashtblContain(x_3716->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_3717 = HashtblFindExn(x_3716->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_3717, x_3716, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3700->children)) {
      if (HashtblContain(x_3700->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3720 = HashtblFindExn(x_3700->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3720, x_3700, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3706)) {
      if (HashtblContain(x_3700->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_3722 = HashtblFindExn(x_3700->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_3722, x_3700, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3701->next, [&](const auto &x_3727) { return MakeUnit(); },
        [&](const auto &x_3724) {
          if (HashtblContain(x_3724->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_3725 = HashtblFindExn(x_3724->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_3725, x_3724, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_3728 = (x_3701->parent);
    if (HashtblContain(x_3728->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_3731 = OptionMatch(
          x_3701->prev,
          [&](const auto &x_3730) {
            return NextTotalOrder(HashtblFindExn(x_3728->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_3729) {
            return NextTotalOrder(HashtblFindExn(x_3729->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_3701->meta->ProcTimeTable, std::string("pass_1"), x_3731);
      MetaWriteMetric();
      QueueForcePush(x_3731, x_3701, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_3700->children)) {
      if (HashtblContain(x_3700->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3733 = HashtblFindExn(x_3700->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3733, x_3700, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3706)) {
      if (HashtblContain(x_3700->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_3735 = HashtblFindExn(x_3700->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_3735, x_3700, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3701->next, [&](const auto &x_3740) { return MakeUnit(); },
        [&](const auto &x_3737) {
          if (HashtblContain(x_3737->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_3738 = HashtblFindExn(x_3737->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_3738, x_3737, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_3698(x_3703, ListNthExn(x_3700->children, x_3702), x_3701);
  }
}
Unit add_node_x_3403(const auto &x_3699, const auto &x_3700, const auto &x_3701) {
  return x_3698(x_3699, x_3700, x_3701);
}
Unit x_3741(const auto &x_3742) {
  ListIter2(x_3742->children, [&](const auto &x_3743, const auto &x_3744) {
    x_3743->parent = x_3742.get();
    x_3744->parent = x_3742.get();
    x_3743->next = x_3744.get();
    x_3744->prev = x_3743.get();
    x_3741(x_3743);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3742->children),
      [&](const auto &x_3746) {
        x_3742->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3745) {
        x_3742->first = x_3745.get();
        x_3745->parent = x_3742.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3742->children),
      [&](const auto &x_3748) {
        x_3742->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3747) {
        x_3742->last = x_3747.get();
        x_3747->parent = x_3742.get();
        x_3741(x_3747);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3401(const auto &x_3742) { return x_3741(x_3742); }
Unit eval_stmts_x_3397(const auto &x_3749) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_3749->meta->BBTimeTable, std::string("bb_2"), ReadRef(current_time));
  eval_stmts_x_3696(x_3749);
  ListIter(x_3749->children, [&](const auto &x_3750) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_3397(x_3750);
    return HashtblAddExn(x_3750->meta->ProcTimeTable, std::string("pass_1"), ReadRef(current_time));
  });
  return MakeUnit();
}
Unit eval_stmts_x_3396(const auto &x_3751) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_3751->meta->BBTimeTable, std::string("bb_1"), ReadRef(current_time));
  eval_stmts_x_3694(x_3751);
  ListIter(x_3751->children, [&](const auto &x_3752) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_3396(x_3752);
    return HashtblAddExn(x_3752->meta->ProcTimeTable, std::string("pass_0"), ReadRef(current_time));
  });
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_3751->meta->BBTimeTable, std::string("bb_0"), ReadRef(current_time));
  eval_stmts_x_3695(x_3751);
  return MakeUnit();
}
Unit x_3753(const auto &x_3754) {
  ListIter2(x_3754->children, [&](const auto &x_3755, const auto &x_3756) {
    x_3755->parent = x_3754.get();
    x_3756->parent = x_3754.get();
    x_3755->next = x_3756.get();
    x_3756->prev = x_3755.get();
    x_3753(x_3755);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3754->children),
      [&](const auto &x_3758) {
        x_3754->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3757) {
        x_3754->first = x_3757.get();
        x_3757->parent = x_3754.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3754->children),
      [&](const auto &x_3760) {
        x_3754->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3759) {
        x_3754->last = x_3759.get();
        x_3759->parent = x_3754.get();
        x_3753(x_3759);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3393(const auto &x_3754) { return x_3753(x_3754); }
int64_t x_3761(const auto &x_3762) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3762->children, [&](const auto &x_3763) { return x_3761(x_3763); }));
}
int64_t node_size_x_3384(const auto &x_3762) { return x_3761(x_3762); }
int64_t x_3764(const auto &x_3765) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3765->children, [&](const auto &x_3766) { return x_3764(x_3766); }));
}
int64_t layout_size_x_3383(const auto &x_3765) { return x_3764(x_3765); }
LayoutNode x_3767(const auto &x_3768) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_3768)),
                                [&](const auto &x_3769) { return x_3767(x_3769); }));
}
LayoutNode json_to_layout_node_x_3382(const auto &x_3768) { return x_3767(x_3768); }
Node x_3770(const auto &x_3771) {
  return MakeNode(x_3771->name, x_3771->attr, x_3771->prop, x_3771->extern_id,
                  ListMap(x_3771->children, [&](const auto &x_3772) { return x_3770(x_3772); }));
}
Node node_to_fs_node_x_3381(const auto &x_3771) { return x_3770(x_3771); }
Node x_3773(const auto &x_3774) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_3774)), JsonToDict(JsonMember(std::string("attributes"), x_3774)),
      JsonToDict(JsonMember(std::string("properties"), x_3774)), JsonToInt(JsonMember(std::string("id"), x_3774)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_3774)),
              [&](const auto &x_3775) { return x_3773(x_3775); }));
}
Node json_to_node_aux_x_3380(const auto &x_3774) { return x_3773(x_3774); }
int main() {
  WithOutFile(std::string("wikipedia_idle.out"), [&](const auto &x_3385) {
    PrintEndline(std::string("RUNNING PQ_D"));
    return WithInFile(std::string("command.json"), [&](const auto &x_3386) {
      auto x_3387 = MakeRef(static_cast<int64_t>(0));
      auto x_3388 = FreshMetric();
      auto x_3389 = JsonOfString(InputLine(x_3386));
      auto x_3390 = JsonOfString(InputLine(x_3386));
      auto x_3391 = MakeStack();
      PushStack(x_3391, x_3389);
      PushStack(x_3391, x_3390);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3389)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3390)), std::string("layout_init")));
      auto x_3394 = [&]() {
        auto x_3392 = json_to_node_aux_x_3380(JsonMember(std::string("node"), x_3389));
        x_3392->parent = nullptr;
        x_3392->prev = nullptr;
        x_3392->next = nullptr;
        set_children_relation_x_3393(x_3392);
        return x_3392;
      }();
      auto x_3395 = json_to_layout_node_x_3382(JsonMember(std::string("node"), x_3390));
      OutputChangeMetric(layout_size_x_3383(x_3395));
      InputChangeMetric(node_size_x_3384(x_3394));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_3396(x_3394);
      HashtblAddExn(x_3394->meta->ProcTimeTable, std::string("pass_0"), ReadRef(current_time));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_3397(x_3394);
      HashtblAddExn(x_3394->meta->ProcTimeTable, std::string("pass_1"), ReadRef(current_time));
      JsonToChannel(x_3385, [&]() {
        auto x_5451 = FreshJson();
        WriteJson(x_5451, std::string("name"), std::string("PQ_D"));
        WriteJson(x_5451, std::string("diff_num"), ReadRef(x_3387));
        WriteJson(x_5451, std::string("read_count"), MetricReadCount());
        WriteJson(x_5451, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_5451, std::string("write_count"), MetricWriteCount());
        WriteJson(x_5451, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_5451, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_5451, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_5451, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_5451, std::string("html"), std::string(""));
        WriteJson(x_5451, std::string("command"), StackToList(x_3391));
        return x_5451;
      }());
      OutputString(x_3385, std::string("\n"));
      ClearStack(x_3391);
      WriteRef(x_3387, IntAdd(ReadRef(x_3387), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_3386, [&](const auto &x_3398) {
        auto x_3399 = JsonOfString(x_3398);
        PushStack(x_3391, x_3399);
        std::string x_5453 = JsonToString(JsonMember(std::string("name"), x_3399));
        if (x_5453 == "add") {
          return add_node_x_3403(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                         [&](const auto &x_3402) { return JsonToInt(x_3402); }),
                                 x_3394, [&]() {
                                   auto x_3400 = json_to_node_aux_x_3380(JsonMember(std::string("node"), x_3399));
                                   x_3400->parent = nullptr;
                                   x_3400->prev = nullptr;
                                   x_3400->next = nullptr;
                                   set_children_relation_x_3401(x_3400);
                                   return x_3400;
                                 }());
        } else if (x_5453 == "recalculate") {
          recalculate_internal_x_3404(MakeUnit());
          JsonToChannel(x_3385, [&]() {
            auto x_5452 = FreshJson();
            WriteJson(x_5452, std::string("name"), std::string("PQ_D"));
            WriteJson(x_5452, std::string("diff_num"), ReadRef(x_3387));
            WriteJson(x_5452, std::string("read_count"), MetricReadCount());
            WriteJson(x_5452, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_5452, std::string("write_count"), MetricWriteCount());
            WriteJson(x_5452, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_5452, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_5452, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_5452, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_5452, std::string("html"), std::string(""));
            WriteJson(x_5452, std::string("command"), StackToList(x_3391));
            return x_5452;
          }());
          OutputString(x_3385, std::string("\n"));
          ClearStack(x_3391);
          WriteRef(x_3387, IntAdd(ReadRef(x_3387), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5453 == "remove") {
          return remove_node_x_3406(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                            [&](const auto &x_3405) { return JsonToInt(x_3405); }),
                                    x_3394, MakeUnit());
        } else if (x_5453 == "replace") {
          return replace_node_x_3410(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                             [&](const auto &x_3409) { return JsonToInt(x_3409); }),
                                     x_3394, [&]() {
                                       auto x_3407 = json_to_node_aux_x_3380(JsonMember(std::string("node"), x_3399));
                                       x_3407->parent = nullptr;
                                       x_3407->prev = nullptr;
                                       x_3407->next = nullptr;
                                       set_children_relation_x_3408(x_3407);
                                       return x_3407;
                                     }());
        } else if (x_5453 == "replace_value") {
          return replace_value_x_3412(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                              [&](const auto &x_3411) { return JsonToInt(x_3411); }),
                                      x_3394,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3399)),
                                                        JsonToString(JsonMember(std::string("key"), x_3399))),
                                               JsonToValue(JsonMember(std::string("value"), x_3399))));
        } else if (x_5453 == "delete_value") {
          return delete_value_x_3414(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                             [&](const auto &x_3413) { return JsonToInt(x_3413); }),
                                     x_3394,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_3399)),
                                              JsonToString(JsonMember(std::string("key"), x_3399))));
        } else if (x_5453 == "insert_value") {
          return insert_value_x_3416(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                             [&](const auto &x_3415) { return JsonToInt(x_3415); }),
                                     x_3394,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3399)),
                                                       JsonToString(JsonMember(std::string("key"), x_3399))),
                                              JsonToValue(JsonMember(std::string("value"), x_3399))));
        } else if (x_5453 == "layout_remove") {
          return remove_layout_node_x_3418(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                                   [&](const auto &x_3417) { return JsonToInt(x_3417); }),
                                           x_3395, MakeUnit());
        } else if (x_5453 == "layout_add") {
          return add_layout_node_x_3420(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                                [&](const auto &x_3419) { return JsonToInt(x_3419); }),
                                        x_3395, json_to_layout_node_x_3382(JsonMember(std::string("node"), x_3399)));
        } else if (x_5453 == "layout_replace") {
          return replace_layout_node_x_3422(ListMap(JsonToList(JsonMember(std::string("path"), x_3399)),
                                                    [&](const auto &x_3421) { return JsonToInt(x_3421); }),
                                            x_3395,
                                            json_to_layout_node_x_3382(JsonMember(std::string("node"), x_3399)));
        } else if (x_5453 == "layout_info_changed") {
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