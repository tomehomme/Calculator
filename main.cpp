#include <iostream>
#include <stack>
#include <stdexcept>

//#include "base.hpp"
//#include "iterator.cpp"
//#include "unary_iterator.cpp"
//#include "binary_iterator.cpp"
//#include "preorder_iterator.cpp"
//#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "Sub.hpp"
#include "Add.hpp"
#include "Div.hpp"


#include "listcontainer.hpp"
#include "vectorContainer.hpp"
#include "bubbleSort.hpp"
#include "selectionsort.hpp"

#include "trunc.hpp"
#include "paren.hpp"
#include "ceil.hpp"
#include "floor.hpp"
#include "abs.hpp"


#include "Factory.hpp"


#include "iterator.hpp"
#include "preorder_iterator.cpp"
//#include "visitor.cpp"
 
using namespace std;


int main(int argc, char** argv) {
    
    Factory* expression = new Factory();
    Base* calculate = expression->parse(argv, argc);
    
    if (calculate){
       cout << calculate->stringify() << "=" <<  calculate->evaluate() << endl;   
   }

   Parenthesis* dummy = new Parenthesis(new Ceil(new Add(new Op(5), new Op(6))));
    PreorderIterator* trav = new PreorderIterator(dummy);
    CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
		trav->current()->visit(counts);
		trav->next();	
	} 
	cout << "op count: "  << counts->op_count() << endl;
    return 0;
}
