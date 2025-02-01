#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a ,&b ,&c);
    if(c>b>a && a>b>c) {
        printf("30");
    }
    else {
        printf("50");
    }
    return 0;
}