//C program to print table of number in reverse order
#include<stdio.h>
int main() {
    int n=10;
	int i=1;
    while(i<=n) {
        printf("%d*%d=%d\n",n,n+1-i,n*(n+1-i));
        i++;
    }
    getchar();
}
