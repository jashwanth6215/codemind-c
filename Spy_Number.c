#include<stdio.h>
int main()
{
    int n,r,b=0,v=1;
    scanf("%i",&n);
    while(n!=0)
    {
        r=n%10;
        b+=r;
        v*=r;
        n/=10;
    }
    if(v==b)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}