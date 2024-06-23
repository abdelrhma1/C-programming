#include <stdio.h>
/*Write a C code to calculate employee
salary in a week based on the his
working hours, hour rate is 50.
The program will ask the user to enter
the working hours, then it will print his
salary.
But if the working hours are less than 40
hours, a 10% deduction will be applied.*/
int main ()
{
  int x,y;
  printf("please Enter your working hours : ");
  scanf("%d",&x);
  if(x>=40)
  {
    printf("your salary is : %d\n",x*50);
  }
  if (x<40)
  {
    y=(x*50);
    y-=(y*0.1);
   printf("your salary is : %d\n",y);
  }
    return 0;
}