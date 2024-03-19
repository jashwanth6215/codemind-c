#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",&s);
    int n=strlen(s);
    int i=0,j=n-1;
    while(i<j)
    {
        if(s[i++]!=s[j--])
        {
           printf("Not Palindrome");
           return 0;
        }
    }
    printf("Palindrome");
}