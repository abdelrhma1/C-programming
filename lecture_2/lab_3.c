#include <stdio.h>
/*Write a C code that ask the user
to enter a number and check if it
is Even or Odd number*/
int main ()
{
    int x;
    printf("Please Enter number : ");
    scanf("%d",&x);
    if ((x%2)==0)
    {
        printf("The Number is Even\n");
    }
    else
    {
         printf("The Number is odd\n");
    }
    return 0;
}