#include<stdio.h>
int main()
{
    
    int range;
    printf("\nEnter the prime number:(7-15)--------------------------\n");
    printf("Enter the range :");
    scanf("%d",&range);
    int b=3,d=1,s,f,f1,spc,a=1;
    int spc1=range-3;   //
    s=range;
    f=range;
    f1=f;
    printf("\n\n\n\n");
    for(int j=0;j<3;j++)
    {
    for(int i=1;i<=range;i++) 

    {
        if(i==d)
        {
            printf("  ");
        }
        else if(i==s)
        {
            printf(" ");  
        }
        else if(i>b&&i<=spc1) 
        {
            printf("  ");
        }
        
        else
        {
        printf(" *");  //15-6 
        }
    }
    printf("\n");
    d=0;
    s=0;
    b=b+1;
    spc1=spc1-1;

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