#include "base.hpp"
#include "binary_iterator.cpp"
class Add: public Base{
	public:
		Base* num1;
		Base* num2;
		Add(Base* op1, Base* op2) { this->num1 = op1; this->num2 = op2; }
		virtual double evaluate() { return (num1->evaluate()+num2->evaluate()); }
	    	virtual string stringify() { return num1->stringify() + "+" + num2->stringify(); }
		Iterator* create_iterator(){
		//	return nullptr;
			return new BinaryIterator(this);
		}
		Base* get_left(){
			return this->num1;
		}
		Base* get_right(){return this->num2;}

				virtual void accept(CountVisitor* c) {
			c->visit_add();
		}
};

