#include<stdio.h>
int main () {
	int n,even,odd;
	scanf("%d",&n);
	even=n%2==0?n/2:(n-1)/2;
	odd=n-even;
	printf("%d",2*even*odd);
}