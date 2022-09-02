#include<stdio.h>
void recursion(int,int);
int main()
{
    int n,a=1;
    printf("Enter the number till where you want:");
    scanf("%d",&n);
    recursion(a,n);
    return 0;
}
void recursion(int a,int n)
{
if(a<=n)
{
 printf("%3d",a);
 recursion(a+1,n);
}
}