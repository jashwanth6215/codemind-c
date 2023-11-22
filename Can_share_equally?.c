#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    if(a%2!=0 || ((a == 0) && b % 2 != 0))
    {
        printf("NO");
        
    }
    else
    {
        printf("YES");
    }
}