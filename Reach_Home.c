#include<stdio.h>
int main()
{
    int x,y;
    scanf("%i%i",&x,&y);
    if ((x*5)%y==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}