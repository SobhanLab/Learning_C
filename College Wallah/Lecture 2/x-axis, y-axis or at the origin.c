#include<stdio.h>
int main ()
{
    int x,y;
    printf("Enter the cordinates: ");
    scanf("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("The point is origin.\n");
    }
    else if (x==0){
        printf("Lies on y-axis.\n");
    }
    else if (y==0){
        printf("Lies on x-axis.\n");
    }
    else {
        printf("Does not lie on x or y axis.\n");
    }

    return 0;
}
