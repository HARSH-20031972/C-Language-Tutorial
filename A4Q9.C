//C program to find the factorial of number using the while loop
#include<stdio.h>
int main() {
	int n,Fac=1,i=1;
	printf("Enter Number=");
	scanf("%d",&n);
	while(i<=n){
		Fac=Fac*i;
		i++;
	}
	printf("Factorial of %d is %d \n",n,Fac);
	getchar();
}
