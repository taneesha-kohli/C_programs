#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l=0,a=0;
    char str[50];
    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    puts(str);
while((str[l])!='\0')

    {
    a++;
    l++;
    }
    printf("Total characters are:%d\n",a);
    return 0;
}