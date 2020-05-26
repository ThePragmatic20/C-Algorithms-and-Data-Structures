// SortVector	Rafael Moura
// Description: sort a vector of 30 elements and print the elements in reverse 

#include <stdio.h>

int main(int argc, char const *argv[])
{
	//variables
	int vectorA[30];
	int i;

	for (int i = 0; i < 30; ++i)
	{
		printf("Enter the %d elements: ", i );
		scanf("%d", &vectorA[i]);
	}
	for (int i = 29; i >= 0 ; i--)
	{
		printf("\n %d",vectorA[i]);		
	}
	return 0;
}