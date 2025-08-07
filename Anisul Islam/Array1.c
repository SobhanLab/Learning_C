#include<stdio.h>

int main(){

  /* Array Declaration;
     data_type array_name [array_size]
     */
    int marks[100];

    for(int i=0; i<=4; i++){
        scanf("%d", &marks[i]);
    }
        for(int i=0; i<=4; i++){
        printf("Marks: %d\n", marks[i]);
    }
    return 0;

}
