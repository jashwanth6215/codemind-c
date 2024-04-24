#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%i",&a);
    int t=a;
    int d=a;
    int c=0,r,b=0;
    while(t>0)
    {
        c++;
        t/=10;
    }
    while(a!=0)
    {
        r=a%10;
        b+=pow(r,c);
        c--;
        a/=10;
    }
   if(b==d)
   {
       printf("True");
   }
   else
   {
       printf("False");
   }
}
