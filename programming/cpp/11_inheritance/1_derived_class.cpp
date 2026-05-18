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

		~Base()
		{
			cout << "Base class distructor called" << endl;
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

		~Derived()
		{
			cout << "Derived class distructor called" << endl;
		}
};

int main()
{
	Derived d1;


	return 0;
}
