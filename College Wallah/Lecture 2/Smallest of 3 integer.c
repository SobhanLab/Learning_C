#include<stdio.h>
int main ()
{
    int Wahab,Samad,Sobhan;

    printf("Enter Wahab Age: ");
    scanf("%d",&Wahab);
    printf("Enter Samad Age: ");
    scanf("%d",&Samad);
    printf("Enter Sobhan Age: ");
    scanf("%d",&Sobhan);

    if (Wahab<Samad && Wahab<Sobhan)
    {
        printf(" Wahab is Youngest.");
    }

    if (Samad<Wahab && Samad<Sobhan)
    {
        printf("Samad is Youngest.");
    }

    if (Sobhan<Wahab && Sobhan<Samad)
    {
        printf("Sobhan is Youngest.");
    }

    return 0;
}
