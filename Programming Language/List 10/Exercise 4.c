#include <stdio.h>
#include <string.h>

int len(char *s)
{
	int cont = 0;

	while(*s)
	{
		cont++;
		s++;
	}
	
	return cont;
}

int main(void)
{	
	printf("%d\n", len("teste"));
	return 0;
}
