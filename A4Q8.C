//C program to calculate the factorial of a number
#include<stdio.h>
int main() {
	int n,i,Fac=1;
	printf("Enter Number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		Fac=Fac*i;
	}
	printf("Factorial of %d is %d \n",n,Fac);
	getchar();
}
