#include <stdio.h>
//test of ternary operator to print maxmum number.
int main()
{
   int x1,x2,x3,max;
   
   printf("Enter the frist value : ");
   scanf("%d",&x1);
   printf("Enter the second value : ");
   scanf("%d",&x2);
    printf("Enter the third value : ");
   scanf("%d",&x3);
  max=(x1>x2)&&(x1>x3)?x1:(x2>x3?x2:x3);
   printf("the max : %d\n",max);
   
}