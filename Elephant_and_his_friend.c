#include<stdio.h>
int main()
{
    int x;
    scanf("%i",&x);
    if(x<=5)
    {
        printf("1");
    }
    else if(x%5==0)
    {
        printf("%i",x/5);
    }
    else
    {
        printf("%i",(x/5)+1);
    }
}