#include<stdio.h>
int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a ,&b ,&c);
    if(a>b>c || c>b>a) {
        printf("%d",c);
    }
    else {
        printf("%d",a);
    }
    return 0;
}