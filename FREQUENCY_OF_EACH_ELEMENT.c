#include<stdio.h>
int main()
{
    int n,arr[50],c=1,arr1[20],f=-1;
printf("How many elements do you want to store in array?");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("Enter the element :");
    scanf("%d",&arr[i]);
}     
for(int i=0;i<n;i++)
{
    if(arr[i]!=f)
    {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            c++;
            arr[j]=f;     // 1 2 3 a a 4 5   1 

        }
    }
    }
    arr1[i]=c;
    c=1;
}
for(int i=0;i<n;i++)
{
    if(arr[i]!=-1)
    {
   
    printf("\nFrequency of %d is %3d",arr[i],arr1[i]);
}
}
printf("\n\n");
    return 0;
}