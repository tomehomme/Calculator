#ifndef __FLOOR_HPP__
#define __FLOOR_HPP__

#include <cmath>
#include "decorator.hpp"

class Floor : public Decorator{
	public:

		Floor(Base* base):Decorator(base){}
	
		double evaluate(){
			return floor(this->base->evaluate());
		}	

		Iterator* create_iterator(){
			return nullptr;
			return new UnaryIterator(base);
		}

};


#endif
