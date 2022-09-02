#include<stdio.h>
int i=0,a=0,b=1;
int recursion(int);
int main()
{
 int n;
 printf("till where you want the fibonacci series?");
 scanf("%d",&n);
    recursion(n);
    return 0;
}
int recursion(int n)
{
    int sum;//0+1 1 1 2
    if(i==n)
    {
      return 0;
    }
 else
    {
     sum=a+b;
     printf("%d\n",sum);
     a=b;
     b=sum;
     i++;
   recursion(n);
    }
}