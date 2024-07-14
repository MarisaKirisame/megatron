#include <cstddef>
#include <string>
#include <cassert>
#include <iostream>
struct Unit {

};
struct Metric {
    size_t write_count = 0;
    size_t input_change_count = 0;
    size_t output_change_count = 0;
    size_t queue_size_acc = 0;
    size_t meta_read_count = 0;
    size_t meta_write_count = 0;
} m;
int FreshMetric() {
    return 0;
}
void WriteMetric() {
    m.write_count += 1;
}
void InputChangeMetric(size_t i) {
    m.input_change_count += i;
}
void OutputChangeMetric(size_t i) {
    m.output_change_count += i;
}
size_t MetricQueueSizeAcc() {
    return m.queue_size_acc;
}
size_t MetricMetaWriteCount() {
    return m.meta_write_count;
}
size_t MetricWriteCount() {
    return m.write_count;
}
size_t MetricMetaReadCount() {
    return m.meta_read_count;
}
void Panic() {
    assert(false);
}
void PrintEndline(const std::string & str) {
    std::cout << str << std::endl;
}
Unit MakeUnit() {
    return Unit {};
}