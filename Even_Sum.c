#include<stdio.h>
int main()
{
    int a,sum=0;
   
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[a]);
        if((arr[a])%2==0)
        sum+=arr[a];
    }
    printf("%i",sum);
}