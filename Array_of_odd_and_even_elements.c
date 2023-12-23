#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
        if(arr[i]%2!=0)
        {
            printf("%i ",arr[i]);
        }
    }
    for(int i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%i ",arr[i]);
        }
    }
    
}