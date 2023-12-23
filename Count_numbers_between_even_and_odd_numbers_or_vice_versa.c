#include<stdio.h>
int main()
{
    int a,c=0,i;
    scanf("%i",&a);
    int arr[a];
    for( i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
    }
    for(i=1;i<a-1;i++)
    {
        int l=arr[i-1];
        int r=arr[i+1];
        if(l%2==0 && r%2!=0 || l%2!=0 && r%2==0)
        {
            c++;
        }
    }
    printf("%i",c);
}