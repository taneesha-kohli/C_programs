#include<stdio.h>
int sum=0;
int sumofdigit(int);
int main()
{
    int n,a;
    printf("Enter the number:");
    scanf("%d",&n);
    a=sumofdigit(n);
    printf("sum of digit:%d\n",a);
    return 0;
}
int sumofdigit(int n)
{
  if(n!=0)
  {
  sum=sum+n%10;
  sumofdigit(n/10);
  }
  return sum;
}