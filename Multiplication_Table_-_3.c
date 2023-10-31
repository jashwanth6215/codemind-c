#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%i%i%i",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        printf("%i x %i = %i
",n,i,n*i);
    }
}