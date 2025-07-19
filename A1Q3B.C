// Convert Farenheit into Celcius
#include<stdio.h>
int main() {
    float celcius,farenheit;
    printf("Enter the Temperature in farenheit:");
    scanf("%f",&farenheit);
    celcius=(farenheit-32)*5/9;
    printf("temperature in celcius is %f",celcius);
    return 0;
}