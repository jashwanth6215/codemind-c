#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a;
    scanf("%i",&a);
    while(a!=0)
    {
        int c=0;
    char s[101];
    scanf("%s",&s);
    int n=strlen(s);
    for(int i=0;i<=n;i++)
    {
        if(isdigit(s[i]))
        {
           c=1;
        }
    }
     if(c==1)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    a--;
    }
    
}