#include<stdio.h>
#include<string.h>
int main()
{
    char s1[101];
    char s2[101];
    scanf("%[^
]",&s1);
    strcpy(s2,s1);
    printf("%s",s2);
}