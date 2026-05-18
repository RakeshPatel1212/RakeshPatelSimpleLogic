#include<vector>
#include <iostream>

using namespace std;

int main(void)
{

	vector <vector <int>> values =
	{
		{1,2,3},
		{4,5,6},
	};


	cout << "Value at index[0][0] = " << values[0][0] << endl;
	cout << "Value at index[0][0] = " << values.at(0).at(0) << endl;

}
