#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%i%i%i%i",&a,&b,&c,&d);
    if((a-2*c) > 0 && (b-2*c) > 0)
    {
        printf("%i",((a*b)-(a-2*c)*(b-2*c))*d);
    }
    else 
    {
        printf("Impossible");
    }
}