#ifndef  __PAREN_TEST_HPP__
#define __PAREN_TEST_HPP__


#include "gtest/gtest.h"
#include "paren.hpp"
#include <iostream>

TEST(ParenthesisTestSet, ParenthesisAddCase){
	Base* one = new Op(1);
	Base* two = new Op(2);
	Base* add = new Add(one,two);
	Base* test = new Parenthesis(add);
	EXPECT_EQ(test->stringify(),"(1.000000+2.000000)");
}

TEST(ParenthesisTestSet, ParenthesisSubCase){
        Base* five = new Op(5);
        Base* four = new Op(4);
        Base* sub = new Sub(five,four);
        Base* test = new Parenthesis(sub);
        EXPECT_EQ(test->stringify(),"(5.000000-4.000000)");

} 

TEST(ParenthesisTestSet, ParenthesisMultCase){
        Base* three = new Op(3);
        Base* two = new Op(2);
        Base* mult = new Mult(three,two);
        Base* test = new Parenthesis(mult);
        EXPECT_EQ(test->stringify(),"(3.000000*2.000000)");

}
TEST(ParenthesisTestSet, ParenthesisDivCase){
        Base* nine = new Op(9);
        Base* three = new Op(3);
        Base* div = new Div(nine,three);
        Base* test = new Parenthesis(div);
        EXPECT_EQ(test->stringify(),"(9.000000/3.000000)");

}

#endif
