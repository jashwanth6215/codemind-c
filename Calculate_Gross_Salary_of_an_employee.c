#include<stdio.h>
int main()
{
    float s,h,d,pf;
    scanf("%f%f%f",&s,&h,&d);
    pf=s*0.12;
    printf("%.2f
",pf);
    printf("%.2f",pf+s+h+d);
}