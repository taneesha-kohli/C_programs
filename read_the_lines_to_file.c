#include<stdio.h>
int main()
{
    // by using *stdin* we can directly take the input into the file 
    
   int n=0;
    char c;
    FILE *ptr;

  ptr=fopen("my_file.txt","r");
     if(ptr==NULL)
    {
        printf("\n error");
    }
    else
    {
while(c!=EOF)
{
    c=fgetc(ptr);
    if(c=='\n')
    {
     n=n+1;
    }
}
printf("\n%d lines in your file",n);
    }
    return 0;

}

