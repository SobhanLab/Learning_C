#include<stdio.h>

int main ()
{
    float phy1 = 78;
    float phy2 = 78;
    float che1 = 82;
    float che2 = 82;
    float bio1 = 84;
    float bio2 = 84;
    float mat1 = 71;
    float mat2 = 71;
    float ban1 = 81;
    float ban2 = 81;
    float eng1 = 77;
    float eng2 = 77;
    float ict  = 94;

    float Percentage = (phy1+phy2+che1+che2+bio1+bio2+mat1+mat2+ban1+ban2+eng1+eng2+ict) / 13;

    printf("My HSC Percentage is: %.2f", Percentage);


    return 0;
}
