#include<stdio.h>
int recursion(int);
int main()
{
    int n,b;
    printf("Till where you want to find the sum of digits using recusion:");
    scanf("%d",&n);
   b=recursion(n);
   printf("\nsum of n digit is:%d\n",b);
    return 0;
}
int recursion(int n)
{
    int sum;
    if(n==1)
    {
        return 1;
    }
    else
    {
      sum=n+recursion(n-1);
    }
return sum;
}

