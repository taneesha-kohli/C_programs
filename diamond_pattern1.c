#include<stdio.h>
void p(int);
int main()
{
    int range,ranges,a=1,b=1,r;
    printf("Enter the range to print the pattern:");
    scanf("%d",&range);
    ranges=range;
  

    for(int a=1;a<=range;a++)
    {
        for(int spc=0;spc<ranges;spc++) //4 >0
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
    p(range);
        return 0;
}
  void p(int range)
  {
      int ranges=range;
    for(int b=1;b<=range;b++)
    {
        for(int spc=1;spc<=b;spc++)
        {
            printf(" ");
        }
        for(int j=0;j<ranges;j++)
        {
            printf(" *");
        }
        printf("\n");
    ranges--;
    }
  }
  
  
