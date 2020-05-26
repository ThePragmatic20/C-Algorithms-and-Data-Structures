//03matrix.c Rafael Moura
// description: read the grades of 20 students and print the avarage

#include <stdio.h>

int main()
{
	// Variables
	float avr[20];
	float grades[20] [4];
	float Ksum, Kavr, sum;
	int   i,j;

	Ksum = 0;
	Kavr = 0;

	// DATA INPUT
	for (i = 0; i < 20; ++i)
	{
		sum = 0;
		for ( j = 0; j < 4; ++j)
		{
			printf("\nEnter the grade %d from the student %d",i+1,j+1);
			scanf("%f",&grades[i][j]);
			sum = sum + grades[i][j];
		}
		avr[i] = sum/4;
		Ksum = Ksum + avr[i];
	}
	// Output
	Kavr = Ksum/20;
	for (i = 0; i < =20; ++i)
	{
		printf("\n the avarage of the student %d is %.2f:", i,avr[i]);
	}

	printf("=\n the avarage of the class is: %d",Kavr);
	return 0;
}