//
//

#include <stdio.h>
#include <math.h>
#define pi 3.141593

int main()
{
    // define variables 
    float r; // radio

    printf("type the value of the radio of the circle: ");
    scanf("%f",&r);
    printf("\n the value of the area is: %f ",pi*pow(r,2));
    printf("\n the value of the perimeter is : %f",2*pi*r);
    
    return 0;
}