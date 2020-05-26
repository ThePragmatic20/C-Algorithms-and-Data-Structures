// pointers03.c Rafael Moura
// descrition: build a dynamic vector.

#include <stdio.h>

int main()
{
	//variables
	int tam;
	int *vector;

	//data input
	printf("\n Enter the size of the vector: ");
	scanf("%d",&tam);

	vector = (int *) malloc(sizeof (int)*tam);

	for (int i = 0; i < tam; ++i)
	{
		vector[i] = pow(2,1);
		printf("\n Position %d: %d\n",i , vector[i]);
	}

	return 0;
}