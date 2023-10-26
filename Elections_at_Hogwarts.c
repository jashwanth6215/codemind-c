#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%i%i%i",&x,&y,&z);
    printf("%s",x>50?"Gryffindor":y>50?"Slytherin":z>50?"Hufflepuff":"NOTA");
}