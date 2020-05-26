//023files.c Rafael Moura
//description: read a file of 50 characteres.

#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>

int main()
{
	// Variables
	FILE *arq;
	char phrase[50];
	arq = fopen("Your Directory | c:\\file.txt:",w);
	if (arr == NULL)
	{
		print("\n The file do not open.");

	}
	else
	{
		while(!feof(arq))
		{
			fgets(phrase, 50,arq);
			if (ferror(arq))
			{
				printf("\nError while reading.!!");
			}
			else
			{
				printf("\nRead succsesfully. the chain is %s",phrase);
			}
		}
	}
	fclose(arq);
}