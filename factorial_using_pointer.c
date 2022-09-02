#include<stdio.h>
int fact(int*);
int main()
{
    int n,r;
    printf("Enter the number of which you want to find factorial:");
    scanf("%d",&n);
    r=fact(&n);
    printf("factorial of %d is %d ",n,r);
    return 0;
}
int fact(int *n)
{
    int f=1;
    while(*n!=1)
    {
      f=f*(*n);
      *n=*n-1;
    }
    return f;

}