#include<stdio.h>
int main ()
{
    int l, b;

    printf("Enter length: ");
    scanf("%d",&l);

    printf("Enter breadth: ");
    scanf("%d",&b);

    int a = l*b;
    int p = 2*(l+b);

    if (a>p)
    {
        printf("Are is greater than perimeter.");
    }
    else
    {
        printf("Are is not greater than perimeter.");
    }


    return 0;
}
