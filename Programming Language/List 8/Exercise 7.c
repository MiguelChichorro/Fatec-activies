#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int val;
	char v[] = "351";
	val = atoi(v);
	val = val * 2;
	printf("Valor: %d\n", val);
	return 0;
}
