#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if (n%5==0 && n%3==0)
    {
        printf("This Number is divisible by 5 & 3.");
    }
    else
    {
        printf("This Number is not divisible by 5 & 3.");
    }

    return 0;
}
