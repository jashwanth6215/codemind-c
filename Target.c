#include<stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%i%i%i%i",&a,&b,&c,&d);
    if(a>=10 && b>=10 && c>=10 && d>=10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}