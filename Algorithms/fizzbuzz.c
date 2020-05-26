// fizzbuzz.c Rafael Moura
// description: print the numbers to 1-100.
// and if the number is multiple of 3 print fizz
// if the number is multiple of 5 print buzz and 
// if the number is multiple of 3 and 5 print fizzbuzz.

#include <stdio.h>

int main()
{
	int i;
	//loop and a conditional
	for (int i = 1; i <= 100; ++i)
	{
		if(i%3 == 0 && i%5 ==0){
      printf("Fizzbuzz! %d\n",i);
    }
    else if (i%5 == 0) {
      printf("Buzz! %d\n",i);
    }
    else if (i%3 == 0 ) {
      printf("Fizz %d \n",i);
    }
  }
	return 0;
}