#include<stdio.h>
int main()
{
    int count=0;
    int r,c;
    scanf("%i%i",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%i",&mat[i][j]);
        }
    }
    int target;
    scanf("%i",&target);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==target)
            {
                count++;
            }
        }
    }
    printf("%i",count);
}