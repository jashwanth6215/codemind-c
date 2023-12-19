#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
    }
    scanf("%i",&b);
    for(int i=0;i<a;i++)
    {
        if(arr[i]==b)
        {
            c = 1;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}