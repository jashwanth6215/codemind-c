#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101];
    char s2[101];
    scanf("%s%s",s1,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}