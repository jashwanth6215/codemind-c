#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    for (int i=b;i>=a;i--)
    {
        printf("%i ",i);
    }
}