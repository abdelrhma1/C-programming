#include <stdio.h>
/*Write a C code that ask the user to enter 10
numbers, then ask him to enter another number
to search on it in the 10 numbers and print its
location in case it is found.
In case the number is not found, it will print
number no exist do not using for loop*/
int main()
{
    int a,s,d,f,g,z,x,c,v,b,y;
    printf("Enter Number 1 : ");
    scanf("%d",&a);
    printf("Enter Number 2 : ");
    scanf("%d",&s);
    printf("Enter Number 3 : ");
    scanf("%d",&d);
    printf("Enter Number 4 : ");
    scanf("%d",&f);
    printf("Enter Number 5 : ");
    scanf("%d",&g);
    printf("Enter Number 6 : ");
    scanf("%d",&z);
    printf("Enter Number 7 : ");
    scanf("%d",&x);
    printf("Enter Number 8 : ");
    scanf("%d",&c);
    printf("Enter Number 9 : ");
    scanf("%d",&v);
    printf("Enter Number 10 : ");
    scanf("%d",&b);
    printf("Enter the value to search:");
    scanf("%d",&y);
    if (y==a)
    {
        printf("Value is exist at element number >>1\n");
    }
    else if (y==s)
    {
        printf("Value is exist at element number >>2\n");
    }
    else if (y==d)
    {
        printf("Value is exist at element number >>3\n");
    }
    else if (y==f)
    {
        printf("Value is exist at element number >>4\n");
    }
    else if (y==g)
    {
        printf("Value is exist at element number >>5\n");
    }
    else if (y==z)
    {
        printf("Value is exist at element number >>6\n");
    }
    else if (y==x)
    {
        printf("Value is exist at element number >>7\n");
    }
    else if (y==c)
    {
        printf("Value is exist at element number >>8\n");
    }
    else if (y==v)
    {
        printf("Value is exist at element number >>9\n");
    }
    else if (y==b)
    {
        printf("Value is exist at element number >>10\n");
    }
    return 0;
}