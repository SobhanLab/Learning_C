//Take float input and print the fractional part of the real number.

#include<stdio.h>

int main ()
{
    float input;
    printf("Enter an Float Number: ",input);
    scanf("%f", &input);

    int carry = input;
    printf("%d", carry);

    float output = (carry - input);
    printf("The fractional part of the real number is: %f", output);

    return 0;
}
