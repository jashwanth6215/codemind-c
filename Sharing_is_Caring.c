#include<stdio.h>
int main()
{
    int n,x;
    scanf("%i%i",&n,&x);
    if(((x*(x+1))/2)>n)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
}