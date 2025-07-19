//C program to calculate the simple interest
#include<stdio.h>
int main() {
    float Year;
    float Principal,Rate,SI,Amount;
    printf("Enter Principal:");
    scanf("%f",&Principal);
    printf("Enter Rate:");
    scanf("%f",&Rate);
    printf("Enter Year:");
    scanf("%f",&Year);
    SI=(Principal*Rate*Year)/100;
    Amount=Principal+SI;
    printf("The Simple interest is %f \n",SI);
    printf("The Amount is %f",Amount);
    return 0;
}