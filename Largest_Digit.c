#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    int r,b=0;
    while(a!=0)
    {
        r=a%10;
        b=(r>b)?r:b;
        a/=10;
    }
    printf("%i",b);
}
