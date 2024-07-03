#include<stdio.h>
/*Write a program in C to display the
multiplication table of a given integer by using while loop.*/
void main()
{
    int x=0,z=0,y=0;
    
    printf("Enter the number to display mulitplication table: ");
    scanf("%d",&x);
    while(y!=x)
    {
        y++;
       z=x*y;
       printf("%dx%d=%d\n",x,y,z);
     
     
    }

}