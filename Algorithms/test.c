// square.c: Rafael Moura
// Description: read a positive Number and show the sqrt

#include <stdio.h>
#include <math.h>

int main()
{
    //declaration of variables
    int num;

    // Data Input
    printf("type a number: \n");
    scanf("%d", &num);

    //processing
    printf("\nthe square of %d it's %.2f \n",num, Pow(num, 2));
    printf("the sqrt of %d it's %.2f \n", num, Sqrt(num));


    return 0;
}
