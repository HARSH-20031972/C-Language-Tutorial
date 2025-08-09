#include<stdio.h>
int main() {
	int i,N;
	printf("Enter Number=");
	scanf("%d",&N);
	do{
		printf("%d \n",N-i);
		i++;
	}
	while(i<=N);
	return 0;
}
