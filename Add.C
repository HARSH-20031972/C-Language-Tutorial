// C Program to add two numbers
#include<stdio.h>
int main() {
    int a,b,c; /*int means the variable will
    store the integer values only*/
    printf("Enter Number a:");
    //print statement1
    scanf("%d",&a); //taking input of a from the user
    //print statement2
    printf("Enter Number b:");
    scanf("%d",&b);
    c=a+b;/*adding the assigned values of a and b and 
    in the c variable*/
    printf("Sum is %d \n" ,c);
    return 0;
}
