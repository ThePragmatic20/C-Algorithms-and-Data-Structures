// read_name.c: Rafael Moura
// Description: Read a name, age, and how tal

#include <stdio.h>

int main()
{
    // var declaration
    int age , year, option;
    float tall;
    char name[30];

    // Data input
    printf("Select a type of Measure: \n");
    printf("1 - USA\n");
    printf("2 - Eu \n");
    scanf("%d",&option);
    printf("\ntype ypur Name: ");
    scanf("%s", name);
    printf("type your age: ");
    scanf("%d", &age);
    printf("type your how tall are you :");
    scanf("%f",&tall);

    // Processing

    year = 2020 - age; // birth year

        // Output 
    printf("\nYour Name is : %s",name);
    printf("\nYour Age is : %d",age);
    printf("\nYou born in : %d",year);

    // conditionall of standarts USA-EU
    if (option == 1 )
    {
        printf("\nyou are %.2f,ft \n",tall);
    }
    else
    {
        printf("\nyou are %.2f,mts \n",tall);
    }
    


    return 0;
}
