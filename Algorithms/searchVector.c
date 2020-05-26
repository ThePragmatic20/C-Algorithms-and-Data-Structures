// searchVector.c  Rafael Moura
// Description: implement the search in vector method

#include <stdio.h>

int main()
{
	//variables
	int vectorA[10];
	int i, find, search;

	// data input
	for (int i = 0; i < 10; ++i)
	{
		printf("\n Enter the %d", i+1);
		scanf("%d",&vectorA[i]);

	}
	// Search
	printf("\n Enter the name for search in the vector:");
	scanf("%d",&search);

	i = 0;
	find = 0;

	while ((find == 0) && (i < 10))
	{
		if (vectorA[i] == search)
		{
			acha = 1;
		}
		else
		{
			i++
		}
	}
	if (find == 1)
	{
		printf("\n the element %d was finded in the %d position.",search, i);
	}
	else
	{
		printf("\n Element no finded.");
	}

	return 0;
}