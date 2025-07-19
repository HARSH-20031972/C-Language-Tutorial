/*Modified by C Program to Calculate the Area of the Circle
Calculate the Volume of the Cylinder*/ 
#include<stdio.h>
int main() {
    float PI=3.14;
    float radius,height,volume;
    printf("Enter the radius:");
    scanf("%f",&radius);
    printf("Enter the height:");
    scanf("%f",&height);
    volume=PI*radius*radius*height;
    printf("Volume is %f \n",volume);
    return 0;
}