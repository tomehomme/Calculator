#ifndef __PAREN_HPP__
#define __PAREN_HPP__

#include "decorator.hpp"

class Parenthesis : public Decorator{
	public:
		Parenthesis(Base* base) : Decorator(base){}
		string stringify(){
			string temp = "(";
			temp+=this->base->stringify();
			temp+=")";
			return temp;
		}
		Iterator* create_iterator(){
			return nullptr;
		}
};

#endif
