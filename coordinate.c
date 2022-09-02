// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("\nInput the x and y coordinate\n");
//     scanf("%d %d", &a, &b);
//     if (a > 0 && b > 0)
//     {
//         printf("\n%d,%d are in first quadrant\n",a,b);
//     }
//     if (a < 0 && b > 0)
//     {
//         printf("\n%d,%d are in second quadrant\n",a,b);
//     }
//     if (a < 0 && b < 0)
//     {
//         printf("%d,%d are in third quadrant\n",a,b);
//     }
//     if (a > 0 && b < 0)
//     {
//         printf("%d,%d are in fourth quadrant\n",a,b);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
float math,phy,chem,total,total1;
printf("\nEnter the marks of math:");
scanf("%f",&math);
printf("\nEnter the marks of phy:");
scanf("%f",&phy);
printf("\nEnter the marks of chem:");
scanf("%f",&chem);
total=math+phy+chem;
total1=math+phy;
printf("\ntotal marks of all 3 subjects:%.1f",total);
printf("\ntotal marks in math and physics:%.1f",total1);
if(math>=65&&phy>=55&&chem>=50&&total>=190&&total1>=140)
{
    printf("\nCandidate is eligible\n");
}
else
{
    printf("candidate is not eligible");
}


    return 0;
}