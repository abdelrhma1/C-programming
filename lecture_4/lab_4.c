#include<stdio.h>
/*Write C code implement a function to swap 2
global variables.*/
int x,y;
void swap()
{
    int z=x;
        x=y;
        y=z;
    
}
int main()
{
  printf("Enter frist number: ");
  scanf("%d",&x);
  printf("Enter second number: ");
  scanf(" %d",&y);
  printf("X before swap : %d\n",x);
  printf("Y before swap: %d\n",y);
  swap();
  printf("-------------------------->\n");
  printf("X after swap : %d\n",x);
  printf("Y after swap: %d\n",y);
}