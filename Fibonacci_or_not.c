#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    int a=0,b=1,c=0;
    while(b<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(b==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
