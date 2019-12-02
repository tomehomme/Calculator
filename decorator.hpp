#ifndef __DECORATOR_HPP__
#define __DECORATOR_HPP__

#include "base.hpp"

class Decorator : public Base {
	protected:
		Base* base;

		Decorator(Base* base){this->base = base;}

	public:
		virtual double evaluate(){return base->evaluate();}
		virtual string stringify(){return base->stringify();}
		virtual Iterator* create_iterator()=0;
		virtual Base* get_left()=0;
		
		
		virtual Base* get_right()=0;
};



#endif
