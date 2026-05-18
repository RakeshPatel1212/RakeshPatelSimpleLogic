#include<vector>
#include <iostream>

using namespace std;

int main(void)
{
	// Declare vector
	vector <int> vi_a;

	// Declare vector with size
	vector <int> vi_b(5);

	// Initialize vector
	vector <char> vowels {'a', 'e', 'i', 'o', 'u'};


	// Access vector using array style
	cout << "First eleement in vector is " << vowels[0] << endl;
	
	// Assign new value at index 0
	vowels[0] = 'R';

	// Access vector using at method
	cout << "First eleement in vector is " << vowels.at(0) << endl;
	vowels.at(0) = 'A';

	// at method is better option in coding
	vowels.at(10); // This will throw exception
	//vowels[10] = 'R'; // This does not undefined behaviour

}
