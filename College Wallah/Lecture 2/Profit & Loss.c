#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter Cost Price: ",x);
    scanf("%d",&x);

    printf("Enter Selling Price: ", y);
    scanf("%d",&y);

    if (y>x)
    {
        printf("Profit");
    }

    else
    {
        printf("Loss");
    }

    if (y==x)
    {
        printf("No Profit, No Loss.");
    }

    return 0;
}

