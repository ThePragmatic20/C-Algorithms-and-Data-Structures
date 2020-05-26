//ex1Vector.c Rafael Moura
// description: bubble sort in vector.

#include <stdio.h>

int main()
{
	// variables
	int vectorA[10];
	int i, j, swap;

	// Data input
	for (int i = 0; i < 10; ++i)
	{
		printf("\n Enter the %d element:", i +1);
		scanf("%d",&vectorA[i]);
	}
	// sort using the bubble sort method
	for (int i = 0; i < 9; ++i)
	{
		for (j = i+1; j<10; j++)
		{
			if (vectorA[i] > vectorA[j])
			{
				swap = vectorA[i];
				vectorA[i] = vectorA[j];
				vectorA[j] =swap;
			}
		}
	}
	// Output
	printf("\n the vector is sorted.");
	for (int i = 0; i < 10; ++i)
	{
		printf("%d -", vectorA[i]);		
	}
	return 0;
}