#include<stdio.h>
int main()
{
    int a,c=1;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
        if(i%2!=0 && arr[i]%2==0)
        {
                c = 0;
        }
    }
    if(c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}