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
		//	return nullptr;
			return new UnaryIterator(this);
		}


		virtual Base* get_left(){
			return this->base;
		}
		virtual Base* get_right(){return nullptr;}
		virtual void accept(CountVisitor* c) {
			c->visit_floor();
		}
};


#endif
