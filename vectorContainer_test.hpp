#ifndef __VECTOR_CONTAINER_TEST__HPP__
#define __VECTOR_CONTAINER_TEST__HPP__

#include "gtest/gtest.h"

#include "base.hpp"
//#include "op.hpp"

/*#include "mult.hpp"
#include "rand.hpp"
#include "pow.hpp"
#include "Add.hpp"
#include "Div.hpp"
#include "Sub.hpp"
*/
#include "vectorContainer.hpp"



TEST(VectorContainerTest, VectorContainerPrint) {
    VectorContainer* test = new VectorContainer();
    Base* operand = new Op(5);
    test->add_element(operand);
    cout << "TESTING print()" << endl;
    test->print();
    
    cout << "SHOULD BE: 5" << endl;
}


TEST(VectorContainerTest, VectorContainerSize) {
    VectorContainer* test = new VectorContainer();
    Base* operand= new Op(5);
    test->add_element(operand);
    EXPECT_EQ(test->size(), 1);
}

TEST(VectorContainerTest, SwapTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* eight = new Op(8);
    VectorContainer* test_container = new VectorContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(eight);

    test_container->swap(0,1);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 2);
    //The first element of the vectorContainer was 7, after the swap it should be 8
    EXPECT_EQ(test_container->at(0)->evaluate(),8);
}

TEST(VectorContainerTest, VectorContainerAt){
	VectorContainer* test = new VectorContainer();
   Base* operand = new Op(5);
   test->add_element(operand);
 EXPECT_EQ(test->at(0), operand);
	
}






#endif
