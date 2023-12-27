#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[101];
    char max=s[0];
    scanf("%[^
]", s);
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        if(max<s[i])
        {
            max=s[i];
        }
    }
    printf("%c",max);
}