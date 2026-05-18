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

		~Account()
		{
			cout << " Desctructor called for " << name << endl;
		}

		double get_balance()
		{
			return balance;
		}
};

int main()
{
	Account acc1;

	cout << "Original Balance = " << acc1.get_balance() << endl;

	Account acc2(200, "SecondObject");
	cout << "Original Balance = " << acc2.get_balance() << endl;
	
	return 0;
}
