#include<iostream>

using namespace std;
class Deep
{
	private:

		int *data;

	public:

		Deep();
		Deep(int d);
		Deep(const Deep &source);

		~Deep();
};

// Constructor
Deep::Deep(int d)
{
	data = new int;
	*data = d;

}

// Destructor
Deep::~Deep()
{
	cout << "Delete ptr value = " << data << endl;
	delete data;
}

// Copy constructor
Deep::Deep(const Deep &source)
{
	data = new int;
	*data = *source.data;
	cout << "Copy constructor called" << endl;
}

int main()
{
	Deep s1(10);

	Deep s2(s1);


	return 0;
}
