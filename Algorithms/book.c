// book.c	Rafael Moura
// Description: register 20 books and build a Menu

#include <stdio.h>
#include <iostream>
//#include <conio.h> use this in Windows


struct book
{
	int  code;
	char tittle[50];
	char author[30];
	char topic[30];
	int  year;
	char publisher[30];
};

int main()
{
	//variables 
	book registration[20];
	book swap;
	int search,i,j,find,op;
	op = 0;

	//menu
	while (op != 5)
	{
		printf("\n 1 - Register a Book:");
		printf("\n 2 - Print the register books:");
		printf("\n 3 - Search Books for topics:");
		printf("\n 4 - organize by years:");
		printf("\n 5 - Exit");
		printf("\n Please enter the option: ");
		scanf("%d",&op);

		//Conditionals 
		if (op == 1)
		{	
			system("clear"); // in Windows you use "clrscr();" with the conio.h lib
			for (int i = 0; i < 20; ++i)
			{
				printf("Enter the book's code: %d ", i+1 );
				cin >> registration[i].code;
				printf("Enter the Tittle: ");
				cin >> registration[i].tittle;
				printf("Enter the author name: ");
				cin >> registration[i].author;
				printf("Enter the topic of the book:  ");
				cin >> registration[i].topic;
				printf("Enter the year of the book: ");
				cin >> registration[i].year;
				printf("Enter the publisher: ");
				cin >> registration[i].publisher;
			}
		}
		else
		{
			if (op == 2)
			{
				system("clear");
				for (int i = 0; i < 20; ++i)
				{
					printf("\nCode: %d", registration[i].code);
					printf("\nTittle: %s", registration[i].tittle);
					printf("\nAuthor: %s", registration[i].author);
					printf("\nTopic: %s", registration[i].topic);
					printf("\nYear: %d", registration[i].year);
					printf("\nPublisher: %s", registration[i].publisher);
				}
			}
			else
			{
				if (op == 3)
				{
					
					system("clear");
					printf("Enter the search :");
					scanf("%d",&search);
					i = 0;
					find = 0;
					
					while ((i < 20) && (find == 0))
					{
						if (registration[i].code == search)
						{
							find = 1;
						}
						else
						{
							i++;
						}
					}
					if (find  == 1)
					{
						printf("\nCode: %d", registration[i].code);
						printf("\nTittle: %s", registration[i].tittle);
						printf("\nAuthor: %s", registration[i].author);
						printf("\nTopic: %s", registration[i].topic);
						printf("\nYear: %d", registration[i].year);
						printf("\nPublisher: %s", registration[i].publisher);
					}
					else
					{
						printf("\nRegister not finded.");
					}
				}
				else
				{
					if (op == 4) // bubble sort
					{
						system("clear");
						for (int i = 0; i < 19; ++i)
						{
							for(j = i +1; j< 20,j++;)
							{
								if (registration[i].year > registration[j].code)
								{
									swap = registration[i];
									registration[i] = registration[j];
									registration[j] = swap;
								}
							}
						}
					}
				}

				for (int i = 0; i < 20; ++i)
				{
					printf("\nCode: %d, tittle: %s, year: %d", registration[i].code,
						registration[i].tittle, registration[i].year);
				}
			}
		}
	} 

	return 0;
}