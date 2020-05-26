// bank_deposit.c: Rafael Moura
// Description: receive a deposit and calculate the amount of interest and print the output

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //variables 
    float deposit, tax, yield , total;

    // Data Input 
    printf("enter the deposit amount: \n");
    scanf("%f", &deposit);

    printf("enter the interest rate: \n");
    scanf("%f", &tax);

    //processing
    yield = deposit * (tax/100);

    total = deposit + yield;

    //output
    printf("the yield is: %.2f \n",yield);
    printf("and the total is: %.2f \n", total);

    return 0;
}
