// array5.c	Rafael Moura
// Description: print 5 numbers and show the biggest to small.

#include <stdio.h>

int main(int argc, char const *argv[])
{
	//varibles 
	int list[5]; //vector of 5 positions
	int big, small, i;

	//data input
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter the %d number: \n", i + 1);
		scanf("%d", &list[i]);
	}

	big = list[0];
	small = list[0];

	// logic
	for (int i = 0; i < 5; ++i)
	{
		if (list[i] > big)
			big = list[i];
		if (list[i] < small)
			small = list[i];
	}

	//Output
	printf("\n The Biggest Number is %d",big);
	printf("\nThe Smallest Number is %d \n", small);
	return 0;
}