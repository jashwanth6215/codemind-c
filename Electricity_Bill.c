#include<stdio.h>
int main()
{
    int u;
    scanf("%i",&u);
    float cpu,b,s,t;
    if(u<=199)
    {
        cpu=1.20;
        s=0.00;
    }
    else if(u>=200 && u<400)
    {
        cpu=1.40;
        
    }
    else if(u>=400 && u<600)
    {
        cpu=1.60;
    
    }
    else if(u>=600 && u<800)
    {
        cpu=1.80;
    }
    else
    {
        cpu=2.00;
    }
    b=cpu*u;
    if(b>400)
    {
        s=0.15*b;
    }
    t=b+s;
    printf("Units Consumed: %i
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,cpu,b,s,t);
    
}