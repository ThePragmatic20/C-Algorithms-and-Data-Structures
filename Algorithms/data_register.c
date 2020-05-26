// data_register.c  Rafael Moura
// Description: use structs in the program
// to register the description of the document

#include <stdio.h>

 // struct | registro
    struct product
{
    int code;
    char description[50];
    float price;
    int value;
};

int main()
{
   
    struct product data;

    printf("\nType the product code: ");
    scanf("%d", &data.code);
    printf("Enter the Description of the product: \n");
    scanf("%s",data.description);
    fflush(stdin); // This clean the keyboard buffer


    gets(data.description); // this insert space caracter

    printf("Enter the Product Price: \n");
    scanf("%f", &data.price);
    printf("Enter the Product value: \n");
    scanf("%d", &data.value);

	//Output
    printf("Code: %d \n", data.code);
    printf("Description: %s \n",data.description);
    printf("Price: %.2f \n", data.price);
    printf("Value: %d \n", data.value);

    return 0;
}
