// 02matrix.c Rafael moura
// description: read a name and print the lenght of caracteres

#include <stdio.h>
#include <string.h>

int main()
{
	// VARIABLES
	char name[30];
	int i,spc;

	// DATA INPUT
	printf("\n enter the name:");
	gets(name);

	spc = strlen(name);

	// OUTPUT
	for (int i = 0; i < spc; ++i)
	{
		printf("\n %s", name);
	}

	return 0;
}