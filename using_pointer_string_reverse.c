#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char str[50],*p,reverse;
    printf("Enter the string:");
    fgets(str,50,stdin);
    a=strlen(str);
    printf("length of string:%d",a);
    p=str;
for(int i=0;i<a;i++)
{
 reverse=*(p+(a-1)); //[*(p+(a-1))=*(p+7)] value at this address is last character of string
 printf("%c",reverse);
  
        p--; //p-- = *p+7-1=*(p+6) mean after decrementing pointer will point the value in it's 6th address 
    }         //which will the second character of string in reverse order
printf("\n\n");
        return 0;
}