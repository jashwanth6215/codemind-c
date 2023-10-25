#include<stdio.h>
int main()
{
    int u;
    scanf("%i",&u);
    float cpu,b,s,t;
    if (u<=199)
    {
        cpu=1.20;
        
    }
    else if (u>=200 && u<400)
    {
        cpu=1.50;
    }
    else if (u>=400 && u<600)
    {
        cpu=1.80;
    }
    else
    {
        cpu=2.00;
    }
    b=cpu*u;
    if (b>400)
    {
        s=b*0.15;
    }
    else
    {
        s=100;
    }
    t=b+s;
    printf("%.2f",t);
}