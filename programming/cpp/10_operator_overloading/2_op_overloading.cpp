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


MyString& MyString::operator=(const MyString &source)
{
	delete[] my_str; // free old data
	my_str = new char[std::strlen(source.my_str) + 1];

	strcpy(my_str, source.my_str);
	
	return *this;
}

int main()
{
	MyString obj1;
	MyString obj2("Rakesh is here");
	
	obj1.operator=(obj2);
	//obj1 = obj2;

	return 0;
}
