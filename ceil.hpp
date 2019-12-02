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
		//	return nullptr;
			return new UnaryIterator(this->base);
		}
	
				virtual Base* get_left(){
			return this->base;
		}
		virtual Base* get_right(){return nullptr;}
};


#endif
