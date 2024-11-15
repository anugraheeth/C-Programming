#include<stdio.h>
int main()
{
    int a=4,b=3,c=7;
    printf("\nA = %d\nB = %d\nC = %d",a,b,c);
    if(a>b && a>c)
        printf("\n A is Greatest");
    else if(b>a && b>c)
        printf("\n B is Greatest");
    else
        printf("\n C is Greatest");
}