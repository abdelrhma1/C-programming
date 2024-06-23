#include <stdio.h>
/*Write a C code to ask the user to enter his
grade and the program will print his rating.
0 <= grade < 50 ------> Failed
50 <= grade < 65 ------> Normal
65 <= grade < 75 ------> Good
75 <= grade < 85 ------> Very Good
85 <= grade
------> Excellent*/
int main()
{
    int x;
    printf("Enter your number:");
    scanf("%d",&x);
    if(x<50)
    {
        printf("your rating is Failed\n");
    }
    else if(x<65)
    {
         printf("your rating is Normal\n");
    }
     else if(x<75)
    {
         printf("your rating is Good\n");
    }
     else if(x<85)
    {
         printf("your rating is very Good\n");
    }
     else 
    {
         printf("your rating is Excellent\n");
    }
    return 0;
} 
