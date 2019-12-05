#ifndef __ITERATOR_TEST_HPP__
#define __ITERATOR_TEST_HPP__
#include "gtest/gtest.h"
//#include "visitor.hpp"
//#include "iterator.hpp"
//#include "preorder_iterator.cpp"

TEST(IteratorTest, countOp){
 PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Op(1))));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->accept(counts);
		trav->next();
	}
    EXPECT_EQ(1,counts->op_count());
}


TEST(IteratorTest, countRand){
PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Rand())));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->accept(counts);
		trav->next();
	}
    EXPECT_EQ(1,counts->rand_count());
}

TEST(IteratorTest, countAdd){
PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Add(new Op(1),new Op(2)))));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->accept(counts);
		trav->next();
	}
    EXPECT_EQ(1,counts->add_count());
}

TEST(IteratorTest, countMult){
PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Mult(new Op(1),new Op(2)))));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->accept(counts);
		trav->next();
	}
    EXPECT_EQ(1,counts->mult_count());
}

TEST(IteratorTest, countDiv){
PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Div(new Op(1),new Op(2)))));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->accept(counts);
		trav->next();
	}
    EXPECT_EQ(1,counts->div_count());
}

TEST(IteratorTest, countSub){
PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Sub(new Op(1),new Op(2)))));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->accept(counts);
		trav->next();
	}
    EXPECT_EQ(1,counts->sub_count());
}

TEST(IteratorTest, countPow){
PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Pow(new Op(1),new Op(2)))));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->accept(counts);
		trav->next();
	}
    EXPECT_EQ(1,counts->pow_count());
}
 TEST(IteratorTest, countAbs){
 PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Abs(new Op(1)))));
  	trav->first(); 
       CountVisitor* counts = new CountVisitor();
       while (!trav->is_done()){
   
// //	 cout<<"curr: " << trav->current()->stringify() << endl;
 		trav->current()->accept(counts);
 		trav->next();
 	}
     EXPECT_EQ(1,counts->abs_count());
 }
 TEST(IteratorTest, countCeil){
 PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Ceil(new Op(1)))));
   	trav->first(); 
       CountVisitor* counts = new CountVisitor();
       while (!trav->is_done()){
   
 //	 cout<<"curr: " << trav->current()->stringify() << endl;
 		trav->current()->accept(counts);
 		trav->next();
 	}
     EXPECT_EQ(1,counts->ceil_count());
 }
 TEST(IteratorTest, countFloor){
 PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Floor(new Op(1)))));
   	trav->first(); 
       CountVisitor* counts = new CountVisitor();
       while (!trav->is_done()){
   
// //	 cout<<"curr: " << trav->current()->stringify() << endl;
 		trav->current()->accept(counts);
 		trav->next();
 	}
     EXPECT_EQ(1,counts->floor_count());
 }

 TEST(IteratorTest, countParen){
 PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(new Parenthesis(new Op(1)))));
   	trav->first(); 
       CountVisitor* counts = new CountVisitor();
       while (!trav->is_done()){
   
// //	 cout<<"curr: " << trav->current()->stringify() << endl;
 		trav->current()->accept(counts);
 		trav->next();
 	}
     EXPECT_EQ(1,counts->paren_count());
 }

TEST(IteratorTest, combination){
	Base* nine = new Op(9);
        Base* three = new Op(3);
        Base* div = new Div(nine,three);
        Base* test = new Parenthesis(div);
	PreorderIterator* trav = new PreorderIterator(new Abs(new Abs(test)));
        trav->first();
       CountVisitor* counts = new CountVisitor();
       while (!trav->is_done()){

// //    cout<<"curr: " << trav->current()->stringify() << endl;
                 trav->current()->accept(counts);
                                 trav->next();
                                         }
                                         
	EXPECT_EQ(2, counts->op_count());
}
#endif
