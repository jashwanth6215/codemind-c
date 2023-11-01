#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%i",&n);
    while(n!=0)
    {
        i=n%10;
        sum+=i;
        n=n/10;
    }
    printf("%i",sum);
}