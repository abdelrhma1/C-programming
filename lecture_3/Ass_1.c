#include<stdio.h>
/*Write a C program that ask the user to
enter two numbers and print their
summation, this program should never
ends until the user close the window*/
void main()
{
    int x=0,y=0;
    while(1)
    {
        printf("Please enter frist number: ");
        scanf("%d",&x);
        printf("Please enter second number: ");
        scanf("%d",&y);
        printf("The summation is: %d \n\n",x+y);
    }
}