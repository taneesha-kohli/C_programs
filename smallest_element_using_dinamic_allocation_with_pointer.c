#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr;
    printf("How many elements do you want to store dinamically?");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int)); //ptr=(int*)calloc(n,sizeof(int))==ptr[n];
   if(ptr==NULL)
   {
       printf("Dinamic memory allocation can't possible");
   }
   else
   {
   
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element",i+1);
        scanf("%d",&ptr[i]);    //ptr+i ==&ptr[i] *ptr+i = ptr[i]
    }
    for(int i=1;i<n;i++)
    {
        if(ptr[0]>ptr[i])
        {
            ptr[0]=ptr[i];
        }
    }
printf("\nSmallest array element is:%d\n",ptr[0]);
   }
    return 0;
}