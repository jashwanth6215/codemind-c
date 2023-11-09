#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("%i ",i);
        }
    }
}