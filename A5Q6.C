//Find the sum of first n natural numbers using recursion
#include<stdio.h>
int Sum(int);
int main() {
	int a,b;
	printf("Enter Number=");
	scanf("%d",&a);
	b=Sum(a);
	printf("Sum of first %d natural numbers is %d",a,b);
}
Sum(int x) {
	int f;
	if(x==1 || x==0)
	return 1;
	else
	f=x+Sum(x-1);
	return f;
}
