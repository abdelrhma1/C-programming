#include<stdio.h>
/*Write C code that ask will ask the user to
enter the result of 3 x 4, In case the user
entered correct answer the program will
print Thanks, otherwise the program will
print try again until the user enters the
correct answer*/
int main()
{
    int x=0;
    printf("Enter the result of 3 x 4 = ");
    scanf("%d",&x);
    while(x!=12)
    {
       printf("Not correct,Please try again: ");
       scanf("%d",&x);
    }
    printf("Thank you \n");
}