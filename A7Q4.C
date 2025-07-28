#include<stdio.h>
int main() {
    int x,i=10;
    int arr[i]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter Number=");
    scanf("%d",&x);
    for(i=0;i<=9;i++) {
        printf("%d*%d=%d \n",x,arr[i],x*arr[i]);
    }
}