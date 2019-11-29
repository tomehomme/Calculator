#ifndef __LIST_CONTAINER_TEST_HPP__
#define __LIST_CONTAINER_TEST_HPP__

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
#include "listcontainer.hpp"



TEST(ListContainerTest, ListContainerPrint) {
   ListContainer* test = new ListContainer();
    Base* operand = new Op(5);
    test->add_element(operand);
    cout << "TESTING print()" << endl;
    test->print();

    cout << "SHOULD BE: 5" << endl;
}


TEST(ListContainerTest, ListContainerSize) {
    ListContainer* test = new ListContainer();
    Base* operand= new Op(5);
    test->add_element(operand);
    EXPECT_EQ(test->size(), 1);
}

TEST(ListContainerTest, SwapTest) {
    // Setup the elements under test
    Op* seven = new Op(7);
    Op* eight = new Op(8);
    ListContainer* test_container = new ListContainer();

    // Exercise some functionality of hte test elements
    test_container->add_element(seven);
    test_container->add_element(eight);
    
    //Swapping the first element of the container (7) and the second element of the list (8)
    test_container->swap(0,1);

    // Assert that the container has at least a single element
    // otherwise we are likely to cause a segfault when accessing
    ASSERT_EQ(test_container->size(), 2);
    EXPECT_EQ(test_container->at(0)->evaluate(), 8);
}

TEST(ListContainerTest, ListContainerAt){
    ListContainer* test = new ListContainer();
    Base* operand = new Op(5);
    test->add_element(operand);
    EXPECT_EQ(test->at(0), operand);

}






#endif
