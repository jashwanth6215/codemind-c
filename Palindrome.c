#include<stdio.h>
int main()
{
    int n,r,b=0,s;
    scanf("%i",&n);
    s=n;
    while(n!=0)
    {
        r=n%10;
        b=b*10+r;
        n/=10;
    }
    if(s==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}