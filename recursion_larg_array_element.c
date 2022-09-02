#include<stdio.h>
int a=0,j=1,temp;
int array(int[],int);
int main()
{
    int n,arr[20],b;
    printf("How many array elements do you want to store?");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    b=array(arr,n);

    printf("%d",b);
    return 0;
}
int array(int arr[a],int n)
{
    
    if(j!=n)
    {

if(arr[a]<arr[j])
{
    arr[a]=arr[j];//

}
  j++;
  array(arr,n);
    }
return arr[a];
}