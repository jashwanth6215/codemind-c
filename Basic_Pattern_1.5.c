#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%c ",'A'+i);
        }
        printf("
");
    }
}