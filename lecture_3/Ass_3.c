#include<stdio.h>
/*Write a c program that draw a pyramid of
stars with height entered by the user*/
void main()
{
    int x=0,s=0,p=0;
    printf("Please Enter the hight of the pyramids: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {  
      
        for(s=i;s<(x-1);s++)
        {
        printf(" ");
        }
        for(p=0;p<=(i+i);p++)
        {
        printf("*");
        }
        printf("\n");
    }
}