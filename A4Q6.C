//C Program to calculate the sum of N natural numbers by using for loop
#include<stdio.h>
int main() {
    int n,i,sum=0;
    printf("Enter Number=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of first %d numbers is %d\n",n,sum);
    return 0;
}
