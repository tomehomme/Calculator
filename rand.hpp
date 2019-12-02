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
		//return nullptr;
		return new NullIterator(this);
	}
    Base* get_left(){return this;}
        Base* get_right(){return nullptr;}
        
};



#endif //__RAND_HPP__
