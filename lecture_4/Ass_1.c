#include<stdio.h>
/*Write a C program the implement 2 function:
1- Function to get the maximum of 4 values
2- Function to get the minimum of 4 values
The program will ask the user first to enter the 4 values, then print the maximum
number and minimum number of them.*/
int maxmum(int x1,int x2,int x3,int x4);
int minimum(int x1,int x2,int x3,int x4);
int main()
{
  int x1,x2,x3,x4;
  int max,min;
  printf("Enter frist number: ");
  scanf("%d",&x1);
  printf("Enter second number: ");
  scanf(" %d",&x2);
  printf("Enter third number: ");
  scanf(" %d",&x3);
  printf("Enter fourth number: ");
  scanf(" %d",&x4);
  max=maxmum(x1,x2,x3,x4);
  min=minimum(x1,x2,x3,x4);
  printf("\nThe maxmum number is: %d\n",max);
  printf("The minimum number is: %d\n",min);
}
int maxmum(int x1,int x2,int x3,int x4)
{
    int max;
    max=(x1>x2&&x1>x3&&x1>x4)?x1:(x2>x3&&x2>x4?x2:(x3>x4?x3:x4));
    return max;
}
int minimum(int x1,int x2,int x3,int x4)
{
   int min;
    min=(x1<x2&&x1<x3&&x1<x4)?x1:(x2<x3&&x2<x4?x2:(x3<x4?x3:x4));
    return min;
}