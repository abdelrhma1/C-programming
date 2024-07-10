/*Write a C code that ask the user to enter 10
values and save them in an array using a for
loop. Then print the values entered by the
user in reverse order using another for loop.*/
#include<stdio.h>
void main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        printf("Please Enter number_%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("The value in reversed order: \n");

     for(int x=9;x>=0;--x)
    {
        printf("->%d\n",arr[x]);
    }
}