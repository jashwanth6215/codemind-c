#include<stdio.h>
int main ()
{
      int a,b;
      scanf("%i%i",&a,&b);
      int c,s,r=0;
      for (int i=a;i<=b;i++)
      {
          c = 0;
          s = 0;
          int t = i;
          while ( t != 0)
          {
              r = t % 10;
              t /= 10;
              c++;
              if ( r == 0)
              {
                  break;
              } 
              else 
              {
                  if (i%r==0)
                  {
                      s++;
                  }
              }
          } 
          if (c==s)
          {
                printf("%i ",i);
          }
     }
  }
