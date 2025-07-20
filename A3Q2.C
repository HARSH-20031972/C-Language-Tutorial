// C program to check the passing marks
#include<stdio.h>
int main() {
    int P,C,M;
    printf("Enter P:");
    scanf("%d",&P);
    printf("Enter C:");
    scanf("%d",&C);
    printf("Enter M:");
    scanf("%d",&M);
    if((P+C+M)/3>=40 & (P,C,M)>=33){
        printf("Passed");
    }
    else{
        printf("Failed");
    }
    getchar();
}