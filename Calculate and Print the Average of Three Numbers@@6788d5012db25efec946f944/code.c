#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float sum = (float)a+b+c;
    printf("Average: %.2f",sum/3);
    return 0;
}