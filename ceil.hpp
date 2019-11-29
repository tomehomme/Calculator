#ifndef __CEIL_HPP__
#define __CEIL_HPP__

#include <cmath>
#include "decorator.hpp"

class Ceil : public Decorator{
	//Base* base
	public:
		Ceil(Base* base):Decorator(base){}
		double evaluate(){
			return ceil(this->base->evaluate());
		}
		Iterator* create_iterator(){
			return new UnaryIterator(this->base);
		}
	
};


#endif
