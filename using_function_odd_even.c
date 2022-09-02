#include<stdio.h>
int odd_even(int);
int main()
{
int n;

printf("Enter the number to know that number is even or odd:");
scanf("%d",&n);
odd_even(n);
return 0;
}
int odd_even(int n)
{
printf("\nhello\n");
if(n%2==0)
{
    return printf("\n%d is even number\n",n);
}
if(n%2!=0)
{
    return printf("\n%d is odd number\n",n);
}
}
