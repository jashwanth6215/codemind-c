#include<stdio.h>
int main()
{
    int x;
    scanf("%i",&x);
    if (x%3==0)
    {
        printf("NORMAL");
    }
    else if (x%3==2)
    {
        printf("SMALL");
    }
    else if (x%3==1)
    {
        printf("HUGE");
    }
}