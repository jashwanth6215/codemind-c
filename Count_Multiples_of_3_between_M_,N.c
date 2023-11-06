#include<stdio.h>
int main()
{
    int m,n,i,c=0;
    scanf("%i%i",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        c++;
    }
    printf("%i",c);
}