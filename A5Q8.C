//C program to draw the pattern using Function
#include<stdio.h>
void pattern(int);
int main() {
	int Line;
	printf("Enter Layer=");
	scanf("%d",&Line);
	pattern(Line);
}
void pattern(int k) {
	int i,j;
	for(i=1;i<=k;i+=2) {
		for(j=1;j<=i;j++) {
			printf("*");
		}
		printf("\n");
	}
}
//Takes Something Returns Nothing Function