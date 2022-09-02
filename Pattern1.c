#include<stdio.h>
int main()
{
 /* 111111
    222222
    333333
    444444
    555555  pattern printing in this form*/
    
    
    int c,r,n;
    printf("how long patter do you want print");
    scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    for(int j=0;j<=n;j++)
    {
        printf("%d",i);
    }
    printf("\n");
}
    return 0;
}