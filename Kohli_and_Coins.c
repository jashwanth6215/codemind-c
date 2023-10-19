#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    if (a%10==0)
    {
        printf("%i",a/10);
    }
    else if (a%5==0)
    {
        printf("%i",(a/10)+1);
    }
    else
    {
        printf("-1");
    }
}