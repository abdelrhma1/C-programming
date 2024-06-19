#include <stdio.h>
/*Write a code that takes 2 numbers and print their
summation, subtraction, anding, oring, and Xoring*/
int main()
{
    int a,b;
    printf("Please Enter number_a:");
    scanf("%d",&a);
    printf("Please Enter number_b:");
    scanf("%d",&b);
    printf("a + b= %d\n",a+b);
    printf("-----------/\n");
    printf("a - b= %d\n",a-b);
    printf("-----------/\n");
    printf("a & b= %d\n",a&b);
    printf("-----------/\n");
    printf("a | b= %d\n",a|b);
    printf("-----------/\n");
    printf("a ^ b= %d\n",a^b);
    
}