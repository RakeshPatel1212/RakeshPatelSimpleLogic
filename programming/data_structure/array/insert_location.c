#include<stdio.h>

#define DBG printf
// Time complexity O(n)
// Space complexity O(1)

void insertNumberAtIndex(int numbers[], int size, int index, int value)
{
	// Move elements by right
	//
	for(int count=size -1; count >=index; count--)
	{
		DBG("Moving value from index (%d) to (%d)\n", count, count+1);
		numbers[count+1] = numbers[count];
	}

	numbers[index] = value;


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

	printf("Size of array = (%u)\n", sizeof(numbers)/sizeof(numbers[0]));

	printArray(numbers, sizeof(numbers)/sizeof(numbers[0]));

	insertNumberAtIndex(numbers, sizeof(numbers)/sizeof(numbers[0]), 3, 1);

	printArray(numbers, sizeof(numbers)/sizeof(numbers[0]));
	return 0;
}

