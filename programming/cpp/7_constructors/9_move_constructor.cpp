#include<iostream>

using namespace std;
class Move
{
	private:

		int *data;

	public:

		Move();
		Move(int d);
		Move(Move &&source);

		~Move();
};

// Constructor
Move::Move(int d)
{
	data = new int;
	*data = d;

}

// Destructor
Move::~Move()
{
	cout << "Delete ptr value = " << data << endl;
	delete data;
}

// Move constructor
// No const as we are modiying source object
// Move memory pointer from source to destination
Move::Move(Move &&source): data(source.data)
{
	source.data = NULL;
	cout << "Move constructor called" << endl;
}

int main()
{
	Move s1(10);

	Move s2 = std::move(s1);


	return 0;
}
