//01files.c Rafael Moura
//description: open a file ,verify if there is a error and read a charactere 
// and close the file.

#include <stdio.h>
#include <iostream>
//#include <conio.h>

int main()
{
	FILE *arq;
	char letter;

	arq = fopen("/home/rafael/code/c_lang/Algorithms","w");
	if (arq == NULL)
	{
		printf("\nThe file not open, error!");
	}
	else
	{
		printf("\n Enter a charactere");
	    cin >> letter;
		while ((letter != 'f') && (letter != 'F'))
		{
			fputc(letter,arq);
			if (ferror(arq))
		{
			printf("\nfailure in writting !!");
		}
		else
		{
			printf("\nWriting successfully!!");
		}
			printf("\nEnter another charactere: ");
			cin >> letter;
		}
	}
	return 0;
}