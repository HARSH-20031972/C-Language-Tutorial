#include<stdio.h>
int main() {
	int i;
    int arr[4]={10,11,12,13};
    int *ptr=&arr[0];
    for(i=0;i<=3;i++) {
    printf("%d \n",&*ptr+i);
}
}
