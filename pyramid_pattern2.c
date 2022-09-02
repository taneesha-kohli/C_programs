#include<stdio.h>
int main()
{
    int range,spc,rangej;
    printf("till where you want to print the pattern?");
    scanf("%d",&range);
    rangej=range;
    printf("\n\n");
    for(int i=1;i<=range;i++)
    {
 for(int j=1;j<=rangej;j++)
 {
     printf("* ");
 }
    printf("\n");
    for(int spc=1;spc<=i;spc++)
    {
        printf(" ");
    }
    rangej--;
    }
    printf("\n\n");
    return 0;
}