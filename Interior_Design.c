#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2;
    scanf("%i%i%i%i",&X1,&Y1,&X2,&Y2);
    if (X1+Y1<X2+Y2)
    {
        printf("%i",(X1+Y1));
    }
    else
    {
        printf("%i",(X2+Y2));
    }
}