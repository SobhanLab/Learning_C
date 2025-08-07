#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    int sum = 0;
    for(int i=1; i<=n; i++){
            sum = a+b;
            a=b;
            b=sum;

    }
    printf("Fibonacci of the %d is %d", n,sum);

    return 0;
}

