#include<stdio.h>
int main() 
{
      int n;
      scanf("%i",&n);
      int s = n*n,r,sum=0;
      while (s!=0)
      {
          r=s%10;
          sum+=r;
          s/=10;
      } 
      if (sum==n)
      {
          printf("Neon Number");
      } 
      else 
      {
          printf("Not Neon Number");
      }
  }
