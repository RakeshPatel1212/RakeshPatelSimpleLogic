#include <iostream>
using namespace std;

int main()
{
	int a;
	int &ref_a {a};

	// Reference must be initialized at the time of declaration.
	//  error: ‘ref_b’ declared as reference but not initialized
	//
	//int &ref_b;
	
	a= 10;

	cout << "Value of a = " << a << endl;
	cout << "Value of ref_a = " << ref_a << endl;

	ref_a = 20;
	
	cout << "Value of a = " << a << endl;
	cout << "Value of ref_a = " << ref_a << endl;

}
