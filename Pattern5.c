#include<stdio.h>
int main()
{
    /* 1  2  3  4  5
       6  7  8  9 10
      11 12 13 14 15
      16 17 18 19 20
      21 22 23 24 25*/
   
   
    int r,c,k=1;
    printf("How many rows do you want?\n");
    scanf("%d",&r);
    printf("How many columns do you want?\n");
    scanf("%d",&c);
   
for(int i=1;i<=r;i++)
{
    for(int j=1;j<=c;j++)
    {
        printf("%3d",k++);
    }

        printf("\n");
    }
    return 0;
}