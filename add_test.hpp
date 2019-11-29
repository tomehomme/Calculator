#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "Add.hpp"

TEST(AddTest, AddEvaluateNonZero) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Add* test = new Add(two,three);
    EXPECT_EQ(test->evaluate(), 5);
}

TEST(AddTest, AddEvaluateZeros) {
    Base* zero = new Op(0);
    Add* test = new Add(zero,zero);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddEvaluateOne) {
    Base* two = new Op(2);
    Base* one = new Op(1);
    Add* test = new Add(two,one);
    EXPECT_EQ(test->evaluate(), 3);
}

TEST(AddTest, AddEvaluateNegative) {
    Base* twoNeg = new Op(-2);
    Base* three = new Op(-3);
    Add* test = new Add(twoNeg,three);
    EXPECT_EQ(test->evaluate(), -5);
}

TEST(AddTest, AddEvaluatePositive) {
    Base* twoNeg = new Op(-2);
    Base* two = new Op(3);
    Add* test = new Add(twoNeg,two);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(AddTest, AddEvaluateString) {
    Base* two = new Op(2);
    Base* three = new Op(3);
    Add* test = new Add(two,three);
    EXPECT_EQ(test->stringify(), two->stringify()+"+"+three->stringify());
    
}

TEST(AddTest, AddEvaluateDouble){
  Base* doublen = new Op (5.5);
  Base* intn = new Op (2);
  Add* test = new Add(doublen,intn);
  EXPECT_EQ(test->evaluate(), 7.5);
}


#endif

