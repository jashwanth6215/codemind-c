#include<stdio.h>
int main()
{
    int r,c,sum=0;
    scanf("%i%i",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%i",&mat[i][j]);
            sum+=mat[i][j];
        }
    }
    printf("%i",sum);
}