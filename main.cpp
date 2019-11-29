#include <iostream>
#include <stack>

#include "op.hpp"
#include "mult.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "Sub.hpp"
#include "Add.hpp"
#include "Div.hpp"


//#include "listcontainer.hpp"
//#include "vectorContainer.hpp"
//#include "bubbleSort.hpp"
//#include "selectionsort.hpp"

#include "trunc.hpp"
#include "paren.hpp"
#include "ceil.hpp"
#include "floor.hpp"
#include "abs.hpp"


#include "Factory.hpp"

using namespace std;


int main(int argc, char** argv) {
    
    Factory* expression = new Factory();
    Base* calculate = expression->parse(argv, argc);
    
    if (calculate){
        cout << calculate->stringify() << "=" <<  calculate->evaluate() << endl;   
    }

       
    return 0;
}
