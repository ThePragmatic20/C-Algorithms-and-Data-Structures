// vote.c Rafael Moura
// Description: vote system 


#include <stdio.h>

int main(int argc, char const *argv[])
{
	//variables 
	char name[30];
	int age;

	//data input
	printf("Please Enter Your Name: \n");
	scanf("%s",name);
	printf("Please Enter Your Age: \n");
	scanf("%d",&age);


	//Processing conditionals
	if (age < 16)
	{
		printf("Sorry, %s unfurtunely you can't Vote.\n", name );
	}
	else
	{
		if ((age >= 16) && (age <= 17))
		{
			printf("Hello, %s You are a elective voter.\n",name );
		}
		else
		{
			if ((age >= 18 ) && (age <= 65))
			{
				printf("Hello, %s You are a mandatory voter.\n",name );
			}
			else
			{
				printf("Hello, %s You are a elective voter.\n",name );
			}
		}
	}
	return 0;
}