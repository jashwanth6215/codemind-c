#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
   if(a+b>a+c && a+b>b+c)
   {
       printf("%i",a+b);
   }
   else if(b+c>a+b && b+c>a+c)
   {
       printf("%i",b+c);
   }
   else
   {
       printf("%i",a+c);
   }
}