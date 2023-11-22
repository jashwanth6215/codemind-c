#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%i%i",&a,&b);
    x=(500-(a*2)+(1000-((a+b)*4)));
    y=(1000-(b*4)+(500-((b+a)*2)));
    if (x<y)
    {
        printf("%i",y);
    }
    else
    {
        printf("%i",x);
    }
    
}