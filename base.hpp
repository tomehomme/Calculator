#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <cmath>
#include <iostream>
#include <cstring>
#include <string>


#include "iterator.hpp"
#include "visitor.cpp"
//#include "unary_iterator.cpp"
//#include "binary_iterator.cpp"
//#include "preorder_iterator.cpp"
using namespace std;



class Base {
    public:
        /* Constructors */
        Base() { };
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
        virtual Iterator* create_iterator() = 0;
        virtual Base* get_left() = 0;
        virtual Base* get_right() = 0;
        virtual void accept(CountVisitor* c) = 0;
};



#endif //__BASE_HPP__
