#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
    }
    int x,y;
    scanf("%i%i",&x,&y);
    for(int i=0;i<a;i++)
    {
        if(arr[i]<x || arr[i]>y)
        {
            printf("%i ",arr[i]);
            c=1;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}