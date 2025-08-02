#include<stdio.h>
int main() {
	int i=0,N;
	printf("Enter Number=");
	scanf("%d",&N);
	while(i<=N) {
		printf("%d \n",N-i);
		i++;
	}
	return 0;
}
