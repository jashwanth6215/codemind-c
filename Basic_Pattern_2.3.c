#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%i",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c ",'A'+j);
        }
        printf("
");
    }
}