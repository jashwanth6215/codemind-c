#include<stdio.h>
int main()
{
    int a;
    scanf("%i",&a);
    while(a!=0)
    {
        int x,y,z;
        scanf("%i%i%i",&x,&y,&z);
        if(y>=x+z)
        {
            printf("YES
");
        }
        else{
            printf("NO
");
        }
        a--;
    }
}