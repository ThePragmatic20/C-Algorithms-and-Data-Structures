// gpa.c: Rafael Moura
// Description: Read 4 gpa's grades and output the average

#include <stdio.h>

int main()
{

    // Variables
    float n1, n2, n3, n4,avr;

    // Data Input
    printf("type the 1º grade\n");
    scanf("%f",&n1);
    printf("type the 2º grade\n");
    scanf("%f", &n2);   
    printf("type the 3º grade\n");
    scanf("%f", &n3);
    printf("type the 4º grade\n");
    scanf("%f", &n4);

    // Processing
    avr = (n1 + n2 + n3 + n4)/4;
    
    //Output
    printf("the average is: %.2f\n", avr);
    
    return 0;
}