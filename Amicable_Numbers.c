#include<stdio.h>
int main()
{
    int a,b,d=0,c=0;
    scanf("%i%i",&a,&b);
    for(int i=1;i<a;i++)
    {
        if(a%i==0)
        {
        c+=i;
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b%i==0)
        {
        d+=i;
        }
    }
    if(a==d&&b==c)
    {
        printf("Amicable");
        
    }
    else
    {
        printf("Not Amicable");
    }
    
}