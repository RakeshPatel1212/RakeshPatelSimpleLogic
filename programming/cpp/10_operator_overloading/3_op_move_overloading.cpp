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
		MyString& operator=(const MyString &source);
		MyString& operator=(MyString &&source);
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
	cout << "Distructor called"  << "String is = " << my_str << endl;
	delete[] my_str;
}

// assignemnt copy operator overloading
MyString& MyString::operator=(const MyString &source)
{
	cout << "OP overload copy called" << endl;
	delete[] my_str; // free old data
	my_str = new char[std::strlen(source.my_str) + 1];

	strcpy(my_str, source.my_str);
	
	return *this;
}

// assignemnt move operator overloading
MyString& MyString::operator=(MyString &&source)
{
	cout << "OP overload move called" << endl;
	if (my_str) delete[] my_str; // free old data
	my_str = source.my_str;

	source.my_str = NULL;

	return *this;
}
int main()
{
	MyString obj1;
	
	//obj1.operator=(obj2);
	//obj1 = obj2;

	//obj1 = "Rakesh";
	obj1.operator=(MyString("Rakesh"));

	return 0;
}
