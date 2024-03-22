#include<stdio.h>
int main()
{
    int r,c;
    int even=0,odd=0;
    scanf("%i%i",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%i",&mat[i][j]);
            if(mat[i][j]%2==0)
            {
                even+=mat[i][j];
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]%2!=0)
            {
                odd+=mat[i][j];
            }
        }
    }
    printf("%i %i",even,odd);
}