#include <iostream>

using namespace std;

class Account
{
	private:
		double balance;
		string name;
	public:
		// inline methods
		double get_balance(void)
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
	Account acc1;

	cout << "Original Balance = " << acc1.get_balance() << endl;
	acc1.set_balance(100);
	cout << "Modified Balance = " << acc1.get_balance() << endl;

	
	return 0;
}
