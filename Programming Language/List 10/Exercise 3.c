#include <stdio.h>
#include <string.h>

void minimax(int v[], int n, int *min, int *max)
{
	*min = *max = v[0];

	for (int i = 1; i < n; i++)
	{
		if (*min > v[i])
		{
			*min = v[i];
		}
		else
		{
			if (*max < v[i])
			{
				*max = v[i];
			}
		}
	}
}

int main( )
{
	int v[5] = {26, 55, 89, 14, 77};
	int min, max;

	minimax(v, 5, &min, &max);
	printf("Min: %d\n", min);
	printf("Max: %d\n", max);

	return 0;
}
