#include <stdio.h>
/* make "calculator" 
by using--> do while and switch case and give option to repeat.*/
int main()
{
   int x1,x2;
   char op,end;
   do
   {
   printf("Enter first number : ");
   scanf("%d",&x1);
   printf("Enter first number : ");
   scanf(" %d",&x2);
   printf("Enter the operation(+,-,*,/): ");
   scanf(" %c",&op);
   switch(op)
   {
    case '+':printf("The sum = %d\n",x1+x2);break;
    case '-':printf("The sub = %d\n",x1-x2);break;
    case '*':printf("The multi = %d\n",x1*x2);break;
      case '/':
                if (x2 != 0) {
                    printf("The division = %d\n", x1 / x2);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
    default: printf("the opreation not found try again\n");break;
   }
   printf("Do you want to end? (Y to end, any other key to continue): ");
   scanf(" %c",&end); 
   } while ((end != 'y') && (end != 'Y'));
}
