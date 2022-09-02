#include<stdio.h>
#include<string.h>
int main()
{

  // when both string's all elements are same those string calls anagram string 
     
    int a,b,found=0;
  char string1[20],string2[20];
  printf("Enter the first string:");
  scanf("%s",&string1);
  printf("Enter the second string:");
  scanf("%s",&string2);
  a=strlen(string1);
  b=strlen(string2);



  printf("\nlength of first string:%d\nlength of second string:%d\n",a,b);
  if(a==b)
  {
    for(int i=0;i<a;i++)
    {
      for(int j=0;j<b;j++)
      {
        if(string1[i]==string2[j])
        {
        found++;
        }
      }
    }
    printf("\n%d found\n",found);
   if(found==a)
   {
     printf("\n%s and %s are anagram string\n",string1,string2);
   }
   else
   {
     printf("\nNot anagram becuse first strings all character are not same with second string\n");
   }


  
  }
  else
  {
      printf("\ncan't compare because string length is not same\n");
  }
    return 0;
}