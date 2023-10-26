#include<stdio.h>
int main()
{
    int x;
    scanf("%i",&x);
    if(x%3==0 && x%5==0)
    {
        printf("PlingPlang");
    }
     else if(x%3==0 && x%7==0)
    {
        printf("PlingPlong");
    }
     else if(x%3==0)
    {
       printf("Pling");
    }
    else if(x%5==0 && x%3==0)
    {
        printf("PlangPling");
    }
    else if(x%5==0 && x%7==0)
    {
        printf("PlangPlong");
    }
    else if(x%5==0)
    {
        printf("Plang");
    }
    else if(x%7==0 && x%3==0)
    {
        printf("PlongPling");
    }
    else if(x%7==0 && x%5==0)
    {
        printf("PlongPlang");
    }
    else if(x%7==0)
    {
        printf("Plong");
    }
    else
    {
        printf("%i",x);
    }
    
}