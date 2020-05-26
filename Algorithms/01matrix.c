// 01matrix.c Rafael Moura
// Description: Matrix implementation.

#include <stdio.h>

int main()
{
	// variables 
	int MatrixA [2] [10];
	int i,j;

	// data input
	for (i = 0; i < 2; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			printf("\n Enter the %d %d elements of the Matrix",i,j);
			scanf("%d",&MatrixA[i][j]);
		}
	}
	for (j = 0; j < 2; ++j)
	{
		for (int i = 0; i < 10; ++i)
		{
			printf("\n The element on position %d %d is: %d", i,j, MatrixA[i][j]);
		}
	}
	
	return 0;
}