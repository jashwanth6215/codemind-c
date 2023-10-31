#include<stdio.h>
int main()
{
    int n,i;
    scanf("%i",&n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%i ",i);
        }
    }
}