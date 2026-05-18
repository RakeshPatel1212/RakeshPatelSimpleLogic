#include <iostream>

using namespace std;

// Compile: g++ 1_init_array.cpp -o 1_init_array
// 1. Type name[number] {values};
// 2. Type name[number] = {values};
// 3. Type name[] = {values};
//

int main()
{
	int numbers[10] {2,3}; // init first two element to 2,3 and remaining to 0

	cout << "Size of array " << sizeof(numbers) << " and first number is = " << numbers[0]  << endl;
	
	int numbers2[10]= {2,3}; // init first two element to 2,3 and remaining to 0

	cout << "Size of array " << sizeof(numbers2) << " and first number is = " << numbers2[0]  << endl;

	return 0;

}
