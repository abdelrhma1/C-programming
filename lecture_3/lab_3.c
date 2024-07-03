#include <stdio.h>
/*Write a program in C to read 10 numbers
from the user and find their summation and
average*/
int main()
{
 int x=0,i=0,z=0;
 float y=0.0;
 printf("Enter ten numbers\n");
 for(i;i<10;i++)
 {
    printf("number_%d: ",(i+1));
    scanf("%d",&x);
    z+=x;
 }
 y=(z/10.0);
 printf("the sumation is: %d\n",z);
 printf("the avarage is: %0.2f\n",y);
}