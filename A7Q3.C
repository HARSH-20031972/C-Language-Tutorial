#include<stdio.h>
int main() {
    int x=5;
    int i=10;
    int arr[i]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<=9;i++) {
        printf("%d \n",x*arr[i]);
    }
}