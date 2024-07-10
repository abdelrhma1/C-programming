/*Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then ask the user to enter a value to search about, if the
value existing in the 10 values, the program will print “Value Found”. If the
value is not exist, the program will print “Value Not Exist”. Use Binary
Searching Algorithm.*/
#include<stdio.h>
int main()
{
    int arr[10];
    int swap=0;
    int start=0,middle,end=9,search=0,index=0;
    for(int z=0;z<10;z++)
    {
        printf("Enter number_%d: ",z+1);
        scanf("%d",&arr[z]);
    }
    for(int i=0;i<9;i++)
    {
        for(int x=0;x<(9-i);x++)
        {
            if(arr[x]>arr[x+1])
            {
                swap=arr[x];
                arr[x]=arr[x+1];
                arr[x+1]=swap;
            }
        }
    }
    printf("enter number want to search : ");
    scanf("%d",&search);
    while(start<=end)
    {
      middle=(start+end)/2;
       if(search==arr[middle])
       {
         printf("Value Found\n");
         index = 1;
         break; 
       }
       else if(search>arr[middle])
       {
        start=middle+1;
       }
       else if(search<arr[middle])
       {
        end=middle-1;
       }
    }
    if(index==0)
    {
        printf("Value not Founded\n");
    }
}