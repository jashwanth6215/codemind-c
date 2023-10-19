#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    if((a+b)>=11)
    {
        printf("%i",21-(a+b));
    }
    else
    {
        printf("-1");
    }
}