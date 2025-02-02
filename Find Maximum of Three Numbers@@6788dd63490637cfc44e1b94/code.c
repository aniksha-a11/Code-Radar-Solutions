#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a ,&b ,&c);
    if(a>b>c || c>b>a) {
        printf("30");
    }
    else {
        printf("50");
    }
    return 0;
}