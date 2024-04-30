#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=a;j>=i;j--)
        {
            printf("%i ",i);
        }
        printf("\n");
    }
}
