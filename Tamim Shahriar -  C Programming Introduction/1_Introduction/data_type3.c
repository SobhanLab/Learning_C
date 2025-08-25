#include<stdio.h>

int main(){
    int x, y, z;
    printf("Enter the value of x and then y: ");
    scanf("%d %d", &x, &y);

    z = x+y;

    printf("The sum of %d and %d is: %d", x,y,z);

    return 0;
}

