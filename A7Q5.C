#include<stdio.h>   
void reverse(int arr[100],int n)  {  
  int i,tmp;  
  for(i=0;i<n/2;i++)  {  
    tmp=arr[i];  
    arr[i]=arr[n-1-i];  
    arr[n-1-i]=tmp;  
  }
}  
int main ( )  {  
  int a[100],i,size;  
  printf("Enter Size of Array=");  
  scanf("%d",&size);  
  printf("Enter %d elements=",size);  
  for (i=0;i<size;i++)  {
    scanf ("%d",&a[i]) ;  
  }   
  reverse (a,size) ;     
  printf ("After reversing the array=");  
  for(i=0;i<size;i++)  {  
    printf("%d ",a[i]) ;  
  }  
  return 0 ;  
}  