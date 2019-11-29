#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "Sub.hpp"

TEST(SubTest, SubEvaluateNonZero) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Sub* test = new Sub(two,three);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(SubTest, SubEvaluateZeros) {
    Base* zero = new Op(0);
    Sub* test = new Sub(zero,zero);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubEvaluateOne) {
    Base* two = new Op(2);
    Base* one = new Op(1);
    Sub* test = new Sub(two,one);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(SubTest, SubEvaluateNegative) {
    Base* twoNeg = new Op(-2);
    Base* three = new Op(3);
    Sub* test = new Sub(twoNeg,three);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(SubTest, SubEvaluatePositive) {
    Base* twoNeg = new Op(-2);
    Base* two = new Op(2);
    Sub* test = new Sub(two,twoNeg);
    EXPECT_EQ(test->evaluate(), 4);
}

TEST(SubTest, SubEvaluateString) {
  Base* two = new Op(2);
    Base* three = new Op(3);
    Sub* test = new Sub(two,three);
    EXPECT_EQ(test->stringify(), two->stringify()+"-"+three->stringify());
    
}


TEST(SubTest, SubEvaluateDouble){
  Base* doublen = new Op (5.5);
  Base* intn = new Op (2);
  Sub* test = new Sub(doublen,intn);
  EXPECT_EQ(test->evaluate(), 3.5);
}



#endif
