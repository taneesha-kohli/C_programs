#include<stdio.h>
int swap (int*,int*);
int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("before swapping a and b:%d %d",a,b);
    swap(&a,&b);
    printf("after swapping a and b:%d %d",a,b);
    
    return 0;
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return *a,*b;
}