//Convert Celcius into Farenheit by using function
#include<stdio.h>
void Temp();
int main() {
	Temp();
	return 0;
}
void Temp() {
	float C,F;
	printf("Enter Temperature in Celcius=");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("Temperature in Farenheit=%f",F);
}
