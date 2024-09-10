#include "listv.h"


int main()
{
    listv<uint64_t> lv;
    lv.emplace(lv.begin(), 1);
    lv.emplace(lv.begin(), 2);
    lv.emplace(lv.begin(), 3);
    lv.remove(lv.begin().next());
    lv.emplace(lv.begin(), 4);

    listv<uint64_t> lv2;
    lv2.emplace(lv2.begin(), 11);
    lv2.emplace(lv2.begin(), 12);
    lv2.emplace(lv2.begin(), 13);
    lv2.emplace(lv2.begin(), 14);

    lv.splice(lv.begin().next(), lv2, lv2.begin().next(), lv2.end().prev());
    
    lv.print();
    lv2.print();
}
