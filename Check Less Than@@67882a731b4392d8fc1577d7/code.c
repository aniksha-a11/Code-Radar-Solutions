#include<stdio.h>
int main() {
    int firstnumber;
    int secondnumber;
    scanf("%d %d",&firstnumber ,&secondnumber);
    if(firstnumber<secondnumber) {
        printf("True");
    }
    else {
        printf("False");
    }
    return 0;
}