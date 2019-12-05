#include "gtest/gtest.h"



#include "op_test.hpp"
#include "mult_test.hpp"
#include "rand_test.hpp"
#include "pow_test.hpp"
#include "add_test.hpp"
#include "div_test.hpp"
#include "sub_test.hpp"


#include "listcontainer_test.hpp"



#include "vectorContainer_test.hpp"
#include "bubbleSort_test.hpp"
#include "selectionsort_test.hpp"


#include "truncTest.hpp"
#include "parenTest.hpp"

#include "ceil_test.hpp"
#include "floor_test.hpp"
#include "abs_test.hpp"
#include "decorator_test.hpp"

#include "visitor_test.hpp"
#include "iterator_test.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
