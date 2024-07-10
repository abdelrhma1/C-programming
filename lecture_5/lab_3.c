/*Write a C code that ask the user to enter 10
values and save them in an array using a for
loop. The code then apply the bubble sorting
algorithm and then print the values after
sorting.*/
#include<stdio.h>
int main()
{
    int arr[10];
    int swap,i,x;
        for(int i=0;i<10;i++)
    {
        printf("Please Enter number_%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for( i=0;i<9;i++)
    {
        for(x=0;x<(9-i);x++)
        {
          if(arr[x]>arr[x+1])
          {
              swap=arr[x];
              arr[x]=arr[x+1];
              arr[x+1]=swap;
          }
        }
    }
      for( i=0;i<10;i++)
    {
        printf("->%d\n",arr[i]);
    }
}