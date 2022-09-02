#include<stdio.h>
#define square(i)\ 
printf("square of this number:%d\n",i*i); // if we want to make macro  in new line in #define so we use (/) 
int main()                                //as we can also use printf in macro , and can use macro as function
{                                           
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
   square(num);
    return 0; 
}