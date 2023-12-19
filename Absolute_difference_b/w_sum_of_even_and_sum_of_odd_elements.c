#include<stdio.h>
#include<math.h>
int main()
{
    int a,even=0,odd=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
        if((arr[i])%2==0)
        {
            even+=arr[i];
        }
    }
    for(int i=0;i<a;i++)
    {
        if((arr[i])%2!=0)
        {
            odd+=arr[i];
        }
    }
    printf("%i",abs(even-odd));
}