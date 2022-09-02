#include<stdio.h>
int main()
{
    // read the words and characters of the file
   int word=0,character=0;
    char c;
    FILE *ptr;

  ptr=fopen("my_file.txt","r");
     if(ptr==NULL)
    {
        printf("\n error");
    }
    else
    {
        printf("The content of the file:\n");
while(c!=EOF)
{
    c=fgetc(ptr);
    printf("%c",c);
    if(c==' '||c=='\n')
    {
     word++;
    }
    else
    {
        character++;
    }
}
printf("\n%d words in your file\n",word);
printf("\n %d characters in your file\n",character);
    }
    return 0;

}