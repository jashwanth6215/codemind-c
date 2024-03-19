#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int sum=0;
    char s[101];
    scanf("%s",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(isdigit(s[i]))
        {
            sum+=s[i]-'0';//subrecting 0 because removing 0 from no. string
        }
    }
    printf("%i",sum);
}