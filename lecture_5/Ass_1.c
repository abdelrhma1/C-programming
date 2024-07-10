/*Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then print the minimum and the maximum of the values.*/
#include<stdio.h>
int main()
{
   int arr[10];
   int swap;
   for(int i=0;i<10;i++)
   {
    printf("Enter number_%d: ",(i+1));
    scanf("%d",&arr[i]);
   } 
   for(int z=0;z<9;z++)
   {
    for(int x=0;x<(9-z);x++)
    {
        if(arr[x]>arr[x+1])
        {
           swap=arr[x];
           arr[x]=arr[x+1];
           arr[x+1]=swap;
        }
    }
   }
   printf("The maxmum number of array is: %d\n",arr[9]);
   printf("The minimum number of array is: %d\n",arr[0]);
   
}   