#include <iostream>


using namespace std;

class Empty
{

};

class Player
{
	// Attribute
	std::string name;


	// Function/method
	void talk(std::string text_to_display);

};

int main()
{

	// Size of empty class is always 1 to make sure each class object have different address
	cout << "Size of empty class = " << sizeof(class Empty) << endl;
	cout << "Size of Player class = " << sizeof(class Player) << endl;

	class Empty E1, E2;

	cout << "Address of E1 = " << &E1 << endl;
	cout << "Address of E2 = " << &E2 << endl;


	return 0;
}
