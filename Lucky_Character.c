#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%[^
]",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(isalpha(s[i]))
        {
             printf("%c",s[6]);
             break;
        }
    }
}