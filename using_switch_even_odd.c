#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);

switch (num%2==0)
{
    //in switch case only two case can be possible false mean 0 and true mean 1
    //here if num%2==0 will false so case 0 statement will print else case 1 if condition is true
case 0:
    printf("%d is odd\n",num);
    break;
case 1:
    printf("%d is even\n",num);
    break;

}
    return 0;
}