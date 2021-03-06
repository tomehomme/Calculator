#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <cmath>
class Pow : public Base {
    public:
        Base* value1;
        Base* value2;
        Pow(Base* value1, Base* value2) : Base() {this->value1=value1; this->value2=value2; }
        virtual double evaluate() { return pow(value1->evaluate(),value2->evaluate());}
        virtual std::string stringify() { return value1->stringify()+"**"+value2->stringify(); }
        Iterator* create_iterator(){
            return new BinaryIterator(this);
        }
        Base* get_left(){
            return this->value1;
        }
		Base* get_right(){return this->value2;}
        
		virtual void accept(CountVisitor* c) {
			c->visit_pow();
		}
};



#endif //__POW_HPP__
