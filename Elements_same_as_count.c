#include <stdio.h>
int main() 
{
	int a; 
	scanf("%i", &a);
	int arr[a];
	for (int i=0;i<a;i++) 
	{
		scanf("%i", &arr[i]);
	}
	int flag = 0;
	for (int i=0;i<a;i++)
	{
		int occ = 0;
		int visited = 0;
		for (int j = 0; j < a; j++)
		{
			if (j < i && arr[i] == arr[j])
			{
				visited = 1;
				break;
			}
			if (arr[i] == arr[j]) 
			{
			    occ++;
			}
		}
		if (visited == 0 && arr[i] == occ)
		{
			printf("%d ", arr[i]);
			flag = 1;
		}
	}
	if (flag == 0) 
	{
	    printf("-1");
	}

}
 