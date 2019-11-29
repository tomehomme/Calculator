#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, MultEvaluateNonZero) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Mult* test = new Mult(two,three);
    EXPECT_EQ(test->evaluate(), 6);
}

TEST(MultTest, MultEvaluateZeros) {
    Base* zero = new Op(0);
    Mult* test = new Mult(zero,zero);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(MultTest, MultEvaluateOne) {
    Base* two = new Op(2);
    Base* one = new Op(1);
    Mult* test = new Mult(two,one);
    EXPECT_EQ(test->evaluate(), 2);
}

TEST(MultTest, MultEvaluateNegative) {
    Base* twoNeg = new Op(-2);
    Base* three = new Op(3);
    Mult* test = new Mult(twoNeg,three);
    EXPECT_EQ(test->evaluate(), -6);
}

TEST(MultTest, MultEvaluatePositive) {
    Base* twoNeg = new Op(-2);
    Base* two = new Op(-3);
    Mult* test = new Mult(twoNeg,two);
    EXPECT_EQ(test->evaluate(), 6);
}

TEST(MultTest, MultEvaluateString) {
  Base* two = new Op(2);
    Base* three = new Op(3);
    Mult* test = new Mult(two,three);
    EXPECT_EQ(test->stringify(), two->stringify()+"*"+three->stringify());
    
}


TEST(MultTest, MultEvaluateDouble){
  Base* doublen = new Op (5.5);
  Base* intn = new Op (2);
  Mult* test = new Mult(doublen,intn);
  EXPECT_EQ(test->evaluate(), 11);
}


#endif //__MULT_TEST_HPP__
