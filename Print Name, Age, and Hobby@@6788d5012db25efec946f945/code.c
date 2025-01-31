#include<stdio.h>
int main() {
    char name[100];
    int age;
    char hobby[100];
    scanf("%s %d %s", &name, &age, &hobby);
    printf("Name:\n",name);
    printf("Age: \n",age);
    printf("Hobby: \n",hobby);
    return 0;
    }