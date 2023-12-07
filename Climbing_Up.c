#include<stdio.h>
int main()
{
    int x,y;
    scanf("%i%i",&x,&y);
    if(x%y==0)
    {
        printf("%i",x/y);
    }
    else
    {
        printf("%i",(x/y)+(x%y));
    }
}