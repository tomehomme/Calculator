#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <cmath>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Base {
    public:
        /* Constructors */
        Base() { };
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;
        virtual Iterator* create_iterator() = 0;
};



#endif //__BASE_HPP__
