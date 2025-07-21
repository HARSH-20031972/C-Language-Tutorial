//C program to calculate the sum of N natural numbers input supplied by user
#include<stdio.h>
int main() {
    int n,i=0,sum=0;
    printf("Enter n=");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("Sum of first %d numbers is %d",n,sum);
    getchar();
}
