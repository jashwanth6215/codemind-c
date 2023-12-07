#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%i",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%i",&arr[n]);
        sum+=arr[n];
    }
    printf("%i",sum);
}