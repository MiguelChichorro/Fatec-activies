#include <stdio.h>
#include <string.h>

int main()
{
	char x = 'A';
	char *p = &x;

	*p = *p + 3;
	printf("%c\n", x);
	return 0;
}
