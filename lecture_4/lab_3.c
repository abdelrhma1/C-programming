#include<stdio.h>
/*Write C code that will ask the user to enter 2
numbers, then the main function will call a
function named Get_Max that takes the 2
values entered by the user then return the
maximum of them.
The main function then will print the
returned value*/
int Get_max(int x,int y);
int main()
{
    int x1,x2,max;
    printf("Enter the first number: ");
    scanf("%d",&x1);
    printf("Enter the second number: ");
    scanf(" %d",&x2);
   max=Get_max(x1,x2);
    printf("The maxmum number is: %d\n",max);
    
}
int Get_max(int x,int y)
{
   int max;
   max=(x>y)?x:y;
   return max;
}