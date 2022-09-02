#include<stdio.h>
// #define L 80
int main()
{
    int a=0,c=0;
    char str[80];
    printf("Enter the string :");
    fgets(str,sizeof str,stdin);
    puts(str);
    while(str[a]!='\0')
    {
    if(str[a]=='\n'||str[a]==' '||str[a]=='\t')
  
    {
c++;
    }
a++;
    }
    printf("\nTotal words:%d",c);
    return 0;
}