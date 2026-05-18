#include <iostream>

using namespace std;

class Account
{
	private:
		double balance = 0;
		static int total_obj;
	public:
		// constructor
		Account()
		{
			total_obj++;
			cout << "Constructor called" << endl;
		}

		// Distructor 
		~Account()
		{
			total_obj--;
			cout << "Distructor called" << endl;
		}

		static void displayTotalObj(void)
		{
			cout << "Total obj = " << total_obj << endl;
		}
};

// Initiazltion for static variable
int Account::total_obj =0;

int main()
{
	Account::displayTotalObj();
	{
		Account acc1;

		Account::displayTotalObj();
	}
	Account::displayTotalObj();


	
	return 0;
}
