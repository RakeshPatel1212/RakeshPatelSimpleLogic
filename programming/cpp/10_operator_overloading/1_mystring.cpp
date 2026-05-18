#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class MyString
{

	private:
		char *my_str = NULL;


	public:

		MyString();
		MyString(const char*s);

		~MyString();

};

MyString::MyString(): my_str(NULL)
{
	cout << "No args constructor called" << endl;
	my_str = new char[1];
	my_str[0] = '\0';

}

MyString::MyString(const char *s): my_str(NULL)
{
	cout << "One args constructor called" << endl;
	my_str = new char[strlen(s) + 1];
	strcpy(my_str, s);

}
MyString::~MyString()
{
	cout << "Distructor called" << endl;
	delete my_str;
}

int main()
{
	MyString obj1;
	MyString obj2("Rakesh is here");
	


	return 0;
}
