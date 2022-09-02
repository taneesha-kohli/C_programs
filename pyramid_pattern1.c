#include<stdio.h>
int main()
{     
int range,a=1,spc;
printf("Enter the range till where you want to print the pattern:");
scanf("%d",&range);
spc=range;
for(int i=1;i<=range;i++)
{
    for(int j=0;j<=spc;j++)
    {
        printf(" ");
    }
    for(int k=1;k<=i;k++)
    {
        printf("* ");
    }
    spc--;
    printf("\n");
}

    return 0;
}                                                                                                                                             