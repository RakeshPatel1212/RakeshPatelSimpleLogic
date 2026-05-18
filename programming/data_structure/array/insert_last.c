#include<stdio.h>


void insertNumberAtLast(int numbers[], int size, int value)
{
	// Move elements by right
	//
	for(int count=size -1; count >=0; count--)
	{
		numbers[count+1] = numbers[count];
	}

	numbers[0] = value;


}

void printArray(int numbers[], int size)
{
	printf("Values are: ");
	for(int count=0; count < size; count++)
	{
		printf("%d ", numbers[count]);
	}

	printf("\n");
}
int main()
{
	int numbers[]={2,3,4,5,0};


	printArray(numbers, sizeof(numbers)/sizeof(numbers[0]));

	insertNumberAtBeginning(numbers, sizeof(numbers)/sizeof(numbers[0]), 1);

	printArray(numbers, sizeof(numbers)/sizeof(numbers[0]));
	return 0;
}

