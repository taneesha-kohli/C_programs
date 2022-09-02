#include<stdio.h>
int main()
{
    /* pattern printing in this form 12345
                                     12345
                                     12345*/
    int c,r;
printf("How many rows do you want?");
scanf("%d",&r);
printf("How many column do you want?");
scanf("%d",&c);
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}