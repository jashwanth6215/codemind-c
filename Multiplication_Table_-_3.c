#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%i%i%i",&n,&a,&b);
    for(int i=a;i<=b;i++)
    {
        printf("%i x %i = %i
",n,i,n*i);
    }
}