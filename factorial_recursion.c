#include<stdio.h>
  int f=1;
int fact(int);
int main()
{
    int n,r;
    printf("Enter the number of which you want the factorial:");
    scanf("%d",&n);
    r=fact(n);
    printf("\nfactorial of %d is:%d\n",n,r);
    return 0;
}
int fact (int n)
{
  if(n!=0)
  {
    f=f*n;
    n--;
    fact(n);
  }
  return f;
}
 