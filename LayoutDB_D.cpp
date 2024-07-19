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
Unit var_modified_x_2096(const auto &x_2106);
auto eval_expr_x_2093(const auto &x_2110);
Unit var_modified_x_2091(const auto &x_2127);
auto eval_expr_x_2088(const auto &x_2129);
Unit var_modified_x_2086(const auto &x_2138);
auto eval_expr_x_2083(const auto &x_2141);
Unit var_modified_x_2081(const auto &x_2194);
auto eval_expr_x_2078(const auto &x_2199);
Unit var_modified_x_2076(const auto &x_2224);
auto eval_expr_x_2073(const auto &x_2228);
Unit var_modified_x_2071(const auto &x_2237);
auto eval_expr_x_2068(const auto &x_2240);
Unit var_modified_x_2066(const auto &x_2293);
auto eval_expr_x_2063(const auto &x_2298);
Unit var_modified_x_2061(const auto &x_2319);
auto eval_expr_x_2058(const auto &x_2321);
Unit var_modified_x_2056(const auto &x_2342);
auto eval_expr_x_2053(const auto &x_2344);
Unit var_modified_x_2051(const auto &x_2357);
auto eval_expr_x_2048(const auto &x_2360);
Unit var_modified_x_2046(const auto &x_2381);
auto eval_expr_x_2043(const auto &x_2383);
Unit var_modified_x_2041(const auto &x_2388);
auto eval_expr_x_2038(const auto &x_2390);
Unit var_modified_x_2035(const auto &x_2395);
auto eval_expr_x_2032(const auto &x_2404);
Unit var_modified_x_2030(const auto &x_2481);
auto eval_expr_x_2027(const auto &x_2483);
Unit var_modified_x_2025(const auto &x_2500);
auto eval_expr_x_2022(const auto &x_2504);
Unit var_modified_x_2020(const auto &x_2509);
auto eval_expr_x_2017(const auto &x_2513);
Unit var_modified_x_2015(const auto &x_2522);
auto eval_expr_x_2012(const auto &x_2524);
Unit var_modified_x_2010(const auto &x_2525);
auto eval_expr_x_2007(const auto &x_2527);
Unit var_modified_x_2005(const auto &x_2532);
auto eval_expr_x_2002(const auto &x_2535);
Unit var_modified_x_2000(const auto &x_2546);
auto eval_expr_x_1997(const auto &x_2548);
Unit var_modified_x_1995(const auto &x_2553);
auto eval_expr_x_1992(const auto &x_2556);
Unit var_modified_x_1990(const auto &x_2567);
auto eval_expr_x_1987(const auto &x_2570);
Unit var_modified_x_1985(const auto &x_2595);
auto eval_expr_x_1982(const auto &x_2599);
Unit var_modified_x_1980(const auto &x_2624);
auto eval_expr_x_1977(const auto &x_2626);
Unit var_modified_x_1975(const auto &x_2629);
auto eval_expr_x_1972(const auto &x_2634);
Unit var_modified_x_1970(const auto &x_2643);
auto eval_expr_x_1967(const auto &x_2648);
Unit var_modified_x_1965(const auto &x_2657);
auto eval_expr_x_1962(const auto &x_2660);
Unit var_modified_x_1960(const auto &x_2663);
auto eval_expr_x_1957(const auto &x_2666);
Unit var_modified_x_1955(const auto &x_2669);
auto eval_expr_x_1952(const auto &x_2673);
Unit var_modified_x_1950(const auto &x_2676);
auto eval_expr_x_1947(const auto &x_2680);
Unit var_modified_x_1944(const auto &x_2683);
auto eval_expr_x_1941(const auto &x_2690);
Unit var_modified_x_1939(const auto &x_2719);
auto eval_expr_x_1936(const auto &x_2726);
Unit var_modified_x_1934(const auto &x_2739);
auto eval_expr_x_1931(const auto &x_2746);
Unit var_modified_x_1929(const auto &x_2755);
auto eval_expr_x_1926(const auto &x_2757);
Unit var_modified_x_1924(const auto &x_2766);
auto eval_expr_x_1921(const auto &x_2769);
Unit var_modified_x_1919(const auto &x_2914);
auto eval_expr_x_1916(const auto &x_2916);
Unit var_modified_x_1914(const auto &x_2965);
auto eval_expr_x_1911(const auto &x_2968);
Unit var_modified_x_1909(const auto &x_2971);
auto eval_expr_x_1906(const auto &x_2973);
Unit var_modified_x_1904(const auto &x_2982);
auto eval_expr_x_1901(const auto &x_2989);
Unit var_modified_x_1899(const auto &x_2998);
auto eval_expr_x_1896(const auto &x_3005);
Unit var_modified_x_1894(const auto &x_3014);
auto eval_expr_x_1891(const auto &x_3019);
Unit var_modified_x_1889(const auto &x_3032);
auto eval_expr_x_1886(const auto &x_3034);
Unit var_modified_x_1884(const auto &x_3043);
auto eval_expr_x_1881(const auto &x_3046);
Unit var_modified_x_1879(const auto &x_3199);
auto eval_expr_x_1876(const auto &x_3201);
Unit var_modified_x_1874(const auto &x_3206);
auto eval_expr_x_1871(const auto &x_3208);
Unit var_modified_x_1869(const auto &x_3257);
auto eval_expr_x_1866(const auto &x_3259);
Unit var_modified_x_1864(const auto &x_3272);
auto eval_expr_x_1861(const auto &x_3275);
Unit eval_stmts_x_1805(const auto &x_1860);
Unit eval_stmts_x_1803(const auto &x_1946);
Unit eval_stmts_x_1799(const auto &x_2037);
Unit x_2098(const auto &x_2099);
Unit x_2102(const auto &x_2103);
Unit x_1680(const auto &x_1681, const auto &x_1682, const auto &x_1683);
Unit x_1687(const auto &x_1688, const auto &x_1689, const auto &x_1690);
Unit x_1694(const auto &x_1695, const auto &x_1696, const auto &x_1697);
Unit x_1701(const auto &x_1702, const auto &x_1703, const auto &x_1704);
Unit x_1713(const auto &x_1714, const auto &x_1715, const auto &x_1716);
Unit x_1722(const auto &x_1723, const auto &x_1724, const auto &x_1725);
Unit x_1733(const auto &x_1734, const auto &x_1735, const auto &x_1736);
Unit x_1768(const auto &x_1769);
Unit x_1776(const auto &x_1777, const auto &x_1778, const auto &x_1779);
Unit x_1797(const auto &x_1798);
Unit x_1801(const auto &x_1802);
Unit x_1806(const auto &x_1807, const auto &x_1808, const auto &x_1809);
Unit x_1825(const auto &x_1826);
Unit eval_stmts_x_1653(const auto &x_1833);
Unit eval_stmts_x_1652(const auto &x_1835);
Unit x_1837(const auto &x_1838);
int64_t x_1845(const auto &x_1846);
int64_t x_1848(const auto &x_1849);
LayoutNode x_1851(const auto &x_1852);
Node x_1854(const auto &x_1855);
Node x_1857(const auto &x_1858);
Unit var_modified_x_2096(const auto &x_2106) {
  auto x_3278 = [&](const auto &x_2109) {
    if (HashtblContain(x_2109->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2109->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2109);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2106->next, [&](const auto &x_2108) { return MakeUnit(); },
      [&](const auto &x_2107) {
        auto x_3279 = x_3278;
        x_3279(x_2107);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_2093(const auto &x_2110) {
  if ((x_2110->prev != nullptr) && (!(x_2110->prev)->var_line_break)) {
    return max(x_2110->var_height_external, (x_2110->prev)->var_line_height);
  } else {
    return x_2110->var_height_external;
  }
}
Unit var_modified_x_2091(const auto &x_2127) {
  auto x_3280 = [&](const auto &x_2128) {
    if (HashtblContain(x_2128->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2128->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2128);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3280(x_2127);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2088(const auto &x_2129) {
  if (eq(x_2129->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2129->var_height_internal;
  }
}
Unit var_modified_x_2086(const auto &x_2138) {
  auto x_3281 = [&](const auto &x_2139) {
    if (HashtblContain(x_2139->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2139->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2139);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3281(x_2138);
  MakeUnit();
  ListIter(x_2138->children, [&](const auto &x_2140) {
    if (HashtblContain(x_2140->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2140->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2140);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_2083(const auto &x_2141) {
  if (x_2141->var_intrinsic_height_is_height) {
    return x_2141->var_intrinsic_height_internal;
  } else {
    if ((x_2141->parent != nullptr) && (x_2141->parent)->var_is_flex_column) {
      return plus(x_2141->var_intrinsic_height_internal,
                  mult(x_2141->var_flex_amount, (x_2141->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_2141->var_height_expr, std::string("%"))) {
        return mult(x_2141->var_box_height,
                    divide(string_to_float(strip_suffix(x_2141->var_height_expr, std::string("%"))), 100.));
      } else {
        return max(x_2141->var_box_height, x_2141->var_intrinsic_height_internal);
      }
    }
  }
}
Unit var_modified_x_2081(const auto &x_2194) {
  ListIter(x_2194->children, [&](const auto &x_2195) {
    if (HashtblContain(x_2195->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2195->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2195);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_3282 = [&](const auto &x_2198) {
    if (HashtblContain(x_2198->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2198->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2198);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2194->next, [&](const auto &x_2197) { return MakeUnit(); },
      [&](const auto &x_2196) {
        auto x_3283 = x_3282;
        x_3283(x_2196);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_2078(const auto &x_2199) {
  if (x_2199->prev != nullptr) {
    if (x_2199->var_line_break || (x_2199->prev)->var_line_break) {
      return plus((x_2199->prev)->var_y, (x_2199->prev)->var_line_height);
    } else {
      return (x_2199->prev)->var_y;
    }
  } else {
    if (x_2199->parent != nullptr) {
      return (x_2199->parent)->var_y;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2076(const auto &x_2224) {
  auto x_3284 = [&](const auto &x_2227) {
    if (HashtblContain(x_2227->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2227->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2227);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2224->next, [&](const auto &x_2226) { return MakeUnit(); },
      [&](const auto &x_2225) {
        auto x_3285 = x_3284;
        x_3285(x_2225);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_2073(const auto &x_2228) {
  if (eq(x_2228->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2228->var_width_internal;
  }
}
Unit var_modified_x_2071(const auto &x_2237) {
  auto x_3286 = [&](const auto &x_2238) {
    if (HashtblContain(x_2238->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2238->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2238);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3286(x_2237);
  MakeUnit();
  ListIter(x_2237->children, [&](const auto &x_2239) {
    if (HashtblContain(x_2239->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2239->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2239);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_2068(const auto &x_2240) {
  if (x_2240->var_intrinsic_width_is_width) {
    return x_2240->var_intrinsic_width_internal;
  } else {
    if ((x_2240->parent != nullptr) && (x_2240->parent)->var_is_flex_row) {
      return plus(x_2240->var_intrinsic_width_internal, mult(x_2240->var_flex_amount, (x_2240->parent)->var_flex_unit));
    } else {
      if (has_suffix(x_2240->var_width_expr, std::string("%"))) {
        return mult(x_2240->var_box_width,
                    divide(string_to_float(strip_suffix(x_2240->var_width_expr, std::string("%"))), 100.));
      } else {
        return max(x_2240->var_box_width, x_2240->var_intrinsic_width_internal);
      }
    }
  }
}
Unit var_modified_x_2066(const auto &x_2293) {
  ListIter(x_2293->children, [&](const auto &x_2294) {
    if (HashtblContain(x_2294->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2294->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2294);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_3287 = [&](const auto &x_2297) {
    if (HashtblContain(x_2297->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2297->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2297);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2293->next, [&](const auto &x_2296) { return MakeUnit(); },
      [&](const auto &x_2295) {
        auto x_3288 = x_3287;
        x_3288(x_2295);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_2063(const auto &x_2298) {
  if (x_2298->prev != nullptr) {
    if (x_2298->var_line_break || (x_2298->prev)->var_line_break) {
      return 0.;
    } else {
      return plus((x_2298->prev)->var_x, (x_2298->prev)->var_width_external);
    }
  } else {
    if (x_2298->parent != nullptr) {
      return (x_2298->parent)->var_x;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_2061(const auto &x_2319) {
  ListIter(x_2319->children, [&](const auto &x_2320) {
    if (HashtblContain(x_2320->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2320->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2320);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_2058(const auto &x_2321) {
  if (gt(x_2321->var_left_over, 0.)) {
    return divide(x_2321->var_left_over, x_2321->var_flex_grow_sum);
  } else {
    return divide(x_2321->var_left_over, x_2321->var_flex_shrink_sum);
  }
}
Unit var_modified_x_2056(const auto &x_2342) {
  auto x_3289 = [&](const auto &x_2343) {
    if (HashtblContain(x_2343->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2343->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2343);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3289(x_2342);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2053(const auto &x_2344) {
  if ((x_2344->parent != nullptr) && gt((x_2344->parent)->var_left_over, 0.)) {
    return x_2344->var_flex_grow;
  } else {
    return x_2344->var_flex_shrink;
  }
}
Unit var_modified_x_2051(const auto &x_2357) {
  auto x_3290 = [&](const auto &x_2358) {
    if (HashtblContain(x_2358->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2358->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2358);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3290(x_2357);
  MakeUnit();
  ListIter(x_2357->children, [&](const auto &x_2359) {
    if (HashtblContain(x_2359->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2359->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2359);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_2048(const auto &x_2360) {
  if (x_2360->var_is_flex_row) {
    return minus(x_2360->var_box_width, (x_2360->last != nullptr) ? ((x_2360->last)->var_intrinsic_width_sum) : (0.));
  } else {
    return minus(x_2360->var_box_height, (x_2360->last != nullptr) ? ((x_2360->last)->var_intrinsic_height_sum) : (0.));
  }
}
Unit var_modified_x_2046(const auto &x_2381) {
  auto x_3291 = [&](const auto &x_2382) {
    if (HashtblContain(x_2382->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2382->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2382);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3291(x_2381);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2043(const auto &x_2383) {
  if (x_2383->parent != nullptr) {
    return (x_2383->parent)->var_height_internal;
  } else {
    return 1080.;
  }
}
Unit var_modified_x_2041(const auto &x_2388) {
  auto x_3292 = [&](const auto &x_2389) {
    if (HashtblContain(x_2389->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2389->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2389);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3292(x_2388);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2038(const auto &x_2390) {
  if (x_2390->parent != nullptr) {
    return (x_2390->parent)->var_width_internal;
  } else {
    return 1920.;
  }
}
Unit var_modified_x_2035(const auto &x_2395) {
  auto x_3293 = [&](const auto &x_2396) {
    if (HashtblContain(x_2396->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2396->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2396);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3293(x_2395);
  MakeUnit();
  auto x_3294 = [&](const auto &x_2399) {
    if (HashtblContain(x_2399->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2399->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2399);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2395->next, [&](const auto &x_2398) { return MakeUnit(); },
      [&](const auto &x_2397) {
        auto x_3297 = x_3294;
        x_3297(x_2397);
        return MakeUnit();
      });
  auto x_3295 = [&](const auto &x_2400) {
    if (HashtblContain(x_2400->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2400->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2400);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3295(x_2395);
  MakeUnit();
  auto x_3296 = [&](const auto &x_2403) {
    if (HashtblContain(x_2403->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2403->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2403);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2395->next, [&](const auto &x_2402) { return MakeUnit(); },
      [&](const auto &x_2401) {
        auto x_3298 = x_3296;
        x_3298(x_2401);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_2032(const auto &x_2404) {
  if (eq(x_2404->var_display, std::string("none"))) {
    return false;
  } else {
    if (eq(x_2404->var_position, std::string("absolute"))) {
      return false;
    } else {
      if ((x_2404->parent != nullptr) &&
          (eq((x_2404->parent)->var_display, std::string("flex")) ||
           eq((x_2404->parent)->var_display, std::string("inline-flex")))) {
        return true;
      } else {
        if (eq(x_2404->var_display, std::string("block"))) {
          return true;
        } else {
          if (eq(x_2404->var_display, std::string("inline"))) {
            return false;
          } else {
            if (eq(x_2404->var_display, std::string("inline-block"))) {
              return false;
            } else {
              if (eq(x_2404->var_display, std::string("flex"))) {
                if (eq(GetProp<std::string>(x_2404, std::string("flex-direction")), std::string("row"))) {
                  return false;
                } else {
                  if (eq(GetProp<std::string>(x_2404, std::string("flex-direction")), std::string("column"))) {
                    return true;
                  } else {
                    return true;
                  }
                }
              } else {
                if (eq(x_2404->var_display, std::string("inline-flex"))) {
                  return false;
                } else {
                  if (eq(x_2404->var_display, std::string("contents"))) {
                    return false;
                  } else {
                    if (eq(x_2404->var_display, std::string("table"))) {
                      return true;
                    } else {
                      if (eq(x_2404->var_display, std::string("table-row-group"))) {
                        return true;
                      } else {
                        if (eq(x_2404->var_display, std::string("table-row"))) {
                          return true;
                        } else {
                          if (eq(x_2404->var_display, std::string("table-cell"))) {
                            return false;
                          } else {
                            if (eq(x_2404->var_display, std::string("list-item"))) {
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
Unit var_modified_x_2030(const auto &x_2481) {
  ListIter(x_2481->children, [&](const auto &x_2482) {
    if (HashtblContain(x_2482->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2482->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2482);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_2027(const auto &x_2483) {
  return (((!(x_2483->parent != nullptr)) || (x_2483->parent)->var_visible) &&
          (neq(x_2483->var_display, std::string("none")) && ((!x_2483->var_inside_svg) && (!x_2483->var_disabled))));
}
Unit var_modified_x_2025(const auto &x_2500) {
  auto x_3299 = [&](const auto &x_2501) {
    if (HashtblContain(x_2501->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2501->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2501);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3299(x_2500);
  MakeUnit();
  ListIter(x_2500->children, [&](const auto &x_2502) {
    if (HashtblContain(x_2502->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2502->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2502);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_3300 = [&](const auto &x_2503) {
    if (HashtblContain(x_2503->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2503->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2503);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3300(x_2500);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2022(const auto &x_2504) {
  if (eq(x_2504->name, std::string("NOSCRIPT"))) {
    return true;
  } else {
    return ((x_2504->parent != nullptr) && (x_2504->parent)->var_disabled);
  }
}
Unit var_modified_x_2020(const auto &x_2509) {
  auto x_3301 = [&](const auto &x_2510) {
    if (HashtblContain(x_2510->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2510->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2510);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3301(x_2509);
  MakeUnit();
  ListIter(x_2509->children, [&](const auto &x_2511) {
    if (HashtblContain(x_2511->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2511->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2511);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_3302 = [&](const auto &x_2512) {
    if (HashtblContain(x_2512->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2512->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2512);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3302(x_2509);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2017(const auto &x_2513) {
  return ((x_2513->parent != nullptr) && ((x_2513->parent)->var_is_svg_block || (x_2513->parent)->var_inside_svg));
}
Unit var_modified_x_2015(const auto &x_2522) {
  ListIter(x_2522->children, [&](const auto &x_2523) {
    if (HashtblContain(x_2523->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2523->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2523);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_2012(const auto &x_2524) { return eq(x_2524->name, std::string("svg")); }
Unit var_modified_x_2010(const auto &x_2525) {
  auto x_3303 = [&](const auto &x_2526) {
    if (HashtblContain(x_2526->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2526->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2526);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3303(x_2525);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2007(const auto &x_2527) { return neq(x_2527->var_height_attr_expr, std::string("auto")); }
Unit var_modified_x_2005(const auto &x_2532) {
  auto x_3304 = [&](const auto &x_2533) {
    if (HashtblContain(x_2533->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2533->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2533);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3304(x_2532);
  MakeUnit();
  auto x_3305 = [&](const auto &x_2534) {
    if (HashtblContain(x_2534->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2534->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2534);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3305(x_2532);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_2002(const auto &x_2535) {
  if (!HasAttr(x_2535, std::string("height"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_2535, std::string("height"))) ||
        has_suffix(GetAttr<std::string>(x_2535, std::string("height")), std::string("%"))) {
      return GetAttr<std::string>(x_2535, std::string("height"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_2000(const auto &x_2546) {
  auto x_3306 = [&](const auto &x_2547) {
    if (HashtblContain(x_2547->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2547->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2547);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3306(x_2546);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1997(const auto &x_2548) { return neq(x_2548->var_width_attr_expr, std::string("auto")); }
Unit var_modified_x_1995(const auto &x_2553) {
  auto x_3307 = [&](const auto &x_2554) {
    if (HashtblContain(x_2554->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2554->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2554);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3307(x_2553);
  MakeUnit();
  auto x_3308 = [&](const auto &x_2555) {
    if (HashtblContain(x_2555->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2555->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2555);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3308(x_2553);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1992(const auto &x_2556) {
  if (!HasAttr(x_2556, std::string("width"))) {
    return std::string("auto");
  } else {
    if (string_is_float(GetAttr<std::string>(x_2556, std::string("width"))) ||
        has_suffix(GetAttr<std::string>(x_2556, std::string("width")), std::string("%"))) {
      return GetAttr<std::string>(x_2556, std::string("width"));
    } else {
      return std::string("auto");
    }
  }
}
Unit var_modified_x_1990(const auto &x_2567) {
  ListIter(x_2567->children, [&](const auto &x_2568) {
    if (HashtblContain(x_2568->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2568->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2568);
    } else {
      return MetaWriteMetric();
    }
  });
  ListIter(x_2567->children, [&](const auto &x_2569) {
    if (HashtblContain(x_2569->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2569->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2569);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_1987(const auto &x_2570) {
  if ((x_2570->parent != nullptr) &&
      (eq((x_2570->parent)->var_display, std::string("flex")) ||
       eq((x_2570->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_2570->parent)->var_flex_direction, std::string("column")) ||
        eq((x_2570->parent)->var_flex_direction, std::string("column-reverse"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_1985(const auto &x_2595) {
  ListIter(x_2595->children, [&](const auto &x_2596) {
    if (HashtblContain(x_2596->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2596->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2596);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_3309 = [&](const auto &x_2597) {
    if (HashtblContain(x_2597->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2597->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2597);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3309(x_2595);
  MakeUnit();
  ListIter(x_2595->children, [&](const auto &x_2598) {
    if (HashtblContain(x_2598->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2598->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2598);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_1982(const auto &x_2599) {
  if ((x_2599->parent != nullptr) &&
      (eq((x_2599->parent)->var_display, std::string("flex")) ||
       eq((x_2599->parent)->var_display, std::string("inline-flex")))) {
    if (eq((x_2599->parent)->var_flex_direction, std::string("row"))) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
Unit var_modified_x_1980(const auto &x_2624) {
  ListIter(x_2624->children, [&](const auto &x_2625) {
    if (HashtblContain(x_2625->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2625->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2625);
    } else {
      return MetaWriteMetric();
    }
  });
  return MakeUnit();
}
auto eval_expr_x_1977(const auto &x_2626) {
  if (HasProp(x_2626, std::string("flex-direction"))) {
    return GetProp<std::string>(x_2626, std::string("flex-direction"));
  } else {
    return std::string("");
  }
}
Unit var_modified_x_1975(const auto &x_2629) {
  auto x_3310 = [&](const auto &x_2632) {
    if (HashtblContain(x_2632->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2632->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2632);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2629->next, [&](const auto &x_2631) { return MakeUnit(); },
      [&](const auto &x_2630) {
        auto x_3312 = x_3310;
        x_3312(x_2630);
        return MakeUnit();
      });
  auto x_3311 = [&](const auto &x_2633) {
    if (HashtblContain(x_2633->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2633->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2633);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3311(x_2629);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1972(const auto &x_2634) {
  return plus((x_2634->prev != nullptr) ? ((x_2634->prev)->var_flex_shrink_sum) : (0.), x_2634->var_flex_shrink);
}
Unit var_modified_x_1970(const auto &x_2643) {
  auto x_3313 = [&](const auto &x_2646) {
    if (HashtblContain(x_2646->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2646->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2646);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2643->next, [&](const auto &x_2645) { return MakeUnit(); },
      [&](const auto &x_2644) {
        auto x_3315 = x_3313;
        x_3315(x_2644);
        return MakeUnit();
      });
  auto x_3314 = [&](const auto &x_2647) {
    if (HashtblContain(x_2647->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2647->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2647);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3314(x_2643);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1967(const auto &x_2648) {
  return plus((x_2648->prev != nullptr) ? ((x_2648->prev)->var_flex_grow_sum) : (0.), x_2648->var_flex_grow);
}
Unit var_modified_x_1965(const auto &x_2657) {
  auto x_3316 = [&](const auto &x_2658) {
    if (HashtblContain(x_2658->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2658->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2658);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3316(x_2657);
  MakeUnit();
  auto x_3317 = [&](const auto &x_2659) {
    if (HashtblContain(x_2659->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2659->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2659);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3317(x_2657);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1962(const auto &x_2660) {
  if (HasProp(x_2660, std::string("flex-shrink"))) {
    return string_to_float(GetProp<std::string>(x_2660, std::string("flex-shrink")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_1960(const auto &x_2663) {
  auto x_3318 = [&](const auto &x_2664) {
    if (HashtblContain(x_2664->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2664->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2664);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3318(x_2663);
  MakeUnit();
  auto x_3319 = [&](const auto &x_2665) {
    if (HashtblContain(x_2665->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2665->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2665);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3319(x_2663);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1957(const auto &x_2666) {
  if (HasProp(x_2666, std::string("flex-grow"))) {
    return string_to_float(GetProp<std::string>(x_2666, std::string("flex-grow")));
  } else {
    return 0.;
  }
}
Unit var_modified_x_1955(const auto &x_2669) {
  auto x_3320 = [&](const auto &x_2670) {
    if (HashtblContain(x_2670->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2670->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2670);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3320(x_2669);
  MakeUnit();
  auto x_3321 = [&](const auto &x_2671) {
    if (HashtblContain(x_2671->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2671->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2671);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3321(x_2669);
  MakeUnit();
  auto x_3322 = [&](const auto &x_2672) {
    if (HashtblContain(x_2672->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2672->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2672);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3322(x_2669);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1952(const auto &x_2673) {
  if (HasProp(x_2673, std::string("position"))) {
    return GetProp<std::string>(x_2673, std::string("position"));
  } else {
    return std::string("static");
  }
}
Unit var_modified_x_1950(const auto &x_2676) {
  auto x_3323 = [&](const auto &x_2677) {
    if (HashtblContain(x_2677->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2677->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2677);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3323(x_2676);
  MakeUnit();
  ListIter(x_2676->children, [&](const auto &x_2678) {
    if (HashtblContain(x_2678->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2678->meta->BBDirtied, std::string("bb_1"), true);
      return set_recursive_proc_dirtied_x_1712(x_2678);
    } else {
      return MetaWriteMetric();
    }
  });
  auto x_3324 = [&](const auto &x_2679) {
    if (HashtblContain(x_2679->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2679->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2679);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3324(x_2676);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1947(const auto &x_2680) {
  if (HasProp(x_2680, std::string("display"))) {
    return GetProp<std::string>(x_2680, std::string("display"));
  } else {
    return std::string("block");
  }
}
Unit var_modified_x_1944(const auto &x_2683) {
  auto x_3325 = [&](const auto &x_2686) {
    if (HashtblContain(x_2686->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2686->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2686);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_2683->next == nullptr) {
    auto x_3327 = x_3325;
    OptionMatch(
        x_2683->parent, [&](const auto &x_2685) { return MakeUnit(); },
        [&](const auto &x_2684) {
          auto x_3329 = x_3327;
          x_3329(x_2684);
          return MakeUnit();
        });
  }
  auto x_3326 = [&](const auto &x_2689) {
    if (HashtblContain(x_2689->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2689->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2689);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2683->next, [&](const auto &x_2688) { return MakeUnit(); },
      [&](const auto &x_2687) {
        auto x_3328 = x_3326;
        x_3328(x_2687);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_1941(const auto &x_2690) {
  if (x_2690->prev != nullptr) {
    if (x_2690->var_line_break) {
      return plus((x_2690->prev)->var_finished_intrinsic_height_sum,
                  plus((x_2690->prev)->var_intrinsic_current_line_height, x_2690->var_intrinsic_height_external));
    } else {
      return (x_2690->prev)->var_finished_intrinsic_height_sum;
    }
  } else {
    if (x_2690->var_line_break) {
      return x_2690->var_intrinsic_height_external;
    } else {
      return 0.;
    }
  }
}
Unit var_modified_x_1939(const auto &x_2719) {
  auto x_3330 = [&](const auto &x_2722) {
    if (HashtblContain(x_2722->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2722->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2722);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_2719->next == nullptr) {
    auto x_3332 = x_3330;
    OptionMatch(
        x_2719->parent, [&](const auto &x_2721) { return MakeUnit(); },
        [&](const auto &x_2720) {
          auto x_3334 = x_3332;
          x_3334(x_2720);
          return MakeUnit();
        });
  }
  auto x_3331 = [&](const auto &x_2725) {
    if (HashtblContain(x_2725->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2725->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2725);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2719->next, [&](const auto &x_2724) { return MakeUnit(); },
      [&](const auto &x_2723) {
        auto x_3333 = x_3331;
        x_3333(x_2723);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_1936(const auto &x_2726) {
  if (x_2726->var_line_break) {
    return 0.;
  } else {
    return max(x_2726->var_intrinsic_height_external,
               (x_2726->prev != nullptr) ? ((x_2726->prev)->var_intrinsic_current_line_height) : (0.));
  }
}
Unit var_modified_x_1934(const auto &x_2739) {
  auto x_3335 = [&](const auto &x_2742) {
    if (HashtblContain(x_2742->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2742->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2742);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2739->next, [&](const auto &x_2741) { return MakeUnit(); },
      [&](const auto &x_2740) {
        auto x_3337 = x_3335;
        x_3337(x_2740);
        return MakeUnit();
      });
  auto x_3336 = [&](const auto &x_2745) {
    if (HashtblContain(x_2745->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2745->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2745);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_2739->next == nullptr) {
    auto x_3338 = x_3336;
    OptionMatch(
        x_2739->parent, [&](const auto &x_2744) { return MakeUnit(); },
        [&](const auto &x_2743) {
          auto x_3339 = x_3338;
          x_3339(x_2743);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_1931(const auto &x_2746) {
  return plus((x_2746->prev != nullptr) ? ((x_2746->prev)->var_intrinsic_height_sum) : (0.),
              x_2746->var_intrinsic_height_external);
}
Unit var_modified_x_1929(const auto &x_2755) {
  auto x_3340 = [&](const auto &x_2756) {
    if (HashtblContain(x_2756->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2756->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2756);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3340(x_2755);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1926(const auto &x_2757) {
  if (eq(x_2757->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_2757->var_intrinsic_height_internal;
  }
}
Unit var_modified_x_1924(const auto &x_2766) {
  auto x_3341 = [&](const auto &x_2767) {
    if (HashtblContain(x_2767->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2767->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2767);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3341(x_2766);
  MakeUnit();
  auto x_3342 = [&](const auto &x_2768) {
    if (HashtblContain(x_2768->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2768->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2768);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3342(x_2766);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1921(const auto &x_2769) {
  if (eq(x_2769->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_2769->var_inside_svg) {
      return 0.;
    } else {
      if (x_2769->var_disabled) {
        return 0.;
      } else {
        if (neq(x_2769->var_height_expr, std::string("auto")) &&
            ((!has_suffix(x_2769->var_height_expr, std::string("%"))) &&
             neq(x_2769->var_height_expr, std::string("fit-content")))) {
          if (has_suffix(x_2769->var_height_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_2769->var_height_expr, std::string("px")));
          } else {
            if (has_suffix(x_2769->var_height_expr, std::string("ch"))) {
              return string_to_float(strip_suffix(x_2769->var_height_expr, std::string("ch")));
            } else {
              return string_to_float(strip_suffix(x_2769->var_height_expr, std::string("lh")));
            }
          }
        } else {
          return plus(
              x_2769->var_children_intrinsic_height,
              (eq(x_2769->name, std::string("#text")))
                  ? (10.)
                  : ((x_2769->var_is_default_case)
                         ? (0.)
                         : ((eq(x_2769->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_2769->name, std::string("INPUT")))
                                       ? (10.)
                                       : ((eq(x_2769->name, std::string("svg")))
                                              ? ((x_2769->var_has_height_attr &&
                                                  string_is_float(x_2769->var_height_attr_expr))
                                                     ? (string_to_float(x_2769->var_height_attr_expr))
                                                     : ((HasAttr(x_2769, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_2769, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(3))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_2769,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(3))),
                                                                    divide(string_to_float(strip_suffix(
                                                                               x_2769->var_height_attr_expr,
                                                                               std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_2769->name, std::string("IMG")))
                                                     ? ((x_2769->var_has_height_attr)
                                                            ? (string_to_float(x_2769->var_height_attr_expr))
                                                            : ((HasAttr(x_2769, std::string("image_height")) &&
                                                                (!x_2769->var_has_width_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_2769, std::string("image_height"))))
                                                                   : ((neq(GetAttr<int64_t>(x_2769,
                                                                                            std::string("image_width")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_2769->var_width_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2769,
                                                                                        std::string("image_height"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_2769,
                                                                                        std::string("image_width"))))))
                                                                          : (0.))))
                                                     : ((eq(x_2769->name, std::string("IFRAME")))
                                                            ? (150.)
                                                            : ((eq(x_2769->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (150.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1919(const auto &x_2914) {
  auto x_3343 = [&](const auto &x_2915) {
    if (HashtblContain(x_2915->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2915->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2915);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3343(x_2914);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1916(const auto &x_2916) {
  if (eq(x_2916->var_display, std::string("none")) || (x_2916->var_inside_svg || x_2916->var_disabled)) {
    return true;
  } else {
    if ((x_2916->parent != nullptr) && (x_2916->parent)->var_is_flex_column) {
      return false;
    } else {
      if (eq(x_2916->var_height_expr, std::string("auto")) ||
          (has_suffix(x_2916->var_height_expr, std::string("px")) ||
           (has_suffix(x_2916->var_height_expr, std::string("ch")) ||
            (has_suffix(x_2916->var_height_expr, std::string("lh")) ||
             eq(x_2916->var_height_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1914(const auto &x_2965) {
  auto x_3344 = [&](const auto &x_2966) {
    if (HashtblContain(x_2966->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2966->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2966);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3344(x_2965);
  MakeUnit();
  auto x_3345 = [&](const auto &x_2967) {
    if (HashtblContain(x_2967->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2967->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2967);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3345(x_2965);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1911(const auto &x_2968) {
  if (HasProp(x_2968, std::string("height"))) {
    return GetProp<std::string>(x_2968, std::string("height"));
  } else {
    return std::string("auto");
  }
}
Unit var_modified_x_1909(const auto &x_2971) {
  auto x_3346 = [&](const auto &x_2972) {
    if (HashtblContain(x_2972->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2972->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2972);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3346(x_2971);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1906(const auto &x_2973) {
  if (x_2973->last != nullptr) {
    return plus((x_2973->last)->var_finished_intrinsic_height_sum, (x_2973->last)->var_intrinsic_current_line_height);
  } else {
    return 0.;
  }
}
Unit var_modified_x_1904(const auto &x_2982) {
  auto x_3347 = [&](const auto &x_2985) {
    if (HashtblContain(x_2985->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_2985->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_2985);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2982->next, [&](const auto &x_2984) { return MakeUnit(); },
      [&](const auto &x_2983) {
        auto x_3349 = x_3347;
        x_3349(x_2983);
        return MakeUnit();
      });
  auto x_3348 = [&](const auto &x_2988) {
    if (HashtblContain(x_2988->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_2988->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_2988);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_2982->next == nullptr) {
    auto x_3350 = x_3348;
    OptionMatch(
        x_2982->parent, [&](const auto &x_2987) { return MakeUnit(); },
        [&](const auto &x_2986) {
          auto x_3351 = x_3350;
          x_3351(x_2986);
          return MakeUnit();
        });
  }
  return MakeUnit();
}
auto eval_expr_x_1901(const auto &x_2989) {
  return plus((x_2989->prev != nullptr) ? ((x_2989->prev)->var_intrinsic_width_sum) : (0.),
              x_2989->var_intrinsic_width_external);
}
Unit var_modified_x_1899(const auto &x_2998) {
  auto x_3352 = [&](const auto &x_3001) {
    if (HashtblContain(x_3001->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3001->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3001);
    } else {
      return MetaWriteMetric();
    }
  };
  if (x_2998->next == nullptr) {
    auto x_3354 = x_3352;
    OptionMatch(
        x_2998->parent, [&](const auto &x_3000) { return MakeUnit(); },
        [&](const auto &x_2999) {
          auto x_3356 = x_3354;
          x_3356(x_2999);
          return MakeUnit();
        });
  }
  auto x_3353 = [&](const auto &x_3004) {
    if (HashtblContain(x_3004->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3004->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3004);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_2998->next, [&](const auto &x_3003) { return MakeUnit(); },
      [&](const auto &x_3002) {
        auto x_3355 = x_3353;
        x_3355(x_3002);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_1896(const auto &x_3005) {
  return max(x_3005->var_intrinsic_current_line_width,
             (x_3005->prev != nullptr) ? ((x_3005->prev)->var_intrinsic_width_max) : (0.));
}
Unit var_modified_x_1894(const auto &x_3014) {
  auto x_3357 = [&](const auto &x_3015) {
    if (HashtblContain(x_3015->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3015->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3015);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3357(x_3014);
  MakeUnit();
  auto x_3358 = [&](const auto &x_3018) {
    if (HashtblContain(x_3018->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3018->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3018);
    } else {
      return MetaWriteMetric();
    }
  };
  OptionMatch(
      x_3014->next, [&](const auto &x_3017) { return MakeUnit(); },
      [&](const auto &x_3016) {
        auto x_3359 = x_3358;
        x_3359(x_3016);
        return MakeUnit();
      });
  return MakeUnit();
}
auto eval_expr_x_1891(const auto &x_3019) {
  return plus(x_3019->var_intrinsic_width_external,
              ((x_3019->prev != nullptr) && (!(x_3019->prev)->var_line_break))
                  ? ((x_3019->prev)->var_intrinsic_current_line_width)
                  : (0.));
}
Unit var_modified_x_1889(const auto &x_3032) {
  auto x_3360 = [&](const auto &x_3033) {
    if (HashtblContain(x_3033->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3033->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3033);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3360(x_3032);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1886(const auto &x_3034) {
  if (eq(x_3034->var_position, std::string("absolute"))) {
    return 0.;
  } else {
    return x_3034->var_intrinsic_width_internal;
  }
}
Unit var_modified_x_1884(const auto &x_3043) {
  auto x_3361 = [&](const auto &x_3044) {
    if (HashtblContain(x_3044->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3044->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3044);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3361(x_3043);
  MakeUnit();
  auto x_3362 = [&](const auto &x_3045) {
    if (HashtblContain(x_3045->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3045->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_3045);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3362(x_3043);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1881(const auto &x_3046) {
  if (eq(x_3046->var_display, std::string("none"))) {
    return 0.;
  } else {
    if (x_3046->var_inside_svg) {
      return 0.;
    } else {
      if (x_3046->var_disabled) {
        return 0.;
      } else {
        if (neq(x_3046->var_width_expr, std::string("auto")) &&
            ((!has_suffix(x_3046->var_width_expr, std::string("%"))) &&
             (neq(x_3046->var_width_expr, std::string("fit-content")) &&
              (neq(x_3046->var_width_expr, std::string("max-content")) &&
               (!has_prefix(x_3046->var_width_expr, std::string("calc"))))))) {
          if (has_suffix(x_3046->var_width_expr, std::string("px"))) {
            return string_to_float(strip_suffix(x_3046->var_width_expr, std::string("px")));
          } else {
            return string_to_float(strip_suffix(x_3046->var_width_expr, std::string("ch")));
          }
        } else {
          return plus(
              x_3046->var_children_intrinsic_width,
              (eq(x_3046->name, std::string("#text")))
                  ? (100.)
                  : ((x_3046->var_is_default_case)
                         ? (0.)
                         : ((eq(x_3046->name, std::string("BR")))
                                ? (0.)
                                : ((eq(x_3046->name, std::string("INPUT")))
                                       ? (100.)
                                       : ((eq(x_3046->name, std::string("svg")))
                                              ? ((x_3046->var_has_width_attr &&
                                                  string_is_float(x_3046->var_width_attr_expr))
                                                     ? (string_to_float(x_3046->var_width_attr_expr))
                                                     : (((!x_3046->var_has_width_attr) &&
                                                         HasAttr(x_3046, std::string("viewBox")))
                                                            ? (string_to_float(nth_by_sep(
                                                                  GetAttr<std::string>(x_3046, std::string("viewBox")),
                                                                  std::string(" "), static_cast<int64_t>(2))))
                                                            : (mult(string_to_float(nth_by_sep(
                                                                        GetAttr<std::string>(x_3046,
                                                                                             std::string("viewBox")),
                                                                        std::string(" "), static_cast<int64_t>(2))),
                                                                    divide(string_to_float(
                                                                               strip_suffix(x_3046->var_width_attr_expr,
                                                                                            std::string("%"))),
                                                                           100.)))))
                                              : ((eq(x_3046->name, std::string("IMG")))
                                                     ? ((x_3046->var_has_width_attr)
                                                            ? (string_to_float(x_3046->var_width_attr_expr))
                                                            : ((HasAttr(x_3046, std::string("image_width")) &&
                                                                (!x_3046->var_has_height_attr))
                                                                   ? (int_to_float(GetAttr<int64_t>(
                                                                         x_3046, std::string("image_width"))))
                                                                   : ((neq(GetAttr<int64_t>(
                                                                               x_3046, std::string("image_height")),
                                                                           static_cast<int64_t>(0)))
                                                                          ? (mult(
                                                                                string_to_float(
                                                                                    x_3046->var_height_attr_expr),
                                                                                divide(
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_3046,
                                                                                        std::string("image_width"))),
                                                                                    int_to_float(GetAttr<int64_t>(
                                                                                        x_3046,
                                                                                        std::string("image_height"))))))
                                                                          : (0.))))
                                                     : ((eq(x_3046->name, std::string("IFRAME")))
                                                            ? (300.)
                                                            : ((eq(x_3046->name, std::string("TEXTAREA")))
                                                                   ? (100.)
                                                                   : (300.)))))))));
        }
      }
    }
  }
}
Unit var_modified_x_1879(const auto &x_3199) {
  auto x_3363 = [&](const auto &x_3200) {
    if (HashtblContain(x_3200->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3200->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3200);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3363(x_3199);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1876(const auto &x_3201) {
  if (x_3201->last != nullptr) {
    return (x_3201->last)->var_intrinsic_width_max;
  } else {
    return 0.;
  }
}
Unit var_modified_x_1874(const auto &x_3206) {
  auto x_3364 = [&](const auto &x_3207) {
    if (HashtblContain(x_3207->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3207->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_3207);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3364(x_3206);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1871(const auto &x_3208) {
  if (eq(x_3208->var_display, std::string("none")) || (x_3208->var_inside_svg || x_3208->var_disabled)) {
    return true;
  } else {
    if ((x_3208->parent != nullptr) && (x_3208->parent)->var_is_flex_row) {
      return false;
    } else {
      if (eq(x_3208->var_width_expr, std::string("auto")) ||
          (has_suffix(x_3208->var_width_expr, std::string("px")) ||
           (has_suffix(x_3208->var_width_expr, std::string("ch")) ||
            (has_prefix(x_3208->var_width_expr, std::string("calc(")) ||
             eq(x_3208->var_width_expr, std::string("max-content")))))) {
        return true;
      } else {
        return false;
      }
    }
  }
}
Unit var_modified_x_1869(const auto &x_3257) {
  auto x_3365 = [&](const auto &x_3258) {
    if (HashtblContain(x_3258->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3258->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3258);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3365(x_3257);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1866(const auto &x_3259) {
  if (eq(x_3259->var_display, std::string("none"))) {
    return true;
  } else {
    if (x_3259->var_inside_svg) {
      return true;
    } else {
      if (x_3259->var_disabled) {
        return true;
      } else {if ( eq(x_3259->name,std::string("#document")) || (eq(x_3259->name,std::string("#shadow-root")) || (eq(x_3259->name,std::string("DIV")) || (eq(x_3259->name,std::string("HTML")) || (eq(x_3259->name,std::string("BODY")) || (eq(x_3259->name,std::string("BUTTON")) || (eq(x_3259->name,std::string("FOOTER")) || (eq(x_3259->name,std::string("SELECT")) || (eq(x_3259->name,std::string("SECTION")) || (eq(x_3259->name,std::string("FORM")) || (eq(x_3259->name,std::string("CENTER")) || (eq(x_3259->name,std::string("TD")) || (eq(x_3259->name,std::string("TR")) || (eq(x_3259->name,std::string("TBODY")) || (eq(x_3259->name,std::string("TABLE")) || (eq(x_3259->name,std::string("SPAN")) || (eq(x_3259->name,std::string("FONT")) || (eq(x_3259->name,std::string("A")) || (eq(x_3259->name,std::string("ARTICLE")) || (eq(x_3259->name,std::string("P")) || (eq(x_3259->name,std::string("U")) || (eq(x_3259->name,std::string("UL")) || (eq(x_3259->name,std::string("B")) || (eq(x_3259->name,std::string("H1")) || (eq(x_3259->name,std::string("H2")) || (eq(x_3259->name,std::string("H3")) || (eq(x_3259->name,std::string("H4")) || (eq(x_3259->name,std::string("DT")) || (eq(x_3259->name,std::string("DD")) || (eq(x_3259->name,std::string("DL")) || (eq(x_3259->name,std::string("LI")) || (eq(x_3259->name,std::string("LABEL")) || (eq(x_3259->name,std::string("OL")) || (eq(x_3259->name,std::string("NAV")) || (eq(x_3259->name,std::string("HEADER")) || (eq(x_3259->name,std::string("HEAD")) || (eq(x_3259->name,std::string("SOURCE")) || (eq(x_3259->name,std::string("PICTURE")) || (eq(x_3259->name,std::string("FIGURE")) || (eq(x_3259->name,std::string("FIGCAPTION")) || (eq(x_3259->name,std::string("MAIN")) || (eq(x_3259->name,std::string("REACT-PARTIAL")) || (eq(x_3259->name,std::string("QUERY-BUILDER")) || (eq(x_3259->name,std::string("MODAL-DIALOG")) || (eq(x_3259->name,std::string("SCROLLABLE-REGION")) || (eq(x_3259->name,std::string("DIALOG-HELPER")) || (eq(x_3259->name,std::string("AUTO-CHECK")) || (eq(x_3259->name,std::string("TOOL-TIP")) || (eq(x_3259->name,std::string("CUSTOM-SCOPES")) || (eq(x_3259->name,std::string("QBSEARCH-INPUT")) || (eq(x_3259->name,std::string("INCLUDE-FRAGMENT")) || (eq(x_3259->name,std::string("COOKIE-CONSENT-LINK")) || (eq(x_3259->name,std::string("FULLSTORY-CAPTURE")) || (eq(x_3259->name,std::string("GHCC-CONSENT")) || (eq(x_3259->name,std::string("GLOBAL-BANNER")) || (eq(x_3259->name,std::string("ACTIVE-GLOBAL-BANNERS")) || (eq(x_3259->name,std::string("CARD-SKEW")) || (eq(x_3259->name,std::string("EM")) || (eq(x_3259->name,std::string("ASIDE")) || (eq(x_3259->name,std::string("AUDIO")) || (eq(x_3259->name,std::string("SUP")) || (eq(x_3259->name,std::string("TIME")) || (eq(x_3259->name,std::string("ABBR")) || (eq(x_3259->name,std::string("SMALL")) || (eq(x_3259->name,std::string("SLOT")) || eq(x_3259->name,std::string("I")))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) ){
          return true;
        } else {
          return false;
        }
      }
    }
  }
}
Unit var_modified_x_1864(const auto &x_3272) {
  auto x_3366 = [&](const auto &x_3273) {
    if (HashtblContain(x_3273->meta->ProcInited, std::string("pass_0"))) {
      HashtblSet(x_3273->meta->BBDirtied, std::string("bb_0"), true);
      return set_recursive_proc_dirtied_x_1712(x_3273);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3366(x_3272);
  MakeUnit();
  auto x_3367 = [&](const auto &x_3274) {
    if (HashtblContain(x_3274->meta->ProcInited, std::string("pass_1"))) {
      HashtblSet(x_3274->meta->BBDirtied, std::string("bb_2"), true);
      return set_recursive_proc_dirtied_x_1752(x_3274);
    } else {
      return MetaWriteMetric();
    }
  };
  x_3367(x_3272);
  MakeUnit();
  return MakeUnit();
}
auto eval_expr_x_1861(const auto &x_3275) {
  if (HasProp(x_3275, std::string("width"))) {
    return GetProp<std::string>(x_3275, std::string("width"));
  } else {
    return std::string("auto");
  }
}
Unit eval_stmts_x_1805(const auto &x_1860) {
  WriteMetric();
  auto x_1862 = eval_expr_x_1861(x_1860);
  if (x_1860->has_var_width_expr) {
    auto x_1863 = x_1860->var_width_expr;
    if (!EqualValue(x_1863, x_1862)) {
      var_modified_x_1864(x_1860);
    }
  }
  x_1860->has_var_width_expr = true;
  x_1860->var_width_expr = x_1862;
  WriteMetric();
  auto x_1867 = eval_expr_x_1866(x_1860);
  if (x_1860->has_var_is_default_case) {
    auto x_1868 = x_1860->var_is_default_case;
    if (!EqualValue(x_1868, x_1867)) {
      var_modified_x_1869(x_1860);
    }
  }
  x_1860->has_var_is_default_case = true;
  x_1860->var_is_default_case = x_1867;
  WriteMetric();
  auto x_1872 = eval_expr_x_1871(x_1860);
  if (x_1860->has_var_intrinsic_width_is_width) {
    auto x_1873 = x_1860->var_intrinsic_width_is_width;
    if (!EqualValue(x_1873, x_1872)) {
      var_modified_x_1874(x_1860);
    }
  }
  x_1860->has_var_intrinsic_width_is_width = true;
  x_1860->var_intrinsic_width_is_width = x_1872;
  WriteMetric();
  auto x_1877 = eval_expr_x_1876(x_1860);
  if (x_1860->has_var_children_intrinsic_width) {
    auto x_1878 = x_1860->var_children_intrinsic_width;
    if (!EqualValue(x_1878, x_1877)) {
      var_modified_x_1879(x_1860);
    }
  }
  x_1860->has_var_children_intrinsic_width = true;
  x_1860->var_children_intrinsic_width = x_1877;
  WriteMetric();
  auto x_1882 = eval_expr_x_1881(x_1860);
  if (x_1860->has_var_intrinsic_width_internal) {
    auto x_1883 = x_1860->var_intrinsic_width_internal;
    if (!EqualValue(x_1883, x_1882)) {
      var_modified_x_1884(x_1860);
    }
  }
  x_1860->has_var_intrinsic_width_internal = true;
  x_1860->var_intrinsic_width_internal = x_1882;
  WriteMetric();
  auto x_1887 = eval_expr_x_1886(x_1860);
  if (x_1860->has_var_intrinsic_width_external) {
    auto x_1888 = x_1860->var_intrinsic_width_external;
    if (!EqualValue(x_1888, x_1887)) {
      var_modified_x_1889(x_1860);
    }
  }
  x_1860->has_var_intrinsic_width_external = true;
  x_1860->var_intrinsic_width_external = x_1887;
  WriteMetric();
  auto x_1892 = eval_expr_x_1891(x_1860);
  if (x_1860->has_var_intrinsic_current_line_width) {
    auto x_1893 = x_1860->var_intrinsic_current_line_width;
    if (!EqualValue(x_1893, x_1892)) {
      var_modified_x_1894(x_1860);
    }
  }
  x_1860->has_var_intrinsic_current_line_width = true;
  x_1860->var_intrinsic_current_line_width = x_1892;
  WriteMetric();
  auto x_1897 = eval_expr_x_1896(x_1860);
  if (x_1860->has_var_intrinsic_width_max) {
    auto x_1898 = x_1860->var_intrinsic_width_max;
    if (!EqualValue(x_1898, x_1897)) {
      var_modified_x_1899(x_1860);
    }
  }
  x_1860->has_var_intrinsic_width_max = true;
  x_1860->var_intrinsic_width_max = x_1897;
  WriteMetric();
  auto x_1902 = eval_expr_x_1901(x_1860);
  if (x_1860->has_var_intrinsic_width_sum) {
    auto x_1903 = x_1860->var_intrinsic_width_sum;
    if (!EqualValue(x_1903, x_1902)) {
      var_modified_x_1904(x_1860);
    }
  }
  x_1860->has_var_intrinsic_width_sum = true;
  x_1860->var_intrinsic_width_sum = x_1902;
  WriteMetric();
  auto x_1907 = eval_expr_x_1906(x_1860);
  if (x_1860->has_var_children_intrinsic_height) {
    auto x_1908 = x_1860->var_children_intrinsic_height;
    if (!EqualValue(x_1908, x_1907)) {
      var_modified_x_1909(x_1860);
    }
  }
  x_1860->has_var_children_intrinsic_height = true;
  x_1860->var_children_intrinsic_height = x_1907;
  WriteMetric();
  auto x_1912 = eval_expr_x_1911(x_1860);
  if (x_1860->has_var_height_expr) {
    auto x_1913 = x_1860->var_height_expr;
    if (!EqualValue(x_1913, x_1912)) {
      var_modified_x_1914(x_1860);
    }
  }
  x_1860->has_var_height_expr = true;
  x_1860->var_height_expr = x_1912;
  WriteMetric();
  auto x_1917 = eval_expr_x_1916(x_1860);
  if (x_1860->has_var_intrinsic_height_is_height) {
    auto x_1918 = x_1860->var_intrinsic_height_is_height;
    if (!EqualValue(x_1918, x_1917)) {
      var_modified_x_1919(x_1860);
    }
  }
  x_1860->has_var_intrinsic_height_is_height = true;
  x_1860->var_intrinsic_height_is_height = x_1917;
  WriteMetric();
  auto x_1922 = eval_expr_x_1921(x_1860);
  if (x_1860->has_var_intrinsic_height_internal) {
    auto x_1923 = x_1860->var_intrinsic_height_internal;
    if (!EqualValue(x_1923, x_1922)) {
      var_modified_x_1924(x_1860);
    }
  }
  x_1860->has_var_intrinsic_height_internal = true;
  x_1860->var_intrinsic_height_internal = x_1922;
  WriteMetric();
  auto x_1927 = eval_expr_x_1926(x_1860);
  if (x_1860->has_var_intrinsic_height_external) {
    auto x_1928 = x_1860->var_intrinsic_height_external;
    if (!EqualValue(x_1928, x_1927)) {
      var_modified_x_1929(x_1860);
    }
  }
  x_1860->has_var_intrinsic_height_external = true;
  x_1860->var_intrinsic_height_external = x_1927;
  WriteMetric();
  auto x_1932 = eval_expr_x_1931(x_1860);
  if (x_1860->has_var_intrinsic_height_sum) {
    auto x_1933 = x_1860->var_intrinsic_height_sum;
    if (!EqualValue(x_1933, x_1932)) {
      var_modified_x_1934(x_1860);
    }
  }
  x_1860->has_var_intrinsic_height_sum = true;
  x_1860->var_intrinsic_height_sum = x_1932;
  WriteMetric();
  auto x_1937 = eval_expr_x_1936(x_1860);
  if (x_1860->has_var_intrinsic_current_line_height) {
    auto x_1938 = x_1860->var_intrinsic_current_line_height;
    if (!EqualValue(x_1938, x_1937)) {
      var_modified_x_1939(x_1860);
    }
  }
  x_1860->has_var_intrinsic_current_line_height = true;
  x_1860->var_intrinsic_current_line_height = x_1937;
  WriteMetric();
  auto x_1942 = eval_expr_x_1941(x_1860);
  if (x_1860->has_var_finished_intrinsic_height_sum) {
    auto x_1943 = x_1860->var_finished_intrinsic_height_sum;
    if (!EqualValue(x_1943, x_1942)) {
      var_modified_x_1944(x_1860);
    }
  }
  x_1860->has_var_finished_intrinsic_height_sum = true;
  x_1860->var_finished_intrinsic_height_sum = x_1942;
  return MakeUnit();
}
Unit eval_stmts_x_1803(const auto &x_1946) {
  WriteMetric();
  auto x_1948 = eval_expr_x_1947(x_1946);
  if (x_1946->has_var_display) {
    auto x_1949 = x_1946->var_display;
    if (!EqualValue(x_1949, x_1948)) {
      var_modified_x_1950(x_1946);
    }
  }
  x_1946->has_var_display = true;
  x_1946->var_display = x_1948;
  WriteMetric();
  auto x_1953 = eval_expr_x_1952(x_1946);
  if (x_1946->has_var_position) {
    auto x_1954 = x_1946->var_position;
    if (!EqualValue(x_1954, x_1953)) {
      var_modified_x_1955(x_1946);
    }
  }
  x_1946->has_var_position = true;
  x_1946->var_position = x_1953;
  WriteMetric();
  auto x_1958 = eval_expr_x_1957(x_1946);
  if (x_1946->has_var_flex_grow) {
    auto x_1959 = x_1946->var_flex_grow;
    if (!EqualValue(x_1959, x_1958)) {
      var_modified_x_1960(x_1946);
    }
  }
  x_1946->has_var_flex_grow = true;
  x_1946->var_flex_grow = x_1958;
  WriteMetric();
  auto x_1963 = eval_expr_x_1962(x_1946);
  if (x_1946->has_var_flex_shrink) {
    auto x_1964 = x_1946->var_flex_shrink;
    if (!EqualValue(x_1964, x_1963)) {
      var_modified_x_1965(x_1946);
    }
  }
  x_1946->has_var_flex_shrink = true;
  x_1946->var_flex_shrink = x_1963;
  WriteMetric();
  auto x_1968 = eval_expr_x_1967(x_1946);
  if (x_1946->has_var_flex_grow_sum) {
    auto x_1969 = x_1946->var_flex_grow_sum;
    if (!EqualValue(x_1969, x_1968)) {
      var_modified_x_1970(x_1946);
    }
  }
  x_1946->has_var_flex_grow_sum = true;
  x_1946->var_flex_grow_sum = x_1968;
  WriteMetric();
  auto x_1973 = eval_expr_x_1972(x_1946);
  if (x_1946->has_var_flex_shrink_sum) {
    auto x_1974 = x_1946->var_flex_shrink_sum;
    if (!EqualValue(x_1974, x_1973)) {
      var_modified_x_1975(x_1946);
    }
  }
  x_1946->has_var_flex_shrink_sum = true;
  x_1946->var_flex_shrink_sum = x_1973;
  WriteMetric();
  auto x_1978 = eval_expr_x_1977(x_1946);
  if (x_1946->has_var_flex_direction) {
    auto x_1979 = x_1946->var_flex_direction;
    if (!EqualValue(x_1979, x_1978)) {
      var_modified_x_1980(x_1946);
    }
  }
  x_1946->has_var_flex_direction = true;
  x_1946->var_flex_direction = x_1978;
  WriteMetric();
  auto x_1983 = eval_expr_x_1982(x_1946);
  if (x_1946->has_var_is_flex_row) {
    auto x_1984 = x_1946->var_is_flex_row;
    if (!EqualValue(x_1984, x_1983)) {
      var_modified_x_1985(x_1946);
    }
  }
  x_1946->has_var_is_flex_row = true;
  x_1946->var_is_flex_row = x_1983;
  WriteMetric();
  auto x_1988 = eval_expr_x_1987(x_1946);
  if (x_1946->has_var_is_flex_column) {
    auto x_1989 = x_1946->var_is_flex_column;
    if (!EqualValue(x_1989, x_1988)) {
      var_modified_x_1990(x_1946);
    }
  }
  x_1946->has_var_is_flex_column = true;
  x_1946->var_is_flex_column = x_1988;
  WriteMetric();
  auto x_1993 = eval_expr_x_1992(x_1946);
  if (x_1946->has_var_width_attr_expr) {
    auto x_1994 = x_1946->var_width_attr_expr;
    if (!EqualValue(x_1994, x_1993)) {
      var_modified_x_1995(x_1946);
    }
  }
  x_1946->has_var_width_attr_expr = true;
  x_1946->var_width_attr_expr = x_1993;
  WriteMetric();
  auto x_1998 = eval_expr_x_1997(x_1946);
  if (x_1946->has_var_has_width_attr) {
    auto x_1999 = x_1946->var_has_width_attr;
    if (!EqualValue(x_1999, x_1998)) {
      var_modified_x_2000(x_1946);
    }
  }
  x_1946->has_var_has_width_attr = true;
  x_1946->var_has_width_attr = x_1998;
  WriteMetric();
  auto x_2003 = eval_expr_x_2002(x_1946);
  if (x_1946->has_var_height_attr_expr) {
    auto x_2004 = x_1946->var_height_attr_expr;
    if (!EqualValue(x_2004, x_2003)) {
      var_modified_x_2005(x_1946);
    }
  }
  x_1946->has_var_height_attr_expr = true;
  x_1946->var_height_attr_expr = x_2003;
  WriteMetric();
  auto x_2008 = eval_expr_x_2007(x_1946);
  if (x_1946->has_var_has_height_attr) {
    auto x_2009 = x_1946->var_has_height_attr;
    if (!EqualValue(x_2009, x_2008)) {
      var_modified_x_2010(x_1946);
    }
  }
  x_1946->has_var_has_height_attr = true;
  x_1946->var_has_height_attr = x_2008;
  WriteMetric();
  auto x_2013 = eval_expr_x_2012(x_1946);
  if (x_1946->has_var_is_svg_block) {
    auto x_2014 = x_1946->var_is_svg_block;
    if (!EqualValue(x_2014, x_2013)) {
      var_modified_x_2015(x_1946);
    }
  }
  x_1946->has_var_is_svg_block = true;
  x_1946->var_is_svg_block = x_2013;
  WriteMetric();
  auto x_2018 = eval_expr_x_2017(x_1946);
  if (x_1946->has_var_inside_svg) {
    auto x_2019 = x_1946->var_inside_svg;
    if (!EqualValue(x_2019, x_2018)) {
      var_modified_x_2020(x_1946);
    }
  }
  x_1946->has_var_inside_svg = true;
  x_1946->var_inside_svg = x_2018;
  WriteMetric();
  auto x_2023 = eval_expr_x_2022(x_1946);
  if (x_1946->has_var_disabled) {
    auto x_2024 = x_1946->var_disabled;
    if (!EqualValue(x_2024, x_2023)) {
      var_modified_x_2025(x_1946);
    }
  }
  x_1946->has_var_disabled = true;
  x_1946->var_disabled = x_2023;
  WriteMetric();
  auto x_2028 = eval_expr_x_2027(x_1946);
  if (x_1946->has_var_visible) {
    auto x_2029 = x_1946->var_visible;
    if (!EqualValue(x_2029, x_2028)) {
      var_modified_x_2030(x_1946);
    }
  }
  x_1946->has_var_visible = true;
  x_1946->var_visible = x_2028;
  WriteMetric();
  auto x_2033 = eval_expr_x_2032(x_1946);
  if (x_1946->has_var_line_break) {
    auto x_2034 = x_1946->var_line_break;
    if (!EqualValue(x_2034, x_2033)) {
      var_modified_x_2035(x_1946);
    }
  }
  x_1946->has_var_line_break = true;
  x_1946->var_line_break = x_2033;
  return MakeUnit();
}
Unit eval_stmts_x_1799(const auto &x_2037) {
  WriteMetric();
  auto x_2039 = eval_expr_x_2038(x_2037);
  if (x_2037->has_var_box_width) {
    auto x_2040 = x_2037->var_box_width;
    if (!EqualValue(x_2040, x_2039)) {
      var_modified_x_2041(x_2037);
    }
  }
  x_2037->has_var_box_width = true;
  x_2037->var_box_width = x_2039;
  WriteMetric();
  auto x_2044 = eval_expr_x_2043(x_2037);
  if (x_2037->has_var_box_height) {
    auto x_2045 = x_2037->var_box_height;
    if (!EqualValue(x_2045, x_2044)) {
      var_modified_x_2046(x_2037);
    }
  }
  x_2037->has_var_box_height = true;
  x_2037->var_box_height = x_2044;
  WriteMetric();
  auto x_2049 = eval_expr_x_2048(x_2037);
  if (x_2037->has_var_left_over) {
    auto x_2050 = x_2037->var_left_over;
    if (!EqualValue(x_2050, x_2049)) {
      var_modified_x_2051(x_2037);
    }
  }
  x_2037->has_var_left_over = true;
  x_2037->var_left_over = x_2049;
  WriteMetric();
  auto x_2054 = eval_expr_x_2053(x_2037);
  if (x_2037->has_var_flex_amount) {
    auto x_2055 = x_2037->var_flex_amount;
    if (!EqualValue(x_2055, x_2054)) {
      var_modified_x_2056(x_2037);
    }
  }
  x_2037->has_var_flex_amount = true;
  x_2037->var_flex_amount = x_2054;
  WriteMetric();
  auto x_2059 = eval_expr_x_2058(x_2037);
  if (x_2037->has_var_flex_unit) {
    auto x_2060 = x_2037->var_flex_unit;
    if (!EqualValue(x_2060, x_2059)) {
      var_modified_x_2061(x_2037);
    }
  }
  x_2037->has_var_flex_unit = true;
  x_2037->var_flex_unit = x_2059;
  WriteMetric();
  auto x_2064 = eval_expr_x_2063(x_2037);
  if (x_2037->has_var_x) {
    auto x_2065 = x_2037->var_x;
    if (!EqualValue(x_2065, x_2064)) {
      var_modified_x_2066(x_2037);
    }
  }
  x_2037->has_var_x = true;
  x_2037->var_x = x_2064;
  WriteMetric();
  auto x_2069 = eval_expr_x_2068(x_2037);
  if (x_2037->has_var_width_internal) {
    auto x_2070 = x_2037->var_width_internal;
    if (!EqualValue(x_2070, x_2069)) {
      var_modified_x_2071(x_2037);
    }
  }
  x_2037->has_var_width_internal = true;
  x_2037->var_width_internal = x_2069;
  WriteMetric();
  auto x_2074 = eval_expr_x_2073(x_2037);
  if (x_2037->has_var_width_external) {
    auto x_2075 = x_2037->var_width_external;
    if (!EqualValue(x_2075, x_2074)) {
      var_modified_x_2076(x_2037);
    }
  }
  x_2037->has_var_width_external = true;
  x_2037->var_width_external = x_2074;
  WriteMetric();
  auto x_2079 = eval_expr_x_2078(x_2037);
  if (x_2037->has_var_y) {
    auto x_2080 = x_2037->var_y;
    if (!EqualValue(x_2080, x_2079)) {
      var_modified_x_2081(x_2037);
    }
  }
  x_2037->has_var_y = true;
  x_2037->var_y = x_2079;
  WriteMetric();
  auto x_2084 = eval_expr_x_2083(x_2037);
  if (x_2037->has_var_height_internal) {
    auto x_2085 = x_2037->var_height_internal;
    if (!EqualValue(x_2085, x_2084)) {
      var_modified_x_2086(x_2037);
    }
  }
  x_2037->has_var_height_internal = true;
  x_2037->var_height_internal = x_2084;
  WriteMetric();
  auto x_2089 = eval_expr_x_2088(x_2037);
  if (x_2037->has_var_height_external) {
    auto x_2090 = x_2037->var_height_external;
    if (!EqualValue(x_2090, x_2089)) {
      var_modified_x_2091(x_2037);
    }
  }
  x_2037->has_var_height_external = true;
  x_2037->var_height_external = x_2089;
  WriteMetric();
  auto x_2094 = eval_expr_x_2093(x_2037);
  if (x_2037->has_var_line_height) {
    auto x_2095 = x_2037->var_line_height;
    if (!EqualValue(x_2095, x_2094)) {
      var_modified_x_2096(x_2037);
    }
  }
  x_2037->has_var_line_height = true;
  x_2037->var_line_height = x_2094;
  return MakeUnit();
}
Unit x_2098(const auto &x_2099) {
  MetaWriteMetric();
  if (!HashtblFindExn(x_2099->meta->RecursiveProcDirtied, std::string("pass_1"))) {
    HashtblSet(x_2099->meta->RecursiveProcDirtied, std::string("pass_1"), true);
    return OptionMatch(
        x_2099->parent, [&](const auto &x_2101) { return MakeUnit(); },
        [&](const auto &x_2100) { return x_2098(x_2100); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1752(const auto &x_2099) { return x_2098(x_2099); }
Unit x_2102(const auto &x_2103) {
  MetaWriteMetric();
  if (!HashtblFindExn(x_2103->meta->RecursiveProcDirtied, std::string("pass_0"))) {
    HashtblSet(x_2103->meta->RecursiveProcDirtied, std::string("pass_0"), true);
    return OptionMatch(
        x_2103->parent, [&](const auto &x_2105) { return MakeUnit(); },
        [&](const auto &x_2104) { return x_2102(x_2104); });
  } else {
    return MakeUnit();
  }
}
Unit set_recursive_proc_dirtied_x_1712(const auto &x_2103) { return x_2102(x_2103); }
Unit x_1680(const auto &x_1681, const auto &x_1682, const auto &x_1683) {
  auto x_1684 = ListHeadExn(x_1681);
  auto x_1685 = ListTailExn(x_1681);
  if (ListIsEmpty(x_1685)) {
    auto x_1686 = ListSplitN(x_1682->children, x_1684);
    OutputChangeMetric(IntAdd(layout_size_x_1639(ListNthExn(x_1682->children, x_1684)), layout_size_x_1639(x_1683)));
    x_1682->children = ListAppend(Zro(x_1686), Cons(x_1683, ListTailExn(Fst(x_1686))));
    return MakeUnit();
  } else {
    return x_1680(x_1685, ListNthExn(x_1682->children, x_1684), x_1683);
  }
}
Unit replace_layout_node_x_1679(const auto &x_1681, const auto &x_1682, const auto &x_1683) {
  return x_1680(x_1681, x_1682, x_1683);
}
Unit x_1687(const auto &x_1688, const auto &x_1689, const auto &x_1690) {
  auto x_1691 = ListHeadExn(x_1688);
  auto x_1692 = ListTailExn(x_1688);
  if (ListIsEmpty(x_1692)) {
    OutputChangeMetric(layout_size_x_1639(x_1690));
    auto x_1693 = ListSplitN(x_1689->children, x_1691);
    x_1689->children = ListAppend(Zro(x_1693), Cons(x_1690, Fst(x_1693)));
    return MakeUnit();
  } else {
    return x_1687(x_1692, ListNthExn(x_1689->children, x_1691), x_1690);
  }
}
Unit add_layout_node_x_1677(const auto &x_1688, const auto &x_1689, const auto &x_1690) {
  return x_1687(x_1688, x_1689, x_1690);
}
Unit x_1694(const auto &x_1695, const auto &x_1696, const auto &x_1697) {
  auto x_1698 = ListHeadExn(x_1695);
  auto x_1699 = ListTailExn(x_1695);
  if (ListIsEmpty(x_1699)) {
    OutputChangeMetric(layout_size_x_1639(ListNthExn(x_1696->children, x_1698)));
    auto x_1700 = ListSplitN(x_1696->children, x_1698);
    x_1696->children = ListAppend(Zro(x_1700), ListTailExn(Fst(x_1700)));
    return MakeUnit();
  } else {
    return x_1694(x_1699, ListNthExn(x_1696->children, x_1698), x_1697);
  }
}
Unit remove_layout_node_x_1675(const auto &x_1695, const auto &x_1696, const auto &x_1697) {
  return x_1694(x_1695, x_1696, x_1697);
}
Unit x_1701(const auto &x_1702, const auto &x_1703, const auto &x_1704) {
  return ListMatch(
      x_1702,
      [&](const auto &x_1707) {
        auto x_1708 = Zro(x_1704);
        auto x_1709 = Zro(x_1708);
        auto x_1710 = Fst(x_1708);
        auto x_1711 = Fst(x_1704);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3368 = x_1709;
        if (x_3368 == "attributes") {
          std::string x_3369 = x_1710;
          if (x_3369 == "width") {
            WriteMetric();
            HashtblAddExn(x_1703->attr, std::string("width"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3369 == "image_height") {
            WriteMetric();
            HashtblAddExn(x_1703->attr, std::string("image_height"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3369 == "image_width") {
            WriteMetric();
            HashtblAddExn(x_1703->attr, std::string("image_width"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3369 == "height") {
            WriteMetric();
            HashtblAddExn(x_1703->attr, std::string("height"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3369 == "viewBox") {
            WriteMetric();
            HashtblAddExn(x_1703->attr, std::string("viewBox"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3368 == "properties") {
          std::string x_3370 = x_1710;
          if (x_3370 == "width") {
            WriteMetric();
            HashtblAddExn(x_1703->prop, std::string("width"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3370 == "flex-grow") {
            WriteMetric();
            HashtblAddExn(x_1703->prop, std::string("flex-grow"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3370 == "height") {
            WriteMetric();
            HashtblAddExn(x_1703->prop, std::string("height"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3370 == "display") {
            WriteMetric();
            HashtblAddExn(x_1703->prop, std::string("display"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3370 == "position") {
            WriteMetric();
            HashtblAddExn(x_1703->prop, std::string("position"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3370 == "flex-shrink") {
            WriteMetric();
            HashtblAddExn(x_1703->prop, std::string("flex-shrink"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3370 == "flex-direction") {
            WriteMetric();
            HashtblAddExn(x_1703->prop, std::string("flex-direction"), x_1711);
            if (HashtblContain(x_1703->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1703->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1703);
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
      [&](const auto &x_1705, const auto &x_1706) {
        return x_1701(x_1706, ListNthExn(x_1703->children, x_1705), x_1704);
      });
}
Unit insert_value_x_1673(const auto &x_1702, const auto &x_1703, const auto &x_1704) {
  return x_1701(x_1702, x_1703, x_1704);
}
Unit x_1713(const auto &x_1714, const auto &x_1715, const auto &x_1716) {
  return ListMatch(
      x_1714,
      [&](const auto &x_1719) {
        auto x_1720 = Zro(x_1716);
        auto x_1721 = Fst(x_1716);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3371 = x_1720;
        if (x_3371 == "attributes") {
          std::string x_3372 = x_1721;
          if (x_3372 == "width") {
            WriteMetric();
            HashtblForceRemove(x_1715->attr, std::string("width"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3372 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_1715->attr, std::string("image_height"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3372 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_1715->attr, std::string("image_width"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3372 == "height") {
            WriteMetric();
            HashtblForceRemove(x_1715->attr, std::string("height"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3372 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_1715->attr, std::string("viewBox"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3371 == "properties") {
          std::string x_3373 = x_1721;
          if (x_3373 == "width") {
            WriteMetric();
            HashtblForceRemove(x_1715->prop, std::string("width"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3373 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_1715->prop, std::string("flex-grow"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3373 == "height") {
            WriteMetric();
            HashtblForceRemove(x_1715->prop, std::string("height"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3373 == "display") {
            WriteMetric();
            HashtblForceRemove(x_1715->prop, std::string("display"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3373 == "position") {
            WriteMetric();
            HashtblForceRemove(x_1715->prop, std::string("position"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3373 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_1715->prop, std::string("flex-shrink"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3373 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_1715->prop, std::string("flex-direction"));
            if (HashtblContain(x_1715->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1715->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1715);
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
      [&](const auto &x_1717, const auto &x_1718) {
        return x_1713(x_1718, ListNthExn(x_1715->children, x_1717), x_1716);
      });
}
Unit delete_value_x_1671(const auto &x_1714, const auto &x_1715, const auto &x_1716) {
  return x_1713(x_1714, x_1715, x_1716);
}
Unit x_1722(const auto &x_1723, const auto &x_1724, const auto &x_1725) {
  return ListMatch(
      x_1723,
      [&](const auto &x_1728) {
        auto x_1729 = Zro(x_1725);
        auto x_1730 = Zro(x_1729);
        auto x_1731 = Fst(x_1729);
        auto x_1732 = Fst(x_1725);
        InputChangeMetric(static_cast<int64_t>(1));
        std::string x_3374 = x_1730;
        if (x_3374 == "attributes") {
          std::string x_3375 = x_1731;
          if (x_3375 == "width") {
            WriteMetric();
            HashtblForceRemove(x_1724->attr, std::string("width"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->attr, std::string("width"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3375 == "image_height") {
            WriteMetric();
            HashtblForceRemove(x_1724->attr, std::string("image_height"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->attr, std::string("image_height"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3375 == "image_width") {
            WriteMetric();
            HashtblForceRemove(x_1724->attr, std::string("image_width"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->attr, std::string("image_width"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3375 == "height") {
            WriteMetric();
            HashtblForceRemove(x_1724->attr, std::string("height"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->attr, std::string("height"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3375 == "viewBox") {
            WriteMetric();
            HashtblForceRemove(x_1724->attr, std::string("viewBox"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->attr, std::string("viewBox"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else {
            return MakeUnit();
          }
        } else if (x_3374 == "properties") {
          std::string x_3376 = x_1731;
          if (x_3376 == "width") {
            WriteMetric();
            HashtblForceRemove(x_1724->prop, std::string("width"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->prop, std::string("width"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3376 == "flex-grow") {
            WriteMetric();
            HashtblForceRemove(x_1724->prop, std::string("flex-grow"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->prop, std::string("flex-grow"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3376 == "height") {
            WriteMetric();
            HashtblForceRemove(x_1724->prop, std::string("height"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->prop, std::string("height"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_0"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3376 == "display") {
            WriteMetric();
            HashtblForceRemove(x_1724->prop, std::string("display"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->prop, std::string("display"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3376 == "position") {
            WriteMetric();
            HashtblForceRemove(x_1724->prop, std::string("position"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->prop, std::string("position"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3376 == "flex-shrink") {
            WriteMetric();
            HashtblForceRemove(x_1724->prop, std::string("flex-shrink"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->prop, std::string("flex-shrink"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            return MakeUnit();
          } else if (x_3376 == "flex-direction") {
            WriteMetric();
            HashtblForceRemove(x_1724->prop, std::string("flex-direction"));
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
            } else {
              MetaWriteMetric();
            }
            WriteMetric();
            HashtblAddExn(x_1724->prop, std::string("flex-direction"), x_1732);
            if (HashtblContain(x_1724->meta->ProcInited, std::string("pass_0"))) {
              HashtblSet(x_1724->meta->BBDirtied, std::string("bb_1"), true);
              set_recursive_proc_dirtied_x_1712(x_1724);
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
      [&](const auto &x_1726, const auto &x_1727) {
        return x_1722(x_1727, ListNthExn(x_1724->children, x_1726), x_1725);
      });
}
Unit replace_value_x_1669(const auto &x_1723, const auto &x_1724, const auto &x_1725) {
  return x_1722(x_1723, x_1724, x_1725);
}
Unit x_1733(const auto &x_1734, const auto &x_1735, const auto &x_1736) {
  auto x_1737 = ListHeadExn(x_1734);
  auto x_1738 = ListTailExn(x_1734);
  if (ListIsEmpty(x_1738)) {
    InputChangeMetric(IntAdd(node_size_x_1640(ListNthExn(x_1735->children, x_1737)), node_size_x_1640(x_1736)));
    auto x_1739 = ListSplitN(x_1735->children, x_1737);
    auto x_1740 = Zro(x_1739);
    auto x_1741 = Fst(x_1739);
    auto x_1742 = ListHeadExn(x_1741);
    auto x_1743 = ListTailExn(x_1741);
    x_1735->children = ListAppend(x_1740, x_1743);
    OptionMatch(
        x_1742->prev, [&](const auto &x_1745) { return MakeUnit(); },
        [&](const auto &x_1744) {
          x_1744->next = ToPath(x_1742->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1742->next, [&](const auto &x_1747) { return MakeUnit(); },
        [&](const auto &x_1746) {
          x_1746->prev = ToPath(x_1742->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1740)) {
      x_1735->first = ToPath(ListHead(x_1743));
    }
    if (ListIsEmpty(x_1743)) {
      x_1735->last = ToPath(ListLast(x_1740));
    }
    OptionMatch(
        x_1742->next, [&](const auto &x_1749) { return MakeUnit(); },
        [&](const auto &x_1748) {
          if (HashtblContain(x_1748->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1748->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_1712(x_1748);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1735->children)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1743)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1742->next, [&](const auto &x_1751) { return MakeUnit(); },
        [&](const auto &x_1750) {
          if (HashtblContain(x_1750->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1750->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_1712(x_1750);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1735->children)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1743)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1742->next, [&](const auto &x_1754) { return MakeUnit(); },
        [&](const auto &x_1753) {
          if (HashtblContain(x_1753->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_1753->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_1752(x_1753);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    auto x_1755 = ListSplitN(x_1735->children, x_1737);
    auto x_1756 = Zro(x_1755);
    auto x_1757 = Fst(x_1755);
    x_1735->children = ListAppend(x_1756, Cons(x_1736, x_1757));
    if (ListIsEmpty(x_1756)) {
      x_1735->first = x_1736.get();
    }
    if (ListIsEmpty(x_1757)) {
      x_1735->last = x_1736.get();
    }
    OptionMatch(
        ListLast(x_1756),
        [&](const auto &x_1759) {
          x_1736->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1758) {
          x_1736->prev = x_1758.get();
          x_1758->next = x_1736.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1757),
        [&](const auto &x_1761) {
          x_1736->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1760) {
          x_1736->next = x_1760.get();
          x_1760->prev = x_1736.get();
          return MakeUnit();
        });
    x_1736->parent = x_1735.get();
    HashtblAddExn(x_1736->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    set_recursive_proc_dirtied_x_1712(x_1736);
    OptionMatch(
        x_1736->next, [&](const auto &x_1763) { return MakeUnit(); },
        [&](const auto &x_1762) {
          if (HashtblContain(x_1762->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1762->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_1712(x_1762);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1735->children)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1757)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1736->next, [&](const auto &x_1765) { return MakeUnit(); },
        [&](const auto &x_1764) {
          if (HashtblContain(x_1764->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1764->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_1712(x_1764);
          } else {
            return MetaWriteMetric();
          }
        });
    HashtblAddExn(x_1736->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    set_recursive_proc_dirtied_x_1752(x_1736);
    if (ListIsSingleton(x_1735->children)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1757)) {
      if (HashtblContain(x_1735->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1735->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1735);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1736->next, [&](const auto &x_1767) { return MakeUnit(); },
        [&](const auto &x_1766) {
          if (HashtblContain(x_1766->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_1766->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_1752(x_1766);
          } else {
            return MetaWriteMetric();
          }
        });
    MakeUnit();
    return MakeUnit();
  } else {
    return x_1733(x_1738, ListNthExn(x_1735->children, x_1737), x_1736);
  }
}
Unit replace_node_x_1667(const auto &x_1734, const auto &x_1735, const auto &x_1736) {
  return x_1733(x_1734, x_1735, x_1736);
}
Unit x_1768(const auto &x_1769) {
  ListIter2(x_1769->children, [&](const auto &x_1770, const auto &x_1771) {
    x_1770->parent = x_1769.get();
    x_1771->parent = x_1769.get();
    x_1770->next = x_1771.get();
    x_1771->prev = x_1770.get();
    x_1768(x_1770);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1769->children),
      [&](const auto &x_1773) {
        x_1769->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1772) {
        x_1769->first = x_1772.get();
        x_1772->parent = x_1769.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1769->children),
      [&](const auto &x_1775) {
        x_1769->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1774) {
        x_1769->last = x_1774.get();
        x_1774->parent = x_1769.get();
        x_1768(x_1774);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1665(const auto &x_1769) { return x_1768(x_1769); }
Unit x_1776(const auto &x_1777, const auto &x_1778, const auto &x_1779) {
  auto x_1780 = ListHeadExn(x_1777);
  auto x_1781 = ListTailExn(x_1777);
  if (ListIsEmpty(x_1781)) {
    InputChangeMetric(node_size_x_1640(ListNthExn(x_1778->children, x_1780)));
    auto x_1782 = ListSplitN(x_1778->children, x_1780);
    auto x_1783 = Zro(x_1782);
    auto x_1784 = Fst(x_1782);
    auto x_1785 = ListHeadExn(x_1784);
    auto x_1786 = ListTailExn(x_1784);
    x_1778->children = ListAppend(x_1783, x_1786);
    OptionMatch(
        x_1785->prev, [&](const auto &x_1788) { return MakeUnit(); },
        [&](const auto &x_1787) {
          x_1787->next = ToPath(x_1785->next);
          return MakeUnit();
        });
    OptionMatch(
        x_1785->next, [&](const auto &x_1790) { return MakeUnit(); },
        [&](const auto &x_1789) {
          x_1789->prev = ToPath(x_1785->prev);
          return MakeUnit();
        });
    if (ListIsEmpty(x_1783)) {
      x_1778->first = ToPath(ListHead(x_1786));
    }
    if (ListIsEmpty(x_1786)) {
      x_1778->last = ToPath(ListLast(x_1783));
    }
    OptionMatch(
        x_1785->next, [&](const auto &x_1792) { return MakeUnit(); },
        [&](const auto &x_1791) {
          if (HashtblContain(x_1791->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1791->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_1712(x_1791);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1778->children)) {
      if (HashtblContain(x_1778->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1778->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1778);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1786)) {
      if (HashtblContain(x_1778->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1778->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1778);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1785->next, [&](const auto &x_1794) { return MakeUnit(); },
        [&](const auto &x_1793) {
          if (HashtblContain(x_1793->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1793->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_1712(x_1793);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsEmpty(x_1778->children)) {
      if (HashtblContain(x_1778->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1778->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1778);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1786)) {
      if (HashtblContain(x_1778->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1778->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1778);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1785->next, [&](const auto &x_1796) { return MakeUnit(); },
        [&](const auto &x_1795) {
          if (HashtblContain(x_1795->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_1795->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_1752(x_1795);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1776(x_1781, ListNthExn(x_1778->children, x_1780), x_1779);
  }
}
Unit remove_node_x_1663(const auto &x_1777, const auto &x_1778, const auto &x_1779) {
  return x_1776(x_1777, x_1778, x_1779);
}
Unit x_1797(const auto &x_1798) {
  MetaReadMetric();
  if (HashtblFindExn(x_1798->meta->RecursiveProcDirtied, std::string("pass_1"))) {
    if (HashtblContain(x_1798->meta->ProcInited, std::string("pass_1"))) {
      if (HashtblFindExn(x_1798->meta->BBDirtied, std::string("bb_2"))) {
        eval_stmts_x_1799(x_1798);
        HashtblSet(x_1798->meta->BBDirtied, std::string("bb_2"), false);
      }
      ListIter(x_1798->children, [&](const auto &x_1800) { return x_1797(x_1800); });
      MakeUnit();
    } else {
      HashtblAddExn(x_1798->meta->ProcInited, std::string("pass_1"), MakeUnit());
      eval_stmts_x_1653(x_1798);
    }
  }
  HashtblSet(x_1798->meta->RecursiveProcDirtied, std::string("pass_1"), false);
  return MakeUnit();
}
Unit recalculate_internal_x_1661(const auto &x_1798) { return x_1797(x_1798); }
Unit x_1801(const auto &x_1802) {
  MetaReadMetric();
  if (HashtblFindExn(x_1802->meta->RecursiveProcDirtied, std::string("pass_0"))) {
    if (HashtblContain(x_1802->meta->ProcInited, std::string("pass_0"))) {
      if (HashtblFindExn(x_1802->meta->BBDirtied, std::string("bb_1"))) {
        eval_stmts_x_1803(x_1802);
        HashtblSet(x_1802->meta->BBDirtied, std::string("bb_1"), false);
      }
      ListIter(x_1802->children, [&](const auto &x_1804) { return x_1801(x_1804); });
      if (HashtblFindExn(x_1802->meta->BBDirtied, std::string("bb_0"))) {
        eval_stmts_x_1805(x_1802);
        HashtblSet(x_1802->meta->BBDirtied, std::string("bb_0"), false);
      }
      MakeUnit();
    } else {
      HashtblAddExn(x_1802->meta->ProcInited, std::string("pass_0"), MakeUnit());
      eval_stmts_x_1652(x_1802);
    }
  }
  HashtblSet(x_1802->meta->RecursiveProcDirtied, std::string("pass_0"), false);
  return MakeUnit();
}
Unit recalculate_internal_x_1660(const auto &x_1802) { return x_1801(x_1802); }
Unit x_1806(const auto &x_1807, const auto &x_1808, const auto &x_1809) {
  auto x_1810 = ListHeadExn(x_1807);
  auto x_1811 = ListTailExn(x_1807);
  if (ListIsEmpty(x_1811)) {
    InputChangeMetric(node_size_x_1640(x_1809));
    auto x_1812 = ListSplitN(x_1808->children, x_1810);
    auto x_1813 = Zro(x_1812);
    auto x_1814 = Fst(x_1812);
    x_1808->children = ListAppend(x_1813, Cons(x_1809, x_1814));
    if (ListIsEmpty(x_1813)) {
      x_1808->first = x_1809.get();
    }
    if (ListIsEmpty(x_1814)) {
      x_1808->last = x_1809.get();
    }
    OptionMatch(
        ListLast(x_1813),
        [&](const auto &x_1816) {
          x_1809->prev = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1815) {
          x_1809->prev = x_1815.get();
          x_1815->next = x_1809.get();
          return MakeUnit();
        });
    OptionMatch(
        ListHead(x_1814),
        [&](const auto &x_1818) {
          x_1809->next = nullptr;
          return MakeUnit();
        },
        [&](const auto &x_1817) {
          x_1809->next = x_1817.get();
          x_1817->prev = x_1809.get();
          return MakeUnit();
        });
    x_1809->parent = x_1808.get();
    HashtblAddExn(x_1809->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    set_recursive_proc_dirtied_x_1712(x_1809);
    OptionMatch(
        x_1809->next, [&](const auto &x_1820) { return MakeUnit(); },
        [&](const auto &x_1819) {
          if (HashtblContain(x_1819->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1819->meta->BBDirtied, std::string("bb_1"), true);
            return set_recursive_proc_dirtied_x_1712(x_1819);
          } else {
            return MetaWriteMetric();
          }
        });
    if (ListIsSingleton(x_1808->children)) {
      if (HashtblContain(x_1808->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1808->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1808);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1814)) {
      if (HashtblContain(x_1808->meta->ProcInited, std::string("pass_0"))) {
        HashtblSet(x_1808->meta->BBDirtied, std::string("bb_0"), true);
        set_recursive_proc_dirtied_x_1712(x_1808);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1809->next, [&](const auto &x_1822) { return MakeUnit(); },
        [&](const auto &x_1821) {
          if (HashtblContain(x_1821->meta->ProcInited, std::string("pass_0"))) {
            HashtblSet(x_1821->meta->BBDirtied, std::string("bb_0"), true);
            return set_recursive_proc_dirtied_x_1712(x_1821);
          } else {
            return MetaWriteMetric();
          }
        });
    HashtblAddExn(x_1809->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    set_recursive_proc_dirtied_x_1752(x_1809);
    if (ListIsSingleton(x_1808->children)) {
      if (HashtblContain(x_1808->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1808->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1808);
      } else {
        MetaWriteMetric();
      }
    }
    if (ListIsEmpty(x_1814)) {
      if (HashtblContain(x_1808->meta->ProcInited, std::string("pass_1"))) {
        HashtblSet(x_1808->meta->BBDirtied, std::string("bb_2"), true);
        set_recursive_proc_dirtied_x_1752(x_1808);
      } else {
        MetaWriteMetric();
      }
    }
    OptionMatch(
        x_1809->next, [&](const auto &x_1824) { return MakeUnit(); },
        [&](const auto &x_1823) {
          if (HashtblContain(x_1823->meta->ProcInited, std::string("pass_1"))) {
            HashtblSet(x_1823->meta->BBDirtied, std::string("bb_2"), true);
            return set_recursive_proc_dirtied_x_1752(x_1823);
          } else {
            return MetaWriteMetric();
          }
        });
    return MakeUnit();
  } else {
    return x_1806(x_1811, ListNthExn(x_1808->children, x_1810), x_1809);
  }
}
Unit add_node_x_1659(const auto &x_1807, const auto &x_1808, const auto &x_1809) {
  return x_1806(x_1807, x_1808, x_1809);
}
Unit x_1825(const auto &x_1826) {
  ListIter2(x_1826->children, [&](const auto &x_1827, const auto &x_1828) {
    x_1827->parent = x_1826.get();
    x_1828->parent = x_1826.get();
    x_1827->next = x_1828.get();
    x_1828->prev = x_1827.get();
    x_1825(x_1827);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1826->children),
      [&](const auto &x_1830) {
        x_1826->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1829) {
        x_1826->first = x_1829.get();
        x_1829->parent = x_1826.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1826->children),
      [&](const auto &x_1832) {
        x_1826->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1831) {
        x_1826->last = x_1831.get();
        x_1831->parent = x_1826.get();
        x_1825(x_1831);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1657(const auto &x_1826) { return x_1825(x_1826); }
Unit eval_stmts_x_1653(const auto &x_1833) {
  HashtblSet(x_1833->meta->BBDirtied, std::string("bb_2"), false);
  eval_stmts_x_1799(x_1833);
  ListIter(x_1833->children, [&](const auto &x_1834) {
    HashtblAddExn(x_1834->meta->ProcInited, std::string("pass_1"), MakeUnit());
    HashtblAddExn(x_1834->meta->RecursiveProcDirtied, std::string("pass_1"), false);
    eval_stmts_x_1653(x_1834);
    return MakeUnit();
  });
  return MakeUnit();
}
Unit eval_stmts_x_1652(const auto &x_1835) {
  HashtblSet(x_1835->meta->BBDirtied, std::string("bb_1"), false);
  eval_stmts_x_1803(x_1835);
  ListIter(x_1835->children, [&](const auto &x_1836) {
    HashtblAddExn(x_1836->meta->ProcInited, std::string("pass_0"), MakeUnit());
    HashtblAddExn(x_1836->meta->RecursiveProcDirtied, std::string("pass_0"), false);
    eval_stmts_x_1652(x_1836);
    return MakeUnit();
  });
  HashtblSet(x_1835->meta->BBDirtied, std::string("bb_0"), false);
  eval_stmts_x_1805(x_1835);
  return MakeUnit();
}
Unit x_1837(const auto &x_1838) {
  ListIter2(x_1838->children, [&](const auto &x_1839, const auto &x_1840) {
    x_1839->parent = x_1838.get();
    x_1840->parent = x_1838.get();
    x_1839->next = x_1840.get();
    x_1840->prev = x_1839.get();
    x_1837(x_1839);
    return MakeUnit();
  });
  OptionMatch(
      ListHead(x_1838->children),
      [&](const auto &x_1842) {
        x_1838->first = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1841) {
        x_1838->first = x_1841.get();
        x_1841->parent = x_1838.get();
        return MakeUnit();
      });
  OptionMatch(
      ListLast(x_1838->children),
      [&](const auto &x_1844) {
        x_1838->last = nullptr;
        return MakeUnit();
      },
      [&](const auto &x_1843) {
        x_1838->last = x_1843.get();
        x_1843->parent = x_1838.get();
        x_1837(x_1843);
        return MakeUnit();
      });
  return MakeUnit();
}
Unit set_children_relation_x_1649(const auto &x_1838) { return x_1837(x_1838); }
int64_t x_1845(const auto &x_1846) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1846->children, [&](const auto &x_1847) { return x_1845(x_1847); }));
}
int64_t node_size_x_1640(const auto &x_1846) { return x_1845(x_1846); }
int64_t x_1848(const auto &x_1849) {
  return IntAdd(static_cast<int64_t>(1),
                ListIntSum(x_1849->children, [&](const auto &x_1850) { return x_1848(x_1850); }));
}
int64_t layout_size_x_1639(const auto &x_1849) { return x_1848(x_1849); }
LayoutNode x_1851(const auto &x_1852) {
  return MakeLayoutNode(ListMap(JsonToList(JsonMember(std::string("children"), x_1852)),
                                [&](const auto &x_1853) { return x_1851(x_1853); }));
}
LayoutNode json_to_layout_node_x_1638(const auto &x_1852) { return x_1851(x_1852); }
Node x_1854(const auto &x_1855) {
  return MakeNode(x_1855->name, x_1855->attr, x_1855->prop, x_1855->extern_id,
                  ListMap(x_1855->children, [&](const auto &x_1856) { return x_1854(x_1856); }));
}
Node node_to_fs_node_x_1637(const auto &x_1855) { return x_1854(x_1855); }
Node x_1857(const auto &x_1858) {
  return MakeNode(
      JsonToString(JsonMember(std::string("name"), x_1858)), JsonToDict(JsonMember(std::string("attributes"), x_1858)),
      JsonToDict(JsonMember(std::string("properties"), x_1858)), JsonToInt(JsonMember(std::string("id"), x_1858)),
      ListMap(JsonToList(JsonMember(std::string("children"), x_1858)),
              [&](const auto &x_1859) { return x_1857(x_1859); }));
}
Node json_to_node_aux_x_1636(const auto &x_1858) { return x_1857(x_1858); }
int main() {
  WithOutFile(std::string("hn_type.out"), [&](const auto &x_1641) {
    PrintEndline(std::string("RUNNING DB_D"));
    return WithInFile(std::string("command.json"), [&](const auto &x_1642) {
      auto x_1643 = MakeRef(static_cast<int64_t>(0));
      auto x_1644 = FreshMetric();
      auto x_1645 = JsonOfString(InputLine(x_1642));
      auto x_1646 = JsonOfString(InputLine(x_1642));
      auto x_1647 = MakeStack();
      PushStack(x_1647, x_1645);
      PushStack(x_1647, x_1646);
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_1645)), std::string("init")));
      Assert(StringEqual(JsonToString(JsonMember(std::string("name"), x_1646)), std::string("layout_init")));
      auto x_1650 = [&]() {
        auto x_1648 = json_to_node_aux_x_1636(JsonMember(std::string("node"), x_1645));
        x_1648->parent = nullptr;
        x_1648->prev = nullptr;
        x_1648->next = nullptr;
        set_children_relation_x_1649(x_1648);
        return x_1648;
      }();
      auto x_1651 = json_to_layout_node_x_1638(JsonMember(std::string("node"), x_1646));
      OutputChangeMetric(layout_size_x_1639(x_1651));
      InputChangeMetric(node_size_x_1640(x_1650));
      HashtblAddExn(x_1650->meta->ProcInited, std::string("pass_0"), MakeUnit());
      HashtblAddExn(x_1650->meta->RecursiveProcDirtied, std::string("pass_0"), false);
      eval_stmts_x_1652(x_1650);
      HashtblAddExn(x_1650->meta->ProcInited, std::string("pass_1"), MakeUnit());
      HashtblAddExn(x_1650->meta->RecursiveProcDirtied, std::string("pass_1"), false);
      eval_stmts_x_1653(x_1650);
      JsonToChannel(x_1641, [&]() {
        auto x_3377 = FreshJson();
        WriteJson(x_3377, std::string("name"), std::string("DB_D"));
        WriteJson(x_3377, std::string("diff_num"), ReadRef(x_1643));
        WriteJson(x_3377, std::string("read_count"), MetricReadCount());
        WriteJson(x_3377, std::string("meta_read_count"), MetricMetaReadCount());
        WriteJson(x_3377, std::string("write_count"), MetricWriteCount());
        WriteJson(x_3377, std::string("meta_write_count"), MetricMetaWriteCount());
        WriteJson(x_3377, std::string("queue_size_acc"), MetricQueueSizeAcc());
        WriteJson(x_3377, std::string("input_change_count"), MetricInputChangeCount());
        WriteJson(x_3377, std::string("output_change_count"), MetricOutputChangeCount());
        WriteJson(x_3377, std::string("html"), std::string(""));
        WriteJson(x_3377, std::string("command"), StackToList(x_1647));
        return x_3377;
      }());
      OutputString(x_1641, std::string("\n"));
      ClearStack(x_1647);
      WriteRef(x_1643, IntAdd(ReadRef(x_1643), static_cast<int64_t>(1)));
      ResetMetric();
      PrintEndline(std::string("EVAL OK!"));
      IterLines(x_1642, [&](const auto &x_1654) {
        auto x_1655 = JsonOfString(x_1654);
        PushStack(x_1647, x_1655);
        std::string x_3379 = JsonToString(JsonMember(std::string("name"), x_1655));
        if (x_3379 == "add") {
          return add_node_x_1659(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                         [&](const auto &x_1658) { return JsonToInt(x_1658); }),
                                 x_1650, [&]() {
                                   auto x_1656 = json_to_node_aux_x_1636(JsonMember(std::string("node"), x_1655));
                                   x_1656->parent = nullptr;
                                   x_1656->prev = nullptr;
                                   x_1656->next = nullptr;
                                   set_children_relation_x_1657(x_1656);
                                   return x_1656;
                                 }());
        } else if (x_3379 == "recalculate") {
          recalculate_internal_x_1660(x_1650);
          recalculate_internal_x_1661(x_1650);
          JsonToChannel(x_1641, [&]() {
            auto x_3378 = FreshJson();
            WriteJson(x_3378, std::string("name"), std::string("DB_D"));
            WriteJson(x_3378, std::string("diff_num"), ReadRef(x_1643));
            WriteJson(x_3378, std::string("read_count"), MetricReadCount());
            WriteJson(x_3378, std::string("meta_read_count"), MetricMetaReadCount());
            WriteJson(x_3378, std::string("write_count"), MetricWriteCount());
            WriteJson(x_3378, std::string("meta_write_count"), MetricMetaWriteCount());
            WriteJson(x_3378, std::string("queue_size_acc"), MetricQueueSizeAcc());
            WriteJson(x_3378, std::string("input_change_count"), MetricInputChangeCount());
            WriteJson(x_3378, std::string("output_change_count"), MetricOutputChangeCount());
            WriteJson(x_3378, std::string("html"), std::string(""));
            WriteJson(x_3378, std::string("command"), StackToList(x_1647));
            return x_3378;
          }());
          OutputString(x_1641, std::string("\n"));
          ClearStack(x_1647);
          WriteRef(x_1643, IntAdd(ReadRef(x_1643), static_cast<int64_t>(1)));
          ResetMetric();
          return MakeUnit();
        } else if (x_3379 == "remove") {
          return remove_node_x_1663(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                            [&](const auto &x_1662) { return JsonToInt(x_1662); }),
                                    x_1650, MakeUnit());
        } else if (x_3379 == "replace") {
          return replace_node_x_1667(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                             [&](const auto &x_1666) { return JsonToInt(x_1666); }),
                                     x_1650, [&]() {
                                       auto x_1664 = json_to_node_aux_x_1636(JsonMember(std::string("node"), x_1655));
                                       x_1664->parent = nullptr;
                                       x_1664->prev = nullptr;
                                       x_1664->next = nullptr;
                                       set_children_relation_x_1665(x_1664);
                                       return x_1664;
                                     }());
        } else if (x_3379 == "replace_value") {
          return replace_value_x_1669(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                              [&](const auto &x_1668) { return JsonToInt(x_1668); }),
                                      x_1650,
                                      MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_1655)),
                                                        JsonToString(JsonMember(std::string("key"), x_1655))),
                                               JsonToValue(JsonMember(std::string("value"), x_1655))));
        } else if (x_3379 == "delete_value") {
          return delete_value_x_1671(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                             [&](const auto &x_1670) { return JsonToInt(x_1670); }),
                                     x_1650,
                                     MakePair(JsonToString(JsonMember(std::string("type"), x_1655)),
                                              JsonToString(JsonMember(std::string("key"), x_1655))));
        } else if (x_3379 == "insert_value") {
          return insert_value_x_1673(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                             [&](const auto &x_1672) { return JsonToInt(x_1672); }),
                                     x_1650,
                                     MakePair(MakePair(JsonToString(JsonMember(std::string("type"), x_1655)),
                                                       JsonToString(JsonMember(std::string("key"), x_1655))),
                                              JsonToValue(JsonMember(std::string("value"), x_1655))));
        } else if (x_3379 == "layout_remove") {
          return remove_layout_node_x_1675(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                                   [&](const auto &x_1674) { return JsonToInt(x_1674); }),
                                           x_1651, MakeUnit());
        } else if (x_3379 == "layout_add") {
          return add_layout_node_x_1677(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                                [&](const auto &x_1676) { return JsonToInt(x_1676); }),
                                        x_1651, json_to_layout_node_x_1638(JsonMember(std::string("node"), x_1655)));
        } else if (x_3379 == "layout_replace") {
          return replace_layout_node_x_1679(ListMap(JsonToList(JsonMember(std::string("path"), x_1655)),
                                                    [&](const auto &x_1678) { return JsonToInt(x_1678); }),
                                            x_1651,
                                            json_to_layout_node_x_1638(JsonMember(std::string("node"), x_1655)));
        } else if (x_3379 == "layout_info_changed") {
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