#include <iostream>

using namespace std;

class Account
{
	private:
		double balance = 0;
		string name = "Dummy";
	public:
		double balance_public = 0;
		// inline methods
		double get_balance(void) const
		{ 
			return balance;
		}
		void set_balance(double bal)
		{
			balance = bal;
		}

		// Non inline methods
		void set_name(string name1);
};

void Account::set_name(string name1)
{
	name = name1;
};

int main()
{
	const Account acc1;

	// This will result in compilation error
	//  error: assignment of member ‘Account::balance_public’ in read-only object
	// acc1.balance_public = 10;
	cout << "Original Balance = " << acc1.get_balance() << endl;
	cout << "Modified Balance = " << acc1.get_balance() << endl;

	
	return 0;
}
