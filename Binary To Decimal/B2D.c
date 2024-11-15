#include<stdio.h>
int main()
{
    int Binary=11011;
    printf("\n%d",Binary);
    int a=1,ans=0;
    while(Binary!=0)
    {
        ans = ans + (Binary%10)*a;
        Binary = Binary / 10;
        a = a*2;
    }
    printf("\nDecimal is %d",ans);
}