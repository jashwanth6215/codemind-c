#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%[^
]", s);
    int n=strlen(s);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(isdigit(s[i]))
        {
        sum += s[i] - '0';
        }
    }
    printf("%i",sum);
}