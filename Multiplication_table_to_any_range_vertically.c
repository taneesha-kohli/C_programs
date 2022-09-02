#include<stdio.h>
int main()
{
    int range;
    printf("till where do yo want to print the multiplicatio table?");
    scanf("%d",&range);
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=range;j++)  //
        {
            printf("%d*%d  =  %d\t",j,i,j*i);
        
        }
        printf("\n");
     
    }
       return 0;
}  