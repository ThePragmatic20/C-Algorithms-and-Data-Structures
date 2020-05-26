//pointers02.c Rafael Moura
//description: print a value of pointer and your variables.

#include <stdio.h>
#include <stdlib.h>

int xi; 
int *ptr_xi;

void print() {
	printf("\n value of xi = %d", xi);
	printf("\n value of &xi = %p", &xi);
	printf("\n value of ptr_xi = %p", ptr_xi);
	printf("\n value of *ptr_xi = %d \n", *ptr_xi);

}
int main(int argc, char const *argv[])
{
	xi = 10;
	ptr_xi = &xi;
	print();

	xi =20;
	print();

	*ptr_xi = 30;
	print();

	return 0;
}