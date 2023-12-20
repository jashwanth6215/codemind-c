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
    for(int i=1;i<a;i++)
    {
        if(arr[i]%2==0 && arr[(i-1)]%2!=0 && arr[(i+1)]%2!=0)
        {
            c++;
        }
    }
    printf("%i",c);
}