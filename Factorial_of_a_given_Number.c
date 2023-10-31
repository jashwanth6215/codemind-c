#include<stdio.h>
int main()
{
    int i,n;
    scanf("%i",&n);
    int sum = 1;
    for(i=1;i<=n;i++)
    {
        
        sum = sum * i;
        
    }
    printf("%i",sum);
}