#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <cmath>

class Rand : public Base {
    public:
        double value;
        Rand() : Base() {value = (rand()%100); }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { return std::to_string(value); }
        Iterator* create_iterator(){
			return nullptr;
		}
        
};



#endif //__RAND_HPP__
