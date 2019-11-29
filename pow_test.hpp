#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, PowEvaluateNonZero) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Pow* test = new Pow(two,three);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(PowTest, PowEvaluateZeros) {
    Base* zero = new Op(0);
    Pow* test = new Pow(zero,zero);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowEvaluateOne) {
    Base* two = new Op(2);
    Base* one = new Op(1);
    Pow* test = new Pow(two,one);
    EXPECT_EQ(test->evaluate(), 2);
}

TEST(PowTest, PowEvaluateNegative) {
    Base* twoNeg = new Op(-2);
    Base* three = new Op(3);
    Pow* test = new Pow(twoNeg,three);
    EXPECT_EQ(test->evaluate(), -8);
}

TEST(PowTest, PowEvaluatePositive) {
    Base* twoNeg = new Op(-2);
    Base* two = new Op(2);
    Pow* test = new Pow(twoNeg,two);
    EXPECT_EQ(test->evaluate(), 4);
}

TEST(PowTest, PowEvaluateString) {
  Base* two = new Op(2);
    Base* three = new Op(3);
    Pow* test = new Pow(two,three);
    EXPECT_EQ(test->stringify(), two->stringify()+"**"+three->stringify());
    
}


TEST(PowTest, PowEvaluateDouble){
  Base* doublen = new Op (5.5);
  Base* intn = new Op (2);
  Pow* test = new Pow(doublen,intn);
  EXPECT_EQ(test->evaluate(), 30.25);
}

#endif //__POW_TEST_HPP__
