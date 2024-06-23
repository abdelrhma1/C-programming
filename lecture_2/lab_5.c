#include <stdio.h>
/*Login System:
Write a C code that ask the user to enter his ID and
then the program will print his name.
Available IDs are:
1234-> Ahmed
5678 -> Youssef
1145 -> Mina
Any other number, the program will print Wrong ID*/
int main()
{
    int x;
    printf("Please Enter your ID : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1234:printf("Welcome Ahmed\n");break;
        case 5678:printf("Welcome Youssef\n");break;
        case 1145:printf("Welcome Mina\n");break;
        default:printf("Wrong ID\n");break;
    }
    return 0;
}