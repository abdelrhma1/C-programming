#include <stdio.h>
/*Write a code that will ask the user to enter 3
numbers, the program will print the maximum
number of them.*/
int main ()
{
    int x1,x2,x3;
    printf("Enter number_1 : ");
    scanf("%d",&x1);
    printf("Enter number_2 : ");
    scanf("%d",&x2);
    printf("Enter number_3: ");
    scanf("%d",&x3);
    if (x1>=x2&&x1>=x3)
    {
        printf("the maxmum number is : %d\n",x1);
    }
    else if(x2>=x3&&x2>=x1)
    {
       printf("the maxmum number is : %d\n",x2);
    }
    else 
    {
       printf("the maxmum number is : %d\n",x3);
    }
}