#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"

#include "rand.hpp"

TEST(RandTest, RandEvaluateNonZero) {
    Rand* test = new Rand();
    double val = test->value;
    EXPECT_EQ(test->evaluate(), val);
}


TEST(RandTest, RandEvaluateString) {
    Rand* test = new Rand();
	double val = test->value;
   EXPECT_EQ(test->stringify(), to_string(val));
}

#endif
