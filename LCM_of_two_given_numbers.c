#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    for(int i=1;i<=b;i++)
    {
        if(a*i%b==0)
        {
            printf("%i",a*i);
            break;
        }
    }
}