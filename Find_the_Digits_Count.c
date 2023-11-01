#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%i",&n);
    while(n!=0)
    {
        n=n/10;
        count = count +1;
    }
    printf("%i",count);
}