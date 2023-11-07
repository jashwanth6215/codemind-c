#include<stdio.h>
int main()
{
    int n,b,r=0;
    scanf("%i",&n);
    while(n!=0)
    {
       b = n%10;
       r = r*10+b;
       n /= 10;
    }
      printf("%i",r);   
}