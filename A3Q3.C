//C program to calculate the tax payment by differrent Income Groups
#include<stdio.h>
int main() {
    float Income,T1,T2,T3;
    printf("Enter Income:");
    scanf("%f",&Income);
    if(Income>250000 && Income<500000){
        T1=(Income*5)/100;
        printf("Tax payment is %f",T1);
    }
    else if(Income>500000 && Income<1000000){
        T2=(Income*20)/100;
        printf("Tax payment is %f",T2);
    }
    else if(Income>1000000){
        T3=(Income*30)/100;
        printf("Tax payment is %f",T3);
    }
    else{
        printf("Tax is not applicable");
    }
    getchar(); 
    }