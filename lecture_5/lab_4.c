/*Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then ask the user to enter a value to search about, if the value
existing in the 10 values, the program will print “Value Exists x times” where x
defines how many times the value exists. If the value is not exist, the program
will print “Value Not Exist”. Use Linear Searching Algorithm.*/
#include<stdio.h>
int main()
{
 int arr[10];
 int search,index=0;

    for(int i=0;i<10;i++)
    {
        printf("Please Enter number_%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter a value to search about it : ");
    scanf("%d",&search);
    for(int x=0;x<10;x++)
    {
       if(arr[x]==search)
       {
        index++;
       }
    }
    if(index>1)
    {
        printf("Value Exists %d times\n",index);
    }
    else
    {
        printf("Value Not Exist\n");
    }
}