#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;
using namespace std;
TEST_CASE("simple_test")
{
    const NumberWithUnits b{300, "m"};
    const NumberWithUnits a{2, "km"};
    cout << b;
    CHECK_EQ(a._num, 2);
    CHECK_EQ((-a)._num, -2);
    CHECK_EQ((a + b)._num, 2);
    CHECK_EQ((a - b)._num, 2);
    CHECK_EQ((3 * a)._num, 6);
    // CHECK_EQ((a+=b)._num, 2);
    CHECK_EQ((a > b), false);
    CHECK_EQ((a == b), false);
    CHECK_EQ((a <= b), true);
    CHECK_EQ((a != b), true);

    const NumberWithUnits c{300, "kg"};
    const NumberWithUnits d{2, "ton"};
    CHECK_EQ(d._num, 2);
    CHECK_EQ((-d)._num, -2);
    CHECK_EQ((d + c)._num, 2);
    CHECK_EQ((d - c)._num, 2);
    CHECK_EQ((3 * d)._num, 6);
    // CHECK_EQ((a+=b)._num, 2);
    CHECK_EQ((d > c), false);
    CHECK_EQ((d == c), false);
    CHECK_EQ((d <= c), true);
    CHECK_EQ((d != c), true);

    const NumberWithUnits e{300, "min"};
    const NumberWithUnits f{2, "hour"};
    CHECK_EQ(f._num, 2);
    CHECK_EQ((-f)._num, -2);
    CHECK_EQ((f + e)._num, 2);
    CHECK_EQ((f - e)._num, 2);
    CHECK_EQ((3 * f)._num, 6);
    // CHECK_EQ((a+=b)._num, 2);
    CHECK_EQ((f > e), false);
    CHECK_EQ((f == e), false);
    CHECK_EQ((f <= e), true);
    CHECK_EQ((f != e), true);
}