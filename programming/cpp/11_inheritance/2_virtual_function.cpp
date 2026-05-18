#include <iostream>

using namespace std;

class Base
{
	private:
	public:
		Base()
		{
			cout << "Base class constructor called" << endl;
		}

		virtual ~Base()
		{
			cout << "Base class distructor called" << endl;
		}

		virtual void test(void)
		{
			cout << "Base::Test called" << endl;

		}
};

class Derived: public Base
{
	private:
	public:
		Derived()
		{
			cout << "Derived class constructor called" << endl;
		}

		virtual ~Derived()
		{
			cout << "Derived class distructor called" << endl;
		}
		virtual void test(void)
		{
			cout << "Derived::Test called" << endl;

		}
};

int main()
{
	Base *d1 = new Derived();

	d1->test();

	delete d1;
	return 0;
}
