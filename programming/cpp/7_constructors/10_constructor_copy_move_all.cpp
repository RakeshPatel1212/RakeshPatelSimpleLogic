#include<iostream>
#include<vector>

#define WITHMOVE 1

using namespace std;
class Move
{
	private:

		int *data;

	public:

		Move();
		Move(int d);
		Move(const Move &source);
	#if WITHMOVE
		Move(Move &&source);
	#endif
		~Move();
};

// Constructor
Move::Move(int d)
{
	cout << "Constructor called" << endl;
	data = new int;
	*data = d;

}

// Destructor
Move::~Move()
{
	cout << "Delete ptr value = " << data << endl;
	delete data;
}

Move::Move(const Move &source)
{
	data = new int;
	*data = *source.data;
	cout << "Copy constructor called" << endl;
}
#if WITHMOVE
// Move constructor
// No const as we are modiying source object
// Move memory pointer from source to destination

Move::Move(Move &&source): data(source.data)
{
	source.data = NULL;
	cout << "Move constructor called" << endl;
}
#endif

int main()
{
	vector <Move> myValues;

	myValues.push_back(Move(10));
	//myValues.push_back(Move(20));


	return 0;
}
