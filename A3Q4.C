//C Program to check year is leap year or not
#include<stdio.h>
int main() {
    int Year;
    printf("Enter Year:");
    scanf("%d",&Year);
    if(Year%4==0) {
        printf("Leap Year");
    }
    else{
        printf("Non Leap Year");
    }
    return 0;
}