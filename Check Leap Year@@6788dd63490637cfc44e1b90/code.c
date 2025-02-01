#include<stdio.h>
int main() {
    int b;
    scanf("%d",&b);
    if(b%4==0 && b%100!=0) {
        printf("Leap Year");
    }
    else {
        printf("Not a Leap Year");
    }
    return 0;
}