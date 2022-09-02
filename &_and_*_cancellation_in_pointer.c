#include<stdio.h>
// #include<string.h>

int main()
{
    int a=36;
    int *ptr;
    ptr=&a;
    printf("%u %u",*&ptr,&*ptr);   // & and * cancelles each other that's why we will get 
                                    //ptr in the place of(*&ptr) and ptr in the place of(&*ptr) 
                                    //thats why (&*ptr and &*ptr = address of a address of a ) 
return 0;
}
