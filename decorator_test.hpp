#ifndef __DECORATOR_TEST_HPP__
#define __DECORATOR_TEST_HPP__


#include "gtest/gtest.h"

//NEED TO TEST WITH STRINGIFY FUNCITONS TOO

TEST(DecoratorTest,absFloorCeil){
	Base* op1 = new Op(-5.5);
	Base* abs = new Abs(op1);
	Base* floor = new Floor(abs);
	Base* ceil = new Ceil(floor);
	Base* add = new Add(floor,ceil);
	EXPECT_EQ(add->evaluate(), 10);
}

TEST(DecoratorTest, floorCeilAbs ){
	Base* div = new Div(new Op(15), new Op(2.5));
	Base* floor = new Floor(div);
	Base* ceil = new Ceil(new Op(-3));
	Base* sub = new Sub(ceil, floor);
	Base* abs = new Abs(sub);
	EXPECT_EQ(abs->evaluate(), 9);
}

TEST(DecoratorTest, floorAbs){
  Base* floor = new Floor(new Op(-2.3));
  Base* abs = new Abs(floor);
  EXPECT_EQ(abs->evaluate(), 3);

}

TEST(DecoratorTest, ceilAbs){
 Base* ceil = new Ceil(new Op(-2.6));
 Base* abs = new Abs(ceil);
 EXPECT_EQ(abs->evaluate(), 2);
}

TEST(DecoratorTest, floorCeil){
 Base* floor = new Floor(new Op(5.1));
 Base* ceil = new Ceil(floor);

 EXPECT_EQ(ceil->evaluate(), 5);

}

TEST(DecoratorTest, ceilFloor){
 Base* ceil = new Ceil(new Op(5.1));
 Base* floor = new Floor (ceil);
 EXPECT_EQ(floor->evaluate(), 6);
}

TEST(DecoratorTest, floorAbsCeil){
 Base* floor = new Floor(new Op(-5.1));
 Base* abs = new Abs(floor);
 Base* ceil = new Ceil(abs);
 EXPECT_EQ(ceil->evaluate(), 6);
}


TEST(DecoratorTest, ParenTrunc){
        Base* nine = new Op(9);
        Base* three = new Op(3);
        Base* div = new Div(nine,three);
        Base* paren = new Parenthesis(div);
		Base* trunc = new Truncate(paren);
        EXPECT_EQ(trunc->stringify(),"3.000000");
}


TEST(DecoratorTest, TruncFloor){
        Base* nine = new Op(9);
        Base* three = new Op(2);
        Base* div = new Div(nine,three);
        Base* floor = new Floor(div);
		Base* trunc = new Truncate(floor);
        EXPECT_EQ(trunc->stringify(),"4.000000");
}


TEST(DecoratorTest, ParenFloor){
        Base* nine = new Op(9);
        Base* three = new Op(6);
        Base* div = new Div(nine,three);
        Base* paren = new Parenthesis(div);
		Base* floor = new Floor(paren);
        EXPECT_EQ(floor->stringify(),"(9.000000/6.000000)");
}

TEST(DecoratorTest, ParenFloorEval){
        Base* nine = new Op(9);
        Base* three = new Op(6);
        Base* div = new Div(nine,three);
        Base* paren = new Parenthesis(div);
		Base* floor = new Floor(paren);
        EXPECT_EQ(floor->evaluate(),1);
}

TEST(DecoratorTest, CeilParenTrunc){
        Base* nine = new Op(9);
        Base* three = new Op(2);
        Base* div = new Div(nine,three);
        Base* ceil = new Ceil(div);
		Base* paren = new Parenthesis(ceil);
		Base* trunc = new Truncate(paren);
        EXPECT_EQ(trunc->stringify(),"5.000000");
}

TEST(DecoratorTest, AbsCeilFloorParenTrunc){
        Base* nine = new Op(9);
        Base* three = new Op(-2);
        Base* div = new Div(nine,three);
		Base* abs = new Abs(div);
		Base* ceil = new Ceil(abs);
        Base* paren = new Parenthesis(ceil);
		Base* trunc = new Truncate(paren);
        EXPECT_EQ(trunc->stringify(),"5.000000");
}

TEST(DecoratorTest, AbsCeilFloorParenTruncEval){
        Base* nine = new Op(9);
        Base* three = new Op(-2);
        Base* div = new Div(nine,three);
		Base* abs = new Abs(div);
		Base* ceil = new Ceil(abs);
		Base* floor = new Floor(ceil);
        Base* paren = new Parenthesis(floor);
		Base* trunc = new Truncate(paren);
        EXPECT_EQ(trunc->evaluate(),5);
}

TEST(DecoratorTest, ADDAbsCeilFloorParenTruncEval){
        Base* nine = new Op(9);
        Base* three = new Op(-2);
        Base* div = new Div(nine,three);
		Base* abs = new Abs(div);
		Base* ceil = new Ceil(abs);
		Base* floor = new Floor(ceil);
        Base* paren = new Parenthesis(floor);
		Base* trunc = new Truncate(paren);
        Base* ADD = new Add(new Op(5), trunc);
        EXPECT_EQ(ADD->stringify(), "5.000000+5.000000");
}

TEST(DecoratorTest, CompositeDecorator){
        Base* nine = new Op(9);
        Base* three = new Op(3);
        Base* div = new Div(nine,three);
        Base* paren = new Parenthesis(div);
        Base* ADD = new Add(div, paren);
        EXPECT_EQ(ADD->stringify(), "9.000000/3.000000+(9.000000/3.000000)");
}


#endif


