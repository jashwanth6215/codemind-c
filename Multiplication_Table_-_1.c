#include<stdio.h>
int main()
{
    int i,n;
    scanf("%i",&i);
    for(n=1;n<=12;n++)
    {
        printf("%i x %i = %i
",i,n,i*n);
    }
}