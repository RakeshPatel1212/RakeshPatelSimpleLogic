#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v1,v2;

	v1.push_back(10);
	v1.push_back(20);

	cout << "V1 data at index 0 = " << v1.at(0) << endl;
	cout << "V1 data at index 1 = " << v1.at(1) << endl;


	v2.push_back(100);
	v2.push_back(200);

	cout << "V2 data at index 0 = " << v2.at(0) << endl;
	cout << "V2 data at index 0 = " << v2.at(0) << endl;

	vector <vector <int>> vector_2d= 
	{
		v1,
		v2
	};

	cout << "V1 data at index 0 = " << vector_2d.at(0).at(0) << endl;
	cout << "V1 data at index 0 = " << vector_2d.at(0).at(1) << endl;


	return 0;
}

