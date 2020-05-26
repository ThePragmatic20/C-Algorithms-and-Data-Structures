// fat.c Rafael Moura
// Description:	read a number and print the factorial.


#include <stdio.h>

int main(int argc, char const *argv[])
{
	//variables 
	int num, i, fat;

	// data input
	printf("Enter the Number: \n");
	scanf("%d",&num);

	fat = 1;

	// loop
	for (int i = 1; i <= num; ++i)
		fat =  fat * i;
	printf("the factorial of %d is %d \n", num, fat);

	return 0;
}