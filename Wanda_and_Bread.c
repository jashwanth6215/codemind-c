#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%i%i%i",&a,&b,&c);
    if(a%b==0||c*b-1==a)
    {
        printf("YES");
    }
    else
    {
       printf("NO");   
    }
}