#include<stdio.h>
int main() {
    float radius;
    scanf("%f",&radius);
    const float pi = 3.14;
    float area= pi * radius * radius;
    printf("Area: %f",area);
    return 0;

}
