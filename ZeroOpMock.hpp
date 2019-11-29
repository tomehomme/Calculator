class ZeroOpMock: public Base {
	public:
		ZeroOpMock() {};

		virtual double evaluate() { return 0; }
		virtual string stringify() { return "0" }

}
