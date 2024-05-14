#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    for(int i=a;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",i);
        }
        for(int k=1;k<=a-i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
