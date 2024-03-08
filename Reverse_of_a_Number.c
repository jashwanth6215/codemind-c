#include<stdio.h>
int main()
{
    int a,r,b=0;
    scanf("%i",&a);
    while(a!=0)
    {
        r=a%10;
        b=b*10+r;
        a/=10;
    }
    printf("%i",b);
}