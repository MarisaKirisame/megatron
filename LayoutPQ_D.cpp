#include "header.h"
struct MetaNode {
  std::optional<TotalOrder> bb_1_bb_time_table;
  std::optional<TotalOrder> bb_0_bb_time_table;
  std::optional<TotalOrder> bb_2_bb_time_table;
  std::optional<TotalOrder> pass_0_proc_time_table;
  std::optional<TotalOrder> pass_1_proc_time_table;
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
Unit var_modified_x_4124(const auto &x_4126);
auto eval_expr_x_4121(const auto &x_4144);
Unit var_modified_x_4119(const auto &x_4221);
auto eval_expr_x_4116(const auto &x_4226);
Unit var_modified_x_4114(const auto &x_4243);
auto eval_expr_x_4111(const auto &x_4254);
Unit var_modified_x_4109(const auto &x_4259);
auto eval_expr_x_4106(const auto &x_4270);
Unit var_modified_x_4104(const auto &x_4279);
auto eval_expr_x_4101(const auto &x_4284);
Unit var_modified_x_4099(const auto &x_4285);
auto eval_expr_x_4096(const auto &x_4290);
Unit var_modified_x_4094(const auto &x_4295);
auto eval_expr_x_4091(const auto &x_4303);
Unit var_modified_x_4089(const auto &x_4314);
auto eval_expr_x_4086(const auto &x_4319);
Unit var_modified_x_4084(const auto &x_4324);
auto eval_expr_x_4081(const auto &x_4332);
Unit var_modified_x_4079(const auto &x_4343);
auto eval_expr_x_4076(const auto &x_4351);
Unit var_modified_x_4074(const auto &x_4376);
auto eval_expr_x_4071(const auto &x_4387);
Unit var_modified_x_4069(const auto &x_4412);
auto eval_expr_x_4066(const auto &x_4417);
Unit var_modified_x_4064(const auto &x_4420);
auto eval_expr_x_4061(const auto &x_4430);
Unit var_modified_x_4059(const auto &x_4439);
auto eval_expr_x_4056(const auto &x_4449);
Unit var_modified_x_4054(const auto &x_4458);
auto eval_expr_x_4051(const auto &x_4466);
Unit var_modified_x_4049(const auto &x_4469);
auto eval_expr_x_4046(const auto &x_4477);
Unit var_modified_x_4044(const auto &x_4480);
auto eval_expr_x_4041(const auto &x_4491);
Unit var_modified_x_4039(const auto &x_4494);
auto eval_expr_x_4036(const auto &x_4505);
Unit var_modified_x_4032(const auto &x_4508);
auto eval_expr_x_4029(const auto &x_4520);
Unit var_modified_x_4027(const auto &x_4549);
auto eval_expr_x_4024(const auto &x_4561);
Unit var_modified_x_4022(const auto &x_4574);
auto eval_expr_x_4019(const auto &x_4586);
Unit var_modified_x_4017(const auto &x_4595);
auto eval_expr_x_4014(const auto &x_4600);
Unit var_modified_x_4012(const auto &x_4609);
auto eval_expr_x_4009(const auto &x_4617);
Unit var_modified_x_4007(const auto &x_4762);
auto eval_expr_x_4004(const auto &x_4767);
Unit var_modified_x_4002(const auto &x_4816);
auto eval_expr_x_3999(const auto &x_4824);
Unit var_modified_x_3997(const auto &x_4827);
auto eval_expr_x_3994(const auto &x_4832);
Unit var_modified_x_3992(const auto &x_4841);
auto eval_expr_x_3989(const auto &x_4853);
Unit var_modified_x_3987(const auto &x_4862);
auto eval_expr_x_3984(const auto &x_4874);
Unit var_modified_x_3982(const auto &x_4883);
auto eval_expr_x_3979(const auto &x_4893);
Unit var_modified_x_3977(const auto &x_4906);
auto eval_expr_x_3974(const auto &x_4911);
Unit var_modified_x_3972(const auto &x_4920);
auto eval_expr_x_3969(const auto &x_4928);
Unit var_modified_x_3967(const auto &x_5081);
auto eval_expr_x_3964(const auto &x_5086);
Unit var_modified_x_3962(const auto &x_5091);
auto eval_expr_x_3959(const auto &x_5096);
Unit var_modified_x_3957(const auto &x_5145);
auto eval_expr_x_3954(const auto &x_5150);
Unit var_modified_x_3952(const auto &x_5163);
auto eval_expr_x_3949(const auto &x_5171);
Unit var_modified_x_3945(const auto &x_5174);
auto eval_expr_x_3942(const auto &x_5181);
Unit var_modified_x_3940(const auto &x_5198);
auto eval_expr_x_3937(const auto &x_5203);
Unit var_modified_x_3935(const auto &x_5212);
auto eval_expr_x_3932(const auto &x_5220);
Unit var_modified_x_3930(const auto &x_5273);
auto eval_expr_x_3927(const auto &x_5283);
Unit var_modified_x_3925(const auto &x_5308);
auto eval_expr_x_3922(const auto &x_5315);
Unit var_modified_x_3920(const auto &x_5324);
auto eval_expr_x_3917(const auto &x_5332);
Unit var_modified_x_3915(const auto &x_5385);
auto eval_expr_x_3912(const auto &x_5395);
Unit var_modified_x_3910(const auto &x_5416);
auto eval_expr_x_3907(const auto &x_5421);
Unit var_modified_x_3905(const auto &x_5442);
auto eval_expr_x_3902(const auto &x_5447);
Unit var_modified_x_3900(const auto &x_5460);
auto eval_expr_x_3897(const auto &x_5468);
Unit var_modified_x_3895(const auto &x_5489);
auto eval_expr_x_3892(const auto &x_5494);
Unit var_modified_x_3890(const auto &x_5499);
auto eval_expr_x_3887(const auto &x_5504);
Unit eval_stmts_x_3803(const auto &x_3885);
Unit eval_stmts_x_3802(const auto &x_3947);
Unit eval_stmts_x_3801(const auto &x_4034);
Unit x_3530(const auto &x_3531, const auto &x_3532, const auto &x_3533);
Unit x_3537(const auto &x_3538, const auto &x_3539, const auto &x_3540);
Unit x_3544(const auto &x_3545, const auto &x_3546, const auto &x_3547);
Unit x_3551(const auto &x_3552, const auto &x_3553, const auto &x_3554);
Unit x_3586(const auto &x_3587, const auto &x_3588, const auto &x_3589);
Unit x_3619(const auto &x_3620, const auto &x_3621, const auto &x_3622);
Unit x_3678(const auto &x_3679, const auto &x_3680, const auto &x_3681);
Unit x_3750(const auto &x_3751);
Unit x_3758(const auto &x_3759, const auto &x_3760, const auto &x_3761);
Unit x_3793(const auto &x_3794);
Unit x_3805(const auto &x_3806, const auto &x_3807, const auto &x_3808);
Unit x_3848(const auto &x_3849);
Unit eval_stmts_x_3503(const auto &x_3856);
Unit eval_stmts_x_3502(const auto &x_3859);
Unit x_3862(const auto &x_3863);
int64_t x_3870(const auto &x_3871);
int64_t x_3873(const auto &x_3874);
LayoutNode x_3876(const auto &x_3877);
Node x_3879(const auto &x_3880);
Node x_3882(const auto &x_3883);
Unit var_modified_x_4124(const auto &x_4126) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4127) {
    auto x_5509 = [&](const auto &x_4128) {
      if (IsSome(x_4128->meta->bb_0_bb_time_table)) {
        auto x_4129 = UnSome(x_4128->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4129, x_4128, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5509(x_4126);
    MakeUnit();
    auto x_5510 = [&](const auto &x_4133) {
      if (IsSome(x_4133->meta->bb_0_bb_time_table)) {
        auto x_4134 = UnSome(x_4133->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4134, x_4133, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4126->next, [&](const auto &x_4132) { return MakeUnit(); },
        [&](const auto &x_4131) {
          auto x_5513 = x_5510;
          x_5513(x_4131);
          return MakeUnit();
        });
    auto x_5511 = [&](const auto &x_4136) {
      if (IsSome(x_4136->meta->bb_2_bb_time_table)) {
        auto x_4137 = UnSome(x_4136->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4137, x_4136, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5511(x_4126);
    MakeUnit();
    auto x_5512 = [&](const auto &x_4141) {
      if (IsSome(x_4141->meta->bb_2_bb_time_table)) {
        auto x_4142 = UnSome(x_4141->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4142, x_4141, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4126->next, [&](const auto &x_4140) { return MakeUnit(); },
        [&](const auto &x_4139) {
          auto x_5514 = x_5512;
          x_5514(x_4139);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4121(const auto &x_4144) {
  if (eq(x_4144->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_4144->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_4144->parent != nullptr) &&
          (eq((x_4144->parent)->var_display, std::string("flex")) ||
           eq((x_4144->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_4144->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_4144->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_4144->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_4144->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_4144, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_4144, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_4144->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_4144->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_4144->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_4144->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_4144->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_4144->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_4144->var_display, std::string("list-item"))) {
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
Unit var_modified_x_4119(const auto &x_4221) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4222) {
    ListIter(x_4221->children, [&](const auto &x_4223) {
      if (IsSome(x_4223->meta->bb_1_bb_time_table)) {
        auto x_4224 = UnSome(x_4223->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4224, x_4223, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4116(const auto &x_4226) {
  return (((!(x_4226->parent != nullptr)) || (x_4226->parent)->var_visible) &&
          (neq(x_4226->var_display, std::string("none")) && ((!x_4226->var_inside_svg) && (!x_4226->var_disabled))));
}
Unit var_modified_x_4114(const auto &x_4243) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4244) {
    auto x_5515 = [&](const auto &x_4245) {
      if (IsSome(x_4245->meta->bb_1_bb_time_table)) {
        auto x_4246 = UnSome(x_4245->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4246, x_4245, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5515(x_4243);
    MakeUnit();
    ListIter(x_4243->children, [&](const auto &x_4248) {
      if (IsSome(x_4248->meta->bb_1_bb_time_table)) {
        auto x_4249 = UnSome(x_4248->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4249, x_4248, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    });
    auto x_5516 = [&](const auto &x_4251) {
      if (IsSome(x_4251->meta->bb_0_bb_time_table)) {
        auto x_4252 = UnSome(x_4251->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4252, x_4251, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5516(x_4243);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4111(const auto &x_4254) {
  if (eq(x_4254->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_4254->parent != nullptr) && (x_4254->parent)->var_disabled);
  }
}
Unit var_modified_x_4109(const auto &x_4259) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4260) {
    auto x_5517 = [&](const auto &x_4261) {
      if (IsSome(x_4261->meta->bb_1_bb_time_table)) {
        auto x_4262 = UnSome(x_4261->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4262, x_4261, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5517(x_4259);
    MakeUnit();
    ListIter(x_4259->children, [&](const auto &x_4264) {
      if (IsSome(x_4264->meta->bb_1_bb_time_table)) {
        auto x_4265 = UnSome(x_4264->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4265, x_4264, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    });
    auto x_5518 = [&](const auto &x_4267) {
      if (IsSome(x_4267->meta->bb_0_bb_time_table)) {
        auto x_4268 = UnSome(x_4267->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4268, x_4267, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5518(x_4259);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4106(const auto &x_4270) {
  return ((x_4270->parent != nullptr) && ((x_4270->parent)->var_is_svg_block || (x_4270->parent)->var_inside_svg));
}
Unit var_modified_x_4104(const auto &x_4279) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4280) {
    ListIter(x_4279->children, [&](const auto &x_4281) {
      if (IsSome(x_4281->meta->bb_1_bb_time_table)) {
        auto x_4282 = UnSome(x_4281->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4282, x_4281, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4101(const auto &x_4284) { return eq(x_4284->name, std::string("svg")); }
Unit var_modified_x_4099(const auto &x_4285) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4286) {
    auto x_5519 = [&](const auto &x_4287) {
      if (IsSome(x_4287->meta->bb_0_bb_time_table)) {
        auto x_4288 = UnSome(x_4287->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4288, x_4287, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5519(x_4285);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4096(const auto &x_4290) { return neq(x_4290->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_4094(const auto &x_4295) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4296) {
    auto x_5520 = [&](const auto &x_4297) {
      if (IsSome(x_4297->meta->bb_1_bb_time_table)) {
        auto x_4298 = UnSome(x_4297->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4298, x_4297, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5520(x_4295);
    MakeUnit();
    auto x_5521 = [&](const auto &x_4300) {
      if (IsSome(x_4300->meta->bb_0_bb_time_table)) {
        auto x_4301 = UnSome(x_4300->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4301, x_4300, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5521(x_4295);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4091(const auto &x_4303) {
  if (!HasAttr(x_4303, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_4303, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_4303, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_4303, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_4089(const auto &x_4314) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4315) {
    auto x_5522 = [&](const auto &x_4316) {
      if (IsSome(x_4316->meta->bb_0_bb_time_table)) {
        auto x_4317 = UnSome(x_4316->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4317, x_4316, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5522(x_4314);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4086(const auto &x_4319) { return neq(x_4319->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_4084(const auto &x_4324) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4325) {
    auto x_5523 = [&](const auto &x_4326) {
      if (IsSome(x_4326->meta->bb_1_bb_time_table)) {
        auto x_4327 = UnSome(x_4326->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4327, x_4326, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5523(x_4324);
    MakeUnit();
    auto x_5524 = [&](const auto &x_4329) {
      if (IsSome(x_4329->meta->bb_0_bb_time_table)) {
        auto x_4330 = UnSome(x_4329->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4330, x_4329, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5524(x_4324);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4081(const auto &x_4332) {
  if (!HasAttr(x_4332, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_4332, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_4332, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_4332, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_4079(const auto &x_4343) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4344) {
    ListIter(x_4343->children, [&](const auto &x_4345) {
      if (IsSome(x_4345->meta->bb_0_bb_time_table)) {
        auto x_4346 = UnSome(x_4345->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4346, x_4345, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    });
    ListIter(x_4343->children, [&](const auto &x_4348) {
      if (IsSome(x_4348->meta->bb_2_bb_time_table)) {
        auto x_4349 = UnSome(x_4348->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4349, x_4348, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4076(const auto &x_4351) {
  if ((x_4351->parent != nullptr) &&
      (eq((x_4351->parent)->var_display, std::string("flex")) ||
       eq((x_4351->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_4351->parent)->var_flex_direction, std::string("column")) ||
        eq((x_4351->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4074(const auto &x_4376) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4377) {
    ListIter(x_4376->children, [&](const auto &x_4378) {
      if (IsSome(x_4378->meta->bb_0_bb_time_table)) {
        auto x_4379 = UnSome(x_4378->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4379, x_4378, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    });
    auto x_5525 = [&](const auto &x_4381) {
      if (IsSome(x_4381->meta->bb_2_bb_time_table)) {
        auto x_4382 = UnSome(x_4381->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4382, x_4381, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5525(x_4376);
    MakeUnit();
    ListIter(x_4376->children, [&](const auto &x_4384) {
      if (IsSome(x_4384->meta->bb_2_bb_time_table)) {
        auto x_4385 = UnSome(x_4384->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4385, x_4384, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4071(const auto &x_4387) {
  if ((x_4387->parent != nullptr) &&
      (eq((x_4387->parent)->var_display, std::string("flex")) ||
       eq((x_4387->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_4387->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_4069(const auto &x_4412) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4413) {
    ListIter(x_4412->children, [&](const auto &x_4414) {
      if (IsSome(x_4414->meta->bb_1_bb_time_table)) {
        auto x_4415 = UnSome(x_4414->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4415, x_4414, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_4066(const auto &x_4417) {
  if (HasProp(x_4417, std::string("flex-direction"))) {
    return GetProp<std::string>(x_4417, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_4064(const auto &x_4420) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4421) {
    auto x_5526 = [&](const auto &x_4424) {
      if (IsSome(x_4424->meta->bb_1_bb_time_table)) {
        auto x_4425 = UnSome(x_4424->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4425, x_4424, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4420->next, [&](const auto &x_4423) { return MakeUnit(); },
        [&](const auto &x_4422) {
          auto x_5528 = x_5526;
          x_5528(x_4422);
          return MakeUnit();
        });
    auto x_5527 = [&](const auto &x_4427) {
      if (IsSome(x_4427->meta->bb_2_bb_time_table)) {
        auto x_4428 = UnSome(x_4427->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4428, x_4427, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5527(x_4420);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4061(const auto &x_4430) {
  return plus((x_4430->prev != nullptr) ? ((x_4430->prev)->var_flex_shrink_sum) : (0.), x_4430->var_flex_shrink);
}
Unit var_modified_x_4059(const auto &x_4439) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4440) {
    auto x_5529 = [&](const auto &x_4443) {
      if (IsSome(x_4443->meta->bb_1_bb_time_table)) {
        auto x_4444 = UnSome(x_4443->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4444, x_4443, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4439->next, [&](const auto &x_4442) { return MakeUnit(); },
        [&](const auto &x_4441) {
          auto x_5531 = x_5529;
          x_5531(x_4441);
          return MakeUnit();
        });
    auto x_5530 = [&](const auto &x_4446) {
      if (IsSome(x_4446->meta->bb_2_bb_time_table)) {
        auto x_4447 = UnSome(x_4446->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4447, x_4446, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5530(x_4439);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4056(const auto &x_4449) {
  return plus((x_4449->prev != nullptr) ? ((x_4449->prev)->var_flex_grow_sum) : (0.), x_4449->var_flex_grow);
}
Unit var_modified_x_4054(const auto &x_4458) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4459) {
    auto x_5532 = [&](const auto &x_4460) {
      if (IsSome(x_4460->meta->bb_1_bb_time_table)) {
        auto x_4461 = UnSome(x_4460->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4461, x_4460, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5532(x_4458);
    MakeUnit();
    auto x_5533 = [&](const auto &x_4463) {
      if (IsSome(x_4463->meta->bb_2_bb_time_table)) {
        auto x_4464 = UnSome(x_4463->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4464, x_4463, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5533(x_4458);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4051(const auto &x_4466) {
  if (HasProp(x_4466, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_4466, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_4049(const auto &x_4469) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4470) {
    auto x_5534 = [&](const auto &x_4471) {
      if (IsSome(x_4471->meta->bb_1_bb_time_table)) {
        auto x_4472 = UnSome(x_4471->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4472, x_4471, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5534(x_4469);
    MakeUnit();
    auto x_5535 = [&](const auto &x_4474) {
      if (IsSome(x_4474->meta->bb_2_bb_time_table)) {
        auto x_4475 = UnSome(x_4474->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4475, x_4474, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5535(x_4469);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4046(const auto &x_4477) {
  if (HasProp(x_4477, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_4477, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_4044(const auto &x_4480) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4481) {
    auto x_5536 = [&](const auto &x_4482) {
      if (IsSome(x_4482->meta->bb_1_bb_time_table)) {
        auto x_4483 = UnSome(x_4482->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4483, x_4482, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5536(x_4480);
    MakeUnit();
    auto x_5537 = [&](const auto &x_4485) {
      if (IsSome(x_4485->meta->bb_0_bb_time_table)) {
        auto x_4486 = UnSome(x_4485->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4486, x_4485, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5537(x_4480);
    MakeUnit();
    auto x_5538 = [&](const auto &x_4488) {
      if (IsSome(x_4488->meta->bb_2_bb_time_table)) {
        auto x_4489 = UnSome(x_4488->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4489, x_4488, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5538(x_4480);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4041(const auto &x_4491) {
  if (HasProp(x_4491, std::string("position"))) {
    return GetProp<std::string>(x_4491, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_4039(const auto &x_4494) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4495) {
    auto x_5539 = [&](const auto &x_4496) {
      if (IsSome(x_4496->meta->bb_1_bb_time_table)) {
        auto x_4497 = UnSome(x_4496->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4497, x_4496, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    };
    x_5539(x_4494);
    MakeUnit();
    ListIter(x_4494->children, [&](const auto &x_4499) {
      if (IsSome(x_4499->meta->bb_1_bb_time_table)) {
        auto x_4500 = UnSome(x_4499->meta->bb_1_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4500, x_4499, MakeRecomputeBB(std::string("bb_1")));
      } else {
        return MakeUnit();
      }
    });
    auto x_5540 = [&](const auto &x_4502) {
      if (IsSome(x_4502->meta->bb_0_bb_time_table)) {
        auto x_4503 = UnSome(x_4502->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4503, x_4502, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5540(x_4494);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4036(const auto &x_4505) {
  if (HasProp(x_4505, std::string("display"))) {
    return GetProp<std::string>(x_4505, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_4032(const auto &x_4508) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4509) {
    auto x_5541 = [&](const auto &x_4512) {
      if (IsSome(x_4512->meta->bb_0_bb_time_table)) {
        auto x_4513 = UnSome(x_4512->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4513, x_4512, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    if (x_4508->next == nullptr) {
      auto x_5543 = x_5541;
      OptionMatch(
          x_4508->parent, [&](const auto &x_4511) { return MakeUnit(); },
          [&](const auto &x_4510) {
            auto x_5545 = x_5543;
            x_5545(x_4510);
            return MakeUnit();
          });
    }
    auto x_5542 = [&](const auto &x_4517) {
      if (IsSome(x_4517->meta->bb_0_bb_time_table)) {
        auto x_4518 = UnSome(x_4517->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4518, x_4517, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4508->next, [&](const auto &x_4516) { return MakeUnit(); },
        [&](const auto &x_4515) {
          auto x_5544 = x_5542;
          x_5544(x_4515);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4029(const auto &x_4520) {
  if (x_4520->prev != nullptr) {
    if (x_4520->var_line_break) {
      return plus((x_4520->prev)->var_finished_intrinsic_height_sum,
                  plus((x_4520->prev)->var_intrinsic_current_line_height, x_4520->var_intrinsic_height_external));
    } else {
      return (x_4520->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_4520->var_line_break) {
      return x_4520->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_4027(const auto &x_4549) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4550) {
    auto x_5546 = [&](const auto &x_4553) {
      if (IsSome(x_4553->meta->bb_0_bb_time_table)) {
        auto x_4554 = UnSome(x_4553->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4554, x_4553, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    if (x_4549->next == nullptr) {
      auto x_5548 = x_5546;
      OptionMatch(
          x_4549->parent, [&](const auto &x_4552) { return MakeUnit(); },
          [&](const auto &x_4551) {
            auto x_5550 = x_5548;
            x_5550(x_4551);
            return MakeUnit();
          });
    }
    auto x_5547 = [&](const auto &x_4558) {
      if (IsSome(x_4558->meta->bb_0_bb_time_table)) {
        auto x_4559 = UnSome(x_4558->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4559, x_4558, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4549->next, [&](const auto &x_4557) { return MakeUnit(); },
        [&](const auto &x_4556) {
          auto x_5549 = x_5547;
          x_5549(x_4556);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_4024(const auto &x_4561) {
  if (x_4561->var_line_break) {
    return 0.;
  } else {
    return max(x_4561->var_intrinsic_height_external,
               (x_4561->prev != nullptr) ? ((x_4561->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_4022(const auto &x_4574) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4575) {
    auto x_5551 = [&](const auto &x_4578) {
      if (IsSome(x_4578->meta->bb_0_bb_time_table)) {
        auto x_4579 = UnSome(x_4578->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4579, x_4578, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4574->next, [&](const auto &x_4577) { return MakeUnit(); },
        [&](const auto &x_4576) {
          auto x_5553 = x_5551;
          x_5553(x_4576);
          return MakeUnit();
        });
    auto x_5552 = [&](const auto &x_4583) {
      if (IsSome(x_4583->meta->bb_2_bb_time_table)) {
        auto x_4584 = UnSome(x_4583->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4584, x_4583, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    if (x_4574->next == nullptr) {
      auto x_5554 = x_5552;
      OptionMatch(
          x_4574->parent, [&](const auto &x_4582) { return MakeUnit(); },
          [&](const auto &x_4581) {
            auto x_5555 = x_5554;
            x_5555(x_4581);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_4019(const auto &x_4586) {
  return plus((x_4586->prev != nullptr) ? ((x_4586->prev)->var_intrinsic_height_sum) : (0.),
              x_4586->var_intrinsic_height_external);
}
Unit var_modified_x_4017(const auto &x_4595) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4596) {
    auto x_5556 = [&](const auto &x_4597) {
      if (IsSome(x_4597->meta->bb_0_bb_time_table)) {
        auto x_4598 = UnSome(x_4597->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4598, x_4597, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5556(x_4595);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4014(const auto &x_4600) {
  if (eq(x_4600->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4600->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_4012(const auto &x_4609) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4610) {
    auto x_5557 = [&](const auto &x_4611) {
      if (IsSome(x_4611->meta->bb_0_bb_time_table)) {
        auto x_4612 = UnSome(x_4611->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4612, x_4611, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5557(x_4609);
    MakeUnit();
    auto x_5558 = [&](const auto &x_4614) {
      if (IsSome(x_4614->meta->bb_2_bb_time_table)) {
        auto x_4615 = UnSome(x_4614->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4615, x_4614, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5558(x_4609);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4009(const auto &x_4617) {
  if (eq(x_4617->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_4617->var_inside_svg) {
      return 0.;
    } else {
      if (x_4617->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4617->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_4617->var_height_expr, std::string("%"))) &&
             neq(x_4617->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_4617->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_4617->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_4617->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_4617->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_4617->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_4617->var_children_intrinsic_height,
              (eq(x_4617->name, std::string("#text")))
                  ? (10.)
                  : ((x_4617->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4617->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_4617->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_4617->name, std::string("svg")))
                                              ? ((x_4617->var_has_height_attr &&
                                                  string_is_float(x_4617->var_height_attr_expr))
                                                     ? (string_to_float(x_4617->var_height_attr_expr))
                                                     : ((HasAttr(x_4617, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_4617, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_4617,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_4617->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_4617->name, std::string("IMG")))
                                                     ? ((x_4617->var_has_height_attr)
                                                            ? (string_to_float(x_4617->var_height_attr_expr))
                                                            : ((HasAttr(x_4617, std::string("image_height")) &&
                                                                (!x_4617->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_4617, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_4617,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_4617->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4617,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4617,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_4617->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_4617->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_4007(const auto &x_4762) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4763) {
    auto x_5559 = [&](const auto &x_4764) {
      if (IsSome(x_4764->meta->bb_2_bb_time_table)) {
        auto x_4765 = UnSome(x_4764->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4765, x_4764, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5559(x_4762);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_4004(const auto &x_4767) {
  if (eq(x_4767->var_display, std::string("none")) || (x_4767->var_inside_svg || x_4767->var_disabled)) {
    return true;
  } else {
    if ((x_4767->parent != nullptr) && (x_4767->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_4767->var_height_expr, std::string("auto")) ||
          (has_suffix(x_4767->var_height_expr, std::string("px")) ||
           (has_suffix(x_4767->var_height_expr, std::string("ch")) ||
            (has_suffix(x_4767->var_height_expr, std::string("lh")) ||
             eq(x_4767->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_4002(const auto &x_4816) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4817) {
    auto x_5560 = [&](const auto &x_4818) {
      if (IsSome(x_4818->meta->bb_0_bb_time_table)) {
        auto x_4819 = UnSome(x_4818->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4819, x_4818, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5560(x_4816);
    MakeUnit();
    auto x_5561 = [&](const auto &x_4821) {
      if (IsSome(x_4821->meta->bb_2_bb_time_table)) {
        auto x_4822 = UnSome(x_4821->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4822, x_4821, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5561(x_4816);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3999(const auto &x_4824) {
  if (HasProp(x_4824, std::string("height"))) {
    return GetProp<std::string>(x_4824, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_3997(const auto &x_4827) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4828) {
    auto x_5562 = [&](const auto &x_4829) {
      if (IsSome(x_4829->meta->bb_0_bb_time_table)) {
        auto x_4830 = UnSome(x_4829->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4830, x_4829, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5562(x_4827);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3994(const auto &x_4832) {
  if (x_4832->last != nullptr) {
    return plus((x_4832->last)->var_finished_intrinsic_height_sum, (x_4832->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_3992(const auto &x_4841) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4842) {
    auto x_5563 = [&](const auto &x_4845) {
      if (IsSome(x_4845->meta->bb_0_bb_time_table)) {
        auto x_4846 = UnSome(x_4845->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4846, x_4845, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4841->next, [&](const auto &x_4844) { return MakeUnit(); },
        [&](const auto &x_4843) {
          auto x_5565 = x_5563;
          x_5565(x_4843);
          return MakeUnit();
        });
    auto x_5564 = [&](const auto &x_4850) {
      if (IsSome(x_4850->meta->bb_2_bb_time_table)) {
        auto x_4851 = UnSome(x_4850->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4851, x_4850, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    if (x_4841->next == nullptr) {
      auto x_5566 = x_5564;
      OptionMatch(
          x_4841->parent, [&](const auto &x_4849) { return MakeUnit(); },
          [&](const auto &x_4848) {
            auto x_5567 = x_5566;
            x_5567(x_4848);
            return MakeUnit();
          });
    }
    return MakeUnit();
  })));
}
auto eval_expr_x_3989(const auto &x_4853) {
  return plus((x_4853->prev != nullptr) ? ((x_4853->prev)->var_intrinsic_width_sum) : (0.),
              x_4853->var_intrinsic_width_external);
}
Unit var_modified_x_3987(const auto &x_4862) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4863) {
    auto x_5568 = [&](const auto &x_4866) {
      if (IsSome(x_4866->meta->bb_0_bb_time_table)) {
        auto x_4867 = UnSome(x_4866->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4867, x_4866, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    if (x_4862->next == nullptr) {
      auto x_5570 = x_5568;
      OptionMatch(
          x_4862->parent, [&](const auto &x_4865) { return MakeUnit(); },
          [&](const auto &x_4864) {
            auto x_5572 = x_5570;
            x_5572(x_4864);
            return MakeUnit();
          });
    }
    auto x_5569 = [&](const auto &x_4871) {
      if (IsSome(x_4871->meta->bb_0_bb_time_table)) {
        auto x_4872 = UnSome(x_4871->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4872, x_4871, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4862->next, [&](const auto &x_4870) { return MakeUnit(); },
        [&](const auto &x_4869) {
          auto x_5571 = x_5569;
          x_5571(x_4869);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3984(const auto &x_4874) {
  return max(x_4874->var_intrinsic_current_line_width,
             (x_4874->prev != nullptr) ? ((x_4874->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_3982(const auto &x_4883) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4884) {
    auto x_5573 = [&](const auto &x_4885) {
      if (IsSome(x_4885->meta->bb_0_bb_time_table)) {
        auto x_4886 = UnSome(x_4885->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4886, x_4885, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5573(x_4883);
    MakeUnit();
    auto x_5574 = [&](const auto &x_4890) {
      if (IsSome(x_4890->meta->bb_0_bb_time_table)) {
        auto x_4891 = UnSome(x_4890->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4891, x_4890, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_4883->next, [&](const auto &x_4889) { return MakeUnit(); },
        [&](const auto &x_4888) {
          auto x_5575 = x_5574;
          x_5575(x_4888);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3979(const auto &x_4893) {
  return plus(x_4893->var_intrinsic_width_external,
              ((x_4893->prev != nullptr) && (!(x_4893->prev)->var_line_break))
                  ? ((x_4893->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_3977(const auto &x_4906) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4907) {
    auto x_5576 = [&](const auto &x_4908) {
      if (IsSome(x_4908->meta->bb_0_bb_time_table)) {
        auto x_4909 = UnSome(x_4908->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4909, x_4908, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5576(x_4906);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3974(const auto &x_4911) {
  if (eq(x_4911->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_4911->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_3972(const auto &x_4920) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_4921) {
    auto x_5577 = [&](const auto &x_4922) {
      if (IsSome(x_4922->meta->bb_0_bb_time_table)) {
        auto x_4923 = UnSome(x_4922->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4923, x_4922, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5577(x_4920);
    MakeUnit();
    auto x_5578 = [&](const auto &x_4925) {
      if (IsSome(x_4925->meta->bb_2_bb_time_table)) {
        auto x_4926 = UnSome(x_4925->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_4926, x_4925, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5578(x_4920);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3969(const auto &x_4928) {
  if (eq(x_4928->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_4928->var_inside_svg) {
      return 0.;
    } else {
      if (x_4928->var_disabled) {
        return 0.;
      } else {
        if (neq(x_4928->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_4928->var_width_expr, std::string("%"))) &&
             (neq(x_4928->var_width_expr, std::string("fit-content")) &&
              (neq(x_4928->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_4928->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_4928->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_4928->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_4928->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_4928->var_children_intrinsic_width,
              (eq(x_4928->name, std::string("#text")))
                  ? (100.)
                  : ((x_4928->var_is_default_case)
                         ? (0.)
                         : ((eq(x_4928->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_4928->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_4928->name, std::string("svg")))
                                              ? ((x_4928->var_has_width_attr &&
                                                  string_is_float(x_4928->var_width_attr_expr))
                                                     ? (string_to_float(x_4928->var_width_attr_expr))
                                                     : (((!x_4928->var_has_width_attr) &&
                                                         HasAttr(x_4928, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_4928, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_4928,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_4928->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_4928->name, std::string("IMG")))
                                                     ? ((x_4928->var_has_width_attr)
                                                            ? (string_to_float(x_4928->var_width_attr_expr))
                                                            : ((HasAttr(x_4928, std::string("image_width")) &&
                                                                (!x_4928->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_4928, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_4928, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_4928->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4928,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_4928,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_4928->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_4928->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_3967(const auto &x_5081) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5082) {
    auto x_5579 = [&](const auto &x_5083) {
      if (IsSome(x_5083->meta->bb_0_bb_time_table)) {
        auto x_5084 = UnSome(x_5083->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5084, x_5083, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5579(x_5081);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3964(const auto &x_5086) {
  if (x_5086->last != nullptr) {
    return (x_5086->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_3962(const auto &x_5091) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5092) {
    auto x_5580 = [&](const auto &x_5093) {
      if (IsSome(x_5093->meta->bb_2_bb_time_table)) {
        auto x_5094 = UnSome(x_5093->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5094, x_5093, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5580(x_5091);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3959(const auto &x_5096) {
  if (eq(x_5096->var_display, std::string("none")) || (x_5096->var_inside_svg || x_5096->var_disabled)) {
    return true;
  } else {
    if ((x_5096->parent != nullptr) && (x_5096->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_5096->var_width_expr, std::string("auto")) ||
          (has_suffix(x_5096->var_width_expr, std::string("px")) ||
           (has_suffix(x_5096->var_width_expr, std::string("ch")) ||
            (has_prefix(x_5096->var_width_expr, std::string("calc(")) ||
             eq(x_5096->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_3957(const auto &x_5145) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5146) {
    auto x_5581 = [&](const auto &x_5147) {
      if (IsSome(x_5147->meta->bb_0_bb_time_table)) {
        auto x_5148 = UnSome(x_5147->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5148, x_5147, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5581(x_5145);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3954(const auto &x_5150) {
  if (eq(x_5150->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_5150->var_inside_svg) {
      return true;
    } else {
      if (x_5150->var_disabled) {
        return true;
      } else {if ( eq(x_5150->name,std::string("#document")) || (eq(x_5150->name,std::string("#shadow-root")) || (eq(x_5150->name,std::string("DIV")) || (eq(x_5150->name,std::string("HTML")) || (eq(x_5150->name,std::string("BODY")) || (eq(x_5150->name,std::string("BUTTON")) || (eq(x_5150->name,std::string("FOOTER")) || (eq(x_5150->name,std::string("SELECT")) || (eq(x_5150->name,std::string("SECTION")) || (eq(x_5150->name,std::string("FORM")) || (eq(x_5150->name,std::string("CENTER")) || (eq(x_5150->name,std::string("TD")) || (eq(x_5150->name,std::string("TR")) || (eq(x_5150->name,std::string("TBODY")) || (eq(x_5150->name,std::string("TABLE")) || (eq(x_5150->name,std::string("SPAN")) || (eq(x_5150->name,std::string("FONT")) || (eq(x_5150->name,std::string("A")) || (eq(x_5150->name,std::string("ARTICLE")) || (eq(x_5150->name,std::string("P")) || (eq(x_5150->name,std::string("U")) || (eq(x_5150->name,std::string("UL")) || (eq(x_5150->name,std::string("B")) || (eq(x_5150->name,std::string("H1")) || (eq(x_5150->name,std::string("H2")) || (eq(x_5150->name,std::string("H3")) || (eq(x_5150->name,std::string("H4")) || (eq(x_5150->name,std::string("DT")) || (eq(x_5150->name,std::string("DD")) || (eq(x_5150->name,std::string("DL")) || (eq(x_5150->name,std::string("LI")) || (eq(x_5150->name,std::string("LABEL")) || (eq(x_5150->name,std::string("OL")) || (eq(x_5150->name,std::string("NAV")) || (eq(x_5150->name,std::string("HEADER")) || (eq(x_5150->name,std::string("HEAD")) || (eq(x_5150->name,std::string("SOURCE")) || (eq(x_5150->name,std::string("PICTURE")) || (eq(x_5150->name,std::string("FIGURE")) || (eq(x_5150->name,std::string("FIGCAPTION")) || (eq(x_5150->name,std::string("MAIN")) || (eq(x_5150->name,std::string("REACT-PARTIAL")) || (eq(x_5150->name,std::string("QUERY-BUILDER")) || (eq(x_5150->name,std::string("MODAL-DIALOG")) || (eq(x_5150->name,std::string("SCROLLABLE-REGION")) || (eq(x_5150->name,std::string("DIALOG-HELPER")) || (eq(x_5150->name,std::string("AUTO-CHECK")) || (eq(x_5150->name,std::string("TOOL-TIP")) || (eq(x_5150->name,std::string("CUSTOM-SCOPES")) || (eq(x_5150->name,std::string("QBSEARCH-INPUT")) || (eq(x_5150->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_5150->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_5150->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_5150->name,std::string("GHCC-CONSENT")) || (eq(x_5150->name,std::string("GLOBAL-BANNER")) || (eq(x_5150->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_5150->name,std::string("CARD-SKEW")) || (eq(x_5150->name,std::string("EM")) || (eq(x_5150->name,std::string("ASIDE")) || (eq(x_5150->name,std::string("AUDIO")) || (eq(x_5150->name,std::string("SUP")) || (eq(x_5150->name,std::string("TIME")) || (eq(x_5150->name,std::string("ABBR")) || (eq(x_5150->name,std::string("SMALL")) || (eq(x_5150->name,std::string("SLOT")) || eq(x_5150->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_3952(const auto &x_5163) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5164) {
    auto x_5582 = [&](const auto &x_5165) {
      if (IsSome(x_5165->meta->bb_0_bb_time_table)) {
        auto x_5166 = UnSome(x_5165->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5166, x_5165, MakeRecomputeBB(std::string("bb_0")));
      } else {
        return MakeUnit();
      }
    };
    x_5582(x_5163);
    MakeUnit();
    auto x_5583 = [&](const auto &x_5168) {
      if (IsSome(x_5168->meta->bb_2_bb_time_table)) {
        auto x_5169 = UnSome(x_5168->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5169, x_5168, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5583(x_5163);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3949(const auto &x_5171) {
  if (HasProp(x_5171, std::string("width"))) {
    return GetProp<std::string>(x_5171, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_3945(const auto &x_5174) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5175) {
    auto x_5584 = [&](const auto &x_5178) {
      if (IsSome(x_5178->meta->bb_2_bb_time_table)) {
        auto x_5179 = UnSome(x_5178->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5179, x_5178, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5174->next, [&](const auto &x_5177) { return MakeUnit(); },
        [&](const auto &x_5176) {
          auto x_5585 = x_5584;
          x_5585(x_5176);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3942(const auto &x_5181) {
  if ((x_5181->prev != nullptr) && (!(x_5181->prev)->var_line_break)) {
    return max(x_5181->var_height_external, (x_5181->prev)->var_line_height);
  } else {
    return x_5181->var_height_external;
  }
}
Unit var_modified_x_3940(const auto &x_5198) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5199) {
    auto x_5586 = [&](const auto &x_5200) {
      if (IsSome(x_5200->meta->bb_2_bb_time_table)) {
        auto x_5201 = UnSome(x_5200->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5201, x_5200, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5586(x_5198);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3937(const auto &x_5203) {
  if (eq(x_5203->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5203->var_height_internal;
  }
}
Unit var_modified_x_3935(const auto &x_5212) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5213) {
    auto x_5587 = [&](const auto &x_5214) {
      if (IsSome(x_5214->meta->bb_2_bb_time_table)) {
        auto x_5215 = UnSome(x_5214->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5215, x_5214, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5587(x_5212);
    MakeUnit();
    ListIter(x_5212->children, [&](const auto &x_5217) {
      if (IsSome(x_5217->meta->bb_2_bb_time_table)) {
        auto x_5218 = UnSome(x_5217->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5218, x_5217, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3932(const auto &x_5220) {
  if (x_5220->var_intrinsic_height_is_height) {
    return x_5220->var_intrinsic_height_internal;
  } else {
    if ((x_5220->parent != nullptr) && (x_5220->parent)->var_is_flex_column) {
      return plus(x_5220->var_intrinsic_height_internal,
                  mult(x_5220->var_flex_amount, (x_5220->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5220->var_height_expr, std::string("%"))) {
        return mult(x_5220->var_box_height,
                    divide(string_to_float(strip_suffix(x_5220->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_5220->var_box_height, x_5220->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_3930(const auto &x_5273) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5274) {
    ListIter(x_5273->children, [&](const auto &x_5275) {
      if (IsSome(x_5275->meta->bb_2_bb_time_table)) {
        auto x_5276 = UnSome(x_5275->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5276, x_5275, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    auto x_5588 = [&](const auto &x_5280) {
      if (IsSome(x_5280->meta->bb_2_bb_time_table)) {
        auto x_5281 = UnSome(x_5280->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5281, x_5280, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5273->next, [&](const auto &x_5279) { return MakeUnit(); },
        [&](const auto &x_5278) {
          auto x_5589 = x_5588;
          x_5589(x_5278);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3927(const auto &x_5283) {
  if (x_5283->prev != nullptr) {
    if (x_5283->var_line_break || (x_5283->prev)->var_line_break) {
      return plus((x_5283->prev)->var_y, (x_5283->prev)->var_line_height);
    } else {
      return (x_5283->prev)->var_y;
    }
  } else {
    if (x_5283->parent != nullptr) {
      return (x_5283->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3925(const auto &x_5308) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5309) {
    auto x_5590 = [&](const auto &x_5312) {
      if (IsSome(x_5312->meta->bb_2_bb_time_table)) {
        auto x_5313 = UnSome(x_5312->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5313, x_5312, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5308->next, [&](const auto &x_5311) { return MakeUnit(); },
        [&](const auto &x_5310) {
          auto x_5591 = x_5590;
          x_5591(x_5310);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3922(const auto &x_5315) {
  if (eq(x_5315->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_5315->var_width_internal;
  }
}
Unit var_modified_x_3920(const auto &x_5324) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5325) {
    auto x_5592 = [&](const auto &x_5326) {
      if (IsSome(x_5326->meta->bb_2_bb_time_table)) {
        auto x_5327 = UnSome(x_5326->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5327, x_5326, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5592(x_5324);
    MakeUnit();
    ListIter(x_5324->children, [&](const auto &x_5329) {
      if (IsSome(x_5329->meta->bb_2_bb_time_table)) {
        auto x_5330 = UnSome(x_5329->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5330, x_5329, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3917(const auto &x_5332) {
  if (x_5332->var_intrinsic_width_is_width) {
    return x_5332->var_intrinsic_width_internal;
  } else {
    if ((x_5332->parent != nullptr) && (x_5332->parent)->var_is_flex_row) {
      return plus(x_5332->var_intrinsic_width_internal, mult(x_5332->var_flex_amount, (x_5332->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_5332->var_width_expr, std::string("%"))) {
        return mult(x_5332->var_box_width,
                    divide(string_to_float(strip_suffix(x_5332->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_5332->var_box_width, x_5332->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_3915(const auto &x_5385) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5386) {
    ListIter(x_5385->children, [&](const auto &x_5387) {
      if (IsSome(x_5387->meta->bb_2_bb_time_table)) {
        auto x_5388 = UnSome(x_5387->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5388, x_5387, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    auto x_5593 = [&](const auto &x_5392) {
      if (IsSome(x_5392->meta->bb_2_bb_time_table)) {
        auto x_5393 = UnSome(x_5392->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5393, x_5392, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    OptionMatch(
        x_5385->next, [&](const auto &x_5391) { return MakeUnit(); },
        [&](const auto &x_5390) {
          auto x_5594 = x_5593;
          x_5594(x_5390);
          return MakeUnit();
        });
    return MakeUnit();
  })));
}
auto eval_expr_x_3912(const auto &x_5395) {
  if (x_5395->prev != nullptr) {
    if (x_5395->var_line_break || (x_5395->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_5395->prev)->var_x, (x_5395->prev)->var_width_external);
    }
  } else {
    if (x_5395->parent != nullptr) {
      return (x_5395->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_3910(const auto &x_5416) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5417) {
    ListIter(x_5416->children, [&](const auto &x_5418) {
      if (IsSome(x_5418->meta->bb_2_bb_time_table)) {
        auto x_5419 = UnSome(x_5418->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5419, x_5418, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3907(const auto &x_5421) {
  if (gt(x_5421->var_left_over, 0.)) {
    return divide(x_5421->var_left_over, x_5421->var_flex_grow_sum);
  } else {
    return divide(x_5421->var_left_over, x_5421->var_flex_shrink_sum);
  }
}
Unit var_modified_x_3905(const auto &x_5442) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5443) {
    auto x_5595 = [&](const auto &x_5444) {
      if (IsSome(x_5444->meta->bb_2_bb_time_table)) {
        auto x_5445 = UnSome(x_5444->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5445, x_5444, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5595(x_5442);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3902(const auto &x_5447) {
  if ((x_5447->parent != nullptr) && gt((x_5447->parent)->var_left_over, 0.)) {
    return x_5447->var_flex_grow;
  } else {
    return x_5447->var_flex_shrink;
  }
}
Unit var_modified_x_3900(const auto &x_5460) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5461) {
    auto x_5596 = [&](const auto &x_5462) {
      if (IsSome(x_5462->meta->bb_2_bb_time_table)) {
        auto x_5463 = UnSome(x_5462->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5463, x_5462, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5596(x_5460);
    MakeUnit();
    ListIter(x_5460->children, [&](const auto &x_5465) {
      if (IsSome(x_5465->meta->bb_2_bb_time_table)) {
        auto x_5466 = UnSome(x_5465->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5466, x_5465, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    });
    return MakeUnit();
  })));
}
auto eval_expr_x_3897(const auto &x_5468) {
  if (x_5468->var_is_flex_row) {
    return minus(x_5468->var_box_width, (x_5468->last != nullptr) ? ((x_5468->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_5468->var_box_height, (x_5468->last != nullptr) ? ((x_5468->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_3895(const auto &x_5489) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5490) {
    auto x_5597 = [&](const auto &x_5491) {
      if (IsSome(x_5491->meta->bb_2_bb_time_table)) {
        auto x_5492 = UnSome(x_5491->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5492, x_5491, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5597(x_5489);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3892(const auto &x_5494) {
  if (x_5494->parent != nullptr) {
    return (x_5494->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_3890(const auto &x_5499) {
  return MetricRecordOverhead(Zro(Timed([&](const auto &x_5500) {
    auto x_5598 = [&](const auto &x_5501) {
      if (IsSome(x_5501->meta->bb_2_bb_time_table)) {
        auto x_5502 = UnSome(x_5501->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        return QueuePush(x_5502, x_5501, MakeRecomputeBB(std::string("bb_2")));
      } else {
        return MakeUnit();
      }
    };
    x_5598(x_5499);
    MakeUnit();
    return MakeUnit();
  })));
}
auto eval_expr_x_3887(const auto &x_5504) {
  if (x_5504->parent != nullptr) {
    return (x_5504->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit eval_stmts_x_3803(const auto &x_3885) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3886) {
    WriteMetric();
    auto x_3888 = eval_expr_x_3887(x_3885);
    if (x_3885->has_var_box_width) {
      auto x_3889 = x_3885->var_box_width;
      if (!EqualValue(x_3889, x_3888)) {
        var_modified_x_3890(x_3885);
      }
    }
    x_3885->has_var_box_width = true;
    x_3885->var_box_width = x_3888;
    WriteMetric();
    auto x_3893 = eval_expr_x_3892(x_3885);
    if (x_3885->has_var_box_height) {
      auto x_3894 = x_3885->var_box_height;
      if (!EqualValue(x_3894, x_3893)) {
        var_modified_x_3895(x_3885);
      }
    }
    x_3885->has_var_box_height = true;
    x_3885->var_box_height = x_3893;
    WriteMetric();
    auto x_3898 = eval_expr_x_3897(x_3885);
    if (x_3885->has_var_left_over) {
      auto x_3899 = x_3885->var_left_over;
      if (!EqualValue(x_3899, x_3898)) {
        var_modified_x_3900(x_3885);
      }
    }
    x_3885->has_var_left_over = true;
    x_3885->var_left_over = x_3898;
    WriteMetric();
    auto x_3903 = eval_expr_x_3902(x_3885);
    if (x_3885->has_var_flex_amount) {
      auto x_3904 = x_3885->var_flex_amount;
      if (!EqualValue(x_3904, x_3903)) {
        var_modified_x_3905(x_3885);
      }
    }
    x_3885->has_var_flex_amount = true;
    x_3885->var_flex_amount = x_3903;
    WriteMetric();
    auto x_3908 = eval_expr_x_3907(x_3885);
    if (x_3885->has_var_flex_unit) {
      auto x_3909 = x_3885->var_flex_unit;
      if (!EqualValue(x_3909, x_3908)) {
        var_modified_x_3910(x_3885);
      }
    }
    x_3885->has_var_flex_unit = true;
    x_3885->var_flex_unit = x_3908;
    WriteMetric();
    auto x_3913 = eval_expr_x_3912(x_3885);
    if (x_3885->has_var_x) {
      auto x_3914 = x_3885->var_x;
      if (!EqualValue(x_3914, x_3913)) {
        var_modified_x_3915(x_3885);
      }
    }
    x_3885->has_var_x = true;
    x_3885->var_x = x_3913;
    WriteMetric();
    auto x_3918 = eval_expr_x_3917(x_3885);
    if (x_3885->has_var_width_internal) {
      auto x_3919 = x_3885->var_width_internal;
      if (!EqualValue(x_3919, x_3918)) {
        var_modified_x_3920(x_3885);
      }
    }
    x_3885->has_var_width_internal = true;
    x_3885->var_width_internal = x_3918;
    WriteMetric();
    auto x_3923 = eval_expr_x_3922(x_3885);
    if (x_3885->has_var_width_external) {
      auto x_3924 = x_3885->var_width_external;
      if (!EqualValue(x_3924, x_3923)) {
        var_modified_x_3925(x_3885);
      }
    }
    x_3885->has_var_width_external = true;
    x_3885->var_width_external = x_3923;
    WriteMetric();
    auto x_3928 = eval_expr_x_3927(x_3885);
    if (x_3885->has_var_y) {
      auto x_3929 = x_3885->var_y;
      if (!EqualValue(x_3929, x_3928)) {
        var_modified_x_3930(x_3885);
      }
    }
    x_3885->has_var_y = true;
    x_3885->var_y = x_3928;
    WriteMetric();
    auto x_3933 = eval_expr_x_3932(x_3885);
    if (x_3885->has_var_height_internal) {
      auto x_3934 = x_3885->var_height_internal;
      if (!EqualValue(x_3934, x_3933)) {
        var_modified_x_3935(x_3885);
      }
    }
    x_3885->has_var_height_internal = true;
    x_3885->var_height_internal = x_3933;
    WriteMetric();
    auto x_3938 = eval_expr_x_3937(x_3885);
    if (x_3885->has_var_height_external) {
      auto x_3939 = x_3885->var_height_external;
      if (!EqualValue(x_3939, x_3938)) {
        var_modified_x_3940(x_3885);
      }
    }
    x_3885->has_var_height_external = true;
    x_3885->var_height_external = x_3938;
    WriteMetric();
    auto x_3943 = eval_expr_x_3942(x_3885);
    if (x_3885->has_var_line_height) {
      auto x_3944 = x_3885->var_line_height;
      if (!EqualValue(x_3944, x_3943)) {
        var_modified_x_3945(x_3885);
      }
    }
    x_3885->has_var_line_height = true;
    x_3885->var_line_height = x_3943;
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3802(const auto &x_3947) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3948) {
    WriteMetric();
    auto x_3950 = eval_expr_x_3949(x_3947);
    if (x_3947->has_var_width_expr) {
      auto x_3951 = x_3947->var_width_expr;
      if (!EqualValue(x_3951, x_3950)) {
        var_modified_x_3952(x_3947);
      }
    }
    x_3947->has_var_width_expr = true;
    x_3947->var_width_expr = x_3950;
    WriteMetric();
    auto x_3955 = eval_expr_x_3954(x_3947);
    if (x_3947->has_var_is_default_case) {
      auto x_3956 = x_3947->var_is_default_case;
      if (!EqualValue(x_3956, x_3955)) {
        var_modified_x_3957(x_3947);
      }
    }
    x_3947->has_var_is_default_case = true;
    x_3947->var_is_default_case = x_3955;
    WriteMetric();
    auto x_3960 = eval_expr_x_3959(x_3947);
    if (x_3947->has_var_intrinsic_width_is_width) {
      auto x_3961 = x_3947->var_intrinsic_width_is_width;
      if (!EqualValue(x_3961, x_3960)) {
        var_modified_x_3962(x_3947);
      }
    }
    x_3947->has_var_intrinsic_width_is_width = true;
    x_3947->var_intrinsic_width_is_width = x_3960;
    WriteMetric();
    auto x_3965 = eval_expr_x_3964(x_3947);
    if (x_3947->has_var_children_intrinsic_width) {
      auto x_3966 = x_3947->var_children_intrinsic_width;
      if (!EqualValue(x_3966, x_3965)) {
        var_modified_x_3967(x_3947);
      }
    }
    x_3947->has_var_children_intrinsic_width = true;
    x_3947->var_children_intrinsic_width = x_3965;
    WriteMetric();
    auto x_3970 = eval_expr_x_3969(x_3947);
    if (x_3947->has_var_intrinsic_width_internal) {
      auto x_3971 = x_3947->var_intrinsic_width_internal;
      if (!EqualValue(x_3971, x_3970)) {
        var_modified_x_3972(x_3947);
      }
    }
    x_3947->has_var_intrinsic_width_internal = true;
    x_3947->var_intrinsic_width_internal = x_3970;
    WriteMetric();
    auto x_3975 = eval_expr_x_3974(x_3947);
    if (x_3947->has_var_intrinsic_width_external) {
      auto x_3976 = x_3947->var_intrinsic_width_external;
      if (!EqualValue(x_3976, x_3975)) {
        var_modified_x_3977(x_3947);
      }
    }
    x_3947->has_var_intrinsic_width_external = true;
    x_3947->var_intrinsic_width_external = x_3975;
    WriteMetric();
    auto x_3980 = eval_expr_x_3979(x_3947);
    if (x_3947->has_var_intrinsic_current_line_width) {
      auto x_3981 = x_3947->var_intrinsic_current_line_width;
      if (!EqualValue(x_3981, x_3980)) {
        var_modified_x_3982(x_3947);
      }
    }
    x_3947->has_var_intrinsic_current_line_width = true;
    x_3947->var_intrinsic_current_line_width = x_3980;
    WriteMetric();
    auto x_3985 = eval_expr_x_3984(x_3947);
    if (x_3947->has_var_intrinsic_width_max) {
      auto x_3986 = x_3947->var_intrinsic_width_max;
      if (!EqualValue(x_3986, x_3985)) {
        var_modified_x_3987(x_3947);
      }
    }
    x_3947->has_var_intrinsic_width_max = true;
    x_3947->var_intrinsic_width_max = x_3985;
    WriteMetric();
    auto x_3990 = eval_expr_x_3989(x_3947);
    if (x_3947->has_var_intrinsic_width_sum) {
      auto x_3991 = x_3947->var_intrinsic_width_sum;
      if (!EqualValue(x_3991, x_3990)) {
        var_modified_x_3992(x_3947);
      }
    }
    x_3947->has_var_intrinsic_width_sum = true;
    x_3947->var_intrinsic_width_sum = x_3990;
    WriteMetric();
    auto x_3995 = eval_expr_x_3994(x_3947);
    if (x_3947->has_var_children_intrinsic_height) {
      auto x_3996 = x_3947->var_children_intrinsic_height;
      if (!EqualValue(x_3996, x_3995)) {
        var_modified_x_3997(x_3947);
      }
    }
    x_3947->has_var_children_intrinsic_height = true;
    x_3947->var_children_intrinsic_height = x_3995;
    WriteMetric();
    auto x_4000 = eval_expr_x_3999(x_3947);
    if (x_3947->has_var_height_expr) {
      auto x_4001 = x_3947->var_height_expr;
      if (!EqualValue(x_4001, x_4000)) {
        var_modified_x_4002(x_3947);
      }
    }
    x_3947->has_var_height_expr = true;
    x_3947->var_height_expr = x_4000;
    WriteMetric();
    auto x_4005 = eval_expr_x_4004(x_3947);
    if (x_3947->has_var_intrinsic_height_is_height) {
      auto x_4006 = x_3947->var_intrinsic_height_is_height;
      if (!EqualValue(x_4006, x_4005)) {
        var_modified_x_4007(x_3947);
      }
    }
    x_3947->has_var_intrinsic_height_is_height = true;
    x_3947->var_intrinsic_height_is_height = x_4005;
    WriteMetric();
    auto x_4010 = eval_expr_x_4009(x_3947);
    if (x_3947->has_var_intrinsic_height_internal) {
      auto x_4011 = x_3947->var_intrinsic_height_internal;
      if (!EqualValue(x_4011, x_4010)) {
        var_modified_x_4012(x_3947);
      }
    }
    x_3947->has_var_intrinsic_height_internal = true;
    x_3947->var_intrinsic_height_internal = x_4010;
    WriteMetric();
    auto x_4015 = eval_expr_x_4014(x_3947);
    if (x_3947->has_var_intrinsic_height_external) {
      auto x_4016 = x_3947->var_intrinsic_height_external;
      if (!EqualValue(x_4016, x_4015)) {
        var_modified_x_4017(x_3947);
      }
    }
    x_3947->has_var_intrinsic_height_external = true;
    x_3947->var_intrinsic_height_external = x_4015;
    WriteMetric();
    auto x_4020 = eval_expr_x_4019(x_3947);
    if (x_3947->has_var_intrinsic_height_sum) {
      auto x_4021 = x_3947->var_intrinsic_height_sum;
      if (!EqualValue(x_4021, x_4020)) {
        var_modified_x_4022(x_3947);
      }
    }
    x_3947->has_var_intrinsic_height_sum = true;
    x_3947->var_intrinsic_height_sum = x_4020;
    WriteMetric();
    auto x_4025 = eval_expr_x_4024(x_3947);
    if (x_3947->has_var_intrinsic_current_line_height) {
      auto x_4026 = x_3947->var_intrinsic_current_line_height;
      if (!EqualValue(x_4026, x_4025)) {
        var_modified_x_4027(x_3947);
      }
    }
    x_3947->has_var_intrinsic_current_line_height = true;
    x_3947->var_intrinsic_current_line_height = x_4025;
    WriteMetric();
    auto x_4030 = eval_expr_x_4029(x_3947);
    if (x_3947->has_var_finished_intrinsic_height_sum) {
      auto x_4031 = x_3947->var_finished_intrinsic_height_sum;
      if (!EqualValue(x_4031, x_4030)) {
        var_modified_x_4032(x_3947);
      }
    }
    x_3947->has_var_finished_intrinsic_height_sum = true;
    x_3947->var_finished_intrinsic_height_sum = x_4030;
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3801(const auto &x_4034) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_4035) {
    WriteMetric();
    auto x_4037 = eval_expr_x_4036(x_4034);
    if (x_4034->has_var_display) {
      auto x_4038 = x_4034->var_display;
      if (!EqualValue(x_4038, x_4037)) {
        var_modified_x_4039(x_4034);
      }
    }
    x_4034->has_var_display = true;
    x_4034->var_display = x_4037;
    WriteMetric();
    auto x_4042 = eval_expr_x_4041(x_4034);
    if (x_4034->has_var_position) {
      auto x_4043 = x_4034->var_position;
      if (!EqualValue(x_4043, x_4042)) {
        var_modified_x_4044(x_4034);
      }
    }
    x_4034->has_var_position = true;
    x_4034->var_position = x_4042;
    WriteMetric();
    auto x_4047 = eval_expr_x_4046(x_4034);
    if (x_4034->has_var_flex_grow) {
      auto x_4048 = x_4034->var_flex_grow;
      if (!EqualValue(x_4048, x_4047)) {
        var_modified_x_4049(x_4034);
      }
    }
    x_4034->has_var_flex_grow = true;
    x_4034->var_flex_grow = x_4047;
    WriteMetric();
    auto x_4052 = eval_expr_x_4051(x_4034);
    if (x_4034->has_var_flex_shrink) {
      auto x_4053 = x_4034->var_flex_shrink;
      if (!EqualValue(x_4053, x_4052)) {
        var_modified_x_4054(x_4034);
      }
    }
    x_4034->has_var_flex_shrink = true;
    x_4034->var_flex_shrink = x_4052;
    WriteMetric();
    auto x_4057 = eval_expr_x_4056(x_4034);
    if (x_4034->has_var_flex_grow_sum) {
      auto x_4058 = x_4034->var_flex_grow_sum;
      if (!EqualValue(x_4058, x_4057)) {
        var_modified_x_4059(x_4034);
      }
    }
    x_4034->has_var_flex_grow_sum = true;
    x_4034->var_flex_grow_sum = x_4057;
    WriteMetric();
    auto x_4062 = eval_expr_x_4061(x_4034);
    if (x_4034->has_var_flex_shrink_sum) {
      auto x_4063 = x_4034->var_flex_shrink_sum;
      if (!EqualValue(x_4063, x_4062)) {
        var_modified_x_4064(x_4034);
      }
    }
    x_4034->has_var_flex_shrink_sum = true;
    x_4034->var_flex_shrink_sum = x_4062;
    WriteMetric();
    auto x_4067 = eval_expr_x_4066(x_4034);
    if (x_4034->has_var_flex_direction) {
      auto x_4068 = x_4034->var_flex_direction;
      if (!EqualValue(x_4068, x_4067)) {
        var_modified_x_4069(x_4034);
      }
    }
    x_4034->has_var_flex_direction = true;
    x_4034->var_flex_direction = x_4067;
    WriteMetric();
    auto x_4072 = eval_expr_x_4071(x_4034);
    if (x_4034->has_var_is_flex_row) {
      auto x_4073 = x_4034->var_is_flex_row;
      if (!EqualValue(x_4073, x_4072)) {
        var_modified_x_4074(x_4034);
      }
    }
    x_4034->has_var_is_flex_row = true;
    x_4034->var_is_flex_row = x_4072;
    WriteMetric();
    auto x_4077 = eval_expr_x_4076(x_4034);
    if (x_4034->has_var_is_flex_column) {
      auto x_4078 = x_4034->var_is_flex_column;
      if (!EqualValue(x_4078, x_4077)) {
        var_modified_x_4079(x_4034);
      }
    }
    x_4034->has_var_is_flex_column = true;
    x_4034->var_is_flex_column = x_4077;
    WriteMetric();
    auto x_4082 = eval_expr_x_4081(x_4034);
    if (x_4034->has_var_width_attr_expr) {
      auto x_4083 = x_4034->var_width_attr_expr;
      if (!EqualValue(x_4083, x_4082)) {
        var_modified_x_4084(x_4034);
      }
    }
    x_4034->has_var_width_attr_expr = true;
    x_4034->var_width_attr_expr = x_4082;
    WriteMetric();
    auto x_4087 = eval_expr_x_4086(x_4034);
    if (x_4034->has_var_has_width_attr) {
      auto x_4088 = x_4034->var_has_width_attr;
      if (!EqualValue(x_4088, x_4087)) {
        var_modified_x_4089(x_4034);
      }
    }
    x_4034->has_var_has_width_attr = true;
    x_4034->var_has_width_attr = x_4087;
    WriteMetric();
    auto x_4092 = eval_expr_x_4091(x_4034);
    if (x_4034->has_var_height_attr_expr) {
      auto x_4093 = x_4034->var_height_attr_expr;
      if (!EqualValue(x_4093, x_4092)) {
        var_modified_x_4094(x_4034);
      }
    }
    x_4034->has_var_height_attr_expr = true;
    x_4034->var_height_attr_expr = x_4092;
    WriteMetric();
    auto x_4097 = eval_expr_x_4096(x_4034);
    if (x_4034->has_var_has_height_attr) {
      auto x_4098 = x_4034->var_has_height_attr;
      if (!EqualValue(x_4098, x_4097)) {
        var_modified_x_4099(x_4034);
      }
    }
    x_4034->has_var_has_height_attr = true;
    x_4034->var_has_height_attr = x_4097;
    WriteMetric();
    auto x_4102 = eval_expr_x_4101(x_4034);
    if (x_4034->has_var_is_svg_block) {
      auto x_4103 = x_4034->var_is_svg_block;
      if (!EqualValue(x_4103, x_4102)) {
        var_modified_x_4104(x_4034);
      }
    }
    x_4034->has_var_is_svg_block = true;
    x_4034->var_is_svg_block = x_4102;
    WriteMetric();
    auto x_4107 = eval_expr_x_4106(x_4034);
    if (x_4034->has_var_inside_svg) {
      auto x_4108 = x_4034->var_inside_svg;
      if (!EqualValue(x_4108, x_4107)) {
        var_modified_x_4109(x_4034);
      }
    }
    x_4034->has_var_inside_svg = true;
    x_4034->var_inside_svg = x_4107;
    WriteMetric();
    auto x_4112 = eval_expr_x_4111(x_4034);
    if (x_4034->has_var_disabled) {
      auto x_4113 = x_4034->var_disabled;
      if (!EqualValue(x_4113, x_4112)) {
        var_modified_x_4114(x_4034);
      }
    }
    x_4034->has_var_disabled = true;
    x_4034->var_disabled = x_4112;
    WriteMetric();
    auto x_4117 = eval_expr_x_4116(x_4034);
    if (x_4034->has_var_visible) {
      auto x_4118 = x_4034->var_visible;
      if (!EqualValue(x_4118, x_4117)) {
        var_modified_x_4119(x_4034);
      }
    }
    x_4034->has_var_visible = true;
    x_4034->var_visible = x_4117;
    WriteMetric();
    auto x_4122 = eval_expr_x_4121(x_4034);
    if (x_4034->has_var_line_break) {
      auto x_4123 = x_4034->var_line_break;
      if (!EqualValue(x_4123, x_4122)) {
        var_modified_x_4124(x_4034);
      }
    }
    x_4034->has_var_line_break = true;
    x_4034->var_line_break = x_4122;
    return MakeUnit();
  })));
}
Unit x_3530(const auto &x_3531, const auto &x_3532, const auto &x_3533) {
  auto x_3534 = ListHeadExn(x_3531);
  auto x_3535 = ListTailExn(x_3531);
  if (ListIsEmpty(x_3535)) {
    auto x_3536 = ListSplitN(x_3532->children, x_3534);
    OutputChangeMetric(IntAdd(layout_size_x_3489(ListNthExn(x_3532->children, x_3534)), layout_size_x_3489(x_3533)));
    x_3532->children = ListAppend(Zro(x_3536), Cons(x_3533, ListTailExn(Fst(x_3536))));
    return MakeUnit();
  } else {
    return x_3530(x_3535, ListNthExn(x_3532->children, x_3534), x_3533);
  }
}
Unit replace_layout_node_x_3529(const auto &x_3531, const auto &x_3532, const auto &x_3533) {
  return x_3530(x_3531, x_3532, x_3533);
}
Unit x_3537(const auto &x_3538, const auto &x_3539, const auto &x_3540) {
  auto x_3541 = ListHeadExn(x_3538);
  auto x_3542 = ListTailExn(x_3538);
  if (ListIsEmpty(x_3542)) {
    OutputChangeMetric(layout_size_x_3489(x_3540));
    auto x_3543 = ListSplitN(x_3539->children, x_3541);
    x_3539->children = ListAppend(Zro(x_3543), Cons(x_3540, Fst(x_3543)));
    return MakeUnit();
  } else {
    return x_3537(x_3542, ListNthExn(x_3539->children, x_3541), x_3540);
  }
}
Unit add_layout_node_x_3527(const auto &x_3538, const auto &x_3539, const auto &x_3540) {
  return x_3537(x_3538, x_3539, x_3540);
}
Unit x_3544(const auto &x_3545, const auto &x_3546, const auto &x_3547) {
  auto x_3548 = ListHeadExn(x_3545);
  auto x_3549 = ListTailExn(x_3545);
  if (ListIsEmpty(x_3549)) {
    OutputChangeMetric(layout_size_x_3489(ListNthExn(x_3546->children, x_3548)));
    auto x_3550 = ListSplitN(x_3546->children, x_3548);
    x_3546->children = ListAppend(Zro(x_3550), ListTailExn(Fst(x_3550)));
    return MakeUnit();
  } else {
    return x_3544(x_3549, ListNthExn(x_3546->children, x_3548), x_3547);
  }
}
Unit remove_layout_node_x_3525(const auto &x_3545, const auto &x_3546, const auto &x_3547) {
  return x_3544(x_3545, x_3546, x_3547);
}
Unit x_3551(const auto &x_3552, const auto &x_3553, const auto &x_3554) {
  return ListMatch(
      x_3552,
      [&](const auto &x_3557) {
        auto x_3558 = Zro(x_3554);
        auto x_3559 = Zro(x_3558);
        auto x_3560 = Fst(x_3558);
        auto x_3561 = Fst(x_3554);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5599 = x_3559;
        if (x_5599 == "attributes") {
          std::string x_5600 = x_3560;
          if (x_5600 == "width") {
            WriteMetric();
            HashtblAddExn(x_3553->attr, std::string("width"), x_3561);
            if (IsSome(x_3553->meta->bb_1_bb_time_table)) {
              auto x_3562 = UnSome(x_3553->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3562, x_3553, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5600 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_3553->attr, std::string("image_height"), x_3561);
            if (IsSome(x_3553->meta->bb_0_bb_time_table)) {
              auto x_3564 = UnSome(x_3553->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3564, x_3553, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5600 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_3553->attr, std::string("image_width"), x_3561);
            if (IsSome(x_3553->meta->bb_0_bb_time_table)) {
              auto x_3566 = UnSome(x_3553->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3566, x_3553, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5600 == "height") {
            WriteMetric();
            HashtblAddExn(x_3553->attr, std::string("height"), x_3561);
            if (IsSome(x_3553->meta->bb_1_bb_time_table)) {
              auto x_3568 = UnSome(x_3553->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3568, x_3553, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5600 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_3553->attr, std::string("viewBox"), x_3561);
            if (IsSome(x_3553->meta->bb_0_bb_time_table)) {
              auto x_3570 = UnSome(x_3553->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3570, x_3553, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5599 == "properties") {
          std::string x_5601 = x_3560;
          if (x_5601 == "width") {
            WriteMetric();
            HashtblAddExn(x_3553->prop, std::string("width"), x_3561);
            if (IsSome(x_3553->meta->bb_0_bb_time_table)) {
              auto x_3572 = UnSome(x_3553->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3572, x_3553, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5601 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_3553->prop, std::string("flex-grow"), x_3561);
            if (IsSome(x_3553->meta->bb_1_bb_time_table)) {
              auto x_3574 = UnSome(x_3553->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3574, x_3553, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5601 == "height") {
            WriteMetric();
            HashtblAddExn(x_3553->prop, std::string("height"), x_3561);
            if (IsSome(x_3553->meta->bb_0_bb_time_table)) {
              auto x_3576 = UnSome(x_3553->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3576, x_3553, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5601 == "display") {
            WriteMetric();
            HashtblAddExn(x_3553->prop, std::string("display"), x_3561);
            if (IsSome(x_3553->meta->bb_1_bb_time_table)) {
              auto x_3578 = UnSome(x_3553->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3578, x_3553, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5601 == "position") {
            WriteMetric();
            HashtblAddExn(x_3553->prop, std::string("position"), x_3561);
            if (IsSome(x_3553->meta->bb_1_bb_time_table)) {
              auto x_3580 = UnSome(x_3553->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3580, x_3553, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5601 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_3553->prop, std::string("flex-shrink"), x_3561);
            if (IsSome(x_3553->meta->bb_1_bb_time_table)) {
              auto x_3582 = UnSome(x_3553->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3582, x_3553, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5601 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_3553->prop, std::string("flex-direction"), x_3561);
            if (IsSome(x_3553->meta->bb_1_bb_time_table)) {
              auto x_3584 = UnSome(x_3553->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3584, x_3553, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3555, const auto &x_3556) {
        return x_3551(x_3556, ListNthExn(x_3553->children, x_3555), x_3554);
      });
}
Unit insert_value_x_3523(const auto &x_3552, const auto &x_3553, const auto &x_3554) {
  return x_3551(x_3552, x_3553, x_3554);
}
Unit x_3586(const auto &x_3587, const auto &x_3588, const auto &x_3589) {
  return ListMatch(
      x_3587,
      [&](const auto &x_3592) {
        auto x_3593 = Zro(x_3589);
        auto x_3594 = Fst(x_3589);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5602 = x_3593;
        if (x_5602 == "attributes") {
          std::string x_5603 = x_3594;
          if (x_5603 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3588->attr, std::string("width"));
            if (IsSome(x_3588->meta->bb_1_bb_time_table)) {
              auto x_3595 = UnSome(x_3588->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3595, x_3588, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5603 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3588->attr, std::string("image_height"));
            if (IsSome(x_3588->meta->bb_0_bb_time_table)) {
              auto x_3597 = UnSome(x_3588->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3597, x_3588, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5603 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3588->attr, std::string("image_width"));
            if (IsSome(x_3588->meta->bb_0_bb_time_table)) {
              auto x_3599 = UnSome(x_3588->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3599, x_3588, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5603 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3588->attr, std::string("height"));
            if (IsSome(x_3588->meta->bb_1_bb_time_table)) {
              auto x_3601 = UnSome(x_3588->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3601, x_3588, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5603 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3588->attr, std::string("viewBox"));
            if (IsSome(x_3588->meta->bb_0_bb_time_table)) {
              auto x_3603 = UnSome(x_3588->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3603, x_3588, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5602 == "properties") {
          std::string x_5604 = x_3594;
          if (x_5604 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3588->prop, std::string("width"));
            if (IsSome(x_3588->meta->bb_0_bb_time_table)) {
              auto x_3605 = UnSome(x_3588->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3605, x_3588, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5604 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3588->prop, std::string("flex-grow"));
            if (IsSome(x_3588->meta->bb_1_bb_time_table)) {
              auto x_3607 = UnSome(x_3588->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3607, x_3588, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5604 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3588->prop, std::string("height"));
            if (IsSome(x_3588->meta->bb_0_bb_time_table)) {
              auto x_3609 = UnSome(x_3588->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3609, x_3588, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5604 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3588->prop, std::string("display"));
            if (IsSome(x_3588->meta->bb_1_bb_time_table)) {
              auto x_3611 = UnSome(x_3588->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3611, x_3588, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5604 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3588->prop, std::string("position"));
            if (IsSome(x_3588->meta->bb_1_bb_time_table)) {
              auto x_3613 = UnSome(x_3588->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3613, x_3588, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5604 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3588->prop, std::string("flex-shrink"));
            if (IsSome(x_3588->meta->bb_1_bb_time_table)) {
              auto x_3615 = UnSome(x_3588->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3615, x_3588, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5604 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3588->prop, std::string("flex-direction"));
            if (IsSome(x_3588->meta->bb_1_bb_time_table)) {
              auto x_3617 = UnSome(x_3588->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3617, x_3588, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3590, const auto &x_3591) {
        return x_3586(x_3591, ListNthExn(x_3588->children, x_3590), x_3589);
      });
}
Unit delete_value_x_3521(const auto &x_3587, const auto &x_3588, const auto &x_3589) {
  return x_3586(x_3587, x_3588, x_3589);
}
Unit x_3619(const auto &x_3620, const auto &x_3621, const auto &x_3622) {
  return ListMatch(
      x_3620,
      [&](const auto &x_3625) {
        auto x_3626 = Zro(x_3622);
        auto x_3627 = Zro(x_3626);
        auto x_3628 = Fst(x_3626);
        auto x_3629 = Fst(x_3622);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_5605 = x_3627;
        if (x_5605 == "attributes") {
          std::string x_5606 = x_3628;
          if (x_5606 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3621->attr, std::string("width"));
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3630 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3630, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->attr, std::string("width"), x_3629);
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3632 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3632, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5606 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3621->attr, std::string("image_height"));
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3634 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3634, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->attr, std::string("image_height"), x_3629);
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3636 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3636, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5606 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3621->attr, std::string("image_width"));
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3638 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3638, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->attr, std::string("image_width"), x_3629);
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3640 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3640, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5606 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3621->attr, std::string("height"));
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3642 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3642, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->attr, std::string("height"), x_3629);
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3644 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3644, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5606 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_3621->attr, std::string("viewBox"));
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3646 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3646, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->attr, std::string("viewBox"), x_3629);
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3648 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3648, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_5605 == "properties") {
          std::string x_5607 = x_3628;
          if (x_5607 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3621->prop, std::string("width"));
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3650 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3650, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->prop, std::string("width"), x_3629);
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3652 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3652, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5607 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3621->prop, std::string("flex-grow"));
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3654 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3654, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->prop, std::string("flex-grow"), x_3629);
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3656 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3656, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5607 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3621->prop, std::string("height"));
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3658 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3658, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->prop, std::string("height"), x_3629);
            if (IsSome(x_3621->meta->bb_0_bb_time_table)) {
              auto x_3660 = UnSome(x_3621->meta->bb_0_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3660, x_3621, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_5607 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3621->prop, std::string("display"));
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3662 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3662, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->prop, std::string("display"), x_3629);
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3664 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3664, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5607 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3621->prop, std::string("position"));
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3666 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3666, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->prop, std::string("position"), x_3629);
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3668 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3668, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5607 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3621->prop, std::string("flex-shrink"));
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3670 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3670, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->prop, std::string("flex-shrink"), x_3629);
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3672 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3672, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_5607 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_3621->prop, std::string("flex-direction"));
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3674 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3674, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_3621->prop, std::string("flex-direction"), x_3629);
            if (IsSome(x_3621->meta->bb_1_bb_time_table)) {
              auto x_3676 = UnSome(x_3621->meta->bb_1_bb_time_table);
              MetaWriteMetric();
              QueuePush(x_3676, x_3621, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_3623, const auto &x_3624) {
        return x_3619(x_3624, ListNthExn(x_3621->children, x_3623), x_3622);
      });
}
Unit replace_value_x_3519(const auto &x_3620, const auto &x_3621, const auto &x_3622) {
  return x_3619(x_3620, x_3621, x_3622);
}
Unit x_3678(const auto &x_3679, const auto &x_3680, const auto &x_3681) {
  auto x_3682 = ListHeadExn(x_3679);
  auto x_3683 = ListTailExn(x_3679);
  if (ListIsEmpty(x_3683)) {
    InputChangeMetric(IntAdd(node_size_x_3490(ListNthExn(x_3680->children, x_3682)), node_size_x_3490(x_3681)));
    auto x_3684 = ListSplitN(x_3680->children, x_3682);
    auto x_3685 = Zro(x_3684);
    auto x_3686 = Fst(x_3684);
    auto x_3687 = ListHeadExn(x_3686);
    auto x_3688 = ListTailExn(x_3686);
    x_3680->children = ListAppend(x_3685, x_3688);
    x_3687->meta->alive = false;
    OptionMatch(
        x_3687->prev, [&](const auto &x_3690) { return MakeUnit(); },
        [&](const auto &x_3689) {
          x_3689->next = ToPath(x_3687->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3687->next, [&](const auto &x_3692) { return MakeUnit(); },
        [&](const auto &x_3691) {
          x_3691->prev = ToPath(x_3687->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3685)) {
      x_3680->first = ToPath(ListHead(x_3688));
    }
    if (ListIsEmpty(x_3688)) {
      x_3680->last = ToPath(ListLast(x_3685));
    }
    OptionMatch(
        x_3687->next, [&](const auto &x_3696) { return MakeUnit(); },
        [&](const auto &x_3693) {
          if (IsSome(x_3693->meta->bb_1_bb_time_table)) {
            auto x_3694 = UnSome(x_3693->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3694, x_3693, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3680->children)) {
      if (IsSome(x_3680->meta->bb_0_bb_time_table)) {
        auto x_3697 = UnSome(x_3680->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3697, x_3680, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3688)) {
      if (IsSome(x_3680->meta->bb_0_bb_time_table)) {
        auto x_3699 = UnSome(x_3680->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3699, x_3680, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3687->next, [&](const auto &x_3704) { return MakeUnit(); },
        [&](const auto &x_3701) {
          if (IsSome(x_3701->meta->bb_0_bb_time_table)) {
            auto x_3702 = UnSome(x_3701->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3702, x_3701, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3680->children)) {
      if (IsSome(x_3680->meta->bb_2_bb_time_table)) {
        auto x_3705 = UnSome(x_3680->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3705, x_3680, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3688)) {
      if (IsSome(x_3680->meta->bb_2_bb_time_table)) {
        auto x_3707 = UnSome(x_3680->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3707, x_3680, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3687->next, [&](const auto &x_3712) { return MakeUnit(); },
        [&](const auto &x_3709) {
          if (IsSome(x_3709->meta->bb_2_bb_time_table)) {
            auto x_3710 = UnSome(x_3709->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3710, x_3709, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_3713 = ListSplitN(x_3680->children, x_3682);
    auto x_3714 = Zro(x_3713);
    auto x_3715 = Fst(x_3713);
    x_3680->children = ListAppend(x_3714, Cons(x_3681, x_3715));
    if (ListIsEmpty(x_3714)) {
      x_3680->first = x_3681.get();
    }
    if (ListIsEmpty(x_3715)) {
      x_3680->last = x_3681.get();
    }
    OptionMatch(
        ListLast(x_3714),
        [&](const auto &x_3717) {
          x_3681->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3716) {
          x_3681->prev = x_3716.get();
          x_3716->next = x_3681.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3715),
        [&](const auto &x_3719) {
          x_3681->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3718) {
          x_3681->next = x_3718.get();
          x_3718->prev = x_3681.get();
          return MakeUnit();
        });
    x_3681->parent = x_3680.get();
    auto x_3720 = (x_3681->parent);
    if (IsSome(x_3720->meta->pass_0_proc_time_table)) {
      auto x_3723 = OptionMatch(
          x_3681->prev, [&](const auto &x_3722) { return NextTotalOrder(UnSome(x_3720->meta->bb_1_bb_time_table)); },
          [&](const auto &x_3721) { return NextTotalOrder(UnSome(x_3721->meta->pass_0_proc_time_table)); });
      x_3681->meta->pass_0_proc_time_table = x_3723;
      MetaWriteMetric();
      QueueForcePush(x_3723, x_3681, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_3681->next, [&](const auto &x_3728) { return MakeUnit(); },
        [&](const auto &x_3725) {
          if (IsSome(x_3725->meta->bb_1_bb_time_table)) {
            auto x_3726 = UnSome(x_3725->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3726, x_3725, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3680->children)) {
      if (IsSome(x_3680->meta->bb_0_bb_time_table)) {
        auto x_3729 = UnSome(x_3680->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3729, x_3680, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3715)) {
      if (IsSome(x_3680->meta->bb_0_bb_time_table)) {
        auto x_3731 = UnSome(x_3680->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3731, x_3680, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3681->next, [&](const auto &x_3736) { return MakeUnit(); },
        [&](const auto &x_3733) {
          if (IsSome(x_3733->meta->bb_0_bb_time_table)) {
            auto x_3734 = UnSome(x_3733->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3734, x_3733, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_3737 = (x_3681->parent);
    if (IsSome(x_3737->meta->pass_1_proc_time_table)) {
      auto x_3740 = OptionMatch(
          x_3681->prev, [&](const auto &x_3739) { return NextTotalOrder(UnSome(x_3737->meta->bb_2_bb_time_table)); },
          [&](const auto &x_3738) { return NextTotalOrder(UnSome(x_3738->meta->pass_1_proc_time_table)); });
      x_3681->meta->pass_1_proc_time_table = x_3740;
      MetaWriteMetric();
      QueueForcePush(x_3740, x_3681, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_3680->children)) {
      if (IsSome(x_3680->meta->bb_2_bb_time_table)) {
        auto x_3742 = UnSome(x_3680->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3742, x_3680, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3715)) {
      if (IsSome(x_3680->meta->bb_2_bb_time_table)) {
        auto x_3744 = UnSome(x_3680->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3744, x_3680, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3681->next, [&](const auto &x_3749) { return MakeUnit(); },
        [&](const auto &x_3746) {
          if (IsSome(x_3746->meta->bb_2_bb_time_table)) {
            auto x_3747 = UnSome(x_3746->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3747, x_3746, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_3678(x_3683, ListNthExn(x_3680->children, x_3682), x_3681);
  }
}
Unit replace_node_x_3517(const auto &x_3679, const auto &x_3680, const auto &x_3681) {
  return x_3678(x_3679, x_3680, x_3681);
}
Unit x_3750(const auto &x_3751) {
  ListIter2(x_3751->children, [&](const auto &x_3752, const auto &x_3753) {
    x_3752->parent = x_3751.get();
    x_3753->parent = x_3751.get();
    x_3752->next = x_3753.get();
    x_3753->prev = x_3752.get();
    x_3750(x_3752);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3751->children),
      [&](const auto &x_3755) {
        x_3751->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3754) {
        x_3751->first = x_3754.get();
        x_3754->parent = x_3751.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3751->children),
      [&](const auto &x_3757) {
        x_3751->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3756) {
        x_3751->last = x_3756.get();
        x_3756->parent = x_3751.get();
        x_3750(x_3756);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3515(const auto &x_3751) { return x_3750(x_3751); }
Unit x_3758(const auto &x_3759, const auto &x_3760, const auto &x_3761) {
  auto x_3762 = ListHeadExn(x_3759);
  auto x_3763 = ListTailExn(x_3759);
  if (ListIsEmpty(x_3763)) {
    InputChangeMetric(node_size_x_3490(ListNthExn(x_3760->children, x_3762)));
    auto x_3764 = ListSplitN(x_3760->children, x_3762);
    auto x_3765 = Zro(x_3764);
    auto x_3766 = Fst(x_3764);
    auto x_3767 = ListHeadExn(x_3766);
    auto x_3768 = ListTailExn(x_3766);
    x_3760->children = ListAppend(x_3765, x_3768);
    x_3767->meta->alive = false;
    OptionMatch(
        x_3767->prev, [&](const auto &x_3770) { return MakeUnit(); },
        [&](const auto &x_3769) {
          x_3769->next = ToPath(x_3767->next);
          return MakeUnit();
        });
    OptionMatch(
        x_3767->next, [&](const auto &x_3772) { return MakeUnit(); },
        [&](const auto &x_3771) {
          x_3771->prev = ToPath(x_3767->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_3765)) {
      x_3760->first = ToPath(ListHead(x_3768));
    }
    if (ListIsEmpty(x_3768)) {
      x_3760->last = ToPath(ListLast(x_3765));
    }
    OptionMatch(
        x_3767->next, [&](const auto &x_3776) { return MakeUnit(); },
        [&](const auto &x_3773) {
          if (IsSome(x_3773->meta->bb_1_bb_time_table)) {
            auto x_3774 = UnSome(x_3773->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3774, x_3773, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3760->children)) {
      if (IsSome(x_3760->meta->bb_0_bb_time_table)) {
        auto x_3777 = UnSome(x_3760->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3777, x_3760, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3768)) {
      if (IsSome(x_3760->meta->bb_0_bb_time_table)) {
        auto x_3779 = UnSome(x_3760->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3779, x_3760, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3767->next, [&](const auto &x_3784) { return MakeUnit(); },
        [&](const auto &x_3781) {
          if (IsSome(x_3781->meta->bb_0_bb_time_table)) {
            auto x_3782 = UnSome(x_3781->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3782, x_3781, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_3760->children)) {
      if (IsSome(x_3760->meta->bb_2_bb_time_table)) {
        auto x_3785 = UnSome(x_3760->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3785, x_3760, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3768)) {
      if (IsSome(x_3760->meta->bb_2_bb_time_table)) {
        auto x_3787 = UnSome(x_3760->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3787, x_3760, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3767->next, [&](const auto &x_3792) { return MakeUnit(); },
        [&](const auto &x_3789) {
          if (IsSome(x_3789->meta->bb_2_bb_time_table)) {
            auto x_3790 = UnSome(x_3789->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3790, x_3789, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_3758(x_3763, ListNthExn(x_3760->children, x_3762), x_3761);
  }
}
Unit remove_node_x_3513(const auto &x_3759, const auto &x_3760, const auto &x_3761) {
  return x_3758(x_3759, x_3760, x_3761);
}
Unit x_3793(const auto &x_3794) {
  if (!QueueIsEmpty()) {
    auto x_3795 = QueuePeek();
    auto x_3796 = Zro(x_3795);
    auto x_3797 = Fst(x_3795);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_3797.n->meta->alive) {
      RFMatch(
          x_3797.rf,
          [&](const auto &x_3800) {
            std::string x_5608 = x_3800;
            if (x_5608 == "bb_1") {
              return eval_stmts_x_3801(x_3797.n);
            } else if (x_5608 == "bb_0") {
              return eval_stmts_x_3802(x_3797.n);
            } else if (x_5608 == "bb_2") {
              return eval_stmts_x_3803(x_3797.n);
            } else {
              Panic();
            }
          },
          [&](const auto &x_3798) {
            auto x_3799 = ReadRef(current_time);
            WriteRef(current_time, x_3796);
            [&]() {
              std::string x_5609 = x_3798;
              if (x_5609 == "pass_0") {
                eval_stmts_x_3502(x_3797.n);
                x_3797.n->meta->pass_0_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else if (x_5609 == "pass_1") {
                eval_stmts_x_3503(x_3797.n);
                x_3797.n->meta->pass_1_proc_time_table = ReadRef(current_time);
                return MakeUnit();
              } else {
                Panic();
              }
            }();
            WriteRef(current_time, x_3799);
            return MakeUnit();
          });
    }
    auto x_3804 = Zro(QueuePop());
    x_3793(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_3511(const auto &x_3794) { return x_3793(x_3794); }
Unit x_3805(const auto &x_3806, const auto &x_3807, const auto &x_3808) {
  auto x_3809 = ListHeadExn(x_3806);
  auto x_3810 = ListTailExn(x_3806);
  if (ListIsEmpty(x_3810)) {
    InputChangeMetric(node_size_x_3490(x_3808));
    auto x_3811 = ListSplitN(x_3807->children, x_3809);
    auto x_3812 = Zro(x_3811);
    auto x_3813 = Fst(x_3811);
    x_3807->children = ListAppend(x_3812, Cons(x_3808, x_3813));
    if (ListIsEmpty(x_3812)) {
      x_3807->first = x_3808.get();
    }
    if (ListIsEmpty(x_3813)) {
      x_3807->last = x_3808.get();
    }
    OptionMatch(
        ListLast(x_3812),
        [&](const auto &x_3815) {
          x_3808->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3814) {
          x_3808->prev = x_3814.get();
          x_3814->next = x_3808.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_3813),
        [&](const auto &x_3817) {
          x_3808->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_3816) {
          x_3808->next = x_3816.get();
          x_3816->prev = x_3808.get();
          return MakeUnit();
        });
    x_3808->parent = x_3807.get();
    auto x_3818 = (x_3808->parent);
    if (IsSome(x_3818->meta->pass_0_proc_time_table)) {
      auto x_3821 = OptionMatch(
          x_3808->prev, [&](const auto &x_3820) { return NextTotalOrder(UnSome(x_3818->meta->bb_1_bb_time_table)); },
          [&](const auto &x_3819) { return NextTotalOrder(UnSome(x_3819->meta->pass_0_proc_time_table)); });
      x_3808->meta->pass_0_proc_time_table = x_3821;
      MetaWriteMetric();
      QueueForcePush(x_3821, x_3808, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_3808->next, [&](const auto &x_3826) { return MakeUnit(); },
        [&](const auto &x_3823) {
          if (IsSome(x_3823->meta->bb_1_bb_time_table)) {
            auto x_3824 = UnSome(x_3823->meta->bb_1_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3824, x_3823, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_3807->children)) {
      if (IsSome(x_3807->meta->bb_0_bb_time_table)) {
        auto x_3827 = UnSome(x_3807->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3827, x_3807, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_3813)) {
      if (IsSome(x_3807->meta->bb_0_bb_time_table)) {
        auto x_3829 = UnSome(x_3807->meta->bb_0_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3829, x_3807, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_3808->next, [&](const auto &x_3834) { return MakeUnit(); },
        [&](const auto &x_3831) {
          if (IsSome(x_3831->meta->bb_0_bb_time_table)) {
            auto x_3832 = UnSome(x_3831->meta->bb_0_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3832, x_3831, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_3835 = (x_3808->parent);
    if (IsSome(x_3835->meta->pass_1_proc_time_table)) {
      auto x_3838 = OptionMatch(
          x_3808->prev, [&](const auto &x_3837) { return NextTotalOrder(UnSome(x_3835->meta->bb_2_bb_time_table)); },
          [&](const auto &x_3836) { return NextTotalOrder(UnSome(x_3836->meta->pass_1_proc_time_table)); });
      x_3808->meta->pass_1_proc_time_table = x_3838;
      MetaWriteMetric();
      QueueForcePush(x_3838, x_3808, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_3807->children)) {
      if (IsSome(x_3807->meta->bb_2_bb_time_table)) {
        auto x_3840 = UnSome(x_3807->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3840, x_3807, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_3813)) {
      if (IsSome(x_3807->meta->bb_2_bb_time_table)) {
        auto x_3842 = UnSome(x_3807->meta->bb_2_bb_time_table);
        MetaWriteMetric();
        QueuePush(x_3842, x_3807, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_3808->next, [&](const auto &x_3847) { return MakeUnit(); },
        [&](const auto &x_3844) {
          if (IsSome(x_3844->meta->bb_2_bb_time_table)) {
            auto x_3845 = UnSome(x_3844->meta->bb_2_bb_time_table);
            MetaWriteMetric();
            return QueuePush(x_3845, x_3844, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_3805(x_3810, ListNthExn(x_3807->children, x_3809), x_3808);
  }
}
Unit add_node_x_3509(const auto &x_3806, const auto &x_3807, const auto &x_3808) {
  return x_3805(x_3806, x_3807, x_3808);
}
Unit x_3848(const auto &x_3849) {
  ListIter2(x_3849->children, [&](const auto &x_3850, const auto &x_3851) {
    x_3850->parent = x_3849.get();
    x_3851->parent = x_3849.get();
    x_3850->next = x_3851.get();
    x_3851->prev = x_3850.get();
    x_3848(x_3850);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3849->children),
      [&](const auto &x_3853) {
        x_3849->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3852) {
        x_3849->first = x_3852.get();
        x_3852->parent = x_3849.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3849->children),
      [&](const auto &x_3855) {
        x_3849->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3854) {
        x_3849->last = x_3854.get();
        x_3854->parent = x_3849.get();
        x_3848(x_3854);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3507(const auto &x_3849) { return x_3848(x_3849); }
Unit eval_stmts_x_3503(const auto &x_3856) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3857) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    x_3856->meta->bb_2_bb_time_table = ReadRef(current_time);
    eval_stmts_x_3803(x_3856);
    ListIter(x_3856->children, [&](const auto &x_3858) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_3503(x_3858);
      x_3858->meta->pass_1_proc_time_table = ReadRef(current_time);
      return MakeUnit();
    });
    return MakeUnit();
  })));
}
Unit eval_stmts_x_3502(const auto &x_3859) {
  return MetricRecordEval(Zro(Timed([&](const auto &x_3860) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    x_3859->meta->bb_1_bb_time_table = ReadRef(current_time);
    eval_stmts_x_3801(x_3859);
    ListIter(x_3859->children, [&](const auto &x_3861) {
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_3502(x_3861);
      x_3861->meta->pass_0_proc_time_table = ReadRef(current_time);
      return MakeUnit();
    });
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    x_3859->meta->bb_0_bb_time_table = ReadRef(current_time);
    eval_stmts_x_3802(x_3859);
    return MakeUnit();
  })));
}
Unit x_3862(const auto &x_3863) {
  ListIter2(x_3863->children, [&](const auto &x_3864, const auto &x_3865) {
    x_3864->parent = x_3863.get();
    x_3865->parent = x_3863.get();
    x_3864->next = x_3865.get();
    x_3865->prev = x_3864.get();
    x_3862(x_3864);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_3863->children),
      [&](const auto &x_3867) {
        x_3863->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3866) {
        x_3863->first = x_3866.get();
        x_3866->parent = x_3863.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_3863->children),
      [&](const auto &x_3869) {
        x_3863->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_3868) {
        x_3863->last = x_3868.get();
        x_3868->parent = x_3863.get();
        x_3862(x_3868);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_3499(const auto &x_3863) { return x_3862(x_3863); }
int64_t x_3870(const auto &x_3871) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3871->children, [&](const auto &x_3872) { return x_3870(x_3872); }));
}
int64_t node_size_x_3490(const auto &x_3871) { return x_3870(x_3871); }
int64_t x_3873(const auto &x_3874) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_3874->children, [&](const auto &x_3875) { return x_3873(x_3875); }));
}
int64_t layout_size_x_3489(const auto &x_3874) { return x_3873(x_3874); }
LayoutNode x_3876(const auto &x_3877) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_3877)),
                                [&](const auto &x_3878) { return x_3876(x_3878); }));
}
LayoutNode json_to_layout_node_x_3488(const auto &x_3877) { return x_3876(x_3877); }
Node x_3879(const auto &x_3880) {
  return MakeNode(x_3880->name, x_3880->attr, x_3880->prop, x_3880->extern_id,
                  ListMap(x_3880->children, [&](const auto &x_3881) { return x_3879(x_3881); }));
}
Node node_to_fs_node_x_3487(const auto &x_3880) { return x_3879(x_3880); }
Node x_3882(const auto &x_3883) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_3883)), JsonToDict(JsonMember(std::string("attributes"), x_3883)),
      JsonToDict(JsonMember(std::string("properties"), x_3883)), JsonToInt(JsonMember(std::string("id"), x_3883)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_3883)),
              [&](const auto &x_3884) { return x_3882(x_3884); }));
}
Node json_to_node_aux_x_3486(const auto &x_3883) { return x_3882(x_3883); }
int main() {
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_3491) {
    PrintEndline(std::string("RUNNING PQ_D"));
    return WithInFile(std::string("command.json"), [&](const auto &x_3492) {
      auto x_3493 = MakeRef(static_cast<int64_t>(0));
      auto x_3494 = FreshMetric();
      auto x_3495 = JsonOfString(InputLine(x_3492));
      auto x_3496 = JsonOfString(InputLine(x_3492));
      auto x_3497 = MakeStack();
      PushStack(x_3497, x_3495);
      PushStack(x_3497, x_3496);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3495)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3496)), std::string("layout_init")));
      auto x_3500 = [&]() {
        auto x_3498 = json_to_node_aux_x_3486(JsonMember(std::string("node"), x_3495));
        x_3498->parent = nullptr;
        x_3498->prev = nullptr;
        x_3498->next = nullptr;
        set_children_relation_x_3499(x_3498);
        return x_3498;
      }();
      auto x_3501 = json_to_layout_node_x_3488(JsonMember(std::string("node"), x_3496));
      OutputChangeMetric(layout_size_x_3489(x_3501));
      InputChangeMetric(node_size_x_3490(x_3500));
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_3502(x_3500);
      x_3500->meta->pass_0_proc_time_table = ReadRef(current_time);
      WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
      eval_stmts_x_3503(x_3500);
      x_3500->meta->pass_1_proc_time_table = ReadRef(current_time);
      JsonToChannel(x_3491, [&]() {
        auto x_5610 = FreshJson();
        WriteJson(x_5610, std::string("name"), std::string("PQ_D"));
        WriteJson(x_5610, std::string("diff_num"), ReadRef(x_3493));
        WriteJson(x_5610, std::string("read_count"), MetricReadCount());
        WriteJson(x_5610, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_5610, std::string("write_count"), MetricWriteCount());
        WriteJson(x_5610, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_5610, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_5610, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_5610, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_5610, std::string("overhead_time"), MetricOverheadCount());
        WriteJson(x_5610, std::string("eval_time"), MetricEvalCount());
        WriteJson(x_5610, std::string("html"), std::string(""));
        WriteJson(x_5610, std::string("command"), StackToList(x_3497));
        return x_5610;
      }());
      OutputString(x_3491, std::string("\n"));
      ClearStack(x_3497);
      WriteRef(x_3493, IntAdd(ReadRef(x_3493), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_3492, [&](const auto &x_3504) {
        auto x_3505 = JsonOfString(x_3504);
        PushStack(x_3497, x_3505);
        std::string x_5612 = JsonToString(JsonMember(std::string("name"), x_3505));
        if (x_5612 == "add") {
          return add_node_x_3509(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                         [&](const auto &x_3508) { return JsonToInt(x_3508); }),
                                 x_3500, [&]() {
                                   auto x_3506 = json_to_node_aux_x_3486(JsonMember(std::string("node"), x_3505));
                                   x_3506->parent = nullptr;
                                   x_3506->prev = nullptr;
                                   x_3506->next = nullptr;
                                   set_children_relation_x_3507(x_3506);
                                   return x_3506;
                                 }());
        } else if (x_5612 == "recalculate") {
          MetricRecordOverhead(Zro(Timed([&](const auto &x_3510) {
            recalculate_internal_x_3511(MakeUnit());
            return MakeUnit();
          })));
          JsonToChannel(x_3491, [&]() {
            auto x_5611 = FreshJson();
            WriteJson(x_5611, std::string("name"), std::string("PQ_D"));
            WriteJson(x_5611, std::string("diff_num"), ReadRef(x_3493));
            WriteJson(x_5611, std::string("read_count"), MetricReadCount());
            WriteJson(x_5611, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_5611, std::string("write_count"), MetricWriteCount());
            WriteJson(x_5611, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_5611, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_5611, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_5611, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_5611, std::string("overhead_time"), MetricOverheadCount());
            WriteJson(x_5611, std::string("eval_time"), MetricEvalCount());
            WriteJson(x_5611, std::string("html"), std::string(""));
            WriteJson(x_5611, std::string("command"), StackToList(x_3497));
            return x_5611;
          }());
          OutputString(x_3491, std::string("\n"));
          ClearStack(x_3497);
          WriteRef(x_3493, IntAdd(ReadRef(x_3493), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_5612 == "remove") {
          return remove_node_x_3513(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                            [&](const auto &x_3512) { return JsonToInt(x_3512); }),
                                    x_3500, MakeUnit());
        } else if (x_5612 == "replace") {
          return replace_node_x_3517(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                             [&](const auto &x_3516) { return JsonToInt(x_3516); }),
                                     x_3500, [&]() {
                                       auto x_3514 = json_to_node_aux_x_3486(JsonMember(std::string("node"), x_3505));
                                       x_3514->parent = nullptr;
                                       x_3514->prev = nullptr;
                                       x_3514->next = nullptr;
                                       set_children_relation_x_3515(x_3514);
                                       return x_3514;
                                     }());
        } else if (x_5612 == "replace_value") {
          return replace_value_x_3519(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                              [&](const auto &x_3518) { return JsonToInt(x_3518); }),
                                      x_3500,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3505)),
                                                        JsonToString(JsonMember(std::string("key"), x_3505))),
                                               JsonToValue(JsonMember(std::string("value"), x_3505))));
        } else if (x_5612 == "delete_value") {
          return delete_value_x_3521(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                             [&](const auto &x_3520) { return JsonToInt(x_3520); }),
                                     x_3500,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_3505)),
                                              JsonToString(JsonMember(std::string("key"), x_3505))));
        } else if (x_5612 == "insert_value") {
          return insert_value_x_3523(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                             [&](const auto &x_3522) { return JsonToInt(x_3522); }),
                                     x_3500,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3505)),
                                                       JsonToString(JsonMember(std::string("key"), x_3505))),
                                              JsonToValue(JsonMember(std::string("value"), x_3505))));
        } else if (x_5612 == "layout_remove") {
          return remove_layout_node_x_3525(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                                   [&](const auto &x_3524) { return JsonToInt(x_3524); }),
                                           x_3501, MakeUnit());
        } else if (x_5612 == "layout_add") {
          return add_layout_node_x_3527(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                                [&](const auto &x_3526) { return JsonToInt(x_3526); }),
                                        x_3501, json_to_layout_node_x_3488(JsonMember(std::string("node"), x_3505)));
        } else if (x_5612 == "layout_replace") {
          return replace_layout_node_x_3529(ListMap(JsonToList(JsonMember(std::string("path"), x_3505)),
                                                    [&](const auto &x_3528) { return JsonToInt(x_3528); }),
                                            x_3501,
                                            json_to_layout_node_x_3488(JsonMember(std::string("node"), x_3505)));
        } else if (x_5612 == "layout_info_changed") {
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