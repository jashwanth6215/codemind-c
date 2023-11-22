#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    if((a-b)%(2*c)==0)
    {
        printf("YES");
    }
    
    else
    {
        printf("NO");
    }
}