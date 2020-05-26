//04matrix.c Rafael Moura
// description: read the information (registration, name, sector,and salary).
// for 20 peoples.

#include <stdio.h>
#include <iostream.h>

// structs | registro
struct employeer
{
	int 	registration
	char	name[30];
	char 	sector[30];
	float 	salary;
};

int main()
{
	// variables
	employeer registration[20];
	int search, i, find;
	char op;

	for (int i = 0; i < 20; ++i)
	{
		printf("\nEnter the employeer registration:");
		cin >> data[i].registration;
		printf("\nEnter the name: ");
		cin >> data[i].name;
		printf("\nEnter the sector:");
		cin >> data[i].sector;
		printf("\nEnter the salary: ");
		cin >> data[i].salary;
	}
	do
	{
		printf("\nDo you want to do a search? (y/n) ");
		cin >> op;
	}
	while ((op !='y')&&(op !='Y')&&(op !='n')&&(op !='N'));
		while((op == Y) || (op == y))
		{
			printf("\nEnter the registration Number ");
			cin >> search;
			i = 0;
			find =0;

			while ((i<20)&&(find == 0))
			{
				if (data[i].registration == search)
				{
					find = 1;
				}
				else
				{
					i++;
				}
			}
			if (find == 1)
			{
				printf("\n The sector is: %s", data[i].sector);
				printf("\n The salary is: %.2f", data[i].salary);

			}
			else
			{
				printf("\n registration not finded");
			}
			do
			{
				printf("\nDo another search? (y/n)");
				cin >> op;
			}
			while ((op !='y')&&(op !='Y')&&(op !='n')&&(op !='N'));
		}

	return 0;
}

