#include <cassert>
#include "map.h"

static const char map[] = "0000222223220000"\
                        "1    4      3  5"\
                        "1    40     4445"\
                        "1     0        5"\
                        "0444  3        5"\
                        "0     1        5"\
                        "0     1222     5"\
                        "0       5   4445"\
                        "5    1555   1  5"\
                        "5           5554"\
                        "0  244422      4"\
                        "2       1111   4"\
                        "0              4"\
                        "0  2       55554"\
                        "0  2       3   4"\
                        "0002222244444444";

Map::Map() : w(16), h(16) {
    assert(sizeof(map) == w * h + 1);
}

int Map::get(const size_t i, const size_t j) const {
    assert(i < w&& j < h && sizeof(map) == w * h + 1);
    return map[i + j * w] - '0';
}

bool Map::is_empty(const size_t i, const size_t j) const {
    assert(i < w&& j < h && sizeof(map) == w * h + 1);
    return map[i + j * w] == ' ';
}