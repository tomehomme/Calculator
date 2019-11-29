#ifndef __ABS_TEST_HPP__
#define __ABS_TEST_HPP__

#include "gtest/gtest.h"
#include "abs.hpp"


TEST(AbsTest, AbsTestPositive){
 Base* operand = new Op(5);
 Base* abs = new Abs(operand);
 EXPECT_EQ(abs->evaluate(), 5);
}


TEST(AbsTest, AbsTestNegative){
 Base* operand = new Op(-5);
 Base* test = new Abs(operand);
 EXPECT_EQ(test->evaluate(), 5);

}

TEST(AbsTest, AbsNegativeDecimal){
 Base* abs = new Abs(new Op(-5.1));
 EXPECT_EQ(abs->evaluate(), 5.1);
}

TEST(AbsTest, AbsPositiveDecimal){
 Base* test = new Abs(new Op(5.1));
 EXPECT_EQ(test->evaluate(), 5.1);
}

#endif
