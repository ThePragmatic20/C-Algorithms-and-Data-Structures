// pointers05.c Rafael Moura
// description: exercice 1

#include <stdio.h>
#include <stdlib.h>
int main()
{
	//variables
	int *ptr;
	ptr  = (int *) malloc(sizeof(int));
	*ptr = 42;
	printf("\nThe Adress: %p\nValue: %d\n\n",ptr, *ptr);
	return 0;
}