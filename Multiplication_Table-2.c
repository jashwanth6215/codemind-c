#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%i%i",&i,&r);
    for(n=1;n<=r;n++)
    {
        printf("%i x %i = %i
",i,n,i*n);
    }
}