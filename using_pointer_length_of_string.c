#include<stdio.h>
int main()
{
    int i=0,c=0;
    char str[50];
    printf("\nEnter the string:");
    fgets(str,sizeof str,stdin);
while(*(str+i)!='\0')   
{
    c++;
    i++;
}
printf("\n length of string is:%d\n",c);
    return 0;
}