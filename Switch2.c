#include<stdio.h>
int main()
{
   char *str1="first";
   char *str2="second";
switch (*str1)
{
case "first":
    printf("USAIN BOLT");
    break;
case "Second":         // It will produce an error because expression of swith case can't be string , it can be  integer or character
    printf("JUSTIN GATLIN");;
    break;

default:
printf("OTHERS");
    break;
}
    return 0;
}