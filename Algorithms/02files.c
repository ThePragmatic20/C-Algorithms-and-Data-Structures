//02files.c Rafael Moura
//description: writting a chain of characteres and print the end.

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>

int main()
{
	// Variables
	FILE *arq;
	char word;
	arq = fopen("Your Directory | c:\\file.txt:",w);
	if (arr == NULL)
	{
		print("\n The file do not open.");

	}
	else
	{
		printf("\n Enter a Word: ");
		gets(word);
		while((stricm(word,"End"))!=0)
		{
			fputs(word,arq);
		if (ferror(arq))
		{
			printf("\nError while writting.!");
		}else
		{
			printf("writting with Success. "); // formating
		}
		printf("\n Enter a word: ");
		get(word);

		}
	}
	fclose(arq);
}