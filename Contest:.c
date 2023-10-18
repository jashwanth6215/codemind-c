#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    if (a<=b+(c*2))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}