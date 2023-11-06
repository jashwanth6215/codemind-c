#include<stdio.h>
int main()
{
    int m,n,c=0;
    scanf("%i%i",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(i%3==0 && i%2==0)
        {
            c++;
            
        }
    }
    printf("%i",c);
}