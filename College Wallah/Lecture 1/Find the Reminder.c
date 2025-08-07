//When a is devided by B
/* We Know; vhagfol*vajok+vagses=vajjo
 tai, vhagses = vajjo - vhagfol*vajok
 dhori, r=a-b*q
 */

#include<stdio.h>
int main ()
{
    int a,b; // a>b
    printf("Enter Divident: ");
    scanf("%d", &a);

    printf("Enter Divisor: ");
    scanf("%d", &b);

    int q = a/b;
    int r = a - b*q;
    printf("The Reminder when %d is devided by %d is: %d",a,b,r);

    return 0;
}
