#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    int mat1[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%i",&mat1[i][j]);
        }
    }
    int r,c;
    scanf("%i%i",&r,&c);
    int mat2[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%i",&mat2[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            mat1[i][j]+=mat2[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%i ",mat1[i][j]);
        }
        printf("
");
    }
}