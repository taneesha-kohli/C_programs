#include<stdio.h>
int main()
{
    int a=9,b=4,c=6,d=1,s,f=9,f1,spc;
    s=a;
    f1=f;
    printf("\n\n\n\n");
    for(int j=0;j<2;j++)
    {
    for(int i=1;i<=a;i++)
    {
        if(i==d)
        {
            printf("  ");
        }
        else if(i==s)
        {
            printf(" ");
        }
        else if(i>=b&&i<=c)
        {
            printf("  ");
        }
        
        else
        {
        printf(" *");
        }
    }
    printf("\n");
    d=0;
    s=0;
    b=5;
    c=5;

    }
    for(int k=1;k<=f;k++)
    {
          for(int spc=2;spc<=k;spc++)
        {
          
            printf("  ");
        }
        for(int l=1;l<=f1;l++)
        {
            printf(" *");
        }
      
        printf("\n");
        f1=f1-2;
      
    }
    return 0;
}