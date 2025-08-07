#include<stdio.h>
int main ()
{
    int a,b,c;

    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    printf("Enter 3rd Number: ");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("1st Number %d is Greatest.",a);
    }

    if (b>a && b>c)
    {
        printf("2nd Number %d is Greatest.",b);
    }

    if (c>a && c>b)
    {
        printf("3rd Number %d is Greatest.",c);
    }

    return 0;
}
