#include<stdio.h>
int main ()
{
    double x1,y1,x2,y2,x3,y3;
    printf("Enter The Value of x1,y1: ");
    scanf("%lf, %lf", &x1,&y1);
    printf("Enter The Value of x2,y2: ");
    scanf("%lf, %lf", &x2,&y2);
    printf("Enter The Value of x3,y3: ");
    scanf("%lf, %lf", &x3,&y3);

    double m1 = (y2-y1)/(x2-x1);
    double m2 = (y3-y2)/(x3-x2);

    if (m1==m2){
        printf("Three points fall on one straight line.\n");
    }
    else{
        printf("Three points not fall on one straight line.\n");
    }


    return 0;
}
