#include<stdio.h>
/*Write a login program in C that ask the
user to enter his ID and his password, if
the ID is correct the system will ask the
user to enter his password up to 3 times,
if he enters the password right the
systems welcomes him, if the three times
are incorrect, the system print No more
tries. If the user ID is incorrect the
system print You are not registered
User   ID   Password
Ahmed 1234   7788
Amr   5678   5566
Wael  9870   1122 */
void main()
{
    int id=0,pass=0;
    printf("Please enter your ID: ");
    scanf("%d",&id);
    switch(id)
    {
        case 1234:printf("Please enter your passward: ");
                  scanf("%d",&pass);
                  if(pass==7788)
                  {
                  printf("Welcome Ahmed\n");
                  }
                  else if(pass!=7788)
                  {
                     for(int i=0;i<2;i++)
                     {
                        printf("Try again : ");
                        scanf("%d",&pass);
                         if(pass==7788)
                         {
                            printf("Welcome Ahmed\n");
                            break;
                         }
                         else if(i==1)
                         {
                           printf("incorrect passward for 3 times,no more tries\n");
                         }
                     }
                     
                  }break;
        case 5678:printf("Please enter your passward: ");
                  scanf("%d",&pass);
                  if(pass==5566)
                  {
                  printf("Welcome Amr\n");
                  }
                  else if(pass!=7788)
                  {
                     for(int i=0;i<2;i++)
                     {
                        printf("Try again : ");
                        scanf("%d",&pass);
                         if(pass==5566)
                         {
                            printf("Welcome Amr\n");
                            break;
                         }
                         else if(i==1)
                         {
                           printf("incorrect passward for 3 times,no more tries\n");
                         }
                     }
                     
                  }break;
        case 9870:printf("Please enter your passward: ");
                  scanf("%d",&pass);
                  if(pass==1122)
                  {
                  printf("Welcome Weal\n");
                  }
                  else if(pass!=1122)
                  {
                     for(int i=0;i<2;i++)
                     {
                        printf("Try again : ");
                        scanf("%d",&pass);
                         if(pass==1122)
                         {
                            printf("Welcome Weal\n");
                            break;
                         }
                         else if(i==1)
                         {
                           printf("incorrect passward for 3 times,no more tries\n");
                         }
                     }
                     
                  }break;
                  
                  default:printf("you are not registered\n");
    }
} 