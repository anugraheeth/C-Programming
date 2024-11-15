#include<stdio.h>
int main()
{
    int a=5,b=8;
    printf("A = %d\nB = %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped =>\n");
    printf("A = %d\nB = %d\n",a,b);
}