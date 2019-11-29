#ifndef __FLOOR_TEST_HPP__
#define __FLOOR_TEST_HPP__

#include "gtest/gtest.h"
#include "floor.hpp"


TEST(FloorTest, FloorTestDouble){
  Base* doublen = new Op (5.5);
  Base* intn = new Op (2);
  Div* test = new Div(doublen,intn);
  EXPECT_EQ(floor(test->evaluate()), 2);

}

TEST(FloorTest, FloorTestInt){

 Base* int5 = new Op (5);
 EXPECT_EQ(floor(int5->evaluate()), 5);

}

TEST(FloorTest, FloorTestUnderHalf){

 Base* under = new Op(2.1);
 EXPECT_EQ(floor(under->evaluate()),2);
}


TEST(FloorTest, FloorTestAboveHalf){

 Base* above = new Op(2.7);
 EXPECT_EQ(floor(above->evaluate()),2);
}


#endif
