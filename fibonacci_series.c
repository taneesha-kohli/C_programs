#include<stdio.h>
void main()
{
int num,sum=0,a=0,b=1;
printf("Enter the number till where you want to print fibonacci series:");
scanf("%d",&num);
printf("%d\n%d\n",a,b);
while(sum<num)
{
sum=a+b;
if(sum<num)
{
printf("%d\n",sum);
a=b;
b=sum;
}
}
}