#include<stdio.h>
int main()
{
/*2  4  6  8 10
 12 14 16 18 20
 22 24 26 28 30
 32 34 36 38 40
 42 44 46 48 50  */
 
 int r,c,k=0;

 printf("How many rows do you want?");
 scanf("%d",&r);
 printf("How many columns do you want?");
 scanf("%d",&c);
 for(int i=0;i<r;i++)
 {
     for(int j=0;j<c;j++)
     {
         printf("%3d",k=k+2);
     }
     printf("\n");
 }
    return 0;
}