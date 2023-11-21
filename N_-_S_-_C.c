#include<stdio.h>
int main()
{
    int a,b;
    scanf("%i%i",&a,&b);
    for(int i=(a+1);i<=(b-1);i++)
    {  
        printf("%i %i %i
",i,i*i,i*i*i);
    }
}