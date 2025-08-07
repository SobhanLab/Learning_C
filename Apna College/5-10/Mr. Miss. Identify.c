#include<stdio.h>

void male();
void female();

int main() {
    printf("Enter your sex M/F: ");
    char ch;
    scanf("%c", &ch);

    if(ch=='M') {
        male();
    } else {
        female();
    }

    return 0;
}

void male() {
    printf("Mr.\n");
}

void female() {
    printf("Miss.\n");
}
