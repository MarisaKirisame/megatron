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
Unit var_modified_x_7163(const auto &x_7165);
auto eval_expr_x_7160(const auto &x_7182);
Unit var_modified_x_7158(const auto &x_7259);
auto eval_expr_x_7155(const auto &x_7263);
Unit var_modified_x_7153(const auto &x_7280);
auto eval_expr_x_7150(const auto &x_7290);
Unit var_modified_x_7148(const auto &x_7295);
auto eval_expr_x_7145(const auto &x_7305);
Unit var_modified_x_7143(const auto &x_7314);
auto eval_expr_x_7140(const auto &x_7318);
Unit var_modified_x_7138(const auto &x_7319);
auto eval_expr_x_7135(const auto &x_7323);
Unit var_modified_x_7133(const auto &x_7328);
auto eval_expr_x_7130(const auto &x_7335);
Unit var_modified_x_7128(const auto &x_7346);
auto eval_expr_x_7125(const auto &x_7350);
Unit var_modified_x_7123(const auto &x_7355);
auto eval_expr_x_7120(const auto &x_7362);
Unit var_modified_x_7118(const auto &x_7373);
auto eval_expr_x_7115(const auto &x_7380);
Unit var_modified_x_7113(const auto &x_7405);
auto eval_expr_x_7110(const auto &x_7415);
Unit var_modified_x_7108(const auto &x_7440);
auto eval_expr_x_7105(const auto &x_7444);
Unit var_modified_x_7103(const auto &x_7447);
auto eval_expr_x_7100(const auto &x_7456);
Unit var_modified_x_7098(const auto &x_7465);
auto eval_expr_x_7095(const auto &x_7474);
Unit var_modified_x_7093(const auto &x_7483);
auto eval_expr_x_7090(const auto &x_7490);
Unit var_modified_x_7088(const auto &x_7493);
auto eval_expr_x_7085(const auto &x_7500);
Unit var_modified_x_7083(const auto &x_7503);
auto eval_expr_x_7080(const auto &x_7513);
Unit var_modified_x_7078(const auto &x_7516);
auto eval_expr_x_7075(const auto &x_7526);
Unit var_modified_x_7072(const auto &x_7529);
auto eval_expr_x_7069(const auto &x_7540);
Unit var_modified_x_7067(const auto &x_7569);
auto eval_expr_x_7064(const auto &x_7580);
Unit var_modified_x_7062(const auto &x_7593);
auto eval_expr_x_7059(const auto &x_7604);
Unit var_modified_x_7057(const auto &x_7613);
auto eval_expr_x_7054(const auto &x_7617);
Unit var_modified_x_7052(const auto &x_7626);
auto eval_expr_x_7049(const auto &x_7633);
Unit var_modified_x_7047(const auto &x_7778);
auto eval_expr_x_7044(const auto &x_7782);
Unit var_modified_x_7042(const auto &x_7831);
auto eval_expr_x_7039(const auto &x_7838);
Unit var_modified_x_7037(const auto &x_7841);
auto eval_expr_x_7034(const auto &x_7845);
Unit var_modified_x_7032(const auto &x_7854);
auto eval_expr_x_7029(const auto &x_7865);
Unit var_modified_x_7027(const auto &x_7874);
auto eval_expr_x_7024(const auto &x_7885);
Unit var_modified_x_7022(const auto &x_7894);
auto eval_expr_x_7019(const auto &x_7903);
Unit var_modified_x_7017(const auto &x_7916);
auto eval_expr_x_7014(const auto &x_7920);
Unit var_modified_x_7012(const auto &x_7929);
auto eval_expr_x_7009(const auto &x_7936);
Unit var_modified_x_7007(const auto &x_8089);
auto eval_expr_x_7004(const auto &x_8093);
Unit var_modified_x_7002(const auto &x_8098);
auto eval_expr_x_6999(const auto &x_8102);
Unit var_modified_x_6997(const auto &x_8151);
auto eval_expr_x_6994(const auto &x_8155);
Unit var_modified_x_6992(const auto &x_8168);
auto eval_expr_x_6989(const auto &x_8175);
Unit var_modified_x_6986(const auto &x_8178);
auto eval_expr_x_6983(const auto &x_8184);
Unit var_modified_x_6981(const auto &x_8201);
auto eval_expr_x_6978(const auto &x_8205);
Unit var_modified_x_6976(const auto &x_8214);
auto eval_expr_x_6973(const auto &x_8221);
Unit var_modified_x_6971(const auto &x_8274);
auto eval_expr_x_6968(const auto &x_8283);
Unit var_modified_x_6966(const auto &x_8308);
auto eval_expr_x_6963(const auto &x_8314);
Unit var_modified_x_6961(const auto &x_8323);
auto eval_expr_x_6958(const auto &x_8330);
Unit var_modified_x_6956(const auto &x_8383);
auto eval_expr_x_6953(const auto &x_8392);
Unit var_modified_x_6951(const auto &x_8413);
auto eval_expr_x_6948(const auto &x_8417);
Unit var_modified_x_6946(const auto &x_8438);
auto eval_expr_x_6943(const auto &x_8442);
Unit var_modified_x_6941(const auto &x_8455);
auto eval_expr_x_6938(const auto &x_8462);
Unit var_modified_x_6936(const auto &x_8483);
auto eval_expr_x_6933(const auto &x_8487);
Unit var_modified_x_6931(const auto &x_8492);
auto eval_expr_x_6928(const auto &x_8496);
Unit var_modified_x_6925(const auto &x_8501);
auto eval_expr_x_6922(const auto &x_8505);
Unit var_modified_x_6920(const auto &x_8522);
auto eval_expr_x_6917(const auto &x_8524);
Unit var_modified_x_6915(const auto &x_8533);
auto eval_expr_x_6912(const auto &x_8536);
Unit var_modified_x_6910(const auto &x_8589);
auto eval_expr_x_6907(const auto &x_8594);
Unit var_modified_x_6905(const auto &x_8619);
auto eval_expr_x_6902(const auto &x_8623);
Unit var_modified_x_6900(const auto &x_8632);
auto eval_expr_x_6897(const auto &x_8635);
Unit var_modified_x_6895(const auto &x_8688);
auto eval_expr_x_6892(const auto &x_8693);
Unit var_modified_x_6890(const auto &x_8714);
auto eval_expr_x_6887(const auto &x_8716);
Unit var_modified_x_6885(const auto &x_8737);
auto eval_expr_x_6882(const auto &x_8739);
Unit var_modified_x_6880(const auto &x_8752);
auto eval_expr_x_6877(const auto &x_8755);
Unit var_modified_x_6875(const auto &x_8776);
auto eval_expr_x_6872(const auto &x_8778);
Unit var_modified_x_6870(const auto &x_8783);
auto eval_expr_x_6867(const auto &x_8785);
Unit var_modified_x_6864(const auto &x_8790);
auto eval_expr_x_6861(const auto &x_8799);
Unit var_modified_x_6859(const auto &x_8876);
auto eval_expr_x_6856(const auto &x_8878);
Unit var_modified_x_6854(const auto &x_8895);
auto eval_expr_x_6851(const auto &x_8899);
Unit var_modified_x_6849(const auto &x_8904);
auto eval_expr_x_6846(const auto &x_8908);
Unit var_modified_x_6844(const auto &x_8917);
auto eval_expr_x_6841(const auto &x_8919);
Unit var_modified_x_6839(const auto &x_8920);
auto eval_expr_x_6836(const auto &x_8922);
Unit var_modified_x_6834(const auto &x_8927);
auto eval_expr_x_6831(const auto &x_8930);
Unit var_modified_x_6829(const auto &x_8941);
auto eval_expr_x_6826(const auto &x_8943);
Unit var_modified_x_6824(const auto &x_8948);
auto eval_expr_x_6821(const auto &x_8951);
Unit var_modified_x_6819(const auto &x_8962);
auto eval_expr_x_6816(const auto &x_8965);
Unit var_modified_x_6814(const auto &x_8990);
auto eval_expr_x_6811(const auto &x_8994);
Unit var_modified_x_6809(const auto &x_9019);
auto eval_expr_x_6806(const auto &x_9021);
Unit var_modified_x_6804(const auto &x_9024);
auto eval_expr_x_6801(const auto &x_9029);
Unit var_modified_x_6799(const auto &x_9038);
auto eval_expr_x_6796(const auto &x_9043);
Unit var_modified_x_6794(const auto &x_9052);
auto eval_expr_x_6791(const auto &x_9055);
Unit var_modified_x_6789(const auto &x_9058);
auto eval_expr_x_6786(const auto &x_9061);
Unit var_modified_x_6784(const auto &x_9064);
auto eval_expr_x_6781(const auto &x_9068);
Unit var_modified_x_6779(const auto &x_9071);
auto eval_expr_x_6776(const auto &x_9075);
Unit var_modified_x_6773(const auto &x_9078);
auto eval_expr_x_6770(const auto &x_9085);
Unit var_modified_x_6768(const auto &x_9114);
auto eval_expr_x_6765(const auto &x_9121);
Unit var_modified_x_6763(const auto &x_9134);
auto eval_expr_x_6760(const auto &x_9141);
Unit var_modified_x_6758(const auto &x_9150);
auto eval_expr_x_6755(const auto &x_9152);
Unit var_modified_x_6753(const auto &x_9161);
auto eval_expr_x_6750(const auto &x_9164);
Unit var_modified_x_6748(const auto &x_9309);
auto eval_expr_x_6745(const auto &x_9311);
Unit var_modified_x_6743(const auto &x_9360);
auto eval_expr_x_6740(const auto &x_9363);
Unit var_modified_x_6738(const auto &x_9366);
auto eval_expr_x_6735(const auto &x_9368);
Unit var_modified_x_6733(const auto &x_9377);
auto eval_expr_x_6730(const auto &x_9384);
Unit var_modified_x_6728(const auto &x_9393);
auto eval_expr_x_6725(const auto &x_9400);
Unit var_modified_x_6723(const auto &x_9409);
auto eval_expr_x_6720(const auto &x_9414);
Unit var_modified_x_6718(const auto &x_9427);
auto eval_expr_x_6715(const auto &x_9429);
Unit var_modified_x_6713(const auto &x_9438);
auto eval_expr_x_6710(const auto &x_9441);
Unit var_modified_x_6708(const auto &x_9594);
auto eval_expr_x_6705(const auto &x_9596);
Unit var_modified_x_6703(const auto &x_9601);
auto eval_expr_x_6700(const auto &x_9603);
Unit var_modified_x_6698(const auto &x_9652);
auto eval_expr_x_6695(const auto &x_9654);
Unit var_modified_x_6693(const auto &x_9667);
auto eval_expr_x_6690(const auto &x_9670);
Unit eval_stmts_x_6653(const auto &x_6689);
Unit eval_stmts_x_6651(const auto &x_6775);
Unit eval_stmts_x_6648(const auto &x_6866);
Unit eval_stmts_x_6594(const auto &x_6927);
Unit eval_stmts_x_6593(const auto &x_6988);
Unit eval_stmts_x_6592(const auto &x_7074);
Unit x_6313(const auto &x_6314, const auto &x_6315, const auto &x_6316);
Unit x_6320(const auto &x_6321, const auto &x_6322, const auto &x_6323);
Unit x_6327(const auto &x_6328, const auto &x_6329, const auto &x_6330);
Unit x_6334(const auto &x_6335, const auto &x_6336, const auto &x_6337);
Unit x_6369(const auto &x_6370, const auto &x_6371, const auto &x_6372);
Unit x_6402(const auto &x_6403, const auto &x_6404, const auto &x_6405);
Unit x_6461(const auto &x_6462, const auto &x_6463, const auto &x_6464);
Unit x_6533(const auto &x_6534);
Unit x_6541(const auto &x_6542, const auto &x_6543, const auto &x_6544);
Unit x_6576(const auto &x_6577);
Unit x_6584(const auto &x_6585);
Unit x_6596(const auto &x_6597, const auto &x_6598, const auto &x_6599);
Unit x_6639(const auto &x_6640);
Unit eval_stmts_x_6284(const auto &x_6647);
Unit eval_stmts_x_6283(const auto &x_6650);
Unit x_6654(const auto &x_6655);
Unit eval_stmts_x_6279(const auto &x_6662);
Unit eval_stmts_x_6278(const auto &x_6664);
Unit x_6666(const auto &x_6667);
int64_t x_6674(const auto &x_6675);
int64_t x_6677(const auto &x_6678);
LayoutNode x_6680(const auto &x_6681);
Node x_6683(const auto &x_6684);
Node x_6686(const auto &x_6687);
Unit var_modified_x_7163(const auto &x_7165) {
  auto x_9673 = [&](const auto &x_7166) {
    if (HashtblContain(x_7166->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7167 = HashtblFindExn(x_7166->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7167, x_7166, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9673(x_7165);
  MakeUnit();
  auto x_9674 = [&](const auto &x_7171) {
    if (HashtblContain(x_7171->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7172 = HashtblFindExn(x_7171->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7172, x_7171, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7165->next, [&](const auto &x_7170) { return MakeUnit(); },
      [&](const auto &x_7169) {
        auto x_9677 = x_9674;
        x_9677(x_7169);
        return MakeUnit();
      });
  auto x_9675 = [&](const auto &x_7174) {
    if (HashtblContain(x_7174->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7175 = HashtblFindExn(x_7174->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7175, x_7174, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9675(x_7165);
  MakeUnit();
  auto x_9676 = [&](const auto &x_7179) {
    if (HashtblContain(x_7179->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7180 = HashtblFindExn(x_7179->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7180, x_7179, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7165->next, [&](const auto &x_7178) { return MakeUnit(); },
      [&](const auto &x_7177) {
        auto x_9678 = x_9676;
        x_9678(x_7177);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_7160(const auto &x_7182) {
  if (eq(x_7182->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_7182->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_7182->parent != nullptr) &&
          (eq((x_7182->parent)->var_display, std::string("flex")) ||
           eq((x_7182->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_7182->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_7182->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_7182->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_7182->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_7182, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_7182, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_7182->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_7182->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_7182->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_7182->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_7182->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_7182->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_7182->var_display, std::string("list-item"))) {
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
Unit var_modified_x_7158(const auto &x_7259) {
  ListIter(x_7259->children, [&](const auto &x_7260) {
    if (HashtblContain(x_7260->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7261 = HashtblFindExn(x_7260->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7261, x_7260, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_7155(const auto &x_7263) {
  return (((!(x_7263->parent != nullptr)) || (x_7263->parent)->var_visible) &&
          (neq(x_7263->var_display, std::string("none")) && ((!x_7263->var_inside_svg) && (!x_7263->var_disabled))));
}
Unit var_modified_x_7153(const auto &x_7280) {
  auto x_9679 = [&](const auto &x_7281) {
    if (HashtblContain(x_7281->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7282 = HashtblFindExn(x_7281->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7282, x_7281, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9679(x_7280);
  MakeUnit();
  ListIter(x_7280->children, [&](const auto &x_7284) {
    if (HashtblContain(x_7284->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7285 = HashtblFindExn(x_7284->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7285, x_7284, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9680 = [&](const auto &x_7287) {
    if (HashtblContain(x_7287->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7288 = HashtblFindExn(x_7287->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7288, x_7287, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9680(x_7280);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7150(const auto &x_7290) {
  if (eq(x_7290->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_7290->parent != nullptr) && (x_7290->parent)->var_disabled);
  }
}
Unit var_modified_x_7148(const auto &x_7295) {
  auto x_9681 = [&](const auto &x_7296) {
    if (HashtblContain(x_7296->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7297 = HashtblFindExn(x_7296->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7297, x_7296, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9681(x_7295);
  MakeUnit();
  ListIter(x_7295->children, [&](const auto &x_7299) {
    if (HashtblContain(x_7299->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7300 = HashtblFindExn(x_7299->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7300, x_7299, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9682 = [&](const auto &x_7302) {
    if (HashtblContain(x_7302->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7303 = HashtblFindExn(x_7302->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7303, x_7302, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9682(x_7295);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7145(const auto &x_7305) {
  return ((x_7305->parent != nullptr) && ((x_7305->parent)->var_is_svg_block || (x_7305->parent)->var_inside_svg));
}
Unit var_modified_x_7143(const auto &x_7314) {
  ListIter(x_7314->children, [&](const auto &x_7315) {
    if (HashtblContain(x_7315->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7316 = HashtblFindExn(x_7315->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7316, x_7315, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_7140(const auto &x_7318) { return eq(x_7318->name, std::string("svg")); }
Unit var_modified_x_7138(const auto &x_7319) {
  auto x_9683 = [&](const auto &x_7320) {
    if (HashtblContain(x_7320->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7321 = HashtblFindExn(x_7320->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7321, x_7320, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9683(x_7319);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7135(const auto &x_7323) { return neq(x_7323->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_7133(const auto &x_7328) {
  auto x_9684 = [&](const auto &x_7329) {
    if (HashtblContain(x_7329->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7330 = HashtblFindExn(x_7329->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7330, x_7329, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9684(x_7328);
  MakeUnit();
  auto x_9685 = [&](const auto &x_7332) {
    if (HashtblContain(x_7332->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7333 = HashtblFindExn(x_7332->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7333, x_7332, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9685(x_7328);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7130(const auto &x_7335) {
  if (!HasAttr(x_7335, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_7335, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_7335, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_7335, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_7128(const auto &x_7346) {
  auto x_9686 = [&](const auto &x_7347) {
    if (HashtblContain(x_7347->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7348 = HashtblFindExn(x_7347->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7348, x_7347, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9686(x_7346);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7125(const auto &x_7350) { return neq(x_7350->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_7123(const auto &x_7355) {
  auto x_9687 = [&](const auto &x_7356) {
    if (HashtblContain(x_7356->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7357 = HashtblFindExn(x_7356->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7357, x_7356, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9687(x_7355);
  MakeUnit();
  auto x_9688 = [&](const auto &x_7359) {
    if (HashtblContain(x_7359->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7360 = HashtblFindExn(x_7359->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7360, x_7359, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9688(x_7355);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7120(const auto &x_7362) {
  if (!HasAttr(x_7362, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_7362, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_7362, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_7362, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_7118(const auto &x_7373) {
  ListIter(x_7373->children, [&](const auto &x_7374) {
    if (HashtblContain(x_7374->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7375 = HashtblFindExn(x_7374->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7375, x_7374, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  ListIter(x_7373->children, [&](const auto &x_7377) {
    if (HashtblContain(x_7377->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7378 = HashtblFindExn(x_7377->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7378, x_7377, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_7115(const auto &x_7380) {
  if ((x_7380->parent != nullptr) &&
      (eq((x_7380->parent)->var_display, std::string("flex")) ||
       eq((x_7380->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_7380->parent)->var_flex_direction, std::string("column")) ||
        eq((x_7380->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_7113(const auto &x_7405) {
  ListIter(x_7405->children, [&](const auto &x_7406) {
    if (HashtblContain(x_7406->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7407 = HashtblFindExn(x_7406->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7407, x_7406, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9689 = [&](const auto &x_7409) {
    if (HashtblContain(x_7409->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7410 = HashtblFindExn(x_7409->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7410, x_7409, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9689(x_7405);
  MakeUnit();
  ListIter(x_7405->children, [&](const auto &x_7412) {
    if (HashtblContain(x_7412->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7413 = HashtblFindExn(x_7412->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7413, x_7412, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_7110(const auto &x_7415) {
  if ((x_7415->parent != nullptr) &&
      (eq((x_7415->parent)->var_display, std::string("flex")) ||
       eq((x_7415->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_7415->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_7108(const auto &x_7440) {
  ListIter(x_7440->children, [&](const auto &x_7441) {
    if (HashtblContain(x_7441->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7442 = HashtblFindExn(x_7441->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7442, x_7441, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_7105(const auto &x_7444) {
  if (HasProp(x_7444, std::string("flex-direction"))) {
    return GetProp<std::string>(x_7444, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_7103(const auto &x_7447) {
  auto x_9690 = [&](const auto &x_7450) {
    if (HashtblContain(x_7450->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7451 = HashtblFindExn(x_7450->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7451, x_7450, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7447->next, [&](const auto &x_7449) { return MakeUnit(); },
      [&](const auto &x_7448) {
        auto x_9692 = x_9690;
        x_9692(x_7448);
        return MakeUnit();
      });
  auto x_9691 = [&](const auto &x_7453) {
    if (HashtblContain(x_7453->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7454 = HashtblFindExn(x_7453->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7454, x_7453, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9691(x_7447);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7100(const auto &x_7456) {
  return plus((x_7456->prev != nullptr) ? ((x_7456->prev)->var_flex_shrink_sum) : (0.), x_7456->var_flex_shrink);
}
Unit var_modified_x_7098(const auto &x_7465) {
  auto x_9693 = [&](const auto &x_7468) {
    if (HashtblContain(x_7468->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7469 = HashtblFindExn(x_7468->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7469, x_7468, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7465->next, [&](const auto &x_7467) { return MakeUnit(); },
      [&](const auto &x_7466) {
        auto x_9695 = x_9693;
        x_9695(x_7466);
        return MakeUnit();
      });
  auto x_9694 = [&](const auto &x_7471) {
    if (HashtblContain(x_7471->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7472 = HashtblFindExn(x_7471->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7472, x_7471, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9694(x_7465);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7095(const auto &x_7474) {
  return plus((x_7474->prev != nullptr) ? ((x_7474->prev)->var_flex_grow_sum) : (0.), x_7474->var_flex_grow);
}
Unit var_modified_x_7093(const auto &x_7483) {
  auto x_9696 = [&](const auto &x_7484) {
    if (HashtblContain(x_7484->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7485 = HashtblFindExn(x_7484->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7485, x_7484, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9696(x_7483);
  MakeUnit();
  auto x_9697 = [&](const auto &x_7487) {
    if (HashtblContain(x_7487->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7488 = HashtblFindExn(x_7487->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7488, x_7487, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9697(x_7483);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7090(const auto &x_7490) {
  if (HasProp(x_7490, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_7490, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_7088(const auto &x_7493) {
  auto x_9698 = [&](const auto &x_7494) {
    if (HashtblContain(x_7494->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7495 = HashtblFindExn(x_7494->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7495, x_7494, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9698(x_7493);
  MakeUnit();
  auto x_9699 = [&](const auto &x_7497) {
    if (HashtblContain(x_7497->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7498 = HashtblFindExn(x_7497->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7498, x_7497, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9699(x_7493);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7085(const auto &x_7500) {
  if (HasProp(x_7500, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_7500, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_7083(const auto &x_7503) {
  auto x_9700 = [&](const auto &x_7504) {
    if (HashtblContain(x_7504->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7505 = HashtblFindExn(x_7504->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7505, x_7504, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9700(x_7503);
  MakeUnit();
  auto x_9701 = [&](const auto &x_7507) {
    if (HashtblContain(x_7507->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7508 = HashtblFindExn(x_7507->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7508, x_7507, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9701(x_7503);
  MakeUnit();
  auto x_9702 = [&](const auto &x_7510) {
    if (HashtblContain(x_7510->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7511 = HashtblFindExn(x_7510->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7511, x_7510, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9702(x_7503);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7080(const auto &x_7513) {
  if (HasProp(x_7513, std::string("position"))) {
    return GetProp<std::string>(x_7513, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_7078(const auto &x_7516) {
  auto x_9703 = [&](const auto &x_7517) {
    if (HashtblContain(x_7517->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7518 = HashtblFindExn(x_7517->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7518, x_7517, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  };
  x_9703(x_7516);
  MakeUnit();
  ListIter(x_7516->children, [&](const auto &x_7520) {
    if (HashtblContain(x_7520->meta->BBTimeTable, std::string("bb_1"))) {
      auto x_7521 = HashtblFindExn(x_7520->meta->BBTimeTable, std::string("bb_1"));
      MetaWriteMetric();
      return QueuePush(x_7521, x_7520, MakeRecomputeBB(std::string("bb_1")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9704 = [&](const auto &x_7523) {
    if (HashtblContain(x_7523->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7524 = HashtblFindExn(x_7523->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7524, x_7523, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9704(x_7516);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7075(const auto &x_7526) {
  if (HasProp(x_7526, std::string("display"))) {
    return GetProp<std::string>(x_7526, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_7072(const auto &x_7529) {
  auto x_9705 = [&](const auto &x_7532) {
    if (HashtblContain(x_7532->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7533 = HashtblFindExn(x_7532->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7533, x_7532, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_7529->next != nullptr) {
    auto x_9707 = x_9705;
    OptionMatch(
        x_7529->parent, [&](const auto &x_7531) { return MakeUnit(); },
        [&](const auto &x_7530) {
          auto x_9709 = x_9707;
          x_9709(x_7530);
          return MakeUnit();
        });
  }
  auto x_9706 = [&](const auto &x_7537) {
    if (HashtblContain(x_7537->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7538 = HashtblFindExn(x_7537->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7538, x_7537, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7529->next, [&](const auto &x_7536) { return MakeUnit(); },
      [&](const auto &x_7535) {
        auto x_9708 = x_9706;
        x_9708(x_7535);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_7069(const auto &x_7540) {
  if (x_7540->prev != nullptr) {
    if (x_7540->var_line_break) {
      return plus((x_7540->prev)->var_finished_intrinsic_height_sum,
                  plus((x_7540->prev)->var_intrinsic_current_line_height, x_7540->var_intrinsic_height_external));
    } else {
      return (x_7540->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_7540->var_line_break) {
      return x_7540->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_7067(const auto &x_7569) {
  auto x_9710 = [&](const auto &x_7572) {
    if (HashtblContain(x_7572->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7573 = HashtblFindExn(x_7572->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7573, x_7572, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_7569->next != nullptr) {
    auto x_9712 = x_9710;
    OptionMatch(
        x_7569->parent, [&](const auto &x_7571) { return MakeUnit(); },
        [&](const auto &x_7570) {
          auto x_9714 = x_9712;
          x_9714(x_7570);
          return MakeUnit();
        });
  }
  auto x_9711 = [&](const auto &x_7577) {
    if (HashtblContain(x_7577->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7578 = HashtblFindExn(x_7577->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7578, x_7577, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7569->next, [&](const auto &x_7576) { return MakeUnit(); },
      [&](const auto &x_7575) {
        auto x_9713 = x_9711;
        x_9713(x_7575);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_7064(const auto &x_7580) {
  if (x_7580->var_line_break) {
    return 0.;
  } else {
    return max(x_7580->var_intrinsic_height_external,
               (x_7580->prev != nullptr) ? ((x_7580->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_7062(const auto &x_7593) {
  auto x_9715 = [&](const auto &x_7596) {
    if (HashtblContain(x_7596->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7597 = HashtblFindExn(x_7596->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7597, x_7596, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7593->next, [&](const auto &x_7595) { return MakeUnit(); },
      [&](const auto &x_7594) {
        auto x_9717 = x_9715;
        x_9717(x_7594);
        return MakeUnit();
      });
  auto x_9716 = [&](const auto &x_7601) {
    if (HashtblContain(x_7601->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7602 = HashtblFindExn(x_7601->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7602, x_7601, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if (x_7593->next != nullptr) {
    auto x_9718 = x_9716;
    OptionMatch(
        x_7593->parent, [&](const auto &x_7600) { return MakeUnit(); },
        [&](const auto &x_7599) {
          auto x_9719 = x_9718;
          x_9719(x_7599);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_7059(const auto &x_7604) {
  return plus((x_7604->prev != nullptr) ? ((x_7604->prev)->var_intrinsic_height_sum) : (0.),
              x_7604->var_intrinsic_height_external);
}
Unit var_modified_x_7057(const auto &x_7613) {
  auto x_9720 = [&](const auto &x_7614) {
    if (HashtblContain(x_7614->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7615 = HashtblFindExn(x_7614->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7615, x_7614, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9720(x_7613);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7054(const auto &x_7617) {
  if (eq(x_7617->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7617->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_7052(const auto &x_7626) {
  auto x_9721 = [&](const auto &x_7627) {
    if (HashtblContain(x_7627->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7628 = HashtblFindExn(x_7627->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7628, x_7627, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9721(x_7626);
  MakeUnit();
  auto x_9722 = [&](const auto &x_7630) {
    if (HashtblContain(x_7630->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7631 = HashtblFindExn(x_7630->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7631, x_7630, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9722(x_7626);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7049(const auto &x_7633) {
  if (eq(x_7633->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_7633->var_inside_svg) {
      return 0.;
    } else {
      if (x_7633->var_disabled) {
        return 0.;
      } else {
        if (neq(x_7633->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_7633->var_height_expr, std::string("%"))) &&
             neq(x_7633->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_7633->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_7633->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_7633->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_7633->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_7633->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_7633->var_children_intrinsic_height,
              (eq(x_7633->name, std::string("#text")))
                  ? (10.)
                  : ((x_7633->var_is_default_case)
                         ? (0.)
                         : ((eq(x_7633->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_7633->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_7633->name, std::string("svg")))
                                              ? ((x_7633->var_has_height_attr &&
                                                  string_is_float(x_7633->var_height_attr_expr))
                                                     ? (string_to_float(x_7633->var_height_attr_expr))
                                                     : ((HasAttr(x_7633, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_7633, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_7633,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_7633->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_7633->name, std::string("IMG")))
                                                     ? ((x_7633->var_has_height_attr)
                                                            ? (string_to_float(x_7633->var_height_attr_expr))
                                                            : ((HasAttr(x_7633, std::string("image_height")) &&
                                                                (!x_7633->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_7633, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_7633,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_7633->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7633,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7633,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_7633->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_7633->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_7047(const auto &x_7778) {
  auto x_9723 = [&](const auto &x_7779) {
    if (HashtblContain(x_7779->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7780 = HashtblFindExn(x_7779->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7780, x_7779, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9723(x_7778);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7044(const auto &x_7782) {
  if (eq(x_7782->var_display, std::string("none")) || (x_7782->var_inside_svg || x_7782->var_disabled)) {
    return true;
  } else {
    if ((x_7782->parent != nullptr) && (x_7782->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_7782->var_height_expr, std::string("auto")) ||
          (has_suffix(x_7782->var_height_expr, std::string("px")) ||
           (has_suffix(x_7782->var_height_expr, std::string("ch")) ||
            (has_suffix(x_7782->var_height_expr, std::string("lh")) ||
             eq(x_7782->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_7042(const auto &x_7831) {
  auto x_9724 = [&](const auto &x_7832) {
    if (HashtblContain(x_7832->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7833 = HashtblFindExn(x_7832->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7833, x_7832, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9724(x_7831);
  MakeUnit();
  auto x_9725 = [&](const auto &x_7835) {
    if (HashtblContain(x_7835->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7836 = HashtblFindExn(x_7835->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7836, x_7835, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9725(x_7831);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7039(const auto &x_7838) {
  if (HasProp(x_7838, std::string("height"))) {
    return GetProp<std::string>(x_7838, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_7037(const auto &x_7841) {
  auto x_9726 = [&](const auto &x_7842) {
    if (HashtblContain(x_7842->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7843 = HashtblFindExn(x_7842->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7843, x_7842, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9726(x_7841);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7034(const auto &x_7845) {
  if (x_7845->last != nullptr) {
    return plus((x_7845->last)->var_finished_intrinsic_height_sum, (x_7845->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_7032(const auto &x_7854) {
  auto x_9727 = [&](const auto &x_7857) {
    if (HashtblContain(x_7857->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7858 = HashtblFindExn(x_7857->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7858, x_7857, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7854->next, [&](const auto &x_7856) { return MakeUnit(); },
      [&](const auto &x_7855) {
        auto x_9729 = x_9727;
        x_9729(x_7855);
        return MakeUnit();
      });
  auto x_9728 = [&](const auto &x_7862) {
    if (HashtblContain(x_7862->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7863 = HashtblFindExn(x_7862->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7863, x_7862, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  if (x_7854->next != nullptr) {
    auto x_9730 = x_9728;
    OptionMatch(
        x_7854->parent, [&](const auto &x_7861) { return MakeUnit(); },
        [&](const auto &x_7860) {
          auto x_9731 = x_9730;
          x_9731(x_7860);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_7029(const auto &x_7865) {
  return plus((x_7865->prev != nullptr) ? ((x_7865->prev)->var_intrinsic_width_sum) : (0.),
              x_7865->var_intrinsic_width_external);
}
Unit var_modified_x_7027(const auto &x_7874) {
  auto x_9732 = [&](const auto &x_7877) {
    if (HashtblContain(x_7877->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7878 = HashtblFindExn(x_7877->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7878, x_7877, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  if (x_7874->next != nullptr) {
    auto x_9734 = x_9732;
    OptionMatch(
        x_7874->parent, [&](const auto &x_7876) { return MakeUnit(); },
        [&](const auto &x_7875) {
          auto x_9736 = x_9734;
          x_9736(x_7875);
          return MakeUnit();
        });
  }
  auto x_9733 = [&](const auto &x_7882) {
    if (HashtblContain(x_7882->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7883 = HashtblFindExn(x_7882->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7883, x_7882, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7874->next, [&](const auto &x_7881) { return MakeUnit(); },
      [&](const auto &x_7880) {
        auto x_9735 = x_9733;
        x_9735(x_7880);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_7024(const auto &x_7885) {
  return max(x_7885->var_intrinsic_current_line_width,
             (x_7885->prev != nullptr) ? ((x_7885->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_7022(const auto &x_7894) {
  auto x_9737 = [&](const auto &x_7895) {
    if (HashtblContain(x_7895->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7896 = HashtblFindExn(x_7895->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7896, x_7895, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9737(x_7894);
  MakeUnit();
  auto x_9738 = [&](const auto &x_7900) {
    if (HashtblContain(x_7900->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7901 = HashtblFindExn(x_7900->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7901, x_7900, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_7894->next, [&](const auto &x_7899) { return MakeUnit(); },
      [&](const auto &x_7898) {
        auto x_9739 = x_9738;
        x_9739(x_7898);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_7019(const auto &x_7903) {
  return plus(x_7903->var_intrinsic_width_external,
              ((x_7903->prev != nullptr) && (!(x_7903->prev)->var_line_break))
                  ? ((x_7903->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_7017(const auto &x_7916) {
  auto x_9740 = [&](const auto &x_7917) {
    if (HashtblContain(x_7917->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7918 = HashtblFindExn(x_7917->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7918, x_7917, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9740(x_7916);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7014(const auto &x_7920) {
  if (eq(x_7920->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_7920->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_7012(const auto &x_7929) {
  auto x_9741 = [&](const auto &x_7930) {
    if (HashtblContain(x_7930->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_7931 = HashtblFindExn(x_7930->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_7931, x_7930, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9741(x_7929);
  MakeUnit();
  auto x_9742 = [&](const auto &x_7933) {
    if (HashtblContain(x_7933->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_7934 = HashtblFindExn(x_7933->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_7934, x_7933, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9742(x_7929);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7009(const auto &x_7936) {
  if (eq(x_7936->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_7936->var_inside_svg) {
      return 0.;
    } else {
      if (x_7936->var_disabled) {
        return 0.;
      } else {
        if (neq(x_7936->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_7936->var_width_expr, std::string("%"))) &&
             (neq(x_7936->var_width_expr, std::string("fit-content")) &&
              (neq(x_7936->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_7936->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_7936->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_7936->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_7936->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_7936->var_children_intrinsic_width,
              (eq(x_7936->name, std::string("#text")))
                  ? (100.)
                  : ((x_7936->var_is_default_case)
                         ? (0.)
                         : ((eq(x_7936->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_7936->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_7936->name, std::string("svg")))
                                              ? ((x_7936->var_has_width_attr &&
                                                  string_is_float(x_7936->var_width_attr_expr))
                                                     ? (string_to_float(x_7936->var_width_attr_expr))
                                                     : (((!x_7936->var_has_width_attr) &&
                                                         HasAttr(x_7936, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_7936, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_7936,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_7936->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_7936->name, std::string("IMG")))
                                                     ? ((x_7936->var_has_width_attr)
                                                            ? (string_to_float(x_7936->var_width_attr_expr))
                                                            : ((HasAttr(x_7936, std::string("image_width")) &&
                                                                (!x_7936->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_7936, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_7936, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_7936->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7936,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_7936,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_7936->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_7936->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_7007(const auto &x_8089) {
  auto x_9743 = [&](const auto &x_8090) {
    if (HashtblContain(x_8090->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8091 = HashtblFindExn(x_8090->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8091, x_8090, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9743(x_8089);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_7004(const auto &x_8093) {
  if (x_8093->last != nullptr) {
    return (x_8093->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_7002(const auto &x_8098) {
  auto x_9744 = [&](const auto &x_8099) {
    if (HashtblContain(x_8099->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8100 = HashtblFindExn(x_8099->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8100, x_8099, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9744(x_8098);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6999(const auto &x_8102) {
  if (eq(x_8102->var_display, std::string("none")) || (x_8102->var_inside_svg || x_8102->var_disabled)) {
    return true;
  } else {
    if ((x_8102->parent != nullptr) && (x_8102->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_8102->var_width_expr, std::string("auto")) ||
          (has_suffix(x_8102->var_width_expr, std::string("px")) ||
           (has_suffix(x_8102->var_width_expr, std::string("ch")) ||
            (has_prefix(x_8102->var_width_expr, std::string("calc(")) ||
             eq(x_8102->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6997(const auto &x_8151) {
  auto x_9745 = [&](const auto &x_8152) {
    if (HashtblContain(x_8152->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8153 = HashtblFindExn(x_8152->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8153, x_8152, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9745(x_8151);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6994(const auto &x_8155) {
  if (eq(x_8155->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_8155->var_inside_svg) {
      return true;
    } else {
      if (x_8155->var_disabled) {
        return true;
      } else {if ( eq(x_8155->name,std::string("#document")) || (eq(x_8155->name,std::string("#shadow-root")) || (eq(x_8155->name,std::string("DIV")) || (eq(x_8155->name,std::string("HTML")) || (eq(x_8155->name,std::string("BODY")) || (eq(x_8155->name,std::string("BUTTON")) || (eq(x_8155->name,std::string("FOOTER")) || (eq(x_8155->name,std::string("SELECT")) || (eq(x_8155->name,std::string("SECTION")) || (eq(x_8155->name,std::string("FORM")) || (eq(x_8155->name,std::string("CENTER")) || (eq(x_8155->name,std::string("TD")) || (eq(x_8155->name,std::string("TR")) || (eq(x_8155->name,std::string("TBODY")) || (eq(x_8155->name,std::string("TABLE")) || (eq(x_8155->name,std::string("SPAN")) || (eq(x_8155->name,std::string("FONT")) || (eq(x_8155->name,std::string("A")) || (eq(x_8155->name,std::string("ARTICLE")) || (eq(x_8155->name,std::string("P")) || (eq(x_8155->name,std::string("U")) || (eq(x_8155->name,std::string("UL")) || (eq(x_8155->name,std::string("B")) || (eq(x_8155->name,std::string("H1")) || (eq(x_8155->name,std::string("H2")) || (eq(x_8155->name,std::string("H3")) || (eq(x_8155->name,std::string("H4")) || (eq(x_8155->name,std::string("DT")) || (eq(x_8155->name,std::string("DD")) || (eq(x_8155->name,std::string("DL")) || (eq(x_8155->name,std::string("LI")) || (eq(x_8155->name,std::string("LABEL")) || (eq(x_8155->name,std::string("OL")) || (eq(x_8155->name,std::string("NAV")) || (eq(x_8155->name,std::string("HEADER")) || (eq(x_8155->name,std::string("HEAD")) || (eq(x_8155->name,std::string("SOURCE")) || (eq(x_8155->name,std::string("PICTURE")) || (eq(x_8155->name,std::string("FIGURE")) || (eq(x_8155->name,std::string("FIGCAPTION")) || (eq(x_8155->name,std::string("MAIN")) || (eq(x_8155->name,std::string("REACT-PARTIAL")) || (eq(x_8155->name,std::string("QUERY-BUILDER")) || (eq(x_8155->name,std::string("MODAL-DIALOG")) || (eq(x_8155->name,std::string("SCROLLABLE-REGION")) || (eq(x_8155->name,std::string("DIALOG-HELPER")) || (eq(x_8155->name,std::string("AUTO-CHECK")) || (eq(x_8155->name,std::string("TOOL-TIP")) || (eq(x_8155->name,std::string("CUSTOM-SCOPES")) || (eq(x_8155->name,std::string("QBSEARCH-INPUT")) || (eq(x_8155->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_8155->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_8155->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_8155->name,std::string("GHCC-CONSENT")) || (eq(x_8155->name,std::string("GLOBAL-BANNER")) || (eq(x_8155->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_8155->name,std::string("CARD-SKEW")) || (eq(x_8155->name,std::string("EM")) || (eq(x_8155->name,std::string("ASIDE")) || (eq(x_8155->name,std::string("AUDIO")) || (eq(x_8155->name,std::string("SUP")) || (eq(x_8155->name,std::string("TIME")) || (eq(x_8155->name,std::string("ABBR")) || (eq(x_8155->name,std::string("SMALL")) || (eq(x_8155->name,std::string("SLOT")) || eq(x_8155->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6992(const auto &x_8168) {
  auto x_9746 = [&](const auto &x_8169) {
    if (HashtblContain(x_8169->meta->BBTimeTable, std::string("bb_0"))) {
      auto x_8170 = HashtblFindExn(x_8169->meta->BBTimeTable, std::string("bb_0"));
      MetaWriteMetric();
      return QueuePush(x_8170, x_8169, MakeRecomputeBB(std::string("bb_0")));
    } else {
      return MakeUnit();
    }
  };
  x_9746(x_8168);
  MakeUnit();
  auto x_9747 = [&](const auto &x_8172) {
    if (HashtblContain(x_8172->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8173 = HashtblFindExn(x_8172->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8173, x_8172, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9747(x_8168);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6989(const auto &x_8175) {
  if (HasProp(x_8175, std::string("width"))) {
    return GetProp<std::string>(x_8175, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6986(const auto &x_8178) {
  auto x_9748 = [&](const auto &x_8181) {
    if (HashtblContain(x_8181->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8182 = HashtblFindExn(x_8181->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8182, x_8181, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8178->next, [&](const auto &x_8180) { return MakeUnit(); },
      [&](const auto &x_8179) {
        auto x_9749 = x_9748;
        x_9749(x_8179);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6983(const auto &x_8184) {
  if ((x_8184->prev != nullptr) && (!(x_8184->prev)->var_line_break)) {
    return max(x_8184->var_height_external, (x_8184->prev)->var_line_height);
  } else {
    return x_8184->var_height_external;
  }
}
Unit var_modified_x_6981(const auto &x_8201) {
  auto x_9750 = [&](const auto &x_8202) {
    if (HashtblContain(x_8202->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8203 = HashtblFindExn(x_8202->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8203, x_8202, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9750(x_8201);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6978(const auto &x_8205) {
  if (eq(x_8205->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8205->var_height_internal;
  }
}
Unit var_modified_x_6976(const auto &x_8214) {
  auto x_9751 = [&](const auto &x_8215) {
    if (HashtblContain(x_8215->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8216 = HashtblFindExn(x_8215->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8216, x_8215, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9751(x_8214);
  MakeUnit();
  ListIter(x_8214->children, [&](const auto &x_8218) {
    if (HashtblContain(x_8218->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8219 = HashtblFindExn(x_8218->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8219, x_8218, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6973(const auto &x_8221) {
  if (x_8221->var_intrinsic_height_is_height) {
    return x_8221->var_intrinsic_height_internal;
  } else {
    if ((x_8221->parent != nullptr) && (x_8221->parent)->var_is_flex_column) {
      return plus(x_8221->var_intrinsic_height_internal,
                  mult(x_8221->var_flex_amount, (x_8221->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8221->var_height_expr, std::string("%"))) {
        return mult(x_8221->var_box_height,
                    divide(string_to_float(strip_suffix(x_8221->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_8221->var_box_height, x_8221->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_6971(const auto &x_8274) {
  ListIter(x_8274->children, [&](const auto &x_8275) {
    if (HashtblContain(x_8275->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8276 = HashtblFindExn(x_8275->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8276, x_8275, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9752 = [&](const auto &x_8280) {
    if (HashtblContain(x_8280->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8281 = HashtblFindExn(x_8280->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8281, x_8280, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8274->next, [&](const auto &x_8279) { return MakeUnit(); },
      [&](const auto &x_8278) {
        auto x_9753 = x_9752;
        x_9753(x_8278);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6968(const auto &x_8283) {
  if (x_8283->prev != nullptr) {
    if (x_8283->var_line_break || (x_8283->prev)->var_line_break) {
      return plus((x_8283->prev)->var_y, (x_8283->prev)->var_line_height);
    } else {
      return (x_8283->prev)->var_y;
    }
  } else {
    if (x_8283->parent != nullptr) {
      return (x_8283->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6966(const auto &x_8308) {
  auto x_9754 = [&](const auto &x_8311) {
    if (HashtblContain(x_8311->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8312 = HashtblFindExn(x_8311->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8312, x_8311, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8308->next, [&](const auto &x_8310) { return MakeUnit(); },
      [&](const auto &x_8309) {
        auto x_9755 = x_9754;
        x_9755(x_8309);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6963(const auto &x_8314) {
  if (eq(x_8314->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8314->var_width_internal;
  }
}
Unit var_modified_x_6961(const auto &x_8323) {
  auto x_9756 = [&](const auto &x_8324) {
    if (HashtblContain(x_8324->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8325 = HashtblFindExn(x_8324->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8325, x_8324, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9756(x_8323);
  MakeUnit();
  ListIter(x_8323->children, [&](const auto &x_8327) {
    if (HashtblContain(x_8327->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8328 = HashtblFindExn(x_8327->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8328, x_8327, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6958(const auto &x_8330) {
  if (x_8330->var_intrinsic_width_is_width) {
    return x_8330->var_intrinsic_width_internal;
  } else {
    if ((x_8330->parent != nullptr) && (x_8330->parent)->var_is_flex_row) {
      return plus(x_8330->var_intrinsic_width_internal, mult(x_8330->var_flex_amount, (x_8330->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8330->var_width_expr, std::string("%"))) {
        return mult(x_8330->var_box_width,
                    divide(string_to_float(strip_suffix(x_8330->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_8330->var_box_width, x_8330->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_6956(const auto &x_8383) {
  ListIter(x_8383->children, [&](const auto &x_8384) {
    if (HashtblContain(x_8384->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8385 = HashtblFindExn(x_8384->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8385, x_8384, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  auto x_9757 = [&](const auto &x_8389) {
    if (HashtblContain(x_8389->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8390 = HashtblFindExn(x_8389->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8390, x_8389, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  OptionMatch(
      x_8383->next, [&](const auto &x_8388) { return MakeUnit(); },
      [&](const auto &x_8387) {
        auto x_9758 = x_9757;
        x_9758(x_8387);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_6953(const auto &x_8392) {
  if (x_8392->prev != nullptr) {
    if (x_8392->var_line_break || (x_8392->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_8392->prev)->var_x, (x_8392->prev)->var_width_external);
    }
  } else {
    if (x_8392->parent != nullptr) {
      return (x_8392->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6951(const auto &x_8413) {
  ListIter(x_8413->children, [&](const auto &x_8414) {
    if (HashtblContain(x_8414->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8415 = HashtblFindExn(x_8414->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8415, x_8414, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6948(const auto &x_8417) {
  if (gt(x_8417->var_left_over, 0.)) {
    return divide(x_8417->var_left_over, x_8417->var_flex_grow_sum);
  } else {
    return divide(x_8417->var_left_over, x_8417->var_flex_shrink_sum);
  }
}
Unit var_modified_x_6946(const auto &x_8438) {
  auto x_9759 = [&](const auto &x_8439) {
    if (HashtblContain(x_8439->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8440 = HashtblFindExn(x_8439->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8440, x_8439, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9759(x_8438);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6943(const auto &x_8442) {
  if ((x_8442->parent != nullptr) && gt((x_8442->parent)->var_left_over, 0.)) {
    return x_8442->var_flex_grow;
  } else {
    return x_8442->var_flex_shrink;
  }
}
Unit var_modified_x_6941(const auto &x_8455) {
  auto x_9760 = [&](const auto &x_8456) {
    if (HashtblContain(x_8456->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8457 = HashtblFindExn(x_8456->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8457, x_8456, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9760(x_8455);
  MakeUnit();
  ListIter(x_8455->children, [&](const auto &x_8459) {
    if (HashtblContain(x_8459->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8460 = HashtblFindExn(x_8459->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8460, x_8459, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_6938(const auto &x_8462) {
  if (x_8462->var_is_flex_row) {
    return minus(x_8462->var_box_width, (x_8462->last != nullptr) ? ((x_8462->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_8462->var_box_height, (x_8462->last != nullptr) ? ((x_8462->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_6936(const auto &x_8483) {
  auto x_9761 = [&](const auto &x_8484) {
    if (HashtblContain(x_8484->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8485 = HashtblFindExn(x_8484->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8485, x_8484, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9761(x_8483);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6933(const auto &x_8487) {
  if (x_8487->parent != nullptr) {
    return (x_8487->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_6931(const auto &x_8492) {
  auto x_9762 = [&](const auto &x_8493) {
    if (HashtblContain(x_8493->meta->BBTimeTable, std::string("bb_2"))) {
      auto x_8494 = HashtblFindExn(x_8493->meta->BBTimeTable, std::string("bb_2"));
      MetaWriteMetric();
      return QueuePush(x_8494, x_8493, MakeRecomputeBB(std::string("bb_2")));
    } else {
      return MakeUnit();
    }
  };
  x_9762(x_8492);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_6928(const auto &x_8496) {
  if (x_8496->parent != nullptr) {
    return (x_8496->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_6925(const auto &x_8501) { return MakeUnit(); }
auto eval_expr_x_6922(const auto &x_8505) {
  if ((x_8505->prev != nullptr) && (!(x_8505->prev)->var_line_break)) {
    return max(x_8505->var_height_external, (x_8505->prev)->var_line_height);
  } else {
    return x_8505->var_height_external;
  }
}
Unit var_modified_x_6920(const auto &x_8522) { return MakeUnit(); }
auto eval_expr_x_6917(const auto &x_8524) {
  if (eq(x_8524->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8524->var_height_internal;
  }
}
Unit var_modified_x_6915(const auto &x_8533) { return MakeUnit(); }
auto eval_expr_x_6912(const auto &x_8536) {
  if (x_8536->var_intrinsic_height_is_height) {
    return x_8536->var_intrinsic_height_internal;
  } else {
    if ((x_8536->parent != nullptr) && (x_8536->parent)->var_is_flex_column) {
      return plus(x_8536->var_intrinsic_height_internal,
                  mult(x_8536->var_flex_amount, (x_8536->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8536->var_height_expr, std::string("%"))) {
        return mult(x_8536->var_box_height,
                    divide(string_to_float(strip_suffix(x_8536->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_8536->var_box_height, x_8536->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_6910(const auto &x_8589) { return MakeUnit(); }
auto eval_expr_x_6907(const auto &x_8594) {
  if (x_8594->prev != nullptr) {
    if (x_8594->var_line_break || (x_8594->prev)->var_line_break) {
      return plus((x_8594->prev)->var_y, (x_8594->prev)->var_line_height);
    } else {
      return (x_8594->prev)->var_y;
    }
  } else {
    if (x_8594->parent != nullptr) {
      return (x_8594->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6905(const auto &x_8619) { return MakeUnit(); }
auto eval_expr_x_6902(const auto &x_8623) {
  if (eq(x_8623->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_8623->var_width_internal;
  }
}
Unit var_modified_x_6900(const auto &x_8632) { return MakeUnit(); }
auto eval_expr_x_6897(const auto &x_8635) {
  if (x_8635->var_intrinsic_width_is_width) {
    return x_8635->var_intrinsic_width_internal;
  } else {
    if ((x_8635->parent != nullptr) && (x_8635->parent)->var_is_flex_row) {
      return plus(x_8635->var_intrinsic_width_internal, mult(x_8635->var_flex_amount, (x_8635->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_8635->var_width_expr, std::string("%"))) {
        return mult(x_8635->var_box_width,
                    divide(string_to_float(strip_suffix(x_8635->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_8635->var_box_width, x_8635->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_6895(const auto &x_8688) { return MakeUnit(); }
auto eval_expr_x_6892(const auto &x_8693) {
  if (x_8693->prev != nullptr) {
    if (x_8693->var_line_break || (x_8693->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_8693->prev)->var_x, (x_8693->prev)->var_width_external);
    }
  } else {
    if (x_8693->parent != nullptr) {
      return (x_8693->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6890(const auto &x_8714) { return MakeUnit(); }
auto eval_expr_x_6887(const auto &x_8716) {
  if (gt(x_8716->var_left_over, 0.)) {
    return divide(x_8716->var_left_over, x_8716->var_flex_grow_sum);
  } else {
    return divide(x_8716->var_left_over, x_8716->var_flex_shrink_sum);
  }
}
Unit var_modified_x_6885(const auto &x_8737) { return MakeUnit(); }
auto eval_expr_x_6882(const auto &x_8739) {
  if ((x_8739->parent != nullptr) && gt((x_8739->parent)->var_left_over, 0.)) {
    return x_8739->var_flex_grow;
  } else {
    return x_8739->var_flex_shrink;
  }
}
Unit var_modified_x_6880(const auto &x_8752) { return MakeUnit(); }
auto eval_expr_x_6877(const auto &x_8755) {
  if (x_8755->var_is_flex_row) {
    return minus(x_8755->var_box_width, (x_8755->last != nullptr) ? ((x_8755->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_8755->var_box_height, (x_8755->last != nullptr) ? ((x_8755->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_6875(const auto &x_8776) { return MakeUnit(); }
auto eval_expr_x_6872(const auto &x_8778) {
  if (x_8778->parent != nullptr) {
    return (x_8778->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_6870(const auto &x_8783) { return MakeUnit(); }
auto eval_expr_x_6867(const auto &x_8785) {
  if (x_8785->parent != nullptr) {
    return (x_8785->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_6864(const auto &x_8790) { return MakeUnit(); }
auto eval_expr_x_6861(const auto &x_8799) {
  if (eq(x_8799->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_8799->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_8799->parent != nullptr) &&
          (eq((x_8799->parent)->var_display, std::string("flex")) ||
           eq((x_8799->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_8799->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_8799->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_8799->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_8799->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_8799, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_8799, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_8799->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_8799->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_8799->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_8799->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_8799->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_8799->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_8799->var_display, std::string("list-item"))) {
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
Unit var_modified_x_6859(const auto &x_8876) { return MakeUnit(); }
auto eval_expr_x_6856(const auto &x_8878) {
  return (((!(x_8878->parent != nullptr)) || (x_8878->parent)->var_visible) &&
          (neq(x_8878->var_display, std::string("none")) && ((!x_8878->var_inside_svg) && (!x_8878->var_disabled))));
}
Unit var_modified_x_6854(const auto &x_8895) { return MakeUnit(); }
auto eval_expr_x_6851(const auto &x_8899) {
  if (eq(x_8899->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_8899->parent != nullptr) && (x_8899->parent)->var_disabled);
  }
}
Unit var_modified_x_6849(const auto &x_8904) { return MakeUnit(); }
auto eval_expr_x_6846(const auto &x_8908) {
  return ((x_8908->parent != nullptr) && ((x_8908->parent)->var_is_svg_block || (x_8908->parent)->var_inside_svg));
}
Unit var_modified_x_6844(const auto &x_8917) { return MakeUnit(); }
auto eval_expr_x_6841(const auto &x_8919) { return eq(x_8919->name, std::string("svg")); }
Unit var_modified_x_6839(const auto &x_8920) { return MakeUnit(); }
auto eval_expr_x_6836(const auto &x_8922) { return neq(x_8922->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_6834(const auto &x_8927) { return MakeUnit(); }
auto eval_expr_x_6831(const auto &x_8930) {
  if (!HasAttr(x_8930, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_8930, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_8930, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_8930, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_6829(const auto &x_8941) { return MakeUnit(); }
auto eval_expr_x_6826(const auto &x_8943) { return neq(x_8943->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_6824(const auto &x_8948) { return MakeUnit(); }
auto eval_expr_x_6821(const auto &x_8951) {
  if (!HasAttr(x_8951, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_8951, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_8951, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_8951, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_6819(const auto &x_8962) { return MakeUnit(); }
auto eval_expr_x_6816(const auto &x_8965) {
  if ((x_8965->parent != nullptr) &&
      (eq((x_8965->parent)->var_display, std::string("flex")) ||
       eq((x_8965->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_8965->parent)->var_flex_direction, std::string("column")) ||
        eq((x_8965->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6814(const auto &x_8990) { return MakeUnit(); }
auto eval_expr_x_6811(const auto &x_8994) {
  if ((x_8994->parent != nullptr) &&
      (eq((x_8994->parent)->var_display, std::string("flex")) ||
       eq((x_8994->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_8994->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_6809(const auto &x_9019) { return MakeUnit(); }
auto eval_expr_x_6806(const auto &x_9021) {
  if (HasProp(x_9021, std::string("flex-direction"))) {
    return GetProp<std::string>(x_9021, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_6804(const auto &x_9024) { return MakeUnit(); }
auto eval_expr_x_6801(const auto &x_9029) {
  return plus((x_9029->prev != nullptr) ? ((x_9029->prev)->var_flex_shrink_sum) : (0.), x_9029->var_flex_shrink);
}
Unit var_modified_x_6799(const auto &x_9038) { return MakeUnit(); }
auto eval_expr_x_6796(const auto &x_9043) {
  return plus((x_9043->prev != nullptr) ? ((x_9043->prev)->var_flex_grow_sum) : (0.), x_9043->var_flex_grow);
}
Unit var_modified_x_6794(const auto &x_9052) { return MakeUnit(); }
auto eval_expr_x_6791(const auto &x_9055) {
  if (HasProp(x_9055, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_9055, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_6789(const auto &x_9058) { return MakeUnit(); }
auto eval_expr_x_6786(const auto &x_9061) {
  if (HasProp(x_9061, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_9061, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_6784(const auto &x_9064) { return MakeUnit(); }
auto eval_expr_x_6781(const auto &x_9068) {
  if (HasProp(x_9068, std::string("position"))) {
    return GetProp<std::string>(x_9068, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_6779(const auto &x_9071) { return MakeUnit(); }
auto eval_expr_x_6776(const auto &x_9075) {
  if (HasProp(x_9075, std::string("display"))) {
    return GetProp<std::string>(x_9075, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_6773(const auto &x_9078) { return MakeUnit(); }
auto eval_expr_x_6770(const auto &x_9085) {
  if (x_9085->prev != nullptr) {
    if (x_9085->var_line_break) {
      return plus((x_9085->prev)->var_finished_intrinsic_height_sum,
                  plus((x_9085->prev)->var_intrinsic_current_line_height, x_9085->var_intrinsic_height_external));
    } else {
      return (x_9085->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_9085->var_line_break) {
      return x_9085->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_6768(const auto &x_9114) { return MakeUnit(); }
auto eval_expr_x_6765(const auto &x_9121) {
  if (x_9121->var_line_break) {
    return 0.;
  } else {
    return max(x_9121->var_intrinsic_height_external,
               (x_9121->prev != nullptr) ? ((x_9121->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_6763(const auto &x_9134) { return MakeUnit(); }
auto eval_expr_x_6760(const auto &x_9141) {
  return plus((x_9141->prev != nullptr) ? ((x_9141->prev)->var_intrinsic_height_sum) : (0.),
              x_9141->var_intrinsic_height_external);
}
Unit var_modified_x_6758(const auto &x_9150) { return MakeUnit(); }
auto eval_expr_x_6755(const auto &x_9152) {
  if (eq(x_9152->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_9152->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_6753(const auto &x_9161) { return MakeUnit(); }
auto eval_expr_x_6750(const auto &x_9164) {
  if (eq(x_9164->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_9164->var_inside_svg) {
      return 0.;
    } else {
      if (x_9164->var_disabled) {
        return 0.;
      } else {
        if (neq(x_9164->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_9164->var_height_expr, std::string("%"))) &&
             neq(x_9164->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_9164->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_9164->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_9164->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_9164->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_9164->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_9164->var_children_intrinsic_height,
              (eq(x_9164->name, std::string("#text")))
                  ? (10.)
                  : ((x_9164->var_is_default_case)
                         ? (0.)
                         : ((eq(x_9164->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_9164->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_9164->name, std::string("svg")))
                                              ? ((x_9164->var_has_height_attr &&
                                                  string_is_float(x_9164->var_height_attr_expr))
                                                     ? (string_to_float(x_9164->var_height_attr_expr))
                                                     : ((HasAttr(x_9164, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_9164, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_9164,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_9164->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_9164->name, std::string("IMG")))
                                                     ? ((x_9164->var_has_height_attr)
                                                            ? (string_to_float(x_9164->var_height_attr_expr))
                                                            : ((HasAttr(x_9164, std::string("image_height")) &&
                                                                (!x_9164->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_9164, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_9164,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_9164->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9164,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9164,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_9164->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_9164->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6748(const auto &x_9309) { return MakeUnit(); }
auto eval_expr_x_6745(const auto &x_9311) {
  if (eq(x_9311->var_display, std::string("none")) || (x_9311->var_inside_svg || x_9311->var_disabled)) {
    return true;
  } else {
    if ((x_9311->parent != nullptr) && (x_9311->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_9311->var_height_expr, std::string("auto")) ||
          (has_suffix(x_9311->var_height_expr, std::string("px")) ||
           (has_suffix(x_9311->var_height_expr, std::string("ch")) ||
            (has_suffix(x_9311->var_height_expr, std::string("lh")) ||
             eq(x_9311->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6743(const auto &x_9360) { return MakeUnit(); }
auto eval_expr_x_6740(const auto &x_9363) {
  if (HasProp(x_9363, std::string("height"))) {
    return GetProp<std::string>(x_9363, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_6738(const auto &x_9366) { return MakeUnit(); }
auto eval_expr_x_6735(const auto &x_9368) {
  if (x_9368->last != nullptr) {
    return plus((x_9368->last)->var_finished_intrinsic_height_sum, (x_9368->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_6733(const auto &x_9377) { return MakeUnit(); }
auto eval_expr_x_6730(const auto &x_9384) {
  return plus((x_9384->prev != nullptr) ? ((x_9384->prev)->var_intrinsic_width_sum) : (0.),
              x_9384->var_intrinsic_width_external);
}
Unit var_modified_x_6728(const auto &x_9393) { return MakeUnit(); }
auto eval_expr_x_6725(const auto &x_9400) {
  return max(x_9400->var_intrinsic_current_line_width,
             (x_9400->prev != nullptr) ? ((x_9400->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_6723(const auto &x_9409) { return MakeUnit(); }
auto eval_expr_x_6720(const auto &x_9414) {
  return plus(x_9414->var_intrinsic_width_external,
              ((x_9414->prev != nullptr) && (!(x_9414->prev)->var_line_break))
                  ? ((x_9414->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_6718(const auto &x_9427) { return MakeUnit(); }
auto eval_expr_x_6715(const auto &x_9429) {
  if (eq(x_9429->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_9429->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_6713(const auto &x_9438) { return MakeUnit(); }
auto eval_expr_x_6710(const auto &x_9441) {
  if (eq(x_9441->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_9441->var_inside_svg) {
      return 0.;
    } else {
      if (x_9441->var_disabled) {
        return 0.;
      } else {
        if (neq(x_9441->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_9441->var_width_expr, std::string("%"))) &&
             (neq(x_9441->var_width_expr, std::string("fit-content")) &&
              (neq(x_9441->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_9441->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_9441->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_9441->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_9441->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_9441->var_children_intrinsic_width,
              (eq(x_9441->name, std::string("#text")))
                  ? (100.)
                  : ((x_9441->var_is_default_case)
                         ? (0.)
                         : ((eq(x_9441->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_9441->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_9441->name, std::string("svg")))
                                              ? ((x_9441->var_has_width_attr &&
                                                  string_is_float(x_9441->var_width_attr_expr))
                                                     ? (string_to_float(x_9441->var_width_attr_expr))
                                                     : (((!x_9441->var_has_width_attr) &&
                                                         HasAttr(x_9441, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_9441, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_9441,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_9441->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_9441->name, std::string("IMG")))
                                                     ? ((x_9441->var_has_width_attr)
                                                            ? (string_to_float(x_9441->var_width_attr_expr))
                                                            : ((HasAttr(x_9441, std::string("image_width")) &&
                                                                (!x_9441->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_9441, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_9441, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_9441->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9441,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_9441,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_9441->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_9441->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_6708(const auto &x_9594) { return MakeUnit(); }
auto eval_expr_x_6705(const auto &x_9596) {
  if (x_9596->last != nullptr) {
    return (x_9596->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_6703(const auto &x_9601) { return MakeUnit(); }
auto eval_expr_x_6700(const auto &x_9603) {
  if (eq(x_9603->var_display, std::string("none")) || (x_9603->var_inside_svg || x_9603->var_disabled)) {
    return true;
  } else {
    if ((x_9603->parent != nullptr) && (x_9603->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_9603->var_width_expr, std::string("auto")) ||
          (has_suffix(x_9603->var_width_expr, std::string("px")) ||
           (has_suffix(x_9603->var_width_expr, std::string("ch")) ||
            (has_prefix(x_9603->var_width_expr, std::string("calc(")) ||
             eq(x_9603->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_6698(const auto &x_9652) { return MakeUnit(); }
auto eval_expr_x_6695(const auto &x_9654) {
  if (eq(x_9654->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_9654->var_inside_svg) {
      return true;
    } else {
      if (x_9654->var_disabled) {
        return true;
      } else {if ( eq(x_9654->name,std::string("#document")) || (eq(x_9654->name,std::string("#shadow-root")) || (eq(x_9654->name,std::string("DIV")) || (eq(x_9654->name,std::string("HTML")) || (eq(x_9654->name,std::string("BODY")) || (eq(x_9654->name,std::string("BUTTON")) || (eq(x_9654->name,std::string("FOOTER")) || (eq(x_9654->name,std::string("SELECT")) || (eq(x_9654->name,std::string("SECTION")) || (eq(x_9654->name,std::string("FORM")) || (eq(x_9654->name,std::string("CENTER")) || (eq(x_9654->name,std::string("TD")) || (eq(x_9654->name,std::string("TR")) || (eq(x_9654->name,std::string("TBODY")) || (eq(x_9654->name,std::string("TABLE")) || (eq(x_9654->name,std::string("SPAN")) || (eq(x_9654->name,std::string("FONT")) || (eq(x_9654->name,std::string("A")) || (eq(x_9654->name,std::string("ARTICLE")) || (eq(x_9654->name,std::string("P")) || (eq(x_9654->name,std::string("U")) || (eq(x_9654->name,std::string("UL")) || (eq(x_9654->name,std::string("B")) || (eq(x_9654->name,std::string("H1")) || (eq(x_9654->name,std::string("H2")) || (eq(x_9654->name,std::string("H3")) || (eq(x_9654->name,std::string("H4")) || (eq(x_9654->name,std::string("DT")) || (eq(x_9654->name,std::string("DD")) || (eq(x_9654->name,std::string("DL")) || (eq(x_9654->name,std::string("LI")) || (eq(x_9654->name,std::string("LABEL")) || (eq(x_9654->name,std::string("OL")) || (eq(x_9654->name,std::string("NAV")) || (eq(x_9654->name,std::string("HEADER")) || (eq(x_9654->name,std::string("HEAD")) || (eq(x_9654->name,std::string("SOURCE")) || (eq(x_9654->name,std::string("PICTURE")) || (eq(x_9654->name,std::string("FIGURE")) || (eq(x_9654->name,std::string("FIGCAPTION")) || (eq(x_9654->name,std::string("MAIN")) || (eq(x_9654->name,std::string("REACT-PARTIAL")) || (eq(x_9654->name,std::string("QUERY-BUILDER")) || (eq(x_9654->name,std::string("MODAL-DIALOG")) || (eq(x_9654->name,std::string("SCROLLABLE-REGION")) || (eq(x_9654->name,std::string("DIALOG-HELPER")) || (eq(x_9654->name,std::string("AUTO-CHECK")) || (eq(x_9654->name,std::string("TOOL-TIP")) || (eq(x_9654->name,std::string("CUSTOM-SCOPES")) || (eq(x_9654->name,std::string("QBSEARCH-INPUT")) || (eq(x_9654->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_9654->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_9654->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_9654->name,std::string("GHCC-CONSENT")) || (eq(x_9654->name,std::string("GLOBAL-BANNER")) || (eq(x_9654->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_9654->name,std::string("CARD-SKEW")) || (eq(x_9654->name,std::string("EM")) || (eq(x_9654->name,std::string("ASIDE")) || (eq(x_9654->name,std::string("AUDIO")) || (eq(x_9654->name,std::string("SUP")) || (eq(x_9654->name,std::string("TIME")) || (eq(x_9654->name,std::string("ABBR")) || (eq(x_9654->name,std::string("SMALL")) || (eq(x_9654->name,std::string("SLOT")) || eq(x_9654->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_6693(const auto &x_9667) { return MakeUnit(); }
auto eval_expr_x_6690(const auto &x_9670) {
  if (HasProp(x_9670, std::string("width"))) {
    return GetProp<std::string>(x_9670, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_6653(const auto &x_6689) {
  WriteMetric();
  auto x_6691 = eval_expr_x_6690(x_6689);
  if (x_6689->has_var_width_expr) {
    auto x_6692 = x_6689->var_width_expr;
    if (!EqualValue(x_6692, x_6691)) {
      var_modified_x_6693(x_6689);
    }
  }
  x_6689->has_var_width_expr = true;
  x_6689->var_width_expr = x_6691;
  WriteMetric();
  auto x_6696 = eval_expr_x_6695(x_6689);
  if (x_6689->has_var_is_default_case) {
    auto x_6697 = x_6689->var_is_default_case;
    if (!EqualValue(x_6697, x_6696)) {
      var_modified_x_6698(x_6689);
    }
  }
  x_6689->has_var_is_default_case = true;
  x_6689->var_is_default_case = x_6696;
  WriteMetric();
  auto x_6701 = eval_expr_x_6700(x_6689);
  if (x_6689->has_var_intrinsic_width_is_width) {
    auto x_6702 = x_6689->var_intrinsic_width_is_width;
    if (!EqualValue(x_6702, x_6701)) {
      var_modified_x_6703(x_6689);
    }
  }
  x_6689->has_var_intrinsic_width_is_width = true;
  x_6689->var_intrinsic_width_is_width = x_6701;
  WriteMetric();
  auto x_6706 = eval_expr_x_6705(x_6689);
  if (x_6689->has_var_children_intrinsic_width) {
    auto x_6707 = x_6689->var_children_intrinsic_width;
    if (!EqualValue(x_6707, x_6706)) {
      var_modified_x_6708(x_6689);
    }
  }
  x_6689->has_var_children_intrinsic_width = true;
  x_6689->var_children_intrinsic_width = x_6706;
  WriteMetric();
  auto x_6711 = eval_expr_x_6710(x_6689);
  if (x_6689->has_var_intrinsic_width_internal) {
    auto x_6712 = x_6689->var_intrinsic_width_internal;
    if (!EqualValue(x_6712, x_6711)) {
      var_modified_x_6713(x_6689);
    }
  }
  x_6689->has_var_intrinsic_width_internal = true;
  x_6689->var_intrinsic_width_internal = x_6711;
  WriteMetric();
  auto x_6716 = eval_expr_x_6715(x_6689);
  if (x_6689->has_var_intrinsic_width_external) {
    auto x_6717 = x_6689->var_intrinsic_width_external;
    if (!EqualValue(x_6717, x_6716)) {
      var_modified_x_6718(x_6689);
    }
  }
  x_6689->has_var_intrinsic_width_external = true;
  x_6689->var_intrinsic_width_external = x_6716;
  WriteMetric();
  auto x_6721 = eval_expr_x_6720(x_6689);
  if (x_6689->has_var_intrinsic_current_line_width) {
    auto x_6722 = x_6689->var_intrinsic_current_line_width;
    if (!EqualValue(x_6722, x_6721)) {
      var_modified_x_6723(x_6689);
    }
  }
  x_6689->has_var_intrinsic_current_line_width = true;
  x_6689->var_intrinsic_current_line_width = x_6721;
  WriteMetric();
  auto x_6726 = eval_expr_x_6725(x_6689);
  if (x_6689->has_var_intrinsic_width_max) {
    auto x_6727 = x_6689->var_intrinsic_width_max;
    if (!EqualValue(x_6727, x_6726)) {
      var_modified_x_6728(x_6689);
    }
  }
  x_6689->has_var_intrinsic_width_max = true;
  x_6689->var_intrinsic_width_max = x_6726;
  WriteMetric();
  auto x_6731 = eval_expr_x_6730(x_6689);
  if (x_6689->has_var_intrinsic_width_sum) {
    auto x_6732 = x_6689->var_intrinsic_width_sum;
    if (!EqualValue(x_6732, x_6731)) {
      var_modified_x_6733(x_6689);
    }
  }
  x_6689->has_var_intrinsic_width_sum = true;
  x_6689->var_intrinsic_width_sum = x_6731;
  WriteMetric();
  auto x_6736 = eval_expr_x_6735(x_6689);
  if (x_6689->has_var_children_intrinsic_height) {
    auto x_6737 = x_6689->var_children_intrinsic_height;
    if (!EqualValue(x_6737, x_6736)) {
      var_modified_x_6738(x_6689);
    }
  }
  x_6689->has_var_children_intrinsic_height = true;
  x_6689->var_children_intrinsic_height = x_6736;
  WriteMetric();
  auto x_6741 = eval_expr_x_6740(x_6689);
  if (x_6689->has_var_height_expr) {
    auto x_6742 = x_6689->var_height_expr;
    if (!EqualValue(x_6742, x_6741)) {
      var_modified_x_6743(x_6689);
    }
  }
  x_6689->has_var_height_expr = true;
  x_6689->var_height_expr = x_6741;
  WriteMetric();
  auto x_6746 = eval_expr_x_6745(x_6689);
  if (x_6689->has_var_intrinsic_height_is_height) {
    auto x_6747 = x_6689->var_intrinsic_height_is_height;
    if (!EqualValue(x_6747, x_6746)) {
      var_modified_x_6748(x_6689);
    }
  }
  x_6689->has_var_intrinsic_height_is_height = true;
  x_6689->var_intrinsic_height_is_height = x_6746;
  WriteMetric();
  auto x_6751 = eval_expr_x_6750(x_6689);
  if (x_6689->has_var_intrinsic_height_internal) {
    auto x_6752 = x_6689->var_intrinsic_height_internal;
    if (!EqualValue(x_6752, x_6751)) {
      var_modified_x_6753(x_6689);
    }
  }
  x_6689->has_var_intrinsic_height_internal = true;
  x_6689->var_intrinsic_height_internal = x_6751;
  WriteMetric();
  auto x_6756 = eval_expr_x_6755(x_6689);
  if (x_6689->has_var_intrinsic_height_external) {
    auto x_6757 = x_6689->var_intrinsic_height_external;
    if (!EqualValue(x_6757, x_6756)) {
      var_modified_x_6758(x_6689);
    }
  }
  x_6689->has_var_intrinsic_height_external = true;
  x_6689->var_intrinsic_height_external = x_6756;
  WriteMetric();
  auto x_6761 = eval_expr_x_6760(x_6689);
  if (x_6689->has_var_intrinsic_height_sum) {
    auto x_6762 = x_6689->var_intrinsic_height_sum;
    if (!EqualValue(x_6762, x_6761)) {
      var_modified_x_6763(x_6689);
    }
  }
  x_6689->has_var_intrinsic_height_sum = true;
  x_6689->var_intrinsic_height_sum = x_6761;
  WriteMetric();
  auto x_6766 = eval_expr_x_6765(x_6689);
  if (x_6689->has_var_intrinsic_current_line_height) {
    auto x_6767 = x_6689->var_intrinsic_current_line_height;
    if (!EqualValue(x_6767, x_6766)) {
      var_modified_x_6768(x_6689);
    }
  }
  x_6689->has_var_intrinsic_current_line_height = true;
  x_6689->var_intrinsic_current_line_height = x_6766;
  WriteMetric();
  auto x_6771 = eval_expr_x_6770(x_6689);
  if (x_6689->has_var_finished_intrinsic_height_sum) {
    auto x_6772 = x_6689->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_6772, x_6771)) {
      var_modified_x_6773(x_6689);
    }
  }
  x_6689->has_var_finished_intrinsic_height_sum = true;
  x_6689->var_finished_intrinsic_height_sum = x_6771;
  return MakeUnit();
}
Unit eval_stmts_x_6651(const auto &x_6775) {
  WriteMetric();
  auto x_6777 = eval_expr_x_6776(x_6775);
  if (x_6775->has_var_display) {
    auto x_6778 = x_6775->var_display;
    if (!EqualValue(x_6778, x_6777)) {
      var_modified_x_6779(x_6775);
    }
  }
  x_6775->has_var_display = true;
  x_6775->var_display = x_6777;
  WriteMetric();
  auto x_6782 = eval_expr_x_6781(x_6775);
  if (x_6775->has_var_position) {
    auto x_6783 = x_6775->var_position;
    if (!EqualValue(x_6783, x_6782)) {
      var_modified_x_6784(x_6775);
    }
  }
  x_6775->has_var_position = true;
  x_6775->var_position = x_6782;
  WriteMetric();
  auto x_6787 = eval_expr_x_6786(x_6775);
  if (x_6775->has_var_flex_grow) {
    auto x_6788 = x_6775->var_flex_grow;
    if (!EqualValue(x_6788, x_6787)) {
      var_modified_x_6789(x_6775);
    }
  }
  x_6775->has_var_flex_grow = true;
  x_6775->var_flex_grow = x_6787;
  WriteMetric();
  auto x_6792 = eval_expr_x_6791(x_6775);
  if (x_6775->has_var_flex_shrink) {
    auto x_6793 = x_6775->var_flex_shrink;
    if (!EqualValue(x_6793, x_6792)) {
      var_modified_x_6794(x_6775);
    }
  }
  x_6775->has_var_flex_shrink = true;
  x_6775->var_flex_shrink = x_6792;
  WriteMetric();
  auto x_6797 = eval_expr_x_6796(x_6775);
  if (x_6775->has_var_flex_grow_sum) {
    auto x_6798 = x_6775->var_flex_grow_sum;
    if (!EqualValue(x_6798, x_6797)) {
      var_modified_x_6799(x_6775);
    }
  }
  x_6775->has_var_flex_grow_sum = true;
  x_6775->var_flex_grow_sum = x_6797;
  WriteMetric();
  auto x_6802 = eval_expr_x_6801(x_6775);
  if (x_6775->has_var_flex_shrink_sum) {
    auto x_6803 = x_6775->var_flex_shrink_sum;
    if (!EqualValue(x_6803, x_6802)) {
      var_modified_x_6804(x_6775);
    }
  }
  x_6775->has_var_flex_shrink_sum = true;
  x_6775->var_flex_shrink_sum = x_6802;
  WriteMetric();
  auto x_6807 = eval_expr_x_6806(x_6775);
  if (x_6775->has_var_flex_direction) {
    auto x_6808 = x_6775->var_flex_direction;
    if (!EqualValue(x_6808, x_6807)) {
      var_modified_x_6809(x_6775);
    }
  }
  x_6775->has_var_flex_direction = true;
  x_6775->var_flex_direction = x_6807;
  WriteMetric();
  auto x_6812 = eval_expr_x_6811(x_6775);
  if (x_6775->has_var_is_flex_row) {
    auto x_6813 = x_6775->var_is_flex_row;
    if (!EqualValue(x_6813, x_6812)) {
      var_modified_x_6814(x_6775);
    }
  }
  x_6775->has_var_is_flex_row = true;
  x_6775->var_is_flex_row = x_6812;
  WriteMetric();
  auto x_6817 = eval_expr_x_6816(x_6775);
  if (x_6775->has_var_is_flex_column) {
    auto x_6818 = x_6775->var_is_flex_column;
    if (!EqualValue(x_6818, x_6817)) {
      var_modified_x_6819(x_6775);
    }
  }
  x_6775->has_var_is_flex_column = true;
  x_6775->var_is_flex_column = x_6817;
  WriteMetric();
  auto x_6822 = eval_expr_x_6821(x_6775);
  if (x_6775->has_var_width_attr_expr) {
    auto x_6823 = x_6775->var_width_attr_expr;
    if (!EqualValue(x_6823, x_6822)) {
      var_modified_x_6824(x_6775);
    }
  }
  x_6775->has_var_width_attr_expr = true;
  x_6775->var_width_attr_expr = x_6822;
  WriteMetric();
  auto x_6827 = eval_expr_x_6826(x_6775);
  if (x_6775->has_var_has_width_attr) {
    auto x_6828 = x_6775->var_has_width_attr;
    if (!EqualValue(x_6828, x_6827)) {
      var_modified_x_6829(x_6775);
    }
  }
  x_6775->has_var_has_width_attr = true;
  x_6775->var_has_width_attr = x_6827;
  WriteMetric();
  auto x_6832 = eval_expr_x_6831(x_6775);
  if (x_6775->has_var_height_attr_expr) {
    auto x_6833 = x_6775->var_height_attr_expr;
    if (!EqualValue(x_6833, x_6832)) {
      var_modified_x_6834(x_6775);
    }
  }
  x_6775->has_var_height_attr_expr = true;
  x_6775->var_height_attr_expr = x_6832;
  WriteMetric();
  auto x_6837 = eval_expr_x_6836(x_6775);
  if (x_6775->has_var_has_height_attr) {
    auto x_6838 = x_6775->var_has_height_attr;
    if (!EqualValue(x_6838, x_6837)) {
      var_modified_x_6839(x_6775);
    }
  }
  x_6775->has_var_has_height_attr = true;
  x_6775->var_has_height_attr = x_6837;
  WriteMetric();
  auto x_6842 = eval_expr_x_6841(x_6775);
  if (x_6775->has_var_is_svg_block) {
    auto x_6843 = x_6775->var_is_svg_block;
    if (!EqualValue(x_6843, x_6842)) {
      var_modified_x_6844(x_6775);
    }
  }
  x_6775->has_var_is_svg_block = true;
  x_6775->var_is_svg_block = x_6842;
  WriteMetric();
  auto x_6847 = eval_expr_x_6846(x_6775);
  if (x_6775->has_var_inside_svg) {
    auto x_6848 = x_6775->var_inside_svg;
    if (!EqualValue(x_6848, x_6847)) {
      var_modified_x_6849(x_6775);
    }
  }
  x_6775->has_var_inside_svg = true;
  x_6775->var_inside_svg = x_6847;
  WriteMetric();
  auto x_6852 = eval_expr_x_6851(x_6775);
  if (x_6775->has_var_disabled) {
    auto x_6853 = x_6775->var_disabled;
    if (!EqualValue(x_6853, x_6852)) {
      var_modified_x_6854(x_6775);
    }
  }
  x_6775->has_var_disabled = true;
  x_6775->var_disabled = x_6852;
  WriteMetric();
  auto x_6857 = eval_expr_x_6856(x_6775);
  if (x_6775->has_var_visible) {
    auto x_6858 = x_6775->var_visible;
    if (!EqualValue(x_6858, x_6857)) {
      var_modified_x_6859(x_6775);
    }
  }
  x_6775->has_var_visible = true;
  x_6775->var_visible = x_6857;
  WriteMetric();
  auto x_6862 = eval_expr_x_6861(x_6775);
  if (x_6775->has_var_line_break) {
    auto x_6863 = x_6775->var_line_break;
    if (!EqualValue(x_6863, x_6862)) {
      var_modified_x_6864(x_6775);
    }
  }
  x_6775->has_var_line_break = true;
  x_6775->var_line_break = x_6862;
  return MakeUnit();
}
Unit eval_stmts_x_6648(const auto &x_6866) {
  WriteMetric();
  auto x_6868 = eval_expr_x_6867(x_6866);
  if (x_6866->has_var_box_width) {
    auto x_6869 = x_6866->var_box_width;
    if (!EqualValue(x_6869, x_6868)) {
      var_modified_x_6870(x_6866);
    }
  }
  x_6866->has_var_box_width = true;
  x_6866->var_box_width = x_6868;
  WriteMetric();
  auto x_6873 = eval_expr_x_6872(x_6866);
  if (x_6866->has_var_box_height) {
    auto x_6874 = x_6866->var_box_height;
    if (!EqualValue(x_6874, x_6873)) {
      var_modified_x_6875(x_6866);
    }
  }
  x_6866->has_var_box_height = true;
  x_6866->var_box_height = x_6873;
  WriteMetric();
  auto x_6878 = eval_expr_x_6877(x_6866);
  if (x_6866->has_var_left_over) {
    auto x_6879 = x_6866->var_left_over;
    if (!EqualValue(x_6879, x_6878)) {
      var_modified_x_6880(x_6866);
    }
  }
  x_6866->has_var_left_over = true;
  x_6866->var_left_over = x_6878;
  WriteMetric();
  auto x_6883 = eval_expr_x_6882(x_6866);
  if (x_6866->has_var_flex_amount) {
    auto x_6884 = x_6866->var_flex_amount;
    if (!EqualValue(x_6884, x_6883)) {
      var_modified_x_6885(x_6866);
    }
  }
  x_6866->has_var_flex_amount = true;
  x_6866->var_flex_amount = x_6883;
  WriteMetric();
  auto x_6888 = eval_expr_x_6887(x_6866);
  if (x_6866->has_var_flex_unit) {
    auto x_6889 = x_6866->var_flex_unit;
    if (!EqualValue(x_6889, x_6888)) {
      var_modified_x_6890(x_6866);
    }
  }
  x_6866->has_var_flex_unit = true;
  x_6866->var_flex_unit = x_6888;
  WriteMetric();
  auto x_6893 = eval_expr_x_6892(x_6866);
  if (x_6866->has_var_x) {
    auto x_6894 = x_6866->var_x;
    if (!EqualValue(x_6894, x_6893)) {
      var_modified_x_6895(x_6866);
    }
  }
  x_6866->has_var_x = true;
  x_6866->var_x = x_6893;
  WriteMetric();
  auto x_6898 = eval_expr_x_6897(x_6866);
  if (x_6866->has_var_width_internal) {
    auto x_6899 = x_6866->var_width_internal;
    if (!EqualValue(x_6899, x_6898)) {
      var_modified_x_6900(x_6866);
    }
  }
  x_6866->has_var_width_internal = true;
  x_6866->var_width_internal = x_6898;
  WriteMetric();
  auto x_6903 = eval_expr_x_6902(x_6866);
  if (x_6866->has_var_width_external) {
    auto x_6904 = x_6866->var_width_external;
    if (!EqualValue(x_6904, x_6903)) {
      var_modified_x_6905(x_6866);
    }
  }
  x_6866->has_var_width_external = true;
  x_6866->var_width_external = x_6903;
  WriteMetric();
  auto x_6908 = eval_expr_x_6907(x_6866);
  if (x_6866->has_var_y) {
    auto x_6909 = x_6866->var_y;
    if (!EqualValue(x_6909, x_6908)) {
      var_modified_x_6910(x_6866);
    }
  }
  x_6866->has_var_y = true;
  x_6866->var_y = x_6908;
  WriteMetric();
  auto x_6913 = eval_expr_x_6912(x_6866);
  if (x_6866->has_var_height_internal) {
    auto x_6914 = x_6866->var_height_internal;
    if (!EqualValue(x_6914, x_6913)) {
      var_modified_x_6915(x_6866);
    }
  }
  x_6866->has_var_height_internal = true;
  x_6866->var_height_internal = x_6913;
  WriteMetric();
  auto x_6918 = eval_expr_x_6917(x_6866);
  if (x_6866->has_var_height_external) {
    auto x_6919 = x_6866->var_height_external;
    if (!EqualValue(x_6919, x_6918)) {
      var_modified_x_6920(x_6866);
    }
  }
  x_6866->has_var_height_external = true;
  x_6866->var_height_external = x_6918;
  WriteMetric();
  auto x_6923 = eval_expr_x_6922(x_6866);
  if (x_6866->has_var_line_height) {
    auto x_6924 = x_6866->var_line_height;
    if (!EqualValue(x_6924, x_6923)) {
      var_modified_x_6925(x_6866);
    }
  }
  x_6866->has_var_line_height = true;
  x_6866->var_line_height = x_6923;
  return MakeUnit();
}
Unit eval_stmts_x_6594(const auto &x_6927) {
  WriteMetric();
  auto x_6929 = eval_expr_x_6928(x_6927);
  if (x_6927->has_var_box_width) {
    auto x_6930 = x_6927->var_box_width;
    if (!EqualValue(x_6930, x_6929)) {
      var_modified_x_6931(x_6927);
    }
  }
  x_6927->has_var_box_width = true;
  x_6927->var_box_width = x_6929;
  WriteMetric();
  auto x_6934 = eval_expr_x_6933(x_6927);
  if (x_6927->has_var_box_height) {
    auto x_6935 = x_6927->var_box_height;
    if (!EqualValue(x_6935, x_6934)) {
      var_modified_x_6936(x_6927);
    }
  }
  x_6927->has_var_box_height = true;
  x_6927->var_box_height = x_6934;
  WriteMetric();
  auto x_6939 = eval_expr_x_6938(x_6927);
  if (x_6927->has_var_left_over) {
    auto x_6940 = x_6927->var_left_over;
    if (!EqualValue(x_6940, x_6939)) {
      var_modified_x_6941(x_6927);
    }
  }
  x_6927->has_var_left_over = true;
  x_6927->var_left_over = x_6939;
  WriteMetric();
  auto x_6944 = eval_expr_x_6943(x_6927);
  if (x_6927->has_var_flex_amount) {
    auto x_6945 = x_6927->var_flex_amount;
    if (!EqualValue(x_6945, x_6944)) {
      var_modified_x_6946(x_6927);
    }
  }
  x_6927->has_var_flex_amount = true;
  x_6927->var_flex_amount = x_6944;
  WriteMetric();
  auto x_6949 = eval_expr_x_6948(x_6927);
  if (x_6927->has_var_flex_unit) {
    auto x_6950 = x_6927->var_flex_unit;
    if (!EqualValue(x_6950, x_6949)) {
      var_modified_x_6951(x_6927);
    }
  }
  x_6927->has_var_flex_unit = true;
  x_6927->var_flex_unit = x_6949;
  WriteMetric();
  auto x_6954 = eval_expr_x_6953(x_6927);
  if (x_6927->has_var_x) {
    auto x_6955 = x_6927->var_x;
    if (!EqualValue(x_6955, x_6954)) {
      var_modified_x_6956(x_6927);
    }
  }
  x_6927->has_var_x = true;
  x_6927->var_x = x_6954;
  WriteMetric();
  auto x_6959 = eval_expr_x_6958(x_6927);
  if (x_6927->has_var_width_internal) {
    auto x_6960 = x_6927->var_width_internal;
    if (!EqualValue(x_6960, x_6959)) {
      var_modified_x_6961(x_6927);
    }
  }
  x_6927->has_var_width_internal = true;
  x_6927->var_width_internal = x_6959;
  WriteMetric();
  auto x_6964 = eval_expr_x_6963(x_6927);
  if (x_6927->has_var_width_external) {
    auto x_6965 = x_6927->var_width_external;
    if (!EqualValue(x_6965, x_6964)) {
      var_modified_x_6966(x_6927);
    }
  }
  x_6927->has_var_width_external = true;
  x_6927->var_width_external = x_6964;
  WriteMetric();
  auto x_6969 = eval_expr_x_6968(x_6927);
  if (x_6927->has_var_y) {
    auto x_6970 = x_6927->var_y;
    if (!EqualValue(x_6970, x_6969)) {
      var_modified_x_6971(x_6927);
    }
  }
  x_6927->has_var_y = true;
  x_6927->var_y = x_6969;
  WriteMetric();
  auto x_6974 = eval_expr_x_6973(x_6927);
  if (x_6927->has_var_height_internal) {
    auto x_6975 = x_6927->var_height_internal;
    if (!EqualValue(x_6975, x_6974)) {
      var_modified_x_6976(x_6927);
    }
  }
  x_6927->has_var_height_internal = true;
  x_6927->var_height_internal = x_6974;
  WriteMetric();
  auto x_6979 = eval_expr_x_6978(x_6927);
  if (x_6927->has_var_height_external) {
    auto x_6980 = x_6927->var_height_external;
    if (!EqualValue(x_6980, x_6979)) {
      var_modified_x_6981(x_6927);
    }
  }
  x_6927->has_var_height_external = true;
  x_6927->var_height_external = x_6979;
  WriteMetric();
  auto x_6984 = eval_expr_x_6983(x_6927);
  if (x_6927->has_var_line_height) {
    auto x_6985 = x_6927->var_line_height;
    if (!EqualValue(x_6985, x_6984)) {
      var_modified_x_6986(x_6927);
    }
  }
  x_6927->has_var_line_height = true;
  x_6927->var_line_height = x_6984;
  return MakeUnit();
}
Unit eval_stmts_x_6593(const auto &x_6988) {
  WriteMetric();
  auto x_6990 = eval_expr_x_6989(x_6988);
  if (x_6988->has_var_width_expr) {
    auto x_6991 = x_6988->var_width_expr;
    if (!EqualValue(x_6991, x_6990)) {
      var_modified_x_6992(x_6988);
    }
  }
  x_6988->has_var_width_expr = true;
  x_6988->var_width_expr = x_6990;
  WriteMetric();
  auto x_6995 = eval_expr_x_6994(x_6988);
  if (x_6988->has_var_is_default_case) {
    auto x_6996 = x_6988->var_is_default_case;
    if (!EqualValue(x_6996, x_6995)) {
      var_modified_x_6997(x_6988);
    }
  }
  x_6988->has_var_is_default_case = true;
  x_6988->var_is_default_case = x_6995;
  WriteMetric();
  auto x_7000 = eval_expr_x_6999(x_6988);
  if (x_6988->has_var_intrinsic_width_is_width) {
    auto x_7001 = x_6988->var_intrinsic_width_is_width;
    if (!EqualValue(x_7001, x_7000)) {
      var_modified_x_7002(x_6988);
    }
  }
  x_6988->has_var_intrinsic_width_is_width = true;
  x_6988->var_intrinsic_width_is_width = x_7000;
  WriteMetric();
  auto x_7005 = eval_expr_x_7004(x_6988);
  if (x_6988->has_var_children_intrinsic_width) {
    auto x_7006 = x_6988->var_children_intrinsic_width;
    if (!EqualValue(x_7006, x_7005)) {
      var_modified_x_7007(x_6988);
    }
  }
  x_6988->has_var_children_intrinsic_width = true;
  x_6988->var_children_intrinsic_width = x_7005;
  WriteMetric();
  auto x_7010 = eval_expr_x_7009(x_6988);
  if (x_6988->has_var_intrinsic_width_internal) {
    auto x_7011 = x_6988->var_intrinsic_width_internal;
    if (!EqualValue(x_7011, x_7010)) {
      var_modified_x_7012(x_6988);
    }
  }
  x_6988->has_var_intrinsic_width_internal = true;
  x_6988->var_intrinsic_width_internal = x_7010;
  WriteMetric();
  auto x_7015 = eval_expr_x_7014(x_6988);
  if (x_6988->has_var_intrinsic_width_external) {
    auto x_7016 = x_6988->var_intrinsic_width_external;
    if (!EqualValue(x_7016, x_7015)) {
      var_modified_x_7017(x_6988);
    }
  }
  x_6988->has_var_intrinsic_width_external = true;
  x_6988->var_intrinsic_width_external = x_7015;
  WriteMetric();
  auto x_7020 = eval_expr_x_7019(x_6988);
  if (x_6988->has_var_intrinsic_current_line_width) {
    auto x_7021 = x_6988->var_intrinsic_current_line_width;
    if (!EqualValue(x_7021, x_7020)) {
      var_modified_x_7022(x_6988);
    }
  }
  x_6988->has_var_intrinsic_current_line_width = true;
  x_6988->var_intrinsic_current_line_width = x_7020;
  WriteMetric();
  auto x_7025 = eval_expr_x_7024(x_6988);
  if (x_6988->has_var_intrinsic_width_max) {
    auto x_7026 = x_6988->var_intrinsic_width_max;
    if (!EqualValue(x_7026, x_7025)) {
      var_modified_x_7027(x_6988);
    }
  }
  x_6988->has_var_intrinsic_width_max = true;
  x_6988->var_intrinsic_width_max = x_7025;
  WriteMetric();
  auto x_7030 = eval_expr_x_7029(x_6988);
  if (x_6988->has_var_intrinsic_width_sum) {
    auto x_7031 = x_6988->var_intrinsic_width_sum;
    if (!EqualValue(x_7031, x_7030)) {
      var_modified_x_7032(x_6988);
    }
  }
  x_6988->has_var_intrinsic_width_sum = true;
  x_6988->var_intrinsic_width_sum = x_7030;
  WriteMetric();
  auto x_7035 = eval_expr_x_7034(x_6988);
  if (x_6988->has_var_children_intrinsic_height) {
    auto x_7036 = x_6988->var_children_intrinsic_height;
    if (!EqualValue(x_7036, x_7035)) {
      var_modified_x_7037(x_6988);
    }
  }
  x_6988->has_var_children_intrinsic_height = true;
  x_6988->var_children_intrinsic_height = x_7035;
  WriteMetric();
  auto x_7040 = eval_expr_x_7039(x_6988);
  if (x_6988->has_var_height_expr) {
    auto x_7041 = x_6988->var_height_expr;
    if (!EqualValue(x_7041, x_7040)) {
      var_modified_x_7042(x_6988);
    }
  }
  x_6988->has_var_height_expr = true;
  x_6988->var_height_expr = x_7040;
  WriteMetric();
  auto x_7045 = eval_expr_x_7044(x_6988);
  if (x_6988->has_var_intrinsic_height_is_height) {
    auto x_7046 = x_6988->var_intrinsic_height_is_height;
    if (!EqualValue(x_7046, x_7045)) {
      var_modified_x_7047(x_6988);
    }
  }
  x_6988->has_var_intrinsic_height_is_height = true;
  x_6988->var_intrinsic_height_is_height = x_7045;
  WriteMetric();
  auto x_7050 = eval_expr_x_7049(x_6988);
  if (x_6988->has_var_intrinsic_height_internal) {
    auto x_7051 = x_6988->var_intrinsic_height_internal;
    if (!EqualValue(x_7051, x_7050)) {
      var_modified_x_7052(x_6988);
    }
  }
  x_6988->has_var_intrinsic_height_internal = true;
  x_6988->var_intrinsic_height_internal = x_7050;
  WriteMetric();
  auto x_7055 = eval_expr_x_7054(x_6988);
  if (x_6988->has_var_intrinsic_height_external) {
    auto x_7056 = x_6988->var_intrinsic_height_external;
    if (!EqualValue(x_7056, x_7055)) {
      var_modified_x_7057(x_6988);
    }
  }
  x_6988->has_var_intrinsic_height_external = true;
  x_6988->var_intrinsic_height_external = x_7055;
  WriteMetric();
  auto x_7060 = eval_expr_x_7059(x_6988);
  if (x_6988->has_var_intrinsic_height_sum) {
    auto x_7061 = x_6988->var_intrinsic_height_sum;
    if (!EqualValue(x_7061, x_7060)) {
      var_modified_x_7062(x_6988);
    }
  }
  x_6988->has_var_intrinsic_height_sum = true;
  x_6988->var_intrinsic_height_sum = x_7060;
  WriteMetric();
  auto x_7065 = eval_expr_x_7064(x_6988);
  if (x_6988->has_var_intrinsic_current_line_height) {
    auto x_7066 = x_6988->var_intrinsic_current_line_height;
    if (!EqualValue(x_7066, x_7065)) {
      var_modified_x_7067(x_6988);
    }
  }
  x_6988->has_var_intrinsic_current_line_height = true;
  x_6988->var_intrinsic_current_line_height = x_7065;
  WriteMetric();
  auto x_7070 = eval_expr_x_7069(x_6988);
  if (x_6988->has_var_finished_intrinsic_height_sum) {
    auto x_7071 = x_6988->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_7071, x_7070)) {
      var_modified_x_7072(x_6988);
    }
  }
  x_6988->has_var_finished_intrinsic_height_sum = true;
  x_6988->var_finished_intrinsic_height_sum = x_7070;
  return MakeUnit();
}
Unit eval_stmts_x_6592(const auto &x_7074) {
  WriteMetric();
  auto x_7076 = eval_expr_x_7075(x_7074);
  if (x_7074->has_var_display) {
    auto x_7077 = x_7074->var_display;
    if (!EqualValue(x_7077, x_7076)) {
      var_modified_x_7078(x_7074);
    }
  }
  x_7074->has_var_display = true;
  x_7074->var_display = x_7076;
  WriteMetric();
  auto x_7081 = eval_expr_x_7080(x_7074);
  if (x_7074->has_var_position) {
    auto x_7082 = x_7074->var_position;
    if (!EqualValue(x_7082, x_7081)) {
      var_modified_x_7083(x_7074);
    }
  }
  x_7074->has_var_position = true;
  x_7074->var_position = x_7081;
  WriteMetric();
  auto x_7086 = eval_expr_x_7085(x_7074);
  if (x_7074->has_var_flex_grow) {
    auto x_7087 = x_7074->var_flex_grow;
    if (!EqualValue(x_7087, x_7086)) {
      var_modified_x_7088(x_7074);
    }
  }
  x_7074->has_var_flex_grow = true;
  x_7074->var_flex_grow = x_7086;
  WriteMetric();
  auto x_7091 = eval_expr_x_7090(x_7074);
  if (x_7074->has_var_flex_shrink) {
    auto x_7092 = x_7074->var_flex_shrink;
    if (!EqualValue(x_7092, x_7091)) {
      var_modified_x_7093(x_7074);
    }
  }
  x_7074->has_var_flex_shrink = true;
  x_7074->var_flex_shrink = x_7091;
  WriteMetric();
  auto x_7096 = eval_expr_x_7095(x_7074);
  if (x_7074->has_var_flex_grow_sum) {
    auto x_7097 = x_7074->var_flex_grow_sum;
    if (!EqualValue(x_7097, x_7096)) {
      var_modified_x_7098(x_7074);
    }
  }
  x_7074->has_var_flex_grow_sum = true;
  x_7074->var_flex_grow_sum = x_7096;
  WriteMetric();
  auto x_7101 = eval_expr_x_7100(x_7074);
  if (x_7074->has_var_flex_shrink_sum) {
    auto x_7102 = x_7074->var_flex_shrink_sum;
    if (!EqualValue(x_7102, x_7101)) {
      var_modified_x_7103(x_7074);
    }
  }
  x_7074->has_var_flex_shrink_sum = true;
  x_7074->var_flex_shrink_sum = x_7101;
  WriteMetric();
  auto x_7106 = eval_expr_x_7105(x_7074);
  if (x_7074->has_var_flex_direction) {
    auto x_7107 = x_7074->var_flex_direction;
    if (!EqualValue(x_7107, x_7106)) {
      var_modified_x_7108(x_7074);
    }
  }
  x_7074->has_var_flex_direction = true;
  x_7074->var_flex_direction = x_7106;
  WriteMetric();
  auto x_7111 = eval_expr_x_7110(x_7074);
  if (x_7074->has_var_is_flex_row) {
    auto x_7112 = x_7074->var_is_flex_row;
    if (!EqualValue(x_7112, x_7111)) {
      var_modified_x_7113(x_7074);
    }
  }
  x_7074->has_var_is_flex_row = true;
  x_7074->var_is_flex_row = x_7111;
  WriteMetric();
  auto x_7116 = eval_expr_x_7115(x_7074);
  if (x_7074->has_var_is_flex_column) {
    auto x_7117 = x_7074->var_is_flex_column;
    if (!EqualValue(x_7117, x_7116)) {
      var_modified_x_7118(x_7074);
    }
  }
  x_7074->has_var_is_flex_column = true;
  x_7074->var_is_flex_column = x_7116;
  WriteMetric();
  auto x_7121 = eval_expr_x_7120(x_7074);
  if (x_7074->has_var_width_attr_expr) {
    auto x_7122 = x_7074->var_width_attr_expr;
    if (!EqualValue(x_7122, x_7121)) {
      var_modified_x_7123(x_7074);
    }
  }
  x_7074->has_var_width_attr_expr = true;
  x_7074->var_width_attr_expr = x_7121;
  WriteMetric();
  auto x_7126 = eval_expr_x_7125(x_7074);
  if (x_7074->has_var_has_width_attr) {
    auto x_7127 = x_7074->var_has_width_attr;
    if (!EqualValue(x_7127, x_7126)) {
      var_modified_x_7128(x_7074);
    }
  }
  x_7074->has_var_has_width_attr = true;
  x_7074->var_has_width_attr = x_7126;
  WriteMetric();
  auto x_7131 = eval_expr_x_7130(x_7074);
  if (x_7074->has_var_height_attr_expr) {
    auto x_7132 = x_7074->var_height_attr_expr;
    if (!EqualValue(x_7132, x_7131)) {
      var_modified_x_7133(x_7074);
    }
  }
  x_7074->has_var_height_attr_expr = true;
  x_7074->var_height_attr_expr = x_7131;
  WriteMetric();
  auto x_7136 = eval_expr_x_7135(x_7074);
  if (x_7074->has_var_has_height_attr) {
    auto x_7137 = x_7074->var_has_height_attr;
    if (!EqualValue(x_7137, x_7136)) {
      var_modified_x_7138(x_7074);
    }
  }
  x_7074->has_var_has_height_attr = true;
  x_7074->var_has_height_attr = x_7136;
  WriteMetric();
  auto x_7141 = eval_expr_x_7140(x_7074);
  if (x_7074->has_var_is_svg_block) {
    auto x_7142 = x_7074->var_is_svg_block;
    if (!EqualValue(x_7142, x_7141)) {
      var_modified_x_7143(x_7074);
    }
  }
  x_7074->has_var_is_svg_block = true;
  x_7074->var_is_svg_block = x_7141;
  WriteMetric();
  auto x_7146 = eval_expr_x_7145(x_7074);
  if (x_7074->has_var_inside_svg) {
    auto x_7147 = x_7074->var_inside_svg;
    if (!EqualValue(x_7147, x_7146)) {
      var_modified_x_7148(x_7074);
    }
  }
  x_7074->has_var_inside_svg = true;
  x_7074->var_inside_svg = x_7146;
  WriteMetric();
  auto x_7151 = eval_expr_x_7150(x_7074);
  if (x_7074->has_var_disabled) {
    auto x_7152 = x_7074->var_disabled;
    if (!EqualValue(x_7152, x_7151)) {
      var_modified_x_7153(x_7074);
    }
  }
  x_7074->has_var_disabled = true;
  x_7074->var_disabled = x_7151;
  WriteMetric();
  auto x_7156 = eval_expr_x_7155(x_7074);
  if (x_7074->has_var_visible) {
    auto x_7157 = x_7074->var_visible;
    if (!EqualValue(x_7157, x_7156)) {
      var_modified_x_7158(x_7074);
    }
  }
  x_7074->has_var_visible = true;
  x_7074->var_visible = x_7156;
  WriteMetric();
  auto x_7161 = eval_expr_x_7160(x_7074);
  if (x_7074->has_var_line_break) {
    auto x_7162 = x_7074->var_line_break;
    if (!EqualValue(x_7162, x_7161)) {
      var_modified_x_7163(x_7074);
    }
  }
  x_7074->has_var_line_break = true;
  x_7074->var_line_break = x_7161;
  return MakeUnit();
}
Unit x_6313(const auto &x_6314, const auto &x_6315, const auto &x_6316) {
  auto x_6317 = ListHeadExn(x_6314);
  auto x_6318 = ListTailExn(x_6314);
  if (ListIsEmpty(x_6318)) {
    auto x_6319 = ListSplitN(x_6315->children, x_6317);
    OutputChangeMetric(IntAdd(layout_size_x_6265(ListNthExn(x_6315->children, x_6317)), layout_size_x_6265(x_6316)));
    x_6315->children = ListAppend(Zro(x_6319), Cons(x_6316, ListTailExn(Fst(x_6319))));
    return MakeUnit();
  } else {
    return x_6313(x_6318, ListNthExn(x_6315->children, x_6317), x_6316);
  }
}
Unit replace_layout_node_x_6312(const auto &x_6314, const auto &x_6315, const auto &x_6316) {
  return x_6313(x_6314, x_6315, x_6316);
}
Unit x_6320(const auto &x_6321, const auto &x_6322, const auto &x_6323) {
  auto x_6324 = ListHeadExn(x_6321);
  auto x_6325 = ListTailExn(x_6321);
  if (ListIsEmpty(x_6325)) {
    OutputChangeMetric(layout_size_x_6265(x_6323));
    auto x_6326 = ListSplitN(x_6322->children, x_6324);
    x_6322->children = ListAppend(Zro(x_6326), Cons(x_6323, Fst(x_6326)));
    return MakeUnit();
  } else {
    return x_6320(x_6325, ListNthExn(x_6322->children, x_6324), x_6323);
  }
}
Unit add_layout_node_x_6310(const auto &x_6321, const auto &x_6322, const auto &x_6323) {
  return x_6320(x_6321, x_6322, x_6323);
}
Unit x_6327(const auto &x_6328, const auto &x_6329, const auto &x_6330) {
  auto x_6331 = ListHeadExn(x_6328);
  auto x_6332 = ListTailExn(x_6328);
  if (ListIsEmpty(x_6332)) {
    OutputChangeMetric(layout_size_x_6265(ListNthExn(x_6329->children, x_6331)));
    auto x_6333 = ListSplitN(x_6329->children, x_6331);
    x_6329->children = ListAppend(Zro(x_6333), ListTailExn(Fst(x_6333)));
    return MakeUnit();
  } else {
    return x_6327(x_6332, ListNthExn(x_6329->children, x_6331), x_6330);
  }
}
Unit remove_layout_node_x_6308(const auto &x_6328, const auto &x_6329, const auto &x_6330) {
  return x_6327(x_6328, x_6329, x_6330);
}
Unit x_6334(const auto &x_6335, const auto &x_6336, const auto &x_6337) {
  return ListMatch(
      x_6335,
      [&](const auto &x_6340) {
        auto x_6341 = Zro(x_6337);
        auto x_6342 = Zro(x_6341);
        auto x_6343 = Fst(x_6341);
        auto x_6344 = Fst(x_6337);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9763 = x_6342;
        if (x_9763 == "attributes") {
          std::string x_9764 = x_6343;
          if (x_9764 == "width") {
            WriteMetric();
            HashtblAddExn(x_6336->attr, std::string("width"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6345 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6345, x_6336, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9764 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_6336->attr, std::string("image_height"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6347 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6347, x_6336, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9764 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_6336->attr, std::string("image_width"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6349 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6349, x_6336, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9764 == "height") {
            WriteMetric();
            HashtblAddExn(x_6336->attr, std::string("height"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6351 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6351, x_6336, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9764 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_6336->attr, std::string("viewBox"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6353 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6353, x_6336, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9763 == "properties") {
          std::string x_9765 = x_6343;
          if (x_9765 == "width") {
            WriteMetric();
            HashtblAddExn(x_6336->prop, std::string("width"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6355 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6355, x_6336, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9765 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_6336->prop, std::string("flex-grow"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6357 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6357, x_6336, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9765 == "height") {
            WriteMetric();
            HashtblAddExn(x_6336->prop, std::string("height"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6359 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6359, x_6336, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9765 == "display") {
            WriteMetric();
            HashtblAddExn(x_6336->prop, std::string("display"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6361 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6361, x_6336, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9765 == "position") {
            WriteMetric();
            HashtblAddExn(x_6336->prop, std::string("position"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6363 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6363, x_6336, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9765 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_6336->prop, std::string("flex-shrink"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6365 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6365, x_6336, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9765 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_6336->prop, std::string("flex-direction"), x_6344);
            if (HashtblContain(x_6336->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6367 = HashtblFindExn(x_6336->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6367, x_6336, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6338, const auto &x_6339) {
        return x_6334(x_6339, ListNthExn(x_6336->children, x_6338), x_6337);
      });
}
Unit insert_value_x_6306(const auto &x_6335, const auto &x_6336, const auto &x_6337) {
  return x_6334(x_6335, x_6336, x_6337);
}
Unit x_6369(const auto &x_6370, const auto &x_6371, const auto &x_6372) {
  return ListMatch(
      x_6370,
      [&](const auto &x_6375) {
        auto x_6376 = Zro(x_6372);
        auto x_6377 = Fst(x_6372);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9766 = x_6376;
        if (x_9766 == "attributes") {
          std::string x_9767 = x_6377;
          if (x_9767 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6371->attr, std::string("width"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6378 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6378, x_6371, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9767 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_6371->attr, std::string("image_height"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6380 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6380, x_6371, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9767 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_6371->attr, std::string("image_width"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6382 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6382, x_6371, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9767 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6371->attr, std::string("height"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6384 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6384, x_6371, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9767 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_6371->attr, std::string("viewBox"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6386 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6386, x_6371, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9766 == "properties") {
          std::string x_9768 = x_6377;
          if (x_9768 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6371->prop, std::string("width"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6388 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6388, x_6371, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9768 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_6371->prop, std::string("flex-grow"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6390 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6390, x_6371, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9768 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6371->prop, std::string("height"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6392 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6392, x_6371, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9768 == "display") {
            WriteMetric();
            HashtblForceRemove(x_6371->prop, std::string("display"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6394 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6394, x_6371, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9768 == "position") {
            WriteMetric();
            HashtblForceRemove(x_6371->prop, std::string("position"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6396 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6396, x_6371, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9768 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_6371->prop, std::string("flex-shrink"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6398 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6398, x_6371, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9768 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_6371->prop, std::string("flex-direction"));
            if (HashtblContain(x_6371->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6400 = HashtblFindExn(x_6371->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6400, x_6371, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6373, const auto &x_6374) {
        return x_6369(x_6374, ListNthExn(x_6371->children, x_6373), x_6372);
      });
}
Unit delete_value_x_6304(const auto &x_6370, const auto &x_6371, const auto &x_6372) {
  return x_6369(x_6370, x_6371, x_6372);
}
Unit x_6402(const auto &x_6403, const auto &x_6404, const auto &x_6405) {
  return ListMatch(
      x_6403,
      [&](const auto &x_6408) {
        auto x_6409 = Zro(x_6405);
        auto x_6410 = Zro(x_6409);
        auto x_6411 = Fst(x_6409);
        auto x_6412 = Fst(x_6405);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_9769 = x_6410;
        if (x_9769 == "attributes") {
          std::string x_9770 = x_6411;
          if (x_9770 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6404->attr, std::string("width"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6413 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6413, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->attr, std::string("width"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6415 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6415, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9770 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_6404->attr, std::string("image_height"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6417 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6417, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->attr, std::string("image_height"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6419 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6419, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9770 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_6404->attr, std::string("image_width"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6421 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6421, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->attr, std::string("image_width"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6423 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6423, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9770 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6404->attr, std::string("height"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6425 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6425, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->attr, std::string("height"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6427 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6427, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9770 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_6404->attr, std::string("viewBox"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6429 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6429, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->attr, std::string("viewBox"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6431 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6431, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_9769 == "properties") {
          std::string x_9771 = x_6411;
          if (x_9771 == "width") {
            WriteMetric();
            HashtblForceRemove(x_6404->prop, std::string("width"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6433 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6433, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->prop, std::string("width"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6435 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6435, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9771 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_6404->prop, std::string("flex-grow"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6437 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6437, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->prop, std::string("flex-grow"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6439 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6439, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9771 == "height") {
            WriteMetric();
            HashtblForceRemove(x_6404->prop, std::string("height"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6441 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6441, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->prop, std::string("height"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_0"))) {
              auto x_6443 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_0"));
              MetaWriteMetric();
              QueuePush(x_6443, x_6404, MakeRecomputeBB(std::string("bb_0")));
            }
            return MakeUnit();
          } else if (x_9771 == "display") {
            WriteMetric();
            HashtblForceRemove(x_6404->prop, std::string("display"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6445 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6445, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->prop, std::string("display"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6447 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6447, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9771 == "position") {
            WriteMetric();
            HashtblForceRemove(x_6404->prop, std::string("position"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6449 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6449, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->prop, std::string("position"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6451 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6451, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9771 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_6404->prop, std::string("flex-shrink"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6453 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6453, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->prop, std::string("flex-shrink"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6455 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6455, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else if (x_9771 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_6404->prop, std::string("flex-direction"));
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6457 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6457, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            WriteMetric();
            HashtblAddExn(x_6404->prop, std::string("flex-direction"), x_6412);
            if (HashtblContain(x_6404->meta->BBTimeTable, std::string("bb_1"))) {
              auto x_6459 = HashtblFindExn(x_6404->meta->BBTimeTable, std::string("bb_1"));
              MetaWriteMetric();
              QueuePush(x_6459, x_6404, MakeRecomputeBB(std::string("bb_1")));
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else {
          Panic();
        }
      },
      [&](const auto &x_6406, const auto &x_6407) {
        return x_6402(x_6407, ListNthExn(x_6404->children, x_6406), x_6405);
      });
}
Unit replace_value_x_6302(const auto &x_6403, const auto &x_6404, const auto &x_6405) {
  return x_6402(x_6403, x_6404, x_6405);
}
Unit x_6461(const auto &x_6462, const auto &x_6463, const auto &x_6464) {
  auto x_6465 = ListHeadExn(x_6462);
  auto x_6466 = ListTailExn(x_6462);
  if (ListIsEmpty(x_6466)) {
    InputChangeMetric(IntAdd(node_size_x_6266(ListNthExn(x_6463->children, x_6465)), node_size_x_6266(x_6464)));
    auto x_6467 = ListSplitN(x_6463->children, x_6465);
    auto x_6468 = Zro(x_6467);
    auto x_6469 = Fst(x_6467);
    auto x_6470 = ListHeadExn(x_6469);
    auto x_6471 = ListTailExn(x_6469);
    OptionMatch(
        x_6470->prev, [&](const auto &x_6473) { return MakeUnit(); },
        [&](const auto &x_6472) {
          x_6472->next = ToPath(x_6470->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6470->next, [&](const auto &x_6475) { return MakeUnit(); },
        [&](const auto &x_6474) {
          x_6474->prev = ToPath(x_6470->prev);
          return MakeUnit();
        });
    x_6470->meta->alive = false;
    x_6463->children = ListAppend(x_6468, x_6471);
    if (ListIsEmpty(x_6468)) {
      x_6463->first = ToPath(ListHead(x_6471));
    }
    if (ListIsEmpty(x_6471)) {
      x_6463->last = ToPath(ListLast(x_6468));
    }
    OptionMatch(
        x_6470->next, [&](const auto &x_6479) { return MakeUnit(); },
        [&](const auto &x_6476) {
          if (HashtblContain(x_6476->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6477 = HashtblFindExn(x_6476->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6477, x_6476, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6463->children)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6480 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6480, x_6463, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6471)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6482 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6482, x_6463, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6470->next, [&](const auto &x_6487) { return MakeUnit(); },
        [&](const auto &x_6484) {
          if (HashtblContain(x_6484->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6485 = HashtblFindExn(x_6484->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6485, x_6484, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6463->children)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6488 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6488, x_6463, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6471)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6490 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6490, x_6463, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6470->next, [&](const auto &x_6495) { return MakeUnit(); },
        [&](const auto &x_6492) {
          if (HashtblContain(x_6492->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6493 = HashtblFindExn(x_6492->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6493, x_6492, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    auto x_6496 = ListSplitN(x_6463->children, x_6465);
    auto x_6497 = Zro(x_6496);
    auto x_6498 = Fst(x_6496);
    x_6463->children = ListAppend(x_6497, Cons(x_6464, x_6498));
    if (ListIsEmpty(x_6497)) {
      x_6463->first = x_6464.get();
    }
    if (ListIsEmpty(x_6498)) {
      x_6463->last = x_6464.get();
    }
    OptionMatch(
        ListLast(x_6497),
        [&](const auto &x_6500) {
          x_6464->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6499) {
          x_6464->prev = x_6499.get();
          x_6499->next = x_6464.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6498),
        [&](const auto &x_6502) {
          x_6464->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6501) {
          x_6464->next = x_6501.get();
          x_6501->prev = x_6464.get();
          return MakeUnit();
        });
    x_6464->parent = x_6463.get();
    auto x_6503 = (x_6464->parent);
    if (HashtblContain(x_6503->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_6506 = OptionMatch(
          x_6464->prev,
          [&](const auto &x_6505) {
            return NextTotalOrder(HashtblFindExn(x_6503->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_6504) {
            return NextTotalOrder(HashtblFindExn(x_6504->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_6464->meta->ProcTimeTable, std::string("pass_0"), x_6506);
      MetaWriteMetric();
      QueueForcePush(x_6506, x_6464, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_6464->next, [&](const auto &x_6511) { return MakeUnit(); },
        [&](const auto &x_6508) {
          if (HashtblContain(x_6508->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6509 = HashtblFindExn(x_6508->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6509, x_6508, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_6463->children)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6512 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6512, x_6463, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6498)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6514 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6514, x_6463, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6464->next, [&](const auto &x_6519) { return MakeUnit(); },
        [&](const auto &x_6516) {
          if (HashtblContain(x_6516->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6517 = HashtblFindExn(x_6516->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6517, x_6516, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_6520 = (x_6464->parent);
    if (HashtblContain(x_6520->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_6523 = OptionMatch(
          x_6464->prev,
          [&](const auto &x_6522) {
            return NextTotalOrder(HashtblFindExn(x_6520->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_6521) {
            return NextTotalOrder(HashtblFindExn(x_6521->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_6464->meta->ProcTimeTable, std::string("pass_1"), x_6523);
      MetaWriteMetric();
      QueueForcePush(x_6523, x_6464, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_6463->children)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6525 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6525, x_6463, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6498)) {
      if (HashtblContain(x_6463->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6527 = HashtblFindExn(x_6463->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6527, x_6463, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6464->next, [&](const auto &x_6532) { return MakeUnit(); },
        [&](const auto &x_6529) {
          if (HashtblContain(x_6529->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6530 = HashtblFindExn(x_6529->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6530, x_6529, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_6461(x_6466, ListNthExn(x_6463->children, x_6465), x_6464);
  }
}
Unit replace_node_x_6300(const auto &x_6462, const auto &x_6463, const auto &x_6464) {
  return x_6461(x_6462, x_6463, x_6464);
}
Unit x_6533(const auto &x_6534) {
  ListIter2(x_6534->children, [&](const auto &x_6535, const auto &x_6536) {
    x_6535->parent = x_6534.get();
    x_6536->parent = x_6534.get();
    x_6535->next = x_6536.get();
    x_6536->prev = x_6535.get();
    x_6533(x_6535);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6534->children),
      [&](const auto &x_6538) {
        x_6534->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6537) {
        x_6534->first = x_6537.get();
        x_6537->parent = x_6534.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6534->children),
      [&](const auto &x_6540) {
        x_6534->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6539) {
        x_6534->last = x_6539.get();
        x_6539->parent = x_6534.get();
        x_6533(x_6539);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6298(const auto &x_6534) { return x_6533(x_6534); }
Unit x_6541(const auto &x_6542, const auto &x_6543, const auto &x_6544) {
  auto x_6545 = ListHeadExn(x_6542);
  auto x_6546 = ListTailExn(x_6542);
  if (ListIsEmpty(x_6546)) {
    InputChangeMetric(node_size_x_6266(ListNthExn(x_6543->children, x_6545)));
    auto x_6547 = ListSplitN(x_6543->children, x_6545);
    auto x_6548 = Zro(x_6547);
    auto x_6549 = Fst(x_6547);
    auto x_6550 = ListHeadExn(x_6549);
    auto x_6551 = ListTailExn(x_6549);
    OptionMatch(
        x_6550->prev, [&](const auto &x_6553) { return MakeUnit(); },
        [&](const auto &x_6552) {
          x_6552->next = ToPath(x_6550->next);
          return MakeUnit();
        });
    OptionMatch(
        x_6550->next, [&](const auto &x_6555) { return MakeUnit(); },
        [&](const auto &x_6554) {
          x_6554->prev = ToPath(x_6550->prev);
          return MakeUnit();
        });
    x_6550->meta->alive = false;
    x_6543->children = ListAppend(x_6548, x_6551);
    if (ListIsEmpty(x_6548)) {
      x_6543->first = ToPath(ListHead(x_6551));
    }
    if (ListIsEmpty(x_6551)) {
      x_6543->last = ToPath(ListLast(x_6548));
    }
    OptionMatch(
        x_6550->next, [&](const auto &x_6559) { return MakeUnit(); },
        [&](const auto &x_6556) {
          if (HashtblContain(x_6556->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6557 = HashtblFindExn(x_6556->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6557, x_6556, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6543->children)) {
      if (HashtblContain(x_6543->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6560 = HashtblFindExn(x_6543->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6560, x_6543, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6551)) {
      if (HashtblContain(x_6543->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6562 = HashtblFindExn(x_6543->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6562, x_6543, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6550->next, [&](const auto &x_6567) { return MakeUnit(); },
        [&](const auto &x_6564) {
          if (HashtblContain(x_6564->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6565 = HashtblFindExn(x_6564->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6565, x_6564, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsEmpty(x_6543->children)) {
      if (HashtblContain(x_6543->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6568 = HashtblFindExn(x_6543->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6568, x_6543, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6551)) {
      if (HashtblContain(x_6543->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6570 = HashtblFindExn(x_6543->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6570, x_6543, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6550->next, [&](const auto &x_6575) { return MakeUnit(); },
        [&](const auto &x_6572) {
          if (HashtblContain(x_6572->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6573 = HashtblFindExn(x_6572->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6573, x_6572, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_6541(x_6546, ListNthExn(x_6543->children, x_6545), x_6544);
  }
}
Unit remove_node_x_6296(const auto &x_6542, const auto &x_6543, const auto &x_6544) {
  return x_6541(x_6542, x_6543, x_6544);
}
Unit x_6576(const auto &x_6577) {
  ListIter2(x_6577->children, [&](const auto &x_6578, const auto &x_6579) {
    x_6578->parent = x_6577.get();
    x_6579->parent = x_6577.get();
    x_6578->next = x_6579.get();
    x_6579->prev = x_6578.get();
    x_6576(x_6578);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6577->children),
      [&](const auto &x_6581) {
        x_6577->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6580) {
        x_6577->first = x_6580.get();
        x_6580->parent = x_6577.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6577->children),
      [&](const auto &x_6583) {
        x_6577->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6582) {
        x_6577->last = x_6582.get();
        x_6582->parent = x_6577.get();
        x_6576(x_6582);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6293(const auto &x_6577) { return x_6576(x_6577); }
Unit x_6584(const auto &x_6585) {
  if (!QueueIsEmpty()) {
    auto x_6586 = QueuePeek();
    auto x_6587 = Zro(x_6586);
    auto x_6588 = Fst(x_6586);
    MetaReadMetric();
    MetricQueueSize(QueueSize());
    if (x_6588.n->meta->alive) {
      RFMatch(
          x_6588.rf,
          [&](const auto &x_6591) {
            std::string x_9772 = x_6591;
            if (x_9772 == "bb_1") {
              return eval_stmts_x_6592(x_6588.n);
            } else if (x_9772 == "bb_0") {
              return eval_stmts_x_6593(x_6588.n);
            } else if (x_9772 == "bb_2") {
              return eval_stmts_x_6594(x_6588.n);
            } else {
              Panic();
            }
          },
          [&](const auto &x_6589) {
            auto x_6590 = ReadRef(current_time);
            WriteRef(current_time, x_6587);
            [&]() {
              std::string x_9773 = x_6589;
              if (x_9773 == "pass_0") {
                return eval_stmts_x_6278(x_6588.n);
              } else if (x_9773 == "pass_1") {
                return eval_stmts_x_6279(x_6588.n);
              } else {
                Panic();
              }
            }();
            HashtblSet(x_6588.n->meta->ProcTimeTable, x_6589, ReadRef(current_time));
            WriteRef(current_time, x_6590);
            return MakeUnit();
          });
    }
    auto x_6595 = Zro(QueuePop());
    x_6584(MakeUnit());
    return MakeUnit();
  } else {
    return MakeUnit();
  }
}
Unit recalculate_internal_x_6291(const auto &x_6585) { return x_6584(x_6585); }
Unit x_6596(const auto &x_6597, const auto &x_6598, const auto &x_6599) {
  auto x_6600 = ListHeadExn(x_6597);
  auto x_6601 = ListTailExn(x_6597);
  if (ListIsEmpty(x_6601)) {
    InputChangeMetric(node_size_x_6266(x_6599));
    auto x_6602 = ListSplitN(x_6598->children, x_6600);
    auto x_6603 = Zro(x_6602);
    auto x_6604 = Fst(x_6602);
    x_6598->children = ListAppend(x_6603, Cons(x_6599, x_6604));
    if (ListIsEmpty(x_6603)) {
      x_6598->first = x_6599.get();
    }
    if (ListIsEmpty(x_6604)) {
      x_6598->last = x_6599.get();
    }
    OptionMatch(
        ListLast(x_6603),
        [&](const auto &x_6606) {
          x_6599->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6605) {
          x_6599->prev = x_6605.get();
          x_6605->next = x_6599.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_6604),
        [&](const auto &x_6608) {
          x_6599->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_6607) {
          x_6599->next = x_6607.get();
          x_6607->prev = x_6599.get();
          return MakeUnit();
        });
    x_6599->parent = x_6598.get();
    auto x_6609 = (x_6599->parent);
    if (HashtblContain(x_6609->meta->ProcTimeTable, std::string("pass_0"))) {
      auto x_6612 = OptionMatch(
          x_6599->prev,
          [&](const auto &x_6611) {
            return NextTotalOrder(HashtblFindExn(x_6609->meta->BBTimeTable, std::string("bb_1")));
          },
          [&](const auto &x_6610) {
            return NextTotalOrder(HashtblFindExn(x_6610->meta->ProcTimeTable, std::string("pass_0")));
          });
      HashtblAddExn(x_6599->meta->ProcTimeTable, std::string("pass_0"), x_6612);
      MetaWriteMetric();
      QueueForcePush(x_6612, x_6599, MakeRecomputeProc(std::string("pass_0")));
    }
    OptionMatch(
        x_6599->next, [&](const auto &x_6617) { return MakeUnit(); },
        [&](const auto &x_6614) {
          if (HashtblContain(x_6614->meta->BBTimeTable, std::string("bb_1"))) {
            auto x_6615 = HashtblFindExn(x_6614->meta->BBTimeTable, std::string("bb_1"));
            MetaWriteMetric();
            return QueuePush(x_6615, x_6614, MakeRecomputeBB(std::string("bb_1")));
          } else {
            return MakeUnit();
          }
        });
    if (ListIsSingleton(x_6598->children)) {
      if (HashtblContain(x_6598->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6618 = HashtblFindExn(x_6598->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6618, x_6598, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    if (ListIsEmpty(x_6604)) {
      if (HashtblContain(x_6598->meta->BBTimeTable, std::string("bb_0"))) {
        auto x_6620 = HashtblFindExn(x_6598->meta->BBTimeTable, std::string("bb_0"));
        MetaWriteMetric();
        QueuePush(x_6620, x_6598, MakeRecomputeBB(std::string("bb_0")));
      }
    }
    OptionMatch(
        x_6599->next, [&](const auto &x_6625) { return MakeUnit(); },
        [&](const auto &x_6622) {
          if (HashtblContain(x_6622->meta->BBTimeTable, std::string("bb_0"))) {
            auto x_6623 = HashtblFindExn(x_6622->meta->BBTimeTable, std::string("bb_0"));
            MetaWriteMetric();
            return QueuePush(x_6623, x_6622, MakeRecomputeBB(std::string("bb_0")));
          } else {
            return MakeUnit();
          }
        });
    auto x_6626 = (x_6599->parent);
    if (HashtblContain(x_6626->meta->ProcTimeTable, std::string("pass_1"))) {
      auto x_6629 = OptionMatch(
          x_6599->prev,
          [&](const auto &x_6628) {
            return NextTotalOrder(HashtblFindExn(x_6626->meta->BBTimeTable, std::string("bb_2")));
          },
          [&](const auto &x_6627) {
            return NextTotalOrder(HashtblFindExn(x_6627->meta->ProcTimeTable, std::string("pass_1")));
          });
      HashtblAddExn(x_6599->meta->ProcTimeTable, std::string("pass_1"), x_6629);
      MetaWriteMetric();
      QueueForcePush(x_6629, x_6599, MakeRecomputeProc(std::string("pass_1")));
    }
    if (ListIsSingleton(x_6598->children)) {
      if (HashtblContain(x_6598->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6631 = HashtblFindExn(x_6598->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6631, x_6598, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    if (ListIsEmpty(x_6604)) {
      if (HashtblContain(x_6598->meta->BBTimeTable, std::string("bb_2"))) {
        auto x_6633 = HashtblFindExn(x_6598->meta->BBTimeTable, std::string("bb_2"));
        MetaWriteMetric();
        QueuePush(x_6633, x_6598, MakeRecomputeBB(std::string("bb_2")));
      }
    }
    OptionMatch(
        x_6599->next, [&](const auto &x_6638) { return MakeUnit(); },
        [&](const auto &x_6635) {
          if (HashtblContain(x_6635->meta->BBTimeTable, std::string("bb_2"))) {
            auto x_6636 = HashtblFindExn(x_6635->meta->BBTimeTable, std::string("bb_2"));
            MetaWriteMetric();
            return QueuePush(x_6636, x_6635, MakeRecomputeBB(std::string("bb_2")));
          } else {
            return MakeUnit();
          }
        });
    return MakeUnit();
  } else {
    return x_6596(x_6601, ListNthExn(x_6598->children, x_6600), x_6599);
  }
}
Unit add_node_x_6290(const auto &x_6597, const auto &x_6598, const auto &x_6599) {
  return x_6596(x_6597, x_6598, x_6599);
}
Unit x_6639(const auto &x_6640) {
  ListIter2(x_6640->children, [&](const auto &x_6641, const auto &x_6642) {
    x_6641->parent = x_6640.get();
    x_6642->parent = x_6640.get();
    x_6641->next = x_6642.get();
    x_6642->prev = x_6641.get();
    x_6639(x_6641);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6640->children),
      [&](const auto &x_6644) {
        x_6640->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6643) {
        x_6640->first = x_6643.get();
        x_6643->parent = x_6640.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6640->children),
      [&](const auto &x_6646) {
        x_6640->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6645) {
        x_6640->last = x_6645.get();
        x_6645->parent = x_6640.get();
        x_6639(x_6645);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6288(const auto &x_6640) { return x_6639(x_6640); }
Unit eval_stmts_x_6284(const auto &x_6647) {
  eval_stmts_x_6648(x_6647);
  ListIter(x_6647->children, [&](const auto &x_6649) { return eval_stmts_x_6284(x_6649); });
  return MakeUnit();
}
Unit eval_stmts_x_6283(const auto &x_6650) {
  eval_stmts_x_6651(x_6650);
  ListIter(x_6650->children, [&](const auto &x_6652) { return eval_stmts_x_6283(x_6652); });
  eval_stmts_x_6653(x_6650);
  return MakeUnit();
}
Unit x_6654(const auto &x_6655) {
  ListIter2(x_6655->children, [&](const auto &x_6656, const auto &x_6657) {
    x_6656->parent = x_6655.get();
    x_6657->parent = x_6655.get();
    x_6656->next = x_6657.get();
    x_6657->prev = x_6656.get();
    x_6654(x_6656);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6655->children),
      [&](const auto &x_6659) {
        x_6655->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6658) {
        x_6655->first = x_6658.get();
        x_6658->parent = x_6655.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6655->children),
      [&](const auto &x_6661) {
        x_6655->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6660) {
        x_6655->last = x_6660.get();
        x_6660->parent = x_6655.get();
        x_6654(x_6660);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6281(const auto &x_6655) { return x_6654(x_6655); }
Unit eval_stmts_x_6279(const auto &x_6662) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6662->meta->BBTimeTable, std::string("bb_2"), ReadRef(current_time));
  eval_stmts_x_6594(x_6662);
  ListIter(x_6662->children, [&](const auto &x_6663) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_6279(x_6663);
    return HashtblAddExn(x_6663->meta->ProcTimeTable, std::string("pass_1"), ReadRef(current_time));
  });
  return MakeUnit();
}
Unit eval_stmts_x_6278(const auto &x_6664) {
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6664->meta->BBTimeTable, std::string("bb_1"), ReadRef(current_time));
  eval_stmts_x_6592(x_6664);
  ListIter(x_6664->children, [&](const auto &x_6665) {
    WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
    eval_stmts_x_6278(x_6665);
    return HashtblAddExn(x_6665->meta->ProcTimeTable, std::string("pass_0"), ReadRef(current_time));
  });
  WriteRef(current_time, NextTotalOrder(ReadRef(current_time)));
  HashtblAddExn(x_6664->meta->BBTimeTable, std::string("bb_0"), ReadRef(current_time));
  eval_stmts_x_6593(x_6664);
  return MakeUnit();
}
Unit x_6666(const auto &x_6667) {
  ListIter2(x_6667->children, [&](const auto &x_6668, const auto &x_6669) {
    x_6668->parent = x_6667.get();
    x_6669->parent = x_6667.get();
    x_6668->next = x_6669.get();
    x_6669->prev = x_6668.get();
    x_6666(x_6668);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_6667->children),
      [&](const auto &x_6671) {
        x_6667->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6670) {
        x_6667->first = x_6670.get();
        x_6670->parent = x_6667.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_6667->children),
      [&](const auto &x_6673) {
        x_6667->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_6672) {
        x_6667->last = x_6672.get();
        x_6672->parent = x_6667.get();
        x_6666(x_6672);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_6275(const auto &x_6667) { return x_6666(x_6667); }
int64_t x_6674(const auto &x_6675) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6675->children, [&](const auto &x_6676) { return x_6674(x_6676); }));
}
int64_t node_size_x_6266(const auto &x_6675) { return x_6674(x_6675); }
int64_t x_6677(const auto &x_6678) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_6678->children, [&](const auto &x_6679) { return x_6677(x_6679); }));
}
int64_t layout_size_x_6265(const auto &x_6678) { return x_6677(x_6678); }
LayoutNode x_6680(const auto &x_6681) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_6681)),
                                [&](const auto &x_6682) { return x_6680(x_6682); }));
}
LayoutNode json_to_layout_node_x_6264(const auto &x_6681) { return x_6680(x_6681); }
Node x_6683(const auto &x_6684) {
  return MakeNode(x_6684->name, x_6684->attr, x_6684->prop, x_6684->extern_id,
                  ListMap(x_6684->children, [&](const auto &x_6685) { return x_6683(x_6685); }));
}
Node node_to_fs_node_x_6263(const auto &x_6684) { return x_6683(x_6684); }
Node x_6686(const auto &x_6687) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_6687)), JsonToDict(JsonMember(std::string("attributes"), x_6687)),
      JsonToDict(JsonMember(std::string("properties"), x_6687)), JsonToInt(JsonMember(std::string("id"), x_6687)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_6687)),
              [&](const auto &x_6688) { return x_6686(x_6688); }));
}
Node json_to_node_aux_x_6262(const auto &x_6687) { return x_6686(x_6687); }
int main() {
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_6267) {
    PrintEndline(std::string("RUNNING PQ_D"));
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
        auto x_9774 = FreshJson();
        WriteJson(x_9774, std::string("name"), std::string("PQ_D"));
        WriteJson(x_9774, std::string("diff_num"), ReadRef(x_6269));
        WriteJson(x_9774, std::string("read_count"), MetricReadCount());
        WriteJson(x_9774, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_9774, std::string("write_count"), MetricWriteCount());
        WriteJson(x_9774, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_9774, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_9774, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_9774, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_9774, std::string("html"), std::string(""));
        WriteJson(x_9774, std::string("command"), StackToList(x_6273));
        return x_9774;
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
        std::string x_9776 = JsonToString(JsonMember(std::string("name"), x_6286));
        if (x_9776 == "add") {
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
        } else if (x_9776 == "recalculate") {
          recalculate_internal_x_6291(MakeUnit());
          JsonToChannel(x_6267, [&]() {
            auto x_9775 = FreshJson();
            WriteJson(x_9775, std::string("name"), std::string("PQ_D"));
            WriteJson(x_9775, std::string("diff_num"), ReadRef(x_6269));
            WriteJson(x_9775, std::string("read_count"), MetricReadCount());
            WriteJson(x_9775, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_9775, std::string("write_count"), MetricWriteCount());
            WriteJson(x_9775, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_9775, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_9775, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_9775, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_9775, std::string("html"), std::string(""));
            WriteJson(x_9775, std::string("command"), StackToList(x_6273));
            return x_9775;
          }());
          OutputString(x_6267, std::string("\n"));
          ClearStack(x_6273);
          WriteRef(x_6269, IntAdd(ReadRef(x_6269), static_cast<int64_t>(1)));
          auto x_6294 = [&]() {
            auto x_6292 = node_to_fs_node_x_6263(x_6276);
            x_6292->parent = nullptr;
            x_6292->prev = nullptr;
            x_6292->next = nullptr;
            set_children_relation_x_6293(x_6292);
            return x_6292;
          }();
          eval_stmts_x_6283(x_6294);
          eval_stmts_x_6284(x_6294);
          AssertNodeValueEqual(x_6276, x_6294);
          ResetMetric();
          return MakeUnit();
        } else if (x_9776 == "remove") {
          return remove_node_x_6296(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                            [&](const auto &x_6295) { return JsonToInt(x_6295); }),
                                    x_6276, MakeUnit());
        } else if (x_9776 == "replace") {
          return replace_node_x_6300(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                             [&](const auto &x_6299) { return JsonToInt(x_6299); }),
                                     x_6276, [&]() {
                                       auto x_6297 = json_to_node_aux_x_6262(JsonMember(std::string("node"), x_6286));
                                       x_6297->parent = nullptr;
                                       x_6297->prev = nullptr;
                                       x_6297->next = nullptr;
                                       set_children_relation_x_6298(x_6297);
                                       return x_6297;
                                     }());
        } else if (x_9776 == "replace_value") {
          return replace_value_x_6302(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                              [&](const auto &x_6301) { return JsonToInt(x_6301); }),
                                      x_6276,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_6286)),
                                                        JsonToString(JsonMember(std::string("key"), x_6286))),
                                               JsonToValue(JsonMember(std::string("value"), x_6286))));
        } else if (x_9776 == "delete_value") {
          return delete_value_x_6304(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                             [&](const auto &x_6303) { return JsonToInt(x_6303); }),
                                     x_6276,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_6286)),
                                              JsonToString(JsonMember(std::string("key"), x_6286))));
        } else if (x_9776 == "insert_value") {
          return insert_value_x_6306(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                             [&](const auto &x_6305) { return JsonToInt(x_6305); }),
                                     x_6276,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_6286)),
                                                       JsonToString(JsonMember(std::string("key"), x_6286))),
                                              JsonToValue(JsonMember(std::string("value"), x_6286))));
        } else if (x_9776 == "layout_remove") {
          return remove_layout_node_x_6308(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                                   [&](const auto &x_6307) { return JsonToInt(x_6307); }),
                                           x_6277, MakeUnit());
        } else if (x_9776 == "layout_add") {
          return add_layout_node_x_6310(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                                [&](const auto &x_6309) { return JsonToInt(x_6309); }),
                                        x_6277, json_to_layout_node_x_6264(JsonMember(std::string("node"), x_6286)));
        } else if (x_9776 == "layout_replace") {
          return replace_layout_node_x_6312(ListMap(JsonToList(JsonMember(std::string("path"), x_6286)),
                                                    [&](const auto &x_6311) { return JsonToInt(x_6311); }),
                                            x_6277,
                                            json_to_layout_node_x_6264(JsonMember(std::string("node"), x_6286)));
        } else if (x_9776 == "layout_info_changed") {
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