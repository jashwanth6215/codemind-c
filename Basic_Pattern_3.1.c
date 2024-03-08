#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}