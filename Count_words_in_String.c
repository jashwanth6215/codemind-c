#include<stdio.h>
#include<string.h>
int main()
{
    int c=1;
    char s[101];
    scanf("%[^
]",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%i",c);
}