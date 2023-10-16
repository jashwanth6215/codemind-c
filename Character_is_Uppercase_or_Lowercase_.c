#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if (ch >='A' && ch <='Z')
    {
        printf("uppercase alphabet
");
    }
    else if (ch >='a' && ch <='z')
    {
        printf("lowercase alphabet
");
    }
    else if (ch >= '1')
    {
        printf("not an alphabet
");
    }
}