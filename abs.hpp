#ifndef __ABS_HPP__
#define __ABS_HPP__

#include <cmath>
#include "decorator.hpp"


class Abs : public Decorator{


	public:

		Abs(Base* base): Decorator(base){}
		double evaluate(){
			return abs(this->base->evaluate());
		}
		Iterator* create_iterator(){
			return nullptr;
			//return new NullIterator(this);
		}

};


#endif
