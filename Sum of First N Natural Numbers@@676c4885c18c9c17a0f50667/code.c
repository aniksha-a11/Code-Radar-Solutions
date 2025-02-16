#include<stdio.h>
int main() {
    int i, sum=0;
    scanf("%d",&i);
    for(i=1; i<=5; i++) {
        sum=sum+i;
        printf("%d",i);
    }
    printf("%d",&sum);
    return 0;
}