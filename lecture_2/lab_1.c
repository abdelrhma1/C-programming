#include <stdio.h>
/*Write a C code to print the false
value and the true value on GCC*/
int main() 
{
 int x=5,y=0,z,a;
z=x&&y;
a=x||y;
printf("the true value in GCC is :%d\n",a);
printf("the false value in GCC is :%d\n",z);
    return 0;
}