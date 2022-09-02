#include<stdio.h>
int main()  
{
    int range,ranges,a=1,b=1,r,jrange;
    printf("Enter the range to print the pattern:");
    scanf("%d",&range);
    ranges=range;
     jrange=(range-1);

    for(int a=1;a<=range;a++)
    {
        for(int spc=0;spc<ranges;spc++) 
        {
            printf(" ");
        }
        for(int j=1;j<=a;j++)
        {
            printf(" *");
        }
        ranges--;
        printf("\n");
    }
  
    for(int b=1;b<=(range-1);b++)
    {
        for(int spc=0;spc<=b;spc++)
        {
            printf(" ");
        }
        for(int j=1;j<=jrange;j++)
        {
            printf(" *");
        }
        printf("\n");
    jrange--;
    }
  
  
          return 0;
}

  
  
