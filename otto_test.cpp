#include <cstdio>
#include <vector>
#include <random>
#include <cassert>
#include <otto.h>

// Expected size: ~119 nodes
typedef total_order<1.1, uint8_t> too;

int main()
{
  too to;
  printf("Label bits : %llu\n", to._label_bits);
  printf("List size  : %llu\n", to._list_size);
  printf("Gap size   : %llu\n", to._gap_size);
  printf("Max label  : %llu\n", to._max_label);
  printf("End label  : %llu\n", to._end_label);

  std::random_device rd;
  std::mt19937_64 gen(rd()); 
  

  std::vector<too::node> nodes;
  nodes.push_back(to.smallest());
  for (size_t i = 1; i < 75; i++)
  {
    nodes.push_back(to.insert(nodes[i - 1]));
  }

  std::uniform_int_distribution<size_t> distrib1(0, nodes.size() - 1);

  // 1.
  for (size_t i = 0; i < 100000; i++)
  {
    size_t a = distrib1(gen);
    size_t b = distrib1(gen);
    assert((a < b) == (nodes[a] < nodes[b]));
  }
  printf("Test 1 passed.\n");

  // 2.
  for (size_t i = 0; i < 100000; i++)
  {
    size_t n = distrib1(gen);
    while (n == 0) {
      n = distrib1(gen);
    }
    size_t a = distrib1(gen);
    while (a == n) {
      a = distrib1(gen);
    }
    size_t b = distrib1(gen);
    while (b == n) {
      b = distrib1(gen);
    }

    to.remove(nodes[n]);
    assert((a < b) == (nodes[a] < nodes[b]));
    nodes[n] = to.insert(nodes[n - 1]);
  }
  printf("Test 2 passed.\n");

  return 0;
}
