//Formula, SI=PRT/100

#include<stdio.h>

int main ()
{
    float principal,rate,time, SI;

    printf("Enter Principal: ", principal);
    scanf("%f", &principal);

    printf("Enter rate: ", rate);
    scanf("%f", &rate);

    printf("Enter time: ", time);
    scanf("%f", &time);


    SI = (principal*rate*time) / 100;
    printf("Your Simple Interest is: %.2f", SI);

    return 0;
}
