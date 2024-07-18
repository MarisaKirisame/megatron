#include "header.h"
struct MetaNode {
  std::unordered_map<std::string, bool> BBDirtied;
  std::unordered_map<std::string, Unit> ProcInited;
  std::unordered_map<std::string, bool> RecursiveProcDirtied;
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
Unit var_modified_x_3806(const auto &x_3816);
auto eval_expr_x_3803(const auto &x_3820);
Unit var_modified_x_3801(const auto &x_3837);
auto eval_expr_x_3798(const auto &x_3839);
Unit var_modified_x_3796(const auto &x_3848);
auto eval_expr_x_3793(const auto &x_3851);
Unit var_modified_x_3791(const auto &x_3904);
auto eval_expr_x_3788(const auto &x_3909);
Unit var_modified_x_3786(const auto &x_3934);
auto eval_expr_x_3783(const auto &x_3938);
Unit var_modified_x_3781(const auto &x_3947);
auto eval_expr_x_3778(const auto &x_3950);
Unit var_modified_x_3776(const auto &x_4003);
auto eval_expr_x_3773(const auto &x_4008);
Unit var_modified_x_3771(const auto &x_4029);
auto eval_expr_x_3768(const auto &x_4031);
Unit var_modified_x_3766(const auto &x_4052);
auto eval_expr_x_3763(const auto &x_4054);
Unit var_modified_x_3761(const auto &x_4067);
auto eval_expr_x_3758(const auto &x_4070);
Unit var_modified_x_3756(const auto &x_4091);
auto eval_expr_x_3753(const auto &x_4093);
Unit var_modified_x_3751(const auto &x_4098);
auto eval_expr_x_3748(const auto &x_4100);
Unit var_modified_x_3745(const auto &x_4105);
auto eval_expr_x_3742(const auto &x_4114);
Unit var_modified_x_3740(const auto &x_4191);
auto eval_expr_x_3737(const auto &x_4193);
Unit var_modified_x_3735(const auto &x_4210);
auto eval_expr_x_3732(const auto &x_4214);
Unit var_modified_x_3730(const auto &x_4219);
auto eval_expr_x_3727(const auto &x_4223);
Unit var_modified_x_3725(const auto &x_4232);
auto eval_expr_x_3722(const auto &x_4234);
Unit var_modified_x_3720(const auto &x_4235);
auto eval_expr_x_3717(const auto &x_4237);
Unit var_modified_x_3715(const auto &x_4242);
auto eval_expr_x_3712(const auto &x_4245);
Unit var_modified_x_3710(const auto &x_4256);
auto eval_expr_x_3707(const auto &x_4258);
Unit var_modified_x_3705(const auto &x_4263);
auto eval_expr_x_3702(const auto &x_4266);
Unit var_modified_x_3700(const auto &x_4277);
auto eval_expr_x_3697(const auto &x_4280);
Unit var_modified_x_3695(const auto &x_4305);
auto eval_expr_x_3692(const auto &x_4309);
Unit var_modified_x_3690(const auto &x_4334);
auto eval_expr_x_3687(const auto &x_4336);
Unit var_modified_x_3685(const auto &x_4339);
auto eval_expr_x_3682(const auto &x_4344);
Unit var_modified_x_3680(const auto &x_4353);
auto eval_expr_x_3677(const auto &x_4358);
Unit var_modified_x_3675(const auto &x_4367);
auto eval_expr_x_3672(const auto &x_4370);
Unit var_modified_x_3670(const auto &x_4373);
auto eval_expr_x_3667(const auto &x_4376);
Unit var_modified_x_3665(const auto &x_4379);
auto eval_expr_x_3662(const auto &x_4383);
Unit var_modified_x_3660(const auto &x_4386);
auto eval_expr_x_3657(const auto &x_4390);
Unit var_modified_x_3654(const auto &x_4393);
auto eval_expr_x_3651(const auto &x_4400);
Unit var_modified_x_3649(const auto &x_4429);
auto eval_expr_x_3646(const auto &x_4436);
Unit var_modified_x_3644(const auto &x_4449);
auto eval_expr_x_3641(const auto &x_4456);
Unit var_modified_x_3639(const auto &x_4465);
auto eval_expr_x_3636(const auto &x_4467);
Unit var_modified_x_3634(const auto &x_4476);
auto eval_expr_x_3631(const auto &x_4479);
Unit var_modified_x_3629(const auto &x_4624);
auto eval_expr_x_3626(const auto &x_4626);
Unit var_modified_x_3624(const auto &x_4675);
auto eval_expr_x_3621(const auto &x_4678);
Unit var_modified_x_3619(const auto &x_4681);
auto eval_expr_x_3616(const auto &x_4683);
Unit var_modified_x_3614(const auto &x_4692);
auto eval_expr_x_3611(const auto &x_4699);
Unit var_modified_x_3609(const auto &x_4708);
auto eval_expr_x_3606(const auto &x_4715);
Unit var_modified_x_3604(const auto &x_4724);
auto eval_expr_x_3601(const auto &x_4729);
Unit var_modified_x_3599(const auto &x_4742);
auto eval_expr_x_3596(const auto &x_4744);
Unit var_modified_x_3594(const auto &x_4753);
auto eval_expr_x_3591(const auto &x_4756);
Unit var_modified_x_3589(const auto &x_4909);
auto eval_expr_x_3586(const auto &x_4911);
Unit var_modified_x_3584(const auto &x_4916);
auto eval_expr_x_3581(const auto &x_4918);
Unit var_modified_x_3579(const auto &x_4967);
auto eval_expr_x_3576(const auto &x_4969);
Unit var_modified_x_3574(const auto &x_4982);
auto eval_expr_x_3571(const auto &x_4985);
Unit var_modified_x_3568(const auto &x_4988);
auto eval_expr_x_3565(const auto &x_4992);
Unit var_modified_x_3563(const auto &x_5009);
auto eval_expr_x_3560(const auto &x_5011);
Unit var_modified_x_3558(const auto &x_5020);
auto eval_expr_x_3555(const auto &x_5023);
Unit var_modified_x_3553(const auto &x_5076);
auto eval_expr_x_3550(const auto &x_5081);
Unit var_modified_x_3548(const auto &x_5106);
auto eval_expr_x_3545(const auto &x_5110);
Unit var_modified_x_3543(const auto &x_5119);
auto eval_expr_x_3540(const auto &x_5122);
Unit var_modified_x_3538(const auto &x_5175);
auto eval_expr_x_3535(const auto &x_5180);
Unit var_modified_x_3533(const auto &x_5201);
auto eval_expr_x_3530(const auto &x_5203);
Unit var_modified_x_3528(const auto &x_5224);
auto eval_expr_x_3525(const auto &x_5226);
Unit var_modified_x_3523(const auto &x_5239);
auto eval_expr_x_3520(const auto &x_5242);
Unit var_modified_x_3518(const auto &x_5263);
auto eval_expr_x_3515(const auto &x_5265);
Unit var_modified_x_3513(const auto &x_5270);
auto eval_expr_x_3510(const auto &x_5272);
Unit var_modified_x_3507(const auto &x_5277);
auto eval_expr_x_3504(const auto &x_5286);
Unit var_modified_x_3502(const auto &x_5363);
auto eval_expr_x_3499(const auto &x_5365);
Unit var_modified_x_3497(const auto &x_5382);
auto eval_expr_x_3494(const auto &x_5386);
Unit var_modified_x_3492(const auto &x_5391);
auto eval_expr_x_3489(const auto &x_5395);
Unit var_modified_x_3487(const auto &x_5404);
auto eval_expr_x_3484(const auto &x_5406);
Unit var_modified_x_3482(const auto &x_5407);
auto eval_expr_x_3479(const auto &x_5409);
Unit var_modified_x_3477(const auto &x_5414);
auto eval_expr_x_3474(const auto &x_5417);
Unit var_modified_x_3472(const auto &x_5428);
auto eval_expr_x_3469(const auto &x_5430);
Unit var_modified_x_3467(const auto &x_5435);
auto eval_expr_x_3464(const auto &x_5438);
Unit var_modified_x_3462(const auto &x_5449);
auto eval_expr_x_3459(const auto &x_5452);
Unit var_modified_x_3457(const auto &x_5477);
auto eval_expr_x_3454(const auto &x_5481);
Unit var_modified_x_3452(const auto &x_5506);
auto eval_expr_x_3449(const auto &x_5508);
Unit var_modified_x_3447(const auto &x_5511);
auto eval_expr_x_3444(const auto &x_5516);
Unit var_modified_x_3442(const auto &x_5525);
auto eval_expr_x_3439(const auto &x_5530);
Unit var_modified_x_3437(const auto &x_5539);
auto eval_expr_x_3434(const auto &x_5542);
Unit var_modified_x_3432(const auto &x_5545);
auto eval_expr_x_3429(const auto &x_5548);
Unit var_modified_x_3427(const auto &x_5551);
auto eval_expr_x_3424(const auto &x_5555);
Unit var_modified_x_3422(const auto &x_5558);
auto eval_expr_x_3419(const auto &x_5562);
Unit var_modified_x_3416(const auto &x_5565);
auto eval_expr_x_3413(const auto &x_5572);
Unit var_modified_x_3411(const auto &x_5601);
auto eval_expr_x_3408(const auto &x_5608);
Unit var_modified_x_3406(const auto &x_5621);
auto eval_expr_x_3403(const auto &x_5628);
Unit var_modified_x_3401(const auto &x_5637);
auto eval_expr_x_3398(const auto &x_5639);
Unit var_modified_x_3396(const auto &x_5648);
auto eval_expr_x_3393(const auto &x_5651);
Unit var_modified_x_3391(const auto &x_5796);
auto eval_expr_x_3388(const auto &x_5798);
Unit var_modified_x_3386(const auto &x_5847);
auto eval_expr_x_3383(const auto &x_5850);
Unit var_modified_x_3381(const auto &x_5853);
auto eval_expr_x_3378(const auto &x_5855);
Unit var_modified_x_3376(const auto &x_5864);
auto eval_expr_x_3373(const auto &x_5871);
Unit var_modified_x_3371(const auto &x_5880);
auto eval_expr_x_3368(const auto &x_5887);
Unit var_modified_x_3366(const auto &x_5896);
auto eval_expr_x_3363(const auto &x_5901);
Unit var_modified_x_3361(const auto &x_5914);
auto eval_expr_x_3358(const auto &x_5916);
Unit var_modified_x_3356(const auto &x_5925);
auto eval_expr_x_3353(const auto &x_5928);
Unit var_modified_x_3351(const auto &x_6081);
auto eval_expr_x_3348(const auto &x_6083);
Unit var_modified_x_3346(const auto &x_6088);
auto eval_expr_x_3343(const auto &x_6090);
Unit var_modified_x_3341(const auto &x_6139);
auto eval_expr_x_3338(const auto &x_6141);
Unit var_modified_x_3336(const auto &x_6154);
auto eval_expr_x_3333(const auto &x_6157);
Unit eval_stmts_x_3296(const auto &x_3332);
Unit eval_stmts_x_3294(const auto &x_3418);
Unit eval_stmts_x_3291(const auto &x_3509);
Unit eval_stmts_x_3262(const auto &x_3570);
Unit eval_stmts_x_3260(const auto &x_3656);
Unit eval_stmts_x_3256(const auto &x_3747);
Unit x_3808(const auto &x_3809);
Unit x_3812(const auto &x_3813);
Unit x_3129(const auto &x_3130, const auto &x_3131, const auto &x_3132);
Unit x_3136(const auto &x_3137, const auto &x_3138, const auto &x_3139);
Unit x_3143(const auto &x_3144, const auto &x_3145, const auto &x_3146);
Unit x_3150(const auto &x_3151, const auto &x_3152, const auto &x_3153);
Unit x_3162(const auto &x_3163, const auto &x_3164, const auto &x_3165);
Unit x_3171(const auto &x_3172, const auto &x_3173, const auto &x_3174);
Unit x_3182(const auto &x_3183, const auto &x_3184, const auto &x_3185);
Unit x_3217(const auto &x_3218);
Unit x_3225(const auto &x_3226, const auto &x_3227, const auto &x_3228);
Unit x_3246(const auto &x_3247);
Unit x_3254(const auto &x_3255);
Unit x_3258(const auto &x_3259);
Unit x_3263(const auto &x_3264, const auto &x_3265, const auto &x_3266);
Unit x_3282(const auto &x_3283);
Unit eval_stmts_x_3099(const auto &x_3290);
Unit eval_stmts_x_3098(const auto &x_3293);
Unit x_3297(const auto &x_3298);
Unit eval_stmts_x_3094(const auto &x_3305);
Unit eval_stmts_x_3093(const auto &x_3307);
Unit x_3309(const auto &x_3310);
int64_t x_3317(const auto &x_3318);
int64_t x_3320(const auto &x_3321);
LayoutNode x_3323(const auto &x_3324);
Node x_3326(const auto &x_3327);
Node x_3329(const auto &x_3330);
Unit var_modified_x_3806(const auto &x_3816) {
  auto x_6160 = [&](const auto &x_3819) {
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
        auto x_6161 = x_6160;
        x_6161(x_3817);
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
  auto x_6162 = [&](const auto &x_3838) {
    if (HashtblContain(x_3838->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3838->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3838);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6162(x_3837);
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
  auto x_6163 = [&](const auto &x_3849) {
    if (HashtblContain(x_3849->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3849->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3849);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6163(x_3848);
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
  auto x_6164 = [&](const auto &x_3908) {
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
        auto x_6165 = x_6164;
        x_6165(x_3906);
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
  auto x_6166 = [&](const auto &x_3937) {
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
        auto x_6167 = x_6166;
        x_6167(x_3935);
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
  auto x_6168 = [&](const auto &x_3948) {
    if (HashtblContain(x_3948->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3948->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_3948);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6168(x_3947);
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
  auto x_6169 = [&](const auto &x_4007) {
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
        auto x_6170 = x_6169;
        x_6170(x_4005);
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
  auto x_6171 = [&](const auto &x_4053) {
    if (HashtblContain(x_4053->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4053->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4053);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6171(x_4052);
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
  auto x_6172 = [&](const auto &x_4068) {
    if (HashtblContain(x_4068->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4068->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4068);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6172(x_4067);
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
  auto x_6173 = [&](const auto &x_4092) {
    if (HashtblContain(x_4092->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4092->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4092);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6173(x_4091);
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
  auto x_6174 = [&](const auto &x_4099) {
    if (HashtblContain(x_4099->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4099->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4099);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6174(x_4098);
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
  auto x_6175 = [&](const auto &x_4106) {
    if (HashtblContain(x_4106->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4106->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4106);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6175(x_4105);
  MakeUnit();
  auto x_6176 = [&](const auto &x_4109) {
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
        auto x_6179 = x_6176;
        x_6179(x_4107);
        return MakeUnit();
      });
  auto x_6177 = [&](const auto &x_4110) {
    if (HashtblContain(x_4110->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4110->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4110);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6177(x_4105);
  MakeUnit();
  auto x_6178 = [&](const auto &x_4113) {
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
        auto x_6180 = x_6178;
        x_6180(x_4111);
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
  auto x_6181 = [&](const auto &x_4211) {
    if (HashtblContain(x_4211->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4211->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4211);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6181(x_4210);
  MakeUnit();
  ListIter(x_4210->children, [&](const auto &x_4212) {
    if (HashtblContain(x_4212->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4212->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4212);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_6182 = [&](const auto &x_4213) {
    if (HashtblContain(x_4213->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4213->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4213);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6182(x_4210);
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
  auto x_6183 = [&](const auto &x_4220) {
    if (HashtblContain(x_4220->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4220->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4220);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6183(x_4219);
  MakeUnit();
  ListIter(x_4219->children, [&](const auto &x_4221) {
    if (HashtblContain(x_4221->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4221->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4221);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_6184 = [&](const auto &x_4222) {
    if (HashtblContain(x_4222->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4222->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4222);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6184(x_4219);
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
  auto x_6185 = [&](const auto &x_4236) {
    if (HashtblContain(x_4236->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4236->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4236);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6185(x_4235);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3717(const auto &x_4237) { return neq(x_4237->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_3715(const auto &x_4242) {
  auto x_6186 = [&](const auto &x_4243) {
    if (HashtblContain(x_4243->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4243->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4243);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6186(x_4242);
  MakeUnit();
  auto x_6187 = [&](const auto &x_4244) {
    if (HashtblContain(x_4244->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4244->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4244);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6187(x_4242);
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
  auto x_6188 = [&](const auto &x_4257) {
    if (HashtblContain(x_4257->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4257->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4257);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6188(x_4256);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3707(const auto &x_4258) { return neq(x_4258->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_3705(const auto &x_4263) {
  auto x_6189 = [&](const auto &x_4264) {
    if (HashtblContain(x_4264->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4264->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4264);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6189(x_4263);
  MakeUnit();
  auto x_6190 = [&](const auto &x_4265) {
    if (HashtblContain(x_4265->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4265->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4265);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6190(x_4263);
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
  auto x_6191 = [&](const auto &x_4307) {
    if (HashtblContain(x_4307->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4307->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4307);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6191(x_4305);
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
  auto x_6192 = [&](const auto &x_4342) {
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
        auto x_6194 = x_6192;
        x_6194(x_4340);
        return MakeUnit();
      });
  auto x_6193 = [&](const auto &x_4343) {
    if (HashtblContain(x_4343->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4343->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4343);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6193(x_4339);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3682(const auto &x_4344) {
  return plus((x_4344->prev != nullptr) ? ((x_4344->prev)->var_flex_shrink_sum) : (0.), x_4344->var_flex_shrink);
}
Unit var_modified_x_3680(const auto &x_4353) {
  auto x_6195 = [&](const auto &x_4356) {
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
        auto x_6197 = x_6195;
        x_6197(x_4354);
        return MakeUnit();
      });
  auto x_6196 = [&](const auto &x_4357) {
    if (HashtblContain(x_4357->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4357->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4357);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6196(x_4353);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_3677(const auto &x_4358) {
  return plus((x_4358->prev != nullptr) ? ((x_4358->prev)->var_flex_grow_sum) : (0.), x_4358->var_flex_grow);
}
Unit var_modified_x_3675(const auto &x_4367) {
  auto x_6198 = [&](const auto &x_4368) {
    if (HashtblContain(x_4368->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4368->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4368);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6198(x_4367);
  MakeUnit();
  auto x_6199 = [&](const auto &x_4369) {
    if (HashtblContain(x_4369->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4369->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4369);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6199(x_4367);
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
  auto x_6200 = [&](const auto &x_4374) {
    if (HashtblContain(x_4374->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4374->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4374);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6200(x_4373);
  MakeUnit();
  auto x_6201 = [&](const auto &x_4375) {
    if (HashtblContain(x_4375->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4375->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4375);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6201(x_4373);
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
  auto x_6202 = [&](const auto &x_4380) {
    if (HashtblContain(x_4380->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4380->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4380);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6202(x_4379);
  MakeUnit();
  auto x_6203 = [&](const auto &x_4381) {
    if (HashtblContain(x_4381->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4381->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4381);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6203(x_4379);
  MakeUnit();
  auto x_6204 = [&](const auto &x_4382) {
    if (HashtblContain(x_4382->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4382->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4382);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6204(x_4379);
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
  auto x_6205 = [&](const auto &x_4387) {
    if (HashtblContain(x_4387->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4387->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4387);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6205(x_4386);
  MakeUnit();
  ListIter(x_4386->children, [&](const auto &x_4388) {
    if (HashtblContain(x_4388->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4388->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_3161(x_4388);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_6206 = [&](const auto &x_4389) {
    if (HashtblContain(x_4389->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4389->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4389);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6206(x_4386);
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
  auto x_6207 = [&](const auto &x_4396) {
    if (HashtblContain(x_4396->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4396->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4396);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4393->next != nullptr) {
    auto x_6209 = x_6207;
    OptionMatch(
        x_4393->parent, [&](const auto &x_4395) { return MakeUnit(); },
        [&](const auto &x_4394) {
          auto x_6211 = x_6209;
          x_6211(x_4394);
          return MakeUnit();
        });
  }
  auto x_6208 = [&](const auto &x_4399) {
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
        auto x_6210 = x_6208;
        x_6210(x_4397);
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
  auto x_6212 = [&](const auto &x_4432) {
    if (HashtblContain(x_4432->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4432->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4432);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4429->next != nullptr) {
    auto x_6214 = x_6212;
    OptionMatch(
        x_4429->parent, [&](const auto &x_4431) { return MakeUnit(); },
        [&](const auto &x_4430) {
          auto x_6216 = x_6214;
          x_6216(x_4430);
          return MakeUnit();
        });
  }
  auto x_6213 = [&](const auto &x_4435) {
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
        auto x_6215 = x_6213;
        x_6215(x_4433);
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
  auto x_6217 = [&](const auto &x_4452) {
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
        auto x_6219 = x_6217;
        x_6219(x_4450);
        return MakeUnit();
      });
  auto x_6218 = [&](const auto &x_4455) {
    if (HashtblContain(x_4455->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4455->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4455);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4449->next != nullptr) {
    auto x_6220 = x_6218;
    OptionMatch(
        x_4449->parent, [&](const auto &x_4454) { return MakeUnit(); },
        [&](const auto &x_4453) {
          auto x_6221 = x_6220;
          x_6221(x_4453);
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
  auto x_6222 = [&](const auto &x_4466) {
    if (HashtblContain(x_4466->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4466->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4466);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6222(x_4465);
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
  auto x_6223 = [&](const auto &x_4477) {
    if (HashtblContain(x_4477->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4477->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4477);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6223(x_4476);
  MakeUnit();
  auto x_6224 = [&](const auto &x_4478) {
    if (HashtblContain(x_4478->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4478->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4478);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6224(x_4476);
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
  auto x_6225 = [&](const auto &x_4625) {
    if (HashtblContain(x_4625->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4625->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4625);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6225(x_4624);
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
  auto x_6226 = [&](const auto &x_4676) {
    if (HashtblContain(x_4676->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4676->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4676);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6226(x_4675);
  MakeUnit();
  auto x_6227 = [&](const auto &x_4677) {
    if (HashtblContain(x_4677->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4677->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4677);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6227(x_4675);
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
  auto x_6228 = [&](const auto &x_4682) {
    if (HashtblContain(x_4682->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4682->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4682);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6228(x_4681);
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
  auto x_6229 = [&](const auto &x_4695) {
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
        auto x_6231 = x_6229;
        x_6231(x_4693);
        return MakeUnit();
      });
  auto x_6230 = [&](const auto &x_4698) {
    if (HashtblContain(x_4698->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4698->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4698);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4692->next != nullptr) {
    auto x_6232 = x_6230;
    OptionMatch(
        x_4692->parent, [&](const auto &x_4697) { return MakeUnit(); },
        [&](const auto &x_4696) {
          auto x_6233 = x_6232;
          x_6233(x_4696);
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
  auto x_6234 = [&](const auto &x_4711) {
    if (HashtblContain(x_4711->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4711->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4711);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_4708->next != nullptr) {
    auto x_6236 = x_6234;
    OptionMatch(
        x_4708->parent, [&](const auto &x_4710) { return MakeUnit(); },
        [&](const auto &x_4709) {
          auto x_6238 = x_6236;
          x_6238(x_4709);
          return MakeUnit();
        });
  }
  auto x_6235 = [&](const auto &x_4714) {
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
        auto x_6237 = x_6235;
        x_6237(x_4712);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_3606(const auto &x_4715) {
  return max(x_4715->var_intrinsic_current_line_width,
             (x_4715->prev != nullptr) ? ((x_4715->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_3604(const auto &x_4724) {
  auto x_6239 = [&](const auto &x_4725) {
    if (HashtblContain(x_4725->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4725->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4725);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6239(x_4724);
  MakeUnit();
  auto x_6240 = [&](const auto &x_4728) {
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
        auto x_6241 = x_6240;
        x_6241(x_4726);
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
  auto x_6242 = [&](const auto &x_4743) {
    if (HashtblContain(x_4743->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4743->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4743);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6242(x_4742);
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
  auto x_6243 = [&](const auto &x_4754) {
    if (HashtblContain(x_4754->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4754->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4754);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6243(x_4753);
  MakeUnit();
  auto x_6244 = [&](const auto &x_4755) {
    if (HashtblContain(x_4755->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4755->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4755);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6244(x_4753);
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
  auto x_6245 = [&](const auto &x_4910) {
    if (HashtblContain(x_4910->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4910->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4910);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6245(x_4909);
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
  auto x_6246 = [&](const auto &x_4917) {
    if (HashtblContain(x_4917->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4917->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4917);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6246(x_4916);
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
  auto x_6247 = [&](const auto &x_4968) {
    if (HashtblContain(x_4968->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4968->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4968);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6247(x_4967);
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
  auto x_6248 = [&](const auto &x_4983) {
    if (HashtblContain(x_4983->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_4983->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_3161(x_4983);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6248(x_4982);
  MakeUnit();
  auto x_6249 = [&](const auto &x_4984) {
    if (HashtblContain(x_4984->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_4984->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_3201(x_4984);
    } else {
      return MetaWriteMetric();
    }
  };
  x_6249(x_4982);
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
        std::string x_6250 = x_3158;
        if (x_6250 == "attributes") {
          std::string x_6251 = x_3159;
          if (x_6251 == "width") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("width"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6251 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("image_height"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6251 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("image_width"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6251 == "height") {
            WriteMetric();
            HashtblAddExn(x_3152->attr, std::string("height"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6251 == "viewBox") {
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
        } else if (x_6250 == "properties") {
          std::string x_6252 = x_3159;
          if (x_6252 == "width") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("width"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6252 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("flex-grow"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6252 == "height") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("height"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6252 == "display") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("display"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6252 == "position") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("position"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6252 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_3152->prop, std::string("flex-shrink"), x_3160);
            if (HashtblContain(x_3152->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3152->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3152);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6252 == "flex-direction") {
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
        std::string x_6253 = x_3169;
        if (x_6253 == "attributes") {
          std::string x_6254 = x_3170;
          if (x_6254 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("width"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6254 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("image_height"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6254 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("image_width"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6254 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3164->attr, std::string("height"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6254 == "viewBox") {
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
        } else if (x_6253 == "properties") {
          std::string x_6255 = x_3170;
          if (x_6255 == "width") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("width"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6255 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("flex-grow"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6255 == "height") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("height"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6255 == "display") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("display"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6255 == "position") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("position"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6255 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_3164->prop, std::string("flex-shrink"));
            if (HashtblContain(x_3164->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_3164->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_3161(x_3164);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_6255 == "flex-direction") {
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
        std::string x_6256 = x_3179;
        if (x_6256 == "attributes") {
          std::string x_6257 = x_3180;
          if (x_6257 == "width") {
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
          } else if (x_6257 == "image_height") {
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
          } else if (x_6257 == "image_width") {
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
          } else if (x_6257 == "height") {
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
          } else if (x_6257 == "viewBox") {
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
        } else if (x_6256 == "properties") {
          std::string x_6258 = x_3180;
          if (x_6258 == "width") {
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
          } else if (x_6258 == "flex-grow") {
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
          } else if (x_6258 == "height") {
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
          } else if (x_6258 == "display") {
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
          } else if (x_6258 == "position") {
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
          } else if (x_6258 == "flex-shrink") {
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
          } else if (x_6258 == "flex-direction") {
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
        x_3217(x_3223);
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
        x_3246(x_3252);
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
        x_3282(x_3288);
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
        x_3297(x_3303);
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
        x_3309(x_3315);
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
int main() {
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_3082) {
    PrintEndline(std::string("RUNNING DB_D"));
    return WithInFile(std::string("command.json"), [&](const auto &x_3083) {
      auto x_3084 = MakeRef(static_cast<int64_t>(0));
      auto x_3085 = FreshMetric();
      auto x_3086 = JsonOfString(InputLine(x_3083));
      auto x_3087 = JsonOfString(InputLine(x_3083));
      auto x_3088 = MakeStack();
      PushStack(x_3088, x_3086);
      PushStack(x_3088, x_3087);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3086)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_3087)), std::string("layout_init")));
      auto x_3091 = [&]() {
        auto x_3089 = json_to_node_aux_x_3077(JsonMember(std::string("node"), x_3086));
        x_3089->parent = nullptr;
        x_3089->prev = nullptr;
        x_3089->next = nullptr;
        set_children_relation_x_3090(x_3089);
        return x_3089;
      }();
      auto x_3092 = json_to_layout_node_x_3079(JsonMember(std::string("node"), x_3087));
      OutputChangeMetric(layout_size_x_3080(x_3092));
      InputChangeMetric(node_size_x_3081(x_3091));
      HashtblAddExn(x_3091->meta->ProcInited, std::string("pass_0"), MakeUnit());
      HashtblAddExn(x_3091->meta->RecursiveProcDirtied, std::string("pass_0"), false);
      eval_stmts_x_3093(x_3091);
      HashtblAddExn(x_3091->meta->ProcInited, std::string("pass_1"), MakeUnit());
      HashtblAddExn(x_3091->meta->RecursiveProcDirtied, std::string("pass_1"), false);
      eval_stmts_x_3094(x_3091);
      JsonToChannel(x_3082, [&]() {
        auto x_6259 = FreshJson();
        WriteJson(x_6259, std::string("name"), std::string("DB_D"));
        WriteJson(x_6259, std::string("diff_num"), ReadRef(x_3084));
        WriteJson(x_6259, std::string("read_count"), MetricReadCount());
        WriteJson(x_6259, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_6259, std::string("write_count"), MetricWriteCount());
        WriteJson(x_6259, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_6259, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_6259, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_6259, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_6259, std::string("html"), std::string(""));
        WriteJson(x_6259, std::string("command"), StackToList(x_3088));
        return x_6259;
      }());
      OutputString(x_3082, std::string("\n"));
      ClearStack(x_3088);
      WriteRef(x_3084, IntAdd(ReadRef(x_3084), static_cast<int64_t>(1)));
      auto x_3097 = [&]() {
        auto x_3095 = node_to_fs_node_x_3078(x_3091);
        x_3095->parent = nullptr;
        x_3095->prev = nullptr;
        x_3095->next = nullptr;
        set_children_relation_x_3096(x_3095);
        return x_3095;
      }();
      eval_stmts_x_3098(x_3097);
      eval_stmts_x_3099(x_3097);
      AssertNodeValueEqual(x_3091, x_3097);
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_3083, [&](const auto &x_3100) {
        auto x_3101 = JsonOfString(x_3100);
        PushStack(x_3088, x_3101);
        std::string x_6261 = JsonToString(JsonMember(std::string("name"), x_3101));
        if (x_6261 == "add") {
          return add_node_x_3105(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                         [&](const auto &x_3104) { return JsonToInt(x_3104); }),
                                 x_3091, [&]() {
                                   auto x_3102 = json_to_node_aux_x_3077(JsonMember(std::string("node"), x_3101));
                                   x_3102->parent = nullptr;
                                   x_3102->prev = nullptr;
                                   x_3102->next = nullptr;
                                   set_children_relation_x_3103(x_3102);
                                   return x_3102;
                                 }());
        } else if (x_6261 == "recalculate") {
          recalculate_internal_x_3106(x_3091);
          recalculate_internal_x_3107(x_3091);
          JsonToChannel(x_3082, [&]() {
            auto x_6260 = FreshJson();
            WriteJson(x_6260, std::string("name"), std::string("DB_D"));
            WriteJson(x_6260, std::string("diff_num"), ReadRef(x_3084));
            WriteJson(x_6260, std::string("read_count"), MetricReadCount());
            WriteJson(x_6260, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_6260, std::string("write_count"), MetricWriteCount());
            WriteJson(x_6260, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_6260, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_6260, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_6260, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_6260, std::string("html"), std::string(""));
            WriteJson(x_6260, std::string("command"), StackToList(x_3088));
            return x_6260;
          }());
          OutputString(x_3082, std::string("\n"));
          ClearStack(x_3088);
          WriteRef(x_3084, IntAdd(ReadRef(x_3084), static_cast<int64_t>(1)));
          auto x_3110 = [&]() {
            auto x_3108 = node_to_fs_node_x_3078(x_3091);
            x_3108->parent = nullptr;
            x_3108->prev = nullptr;
            x_3108->next = nullptr;
            set_children_relation_x_3109(x_3108);
            return x_3108;
          }();
          eval_stmts_x_3098(x_3110);
          eval_stmts_x_3099(x_3110);
          AssertNodeValueEqual(x_3091, x_3110);
          ResetMetric();
          return MakeUnit();
        } else if (x_6261 == "remove") {
          return remove_node_x_3112(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                            [&](const auto &x_3111) { return JsonToInt(x_3111); }),
                                    x_3091, MakeUnit());
        } else if (x_6261 == "replace") {
          return replace_node_x_3116(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                             [&](const auto &x_3115) { return JsonToInt(x_3115); }),
                                     x_3091, [&]() {
                                       auto x_3113 = json_to_node_aux_x_3077(JsonMember(std::string("node"), x_3101));
                                       x_3113->parent = nullptr;
                                       x_3113->prev = nullptr;
                                       x_3113->next = nullptr;
                                       set_children_relation_x_3114(x_3113);
                                       return x_3113;
                                     }());
        } else if (x_6261 == "replace_value") {
          return replace_value_x_3118(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                              [&](const auto &x_3117) { return JsonToInt(x_3117); }),
                                      x_3091,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3101)),
                                                        JsonToString(JsonMember(std::string("key"), x_3101))),
                                               JsonToValue(JsonMember(std::string("value"), x_3101))));
        } else if (x_6261 == "delete_value") {
          return delete_value_x_3120(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                             [&](const auto &x_3119) { return JsonToInt(x_3119); }),
                                     x_3091,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_3101)),
                                              JsonToString(JsonMember(std::string("key"), x_3101))));
        } else if (x_6261 == "insert_value") {
          return insert_value_x_3122(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                             [&](const auto &x_3121) { return JsonToInt(x_3121); }),
                                     x_3091,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_3101)),
                                                       JsonToString(JsonMember(std::string("key"), x_3101))),
                                              JsonToValue(JsonMember(std::string("value"), x_3101))));
        } else if (x_6261 == "layout_remove") {
          return remove_layout_node_x_3124(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                                   [&](const auto &x_3123) { return JsonToInt(x_3123); }),
                                           x_3092, MakeUnit());
        } else if (x_6261 == "layout_add") {
          return add_layout_node_x_3126(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                                [&](const auto &x_3125) { return JsonToInt(x_3125); }),
                                        x_3092, json_to_layout_node_x_3079(JsonMember(std::string("node"), x_3101)));
        } else if (x_6261 == "layout_replace") {
          return replace_layout_node_x_3128(ListMap(JsonToList(JsonMember(std::string("path"), x_3101)),
                                                    [&](const auto &x_3127) { return JsonToInt(x_3127); }),
                                            x_3092,
                                            json_to_layout_node_x_3079(JsonMember(std::string("node"), x_3101)));
        } else if (x_6261 == "layout_info_changed") {
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