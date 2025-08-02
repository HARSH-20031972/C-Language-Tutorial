#include <stdio.h>
int main() {
    int arr[10];  
    int n;              
    int i;
    printf("Enter the size of the array=");
    scanf("%d",&n);
    printf("Enter %d elements: ", n);
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Original array: ");
    for (i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}