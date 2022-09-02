#include<stdio.h>
int main()
{
    int i=0,alphabet=0,digit=0,symbols=0;
    char str[60];                      //A-Z=65-90  a-z=97-122  symbols=32-47 digit=48-57
    printf("Enter the first string:");
    fgets(str,60,stdin);
    while(str[i]!='\0')
    {
        for(int a=65;a<=122;a++)
        {
        if(str[i]==a)
        {
            alphabet++;
        }
        }
        for(int b=32;b<=47;b++)
        {
            if(str[i]==b)
            {
                symbols++;
            }
        }
        for(int c=48;c<=57;c++)
        {
            if(str[i]==c)
            {
                digit++;
            }
        }
        i++;
    }
    printf("\n%d characters\n",alphabet);
    printf("\n%d symbols\n",symbols);
    printf("\n%d digit\n",digit);
    
    return 0;
}