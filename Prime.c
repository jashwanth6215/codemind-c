#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
        
    }
    if(c==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}