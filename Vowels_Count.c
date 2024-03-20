#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int c=0;
    char s[101];
    scanf("%[^
]",&s);
    for(int i=0;i<strlen(s);i++)
    {
        tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u')
        {
            c++;
        }
    }
    printf("%i",c);
}