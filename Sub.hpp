#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub: public Base{
	public:
		Base* num1;
		Base* num2;

		Sub( Base* value1, Base* value2 ) :Base() {this->num1=value1; this->num2=value2; }
		virtual double evaluate() { return num1->evaluate() - num2->evaluate(); }
		virtual string stringify() { return (num1->stringify() + "-" + num2->stringify()); }

};

#endif
