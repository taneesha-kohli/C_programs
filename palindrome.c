#include<stdio.h>
int main()
{
    int n,r,a,b,num;
    printf("How many digit you want to print?");
    scanf("%d",&n);
    printf("Enter the digit");
    scanf("%d",&num);
    if(n==2)
    {
     r=n%10;
     a=r;
     n=n/10;
     r=n%10;
    if(a==r)
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    }
    return 0;
}