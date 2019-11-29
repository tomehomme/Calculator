#ifndef __BUBBLE_SORT_TEST_HPP__
#define __BUBBLE_SORT_TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "sort.hpp"
#include "container.hpp"
#include "vectorContainer.hpp"
#include "listcontainer.hpp"
/*#include "op.hpp"
#include "mult.hpp"
#include "rand.hpp"
#include "pow.hpp"
#include "Add.hpp"
#include "Div.hpp"
#include "Sub.hpp"
*/
#include "bubbleSort.hpp"


#include <iostream>






TEST(BubbleSortTest, BubbleSortTestVector) {
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    VectorContainer* container = new VectorContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

	//cout << "setting sort function to bubble sort" << endl;
    container->set_sort_function(new BubbleSort());
//	cout << "finished setting sort funciton to bubble sort" << endl;
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}


TEST(BubbleSortTest, BubbleSortTestList){
	
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    ListContainer* container = new ListContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

 
  container->set_sort_function(new BubbleSort());
      
      container->sort();
      
       ASSERT_EQ(container->size(), 3);
	EXPECT_EQ(container->at(0)->evaluate(), 4);
	 EXPECT_EQ(container->at(1)->evaluate(), 5);
	EXPECT_EQ(container->at(2)->evaluate(), 28);
        

}



#endif
