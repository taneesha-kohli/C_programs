#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the number :");
    scanf("%d",&num);
    switch (num>0)
    {
    case 1:
       printf("%d is positive\n",num) ;  

        break;
   
    case 0:  //if this condition will false, so control will go in next switch statement
    switch (num<0)
    {
    case 1:
        printf("%d is negative\n",num);
        break;
    case 0:
    printf("This number is zero\n");
    break;
 
    }
    break;
    }

    // switch (num==0)
    // {
    // case 1:
    //     printf("this number is zero\n");
    //     break;
    
   
    // }
    return 0;
}