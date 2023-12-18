#include<stdio.h>
int main()
{
	int a;
	scanf("%i",&a);
	int arr[a];
	for(int i=0;i<a;i++)
	{
		scanf("%i",&arr[i]);
	}
	int min=arr[0];
	for(int i=1;i<a;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("%i",min);
}