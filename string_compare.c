#include<stdio.h>
#include<string.h>
#define l 60
int main()
{
    int a=7,b,i=0,c=0;
    char str1[l],str2[l];
    printf("\nEnter the first string:");
    fgets(str1,l,stdin);
    printf("\n Enter the second string:");
   fgets(str2,l,stdin);
a=strlen(str1);
b=strlen(str2);
if(a!=b)
{
    printf("\nBoth string can't compare\n");
}
if(a==b)
{
    while(i<a&&i<b)
    {
    if(str1[i]==str2[i])
    {
     c++;
    }
    i++;
    }
    if(c==a&&c==b)
    {
        printf("\nBoth strings are same:\n");
    }
    else
    {
        printf("\n Strings are not same\n");
    }
}
    return 0;
}