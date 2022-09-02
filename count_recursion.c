#include<stdio.h>
int a=0,c=0;
int count (int);
int main()
{
    int num,a;
    printf("Enter the number:");
    scanf("%d",&num);
    a=count(num);
    printf("count:%d",a);
    printf("count :%d",count(num));
    return 0;
}
int count (int num)
{
    int r;
    if(num!=0)
    {

    c++;
    count(num/10);
    }
    return c;
}