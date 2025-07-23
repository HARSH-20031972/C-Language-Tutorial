//C program to print the table and sum of all the multiples of number
#include<stdio.h>
int main() {
    int n;
    printf("Enter n=");
    scanf("%d",&n);
	int i=1;
	int sum=0;
    while (i<=10) {
    	printf("%d*%d=%d\n",n,i,n*i);
        sum=sum+n*i;
        i++;
        }
        printf("Sum of all multiples of %d is %d\n",n,sum);
        return 0;
}
