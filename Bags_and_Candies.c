#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%i%i%i",&n,&k,&m);
    if (n%(k*m)==0)
    {
        printf("%i",n/(k*m));
    }
    else if (n%(k*m)!=0)
    {
        printf("%i",(n/(k*m))+1);
    }
}