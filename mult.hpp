#ifndef __MULT_PP__
#define __MULT_HPP__

#include "base.hpp"

class Mult : public Base {
    public:
        Base* value1;
        Base* value2;
        Mult(Base* value1, Base* value2) : Base() {this->value1=value1; this->value2=value2; }
        virtual double evaluate() { return value1->evaluate()*value2->evaluate(); }
        virtual std::string stringify() { return value1->stringify() + "*" + value2->stringify(); }

        Iterator* create_iterator(){
		return nullptr;		
		//return new BinaryIterator(this);
	}
		Base* get_left(){
			return this->value1;
		}
		Base* get_right(){return this->value2;}    
    
};

#endif
