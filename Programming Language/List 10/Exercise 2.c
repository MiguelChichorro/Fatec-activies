#include <stdio.h>
#include <string.h>

int main()
{
	float x = 2.0, y = 3.5;
	float *p = &x, *q = &y;

	printf("%.1f\n", *p * *q);
	return 0;
}
