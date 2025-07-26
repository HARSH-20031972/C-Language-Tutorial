//Calculate average of three numbers using function
#include<stdio.h>
void avg();
int main() {
	avg();
	return 0;
}
void avg() {
	int a,b,c;
	float avg;
	printf("Enter Three Numbers=");
	scanf("%d%d%d",&a,&b,&c);
	avg=(a+b+c)/3;
	printf("Average is %f",avg);
}
//Takes Nothing Returns Nothing function