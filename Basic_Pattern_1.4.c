#include<stdio.h>
int main()
{
    int n,j,i;
    scanf("%i",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",'A'+j);
        }
        printf("
");
    }
}