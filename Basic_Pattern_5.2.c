#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%i",j);
        }
        for(int h=1;h<=a-i;h++)
        {
            printf("*");
        }
        printf("\n");
    }
}
