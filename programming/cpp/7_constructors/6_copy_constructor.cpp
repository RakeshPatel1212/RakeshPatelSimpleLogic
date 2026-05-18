#include <iostream>

using namespace std;

class Account
{
	private:
		double balance;
		string name;
	public:
		//Account(): balance(0.0), name("Dummy")
		//{
		//	cout << "no args constructor called, balance=" << balance << " and name = " << name << endl;
		//}

		Account(double balance1=0, string name1="Dummy"): balance(balance1), name(name1)
		{
			cout << "constructor called, balance=" << balance << " and name = " << name << endl;
		}

		// Copy constructor
		Account(const Account &source);
		~Account()
		{
			cout << " Desctructor called for " << name << endl;
		}

		double get_balance()
		{
			return balance;
		}
};
// Copy constructor get called instead of normal constructor whenever creating object from another object
// Must is pass by reference to avoid calling constructor everytime
// Must be const to avoid modifying source object values
Account::Account(const Account &source): name(source.name), balance(source.balance)
{
	cout << "Copy constructor called" << endl;
}

int main()
{
	Account acc1;

	cout << "Original Balance = " << acc1.get_balance() << endl;

	Account acc2(acc1);
	cout << "Original Balance = " << acc2.get_balance() << endl;
	
	return 0;
}
