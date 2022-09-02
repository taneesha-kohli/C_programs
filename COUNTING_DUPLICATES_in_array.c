#include<stdio.h>
int main()
{
    int n,arr[20],arr1[20],c=1,c1=0;
    printf("How many array elements do you want to store?");
    scanf("%d",&n);


  
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element",i+1); 
        scanf("%d",&arr[i]);
    }                                       
for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)   
    {
        if(arr[i]==arr[j])  // 1,2,3,1,2,1,3,4,1  // 4 2 2 3 1 2 1 1 1 
        {
            c++;          // frequency of first element
        }
    }
    arr1[i]=c;        //store first element frequency in other array
 c=1;               // because we have to count next element frequency with refresh counting to 0
      
}
           
for(int i=0;i<n;i++)
{
    if(arr1[i]==2)
    {
        c1++;
    }
}
printf("Total duplicates found in this array are:%d\n",c1);
  


    return 0;
}