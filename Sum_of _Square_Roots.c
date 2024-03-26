#include<stdio.h>
#include<math.h>
float square_root(int a)
{
    return sqrt(a);
}
int main()
{
    int a,b;
    float sum=0;
    scanf("%i%i",&a,&b);
    for(int i=a;i<=b;i++)
    {
        sum+=square_root(i);
    }
    printf("%.2f",sum);
}
