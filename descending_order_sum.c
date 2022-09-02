#include<stdio.h>
int sum(int,int);
int main()
{
    int r,a=0;
    printf("Till where you want to print the sum of numbers?");
    scanf("%d",&r);
    sum(r,a);
    printf("sum:%d\n",sum(r,a));
    return 0;
}
int sum(int r,int a)//sum(1)
{
  int add;
  if(a==r) //add=0+sum(5,1) 1+sum(5,2) 2+12
  {
      return r;
  }
  else
  {
  add=a+sum(r,a+1);  
  }
  return add;
}