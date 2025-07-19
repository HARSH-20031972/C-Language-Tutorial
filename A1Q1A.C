//C Program to calculate the area of the rectangle by user input
#include<stdio.h>
int main() {
    float length,width,Area;
    printf("Enter Length and Width=");
    scanf("%f%f",&length,&width);
    Area=length*width;
    printf("Area is %f" , Area);
    getchar();
}
