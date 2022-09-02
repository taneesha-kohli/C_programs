#include<stdio.h>
int main()
{
    // by using *stdin* we can directly write or store new many lines into file
    
   int n,i;
    char ch[80],arr[100],c;
    FILE *ptr;
   printf("How many lines you want to printf in file?");
   scanf("%d",&n);
   printf("The lines are\n");
    ptr=fopen("my_file.txt","w+");
 for(i=0;i<n+1;i++)
 {
   fgets(arr,sizeof arr,stdin);
   fputs(arr,ptr);
   
   
}
fclose(ptr);
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
    printf("%c",c);
}
    }
    return 0;

}