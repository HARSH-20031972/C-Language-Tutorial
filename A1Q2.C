// C program to calculate the area of Circle
#include<stdio.h>
int main() {
    float PI=3.14;
    float radius,area;
    printf("Enter the radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("area is %f \n",area);
    return 0;
}