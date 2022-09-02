#include<stdio.h>
int main()
{
    int a,b,c;
    float add;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b)   
    
 /*formula to check triangle modification possibilities if formula will satisfied mean triangle can create if formula doesn't satisfied so triangle can't be creat*/
    {
        add=a+b+c;
        printf("Triangle can be make: %.2f\n",add);
    }
    else
    {
        printf("It's not possible to make triangle!!!!!!\n");
    }
    return 0;
}