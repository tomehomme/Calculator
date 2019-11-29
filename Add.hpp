#include "base.hpp"
class Add: public Base{
	public:
		Base* num1;
		Base* num2;
		Add(Base* op1, Base* op2) { this->num1 = op1; this->num2 = op2; }
		virtual double evaluate() { return (num1->evaluate()+num2->evaluate()); }
    	virtual string stringify() { return num1->stringify() + "+" + num2->stringify(); }
		Iterator* create_iterator(){
			return nullptr;
		}

};

