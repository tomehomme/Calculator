class NegativeTenMock: public Base{
	public:
		NegativeTenMock() {};

		virtual double evaluate() { return -10; }
		virtual string stringify() { return "-10"; }

}
