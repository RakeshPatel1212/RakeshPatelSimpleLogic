#include <iostream>
#include <vector>

using namespace std;

class Account
{
	public:
	// Attribute
	std::string name{"Account"};
	double total_money{0.0};

	// Function/method
	void deposit(double money);

};

int main()
{
	// Method1 to create object
	//
	Account rakesh_account;

	// Using dot operator
	cout << "Obj- Rakesh: Name = " << rakesh_account.name << endl;
	cout << "Obj- Rakesh: Total money = " << rakesh_account.total_money << endl;

	rakesh_account.name = "Rakesh";
	rakesh_account.total_money = 1000;

	cout << "Obj- Rakesh: Name = " << rakesh_account.name << endl;
	cout << "Obj- Rakesh: Total money = " << rakesh_account.total_money << endl;

	// 
	Account *test_account = new Account();

	// Dereference pointer and then use dot operator
	cout << "Obj- Test: Name = " << (*test_account).name << endl;
	cout << "Obj -Test: Total money = " << (*test_account).total_money << endl;

	// Use pointer operator directly with pointer variable
	cout << "Obj- Test: Name = " << test_account->name << endl;
	cout << "Obj- Test: Total money = " << test_account->total_money << endl;

	delete test_account;
	return 0;
}
