#ifndef __TRUNC_TEST_HPP__
#define __TRUNCT_TEST_HPP__


#include "gtest/gtest.h"
#include "trunc.hpp"
#include <iostream>

TEST(TruncateTestSet, TruncateTestAdd){
	Base* one = new Op(1);
	Base* two = new Op(2);
	Base* add = new Add(one,two);
	Base* test = new Truncate(add);
	/*cout << "expect: 3" << endl;
	cout << test->stringify();
	*/
	EXPECT_EQ(test->stringify(),"3.000000");
}

TEST(TruncateTestSet, TruncateTestSub){
	Base* two = new Op(2);
	Base* one = new Op(1);
	Base* sub = new Sub(two,one);
	Base* test = new Truncate(sub);
	EXPECT_EQ(test->stringify(),"1.000000");
}

TEST(TruncateTestSet, TruncateTestMult){
	Base* two = new Op(2);
        Base* mult = new Mult(two,two);
        Base* test = new Truncate(mult);
        EXPECT_EQ(test->stringify(),"4.000000");

}

TEST(TruncateTestSet, TruncateTestDiv){
	Base* six = new Op(6);
        Base* three = new Op(3);
        Base* div = new Div(six,three);
        Base* test = new Truncate(div);
        EXPECT_EQ(test->stringify(),"2.000000");

}

#endif
