//2vectors Rafael Moura
// Description: sum 2 vectors and print in a third vector.
// and sort it

#include <stdio.h>

int main(int argc, char const *argv[])
{
	//variables
	int vectorA[10], vectorB[10], vectorC[10];
	int swap;

	//Add the Numbers in the vectors A and B 
	for (int i = 0; i < 10; ++i)
	{
		printf("Enter the Number %d for the vectorA: ", i);
		scanf("%d",&vectorA[i]);
		printf("Enter the Number %d for the vectorB: ", i);
		scanf("%d",&vectorB[i]);

		//Sum the two vectors 
		vectorC[i] = vectorA[i] + vectorB[i];
	}
	// Sort
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			if (vectorC[i] > vectorC[j])
			{
				swap = vectorC[i];
				vectorC[i] = vectorC[j];
				vectorC[j] = swap;
			}
		}
	}
	// Print the Output
	for (int i = 0; i < 10; ++i)
	{
		printf("%d", vectorC[i]);
	}
	return 0;
}