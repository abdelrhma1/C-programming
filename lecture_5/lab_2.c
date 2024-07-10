/*Write a C code that ask the user to enter 10
values and save them in an array using a for
loop. Then print the summation and the
average of the values entered.*/
#include<stdio.h>
int main()
{
    int sum=0,average=0;
    int arr[10];
    for (int i=0;i<10;i++)
    {
        printf("Please Enter number_%d: ",i+1);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    } 
    average=sum/10;
    printf("Sum of array element = %d\n",sum);
    printf("Average of array element = %d\n",average);
}