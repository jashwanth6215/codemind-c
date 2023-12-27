#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    int m=((a+b+c+d+e)/500)*100;
    if(m>=90)
    {
        printf("Grade A");
    }
    else if(m>=80)
    {
        printf("Grade B");
    }
    else if(m>=70)
    {
        printf("Grade C");
    }
    else if(m>=60)
    {
        printf("Grade D");
    }
    else if(m>=40)
    {
        printf("Grade E");
    }
    else if(m<40)
    {
        printf("Grade F");
    }
}