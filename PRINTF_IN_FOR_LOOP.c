#include<stdio.h>
int main()
{
int i=1,j=1;
for(;i<3;printf("%d %d",i,j))  

/* and if we have already initialised variables so we can skip initialising expression of for loop as here we did , before first (; ) we haven't wrote initilising expression */

/* we can also skip increamenting and decreamenting expressing after second ; where we have wrote printf statement in this code, so we can skip that part and can increament or decreament inside the block of loop as here we have increamented i and j */

/* we can also write for loop in this way  [ for(; condition ;) ]  we can skip these parts by initialising the variable before and by increamenting the variable inside the block */ 

/* we can also print inside the for loop but ,in first itiration it will skip the 
 printing , here we printed i and j but because we have printed i j in loop
so starting value of i and j will skip and from next itiration value will print */

/* if we gives non 0 value non conditional expression like any number 1 to any number so that loop will become infinite loop  like this - for( int i=0; 2; i++) we did 2 in the place of condition so it will become infinite loop */
{
    i++;
    j++;
 
}
return 0;
}