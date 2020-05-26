//exVector.c Rafael Moura
// Description: simple manipulation of vectors

#include <stdio.h>

int main(int argc, char const *argv[])
{
	//variables
	int vectorA[10];
	int i;

	// Data Input
	for (int i = 0; i < 10; ++i)
	{
		printf("\n Enter  the numbers: ");
		scanf("%d", &vectorA[i]);

	}
	printf("\n Vector is completed.");
	
	// Processing
	for (i = 0; i < 10; ++i)
	{
		printf("\n The element in position %d is: %d",i ,vectorA[i]);
	}

	return 0;
}