#include<stdio.h>
int main()
{
    int arr[50],*p,n,sum=0;
    p=arr;
printf("How many elements do you want ?");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("Enter the %d element",i+1);
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
    sum=sum+*p;
    p++;
}
printf("sum:%d",sum);
    return 0;
}