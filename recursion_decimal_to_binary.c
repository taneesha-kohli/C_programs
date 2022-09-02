#include<stdio.h>
int a=7;
void decimal(int[]);
int main()
{
   int arr[50],r,n,i,b;
    printf("Enter the decimal number:");
    scanf("%d",&n);
    b=n;
    for(int i=0;i<=7;i++)
    {
    r=n%2;
    arr[i]=r;
    n=n/2;
    }
    printf("\n\n%d in binary:-",b);
    decimal(arr);
    return 0;
}
void decimal(int arr[])
{

    if(a>=0)
    {
        printf("%d",arr[a]);
        a--;
        decimal(arr);
        }
 printf("\n");
}