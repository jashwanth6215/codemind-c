#include<stdio.h>
int main()
{
    int a;
    float sum=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[a]);
        sum+=arr[a];
    }
    printf("%.2f",sum/a);
}