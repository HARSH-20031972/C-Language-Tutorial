#include<stdio.h>
int main() {
	int n,r,z,arm=0;
	printf("Enter a Number=");
	scanf("%d",&n);
	z=n;
	while(n>0) {
		r=n%10;
		arm+=r*r*r;
		n=n/10;
	}
	if(z==arm){
		printf("%d is an Armstrong Number",z);
	}
	else{
		printf("%d is a Non Armstrong Number",z);
	}
	getchar();
}
