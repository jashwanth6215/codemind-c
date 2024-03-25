#include<stdio.h>
#include<math.h>
int square(int n)
{
    return n*n;
}
int main()
{
    int a;
    int sum=0,ssum=0;
    scanf("%i",&a);
    for(int i=1;i<=a;i++)
    {
        sum+=i;
        ssum+=square(i);
    }
    printf("%i",abs((sum*sum)-ssum));
}
