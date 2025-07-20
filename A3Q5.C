//C Program to identify the lowercase and uppercase letter
#include<stdio.h>
int main() {
    char x;
    printf("Enter Character:");
    scanf("%c",&x);
    if(x>='a' && x<='z') {
        printf("Lowercase Letter");
    }
    else{
        printf("Not a Lowercase Letter");
    }
    return 0;
}