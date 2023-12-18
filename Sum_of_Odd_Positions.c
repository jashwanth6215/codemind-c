#include<stdio.h>
int main()
{
    int a,odd=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
        if(i%2!=0)
        {
            odd+=arr[i];
        }
    }
    printf("%i",odd);
    
}