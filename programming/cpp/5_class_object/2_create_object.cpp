#include <iostream>


using namespace std;

class Player
{
	// Attribute
	std::string name;


	// Function/method
	void talk(std::string text_to_display);

};

int main()
{
	// Method1 to create object
	Player p1,p2;

	// Method2 to create object
	Player *p3 = new Player();
	delete p3;

	return 0;
}
