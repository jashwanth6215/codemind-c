#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int h=1;h<=i;h++)
        {
            printf("%i ",a-i+1);
        }
        printf("\n");
    }
}
