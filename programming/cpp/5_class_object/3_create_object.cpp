#include <iostream>
#include <vector>

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

	// Array of class object
	Player p_arr[2];
	p_arr[0] = p1;
	p_arr[1] = p2;

	// Class object and vector
	//
	vector <Player> p_vec;
	p_vec.push_back(p1);
	p_vec.push_back(p2);

	delete p3;
	return 0;
}
