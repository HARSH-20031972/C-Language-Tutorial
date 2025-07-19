//Convert Celcius into Farenheit
#include<stdio.h>
int main() {
    float celcius,farenheit;
    printf("Enter the Temperature in celcius:");
    scanf("%f",&celcius);
    farenheit=celcius*9/5+32;
    printf("temperature in farenheit is %f Degree",farenheit);
    return 0;
}


