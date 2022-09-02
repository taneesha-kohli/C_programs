#include<stdio.h>
int i=0,c=0;
int length(char*);
int main()
{
    int a;
    char str[50];
    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    a=length(str);
    printf("\n Length of string:%d\n",a);
    return 0;
}
int length(char *str)
{
    while(*(str+i)!='\0')
    {
         c++;
         i++;
    }
    return c;
}