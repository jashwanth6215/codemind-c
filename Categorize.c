#include<stdio.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a<150)
    {
        printf("The person is Dwarf.");
    }
    else if(a>150 && a<=165)
    {
        printf("The person is average heighted.");
    }
    else if(a>165 && a<=195)
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
}