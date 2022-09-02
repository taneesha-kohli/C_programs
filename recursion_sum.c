#include<stdio.h>
int a=1;
int sum(int);
int main()
{
    int n,a=1;
    printf("Enter the digit till where you want sum of the numbers?");
    scanf("%d",&n);
    sum(n);
    printf("\nsum is:%d\n",sum(n));
    return 0;
}
int sum(int n)
{
int add;
  if(n==1)
  {
      return 1;
  }
  else
  {
    add=n+sum(n-1);    
  }
  return add;
}