//reverseS.c	Rafael MOura
// description: print the reverse string 

#include <stdio.h>
#include <string.h>

int main()
{
	// variables 
	char name[30];
	int i, spc;
	
	// data input
	printf("\n Enter the Name: ");
	gets(name);

	spc = strlen(name);
	// conditionals
	for (int i = spc; i >= 0; --i)
	{
		printf("%c",name[i]);
	}
	return 0;
}