#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x=='V')
    {
        printf("Violet");
    }
     else if(x=='I')
    {
        printf("Indigo");
    }
    else if(x=='B')
    {
        printf("Blue");
    }
    else if(x=='G')
    {
        printf("Green");
    }
    else if(x=='Y')
    {
        printf("Yellow");
    }
    else if(x=='O')
    {
        printf("Orange");
    }
    else if(x=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}