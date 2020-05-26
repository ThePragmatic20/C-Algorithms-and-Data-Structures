// health.c Rafael Moura
// Description: read a name and age and inform the health plan mensal cost

#include <stdio.h>

// Health Plan Chart
const float kPlanPrice1 = 50.00;
const float kPlanPrice2 = 70.00;
const float kPlanPrice3 = 90.00;
const float kPlanPrice4 = 130.00;
const float kPlanPrice5 = 170.00;

int main()
{
	//variables 
	int age;
	char name[30];

	// Data input 
	printf("Enter your Name: \n");
	scanf("%s",name);
	printf("Enter your age: \n");
	scanf("%d", &age);

	// Conditions
	if (age <= 18)
	 {
	 	printf("Name: %s \n", name );
	 	printf("age: %d \n", age);
	 	printf("The Price of your health Plan: R$ %.2f \n", kPlanPrice1);
	 }
	 else
	 {
	 	if ((age >= 19) && (age <= 29))
	 	{
	 		printf("Name: %s \n", name );
	 		printf("age: %d \n", age);
	 		printf("The Price of your health Plan: R$ %.2f \n", kPlanPrice2);
	 	}
	 	else
	 	{
	 		if ((age >= 30) && (age <= 45))
	 		{
	 			printf("Name: %s \n", name );
	 			printf("age: %d \n", age);
	 			printf("The Price of your health Plan: R$ %.2f\n", kPlanPrice3);
	 		}
	 		else
	 		{
	 			if ((age >= 46) && (age <= 65))
	 			{
	 				printf("Name: %s \n", name );
	 				printf("age: %d \n", age);
	 				printf("The Price of your health Plan: R$ %.2f \n", kPlanPrice4);
	 			}
	 			else
				{
	 				printf("Name: %s \n", name );
	 				printf("age: %d \n", age);
	 				printf("The Price of your health Plan: R$ %.2f \n", kPlanPrice5);
	 			}
	 		}
		}
	}
	 
	 
	 
	return 0;
}
