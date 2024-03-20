#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int c=0;
    char s[101];
    scanf("%[^
]",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            c++;
        }
    }
    printf("%i",c);
}