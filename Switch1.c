#include<stdio.h>
int main()
{
    int i=1;
    i++;  // i is incremented by 2 
    switch(i--)  // in switch case expression i-- = 2 because it is post increment so the value of i=2 will as it is, that't why case 2 will execute
    {
        case 1:
        printf("Case 1 will execute");
        break;
        case 2:
        printf("Case 2 will execute"); // because i=2 so this block will execute
        break;
        default:
        printf("Default block will execute");
    }
    return 0;
}