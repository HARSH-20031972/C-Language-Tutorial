//C program of AND && conditional operator
#include<stdio.h>
int main() {
    int A;
    printf("Enter A:");
    scanf("%d",&A);
    if(A%3==0 && A%2==0){
        printf("Divisible by 2 and 3");
    }
    else{
        printf("Non Divisible by 2 and 3");
    }
    return 0;
}