#include<stdio.h>
int main()
{
    /* pattern printing in this form 55555
                                     44444
                                     33333
                                     22222
                                     11111*/
    int r,c;
    printf("How many rows do you want?");
    scanf("%d",&r);
    printf("How many column do you want?");
    scanf("%d",&c);
    for(int i=r;i>=1;i--)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}