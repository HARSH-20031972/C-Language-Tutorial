//Sum of all even and odd numbers stored in an array
#include<stdio.h>
int main() {
    int i,a[10],se=0,so=0;
    printf("Enter 10 Numbers=");
    for(i=0;i<=9;i++) {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++){
        if(a[i]%2==0) {
            se=se+a[i];
        }
        else{
            so=so+a[i];
        }
    }
    printf("Odd Number Sum=%d\n",so);
    printf("Even Number Sum=%d\n",se);
    return 0;
}