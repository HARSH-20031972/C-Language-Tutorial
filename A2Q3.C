// Divisiblity Check
#include<stdio.h>
int main() {
    int a;
    printf("Enter Number a:");
    scanf("%d", &a);
    if(a%97==0) {
        printf("a is divisible by 97");
    }
    else{
        printf("a is not divisible by 97");
    }
    return 0;
}