#include<stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        
        printf("%i ",c);
          
        a=b;
        b=c;
        c=a+b;
    }
}