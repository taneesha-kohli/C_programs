#include<stdio.h>
int main()
{
    int num,even=0,negitive=0,odd=0,positive=0;
    printf("\nHow many numbers do you want to print?\t");
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++)
    {
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
       for(int i=0;i<num;i++)
    {
        if(arr[i]%2==0&&arr[i]>0)
        {
            even++;
            
        }
        if(arr[i]<0)
        {
            negitive++;
        }
        if(arr[i]%2!=0&&arr[i]>0)
        {
            odd++;
        }
        if(arr[i]==0)
        {
            positive++;
        }
        printf("%d\t",arr[i]);
    }
    printf("\n\n%d even numbers\n",even);
    printf("\n%d negitive numbers\n",negitive);
    printf("\n%d odd numbers\n",odd);
    printf("\n%d 0 (positive number)\n",positive);
    return 0;
}