#include<stdio.h>
int main() {
    char name[100];
    int a;
    char hobby[100];
    scanf("%s %d %s", &name, &a, &hobby);
    printf("Name:",name);
    printf("Age: ",a);
    printf("Hobby: ",hobby);
    return 0;
    }