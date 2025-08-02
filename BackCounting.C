#include<stdio.h>
int main() {
	int i,n;
	printf("Enter Number=");
	scanf("%d",&n);
	for(i=0;i<=n;i++) {
		printf("%d \n",n-i);
	}
	return 0;
}
