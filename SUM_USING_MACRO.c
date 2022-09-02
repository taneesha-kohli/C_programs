#include<stdio.h>
#define sum(a,b)\
printf("Sum:%d",a+b);
int main()
{
int num1,num2;
printf("Enter the first  number\n");
scanf("%d",&num1 );
printf("Enter the second number\n");
scanf("%d",&num2);

sum(num1,num2);
    return 0;
}