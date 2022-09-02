#include<stdio.h>
int main()
{
    int num=0;
    if(num++,num--,++num) // we know the working of comma operator ,here comma operator is used so expression  will execute left to right , num=0 (num++=0,num--=1-1=0, ++num=0+1=1) so first case will print
    switch(num)
    {
        case 1:
        printf("case one");
        break;
        case 2:
        printf("case two");
        break;
        default:
        printf("default block");
        
    }
    return 0;
}