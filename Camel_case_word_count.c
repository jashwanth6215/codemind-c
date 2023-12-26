#include<stdio.h>
#include<ctype.h>
int main()
{
    int c=1;
    char s[1001];
    scanf("%s", s);
    for(int i=0;s[i]!=NULL;i++)
    {
       if( isupper(s[i]) && i != 0)
        {
            c++;
        }
    }
    printf("%i",c);
}