#include<stdio.h>
int decimal(int);
int main()
{
    int num=4;
    printf("Enter the decimal number which you want to convert in binary:");
    scanf("%d",&num);
    decimal(num);
    decimal(7);
    decimal(9);

    return 0;
}
int decimal(int num)
{
    int a,r,binary;
a=num;
    do
    {
        for(int i=0;i<8;i++)
        {
    r=num%2;
    num=num/2;
    binary=binary+r;
        }

    }while (num!=0);
    printf("\n");
    printf("%d in binary:",a);
     for(int i=7;i>=0;i--)
        {
             return printf("%d",arr[i]);
        }
    printf("\n");
     
}