#include <iostream>
using namespace std;

int main()
{
	int a;
	int const &ref_a {a};
	// const int &ref_a {a}; // both are same

	a= 10;

	cout << "Value of a = " << a << endl;
	cout << "Value of ref_a = " << ref_a << endl;

	// This will give compilation error:
	// error: assignment of read-only reference ‘ref_a’
	ref_a = 20; // Value update using reference is not allowd
	//ref_a = a; // Reference assignment is also not possible.
	
	cout << "Value of a = " << a << endl;
	cout << "Value of ref_a = " << ref_a << endl;

}
