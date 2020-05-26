//
//

#include <stdio.h>

int main()
{
    float base1, base2, hight, area;

    printf("insert the value of the biggest base: \n");
    scanf("%f", &base1);
    printf("insert the value of the shortest base: \n");
    scanf("%f", &base2);
    printf("insert the value of the hight: \n");
    scanf("%f", &hight);

    area = ((base1 * base2 )* hight)/2;

    printf("the value of the trapezio is: %.2f \n", area);
}