#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%i%i%i%i",&a,&b,&c,&d);
    printf("%i",(a-b)*c>(a-b)*d?(b*c)+(a-b)*d:(b*c)+(a-b)*c);
}