#ifndef __VISITOR_TEST_HPP__
#define __VISITOR_TEST_HPP__

#include "gtest/gtest.h"

TEST(VisitorTest, NullIterator){
	Base* op1 = new Op(1);
}

TEST(VisitorTest, BinaryIterator){
	Base* op1 = new Op(3);
	Base* op2 = new Op(4);
	Base* add = new Add(op1,op2);
	
}

TEST(VisitorTest, UnaryIterator){
		
}

TEST(VisitorTest, PreorderIterator){
	Base* op1 = new Op(4.1);
	Base* op2 = new Op(6);
	Base* mult = new Mult(op1,op2);
	Base ceil = new Ceil(mult);	
}

#endif
