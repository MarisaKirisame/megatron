#ifdef TRACY_ENABLE
#include <tracy/Tracy.hpp>
#endif

#include <cstdio>
#include <vector>
#include <random>
#include <cassert>
#include <map>
#include <otto.h>

typedef total_order<1.4, uint8_t> too;

struct int_key
{
  int i;

  friend inline bool operator<(const int_key &l, const int_key &r)
  {
    return l.i < r.i;
  }

  inline int compare(const int_key &other) const
  {
    return i - other.i;
  }
};

int main()
{
  too to;

  std::random_device rd;
  std::mt19937_64 gen(rd());

  std::vector<too::node> nodes;
  nodes.push_back(to.smallest());
  for (size_t i = 1; i < 100; i++)
  {
    nodes.push_back(to.insert(nodes[i - 1]));
  }

  std::uniform_int_distribution<size_t> distrib1(0, nodes.size() - 1);

  // 1.
  for (size_t i = 0; i < 100000; i++)
  {
    size_t a = distrib1(gen);
    size_t b = distrib1(gen);
    if ((a < b) != (nodes[a] < nodes[b]))
    {
      printf("Test 1 failed.\n");
      exit(-1);
    }
    if ((static_cast<signed char>(a - b) > 0) != (nodes[a].compare(nodes[b]) > 0))
    {
      printf("Test 1 failed.\n");
      exit(-1);
    }
  }
  printf("Test 1 passed.\n");

#ifdef TRACY_ENABLE
  FrameMark;
#endif

  // 2.
  for (size_t i = 0; i < 100000; i++)
  {
    size_t n = distrib1(gen);
    while (n == 0)
    {
      n = distrib1(gen);
    }
    size_t a = distrib1(gen);
    while (a == n)
    {
      a = distrib1(gen);
    }
    size_t b = distrib1(gen);
    while (b == n)
    {
      b = distrib1(gen);
    }

    to.remove(nodes[n]);

    if ((a < b) != (nodes[a] < nodes[b]))
    {
      printf("Test 2 failed.\n");
      exit(-1);
    }

    nodes[n] = to.insert(nodes[n - 1]);
  }
  printf("Test 2 passed.\n");

#ifdef TRACY_ENABLE
  FrameMark;
#endif

  // 3.
  for (size_t i = 0; i < 100000; i++)
  {
    size_t lo = distrib1(gen);
    while (lo == nodes.size() - 1 || lo == 0)
    {
      lo = distrib1(gen);
    }
    std::uniform_int_distribution<size_t> distrib2(lo + 1, nodes.size() - 1);
    size_t hi = distrib2(gen);

    to.remove(nodes[lo], nodes[hi]);

    for (size_t j = 0; j < 5; j++)
    {
      size_t a = distrib1(gen);
      while (a >= lo && a < hi)
      {
        a = distrib1(gen);
      }
      size_t b = distrib1(gen);
      while (b >= lo && b < hi)
      {
        b = distrib1(gen);
      }
      if ((a < b) != (nodes[a] < nodes[b]))
      {
        printf("Test 3 failed.\n");
        // for (auto it1 = to._l1_nodes.begin(); it1 != to._l1_nodes.end(); it1++)
        // {
        //   printf("!!!! L1 %u:", it1->label);
        //   for (auto it2 = it1->children.begin(); it2 != it1->children.end(); it2++)
        //   {
        //     printf(" %u,", it2->label);
        //   }
        //   printf("\n");
        // }
        exit(-1);
      }
    }

    for (size_t j = lo; j < hi; j++)
    {
      nodes[j] = to.insert(nodes[j - 1]);
    }
  }
  printf("Test 3 passed.\n");

#ifdef TRACY_ENABLE
  FrameMark;
#endif

  std::map<int_key, int> ot;
  rb_tree<int_key, int> rbt;

  std::uniform_int_distribution<int> distrib_rbt(-1000000, 1000000);

  for (size_t i = 0; i < 100; i++)
  {
    int k = distrib_rbt(gen);
    int v = distrib_rbt(gen);
    ot.insert_or_assign(int_key{k}, v);
    rbt.insert(int_key{k}, v);
  }

  for (auto it = ot.begin(); it != ot.end(); it++)
  {
    auto got = rbt.at(it->first);
    if (!got || got.value() != it->second)
    {
      printf("RBT Test 1 failed.\n");
      exit(-1);
    }
  }

  printf("RBT Test 1 passed.\n");

  for (auto it = ot.begin(); it != ot.end(); it++)
  {
    rbt.remove(it->first);
  }

  if (!rbt.empty())
  {
    printf("RBT Test 2 failed.\n");
    exit(-1);
  }

  printf("RBT Test 2 passed.\n");

  return 0;
}
