#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%i",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%i",&arr[i]);
    } int E;
    scanf("%d", &E);
    
    for (int i = 0; i < a; i++)
    {
        if(arr[i]==E)
        {
            c++;
        }
    }
    printf("%i",c);
}