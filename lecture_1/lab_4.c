#include <stdio.h>
/* in this code use operations like
(and-or-xor-shift left-shift right)*/
int main()
{
    int x=7;
    int y=4;
    printf("X & Y= %d\n",x&y);
    printf("-----------/\n");
    printf("X | Y= %d\n",x|y);
    printf("-----------/\n");
    printf("X ^ Y= %d\n",x^y);
    printf("-----------/\n");
    printf("X >> 1= %d\n",x>>1);
    printf("-----------/\n");
    printf("Y << 2= %d\n",y<<2);
}