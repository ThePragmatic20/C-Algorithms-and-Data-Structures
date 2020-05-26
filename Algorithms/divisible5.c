

#include <stdio.h>

int main()
{

    //variables
    int num;

    //data input
    printf("\ndigite a number: ");
    scanf("%d", num);

    //processing
    if (num % 5 == 0)
    {
        printf("\n the number %d is divisible by 5",num);
    }
    else
    {
        printf("\n the number %d is not divisible by 5",num);
    }
    return 0;
}