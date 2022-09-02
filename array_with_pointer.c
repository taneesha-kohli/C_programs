#include<stdio.h>
int main()
{
    int arr[3];
    int *p;
 p=arr;
 for(int i=0;i<3;i++)
 {
     printf("Enter the elements:");
     scanf("%d",&arr[i]);
 }
 for(int i=0;i<3;i++)
 {
     printf("\nElement:%d\n",*(p+i));
 }
    return 0;
}