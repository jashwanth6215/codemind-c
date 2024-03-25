#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    scanf("%i",&a);
    for(int i=1;i<a-1;i++)
    {
        if(a%i==0)
        {
            sum+=i;
        }
    }
    if(sum>a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
