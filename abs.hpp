#ifndef __ABS_HPP__
#define __ABS_HPP__

#include <cmath>
#include "decorator.hpp"
#include "unary_iterator.cpp"

class Abs : public Decorator{


	public:

		Abs(Base* base): Decorator(base){}
		double evaluate(){
			return abs(this->base->evaluate());
		}
		Iterator* create_iterator(){
			//return nullptr;
			return new UnaryIterator(base);
		}

		virtual Base* get_left(){
			return this->base;
}
		virtual Base* get_right(){return nullptr;}
		virtual void visit(CountVisitor* c) {
			c->visit_abs();
		}
};


#endif
