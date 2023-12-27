#include<stdio.h>
int main()
{
    float b;
    scanf("%f",&b);
    float da,hra;
    if(b<=10000)
    {
        da=0.8*b;
        hra=0.2*b;
    }
    else if(b<=20000)
    {
        da=0.9*b;
        hra=0.25*b;
    }
    else if(b>20000)
    {
        da=0.95*b;
        hra=0.3*b;
    }
    printf("%.2f",b+da+hra);
}