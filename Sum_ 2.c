#include<stdio.h>
int main()
{
    int a,b,x,y;
    int sum=0;
    scanf("%i%i%i%i",&a,&b,&x,&y);
    for(int i=a;i<=b;i++)
    {
        if(i%x==0 && i%y!=0)
        {
            sum+=i;
        }
    }
    printf("%i",sum);
}
