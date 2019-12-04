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

 
    PreorderIterator* trav = new PreorderIterator((calculate));
  	trav->first(); 
      CountVisitor* counts = new CountVisitor();
      while (!trav->is_done()){
   
//	 cout<<"curr: " << trav->current()->stringify() << endl;
		trav->current()->visit(counts);
		trav->next();
	}
	cout << endl;
	cout << "-----ANALYSIS-----" << endl;
	 
	cout << "op count: "  << counts->op_count() << endl;
	cout << "rand count: " << counts->rand_count() << endl;
	cout << "mult count: " << counts->mult_count() << endl;
	cout << "div count: " << counts->div_count() << endl;
	cout << "add count: "<< counts->add_count() << endl;
	cout << "sub count: " << counts->sub_count() << endl;
	cout << "pow count: " << counts->pow_count() << endl;
	cout << "ceil count: " << counts->ceil_count() << endl;
	cout << "floor count: " << counts->floor_count() << endl;
	cout << "abs count: " << counts->abs_count() << endl;
	cout << "trunc count: " << counts->trunc_count() << endl;
	cout << "paren count: " << counts->paren_count() << endl;
 
	cout << "-------------------" << endl << endl;
   return 0;
}
