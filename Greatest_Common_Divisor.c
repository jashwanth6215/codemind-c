#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    for(int i=((a-b)>0?a:b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%i",i);
            break;
        }
    }
}
