#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i ",j);
        }
        printf("\n");
    }
}
