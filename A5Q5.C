//Demonstrate the application of pre and post increment operator
#include<stdio.h>
int main() {
	int a;
	printf("Enter a=");
	scanf("%d",&a);
	printf("%d%d%d\n",a,++a,a++);
	return 0;
}
