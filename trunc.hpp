#ifndef __TRUNC_HPP__
#define __TRUNC_HPP__

#include "decorator.hpp"
#include "math.h"

class Truncate : public Decorator{
	public:
		Truncate(Base* base) : Decorator(base){}

		string stringify(){
			//Need to evaluate the contents of the base and return it as a string
			return to_string( this->base->evaluate());
		}
		Iterator* create_iterator(){
			return nullptr;
			//return new UnaryIterator(this->base);
		}
};

#endif
