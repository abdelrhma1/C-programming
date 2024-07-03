#include<stdio.h>
/*Write a program in C to calculate the
factorial of an integer entered by the
user using while loop*/
void main()
{
    int x=0,z=1;
    printf("Enter an integer: ");
    scanf("%d",&x);
    do
    { 
      z*=x;
      x--; 
    } while (x!=1);
    printf("Factorial=%d\n",z);
    
}