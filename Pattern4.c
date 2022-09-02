#include<stdio.h>
int main()
{
    /* pattern printing in this form 54321
                                     54321
                                     54321
                                     54321*/
    int r,c;
    printf("How many rows do you want?");
    scanf("%d",&r);
    printf("How many column do you want?");
    scanf("%d",&c);
    for(int i=r;i>=1;i--)
    {
        for(int j=c;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}