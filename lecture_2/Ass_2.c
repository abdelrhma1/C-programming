#include <stdio.h>
/*Write a C code that ask the user to enter his ID, if the ID is valid it will
ask the user to enter his password, if the password is correct the
program will print the user name, if the password is incorrect the
program will print Incorrect Password.
In case of not existing ID, the program will print Incorrect ID*/
//(ID=20200851),(passward=111);
int main ()
{
    int id,pass;
    printf("Enter your ID : ");
    scanf("%d",&id);
    if (id==20200851)
    {
        printf("Enter your passward : ");
        scanf("%d",&pass);
        if (pass==111)
        {
            printf("Welcome Eng:Abdulrahman Faawzy\n");
        }
        else 
        {
            printf("Your passward is not correct\n");
        }
    }
    else
    {
        printf("Incorrect ID \n");
    }
    return 0;
}