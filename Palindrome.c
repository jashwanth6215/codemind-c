#include<stdio.h>
int main()
{
    int n,b=0,r,t;
    scanf("%i",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    if(b==t)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}