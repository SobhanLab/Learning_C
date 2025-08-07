#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    if((n%5==0 || n%3==0) && n%15!=0)
    {
        printf("The Number is divisible by 5 or 3 but not 15.\n");
    }
    else
    {
        printf("The Number is not matching our condition.\n");
    }

    return 0;
}

