#include<stdio.h>
int a=1;
void prime(int);
int main()
{
    int n;
    printf("Enter the number till where you want to know the prime numbers:");
    scanf("%d",&n);
    prime(n);
    
    return 0;
}
void prime(int n)
{
    if(a<=n)
    {
    if(a%1==0&&a%a==0&&a%2!=0)
    {
     printf("\n%d is prime\n",a);
    }
    else
    {
    printf("\n%d is not prime\n",a);
    }
    a++;
    prime(n);
    }
}