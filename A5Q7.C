//C program to draw the pattern using function
#include<stdio.h>
void pattern();
int main() {
	pattern();
}
void pattern() {
	int i,j,Line;
	printf("Enter Layer=");
	scanf("%d",&Line);
	for(i=1;i<=Line;i+=2) {
		for(j=1;j<=i;j++) {
			printf("*");
		}
		printf("\n");
	}
}
