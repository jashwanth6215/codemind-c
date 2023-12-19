#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
        if(arr[i]%2==0)
        {
            c++;
        }
    }
    if(c==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}