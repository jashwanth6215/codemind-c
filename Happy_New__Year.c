#include<stdio.h>
int main()
{
    int h,m;
    scanf("%i%i",&h,&m);
   int b=h*60+m;
    printf("%i",1440-b);
}