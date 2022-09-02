#include<stdio.h>
int main()
{
    int n,arr[20],arr1[20],temp;
    printf("How many array element do you want to store?");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element",i);
        scanf("%d",&arr[i]);

    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])  // 1 2 3 4 5 
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("Second greater element of array:%d\n",*(arr+1));

    return 0;
}