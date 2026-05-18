#include<iostream>

using namespace std;
class Shallow
{
	private:

		int *data;

	public:

		Shallow();
		Shallow(int d);
		Shallow(const Shallow &source);

		~Shallow();
};

// Constructor
Shallow::Shallow(int d)
{
	data = new int;
	*data = d;

}

// Destructor
Shallow::~Shallow()
{
	cout << "Delete ptr value = " << data << endl;
	delete data;
}

// Copy constructor
Shallow::Shallow(const Shallow &source): data(source.data)
{
	cout << "Copy constructor called" << endl;
}

int main()
{
	Shallow s1(10);

	Shallow s2(s1);


	return 0;
}
