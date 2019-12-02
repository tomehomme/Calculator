#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
//#include "iterator.hpp"
class Op : public Base {
    public:
        double value;
        Op(double value) : Base() {this->value=value; }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { return to_string(value); }
        Iterator* create_iterator(){
			return nullptr;
			return new NullIterator(this);

	}   
        
};



#endif //__OP_HPP__
