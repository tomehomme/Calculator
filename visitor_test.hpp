#ifndef __VISITOR_TEST_HPP__
#define __VISITOR_TEST_HPP__

#include "gtest/gtest.h"
#include "visitor.hpp"
#include "iterator.hpp"

#include "preorder_iterator.cpp"

TEST(VisitorTest, NullIterator){
	int count = 0;
	Base* op1 = new Op(1);
	NullIterator* test = new NullIterator(op1);
	test->first();
	while(!test->is_done()){
		cout << test->current()->stringify()<<endl;
		test->next();
		count++;
	}

	EXPECT_EQ(1,count);

}

TEST(VisitorTest, BinaryIterator){
	Base* op1 = new Op(3);
	Base* op2 = new Op(4);
	Base* add = new Add(op1,op2);
//	CountVisitor* counts = new CountVisitor();
	
}

TEST(VisitorTest, UnaryIterator){
//	CountVisitor* counts = new CountVisitor();
		
}

TEST(VisitorTest, PreorderIterator){
	Base* op1 = new Op(4.1);
	Base* op2 = new Op(6);
	Base* mult = new Mult(op1,op2);
	Base ceil = new Ceil(mult);	
	
}

#endif
