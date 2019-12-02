#ifndef __DIV__HPP__
#define __DIV__HPP__
#include "base.hpp"

class Div: public Base{
	public:
		Base* value1;
		Base* value2;

		Div(Base* num1, Base* num2) : Base() { this->value1=num1; this->value2=num2; }
		
		virtual double evaluate() { return value1->evaluate()/value2->evaluate(); }
		virtual std::string stringify() { return (value1->stringify() + "/" + value2->stringify()); }
		Iterator* create_iterator(){
			return nullptr;
			//return new BinaryIterator(this);
		}

};

#endif
