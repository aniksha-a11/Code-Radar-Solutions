#include<stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&& ch<='z') {
        printf("Uppercase");
    }
    else if(ch<='A' && ch>='z') {
        printf("Lowecase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}