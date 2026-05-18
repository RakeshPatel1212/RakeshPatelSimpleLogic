#include <iostream>

using namespace std;


int main()
{
	int numbers[10] {2,3}; // init first two element to 2,3 and remaining to 0

	cout << "Size of array " << sizeof(numbers) << " and first number is = " << numbers[0]  << endl;
	
	numbers[0] = 300; // Modify values at index 0
			  //
	cout << "Size of array " << sizeof(numbers) << " and first number is = " << numbers[0]  << endl;


	return 0;

}
