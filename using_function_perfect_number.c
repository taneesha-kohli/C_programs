#include<stdio.h>
int per (int);
int main()
{
/*  we will find all divisor of any digit like 6=1,2,4 are dividing 6  so these number are divisor of 6
we will add its divisor like(1+2+4) and if (1+2+3)will==6 or if the addition of divisors will equal to number 
that number is perfect number ,like- 28=1+2+4+7+14=28 mean 28 is a perfect number*/





    int num;
    printf("Enter the digit:");
    scanf("%d",&num);
    per(num);
    return 0;
}
int per(int num)
{
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
        sum=sum+i;
        printf("%d\n",i);
        }
    }
    printf("\nsum of divisor digit is:%d\n",sum);
    if(sum==num)
    {
       return printf("\n%d is perfect number\n",num);
    }
    else
    {
       return printf("\nNumber is not perfect\n\n");
    }


    return 0;
}