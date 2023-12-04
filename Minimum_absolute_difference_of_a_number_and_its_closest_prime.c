#include <stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%i", &n);
	int np = n;
	while (1)
	{
		int fc = 0;
		for (int i = 1; i <= np; i++)
		{
			if (np % i == 0) fc++;
		}
		if (fc == 2) {
			break;
		}
		else {
			np++;
		}
	}

	
	
	int pp = n;
	while (1)
	{
		int fc = 0;
		for (int i = 1; i <= np; i++)
		{
			if (pp % i == 0) fc++;
		}
		if (fc == 2) {
			break;
		}
		else {
			pp--;
		}
	}
	
	if((abs(pp-n)>abs(np-n)))
	{
		printf("%i",abs(np-n));
	}
	else if ((abs(pp-n)<=abs(np-n)))
	{
		printf("%i",abs(pp-n));
	}
	
}