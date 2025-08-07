//Take integer as input and print half of the number.

#include<stdio.h>

int main ()
{
    int input;
    printf("Enter an Integer Number: ",input);
    scanf("%d",&input);

    float output = (input / 2);
    printf("Half of the input Number is: %.2f",output);

    return 0;
}
