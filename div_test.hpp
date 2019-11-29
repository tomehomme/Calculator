#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "Div.hpp"

TEST(DivTest, DivEvaluateNonZero) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Div* test = new Div(two,three);
    EXPECT_EQ(test->evaluate(), static_cast<double>(2)/3);
}

TEST(DivTest, DivEvaluateZeros) {
    Base* zero = new Op(0);
    Base* one = new Op(1);
    Div* test = new Div(zero,one);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, DivEvaluateOne) {
    Base* two = new Op(2);
    Div* test = new Div(two,two);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(DivTest, DivEvaluateNegative) {
    Base* twoNeg = new Op(-2);
    Base* three = new Op(3);
    Div* test = new Div(twoNeg,three);
    EXPECT_EQ(test->evaluate(), static_cast<double>(-2)/3);
}

TEST(DivTest, DivEvaluatePositive) {
    Base* twoNeg = new Op(-2);
    Div* test = new Div(twoNeg,twoNeg);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(DivTest, DivEvaluateString) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Div* test = new Div(two,three);
    EXPECT_EQ(test->stringify(), two->stringify()+"/"+three->stringify());
    
}


TEST(DivTest, DivEvaluateDouble){
  Base* doublen = new Op (5.5);
  Base* intn = new Op (2);
  Div* test = new Div(doublen,intn);
  EXPECT_EQ(test->evaluate(), 2.75);
}


#endif
