#include<stdio.h>
int i=0,n;
int recursion (int[]);
int main()
{
    int arr[50];
    printf("How many array element do you want to store?");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
  printf("Enter the %d element\n",i+1);
    scanf("%d",&arr[i]);
    }
    recursion(arr);

    return 0;
}
int recursion(int arr[i])
{
if(i<n)
{
  printf("%d element is:%d\n",i+1,arr[i]);
    i++;
    recursion(arr);
    // printf("\narray element:%d\n",arr[i]);
}



}