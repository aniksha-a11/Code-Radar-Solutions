#include<stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a ,&b ,&c);
    if(c=='+')
    printf("%d",a+b);
    else if(c=='-') {
        printf("%d",a-b);
    }
    else if(c=='*') {
        printf("%d",a*b);
    }
    else if(c=='/') {
        printf("%d",a*b);
    if(b!=0) 
        printf("%d",a/b);
    
    else 
        printf("error");
    }
    else {
        printf("error");
    }
    return 0;

}