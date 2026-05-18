#include<stdio.h>
#include <stdint.h>

#define DBG printf
// Time complexity O(n)
// Space complexity O(1)

void deleteNumberByValue(int numbers[], int size, int value)
{
	uint8_t found = 0;
	for(int count=0; count <= size -1; count++)
	{
		DBG("Comparing value(%d) from index (%d) with (%d)\n", numbers[count], count, value);

		if (found == 1)
		{
			numbers[count -1] = numbers[count];
		}
		else if (value == numbers[count])
		{
			DBG("Match found at index (%d)\n", count);
			found = 1;
		}

	}
}

void deleteNumberByIndex(int numbers[], int size, int index)
{
	for(int count=index+1; count < size; count++)
	{
		DBG("Moving from index(%d) to index (%d)\n", count, count -1);
		numbers[count-1] = numbers[count];
	}
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

	deleteNumberByValue(numbers, sizeof(numbers)/sizeof(numbers[0]), 3);

	printArray(numbers, sizeof(numbers)/sizeof(numbers[0]));

	deleteNumberByIndex(numbers, sizeof(numbers)/sizeof(numbers[0]), 2);

	printArray(numbers, sizeof(numbers)/sizeof(numbers[0]));
	return 0;
}

