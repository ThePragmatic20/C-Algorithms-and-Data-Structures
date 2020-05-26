// pairEven.c	Rafael Moura
// Description: the app read the name and print the even positions

#include <stdio.h>
#include <string.h>
int main()
{
	//Variables
	char name[30];
	int  tam, i;
	// data input
	printf("\n Enter the name: ");
	
	gets(name);

	tam = strlen(name);
	//conditional 
	for (int i = 0; i < tam; ++i)
	{	
		// if the value of i is divisible by 2 and the rest is 2 we printed the even letters
		if (i % 2 == 1) 
			printf("\n %c ", name[i]);
	}


	return 0;
}