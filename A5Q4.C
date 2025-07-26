//Calculate average of three numbers using function
#include<stdio.h>
void avg(int,int,int);//Function Prototype
int main() {
	int a,b,c;
	printf("Enter Three Numbers=");
	scanf("%d%d%d",&a,&b,&c);
	avg(a,b,c);//Function call
	return 0;
}
void avg(int x,int y,int z) { //Function Definition
	float avg;
	avg=(x+y+z)/3;
	printf("Average is %f",avg);
}
//Takes Something Returns Nothing function