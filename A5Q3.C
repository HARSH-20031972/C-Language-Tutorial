//Calculate the Force exerted by earth on a body of mass
#include<stdio.h>
void Force();
int main() {
	Force();
	return 0;
}
void Force() {
	float g=9.8,mass,F;
	printf("Enter Mass of Body=");
	scanf("%f",&mass);
	F=mass*9.8;
	printf("Force applied is %f Newton",F);
}
