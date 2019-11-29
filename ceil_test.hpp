#ifndef __CEIL_TEST_HPP__
#define __CEIL_TEST_HPP__


#include "gtest/gtest.h"
#include "ceil.hpp"

TEST(CeilTest, CeilTestDivDouble){
  Base* doublen = new Op (5.5);
  Base* intn = new Op (2);
  Base* test= new Div(doublen, intn);
  Base* ceil = new Ceil(test);
  EXPECT_EQ(ceil->evaluate(), 3);

}


TEST(CeilTest, CeilTestInt){
 Base* operand = new Op(5);
 Base* int5 = new Ceil(operand);
 EXPECT_EQ(int5->evaluate(), 5);

}


TEST(CeilTest, CeilTestUnderHalf){
 Base* operand = new Op(2.1); 
 Base* test = new Ceil(operand);
 EXPECT_EQ(test->evaluate(), 3);

}


TEST(CeilTest, CeilTestAboveHalf){
 Base* operand = new Op(2.7);
 Base* test = new Ceil(operand);
 EXPECT_EQ(test->evaluate(), 3);


}

#endif
