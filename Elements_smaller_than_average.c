#include<stdio.h>
int main()
{
    int a,sum=0,c=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
        sum+=arr[i];
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]<=(sum/a))
        {
            c++;
        }
    }
    printf("%i",c);
}