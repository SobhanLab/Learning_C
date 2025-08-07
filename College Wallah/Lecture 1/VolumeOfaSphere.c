#include<stdio.h>

int main ()
{
    int radius;
    printf("Enter The Value of r: ", radius);
    scanf("%d", &radius);

    int r=7;
    float v = 4*3.1416*radius*radius*radius/3;

    printf("The Volume is: %.2f", v);

    return 0;
}
