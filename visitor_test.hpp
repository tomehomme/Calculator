
#ifndef __VISITOR_TEST_HPP__
#define __VISITOR_TEST_HPP__

#include "gtest/gtest.h"
#include "visitor.hpp"
#include "iterator.hpp"
#include "base.hpp"

#include "preorder_iterator.cpp"

TEST(VisitorTest, NullIterator){
	int count = 0;
	Base* op1 = new Op(1);
	NullIterator* test = new NullIterator(op1);
	if(test->current()==nullptr){
		count++;
	}

	EXPECT_EQ(1,count);

}

TEST(VisitorTest, BinaryIterator){
	Base* op1 = new Op(3);
	Base* op2 = new Op(4);
	Base* add = new Add(op1,op2);
	CountVisitor* counts = new CountVisitor();
	BinaryIterator* trav = new BinaryIterator(add);
	trav->first();

	while(!trav->is_done()){
		trav->current()->accept(counts);
		trav->next();
	}
	
	EXPECT_EQ(2,counts->op_count());
}

TEST(VisitorTest, UnaryIterator){
        Base* op1 = new Op(3);
        Base* op2 = new Op(-4);
        Base* add = new Add(op1,op2);
	
	UnaryIterator* trav = new UnaryIterator(new Abs(new Abs(add)));

	CountVisitor* counts = new CountVisitor();
	while(!trav->is_done()){
		trav->current()->accept(counts);
		trav->next();
	}

	EXPECT_EQ(1,counts->abs_count());
		
}


#endif
